// decompiled from minidump by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1048) =====

//WARNING: Switch with 1 destination removed at 0x0800541c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xdb9a5273496ea7f) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 == -0x7199c79aaf72b640) {
                    pcVar2 = sym.msm_minidump_remove_region.cfi_jt;
                    goto code_r0x080033ec;
                }
                if (arg1 != -0x67fe3215eb8a2edf) goto code_r0x080053dc;
                pcVar2 = sym.md_buf_size_check.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt;
            }
            else if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
            }
            else if (arg1 == -0x53d6f75d15429b4c) {
                pcVar2 = sym.md_current_stack_notifer.cfi_jt;
            }
            else {
                if (arg1 != -0x3665993bd9dc93a6) goto code_r0x080053dc;
                pcVar2 = sym.md_ipi_stop.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt;
            }
        }
        else if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
code_r0x080033ec:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080053dc;
            }
            if (arg1 == -0x328b89b44f71a11d) {
                pcVar2 = sym.dump_bufinfo.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x080053dc;
                pcVar2 = sym.simple_open.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x2ac316d8df914f8) {
                if (arg1 != 0x2b3a43e29242445) {
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080053dc;
                    pcVar2 = sym.page_owner_call_site_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
                    goto code_r0x08003318;
                }
                pcVar2 = sym.init_module.cfi_jt;
                goto code_r0x080033ec;
            }
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
    }
    else if (arg1 < 0x3f4ce6250188cdb0) {
        if (arg1 < 0x201f5bfa371d25c7) {
            if (arg1 != 0xdb9a5273496ea7f) {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x080053dc;
                pcVar2 = sym.dma_buf_info_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
code_r0x08003318:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 9) {
                    return;
                }
                goto code_r0x080053dc;
            }
            pcVar2 = sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
        }
        else if (arg1 == 0x201f5bfa371d25c7) {
            pcVar2 = sym.md_dump_trace_buf.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt;
        }
        else if (arg1 == 0x3dc5ded41c889c15) {
            pcVar2 = sym.md_get_present_module.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt;
        }
        else {
            if (arg1 != 0x3e48e028d83f0c1a) goto code_r0x080053dc;
            pcVar2 = sym.get_dma_info.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
        }
    }
    else if (arg1 < 0x741b966c574d47b1) {
        if (arg1 == 0x3f4ce6250188cdb0) {
            if ((pcVar1 + -0x80034c0 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080053dc;
        }
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.md_current_stack_ipi_handler.cfi_jt;
        }
        else {
            if (arg1 != 0x6ef421323dbc2de8) goto code_r0x080053dc;
            pcVar2 = sym.msm_minidump_update_region.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x741b966c574d47b1) {
            if (arg1 == 0x7d57972cd3914fb1) {
                if ((pcVar1 + -0x80034e0 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080053dc;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080053dc;
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x080033ec;
        }
        pcVar2 = sym.msm_minidump_enabled.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080053dc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005430);
    (*pcVar1)();
}


// ===== sym.md_buf_size_check.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x08003420 (size 8) =====

void sym.md_buf_size_check.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,uint64_t param_2,uchar *param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.minidump_ftrace_dump & 1) == 0) {
        if (param_2 < 0x41001) {
            return;
        }
        _printk(0x8001d8e);
        obj.minidump_ftrace_dump = 0x1;
    }
    *param_3 = 1;
    return;
}


// ===== sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003428 (size 8) =====

int sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
              (ulong param_1,ulong param_2,int64_t *param_3,int64_t *param_4)

{
    uint32_t *puVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_3 == 0) {
        return 0;
    }
    puVar8 = param_3 + 1;
    uVar6 = *puVar8;
    if (uVar6 == 0) {
        uVar7 = 0;
code_r0x080095d8:
        bVar2 = uVar6 != 0;
        uVar10 = uVar7 * 8 + 0x75f5717b;
        uVar12 = uVar7 << 1;
        uVar11 = uVar10;
        uVar15 = uVar10;
    }
    else {
        if (param_3[2] == 0) {
            uVar7 = 1;
            goto code_r0x080095d8;
        }
        if (param_3[3] == 0) {
            uVar7 = 2;
        }
        else if (param_3[4] == 0) {
            uVar7 = 3;
        }
        else if (param_3[5] == 0) {
            uVar7 = 4;
        }
        else if (param_3[6] == 0) {
            uVar7 = 5;
        }
        else if (param_3[7] == 0) {
            uVar7 = 6;
        }
        else if (param_3[8] == 0) {
            uVar7 = 7;
        }
        else if (param_3[9] == 0) {
            uVar7 = 8;
        }
        else if (param_3[10] == 0) {
            uVar7 = 9;
        }
        else if (param_3[0xb] == 0) {
            uVar7 = 10;
        }
        else if (param_3[0xc] == 0) {
            uVar7 = 0xb;
        }
        else if (param_3[0xd] == 0) {
            uVar7 = 0xc;
        }
        else if (param_3[0xe] == 0) {
            uVar7 = 0xd;
        }
        else if (param_3[0xf] == 0) {
            uVar7 = 0xe;
        }
        else {
            uVar7 = 0xf;
            if (param_3[0x10] != 0) {
                uVar7 = 0x10;
            }
        }
        uVar12 = uVar7 * 2;
        uVar10 = uVar7 * 8 + 0x75f5717b;
        puVar8 = param_3 + 0x14;
        uVar15 = uVar10;
        uVar11 = uVar10;
        while( true ) {
            uVar12 = uVar12 - 3;
            uVar15 = *(puVar8 + -4) + uVar15;
            iVar3 = puVar8[-1] + uVar11;
            uVar10 = (uVar10 + uVar6) - uVar15 ^ (uVar15 >> 0x1c | uVar15 * 0x10);
            iVar4 = uVar15 + iVar3;
            uVar15 = iVar3 - uVar10 ^ (uVar10 >> 0x1a | uVar10 << 6);
            iVar3 = uVar10 + iVar4;
            uVar11 = iVar4 - uVar15 ^ (uVar15 >> 0x18 | uVar15 << 8);
            iVar4 = uVar15 + iVar3;
            uVar10 = iVar3 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
            iVar3 = uVar11 + iVar4;
            uVar15 = iVar4 - uVar10 ^ (uVar10 >> 0xd | uVar10 << 0x13);
            uVar10 = uVar10 + iVar3;
            uVar11 = uVar15 + uVar10;
            uVar15 = iVar3 - uVar15 ^ (uVar15 >> 0x1c | uVar15 << 4);
            if (uVar12 < 4) break;
            uVar6 = *puVar8;
            puVar8 = puVar8 + 0xc;
        }
        bVar2 = true;
    }
    puVar1 = *param_4 + param_4[2];
    iVar14 = param_4[1] - param_4[2];
    if (uVar12 == 1) {
code_r0x08009720:
        uVar15 = (uVar15 ^ uVar11) - (uVar11 >> 0x12 | uVar11 << 0xe);
        uVar10 = (*puVar8 + uVar10 ^ uVar15) - (uVar15 >> 0x15 | uVar15 * 0x800);
        uVar11 = (uVar10 ^ uVar11) - (uVar10 >> 7 | uVar10 * 0x2000000);
        uVar15 = (uVar11 ^ uVar15) - (uVar11 >> 0x10 | uVar11 * 0x10000);
        uVar10 = (uVar15 ^ uVar10) - (uVar15 >> 0x1c | uVar15 * 0x10);
        uVar10 = (uVar10 ^ uVar11) - (uVar10 >> 0x12 | uVar10 * 0x4000);
        uVar15 = (uVar10 ^ uVar15) - (uVar10 >> 8 | uVar10 * 0x1000000);
    }
    else {
        if (uVar12 == 2) {
code_r0x08009718:
            uVar11 = *(puVar8 + 4) + uVar11;
            goto code_r0x08009720;
        }
        if (uVar12 == 3) {
            uVar15 = puVar8[1] + uVar15;
            goto code_r0x08009718;
        }
    }
    if (puVar1 <= _segment.ehdr) {
        uVar6 = *0x8002000;
        if (0 < *0x8002000) {
            if (*_segment.ehdr != uVar15) {
                uVar9 = 0;
                do {
                    if (uVar6 - 1 == uVar9) goto joined_r0x080097f4;
                    iVar5 = uVar9 + 1;
                    uVar9 = uVar9 + 1;
                } while (_segment.ehdr[iVar5] != uVar15);
                if (uVar6 <= uVar9) goto code_r0x08009864;
            }
            iVar3 = scnprintf(puVar1,iVar14,"",param_2,uVar15,0);
            iVar5 = iVar3;
            goto code_r0x080098f4;
        }
        uVar6 = *0x8002000;
joined_r0x080097f4:
        if (_segment.ehdr + uVar6 < _segment.ehdr * 2) {
            *0x8002000 = *0x8002000 + 1;
            _segment.ehdr[uVar6] = uVar15;
        }
        else {
            iVar3 = ___ratelimit(obj.find_stack._rs,"");
            if (iVar3 != 0) {
                _printk(0x80020a7);
            }
        }
    }
code_r0x08009864:
    iVar3 = scnprintf(puVar1,iVar14,"",param_2,uVar15,uVar7);
    iVar5 = iVar3;
    if (!(bVar2 ^ 1U | iVar14 + -1 == iVar5)) {
        uVar6 = uVar7;
        piVar13 = param_3 + 1;
        do {
            uVar6 = uVar6 - 1;
            iVar4 = scnprintf(puVar1 + iVar3,iVar14 - iVar3,0x8001c5f,*piVar13);
            iVar3 = iVar4 + iVar3;
            iVar5 = iVar3;
            piVar13 = piVar13 + 1;
        } while (iVar14 + -1 != iVar5 && uVar6 != 0);
    }
code_r0x080098f4:
    param_4[2] = param_4[2] + iVar5;
    return iVar3;
}


// ===== sym.dump_bufinfo.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003430 (size 8) =====

ulong sym.dump_bufinfo.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(int64_t *param_1,ulong *param_2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t iVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar17 = *param_2;
    iVar6 = ww_mutex_lock(param_1[0x15],0);
    if (iVar6 != 0) goto code_r0x0800a0b0;
    iVar18 = param_1[1];
    iVar14 = 0x8001ead;
    if (param_1[0xf] != 0) {
        iVar14 = param_1[0xf];
    }
    iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"",*param_1,*(iVar18 + 0x40),*(iVar18 + 0x44),
                      *(iVar18 + 0x38),param_1[0xe],*(*(param_1[1] + 0x20) + 0x40),iVar14);
    iVar14 = piVar17[2];
    piVar17[2] = iVar14 + iVar6;
    if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
    iVar14 = param_1[0x15];
    while( true ) {
        uVar19 = *(iVar14 + 0x38);
        iVar6 = uVar19;
        while ((uVar19 & 1) != 0) {
            Yield();
            uVar19 = *(iVar14 + 0x38);
            iVar6 = uVar19;
        }
        DataMemoryBarrier(2,1);
        __rcu_read_lock();
        iVar18 = *(iVar14 + 0x48);
        if (iVar18 == 0) {
            uVar22 = 0;
        }
        else {
            uVar22 = *(iVar18 + 0x10);
        }
        iVar20 = *(iVar14 + 0x40);
        DataMemoryBarrier(2,1);
        if (*(iVar14 + 0x38) == iVar6) break;
        __rcu_read_unlock();
    }
    if (iVar20 != 0) {
        iVar14 = piVar17[1];
        iVar2 = piVar17[2];
        pcVar15 = *(*(iVar20 + 8) + 8);
        iVar13 = *piVar17;
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a30);
        uVar8 = (*pcVar15)(iVar20);
        pcVar15 = *(*(iVar20 + 8) + 0x10);
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a50);
        uVar9 = (*pcVar15)(iVar20);
        if ((*(iVar20 + 0x30) & 1) == 0) {
            pcVar15 = *(*(iVar20 + 8) + 0x20);
            if (pcVar15 != NULL) {
                __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar15,0x8000ab0);
                uVar19 = (*pcVar15)(iVar20);
                if ((uVar19 & 1) != 0) {
                    dma_fence_signal(iVar20);
                    goto code_r0x08009d34;
                }
            }
            uVar10 = 0x80020df;
        }
        else {
code_r0x08009d34:
            uVar10 = 0x8001ead;
        }
        iVar6 = scnprintf(iVar13 + iVar2,iVar14 - iVar2,"",uVar8,uVar9,uVar10);
        iVar14 = piVar17[2];
        piVar17[2] = iVar14 + iVar6;
        if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
    }
    if (0 < uVar22) {
        uVar19 = 0;
        do {
            iVar14 = *(iVar18 + uVar19 * 8 + 0x18);
            puVar1 = iVar14 + 0x38;
            uVar12 = *puVar1;
            if (uVar12 == 0) {
                uVar11 = 0;
            }
            else {
                do {
                    uVar11 = uVar12;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar3 = *puVar1;
                        uVar12 = uVar3;
                        if (uVar3 != uVar11) break;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                            *puVar1 = uVar11 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                } while ((uVar11 != uVar3) && (uVar11 = 0, uVar3 != 0));
            }
            if ((uVar11 + 1 | uVar11) < 0) {
                refcount_warn_saturate(puVar1,0);
            }
            if ((uVar11 != 0) && (iVar14 != 0)) {
                iVar20 = piVar17[1];
                iVar2 = piVar17[2];
                pcVar15 = *(*(iVar14 + 8) + 8);
                iVar13 = *piVar17;
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a70);
                uVar9 = (*pcVar15)(iVar14);
                pcVar15 = *(*(iVar14 + 8) + 0x10);
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a90);
                uVar10 = (*pcVar15)(iVar14);
                uVar8 = 0x8001ead;
                if ((*(iVar14 + 0x30) & 1) == 0) {
                    pcVar15 = *(*(iVar14 + 8) + 0x20);
                    if (pcVar15 == NULL) {
                        uVar8 = 0x80020df;
                    }
                    else {
                        __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar15,0x8000ab0);
                        uVar12 = (*pcVar15)(iVar14);
                        uVar8 = 0x80020df;
                        if ((uVar12 & 1) != 0) {
                            dma_fence_signal(iVar14);
                            uVar8 = 0x8001ead;
                        }
                    }
                }
                iVar6 = scnprintf(iVar13 + iVar2,iVar20 - iVar2,"",uVar9,uVar10,uVar8);
                iVar14 = piVar17[2];
                piVar17[2] = iVar14 + iVar6;
                if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar11 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar11 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar11 == 1) {
                    DataMemoryBarrier(2,1);
                    dma_fence_release(puVar1);
                }
                else if (uVar11 < 1) {
                    refcount_warn_saturate(puVar1,3);
                }
            }
            uVar19 = uVar19 + 1;
        } while (uVar19 != uVar22);
    }
    __rcu_read_unlock();
    iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"");
    iVar18 = piVar17[1];
    iVar14 = piVar17[2] + iVar6;
    piVar17[2] = iVar14;
    if (iVar14 != iVar18 + -1) {
        piVar16 = param_1 + 2;
        piVar21 = *piVar16;
        if (piVar16 == piVar21) {
            iVar6 = 0;
        }
        else {
            iVar6 = 0;
            do {
                iVar20 = piVar21[-1][0xe];
                if (iVar20 == 0) {
                    iVar20 = *piVar21[-1];
                }
                iVar7 = scnprintf(*piVar17 + iVar14,iVar18 - iVar14,"",iVar20);
                iVar18 = piVar17[1];
                iVar14 = piVar17[2] + iVar7;
                piVar17[2] = iVar14;
                if (iVar14 == iVar18 + -1) goto code_r0x0800a0b0;
                piVar21 = *piVar21;
                iVar6 = iVar6 + 1;
            } while (piVar16 != piVar21);
        }
        ww_mutex_unlock(param_1[0x15]);
        iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"",iVar6);
        iVar14 = piVar17[2];
        piVar17[2] = iVar14 + iVar6;
        if (iVar14 + iVar6 != piVar17[1] + -1) {
            *(param_2 + 2) = *(param_2 + 2) + 1;
            param_2[3] = param_2[3] + *param_1;
            return 0;
        }
    }
code_r0x0800a0b0:
    _printk(0x8001fc5);
    return 0xffffffe4;
}


// ===== sym.init_module.cfi_jt @ 0x08003438 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.msm_minidump_get_available_region.cfi_jt @ 0x08003440 (size 8) =====

int sym.msm_minidump_get_available_region.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.is_rm_minidump == 0x0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mdt_lock);
        iVar1 = 0xc9 - _segment.ehdr;
        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar2);
    }
    else {
        iVar1 = gh_rm_minidump_get_info();
        if (iVar1 < 0) {
            _printk(0x8001ae3,iVar1);
        }
    }
    return iVar1;
}


// ===== sym.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt @ 0x08003448 (size 8) =====

uint64_t sym.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    code cVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong *in_x18;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    code *pcVar19;
    int *piVar20;
    int *piVar21;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = param_1 + 0x10;
    uStack_70 = 0;
    iVar7 = of_device_is_compatible(*(param_1 + 0x300),0x8001a56);
    obj.is_rm_minidump = iVar7 != 0;
    if (iVar7 == 0) {
        piVar20 = qcom_smem_get(0xffffffff,0x25a,&uStack_70);
        if ((piVar20 == NULL) || (0xfffffffffffff000 < piVar20)) {
            _printk(0x8001131);
            goto code_r0x080052e4;
        }
        if (*piVar20 == 0) {
            _printk(0x8000bd3);
            piVar20 = 0xffffffed;
            goto code_r0x080052e4;
        }
        piVar13 = devm_kmalloc(iVar10,0x25d0,0xdc0);
        _segment.ehdr = piVar13;
        if (piVar13 != NULL) {
            piVar13[2] = piVar20;
            piVar21 = piVar20 + 4;
            *piVar13 = piVar20[1];
            piVar20[6] = 0x444f4e45;
            piVar20[7] = 0x4e52;
            piVar13[1] = piVar21;
            iVar10 = devm_kmalloc(iVar10,0x1f68,0xdc0);
            _segment.ehdr[3] = iVar10;
            if (iVar10 != 0) {
                iVar11 = (iVar10 << 8) >> 8;
                uVar17 = iVar11 + 0x8000000000;
                iVar10 = _strcmp + uVar17;
                if (uVar17 >> 0x26 != 0) {
                    iVar10 = iVar11 - _strlen;
                }
                *(piVar20 + 10) = iVar10;
                piVar20[8] = 1;
                goto code_r0x08004e0c;
            }
        }
    }
    else {
        uVar8 = gh_rm_minidump_get_info();
        if (uVar8 < 0) {
            piVar20 = uVar8;
            _printk(0x8001216,piVar20);
            goto code_r0x080052e4;
        }
        _segment.ehdr = devm_kmalloc(iVar10,0xfc0,0xdc0);
        if (_segment.ehdr != NULL) {
            iVar10 = alloc_workqueue("",0x12,1);
            *_segment.ehdr = iVar10;
            if (iVar10 == 0) {
                _printk(0x8001e4f);
                piVar20 = 0xffffffea;
                goto code_r0x080052e4;
            }
            piVar21 = NULL;
code_r0x08004e0c:
            iVar10 = android_debug_symbol(6);
            iVar7 = strlen();
            uVar17 = iVar7 + 0x6cec & 0xfffffffc;
            _segment.ehdr = __kmalloc(uVar17,0xdc0);
            if (_segment.ehdr != NULL) {
                if (obj.is_rm_minidump == 0x0) {
                    iVar16 = _segment.ehdr[3];
                    strscpy(iVar16,"",0x10);
                    iVar4 = (_segment.ehdr << 8) >> 8;
                    uVar14 = iVar4 + 0x8000000000;
                    iVar11 = uVar14 + _strcmp;
                    if (uVar14 >> 0x26 != 0) {
                        iVar11 = iVar4 - _strlen;
                    }
                    *(iVar16 + 0x18) = iVar11;
                    *(iVar16 + 0x20) = uVar17;
                    piVar13 = _segment.ehdr;
                }
                else {
                    iVar4 = (_segment.ehdr << 8) >> 8;
                    uVar14 = iVar4 + 0x8000000000;
                    iVar11 = _strcmp + uVar14;
                    if (uVar14 >> 0x26 != 0) {
                        iVar11 = iVar4 - _strlen;
                    }
                    iVar7 = gh_rm_minidump_register_range(iVar11,uVar17,"",8);
                    if (iVar7 < 0) {
                        _printk(0x8001ca3);
                        goto code_r0x08005160;
                    }
                    iVar16 = 0;
                    piVar13 = _segment.ehdr;
                }
                *piVar13 = 0x10102464c457f;
                piVar13[2] = 0x100b70004;
                *(piVar13 + 0x34) = 0x380040;
                piVar13[4] = 0x3280;
                piVar13[5] = 0x40;
                *(piVar13 + 0x3a) = 0x40;
                _segment.ehdr = 0x1;
                *(piVar13 + 0x84) = 3;
                *(piVar13 + 0x3e) = 1;
                piVar13[0x17] = 0;
                piVar13[0x13] = 0x5e78;
                piVar13[0x14] = 0xc90;
                piVar13[0x11] = 0;
                if (piVar13 == 0xffffffffffffa188) {
                    piVar18 = 0x1;
                    piVar15 = 0xffffffffffffa188;
                }
                else {
                    iVar7 = strscpy(piVar13 + 0x5e79,"",0x10);
                    piVar18 = iVar7 + 2;
                    piVar15 = _segment.ehdr;
                    _segment.ehdr = piVar18;
                }
                *(piVar13 + 0x10) = piVar13 != 0xffffffffffffa188;
                *(piVar13 + 0xc4) = 1;
                cVar5 = obj.is_rm_minidump;
                piVar13[0x1f] = 0;
                piVar13[0x19] = 0;
                pcVar6 = obj.minidump_table;
                if (cVar5 != 0x0) {
                    pcVar6 = obj.minidump_rm_table;
                }
                piVar13[0x1a] = *pcVar6;
                if ((*(piVar15 + 0x3e) == 0) ||
                   (iVar11 = piVar15 + *(piVar15 + *(piVar15 + 0x3e) * 0x40 + piVar15[5] + 0x18), iVar11 == 0)) {
                    piVar18 = NULL;
                }
                else {
                    iVar7 = strscpy(iVar11 + piVar18,"",0x10);
                    _segment.ehdr = iVar7 + piVar18 + 1;
                }
                *(piVar13 + 0x18) = piVar18;
                strscpy(piVar13 + 0xd61,iVar10,0xc90);
                piVar13[0x23] = 0x6b08;
                *(piVar13 + 0x104) = 1;
                iVar11 = strlen(iVar10);
                piVar13[0x27] = 0;
                piVar13[0x21] = 1;
                piVar13[0x22] = iVar10;
                piVar13[0x24] = iVar11 + 1;
                if ((*(_segment.ehdr + 0x3e) == 0) ||
                   (iVar11 = _segment.ehdr + *(_segment.ehdr + *(_segment.ehdr + 0x3e) * 0x40 + _segment.ehdr[5] + 0x18)
                   , iVar11 == 0)) {
                    iVar7 = 0;
                }
                else {
                    iVar7 = _segment.ehdr;
                    iVar9 = strscpy(iVar11 + iVar7,"",0x10);
                    _segment.ehdr = iVar9 + iVar7 + 1;
                }
                *(piVar13 + 0x20) = iVar7;
                *(piVar13 + 0x650) = 1;
                piVar13[0x652] = iVar10;
                piVar13[0x651] = 0x6b08;
                iVar4 = (iVar10 << 8) >> 8;
                uVar17 = iVar4 + 0x8000000000;
                iVar11 = _strcmp + uVar17;
                if (uVar17 >> 0x26 != 0) {
                    iVar11 = iVar4 - _strlen;
                }
                piVar13[0x653] = iVar11;
                iVar10 = strlen(iVar10);
                *(piVar13 + 7) = 1;
                *(piVar13 + 0x3284) = 6;
                cVar5 = obj.is_rm_minidump;
                piVar13[0x655] = iVar10 + 1;
                piVar13[0x654] = iVar10 + 1;
                *(piVar13 + 0x3c) = 4;
                if (cVar5 == 0x0) {
                    *(iVar16 + 0x14) = 0x56414c49;
                }
            }
code_r0x08005160:
            uVar12 = _raw_spin_lock_irqsave(obj.mdt_lock);
            if (obj.is_rm_minidump == 0x0) {
                piVar21[0] = 1;
                piVar21[1] = 0x454e424c;
            }
            if (_obj.minidump_elfheader.0 != obj.minidump_elfheader.0) {
                uVar17 = 0;
                iVar10 = 0x20;
                iVar11 = 8;
                pcVar6 = _obj.minidump_elfheader.0;
                do {
                    pcVar19 = *pcVar6;
                    if (obj.is_rm_minidump == 0x0) {
                        if (0xc9 < uVar17) {
code_r0x080053c0:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x80053c4);
                            (*pcVar6)();
                        }
                        piVar13 = _segment.ehdr + iVar10;
                        iVar4 = *(pcVar6 + 0x10);
                        piVar13[1] = *(pcVar6 + 0x18);
                        iVar16 = *(pcVar6 + 0x30);
                        iVar2 = *(pcVar6 + 0x38);
                        iVar1 = *(pcVar6 + 0x20);
                        iVar3 = *(pcVar6 + 0x28);
                        *piVar13 = iVar4;
                        piVar13[4] = iVar16;
                        piVar13[5] = iVar2;
                        piVar13[2] = iVar1;
                        piVar13[3] = iVar3;
                        sym.md_add_ss_toc(piVar13);
                    }
                    else {
                        piVar13 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                        if (piVar13 == NULL) {
                            _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar12);
                            goto code_r0x080052e0;
                        }
                        if (200 < uVar17) goto code_r0x080053c0;
                        strscpy(_segment.ehdr + iVar11,pcVar6 + 0x10,0xd);
                        iVar16 = *(pcVar6 + 0x28);
                        iVar4 = *(pcVar6 + 0x30);
                        iVar1 = *(pcVar6 + 0x38);
                        piVar13[2] = *(pcVar6 + 0x20);
                        piVar13[3] = iVar16;
                        piVar13[4] = iVar4;
                        piVar13[5] = iVar1;
                        iVar4 = *(pcVar6 + 0x10);
                        iVar16 = *(pcVar6 + 0x18);
                        *(piVar13 + 0xc) = 0;
                        *piVar13 = iVar4;
                        piVar13[1] = iVar16;
                        piVar13[6] = 0xfffffffe0;
                        piVar13[7] = piVar13 + 7;
                        piVar13[8] = piVar13 + 7;
                        piVar15 = _segment.ehdr;
                        piVar13[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                        queue_work_on(0x20,*piVar15);
                    }
                    uVar14 = __list_del_entry_valid(pcVar6);
                    if ((uVar14 & 1) != 0) {
                        iVar4 = *pcVar6;
                        piVar13 = *(pcVar6 + 8);
                        *(iVar4 + 8) = piVar13;
                        *piVar13 = iVar4;
                    }
                    *pcVar6 = -0x2152ffffffffff00;
                    *(pcVar6 + 8) = -0x2152fffffffffede;
                    kfree(pcVar6);
                    uVar17 = uVar17 + 1;
                    iVar10 = iVar10 + 0x30;
                    iVar11 = iVar11 + 0x14;
                    pcVar6 = pcVar19;
                } while (pcVar19 != obj.minidump_elfheader.0);
            }
            iVar10 = _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar12);
            _obj.md_init_done = 1;
            sym.msm_minidump_log_init(iVar10);
            _printk(0x8001551,200);
            piVar20 = NULL;
            goto code_r0x080052e4;
        }
    }
code_r0x080052e0:
    piVar20 = 0xfffffff4;
code_r0x080052e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return piVar20 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_minidump_driver_remove.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt @ 0x08003450 (size 8) =====

ulong sym.msm_minidump_driver_remove.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt(void)

{
    return 0;
}


// ===== sym.get_dma_info.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003458 (size 8) =====

ulong sym.get_dma_info.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(ulong *param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = is_dma_buf_file(param_2);
    if (uVar7 == 0) {
        return uVar7;
    }
    piVar14 = *param_1;
    if (*(param_1 + 2) == 0) {
        iVar6 = scnprintf(*piVar14 + piVar14[2],piVar14[1] - piVar14[2],"",param_1[1] + 0x7a8,*(param_1[1] + 0x5dc))
        ;
        iVar4 = piVar14[2];
        piVar14[2] = iVar4 + iVar6;
        if (iVar4 + iVar6 == piVar14[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar13 = *(param_2 + 0xd8);
    uVar12 = 0x75f572ab;
    uVar8 = 0x130;
    uVar11 = 0x75f572ab;
    iVar6 = 0x75f572ab;
    piVar10 = piVar13;
    do {
        uVar8 = uVar8 - 0xc;
        uVar12 = piVar10[1] + uVar12;
        iVar1 = *(piVar10 + 4) + uVar11;
        uVar11 = (*piVar10 + iVar6) - uVar12 ^ (uVar12 >> 0x1c | uVar12 * 0x10);
        iVar6 = uVar12 + iVar1;
        uVar12 = iVar1 - uVar11 ^ (uVar11 >> 0x1a | uVar11 << 6);
        iVar1 = uVar11 + iVar6;
        uVar11 = iVar6 - uVar12 ^ (uVar12 >> 0x18 | uVar12 << 8);
        iVar6 = uVar12 + iVar1;
        uVar12 = iVar1 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
        iVar1 = uVar11 + iVar6;
        uVar3 = iVar6 - uVar12 ^ (uVar12 >> 0xd | uVar12 << 0x13);
        iVar6 = uVar12 + iVar1;
        uVar11 = uVar3 + iVar6;
        uVar12 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
        piVar10 = piVar10 + 0xc;
    } while (0xc < uVar8);
    uVar12 = (uVar12 ^ uVar11) - (uVar11 >> 0x12 | uVar11 * 0x4000);
    uVar8 = (iVar6 + *(piVar13 + 0x12f) * 0x1000000 + *(piVar13 + 0x12e) * 0x10000 + *(piVar13 + 0x12d) * 0x100 +
             *(piVar13 + 300) ^ uVar12) - (uVar12 >> 0x15 | uVar12 * 0x800);
    uVar11 = (uVar8 ^ uVar11) - (uVar8 >> 7 | uVar8 * 0x2000000);
    uVar12 = (uVar11 ^ uVar12) - (uVar11 >> 0x10 | uVar11 * 0x10000);
    uVar8 = (uVar12 ^ uVar8) - (uVar12 >> 0x1c | uVar12 * 0x10);
    uVar11 = (uVar8 ^ uVar11) - (uVar8 >> 0x12 | uVar8 * 0x4000);
    uVar9 = (uVar11 ^ uVar12) - (uVar11 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar9] == 0x0) {
        obj.dma_buf_hash[uVar9] = 0x1;
        *(param_1 + 2) = *(param_1 + 2) + 1;
        iVar6 = scnprintf(*piVar14 + piVar14[2],piVar14[1] - piVar14[2],"","","","","",0x8001c5b);
        iVar4 = piVar14[2] + iVar6;
        piVar14[2] = iVar4;
        if (iVar4 != piVar14[1] + -1) {
            iVar5 = piVar13[1];
            iVar2 = 0x8001ead;
            if (piVar13[0xf] != 0) {
                iVar2 = piVar13[0xf];
            }
            iVar6 = scnprintf(*piVar14 + iVar4,piVar14[1] - iVar4,"",*piVar13,*(iVar5 + 0x40),*(iVar5 + 0x44),
                              *(iVar5 + 0x38),piVar13[0xe],*(*(piVar13[1] + 0x20) + 0x40),iVar2);
            iVar4 = piVar14[2];
            piVar14[2] = iVar4 + iVar6;
            if (iVar4 + iVar6 != piVar14[1] + -1) {
                param_1[3] = param_1[3] + *piVar13;
                return 0;
            }
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.md_ipi_stop.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x08003460 (size 8) =====

void sym.md_ipi_stop.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    if (*(cpu_number + iVar1) < 0x20) {
        memcpy(obj.regs_before_stop + *(__per_cpu_offset + *(cpu_number + iVar1) * 8),param_2,0x150);
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800803c);
    (*pcVar2)();
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08003468 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP4krefE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003470 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt);
    return;
}


// ===== sym.md_dump_process.cfi_jt @ 0x08003478 (size 8) =====

void sym.md_dump_process.cfi_jt
               (ulong param_1,ulong param_2,uint64_t param_3,char *param_4,uint64_t param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    ulong uVar6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    code *extraout_x8;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t extraout_x11;
    uint32_t *extraout_x13;
    uint32_t *extraout_x13_00;
    uint32_t *extraout_x13_01;
    uint32_t *extraout_x13_02;
    ulong *in_x18;
    int64_t *piVar10;
    char *unaff_x21;
    int64_t iVar11;
    code *pcVar12;
    code *unaff_x24;
    char *unaff_x25;
    char *unaff_x26;
    char *unaff_x27;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_1c0 [16];
    ulong uStack_1b0;
    char *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    code *pcStack_128;
    uchar *puStack_120;
    char *pcStack_118;
    code *pcStack_110;
    ulong uStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    uint64_t *puStack_f0;
    char *pcStack_e8;
    uint64_t uStack_e0;
    uchar *puStack_d8;
    ulong uStack_d0;
    uchar *puStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar9 = 0x8000000;
    iStack_70 = *(iVar11 + 0x5e0);
    if ((obj.md_in_oops_handler & 1) != 0) goto code_r0x08005c68;
    pcVar12 = obj.md_handle_done;
    uVar4 = _obj.md_handle_done;
code_r0x080055a0:
    if (uVar4 == 1) goto code_r0x08005c68;
    param_3 = uVar4 + 1;
    uVar5 = uVar4 & 0xffffffff;
    uVar8 = uVar4;
    do {
        Hint_Prefetch(pcVar12,2,0,1);
        do {
            uVar3 = *pcVar12;
            uVar4 = uVar3;
            if (uVar3 != uVar5) goto code_r0x080055c8;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
                *pcVar12 = param_3;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080055c8:
        if (uVar8 != uVar3) goto code_r0x080055a0;
        iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
        *(iVar9 + 0x528) = 1;
        if (iVar11 != 0) {
            iVar11 = tpidr_el1;
            if (*(cpu_number + iVar11) != _segment.ehdr) {
                uVar6 = 0x150;
                auVar13 = memset(auStack_1c0,0);
                pcStack_128 = cpu_number;
                pcStack_110 = dma_fence_release;
                uStack_108 = 0x8000000;
                uStack_d0 = 0x8005630;
                uVar8 = currentel;
                uVar4 = spsel;
                uVar5 = daif;
                uStack_b8 = nzcv;
                uStack_b8 = uVar8 | uVar4 | uVar5 | uStack_b8;
                uStack_c0 = 0x8005694;
                iVar11 = tpidr_el1;
                param_3 = *(cpu_number + iVar11);
                uStack_1b0 = uVar6;
                pcStack_1a8 = param_4;
                uStack_1a0 = param_5;
                uStack_198 = param_6;
                uStack_190 = param_7;
                uStack_188 = param_8;
                puStack_120 = auStack_1c0;
                pcStack_118 = unaff_x21;
                pcStack_100 = unaff_x24;
                pcStack_f8 = unaff_x25;
                puStack_f0 = unaff_x26;
                pcStack_e8 = unaff_x27;
                uStack_e0 = unaff_x28;
                puStack_d8 = &stack0xffffffffffffffa0;
                puStack_c8 = auStack_1c0;
                auStack_1c0 = auVar13;
                seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                sym.md_reg_context_data(auStack_1c0);
            }
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x13 = extraout_w8;
            if (uVar3 < extraout_w8) {
                unaff_x24 = __per_cpu_offset;
                do {
                    uVar4 = uVar3;
                    if (0x1f < uVar3) goto code_r0x08005bdc;
                    memcpy(auStack_1c0,obj.regs_before_stop + *(__per_cpu_offset + uVar4 * 8),0x150);
                    param_3 = uVar4;
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                    sym.md_reg_context_data(auStack_1c0);
                    uVar3 = cpumask_next(uVar4,__cpu_possible_mask);
                    *extraout_x13_00 = extraout_w8_00;
                    unaff_x25 = obj.regs_before_stop;
                } while (uVar3 < extraout_w8_00);
            }
        }
        unaff_x21 = CONCAT44(*0x8000004,_segment.ehdr);
        if (unaff_x21 != NULL) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x13_01 = extraout_w8_01;
            if (uVar3 < extraout_w8_01) {
                unaff_x25 = "";
                do {
                    uVar4 = uVar3;
                    if (0x1f < uVar3) {
code_r0x08005bdc:
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8005be0);
                        (*pcVar12)();
                    }
                    iVar11 = uVar4 * 8;
                    iVar9 = *(__per_cpu_offset + iVar11);
                    unaff_x24 = runqueues + iVar9;
                    param_5 = *(*(iVar9 + 0x8038b48) + 0x5d8);
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",uVar4,*(_find_first_bit + iVar9));
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(iVar9 + 0x80382b8));
                    sym.md_dump_cfs_rq(iVar9 + 0x80382a8,*(*(__per_cpu_offset + iVar11) + 0x8038b48));
                    unaff_x26 = iVar9 + 0x8038428;
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(iVar9 + 0x8038a78));
                    unaff_x27 = *(*(__per_cpu_offset + iVar11) + 0x8038b48);
                    iVar11 = _find_first_bit(unaff_x26,100);
                    if (iVar11 != 100) {
                        uVar5 = *unaff_x26;
                        if (uVar5 == 0) {
                            uVar5 = (*(iVar9 + 0x8038430) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                    (*(iVar9 + 0x8038430) & 0x5555555555555555) << 1;
                            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                            uVar3 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
                            if (0x23 < uVar3) goto code_r0x08005780;
                            unaff_x28 = uVar3 + 0x40;
                        }
                        else {
                            uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                            unaff_x28 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
                        }
                        do {
                            if (100 < unaff_x28) goto code_r0x08005bdc;
                            for (pcVar12 = *(unaff_x24 + ((unaff_x28 & 0xffffffff) * 2 + 0x72) * 8);
                                pcVar12 != unaff_x24 + ((unaff_x28 & 0xffffffff) * 2 + 0x72) * 8; pcVar12 = *pcVar12) {
                                sym.md_dump_task_info(pcVar12 + -0x2c0,0x8001f22,unaff_x27);
                            }
                            param_5 = 0;
                            param_6 = 0;
                            unaff_x28 = _find_next_bit(unaff_x26,0,100,unaff_x28 + 1);
                        } while (unaff_x28 < 100);
                    }
code_r0x08005780:
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
                    uVar3 = cpumask_next(uVar4,__cpu_possible_mask);
                    *extraout_x13_02 = extraout_w8_02;
                } while (uVar3 < extraout_w8_02);
                unaff_x21 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            seq_buf_printf(unaff_x21,"","");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6,0x80012e1);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0xc,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,4,0x8000ad8);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,5,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x11,"");
            param_4 = "";
            param_3 = 0x10;
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
            if (*0x8038584 != 0x8038584) {
                unaff_x21 = "";
                unaff_x25 = 0x8002120;
                unaff_x26 = "";
                unaff_x27 = "";
                unaff_x28 = 0x8001a67;
                piVar10 = *0x8038584;
                do {
                    for (unaff_x24 = *(piVar10[100] + 0x10); piVar10[100] + 0x10 != unaff_x24; unaff_x24 = *unaff_x24) {
                        if (*(unaff_x24 + -0x670) == 0) {
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",unaff_x24 + 0x110);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001bf7,*(unaff_x24 + -0xc0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1d8));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1d0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1e0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1e8));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001405,*(unaff_x24 + -0x654));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8000f9e,*(unaff_x24 + -0x61c));
                            uVar7 = *(unaff_x24 + -0x670);
                            uVar3 = 0x80;
                            if (uVar7 != 0x402) {
                                uVar3 = (*(unaff_x24 + -300) | uVar7) & 0x7f;
                            }
                            uVar7 = 0;
                            if (uVar3 != 0) {
                                uVar7 = 0x20 - LZCOUNT(uVar3);
                            }
                            if (8 < uVar7) goto code_r0x08005bdc;
                            param_4 = *(obj.task_state_array + uVar7 * 8);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + 0x590));
                            param_3 = *(unaff_x24 + 0x578);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
                        }
                    }
                    piVar10 = *piVar10;
                } while (piVar10 != 0x8038584);
            }
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_meminfo(CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_slabinfo(CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_pageowner(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_slabowner(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dma_buf_info(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dma_buf_procs(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        obj.md_in_oops_handler = 0x0;
code_r0x08005c68:
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
        uVar8 = *extraout_x8;
        uVar5 = extraout_x1;
        pcVar12 = extraout_x8;
        iVar9 = extraout_x11;
    } while( true );
}


// ===== sym.md_get_present_module.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x08003480 (size 8) =====

ulong sym.md_get_present_module.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 + -0x18 != obj.__this_module) {
        *in_x18 = unaff_x30;
        sym.md_module_process(param_1 + -0x18);
    }
    return 0;
}


// ===== sym.msm_minidump_enabled.cfi_jt @ 0x08003488 (size 8) =====

bool sym.msm_minidump_enabled.cfi_jt(void)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.is_rm_minidump == 0x0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mdt_lock);
        if ((_segment.ehdr == 0) || (*(_segment.ehdr + 8) == 0)) {
            bVar1 = false;
        }
        else {
            bVar1 = *(*(_segment.ehdr + 8) + 4) == 0x454e424c;
        }
        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar2);
    }
    else {
        bVar1 = obj.md_init_done & 1;
    }
    return bVar1;
}


// ===== sym.simple_open.cfi_jt @ 0x08003490 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.md_current_stack_notifer.cfi_jt @ 0x08003498 (size 8) =====

void sym.md_current_stack_notifer.cfi_jt(void)

{
    code *pcVar1;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(in_x3 + 0x58) < 0x20) {
        if (((*(in_x3 + 0x3c) >> 1 & 1) == 0) && (obj.md_current_stack_init != 0x0)) {
            sym.update_md_stack(*(__per_cpu_offset + (*(in_x3 + 0x58) & 0xffffffff) * 8) + 0x800bd10,
                                obj.md_stack_data + *(__per_cpu_offset + (*(in_x3 + 0x58) & 0xffffffff) * 8),
                                *(in_x3 + 0x30));
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80054b0);
    (*pcVar1)();
}


// ===== sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt @ 0x080034a0 (size 8) =====

void sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    ulong uVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t arg1;
    uint32_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x30);
    arg1 = param_1 + -0x30;
    if (iVar8 == 2) {
        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
        uVar12 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            iVar16 = 0;
            iVar15 = 0;
            uVar14 = 0;
            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar13 = 0x110;
            do {
                if (iVar15 == 0xfc8) goto code_r0x08004c9c;
                iVar8 = strcmp(iVar5 + iVar15 + 8,arg1);
                if (iVar8 == 0) {
                    if (-1 < uVar14) {
                        if (0xc9 < uVar14) goto code_r0x08004c9c;
                        iVar1 = iVar5 + iVar15;
                        uVar3 = *(iVar1 + 0x18);
                        *(iVar1 + 0x18) = 0;
                        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                        iVar8 = gh_rm_minidump_deregister_slot(uVar3);
                        if (iVar8 < 0) {
                            pcVar11 = "";
                        }
                        else {
                            uVar9 = *(param_1 + -0x10);
                            uVar2 = *(param_1 + -8);
                            uVar10 = strlen(arg1);
                            iVar7 = gh_rm_minidump_register_range(uVar9,uVar2,arg1,uVar10);
                            if (-1 < iVar7) {
                                uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                                iVar8 = strcmp(arg1,iVar5 + iVar15 + 8);
                                if (iVar8 != 0) {
                                    pcVar11 = "";
                                    goto code_r0x08004c3c;
                                }
                                *(iVar1 + 0x18) = iVar7;
                                iVar15 = CONCAT44(*0x8000004,_segment.ehdr);
                                iVar16 = *(iVar15 + 0x20) + iVar15 + iVar16;
                                *(*(iVar15 + 0x28) + iVar15 + iVar13) = *(param_1 + -0x18);
                                *(iVar16 + 0x48) = *(param_1 + -0x18);
                                *(iVar16 + 0x50) = *(param_1 + -0x10);
                                goto code_r0x08004c68;
                            }
                            pcVar11 = "";
                        }
                        _printk_deferred(pcVar11,arg1,iVar8);
                        goto code_r0x08004c70;
                    }
                    break;
                }
                uVar14 = uVar14 + 1;
                iVar15 = iVar15 + 0x14;
                iVar13 = iVar13 + 0x40;
                iVar16 = iVar16 + 0x38;
            } while (uVar12 * 0x14 - iVar15 != 0);
        }
        pcVar11 = "";
code_r0x08004c3c:
        _printk_deferred(pcVar11,arg1);
    }
    else {
        if (iVar8 != 1) {
            if (iVar8 != 0) {
                _printk_deferred("");
                goto code_r0x08004c70;
            }
            uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
            uVar12 = _segment.ehdr;
            if (0 < _segment.ehdr) {
                iVar15 = 0;
                iVar8 = 1;
                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                do {
                    if (iVar15 == 0xfc8) goto code_r0x08004c9c;
                    iVar7 = strcmp(iVar13 + 8 + iVar15,arg1);
                    if (iVar7 == 0) {
                        uVar14 = iVar8 - 1;
                        if (-1 < uVar14) {
                            _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                            uVar9 = *(param_1 + -0x10);
                            uVar2 = *(param_1 + -8);
                            uVar10 = strlen(arg1);
                            iVar7 = gh_rm_minidump_register_range(uVar9,uVar2,arg1,uVar10);
                            uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                            uVar4 = _segment.ehdr;
                            if (iVar7 < 0) {
                                if (200 < uVar14) goto code_r0x08004c9c;
                                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                                iVar15 = iVar13 + iVar15;
                                memmove(iVar15 + 8,iVar15 + 0x1c,(_segment.ehdr - iVar8) * 0x14);
                                uVar4 = uVar4 - 1;
                                if (0xc9 < uVar4) goto code_r0x08004c9c;
                                iVar13 = iVar13 + uVar4 * 0x14;
                                _segment.ehdr = uVar4;
                                *(iVar13 + 0x18) = 0;
                                *(iVar13 + 8) = 0;
                                *(iVar13 + 0x10) = 0;
                                _printk(0x8001b1d,arg1,iVar7);
                            }
                            else {
                                if (200 < uVar14) goto code_r0x08004c9c;
                                iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + iVar15;
                                iVar8 = strcmp(arg1,iVar15 + 8);
                                if (iVar8 == 0) {
                                    *(iVar15 + 0x18) = iVar7;
                                }
                                else {
                                    _printk_deferred("",arg1);
                                    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                                    gh_rm_minidump_deregister_slot(iVar7);
                                }
                                sym.md_add_elf_header(arg1);
                            }
                            goto code_r0x08004c68;
                        }
                        break;
                    }
                    iVar8 = iVar8 + 1;
                    iVar15 = iVar15 + 0x14;
                } while (uVar12 * 0x14 - iVar15 != 0);
            }
            pcVar11 = "";
            goto code_r0x08004c3c;
        }
        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
        uVar12 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            iVar15 = 0;
            iVar8 = 1;
            iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
            do {
                if (iVar15 == 0xfc8) {
code_r0x08004c9c:
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8004ca0);
                    (*pcVar6)();
                }
                iVar7 = strcmp(iVar13 + iVar15 + 8,arg1);
                if (iVar7 == 0) {
                    uVar14 = iVar8 - 1;
                    if (-1 < uVar14) {
                        if (0xc9 < uVar14) goto code_r0x08004c9c;
                        iVar7 = *(iVar13 + iVar15 + 0x18);
                        if (iVar7 == 0) {
                            pcVar11 = "";
                            goto code_r0x08004c58;
                        }
                        *(iVar13 + iVar15 + 0x18) = 0;
                        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                        iVar7 = gh_rm_minidump_deregister_slot(iVar7);
                        if (iVar7 < 0) {
                            _printk(0x80016be,arg1,iVar7);
                            goto code_r0x08004c70;
                        }
                        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                        iVar7 = strcmp(arg1,iVar13 + iVar15 + 8);
                        if (iVar7 != 0) {
                            pcVar11 = "";
                            goto code_r0x08004c58;
                        }
                        iVar7 = sym.msm_minidump_clear_headers(arg1);
                        uVar4 = _segment.ehdr;
                        if (iVar7 != 0) goto code_r0x08004c68;
                        if (200 < uVar14) goto code_r0x08004c9c;
                        iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                        iVar15 = iVar13 + iVar15;
                        memmove(iVar15 + 8,iVar15 + 0x1c,(_segment.ehdr - iVar8) * 0x14);
                        uVar4 = uVar4 - 1;
                        if (0xc9 < uVar4) goto code_r0x08004c9c;
                        iVar13 = iVar13 + uVar4 * 0x14;
                        _segment.ehdr = uVar4;
                        *(iVar13 + 0x18) = 0;
                        *(iVar13 + 8) = 0;
                        *(iVar13 + 0x10) = 0;
                        goto code_r0x08004c68;
                    }
                    break;
                }
                iVar8 = iVar8 + 1;
                iVar15 = iVar15 + 0x14;
            } while (uVar12 * 0x14 - iVar15 != 0);
        }
        pcVar11 = "";
code_r0x08004c58:
        _printk_deferred(pcVar11,arg1);
    }
code_r0x08004c68:
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
code_r0x08004c70:
    kfree(arg1);
    return;
}


// ===== sym.msm_minidump_remove_region.cfi_jt @ 0x080034a8 (size 8) =====

uint64_t sym.msm_minidump_remove_region.cfi_jt(ulong *param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *puVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    ulong *puVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == NULL) || ((obj.md_init_done & 1) == 0)) ||
       ((obj.is_rm_minidump == 0x0 &&
        ((iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8), iVar13 == 0 || (*(iVar13 + 4) != 0x454e424c)))))) {
        uVar16 = 0xffffffea;
        goto code_r0x08004748;
    }
    uVar10 = _raw_spin_lock_irqsave(obj.mdt_lock);
    _raw_write_lock(obj.mdt_remove_lock);
    uVar6 = _segment.ehdr;
    if (obj.is_rm_minidump == 0x0) {
        iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
        puVar21 = *(iVar13 + 8);
        if ((puVar21 == NULL) || (puVar21[1] != 0x454e424c)) {
            uVar16 = 0xffffffea;
        }
        else {
            uVar16 = _segment.ehdr;
            if (_segment.ehdr < 1) goto code_r0x080044b4;
            iVar22 = 0;
            iVar14 = iVar13 + 0x50;
code_r0x0800459c:
            if (iVar22 == -0xca) goto code_r0x080047a8;
            iVar9 = strcmp(iVar14 + -0x30,param_1);
            if (iVar9 != 0) goto code_r0x080045b8;
            uVar16 = -iVar22;
            uVar12 = uVar16;
            if (uVar12 < 0) {
                uVar16 = uVar16 & 0xffffffff;
                goto code_r0x08004718;
            }
            uVar5 = puVar21[4];
            if (uVar5 < 1) {
                uVar18 = 0xffffffea;
                goto code_r0x08004788;
            }
            uVar15 = 0;
            iVar20 = *(iVar13 + 0x18);
            uVar17 = 0xffffffea;
            do {
                iVar9 = strcmp(iVar20,param_1);
                iVar20 = iVar20 + 0x28;
                uVar18 = uVar15;
                if (iVar9 != 0) {
                    uVar18 = uVar17;
                }
                uVar15 = uVar15 + 1;
                uVar17 = uVar18;
            } while (uVar5 != uVar15);
            if (uVar18 < 0) {
code_r0x08004788:
                _printk_deferred("",param_1,uVar16,uVar18);
                uVar16 = 0xffffffea;
                goto code_r0x08004728;
            }
            if (uVar12 < _segment.ehdr) {
                _segment.ehdr = uVar12;
            }
            *puVar21 = 0;
            if (200 < uVar12) {
code_r0x080047a8:
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x80047ac);
                (*pcVar8)();
            }
            uVar6 = uVar6 - 1;
            memmove(iVar14 + -0x30,iVar14,(uVar6 + iVar22) * 0x30);
            if (0xc9 < uVar6) goto code_r0x080047a8;
            iVar22 = *(iVar13 + 0x18);
            iVar14 = iVar13 + uVar6 * 0x30;
            *(iVar14 + 0x40) = 0;
            *(iVar14 + 0x48) = 0;
            *(iVar14 + 0x30) = 0;
            *(iVar14 + 0x38) = 0;
            *(iVar14 + 0x20) = 0;
            *(iVar14 + 0x28) = 0;
            memmove(iVar22 + uVar18 * 0x28,iVar22 + (uVar18 + 1) * 0x28,(uVar5 + ~uVar18) * 0x28);
            puVar11 = *(iVar13 + 0x18) + (uVar5 - 1) * 0x28;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            uVar19 = sym.msm_minidump_clear_headers(param_1);
            uVar16 = uVar19 & 0xffffffff;
            if (uVar19 == 0) {
                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar14 = *(iVar13 + 8);
                *(iVar14 + 0x10) = *(iVar14 + 0x10) + -1;
                **(iVar13 + 8) = 1;
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
    }
    else {
        uVar19 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            uVar16 = 0;
            iVar13 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
            do {
                if (uVar16 == 0xca) goto code_r0x080047a8;
                iVar9 = strcmp(iVar13,param_1);
                if (iVar9 == 0) {
                    if (uVar16 < 0) goto code_r0x08004718;
                    puVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                    if (puVar11 == NULL) {
                        uVar16 = 0xfffffff4;
                    }
                    else {
                        uVar1 = *param_1;
                        uVar3 = param_1[1];
                        *(puVar11 + 0xc) = 1;
                        uVar2 = param_1[4];
                        uVar4 = param_1[5];
                        *puVar11 = uVar1;
                        puVar11[1] = uVar3;
                        puVar11[4] = uVar2;
                        puVar11[5] = uVar4;
                        uVar1 = param_1[2];
                        uVar2 = param_1[3];
                        puVar11[6] = 0xfffffffe0;
                        puVar11[2] = uVar1;
                        puVar11[3] = uVar2;
                        puVar11[7] = puVar11 + 7;
                        puVar11[8] = puVar11 + 7;
                        puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                        puVar11[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                        queue_work_on(0x20,*puVar7);
                        uVar16 = 0;
                    }
                    goto code_r0x08004728;
                }
                uVar16 = uVar16 + 1;
                iVar13 = iVar13 + 0x14;
            } while (uVar19 != uVar16);
        }
code_r0x080044b4:
        uVar16 = 0xfffffffe;
code_r0x08004718:
        _printk_deferred("",param_1);
    }
code_r0x08004728:
    _raw_write_unlock(obj.mdt_remove_lock);
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar10);
    if (uVar16 != 0) {
        _printk_deferred("");
    }
code_r0x08004748:
    return uVar16 & 0xffffffff;
code_r0x080045b8:
    iVar22 = iVar22 + -1;
    iVar14 = iVar14 + 0x30;
    if (-iVar22 == uVar16) goto code_r0x080044b4;
    goto code_r0x0800459c;
}


// ===== sym.msm_minidump_add_region.cfi_jt @ 0x080034b0 (size 8) =====

uint32_t sym.msm_minidump_add_region.cfi_jt(ulong *param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *puVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *puVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint32_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        return 0xffffffea;
    }
    uVar8 = strlen();
    if (((0xc < uVar8) || (param_1[3] == 0)) || ((*(param_1 + 5) & 3) != 0)) {
        _printk_deferred("");
        return 0xffffffea;
    }
    uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
    uVar8 = _segment.ehdr;
    if (_segment.ehdr < 0xc9) {
        if (((obj.is_rm_minidump != 0x0) || (iVar15 = CONCAT44(*0x8000004,_segment.ehdr), iVar15 == 0)) ||
           ((iVar12 = *(iVar15 + 8), iVar12 == 0 || (*(iVar12 + 4) != 0x454e424c)))) {
            if ((obj.is_rm_minidump == 0x0) || ((obj.md_init_done & 1) == 0)) {
                iVar15 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar15 = 0x30;
                }
                puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xb20,0x40);
                if (puVar10 == NULL) goto code_r0x080040b8;
                uVar2 = param_1[3];
                uVar1 = param_1[4];
                uVar3 = param_1[5];
                puVar10[4] = param_1[2];
                puVar10[5] = uVar2;
                puVar5 = _obj.minidump_elfheader.1;
                uVar2 = *param_1;
                uVar4 = param_1[1];
                puVar10[6] = uVar1;
                puVar10[7] = uVar3;
                puVar10[2] = uVar2;
                puVar10[3] = uVar4;
                uVar8 = __list_add_valid(puVar10,puVar5,obj.minidump_elfheader.0);
                if ((uVar8 & 1) != 0) {
                    _obj.minidump_elfheader.1 = puVar10;
                    *puVar10 = obj.minidump_elfheader.0;
                    puVar10[1] = puVar5;
                    *puVar5 = puVar10;
                }
            }
            else {
                uVar8 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar14 = 0;
                    iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
                    do {
                        if (uVar14 == 0xca) goto code_r0x08004148;
                        iVar7 = strcmp(iVar15,param_1);
                        if (iVar7 == 0) {
                            if (-1 < uVar14) goto code_r0x08004134;
                            break;
                        }
                        uVar14 = uVar14 + 1;
                        iVar15 = iVar15 + 0x14;
                    } while (uVar8 != uVar14);
                }
                puVar10 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                if (puVar10 == NULL) {
code_r0x080040b8:
                    uVar13 = 0xfffffff4;
                    goto code_r0x080040f4;
                }
                if (0xc9 < _segment.ehdr) {
code_r0x08004148:
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x800414c);
                    (*pcVar6)();
                }
                iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr * 0x14;
                strscpy(iVar15 + 8,param_1,0xd);
                *(iVar15 + 0x18) = 0;
                uVar1 = *param_1;
                uVar3 = param_1[1];
                *(puVar10 + 0xc) = 0;
                uVar2 = param_1[2];
                uVar4 = param_1[3];
                *puVar10 = uVar1;
                puVar10[1] = uVar3;
                uVar1 = param_1[4];
                uVar3 = param_1[5];
                puVar10[2] = uVar2;
                puVar10[3] = uVar4;
                puVar10[6] = 0xfffffffe0;
                puVar10[4] = uVar1;
                puVar10[5] = uVar3;
                puVar10[7] = puVar10 + 7;
                puVar10[8] = puVar10 + 7;
                puVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                puVar10[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                queue_work_on(0x20,*puVar5);
            }
code_r0x080040e8:
            uVar13 = _segment.ehdr;
            _segment.ehdr = _segment.ehdr + 1;
            goto code_r0x080040f4;
        }
        if (*(iVar12 + 0x10) < 0xc9) {
            if (_segment.ehdr != 0) {
                uVar14 = 0;
                iVar15 = iVar15 + 0x20;
                do {
                    iVar7 = strcmp(iVar15,param_1);
                    if (iVar7 == 0) {
                        if (-1 < uVar14) goto code_r0x08004134;
                        break;
                    }
                    uVar14 = uVar14 + 1;
                    iVar15 = iVar15 + 0x30;
                } while (uVar8 != uVar14);
            }
            sym.md_add_ss_toc(param_1);
            sym.md_add_elf_header(param_1);
            goto code_r0x080040e8;
        }
        pcVar11 = "";
    }
    else {
        pcVar11 = "";
    }
    _printk_deferred(pcVar11);
    uVar13 = 0xfffffff4;
code_r0x080040f4:
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
    return uVar13;
code_r0x08004134:
    _printk_deferred("");
    uVar13 = 0xffffffef;
    goto code_r0x080040f4;
}


// ===== sym.msm_minidump_update_region.cfi_jt @ 0x080034b8 (size 8) =====

uint64_t sym.msm_minidump_update_region.cfi_jt(uint32_t param_1,ulong *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *puVar5;
    code *pcVar6;
    int iVar7;
    ulong uVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = 0xffffffea;
    if ((param_2 != NULL) && ((obj.md_init_done & 1) != 0)) {
        uVar12 = strlen(param_2);
        if ((uVar12 < 0xd) && ((param_2[3] != 0 && ((*(param_2 + 5) & 3) == 0)))) {
            if (param_1 < 0xc9) {
                uVar8 = _raw_read_lock_irqsave(obj.mdt_remove_lock);
                if (obj.is_rm_minidump == 0x0) {
                    if (param_1 < _segment.ehdr) {
                        uVar13 = _segment.ehdr;
                        if (0 < _segment.ehdr) {
                            uVar12 = 0;
                            iVar10 = CONCAT44(*0x8000004,_segment.ehdr);
                            iVar11 = iVar10 + 0x20;
                            do {
                                if (uVar12 == 0xca) goto code_r0x08003e48;
                                iVar7 = strcmp(iVar11,param_2);
                                if (iVar7 == 0) {
                                    if (uVar12 < 0) {
                                        uVar12 = uVar12 & 0xffffffff;
                                        goto code_r0x08003e34;
                                    }
                                    if (0xc9 < param_1) goto code_r0x08003e48;
                                    iVar11 = *(iVar10 + 0x18);
                                    iVar10 = iVar10 + param_1 * 0x30;
                                    uVar12 = 0;
                                    *(iVar10 + 0x38) = param_2[3];
                                    *(iVar10 + 0x40) = param_2[4];
                                    *(iVar11 + (param_1 + 1) * 0x28 + 0x18) = param_2[4];
                                    goto code_r0x08003d84;
                                }
                                uVar12 = uVar12 + 1;
                                iVar11 = iVar11 + 0x30;
                            } while (uVar13 != uVar12);
                        }
                        uVar12 = 0xfffffffe;
code_r0x08003e34:
                        _printk_deferred("",param_2);
                    }
                    else {
                        _printk_deferred("",param_2);
                        uVar12 = 0xffffffea;
                    }
code_r0x08003d84:
                    iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                    iVar10 = *(iVar11 + 0x20) + iVar11 + (param_1 + 1) * 0x38;
                    *(*(iVar11 + 0x28) + iVar11 + (param_1 + 4) * 0x40 + 0x10) = param_2[3];
                    *(iVar10 + 0x10) = param_2[3];
                    *(iVar10 + 0x18) = param_2[4];
                }
                else {
                    uVar13 = _segment.ehdr;
                    if (0 < _segment.ehdr) {
                        uVar12 = 0;
                        iVar11 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
                        do {
                            if (uVar12 == 0xca) {
code_r0x08003e48:
    //WARNING: Does not return
                                pcVar6 = SoftwareBreakpoint(0x5512,0x8003e4c);
                                (*pcVar6)();
                            }
                            iVar7 = strcmp(iVar11,param_2);
                            if (iVar7 == 0) {
                                if (uVar12 < 0) goto code_r0x08003dd4;
                                puVar9 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                                if (puVar9 == NULL) {
                                    uVar12 = 0xfffffff4;
                                }
                                else {
                                    uVar1 = *param_2;
                                    uVar3 = param_2[1];
                                    *(puVar9 + 0xc) = 2;
                                    uVar2 = param_2[4];
                                    uVar4 = param_2[5];
                                    *puVar9 = uVar1;
                                    puVar9[1] = uVar3;
                                    puVar9[4] = uVar2;
                                    puVar9[5] = uVar4;
                                    uVar1 = param_2[2];
                                    uVar2 = param_2[3];
                                    puVar9[6] = 0xfffffffe0;
                                    puVar9[2] = uVar1;
                                    puVar9[3] = uVar2;
                                    puVar9[7] = puVar9 + 7;
                                    puVar9[8] = puVar9 + 7;
                                    puVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                                    puVar9[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                                    queue_work_on(0x20,*puVar5);
                                    uVar12 = 0;
                                }
                                goto code_r0x08003de4;
                            }
                            uVar12 = uVar12 + 1;
                            iVar11 = iVar11 + 0x14;
                        } while (uVar13 != uVar12);
                    }
                    uVar12 = 0xfffffffe;
code_r0x08003dd4:
                    _printk_deferred("",param_2);
                }
code_r0x08003de4:
                _raw_read_unlock_irqrestore(obj.mdt_remove_lock,uVar8);
            }
            else {
                uVar12 = 0xffffffea;
            }
        }
        else {
            _printk_deferred("");
            uVar12 = 0xffffffea;
        }
    }
    return uVar12 & 0xffffffff;
}


// ===== sym.md_trace_oops_exit.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034c0 (size 8) =====

void sym.md_trace_oops_exit.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(void)

{
    obj.minidump_ftrace_in_oops = 0x0;
    return;
}


// ===== sym.md_update_trace_fmt.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034c8 (size 8) =====

void sym.md_update_trace_fmt.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,uchar *param_2)

{
    *param_2 = 0;
    return;
}


// ===== sym.md_trace_oops_enter.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034d0 (size 8) =====

void sym.md_trace_oops_enter.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,ulong param_2)

{
    bool bVar1;
    
    bVar1 = (obj.minidump_ftrace_in_oops & 1) != 0;
    if (!bVar1) {
        obj.minidump_ftrace_in_oops = 0x1;
    }
    *param_2 = bVar1;
    return;
}


// ===== sym.md_dump_trace_buf.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034d8 (size 8) =====

void sym.md_dump_trace_buf.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,int64_t param_2,uchar *param_3)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.minidump_ftrace_in_oops == 0x1) && ((obj.minidump_ftrace_dump & 1) == 0)) {
        uVar2 = *(param_2 + 0x1010);
        if ((uVar2 < 0x200001) && (_obj.md_ftrace_buf_addr != 0)) {
            iVar1 = 0;
            if (_segment.ehdr + uVar2 < 0x200001) {
                iVar1 = _segment.ehdr;
            }
            memcpy(_segment.ehdr + iVar1,param_2,uVar2);
            _segment.ehdr = iVar1 + uVar2;
        }
        *param_3 = 0;
    }
    return;
}


// ===== sym.minidump_pm_notifier.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034e0 (size 8) =====

ulong sym.minidump_pm_notifier.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uchar *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = &stack0xffffffffffffffe0;
    if ((param_2 == 3) && (*0x80006b8 != '\0')) {
        if (obj.is_vmap_stack == 0x1) {
            iVar2 = sp_el0;
            arg3 = *(*(iVar2 + 0xb18) + 8);
        }
        sym.update_md_stack(0x80005c8,0x80005b4,arg3);
        if (-1 < _obj.md_suspend_context) {
            *0x80006a0 = sp_el0;
            iVar2 = (*0x80006a0 << 8) >> 8;
            uVar1 = iVar2 + 0x8000000000;
            _obj.page_owner_dump_size_write._rs = uVar1 + _strcmp;
            if (uVar1 >> 0x26 != 0) {
                _obj.page_owner_dump_size_write._rs = iVar2 - _strlen;
            }
            iVar3 = sym.msm_minidump_update_region(_obj.md_suspend_context,0x8000688);
            if (iVar3 < 0) {
                _printk(0x8001f27,0x8000688);
            }
        }
    }
    return 0;
}


// ===== sym.md_module_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034e8 (size 8) =====

ulong sym.md_module_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.md_modules_lock);
    if (*param_3 == 0) {
        sym.md_module_process(param_3);
    }
    _raw_spin_unlock(obj.md_modules_lock);
    return 0;
}


// ===== sym.md_panic_handler.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034f0 (size 8) =====

ulong sym.md_panic_handler.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.md_dump_process();
    return 0;
}


// ===== sym.md_die_context_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt @ 0x080034f8 (size 8) =====

ulong sym.md_die_context_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt(ulong param_1,ulong param_2,int64_t *param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.md_in_oops_handler & 1) == 0) {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        obj.md_in_oops_handler = 0x1;
        if (iVar2 != 0) {
            iVar1 = tpidr_el1;
            _segment.ehdr = *(cpu_number + iVar1);
            seq_buf_printf(iVar2,"");
            sym.md_reg_context_data(*param_3);
        }
        obj.md_in_oops_handler = 0x0;
    }
    return 0;
}


// ===== sym.md_current_stack_ipi_handler.cfi_jt @ 0x08003500 (size 8) =====

void sym.md_current_stack_ipi_handler.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    uchar *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = &stack0xfffffffffffffff0;
    iVar1 = sp_el0;
    iVar2 = tpidr_el1;
    if ((*(iVar1 + 0x3c) >> 1 & 1) == 0) {
        if (obj.is_vmap_stack == 0x1) {
            arg3 = *(*(iVar1 + 0xb18) + 8);
        }
        if (0x1f < *(cpu_number + iVar2)) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8005550);
            (*pcVar3)();
        }
        if (obj.md_current_stack_init == 0x1) {
            sym.update_md_stack(*(__per_cpu_offset + *(cpu_number + iVar2) * 8) + 0x800bd10,
                                obj.md_stack_data + *(__per_cpu_offset + *(cpu_number + iVar2) * 8),arg3);
        }
    }
    return;
}


// ===== sym.dma_buf_info_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003508 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.dma_buf_info_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(ulong param_1,ulong param_2,code *param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong extraout_x1;
    ulong extraout_x1_00;
    code *pcVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar6;
    ulong unaff_x30;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
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
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar5 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_30 = 0;
    iVar2 = kstrtoull_from_user(param_2,param_3,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_30,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            param_3 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_procs_size_read;
    pcStack_58 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_d0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_d0);
    pcVar6 = pcVar5;
    pcVar4 = simple_read_from_buffer(extraout_x1,pcVar4,pcVar5,&uStack_d0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_procs_size_write;
    pcStack_e8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    iStack_100 = 0;
    ppuStack_f0 = &puStack_60;
    pcStack_e0 = pcVar5;
    iVar2 = kstrtoull_from_user(extraout_x1_00,pcVar6,0,&iStack_100);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_100,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return pcVar6;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.page_owner_dump_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003510 (size 8) =====

uint64_t sym.page_owner_dump_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                   (ulong param_1,ulong param_2,uint64_t param_3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar7 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    pcVar6 = NULL;
    iStack_30 = 0;
    iVar1 = kstrtoull_from_user(param_2,param_3);
    if (iVar1 == 0) {
        mutex_lock(obj.md_ftrace_buf_current);
        pcVar6 = obj.md_pageowner_dump_addr;
        pcVar7 = obj.md_pageowner_dump_size;
        sym.update_dump_size(0x800167c,iStack_30,0x80006e8,0x8000640);
        mutex_unlock(obj.md_ftrace_buf_current);
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_dump_size_write._rs,"");
        if (iVar1 == 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            param_3 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._8_8_;
    iVar2 = auVar8._0_8_;
    *extraout_x18 = sym.update_dump_size;
    if (*pcVar7 == 0) {
        uVar3 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar2);
        if ((uVar3 & 1) == 0) {
            return uVar3;
        }
        *pcVar7 = iVar5 << 0x14;
        uVar3 = ___ratelimit(obj.update_dump_size._rs,"");
        if (uVar3 == 0) {
            return uVar3;
        }
        uVar4 = 0x8000eeb;
code_r0x0800a8c8:
        uVar3 = _printk(uVar4,iVar2,iVar5);
    }
    else {
        uVar3 = sym.md_unregister_memory_dump(iVar2);
        if ((uVar3 & 1) == 0) {
            uVar3 = ___ratelimit(obj.update_dump_size._rs.92,"");
            if (uVar3 == 0) {
                return uVar3;
            }
            uVar4 = 0x800145d;
        }
        else {
            *pcVar6 = 0;
            if (iVar5 != 0) {
                uVar3 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar2);
                if ((uVar3 & 1) == 0) {
                    uVar3 = sym.md_register_memory_dump(*pcVar7,iVar2);
                    if ((uVar3 & 1) == 0) {
                        uVar3 = ___ratelimit(obj.update_dump_size._rs.90,"");
                        if (uVar3 != 0) {
                            uVar3 = _printk(0x80010a3,iVar2,*pcVar7 >> 0x14);
                        }
                        *pcVar7 = 0;
                        return uVar3;
                    }
                    uVar3 = ___ratelimit(obj.update_dump_size._rs.88,"");
                    if (uVar3 == 0) {
                        return uVar3;
                    }
                    uVar3 = _printk(0x8001439,iVar2,*pcVar7 >> 0x14);
                    return uVar3;
                }
                *pcVar7 = iVar5 << 0x14;
                uVar3 = ___ratelimit(obj.update_dump_size._rs.86,"");
                if (uVar3 == 0) {
                    return uVar3;
                }
                uVar4 = 0x8000e15;
                goto code_r0x0800a8c8;
            }
            *pcVar7 = 0;
            uVar3 = ___ratelimit(obj.update_dump_size._rs.84,"");
            if (uVar3 == 0) {
                return uVar3;
            }
            uVar4 = 0x8001867;
        }
        uVar3 = _printk(uVar4,iVar2);
    }
    return uVar3;
}


// ===== sym.page_owner_call_site_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003518 (size 8) =====

code * sym.page_owner_call_site_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,int64_t param_2,code *param_3)

{
    code *pcVar1;
    uint64_t uVar2;
    ulong *puVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    code *pcVar10;
    uint64_t uVar11;
    code *pcVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint64_t auStack_80 [6];
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if (param_3 < 0x32) {
        uStack_50 = 0;
        auStack_80[4] = 0;
        auStack_80[5] = 0;
        auStack_80[2] = 0;
        auStack_80[3] = 0;
        auStack_80[0] = 0;
        auStack_80[1] = 0;
        __check_object_size(auStack_80,param_3,0);
        pcVar12 = param_3;
        iVar6 = sym._copy_from_user(auStack_80,param_2,param_3);
        if (iVar6 != 0) {
            iVar5 = ___ratelimit(obj.page_owner_call_site_write._rs.106,"");
            if (iVar5 != 0) {
                _printk(0x8001514);
            }
            param_3 = 0xfffffffffffffff2;
            goto code_r0x0800af18;
        }
        if (((_ctype[auStack_80[0] & 0xff] & 3) != 0) || (auStack_80[0] == '_')) {
            pcVar12 = 0x48;
            puVar7 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
            if (puVar7 == NULL) {
                param_3 = 0xfffffffffffffff4;
            }
            else {
                strscpy(puVar7 + 2,auStack_80,0x32);
                uVar8 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
                puVar3 = *0x8000678;
                pcVar12 = obj.accounted_call_site_list;
                uVar9 = __list_add_valid(puVar7,*0x8000678);
                if ((uVar9 & 1) != 0) {
                    *0x8000678 = puVar7;
                    *puVar7 = obj.accounted_call_site_list;
                    puVar7[1] = puVar3;
                    *puVar3 = puVar7;
                }
                _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar8);
            }
            goto code_r0x0800af18;
        }
        iVar5 = ___ratelimit(obj.page_owner_call_site_write._rs.108,"");
        if (iVar5 != 0) {
            uVar8 = 0x8000bb9;
            goto code_r0x0800b020;
        }
    }
    else {
        iVar5 = ___ratelimit(obj.page_owner_call_site_write._rs,"");
        pcVar12 = param_3;
        if (iVar5 != 0) {
            uVar8 = 0x800169f;
code_r0x0800b020:
            _printk(uVar8);
        }
    }
    param_3 = 0xffffffffffffffea;
code_r0x0800af18:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return param_3;
    }
    auVar14 = __stack_chk_fail();
    uVar11 = auVar14._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar7 = sp_el0;
    uVar9 = (uVar11 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (uVar13 = uVar11, (*puVar7 >> 0x1a & 1) != 0)) {
        uVar13 = uVar11 & uVar9;
    }
    bVar4 = CARRY8(uVar13,pcVar12);
    pcVar1 = pcVar12 + uVar13;
    uVar13 = 0;
    if (!bVar4 || pcVar1 == NULL) {
        uVar13 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar1 = 0xffffffffffffffff;
    }
    pcVar10 = pcVar12;
    if (!CARRY8(pcVar1,~uVar13) && !CARRY8(pcVar1 + ~uVar13,bVar4) || pcVar1 == uVar13 + !bVar4) {
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
            uVar13 = daif;
            if ((uVar13 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar13;
        }
        if ((uVar11 & uVar9 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        pcVar10 = __arch_copy_from_user(auVar14._0_8_,uVar11,pcVar12);
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
    }
    if (pcVar10 != NULL) {
        memset(pcVar12 + (auVar14._0_8_ - pcVar10),0,pcVar10);
    }
    return pcVar10;
}


// ===== sym.slab_owner_handle_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003520 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_handle_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(ulong param_1,ulong param_2,code *param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint uStack_140;
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    uint64_t uStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
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
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar5 = 0;
    uStack_30 = 0;
    iVar2 = kstrtoul_from_user(param_2,param_3);
    if (iVar2 == 0) {
        if (uStack_30 != 0) {
            if (_segment.ehdr >> 0xe < uStack_30) {
                iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar2 != 0) {
                    uVar5 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_30);
                }
            }
            else {
                _segment.ehdr = uStack_30 << 10;
            }
        }
    }
    else {
        iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar2 != 0) {
            _printk(0x80021bd);
        }
        param_3 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_info_size_read;
    pcStack_58 = sym.dma_buf_info_size_read;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_d0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_d0);
    pcVar7 = pcVar8;
    pcVar4 = simple_read_from_buffer(extraout_x1,uVar5,pcVar8,&uStack_d0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar6 = &iStack_100;
    *extraout_x18_00 = sym.dma_buf_info_size_write;
    pcStack_e8 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_100 = 0;
    ppuStack_f0 = &puStack_60;
    pcStack_e0 = pcVar8;
    iVar2 = kstrtoull_from_user(extraout_x1_00,pcVar7,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar6 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_100,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_procs_size_read;
    pcStack_128 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_138 = *(iVar1 + 0x5e0);
    uStack_140 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    ppuStack_130 = &ppuStack_f0;
    uStack_120 = extraout_x1;
    uStack_110 = uVar5;
    pcStack_108 = pcVar7;
    snprintf(&uStack_1a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_1a0);
    pcVar8 = pcVar6;
    pcVar7 = simple_read_from_buffer(extraout_x1_01,pcVar4,pcVar6,&uStack_1a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_138) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_procs_size_write;
    pcStack_1b8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_1c8 = *(iVar1 + 0x5e0);
    iStack_1d0 = 0;
    ppuStack_1c0 = &ppuStack_130;
    pcStack_1b0 = pcVar6;
    iVar2 = kstrtoull_from_user(extraout_x1_02,pcVar8,0,&iStack_1d0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_1d0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1c8) {
        return pcVar8;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.page_owner_handle_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003528 (size 8) =====

int64_t sym.page_owner_handle_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                  (ulong param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong extraout_x1;
    uint64_t uVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int iVar8;
    code *pcVar9;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar5 = 0;
    uStack_30 = 0;
    iVar1 = kstrtoul_from_user(param_2,param_3,0);
    if (iVar1 == 0) {
        if (uStack_30 != 0) {
            if (_segment.ehdr >> 0xe < uStack_30) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar5 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_30,uVar5);
                }
            }
            else {
                _segment.ehdr = uStack_30 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        param_3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.page_owner_call_site_read;
    iVar3 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar3 == 0) {
        iVar7 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar3,uVar5,0x8002092,"");
        uVar4 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar8 = 1;
            pcVar9 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar3 + iVar1,0x1000 - iVar1,"",iVar8,pcVar9 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
                    iVar7 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar9 = *pcVar9;
                iVar8 = iVar8 + 1;
            } while (pcVar9 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
        uVar4 = strlen(iVar3);
        iVar1 = simple_read_from_buffer(extraout_x1,uVar5,puVar6,iVar3,uVar4);
        iVar7 = iVar1;
code_r0x0800ae38:
        kfree(iVar3);
    }
    return iVar7;
}


// ===== sym.page_owner_filter_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003530 (size 8) =====

uchar * sym.page_owner_filter_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                  (ulong param_1,ulong param_2,uchar *param_3)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uchar *puVar10;
    int iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    uchar *puStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uVar6 = 0;
    uStack_30 = 0;
    iVar1 = kstrtoul_from_user(param_2,param_3);
    if (iVar1 == 0) {
        if (uStack_30 < 0x10) {
            _segment.ehdr = uStack_30;
            goto code_r0x0800ab1c;
        }
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs.96,"");
        if (iVar1 != 0) {
            uVar3 = 0x8001dca;
            goto code_r0x0800ab14;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs,"");
        if (iVar1 != 0) {
            uVar3 = 0x800136c;
code_r0x0800ab14:
            _printk(uVar3);
        }
    }
    param_3 = 0xffffffffffffffea;
code_r0x0800ab1c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.page_owner_handle_read;
    pcStack_58 = sym.page_owner_handle_read;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_a8);
    puVar10 = puVar8;
    puVar4 = simple_read_from_buffer(extraout_x1,uVar6,puVar8,&uStack_a8,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar9 = &uStack_e0;
    *extraout_x18_00 = sym.page_owner_handle_write;
    pcStack_c8 = sym.page_owner_handle_write;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar7 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    uStack_c0 = uVar6;
    puStack_b8 = puVar8;
    iVar1 = kstrtoul_from_user(extraout_x1_00,puVar10,0);
    if (iVar1 == 0) {
        if (uStack_e0 != 0) {
            if (_segment.ehdr >> 0xe < uStack_e0) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_e0,uVar7);
                }
            }
            else {
                _segment.ehdr = uStack_e0 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        puVar10 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.page_owner_call_site_read;
    iVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar5 == 0) {
        puVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = scnprintf(iVar5,uVar7,0x8002092,"");
        uVar6 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar11 = 1;
            pcVar12 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar5 + iVar1,0x1000 - iVar1,"",iVar11,pcVar12 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar6);
                    puVar10 = 0xfffffffffffffff4;
                    goto code_r0x0800ae38;
                }
                pcVar12 = *pcVar12;
                iVar11 = iVar11 + 1;
            } while (pcVar12 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar6);
        uVar6 = strlen(iVar5);
        iVar1 = simple_read_from_buffer(extraout_x1_01,uVar7,puVar9,iVar5,uVar6);
        puVar10 = iVar1;
code_r0x0800ae38:
        kfree(iVar5);
    }
    return puVar10;
}


// ===== sym.slab_owner_dump_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003538 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_dump_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,ulong param_2,code *param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    ulong extraout_x1_06;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    code *pcStack_310;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    uint uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    ulong uStack_280;
    uint64_t uStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    code *pcStack_240;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_1b0;
    uint64_t uStack_1a0;
    code *pcStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    code *pcStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    ulong **ppuStack_110;
    code *pcStack_108;
    ulong uStack_100;
    code *pcStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar6 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    pcVar7 = NULL;
    iStack_30 = 0;
    iVar3 = kstrtoull_from_user(param_2,param_3);
    if (iVar3 == 0) {
        pcVar7 = obj.md_slabowner_dump_addr;
        pcVar6 = obj.md_slabowner_dump_size;
        sym.update_dump_size(0x80014b4,iStack_30,0x80006f0,0x8000648);
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_dump_size_write._rs,"");
        if (iVar3 == 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            param_3 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.slab_owner_filter_read;
    pcStack_58 = sym.slab_owner_filter_read;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_a8);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1,pcVar7,pcVar6,&uStack_a8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_e0;
    *extraout_x18_00 = sym.slab_owner_filter_write;
    pcStack_c8 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    pcStack_c0 = pcVar6;
    iVar3 = kstrtoul_from_user(extraout_x1_00,pcVar11);
    if (iVar3 == 0) {
        if (uStack_e0 != 0) {
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = 1;
            do {
                if ((uVar10 & uStack_e0) != 0) {
                    if (0xd < uVar9) {
    //WARNING: Does not return
                        pcVar7 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar7)();
                    }
                    if (*(kmalloc_caches + uVar9 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar8 << 1;
                uVar8 = uVar1;
                uVar9 = uVar9 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_e0);
        }
        _segment.ehdr = uStack_e0;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.slab_owner_handle_read;
    pcStack_108 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    ppuStack_110 = &ppuStack_d0;
    uStack_100 = extraout_x1;
    pcStack_f0 = pcVar7;
    pcStack_e8 = pcVar11;
    snprintf(&uStack_158,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_158);
    pcVar7 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_01,uVar8,pcVar5,&uStack_158,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_190;
    *extraout_x18_02 = sym.slab_owner_handle_write;
    pcStack_178 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_188 = *(iVar2 + 0x5e0);
    uVar9 = 0;
    uStack_190 = 0;
    ppuStack_180 = &ppuStack_110;
    uStack_170 = uVar8;
    pcStack_168 = pcVar5;
    iVar3 = kstrtoul_from_user(extraout_x1_02,pcVar7);
    if (iVar3 == 0) {
        if (uStack_190 != 0) {
            uVar8 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_190) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar9 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_190);
                }
            }
            else {
                _segment.ehdr = uStack_190 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar7 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_188) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_info_size_read;
    pcStack_1b8 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_1c8 = *(iVar2 + 0x5e0);
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    ppuStack_1c0 = &ppuStack_180;
    uStack_1b0 = extraout_x1_01;
    uStack_1a0 = uVar8;
    pcStack_198 = pcVar7;
    snprintf(&uStack_230,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_230);
    pcVar7 = pcVar6;
    pcVar11 = simple_read_from_buffer(extraout_x1_03,uVar9,pcVar6,&uStack_230,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    pcVar5 = &iStack_260;
    *extraout_x18_04 = sym.dma_buf_info_size_write;
    pcStack_248 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    pcVar11 = NULL;
    iStack_260 = 0;
    ppuStack_250 = &ppuStack_1c0;
    pcStack_240 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_04,pcVar7,0);
    if (iVar3 == 0) {
        pcVar11 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_260,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_05 = sym.dma_buf_procs_size_read;
    pcStack_288 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_298 = *(iVar2 + 0x5e0);
    uStack_2a0 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    ppuStack_290 = &ppuStack_250;
    uStack_280 = extraout_x1_03;
    uStack_270 = uVar9;
    pcStack_268 = pcVar7;
    snprintf(&uStack_300,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_300);
    pcVar7 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_05,pcVar11,pcVar5,&uStack_300,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_298) {
        return pcVar6;
    }
    __stack_chk_fail();
    *extraout_x18_06 = sym.dma_buf_procs_size_write;
    pcStack_318 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_328 = *(iVar2 + 0x5e0);
    iStack_330 = 0;
    ppuStack_320 = &ppuStack_290;
    pcStack_310 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_06,pcVar7,0,&iStack_330);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_330,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_328) {
        return pcVar7;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_filter_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003540 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_filter_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(ulong param_1,ulong param_2,code *param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    uint64_t uVar6;
    uint64_t uVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    code *pcStack_268;
    code *pcStack_260;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    uint64_t uStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
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
    uint uStack_120;
    int64_t iStack_118;
    ulong **ppuStack_110;
    code *pcStack_108;
    ulong uStack_100;
    uint64_t uStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    code *pcStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar11 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uVar6 = 0;
    uStack_30 = 0;
    iVar3 = kstrtoul_from_user(param_2,param_3);
    if (iVar3 == 0) {
        if (uStack_30 != 0) {
            uVar9 = 1;
            uVar7 = 0;
            uVar6 = 1;
            do {
                if ((uVar9 & uStack_30) != 0) {
                    if (0xd < uVar7) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar7 * 8) == 0) {
                        _printk(0x800194a);
                        param_3 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar6 << 1;
                uVar6 = uVar1;
                uVar7 = uVar7 + 1;
                uVar9 = uVar1;
            } while (uVar9 <= uStack_30);
        }
        _segment.ehdr = uStack_30;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            param_3 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.slab_owner_handle_read;
    pcStack_58 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_a8);
    pcVar10 = pcVar11;
    pcVar5 = simple_read_from_buffer(extraout_x1,uVar6,pcVar11,&uStack_a8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_e0;
    *extraout_x18_00 = sym.slab_owner_handle_write;
    pcStack_c8 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uVar7 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    uStack_c0 = uVar6;
    pcStack_b8 = pcVar11;
    iVar3 = kstrtoul_from_user(extraout_x1_00,pcVar10);
    if (iVar3 == 0) {
        if (uStack_e0 != 0) {
            uVar6 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_e0) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_e0);
                }
            }
            else {
                _segment.ehdr = uStack_e0 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar10 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_info_size_read;
    pcStack_108 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    ppuStack_110 = &ppuStack_d0;
    uStack_100 = extraout_x1;
    uStack_f0 = uVar6;
    pcStack_e8 = pcVar10;
    snprintf(&uStack_180,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_180);
    pcVar11 = pcVar5;
    pcVar10 = simple_read_from_buffer(extraout_x1_01,uVar7,pcVar5,&uStack_180,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return pcVar10;
    }
    __stack_chk_fail();
    pcVar8 = &iStack_1b0;
    *extraout_x18_02 = sym.dma_buf_info_size_write;
    pcStack_198 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_1a8 = *(iVar2 + 0x5e0);
    pcVar10 = NULL;
    iStack_1b0 = 0;
    ppuStack_1a0 = &ppuStack_110;
    pcStack_190 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_02,pcVar11,0);
    if (iVar3 == 0) {
        pcVar10 = obj.md_dma_buf_info_addr;
        pcVar8 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_1b0,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1a8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_procs_size_read;
    pcStack_1d8 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    uStack_1f0 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    ppuStack_1e0 = &ppuStack_1a0;
    uStack_1d0 = extraout_x1_01;
    uStack_1c0 = uVar7;
    pcStack_1b8 = pcVar11;
    snprintf(&uStack_250,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_250);
    pcVar11 = pcVar8;
    pcVar10 = simple_read_from_buffer(extraout_x1_03,pcVar10,pcVar8,&uStack_250,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1e8) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_procs_size_write;
    pcStack_268 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_278 = *(iVar2 + 0x5e0);
    iStack_280 = 0;
    ppuStack_270 = &ppuStack_1e0;
    pcStack_260 = pcVar8;
    iVar3 = kstrtoull_from_user(extraout_x1_04,pcVar11,0,&iStack_280);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_280,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_278) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_procs_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003548 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.dma_buf_procs_size_write.59cc79415ca64e62050c82d849eb1ae1.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    iVar2 = kstrtoull_from_user(param_2,param_3,0,&iStack_30);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_30,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            param_3 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            param_3 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.page_owner_call_site_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003550 (size 8) =====

int64_t sym.page_owner_call_site_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar3 == 0) {
        iVar5 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar3,param_3,0x8002092,"");
        uVar4 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar6 = 1;
            pcVar7 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar3 + iVar1,0x1000 - iVar1,"",iVar6,pcVar7 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
                    iVar5 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar7 = *pcVar7;
                iVar6 = iVar6 + 1;
            } while (pcVar7 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
        uVar4 = strlen(iVar3);
        iVar1 = simple_read_from_buffer(param_2,param_3,param_4,iVar3,uVar4);
        iVar5 = iVar1;
code_r0x0800ae38:
        kfree(iVar3);
    }
    return iVar5;
}


// ===== sym.slab_owner_filter_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003558 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_filter_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    uint64_t uVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    code *pcStack_2e8;
    code *pcStack_2e0;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    ulong uStack_250;
    uint64_t uStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    code *pcStack_210;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uint uStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    ulong uStack_180;
    uint64_t uStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    int64_t iStack_158;
    ulong **ppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    code *pcStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    ulong uStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
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
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_78);
    pcVar11 = param_4;
    pcVar5 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_78,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_b0;
    *extraout_x18 = sym.slab_owner_filter_write;
    pcStack_98 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_a8 = *(iVar2 + 0x5e0);
    uVar7 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    pcStack_90 = param_4;
    iVar3 = kstrtoul_from_user(extraout_x1,pcVar11);
    if (iVar3 == 0) {
        if (uStack_b0 != 0) {
            uVar10 = 1;
            uVar8 = 0;
            uVar7 = 1;
            do {
                if ((uVar10 & uStack_b0) != 0) {
                    if (0xd < uVar8) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar8 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar7 << 1;
                uVar7 = uVar1;
                uVar8 = uVar8 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_b0);
        }
        _segment.ehdr = uStack_b0;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_a8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.slab_owner_handle_read;
    pcStack_d8 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_e8 = *(iVar2 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_e0 = &puStack_a0;
    uStack_d0 = param_2;
    uStack_c0 = param_3;
    pcStack_b8 = pcVar11;
    snprintf(&uStack_128,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_128);
    pcVar11 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_00,uVar7,pcVar5,&uStack_128,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_e8) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_160;
    *extraout_x18_01 = sym.slab_owner_handle_write;
    pcStack_148 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_160 = 0;
    ppuStack_150 = &ppuStack_e0;
    uStack_140 = uVar7;
    pcStack_138 = pcVar5;
    iVar3 = kstrtoul_from_user(extraout_x1_01,pcVar11);
    if (iVar3 == 0) {
        if (uStack_160 != 0) {
            uVar7 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_160) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar8 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_160);
                }
            }
            else {
                _segment.ehdr = uStack_160 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar11 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_info_size_read;
    pcStack_188 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_198 = *(iVar2 + 0x5e0);
    uStack_1a0 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    ppuStack_190 = &ppuStack_150;
    uStack_180 = extraout_x1_00;
    uStack_170 = uVar7;
    pcStack_168 = pcVar11;
    snprintf(&uStack_200,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_200);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_02,uVar8,pcVar6,&uStack_200,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_198) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar9 = &iStack_230;
    *extraout_x18_03 = sym.dma_buf_info_size_write;
    pcStack_218 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_228 = *(iVar2 + 0x5e0);
    pcVar5 = NULL;
    iStack_230 = 0;
    ppuStack_220 = &ppuStack_190;
    pcStack_210 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_03,pcVar11,0);
    if (iVar3 == 0) {
        pcVar5 = obj.md_dma_buf_info_addr;
        pcVar9 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_230,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_228) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_procs_size_read;
    pcStack_258 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    ppuStack_260 = &ppuStack_220;
    uStack_250 = extraout_x1_02;
    uStack_240 = uVar8;
    pcStack_238 = pcVar11;
    snprintf(&uStack_2d0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_2d0);
    pcVar11 = pcVar9;
    pcVar5 = simple_read_from_buffer(extraout_x1_04,pcVar5,pcVar9,&uStack_2d0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return pcVar5;
    }
    __stack_chk_fail();
    *extraout_x18_05 = sym.dma_buf_procs_size_write;
    pcStack_2e8 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_2f8 = *(iVar2 + 0x5e0);
    iStack_300 = 0;
    ppuStack_2f0 = &ppuStack_260;
    pcStack_2e0 = pcVar9;
    iVar3 = kstrtoull_from_user(extraout_x1_05,pcVar11,0,&iStack_300);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_300,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2f8) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.page_owner_filter_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003560 (size 8) =====

uchar * sym.page_owner_filter_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    uchar *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uchar *puVar10;
    int iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uint64_t uStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uchar *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    ulong uStack_c0;
    uchar *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uchar *puStack_90;
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
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr);
    uVar3 = strlen(&uStack_78);
    puVar10 = param_4;
    puVar4 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_78,uVar3);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar8 = &uStack_b0;
    *extraout_x18 = sym.page_owner_filter_write;
    pcStack_98 = sym.page_owner_filter_write;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    uVar3 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    puStack_90 = param_4;
    iVar1 = kstrtoul_from_user(extraout_x1,puVar10);
    if (iVar1 == 0) {
        if (uStack_b0 < 0x10) {
            _segment.ehdr = uStack_b0;
            goto code_r0x0800ab1c;
        }
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs.96,"");
        if (iVar1 != 0) {
            uVar5 = 0x8001dca;
            goto code_r0x0800ab14;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs,"");
        if (iVar1 != 0) {
            uVar5 = 0x800136c;
code_r0x0800ab14:
            _printk(uVar5);
        }
    }
    puVar10 = 0xffffffffffffffea;
code_r0x0800ab1c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.page_owner_handle_read;
    pcStack_d8 = sym.page_owner_handle_read;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_e0 = &puStack_a0;
    uStack_d0 = param_2;
    uStack_c0 = param_3;
    puStack_b8 = puVar10;
    snprintf(&uStack_128,0x40,"",_segment.ehdr >> 10);
    uVar5 = strlen(&uStack_128);
    puVar10 = puVar8;
    puVar4 = simple_read_from_buffer(extraout_x1_00,uVar3,puVar8,&uStack_128,uVar5);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar9 = &uStack_160;
    *extraout_x18_01 = sym.page_owner_handle_write;
    pcStack_148 = sym.page_owner_handle_write;
    iVar6 = sp_el0;
    iStack_158 = *(iVar6 + 0x5e0);
    uVar7 = 0;
    uStack_160 = 0;
    pppuStack_150 = &ppuStack_e0;
    uStack_140 = uVar3;
    puStack_138 = puVar8;
    iVar1 = kstrtoul_from_user(extraout_x1_01,puVar10,0);
    if (iVar1 == 0) {
        if (uStack_160 != 0) {
            if (_segment.ehdr >> 0xe < uStack_160) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_160,uVar7);
                }
            }
            else {
                _segment.ehdr = uStack_160 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        puVar10 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_158) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.page_owner_call_site_read;
    iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar6 == 0) {
        puVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = scnprintf(iVar6,uVar7,0x8002092,"");
        uVar3 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar11 = 1;
            pcVar12 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar6 + iVar1,0x1000 - iVar1,"",iVar11,pcVar12 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
                    puVar10 = 0xfffffffffffffff4;
                    goto code_r0x0800ae38;
                }
                pcVar12 = *pcVar12;
                iVar11 = iVar11 + 1;
            } while (pcVar12 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
        uVar3 = strlen(iVar6);
        iVar1 = simple_read_from_buffer(extraout_x1_02,uVar7,puVar9,iVar6,uVar3);
        puVar10 = iVar1;
code_r0x0800ae38:
        kfree(iVar6);
    }
    return puVar10;
}


// ===== sym.slab_owner_dump_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003568 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_dump_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    code *pcVar7;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    ulong extraout_x1_06;
    ulong extraout_x1_07;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
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
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong **ppuStack_3c0;
    code *pcStack_3b8;
    code *pcStack_3b0;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    uint uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    ulong uStack_320;
    uint64_t uStack_310;
    code *pcStack_308;
    int64_t iStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    code *pcStack_2e8;
    code *pcStack_2e0;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    ulong uStack_250;
    uint64_t uStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    code *pcStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    code *pcStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    code *pcStack_160;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_f0;
    ulong uStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_a0);
    pcVar11 = param_4;
    pcVar5 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_d0;
    *extraout_x18 = sym.slab_owner_dump_size_write;
    pcStack_b8 = sym.slab_owner_dump_size_write;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    pcVar5 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    pcStack_b0 = param_4;
    iVar3 = kstrtoull_from_user(extraout_x1,pcVar11);
    if (iVar3 == 0) {
        pcVar5 = obj.md_slabowner_dump_addr;
        pcVar7 = obj.md_slabowner_dump_size;
        sym.update_dump_size(0x80014b4,iStack_d0,0x80006f0,0x8000648);
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_dump_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.slab_owner_filter_read;
    pcStack_f8 = sym.slab_owner_filter_read;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    ppuStack_100 = &puStack_c0;
    uStack_f0 = param_2;
    uStack_e0 = param_3;
    pcStack_d8 = pcVar11;
    snprintf(&uStack_148,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_148);
    pcVar11 = pcVar7;
    pcVar6 = simple_read_from_buffer(extraout_x1_00,pcVar5,pcVar7,&uStack_148,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_180;
    *extraout_x18_01 = sym.slab_owner_filter_write;
    pcStack_168 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_178 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_180 = 0;
    ppuStack_170 = &ppuStack_100;
    pcStack_160 = pcVar7;
    iVar3 = kstrtoul_from_user(extraout_x1_01,pcVar11);
    if (iVar3 == 0) {
        if (uStack_180 != 0) {
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = 1;
            do {
                if ((uVar10 & uStack_180) != 0) {
                    if (0xd < uVar9) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar9 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar8 << 1;
                uVar8 = uVar1;
                uVar9 = uVar9 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_180);
        }
        _segment.ehdr = uStack_180;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_178) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.slab_owner_handle_read;
    pcStack_1a8 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuStack_1b0 = &ppuStack_170;
    uStack_1a0 = extraout_x1_00;
    pcStack_190 = pcVar5;
    pcStack_188 = pcVar11;
    snprintf(&uStack_1f8,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_1f8);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_02,uVar8,pcVar6,&uStack_1f8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1b8) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_230;
    *extraout_x18_03 = sym.slab_owner_handle_write;
    pcStack_218 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_228 = *(iVar2 + 0x5e0);
    uVar9 = 0;
    uStack_230 = 0;
    ppuStack_220 = &ppuStack_1b0;
    uStack_210 = uVar8;
    pcStack_208 = pcVar6;
    iVar3 = kstrtoul_from_user(extraout_x1_03,pcVar11);
    if (iVar3 == 0) {
        if (uStack_230 != 0) {
            uVar8 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_230) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar9 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_230);
                }
            }
            else {
                _segment.ehdr = uStack_230 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar11 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_228) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_info_size_read;
    pcStack_258 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    ppuStack_260 = &ppuStack_220;
    uStack_250 = extraout_x1_02;
    uStack_240 = uVar8;
    pcStack_238 = pcVar11;
    snprintf(&uStack_2d0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_2d0);
    pcVar11 = pcVar5;
    pcVar7 = simple_read_from_buffer(extraout_x1_04,uVar9,pcVar5,&uStack_2d0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return pcVar7;
    }
    __stack_chk_fail();
    pcVar6 = &iStack_300;
    *extraout_x18_05 = sym.dma_buf_info_size_write;
    pcStack_2e8 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_2f8 = *(iVar2 + 0x5e0);
    pcVar7 = NULL;
    iStack_300 = 0;
    ppuStack_2f0 = &ppuStack_260;
    pcStack_2e0 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_05,pcVar11,0);
    if (iVar3 == 0) {
        pcVar7 = obj.md_dma_buf_info_addr;
        pcVar6 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_300,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2f8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_06 = sym.dma_buf_procs_size_read;
    pcStack_328 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_338 = *(iVar2 + 0x5e0);
    uStack_340 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    ppuStack_330 = &ppuStack_2f0;
    uStack_320 = extraout_x1_04;
    uStack_310 = uVar9;
    pcStack_308 = pcVar11;
    snprintf(&uStack_3a0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_3a0);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_06,pcVar7,pcVar6,&uStack_3a0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_338) {
        return pcVar5;
    }
    __stack_chk_fail();
    *extraout_x18_07 = sym.dma_buf_procs_size_write;
    pcStack_3b8 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_3c8 = *(iVar2 + 0x5e0);
    iStack_3d0 = 0;
    ppuStack_3c0 = &ppuStack_330;
    pcStack_3b0 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_07,pcVar11,0,&iStack_3d0);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_3d0,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_3c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_info_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003570 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.dma_buf_info_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar6;
    ulong unaff_x30;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    code *pcStack_180;
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
    uint uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ulong uStack_f0;
    ulong uStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_a0);
    pcVar6 = param_4;
    pcVar4 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar5 = &iStack_d0;
    *extraout_x18 = sym.dma_buf_info_size_write;
    pcStack_b8 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    pcStack_b0 = param_4;
    iVar2 = kstrtoull_from_user(extraout_x1,pcVar6,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_d0,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return pcVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_procs_size_read;
    pcStack_f8 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    uStack_110 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    ppuStack_100 = &puStack_c0;
    uStack_f0 = param_2;
    uStack_e0 = param_3;
    pcStack_d8 = pcVar6;
    snprintf(&uStack_170,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_170);
    pcVar6 = pcVar5;
    pcVar4 = simple_read_from_buffer(extraout_x1_00,pcVar4,pcVar5,&uStack_170,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_procs_size_write;
    pcStack_188 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_198 = *(iVar1 + 0x5e0);
    iStack_1a0 = 0;
    ppuStack_190 = &ppuStack_100;
    pcStack_180 = pcVar5;
    iVar2 = kstrtoull_from_user(extraout_x1_01,pcVar6,0,&iStack_1a0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_1a0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_198) {
        return pcVar6;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_procs_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003578 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.dma_buf_procs_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar4;
    ulong unaff_x30;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_a0);
    uVar4 = param_4;
    uVar3 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_procs_size_write;
    pcStack_b8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    uStack_b0 = param_4;
    iVar2 = kstrtoull_from_user(extraout_x1,uVar4,0,&iStack_d0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_d0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            uVar4 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            uVar4 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return uVar4;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_handle_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003580 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_handle_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                 (ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    code *pcVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    uint64_t uVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar8;
    ulong unaff_x30;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    code *pcStack_230;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    uint uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    uint64_t uStack_190;
    code *pcStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    code *pcStack_160;
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
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong uStack_d0;
    ulong uStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    code *pcStack_88;
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
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_78);
    pcVar8 = param_4;
    pcVar4 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_78,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar4 = &uStack_b0;
    *extraout_x18 = sym.slab_owner_handle_write;
    pcStack_98 = sym.slab_owner_handle_write;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uVar6 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uStack_90 = param_3;
    pcStack_88 = param_4;
    iVar2 = kstrtoul_from_user(extraout_x1,pcVar8);
    if (iVar2 == 0) {
        if (uStack_b0 != 0) {
            param_3 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_b0) {
                iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar2 != 0) {
                    uVar6 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_b0);
                }
            }
            else {
                _segment.ehdr = uStack_b0 << 10;
            }
        }
    }
    else {
        iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar2 != 0) {
            _printk(0x80021bd);
        }
        pcVar8 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_info_size_read;
    pcStack_d8 = sym.dma_buf_info_size_read;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    ppuStack_e0 = &puStack_a0;
    uStack_d0 = param_2;
    uStack_c0 = param_3;
    pcStack_b8 = pcVar8;
    snprintf(&uStack_150,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_150);
    pcVar8 = pcVar4;
    pcVar5 = simple_read_from_buffer(extraout_x1_00,uVar6,pcVar4,&uStack_150,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_180;
    *extraout_x18_01 = sym.dma_buf_info_size_write;
    pcStack_168 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_178 = *(iVar1 + 0x5e0);
    pcVar5 = NULL;
    iStack_180 = 0;
    ppuStack_170 = &ppuStack_e0;
    pcStack_160 = pcVar4;
    iVar2 = kstrtoull_from_user(extraout_x1_01,pcVar8,0);
    if (iVar2 == 0) {
        pcVar5 = obj.md_dma_buf_info_addr;
        pcVar7 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_180,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_178) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_procs_size_read;
    pcStack_1a8 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    ppuStack_1b0 = &ppuStack_170;
    uStack_1a0 = extraout_x1_00;
    uStack_190 = uVar6;
    pcStack_188 = pcVar8;
    snprintf(&uStack_220,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_220);
    pcVar8 = pcVar7;
    pcVar4 = simple_read_from_buffer(extraout_x1_02,pcVar5,pcVar7,&uStack_220,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_procs_size_write;
    pcStack_238 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_248 = *(iVar1 + 0x5e0);
    iStack_250 = 0;
    ppuStack_240 = &ppuStack_1b0;
    pcStack_230 = pcVar7;
    iVar2 = kstrtoull_from_user(extraout_x1_03,pcVar8,0,&iStack_250);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_250,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_248) {
        return pcVar8;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.page_owner_handle_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003588 (size 8) =====

int64_t sym.page_owner_handle_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    uint64_t uVar6;
    uint64_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int iVar9;
    code *pcVar10;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_90;
    int64_t iStack_88;
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
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_78);
    iVar8 = param_4;
    iVar4 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_78,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
    puVar7 = &uStack_b0;
    *extraout_x18 = sym.page_owner_handle_write;
    pcStack_98 = sym.page_owner_handle_write;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    uVar6 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    uStack_90 = param_3;
    iStack_88 = param_4;
    iVar1 = kstrtoul_from_user(extraout_x1,iVar8,0);
    if (iVar1 == 0) {
        if (uStack_b0 != 0) {
            if (_segment.ehdr >> 0xe < uStack_b0) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar6 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_b0,uVar6);
                }
            }
            else {
                _segment.ehdr = uStack_b0 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        iVar8 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.page_owner_call_site_read;
    iVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar5 == 0) {
        iVar8 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar5,uVar6,0x8002092,"");
        uVar3 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar9 = 1;
            pcVar10 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar5 + iVar1,0x1000 - iVar1,"",iVar9,pcVar10 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
                    iVar8 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar10 = *pcVar10;
                iVar9 = iVar9 + 1;
            } while (pcVar10 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
        uVar3 = strlen(iVar5);
        iVar1 = simple_read_from_buffer(extraout_x1_00,uVar6,puVar7,iVar5,uVar3);
        iVar8 = iVar1;
code_r0x0800ae38:
        kfree(iVar5);
    }
    return iVar8;
}


// ===== sym.page_owner_dump_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt @ 0x08003590 (size 8) =====

uint64_t sym.page_owner_dump_size_read.59cc79415ca64e62050c82d849eb1ae1.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong extraout_x1;
    int64_t iVar5;
    code *pcVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar2 = strlen(&uStack_a0);
    uVar8 = param_4;
    uVar3 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_a0,uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_d0;
    *extraout_x18 = sym.page_owner_dump_size_write;
    pcStack_b8 = sym.page_owner_dump_size_write;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    pcVar6 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    uStack_b0 = param_3;
    uStack_a8 = param_4;
    iVar1 = kstrtoull_from_user(extraout_x1,uVar8);
    if (iVar1 == 0) {
        mutex_lock(obj.md_ftrace_buf_current);
        pcVar6 = obj.md_pageowner_dump_addr;
        pcVar7 = obj.md_pageowner_dump_size;
        sym.update_dump_size(0x800167c,iStack_d0,0x80006e8,0x8000640);
        mutex_unlock(obj.md_ftrace_buf_current);
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_dump_size_write._rs,"");
        if (iVar1 == 0) {
            uVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            uVar8 = 0xffffffffffffffea;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return uVar8;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._8_8_;
    iVar4 = auVar9._0_8_;
    *extraout_x18_00 = sym.update_dump_size;
    if (*pcVar7 == 0) {
        uVar8 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar4);
        if ((uVar8 & 1) == 0) {
            return uVar8;
        }
        *pcVar7 = iVar5 << 0x14;
        uVar8 = ___ratelimit(obj.update_dump_size._rs,"");
        if (uVar8 == 0) {
            return uVar8;
        }
        uVar2 = 0x8000eeb;
code_r0x0800a8c8:
        uVar8 = _printk(uVar2,iVar4,iVar5);
    }
    else {
        uVar8 = sym.md_unregister_memory_dump(iVar4);
        if ((uVar8 & 1) == 0) {
            uVar8 = ___ratelimit(obj.update_dump_size._rs.92,"");
            if (uVar8 == 0) {
                return uVar8;
            }
            uVar2 = 0x800145d;
        }
        else {
            *pcVar6 = 0;
            if (iVar5 != 0) {
                uVar8 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar4);
                if ((uVar8 & 1) == 0) {
                    uVar8 = sym.md_register_memory_dump(*pcVar7,iVar4);
                    if ((uVar8 & 1) == 0) {
                        uVar8 = ___ratelimit(obj.update_dump_size._rs.90,"");
                        if (uVar8 != 0) {
                            uVar8 = _printk(0x80010a3,iVar4,*pcVar7 >> 0x14);
                        }
                        *pcVar7 = 0;
                        return uVar8;
                    }
                    uVar8 = ___ratelimit(obj.update_dump_size._rs.88,"");
                    if (uVar8 == 0) {
                        return uVar8;
                    }
                    uVar8 = _printk(0x8001439,iVar4,*pcVar7 >> 0x14);
                    return uVar8;
                }
                *pcVar7 = iVar5 << 0x14;
                uVar8 = ___ratelimit(obj.update_dump_size._rs.86,"");
                if (uVar8 == 0) {
                    return uVar8;
                }
                uVar2 = 0x8000e15;
                goto code_r0x0800a8c8;
            }
            *pcVar7 = 0;
            uVar8 = ___ratelimit(obj.update_dump_size._rs.84,"");
            if (uVar8 == 0) {
                return uVar8;
            }
            uVar2 = 0x8001867;
        }
        uVar8 = _printk(uVar2,iVar4);
    }
    return uVar8;
}


// ===== sym.md_get_region @ 0x08003598 (size 336) =====

void sym.md_get_region(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    code cVar5;
    code *pcVar6;
    int iVar7;
    ulong *in_x8;
    ulong *in_x18;
    int64_t iVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar5 = obj.is_rm_minidump;
    in_x8[4] = 0;
    in_x8[5] = 0;
    in_x8[2] = 0;
    in_x8[3] = 0;
    *in_x8 = 0;
    in_x8[1] = 0;
    if (cVar5 == 0x0) {
        if ((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (uVar12 = _segment.ehdr, 0 < _segment.ehdr)) {
            uVar11 = 0;
            puVar9 = CONCAT44(*0x8000004,_segment.ehdr) + 0x20;
            do {
                if (uVar11 == 0xca) goto code_r0x080036e4;
                iVar7 = strcmp(puVar9,arg1);
                if (iVar7 == 0) {
                    uVar1 = puVar9[1];
                    *in_x8 = *puVar9;
                    in_x8[1] = uVar1;
                    uVar2 = puVar9[5];
                    uVar1 = puVar9[2];
                    uVar3 = puVar9[3];
                    in_x8[4] = puVar9[4];
                    in_x8[5] = uVar2;
                    in_x8[2] = uVar1;
                    in_x8[3] = uVar3;
                    return;
                }
                uVar11 = uVar11 + 1;
                puVar9 = puVar9 + 6;
            } while (uVar12 != uVar11);
        }
    }
    else if ((CONCAT44(*0x8000004,_segment.ehdr) != 0) && (uVar12 = _segment.ehdr, 0 < _segment.ehdr)) {
        iVar8 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
        iVar10 = -0x2c30;
        iVar4 = CONCAT44(*0x8000004,_segment.ehdr);
        do {
            if (iVar10 == 0) {
code_r0x080036e4:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x80036e8);
                (*pcVar6)();
            }
            iVar7 = strcmp(iVar8,arg1);
            if (iVar7 == 0) {
                strscpy();
                iVar10 = *(iVar4 + 0x20) + iVar4 + iVar10;
                in_x8[4] = *(iVar10 + 0x2c78);
                in_x8[3] = *(iVar10 + 0x2c80);
                in_x8[5] = *(iVar10 + 0x2c88);
                return;
            }
            iVar10 = iVar10 + 0x38;
            iVar8 = iVar8 + 0x14;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    return;
}


// ===== sym.msm_minidump_clear_headers @ 0x080036e8 (size 884) =====

ulong sym.msm_minidump_clear_headers(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    int iVar7;
    char *pcVar8;
    ulong *puVar9;
    int *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *puVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = _segment.ehdr;
    iVar15 = *(arg1 + 0x28);
    uVar4 = *(_segment.ehdr + 0x38);
    if (uVar4 != 0) {
        uVar17 = 0;
        iVar14 = *(_segment.ehdr + 0x20) + _segment.ehdr;
        do {
            if ((*(iVar14 + 0x18) == *(arg1 + 0x20)) && (*(iVar14 + 0x28) == iVar15)) {
                if (uVar17 != uVar4) {
                    uVar4 = *(_segment.ehdr + 0x3c);
                    if (uVar4 != 0) {
                        uVar16 = 0;
                        uVar5 = *(_segment.ehdr + 0x3e);
                        puVar18 = *(_segment.ehdr + 0x28) + _segment.ehdr;
                        puVar1 = puVar18 + uVar5 * 0x10 + 6;
                        goto code_r0x080037c0;
                    }
                }
                break;
            }
            uVar17 = uVar17 + 1;
            iVar14 = iVar14 + 0x38;
        } while (uVar4 != uVar17);
    }
    goto code_r0x0800393c;
    while( true ) {
        uVar16 = uVar16 + 1;
        puVar18 = puVar18 + 0x10;
        if (uVar4 == uVar16) break;
code_r0x080037c0:
        if ((((uVar5 != 0) &&
             (iVar12 = uVar6 + *puVar1 + *puVar18, (uVar6 + *puVar1 != 0 && *puVar18 <= uVar6) && iVar12 != 0)) &&
            (iVar7 = strcmp(iVar12,arg1), iVar7 == 0)) &&
           ((*(puVar18 + 4) == *(arg1 + 0x18) && (*(puVar18 + 8) == iVar15)))) {
            if (uVar16 != uVar4) {
                if (*(puVar18 + 6) == *(iVar14 + 8)) {
                    iVar7 = strlen(iVar12);
                    iVar7 = iVar7 + 1;
                    memmove(iVar12,iVar12 + iVar7,uVar6 - *puVar18);
                    uVar11 = uVar17 & 0xffffffff;
                    _segment.ehdr = _segment.ehdr - iVar7;
                    iVar14 = *(uVar6 + 0x20) + uVar6;
                    if (uVar17 < *(uVar6 + 0x38) - 1) {
                        puVar9 = iVar14 + uVar11 * 0x38;
                        puVar9[5] = puVar9[0xc];
                        puVar9[6] = puVar9[0xd];
                        puVar9[3] = puVar9[10];
                        puVar9[4] = puVar9[0xb];
                        puVar13 = puVar9 + 7;
                        *puVar9 = *puVar13;
                        puVar9[1] = puVar9[8] - iVar15;
                        puVar9[2] = puVar9[9];
                        iVar14 = uVar11 + 1;
                        if (iVar14 < *(uVar6 + 0x38) - 1) {
                            iVar12 = uVar11 * 0x38;
                            do {
                                iVar14 = iVar14 + 1;
                                iVar2 = *(uVar6 + 0x20) + uVar6;
                                iVar3 = iVar2 + iVar12;
                                iVar12 = iVar12 + 0x38;
                                *(iVar3 + 0x60) = *(iVar3 + 0x98);
                                *(iVar3 + 0x68) = *(iVar3 + 0xa0);
                                *(iVar3 + 0x50) = *(iVar3 + 0x88);
                                *(iVar3 + 0x58) = *(iVar3 + 0x90);
                                *(iVar3 + 0x38) = *(iVar3 + 0x70);
                                *(iVar3 + 0x40) = *(iVar3 + 0x78) - iVar15;
                                *(iVar3 + 0x48) = *(iVar3 + 0x80);
                            } while (iVar14 < *(uVar6 + 0x38) - 1);
                            puVar13 = iVar2 + iVar12 + 0x38;
                        }
                    }
                    else {
                        puVar13 = iVar14 + uVar11 * 0x38;
                    }
                    puVar13[5] = 0;
                    puVar13[6] = 0;
                    uVar17 = uVar16 & 0xffffffff;
                    puVar13[3] = 0;
                    puVar13[4] = 0;
                    puVar13[1] = 0;
                    puVar13[2] = 0;
                    *puVar13 = 0;
                    iVar14 = *(uVar6 + 0x28);
                    *(uVar6 + 0x38) = *(uVar6 + 0x38) + -1;
                    if (uVar16 < *(uVar6 + 0x3c) - 1) {
                        iVar12 = uVar17 << 6;
                        while( true ) {
                            uVar17 = uVar17 + 1;
                            piVar10 = iVar14 + uVar6 + iVar12;
                            *piVar10 = *(piVar10 + 0x10);
                            *(piVar10 + 2) = *(piVar10 + 0x12);
                            *(piVar10 + 0xc) = *(piVar10 + 0x1c);
                            *(piVar10 + 0xe) = *(piVar10 + 0x1e);
                            *piVar10 = *(piVar10 + 0x10) - iVar7;
                            *(piVar10 + 8) = *(piVar10 + 0x18);
                            *(piVar10 + 10) = *(piVar10 + 0x1a);
                            *(piVar10 + 4) = *(piVar10 + 0x14);
                            *(piVar10 + 6) = *(piVar10 + 0x16) - iVar15;
                            if (*(uVar6 + 0x3c) - 1 <= uVar17) break;
                            iVar14 = *(uVar6 + 0x28);
                            iVar12 = iVar12 + 0x40;
                        }
                        piVar10 = piVar10 + 0x10;
                    }
                    else {
                        piVar10 = iVar14 + uVar6 + uVar17 * 0x40;
                    }
                    piVar10[0xc] = 0;
                    piVar10[0xd] = 0;
                    piVar10[0xe] = 0;
                    piVar10[0xf] = 0;
                    piVar10[8] = 0;
                    piVar10[9] = 0;
                    piVar10[10] = 0;
                    piVar10[0xb] = 0;
                    piVar10[4] = 0;
                    piVar10[5] = 0;
                    piVar10[6] = 0;
                    piVar10[7] = 0;
                    piVar10[0] = 0;
                    piVar10[1] = 0;
                    piVar10[2] = 0;
                    piVar10[3] = 0;
                    *(uVar6 + 0x3c) = *(uVar6 + 0x3c) + -1;
                    _segment.ehdr = _segment.ehdr - iVar15;
                    return 0;
                }
                pcVar8 = "";
                goto code_r0x08003944;
            }
            break;
        }
    }
code_r0x0800393c:
    pcVar8 = "";
code_r0x08003944:
    _printk_deferred(pcVar8);
    return 0xffffffea;
}


// ===== sym.msm_minidump_enabled @ 0x08003a5c (size 152) =====

bool sym.msm_minidump_enabled(void)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.is_rm_minidump == 0x0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mdt_lock);
        if ((_segment.ehdr == 0) || (*(_segment.ehdr + 8) == 0)) {
            bVar1 = false;
        }
        else {
            bVar1 = *(*(_segment.ehdr + 8) + 4) == 0x454e424c;
        }
        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar2);
    }
    else {
        bVar1 = obj.md_init_done & 1;
    }
    return bVar1;
}


// ===== sym.msm_minidump_get_available_region @ 0x08003af4 (size 132) =====

int sym.msm_minidump_get_available_region(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.is_rm_minidump == 0x0) {
        uVar2 = _raw_spin_lock_irqsave(obj.mdt_lock);
        iVar1 = 0xc9 - _segment.ehdr;
        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar2);
    }
    else {
        iVar1 = gh_rm_minidump_get_info();
        if (iVar1 < 0) {
            _printk(0x8001ae3,iVar1);
        }
    }
    return iVar1;
}


// ===== sym.msm_minidump_update_region @ 0x08003b78 (size 724) =====

uint64_t sym.msm_minidump_update_region(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *puVar6;
    code *pcVar7;
    int iVar8;
    ulong uVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = 0xffffffea;
    if ((arg2 != 0) && ((obj.md_init_done & 1) != 0)) {
        uVar5 = arg1;
        uVar13 = strlen(arg2);
        if ((uVar13 < 0xd) && ((*(arg2 + 0x18) != 0 && ((*(arg2 + 0x28) & 3) == 0)))) {
            if (uVar5 < 0xc9) {
                uVar9 = _raw_read_lock_irqsave(obj.mdt_remove_lock);
                if (obj.is_rm_minidump == 0x0) {
                    if (uVar5 < _segment.ehdr) {
                        uVar14 = _segment.ehdr;
                        if (0 < _segment.ehdr) {
                            uVar13 = 0;
                            iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
                            iVar12 = iVar11 + 0x20;
                            do {
                                if (uVar13 == 0xca) goto code_r0x08003e48;
                                iVar8 = strcmp(iVar12,arg2);
                                if (iVar8 == 0) {
                                    if (uVar13 < 0) {
                                        uVar13 = uVar13 & 0xffffffff;
                                        goto code_r0x08003e34;
                                    }
                                    if (0xc9 < uVar5) goto code_r0x08003e48;
                                    iVar12 = *(iVar11 + 0x18);
                                    iVar11 = iVar11 + (arg1 & 0xffffffffU) * 0x30;
                                    uVar13 = 0;
                                    *(iVar11 + 0x38) = *(arg2 + 0x18);
                                    *(iVar11 + 0x40) = *(arg2 + 0x20);
                                    *(iVar12 + (uVar5 + 1) * 0x28 + 0x18) = *(arg2 + 0x20);
                                    goto code_r0x08003d84;
                                }
                                uVar13 = uVar13 + 1;
                                iVar12 = iVar12 + 0x30;
                            } while (uVar14 != uVar13);
                        }
                        uVar13 = 0xfffffffe;
code_r0x08003e34:
                        _printk_deferred("",arg2);
                    }
                    else {
                        _printk_deferred("",arg2);
                        uVar13 = 0xffffffea;
                    }
code_r0x08003d84:
                    iVar12 = CONCAT44(*0x8000004,_segment.ehdr);
                    iVar11 = *(iVar12 + 0x20) + iVar12 + (uVar5 + 1) * 0x38;
                    *(*(iVar12 + 0x28) + iVar12 + (uVar5 + 4) * 0x40 + 0x10) = *(arg2 + 0x18);
                    *(iVar11 + 0x10) = *(arg2 + 0x18);
                    *(iVar11 + 0x18) = *(arg2 + 0x20);
                }
                else {
                    uVar14 = _segment.ehdr;
                    if (0 < _segment.ehdr) {
                        uVar13 = 0;
                        iVar12 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
                        do {
                            if (uVar13 == 0xca) {
code_r0x08003e48:
    //WARNING: Does not return
                                pcVar7 = SoftwareBreakpoint(0x5512,0x8003e4c);
                                (*pcVar7)();
                            }
                            iVar8 = strcmp(iVar12,arg2);
                            if (iVar8 == 0) {
                                if (uVar13 < 0) goto code_r0x08003dd4;
                                puVar10 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                                if (puVar10 == NULL) {
                                    uVar13 = 0xfffffff4;
                                }
                                else {
                                    uVar1 = *arg2;
                                    uVar3 = *(arg2 + 8);
                                    *(puVar10 + 0xc) = 2;
                                    uVar2 = *(arg2 + 0x20);
                                    uVar4 = *(arg2 + 0x28);
                                    *puVar10 = uVar1;
                                    puVar10[1] = uVar3;
                                    puVar10[4] = uVar2;
                                    puVar10[5] = uVar4;
                                    uVar1 = *(arg2 + 0x10);
                                    uVar2 = *(arg2 + 0x18);
                                    puVar10[6] = 0xfffffffe0;
                                    puVar10[2] = uVar1;
                                    puVar10[3] = uVar2;
                                    puVar10[7] = puVar10 + 7;
                                    puVar10[8] = puVar10 + 7;
                                    puVar6 = CONCAT44(*0x8000004,_segment.ehdr);
                                    puVar10[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                                    queue_work_on(0x20,*puVar6);
                                    uVar13 = 0;
                                }
                                goto code_r0x08003de4;
                            }
                            uVar13 = uVar13 + 1;
                            iVar12 = iVar12 + 0x14;
                        } while (uVar14 != uVar13);
                    }
                    uVar13 = 0xfffffffe;
code_r0x08003dd4:
                    _printk_deferred("",arg2);
                }
code_r0x08003de4:
                _raw_read_unlock_irqrestore(obj.mdt_remove_lock,uVar9);
            }
            else {
                uVar13 = 0xffffffea;
            }
        }
        else {
            _printk_deferred("");
            uVar13 = 0xffffffea;
        }
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.msm_minidump_add_region @ 0x08003e4c (size 768) =====

uint32_t sym.msm_minidump_add_region(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *puVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong *puVar10;
    char *pcVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint32_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return 0xffffffea;
    }
    uVar8 = strlen();
    if (((0xc < uVar8) || (*(arg1 + 0x18) == 0)) || ((*(arg1 + 0x28) & 3) != 0)) {
        _printk_deferred("");
        return 0xffffffea;
    }
    uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
    uVar8 = _segment.ehdr;
    if (_segment.ehdr < 0xc9) {
        if (((obj.is_rm_minidump != 0x0) || (iVar15 = CONCAT44(*0x8000004,_segment.ehdr), iVar15 == 0)) ||
           ((iVar12 = *(iVar15 + 8), iVar12 == 0 || (*(iVar12 + 4) != 0x454e424c)))) {
            if ((obj.is_rm_minidump == 0x0) || ((obj.md_init_done & 1) == 0)) {
                iVar15 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar15 = 0x30;
                }
                puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xb20,0x40);
                if (puVar10 == NULL) goto code_r0x080040b8;
                uVar2 = *(arg1 + 0x18);
                uVar1 = *(arg1 + 0x20);
                uVar3 = *(arg1 + 0x28);
                puVar10[4] = *(arg1 + 0x10);
                puVar10[5] = uVar2;
                puVar5 = _obj.minidump_elfheader.1;
                uVar2 = *arg1;
                uVar4 = *(arg1 + 8);
                puVar10[6] = uVar1;
                puVar10[7] = uVar3;
                puVar10[2] = uVar2;
                puVar10[3] = uVar4;
                uVar8 = __list_add_valid(puVar10,puVar5,obj.minidump_elfheader.0);
                if ((uVar8 & 1) != 0) {
                    _obj.minidump_elfheader.1 = puVar10;
                    *puVar10 = obj.minidump_elfheader.0;
                    puVar10[1] = puVar5;
                    *puVar5 = puVar10;
                }
            }
            else {
                uVar8 = _segment.ehdr;
                if (0 < _segment.ehdr) {
                    uVar14 = 0;
                    iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
                    do {
                        if (uVar14 == 0xca) goto code_r0x08004148;
                        iVar7 = strcmp(iVar15,arg1);
                        if (iVar7 == 0) {
                            if (-1 < uVar14) goto code_r0x08004134;
                            break;
                        }
                        uVar14 = uVar14 + 1;
                        iVar15 = iVar15 + 0x14;
                    } while (uVar8 != uVar14);
                }
                puVar10 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                if (puVar10 == NULL) {
code_r0x080040b8:
                    uVar13 = 0xfffffff4;
                    goto code_r0x080040f4;
                }
                if (0xc9 < _segment.ehdr) {
code_r0x08004148:
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x800414c);
                    (*pcVar6)();
                }
                iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr * 0x14;
                strscpy(iVar15 + 8,arg1,0xd);
                *(iVar15 + 0x18) = 0;
                uVar1 = *arg1;
                uVar3 = *(arg1 + 8);
                *(puVar10 + 0xc) = 0;
                uVar2 = *(arg1 + 0x10);
                uVar4 = *(arg1 + 0x18);
                *puVar10 = uVar1;
                puVar10[1] = uVar3;
                uVar1 = *(arg1 + 0x20);
                uVar3 = *(arg1 + 0x28);
                puVar10[2] = uVar2;
                puVar10[3] = uVar4;
                puVar10[6] = 0xfffffffe0;
                puVar10[4] = uVar1;
                puVar10[5] = uVar3;
                puVar10[7] = puVar10 + 7;
                puVar10[8] = puVar10 + 7;
                puVar5 = CONCAT44(*0x8000004,_segment.ehdr);
                puVar10[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                queue_work_on(0x20,*puVar5);
            }
code_r0x080040e8:
            uVar13 = _segment.ehdr;
            _segment.ehdr = _segment.ehdr + 1;
            goto code_r0x080040f4;
        }
        if (*(iVar12 + 0x10) < 0xc9) {
            if (_segment.ehdr != 0) {
                uVar14 = 0;
                iVar15 = iVar15 + 0x20;
                do {
                    iVar7 = strcmp(iVar15,arg1);
                    if (iVar7 == 0) {
                        if (-1 < uVar14) goto code_r0x08004134;
                        break;
                    }
                    uVar14 = uVar14 + 1;
                    iVar15 = iVar15 + 0x30;
                } while (uVar8 != uVar14);
            }
            sym.md_add_ss_toc(arg1);
            sym.md_add_elf_header(arg1);
            goto code_r0x080040e8;
        }
        pcVar11 = "";
    }
    else {
        pcVar11 = "";
    }
    _printk_deferred(pcVar11);
    uVar13 = 0xfffffff4;
code_r0x080040f4:
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
    return uVar13;
code_r0x08004134:
    _printk_deferred("");
    uVar13 = 0xffffffef;
    goto code_r0x080040f4;
}


// ===== sym.md_add_ss_toc @ 0x0800414c (size 364) =====

void sym.md_add_ss_toc(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    int iVar10;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0xc9 < _segment.ehdr) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80042b8);
        (*pcVar3)();
    }
    iVar5 = CONCAT44(*0x8000004,_segment.ehdr) + _segment.ehdr * 0x30;
    iVar7 = *(*(CONCAT44(*0x8000004,_segment.ehdr) + 8) + 0x10);
    strscpy(iVar5 + 0x20,arg1,0xd);
    *(iVar5 + 0x38) = *(arg1 + 0x18);
    *(iVar5 + 0x40) = *(arg1 + 0x20);
    *(iVar5 + 0x48) = *(arg1 + 0x28);
    *(iVar5 + 0x30) = *(arg1 + 0x10);
    iVar8 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
    iVar5 = iVar8 + iVar7 * 0x28;
    strscpy(iVar5,arg1,0x10);
    *(iVar5 + 0x18) = *(arg1 + 0x20);
    *(iVar5 + 0x20) = *(arg1 + 0x28);
    iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
    iVar1 = *(*(iVar5 + 8) + 0x10);
    if (0 < iVar1) {
        uVar9 = 0;
        iVar10 = 0;
        iVar6 = *(iVar5 + 0x18);
        iVar11 = -0x16;
        do {
            iVar4 = strcmp(iVar6,arg1);
            uVar2 = uVar9;
            if ((iVar4 == 0) && (uVar2 = *(iVar6 + 0x10), iVar11 = iVar10, *(iVar6 + 0x10) <= uVar9)) {
                uVar2 = uVar9;
            }
            uVar9 = uVar2;
            iVar10 = iVar10 + 1;
            iVar6 = iVar6 + 0x28;
        } while (iVar1 != iVar10);
        if (-1 < iVar11) {
            *(iVar8 + iVar7 * 0x28 + 0x10) = uVar9 + 1;
        }
    }
    *(iVar8 + iVar7 * 0x28 + 0x14) = 0x56414c49;
    *(*(iVar5 + 8) + 0x10) = *(*(iVar5 + 8) + 0x10) + 1;
    return;
}


// ===== sym.md_add_elf_header @ 0x080042b8 (size 316) =====

void sym.md_add_elf_header(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int64_t iVar3;
    uint16_t uVar4;
    int iVar5;
    ulong uVar6;
    uint *puVar7;
    ulong *in_x18;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    iVar8 = 0;
    uVar4 = *(_segment.ehdr + 0x38);
    iVar1 = *(_segment.ehdr + 0x20) + _segment.ehdr;
    piVar2 = *(_segment.ehdr + 0x28) + _segment.ehdr + *(_segment.ehdr + 0x3c) * 0x40;
    *(_segment.ehdr + 0x3c) = *(_segment.ehdr + 0x3c) + 1;
    *(iVar3 + 0x38) = uVar4 + 1;
    piVar2[1] = 1;
    if (((*(_segment.ehdr + 0x3e) != 0) && (arg1 != 0)) &&
       (iVar3 = _segment.ehdr + *(*(_segment.ehdr + 0x28) + _segment.ehdr + *(_segment.ehdr + 0x3e) * 0x40 + 0x18),
       iVar3 != 0)) {
        iVar8 = _segment.ehdr;
        iVar5 = strscpy(iVar3 + iVar8,arg1,0x10);
        _segment.ehdr = iVar5 + iVar8 + 1;
    }
    *piVar2 = iVar8;
    *(piVar2 + 4) = *(arg1 + 0x18);
    uVar6 = *(arg1 + 0x28);
    piVar2[2] = 1;
    piVar2[3] = 0;
    *(piVar2 + 8) = uVar6;
    iVar3 = _segment.ehdr;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    puVar7 = iVar1 + uVar4 * 0x38;
    *(piVar2 + 6) = iVar3;
    *puVar7 = 1;
    *(puVar7 + 2) = _segment.ehdr;
    *(puVar7 + 4) = *(arg1 + 0x18);
    *(puVar7 + 6) = *(arg1 + 0x20);
    uVar6 = *(arg1 + 0x28);
    puVar7[1] = 6;
    *(puVar7 + 8) = uVar6;
    *(puVar7 + 10) = uVar6;
    _segment.ehdr = _segment.ehdr + *(piVar2 + 8);
    return;
}


// ===== sym.msm_minidump_remove_region @ 0x080043f4 (size 952) =====

uint64_t sym.msm_minidump_remove_region(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *puVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    ulong *puVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong *in_x18;
    uint32_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || ((obj.md_init_done & 1) == 0)) ||
       ((obj.is_rm_minidump == 0x0 &&
        ((iVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8), iVar13 == 0 || (*(iVar13 + 4) != 0x454e424c)))))) {
        uVar16 = 0xffffffea;
        goto code_r0x08004748;
    }
    uVar10 = _raw_spin_lock_irqsave(obj.mdt_lock);
    _raw_write_lock(obj.mdt_remove_lock);
    uVar6 = _segment.ehdr;
    if (obj.is_rm_minidump == 0x0) {
        iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
        puVar21 = *(iVar13 + 8);
        if ((puVar21 == NULL) || (puVar21[1] != 0x454e424c)) {
            uVar16 = 0xffffffea;
        }
        else {
            uVar16 = _segment.ehdr;
            if (_segment.ehdr < 1) goto code_r0x080044b4;
            iVar22 = 0;
            iVar14 = iVar13 + 0x50;
code_r0x0800459c:
            if (iVar22 == -0xca) goto code_r0x080047a8;
            iVar9 = strcmp(iVar14 + -0x30,arg1);
            if (iVar9 != 0) goto code_r0x080045b8;
            uVar16 = -iVar22;
            uVar12 = uVar16;
            if (uVar12 < 0) {
                uVar16 = uVar16 & 0xffffffff;
                goto code_r0x08004718;
            }
            uVar5 = puVar21[4];
            if (uVar5 < 1) {
                uVar18 = 0xffffffea;
                goto code_r0x08004788;
            }
            uVar15 = 0;
            iVar20 = *(iVar13 + 0x18);
            uVar17 = 0xffffffea;
            do {
                iVar9 = strcmp(iVar20,arg1);
                iVar20 = iVar20 + 0x28;
                uVar18 = uVar15;
                if (iVar9 != 0) {
                    uVar18 = uVar17;
                }
                uVar15 = uVar15 + 1;
                uVar17 = uVar18;
            } while (uVar5 != uVar15);
            if (uVar18 < 0) {
code_r0x08004788:
                _printk_deferred("",arg1,uVar16,uVar18);
                uVar16 = 0xffffffea;
                goto code_r0x08004728;
            }
            if (uVar12 < _segment.ehdr) {
                _segment.ehdr = uVar12;
            }
            *puVar21 = 0;
            if (200 < uVar12) {
code_r0x080047a8:
    //WARNING: Does not return
                pcVar8 = SoftwareBreakpoint(0x5512,0x80047ac);
                (*pcVar8)();
            }
            uVar6 = uVar6 - 1;
            memmove(iVar14 + -0x30,iVar14,(uVar6 + iVar22) * 0x30);
            if (0xc9 < uVar6) goto code_r0x080047a8;
            iVar22 = *(iVar13 + 0x18);
            iVar14 = iVar13 + uVar6 * 0x30;
            *(iVar14 + 0x40) = 0;
            *(iVar14 + 0x48) = 0;
            *(iVar14 + 0x30) = 0;
            *(iVar14 + 0x38) = 0;
            *(iVar14 + 0x20) = 0;
            *(iVar14 + 0x28) = 0;
            memmove(iVar22 + uVar18 * 0x28,iVar22 + (uVar18 + 1) * 0x28,(uVar5 + ~uVar18) * 0x28);
            puVar11 = *(iVar13 + 0x18) + (uVar5 - 1) * 0x28;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            uVar19 = sym.msm_minidump_clear_headers(arg1);
            uVar16 = uVar19 & 0xffffffff;
            if (uVar19 == 0) {
                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                iVar14 = *(iVar13 + 8);
                *(iVar14 + 0x10) = *(iVar14 + 0x10) + -1;
                **(iVar13 + 8) = 1;
                _segment.ehdr = _segment.ehdr - 1;
            }
        }
    }
    else {
        uVar19 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            uVar16 = 0;
            iVar13 = CONCAT44(*0x8000004,_segment.ehdr) + 8;
            do {
                if (uVar16 == 0xca) goto code_r0x080047a8;
                iVar9 = strcmp(iVar13,arg1);
                if (iVar9 == 0) {
                    if (uVar16 < 0) goto code_r0x08004718;
                    puVar11 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                    if (puVar11 == NULL) {
                        uVar16 = 0xfffffff4;
                    }
                    else {
                        uVar1 = *arg1;
                        uVar3 = *(arg1 + 8);
                        *(puVar11 + 0xc) = 1;
                        uVar2 = *(arg1 + 0x20);
                        uVar4 = *(arg1 + 0x28);
                        *puVar11 = uVar1;
                        puVar11[1] = uVar3;
                        puVar11[4] = uVar2;
                        puVar11[5] = uVar4;
                        uVar1 = *(arg1 + 0x10);
                        uVar2 = *(arg1 + 0x18);
                        puVar11[6] = 0xfffffffe0;
                        puVar11[2] = uVar1;
                        puVar11[3] = uVar2;
                        puVar11[7] = puVar11 + 7;
                        puVar11[8] = puVar11 + 7;
                        puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                        puVar11[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                        queue_work_on(0x20,*puVar7);
                        uVar16 = 0;
                    }
                    goto code_r0x08004728;
                }
                uVar16 = uVar16 + 1;
                iVar13 = iVar13 + 0x14;
            } while (uVar19 != uVar16);
        }
code_r0x080044b4:
        uVar16 = 0xfffffffe;
code_r0x08004718:
        _printk_deferred("",arg1);
    }
code_r0x08004728:
    _raw_write_unlock(obj.mdt_remove_lock);
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar10);
    if (uVar16 != 0) {
        _printk_deferred("");
    }
code_r0x08004748:
    return uVar16 & 0xffffffff;
code_r0x080045b8:
    iVar22 = iVar22 + -1;
    iVar14 = iVar14 + 0x30;
    if (-iVar22 == uVar16) goto code_r0x080044b4;
    goto code_r0x0800459c;
}


// ===== sym.minidump_rm_work @ 0x080047ac (size 1268) =====

void sym.minidump_rm_work(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    ulong uVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t arg1_00;
    uint32_t uVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x30);
    arg1_00 = arg1 + -0x30;
    if (iVar8 == 2) {
        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
        uVar12 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            iVar16 = 0;
            iVar15 = 0;
            uVar14 = 0;
            iVar5 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar13 = 0x110;
            do {
                if (iVar15 == 0xfc8) goto code_r0x08004c9c;
                iVar8 = strcmp(iVar5 + iVar15 + 8,arg1_00);
                if (iVar8 == 0) {
                    if (-1 < uVar14) {
                        if (0xc9 < uVar14) goto code_r0x08004c9c;
                        iVar1 = iVar5 + iVar15;
                        uVar3 = *(iVar1 + 0x18);
                        *(iVar1 + 0x18) = 0;
                        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                        iVar8 = gh_rm_minidump_deregister_slot(uVar3);
                        if (iVar8 < 0) {
                            pcVar11 = "";
                        }
                        else {
                            uVar9 = *(arg1 + -0x10);
                            uVar2 = *(arg1 + -8);
                            uVar10 = strlen(arg1_00);
                            iVar7 = gh_rm_minidump_register_range(uVar9,uVar2,arg1_00,uVar10);
                            if (-1 < iVar7) {
                                uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                                iVar8 = strcmp(arg1_00,iVar5 + iVar15 + 8);
                                if (iVar8 != 0) {
                                    pcVar11 = "";
                                    goto code_r0x08004c3c;
                                }
                                *(iVar1 + 0x18) = iVar7;
                                iVar15 = CONCAT44(*0x8000004,_segment.ehdr);
                                iVar16 = *(iVar15 + 0x20) + iVar15 + iVar16;
                                *(*(iVar15 + 0x28) + iVar15 + iVar13) = *(arg1 + -0x18);
                                *(iVar16 + 0x48) = *(arg1 + -0x18);
                                *(iVar16 + 0x50) = *(arg1 + -0x10);
                                goto code_r0x08004c68;
                            }
                            pcVar11 = "";
                        }
                        _printk_deferred(pcVar11,arg1_00,iVar8);
                        goto code_r0x08004c70;
                    }
                    break;
                }
                uVar14 = uVar14 + 1;
                iVar15 = iVar15 + 0x14;
                iVar13 = iVar13 + 0x40;
                iVar16 = iVar16 + 0x38;
            } while (uVar12 * 0x14 - iVar15 != 0);
        }
        pcVar11 = "";
code_r0x08004c3c:
        _printk_deferred(pcVar11,arg1_00);
    }
    else {
        if (iVar8 != 1) {
            if (iVar8 != 0) {
                _printk_deferred("");
                goto code_r0x08004c70;
            }
            uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
            uVar12 = _segment.ehdr;
            if (0 < _segment.ehdr) {
                iVar15 = 0;
                iVar8 = 1;
                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                do {
                    if (iVar15 == 0xfc8) goto code_r0x08004c9c;
                    iVar7 = strcmp(iVar13 + 8 + iVar15,arg1_00);
                    if (iVar7 == 0) {
                        uVar14 = iVar8 - 1;
                        if (-1 < uVar14) {
                            _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                            uVar9 = *(arg1 + -0x10);
                            uVar2 = *(arg1 + -8);
                            uVar10 = strlen(arg1_00);
                            iVar7 = gh_rm_minidump_register_range(uVar9,uVar2,arg1_00,uVar10);
                            uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                            uVar4 = _segment.ehdr;
                            if (iVar7 < 0) {
                                if (200 < uVar14) goto code_r0x08004c9c;
                                iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                                iVar15 = iVar13 + iVar15;
                                memmove(iVar15 + 8,iVar15 + 0x1c,(_segment.ehdr - iVar8) * 0x14);
                                uVar4 = uVar4 - 1;
                                if (0xc9 < uVar4) goto code_r0x08004c9c;
                                iVar13 = iVar13 + uVar4 * 0x14;
                                _segment.ehdr = uVar4;
                                *(iVar13 + 0x18) = 0;
                                *(iVar13 + 8) = 0;
                                *(iVar13 + 0x10) = 0;
                                _printk(0x8001b1d,arg1_00,iVar7);
                            }
                            else {
                                if (200 < uVar14) goto code_r0x08004c9c;
                                iVar15 = CONCAT44(*0x8000004,_segment.ehdr) + iVar15;
                                iVar8 = strcmp(arg1_00,iVar15 + 8);
                                if (iVar8 == 0) {
                                    *(iVar15 + 0x18) = iVar7;
                                }
                                else {
                                    _printk_deferred("",arg1_00);
                                    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                                    gh_rm_minidump_deregister_slot(iVar7);
                                }
                                sym.md_add_elf_header(arg1_00);
                            }
                            goto code_r0x08004c68;
                        }
                        break;
                    }
                    iVar8 = iVar8 + 1;
                    iVar15 = iVar15 + 0x14;
                } while (uVar12 * 0x14 - iVar15 != 0);
            }
            pcVar11 = "";
            goto code_r0x08004c3c;
        }
        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
        uVar12 = _segment.ehdr;
        if (0 < _segment.ehdr) {
            iVar15 = 0;
            iVar8 = 1;
            iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
            do {
                if (iVar15 == 0xfc8) {
code_r0x08004c9c:
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x5512,0x8004ca0);
                    (*pcVar6)();
                }
                iVar7 = strcmp(iVar13 + iVar15 + 8,arg1_00);
                if (iVar7 == 0) {
                    uVar14 = iVar8 - 1;
                    if (-1 < uVar14) {
                        if (0xc9 < uVar14) goto code_r0x08004c9c;
                        iVar7 = *(iVar13 + iVar15 + 0x18);
                        if (iVar7 == 0) {
                            pcVar11 = "";
                            goto code_r0x08004c58;
                        }
                        *(iVar13 + iVar15 + 0x18) = 0;
                        _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
                        iVar7 = gh_rm_minidump_deregister_slot(iVar7);
                        if (iVar7 < 0) {
                            _printk(0x80016be,arg1_00,iVar7);
                            goto code_r0x08004c70;
                        }
                        uVar9 = _raw_spin_lock_irqsave(obj.mdt_lock);
                        iVar7 = strcmp(arg1_00,iVar13 + iVar15 + 8);
                        if (iVar7 != 0) {
                            pcVar11 = "";
                            goto code_r0x08004c58;
                        }
                        iVar7 = sym.msm_minidump_clear_headers(arg1_00);
                        uVar4 = _segment.ehdr;
                        if (iVar7 != 0) goto code_r0x08004c68;
                        if (200 < uVar14) goto code_r0x08004c9c;
                        iVar13 = CONCAT44(*0x8000004,_segment.ehdr);
                        iVar15 = iVar13 + iVar15;
                        memmove(iVar15 + 8,iVar15 + 0x1c,(_segment.ehdr - iVar8) * 0x14);
                        uVar4 = uVar4 - 1;
                        if (0xc9 < uVar4) goto code_r0x08004c9c;
                        iVar13 = iVar13 + uVar4 * 0x14;
                        _segment.ehdr = uVar4;
                        *(iVar13 + 0x18) = 0;
                        *(iVar13 + 8) = 0;
                        *(iVar13 + 0x10) = 0;
                        goto code_r0x08004c68;
                    }
                    break;
                }
                iVar8 = iVar8 + 1;
                iVar15 = iVar15 + 0x14;
            } while (uVar12 * 0x14 - iVar15 != 0);
        }
        pcVar11 = "";
code_r0x08004c58:
        _printk_deferred(pcVar11,arg1_00);
    }
code_r0x08004c68:
    _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar9);
code_r0x08004c70:
    kfree(arg1_00);
    return;
}


// ===== sym.msm_minidump_driver_probe @ 0x08004ca0 (size 1832) =====

uint64_t sym.msm_minidump_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    code cVar5;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    int64_t *piVar15;
    ulong *in_x18;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    code *pcVar19;
    int *piVar20;
    int *piVar21;
    ulong unaff_x30;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = arg1 + 0x10;
    uStack_70 = 0;
    iVar7 = of_device_is_compatible(*(arg1 + 0x300),0x8001a56);
    obj.is_rm_minidump = iVar7 != 0;
    if (iVar7 == 0) {
        piVar20 = qcom_smem_get(0xffffffff,0x25a,&uStack_70);
        if ((piVar20 == NULL) || (0xfffffffffffff000 < piVar20)) {
            _printk(0x8001131);
            goto code_r0x080052e4;
        }
        if (*piVar20 == 0) {
            _printk(0x8000bd3);
            piVar20 = 0xffffffed;
            goto code_r0x080052e4;
        }
        piVar13 = devm_kmalloc(iVar10,0x25d0,0xdc0);
        _segment.ehdr = piVar13;
        if (piVar13 != NULL) {
            piVar13[2] = piVar20;
            piVar21 = piVar20 + 4;
            *piVar13 = piVar20[1];
            piVar20[6] = 0x444f4e45;
            piVar20[7] = 0x4e52;
            piVar13[1] = piVar21;
            iVar10 = devm_kmalloc(iVar10,0x1f68,0xdc0);
            _segment.ehdr[3] = iVar10;
            if (iVar10 != 0) {
                iVar11 = (iVar10 << 8) >> 8;
                uVar17 = iVar11 + 0x8000000000;
                iVar10 = _strcmp + uVar17;
                if (uVar17 >> 0x26 != 0) {
                    iVar10 = iVar11 - _strlen;
                }
                *(piVar20 + 10) = iVar10;
                piVar20[8] = 1;
                goto code_r0x08004e0c;
            }
        }
    }
    else {
        uVar8 = gh_rm_minidump_get_info();
        if (uVar8 < 0) {
            piVar20 = uVar8;
            _printk(0x8001216,piVar20);
            goto code_r0x080052e4;
        }
        _segment.ehdr = devm_kmalloc(iVar10,0xfc0,0xdc0);
        if (_segment.ehdr != NULL) {
            iVar10 = alloc_workqueue("",0x12,1);
            *_segment.ehdr = iVar10;
            if (iVar10 == 0) {
                _printk(0x8001e4f);
                piVar20 = 0xffffffea;
                goto code_r0x080052e4;
            }
            piVar21 = NULL;
code_r0x08004e0c:
            iVar10 = android_debug_symbol(6);
            iVar7 = strlen();
            uVar17 = iVar7 + 0x6cec & 0xfffffffc;
            _segment.ehdr = __kmalloc(uVar17,0xdc0);
            if (_segment.ehdr != NULL) {
                if (obj.is_rm_minidump == 0x0) {
                    iVar16 = _segment.ehdr[3];
                    strscpy(iVar16,"",0x10);
                    iVar4 = (_segment.ehdr << 8) >> 8;
                    uVar14 = iVar4 + 0x8000000000;
                    iVar11 = uVar14 + _strcmp;
                    if (uVar14 >> 0x26 != 0) {
                        iVar11 = iVar4 - _strlen;
                    }
                    *(iVar16 + 0x18) = iVar11;
                    *(iVar16 + 0x20) = uVar17;
                    piVar13 = _segment.ehdr;
                }
                else {
                    iVar4 = (_segment.ehdr << 8) >> 8;
                    uVar14 = iVar4 + 0x8000000000;
                    iVar11 = _strcmp + uVar14;
                    if (uVar14 >> 0x26 != 0) {
                        iVar11 = iVar4 - _strlen;
                    }
                    iVar7 = gh_rm_minidump_register_range(iVar11,uVar17,"",8);
                    if (iVar7 < 0) {
                        _printk(0x8001ca3);
                        goto code_r0x08005160;
                    }
                    iVar16 = 0;
                    piVar13 = _segment.ehdr;
                }
                *piVar13 = 0x10102464c457f;
                piVar13[2] = 0x100b70004;
                *(piVar13 + 0x34) = 0x380040;
                piVar13[4] = 0x3280;
                piVar13[5] = 0x40;
                *(piVar13 + 0x3a) = 0x40;
                _segment.ehdr = 0x1;
                *(piVar13 + 0x84) = 3;
                *(piVar13 + 0x3e) = 1;
                piVar13[0x17] = 0;
                piVar13[0x13] = 0x5e78;
                piVar13[0x14] = 0xc90;
                piVar13[0x11] = 0;
                if (piVar13 == 0xffffffffffffa188) {
                    piVar18 = 0x1;
                    piVar15 = 0xffffffffffffa188;
                }
                else {
                    iVar7 = strscpy(piVar13 + 0x5e79,"",0x10);
                    piVar18 = iVar7 + 2;
                    piVar15 = _segment.ehdr;
                    _segment.ehdr = piVar18;
                }
                *(piVar13 + 0x10) = piVar13 != 0xffffffffffffa188;
                *(piVar13 + 0xc4) = 1;
                cVar5 = obj.is_rm_minidump;
                piVar13[0x1f] = 0;
                piVar13[0x19] = 0;
                pcVar6 = obj.minidump_table;
                if (cVar5 != 0x0) {
                    pcVar6 = obj.minidump_rm_table;
                }
                piVar13[0x1a] = *pcVar6;
                if ((*(piVar15 + 0x3e) == 0) ||
                   (iVar11 = piVar15 + *(piVar15 + *(piVar15 + 0x3e) * 0x40 + piVar15[5] + 0x18), iVar11 == 0)) {
                    piVar18 = NULL;
                }
                else {
                    iVar7 = strscpy(iVar11 + piVar18,"",0x10);
                    _segment.ehdr = iVar7 + piVar18 + 1;
                }
                *(piVar13 + 0x18) = piVar18;
                strscpy(piVar13 + 0xd61,iVar10,0xc90);
                piVar13[0x23] = 0x6b08;
                *(piVar13 + 0x104) = 1;
                iVar11 = strlen(iVar10);
                piVar13[0x27] = 0;
                piVar13[0x21] = 1;
                piVar13[0x22] = iVar10;
                piVar13[0x24] = iVar11 + 1;
                if ((*(_segment.ehdr + 0x3e) == 0) ||
                   (iVar11 = _segment.ehdr + *(_segment.ehdr + *(_segment.ehdr + 0x3e) * 0x40 + _segment.ehdr[5] + 0x18)
                   , iVar11 == 0)) {
                    iVar7 = 0;
                }
                else {
                    iVar7 = _segment.ehdr;
                    iVar9 = strscpy(iVar11 + iVar7,"",0x10);
                    _segment.ehdr = iVar9 + iVar7 + 1;
                }
                *(piVar13 + 0x20) = iVar7;
                *(piVar13 + 0x650) = 1;
                piVar13[0x652] = iVar10;
                piVar13[0x651] = 0x6b08;
                iVar4 = (iVar10 << 8) >> 8;
                uVar17 = iVar4 + 0x8000000000;
                iVar11 = _strcmp + uVar17;
                if (uVar17 >> 0x26 != 0) {
                    iVar11 = iVar4 - _strlen;
                }
                piVar13[0x653] = iVar11;
                iVar10 = strlen(iVar10);
                *(piVar13 + 7) = 1;
                *(piVar13 + 0x3284) = 6;
                cVar5 = obj.is_rm_minidump;
                piVar13[0x655] = iVar10 + 1;
                piVar13[0x654] = iVar10 + 1;
                *(piVar13 + 0x3c) = 4;
                if (cVar5 == 0x0) {
                    *(iVar16 + 0x14) = 0x56414c49;
                }
            }
code_r0x08005160:
            uVar12 = _raw_spin_lock_irqsave(obj.mdt_lock);
            if (obj.is_rm_minidump == 0x0) {
                piVar21[0] = 1;
                piVar21[1] = 0x454e424c;
            }
            if (_obj.minidump_elfheader.0 != obj.minidump_elfheader.0) {
                uVar17 = 0;
                iVar10 = 0x20;
                iVar11 = 8;
                pcVar6 = _obj.minidump_elfheader.0;
                do {
                    pcVar19 = *pcVar6;
                    if (obj.is_rm_minidump == 0x0) {
                        if (0xc9 < uVar17) {
code_r0x080053c0:
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x80053c4);
                            (*pcVar6)();
                        }
                        piVar13 = _segment.ehdr + iVar10;
                        iVar4 = *(pcVar6 + 0x10);
                        piVar13[1] = *(pcVar6 + 0x18);
                        iVar16 = *(pcVar6 + 0x30);
                        iVar2 = *(pcVar6 + 0x38);
                        iVar1 = *(pcVar6 + 0x20);
                        iVar3 = *(pcVar6 + 0x28);
                        *piVar13 = iVar4;
                        piVar13[4] = iVar16;
                        piVar13[5] = iVar2;
                        piVar13[2] = iVar1;
                        piVar13[3] = iVar3;
                        sym.md_add_ss_toc(piVar13);
                    }
                    else {
                        piVar13 = kmem_cache_alloc_trace(_dma_fence_release,0xb20,0x68);
                        if (piVar13 == NULL) {
                            _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar12);
                            goto code_r0x080052e0;
                        }
                        if (200 < uVar17) goto code_r0x080053c0;
                        strscpy(_segment.ehdr + iVar11,pcVar6 + 0x10,0xd);
                        iVar16 = *(pcVar6 + 0x28);
                        iVar4 = *(pcVar6 + 0x30);
                        iVar1 = *(pcVar6 + 0x38);
                        piVar13[2] = *(pcVar6 + 0x20);
                        piVar13[3] = iVar16;
                        piVar13[4] = iVar4;
                        piVar13[5] = iVar1;
                        iVar4 = *(pcVar6 + 0x10);
                        iVar16 = *(pcVar6 + 0x18);
                        *(piVar13 + 0xc) = 0;
                        *piVar13 = iVar4;
                        piVar13[1] = iVar16;
                        piVar13[6] = 0xfffffffe0;
                        piVar13[7] = piVar13 + 7;
                        piVar13[8] = piVar13 + 7;
                        piVar15 = _segment.ehdr;
                        piVar13[9] = sym.minidump_rm_work.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt;
                        queue_work_on(0x20,*piVar15);
                    }
                    uVar14 = __list_del_entry_valid(pcVar6);
                    if ((uVar14 & 1) != 0) {
                        iVar4 = *pcVar6;
                        piVar13 = *(pcVar6 + 8);
                        *(iVar4 + 8) = piVar13;
                        *piVar13 = iVar4;
                    }
                    *pcVar6 = -0x2152ffffffffff00;
                    *(pcVar6 + 8) = -0x2152fffffffffede;
                    kfree(pcVar6);
                    uVar17 = uVar17 + 1;
                    iVar10 = iVar10 + 0x30;
                    iVar11 = iVar11 + 0x14;
                    pcVar6 = pcVar19;
                } while (pcVar19 != obj.minidump_elfheader.0);
            }
            iVar10 = _raw_spin_unlock_irqrestore(obj.mdt_lock,uVar12);
            _obj.md_init_done = 1;
            sym.msm_minidump_log_init(iVar10);
            _printk(0x8001551,200);
            piVar20 = NULL;
            goto code_r0x080052e4;
        }
    }
code_r0x080052e0:
    piVar20 = 0xfffffff4;
code_r0x080052e4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return piVar20 & 0xffffffff;
    }
    __stack_chk_fail();
    return 0;
}


// ===== sym.msm_minidump_driver_remove @ 0x080053c8 (size 16) =====

ulong sym.msm_minidump_driver_remove(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080053d8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800541c

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
    //switch table (4 cases) at 0x8000ad0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005430);
    (*pcVar1)();
}


// ===== sym.dump_stack_minidump @ 0x08005430 (size 16) =====

void sym.dump_stack_minidump(void)

{
    ulong uVar1;
    
    uVar1 = tpidr_el1;
    return;
}


// ===== sym.md_current_stack_notifer @ 0x08005444 (size 108) =====

void sym.md_current_stack_notifer(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x58) < 0x20) {
        if (((*(arg1 + 0x3c) >> 1 & 1) == 0) && (obj.md_current_stack_init != 0x0)) {
            sym.update_md_stack(*(__per_cpu_offset + (*(arg1 + 0x58) & 0xffffffff) * 8) + 0x800bd10,
                                obj.md_stack_data + *(__per_cpu_offset + (*(arg1 + 0x58) & 0xffffffff) * 8),
                                *(arg1 + 0x30));
        }
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80054b0);
    (*pcVar1)();
}


// ===== sym.md_current_stack_ipi_handler @ 0x080054b4 (size 156) =====

void sym.md_current_stack_ipi_handler(void)

{
    int64_t iVar1;
    int64_t iVar2;
    code *pcVar3;
    uchar *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = &stack0xfffffffffffffff0;
    iVar1 = sp_el0;
    iVar2 = tpidr_el1;
    if ((*(iVar1 + 0x3c) >> 1 & 1) == 0) {
        if (obj.is_vmap_stack == 0x1) {
            arg3 = *(*(iVar1 + 0xb18) + 8);
        }
        if (0x1f < *(cpu_number + iVar2)) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8005550);
            (*pcVar3)();
        }
        if (obj.md_current_stack_init == 0x1) {
            sym.update_md_stack(*(__per_cpu_offset + *(cpu_number + iVar2) * 8) + 0x800bd10,
                                obj.md_stack_data + *(__per_cpu_offset + *(cpu_number + iVar2) * 8),arg3);
        }
    }
    return;
}


// ===== sym.md_dump_process @ 0x08005554 (size 1912) =====

void sym.md_dump_process(ulong param_1,ulong param_2,uint64_t param_3,char *param_4,uint64_t param_5,ulong param_6
                        ,ulong param_7,ulong param_8)

{
    char cVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t extraout_x1;
    ulong uVar6;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t extraout_w8_01;
    uint32_t extraout_w8_02;
    code *extraout_x8;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t extraout_x11;
    uint32_t *extraout_x13;
    uint32_t *extraout_x13_00;
    uint32_t *extraout_x13_01;
    uint32_t *extraout_x13_02;
    ulong *in_x18;
    int64_t *piVar10;
    char *unaff_x21;
    int64_t iVar11;
    code *pcVar12;
    code *unaff_x24;
    char *unaff_x25;
    char *unaff_x26;
    char *unaff_x27;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_1c0 [16];
    ulong uStack_1b0;
    char *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    code *pcStack_128;
    uchar *puStack_120;
    char *pcStack_118;
    code *pcStack_110;
    ulong uStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    uint64_t *puStack_f0;
    char *pcStack_e8;
    uint64_t uStack_e0;
    uchar *puStack_d8;
    ulong uStack_d0;
    uchar *puStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar9 = 0x8000000;
    iStack_70 = *(iVar11 + 0x5e0);
    if ((obj.md_in_oops_handler & 1) != 0) goto code_r0x08005c68;
    pcVar12 = obj.md_handle_done;
    uVar4 = _obj.md_handle_done;
code_r0x080055a0:
    if (uVar4 == 1) goto code_r0x08005c68;
    param_3 = uVar4 + 1;
    uVar5 = uVar4 & 0xffffffff;
    uVar8 = uVar4;
    do {
        Hint_Prefetch(pcVar12,2,0,1);
        do {
            uVar3 = *pcVar12;
            uVar4 = uVar3;
            if (uVar3 != uVar5) goto code_r0x080055c8;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar2) {
                *pcVar12 = param_3;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
code_r0x080055c8:
        if (uVar8 != uVar3) goto code_r0x080055a0;
        iVar11 = CONCAT44(*0x8000004,_segment.ehdr);
        *(iVar9 + 0x528) = 1;
        if (iVar11 != 0) {
            iVar11 = tpidr_el1;
            if (*(cpu_number + iVar11) != _segment.ehdr) {
                uVar6 = 0x150;
                auVar13 = memset(&stack0xfffffffffffffe40,0);
                pcStack_128 = cpu_number;
                pcStack_110 = dma_fence_release;
                uStack_108 = 0x8000000;
                uStack_d0 = 0x8005630;
                uVar8 = currentel;
                uVar4 = spsel;
                uVar5 = daif;
                uStack_b8 = nzcv;
                uStack_b8 = uVar8 | uVar4 | uVar5 | uStack_b8;
                uStack_c0 = 0x8005694;
                iVar11 = tpidr_el1;
                param_3 = *(cpu_number + iVar11);
                uStack_1b0 = uVar6;
                pcStack_1a8 = param_4;
                uStack_1a0 = param_5;
                uStack_198 = param_6;
                uStack_190 = param_7;
                uStack_188 = param_8;
                puStack_120 = &stack0xfffffffffffffe40;
                pcStack_118 = unaff_x21;
                pcStack_100 = unaff_x24;
                pcStack_f8 = unaff_x25;
                puStack_f0 = unaff_x26;
                pcStack_e8 = unaff_x27;
                uStack_e0 = unaff_x28;
                puStack_d8 = &stack0xffffffffffffffa0;
                puStack_c8 = &stack0xfffffffffffffe40;
                auStack_1c0 = auVar13;
                seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                sym.md_reg_context_data(&stack0xfffffffffffffe40);
            }
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x13 = extraout_w8;
            if (uVar3 < extraout_w8) {
                unaff_x24 = __per_cpu_offset;
                do {
                    uVar4 = uVar3;
                    if (0x1f < uVar3) goto code_r0x08005bdc;
                    memcpy(&stack0xfffffffffffffe40,obj.regs_before_stop + *(__per_cpu_offset + uVar4 * 8),0x150);
                    param_3 = uVar4;
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                    sym.md_reg_context_data(&stack0xfffffffffffffe40);
                    uVar3 = cpumask_next(uVar4,__cpu_possible_mask);
                    *extraout_x13_00 = extraout_w8_00;
                    unaff_x25 = obj.regs_before_stop;
                } while (uVar3 < extraout_w8_00);
            }
        }
        unaff_x21 = CONCAT44(*0x8000004,_segment.ehdr);
        if (unaff_x21 != NULL) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            *extraout_x13_01 = extraout_w8_01;
            if (uVar3 < extraout_w8_01) {
                unaff_x25 = "";
                do {
                    uVar4 = uVar3;
                    if (0x1f < uVar3) {
code_r0x08005bdc:
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8005be0);
                        (*pcVar12)();
                    }
                    iVar11 = uVar4 * 8;
                    iVar9 = *(__per_cpu_offset + iVar11);
                    unaff_x24 = runqueues + iVar9;
                    param_5 = *(*(iVar9 + 0x8038b48) + 0x5d8);
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",uVar4,*(_find_first_bit + iVar9));
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(iVar9 + 0x80382b8));
                    sym.md_dump_cfs_rq(iVar9 + 0x80382a8,*(*(__per_cpu_offset + iVar11) + 0x8038b48));
                    unaff_x26 = iVar9 + 0x8038428;
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(iVar9 + 0x8038a78));
                    unaff_x27 = *(*(__per_cpu_offset + iVar11) + 0x8038b48);
                    iVar11 = _find_first_bit(unaff_x26,100);
                    if (iVar11 != 100) {
                        uVar5 = *unaff_x26;
                        if (uVar5 == 0) {
                            uVar5 = (*(iVar9 + 0x8038430) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                    (*(iVar9 + 0x8038430) & 0x5555555555555555) << 1;
                            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                            uVar3 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
                            if (0x23 < uVar3) goto code_r0x08005780;
                            unaff_x28 = uVar3 + 0x40;
                        }
                        else {
                            uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                            unaff_x28 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
                        }
                        do {
                            if (100 < unaff_x28) goto code_r0x08005bdc;
                            for (pcVar12 = *(unaff_x24 + ((unaff_x28 & 0xffffffff) * 2 + 0x72) * 8);
                                pcVar12 != unaff_x24 + ((unaff_x28 & 0xffffffff) * 2 + 0x72) * 8; pcVar12 = *pcVar12) {
                                sym.md_dump_task_info(pcVar12 + -0x2c0,0x8001f22,unaff_x27);
                            }
                            param_5 = 0;
                            param_6 = 0;
                            unaff_x28 = _find_next_bit(unaff_x26,0,100,unaff_x28 + 1);
                        } while (unaff_x28 < 100);
                    }
code_r0x08005780:
                    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
                    uVar3 = cpumask_next(uVar4,__cpu_possible_mask);
                    *extraout_x13_02 = extraout_w8_02;
                } while (uVar3 < extraout_w8_02);
                unaff_x21 = CONCAT44(*0x8000004,_segment.ehdr);
            }
            seq_buf_printf(unaff_x21,"","");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6,0x80012e1);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x10,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0xc,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,4,0x8000ad8);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,5,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6,"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,0x11,"");
            param_4 = "";
            param_3 = 0x10;
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120);
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
            if (*0x8038584 != 0x8038584) {
                unaff_x21 = "";
                unaff_x25 = 0x8002120;
                unaff_x26 = "";
                unaff_x27 = "";
                unaff_x28 = 0x8001a67;
                piVar10 = *0x8038584;
                do {
                    for (unaff_x24 = *(piVar10[100] + 0x10); piVar10[100] + 0x10 != unaff_x24; unaff_x24 = *unaff_x24) {
                        if (*(unaff_x24 + -0x670) == 0) {
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",unaff_x24 + 0x110);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001bf7,*(unaff_x24 + -0xc0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1d8));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1d0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1e0));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + -0x1e8));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001405,*(unaff_x24 + -0x654));
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8000f9e,*(unaff_x24 + -0x61c));
                            uVar7 = *(unaff_x24 + -0x670);
                            uVar3 = 0x80;
                            if (uVar7 != 0x402) {
                                uVar3 = (*(unaff_x24 + -300) | uVar7) & 0x7f;
                            }
                            uVar7 = 0;
                            if (uVar3 != 0) {
                                uVar7 = 0x20 - LZCOUNT(uVar3);
                            }
                            if (8 < uVar7) goto code_r0x08005bdc;
                            param_4 = *(obj.task_state_array + uVar7 * 8);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8002120,6);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(unaff_x24 + 0x590));
                            param_3 = *(unaff_x24 + 0x578);
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
                        }
                    }
                    piVar10 = *piVar10;
                } while (piVar10 != 0x8038584);
            }
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_meminfo(CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_slabinfo(CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_pageowner(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dump_slabowner(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dma_buf_info(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
            sym.md_dma_buf_procs(CONCAT44(*0x8000004,_segment.ehdr),CONCAT44(*0x8000004,_segment.ehdr));
        }
        obj.md_in_oops_handler = 0x0;
code_r0x08005c68:
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
        uVar8 = *extraout_x8;
        uVar5 = extraout_x1;
        pcVar12 = extraout_x8;
        iVar9 = extraout_x11;
    } while( true );
}


// ===== sym.msm_minidump_log_init @ 0x08005cec (size 4380) =====

int64_t sym.msm_minidump_log_init(int64_t arg1)

{
    uint64_t uVar1;
    code cVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uVar12;
    char *pcVar13;
    uint32_t *arg2;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t *extraout_x12;
    int64_t *extraout_x12_00;
    int64_t *piVar16;
    int64_t *extraout_x12_01;
    int64_t *extraout_x12_02;
    uint *extraout_x13;
    uint *extraout_x13_00;
    uint32_t *extraout_x13_01;
    uint *extraout_x13_02;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar17;
    uint64_t *puVar18;
    uint32_t uVar19;
    ulong *puVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint64_t uStack_130;
    int64_t iStack_128;
    int64_t iStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint32_t uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    uint64_t uStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    puVar18 = &uStack_130;
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_70 = *(iVar14 + 0x5e0);
    iStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    iStack_d0 = 0;
    uStack_c8 = 0;
    iVar7 = android_debug_symbol(0);
    iVar8 = android_debug_symbol(1);
    iVar9 = android_debug_symbol(2);
    iVar10 = android_debug_symbol(3);
    strscpy(&iStack_d0,"",0xd);
    iVar14 = (iVar7 << 8) >> 8;
    uVar11 = iVar14 + 0x8000000000;
    uVar17 = (iVar8 - iVar7) + 3;
    iStack_b0 = _strcmp + uVar11;
    if (uVar11 >> 0x26 != 0) {
        iStack_b0 = iVar14 - _strlen;
    }
    uStack_a8 = (iVar8 - iVar7) + 6;
    if (-1 < uVar17) {
        uStack_a8 = uVar17;
    }
    uStack_a8 = uStack_a8 & 0xfffffffffffffffc;
    uStack_b8 = iVar7;
    iVar5 = sym.msm_minidump_add_region(&iStack_d0);
    if (iVar5 < 0) {
        _printk(0x8001245);
    }
    uVar11 = android_debug_symbol(4);
    iVar7 = android_debug_symbol(5);
    strscpy(&iStack_d0,"",0xd);
    iVar14 = (uVar11 << 8) >> 8;
    uVar17 = iVar14 + 0x8000000000;
    iStack_b0 = _strcmp + uVar17;
    if (uVar17 >> 0x26 != 0) {
        iStack_b0 = iVar14 - _strlen;
    }
    uVar17 = (iVar7 - uVar11) + 3;
    uStack_a8 = (iVar7 - uVar11) + 6;
    if (-1 < uVar17) {
        uStack_a8 = uVar17;
    }
    uStack_a8 = uStack_a8 & 0xfffffffffffffffc;
    uStack_b8 = uVar11;
    iVar5 = sym.msm_minidump_add_region(&iStack_d0);
    if (iVar5 < 0) {
        _printk(0x80018e3);
    }
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x13 = 0x8038000;
    if (uVar6 < 0x8038000) {
        uVar11 = uVar6;
        do {
            if (0x1f < uVar11) goto code_r0x08006e00;
            iVar14 = *(__per_cpu_offset + uVar11 * 8);
            iStack_d0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            iStack_b0 = 0;
            uStack_a8 = 0;
            scnprintf(&iStack_d0,0xd,"",uVar11);
            uStack_b8 = iVar14 + iVar9;
            iStack_b0 = per_cpu_ptr_to_phys(iVar14 + iVar9);
            uStack_a8 = iVar10 - iVar9;
            iVar5 = sym.msm_minidump_add_region(&iStack_d0);
            if (iVar5 < 0) {
                _printk(0x8002124);
            }
            uVar6 = cpumask_next(uVar11,__cpu_possible_mask);
            uVar11 = uVar6;
            *extraout_x13_00 = 0x8038000;
        } while (uVar6 < 0x8038000);
    }
    iStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    obj.is_vmap_stack = 0x1;
    iStack_d0 = 0;
    uStack_c8 = 0;
    iVar14 = android_debug_per_cpu_symbol(0);
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    uVar19 = uVar11;
    *extraout_x13_01 = uVar19;
    if (uVar6 < uVar19) {
        do {
            uVar17 = uVar6;
            if (0x1f < uVar6) goto code_r0x08006e00;
            uVar19 = 0x8038000;
            uVar11 = *(*(__per_cpu_offset + uVar17 * 8) + iVar14);
            if (obj.is_vmap_stack == 0x1) {
                uVar11 = uVar11 & 0xfffffffffffff000;
                scnprintf(&iStack_d0,0xd,"",uVar17,0);
                uStack_a8 = 0x1000;
                uStack_b8 = uVar11;
                if (obj.is_vmap_stack == 0x1) {
                    iVar7 = vmalloc_to_page(uVar11);
                    iStack_b0 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                }
                else {
                    iVar7 = (uVar11 << 8) >> 8;
                    uVar15 = iVar7 + 0x8000000000;
                    iStack_b0 = _strcmp + uVar15;
                    if (uVar15 >> 0x26 != 0) {
                        iStack_b0 = iVar7 - _strlen;
                    }
                }
                iVar5 = sym.msm_minidump_add_region(&iStack_d0);
                if (iVar5 < 0) {
                    _printk_deferred("",&iStack_d0);
                }
                iVar7 = uVar11 + 0x1000;
                scnprintf(&iStack_d0,0xd,"",uVar17,1);
                uStack_a8 = 0x1000;
                uStack_b8 = iVar7;
                if ((obj.is_vmap_stack & 1) == 0) {
                    iVar7 = iVar7 * 0x100 >> 8;
                    uVar15 = iVar7 + 0x8000000000;
                    iStack_b0 = _strcmp + uVar15;
                    if (uVar15 >> 0x26 != 0) {
                        iStack_b0 = iVar7 - _strlen;
                    }
                }
                else {
                    iVar7 = vmalloc_to_page(iVar7);
                    iStack_b0 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                }
                iVar5 = sym.msm_minidump_add_region(&iStack_d0);
                if (iVar5 < 0) {
                    _printk_deferred("",&iStack_d0);
                }
                iVar7 = uVar11 + 0x2000;
                scnprintf(&iStack_d0,0xd,"",uVar17,2);
                uStack_a8 = 0x1000;
                uStack_b8 = iVar7;
                if ((obj.is_vmap_stack & 1) == 0) {
                    iVar7 = iVar7 * 0x100 >> 8;
                    uVar15 = iVar7 + 0x8000000000;
                    iStack_b0 = _strcmp + uVar15;
                    if (uVar15 >> 0x26 != 0) {
                        iStack_b0 = iVar7 - _strlen;
                    }
                }
                else {
                    iVar7 = vmalloc_to_page(iVar7);
                    iStack_b0 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                }
                iVar5 = sym.msm_minidump_add_region(&iStack_d0);
                if (iVar5 < 0) {
                    _printk_deferred("",&iStack_d0);
                }
                uVar11 = uVar11 + 0x3000;
                scnprintf(&iStack_d0,0xd,"",uVar17,3);
                uStack_a8 = 0x1000;
                if ((obj.is_vmap_stack & 1) != 0) goto code_r0x08006208;
code_r0x08005f78:
                iVar7 = (uVar11 << 8) >> 8;
                uVar15 = iVar7 + 0x8000000000;
                iStack_b0 = _strcmp + uVar15;
                uStack_b8 = uVar11;
                if (uVar15 >> 0x26 != 0) {
                    iStack_b0 = iVar7 - _strlen;
                }
            }
            else {
                scnprintf(&iStack_d0,0xd,"",uVar17);
                uStack_a8 = 0x4000;
                if (obj.is_vmap_stack != 0x1) goto code_r0x08005f78;
code_r0x08006208:
                uStack_b8 = uVar11;
                iVar7 = vmalloc_to_page(uVar11);
                iStack_b0 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            iVar5 = sym.msm_minidump_add_region(&iStack_d0);
            if (iVar5 < 0) {
                _printk_deferred("",&iStack_d0);
            }
            uVar6 = cpumask_next(uVar17,__cpu_possible_mask);
            *extraout_x13_02 = 0x8038000;
        } while (uVar6 < 0x8038000);
    }
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    iStack_d0 = 0;
    if (obj.is_vmap_stack == 0x1) {
        iVar14 = sp_el0;
        puVar18 = *(*(iVar14 + 0xb18) + 8);
    }
    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
    if (uVar6 < uVar19) {
        uStack_110 = puVar18 & 0xffffffffffffc000;
        uStack_118 = puVar18 & 0xfffffffffffff000;
        iStack_128 = (uStack_110 << 8) >> 8;
        uStack_130 = iStack_128 + 0x8000000000;
        iStack_120 = (puVar18 & 0xfffffffffff000) << 8;
        do {
            uVar17 = uVar6;
            if (0x1f < uVar6) {
code_r0x08006e00:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8006e04);
                (*pcVar3)();
            }
            iVar14 = *(__per_cpu_offset + uVar17 * 8);
            pcVar3 = obj.md_stack_data + iVar14;
            scnprintf(&iStack_d0,0xc,"",uVar17);
            if (obj.is_vmap_stack == 0x1) {
                uVar11 = 0;
                puVar20 = iVar14 + 0x800bd38;
                iVar14 = iStack_120;
                uVar15 = uStack_118;
                do {
                    puVar21 = puVar20 + -5;
                    scnprintf(puVar21,0xd,"",&iStack_d0,uVar11 & 0xffffffff);
                    cVar2 = obj.is_vmap_stack;
                    puVar20[-2] = uVar15;
                    *puVar20 = 0x1000;
                    if (cVar2 == 0x1) {
                        iVar7 = vmalloc_to_page(uVar15);
                        iVar7 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                    }
                    else {
                        uVar1 = (iVar14 >> 8) + 0x8000000000;
                        iVar7 = _strcmp + uVar1;
                        if (uVar1 >> 0x26 != 0) {
                            iVar7 = (iVar14 >> 8) - _strlen;
                        }
                    }
                    puVar20[-1] = iVar7;
                    iVar5 = sym.msm_minidump_add_region(puVar21);
                    piVar16 = extraout_x12_00;
                    if (iVar5 < 0) {
                        _printk_deferred("",puVar21);
                        piVar16 = extraout_x12_01;
                    }
                    *(pcVar3 + uVar11 * 4) = iVar5;
                    uVar15 = uVar15 + 0x1000;
                    uVar11 = uVar11 + 1;
                    puVar20 = puVar20 + 6;
                    iVar14 = iVar14 + 0x100000;
                } while (uVar11 != 4);
            }
            else {
                iVar7 = iVar14 + 0x800bd10;
                scnprintf(iVar7,0xd,&iStack_d0);
                bVar4 = obj.is_vmap_stack == 0x1;
                *(iVar14 + 0x800bd28) = uStack_110;
                *(iVar14 + 0x800bd38) = 0x4000;
                if (bVar4) {
                    iVar8 = vmalloc_to_page();
                    iVar8 = (iVar8 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
                }
                else {
                    iVar8 = _strcmp + uStack_130;
                    if (uStack_130 >> 0x26 != 0) {
                        iVar8 = iStack_128 - _strlen;
                    }
                }
                *(iVar14 + 0x800bd30) = iVar8;
                iVar5 = sym.msm_minidump_add_region(iVar7);
                piVar16 = extraout_x12;
                if (iVar5 < 0) {
                    _printk_deferred("",iVar7);
                    piVar16 = extraout_x12_02;
                }
                *pcVar3 = iVar5;
            }
            *piVar16 = pcVar3;
            uVar6 = cpumask_next(dma_fence_release,uVar17,__cpu_possible_mask);
        } while (uVar6 < pcVar3);
    }
    tracepoint_probe_register(__tracepoint_sched_switch,sym.md_current_stack_notifer.cfi_jt,0);
    obj.md_current_stack_init = 0x1;
    smp_call_function(sym.md_current_stack_ipi_handler.cfi_jt,0,1);
    iVar14 = sp_el0;
    iVar7 = *(iVar14 + 0xb18);
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    iStack_d0 = 0;
    scnprintf(&iStack_d0,0xc,"");
    uStack_110 = iVar14;
    if (obj.is_vmap_stack == 0x1) {
        uVar15 = *(iVar7 + 8);
        uVar17 = 0;
        puVar20 = 0x80005f0;
        uVar11 = uVar15 & 0xfffffffffffff000;
        iVar14 = (uVar15 & 0xfffffffffff000) << 8;
        do {
            puVar21 = puVar20 + -5;
            scnprintf(puVar21,0xd,"",&iStack_d0,uVar17 & 0xffffffff);
            puVar20[-2] = uVar11;
            *puVar20 = 0x1000;
            if (obj.is_vmap_stack == 0x1) {
                iVar7 = vmalloc_to_page(uVar11);
                iVar7 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            else {
                uVar15 = (iVar14 >> 8) + 0x8000000000;
                iVar7 = _strcmp + uVar15;
                if (uVar15 >> 0x26 != 0) {
                    iVar7 = (iVar14 >> 8) - _strlen;
                }
            }
            puVar20[-1] = iVar7;
            iVar5 = sym.msm_minidump_add_region(puVar21);
            if (iVar5 < 0) {
                _printk_deferred("",puVar21);
            }
            iVar7 = uVar17 * 4;
            uVar11 = uVar11 + 0x1000;
            uVar17 = uVar17 + 1;
            puVar20 = puVar20 + 6;
            iVar14 = iVar14 + 0x100000;
            *(iVar7 + 0x80005b4) = iVar5;
        } while (uVar17 != 4);
    }
    else {
        uVar17 = &uStack_130 & 0xffffffffffffc000;
        scnprintf(0x80005c8,0xd,&iStack_d0);
        *0x80005f0 = 0x4000;
        _reloc.md_panic_handler.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt = uVar17;
        if (obj.is_vmap_stack == 0x1) {
            iVar14 = vmalloc_to_page(uVar17);
            *0x80005e8 = (iVar14 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
        }
        else {
            iVar14 = (uVar17 << 8) >> 8;
            uVar17 = iVar14 + 0x8000000000;
            *0x80005e8 = _strcmp + uVar17;
            if (uVar17 >> 0x26 != 0) {
                *0x80005e8 = iVar14 - _strlen;
            }
        }
        iVar5 = sym.msm_minidump_add_region(0x80005c8);
        if (iVar5 < 0) {
            _printk_deferred("",0x80005c8);
        }
        _segment.ehdr = CONCAT44(*0x8000004,iVar5);
    }
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    iStack_d0 = 0;
    scnprintf(&iStack_d0,0xc,"");
    scnprintf(0x8000688,0xd,&iStack_d0);
    iVar14 = (uStack_110 << 8) >> 8;
    uVar17 = iVar14 + 0x8000000000;
    _obj.page_owner_dump_size_write._rs = _strcmp + uVar17;
    if (uVar17 >> 0x26 != 0) {
        _obj.page_owner_dump_size_write._rs = iVar14 - _strlen;
    }
    *0x80006a0 = uStack_110;
    *0x80006b0 = 0x1200;
    _obj.md_suspend_context = sym.msm_minidump_add_region(0x8000688);
    if (_obj.md_suspend_context < 0) {
        _printk(0x8001487,0x8000688);
    }
    register_pm_notifier(reloc.minidump_pm_notifier.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt);
    uStack_80 = 0;
    uStack_78 = 0;
    *0x80006b8 = 1;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    iStack_d0 = 0;
    uStack_c8 = 0;
    uStack_104 = 0;
    iStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uVar17 = of_find_compatible_node(0,0,"");
    uVar12 = 0x8001d71;
    if ((uVar17 != 0) && (uVar17 < 0xfffffffffffff001)) {
        iVar5 = of_address_to_resource(uVar17,0,&iStack_d0);
        iVar14 = iStack_d0;
        if (iVar5 != 0) {
            iVar14 = of_reserved_mem_lookup(uVar17);
            if (iVar14 == 0) {
                uVar12 = 0x8000ead;
                goto code_r0x08006a14;
            }
            iVar14 = *(iVar14 + 0x20);
        }
        iVar5 = of_property_read_variable_u32_array(uVar17,"",&uStack_104,1,0);
        if ((-1 < iVar5) && (uStack_104 != 0)) {
            strscpy(&uStack_100,"",0xd);
            uStack_d8 = uStack_104;
            uStack_e8 = iVar14 - _strcmp | 0xffffff8000000000;
            iStack_e0 = iVar14;
            iVar5 = sym.msm_minidump_add_region(&uStack_100);
            if (iVar5 < 0) {
                _printk(0x8001806);
            }
            iVar14 = iVar14 + uStack_104;
        }
        iVar5 = of_property_read_variable_u32_array(uVar17,"",&uStack_104,1,0);
        if ((-1 < iVar5) && (uStack_104 != 0)) {
            strscpy(&uStack_100,"",0xd);
            uStack_d8 = uStack_104;
            uStack_e8 = iVar14 - _strcmp | 0xffffff8000000000;
            iStack_e0 = iVar14;
            iVar5 = sym.msm_minidump_add_region(&uStack_100);
            if (iVar5 < 0) {
                _printk(0x8000fc3);
            }
            iVar14 = iVar14 + uStack_104;
        }
        iVar5 = of_property_read_variable_u32_array(uVar17,"",&uStack_104,1,0);
        if ((-1 < iVar5) && (uStack_104 != 0)) {
            strscpy(&uStack_100,"",0xd);
            uStack_d8 = uStack_104;
            uStack_e8 = iVar14 - _strcmp | 0xffffff8000000000;
            iStack_e0 = iVar14;
            iVar5 = sym.msm_minidump_add_region(&uStack_100);
            if (iVar5 < 0) {
                _printk(0x8001658);
            }
            iVar14 = iVar14 + uStack_104;
        }
        iVar5 = of_property_read_variable_u32_array(uVar17,"",&uStack_104,1,0);
        if ((iVar5 < 0) || (uStack_104 == 0)) goto code_r0x08006a18;
        strscpy(&uStack_100,"",0xd);
        uStack_d8 = uStack_104;
        uStack_e8 = iVar14 - _strcmp | 0xffffff8000000000;
        iStack_e0 = iVar14;
        iVar5 = sym.msm_minidump_add_region(&uStack_100);
        if (-1 < iVar5) goto code_r0x08006a18;
        uVar12 = 0x8001cf6;
    }
code_r0x08006a14:
    _printk(uVar12);
code_r0x08006a18:
    iStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    iStack_d0 = 0;
    uStack_c8 = 0;
    uVar17 = kmalloc_order_trace(0x200000,0xdc0,9);
    if (uVar17 != 0) {
        strscpy(&iStack_d0,"",0xd);
        iVar14 = (uVar17 << 8) >> 8;
        uVar11 = iVar14 + 0x8000000000;
        iStack_b0 = _strcmp + uVar11;
        if (uVar11 >> 0x26 != 0) {
            iStack_b0 = iVar14 - _strlen;
        }
        uStack_a8 = 0x200000;
        uStack_b8 = uVar17;
        iVar5 = sym.msm_minidump_add_region(&iStack_d0);
        if (iVar5 < 0) {
            _printk(0x8002037);
        }
        tracepoint_probe_register
                  (__tracepoint_android_vh_ftrace_oops_enter,
                   sym.md_trace_oops_enter.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_ftrace_oops_exit,
                   sym.md_trace_oops_exit.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_ftrace_size_check,
                   sym.md_buf_size_check.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_ftrace_format_check,
                   sym.md_update_trace_fmt.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        tracepoint_probe_register
                  (__tracepoint_android_vh_ftrace_dump_buffer,
                   sym.md_dump_trace_buf.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        DataMemoryBarrier(2,3);
        _segment.ehdr = uVar17;
    }
    iVar5 = sym.md_register_panic_entries(8,0x80016f9,0x80006d8);
    if (iVar5 == 0) {
        seq_buf_printf(_segment.ehdr,"");
        iVar5 = register_module_notifier(reloc.md_module_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt);
        if (iVar5 == 0) {
            android_debug_for_each_module(sym.md_get_present_module.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
        }
        else {
            _printk(0x8001829);
        }
    }
    else {
        _printk(0x80012fb);
    }
    sym.md_register_panic_entries(8,0x8000ce3,0x80005a0);
    sym.md_register_panic_entries(0x20,0x80015c7,0x8000530);
    tracepoint_probe_register
              (__tracepoint_android_vh_ipi_stop,sym.md_ipi_stop.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt,0);
    sym.md_register_panic_entries(1,0x8000c91,0x8000538);
    sym.md_register_panic_entries(8,0x80012c7,0x8000540);
    uVar17 = debugfs_create_dir("",0);
    pcVar13 = android_debug_symbol(0xe);
    if (*pcVar13 != '\0') {
        sym.md_register_memory_dump(_segment.ehdr & 0xffffffff,0x800167c);
        debugfs_create_file("",0x100,uVar17,0,obj.proc_page_owner_dump_size_ops.llvm.4879534546058154217);
        debugfs_create_file("",0x100,uVar17,0,obj.proc_page_owner_filter_ops.llvm.4879534546058154217);
        debugfs_create_file("",0x100,uVar17,0,obj.accounted_call_site_lock);
        debugfs_create_file("",0x100,uVar17,0,obj.proc_page_owner_call_site_ops.llvm.4879534546058154217);
    }
    uVar11 = sym.is_slub_debug_enabled();
    if ((uVar11 & 1) != 0) {
        sym.md_register_memory_dump(_segment.ehdr & 0xffffffff,0x80014b4);
        sym.md_debugfs_slabowner(uVar17);
    }
    sym.md_register_memory_dump(_segment.ehdr & 0xffffffff,0x800185e);
    debugfs_create_file("",0x100,uVar17,0,obj.proc_dma_buf_info_size_ops.llvm.4879534546058154217);
    sym.md_register_memory_dump(_segment.ehdr & 0xffffffff,0x8001328);
    debugfs_create_file("",0x100,uVar17,0,obj.proc_dma_buf_procs_size_ops.llvm.4879534546058154217);
    atomic_notifier_chain_register(panic_notifier_list,reloc.md_panic_handler.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt);
    register_die_notifier(reloc.md_die_context_notify.20f42d7d8c3d1386eca27c37cf67362b.cfi_jt);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_70) {
        return 0;
    }
    auVar22 = __stack_chk_fail();
    arg2 = auVar22._8_8_;
    iVar14 = auVar22._0_8_;
    *extraout_x18 = sym.update_md_stack;
    uVar6 = *arg2;
    if (obj.is_vmap_stack == 0x1) {
        if ((((-1 < uVar6) && (-1 < arg2[1])) && (-1 < arg2[2])) && (-1 < arg2[3])) {
            uVar17 = uVar17 & 0xfffffffffffff000;
            *(iVar14 + 0x18) = uVar17;
            iVar7 = vmalloc_to_page(uVar17);
            *(iVar14 + 0x20) = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            iVar5 = sym.msm_minidump_update_region(uVar6,iVar14);
            if (iVar5 < 0) {
                _printk_deferred("",iVar14);
            }
            cVar2 = obj.is_vmap_stack;
            uVar6 = arg2[1];
            *(iVar14 + 0x48) = uVar17 + 0x1000;
            if ((cVar2 & 1) == 0) {
                iVar7 = (uVar17 + 0x1000) * 0x100 >> 8;
                uVar11 = iVar7 + 0x8000000000;
                iVar8 = _strcmp + uVar11;
                if (uVar11 >> 0x26 != 0) {
                    iVar8 = iVar7 - _strlen;
                }
            }
            else {
                iVar7 = vmalloc_to_page();
                iVar8 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(iVar14 + 0x50) = iVar8;
            iVar5 = sym.msm_minidump_update_region(uVar6,iVar14 + 0x30);
            if (iVar5 < 0) {
                _printk_deferred("",iVar14 + 0x30);
            }
            cVar2 = obj.is_vmap_stack;
            uVar6 = arg2[2];
            *(iVar14 + 0x78) = uVar17 + 0x2000;
            if ((cVar2 & 1) == 0) {
                iVar7 = (uVar17 + 0x2000) * 0x100 >> 8;
                uVar11 = iVar7 + 0x8000000000;
                iVar8 = _strcmp + uVar11;
                if (uVar11 >> 0x26 != 0) {
                    iVar8 = iVar7 - _strlen;
                }
            }
            else {
                iVar7 = vmalloc_to_page();
                iVar8 = (iVar7 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(iVar14 + 0x80) = iVar8;
            iVar5 = sym.msm_minidump_update_region(uVar6,iVar14 + 0x60);
            if (iVar5 < 0) {
                _printk_deferred("",iVar14 + 0x60);
            }
            cVar2 = obj.is_vmap_stack;
            iVar7 = iVar14 + 0x90;
            uVar6 = arg2[3];
            *(iVar14 + 0xa8) = uVar17 + 0x3000;
            if ((cVar2 & 1) == 0) {
                iVar8 = (uVar17 + 0x3000) * 0x100 >> 8;
                uVar17 = iVar8 + 0x8000000000;
                iVar9 = _strcmp + uVar17;
                if (uVar17 >> 0x26 != 0) {
                    iVar9 = iVar8 - _strlen;
                }
            }
            else {
                iVar8 = vmalloc_to_page();
                iVar9 = (iVar8 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(iVar14 + 0xb0) = iVar9;
            iVar14 = sym.msm_minidump_update_region(uVar6,iVar7);
            if (iVar14 < 0) {
                iVar14 = _printk_deferred("",iVar7);
            }
        }
    }
    else if (-1 < uVar6) {
        iVar14 = sym.register_normal_stack(iVar14,arg2,uVar17);
    }
    return iVar14;
}


// ===== sym.update_md_stack @ 0x08006e08 (size 648) =====

void sym.update_md_stack(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code cVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *arg2;
    if (obj.is_vmap_stack == 0x1) {
        if ((((-1 < uVar2) && (-1 < *(arg2 + 4))) && (-1 < *(arg2 + 8))) && (-1 < *(arg2 + 0xc))) {
            uVar7 = arg3 & 0xfffffffffffff000;
            *(arg1 + 0x18) = uVar7;
            iVar5 = vmalloc_to_page(uVar7);
            *(arg1 + 0x20) = (iVar5 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            iVar4 = sym.msm_minidump_update_region(uVar2,arg1);
            if (iVar4 < 0) {
                _printk_deferred("",arg1);
            }
            cVar3 = obj.is_vmap_stack;
            uVar2 = *(arg2 + 4);
            *(arg1 + 0x48) = uVar7 + 0x1000;
            if ((cVar3 & 1) == 0) {
                iVar5 = (uVar7 + 0x1000) * 0x100 >> 8;
                uVar1 = iVar5 + 0x8000000000;
                iVar6 = _strcmp + uVar1;
                if (uVar1 >> 0x26 != 0) {
                    iVar6 = iVar5 - _strlen;
                }
            }
            else {
                iVar5 = vmalloc_to_page();
                iVar6 = (iVar5 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(arg1 + 0x50) = iVar6;
            iVar4 = sym.msm_minidump_update_region(uVar2,arg1 + 0x30);
            if (iVar4 < 0) {
                _printk_deferred("",arg1 + 0x30);
            }
            cVar3 = obj.is_vmap_stack;
            uVar2 = *(arg2 + 8);
            *(arg1 + 0x78) = uVar7 + 0x2000;
            if ((cVar3 & 1) == 0) {
                iVar5 = (uVar7 + 0x2000) * 0x100 >> 8;
                uVar1 = iVar5 + 0x8000000000;
                iVar6 = _strcmp + uVar1;
                if (uVar1 >> 0x26 != 0) {
                    iVar6 = iVar5 - _strlen;
                }
            }
            else {
                iVar5 = vmalloc_to_page();
                iVar6 = (iVar5 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(arg1 + 0x80) = iVar6;
            iVar4 = sym.msm_minidump_update_region(uVar2,arg1 + 0x60);
            if (iVar4 < 0) {
                _printk_deferred("",arg1 + 0x60);
            }
            cVar3 = obj.is_vmap_stack;
            uVar2 = *(arg2 + 0xc);
            *(arg1 + 0xa8) = uVar7 + 0x3000;
            if ((cVar3 & 1) == 0) {
                iVar5 = (uVar7 + 0x3000) * 0x100 >> 8;
                uVar7 = iVar5 + 0x8000000000;
                iVar6 = _strcmp + uVar7;
                if (uVar7 >> 0x26 != 0) {
                    iVar6 = iVar5 - _strlen;
                }
            }
            else {
                iVar5 = vmalloc_to_page();
                iVar6 = (iVar5 + (_strcmp >> 6 & 0x3ffffffffffffc0) + 0x200000000) * 0x40;
            }
            *(arg1 + 0xb0) = iVar6;
            iVar4 = sym.msm_minidump_update_region(uVar2,arg1 + 0x90);
            if (iVar4 < 0) {
                _printk_deferred("",arg1 + 0x90);
            }
        }
    }
    else if (-1 < uVar2) {
        sym.register_normal_stack(arg1,arg2,arg3);
    }
    return;
}


// ===== sym.register_normal_stack @ 0x08007090 (size 192) =====

void sym.register_normal_stack(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    code cVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar3 = obj.is_vmap_stack;
    uVar2 = *arg2;
    *(arg1 + 0x18) = arg3 & 0xffffffffffffc000U;
    if (cVar3 == 0x1) {
        iVar5 = vmalloc_to_page();
        iVar6 = (iVar5 + (_strcmp >> 0xc) * 0x40) * 0x40 + 0x8000000000;
    }
    else {
        iVar5 = ((arg3 & 0xffffffffffffc000U) << 8) >> 8;
        uVar1 = iVar5 + 0x8000000000;
        iVar6 = _strcmp + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iVar6 = iVar5 - _strlen;
        }
    }
    *(arg1 + 0x20) = iVar6;
    iVar4 = sym.msm_minidump_update_region(uVar2,arg1);
    if (iVar4 < 0) {
        _printk_deferred("",arg1);
    }
    return;
}


// ===== sym.md_reg_context_data @ 0x08007150 (size 236) =====

void sym.md_reg_context_data(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    int64_t arg3;
    int iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (((*(arg1 + 0x108) & 0xf) != 0) && (*(arg1 + 0x100) != 0)) {
        sym.md_dump_data(*(arg1 + 0x100) + -0x80,0x8000c04);
        sym.md_dump_data(*(arg1 + 0xf0) + -0x80,0x8000ad5);
        sym.md_dump_data(*(arg1 + 0xf8) + -0x80,0x8001593);
        uVar4 = 0;
        do {
            uStack_3c = 0;
            snprintf(&uStack_3c,4,0x8000ea1,uVar4 & 0xffffffff);
            sym.md_dump_data(*(arg1 + uVar4 * 8) + -0x80,&uStack_3c);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 0x1e);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail();
    uVar4 = auVar8._0_8_;
    *extraout_x18 = sym.md_dump_data;
    pcStack_88 = sym.md_dump_data;
    iVar2 = sp_el0;
    iStack_98 = *(iVar2 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    if (0xffffff80000000fe < uVar4 + 0xff) {
        seq_buf_printf(_segment.ehdr,"",auVar8._8_8_,uVar4);
        uVar4 = uVar4 & 0xfffffffffffffffc;
        uVar7 = (auVar8._0_4_ & 3) + 0x11f >> 5;
        uVar6 = uVar4;
        do {
            seq_buf_printf(_segment.ehdr,"",uVar6 & 0xffff);
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 4,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 8,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 0xc,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 0x10,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 0x14,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 0x18,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_9c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_9c,uVar4 + 0x1c,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_9c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            seq_buf_printf(_segment.ehdr,0x8001a67);
            uVar7 = uVar7 - 1;
            uVar6 = uVar6 + 0x20;
            uVar4 = uVar4 + 0x20;
        } while (uVar7 != 0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_98) {
        auVar8 = __stack_chk_fail();
        arg3 = auVar8._8_8_;
        iVar2 = auVar8._0_8_;
        *extraout_x18_00 = sym.md_dump_cfs_rq;
        sym.md_dump_cgroup_state(0x8001064,*(iVar2 + 0x40),arg3);
        sym.md_dump_cgroup_state(0x8000d40,*(iVar2 + 0x48),arg3);
        sym.md_dump_cgroup_state(0x8000fa2,*(iVar2 + 0x50),arg3);
        sym.md_dump_cgroup_state(0x8001b97,*(iVar2 + 0x58),arg3);
        iVar5 = *(iVar2 + 0x38);
        iVar2 = rb_first(iVar2 + 0x30);
        if ((iVar5 != 0) && (iVar2 != 0)) {
            iVar3 = -199;
            do {
                sym.md_dump_cgroup_state(0x8001f22,iVar2 + -0x10,arg3);
                iVar2 = rb_next(iVar2);
                if (iVar2 == 0) {
                    return;
                }
                bVar1 = iVar3 != 0;
                iVar3 = iVar3 + 1;
            } while (bVar1);
        }
        return;
    }
    return;
}


// ===== sym.md_dump_data @ 0x0800723c (size 732) =====

void sym.md_dump_data(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int64_t arg3;
    int iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    if (0xffffff80000000fe < arg1 + 0xffU) {
        seq_buf_printf(_segment.ehdr,"",arg2,arg1);
        uVar5 = arg1 & 0xfffffffffffffffc;
        uVar7 = (arg1 & 3) + 0x11f >> 5;
        uVar6 = uVar5;
        do {
            seq_buf_printf(_segment.ehdr,"",uVar6 & 0xffff);
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 4,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 8,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 0xc,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 0x10,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 0x14,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 0x18,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            uStack_5c = 0;
            iVar2 = copy_from_kernel_nofault(&uStack_5c,uVar5 + 0x1c,4);
            if (iVar2 == 0) {
                seq_buf_printf(_segment.ehdr,"",uStack_5c);
            }
            else {
                seq_buf_printf(_segment.ehdr,"");
            }
            seq_buf_printf(_segment.ehdr,0x8001a67);
            uVar7 = uVar7 - 1;
            uVar6 = uVar6 + 0x20;
            uVar5 = uVar5 + 0x20;
        } while (uVar7 != 0);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        auVar8 = __stack_chk_fail();
        arg3 = auVar8._8_8_;
        iVar2 = auVar8._0_8_;
        *extraout_x18 = sym.md_dump_cfs_rq;
        sym.md_dump_cgroup_state(0x8001064,*(iVar2 + 0x40),arg3);
        sym.md_dump_cgroup_state(0x8000d40,*(iVar2 + 0x48),arg3);
        sym.md_dump_cgroup_state(0x8000fa2,*(iVar2 + 0x50),arg3);
        sym.md_dump_cgroup_state(0x8001b97,*(iVar2 + 0x58),arg3);
        iVar4 = *(iVar2 + 0x38);
        iVar2 = rb_first(iVar2 + 0x30);
        if ((iVar4 != 0) && (iVar2 != 0)) {
            iVar3 = -199;
            do {
                sym.md_dump_cgroup_state(0x8001f22,iVar2 + -0x10,arg3);
                iVar2 = rb_next(iVar2);
                if (iVar2 == 0) {
                    return;
                }
                bVar1 = iVar3 != 0;
                iVar3 = iVar3 + 1;
            } while (bVar1);
        }
        return;
    }
    return;
}


// ===== sym.md_dump_cfs_rq @ 0x08007518 (size 216) =====

void sym.md_dump_cfs_rq(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.md_dump_cgroup_state(0x8001064,*(arg1 + 0x40),arg2);
    sym.md_dump_cgroup_state(0x8000d40,*(arg1 + 0x48),arg2);
    sym.md_dump_cgroup_state(0x8000fa2,*(arg1 + 0x50),arg2);
    sym.md_dump_cgroup_state(0x8001b97,*(arg1 + 0x58),arg2);
    iVar4 = *(arg1 + 0x38);
    iVar2 = rb_first(arg1 + 0x30);
    if ((iVar4 != 0) && (iVar2 != 0)) {
        iVar3 = -199;
        do {
            sym.md_dump_cgroup_state(0x8001f22,iVar2 + -0x10,arg2);
            iVar2 = rb_next(iVar2);
            if (iVar2 == 0) {
                return;
            }
            bVar1 = iVar3 != 0;
            iVar3 = iVar3 + 1;
        } while (bVar1);
    }
    return;
}


// ===== sym.md_dump_cgroup_state @ 0x080075f0 (size 316) =====

void sym.md_dump_cgroup_state(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (arg2 == 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8000ea5);
        }
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",arg1);
    }
    else {
        arg1_00 = *(arg2 + 0x158);
        if (arg1_00 == 0) {
            sym.md_dump_task_info(arg2 + -0xc0,arg1,arg3);
        }
        else {
            uVar1 = *(arg1_00 + 0x10);
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8000ea5);
            }
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",arg1,uVar1);
            _segment.ehdr = _segment.ehdr + 1;
            sym.md_dump_cfs_rq(arg1_00,arg3);
            _segment.ehdr = _segment.ehdr + -1;
        }
    }
    return;
}


// ===== sym.md_dump_task_info @ 0x0800772c (size 216) =====

void sym.md_dump_task_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (iVar1 = _segment.ehdr; iVar1 != 0; iVar1 = iVar1 + -1) {
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8000ea5);
    }
    seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"");
    if (arg1 == 0) {
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",arg2);
    }
    else if (arg1 == arg3) {
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(arg1 + 0x5d8),*(arg1 + 0x10));
    }
    else {
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",arg2);
    }
    return;
}


// ===== sym.minidump_pm_notifier @ 0x08007804 (size 224) =====

ulong sym.minidump_pm_notifier(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    uchar *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = &stack0xffffffffffffffe0;
    if ((arg2 == 3) && (*0x80006b8 != '\0')) {
        if (obj.is_vmap_stack == 0x1) {
            iVar2 = sp_el0;
            arg3 = *(*(iVar2 + 0xb18) + 8);
        }
        sym.update_md_stack(0x80005c8,0x80005b4,arg3);
        if (-1 < _obj.md_suspend_context) {
            *0x80006a0 = sp_el0;
            iVar2 = (*0x80006a0 << 8) >> 8;
            uVar1 = iVar2 + 0x8000000000;
            _obj.page_owner_dump_size_write._rs = uVar1 + _strcmp;
            if (uVar1 >> 0x26 != 0) {
                _obj.page_owner_dump_size_write._rs = iVar2 - _strlen;
            }
            iVar3 = sym.msm_minidump_update_region(_obj.md_suspend_context,0x8000688);
            if (iVar3 < 0) {
                _printk(0x8001f27,0x8000688);
            }
        }
    }
    return 0;
}


// ===== sym.md_trace_oops_enter @ 0x080078e4 (size 40) =====

void sym.md_trace_oops_enter(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    
    bVar1 = (obj.minidump_ftrace_in_oops & 1) != 0;
    if (!bVar1) {
        obj.minidump_ftrace_in_oops = 0x1;
    }
    *arg2 = bVar1;
    return;
}


// ===== sym.md_trace_oops_exit @ 0x0800790c (size 20) =====

void sym.md_trace_oops_exit(int64_t arg1)

{
    obj.minidump_ftrace_in_oops = 0x0;
    return;
}


// ===== sym.md_buf_size_check @ 0x08007920 (size 100) =====

void sym.md_buf_size_check(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.minidump_ftrace_dump & 1) == 0) {
        if (arg1 < 0x41001) {
            return;
        }
        _printk(0x8001d8e);
        obj.minidump_ftrace_dump = 0x1;
    }
    *arg2 = 1;
    return;
}


// ===== sym.md_update_trace_fmt @ 0x08007984 (size 16) =====

void sym.md_update_trace_fmt(int64_t arg1,int64_t arg2)

{
    *arg2 = 0;
    return;
}


// ===== sym.md_dump_trace_buf @ 0x08007994 (size 160) =====

int64_t sym.md_dump_trace_buf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.minidump_ftrace_in_oops == 0x1) && ((obj.minidump_ftrace_dump & 1) == 0)) {
        uVar2 = *(arg2 + 0x1010);
        if ((uVar2 < 0x200001) && (_obj.md_ftrace_buf_addr != 0)) {
            iVar1 = 0;
            if (_segment.ehdr + uVar2 < 0x200001) {
                iVar1 = _segment.ehdr;
            }
            arg1 = memcpy(_segment.ehdr + iVar1,arg2,uVar2);
            _segment.ehdr = iVar1 + uVar2;
        }
        *arg3 = 0;
    }
    return arg1;
}


// ===== sym.md_register_panic_entries @ 0x08007a38 (size 372) =====

int sym.md_register_panic_entries(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    uVar7 = (arg1 & 0xffffffffU) << 0xc;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar5 = __kmalloc(uVar7,0xdc0);
    if (iVar5 == 0) {
        iVar4 = -0x16;
    }
    else {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x20);
        if (piVar6 == NULL) {
            iVar4 = -0x16;
        }
        else {
            iVar3 = (iVar5 << 8) >> 8;
            uVar1 = iVar3 + 0x8000000000;
            iStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            iStack_60 = 0;
            iVar2 = _strcmp + uVar1;
            if (uVar1 >> 0x26 != 0) {
                iVar2 = iVar3 - _strlen;
            }
            uStack_78 = 0;
            uStack_70 = 0;
            strscpy(&uStack_78,arg2,0xd);
            iStack_60 = iVar5;
            iStack_58 = iVar2;
            uStack_50 = uVar7;
            iVar4 = sym.msm_minidump_add_region(&uStack_78);
            if (-1 < iVar4) {
                piVar6[2] = 0;
                piVar6[3] = 0;
                iVar4 = 0;
                *piVar6 = iVar5;
                piVar6[1] = uVar7 & 0xfffff000;
                DataMemoryBarrier(2,3);
                *arg3 = piVar6;
                goto code_r0x08007b50;
            }
            _printk(0x8000fe8,arg2);
            kfree(piVar6);
        }
        kfree(iVar5);
    }
code_r0x08007b50:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    iVar5 = __stack_chk_fail();
    if (iVar5 + -0x18 != obj.__this_module) {
        *extraout_x18 = sym.md_get_present_module;
        sym.md_module_process(iVar5 + -0x18);
    }
    return 0;
}


// ===== sym.md_get_present_module @ 0x08007bac (size 64) =====

ulong sym.md_get_present_module(uint32_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 - 0x18 != obj.__this_module) {
        *in_x18 = unaff_x30;
        sym.md_module_process(arg1 - 0x18);
    }
    return 0;
}


// ===== sym.md_module_notify @ 0x08007bec (size 88) =====

ulong sym.md_module_notify(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.md_modules_lock);
    if (*arg1 == 0) {
        sym.md_module_process(arg1);
    }
    _raw_spin_unlock(obj.md_modules_lock);
    return 0;
}


// ===== sym.md_module_process @ 0x08007c44 (size 924) =====

void sym.md_module_process(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    ulong uStack_a8;
    uint uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = _segment.ehdr;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + 0x18;
    if (_segment.ehdr < 1) {
        bVar4 = false;
    }
    else {
        if (_segment.ehdr - 0xbU < 0xfffffff6) goto code_r0x08007fdc;
        iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
        bVar4 = iVar5 == 0;
        if (iVar7 != 1) {
            iVar6 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
            bVar4 = iVar6 == 0 || iVar5 == 0;
            if (iVar7 != 2) {
                iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                bVar4 = iVar5 == 0 || bVar4;
                if (iVar7 != 3) {
                    iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                    bVar4 = iVar5 == 0 || bVar4;
                    if (iVar7 != 4) {
                        iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                        bVar4 = iVar5 == 0 || bVar4;
                        if (iVar7 != 5) {
                            iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                            bVar4 = iVar5 == 0 || bVar4;
                            if (iVar7 != 6) {
                                iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                                bVar4 = iVar5 == 0 || bVar4;
                                if (iVar7 != 7) {
                                    iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                                    bVar4 = iVar5 == 0 || bVar4;
                                    if (iVar7 != 8) {
                                        iVar5 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                                        bVar4 = iVar5 == 0 || bVar4;
                                        if (iVar7 != 9) {
                                            iVar7 = strcmp(CONCAT44(*0x8000004,_segment.ehdr),iVar1);
                                            bVar4 = iVar7 == 0 || bVar4;
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
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar11 = *(arg1 + 0x180);
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",iVar1,iVar11);
        if (bVar4) {
            uVar10 = *(arg1 + 0x194) + iVar11;
            uVar2 = *(arg1 + 0x188) + iVar11;
            uVar12 = uVar2 - uVar10;
            iVar7 = sym.msm_minidump_get_available_region();
            if (uVar12 >> 0xc < iVar7) {
                iVar11 = *(arg1 + 0x290);
                if (*(iVar11 + 0x28) != 0) {
                    uVar9 = 0;
                    do {
                        uVar8 = *(iVar11 + uVar9 * 0x48 + 0x70);
                        if (uVar10 <= uVar8 && uVar8 < uVar2) {
                            seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),"",*(iVar11 + uVar9 * 0x48 + 0x30));
                            iVar11 = *(arg1 + 0x290);
                        }
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < *(iVar11 + 0x28));
                }
                uStack_a0 = 0;
                uStack_a8 = 0;
                if (uVar12 != 0) {
                    iVar7 = 0;
                    do {
                        uVar8 = 0x1000 - (uVar10 & 0xfff);
                        uVar2 = uVar12;
                        if (uVar8 <= uVar12) {
                            uVar2 = uVar8;
                        }
                        iVar11 = vmalloc_to_page(uVar10);
                        uVar8 = _strcmp >> 0xc;
                        snprintf(&uStack_a8,0xc,"",iVar7,iVar1);
                        iStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        strscpy(&uStack_98,&uStack_a8,0xd);
                        uStack_80 = uVar10;
                        iStack_78 = (iVar11 + uVar8 * 0x40) * 0x40 + 0x8000000000;
                        uStack_70 = uVar2;
                        iVar5 = sym.msm_minidump_add_region(&uStack_98);
                        if (iVar5 < 0) {
                            _printk(0x8000fe8,&uStack_a8);
                        }
                        uVar10 = uVar10 + uVar2;
                        uVar12 = uVar12 - uVar2;
                        iVar7 = iVar7 + 1;
                    } while (uVar12 != 0);
                }
            }
            else {
                _printk(0x8000d6b,iVar1);
            }
        }
        seq_buf_printf(CONCAT44(*0x8000004,_segment.ehdr),0x8001a67);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08007fdc:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8007fe0);
    (*pcVar3)();
}


// ===== sym.md_ipi_stop @ 0x08007fe0 (size 92) =====

void sym.md_ipi_stop(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = tpidr_el1;
    if (*(cpu_number + iVar1) < 0x20) {
        memcpy(obj.regs_before_stop + *(__per_cpu_offset + *(cpu_number + iVar1) * 8),param_2,0x150);
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x800803c);
    (*pcVar2)();
}


// ===== sym.md_panic_handler @ 0x08008040 (size 40) =====

ulong sym.md_panic_handler(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.md_dump_process();
    return 0;
}


// ===== sym.md_die_context_notify @ 0x08008068 (size 128) =====

ulong sym.md_die_context_notify(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.md_in_oops_handler & 1) == 0) {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        obj.md_in_oops_handler = 0x1;
        if (iVar2 != 0) {
            iVar1 = tpidr_el1;
            _segment.ehdr = *(cpu_number + iVar1);
            seq_buf_printf(iVar2,"");
            sym.md_reg_context_data(*arg2);
        }
        obj.md_in_oops_handler = 0x0;
    }
    return 0;
}


// ===== sym.md_dump_meminfo @ 0x080080ec (size 1656) =====

uint64_t sym.md_dump_meminfo(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint8_t *puVar8;
    ulong uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar11;
    uint64_t uVar12;
    char *pcVar13;
    char *pcVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    int64_t iStack_2a0;
    ulong uStack_298;
    uint64_t uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    int64_t iStack_270;
    ulong uStack_268;
    uint64_t uStack_260;
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    ulong uStack_240;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    uint64_t uStack_210;
    int64_t iStack_208;
    int64_t iStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    code *pcStack_1e8;
    ulong uStack_1e0;
    char *pcStack_1d0;
    char *pcStack_1c8;
    code *pcStack_1c0;
    ulong uStack_1b8;
    int64_t *piStack_1b0;
    ulong uStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_130;
    ulong uStack_128;
    char *pcStack_120;
    char *pcStack_118;
    code *pcStack_110;
    code *pcStack_108;
    char *pcStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    char *pcStack_e8;
    char *pcStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
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
    iStack_98 = 0;
    iStack_90 = 0;
    iStack_a8 = 0;
    iStack_a0 = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    si_meminfo(&stack0xffffffffffffff28);
    si_swapinfo(&stack0xffffffffffffff28);
    pcVar11 = vm_node_stat;
    uVar6 = 0x8038278;
    uVar18 = _vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU);
    uVar12 = _vm_zone_stat & (_vm_zone_stat >> 0x3f ^ 0xffffffffffffffffU);
    uStack_f0 = _dma_contiguous_default_area & (_dma_contiguous_default_area >> 0x3f ^ 0xffffffffffffffffU);
    uVar10 = (*0x80381d8 & (*0x80381d8 >> 0x3f ^ 0xffffffffffffffffU)) -
             (iStack_a0 + (*0x8038278 & (*0x8038278 >> 0x3f ^ 0xffffffffffffffffU)));
    uVar15 = _pcpu_nr_pages & (_pcpu_nr_pages >> 0x3f ^ 0xffffffffffffffffU);
    uVar17 = _get_slabinfo & (_get_slabinfo >> 0x3f ^ 0xffffffffffffffffU);
    iVar2 = si_mem_available();
    pcStack_e8 = _cma_release & (_cma_release >> 0x3f ^ 0xffffffffffffffffU);
    pcStack_e0 = _lookup_page_ext & (_lookup_page_ext >> 0x3f ^ 0xffffffffffffffffU);
    seq_buf_printf(arg1,"","",iStack_b8 << 2);
    seq_buf_printf(arg1,"","",iStack_b0 << 2);
    seq_buf_printf(arg1,"","",iVar2 << 2);
    seq_buf_printf(arg1,"","",iStack_a0 << 2);
    seq_buf_printf(arg1,"",L"",(uVar10 & (uVar10 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"","",(*0x8038278 & (*0x8038278 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"",L"",(uVar17 + uVar12) * 4);
    seq_buf_printf(arg1,"","",(uVar15 + uVar18) * 4);
    seq_buf_printf(arg1,"","",uVar12 << 2);
    seq_buf_printf(arg1,"","",uVar18 << 2);
    seq_buf_printf(arg1,"","",uVar17 << 2);
    seq_buf_printf(arg1,"","",uVar15 << 2);
    seq_buf_printf(arg1,"","",uStack_f0 << 2);
    seq_buf_printf(arg1,"","",(_vm_zone_stat & (_vm_zone_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"","",iStack_98 << 2);
    seq_buf_printf(arg1,"","",iStack_90 << 2);
    seq_buf_printf(arg1,"",L"",(*0x80381e0 & (*0x80381e0 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"","",(*0x80381e8 & (*0x80381e8 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"","",(___arch_copy_from_user & (___arch_copy_from_user >> 0x3f ^ 0xffffffffffffffffU)) << 2)
    ;
    seq_buf_printf(arg1,"",L"",
                   (___platform_driver_register & (___platform_driver_register >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"",L"",iStack_a8 << 2);
    pcVar14 = pcStack_e8;
    seq_buf_printf(arg1,"","",(pcStack_e8 + (*0x8038248 & (*0x8038248 >> 0x3f ^ 0xffffffffffffffffU))) * 4);
    pcVar13 = pcStack_e0;
    seq_buf_printf(arg1,"",L"",(pcStack_e0 + pcVar14) * 4);
    seq_buf_printf(arg1,"","",pcVar14 << 2);
    seq_buf_printf(arg1,"","",pcVar13 << 2);
    seq_buf_printf(arg1,"",*0x8038260 & (*0x8038260 >> 0x3f ^ 0xffffffffffffffffU));
    seq_buf_printf(arg1,"",*0x8038268 & (*0x8038268 >> 0x3f ^ 0xffffffffffffffffU));
    seq_buf_printf(arg1,"","",(*0x8038270 & (*0x8038270 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"",L"",(_pcpu_nr_pages & (_pcpu_nr_pages >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"","",(*0x80381f0 & (*0x80381f0 >> 0x3f ^ 0xffffffffffffffffU)) << 2);
    seq_buf_printf(arg1,"",0xf7a0000);
    iVar2 = vmalloc_nr_pages();
    seq_buf_printf(arg1,"","",iVar2 << 2);
    iVar2 = pcpu_nr_pages();
    seq_buf_printf(arg1,"",L"",iVar2 << 2);
    seq_buf_printf(arg1,"","",(*0x8038220 & (*0x8038220 >> 0x3f ^ 0xffffffffffffffffU)) << 0xb);
    seq_buf_printf(arg1,"","",(*0x8038200 & (*0x8038200 >> 0x3f ^ 0xffffffffffffffffU)) << 0xb);
    seq_buf_printf(arg1,"","",(*0x8038208 & (*0x8038208 >> 0x3f ^ 0xffffffffffffffffU)) << 0xb);
    seq_buf_printf(arg1,"","",(*0x8038210 & (*0x8038210 >> 0x3f ^ 0xffffffffffffffffU)) << 0xb);
    seq_buf_printf(arg1,"","",(*0x8038218 & (*0x8038218 >> 0x3f ^ 0xffffffffffffffffU)) << 0xb);
    piVar3 = android_debug_symbol(7);
    seq_buf_printf(arg1,"","",*piVar3 << 2);
    uVar10 = seq_buf_printf(arg1,"","",
                            (_dma_contiguous_default_area & (_dma_contiguous_default_area >> 0x3f ^ 0xffffffffffffffffU)
                            ) << 2);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = 0x80086f8;
    uStack_148 = 0x80086f8;
    uStack_128 = 0x8038278;
    pcStack_120 = pcVar14;
    pcStack_118 = pcVar13;
    pcStack_110 = vm_node_stat;
    pcStack_108 = vm_zone_stat;
    pcStack_100 = "";
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    puStack_150 = &stack0xffffffffffffffa0;
    uStack_140 = uVar17;
    uStack_130 = uVar15;
    iStack_f8 = arg1;
    piVar3 = android_debug_symbol(8);
    uVar5 = android_debug_symbol(9);
    uVar10 = mutex_trylock();
    if (uVar10 != 0) {
        seq_buf_printf(uVar4,"");
        seq_buf_printf(uVar4,"");
        seq_buf_printf(uVar4,"");
        seq_buf_printf(uVar4,0x8001a67);
        piVar16 = *piVar3;
        if (piVar16 != piVar3) {
            pcVar13 = "";
            pcVar14 = "";
            uVar6 = 0x8001a67;
            do {
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_188 = 0;
                uStack_180 = 0;
                uStack_198 = 0;
                uStack_190 = 0;
                get_slabinfo(piVar16 + -0xd,&stack0xfffffffffffffe68);
                seq_buf_printf(uVar4,"",piVar16[-1],uStack_198,uStack_190,piVar16[-10],uStack_168._4_4_,
                               1 << (uStack_160 & 0x1f));
                seq_buf_printf(uVar4,"",uStack_170 & 0xffffffff,uStack_170._4_4_,uStack_168 & 0xffffffff);
                seq_buf_printf(uVar4,"",uStack_188,uStack_180,uStack_178);
                seq_buf_printf(uVar4,0x8001a67);
                piVar16 = *piVar16;
                pcVar11 = "";
            } while (piVar16 != piVar3);
        }
        uVar10 = mutex_unlock(uVar5);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return uVar10;
    }
    auVar19 = __stack_chk_fail();
    uVar9 = auVar19._8_8_;
    *extraout_x18_00 = sym.md_register_memory_dump;
    pcStack_1e8 = sym.md_register_memory_dump;
    iVar2 = sp_el0;
    iStack_1f8 = *(iVar2 + 0x5e0);
    iVar2 = (auVar19._0_8_ << 0x20) >> 0x2c;
    iStack_208 = 0;
    iStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    puStack_1f0 = &stack0xfffffffffffffeb0;
    uStack_1e0 = uVar6;
    pcStack_1d0 = pcVar14;
    pcStack_1c8 = pcVar13;
    pcStack_1c0 = pcVar11;
    uStack_1b8 = uVar5;
    piStack_1b0 = piVar3;
    uStack_1a8 = uVar4;
    uVar10 = cma_alloc(__raw_spin_unlock_irqrestore,iVar2,0,1);
    if (uVar10 == 0) {
        uVar6 = 0x80019eb;
code_r0x08008aa4:
        _printk(uVar6,uVar9);
        uVar10 = 0;
    }
    else {
        uVar15 = (uVar10 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        strscpy(&stack0xfffffffffffffdd8,uVar9,0xd);
        iVar7 = ((uVar10 & 0x3ffffffffffc0) << 0xe) >> 8;
        uVar12 = iVar7 + 0x8000000000;
        iStack_208 = _strcmp + uVar12;
        if (uVar12 >> 0x26 != 0) {
            iStack_208 = iVar7 - _strlen;
        }
        uStack_210 = uVar15;
        iStack_200 = auVar19._0_4_;
        iVar1 = sym.msm_minidump_add_region(&stack0xfffffffffffffdd8);
        if (iVar1 < 0) {
            cma_release(__raw_spin_unlock_irqrestore,uVar10,iVar2);
            uVar6 = 0x8000fe8;
            goto code_r0x08008aa4;
        }
        memset(uVar15,0,auVar19._0_4_);
        DataMemoryBarrier(2,3);
        iVar1 = strcmp(uVar9,"");
        if (iVar1 == 0) {
            _segment.ehdr = uVar15;
        }
        iVar1 = strcmp(uVar9,"");
        if (iVar1 == 0) {
            _segment.ehdr = uVar15;
        }
        iVar1 = strcmp(uVar9,"");
        if (iVar1 == 0) {
            _segment.ehdr = uVar15;
        }
        iVar1 = strcmp(uVar9,"");
        if (iVar1 == 0) {
            uVar10 = 1;
            _segment.ehdr = uVar15;
        }
        else {
            uVar10 = 1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1f8) {
        return uVar10;
    }
    iVar7 = __stack_chk_fail(uVar10);
    *extraout_x18_01 = sym.md_unregister_memory_dump;
    pcStack_248 = sym.md_unregister_memory_dump;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    iStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    iStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_250 = &stack0xfffffffffffffe10;
    uStack_240 = uVar9;
    sym.md_get_region(iVar7);
    if (iStack_270 == 0) {
        _printk(0x80015f0,iVar7);
    }
    else {
        strscpy(&stack0xfffffffffffffd48,&stack0xfffffffffffffd78,0xd);
        iVar2 = iStack_270;
        iStack_2a0 = iStack_270;
        uStack_298 = uStack_268;
        uStack_290 = uStack_260;
        iVar1 = sym.msm_minidump_remove_region(&stack0xfffffffffffffd48);
        if (-1 < iVar1) {
            cma_release(__raw_spin_unlock_irqrestore,
                        (((iVar2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,uStack_290 >> 0xc)
            ;
            uVar10 = 1;
            goto code_r0x08008bb4;
        }
    }
    uVar10 = 0;
code_r0x08008bb4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return uVar10;
    }
    __stack_chk_fail(uVar10);
    *extraout_x18_02 = sym.is_page_owner_enabled;
    puVar8 = android_debug_symbol(0xe);
    return *puVar8;
}


// ===== sym.md_dump_slabinfo @ 0x08008764 (size 412) =====

uint64_t sym.md_dump_slabinfo(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint8_t *puVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar10;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    ulong unaff_x25;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    int64_t iStack_1b0;
    ulong uStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    ulong uStack_150;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    int64_t iStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_f0;
    char *pcStack_e0;
    char *pcStack_d8;
    char *pcStack_d0;
    ulong uStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    ulong uStack_a8;
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
    uStack_a8 = 0;
    uStack_a0 = 0;
    piVar4 = android_debug_symbol(8);
    uVar5 = android_debug_symbol(9);
    uVar6 = mutex_trylock();
    if (uVar6 != 0) {
        seq_buf_printf(arg1,"");
        seq_buf_printf(arg1,"");
        seq_buf_printf(arg1,"");
        seq_buf_printf(arg1,0x8001a67);
        piVar11 = *piVar4;
        if (piVar11 != piVar4) {
            unaff_x22 = "";
            unaff_x23 = "";
            unaff_x24 = "";
            unaff_x25 = 0x8001a67;
            do {
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                get_slabinfo(piVar11 + -0xd,&uStack_a8);
                seq_buf_printf(arg1,"",piVar11[-1],uStack_a8,uStack_a0,piVar11[-10],uStack_78._4_4_,
                               1 << (uStack_70 & 0x1f));
                seq_buf_printf(arg1,"",uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_78 & 0xffffffff);
                seq_buf_printf(arg1,"",uStack_98,uStack_90,uStack_88);
                seq_buf_printf(arg1,0x8001a67);
                piVar11 = *piVar11;
            } while (piVar11 != piVar4);
        }
        uVar6 = mutex_unlock(uVar5);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar12 = __stack_chk_fail();
    uVar9 = auVar12._8_8_;
    *extraout_x18 = sym.md_register_memory_dump;
    pcStack_f8 = sym.md_register_memory_dump;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    iVar2 = (auVar12._0_8_ << 0x20) >> 0x2c;
    iStack_118 = 0;
    iStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x25;
    pcStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    pcStack_d0 = unaff_x22;
    uStack_c8 = uVar5;
    piStack_c0 = piVar4;
    iStack_b8 = arg1;
    uVar6 = cma_alloc(__raw_spin_unlock_irqrestore,iVar2,0,1);
    if (uVar6 == 0) {
        uVar5 = 0x80019eb;
code_r0x08008aa4:
        _printk(uVar5,uVar9);
        uVar6 = 0;
    }
    else {
        uVar10 = (uVar6 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        strscpy(&uStack_138,uVar9,0xd);
        iVar7 = ((uVar6 & 0x3ffffffffffc0) << 0xe) >> 8;
        uVar1 = iVar7 + 0x8000000000;
        iStack_118 = _strcmp + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iStack_118 = iVar7 - _strlen;
        }
        uStack_120 = uVar10;
        iStack_110 = auVar12._0_4_;
        iVar3 = sym.msm_minidump_add_region(&uStack_138);
        if (iVar3 < 0) {
            cma_release(__raw_spin_unlock_irqrestore,uVar6,iVar2);
            uVar5 = 0x8000fe8;
            goto code_r0x08008aa4;
        }
        memset(uVar10,0,auVar12._0_4_);
        DataMemoryBarrier(2,3);
        iVar3 = strcmp(uVar9,"");
        if (iVar3 == 0) {
            _segment.ehdr = uVar10;
        }
        iVar3 = strcmp(uVar9,"");
        if (iVar3 == 0) {
            _segment.ehdr = uVar10;
        }
        iVar3 = strcmp(uVar9,"");
        if (iVar3 == 0) {
            _segment.ehdr = uVar10;
        }
        iVar3 = strcmp(uVar9,"");
        if (iVar3 == 0) {
            uVar6 = 1;
            _segment.ehdr = uVar10;
        }
        else {
            uVar6 = 1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18_00 = sym.md_unregister_memory_dump;
    pcStack_158 = sym.md_unregister_memory_dump;
    iVar2 = sp_el0;
    iStack_168 = *(iVar2 + 0x5e0);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    iStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    iStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    ppuStack_160 = &puStack_100;
    uStack_150 = uVar9;
    sym.md_get_region(iVar7);
    if (iStack_180 == 0) {
        _printk(0x80015f0,iVar7);
    }
    else {
        strscpy(&uStack_1c8,&uStack_198,0xd);
        iVar2 = iStack_180;
        iStack_1b0 = iStack_180;
        uStack_1a8 = uStack_178;
        uStack_1a0 = uStack_170;
        iVar3 = sym.msm_minidump_remove_region(&uStack_1c8);
        if (-1 < iVar3) {
            cma_release(__raw_spin_unlock_irqrestore,
                        (((iVar2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,uStack_1a0 >> 0xc)
            ;
            uVar6 = 1;
            goto code_r0x08008bb4;
        }
    }
    uVar6 = 0;
code_r0x08008bb4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_168) {
        return uVar6;
    }
    __stack_chk_fail(uVar6);
    *extraout_x18_01 = sym.is_page_owner_enabled;
    puVar8 = android_debug_symbol(0xe);
    return *puVar8;
}


// ===== sym.md_register_memory_dump @ 0x08008900 (size 492) =====

uchar sym.md_register_memory_dump(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    ulong unaff_x30;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    int64_t iStack_100;
    ulong uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    int64_t iStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_a0;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    iVar2 = (arg1 << 0x20) >> 0x2c;
    iStack_68 = 0;
    iStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar5 = cma_alloc(__raw_spin_unlock_irqrestore,iVar2,0,1);
    if (uVar5 == 0) {
        uVar6 = 0x80019eb;
code_r0x08008aa4:
        _printk(uVar6,arg2);
        uVar3 = 0;
    }
    else {
        uVar9 = (uVar5 & 0x3ffffffffffc0) << 6 | 0xff00000000000000;
        strscpy(&uStack_88,arg2,0xd);
        iVar7 = ((uVar5 & 0x3ffffffffffc0) << 0xe) >> 8;
        uVar1 = iVar7 + 0x8000000000;
        iStack_68 = _strcmp + uVar1;
        if (uVar1 >> 0x26 != 0) {
            iStack_68 = iVar7 - _strlen;
        }
        uStack_70 = uVar9;
        iStack_60 = arg1;
        iVar4 = sym.msm_minidump_add_region(&uStack_88);
        if (iVar4 < 0) {
            cma_release(__raw_spin_unlock_irqrestore,uVar5,iVar2);
            uVar6 = 0x8000fe8;
            goto code_r0x08008aa4;
        }
        memset(uVar9,0,arg1);
        DataMemoryBarrier(2,3);
        iVar4 = strcmp(arg2,"");
        if (iVar4 == 0) {
            _segment.ehdr = uVar9;
        }
        iVar4 = strcmp(arg2,"");
        if (iVar4 == 0) {
            _segment.ehdr = uVar9;
        }
        iVar4 = strcmp(arg2,"");
        if (iVar4 == 0) {
            _segment.ehdr = uVar9;
        }
        iVar4 = strcmp(arg2,"");
        if (iVar4 == 0) {
            uVar3 = 1;
            _segment.ehdr = uVar9;
        }
        else {
            uVar3 = 1;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    iVar7 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.md_unregister_memory_dump;
    pcStack_a8 = sym.md_unregister_memory_dump;
    iVar2 = sp_el0;
    iStack_b8 = *(iVar2 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    iStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    iStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_b0 = &stack0xffffffffffffffb0;
    iStack_a0 = arg2;
    sym.md_get_region(iVar7);
    if (iStack_d0 == 0) {
        _printk(0x80015f0,iVar7);
    }
    else {
        strscpy(&uStack_118,&uStack_e8,0xd);
        iVar2 = iStack_d0;
        iStack_100 = iStack_d0;
        uStack_f8 = uStack_c8;
        uStack_f0 = uStack_c0;
        iVar4 = sym.msm_minidump_remove_region(&uStack_118);
        if (-1 < iVar4) {
            cma_release(__raw_spin_unlock_irqrestore,
                        (((iVar2 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,uStack_f0 >> 0xc);
            uVar3 = 1;
            goto code_r0x08008bb4;
        }
    }
    uVar3 = 0;
code_r0x08008bb4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_b8) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.is_page_owner_enabled;
    puVar8 = android_debug_symbol(0xe);
    return *puVar8;
}


// ===== sym.md_unregister_memory_dump @ 0x08008aec (size 248) =====

uchar sym.md_unregister_memory_dump(int64_t arg1)

{
    int64_t iVar1;
    uchar uVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    sym.md_get_region(arg1);
    if (iStack_40 == 0) {
        _printk(0x80015f0,arg1);
    }
    else {
        strscpy(&uStack_88,&uStack_58,0xd);
        iVar1 = iStack_40;
        iStack_70 = iStack_40;
        uStack_68 = uStack_38;
        uStack_60 = uStack_30;
        iVar3 = sym.msm_minidump_remove_region(&uStack_88);
        if (-1 < iVar3) {
            cma_release(__raw_spin_unlock_irqrestore,
                        (((iVar1 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000,uStack_60 >> 0xc);
            uVar2 = 1;
            goto code_r0x08008bb4;
        }
    }
    uVar2 = 0;
code_r0x08008bb4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.is_page_owner_enabled;
    puVar4 = android_debug_symbol(0xe);
    return *puVar4;
}


// ===== sym.is_page_owner_enabled @ 0x08008be4 (size 44) =====

uchar sym.is_page_owner_enabled(void)

{
    uchar *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = android_debug_symbol(0xe);
    return *puVar1;
}


// ===== sym.md_dump_pageowner @ 0x08008c10 (size 1504) =====

//WARNING: Switch with 1 destination removed at 0x08008ef8 : 8 cases all go to same destination

void sym.md_dump_pageowner(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    bool bVar2;
    ulong in_tmp_ldXn;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int *piVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    int64_t aiStack_78 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    puVar6 = android_debug_symbol(10);
    uVar14 = *puVar6;
    puVar6 = android_debug_symbol(0xb);
    uVar12 = *puVar6;
    do {
        uVar15 = uVar14;
        if ((((uVar15 >> 0x34 == 0) && (uVar15 >> 0x24 == 0)) && (__printk != 0)) &&
           (iVar9 = *(__printk + (uVar15 >> 0x13 & 0x1ffffffffff8)), iVar9 != 0)) {
            uVar14 = uVar15 >> 0xf & 0x7f;
            puVar1 = iVar9 + uVar14 * 0x20;
            if ((puVar1 == NULL) || (uVar3 = *puVar1, (uVar3 >> 1 & 1) == 0)) goto code_r0x08008cac;
            if ((uVar3 >> 3 & 1) != 0) break;
            uVar3 = **(iVar9 + uVar14 * 0x20 + 8) >> (uVar15 >> 9 & 0x3f) & 1;
        }
        else {
code_r0x08008cac:
            uVar3 = 0;
        }
        if (((uVar15 & 0x3ff) == 0) || (uVar14 = uVar15 + 1, uVar3 != 0)) break;
    } while( true );
joined_r0x08008ce8:
    if (uVar12 <= uVar15) {
code_r0x080091ac:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_68) {
            return;
        }
        uVar7 = __stack_chk_fail();
        *extraout_x18 = 0x80091ec;
        debugfs_create_file(in_tmp_ldXn,"",0x100,uVar7,0,obj.proc_page_owner_dump_size_ops.llvm.4879534546058154217
                           );
        debugfs_create_file("",0x100,uVar7,0,obj.proc_page_owner_filter_ops.llvm.4879534546058154217);
        debugfs_create_file("",0x100,uVar7,0,obj.accounted_call_site_lock);
        debugfs_create_file("",0x100,uVar7,0,obj.proc_page_owner_call_site_ops.llvm.4879534546058154217);
        return;
    }
    if ((uVar15 & 0x3ff) == 0) {
        if ((((uVar15 >> 0x34 == 0) && (uVar15 >> 0x24 == 0)) && (__printk != 0)) &&
           (iVar9 = *(__printk + (uVar15 >> 0x13 & 0x1ffffffffff8)), iVar9 != 0)) {
            uVar14 = uVar15 >> 0xf & 0x7f;
            puVar1 = iVar9 + uVar14 * 0x20;
            if (((puVar1 != NULL) && (uVar3 = *puVar1, (uVar3 >> 1 & 1) != 0)) &&
               (((uVar3 >> 3 & 1) != 0 || ((**(iVar9 + uVar14 * 0x20 + 8) >> (uVar15 >> 9 & 0x3f) & 1) != 0))))
            goto code_r0x08008d2c;
        }
        uVar15 = uVar15 + 0x3ff;
    }
    else {
code_r0x08008d2c:
        iVar9 = uVar15 * 0x40 + (_strcmp >> 0xc) * -0x40;
        if ((*(iVar9 + -0x1ffffffd0) & 0xf0000080) == 0xf0000000) {
            uVar14 = 0;
            if (*(iVar9 + -0x1ffffffd8) < 0xb) {
                uVar14 = ~(-1L << (*(iVar9 + -0x1ffffffd8) & 0x3f));
            }
            uVar15 = uVar14 + uVar15;
        }
        else {
            puVar6 = lookup_page_ext(iVar9 + -0x200000000);
            if (((puVar6 != NULL) && ((*puVar6 & 1) != 0)) && ((*puVar6 >> 1 & 1) != 0)) {
                uVar14 = get_page_owner_handle(puVar6,uVar15);
                iVar4 = uVar14;
                if (iVar4 != 0) {
                    aiStack_78[0] = 0;
                    if (_segment.ehdr == 0xf) {
                        uVar3 = stack_depot_fetch(uVar14,&stack0xffffffffffffff88);
                        if (arg1 <= _segment.ehdr) {
                            uVar8 = *0x8002000;
                            if (0 < *0x8002000) {
                                if (*_segment.ehdr != iVar4) {
                                    uVar11 = 0;
                                    do {
                                        if (uVar8 - 1 == uVar11) goto joined_r0x08009040;
                                        iVar9 = uVar11 + 1;
                                        uVar11 = uVar11 + 1;
                                    } while (_segment.ehdr[iVar9] != iVar4);
                                    if (uVar8 <= uVar11) goto code_r0x080090b8;
                                }
                                iVar4 = scnprintf(arg1,arg2,"",uVar15,uVar14 & 0xffffffff,0);
                                iVar9 = iVar4;
                                goto code_r0x08009154;
                            }
                            uVar8 = *0x8002000;
joined_r0x08009040:
                            if (_segment.ehdr + uVar8 < _segment.ehdr * 2) {
                                *0x8002000 = *0x8002000 + 1;
                                _segment.ehdr[uVar8] = iVar4;
                            }
                            else {
                                iVar4 = ___ratelimit(obj.found_stack._rs,"");
                                if (iVar4 != 0) {
                                    _printk(0x8001ba7);
                                }
                            }
                        }
code_r0x080090b8:
                        iVar4 = scnprintf(arg1,arg2,"",uVar15,uVar14 & 0xffffffff,uVar3);
                        iVar9 = iVar4;
                        if ((arg2 + -1 != iVar9) && (uVar3 != 0)) {
                            uVar13 = 1;
                            do {
                                iVar5 = scnprintf(arg1 + iVar4,arg2 - iVar4,0x8001c5f,
                                                  *(aiStack_78[0] + (uVar13 - 1) * 8));
                                iVar4 = iVar5 + iVar4;
                                iVar9 = iVar4;
                                bVar2 = uVar13 < uVar3;
                                uVar13 = uVar13 + 1;
                            } while (arg2 + -1 != iVar9 && bVar2);
                        }
                    }
                    else {
                        iVar9 = 0;
                        if (_segment.ehdr != NULL) {
                            piVar10 = 0x1;
                            iVar4 = 1;
                            do {
                                if (((piVar10 & _segment.ehdr) != 0) && (iVar4 - 1U < 8)) {
                                    do {
    //WARNING: Do nothing block with infinite loop
    //switch table (7 cases) at 0x80024b0
    //WARNING: Could not find normalized switch variable to match jumptable
                                    } while( true );
                                }
                                if (7 < iVar4) break;
                                iVar4 = iVar4 << 1;
                                piVar10 = iVar4;
                            } while (piVar10 <= _segment.ehdr);
                            iVar9 = 0;
                        }
                    }
code_r0x08009154:
                    if (iVar9 == arg2 + -1) {
                        _printk(0x8002151);
                        goto code_r0x080091ac;
                    }
                    arg2 = arg2 - iVar9;
                    arg1 = arg1 + iVar9;
                }
            }
        }
    }
    uVar15 = uVar15 + 1;
    goto joined_r0x08008ce8;
}


// ===== sym.md_debugfs_pageowner @ 0x080091f0 (size 172) =====

void sym.md_debugfs_pageowner(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_create_file("",0x100,arg1,0,obj.proc_page_owner_dump_size_ops.llvm.4879534546058154217);
    debugfs_create_file("",0x100,arg1,0,obj.proc_page_owner_filter_ops.llvm.4879534546058154217);
    debugfs_create_file("",0x100,arg1,0,obj.accounted_call_site_lock);
    debugfs_create_file("",0x100,arg1,0,obj.proc_page_owner_call_site_ops.llvm.4879534546058154217);
    return;
}


// ===== sym.is_slub_debug_enabled @ 0x0800929c (size 72) =====

bool sym.is_slub_debug_enabled(void)

{
    bool bVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = android_debug_symbol(0xf);
    bVar1 = false;
    if ((pcVar2 != NULL) && (pcVar2 < 0xfffffffffffff001)) {
        bVar1 = *pcVar2 != '\0';
    }
    return bVar1;
}


// ===== sym.md_dump_slabowner @ 0x080092e4 (size 532) =====

int64_t sym.md_dump_slabowner(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t *puVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    code *pcVar7;
    ulong extraout_x1;
    int64_t *in_x2;
    code *in_x3;
    ulong in_x6;
    ulong in_x7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *unaff_x19;
    int64_t *piVar15;
    int64_t unaff_x22;
    int64_t unaff_x23;
    int64_t iVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    code *pcVar19;
    ulong unaff_x30;
    uchar *puVar20;
    ulong uVar21;
    code *pcVar22;
    uint64_t uStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar20 = &stack0xffffffffffffffa0;
    iVar16 = sp_el0;
    uVar18 = 0;
    iStack_68 = *(iVar16 + 0x5e0);
    piVar1 = 0x8001a67;
    iStack_70 = 0;
    uStack_80 = arg1;
    iStack_78 = arg2;
    do {
        if (((*(obj.slab_owner_filter + (uVar18 >> 6 & 0x3ffffff) * 8) >> (uVar18 & 0x3f) & 1) != 0) &&
           (unaff_x22 = *(kmalloc_caches + uVar18 * 8), unaff_x22 != 0)) {
            in_x3 = *(unaff_x22 + 0x60);
            in_x2 = 0x8002092;
            arg1 = scnprintf();
            piVar15 = piVar1;
            pcVar7 = kmalloc_caches;
            pcVar19 = obj.slab_owner_filter;
            if (iStack_78 + -1 == arg1) break;
            unaff_x23 = *(unaff_x22 + 0x100);
            uStack_80 = uStack_80 + arg1;
            if ((unaff_x23 != 0) && (*(unaff_x23 + 0x20) != 0)) {
                pcVar7 = _raw_spin_lock_irqsave(unaff_x23);
                for (piVar15 = *(unaff_x23 + 0x10); unaff_x19 = piVar1, unaff_x23 + 0x10 != piVar15; piVar15 = *piVar15
                    ) {
                    in_x2 = NULL;
                    in_x3 = sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
                    get_each_object_track
                              (unaff_x22,piVar15 + -1,0,sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt,
                               &stack0xffffffffffffff80);
                    if (iStack_70 == iStack_78 + -1) goto code_r0x0800949c;
                }
                for (piVar15 = *(unaff_x23 + 0x30); unaff_x23 + 0x30 != piVar15; piVar15 = *piVar15) {
                    in_x2 = NULL;
                    in_x3 = sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
                    get_each_object_track
                              (unaff_x22,piVar15 + -1,0,sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt,
                               &stack0xffffffffffffff80);
                    if (iStack_70 == iStack_78 + -1) goto code_r0x0800949c;
                }
                _raw_spin_unlock_irqrestore(unaff_x23,pcVar7);
            }
            in_x2 = piVar1;
            arg1 = scnprintf(uStack_80,iStack_78);
            piVar15 = piVar1;
            pcVar7 = kmalloc_caches;
            pcVar19 = obj.slab_owner_filter;
            if (iStack_78 + -1 == arg1) break;
            arg1 = uStack_80 + arg1;
            uStack_80 = arg1;
        }
        uVar18 = uVar18 + 1;
        piVar15 = piVar1;
        pcVar7 = kmalloc_caches;
        pcVar19 = obj.slab_owner_filter;
    } while (uVar18 != 0xe);
code_r0x080094b4:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return arg1;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x80094f4;
    uVar21 = 0x80094f4;
    pcVar22 = sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
    if (*in_x2 == 0) {
        uVar5 = 0;
        goto code_r0x08009900;
    }
    puVar11 = in_x2 + 1;
    uVar9 = *puVar11;
    if (uVar9 == 0) {
        uVar10 = 0;
code_r0x080095d8:
        bVar4 = uVar9 != 0;
        uVar5 = uVar10 * 8 + 0x75f5717b;
        uVar14 = uVar10 << 1;
        uVar13 = uVar5;
        uVar17 = uVar5;
    }
    else {
        if (in_x2[2] == 0) {
            uVar10 = 1;
            goto code_r0x080095d8;
        }
        if (in_x2[3] == 0) {
            uVar10 = 2;
        }
        else if (in_x2[4] == 0) {
            uVar10 = 3;
        }
        else if (in_x2[5] == 0) {
            uVar10 = 4;
        }
        else if (in_x2[6] == 0) {
            uVar10 = 5;
        }
        else if (in_x2[7] == 0) {
            uVar10 = 6;
        }
        else if (in_x2[8] == 0) {
            uVar10 = 7;
        }
        else if (in_x2[9] == 0) {
            uVar10 = 8;
        }
        else if (in_x2[10] == 0) {
            uVar10 = 9;
        }
        else if (in_x2[0xb] == 0) {
            uVar10 = 10;
        }
        else if (in_x2[0xc] == 0) {
            uVar10 = 0xb;
        }
        else if (in_x2[0xd] == 0) {
            uVar10 = 0xc;
        }
        else if (in_x2[0xe] == 0) {
            uVar10 = 0xd;
        }
        else if (in_x2[0xf] == 0) {
            uVar10 = 0xe;
        }
        else {
            uVar10 = 0xf;
            if (in_x2[0x10] != 0) {
                uVar10 = 0x10;
            }
        }
        uVar14 = uVar10 * 2;
        uVar5 = uVar10 * 8 + 0x75f5717b;
        puVar11 = in_x2 + 0x14;
        uVar17 = uVar5;
        uVar13 = uVar5;
        while( true ) {
            uVar14 = uVar14 - 3;
            uVar17 = *(puVar11 + -4) + uVar17;
            iVar6 = puVar11[-1] + uVar13;
            uVar5 = (uVar5 + uVar9) - uVar17 ^ (uVar17 >> 0x1c | uVar17 * 0x10);
            iVar2 = uVar17 + iVar6;
            uVar17 = iVar6 - uVar5 ^ (uVar5 >> 0x1a | uVar5 << 6);
            iVar6 = uVar5 + iVar2;
            uVar13 = iVar2 - uVar17 ^ (uVar17 >> 0x18 | uVar17 << 8);
            iVar2 = uVar17 + iVar6;
            uVar5 = iVar6 - uVar13 ^ (uVar13 >> 0x10 | uVar13 << 0x10);
            iVar6 = uVar13 + iVar2;
            uVar17 = iVar2 - uVar5 ^ (uVar5 >> 0xd | uVar5 << 0x13);
            uVar5 = uVar5 + iVar6;
            uVar13 = uVar17 + uVar5;
            uVar17 = iVar6 - uVar17 ^ (uVar17 >> 0x1c | uVar17 << 4);
            if (uVar14 < 4) break;
            uVar9 = *puVar11;
            puVar11 = puVar11 + 0xc;
        }
        bVar4 = true;
    }
    puVar3 = *in_x3 + *(in_x3 + 0x10);
    iVar16 = *(in_x3 + 8) - *(in_x3 + 0x10);
    if (uVar14 == 1) {
code_r0x08009720:
        uVar17 = (uVar17 ^ uVar13) - (uVar13 >> 0x12 | uVar13 << 0xe);
        uVar5 = (*puVar11 + uVar5 ^ uVar17) - (uVar17 >> 0x15 | uVar17 * 0x800);
        uVar13 = (uVar5 ^ uVar13) - (uVar5 >> 7 | uVar5 * 0x2000000);
        uVar17 = (uVar13 ^ uVar17) - (uVar13 >> 0x10 | uVar13 * 0x10000);
        uVar5 = (uVar17 ^ uVar5) - (uVar17 >> 0x1c | uVar17 * 0x10);
        uVar5 = (uVar5 ^ uVar13) - (uVar5 >> 0x12 | uVar5 * 0x4000);
        uVar17 = (uVar5 ^ uVar17) - (uVar5 >> 8 | uVar5 * 0x1000000);
    }
    else {
        if (uVar14 == 2) {
code_r0x08009718:
            uVar13 = *(puVar11 + 4) + uVar13;
            goto code_r0x08009720;
        }
        if (uVar14 == 3) {
            uVar17 = puVar11[1] + uVar17;
            goto code_r0x08009718;
        }
    }
    if (_segment.ehdr < puVar3) {
code_r0x08009864:
        uVar5 = scnprintf(puVar3,iVar16,"",extraout_x1,uVar17,uVar10,in_x6,in_x7,puVar20,uVar21,pcVar19,
                          uVar18,pcVar7,unaff_x23,unaff_x22,pcVar22,piVar15,unaff_x19);
        iVar8 = uVar5;
        if (!(bVar4 ^ 1U | iVar16 + -1 == iVar8)) {
            uVar18 = uVar10;
            do {
                uVar18 = uVar18 - 1;
                in_x2 = in_x2 + 1;
                iVar6 = scnprintf(puVar3 + uVar5,iVar16 - uVar5,0x8001c5f,*in_x2);
                uVar5 = iVar6 + uVar5;
                iVar8 = uVar5;
            } while (iVar16 + -1 != iVar8 && uVar18 != 0);
        }
    }
    else {
        uVar9 = *0x8002000;
        if (*0x8002000 < 1) {
            uVar9 = *0x8002000;
joined_r0x080097f4:
            if (_segment.ehdr + uVar9 < _segment.ehdr * 2) {
                *0x8002000 = *0x8002000 + 1;
                _segment.ehdr[uVar9] = uVar17;
            }
            else {
                iVar6 = ___ratelimit(obj.find_stack._rs,"");
                if (iVar6 != 0) {
                    _printk(0x80020a7);
                }
            }
            goto code_r0x08009864;
        }
        if (*_segment.ehdr != uVar17) {
            uVar12 = 0;
            do {
                if (uVar9 - 1 == uVar12) goto joined_r0x080097f4;
                iVar8 = uVar12 + 1;
                uVar12 = uVar12 + 1;
            } while (_segment.ehdr[iVar8] != uVar17);
            if (uVar9 <= uVar12) goto code_r0x08009864;
        }
        uVar5 = scnprintf(puVar3,iVar16,"",extraout_x1,uVar17,0,in_x6,in_x7,puVar20,0x80094f4,pcVar19,uVar18
                          ,pcVar7,unaff_x23,unaff_x22,sym.dump_tracking.59cc79415ca64e62050c82d849eb1ae1.cfi_jt,
                          piVar15,unaff_x19);
        iVar8 = uVar5;
    }
    *(in_x3 + 0x10) = *(in_x3 + 0x10) + iVar8;
code_r0x08009900:
    return uVar5;
code_r0x0800949c:
    _raw_spin_unlock_irqrestore(unaff_x23,pcVar7);
    arg1 = _printk(0x800218a);
    pcVar19 = kmalloc_caches;
    goto code_r0x080094b4;
}


// ===== sym.dump_tracking @ 0x080094f8 (size 1084) =====

int sym.dump_tracking(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong *puVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg3 == 0) {
        return 0;
    }
    puVar8 = arg3 + 8;
    uVar6 = *puVar8;
    if (uVar6 == 0) {
        uVar7 = 0;
code_r0x080095d8:
        bVar2 = uVar6 != 0;
        uVar10 = uVar7 * 8 + 0x75f5717b;
        uVar12 = uVar7 << 1;
        uVar11 = uVar10;
        uVar15 = uVar10;
    }
    else {
        if (*(arg3 + 0x10) == 0) {
            uVar7 = 1;
            goto code_r0x080095d8;
        }
        if (*(arg3 + 0x18) == 0) {
            uVar7 = 2;
        }
        else if (*(arg3 + 0x20) == 0) {
            uVar7 = 3;
        }
        else if (*(arg3 + 0x28) == 0) {
            uVar7 = 4;
        }
        else if (*(arg3 + 0x30) == 0) {
            uVar7 = 5;
        }
        else if (*(arg3 + 0x38) == 0) {
            uVar7 = 6;
        }
        else if (*(arg3 + 0x40) == 0) {
            uVar7 = 7;
        }
        else if (*(arg3 + 0x48) == 0) {
            uVar7 = 8;
        }
        else if (*(arg3 + 0x50) == 0) {
            uVar7 = 9;
        }
        else if (*(arg3 + 0x58) == 0) {
            uVar7 = 10;
        }
        else if (*(arg3 + 0x60) == 0) {
            uVar7 = 0xb;
        }
        else if (*(arg3 + 0x68) == 0) {
            uVar7 = 0xc;
        }
        else if (*(arg3 + 0x70) == 0) {
            uVar7 = 0xd;
        }
        else if (*(arg3 + 0x78) == 0) {
            uVar7 = 0xe;
        }
        else {
            uVar7 = 0xf;
            if (*(arg3 + 0x80) != 0) {
                uVar7 = 0x10;
            }
        }
        uVar12 = uVar7 * 2;
        uVar10 = uVar7 * 8 + 0x75f5717b;
        puVar8 = arg3 + 0x14;
        uVar15 = uVar10;
        uVar11 = uVar10;
        while( true ) {
            uVar12 = uVar12 - 3;
            uVar15 = *(puVar8 + -4) + uVar15;
            iVar3 = puVar8[-1] + uVar11;
            uVar10 = (uVar10 + uVar6) - uVar15 ^ (uVar15 >> 0x1c | uVar15 * 0x10);
            iVar4 = uVar15 + iVar3;
            uVar15 = iVar3 - uVar10 ^ (uVar10 >> 0x1a | uVar10 << 6);
            iVar3 = uVar10 + iVar4;
            uVar11 = iVar4 - uVar15 ^ (uVar15 >> 0x18 | uVar15 << 8);
            iVar4 = uVar15 + iVar3;
            uVar10 = iVar3 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
            iVar3 = uVar11 + iVar4;
            uVar15 = iVar4 - uVar10 ^ (uVar10 >> 0xd | uVar10 << 0x13);
            uVar10 = uVar10 + iVar3;
            uVar11 = uVar15 + uVar10;
            uVar15 = iVar3 - uVar15 ^ (uVar15 >> 0x1c | uVar15 << 4);
            if (uVar12 < 4) break;
            uVar6 = *puVar8;
            puVar8 = puVar8 + 0xc;
        }
        bVar2 = true;
    }
    puVar1 = *arg4 + *(arg4 + 0x10);
    iVar14 = *(arg4 + 8) - *(arg4 + 0x10);
    if (uVar12 == 1) {
code_r0x08009720:
        uVar15 = (uVar15 ^ uVar11) - (uVar11 >> 0x12 | uVar11 << 0xe);
        uVar10 = (*puVar8 + uVar10 ^ uVar15) - (uVar15 >> 0x15 | uVar15 * 0x800);
        uVar11 = (uVar10 ^ uVar11) - (uVar10 >> 7 | uVar10 * 0x2000000);
        uVar15 = (uVar11 ^ uVar15) - (uVar11 >> 0x10 | uVar11 * 0x10000);
        uVar10 = (uVar15 ^ uVar10) - (uVar15 >> 0x1c | uVar15 * 0x10);
        uVar10 = (uVar10 ^ uVar11) - (uVar10 >> 0x12 | uVar10 * 0x4000);
        uVar15 = (uVar10 ^ uVar15) - (uVar10 >> 8 | uVar10 * 0x1000000);
    }
    else {
        if (uVar12 == 2) {
code_r0x08009718:
            uVar11 = *(puVar8 + 4) + uVar11;
            goto code_r0x08009720;
        }
        if (uVar12 == 3) {
            uVar15 = puVar8[1] + uVar15;
            goto code_r0x08009718;
        }
    }
    if (puVar1 <= _segment.ehdr) {
        uVar6 = *0x8002000;
        if (0 < *0x8002000) {
            if (*_segment.ehdr != uVar15) {
                uVar9 = 0;
                do {
                    if (uVar6 - 1 == uVar9) goto joined_r0x080097f4;
                    iVar5 = uVar9 + 1;
                    uVar9 = uVar9 + 1;
                } while (_segment.ehdr[iVar5] != uVar15);
                if (uVar6 <= uVar9) goto code_r0x08009864;
            }
            iVar3 = scnprintf(puVar1,iVar14,"",arg2,uVar15,0);
            iVar5 = iVar3;
            goto code_r0x080098f4;
        }
        uVar6 = *0x8002000;
joined_r0x080097f4:
        if (_segment.ehdr + uVar6 < _segment.ehdr * 2) {
            *0x8002000 = *0x8002000 + 1;
            _segment.ehdr[uVar6] = uVar15;
        }
        else {
            iVar3 = ___ratelimit(obj.find_stack._rs,"");
            if (iVar3 != 0) {
                _printk(0x80020a7);
            }
        }
    }
code_r0x08009864:
    iVar3 = scnprintf(puVar1,iVar14,"",arg2,uVar15,uVar7);
    iVar5 = iVar3;
    if (!(bVar2 ^ 1U | iVar14 + -1 == iVar5)) {
        uVar6 = uVar7;
        puVar13 = arg3 + 8;
        do {
            uVar6 = uVar6 - 1;
            iVar4 = scnprintf(puVar1 + iVar3,iVar14 - iVar3,0x8001c5f,*puVar13);
            iVar3 = iVar4 + iVar3;
            iVar5 = iVar3;
            puVar13 = puVar13 + 1;
        } while (iVar14 + -1 != iVar5 && uVar6 != 0);
    }
code_r0x080098f4:
    *(arg4 + 0x10) = *(arg4 + 0x10) + iVar5;
    return iVar3;
}


// ===== sym.md_debugfs_slabowner @ 0x08009934 (size 240) =====

void sym.md_debugfs_slabowner(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_create_file("",0x100,arg1,0,obj.proc_slab_owner_dump_size_ops);
    debugfs_create_file("",0x100,arg1,0,obj.proc_slab_owner_filter_ops);
    debugfs_create_file("",0x100,arg1,0,obj.proc_slab_owner_handle_ops);
    uVar3 = 0;
    do {
        if (*(kmalloc_caches + uVar3 * 8) != 0) {
            Hint_Prefetch(0x8000708,2,0,1);
            do {
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(0x8000708,0x10);
                if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _obj.slab_owner_filter = _obj.slab_owner_filter | 1L << (uVar3 & 0x3f);
                }
            } while (cVar1 != '\0');
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 != 0xe);
    return;
}


// ===== sym.md_dma_buf_info @ 0x08009a24 (size 312) =====

int64_t sym.md_dma_buf_info(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int64_t *piVar9;
    ulong uVar10;
    ulong uVar11;
    ulong uVar12;
    ulong *puVar13;
    uint32_t uVar14;
    uint extraout_x8;
    uint64_t uVar15;
    uint *extraout_x9;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    code *pcVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    int64_t iVar21;
    uint64_t uVar22;
    int64_t iVar23;
    int64_t *piVar24;
    uint32_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    uchar *puStack_48;
    ulong uStack_40;
    uint64_t uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iVar21 = sp_el0;
    iStack_28 = *(iVar17 + 0x5e0);
    puVar1 = iVar21 + 0x10;
    uStack_40 = 0;
    uStack_38 = 0;
    if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0x100) == 0) {
        uStack_38 = 0;
        iStack_50 = 0;
        uStack_30 = 0;
        iStack_60 = arg1;
        iStack_58 = arg2;
        puStack_48 = &stack0xffffffffffffffa0;
        iVar7 = scnprintf(arg1,arg2,"");
        iVar8 = scnprintf(iStack_60 + iVar7,iStack_58 - iVar7,"","","","","",0x8001c5b);
        iStack_50 = iVar8 + iVar7;
        get_each_dmabuf(sym.dump_bufinfo.59cc79415ca64e62050c82d849eb1ae1.cfi_jt,&stack0xffffffffffffffb8);
        arg1 = scnprintf(iStack_60 + iStack_50,iStack_58 - iStack_50,"",uStack_38 & 0xffffffff,uStack_30);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_28) {
        return arg1;
    }
    auVar26 = __stack_chk_fail();
    puVar13 = auVar26._8_8_;
    piVar9 = auVar26._0_8_;
    uVar6 = *extraout_x9;
    *extraout_x18 = 0x8009b50;
    piVar20 = *puVar13;
    iVar7 = ww_mutex_lock(CONCAT44(extraout_x8,uVar6),piVar9[0x15],0);
    if (iVar7 != 0) goto code_r0x0800a0b0;
    iVar21 = piVar9[1];
    iVar17 = 0x8001ead;
    if (piVar9[0xf] != 0) {
        iVar17 = piVar9[0xf];
    }
    iVar7 = scnprintf(*piVar20 + piVar20[2],piVar20[1] - piVar20[2],"",*piVar9,*(iVar21 + 0x40),*(iVar21 + 0x44),
                      *(iVar21 + 0x38),piVar9[0xe],*(*(piVar9[1] + 0x20) + 0x40),iVar17);
    iVar17 = piVar20[2];
    piVar20[2] = iVar17 + iVar7;
    if (iVar17 + iVar7 == piVar20[1] + -1) goto code_r0x0800a0b0;
    iVar17 = piVar9[0x15];
    while( true ) {
        uVar22 = *(iVar17 + 0x38);
        iVar7 = uVar22;
        while ((uVar22 & 1) != 0) {
            Yield();
            uVar22 = *(iVar17 + 0x38);
            iVar7 = uVar22;
        }
        DataMemoryBarrier(2,1);
        __rcu_read_lock();
        iVar21 = *(iVar17 + 0x48);
        if (iVar21 == 0) {
            uVar25 = 0;
        }
        else {
            uVar25 = *(iVar21 + 0x10);
        }
        iVar23 = *(iVar17 + 0x40);
        DataMemoryBarrier(2,1);
        if (*(iVar17 + 0x38) == iVar7) break;
        __rcu_read_unlock();
    }
    if (iVar23 != 0) {
        iVar17 = piVar20[1];
        iVar2 = piVar20[2];
        pcVar18 = *(*(iVar23 + 8) + 8);
        iVar16 = *piVar20;
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar18,0x8000a30);
        uVar10 = (*pcVar18)(iVar23);
        pcVar18 = *(*(iVar23 + 8) + 0x10);
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar18,0x8000a50);
        uVar11 = (*pcVar18)(iVar23);
        if ((*(iVar23 + 0x30) & 1) == 0) {
            pcVar18 = *(*(iVar23 + 8) + 0x20);
            if (pcVar18 != NULL) {
                __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar18,0x8000ab0);
                uVar22 = (*pcVar18)(iVar23);
                if ((uVar22 & 1) != 0) {
                    dma_fence_signal(iVar23);
                    goto code_r0x08009d34;
                }
            }
            uVar12 = 0x80020df;
        }
        else {
code_r0x08009d34:
            uVar12 = 0x8001ead;
        }
        iVar7 = scnprintf(iVar16 + iVar2,iVar17 - iVar2,"",uVar10,uVar11,uVar12);
        iVar17 = piVar20[2];
        piVar20[2] = iVar17 + iVar7;
        if (iVar17 + iVar7 == piVar20[1] + -1) goto code_r0x0800a0b0;
    }
    if (0 < uVar25) {
        uVar22 = 0;
        do {
            iVar17 = *(iVar21 + uVar22 * 8 + 0x18);
            puVar1 = iVar17 + 0x38;
            uVar15 = *puVar1;
            if (uVar15 == 0) {
                uVar14 = 0;
            }
            else {
                do {
                    uVar14 = uVar15;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar3 = *puVar1;
                        uVar15 = uVar3;
                        if (uVar3 != uVar14) break;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                            *puVar1 = uVar14 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                } while ((uVar14 != uVar3) && (uVar14 = 0, uVar3 != 0));
            }
            if ((uVar14 + 1 | uVar14) < 0) {
                refcount_warn_saturate(puVar1,0);
            }
            if ((uVar14 != 0) && (iVar17 != 0)) {
                iVar23 = piVar20[1];
                iVar2 = piVar20[2];
                pcVar18 = *(*(iVar17 + 8) + 8);
                iVar16 = *piVar20;
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar18,0x8000a70);
                uVar11 = (*pcVar18)(iVar17);
                pcVar18 = *(*(iVar17 + 8) + 0x10);
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar18,0x8000a90);
                uVar12 = (*pcVar18)(iVar17);
                uVar10 = 0x8001ead;
                if ((*(iVar17 + 0x30) & 1) == 0) {
                    pcVar18 = *(*(iVar17 + 8) + 0x20);
                    if (pcVar18 == NULL) {
                        uVar10 = 0x80020df;
                    }
                    else {
                        __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar18,0x8000ab0);
                        uVar15 = (*pcVar18)(iVar17);
                        uVar10 = 0x80020df;
                        if ((uVar15 & 1) != 0) {
                            dma_fence_signal(iVar17);
                            uVar10 = 0x8001ead;
                        }
                    }
                }
                iVar7 = scnprintf(iVar16 + iVar2,iVar23 - iVar2,"",uVar11,uVar12,uVar10);
                iVar17 = piVar20[2];
                piVar20[2] = iVar17 + iVar7;
                if (iVar17 + iVar7 == piVar20[1] + -1) goto code_r0x0800a0b0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar14 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar14 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar14 == 1) {
                    DataMemoryBarrier(2,1);
                    dma_fence_release(puVar1);
                }
                else if (uVar14 < 1) {
                    refcount_warn_saturate(puVar1,3);
                }
            }
            uVar22 = uVar22 + 1;
        } while (uVar22 != uVar25);
    }
    __rcu_read_unlock();
    iVar7 = scnprintf(*piVar20 + piVar20[2],piVar20[1] - piVar20[2],"");
    iVar21 = piVar20[1];
    iVar17 = piVar20[2] + iVar7;
    piVar20[2] = iVar17;
    if (iVar17 != iVar21 + -1) {
        piVar19 = piVar9 + 2;
        piVar24 = *piVar19;
        if (piVar19 == piVar24) {
            iVar7 = 0;
        }
        else {
            iVar7 = 0;
            do {
                iVar23 = piVar24[-1][0xe];
                if (iVar23 == 0) {
                    iVar23 = *piVar24[-1];
                }
                iVar8 = scnprintf(*piVar20 + iVar17,iVar21 - iVar17,"",iVar23);
                iVar21 = piVar20[1];
                iVar17 = piVar20[2] + iVar8;
                piVar20[2] = iVar17;
                if (iVar17 == iVar21 + -1) goto code_r0x0800a0b0;
                piVar24 = *piVar24;
                iVar7 = iVar7 + 1;
            } while (piVar19 != piVar24);
        }
        ww_mutex_unlock(piVar9[0x15]);
        iVar7 = scnprintf(*piVar20 + piVar20[2],piVar20[1] - piVar20[2],"",iVar7);
        iVar17 = piVar20[2];
        piVar20[2] = iVar17 + iVar7;
        if (iVar17 + iVar7 != piVar20[1] + -1) {
            *(puVar13 + 2) = *(puVar13 + 2) + 1;
            puVar13[3] = puVar13[3] + *piVar9;
            return 0;
        }
    }
code_r0x0800a0b0:
    _printk(0x8001fc5);
    return 0xffffffe4;
}


// ===== sym.dump_bufinfo @ 0x08009b5c (size 1504) =====

ulong sym.dump_bufinfo(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t iVar14;
    code *pcVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int64_t iVar18;
    uint64_t uVar19;
    int64_t iVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar17 = *arg2;
    iVar6 = ww_mutex_lock(*(arg1 + 0xa8),0);
    if (iVar6 != 0) goto code_r0x0800a0b0;
    iVar18 = *(arg1 + 8);
    iVar14 = 0x8001ead;
    if (*(arg1 + 0x78) != 0) {
        iVar14 = *(arg1 + 0x78);
    }
    iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"",*arg1,*(iVar18 + 0x40),*(iVar18 + 0x44),
                      *(iVar18 + 0x38),*(arg1 + 0x70),*(*(*(arg1 + 8) + 0x20) + 0x40),iVar14);
    iVar14 = piVar17[2];
    piVar17[2] = iVar14 + iVar6;
    if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
    iVar14 = *(arg1 + 0xa8);
    while( true ) {
        uVar19 = *(iVar14 + 0x38);
        iVar6 = uVar19;
        while ((uVar19 & 1) != 0) {
            Yield();
            uVar19 = *(iVar14 + 0x38);
            iVar6 = uVar19;
        }
        DataMemoryBarrier(2,1);
        __rcu_read_lock();
        iVar18 = *(iVar14 + 0x48);
        if (iVar18 == 0) {
            uVar22 = 0;
        }
        else {
            uVar22 = *(iVar18 + 0x10);
        }
        iVar20 = *(iVar14 + 0x40);
        DataMemoryBarrier(2,1);
        if (*(iVar14 + 0x38) == iVar6) break;
        __rcu_read_unlock();
    }
    if (iVar20 != 0) {
        iVar14 = piVar17[1];
        iVar2 = piVar17[2];
        pcVar15 = *(*(iVar20 + 8) + 8);
        iVar13 = *piVar17;
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a30);
        uVar8 = (*pcVar15)(iVar20);
        pcVar15 = *(*(iVar20 + 8) + 0x10);
        __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a50);
        uVar9 = (*pcVar15)(iVar20);
        if ((*(iVar20 + 0x30) & 1) == 0) {
            pcVar15 = *(*(iVar20 + 8) + 0x20);
            if (pcVar15 != NULL) {
                __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar15,0x8000ab0);
                uVar19 = (*pcVar15)(iVar20);
                if ((uVar19 & 1) != 0) {
                    dma_fence_signal(iVar20);
                    goto code_r0x08009d34;
                }
            }
            uVar10 = 0x80020df;
        }
        else {
code_r0x08009d34:
            uVar10 = 0x8001ead;
        }
        iVar6 = scnprintf(iVar13 + iVar2,iVar14 - iVar2,"",uVar8,uVar9,uVar10);
        iVar14 = piVar17[2];
        piVar17[2] = iVar14 + iVar6;
        if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
    }
    if (0 < uVar22) {
        uVar19 = 0;
        do {
            iVar14 = *(iVar18 + uVar19 * 8 + 0x18);
            puVar1 = iVar14 + 0x38;
            uVar12 = *puVar1;
            if (uVar12 == 0) {
                uVar11 = 0;
            }
            else {
                do {
                    uVar11 = uVar12;
                    Hint_Prefetch(puVar1,2,0,1);
                    do {
                        uVar3 = *puVar1;
                        uVar12 = uVar3;
                        if (uVar3 != uVar11) break;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                            *puVar1 = uVar11 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                } while ((uVar11 != uVar3) && (uVar11 = 0, uVar3 != 0));
            }
            if ((uVar11 + 1 | uVar11) < 0) {
                refcount_warn_saturate(puVar1,0);
            }
            if ((uVar11 != 0) && (iVar14 != 0)) {
                iVar20 = piVar17[1];
                iVar2 = piVar17[2];
                pcVar15 = *(*(iVar14 + 8) + 8);
                iVar13 = *piVar17;
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a70);
                uVar9 = (*pcVar15)(iVar14);
                pcVar15 = *(*(iVar14 + 8) + 0x10);
                __cfi_slowpath_diag(0x7a9f9f5cae0a3b66,pcVar15,0x8000a90);
                uVar10 = (*pcVar15)(iVar14);
                uVar8 = 0x8001ead;
                if ((*(iVar14 + 0x30) & 1) == 0) {
                    pcVar15 = *(*(iVar14 + 8) + 0x20);
                    if (pcVar15 == NULL) {
                        uVar8 = 0x80020df;
                    }
                    else {
                        __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar15,0x8000ab0);
                        uVar12 = (*pcVar15)(iVar14);
                        uVar8 = 0x80020df;
                        if ((uVar12 & 1) != 0) {
                            dma_fence_signal(iVar14);
                            uVar8 = 0x8001ead;
                        }
                    }
                }
                iVar6 = scnprintf(iVar13 + iVar2,iVar20 - iVar2,"",uVar9,uVar10,uVar8);
                iVar14 = piVar17[2];
                piVar17[2] = iVar14 + iVar6;
                if (iVar14 + iVar6 == piVar17[1] + -1) goto code_r0x0800a0b0;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar11 = *puVar1;
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                        *puVar1 = uVar11 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (uVar11 == 1) {
                    DataMemoryBarrier(2,1);
                    dma_fence_release(puVar1);
                }
                else if (uVar11 < 1) {
                    refcount_warn_saturate(puVar1,3);
                }
            }
            uVar19 = uVar19 + 1;
        } while (uVar19 != uVar22);
    }
    __rcu_read_unlock();
    iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"");
    iVar18 = piVar17[1];
    iVar14 = piVar17[2] + iVar6;
    piVar17[2] = iVar14;
    if (iVar14 != iVar18 + -1) {
        piVar16 = arg1 + 0x10;
        piVar21 = *piVar16;
        if (piVar16 == piVar21) {
            iVar6 = 0;
        }
        else {
            iVar6 = 0;
            do {
                iVar20 = piVar21[-1][0xe];
                if (iVar20 == 0) {
                    iVar20 = *piVar21[-1];
                }
                iVar7 = scnprintf(*piVar17 + iVar14,iVar18 - iVar14,"",iVar20);
                iVar18 = piVar17[1];
                iVar14 = piVar17[2] + iVar7;
                piVar17[2] = iVar14;
                if (iVar14 == iVar18 + -1) goto code_r0x0800a0b0;
                piVar21 = *piVar21;
                iVar6 = iVar6 + 1;
            } while (piVar16 != piVar21);
        }
        ww_mutex_unlock(*(arg1 + 0xa8));
        iVar6 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"",iVar6);
        iVar14 = piVar17[2];
        piVar17[2] = iVar14 + iVar6;
        if (iVar14 + iVar6 != piVar17[1] + -1) {
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            *(arg2 + 0x18) = *(arg2 + 0x18) + *arg1;
            return 0;
        }
    }
code_r0x0800a0b0:
    _printk(0x8001fc5);
    return 0xffffffe4;
}


// ===== sym.md_debugfs_dmabufinfo @ 0x0800a13c (size 64) =====

void sym.md_debugfs_dmabufinfo(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_create_file("",0x100,arg1,0,obj.proc_dma_buf_info_size_ops.llvm.4879534546058154217);
    return;
}


// ===== sym.md_dma_buf_procs @ 0x0800a17c (size 520) =====

ulong sym.md_dma_buf_procs(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    code *unaff_x21;
    code *pcVar13;
    int64_t iVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar *puVar18;
    ulong uVar19;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    puVar18 = &stack0xffffffffffffffa0;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffff80;
    iStack_70 = 0;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_88 = 0;
    iStack_80 = arg1;
    iStack_78 = arg2;
    __rcu_read_lock();
    pcVar13 = *0x8038584 + -0x4d0;
    if (pcVar13 != init_task) {
        iVar3 = 0;
        unaff_x21 = sym.get_dma_info.59cc79415ca64e62050c82d849eb1ae1.cfi_jt;
        iVar14 = *0x8038584;
        do {
            piVar15 = *(*(iVar14 + 800) + 0x10);
            pcStack_98 = pcVar13;
            iVar1 = iVar3;
            if (*(iVar14 + 800) + 0x10 != piVar15) {
                iVar16 = 0;
                do {
                    _raw_spin_lock(piVar15 + 0x3d);
                    if (iVar16 == 0) {
                        iVar16 = *(*(iVar14 + 0x148) + 0x7d8);
                        iVar4 = piVar15[0x28];
                    }
                    else {
                        iVar4 = piVar15[0x28];
                    }
                    if ((iVar4 != 0) && ((iVar16 != iVar4 || (*(iVar14 + 0x148) == piVar15 + -0xd3)))) {
                        iVar3 = iterate_fd(iVar4,0,sym.get_dma_info.59cc79415ca64e62050c82d849eb1ae1.cfi_jt,
                                           &stack0xffffffffffffff60);
                    }
                    _raw_spin_unlock(piVar15 + 0x3d);
                    if (iVar3 != 0) goto code_r0x0800a31c;
                    piVar15 = *piVar15;
                    iVar1 = 0;
                } while (*(iVar14 + 800) + 0x10 != piVar15);
            }
            iVar3 = iVar1;
            if (uStack_90 != 0) {
                iVar3 = scnprintf(iStack_80 + iStack_70,iStack_78 - iStack_70,"",uStack_90 & 0xffffffff,uStack_88);
                iStack_70 = iStack_70 + iVar3;
                if (iStack_70 == iStack_78 + -1) {
code_r0x0800a31c:
                    __rcu_read_unlock();
                    uVar5 = _printk(0x8000b8f);
                    goto code_r0x0800a334;
                }
                uStack_90 = uStack_90 & 0xffffffff00000000;
                uStack_88 = 0;
                memset(obj.dma_buf_hash,0,0x2000);
            }
            iVar14 = *(pcVar13 + 0x4d0);
            pcVar13 = iVar14 + -0x4d0;
        } while (pcVar13 != init_task);
    }
    uVar5 = __rcu_read_unlock();
code_r0x0800a334:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar17 = __stack_chk_fail();
    puVar6 = auVar17._0_8_;
    *extraout_x18 = 0x800a374;
    uVar19 = 0x800a374;
    uVar5 = is_dma_buf_file(auVar17._8_8_);
    if (uVar5 == 0) {
        return uVar5;
    }
    piVar15 = *puVar6;
    if (*(puVar6 + 2) == 0) {
        iVar3 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"",puVar6[1] + 0x7a8,*(puVar6[1] + 0x5dc));
        iVar14 = piVar15[2];
        piVar15[2] = iVar14 + iVar3;
        if (iVar14 + iVar3 == piVar15[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar12 = *(auVar17._8_8_ + 0xd8);
    uVar11 = 0x75f572ab;
    uVar7 = 0x130;
    uVar10 = 0x75f572ab;
    iVar3 = 0x75f572ab;
    piVar9 = piVar12;
    do {
        uVar7 = uVar7 - 0xc;
        uVar11 = piVar9[1] + uVar11;
        iVar1 = *(piVar9 + 4) + uVar10;
        uVar10 = (*piVar9 + iVar3) - uVar11 ^ (uVar11 >> 0x1c | uVar11 * 0x10);
        iVar3 = uVar11 + iVar1;
        uVar11 = iVar1 - uVar10 ^ (uVar10 >> 0x1a | uVar10 << 6);
        iVar1 = uVar10 + iVar3;
        uVar10 = iVar3 - uVar11 ^ (uVar11 >> 0x18 | uVar11 << 8);
        iVar3 = uVar11 + iVar1;
        uVar11 = iVar1 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
        iVar1 = uVar10 + iVar3;
        uVar2 = iVar3 - uVar11 ^ (uVar11 >> 0xd | uVar11 << 0x13);
        iVar3 = uVar11 + iVar1;
        uVar10 = uVar2 + iVar3;
        uVar11 = iVar1 - uVar2 ^ (uVar2 >> 0x1c | uVar2 << 4);
        piVar9 = piVar9 + 0xc;
    } while (0xc < uVar7);
    uVar11 = (uVar11 ^ uVar10) - (uVar10 >> 0x12 | uVar10 * 0x4000);
    uVar7 = (iVar3 + *(piVar12 + 0x12f) * 0x1000000 + *(piVar12 + 0x12e) * 0x10000 + *(piVar12 + 0x12d) * 0x100 +
             *(piVar12 + 300) ^ uVar11) - (uVar11 >> 0x15 | uVar11 * 0x800);
    uVar10 = (uVar7 ^ uVar10) - (uVar7 >> 7 | uVar7 * 0x2000000);
    uVar11 = (uVar10 ^ uVar11) - (uVar10 >> 0x10 | uVar10 * 0x10000);
    uVar7 = (uVar11 ^ uVar7) - (uVar11 >> 0x1c | uVar11 * 0x10);
    uVar10 = (uVar7 ^ uVar10) - (uVar7 >> 0x12 | uVar7 * 0x4000);
    uVar8 = (uVar10 ^ uVar11) - (uVar10 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar8] == 0x0) {
        obj.dma_buf_hash[uVar8] = 0x1;
        *(puVar6 + 2) = *(puVar6 + 2) + 1;
        iVar3 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"","","","","",0x8001c5b);
        iVar14 = piVar15[2] + iVar3;
        piVar15[2] = iVar14;
        if (iVar14 != piVar15[1] + -1) {
            iVar4 = piVar12[1];
            iVar16 = 0x8001ead;
            if (piVar12[0xf] != 0) {
                iVar16 = piVar12[0xf];
            }
            iVar3 = scnprintf(*piVar15 + iVar14,piVar15[1] - iVar14,"",*piVar12,*(iVar4 + 0x40),*(iVar4 + 0x44),
                              *(iVar4 + 0x38),piVar12[0xe],*(*(piVar12[1] + 0x20) + 0x40),iVar16,puVar18,uVar19,
                              unaff_x21);
            iVar14 = piVar15[2];
            piVar15[2] = iVar14 + iVar3;
            if (iVar14 + iVar3 != piVar15[1] + -1) {
                puVar6[3] = puVar6[3] + *piVar12;
                return 0;
            }
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.get_dma_info @ 0x0800a384 (size 672) =====

ulong sym.get_dma_info(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    int64_t *piVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = is_dma_buf_file(arg2);
    if (uVar7 == 0) {
        return uVar7;
    }
    piVar14 = *arg1;
    if (*(arg1 + 0x10) == 0) {
        iVar6 = scnprintf(*piVar14 + piVar14[2],piVar14[1] - piVar14[2],"",*(arg1 + 8) + 0x7a8,
                          *(*(arg1 + 8) + 0x5dc));
        iVar4 = piVar14[2];
        piVar14[2] = iVar4 + iVar6;
        if (iVar4 + iVar6 == piVar14[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar13 = *(arg2 + 0xd8);
    uVar12 = 0x75f572ab;
    uVar8 = 0x130;
    uVar11 = 0x75f572ab;
    iVar6 = 0x75f572ab;
    piVar10 = piVar13;
    do {
        uVar8 = uVar8 - 0xc;
        uVar12 = piVar10[1] + uVar12;
        iVar1 = *(piVar10 + 4) + uVar11;
        uVar11 = (*piVar10 + iVar6) - uVar12 ^ (uVar12 >> 0x1c | uVar12 * 0x10);
        iVar6 = uVar12 + iVar1;
        uVar12 = iVar1 - uVar11 ^ (uVar11 >> 0x1a | uVar11 << 6);
        iVar1 = uVar11 + iVar6;
        uVar11 = iVar6 - uVar12 ^ (uVar12 >> 0x18 | uVar12 << 8);
        iVar6 = uVar12 + iVar1;
        uVar12 = iVar1 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
        iVar1 = uVar11 + iVar6;
        uVar3 = iVar6 - uVar12 ^ (uVar12 >> 0xd | uVar12 << 0x13);
        iVar6 = uVar12 + iVar1;
        uVar11 = uVar3 + iVar6;
        uVar12 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
        piVar10 = piVar10 + 0xc;
    } while (0xc < uVar8);
    uVar12 = (uVar12 ^ uVar11) - (uVar11 >> 0x12 | uVar11 * 0x4000);
    uVar8 = (iVar6 + *(piVar13 + 0x12f) * 0x1000000 + *(piVar13 + 0x12e) * 0x10000 + *(piVar13 + 0x12d) * 0x100 +
             *(piVar13 + 300) ^ uVar12) - (uVar12 >> 0x15 | uVar12 * 0x800);
    uVar11 = (uVar8 ^ uVar11) - (uVar8 >> 7 | uVar8 * 0x2000000);
    uVar12 = (uVar11 ^ uVar12) - (uVar11 >> 0x10 | uVar11 * 0x10000);
    uVar8 = (uVar12 ^ uVar8) - (uVar12 >> 0x1c | uVar12 * 0x10);
    uVar11 = (uVar8 ^ uVar11) - (uVar8 >> 0x12 | uVar8 * 0x4000);
    uVar9 = (uVar11 ^ uVar12) - (uVar11 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar9] == 0x0) {
        obj.dma_buf_hash[uVar9] = 0x1;
        *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
        iVar6 = scnprintf(*piVar14 + piVar14[2],piVar14[1] - piVar14[2],"","","","","",0x8001c5b);
        iVar4 = piVar14[2] + iVar6;
        piVar14[2] = iVar4;
        if (iVar4 != piVar14[1] + -1) {
            iVar5 = piVar13[1];
            iVar2 = 0x8001ead;
            if (piVar13[0xf] != 0) {
                iVar2 = piVar13[0xf];
            }
            iVar6 = scnprintf(*piVar14 + iVar4,piVar14[1] - iVar4,"",*piVar13,*(iVar5 + 0x40),*(iVar5 + 0x44),
                              *(iVar5 + 0x38),piVar13[0xe],*(*(piVar13[1] + 0x20) + 0x40),iVar2);
            iVar4 = piVar14[2];
            piVar14[2] = iVar4 + iVar6;
            if (iVar4 + iVar6 != piVar14[1] + -1) {
                *(arg1 + 0x18) = *(arg1 + 0x18) + *piVar13;
                return 0;
            }
        }
        return 0xffffffea;
    }
    return 0;
}


// ===== sym.md_debugfs_dmabufprocs @ 0x0800a628 (size 64) =====

void sym.md_debugfs_dmabufprocs(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_create_file("",0x100,arg1,0,obj.proc_dma_buf_procs_size_ops.llvm.4879534546058154217);
    return;
}


// ===== sym.page_owner_dump_size_read @ 0x0800a668 (size 196) =====

uint64_t sym.page_owner_dump_size_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong extraout_x1;
    int64_t iVar5;
    code *pcVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar2 = strlen(&uStack_a0);
    uVar8 = arg3;
    uVar3 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_a0,uVar2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_d0;
    *extraout_x18 = sym.page_owner_dump_size_write;
    pcStack_b8 = sym.page_owner_dump_size_write;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    pcVar6 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iStack_b0 = arg2;
    iStack_a8 = arg3;
    iVar1 = kstrtoull_from_user(extraout_x1,uVar8);
    if (iVar1 == 0) {
        mutex_lock(obj.md_ftrace_buf_current);
        pcVar6 = obj.md_pageowner_dump_addr;
        pcVar7 = obj.md_pageowner_dump_size;
        sym.update_dump_size(0x800167c,iStack_d0,0x80006e8,0x8000640);
        mutex_unlock(obj.md_ftrace_buf_current);
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_dump_size_write._rs,"");
        if (iVar1 == 0) {
            uVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            uVar8 = 0xffffffffffffffea;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_c8) {
        return uVar8;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._8_8_;
    iVar4 = auVar9._0_8_;
    *extraout_x18_00 = sym.update_dump_size;
    if (*pcVar7 == 0) {
        uVar8 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar4);
        if ((uVar8 & 1) == 0) {
            return uVar8;
        }
        *pcVar7 = iVar5 << 0x14;
        uVar8 = ___ratelimit(obj.update_dump_size._rs,"");
        if (uVar8 == 0) {
            return uVar8;
        }
        uVar2 = 0x8000eeb;
code_r0x0800a8c8:
        uVar8 = _printk(uVar2,iVar4,iVar5);
    }
    else {
        uVar8 = sym.md_unregister_memory_dump(iVar4);
        if ((uVar8 & 1) == 0) {
            uVar8 = ___ratelimit(obj.update_dump_size._rs.92,"");
            if (uVar8 == 0) {
                return uVar8;
            }
            uVar2 = 0x800145d;
        }
        else {
            *pcVar6 = 0;
            if (iVar5 != 0) {
                uVar8 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar4);
                if ((uVar8 & 1) == 0) {
                    uVar8 = sym.md_register_memory_dump(*pcVar7,iVar4);
                    if ((uVar8 & 1) == 0) {
                        uVar8 = ___ratelimit(obj.update_dump_size._rs.90,"");
                        if (uVar8 != 0) {
                            uVar8 = _printk(0x80010a3,iVar4,*pcVar7 >> 0x14);
                        }
                        *pcVar7 = 0;
                        return uVar8;
                    }
                    uVar8 = ___ratelimit(obj.update_dump_size._rs.88,"");
                    if (uVar8 == 0) {
                        return uVar8;
                    }
                    uVar8 = _printk(0x8001439,iVar4,*pcVar7 >> 0x14);
                    return uVar8;
                }
                *pcVar7 = iVar5 << 0x14;
                uVar8 = ___ratelimit(obj.update_dump_size._rs.86,"");
                if (uVar8 == 0) {
                    return uVar8;
                }
                uVar2 = 0x8000e15;
                goto code_r0x0800a8c8;
            }
            *pcVar7 = 0;
            uVar8 = ___ratelimit(obj.update_dump_size._rs.84,"");
            if (uVar8 == 0) {
                return uVar8;
            }
            uVar2 = 0x8001867;
        }
        uVar8 = _printk(uVar2,iVar4);
    }
    return uVar8;
}


// ===== sym.page_owner_dump_size_write @ 0x0800a72c (size 228) =====

uint64_t sym.page_owner_dump_size_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    code *pcVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar7 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    pcVar6 = NULL;
    iStack_30 = 0;
    iVar1 = kstrtoull_from_user(arg1,arg2);
    if (iVar1 == 0) {
        mutex_lock(obj.md_ftrace_buf_current);
        pcVar6 = obj.md_pageowner_dump_addr;
        pcVar7 = obj.md_pageowner_dump_size;
        sym.update_dump_size(0x800167c,iStack_30,0x80006e8,0x8000640);
        mutex_unlock(obj.md_ftrace_buf_current);
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_dump_size_write._rs,"");
        if (iVar1 == 0) {
            arg2 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            arg2 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    auVar8 = __stack_chk_fail();
    iVar5 = auVar8._8_8_;
    iVar2 = auVar8._0_8_;
    *extraout_x18 = sym.update_dump_size;
    if (*pcVar7 == 0) {
        uVar3 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar2);
        if ((uVar3 & 1) == 0) {
            return uVar3;
        }
        *pcVar7 = iVar5 << 0x14;
        uVar3 = ___ratelimit(obj.update_dump_size._rs,"");
        if (uVar3 == 0) {
            return uVar3;
        }
        uVar4 = 0x8000eeb;
code_r0x0800a8c8:
        uVar3 = _printk(uVar4,iVar2,iVar5);
    }
    else {
        uVar3 = sym.md_unregister_memory_dump(iVar2);
        if ((uVar3 & 1) == 0) {
            uVar3 = ___ratelimit(obj.update_dump_size._rs.92,"");
            if (uVar3 == 0) {
                return uVar3;
            }
            uVar4 = 0x800145d;
        }
        else {
            *pcVar6 = 0;
            if (iVar5 != 0) {
                uVar3 = sym.md_register_memory_dump(iVar5 << 0x14 & 0xffffffff,iVar2);
                if ((uVar3 & 1) == 0) {
                    uVar3 = sym.md_register_memory_dump(*pcVar7,iVar2);
                    if ((uVar3 & 1) == 0) {
                        uVar3 = ___ratelimit(obj.update_dump_size._rs.90,"");
                        if (uVar3 != 0) {
                            uVar3 = _printk(0x80010a3,iVar2,*pcVar7 >> 0x14);
                        }
                        *pcVar7 = 0;
                        return uVar3;
                    }
                    uVar3 = ___ratelimit(obj.update_dump_size._rs.88,"");
                    if (uVar3 == 0) {
                        return uVar3;
                    }
                    uVar3 = _printk(0x8001439,iVar2,*pcVar7 >> 0x14);
                    return uVar3;
                }
                *pcVar7 = iVar5 << 0x14;
                uVar3 = ___ratelimit(obj.update_dump_size._rs.86,"");
                if (uVar3 == 0) {
                    return uVar3;
                }
                uVar4 = 0x8000e15;
                goto code_r0x0800a8c8;
            }
            *pcVar7 = 0;
            uVar3 = ___ratelimit(obj.update_dump_size._rs.84,"");
            if (uVar3 == 0) {
                return uVar3;
            }
            uVar4 = 0x8001867;
        }
        uVar3 = _printk(uVar4,iVar2);
    }
    return uVar3;
}


// ===== sym.update_dump_size @ 0x0800a810 (size 432) =====

void sym.update_dump_size(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg4 == 0) {
        uVar2 = sym.md_register_memory_dump(arg2 << 0x14 & 0xffffffff,arg1);
        if ((uVar2 & 1) == 0) {
            return;
        }
        *arg4 = arg2 << 0x14;
        iVar1 = ___ratelimit(obj.update_dump_size._rs,"");
        if (iVar1 == 0) {
            return;
        }
        uVar3 = 0x8000eeb;
code_r0x0800a8c8:
        _printk(uVar3,arg1,arg2);
    }
    else {
        uVar2 = sym.md_unregister_memory_dump(arg1);
        if ((uVar2 & 1) == 0) {
            iVar1 = ___ratelimit(obj.update_dump_size._rs.92,"");
            if (iVar1 == 0) {
                return;
            }
            uVar3 = 0x800145d;
        }
        else {
            *arg3 = 0;
            if (arg2 != 0) {
                uVar2 = sym.md_register_memory_dump(arg2 << 0x14 & 0xffffffff,arg1);
                if ((uVar2 & 1) == 0) {
                    uVar2 = sym.md_register_memory_dump(*arg4,arg1);
                    if ((uVar2 & 1) == 0) {
                        iVar1 = ___ratelimit(obj.update_dump_size._rs.90,"");
                        if (iVar1 != 0) {
                            _printk(0x80010a3,arg1,*arg4 >> 0x14);
                        }
                        *arg4 = 0;
                        return;
                    }
                    iVar1 = ___ratelimit(obj.update_dump_size._rs.88,"");
                    if (iVar1 == 0) {
                        return;
                    }
                    _printk(0x8001439,arg1,*arg4 >> 0x14);
                    return;
                }
                *arg4 = arg2 << 0x14;
                iVar1 = ___ratelimit(obj.update_dump_size._rs.86,"");
                if (iVar1 == 0) {
                    return;
                }
                uVar3 = 0x8000e15;
                goto code_r0x0800a8c8;
            }
            *arg4 = 0;
            iVar1 = ___ratelimit(obj.update_dump_size._rs.84,"");
            if (iVar1 == 0) {
                return;
            }
            uVar3 = 0x8001867;
        }
        _printk(uVar3,arg1);
    }
    return;
}


// ===== sym.page_owner_filter_read @ 0x0800a9c0 (size 180) =====

uchar * sym.page_owner_filter_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    uchar *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uchar *puVar10;
    int iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uint64_t uStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uchar *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c0;
    uchar *puStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
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
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr);
    uVar3 = strlen(&uStack_78);
    puVar10 = arg3;
    puVar4 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_78,uVar3);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar8 = &uStack_b0;
    *extraout_x18 = sym.page_owner_filter_write;
    pcStack_98 = sym.page_owner_filter_write;
    iVar6 = sp_el0;
    iStack_a8 = *(iVar6 + 0x5e0);
    uVar3 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iStack_90 = arg3;
    iVar1 = kstrtoul_from_user(extraout_x1,puVar10);
    if (iVar1 == 0) {
        if (uStack_b0 < 0x10) {
            _segment.ehdr = uStack_b0;
            goto code_r0x0800ab1c;
        }
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs.96,"");
        if (iVar1 != 0) {
            uVar5 = 0x8001dca;
            goto code_r0x0800ab14;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs,"");
        if (iVar1 != 0) {
            uVar5 = 0x800136c;
code_r0x0800ab14:
            _printk(uVar5);
        }
    }
    puVar10 = 0xffffffffffffffea;
code_r0x0800ab1c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_a8) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.page_owner_handle_read;
    pcStack_d8 = sym.page_owner_handle_read;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_e0 = &puStack_a0;
    iStack_d0 = arg1;
    iStack_c0 = arg2;
    puStack_b8 = puVar10;
    snprintf(&uStack_128,0x40,"",_segment.ehdr >> 10);
    uVar5 = strlen(&uStack_128);
    puVar10 = puVar8;
    puVar4 = simple_read_from_buffer(extraout_x1_00,uVar3,puVar8,&uStack_128,uVar5);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_e8) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar9 = &uStack_160;
    *extraout_x18_01 = sym.page_owner_handle_write;
    pcStack_148 = sym.page_owner_handle_write;
    iVar6 = sp_el0;
    iStack_158 = *(iVar6 + 0x5e0);
    uVar7 = 0;
    uStack_160 = 0;
    pppuStack_150 = &ppuStack_e0;
    uStack_140 = uVar3;
    puStack_138 = puVar8;
    iVar1 = kstrtoul_from_user(extraout_x1_01,puVar10,0);
    if (iVar1 == 0) {
        if (uStack_160 != 0) {
            if (_segment.ehdr >> 0xe < uStack_160) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_160,uVar7);
                }
            }
            else {
                _segment.ehdr = uStack_160 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        puVar10 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_158) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.page_owner_call_site_read;
    iVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar6 == 0) {
        puVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = scnprintf(iVar6,uVar7,0x8002092,"");
        uVar3 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar11 = 1;
            pcVar12 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar6 + iVar1,0x1000 - iVar1,"",iVar11,pcVar12 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
                    puVar10 = 0xfffffffffffffff4;
                    goto code_r0x0800ae38;
                }
                pcVar12 = *pcVar12;
                iVar11 = iVar11 + 1;
            } while (pcVar12 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
        uVar3 = strlen(iVar6);
        iVar1 = simple_read_from_buffer(extraout_x1_02,uVar7,puVar9,iVar6,uVar3);
        puVar10 = iVar1;
code_r0x0800ae38:
        kfree(iVar6);
    }
    return puVar10;
}


// ===== sym.page_owner_filter_write @ 0x0800aa74 (size 220) =====

uchar * sym.page_owner_filter_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    uchar *puVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uchar *puVar10;
    int iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    uchar *puStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uVar6 = 0;
    uStack_30 = 0;
    iVar1 = kstrtoul_from_user(arg1,arg2);
    if (iVar1 == 0) {
        if (uStack_30 < 0x10) {
            _segment.ehdr = uStack_30;
            goto code_r0x0800ab1c;
        }
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs.96,"");
        if (iVar1 != 0) {
            uVar3 = 0x8001dca;
            goto code_r0x0800ab14;
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_filter_write._rs,"");
        if (iVar1 != 0) {
            uVar3 = 0x800136c;
code_r0x0800ab14:
            _printk(uVar3);
        }
    }
    arg2 = -0x16;
code_r0x0800ab1c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.page_owner_handle_read;
    pcStack_58 = sym.page_owner_handle_read;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_a8);
    puVar10 = puVar8;
    puVar4 = simple_read_from_buffer(extraout_x1,uVar6,puVar8,&uStack_a8,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return puVar4;
    }
    __stack_chk_fail();
    puVar9 = &uStack_e0;
    *extraout_x18_00 = sym.page_owner_handle_write;
    pcStack_c8 = sym.page_owner_handle_write;
    iVar5 = sp_el0;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar7 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    uStack_c0 = uVar6;
    puStack_b8 = puVar8;
    iVar1 = kstrtoul_from_user(extraout_x1_00,puVar10,0);
    if (iVar1 == 0) {
        if (uStack_e0 != 0) {
            if (_segment.ehdr >> 0xe < uStack_e0) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_e0,uVar7);
                }
            }
            else {
                _segment.ehdr = uStack_e0 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        puVar10 = 0xffffffffffffffea;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return puVar10;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.page_owner_call_site_read;
    iVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar5 == 0) {
        puVar10 = 0xfffffffffffffff4;
    }
    else {
        iVar1 = scnprintf(iVar5,uVar7,0x8002092,"");
        uVar6 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar11 = 1;
            pcVar12 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar5 + iVar1,0x1000 - iVar1,"",iVar11,pcVar12 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar6);
                    puVar10 = 0xfffffffffffffff4;
                    goto code_r0x0800ae38;
                }
                pcVar12 = *pcVar12;
                iVar11 = iVar11 + 1;
            } while (pcVar12 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar6);
        uVar6 = strlen(iVar5);
        iVar1 = simple_read_from_buffer(extraout_x1_01,uVar7,puVar9,iVar5,uVar6);
        puVar10 = iVar1;
code_r0x0800ae38:
        kfree(iVar5);
    }
    return puVar10;
}


// ===== sym.page_owner_handle_read @ 0x0800ab50 (size 184) =====

int64_t sym.page_owner_handle_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    uint64_t uVar6;
    uint64_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    int iVar9;
    code *pcVar10;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
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
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_78);
    iVar8 = arg3;
    iVar4 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_78,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
    puVar7 = &uStack_b0;
    *extraout_x18 = sym.page_owner_handle_write;
    pcStack_98 = sym.page_owner_handle_write;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    uVar6 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iStack_90 = arg2;
    iStack_88 = arg3;
    iVar1 = kstrtoul_from_user(extraout_x1,iVar8,0);
    if (iVar1 == 0) {
        if (uStack_b0 != 0) {
            if (_segment.ehdr >> 0xe < uStack_b0) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar6 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_b0,uVar6);
                }
            }
            else {
                _segment.ehdr = uStack_b0 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        iVar8 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.page_owner_call_site_read;
    iVar5 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar5 == 0) {
        iVar8 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar5,uVar6,0x8002092,"");
        uVar3 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar9 = 1;
            pcVar10 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar5 + iVar1,0x1000 - iVar1,"",iVar9,pcVar10 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
                    iVar8 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar10 = *pcVar10;
                iVar9 = iVar9 + 1;
            } while (pcVar10 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar3);
        uVar3 = strlen(iVar5);
        iVar1 = simple_read_from_buffer(extraout_x1_00,uVar6,puVar7,iVar5,uVar3);
        iVar8 = iVar1;
code_r0x0800ae38:
        kfree(iVar5);
    }
    return iVar8;
}


// ===== sym.page_owner_handle_write @ 0x0800ac08 (size 256) =====

int64_t sym.page_owner_handle_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong extraout_x1;
    uint64_t uVar5;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int iVar8;
    code *pcVar9;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    puVar6 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uVar5 = 0;
    uStack_30 = 0;
    iVar1 = kstrtoul_from_user(arg1,arg2,0);
    if (iVar1 == 0) {
        if (uStack_30 != 0) {
            if (_segment.ehdr >> 0xe < uStack_30) {
                iVar1 = ___ratelimit(obj.page_owner_handle_write._rs.100,"");
                if (iVar1 != 0) {
                    uVar5 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_30,uVar5);
                }
            }
            else {
                _segment.ehdr = uStack_30 << 10;
            }
        }
    }
    else {
        iVar1 = ___ratelimit(obj.page_owner_handle_write._rs,"");
        if (iVar1 != 0) {
            _printk(0x80021bd);
        }
        arg2 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.page_owner_call_site_read;
    iVar3 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar3 == 0) {
        iVar7 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar3,uVar5,0x8002092,"");
        uVar4 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar8 = 1;
            pcVar9 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar3 + iVar1,0x1000 - iVar1,"",iVar8,pcVar9 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
                    iVar7 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar9 = *pcVar9;
                iVar8 = iVar8 + 1;
            } while (pcVar9 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
        uVar4 = strlen(iVar3);
        iVar1 = simple_read_from_buffer(extraout_x1,uVar5,puVar6,iVar3,uVar4);
        iVar7 = iVar1;
code_r0x0800ae38:
        kfree(iVar3);
    }
    return iVar7;
}


// ===== sym.page_owner_call_site_read @ 0x0800ad08 (size 356) =====

int64_t sym.page_owner_call_site_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = kmem_cache_alloc_trace(_dma_fence_release,0xcc0,0x1000);
    if (iVar3 == 0) {
        iVar5 = -0xc;
    }
    else {
        iVar1 = scnprintf(iVar3,arg2,0x8002092,"");
        uVar4 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
        if (_obj.accounted_call_site_list != obj.accounted_call_site_list) {
            iVar6 = 1;
            pcVar7 = _obj.accounted_call_site_list;
            do {
                iVar2 = scnprintf(iVar3 + iVar1,0x1000 - iVar1,"",iVar6,pcVar7 + 0x10);
                iVar1 = iVar2 + iVar1;
                if (iVar1 == 0x1000) {
                    _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
                    iVar5 = -0xc;
                    goto code_r0x0800ae38;
                }
                pcVar7 = *pcVar7;
                iVar6 = iVar6 + 1;
            } while (pcVar7 != obj.accounted_call_site_list);
        }
        _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar4);
        uVar4 = strlen(iVar3);
        iVar1 = simple_read_from_buffer(arg1,arg2,arg3,iVar3,uVar4);
        iVar5 = iVar1;
code_r0x0800ae38:
        kfree(iVar3);
    }
    return iVar5;
}


// ===== sym.page_owner_call_site_write @ 0x0800ae6c (size 464) =====

code * sym.page_owner_call_site_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint64_t uVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint64_t auStack_80 [6];
    ushort uStack_50;
    int64_t iStack_48;
    
    pcVar13 = arg2;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (pcVar13 < 0x32) {
        uStack_50 = 0;
        auStack_80[4] = 0;
        auStack_80[5] = 0;
        auStack_80[2] = 0;
        auStack_80[3] = 0;
        auStack_80[0] = 0;
        auStack_80[1] = 0;
        __check_object_size(auStack_80,pcVar13,0);
        pcVar11 = pcVar13;
        iVar5 = sym._copy_from_user(auStack_80,arg1,pcVar13);
        if (iVar5 != 0) {
            iVar4 = ___ratelimit(obj.page_owner_call_site_write._rs.106,"");
            if (iVar4 != 0) {
                _printk(0x8001514);
            }
            pcVar13 = 0xfffffffffffffff2;
            goto code_r0x0800af18;
        }
        if (((_ctype[auStack_80[0] & 0xff] & 3) != 0) || (auStack_80[0] == '_')) {
            pcVar11 = 0x48;
            puVar6 = kmem_cache_alloc_trace(_dma_fence_release,0xdc0);
            if (puVar6 == NULL) {
                pcVar13 = 0xfffffffffffffff4;
            }
            else {
                strscpy(puVar6 + 2,auStack_80,0x32);
                uVar7 = _raw_spin_lock_irqsave(obj.accounted_call_site_lock);
                puVar2 = *0x8000678;
                pcVar11 = obj.accounted_call_site_list;
                uVar8 = __list_add_valid(puVar6,*0x8000678);
                if ((uVar8 & 1) != 0) {
                    *0x8000678 = puVar6;
                    *puVar6 = obj.accounted_call_site_list;
                    puVar6[1] = puVar2;
                    *puVar2 = puVar6;
                }
                _raw_spin_unlock_irqrestore(obj.accounted_call_site_lock,uVar7);
            }
            goto code_r0x0800af18;
        }
        iVar4 = ___ratelimit(obj.page_owner_call_site_write._rs.108,"");
        if (iVar4 != 0) {
            uVar7 = 0x8000bb9;
            goto code_r0x0800b020;
        }
    }
    else {
        iVar4 = ___ratelimit(obj.page_owner_call_site_write._rs,"");
        pcVar11 = pcVar13;
        if (iVar4 != 0) {
            uVar7 = 0x800169f;
code_r0x0800b020:
            _printk(uVar7);
        }
    }
    pcVar13 = 0xffffffffffffffea;
code_r0x0800af18:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return pcVar13;
    }
    auVar14 = __stack_chk_fail();
    uVar10 = auVar14._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar6 = sp_el0;
    uVar8 = (uVar10 << 8) >> 8;
    if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar10, (*puVar6 >> 0x1a & 1) != 0)) {
        uVar12 = uVar10 & uVar8;
    }
    bVar3 = CARRY8(uVar12,pcVar11);
    pcVar13 = pcVar11 + uVar12;
    uVar12 = 0;
    if (!bVar3 || pcVar13 == NULL) {
        uVar12 = 0x7fffffffff;
    }
    if (bVar3) {
        pcVar13 = 0xffffffffffffffff;
    }
    pcVar9 = pcVar11;
    if (!CARRY8(pcVar13,~uVar12) && !CARRY8(pcVar13 + ~uVar12,bVar3) || pcVar13 == uVar12 + !bVar3) {
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar6[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar10 & uVar8 & 0xffffff8000000000) != 0) {
            uVar10 = 0;
        }
        pcVar9 = __arch_copy_from_user(auVar14._0_8_,uVar10,pcVar11);
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr0_el1 = (uVar10 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    if (pcVar9 != NULL) {
        memset(pcVar11 + (auVar14._0_8_ - pcVar9),0,pcVar9);
    }
    return pcVar9;
}


// ===== sym._copy_from_user @ 0x0800b03c (size 376) =====

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
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
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
        if ((_kmalloc_caches >> 0x18 & 1) == 0) {
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


// ===== sym.slab_owner_dump_size_read @ 0x0800b1f0 (size 196) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_dump_size_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    code *pcVar7;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    ulong extraout_x1_06;
    ulong extraout_x1_07;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
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
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_3d0;
    int64_t iStack_3c8;
    ulong **ppuStack_3c0;
    code *pcStack_3b8;
    code *pcStack_3b0;
    ulong uStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    uint uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    ulong uStack_320;
    uint64_t uStack_310;
    code *pcStack_308;
    int64_t iStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    code *pcStack_2e8;
    code *pcStack_2e0;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    ulong uStack_250;
    uint64_t uStack_240;
    code *pcStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    code *pcStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    code *pcStack_190;
    code *pcStack_188;
    uint64_t uStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    code *pcStack_160;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_a0);
    pcVar11 = arg3;
    pcVar5 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_a0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_d0;
    *extraout_x18 = sym.slab_owner_dump_size_write;
    pcStack_b8 = sym.slab_owner_dump_size_write;
    iVar2 = sp_el0;
    iStack_c8 = *(iVar2 + 0x5e0);
    pcVar5 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iStack_b0 = arg3;
    iVar3 = kstrtoull_from_user(extraout_x1,pcVar11);
    if (iVar3 == 0) {
        pcVar5 = obj.md_slabowner_dump_addr;
        pcVar7 = obj.md_slabowner_dump_size;
        sym.update_dump_size(0x80014b4,iStack_d0,0x80006f0,0x8000648);
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_dump_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.slab_owner_filter_read;
    pcStack_f8 = sym.slab_owner_filter_read;
    iVar2 = sp_el0;
    iStack_108 = *(iVar2 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    ppuStack_100 = &puStack_c0;
    iStack_f0 = arg1;
    iStack_e0 = arg2;
    pcStack_d8 = pcVar11;
    snprintf(&uStack_148,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_148);
    pcVar11 = pcVar7;
    pcVar6 = simple_read_from_buffer(extraout_x1_00,pcVar5,pcVar7,&uStack_148,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_108) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_180;
    *extraout_x18_01 = sym.slab_owner_filter_write;
    pcStack_168 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_178 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_180 = 0;
    ppuStack_170 = &ppuStack_100;
    pcStack_160 = pcVar7;
    iVar3 = kstrtoul_from_user(extraout_x1_01,pcVar11);
    if (iVar3 == 0) {
        if (uStack_180 != 0) {
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = 1;
            do {
                if ((uVar10 & uStack_180) != 0) {
                    if (0xd < uVar9) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar9 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar8 << 1;
                uVar8 = uVar1;
                uVar9 = uVar9 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_180);
        }
        _segment.ehdr = uStack_180;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_178) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.slab_owner_handle_read;
    pcStack_1a8 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_1b8 = *(iVar2 + 0x5e0);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuStack_1b0 = &ppuStack_170;
    uStack_1a0 = extraout_x1_00;
    pcStack_190 = pcVar5;
    pcStack_188 = pcVar11;
    snprintf(&uStack_1f8,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_1f8);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_02,uVar8,pcVar6,&uStack_1f8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1b8) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_230;
    *extraout_x18_03 = sym.slab_owner_handle_write;
    pcStack_218 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_228 = *(iVar2 + 0x5e0);
    uVar9 = 0;
    uStack_230 = 0;
    ppuStack_220 = &ppuStack_1b0;
    uStack_210 = uVar8;
    pcStack_208 = pcVar6;
    iVar3 = kstrtoul_from_user(extraout_x1_03,pcVar11);
    if (iVar3 == 0) {
        if (uStack_230 != 0) {
            uVar8 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_230) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar9 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_230);
                }
            }
            else {
                _segment.ehdr = uStack_230 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar11 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_228) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_info_size_read;
    pcStack_258 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    ppuStack_260 = &ppuStack_220;
    uStack_250 = extraout_x1_02;
    uStack_240 = uVar8;
    pcStack_238 = pcVar11;
    snprintf(&uStack_2d0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_2d0);
    pcVar11 = pcVar5;
    pcVar7 = simple_read_from_buffer(extraout_x1_04,uVar9,pcVar5,&uStack_2d0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return pcVar7;
    }
    __stack_chk_fail();
    pcVar6 = &iStack_300;
    *extraout_x18_05 = sym.dma_buf_info_size_write;
    pcStack_2e8 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_2f8 = *(iVar2 + 0x5e0);
    pcVar7 = NULL;
    iStack_300 = 0;
    ppuStack_2f0 = &ppuStack_260;
    pcStack_2e0 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_05,pcVar11,0);
    if (iVar3 == 0) {
        pcVar7 = obj.md_dma_buf_info_addr;
        pcVar6 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_300,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2f8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_06 = sym.dma_buf_procs_size_read;
    pcStack_328 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_338 = *(iVar2 + 0x5e0);
    uStack_340 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    ppuStack_330 = &ppuStack_2f0;
    uStack_320 = extraout_x1_04;
    uStack_310 = uVar9;
    pcStack_308 = pcVar11;
    snprintf(&uStack_3a0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_3a0);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_06,pcVar7,pcVar6,&uStack_3a0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_338) {
        return pcVar5;
    }
    __stack_chk_fail();
    *extraout_x18_07 = sym.dma_buf_procs_size_write;
    pcStack_3b8 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_3c8 = *(iVar2 + 0x5e0);
    iStack_3d0 = 0;
    ppuStack_3c0 = &ppuStack_330;
    pcStack_3b0 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_07,pcVar11,0,&iStack_3d0);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_3d0,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_3c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_dump_size_write @ 0x0800b2b4 (size 204) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_dump_size_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    ulong extraout_x1_06;
    code *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    code *pcStack_310;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    uint uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    ulong uStack_280;
    uint64_t uStack_270;
    code *pcStack_268;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    code *pcStack_240;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint uStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_1b0;
    uint64_t uStack_1a0;
    code *pcStack_198;
    uint64_t uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    code *pcStack_168;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    ulong **ppuStack_110;
    code *pcStack_108;
    ulong uStack_100;
    code *pcStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar6 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    pcVar7 = NULL;
    iStack_30 = 0;
    iVar3 = kstrtoull_from_user(arg1,arg2);
    if (iVar3 == 0) {
        pcVar7 = obj.md_slabowner_dump_addr;
        pcVar6 = obj.md_slabowner_dump_size;
        sym.update_dump_size(0x80014b4,iStack_30,0x80006f0,0x8000648);
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_dump_size_write._rs,"");
        if (iVar3 == 0) {
            arg2 = -0x16;
        }
        else {
            _printk(0x8000cc0);
            arg2 = -0x16;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.slab_owner_filter_read;
    pcStack_58 = sym.slab_owner_filter_read;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_a8);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1,pcVar7,pcVar6,&uStack_a8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_e0;
    *extraout_x18_00 = sym.slab_owner_filter_write;
    pcStack_c8 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    pcStack_c0 = pcVar6;
    iVar3 = kstrtoul_from_user(extraout_x1_00,pcVar11);
    if (iVar3 == 0) {
        if (uStack_e0 != 0) {
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = 1;
            do {
                if ((uVar10 & uStack_e0) != 0) {
                    if (0xd < uVar9) {
    //WARNING: Does not return
                        pcVar7 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar7)();
                    }
                    if (*(kmalloc_caches + uVar9 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar8 << 1;
                uVar8 = uVar1;
                uVar9 = uVar9 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_e0);
        }
        _segment.ehdr = uStack_e0;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.slab_owner_handle_read;
    pcStack_108 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    ppuStack_110 = &ppuStack_d0;
    uStack_100 = extraout_x1;
    pcStack_f0 = pcVar7;
    pcStack_e8 = pcVar11;
    snprintf(&uStack_158,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_158);
    pcVar7 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_01,uVar8,pcVar5,&uStack_158,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_190;
    *extraout_x18_02 = sym.slab_owner_handle_write;
    pcStack_178 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_188 = *(iVar2 + 0x5e0);
    uVar9 = 0;
    uStack_190 = 0;
    ppuStack_180 = &ppuStack_110;
    uStack_170 = uVar8;
    pcStack_168 = pcVar5;
    iVar3 = kstrtoul_from_user(extraout_x1_02,pcVar7);
    if (iVar3 == 0) {
        if (uStack_190 != 0) {
            uVar8 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_190) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar9 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_190);
                }
            }
            else {
                _segment.ehdr = uStack_190 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar7 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_188) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_info_size_read;
    pcStack_1b8 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_1c8 = *(iVar2 + 0x5e0);
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    ppuStack_1c0 = &ppuStack_180;
    uStack_1b0 = extraout_x1_01;
    uStack_1a0 = uVar8;
    pcStack_198 = pcVar7;
    snprintf(&uStack_230,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_230);
    pcVar7 = pcVar6;
    pcVar11 = simple_read_from_buffer(extraout_x1_03,uVar9,pcVar6,&uStack_230,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1c8) {
        return pcVar11;
    }
    __stack_chk_fail();
    pcVar5 = &iStack_260;
    *extraout_x18_04 = sym.dma_buf_info_size_write;
    pcStack_248 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_258 = *(iVar2 + 0x5e0);
    pcVar11 = NULL;
    iStack_260 = 0;
    ppuStack_250 = &ppuStack_1c0;
    pcStack_240 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_04,pcVar7,0);
    if (iVar3 == 0) {
        pcVar11 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_260,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_258) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_05 = sym.dma_buf_procs_size_read;
    pcStack_288 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_298 = *(iVar2 + 0x5e0);
    uStack_2a0 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    ppuStack_290 = &ppuStack_250;
    uStack_280 = extraout_x1_03;
    uStack_270 = uVar9;
    pcStack_268 = pcVar7;
    snprintf(&uStack_300,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_300);
    pcVar7 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_05,pcVar11,pcVar5,&uStack_300,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_298) {
        return pcVar6;
    }
    __stack_chk_fail();
    *extraout_x18_06 = sym.dma_buf_procs_size_write;
    pcStack_318 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_328 = *(iVar2 + 0x5e0);
    iStack_330 = 0;
    ppuStack_320 = &ppuStack_290;
    pcStack_310 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_06,pcVar7,0,&iStack_330);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_330,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_328) {
        return pcVar7;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_filter_read @ 0x0800b380 (size 180) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_filter_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    ulong extraout_x1_05;
    uint64_t uVar7;
    uint64_t uVar8;
    code *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    code *pcStack_2e8;
    code *pcStack_2e0;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint uStack_270;
    int64_t iStack_268;
    ulong **ppuStack_260;
    code *pcStack_258;
    ulong uStack_250;
    uint64_t uStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    code *pcStack_210;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uint uStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    ulong uStack_180;
    uint64_t uStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    int64_t iStack_158;
    ulong **ppuStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    code *pcStack_138;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
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
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr);
    uVar4 = strlen(&uStack_78);
    pcVar11 = arg3;
    pcVar5 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_78,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_b0;
    *extraout_x18 = sym.slab_owner_filter_write;
    pcStack_98 = sym.slab_owner_filter_write;
    iVar2 = sp_el0;
    iStack_a8 = *(iVar2 + 0x5e0);
    uVar7 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iStack_90 = arg3;
    iVar3 = kstrtoul_from_user(extraout_x1,pcVar11);
    if (iVar3 == 0) {
        if (uStack_b0 != 0) {
            uVar10 = 1;
            uVar8 = 0;
            uVar7 = 1;
            do {
                if ((uVar10 & uStack_b0) != 0) {
                    if (0xd < uVar8) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar8 * 8) == 0) {
                        _printk(0x800194a);
                        pcVar11 = 0xffffffffffffffea;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar7 << 1;
                uVar7 = uVar1;
                uVar8 = uVar8 + 1;
                uVar10 = uVar1;
            } while (uVar10 <= uStack_b0);
        }
        _segment.ehdr = uStack_b0;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x800136c);
            pcVar11 = 0xffffffffffffffea;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_a8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.slab_owner_handle_read;
    pcStack_d8 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_e8 = *(iVar2 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_e0 = &puStack_a0;
    iStack_d0 = arg1;
    iStack_c0 = arg2;
    pcStack_b8 = pcVar11;
    snprintf(&uStack_128,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_128);
    pcVar11 = pcVar5;
    pcVar6 = simple_read_from_buffer(extraout_x1_00,uVar7,pcVar5,&uStack_128,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_e8) {
        return pcVar6;
    }
    __stack_chk_fail();
    pcVar6 = &uStack_160;
    *extraout_x18_01 = sym.slab_owner_handle_write;
    pcStack_148 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_158 = *(iVar2 + 0x5e0);
    uVar8 = 0;
    uStack_160 = 0;
    ppuStack_150 = &ppuStack_e0;
    uStack_140 = uVar7;
    pcStack_138 = pcVar5;
    iVar3 = kstrtoul_from_user(extraout_x1_01,pcVar11);
    if (iVar3 == 0) {
        if (uStack_160 != 0) {
            uVar7 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_160) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar8 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_160);
                }
            }
            else {
                _segment.ehdr = uStack_160 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar11 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_158) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_info_size_read;
    pcStack_188 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_198 = *(iVar2 + 0x5e0);
    uStack_1a0 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    ppuStack_190 = &ppuStack_150;
    uStack_180 = extraout_x1_00;
    uStack_170 = uVar7;
    pcStack_168 = pcVar11;
    snprintf(&uStack_200,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_200);
    pcVar11 = pcVar6;
    pcVar5 = simple_read_from_buffer(extraout_x1_02,uVar8,pcVar6,&uStack_200,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_198) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar9 = &iStack_230;
    *extraout_x18_03 = sym.dma_buf_info_size_write;
    pcStack_218 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_228 = *(iVar2 + 0x5e0);
    pcVar5 = NULL;
    iStack_230 = 0;
    ppuStack_220 = &ppuStack_190;
    pcStack_210 = pcVar6;
    iVar3 = kstrtoull_from_user(extraout_x1_03,pcVar11,0);
    if (iVar3 == 0) {
        pcVar5 = obj.md_dma_buf_info_addr;
        pcVar9 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_230,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_228) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_procs_size_read;
    pcStack_258 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_268 = *(iVar2 + 0x5e0);
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    ppuStack_260 = &ppuStack_220;
    uStack_250 = extraout_x1_02;
    uStack_240 = uVar8;
    pcStack_238 = pcVar11;
    snprintf(&uStack_2d0,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_2d0);
    pcVar11 = pcVar9;
    pcVar5 = simple_read_from_buffer(extraout_x1_04,pcVar5,pcVar9,&uStack_2d0,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_268) {
        return pcVar5;
    }
    __stack_chk_fail();
    *extraout_x18_05 = sym.dma_buf_procs_size_write;
    pcStack_2e8 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_2f8 = *(iVar2 + 0x5e0);
    iStack_300 = 0;
    ppuStack_2f0 = &ppuStack_260;
    pcStack_2e0 = pcVar9;
    iVar3 = kstrtoull_from_user(extraout_x1_05,pcVar11,0,&iStack_300);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_300,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_2f8) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_filter_write @ 0x0800b434 (size 280) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_filter_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    code *pcVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    ulong extraout_x1_04;
    uint64_t uVar6;
    uint64_t uVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    int64_t iStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    code *pcStack_268;
    code *pcStack_260;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    uint uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    ulong uStack_1d0;
    uint64_t uStack_1c0;
    code *pcStack_1b8;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
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
    uint uStack_120;
    int64_t iStack_118;
    ulong **ppuStack_110;
    code *pcStack_108;
    ulong uStack_100;
    uint64_t uStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    code *pcStack_b8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar11 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uVar6 = 0;
    uStack_30 = 0;
    iVar3 = kstrtoul_from_user(arg1,arg2);
    if (iVar3 == 0) {
        if (uStack_30 != 0) {
            uVar9 = 1;
            uVar7 = 0;
            uVar6 = 1;
            do {
                if ((uVar9 & uStack_30) != 0) {
                    if (0xd < uVar7) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x5512,0x800b548);
                        (*pcVar11)();
                    }
                    if (*(kmalloc_caches + uVar7 * 8) == 0) {
                        _printk(0x800194a);
                        arg2 = -0x16;
                        goto code_r0x0800b500;
                    }
                }
                uVar1 = uVar6 << 1;
                uVar6 = uVar1;
                uVar7 = uVar7 + 1;
                uVar9 = uVar1;
            } while (uVar9 <= uStack_30);
        }
        _segment.ehdr = uStack_30;
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_filter_write._rs,"");
        if (iVar3 == 0) {
            arg2 = -0x16;
        }
        else {
            _printk(0x800136c);
            arg2 = -0x16;
        }
    }
code_r0x0800b500:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.slab_owner_handle_read;
    pcStack_58 = sym.slab_owner_handle_read;
    iVar2 = sp_el0;
    iStack_68 = *(iVar2 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_a8,0x40,"",_segment.ehdr >> 10);
    uVar4 = strlen(&uStack_a8);
    pcVar10 = pcVar11;
    pcVar5 = simple_read_from_buffer(extraout_x1,uVar6,pcVar11,&uStack_a8,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_68) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar5 = &uStack_e0;
    *extraout_x18_00 = sym.slab_owner_handle_write;
    pcStack_c8 = sym.slab_owner_handle_write;
    iVar2 = sp_el0;
    iStack_d8 = *(iVar2 + 0x5e0);
    uVar7 = 0;
    uStack_e0 = 0;
    ppuStack_d0 = &puStack_60;
    uStack_c0 = uVar6;
    pcStack_b8 = pcVar11;
    iVar3 = kstrtoul_from_user(extraout_x1_00,pcVar10);
    if (iVar3 == 0) {
        if (uStack_e0 != 0) {
            uVar6 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_e0) {
                iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar3 != 0) {
                    uVar7 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_e0);
                }
            }
            else {
                _segment.ehdr = uStack_e0 << 10;
            }
        }
    }
    else {
        iVar3 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar3 != 0) {
            _printk(0x80021bd);
        }
        pcVar10 = 0xffffffffffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_d8) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_info_size_read;
    pcStack_108 = sym.dma_buf_info_size_read;
    iVar2 = sp_el0;
    iStack_118 = *(iVar2 + 0x5e0);
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    ppuStack_110 = &ppuStack_d0;
    uStack_100 = extraout_x1;
    uStack_f0 = uVar6;
    pcStack_e8 = pcVar10;
    snprintf(&uStack_180,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_180);
    pcVar11 = pcVar5;
    pcVar10 = simple_read_from_buffer(extraout_x1_01,uVar7,pcVar5,&uStack_180,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_118) {
        return pcVar10;
    }
    __stack_chk_fail();
    pcVar8 = &iStack_1b0;
    *extraout_x18_02 = sym.dma_buf_info_size_write;
    pcStack_198 = sym.dma_buf_info_size_write;
    iVar2 = sp_el0;
    iStack_1a8 = *(iVar2 + 0x5e0);
    pcVar10 = NULL;
    iStack_1b0 = 0;
    ppuStack_1a0 = &ppuStack_110;
    pcStack_190 = pcVar5;
    iVar3 = kstrtoull_from_user(extraout_x1_02,pcVar11,0);
    if (iVar3 == 0) {
        pcVar10 = obj.md_dma_buf_info_addr;
        pcVar8 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_1b0,0x80006f8,0x8000650);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1a8) {
        return pcVar11;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_procs_size_read;
    pcStack_1d8 = sym.dma_buf_procs_size_read;
    iVar2 = sp_el0;
    iStack_1e8 = *(iVar2 + 0x5e0);
    uStack_1f0 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    ppuStack_1e0 = &ppuStack_1a0;
    uStack_1d0 = extraout_x1_01;
    uStack_1c0 = uVar7;
    pcStack_1b8 = pcVar11;
    snprintf(&uStack_250,100,"",_segment.ehdr >> 0x14);
    uVar4 = strlen(&uStack_250);
    pcVar11 = pcVar8;
    pcVar10 = simple_read_from_buffer(extraout_x1_03,pcVar10,pcVar8,&uStack_250,uVar4);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_1e8) {
        return pcVar10;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.dma_buf_procs_size_write;
    pcStack_268 = sym.dma_buf_procs_size_write;
    iVar2 = sp_el0;
    iStack_278 = *(iVar2 + 0x5e0);
    iStack_280 = 0;
    ppuStack_270 = &ppuStack_1e0;
    pcStack_260 = pcVar8;
    iVar3 = kstrtoull_from_user(extraout_x1_04,pcVar11,0,&iStack_280);
    if (iVar3 == 0) {
        sym.update_dump_size(0x8001328,iStack_280,0x8000700,0x8000658);
    }
    else {
        iVar3 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar3 == 0) {
            pcVar11 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar11 = 0xffffffffffffffea;
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_278) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_handle_read @ 0x0800b54c (size 184) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_handle_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    code *pcVar5;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    ulong extraout_x1_03;
    uint64_t uVar6;
    code *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar8;
    ulong unaff_x30;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    code *pcStack_230;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    uint uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    ulong uStack_1a0;
    uint64_t uStack_190;
    code *pcStack_188;
    int64_t iStack_180;
    int64_t iStack_178;
    ulong **ppuStack_170;
    code *pcStack_168;
    code *pcStack_160;
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
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
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
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    snprintf(&uStack_78,0x40,"",_segment.ehdr >> 10);
    uVar3 = strlen(&uStack_78);
    pcVar8 = arg3;
    pcVar4 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_78,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar4 = &uStack_b0;
    *extraout_x18 = sym.slab_owner_handle_write;
    pcStack_98 = sym.slab_owner_handle_write;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    uVar6 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffd0;
    iStack_90 = arg2;
    iStack_88 = arg3;
    iVar2 = kstrtoul_from_user(extraout_x1,pcVar8);
    if (iVar2 == 0) {
        if (uStack_b0 != 0) {
            arg2 = 0x8000000;
            if (_segment.ehdr >> 0xe < uStack_b0) {
                iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar2 != 0) {
                    uVar6 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_b0);
                }
            }
            else {
                _segment.ehdr = uStack_b0 << 10;
            }
        }
    }
    else {
        iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar2 != 0) {
            _printk(0x80021bd);
        }
        pcVar8 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_info_size_read;
    pcStack_d8 = sym.dma_buf_info_size_read;
    iVar1 = sp_el0;
    iStack_e8 = *(iVar1 + 0x5e0);
    uStack_f0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    ppuStack_e0 = &puStack_a0;
    iStack_d0 = arg1;
    iStack_c0 = arg2;
    pcStack_b8 = pcVar8;
    snprintf(&uStack_150,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_150);
    pcVar8 = pcVar4;
    pcVar5 = simple_read_from_buffer(extraout_x1_00,uVar6,pcVar4,&uStack_150,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_e8) {
        return pcVar5;
    }
    __stack_chk_fail();
    pcVar7 = &iStack_180;
    *extraout_x18_01 = sym.dma_buf_info_size_write;
    pcStack_168 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_178 = *(iVar1 + 0x5e0);
    pcVar5 = NULL;
    iStack_180 = 0;
    ppuStack_170 = &ppuStack_e0;
    pcStack_160 = pcVar4;
    iVar2 = kstrtoull_from_user(extraout_x1_01,pcVar8,0);
    if (iVar2 == 0) {
        pcVar5 = obj.md_dma_buf_info_addr;
        pcVar7 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_180,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_178) {
        return pcVar8;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_procs_size_read;
    pcStack_1a8 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    ppuStack_1b0 = &ppuStack_170;
    uStack_1a0 = extraout_x1_00;
    uStack_190 = uVar6;
    pcStack_188 = pcVar8;
    snprintf(&uStack_220,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_220);
    pcVar8 = pcVar7;
    pcVar4 = simple_read_from_buffer(extraout_x1_02,pcVar5,pcVar7,&uStack_220,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.dma_buf_procs_size_write;
    pcStack_238 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_248 = *(iVar1 + 0x5e0);
    iStack_250 = 0;
    ppuStack_240 = &ppuStack_1b0;
    pcStack_230 = pcVar7;
    iVar2 = kstrtoull_from_user(extraout_x1_03,pcVar8,0,&iStack_250);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_250,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_248) {
        return pcVar8;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.slab_owner_handle_write @ 0x0800b604 (size 256) =====

//WARNING: Control flow encountered bad instruction data

code * sym.slab_owner_handle_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    ulong extraout_x1_02;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint uStack_140;
    int64_t iStack_138;
    ulong **ppuStack_130;
    code *pcStack_128;
    ulong uStack_120;
    uint64_t uStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
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
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    pcVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar5 = 0;
    uStack_30 = 0;
    iVar2 = kstrtoul_from_user(arg1,arg2);
    if (iVar2 == 0) {
        if (uStack_30 != 0) {
            if (_segment.ehdr >> 0xe < uStack_30) {
                iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs.115,"");
                if (iVar2 != 0) {
                    uVar5 = _segment.ehdr >> 0xe;
                    _printk(0x8001a2b,uStack_30);
                }
            }
            else {
                _segment.ehdr = uStack_30 << 10;
            }
        }
    }
    else {
        iVar2 = ___ratelimit(obj.slab_owner_handle_write._rs,"");
        if (iVar2 != 0) {
            _printk(0x80021bd);
        }
        arg2 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_info_size_read;
    pcStack_58 = sym.dma_buf_info_size_read;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_d0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_d0);
    pcVar7 = pcVar8;
    pcVar4 = simple_read_from_buffer(extraout_x1,uVar5,pcVar8,&uStack_d0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar6 = &iStack_100;
    *extraout_x18_00 = sym.dma_buf_info_size_write;
    pcStack_e8 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_100 = 0;
    ppuStack_f0 = &puStack_60;
    pcStack_e0 = pcVar8;
    iVar2 = kstrtoull_from_user(extraout_x1_00,pcVar7,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar6 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_100,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar7 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar7 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_procs_size_read;
    pcStack_128 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_138 = *(iVar1 + 0x5e0);
    uStack_140 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    ppuStack_130 = &ppuStack_f0;
    uStack_120 = extraout_x1;
    uStack_110 = uVar5;
    pcStack_108 = pcVar7;
    snprintf(&uStack_1a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_1a0);
    pcVar8 = pcVar6;
    pcVar7 = simple_read_from_buffer(extraout_x1_01,pcVar4,pcVar6,&uStack_1a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_138) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.dma_buf_procs_size_write;
    pcStack_1b8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_1c8 = *(iVar1 + 0x5e0);
    iStack_1d0 = 0;
    ppuStack_1c0 = &ppuStack_130;
    pcStack_1b0 = pcVar6;
    iVar2 = kstrtoull_from_user(extraout_x1_02,pcVar8,0,&iStack_1d0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_1d0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar8 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar8 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1c8) {
        return pcVar8;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_info_size_read @ 0x0800b704 (size 196) =====

//WARNING: Control flow encountered bad instruction data

code * sym.dma_buf_info_size_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong extraout_x1;
    ulong extraout_x1_00;
    ulong extraout_x1_01;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar6;
    ulong unaff_x30;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong **ppuStack_190;
    code *pcStack_188;
    code *pcStack_180;
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
    uint uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_a0);
    pcVar6 = arg3;
    pcVar4 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return pcVar4;
    }
    __stack_chk_fail();
    pcVar5 = &iStack_d0;
    *extraout_x18 = sym.dma_buf_info_size_write;
    pcStack_b8 = sym.dma_buf_info_size_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iStack_b0 = arg3;
    iVar2 = kstrtoull_from_user(extraout_x1,pcVar6,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_d0,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return pcVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_procs_size_read;
    pcStack_f8 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    uStack_110 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    ppuStack_100 = &puStack_c0;
    iStack_f0 = arg1;
    iStack_e0 = arg2;
    pcStack_d8 = pcVar6;
    snprintf(&uStack_170,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_170);
    pcVar6 = pcVar5;
    pcVar4 = simple_read_from_buffer(extraout_x1_00,pcVar4,pcVar5,&uStack_170,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.dma_buf_procs_size_write;
    pcStack_188 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_198 = *(iVar1 + 0x5e0);
    iStack_1a0 = 0;
    ppuStack_190 = &ppuStack_100;
    pcStack_180 = pcVar5;
    iVar2 = kstrtoull_from_user(extraout_x1_01,pcVar6,0,&iStack_1a0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_1a0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_198) {
        return pcVar6;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_info_size_write @ 0x0800b7c8 (size 204) =====

//WARNING: Control flow encountered bad instruction data

code * sym.dma_buf_info_size_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong extraout_x1;
    ulong extraout_x1_00;
    code *pcVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar6;
    ulong unaff_x30;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
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
    uint uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_30;
    int64_t iStack_28;
    
    pcVar5 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    pcVar4 = NULL;
    iStack_30 = 0;
    iVar2 = kstrtoull_from_user(arg1,arg2,0);
    if (iVar2 == 0) {
        pcVar4 = obj.md_dma_buf_info_addr;
        pcVar5 = obj.md_dma_buf_info_size;
        sym.update_dump_size(0x800185e,iStack_30,0x80006f8,0x8000650);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_info_size_write._rs,"");
        if (iVar2 == 0) {
            arg2 = -0x16;
        }
        else {
            _printk(0x8000cc0);
            arg2 = -0x16;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_procs_size_read;
    pcStack_58 = sym.dma_buf_procs_size_read;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    snprintf(&uStack_d0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_d0);
    pcVar6 = pcVar5;
    pcVar4 = simple_read_from_buffer(extraout_x1,pcVar4,pcVar5,&uStack_d0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.dma_buf_procs_size_write;
    pcStack_e8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_f8 = *(iVar1 + 0x5e0);
    iStack_100 = 0;
    ppuStack_f0 = &puStack_60;
    pcStack_e0 = pcVar5;
    iVar2 = kstrtoull_from_user(extraout_x1_00,pcVar6,0,&iStack_100);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_100,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            pcVar6 = 0xffffffffffffffea;
        }
        else {
            _printk(0x8000cc0);
            pcVar6 = 0xffffffffffffffea;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_f8) {
        return pcVar6;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_procs_size_read @ 0x0800b894 (size 196) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.dma_buf_procs_size_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
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
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    snprintf(&uStack_a0,100,"",_segment.ehdr >> 0x14);
    uVar3 = strlen(&uStack_a0);
    iVar5 = arg3;
    iVar4 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_a0,uVar3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dma_buf_procs_size_write;
    pcStack_b8 = sym.dma_buf_procs_size_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    iStack_d0 = 0;
    puStack_c0 = &stack0xffffffffffffffd0;
    iStack_b0 = arg3;
    iVar2 = kstrtoull_from_user(extraout_x1,iVar5,0,&iStack_d0);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_d0,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            iVar5 = -0x16;
        }
        else {
            _printk(0x8000cc0);
            iVar5 = -0x16;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return iVar5;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dma_buf_procs_size_write @ 0x0800b958 (size 204) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.dma_buf_procs_size_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    iVar2 = kstrtoull_from_user(arg1,arg2,0,&iStack_30);
    if (iVar2 == 0) {
        sym.update_dump_size(0x8001328,iStack_30,0x8000700,0x8000658);
    }
    else {
        iVar2 = ___ratelimit(obj.dma_buf_procs_size_write._rs,"");
        if (iVar2 == 0) {
            arg2 = -0x16;
        }
        else {
            _printk(0x8000cc0);
            arg2 = -0x16;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x0800bacc (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800bb00 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_minidump_driver_probe.af2718e0f13fcb9c83ecc57a3ee0e740.cfi_jt);
    return;
}

