// decompiled from sg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 784) =====

//WARNING: Switch with 1 destination removed at 0x08009820

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (-0x4d38130654d7aafd < arg1) {
            if (arg1 < -0x2ac316d8df914f8) {
                if (arg1 == -0x4d38130654d7aafc) {
                    pcVar2 = sym.sg_vma_fault.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                    goto code_r0x08003300;
                }
                if (arg1 != -0x8dc801903aca538) goto code_r0x080097e0;
                pcVar2 = sym.sg_release.09869e51822c5a12dd1be57416341cc4.cfi_jt;
            }
            else if (arg1 == -0x2ac316d8df914f8) {
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
            else {
                if (arg1 != -0x890743871a4a53) goto code_r0x080097e0;
                pcVar2 = sym.compat_ptr_ioctl.cfi_jt;
            }
code_r0x080032dc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080097e0;
        }
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.sg_poll.09869e51822c5a12dd1be57416341cc4.cfi_jt;
            }
            else {
                if (arg1 != -0x6651ae800d3a9ba2) goto code_r0x080097e0;
                pcVar2 = sym.sg_add_device.09869e51822c5a12dd1be57416341cc4.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.sg_rq_end_io_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                goto code_r0x080032dc;
            }
            if (arg1 != -0x4dd8a868e2da8fa7) goto code_r0x080097e0;
            pcVar2 = sym.sg_rq_end_io.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        }
    }
    else if (arg1 < 0x2d991cd56a2a2de3) {
        if (arg1 < 0x1d4d08bec0d758d0) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080097e0;
                pcVar2 = sym.sg_read.09869e51822c5a12dd1be57416341cc4.cfi_jt;
            }
        }
        else if (arg1 == 0x1d4d08bec0d758d0) {
            pcVar2 = sym.sg_fasync.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x080097e0;
            pcVar2 = sym.sg_write.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        }
    }
    else if (arg1 < 0x379d36f049eb9a81) {
        if (arg1 == 0x2d991cd56a2a2de3) {
            pcVar2 = sym.sg_remove_device.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x080097e0;
            pcVar2 = sym.no_llseek.cfi_jt;
        }
    }
    else if (arg1 == 0x379d36f049eb9a81) {
        pcVar2 = sym.sg_mmap.09869e51822c5a12dd1be57416341cc4.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080097e0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08003300:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080097e0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009834);
    (*pcVar1)();
}


// ===== sym.sg_read.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003318 (size 8) =====

uint64_t sym.sg_read.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t *arg2;
    uint64_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    uint *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    ulong *puVar15;
    int iVar16;
    ulong *puVar17;
    int64_t *piVar18;
    uint8_t *puVar19;
    int64_t *piVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar21;
    uint64_t unaff_x20;
    int64_t unaff_x21;
    ulong *unaff_x22;
    code *pcVar22;
    uint *unaff_x23;
    int64_t iVar23;
    int64_t unaff_x24;
    int64_t iVar24;
    uint32_t uVar25;
    int64_t unaff_x25;
    int64_t unaff_x26;
    ulong *unaff_x28;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar26 [16];
    uint64_t auStack_230 [31];
    uint uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    uint uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    ulong uStack_f8;
    ulong *puStack_f0;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uint *puStack_c8;
    ulong *puStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar23 = sp_el0;
    iVar24 = sp_el0;
    iStack_68 = *(iVar23 + 0x5e0);
    iStack_6c = -1;
    if (*(param_1 + 0xa0) == *(iVar24 + 0x790)) {
        iVar23 = *(param_1 + 0xd8);
        uVar14 = param_3;
        if ((iVar23 == 0) || (unaff_x26 = *(iVar23 + 0x10), unaff_x26 == 0)) {
            uVar21 = 0xfffffffffffffffa;
        }
        else {
            unaff_x20 = param_3;
            unaff_x21 = param_2;
            if ((*(iVar23 + 0x1428) == '\0') ||
               (iVar7 = sym.get_sg_io_pack_id(&iStack_6c,param_2,param_3), iVar7 == 0)) {
                iVar7 = iStack_6c;
                unaff_x23 = iVar23 + 0x30;
                uVar13 = _raw_write_lock_irqsave(unaff_x23);
                unaff_x28 = iVar23 + 0x90;
                for (unaff_x22 = *unaff_x28; unaff_x22 != unaff_x28; unaff_x22 = *unaff_x22) {
                    if ((*(unaff_x22 + 0xf2) == '\0') &&
                       (((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)) && (*(unaff_x22 + 0xf3) == '\x01')))) {
                        *(unaff_x22 + 0xf3) = 2;
                        _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                        if (unaff_x22 == NULL) goto code_r0x08003a88;
                        goto code_r0x08003c18;
                    }
                }
                _raw_write_unlock_irqrestore(unaff_x23,uVar13);
code_r0x08003a88:
                if ((*(param_1 + 0x41) >> 3 & 1) == 0) {
                    uVar13 = _raw_write_lock_irqsave(unaff_x23);
                    unaff_x22 = *unaff_x28;
                    if (unaff_x22 == unaff_x28) {
                        param_1 = 0;
                    }
                    else {
                        param_1 = 0;
                        do {
                            if ((*(unaff_x22 + 0xf2) == '\0') && ((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)))) {
                                if (*(unaff_x22 + 0xf3) == '\0') {
                                    param_1 = 1;
                                }
                                else if (*(unaff_x22 + 0xf3) == '\x01') {
                                    *(unaff_x22 + 0xf3) = 2;
                                    _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                                    if (unaff_x22 != NULL) goto code_r0x08003c18;
                                    goto code_r0x08003b18;
                                }
                            }
                            unaff_x22 = *unaff_x22;
                        } while (unaff_x22 != unaff_x28);
                    }
                    _raw_write_unlock_irqrestore(unaff_x23,uVar13);
code_r0x08003b18:
                    if ((param_1 != 0) || (*(unaff_x26 + 0x70) == 0)) {
                        uStack_98 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = param_3;
                        init_wait_entry(&uStack_98,0);
                        param_1 = iVar23 + 0x18;
                        do {
                            uVar14 = 1;
                            unaff_x25 = prepare_to_wait_event(param_1,&uStack_98);
                            uVar13 = _raw_write_lock_irqsave(unaff_x23);
                            unaff_x22 = *unaff_x28;
                            if (unaff_x22 == unaff_x28) {
                                param_3 = 0;
                            }
                            else {
                                param_3 = 0;
                                do {
                                    if ((*(unaff_x22 + 0xf2) == '\0') &&
                                       ((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)))) {
                                        if (*(unaff_x22 + 0xf3) == '\0') {
                                            param_3 = 1;
                                        }
                                        else if (*(unaff_x22 + 0xf3) == '\x01') {
                                            *(unaff_x22 + 0xf3) = 2;
                                            _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                                            if (unaff_x22 != NULL) {
                                                finish_wait(param_1,&uStack_98);
                                                param_3 = uStack_a0;
                                                if (*(unaff_x22 + 7) != 0) goto code_r0x08003c20;
                                                goto code_r0x08003c6c;
                                            }
                                            if (param_3 != 0) goto code_r0x08003be0;
                                            goto code_r0x08003bd4;
                                        }
                                    }
                                    unaff_x22 = *unaff_x22;
                                } while (unaff_x22 != unaff_x28);
                            }
                            _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                            if (param_3 == 0) {
code_r0x08003bd4:
                                if (*(unaff_x26 + 0x70) != 0) {
                                    finish_wait(param_1,&uStack_98);
                                    break;
                                }
                            }
code_r0x08003be0:
                            if (unaff_x25 != 0) goto code_r0x08003bec;
                            schedule();
                        } while( true );
                    }
                    goto code_r0x08003c48;
                }
                uVar21 = 0xfffffffffffffff5;
            }
            else {
                uVar21 = iVar7;
            }
        }
    }
    else {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            param_3 = __task_pid_nr_ns(iVar24,1,0);
            param_3 = param_3 & 0xffffffff;
            _printk(0x8001ed2,"sg_read",param_3,iVar24 + 0x7a8);
        }
        uVar21 = 0xffffffffffffffff;
        uVar14 = param_3;
        param_1 = unaff_x24;
    }
    goto code_r0x080039e0;
code_r0x08003bec:
    if (unaff_x25 == 0) {
code_r0x08003c48:
        unaff_x25 = -0x13;
    }
    uVar21 = unaff_x25;
    unaff_x20 = param_3;
    goto code_r0x080039e0;
code_r0x08003c18:
    if (*(unaff_x22 + 7) == 0) {
code_r0x08003c6c:
        uVar14 = 0x24;
        iVar24 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar24 = 0x30;
        }
        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar24),0xdc0);
        unaff_x20 = param_3;
        if (puVar10 == NULL) {
            uVar21 = 0xfffffffffffffff4;
        }
        else {
            uVar8 = *(unaff_x22 + 0xc);
            *puVar10 = uVar8;
            puVar10[1] = uVar8;
            puVar10[2] = *(unaff_x22 + 0xd);
            if (*(unaff_x22 + 0x35) < 0xc0) {
                uVar25 = 0;
            }
            else {
                uVar25 = *(unaff_x22 + 8) == '\f';
            }
            uVar2 = puVar10[4];
            puVar10[4] = uVar2 & 0xfffffffe | uVar25;
            uVar25 = uVar25 | (*(unaff_x22 + 0x79) & 0x1f) << 1;
            puVar10[4] = uVar2 & 0xffffffc0 | uVar25;
            uVar25 = uVar25 | (*(unaff_x22 + 0x7c) & 0xff) << 6;
            puVar10[4] = uVar2 & 0xffffc000 | uVar25;
            puVar10[4] = uVar2 & 0xffc00000 | uVar25 | *(unaff_x22 + 0x7e) << 0xe;
            if (((*(unaff_x22 + 0x79) & 1) != 0) || ((~*(unaff_x22 + 0x12) & 0x70) == 0)) {
                puVar10[4] = uVar2 & 0xffc00000 | uVar25 | 0x20000;
                uVar13 = unaff_x22[0x13];
                *(puVar10 + 5) = unaff_x22[0x12];
                *(puVar10 + 7) = uVar13;
            }
            iVar7 = 0;
            iVar9 = 0;
            switch(*(unaff_x22 + 0x7c)) {
            case 0:
            case 10:
            case 0xb:
                break;
            case 1:
            case 2:
            case 3:
                iVar7 = 0x10;
                iVar9 = 5;
                break;
            default:
                iVar7 = 5;
                iVar9 = 5;
                break;
            case 7:
                iVar16 = 5;
                iVar7 = iVar16;
                iVar9 = 5;
                if ((*(unaff_x22 + 0x12) == '\0') && (iVar7 = 0, iVar9 = 0, *(unaff_x22 + 0x79) != '\0')) {
                    iVar7 = iVar16;
                    iVar9 = iVar16;
                }
            }
            puVar10[3] = iVar7;
            if (param_3 < 0x24) {
                unaff_x20 = 0;
                if (iVar9 != 0) {
                    unaff_x20 = 0xfffffffffffffffb;
                }
code_r0x08003dc4:
                sym.sg_finish_rem_req(unaff_x22);
                sym.sg_remove_request(iVar23,unaff_x22);
                uVar21 = unaff_x20;
            }
            else {
                uVar14 = 0x24;
                iVar24 = sym._copy_to_user(param_2,noname_1,0x24);
                if (iVar24 == 0) {
                    unaff_x20 = puVar10[1];
                    if (param_3 <= puVar10[1]) {
                        unaff_x20 = param_3;
                    }
                    if (0x24 < unaff_x20) {
                        uVar14 = unaff_x20 - 0x24;
                        iVar7 = sym.sg_read_oxfer(unaff_x22,param_2 + 0x24,uVar14);
                        if (iVar7 != 0) goto code_r0x08003db0;
                    }
                    goto code_r0x08003dc4;
                }
code_r0x08003db0:
                uVar21 = 0xfffffffffffffff2;
            }
            kfree(puVar10);
            unaff_x23 = puVar10;
        }
    }
    else {
code_r0x08003c20:
        uVar14 = param_3;
        uVar21 = sym.sg_new_read(iVar23,param_2,param_3,unaff_x22);
        unaff_x20 = param_3;
    }
code_r0x080039e0:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_68) {
        return uVar21;
    }
    auVar26 = __stack_chk_fail();
    iVar12 = auVar26._8_8_;
    iVar24 = auVar26._0_8_;
    *extraout_x18 = 0x8003e78;
    uStack_f8 = 0x8003e78;
    iVar23 = sp_el0;
    puVar15 = sp_el0;
    iStack_108 = *(iVar23 + 0x5e0);
    uStack_110 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    auStack_230[0x1d] = 0;
    auStack_230[0x1e] = 0;
    auStack_230[0x1b] = 0;
    auStack_230[0x1c] = 0;
    auStack_230[0x19] = 0;
    auStack_230[0x1a] = 0;
    auStack_230[0x17] = 0;
    auStack_230[0x18] = 0;
    auStack_230[0x15] = 0;
    auStack_230[0x16] = 0;
    auStack_230[0x13] = 0;
    auStack_230[0x14] = 0;
    auStack_230[0x11] = 0;
    auStack_230[0x12] = 0;
    auStack_230[0xf] = 0;
    auStack_230[0x10] = 0;
    auStack_230[0xd] = 0;
    auStack_230[0xe] = 0;
    auStack_230[0xb] = 0;
    auStack_230[0xc] = 0;
    auStack_230[9] = 0;
    auStack_230[10] = 0;
    auStack_230[7] = 0;
    auStack_230[8] = 0;
    auStack_230[5] = 0;
    auStack_230[6] = 0;
    auStack_230[3] = 0;
    auStack_230[4] = 0;
    auStack_230[1] = 0;
    auStack_230[2] = 0;
    auStack_230[0] = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = unaff_x28;
    iStack_e0 = unaff_x26;
    iStack_d8 = unaff_x25;
    iStack_d0 = param_1;
    puStack_c8 = unaff_x23;
    puStack_c0 = unaff_x22;
    iStack_b8 = unaff_x21;
    uStack_b0 = unaff_x20;
    uStack_a8 = uVar21;
    if (*(iVar24 + 0xa0) != puVar15[0xf2]) {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            uVar8 = __task_pid_nr_ns(puVar15,1,0);
            _printk(0x8001ed2,"sg_write",uVar8,puVar15 + 0xf5);
        }
        uVar21 = 0xffffffffffffffff;
        goto code_r0x08003f84;
    }
    iVar23 = *(iVar24 + 0xd8);
    if ((iVar23 != 0) && (puVar17 = *(iVar23 + 0x10), puVar17 != NULL)) {
        if (puVar17[0xe] != 0) {
            uVar21 = 0xffffffffffffffed;
            goto code_r0x08003f84;
        }
        if (((*(iVar24 + 0x41) >> 3 & 1) != 0) || (iVar7 = scsi_block_when_processing_errors(*puVar17), iVar7 != 0)) {
            if (uVar14 < 0x24) {
code_r0x08003f78:
                uVar21 = 0xfffffffffffffffb;
            }
            else {
                iVar11 = sym._copy_from_user(&uStack_130,iVar12,0x24);
                if (iVar11 == 0) {
                    if (uStack_130 < 0) {
                        uVar21 = sym.sg_new_write(iVar23,iVar24,iVar12,uVar14);
                        goto code_r0x08003f84;
                    }
                    if (uVar14 < 0x2a) goto code_r0x08003f78;
                    arg2 = iVar12 + 0x24;
                    uVar21 = arg2 * 0x100 >> 8;
                    if (((*(puVar15 + 0x3e) >> 5 & 1) != 0) || (puVar19 = arg2, (*puVar15 >> 0x1a & 1) != 0)) {
                        puVar19 = arg2 & uVar21;
                    }
                    bVar6 = 0xfffffffffffffffe < puVar19;
                    puVar19 = puVar19 + 1;
                    uVar1 = 0;
                    if (!bVar6 || puVar19 == NULL) {
                        uVar1 = 0x7fffffffff;
                    }
                    if (bVar6) {
                        puVar19 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar19,~uVar1) && !CARRY8(puVar19 + ~uVar1,bVar6) || puVar19 == uVar1 + !bVar6) {
                        puVar19 = arg2;
                        if ((arg2 & uVar21 & 0xffffff8000000000) != 0) {
                            puVar19 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar4 = *puVar19;
                        sym.uaccess_ttbr0_disable();
                        iVar24 = sym.sg_add_request(iVar23);
                        if (iVar24 == 0) {
                            uVar21 = 0xffffffffffffffdf;
                        }
                        else {
                            mutex_lock(iVar23 + 0x38);
                            uVar3 = *(iVar23 + 0x142a);
                            uVar25 = uVar3;
                            if (uVar3 == 0) {
                                uVar25 = scsi_command_size_tbl[uVar4 >> 5];
                                if ((0xbf < uVar4) && ((uStack_120 & 1) != 0)) {
                                    uVar25 = 0xc;
                                }
                            }
                            else {
                                *(iVar23 + 0x142a) = 0;
                            }
                            mutex_unlock(iVar23 + 0x38);
                            uVar5 = uVar14 - uVar25;
                            uVar2 = uVar5;
                            if (uVar5 <= uStack_130._4_4_) {
                                uVar2 = uStack_130._4_4_;
                            }
                            iVar7 = uVar5 - 0x24;
                            if (iVar7 < 0) {
                                sym.sg_remove_request(iVar23,iVar24);
                                uVar21 = 0xfffffffffffffffb;
                            }
                            else {
                                uVar21 = uVar25;
                                *(iVar24 + 0x38) = 0;
                                *(iVar24 + 0x40) = uVar25;
                                *(iVar24 + 0x42) = 0;
                                *(iVar24 + 0x41) = 0;
                                if (iVar7 == 0) {
                                    iVar9 = -3;
                                    if (uVar2 - 0x24 < 1) {
                                        iVar9 = -1;
                                    }
                                    puVar19 = NULL;
                                }
                                else {
                                    iVar9 = -4;
                                    if (uStack_130._4_4_ < 0x25) {
                                        iVar9 = -2;
                                    }
                                    puVar19 = arg2 + uVar21;
                                }
                                *(iVar24 + 0x44) = uVar2 - 0x24;
                                *(iVar24 + 0x48) = puVar19;
                                *(iVar24 + 0x3c) = iVar9;
                                *(iVar24 + 0x58) = 0;
                                *(iVar24 + 0x60) = uStack_130._4_4_;
                                *(iVar24 + 100) = iVar7;
                                *(iVar24 + 0x68) = uStack_128;
                                *(iVar24 + 0x70) = 0;
                                __check_object_size(auStack_230,uVar21,0);
                                iVar12 = sym._copy_from_user(auStack_230,arg2,uVar21);
                                if (iVar12 == 0) {
                                    if ((*(iVar24 + 0x3c) == -4) &&
                                       (iVar9 = ___ratelimit(obj.sg_write._rs,"sg_write"), iVar9 != 0)) {
                                        _printk(0x8001d45,uStack_130._4_4_ + -0x24,iVar7,auStack_230[0] & 0xff,
                                                puVar15 + 0xf5);
                                    }
                                    iVar7 = sym.sg_common_write(iVar23,iVar24,auStack_230,*(iVar23 + 0x68));
                                    uVar21 = iVar7;
                                    if (-1 < iVar7) {
                                        uVar21 = uVar14;
                                    }
                                }
                                else {
                                    sym.sg_remove_request(iVar23,iVar24);
                                    uVar21 = 0xfffffffffffffff2;
                                }
                            }
                        }
                        goto code_r0x08003f84;
                    }
                }
                uVar21 = 0xfffffffffffffff2;
            }
            goto code_r0x08003f84;
        }
    }
    uVar21 = 0xfffffffffffffffa;
code_r0x08003f84:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) != iStack_108) {
        auVar26 = __stack_chk_fail(uVar21);
        puVar15 = auVar26._8_8_;
        *extraout_x18_00 = 0x8004260;
        iVar23 = *(auVar26._0_8_ + 0xd8);
        if ((iVar23 == 0) || (iVar24 = *(iVar23 + 0x10), iVar24 == 0)) {
            uVar14 = 8;
        }
        else {
            if (((puVar15 != NULL) && (iVar23 + 0x18 != 0)) && (pcVar22 = *puVar15, pcVar22 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar22,0x8001a40);
                (*pcVar22)(auVar26._0_8_,iVar23 + 0x18,puVar15);
            }
            uVar13 = _raw_read_lock_irqsave(iVar23 + 0x30);
            piVar18 = iVar23 + 0x90;
            piVar20 = *piVar18;
            if (piVar20 == piVar18) {
                iVar7 = 0;
                uVar25 = 0;
            }
            else {
                uVar25 = 0;
                iVar7 = 0;
                do {
                    if (uVar25 == 0) {
                        if (*(piVar20 + 0xf3) == '\x01') {
                            uVar25 = 0x41;
                            if (*(piVar20 + 0xf2) != '\0') {
                                uVar25 = 0;
                            }
                        }
                        else {
                            uVar25 = 0;
                        }
                    }
                    piVar20 = *piVar20;
                    iVar7 = iVar7 + 1;
                } while (piVar20 != piVar18);
            }
            _raw_read_unlock_irqrestore(iVar23 + 0x30,uVar13);
            if (*(iVar24 + 0x70) == 0) {
                if (*(iVar23 + 0x1429) == '\0') {
                    uVar2 = uVar25 | 0x104;
                    if (iVar7 != 0) {
                        uVar2 = uVar25;
                    }
                    uVar14 = uVar2;
                }
                else {
                    uVar2 = uVar25 | 0x104;
                    if (0xf < iVar7) {
                        uVar2 = uVar25;
                    }
                    uVar14 = uVar2;
                }
            }
            else {
                uVar14 = uVar25 | 0x10;
            }
        }
        return uVar14;
    }
    return uVar21;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003320 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_interface_unregister(obj.sg_interface);
    class_destroy(*0x8001000);
    obj.def_reserved_size = 0x0;
    unregister_chrdev_region(0x1500000,0x8000);
    idr_destroy(obj.sg_index_idr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003328 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 < 0x1000) {
        *0x8001000 = CONCAT44(*0x8001000 >> 0x20,0x1000);
    }
    uVar1 = register_chrdev_region(0x1500000,0x8000,0x8002033);
    uVar2 = uVar1 & 0xffffffff;
    if (uVar1 == 0) {
        uVar2 = __class_create(obj.__this_module,"scsi_generic",obj.init_sg.__key);
        *0x8001000 = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            obj.def_reserved_size = 0x1;
            uVar1 = scsi_register_interface(obj.sg_interface);
            uVar2 = uVar1 & 0xffffffff;
            if (uVar1 == 0) goto code_r0x08009920;
            class_destroy(*0x8001000);
        }
        unregister_chrdev_region(0x1500000,0x8000);
    }
code_r0x08009920:
    return uVar2 & 0xffffffff;
}


// ===== sym.sg_fasync.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003330 (size 8) =====

ulong sym.sg_fasync.09869e51822c5a12dd1be57416341cc4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + 0xd8) == 0) || (*(*(param_2 + 0xd8) + 0x10) == 0)) {
        uVar1 = 0xfffffffa;
    }
    else {
        uVar1 = fasync_helper();
    }
    return uVar1;
}


// ===== sym.sg_write.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003338 (size 8) =====

uint64_t sym.sg_write.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t *arg2;
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    ulong uVar11;
    uint64_t uVar12;
    ulong *puVar13;
    ulong *puVar14;
    int64_t *piVar15;
    uint8_t *puVar16;
    int64_t *piVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint32_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint64_t auStack_190 [31];
    uint uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    puVar13 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    auStack_190[0x1d] = 0;
    auStack_190[0x1e] = 0;
    auStack_190[0x1b] = 0;
    auStack_190[0x1c] = 0;
    auStack_190[0x19] = 0;
    auStack_190[0x1a] = 0;
    auStack_190[0x17] = 0;
    auStack_190[0x18] = 0;
    auStack_190[0x15] = 0;
    auStack_190[0x16] = 0;
    auStack_190[0x13] = 0;
    auStack_190[0x14] = 0;
    auStack_190[0x11] = 0;
    auStack_190[0x12] = 0;
    auStack_190[0xf] = 0;
    auStack_190[0x10] = 0;
    auStack_190[0xd] = 0;
    auStack_190[0xe] = 0;
    auStack_190[0xb] = 0;
    auStack_190[0xc] = 0;
    auStack_190[9] = 0;
    auStack_190[10] = 0;
    auStack_190[7] = 0;
    auStack_190[8] = 0;
    auStack_190[5] = 0;
    auStack_190[6] = 0;
    auStack_190[3] = 0;
    auStack_190[4] = 0;
    auStack_190[1] = 0;
    auStack_190[2] = 0;
    auStack_190[0] = 0;
    if (*(param_1 + 0xa0) != puVar13[0xf2]) {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            uVar8 = __task_pid_nr_ns(puVar13,1,0);
            _printk(0x8001ed2,"sg_write",uVar8,puVar13 + 0xf5);
        }
        uVar12 = 0xffffffffffffffff;
        goto code_r0x08003f84;
    }
    iVar19 = *(param_1 + 0xd8);
    if ((iVar19 != 0) && (puVar14 = *(iVar19 + 0x10), puVar14 != NULL)) {
        if (puVar14[0xe] != 0) {
            uVar12 = 0xffffffffffffffed;
            goto code_r0x08003f84;
        }
        if (((*(param_1 + 0x41) >> 3 & 1) != 0) || (iVar7 = scsi_block_when_processing_errors(*puVar14), iVar7 != 0)) {
            if (param_3 < 0x24) {
code_r0x08003f78:
                uVar12 = 0xfffffffffffffffb;
            }
            else {
                iVar20 = sym._copy_from_user(&uStack_90,param_2,0x24);
                if (iVar20 == 0) {
                    if (uStack_90 < 0) {
                        uVar12 = sym.sg_new_write(iVar19,param_1,param_2,param_3);
                        goto code_r0x08003f84;
                    }
                    if (param_3 < 0x2a) goto code_r0x08003f78;
                    arg2 = param_2 + 0x24;
                    uVar12 = arg2 * 0x100 >> 8;
                    if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (puVar16 = arg2, (*puVar13 >> 0x1a & 1) != 0)) {
                        puVar16 = arg2 & uVar12;
                    }
                    bVar6 = 0xfffffffffffffffe < puVar16;
                    puVar16 = puVar16 + 1;
                    uVar2 = 0;
                    if (!bVar6 || puVar16 == NULL) {
                        uVar2 = 0x7fffffffff;
                    }
                    if (bVar6) {
                        puVar16 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar16,~uVar2) && !CARRY8(puVar16 + ~uVar2,bVar6) || puVar16 == uVar2 + !bVar6) {
                        puVar16 = arg2;
                        if ((arg2 & uVar12 & 0xffffff8000000000) != 0) {
                            puVar16 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar4 = *puVar16;
                        sym.uaccess_ttbr0_disable();
                        iVar20 = sym.sg_add_request(iVar19);
                        if (iVar20 == 0) {
                            uVar12 = 0xffffffffffffffdf;
                        }
                        else {
                            mutex_lock(iVar19 + 0x38);
                            uVar3 = *(iVar19 + 0x142a);
                            uVar21 = uVar3;
                            if (uVar3 == 0) {
                                uVar21 = scsi_command_size_tbl[uVar4 >> 5];
                                if ((0xbf < uVar4) && ((uStack_80 & 1) != 0)) {
                                    uVar21 = 0xc;
                                }
                            }
                            else {
                                *(iVar19 + 0x142a) = 0;
                            }
                            mutex_unlock(iVar19 + 0x38);
                            uVar5 = param_3 - uVar21;
                            uVar1 = uVar5;
                            if (uVar5 <= uStack_90._4_4_) {
                                uVar1 = uStack_90._4_4_;
                            }
                            iVar7 = uVar5 - 0x24;
                            if (iVar7 < 0) {
                                sym.sg_remove_request(iVar19,iVar20);
                                uVar12 = 0xfffffffffffffffb;
                            }
                            else {
                                uVar12 = uVar21;
                                *(iVar20 + 0x38) = 0;
                                *(iVar20 + 0x40) = uVar21;
                                *(iVar20 + 0x42) = 0;
                                *(iVar20 + 0x41) = 0;
                                if (iVar7 == 0) {
                                    iVar9 = -3;
                                    if (uVar1 - 0x24 < 1) {
                                        iVar9 = -1;
                                    }
                                    puVar16 = NULL;
                                }
                                else {
                                    iVar9 = -4;
                                    if (uStack_90._4_4_ < 0x25) {
                                        iVar9 = -2;
                                    }
                                    puVar16 = arg2 + uVar12;
                                }
                                *(iVar20 + 0x44) = uVar1 - 0x24;
                                *(iVar20 + 0x48) = puVar16;
                                *(iVar20 + 0x3c) = iVar9;
                                *(iVar20 + 0x58) = 0;
                                *(iVar20 + 0x60) = uStack_90._4_4_;
                                *(iVar20 + 100) = iVar7;
                                *(iVar20 + 0x68) = uStack_88;
                                *(iVar20 + 0x70) = 0;
                                __check_object_size(auStack_190,uVar12,0);
                                iVar10 = sym._copy_from_user(auStack_190,arg2,uVar12);
                                if (iVar10 == 0) {
                                    if ((*(iVar20 + 0x3c) == -4) &&
                                       (iVar9 = ___ratelimit(obj.sg_write._rs,"sg_write"), iVar9 != 0)) {
                                        _printk(0x8001d45,uStack_90._4_4_ + -0x24,iVar7,auStack_190[0] & 0xff,
                                                puVar13 + 0xf5);
                                    }
                                    iVar7 = sym.sg_common_write(iVar19,iVar20,auStack_190,*(iVar19 + 0x68));
                                    uVar12 = iVar7;
                                    if (-1 < iVar7) {
                                        uVar12 = param_3;
                                    }
                                }
                                else {
                                    sym.sg_remove_request(iVar19,iVar20);
                                    uVar12 = 0xfffffffffffffff2;
                                }
                            }
                        }
                        goto code_r0x08003f84;
                    }
                }
                uVar12 = 0xfffffffffffffff2;
            }
            goto code_r0x08003f84;
        }
    }
    uVar12 = 0xfffffffffffffffa;
code_r0x08003f84:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar22 = __stack_chk_fail(uVar12);
    puVar13 = auVar22._8_8_;
    *extraout_x18 = 0x8004260;
    iVar19 = *(auVar22._0_8_ + 0xd8);
    if ((iVar19 == 0) || (iVar20 = *(iVar19 + 0x10), iVar20 == 0)) {
        uVar12 = 8;
    }
    else {
        if (((puVar13 != NULL) && (iVar19 + 0x18 != 0)) && (pcVar18 = *puVar13, pcVar18 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar18,0x8001a40);
            (*pcVar18)(auVar22._0_8_,iVar19 + 0x18,puVar13);
        }
        uVar11 = _raw_read_lock_irqsave(iVar19 + 0x30);
        piVar15 = iVar19 + 0x90;
        piVar17 = *piVar15;
        if (piVar17 == piVar15) {
            iVar7 = 0;
            uVar21 = 0;
        }
        else {
            uVar21 = 0;
            iVar7 = 0;
            do {
                if (uVar21 == 0) {
                    if (*(piVar17 + 0xf3) == '\x01') {
                        uVar21 = 0x41;
                        if (*(piVar17 + 0xf2) != '\0') {
                            uVar21 = 0;
                        }
                    }
                    else {
                        uVar21 = 0;
                    }
                }
                piVar17 = *piVar17;
                iVar7 = iVar7 + 1;
            } while (piVar17 != piVar15);
        }
        _raw_read_unlock_irqrestore(iVar19 + 0x30,uVar11);
        if (*(iVar20 + 0x70) == 0) {
            if (*(iVar19 + 0x1429) == '\0') {
                uVar1 = uVar21 | 0x104;
                if (iVar7 != 0) {
                    uVar1 = uVar21;
                }
                uVar12 = uVar1;
            }
            else {
                uVar1 = uVar21 | 0x104;
                if (0xf < iVar7) {
                    uVar1 = uVar21;
                }
                uVar12 = uVar1;
            }
        }
        else {
            uVar12 = uVar21 | 0x10;
        }
    }
    return uVar12;
}


// ===== sym.compat_ptr_ioctl.cfi_jt @ 0x08003340 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.compat_ptr_ioctl.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sg_ioctl.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003348 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004ba0)

uint64_t sym.sg_ioctl.09869e51822c5a12dd1be57416341cc4.cfi_jt
                   (uchar param_1 [16],ulong *param_2,uint32_t param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    char *arg2;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *extraout_x8;
    ulong *puVar11;
    uint32_t *extraout_x9;
    uint32_t extraout_w10;
    uint32_t uVar12;
    uint32_t *puVar13;
    ulong *in_x18;
    uint32_t *unaff_x19;
    uint32_t unaff_w20;
    ulong *unaff_x21;
    int64_t iVar14;
    int64_t *piVar15;
    uint64_t uVar16;
    char *pcVar17;
    int64_t *unaff_x26;
    int64_t *piVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = param_2[0x1b];
    if ((iVar14 == 0) || (unaff_x26 = *(iVar14 + 0x10), unaff_x26 == NULL)) {
code_r0x08005a40:
        param_3 = unaff_w20;
        param_2 = unaff_x21;
        param_4 = unaff_x19;
        uVar16 = 0xfffffffffffffffa;
        goto code_r0x08005a48;
    }
    uVar6 = *(param_2 + 8);
    if (param_3 < 0x2201) {
        switch(param_3) {
        case 0x1267:
            puVar11 = sp_el0;
            if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
                puVar13 = param_4 & (param_4 << 8) >> 8;
            }
            bVar4 = 0xfffffffffffffffb < puVar13;
            puVar13 = puVar13 + 1;
            uVar16 = 0;
            if (!bVar4 || puVar13 == NULL) {
                uVar16 = 0x7fffffffff;
            }
            if (bVar4) {
                puVar13 = 0xffffffffffffffff;
            }
            if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
                puVar13 = param_4;
                if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                    puVar13 = NULL;
                }
                uVar6 = *(*(*unaff_x26 + 8) + 0x4d4);
                if (0x3ffffe < uVar6) {
                    uVar6 = 0x3fffff;
                }
                uVar6 = uVar6 << 9;
                goto code_r0x08005dd8;
            }
            goto code_r0x08005c18;
        case 0x1268:
        case 0x1269:
        case 0x126a:
        case 0x126b:
        case 0x126c:
        case 0x126d:
        case 0x126e:
        case 0x126f:
        case 0x1270:
        case 0x1271:
        case 0x1272:
        case 0x1273:
            break;
        case 0x1274:
        case 0x1275:
        case 0x1276:
code_r0x08004764:
            uVar16 = 0xffffffffffffffe7;
            goto code_r0x08005a48;
        default:
            if (param_3 == 0xc0481273) goto code_r0x08004764;
            if (param_3 == 1) {
                if (unaff_x26[0xe] == 0) {
                    iVar7 = scsi_ioctl(*unaff_x26,0,*(param_2 + 0x44),1,param_4);
                    uVar16 = iVar7;
                    goto code_r0x08005bf0;
                }
                goto code_r0x08004714;
            }
        }
code_r0x08004778:
        if ((uVar6 & 3) == 2) {
code_r0x08004788:
            iVar5 = scsi_ioctl_block_when_processing_errors(*unaff_x26,param_3,uVar6 >> 0xb & 1);
            iVar7 = -0x203;
            if (iVar5 != 0) {
                iVar7 = iVar5;
            }
            uVar16 = iVar7;
            goto code_r0x08005bf0;
        }
        uVar16 = 0xffffffffffffffff;
        goto code_r0x08005a48;
    }
    if (0x88 < param_3 - 0x2201) {
        if ((param_3 - 0x5382 < 5) && ((1 << (param_3 - 0x5382 & 0x1f) & 0x19U) != 0)) goto code_r0x08004708;
        goto code_r0x08004778;
    }
    uVar16 = 0;
    uVar12 = _kmem_cache_alloc_trace;
    switch(param_3) {
    case 0x2201:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4) {
code_r0x080051d0:
            uVar16 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar6 = *puVar13;
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if (uVar6 < 0) {
            uVar16 = 0xfffffffffffffffb;
        }
        else {
            if (0x33333331 < uVar6) {
                uVar6 = 0x33333332;
            }
            uVar16 = 0;
            *(iVar14 + 0x68) = (uVar6 / 100) * 0xfa + ((uVar6 % 100) * 0xfa) / 100;
            *(iVar14 + 0x6c) = uVar6;
        }
        goto code_r0x08005a48;
    case 0x2202:
        uVar16 = *(iVar14 + 0x6c);
        goto code_r0x08005bf0;
    case 0x2203:
        if (unaff_x26[0xe] != 0) goto code_r0x08004714;
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = *(*(**unaff_x26 + 0xb8) + 0x148) >> 3 & 1;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    default:
        goto code_r0x08004778;
    case 0x2205:
    case 0x2284:
code_r0x08004708:
        if (unaff_x26[0xe] == 0) {
            uVar6 = *(param_2 + 8);
            goto code_r0x08004788;
        }
        goto code_r0x08004714;
    case 0x2270:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = *(iVar14 + 0x1429);
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x2271:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4)
        goto code_r0x080051d0;
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar16 = 0;
        *(iVar14 + 0x1429) = *puVar13 != 0;
        goto code_r0x08005a48;
    case 0x2272:
        uVar6 = *(*(*unaff_x26 + 8) + 0x4d4);
        puVar11 = sp_el0;
        if (0x3ffffe < uVar6) {
            uVar6 = 0x3fffff;
        }
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            uVar1 = *(iVar14 + 0x78);
            if (uVar6 * 0x200 <= *(iVar14 + 0x78)) {
                uVar1 = uVar6 * 0x200;
            }
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = uVar1;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x2275:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4) {
            uVar16 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar6 = *puVar13;
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if (uVar6 < 0) {
            uVar16 = 0xffffffffffffffea;
        }
        else {
            param_4 = iVar14 + 0x38;
            uVar12 = *(*(*unaff_x26 + 8) + 0x4d4);
            if (0x3ffffe < uVar12) {
                uVar12 = 0x3fffff;
            }
            param_3 = uVar6;
            if (uVar12 << 9 <= uVar6) {
                param_3 = uVar12 << 9;
            }
            mutex_lock(param_4);
            if (param_3 != *(iVar14 + 0x78)) {
                if ((*(iVar14 + 0x142c) != '\0') || (*(iVar14 + 0x142d) != '\0')) {
                    mutex_unlock(param_4);
                    uVar16 = 0xfffffffffffffff0;
                    goto code_r0x08005a48;
                }
                piVar15 = *(iVar14 + 0x80);
                param_2 = iVar14 + 0x70;
                if (((piVar15 != NULL) && (*(iVar14 + 0x74) != 0)) && (*(iVar14 + 0x8c) == '\0')) {
                    if ((*(iVar14 + 0x70) != 0) && (iVar10 = *piVar15, iVar10 != 0)) {
                        uVar16 = 1;
                        do {
                            __free_pages(iVar10,*(iVar14 + 0x88));
                            if (*(iVar14 + 0x70) <= uVar16) {
                                piVar15 = *(iVar14 + 0x80);
                                break;
                            }
                            piVar15 = *(iVar14 + 0x80);
                            iVar10 = piVar15[uVar16];
                            uVar16 = uVar16 + 1;
                        } while (iVar10 != 0);
                    }
                    kfree(piVar15);
                }
                *(iVar14 + 0x80) = 0;
                *(iVar14 + 0x88) = 0;
                *param_2 = 0;
                *(iVar14 + 0x78) = 0;
                sym.sg_build_reserve(iVar14,param_3);
            }
            mutex_unlock(param_4);
            uVar16 = 0;
        }
        goto code_r0x08005a48;
    case 0x2276:
        if (unaff_x26[0xe] == 0) {
            uStack_78 = 0;
            piVar15 = *unaff_x26;
            uStack_88 = CONCAT44(piVar15[0x13],piVar15[0x12]);
            uStack_90 = CONCAT44(*(piVar15 + 0x94),*(*piVar15 + 0x1fc));
            uStack_80 = CONCAT26(piVar15[0xe],CONCAT24(*(*piVar15 + 0x230),*(piVar15 + 0x16)));
            iVar14 = sym._copy_to_user(param_4,param_1,0x20);
            uVar16 = 0;
            if (iVar14 == 0) goto code_r0x08005bf0;
            uVar16 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        uVar16 = 0xffffffffffffffed;
        goto code_r0x08005bf0;
    case 0x2279:
        goto code_r0x08005a48;
    case 0x227a:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = 0;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x227b:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4)
        goto code_r0x080051d0;
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar16 = 0;
        *(iVar14 + 0x1428) = *puVar13 != 0;
        goto code_r0x08005a48;
    case 0x227c:
        iVar10 = iVar14 + 0x30;
        uVar8 = _raw_read_lock_irqsave(iVar10);
        for (piVar15 = *(iVar14 + 0x90); piVar15 != iVar14 + 0x90; piVar15 = *piVar15) {
            if ((*(piVar15 + 0xf3) == '\x01') && (*(piVar15 + 0xf2) == '\0')) {
                _raw_read_unlock_irqrestore(iVar10,uVar8);
                puVar11 = sp_el0;
                if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
                    puVar13 = param_4 & (param_4 << 8) >> 8;
                }
                bVar4 = 0xfffffffffffffffb < puVar13;
                puVar13 = puVar13 + 1;
                uVar16 = 0;
                if (!bVar4 || puVar13 == NULL) {
                    uVar16 = 0x7fffffffff;
                }
                if (bVar4) {
                    puVar13 = 0xffffffffffffffff;
                }
                if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
                    puVar13 = param_4;
                    if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                        puVar13 = NULL;
                    }
                    if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                        uVar16 = daif;
                        if ((uVar16 & 0x80) == 0) {
                            uVar2 = daif;
                            daif = uVar2 | 0xc0;
                        }
                        uVar2 = ttbr1_el1;
                        ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar11[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar16;
                    }
                    *puVar13 = *(piVar15 + 0xd);
                    if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
                    uVar16 = daif;
                    if ((uVar16 & 0x80) == 0) {
                        uVar2 = daif;
                        daif = uVar2 | 0xc0;
                    }
                    uVar2 = ttbr1_el1;
                    ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar2 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar16;
                    goto code_r0x08005bec;
                }
                goto code_r0x08005c18;
            }
        }
        _raw_read_unlock_irqrestore(iVar10,uVar8);
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = 0xffffffff;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x227d:
        uVar8 = _raw_read_lock_irqsave(iVar14 + 0x30);
        piVar18 = iVar14 + 0x90;
        piVar15 = *piVar18;
        if (piVar15 == piVar18) {
            uVar6 = 0;
        }
        else {
            uVar6 = 0;
            do {
                if ((*(piVar15 + 0xf3) == '\x01') && (*(piVar15 + 0xf2) == '\0')) {
                    uVar6 = uVar6 + 1;
                }
                piVar15 = *piVar15;
            } while (piVar15 != piVar18);
        }
        _raw_read_unlock_irqrestore(iVar14 + 0x30,uVar8);
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = uVar6;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x227e:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4)
        goto code_r0x080051d0;
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar16 = 0;
        *(unaff_x26 + 0x7c) = *puVar13;
        goto code_r0x08005a48;
    case 0x227f:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = *(unaff_x26 + 10);
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x2282:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = 0x7748;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x2283:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4)
        goto code_r0x080051d0;
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar6 = *puVar13;
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if (uVar6 < 0xfd) {
            uVar16 = 0;
            *(iVar14 + 0x142a) = uVar6 & (uVar6 >> 0x1f ^ 0xff);
            goto code_r0x08005a48;
        }
        goto code_r0x080051c8;
    case 0x2285:
        if (unaff_x26[0xe] == 0) {
            iVar7 = scsi_block_when_processing_errors(*unaff_x26);
            unaff_x19 = param_4;
            unaff_x21 = param_2;
            unaff_w20 = param_3;
            if (iVar7 != 0) {
                iVar7 = sym.sg_new_write(iVar14,param_2,param_4,0x58);
                if (iVar7 < 0) {
                    uVar16 = iVar7;
                    goto code_r0x08005bf0;
                }
                iVar10 = iVar14 + 0x30;
                uVar8 = _raw_read_lock_irqsave(iVar10);
                cVar3 = *0xf3;
                _raw_read_unlock_irqrestore(iVar10,uVar8);
                if (cVar3 == '\0') {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while( true ) {
                        iVar9 = prepare_to_wait_event(iVar14 + 0x18,&uStack_90,1);
                        uVar8 = _raw_read_lock_irqsave(iVar10);
                        cVar3 = *0xf3;
                        _raw_read_unlock_irqrestore(iVar10,uVar8);
                        if (cVar3 != '\0') break;
                        if (iVar9 != 0) {
                            uVar16 = iVar9;
                            goto code_r0x08005cf0;
                        }
                        schedule();
                    }
                    finish_wait(iVar14 + 0x18,&uStack_90);
                }
                uVar16 = 0;
code_r0x08005cf0:
                _raw_write_lock_irq(iVar10);
                if (*0xf3 == '\0') {
                    *0xf1 = 1;
                    _raw_write_unlock_irq(iVar10);
                    goto code_r0x08005bf0;
                }
                *0xf3 = '\x02';
                _raw_write_unlock_irq(iVar10);
                uVar6 = sym.sg_new_read(iVar14,param_4,0x58,0);
                uVar16 = uVar6 & (uVar6 << 0x20) >> 0x3f;
                goto code_r0x08005bf0;
            }
            goto code_r0x08005a40;
        }
code_r0x08004714:
        uVar16 = 0xffffffffffffffed;
        goto code_r0x08005a48;
    case 0x2286:
        arg2 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x180);
        if (arg2 != NULL) {
            uVar8 = _raw_read_lock_irqsave(iVar14 + 0x30);
            piVar15 = iVar14 + 0x90;
            piVar18 = *piVar15;
            if (piVar18 != piVar15) {
                pcVar17 = arg2;
                uVar16 = 0;
                do {
                    *pcVar17 = *(piVar18 + 0xf3) + '\x01';
                    pcVar17[3] = *(piVar18 + 0x79) & *(piVar18 + 0x7c) & *(piVar18 + 0x7e);
                    if (*(piVar18 + 0xf3) == '\0') {
                        uVar6 = jiffies_to_msecs(_cdev_alloc);
                        iVar7 = 0;
                        if (*(piVar18 + 0x84) <= uVar6) {
                            iVar7 = uVar6 - *(piVar18 + 0x84);
                        }
                    }
                    else {
                        iVar7 = *(piVar18 + 0x84);
                    }
                    *(pcVar17 + 0x10) = iVar7;
                    pcVar17[1] = *(piVar18 + 0xf1);
                    pcVar17[2] = *(piVar18 + 0xf2);
                    *(pcVar17 + 4) = piVar18[0xd];
                    *(pcVar17 + 8) = piVar18[0xe];
                    piVar18 = *piVar18;
                    if (piVar18 == piVar15) break;
                    bVar4 = uVar16 < 0xf;
                    pcVar17 = pcVar17 + 0x18;
                    uVar16 = uVar16 + 1;
                } while (bVar4);
            }
            noname_1 = _raw_read_unlock_irqrestore(iVar14 + 0x30,uVar8);
            puVar11 = sp_el0;
            if ((*puVar11 >> 0x16 & 1) == 0) {
                iVar7 = sym._copy_to_user(param_4,noname_1,0x180);
            }
            else {
                iVar7 = sym.put_compat_request_table(param_4,arg2);
            }
            uVar16 = 0;
            if (iVar7 != 0) {
                uVar16 = 0xfffffffffffffff2;
            }
            kfree(arg2);
            goto code_r0x08005bf0;
        }
code_r0x080051c8:
        uVar16 = 0xfffffffffffffff4;
        goto code_r0x08005a48;
    case 0x2287:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar13,~uVar16) || CARRY8(puVar13 + ~uVar16,bVar4)) && puVar13 != uVar16 + !bVar4)
        goto code_r0x080051d0;
        puVar13 = param_4;
        if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
            puVar13 = NULL;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        if ((uVar12 >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        uVar16 = 0;
        *(iVar14 + 0x142b) = *puVar13;
        goto code_r0x08005a48;
    case 0x2288:
        puVar11 = sp_el0;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & (param_4 << 8) >> 8;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar16 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar16 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar16) && !CARRY8(puVar13 + ~uVar16,bVar4) || puVar13 == uVar16 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & (param_4 << 8) >> 8 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = *(iVar14 + 0x142b);
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
        break;
    case 0x2289:
        puVar11 = sp_el0;
        uVar16 = (param_4 << 8) >> 8;
        if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (puVar13 = param_4, (*puVar11 >> 0x1a & 1) != 0)) {
            puVar13 = param_4 & uVar16;
        }
        bVar4 = 0xfffffffffffffffb < puVar13;
        puVar13 = puVar13 + 1;
        uVar2 = 0;
        if (!bVar4 || puVar13 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar4) {
            puVar13 = 0xffffffffffffffff;
        }
        if (!CARRY8(puVar13,~uVar2) && !CARRY8(puVar13 + ~uVar2,bVar4) || puVar13 == uVar2 + !bVar4) {
            puVar13 = param_4;
            if ((param_4 & uVar16 & 0xffffff8000000000) != 0) {
                puVar13 = NULL;
            }
            if ((uVar12 >> 0x18 & 1) == 0) {
                uVar16 = daif;
                if ((uVar16 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar11[1];
                InstructionSynchronizationBarrier();
                daif = uVar16;
            }
            *puVar13 = *unaff_x26 != 0;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
            goto code_r0x08005bec;
        }
    }
code_r0x08005c18:
    uVar16 = 0xfffffffffffffff2;
code_r0x08005a48:
    while (iVar14 = sp_el0, *(iVar14 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        puVar11 = extraout_x8;
        puVar13 = extraout_x9;
        uVar6 = extraout_w10;
code_r0x08005dd8:
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
        *puVar13 = uVar6;
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
code_r0x08005bec:
        uVar16 = 0;
code_r0x08005bf0:
        if (uVar16 == -0x203) {
            iVar7 = scsi_ioctl(*unaff_x26,0,*(param_2 + 0x44),param_3,param_4);
            uVar16 = iVar7;
        }
    }
    return uVar16;
}


// ===== sym.sg_release.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003350 (size 8) =====

ulong sym.sg_release.09869e51822c5a12dd1be57416341cc4.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(param_2 + 0xd8);
    if ((piVar9 == NULL) || (puVar10 = piVar9[2], puVar10 == NULL)) {
        return 0xfffffffa;
    }
    mutex_lock(puVar10 + 4);
    scsi_autopm_put_device(*puVar10);
    piVar7 = piVar9 + 0x286;
    Hint_Prefetch(piVar7,2,0,1);
    do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
            *piVar7 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        iVar6 = piVar9[2];
        uVar5 = _raw_write_lock_irqsave(iVar6 + 0x68);
        uVar4 = __list_del_entry_valid(piVar9);
        if ((uVar4 & 1) != 0) {
            iVar8 = *piVar9;
            piVar7 = piVar9[1];
            *(iVar8 + 8) = piVar7;
            *piVar7 = iVar8;
        }
        *piVar9 = -0x2152ffffffffff00;
        piVar9[1] = -0x2152fffffffffede;
        _raw_write_unlock_irqrestore(iVar6 + 0x68,uVar5);
        piVar9[0x287] = 0xfffffffe0;
        piVar9[0x288] = piVar9 + 0x288;
        piVar9[0x289] = piVar9 + 0x288;
        piVar9[0x28a] = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        queue_work_on(0x20,__raw_write_lock_irqsave,piVar9 + 0x287);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(piVar7,3);
    }
    iVar1 = *(puVar10 + 0xf);
    *(puVar10 + 0xf) = iVar1 + -1;
    if (*(puVar10 + 0x74) == '\0') {
        if (iVar1 + -1 != 0) goto code_r0x080069c0;
        uVar5 = 1;
    }
    else {
        uVar5 = 0;
        *(puVar10 + 0x74) = 0;
    }
    __wake_up(puVar10 + 1,1,uVar5,0);
code_r0x080069c0:
    mutex_unlock(puVar10 + 4);
    return 0;
}


// ===== sym.sg_open.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003358 (size 8) =====

uint64_t sym.sg_open.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *arg1;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(param_1 + 0x4c);
    uVar2 = *(param_2 + 0x40);
    nonseekable_open();
    if (((uVar2 >> 7 & 1) != 0) && ((uVar2 & 3) == 0)) {
        uVar9 = 0xffffffff;
        goto code_r0x08006818;
    }
    arg1 = sym.sg_get_dev(uVar6 & 0xfffff);
    if (0xfffffffffffff000 < arg1) {
        uVar9 = arg1 & 0xffffffff;
        goto code_r0x08006818;
    }
    uVar7 = scsi_device_get(*arg1);
    uVar9 = uVar7 & 0xffffffff;
    if (uVar7 == 0) {
        uVar7 = scsi_autopm_get_device(*arg1);
        uVar9 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            if ((uVar2 >> 0xb & 1) == 0) {
                iVar5 = scsi_block_when_processing_errors(*arg1);
                if (iVar5 != 0) {
                    mutex_lock(arg1 + 4);
                    uVar6 = sym.open_wait(arg1);
                    if (uVar6 == 0) {
                        if ((uVar2 >> 7 & 1) != 0) goto code_r0x08006780;
                        goto code_r0x08006788;
                    }
                    uVar9 = uVar6;
                    goto code_r0x080066f8;
                }
                uVar9 = 0xfffffffa;
            }
            else {
                mutex_lock(arg1 + 4);
                if ((uVar2 >> 7 & 1) == 0) {
                    if (*(arg1 + 0x74) != '\0') {
code_r0x080066f4:
                        uVar9 = 0xfffffff0;
                        goto code_r0x080066f8;
                    }
                }
                else {
                    if (0 < arg1[0xf]) goto code_r0x080066f4;
code_r0x08006780:
                    *(arg1 + 0x74) = 1;
                }
code_r0x08006788:
                if (arg1[0xf] < 1) {
                    *(arg1 + 0x7c) = 0;
                    *(arg1 + 10) = *(*(*arg1 + 8) + 0x510);
                }
                uVar9 = sym.sg_add_sfp(arg1);
                if (uVar9 < 0xfffffffffffff001) {
                    *(param_2 + 0xd8) = uVar9;
                    *(arg1 + 0xf) = arg1[0xf] + 1;
                    mutex_unlock(arg1 + 4);
                    uVar9 = 0;
                    goto code_r0x08006718;
                }
                if ((uVar2 >> 7 & 1) != 0) {
                    *(arg1 + 0x74) = 0;
                    __wake_up(arg1 + 1,1,1,0);
                }
code_r0x080066f8:
                mutex_unlock(arg1 + 4);
            }
            scsi_autopm_put_device(*arg1);
        }
        scsi_device_put(*arg1);
    }
code_r0x08006718:
    piVar1 = arg1 + 0x15;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar5 == 1) {
        DataMemoryBarrier(2,1);
        uVar8 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(arg1 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar8);
        kfree(arg1);
    }
    else if (iVar5 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
code_r0x08006818:
    return uVar9 & 0xffffffff;
}


// ===== sym.sg_rq_end_io_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003360 (size 8) =====

void sym.sg_rq_end_io_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + -0xf8);
    sym.sg_finish_rem_req(param_1 + -0x108);
    sym.sg_remove_request(arg1,param_1 + -0x108);
    piVar7 = arg1 + 0x286;
    Hint_Prefetch(piVar7,2,0,1);
    do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
            *piVar7 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        iVar6 = arg1[2];
        uVar4 = _raw_write_lock_irqsave(iVar6 + 0x68);
        uVar5 = __list_del_entry_valid(arg1);
        if ((uVar5 & 1) != 0) {
            iVar8 = *arg1;
            piVar7 = arg1[1];
            *(iVar8 + 8) = piVar7;
            *piVar7 = iVar8;
        }
        *arg1 = -0x2152ffffffffff00;
        arg1[1] = -0x2152fffffffffede;
        _raw_write_unlock_irqrestore(iVar6 + 0x68,uVar4);
        arg1[0x287] = 0xfffffffe0;
        arg1[0x288] = arg1 + 0x288;
        arg1[0x289] = arg1 + 0x288;
        arg1[0x28a] = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        queue_work_on(0x20,__raw_write_lock_irqsave,arg1 + 0x287);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(piVar7,3);
    }
    return;
}


// ===== sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003368 (size 8) =====

void sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *puVar10;
    int *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(param_1 + -0x1428);
    uVar6 = _raw_write_lock_irqsave(param_1 + -0x1408);
    puVar1 = param_1 + -0x13a8;
    puVar8 = *puVar1;
    while (puVar1 != puVar8) {
        piVar12 = *puVar1;
        sym.sg_finish_rem_req(piVar12);
        uVar7 = __list_del_entry_valid(piVar12);
        if ((uVar7 & 1) != 0) {
            iVar9 = *piVar12;
            piVar2 = piVar12[1];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        piVar12[2] = 0;
        *piVar12 = -0x2152ffffffffff00;
        piVar12[1] = -0x2152fffffffffede;
        puVar8 = *puVar1;
    }
    _raw_write_unlock_irqrestore(param_1 + -0x1408,uVar6);
    if (*(param_1 + -0x13c0) != 0) {
        piVar12 = *(param_1 + -0x13b8);
        if (((piVar12 != NULL) && (*(param_1 + -0x13c4) != 0)) && (*(param_1 + -0x13ac) == '\0')) {
            if ((*(param_1 + -0x13c8) != 0) && (iVar9 = *piVar12, iVar9 != 0)) {
                uVar7 = 1;
                do {
                    __free_pages(iVar9,*(param_1 + -0x13b0));
                    if (*(param_1 + -0x13c8) <= uVar7) {
                        piVar12 = *(param_1 + -0x13b8);
                        break;
                    }
                    piVar12 = *(param_1 + -0x13b8);
                    iVar9 = piVar12[uVar7];
                    uVar7 = uVar7 + 1;
                } while (iVar9 != 0);
            }
            kfree(piVar12);
        }
        *(param_1 + -0x13b8) = 0;
        *(param_1 + -0x13b0) = 0;
        *(param_1 + -0x13c8) = 0;
        *(param_1 + -0x13c0) = 0;
    }
    kfree(param_1 + -0x1438);
    piVar11 = puVar10 + 0x15;
    scsi_device_put(*puVar10);
    Hint_Prefetch(piVar11,2,0,1);
    do {
        iVar3 = *piVar11;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
            *piVar11 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        uVar6 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(puVar10 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar6);
        kfree(puVar10);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar11,3);
    }
    module_put(obj.__this_module);
    return;
}


// ===== sym.sg_rq_end_io.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003370 (size 8) =====

void sym.sg_rq_end_io.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong extraout_x9;
    ulong *in_x18;
    int *piVar14;
    ulong uVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    iVar16 = *(param_1 + 0x120);
    if (*(iVar16 + 0xf3) != '\0') {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x80084a4);
        (*pcVar7)();
    }
    iVar17 = *(iVar16 + 0x10);
    if (iVar17 != 0) {
        piVar18 = *(iVar17 + 0x10);
        if (piVar18[0xe] != 0) {
            _printk(0x8001f6a,"sg_rq_end_io");
        }
        uVar15 = *(param_1 + 0x160);
        uVar3 = *(param_1 + 0x14c);
        *(iVar16 + 0x80) = *(param_1 + 0x154);
        uVar8 = jiffies_to_msecs(_cdev_alloc);
        iVar4 = 0;
        if (*(iVar16 + 0x84) <= uVar8) {
            iVar4 = uVar8 - *(iVar16 + 0x84);
        }
        *(iVar16 + 0x84) = iVar4;
        if (uVar3 != 0) {
            *(iVar16 + 0x78) = uVar3;
            *(iVar16 + 0x7a) = 0;
            *(iVar16 + 0x79) = uVar3 >> 1 & 0x7f;
            *(iVar16 + 0x7c) = uVar3 >> 0x10 & 0xff;
            *(iVar16 + 0x7e) = uVar3 >> 0x18;
            uStack_60 = 0;
            if ((*(piVar18 + 0x7c) != '\0') && (((uVar3 & 0xfe) >> 1 | 0x10) == 0x11)) {
                __scsi_print_sense(*piVar18,"sg_rq_end_io",uVar15,0x60);
            }
            if ((((uVar3 >> 0x18 != 0) && (uVar9 = scsi_normalize_sense(uVar15,0x60,&uStack_60), (uVar9 & 1) != 0))
                && ((0x6f < uStack_60 & uStack_60) == 0)) && (uStack_60._1_1_ == '\x06')) {
                iVar12 = *piVar18;
                if ((*(iVar12 + 0x144) & 1) != 0) {
                    *(iVar12 + 0x14a) = *(iVar12 + 0x148) >> 0x10;
                    *(iVar12 + 0x148) = *(iVar12 + 0x148);
                    *(iVar12 + 0x144) = *(iVar12 + 0x144) | 2;
                }
            }
        }
        if (*(param_1 + 0x150) != 0) {
            puVar13 = *(param_1 + 0x160);
            uVar1 = puVar13[3];
            uVar15 = *puVar13;
            uVar2 = puVar13[1];
            *(iVar16 + 0xa0) = puVar13[2];
            *(iVar16 + 0xa8) = uVar1;
            *(iVar16 + 0x90) = uVar15;
            *(iVar16 + 0x98) = uVar2;
            uVar1 = puVar13[7];
            uVar15 = puVar13[4];
            uVar2 = puVar13[5];
            *(iVar16 + 0xc0) = puVar13[6];
            *(iVar16 + 200) = uVar1;
            *(iVar16 + 0xb0) = uVar15;
            *(iVar16 + 0xb8) = uVar2;
            uVar1 = puVar13[0xb];
            uVar15 = puVar13[8];
            uVar2 = puVar13[9];
            *(iVar16 + 0xe0) = puVar13[10];
            *(iVar16 + 0xe8) = uVar1;
            *(iVar16 + 0xd0) = uVar15;
            *(iVar16 + 0xd8) = uVar2;
        }
        *(iVar16 + 0xf8) = 0;
        if (*(param_1 + 0x140) != param_1 + 0x130) {
            kfree();
        }
        blk_put_request(param_1);
        piVar14 = iVar17 + 0x30;
        uVar15 = _raw_write_lock_irqsave(piVar14);
        if (*(iVar16 + 0xf1) != '\0') {
            if (*(iVar17 + 0x142b) == '\0') {
                *(iVar16 + 0xf3) = 0;
                _raw_write_unlock_irqrestore(piVar14,uVar15);
                piVar10 = iVar16 + 0x108;
                *(iVar16 + 0x108) = 0xfffffffe0;
                *(iVar16 + 0x110) = iVar16 + 0x110;
                *(iVar16 + 0x118) = iVar16 + 0x110;
                uVar15 = __raw_write_lock_irqsave;
                *(iVar16 + 0x120) = sym.sg_rq_end_io_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                goto code_r0x08008498;
            }
            *(iVar16 + 0xf2) = 0;
        }
        *(iVar16 + 0xf3) = 1;
        _raw_write_unlock_irqrestore(piVar14,uVar15);
        __wake_up(iVar17 + 0x18,1,1,0);
        kill_fasync(iVar17 + 0xa0,0x1d,1);
        piVar14 = iVar17 + 0x1430;
        uVar15 = 1;
        while( true ) {
            Hint_Prefetch(piVar14,2,0,1);
            do {
                iVar4 = *piVar14;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar14,0x10);
                if (bVar6) {
                    *piVar14 = iVar4 - uVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                piVar18 = piVar14 + -0x50c;
                iVar16 = *(piVar14 + -0x508);
                uVar15 = _raw_write_lock_irqsave(iVar16 + 0x68);
                uVar9 = __list_del_entry_valid(piVar18);
                if ((uVar9 & 1) != 0) {
                    iVar17 = *piVar18;
                    piVar11 = *(piVar14 + -0x50a);
                    *(iVar17 + 8) = piVar11;
                    *piVar11 = iVar17;
                }
                *piVar18 = -0x2152ffffffffff00;
                piVar14[-0x50a] = 0x122;
                piVar14[-0x509] = -0x21530000;
                _raw_write_unlock_irqrestore(iVar16 + 0x68,uVar15);
                piVar10 = piVar14 + 2;
                piVar10[0] = -0x20;
                piVar10[1] = 0xf;
                *(piVar14 + 4) = piVar14 + 4;
                *(piVar14 + 6) = piVar14 + 4;
                *(piVar14 + 8) = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                uVar15 = __raw_write_lock_irqsave;
                piVar14 = piVar10;
code_r0x08008498:
                queue_work_on(0x20,uVar15,piVar10);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar14,3);
            }
            iVar16 = sp_el0;
            if (*(iVar16 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
            uVar15 = extraout_x9;
        }
        return;
    }
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x80084ac);
    (*pcVar7)();
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08003378 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = param_1 + -0x1430;
    iVar1 = *(param_1 + -0x1420) + 0x68;
    uVar3 = _raw_write_lock_irqsave(iVar1);
    uVar4 = __list_del_entry_valid(piVar2);
    if ((uVar4 & 1) != 0) {
        iVar6 = *piVar2;
        piVar5 = *(param_1 + -0x1428);
        *(iVar6 + 8) = piVar5;
        *piVar5 = iVar6;
    }
    *piVar2 = -0x2152ffffffffff00;
    *(param_1 + -0x1428) = 0xdead000000000122;
    _raw_write_unlock_irqrestore(iVar1,uVar3);
    *(param_1 + 8) = 0xfffffffe0;
    *(param_1 + 0x10) = param_1 + 0x10;
    *(param_1 + 0x18) = param_1 + 0x10;
    *(param_1 + 0x20) = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
    queue_work_on(0x20,__raw_write_lock_irqsave,param_1 + 8);
    return;
}


// ===== sym.sg_device_destroy.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003380 (size 8) =====

void sym.sg_device_destroy.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
    idr_remove(obj.sg_index_idr,*(param_1 + -0x54));
    _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar1);
    kfree(param_1 + -0xa8);
    return;
}


// ===== sym.sg_poll.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003388 (size 8) =====

uint32_t sym.sg_poll.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int iVar6;
    code *pcVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0xd8);
    if ((iVar8 == 0) || (iVar9 = *(iVar8 + 0x10), iVar9 == 0)) {
        uVar1 = 8;
    }
    else {
        if (((param_2 != NULL) && (iVar8 + 0x18 != 0)) && (pcVar7 = *param_2, pcVar7 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar7,0x8001a40);
            (*pcVar7)(param_1,iVar8 + 0x18,param_2);
        }
        uVar2 = _raw_read_lock_irqsave(iVar8 + 0x30);
        piVar3 = iVar8 + 0x90;
        piVar4 = *piVar3;
        if (piVar4 == piVar3) {
            iVar6 = 0;
            uVar5 = 0;
        }
        else {
            uVar5 = 0;
            iVar6 = 0;
            do {
                if (uVar5 == 0) {
                    if (*(piVar4 + 0xf3) == '\x01') {
                        uVar5 = 0x41;
                        if (*(piVar4 + 0xf2) != '\0') {
                            uVar5 = 0;
                        }
                    }
                    else {
                        uVar5 = 0;
                    }
                }
                piVar4 = *piVar4;
                iVar6 = iVar6 + 1;
            } while (piVar4 != piVar3);
        }
        _raw_read_unlock_irqrestore(iVar8 + 0x30,uVar2);
        if (*(iVar9 + 0x70) == 0) {
            if (*(iVar8 + 0x1429) == '\0') {
                uVar1 = uVar5 | 0x104;
                if (iVar6 != 0) {
                    uVar1 = uVar5;
                }
            }
            else {
                uVar1 = uVar5 | 0x104;
                if (0xf < iVar6) {
                    uVar1 = uVar5;
                }
            }
        }
        else {
            uVar1 = uVar5 | 0x10;
        }
    }
    return uVar1;
}


// ===== sym.sg_add_device.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003390 (size 8) =====

uint64_t sym.sg_add_device.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x60);
    iVar3 = cdev_alloc();
    if (iVar3 == 0) {
        _printk(0x8001f51,"sg_add_device");
        piVar4 = 0xfffffff4;
        goto code_r0x08003678;
    }
    *(iVar3 + 0x60) = obj.__this_module;
    *(iVar3 + 0x68) = obj.sg_fops;
    iVar8 = iVar7 + -0x1b0;
    iVar10 = *(iVar7 + -0x1a8);
    piVar4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0xb0);
    if (piVar4 == NULL) {
        sdev_prefix_printk(0x8001dce,iVar8,0,"%s: kmalloc Sg_device failure\n","sg_alloc");
        piVar4 = 0xfffffffffffffff4;
code_r0x080036e0:
        _printk(0x8001ff2,"sg_add_device");
    }
    else {
        idr_preload(0xcc0);
        uVar5 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        iVar2 = idr_alloc(obj.sg_index_idr,piVar4,0,0x8000,0x800);
        if (iVar2 < 0) {
            if (iVar2 == -0x1c) {
                sdev_prefix_printk(0x8001dce,iVar8,0,"Unable to attach sg device type=%d, minor number exceeds %d\n"
                                   ,*(iVar7 + -0x100),0x7fff);
                iVar2 = -0x13;
            }
            else {
                sdev_prefix_printk(0x8001dce,iVar8,0,"%s: idr allocation Sg_device failure: %d\n","sg_alloc",iVar2)
                ;
            }
        }
        else {
            sprintf(piVar4 + 0x7d,"sg%d",iVar2);
            *piVar4 = iVar8;
            __mutex_init(piVar4 + 4,"&sdp->open_rel_lock",obj.sg_alloc.__key);
            piVar4[0xb] = piVar4 + 0xb;
            piVar4[0xc] = piVar4 + 0xb;
            __init_waitqueue_head(piVar4 + 1,"&sdp->open_wait",obj.sg_alloc.__key);
            *(piVar4 + 0xe) = 0;
            piVar4[0xd] = 0;
            *(piVar4 + 10) = *(iVar10 + 0x510);
            *(piVar4 + 0x54) = iVar2;
            iVar2 = 0;
            *(piVar4 + 0x15) = 1;
        }
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar5);
        uVar5 = tpidr_el1;
        iVar1 = sp_el0;
        iVar10 = *(iVar1 + 0x10) + -1;
        *(iVar1 + 0x10) = iVar10;
        if ((iVar10 == 0) || (*(iVar1 + 0x10) == 0)) {
            preempt_schedule();
        }
        if (iVar2 != 0) {
            kfree(piVar4);
            piVar4 = iVar2;
        }
        if (0xfffffffffffff000 < piVar4) goto code_r0x080036e0;
        uVar6 = cdev_add(iVar3,*(piVar4 + 0x54) | 0x1500000,1);
        uVar9 = uVar6 & 0xffffffff;
        if (uVar6 == 0) {
            piVar4[0x14] = iVar3;
            if (obj.def_reserved_size == 0x1) {
                uVar9 = device_create(*0x8001000,*(param_1 + 0x60),*(piVar4 + 0x54) | 0x1500000,piVar4,0x8001e8a,
                                      piVar4 + 0x7d);
                if (0xfffffffffffff000 < uVar9) {
                    _printk(0x8001d01,"sg_add_device");
                    goto code_r0x080035a0;
                }
                iVar2 = sysfs_create_link(iVar7,uVar9,"generic");
                if (iVar2 != 0) {
                    _printk(0x8002036,"sg_add_device",*(piVar4 + 0x54));
                }
            }
            else {
                _printk(0x8001f9d,"sg_add_device");
            }
            sdev_prefix_printk(0x8001de5,iVar8,0,"Attached scsi generic sg%d type %d\n",*(piVar4 + 0x54),
                               *(iVar7 + -0x100));
            *(param_1 + 0x98) = piVar4;
            piVar4 = NULL;
            goto code_r0x08003678;
        }
code_r0x080035a0:
        uVar5 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(piVar4 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar5);
        kfree(piVar4);
        piVar4 = uVar9 & 0xffffffff;
    }
    cdev_del(iVar3);
code_r0x08003678:
    return piVar4 & 0xffffffff;
}


// ===== sym.sg_remove_device.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x08003398 (size 8) =====

void sym.sg_remove_device.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x98);
    if (iVar6 != 0) {
        uVar7 = *(param_1 + 0x60);
        piVar1 = iVar6 + 0x70;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar2 + 1 < 2) {
            uVar5 = _raw_read_lock_irqsave(iVar6 + 0x68);
            for (piVar8 = *(iVar6 + 0x58); piVar8 != iVar6 + 0x58; piVar8 = *piVar8) {
                __wake_up(piVar8 + 3,1,0,0);
                kill_fasync(piVar8 + 0x14,0x1d,6);
            }
            __wake_up(iVar6 + 8,1,0,0);
            _raw_read_unlock_irqrestore(iVar6 + 0x68,uVar5);
            sysfs_remove_link(uVar7,"generic");
            device_destroy(*0x8001000,*(iVar6 + 0x54) | 0x1500000);
            cdev_del(*(iVar6 + 0xa0));
            piVar1 = iVar6 + 0xa8;
            *(iVar6 + 0xa0) = 0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                uVar7 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
                idr_remove(obj.sg_index_idr,*(iVar6 + 0x54));
                _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar7);
                kfree(iVar6);
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
        }
    }
    return;
}


// ===== sym.no_llseek.cfi_jt @ 0x080033a0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sg_mmap.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x080033a8 (size 8) =====

uint sym.sg_mmap.09869e51822c5a12dd1be57416341cc4.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0xfffffffa;
    if ((param_1 != 0) && (param_2 != NULL)) {
        iVar4 = *(param_1 + 0xd8);
        if (iVar4 == 0) {
            uVar3 = 0xfffffffa;
        }
        else if (param_2[0x13] == 0) {
            iVar1 = *param_2;
            iVar2 = param_2[1];
            mutex_lock(iVar4 + 0x38);
            if (*(iVar4 + 0x78) < iVar2 - iVar1) {
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = 0;
                *(iVar4 + 0x142c) = 1;
                param_2[0x15] = iVar4;
                param_2[10] = param_2[10] | 0x4044000;
                param_2[0x12] = obj.sg_mmap_vm_ops;
            }
            mutex_unlock(iVar4 + 0x38);
        }
        else {
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.sg_vma_fault.09869e51822c5a12dd1be57416341cc4.cfi_jt @ 0x080033b0 (size 8) =====

ulong sym.sg_vma_fault.09869e51822c5a12dd1be57416341cc4.cfi_jt(ulong *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    
    puVar11 = *param_1;
    if ((((puVar11 != NULL) && (uVar6 = puVar11[0x15], uVar6 != 0)) && (param_1[2] << 0xc < *(uVar6 + 0x78))) &&
       (*(uVar6 + 0x70) != 0)) {
        iVar7 = 0;
        uVar10 = *puVar11;
        uVar9 = 1 << (*(uVar6 + 0x88) + 0xcU & 0x1f);
        uVar8 = param_1[2] << 0xc;
        do {
            uVar5 = puVar11[1] - uVar10;
            if (puVar11[1] < uVar10 || uVar5 == 0) {
                return 2;
            }
            if (uVar9 <= uVar5) {
                uVar5 = uVar9;
            }
            if (uVar8 < uVar5) {
                iVar7 = *(*(uVar6 + 0x80) + iVar7) + (uVar8 >> 6 & 0x3ffffffffffffc0);
                iVar2 = iVar7;
                if ((*(iVar7 + 8) & 1) != 0) {
                    iVar2 = *(iVar7 + 8) - 1;
                }
                piVar1 = iVar2 + 0x34;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                param_1[0xb] = iVar7;
                return 0;
            }
            uVar10 = uVar5 + uVar10;
            iVar7 = iVar7 + 8;
            uVar8 = uVar8 - uVar5;
        } while (*(uVar6 + 0x70) * 8 != iVar7);
    }
    return 2;
}


// ===== sym.sg_add_device @ 0x080033b8 (size 920) =====

uint64_t sym.sg_add_device(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x60);
    iVar3 = cdev_alloc();
    if (iVar3 == 0) {
        _printk(0x8001f51,"sg_add_device");
        piVar4 = 0xfffffff4;
        goto code_r0x08003678;
    }
    *(iVar3 + 0x60) = obj.__this_module;
    *(iVar3 + 0x68) = obj.sg_fops;
    iVar8 = iVar7 + -0x1b0;
    iVar10 = *(iVar7 + -0x1a8);
    piVar4 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0xb0);
    if (piVar4 == NULL) {
        sdev_prefix_printk(0x8001dce,iVar8,0,"%s: kmalloc Sg_device failure\n","sg_alloc");
        piVar4 = 0xfffffffffffffff4;
code_r0x080036e0:
        _printk(0x8001ff2,"sg_add_device");
    }
    else {
        idr_preload(0xcc0);
        uVar5 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        iVar2 = idr_alloc(obj.sg_index_idr,piVar4,0,0x8000,0x800);
        if (iVar2 < 0) {
            if (iVar2 == -0x1c) {
                sdev_prefix_printk(0x8001dce,iVar8,0,"Unable to attach sg device type=%d, minor number exceeds %d\n"
                                   ,*(iVar7 + -0x100),0x7fff);
                iVar2 = -0x13;
            }
            else {
                sdev_prefix_printk(0x8001dce,iVar8,0,"%s: idr allocation Sg_device failure: %d\n","sg_alloc",iVar2)
                ;
            }
        }
        else {
            sprintf(piVar4 + 0x7d,"sg%d",iVar2);
            *piVar4 = iVar8;
            __mutex_init(piVar4 + 4,"&sdp->open_rel_lock",obj.sg_alloc.__key);
            piVar4[0xb] = piVar4 + 0xb;
            piVar4[0xc] = piVar4 + 0xb;
            __init_waitqueue_head(piVar4 + 1,"&sdp->open_wait",obj.sg_alloc.__key);
            *(piVar4 + 0xe) = 0;
            piVar4[0xd] = 0;
            *(piVar4 + 10) = *(iVar10 + 0x510);
            *(piVar4 + 0x54) = iVar2;
            iVar2 = 0;
            *(piVar4 + 0x15) = 1;
        }
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar5);
        uVar5 = tpidr_el1;
        iVar1 = sp_el0;
        iVar10 = *(iVar1 + 0x10) + -1;
        *(iVar1 + 0x10) = iVar10;
        if ((iVar10 == 0) || (*(iVar1 + 0x10) == 0)) {
            preempt_schedule();
        }
        if (iVar2 != 0) {
            kfree(piVar4);
            piVar4 = iVar2;
        }
        if (0xfffffffffffff000 < piVar4) goto code_r0x080036e0;
        uVar6 = cdev_add(iVar3,*(piVar4 + 0x54) | 0x1500000,1);
        uVar9 = uVar6 & 0xffffffff;
        if (uVar6 == 0) {
            piVar4[0x14] = iVar3;
            if (obj.def_reserved_size == 0x1) {
                uVar9 = device_create(*0x8001000,*(arg1 + 0x60),*(piVar4 + 0x54) | 0x1500000,piVar4,0x8001e8a,
                                      piVar4 + 0x7d);
                if (0xfffffffffffff000 < uVar9) {
                    _printk(0x8001d01,"sg_add_device");
                    goto code_r0x080035a0;
                }
                iVar2 = sysfs_create_link(iVar7,uVar9,"generic");
                if (iVar2 != 0) {
                    _printk(0x8002036,"sg_add_device",*(piVar4 + 0x54));
                }
            }
            else {
                _printk(0x8001f9d,"sg_add_device");
            }
            sdev_prefix_printk(0x8001de5,iVar8,0,"Attached scsi generic sg%d type %d\n",*(piVar4 + 0x54),
                               *(iVar7 + -0x100));
            *(arg1 + 0x98) = piVar4;
            piVar4 = NULL;
            goto code_r0x08003678;
        }
code_r0x080035a0:
        uVar5 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(piVar4 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar5);
        kfree(piVar4);
        piVar4 = uVar9 & 0xffffffff;
    }
    cdev_del(iVar3);
code_r0x08003678:
    return piVar4 & 0xffffffff;
}


// ===== sym.sg_remove_device @ 0x0800375c (size 472) =====

void sym.sg_remove_device(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x98);
    if (iVar6 != 0) {
        uVar7 = *(arg1 + 0x60);
        piVar1 = iVar6 + 0x70;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar2 + 1 < 2) {
            uVar5 = _raw_read_lock_irqsave(iVar6 + 0x68);
            for (piVar8 = *(iVar6 + 0x58); piVar8 != iVar6 + 0x58; piVar8 = *piVar8) {
                __wake_up(piVar8 + 3,1,0,0);
                kill_fasync(piVar8 + 0x14,0x1d,6);
            }
            __wake_up(iVar6 + 8,1,0,0);
            _raw_read_unlock_irqrestore(iVar6 + 0x68,uVar5);
            sysfs_remove_link(uVar7,"generic");
            device_destroy(*0x8001000,*(iVar6 + 0x54) | 0x1500000);
            cdev_del(*(iVar6 + 0xa0));
            piVar1 = iVar6 + 0xa8;
            *(iVar6 + 0xa0) = 0;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                uVar7 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
                idr_remove(obj.sg_index_idr,*(iVar6 + 0x54));
                _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar7);
                kfree(iVar6);
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(piVar1,3);
            }
        }
    }
    return;
}


// ===== sym.sg_read @ 0x08003934 (size 9856) =====

uint64_t sym.sg_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *arg2_00;
    uint64_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    uint *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    ulong *puVar15;
    int iVar16;
    ulong *puVar17;
    int64_t *piVar18;
    uint8_t *puVar19;
    int64_t *piVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar21;
    uint64_t unaff_x20;
    int64_t unaff_x21;
    ulong *unaff_x22;
    code *pcVar22;
    uint *unaff_x23;
    int64_t iVar23;
    int64_t unaff_x24;
    int64_t iVar24;
    uint32_t uVar25;
    int64_t unaff_x25;
    int64_t unaff_x26;
    ulong *unaff_x28;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar26 [16];
    uint64_t auStack_230 [31];
    uint uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    uint uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    ulong uStack_f8;
    ulong *puStack_f0;
    int64_t iStack_e0;
    int64_t iStack_d8;
    int64_t iStack_d0;
    uint *puStack_c8;
    ulong *puStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar23 = sp_el0;
    iVar24 = sp_el0;
    iStack_68 = *(iVar23 + 0x5e0);
    iStack_6c = -1;
    if (*(arg1 + 0xa0) == *(iVar24 + 0x790)) {
        iVar23 = *(arg1 + 0xd8);
        uVar14 = arg3;
        if ((iVar23 == 0) || (unaff_x26 = *(iVar23 + 0x10), unaff_x26 == 0)) {
            uVar21 = 0xfffffffffffffffa;
        }
        else {
            unaff_x20 = arg3;
            unaff_x21 = arg2;
            if ((*(iVar23 + 0x1428) == '\0') ||
               (iVar7 = sym.get_sg_io_pack_id(&stack0xffffffffffffff94,arg2,arg3), iVar7 == 0)) {
                iVar7 = iStack_6c;
                unaff_x23 = iVar23 + 0x30;
                uVar13 = _raw_write_lock_irqsave(unaff_x23);
                unaff_x28 = iVar23 + 0x90;
                for (unaff_x22 = *unaff_x28; unaff_x22 != unaff_x28; unaff_x22 = *unaff_x22) {
                    if ((*(unaff_x22 + 0xf2) == '\0') &&
                       (((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)) && (*(unaff_x22 + 0xf3) == '\x01')))) {
                        *(unaff_x22 + 0xf3) = 2;
                        _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                        if (unaff_x22 == NULL) goto code_r0x08003a88;
                        goto code_r0x08003c18;
                    }
                }
                _raw_write_unlock_irqrestore(unaff_x23,uVar13);
code_r0x08003a88:
                if ((*(arg1 + 0x41) >> 3 & 1) == 0) {
                    uVar13 = _raw_write_lock_irqsave(unaff_x23);
                    unaff_x22 = *unaff_x28;
                    if (unaff_x22 == unaff_x28) {
                        arg1 = 0;
                    }
                    else {
                        arg1 = 0;
                        do {
                            if ((*(unaff_x22 + 0xf2) == '\0') && ((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)))) {
                                if (*(unaff_x22 + 0xf3) == '\0') {
                                    arg1 = 1;
                                }
                                else if (*(unaff_x22 + 0xf3) == '\x01') {
                                    *(unaff_x22 + 0xf3) = 2;
                                    _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                                    if (unaff_x22 != NULL) goto code_r0x08003c18;
                                    goto code_r0x08003b18;
                                }
                            }
                            unaff_x22 = *unaff_x22;
                        } while (unaff_x22 != unaff_x28);
                    }
                    _raw_write_unlock_irqrestore(unaff_x23,uVar13);
code_r0x08003b18:
                    if ((arg1 != 0) || (*(unaff_x26 + 0x70) == 0)) {
                        uStack_98 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_a0 = arg3;
                        init_wait_entry(&stack0xffffffffffffff68,0);
                        arg1 = iVar23 + 0x18;
                        do {
                            uVar14 = 1;
                            unaff_x25 = prepare_to_wait_event(arg1,&stack0xffffffffffffff68);
                            uVar13 = _raw_write_lock_irqsave(unaff_x23);
                            unaff_x22 = *unaff_x28;
                            if (unaff_x22 == unaff_x28) {
                                arg3 = 0;
                            }
                            else {
                                arg3 = 0;
                                do {
                                    if ((*(unaff_x22 + 0xf2) == '\0') &&
                                       ((iVar7 == -1 || (*(unaff_x22 + 0xd) == iVar7)))) {
                                        if (*(unaff_x22 + 0xf3) == '\0') {
                                            arg3 = 1;
                                        }
                                        else if (*(unaff_x22 + 0xf3) == '\x01') {
                                            *(unaff_x22 + 0xf3) = 2;
                                            _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                                            if (unaff_x22 != NULL) {
                                                finish_wait(arg1,&stack0xffffffffffffff68);
                                                arg3 = uStack_a0;
                                                if (*(unaff_x22 + 7) != 0) goto code_r0x08003c20;
                                                goto code_r0x08003c6c;
                                            }
                                            if (arg3 != 0) goto code_r0x08003be0;
                                            goto code_r0x08003bd4;
                                        }
                                    }
                                    unaff_x22 = *unaff_x22;
                                } while (unaff_x22 != unaff_x28);
                            }
                            _raw_write_unlock_irqrestore(unaff_x23,uVar13);
                            if (arg3 == 0) {
code_r0x08003bd4:
                                if (*(unaff_x26 + 0x70) != 0) {
                                    finish_wait(arg1,&stack0xffffffffffffff68);
                                    break;
                                }
                            }
code_r0x08003be0:
                            if (unaff_x25 != 0) goto code_r0x08003bec;
                            schedule();
                        } while( true );
                    }
                    goto code_r0x08003c48;
                }
                uVar21 = 0xfffffffffffffff5;
            }
            else {
                uVar21 = iVar7;
            }
        }
    }
    else {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            uVar14 = __task_pid_nr_ns(iVar24,1,0);
            arg3 = uVar14 & 0xffffffff;
            _printk(0x8001ed2,"sg_read",arg3,iVar24 + 0x7a8);
        }
        uVar21 = 0xffffffffffffffff;
        uVar14 = arg3;
        arg1 = unaff_x24;
    }
    goto code_r0x080039e0;
code_r0x08003bec:
    if (unaff_x25 == 0) {
code_r0x08003c48:
        unaff_x25 = -0x13;
    }
    uVar21 = unaff_x25;
    unaff_x20 = arg3;
    goto code_r0x080039e0;
code_r0x08003c18:
    if (*(unaff_x22 + 7) == 0) {
code_r0x08003c6c:
        uVar14 = 0x24;
        iVar24 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar24 = 0x30;
        }
        puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar24),0xdc0);
        unaff_x20 = arg3;
        if (puVar10 == NULL) {
            uVar21 = 0xfffffffffffffff4;
        }
        else {
            uVar8 = *(unaff_x22 + 0xc);
            *puVar10 = uVar8;
            puVar10[1] = uVar8;
            puVar10[2] = *(unaff_x22 + 0xd);
            if (*(unaff_x22 + 0x35) < 0xc0) {
                uVar25 = 0;
            }
            else {
                uVar25 = *(unaff_x22 + 8) == '\f';
            }
            uVar2 = puVar10[4];
            puVar10[4] = uVar2 & 0xfffffffe | uVar25;
            uVar25 = uVar25 | (*(unaff_x22 + 0x79) & 0x1f) << 1;
            puVar10[4] = uVar2 & 0xffffffc0 | uVar25;
            uVar25 = uVar25 | (*(unaff_x22 + 0x7c) & 0xff) << 6;
            puVar10[4] = uVar2 & 0xffffc000 | uVar25;
            puVar10[4] = uVar2 & 0xffc00000 | uVar25 | *(unaff_x22 + 0x7e) << 0xe;
            if (((*(unaff_x22 + 0x79) & 1) != 0) || ((~*(unaff_x22 + 0x12) & 0x70) == 0)) {
                puVar10[4] = uVar2 & 0xffc00000 | uVar25 | 0x20000;
                uVar13 = unaff_x22[0x13];
                *(puVar10 + 5) = unaff_x22[0x12];
                *(puVar10 + 7) = uVar13;
            }
            iVar7 = 0;
            iVar9 = 0;
    //switch table (37 cases) at 0x8001a60
            switch(*(unaff_x22 + 0x7c)) {
            case 0:
            case 10:
            case 0xb:
                break;
            case 1:
            case 2:
            case 3:
                iVar7 = 0x10;
                iVar9 = 5;
                break;
            default:
                iVar7 = 5;
                iVar9 = 5;
                break;
            case 7:
                iVar16 = 5;
                iVar7 = iVar16;
                iVar9 = 5;
                if ((*(unaff_x22 + 0x12) == '\0') && (iVar7 = 0, iVar9 = 0, *(unaff_x22 + 0x79) != '\0')) {
                    iVar7 = iVar16;
                    iVar9 = iVar16;
                }
            }
            puVar10[3] = iVar7;
            if (arg3 < 0x24) {
                unaff_x20 = 0;
                if (iVar9 != 0) {
                    unaff_x20 = 0xfffffffffffffffb;
                }
code_r0x08003dc4:
                sym.sg_finish_rem_req(unaff_x22);
                sym.sg_remove_request(iVar23,unaff_x22);
                uVar21 = unaff_x20;
            }
            else {
                uVar14 = 0x24;
                iVar24 = sym._copy_to_user(arg2,noname_1,0x24);
                if (iVar24 == 0) {
                    unaff_x20 = puVar10[1];
                    if (arg3 <= puVar10[1]) {
                        unaff_x20 = arg3;
                    }
                    if (0x24 < unaff_x20) {
                        uVar14 = unaff_x20 - 0x24;
                        iVar7 = sym.sg_read_oxfer(unaff_x22,arg2 + 0x24,uVar14);
                        if (iVar7 != 0) goto code_r0x08003db0;
                    }
                    goto code_r0x08003dc4;
                }
code_r0x08003db0:
                uVar21 = 0xfffffffffffffff2;
            }
            kfree(puVar10);
            unaff_x23 = puVar10;
        }
    }
    else {
code_r0x08003c20:
        uVar14 = arg3;
        uVar21 = sym.sg_new_read(iVar23,arg2,arg3,unaff_x22);
        unaff_x20 = arg3;
    }
code_r0x080039e0:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_68) {
        return uVar21;
    }
    auVar26 = __stack_chk_fail();
    iVar12 = auVar26._8_8_;
    iVar24 = auVar26._0_8_;
    *extraout_x18 = 0x8003e78;
    uStack_f8 = 0x8003e78;
    iVar23 = sp_el0;
    puVar15 = sp_el0;
    iStack_108 = *(iVar23 + 0x5e0);
    uStack_110 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    auStack_230[0x1d] = 0;
    auStack_230[0x1e] = 0;
    auStack_230[0x1b] = 0;
    auStack_230[0x1c] = 0;
    auStack_230[0x19] = 0;
    auStack_230[0x1a] = 0;
    auStack_230[0x17] = 0;
    auStack_230[0x18] = 0;
    auStack_230[0x15] = 0;
    auStack_230[0x16] = 0;
    auStack_230[0x13] = 0;
    auStack_230[0x14] = 0;
    auStack_230[0x11] = 0;
    auStack_230[0x12] = 0;
    auStack_230[0xf] = 0;
    auStack_230[0x10] = 0;
    auStack_230[0xd] = 0;
    auStack_230[0xe] = 0;
    auStack_230[0xb] = 0;
    auStack_230[0xc] = 0;
    auStack_230[9] = 0;
    auStack_230[10] = 0;
    auStack_230[7] = 0;
    auStack_230[8] = 0;
    auStack_230[5] = 0;
    auStack_230[6] = 0;
    auStack_230[3] = 0;
    auStack_230[4] = 0;
    auStack_230[1] = 0;
    auStack_230[2] = 0;
    auStack_230[0] = 0;
    puStack_100 = &stack0xffffffffffffffa0;
    puStack_f0 = unaff_x28;
    iStack_e0 = unaff_x26;
    iStack_d8 = unaff_x25;
    iStack_d0 = arg1;
    puStack_c8 = unaff_x23;
    puStack_c0 = unaff_x22;
    iStack_b8 = unaff_x21;
    uStack_b0 = unaff_x20;
    uStack_a8 = uVar21;
    if (*(iVar24 + 0xa0) != puVar15[0xf2]) {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            uVar8 = __task_pid_nr_ns(puVar15,1,0);
            _printk(0x8001ed2,"sg_write",uVar8,puVar15 + 0xf5);
        }
        uVar21 = 0xffffffffffffffff;
        goto code_r0x08003f84;
    }
    iVar23 = *(iVar24 + 0xd8);
    if ((iVar23 != 0) && (puVar17 = *(iVar23 + 0x10), puVar17 != NULL)) {
        if (puVar17[0xe] != 0) {
            uVar21 = 0xffffffffffffffed;
            goto code_r0x08003f84;
        }
        if (((*(iVar24 + 0x41) >> 3 & 1) != 0) || (iVar7 = scsi_block_when_processing_errors(*puVar17), iVar7 != 0)) {
            if (uVar14 < 0x24) {
code_r0x08003f78:
                uVar21 = 0xfffffffffffffffb;
            }
            else {
                iVar11 = sym._copy_from_user(&stack0xfffffffffffffed0,iVar12,0x24);
                if (iVar11 == 0) {
                    if (uStack_130 < 0) {
                        uVar21 = sym.sg_new_write(iVar23,iVar24,iVar12,uVar14);
                        goto code_r0x08003f84;
                    }
                    if (uVar14 < 0x2a) goto code_r0x08003f78;
                    arg2_00 = iVar12 + 0x24;
                    uVar21 = arg2_00 * 0x100 >> 8;
                    if (((*(puVar15 + 0x3e) >> 5 & 1) != 0) || (puVar19 = arg2_00, (*puVar15 >> 0x1a & 1) != 0)) {
                        puVar19 = arg2_00 & uVar21;
                    }
                    bVar6 = 0xfffffffffffffffe < puVar19;
                    puVar19 = puVar19 + 1;
                    uVar1 = 0;
                    if (!bVar6 || puVar19 == NULL) {
                        uVar1 = 0x7fffffffff;
                    }
                    if (bVar6) {
                        puVar19 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar19,~uVar1) && !CARRY8(puVar19 + ~uVar1,bVar6) || puVar19 == uVar1 + !bVar6) {
                        puVar19 = arg2_00;
                        if ((arg2_00 & uVar21 & 0xffffff8000000000) != 0) {
                            puVar19 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar4 = *puVar19;
                        sym.uaccess_ttbr0_disable();
                        iVar24 = sym.sg_add_request(iVar23);
                        if (iVar24 == 0) {
                            uVar21 = 0xffffffffffffffdf;
                        }
                        else {
                            mutex_lock(iVar23 + 0x38);
                            uVar3 = *(iVar23 + 0x142a);
                            uVar25 = uVar3;
                            if (uVar3 == 0) {
                                uVar25 = scsi_command_size_tbl[uVar4 >> 5];
                                if ((0xbf < uVar4) && ((uStack_120 & 1) != 0)) {
                                    uVar25 = 0xc;
                                }
                            }
                            else {
                                *(iVar23 + 0x142a) = 0;
                            }
                            mutex_unlock(iVar23 + 0x38);
                            uVar5 = uVar14 - uVar25;
                            uVar2 = uVar5;
                            if (uVar5 <= uStack_130._4_4_) {
                                uVar2 = uStack_130._4_4_;
                            }
                            iVar7 = uVar5 - 0x24;
                            if (iVar7 < 0) {
                                sym.sg_remove_request(iVar23,iVar24);
                                uVar21 = 0xfffffffffffffffb;
                            }
                            else {
                                uVar21 = uVar25;
                                *(iVar24 + 0x38) = 0;
                                *(iVar24 + 0x40) = uVar25;
                                *(iVar24 + 0x42) = 0;
                                *(iVar24 + 0x41) = 0;
                                if (iVar7 == 0) {
                                    iVar9 = -3;
                                    if (uVar2 - 0x24 < 1) {
                                        iVar9 = -1;
                                    }
                                    puVar19 = NULL;
                                }
                                else {
                                    iVar9 = -4;
                                    if (uStack_130._4_4_ < 0x25) {
                                        iVar9 = -2;
                                    }
                                    puVar19 = arg2_00 + uVar21;
                                }
                                *(iVar24 + 0x44) = uVar2 - 0x24;
                                *(iVar24 + 0x48) = puVar19;
                                *(iVar24 + 0x3c) = iVar9;
                                *(iVar24 + 0x58) = 0;
                                *(iVar24 + 0x60) = uStack_130._4_4_;
                                *(iVar24 + 100) = iVar7;
                                *(iVar24 + 0x68) = uStack_128;
                                *(iVar24 + 0x70) = 0;
                                __check_object_size(&stack0xfffffffffffffdd0,uVar21,0);
                                iVar12 = sym._copy_from_user(&stack0xfffffffffffffdd0,arg2_00,uVar21);
                                if (iVar12 == 0) {
                                    if ((*(iVar24 + 0x3c) == -4) &&
                                       (iVar9 = ___ratelimit(obj.sg_write._rs,"sg_write"), iVar9 != 0)) {
                                        _printk(0x8001d45,uStack_130._4_4_ + -0x24,iVar7,auStack_230[0] & 0xff,
                                                puVar15 + 0xf5);
                                    }
                                    iVar7 = sym.sg_common_write(iVar23,iVar24,&stack0xfffffffffffffdd0,
                                                                *(iVar23 + 0x68));
                                    uVar21 = iVar7;
                                    if (-1 < iVar7) {
                                        uVar21 = uVar14;
                                    }
                                }
                                else {
                                    sym.sg_remove_request(iVar23,iVar24);
                                    uVar21 = 0xfffffffffffffff2;
                                }
                            }
                        }
                        goto code_r0x08003f84;
                    }
                }
                uVar21 = 0xfffffffffffffff2;
            }
            goto code_r0x08003f84;
        }
    }
    uVar21 = 0xfffffffffffffffa;
code_r0x08003f84:
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) != iStack_108) {
        auVar26 = __stack_chk_fail(uVar21);
        puVar15 = auVar26._8_8_;
        *extraout_x18_00 = 0x8004260;
        iVar23 = *(auVar26._0_8_ + 0xd8);
        if ((iVar23 == 0) || (iVar24 = *(iVar23 + 0x10), iVar24 == 0)) {
            uVar14 = 8;
        }
        else {
            if (((puVar15 != NULL) && (iVar23 + 0x18 != 0)) && (pcVar22 = *puVar15, pcVar22 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar22,0x8001a40);
                (*pcVar22)(auVar26._0_8_,iVar23 + 0x18,puVar15);
            }
            uVar13 = _raw_read_lock_irqsave(iVar23 + 0x30);
            piVar18 = iVar23 + 0x90;
            piVar20 = *piVar18;
            if (piVar20 == piVar18) {
                iVar7 = 0;
                uVar25 = 0;
            }
            else {
                uVar25 = 0;
                iVar7 = 0;
                do {
                    if (uVar25 == 0) {
                        if (*(piVar20 + 0xf3) == '\x01') {
                            uVar25 = 0x41;
                            if (*(piVar20 + 0xf2) != '\0') {
                                uVar25 = 0;
                            }
                        }
                        else {
                            uVar25 = 0;
                        }
                    }
                    piVar20 = *piVar20;
                    iVar7 = iVar7 + 1;
                } while (piVar20 != piVar18);
            }
            _raw_read_unlock_irqrestore(iVar23 + 0x30,uVar13);
            if (*(iVar24 + 0x70) == 0) {
                if (*(iVar23 + 0x1429) == '\0') {
                    uVar2 = uVar25 | 0x104;
                    if (iVar7 != 0) {
                        uVar2 = uVar25;
                    }
                    uVar14 = uVar2;
                }
                else {
                    uVar2 = uVar25 | 0x104;
                    if (0xf < iVar7) {
                        uVar2 = uVar25;
                    }
                    uVar14 = uVar2;
                }
            }
            else {
                uVar14 = uVar25 | 0x10;
            }
        }
        return uVar14;
    }
    return uVar21;
}


// ===== sym.sg_write @ 0x08003e80 (size 128) =====

uint64_t sym.sg_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *arg2_00;
    uint32_t uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    ulong uVar11;
    uint64_t uVar12;
    ulong *puVar13;
    ulong *puVar14;
    int64_t *piVar15;
    uint8_t *puVar16;
    int64_t *piVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint32_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uint64_t auStack_190 [31];
    uint uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    puVar13 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    auStack_190[0x1d] = 0;
    auStack_190[0x1e] = 0;
    auStack_190[0x1b] = 0;
    auStack_190[0x1c] = 0;
    auStack_190[0x19] = 0;
    auStack_190[0x1a] = 0;
    auStack_190[0x17] = 0;
    auStack_190[0x18] = 0;
    auStack_190[0x15] = 0;
    auStack_190[0x16] = 0;
    auStack_190[0x13] = 0;
    auStack_190[0x14] = 0;
    auStack_190[0x11] = 0;
    auStack_190[0x12] = 0;
    auStack_190[0xf] = 0;
    auStack_190[0x10] = 0;
    auStack_190[0xd] = 0;
    auStack_190[0xe] = 0;
    auStack_190[0xb] = 0;
    auStack_190[0xc] = 0;
    auStack_190[9] = 0;
    auStack_190[10] = 0;
    auStack_190[7] = 0;
    auStack_190[8] = 0;
    auStack_190[5] = 0;
    auStack_190[6] = 0;
    auStack_190[3] = 0;
    auStack_190[4] = 0;
    auStack_190[1] = 0;
    auStack_190[2] = 0;
    auStack_190[0] = 0;
    if (*(arg1 + 0xa0) != puVar13[0xf2]) {
        if ((obj.sg_check_file_access.__already_done & 1) == 0) {
            obj.sg_check_file_access.__already_done = 0x1;
            uVar8 = __task_pid_nr_ns(puVar13,1,0);
            _printk(0x8001ed2,"sg_write",uVar8,puVar13 + 0xf5);
        }
        uVar12 = 0xffffffffffffffff;
        goto code_r0x08003f84;
    }
    iVar19 = *(arg1 + 0xd8);
    if ((iVar19 != 0) && (puVar14 = *(iVar19 + 0x10), puVar14 != NULL)) {
        if (puVar14[0xe] != 0) {
            uVar12 = 0xffffffffffffffed;
            goto code_r0x08003f84;
        }
        if (((*(arg1 + 0x41) >> 3 & 1) != 0) || (iVar7 = scsi_block_when_processing_errors(*puVar14), iVar7 != 0)) {
            if (arg3 < 0x24) {
code_r0x08003f78:
                uVar12 = 0xfffffffffffffffb;
            }
            else {
                iVar20 = sym._copy_from_user(&uStack_90,arg2,0x24);
                if (iVar20 == 0) {
                    if (uStack_90 < 0) {
                        uVar12 = sym.sg_new_write(iVar19,arg1,arg2,arg3);
                        goto code_r0x08003f84;
                    }
                    if (arg3 < 0x2a) goto code_r0x08003f78;
                    arg2_00 = arg2 + 0x24;
                    uVar12 = arg2_00 * 0x100 >> 8;
                    if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (puVar16 = arg2_00, (*puVar13 >> 0x1a & 1) != 0)) {
                        puVar16 = arg2_00 & uVar12;
                    }
                    bVar6 = 0xfffffffffffffffe < puVar16;
                    puVar16 = puVar16 + 1;
                    uVar2 = 0;
                    if (!bVar6 || puVar16 == NULL) {
                        uVar2 = 0x7fffffffff;
                    }
                    if (bVar6) {
                        puVar16 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar16,~uVar2) && !CARRY8(puVar16 + ~uVar2,bVar6) || puVar16 == uVar2 + !bVar6) {
                        puVar16 = arg2_00;
                        if ((arg2_00 & uVar12 & 0xffffff8000000000) != 0) {
                            puVar16 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar4 = *puVar16;
                        sym.uaccess_ttbr0_disable();
                        iVar20 = sym.sg_add_request(iVar19);
                        if (iVar20 == 0) {
                            uVar12 = 0xffffffffffffffdf;
                        }
                        else {
                            mutex_lock(iVar19 + 0x38);
                            uVar3 = *(iVar19 + 0x142a);
                            uVar21 = uVar3;
                            if (uVar3 == 0) {
                                uVar21 = scsi_command_size_tbl[uVar4 >> 5];
                                if ((0xbf < uVar4) && ((uStack_80 & 1) != 0)) {
                                    uVar21 = 0xc;
                                }
                            }
                            else {
                                *(iVar19 + 0x142a) = 0;
                            }
                            mutex_unlock(iVar19 + 0x38);
                            uVar5 = arg3 - uVar21;
                            uVar1 = uVar5;
                            if (uVar5 <= uStack_90._4_4_) {
                                uVar1 = uStack_90._4_4_;
                            }
                            iVar7 = uVar5 - 0x24;
                            if (iVar7 < 0) {
                                sym.sg_remove_request(iVar19,iVar20);
                                uVar12 = 0xfffffffffffffffb;
                            }
                            else {
                                uVar12 = uVar21;
                                *(iVar20 + 0x38) = 0;
                                *(iVar20 + 0x40) = uVar21;
                                *(iVar20 + 0x42) = 0;
                                *(iVar20 + 0x41) = 0;
                                if (iVar7 == 0) {
                                    iVar9 = -3;
                                    if (uVar1 - 0x24 < 1) {
                                        iVar9 = -1;
                                    }
                                    puVar16 = NULL;
                                }
                                else {
                                    iVar9 = -4;
                                    if (uStack_90._4_4_ < 0x25) {
                                        iVar9 = -2;
                                    }
                                    puVar16 = arg2_00 + uVar12;
                                }
                                *(iVar20 + 0x44) = uVar1 - 0x24;
                                *(iVar20 + 0x48) = puVar16;
                                *(iVar20 + 0x3c) = iVar9;
                                *(iVar20 + 0x58) = 0;
                                *(iVar20 + 0x60) = uStack_90._4_4_;
                                *(iVar20 + 100) = iVar7;
                                *(iVar20 + 0x68) = uStack_88;
                                *(iVar20 + 0x70) = 0;
                                __check_object_size(auStack_190,uVar12,0);
                                iVar10 = sym._copy_from_user(auStack_190,arg2_00,uVar12);
                                if (iVar10 == 0) {
                                    if ((*(iVar20 + 0x3c) == -4) &&
                                       (iVar9 = ___ratelimit(obj.sg_write._rs,"sg_write"), iVar9 != 0)) {
                                        _printk(0x8001d45,uStack_90._4_4_ + -0x24,iVar7,auStack_190[0] & 0xff,
                                                puVar13 + 0xf5);
                                    }
                                    iVar7 = sym.sg_common_write(iVar19,iVar20,auStack_190,*(iVar19 + 0x68));
                                    uVar12 = iVar7;
                                    if (-1 < iVar7) {
                                        uVar12 = arg3;
                                    }
                                }
                                else {
                                    sym.sg_remove_request(iVar19,iVar20);
                                    uVar12 = 0xfffffffffffffff2;
                                }
                            }
                        }
                        goto code_r0x08003f84;
                    }
                }
                uVar12 = 0xfffffffffffffff2;
            }
            goto code_r0x08003f84;
        }
    }
    uVar12 = 0xfffffffffffffffa;
code_r0x08003f84:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return uVar12;
    }
    auVar22 = __stack_chk_fail(uVar12);
    puVar13 = auVar22._8_8_;
    *extraout_x18 = 0x8004260;
    iVar19 = *(auVar22._0_8_ + 0xd8);
    if ((iVar19 == 0) || (iVar20 = *(iVar19 + 0x10), iVar20 == 0)) {
        uVar12 = 8;
    }
    else {
        if (((puVar13 != NULL) && (iVar19 + 0x18 != 0)) && (pcVar18 = *puVar13, pcVar18 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar18,0x8001a40);
            (*pcVar18)(auVar22._0_8_,iVar19 + 0x18,puVar13);
        }
        uVar11 = _raw_read_lock_irqsave(iVar19 + 0x30);
        piVar15 = iVar19 + 0x90;
        piVar17 = *piVar15;
        if (piVar17 == piVar15) {
            iVar7 = 0;
            uVar21 = 0;
        }
        else {
            uVar21 = 0;
            iVar7 = 0;
            do {
                if (uVar21 == 0) {
                    if (*(piVar17 + 0xf3) == '\x01') {
                        uVar21 = 0x41;
                        if (*(piVar17 + 0xf2) != '\0') {
                            uVar21 = 0;
                        }
                    }
                    else {
                        uVar21 = 0;
                    }
                }
                piVar17 = *piVar17;
                iVar7 = iVar7 + 1;
            } while (piVar17 != piVar15);
        }
        _raw_read_unlock_irqrestore(iVar19 + 0x30,uVar11);
        if (*(iVar20 + 0x70) == 0) {
            if (*(iVar19 + 0x1429) == '\0') {
                uVar1 = uVar21 | 0x104;
                if (iVar7 != 0) {
                    uVar1 = uVar21;
                }
                uVar12 = uVar1;
            }
            else {
                uVar1 = uVar21 | 0x104;
                if (0xf < iVar7) {
                    uVar1 = uVar21;
                }
                uVar12 = uVar1;
            }
        }
        else {
            uVar12 = uVar21 | 0x10;
        }
    }
    return uVar12;
}


// ===== sym.sg_poll @ 0x08004264 (size 340) =====

uint32_t sym.sg_poll(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int iVar6;
    code *pcVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0xd8);
    if ((iVar8 == 0) || (iVar9 = *(iVar8 + 0x10), iVar9 == 0)) {
        uVar1 = 8;
    }
    else {
        if (((arg2 != 0) && (iVar8 + 0x18 != 0)) && (pcVar7 = *arg2, pcVar7 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar7,0x8001a40);
            (*pcVar7)(arg1,iVar8 + 0x18,arg2);
        }
        uVar2 = _raw_read_lock_irqsave(iVar8 + 0x30);
        piVar3 = iVar8 + 0x90;
        piVar4 = *piVar3;
        if (piVar4 == piVar3) {
            iVar6 = 0;
            uVar5 = 0;
        }
        else {
            uVar5 = 0;
            iVar6 = 0;
            do {
                if (uVar5 == 0) {
                    if (*(piVar4 + 0xf3) == '\x01') {
                        uVar5 = 0x41;
                        if (*(piVar4 + 0xf2) != '\0') {
                            uVar5 = 0;
                        }
                    }
                    else {
                        uVar5 = 0;
                    }
                }
                piVar4 = *piVar4;
                iVar6 = iVar6 + 1;
            } while (piVar4 != piVar3);
        }
        _raw_read_unlock_irqrestore(iVar8 + 0x30,uVar2);
        if (*(iVar9 + 0x70) == 0) {
            if (*(iVar8 + 0x1429) == '\0') {
                uVar1 = uVar5 | 0x104;
                if (iVar6 != 0) {
                    uVar1 = uVar5;
                }
            }
            else {
                uVar1 = uVar5 | 0x104;
                if (0xf < iVar6) {
                    uVar1 = uVar5;
                }
            }
        }
        else {
            uVar1 = uVar5 | 0x10;
        }
    }
    return uVar1;
}


// ===== sym.sg_ioctl @ 0x080043bc (size 7848) =====

//WARNING: Removing unreachable block (ram,0x08004ba0)

uint64_t sym.sg_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    char *arg2_00;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *extraout_x8;
    ulong *puVar12;
    int *extraout_x9;
    int *piVar13;
    int extraout_w10;
    uint32_t uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    ulong *unaff_x21;
    int64_t iVar16;
    int64_t *piVar17;
    uint64_t uVar18;
    char *pcVar19;
    int64_t *unaff_x26;
    int64_t *piVar20;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar noname_1 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    iVar16 = *(arg1 + 0xd8);
    if ((iVar16 == 0) || (unaff_x26 = *(iVar16 + 0x10), unaff_x26 == NULL)) {
code_r0x08005a40:
        arg1 = unaff_x21;
        arg3 = unaff_x19;
        uVar18 = 0xfffffffffffffffa;
        goto code_r0x08005a48;
    }
    uVar7 = *(arg1 + 0x40);
    unaff_x20 = arg2 & 0xffffffff;
    iVar8 = arg2;
    if (iVar8 < 0x2201) {
        if (iVar8 - 0x1267U < 0x10) {
    //switch table (16 cases) at 0x8001a90
            switch(*((iVar8 - 0x1267U) * 4 + 0x8001a90) + 0x80045c0) {
            case 0x80045d4:
                puVar12 = sp_el0;
                if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
                    uVar18 = arg3 & (arg3 << 8) >> 8;
                }
                bVar5 = 0xfffffffffffffffb < uVar18;
                uVar18 = uVar18 + 4;
                uVar15 = 0;
                if (!bVar5 || uVar18 == 0) {
                    uVar15 = 0x7fffffffff;
                }
                if (bVar5) {
                    uVar18 = 0xffffffffffffffff;
                }
                if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
                    piVar13 = arg3;
                    if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                        piVar13 = NULL;
                    }
                    uVar7 = *(*(*unaff_x26 + 8) + 0x4d4);
                    if (0x3ffffe < uVar7) {
                        uVar7 = 0x3fffff;
                    }
                    iVar8 = uVar7 << 9;
                    goto code_r0x08005dd8;
                }
                goto code_r0x08005c18;
            case 0x8004764:
code_r0x08004764:
                uVar18 = 0xffffffffffffffe7;
                goto code_r0x08005a48;
            }
        }
        else {
            if (iVar8 == -0x3fb7ed8d) goto code_r0x08004764;
            if (iVar8 == 1) {
                if (unaff_x26[0xe] == 0) {
                    iVar8 = scsi_ioctl(*unaff_x26,0,*(arg1 + 0x44),1,arg3);
                    uVar18 = iVar8;
                    goto code_r0x08005bf0;
                }
                goto code_r0x08004714;
            }
        }
code_r0x08004778:
        if ((uVar7 & 3) == 2) {
code_r0x08004788:
            iVar6 = scsi_ioctl_block_when_processing_errors(*unaff_x26,unaff_x20,uVar7 >> 0xb & 1);
            iVar8 = -0x203;
            if (iVar6 != 0) {
                iVar8 = iVar6;
            }
            uVar18 = iVar8;
            goto code_r0x08005bf0;
        }
        uVar18 = 0xffffffffffffffff;
        goto code_r0x08005a48;
    }
    if (0x88 < iVar8 - 0x2201U) {
        if ((iVar8 - 0x5382U < 5) && ((1 << (iVar8 - 0x5382U & 0x1f) & 0x19U) != 0)) goto code_r0x08004708;
        goto code_r0x08004778;
    }
    uVar18 = 0;
    //switch table (137 cases) at 0x8001ad0
    uVar14 = _kmem_cache_alloc_trace;
    switch(*((iVar8 - 0x2201U) * 4 + 0x8001ad0) + 0x8004450) {
    case 0x8004464:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5) {
code_r0x080051d0:
            uVar18 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        puVar3 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            puVar3 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar7 = *puVar3;
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if (uVar7 < 0) {
            uVar18 = 0xfffffffffffffffb;
        }
        else {
            if (0x33333331 < uVar7) {
                uVar7 = 0x33333332;
            }
            uVar18 = 0;
            *(iVar16 + 0x68) = (uVar7 / 100) * 0xfa + ((uVar7 % 100) * 0xfa) / 100;
            *(iVar16 + 0x6c) = uVar7;
        }
        goto code_r0x08005a48;
    case 0x8004708:
code_r0x08004708:
        if (unaff_x26[0xe] == 0) {
            uVar7 = *(arg1 + 0x40);
            goto code_r0x08004788;
        }
        goto code_r0x08004714;
    case 0x8004778:
        goto code_r0x08004778;
    case 0x80047b0:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5)
        goto code_r0x080051d0;
        puVar1 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            puVar1 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar18 = 0;
        *(unaff_x26 + 0x7c) = *puVar1;
        goto code_r0x08005a48;
    case 0x80048b0:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar3 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar3 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar3 = *(iVar16 + 0x142b);
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80049a8:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5)
        goto code_r0x080051d0;
        piVar13 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            piVar13 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar18 = 0;
        *(iVar16 + 0x1428) = *piVar13 != 0;
        goto code_r0x08005a48;
    case 0x8004ab0:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5) {
            uVar18 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        puVar3 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            puVar3 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar7 = *puVar3;
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if (uVar7 < 0) {
            uVar18 = 0xffffffffffffffea;
        }
        else {
            arg3 = iVar16 + 0x38;
            uVar14 = *(*(*unaff_x26 + 8) + 0x4d4);
            if (0x3ffffe < uVar14) {
                uVar14 = 0x3fffff;
            }
            if (uVar14 << 9 <= uVar7) {
                uVar7 = uVar14 << 9;
            }
            unaff_x20 = uVar7;
            mutex_lock(arg3);
            if (uVar7 != *(iVar16 + 0x78)) {
                if ((*(iVar16 + 0x142c) != '\0') || (*(iVar16 + 0x142d) != '\0')) {
                    mutex_unlock(arg3);
                    uVar18 = 0xfffffffffffffff0;
                    goto code_r0x08005a48;
                }
                piVar17 = *(iVar16 + 0x80);
                arg1 = iVar16 + 0x70;
                if (((piVar17 != NULL) && (*(iVar16 + 0x74) != 0)) && (*(iVar16 + 0x8c) == '\0')) {
                    if ((*(iVar16 + 0x70) != 0) && (iVar11 = *piVar17, iVar11 != 0)) {
                        uVar18 = 1;
                        do {
                            __free_pages(iVar11,*(iVar16 + 0x88));
                            if (*(iVar16 + 0x70) <= uVar18) {
                                piVar17 = *(iVar16 + 0x80);
                                break;
                            }
                            piVar17 = *(iVar16 + 0x80);
                            iVar11 = piVar17[uVar18];
                            uVar18 = uVar18 + 1;
                        } while (iVar11 != 0);
                    }
                    kfree(piVar17);
                }
                *(iVar16 + 0x80) = 0;
                *(iVar16 + 0x88) = 0;
                *arg1 = 0;
                *(iVar16 + 0x78) = 0;
                sym.sg_build_reserve(iVar16,uVar7);
            }
            mutex_unlock(arg3);
            uVar18 = 0;
        }
        goto code_r0x08005a48;
    case 0x8004bac:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5)
        goto code_r0x080051d0;
        puVar1 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            puVar1 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar18 = 0;
        *(iVar16 + 0x142b) = *puVar1;
        goto code_r0x08005a48;
    case 0x8004cac:
        arg2_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0xdc0,0x180);
        if (arg2_00 != NULL) {
            uVar9 = _raw_read_lock_irqsave(iVar16 + 0x30);
            piVar17 = iVar16 + 0x90;
            piVar20 = *piVar17;
            if (piVar20 != piVar17) {
                pcVar19 = arg2_00;
                uVar18 = 0;
                do {
                    *pcVar19 = *(piVar20 + 0xf3) + '\x01';
                    pcVar19[3] = *(piVar20 + 0x79) & *(piVar20 + 0x7c) & *(piVar20 + 0x7e);
                    if (*(piVar20 + 0xf3) == '\0') {
                        uVar7 = jiffies_to_msecs(_cdev_alloc);
                        iVar8 = 0;
                        if (*(piVar20 + 0x84) <= uVar7) {
                            iVar8 = uVar7 - *(piVar20 + 0x84);
                        }
                    }
                    else {
                        iVar8 = *(piVar20 + 0x84);
                    }
                    *(pcVar19 + 0x10) = iVar8;
                    pcVar19[1] = *(piVar20 + 0xf1);
                    pcVar19[2] = *(piVar20 + 0xf2);
                    *(pcVar19 + 4) = piVar20[0xd];
                    *(pcVar19 + 8) = piVar20[0xe];
                    piVar20 = *piVar20;
                    if (piVar20 == piVar17) break;
                    bVar5 = uVar18 < 0xf;
                    pcVar19 = pcVar19 + 0x18;
                    uVar18 = uVar18 + 1;
                } while (bVar5);
            }
            noname_1 = _raw_read_unlock_irqrestore(iVar16 + 0x30,uVar9);
            puVar12 = sp_el0;
            if ((*puVar12 >> 0x16 & 1) == 0) {
                iVar8 = sym._copy_to_user(arg3,noname_1,0x180);
            }
            else {
                iVar8 = sym.put_compat_request_table(arg3,arg2_00);
            }
            uVar18 = 0;
            if (iVar8 != 0) {
                uVar18 = 0xfffffffffffffff2;
            }
            kfree(arg2_00);
            goto code_r0x08005bf0;
        }
code_r0x080051c8:
        uVar18 = 0xfffffffffffffff4;
        goto code_r0x08005a48;
    case 0x8004db0:
        uVar7 = *(*(*unaff_x26 + 8) + 0x4d4);
        puVar12 = sp_el0;
        if (0x3ffffe < uVar7) {
            uVar7 = 0x3fffff;
        }
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            iVar8 = *(iVar16 + 0x78);
            if (uVar7 * 0x200 <= *(iVar16 + 0x78)) {
                iVar8 = uVar7 * 0x200;
            }
            piVar13 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                piVar13 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *piVar13 = iVar8;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x8004ecc:
        puVar12 = sp_el0;
        uVar18 = (arg3 << 8) >> 8;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar15 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar15 = arg3 & uVar18;
        }
        bVar5 = 0xfffffffffffffffb < uVar15;
        uVar15 = uVar15 + 4;
        uVar2 = 0;
        if (!bVar5 || uVar15 == 0) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar15 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar15,~uVar2) && !CARRY8(uVar15 + ~uVar2,bVar5) || uVar15 == uVar2 + !bVar5) {
            puVar3 = arg3;
            if ((arg3 & uVar18 & 0xffffff8000000000) != 0) {
                puVar3 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar3 = *unaff_x26 != 0;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x8004fc8:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5)
        goto code_r0x080051d0;
        piVar13 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            piVar13 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        uVar18 = 0;
        *(iVar16 + 0x1429) = *piVar13 != 0;
        goto code_r0x08005a48;
    case 0x80050d0:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar18,~uVar15) || CARRY8(uVar18 + ~uVar15,bVar5)) && uVar18 != uVar15 + !bVar5)
        goto code_r0x080051d0;
        piVar13 = arg3;
        if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
            piVar13 = NULL;
        }
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        iVar8 = *piVar13;
        if ((uVar14 >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        if (iVar8 < 0xfd) {
            uVar18 = 0;
            *(iVar16 + 0x142a) = iVar8 & (iVar8 >> 0x1f ^ 0xff);
            goto code_r0x08005a48;
        }
        goto code_r0x080051c8;
    case 0x80051e0:
        if (unaff_x26[0xe] == 0) {
            uStack_78 = 0;
            piVar17 = *unaff_x26;
            uStack_88 = CONCAT44(piVar17[0x13],piVar17[0x12]);
            uStack_90 = CONCAT44(*(piVar17 + 0x94),*(*piVar17 + 0x1fc));
            uStack_80 = CONCAT26(piVar17[0xe],CONCAT24(*(*piVar17 + 0x230),*(piVar17 + 0x16)));
            iVar16 = sym._copy_to_user(arg3,in_q0,0x20);
            uVar18 = 0;
            if (iVar16 == 0) goto code_r0x08005bf0;
            uVar18 = 0xfffffffffffffff2;
            goto code_r0x08005bf0;
        }
        uVar18 = 0xffffffffffffffed;
        goto code_r0x08005bf0;
    case 0x80051f8:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar1 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar1 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar1 = unaff_x26[10];
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80052f0:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar3 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar3 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar3 = *(iVar16 + 0x1429);
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80053e8:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar1 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar1 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar1 = 0;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80054dc:
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar1 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar1 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar1 = 0x7748;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80055d4:
        if (unaff_x26[0xe] != 0) goto code_r0x08004714;
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar3 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar3 = NULL;
            }
            if ((uVar14 >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar3 = *(*(**unaff_x26 + 0xb8) + 0x148) >> 3 & 1;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x80056e8:
        uVar9 = _raw_read_lock_irqsave(iVar16 + 0x30);
        piVar20 = iVar16 + 0x90;
        piVar17 = *piVar20;
        if (piVar17 == piVar20) {
            iVar8 = 0;
        }
        else {
            iVar8 = 0;
            do {
                if ((*(piVar17 + 0xf3) == '\x01') && (*(piVar17 + 0xf2) == '\0')) {
                    iVar8 = iVar8 + 1;
                }
                piVar17 = *piVar17;
            } while (piVar17 != piVar20);
        }
        _raw_read_unlock_irqrestore(iVar16 + 0x30,uVar9);
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            piVar13 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                piVar13 = NULL;
            }
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *piVar13 = iVar8;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x800573c:
        iVar11 = iVar16 + 0x30;
        uVar9 = _raw_read_lock_irqsave(iVar11);
        for (piVar17 = *(iVar16 + 0x90); piVar17 != iVar16 + 0x90; piVar17 = *piVar17) {
            if ((*(piVar17 + 0xf3) == '\x01') && (*(piVar17 + 0xf2) == '\0')) {
                _raw_read_unlock_irqrestore(iVar11,uVar9);
                puVar12 = sp_el0;
                if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
                    uVar18 = arg3 & (arg3 << 8) >> 8;
                }
                bVar5 = 0xfffffffffffffffb < uVar18;
                uVar18 = uVar18 + 4;
                uVar15 = 0;
                if (!bVar5 || uVar18 == 0) {
                    uVar15 = 0x7fffffffff;
                }
                if (bVar5) {
                    uVar18 = 0xffffffffffffffff;
                }
                if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
                    puVar1 = arg3;
                    if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                        puVar1 = NULL;
                    }
                    if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                        uVar18 = daif;
                        if ((uVar18 & 0x80) == 0) {
                            uVar15 = daif;
                            daif = uVar15 | 0xc0;
                        }
                        uVar15 = ttbr1_el1;
                        ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar12[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar18;
                    }
                    *puVar1 = *(piVar17 + 0xd);
                    if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
                    uVar18 = daif;
                    if ((uVar18 & 0x80) == 0) {
                        uVar15 = daif;
                        daif = uVar15 | 0xc0;
                    }
                    uVar15 = ttbr1_el1;
                    ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar15 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar18;
                    goto code_r0x08005bec;
                }
                goto code_r0x08005c18;
            }
        }
        _raw_read_unlock_irqrestore(iVar11,uVar9);
        puVar12 = sp_el0;
        if (((*(puVar12 + 0x3e) >> 5 & 1) != 0) || (uVar18 = arg3, (*puVar12 >> 0x1a & 1) != 0)) {
            uVar18 = arg3 & (arg3 << 8) >> 8;
        }
        bVar5 = 0xfffffffffffffffb < uVar18;
        uVar18 = uVar18 + 4;
        uVar15 = 0;
        if (!bVar5 || uVar18 == 0) {
            uVar15 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar18 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar18,~uVar15) && !CARRY8(uVar18 + ~uVar15,bVar5) || uVar18 == uVar15 + !bVar5) {
            puVar1 = arg3;
            if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                puVar1 = NULL;
            }
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
                uVar18 = daif;
                if ((uVar18 & 0x80) == 0) {
                    uVar15 = daif;
                    daif = uVar15 | 0xc0;
                }
                uVar15 = ttbr1_el1;
                ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar12[1];
                InstructionSynchronizationBarrier();
                daif = uVar18;
            }
            *puVar1 = 0xffffffff;
            if ((_kmem_cache_alloc_trace >> 0x18 & 1) != 0) goto code_r0x08005bec;
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
            goto code_r0x08005bec;
        }
        break;
    case 0x8005978:
        uVar18 = *(iVar16 + 0x6c);
        goto code_r0x08005bf0;
    case 0x8005984:
        if (unaff_x26[0xe] == 0) {
            iVar8 = scsi_block_when_processing_errors(*unaff_x26);
            unaff_x19 = arg3;
            unaff_x21 = arg1;
            if (iVar8 != 0) {
                iVar8 = sym.sg_new_write(iVar16,arg1,arg3,0x58);
                if (iVar8 < 0) {
                    uVar18 = iVar8;
                    goto code_r0x08005bf0;
                }
                iVar11 = iVar16 + 0x30;
                uVar9 = _raw_read_lock_irqsave(iVar11);
                cVar4 = *0xf3;
                _raw_read_unlock_irqrestore(iVar11,uVar9);
                if (cVar4 == '\0') {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    while( true ) {
                        iVar10 = prepare_to_wait_event(iVar16 + 0x18,&stack0xffffffffffffff70,1);
                        uVar9 = _raw_read_lock_irqsave(iVar11);
                        cVar4 = *0xf3;
                        _raw_read_unlock_irqrestore(iVar11,uVar9);
                        if (cVar4 != '\0') break;
                        if (iVar10 != 0) {
                            uVar18 = iVar10;
                            goto code_r0x08005cf0;
                        }
                        schedule();
                    }
                    finish_wait(iVar16 + 0x18,&stack0xffffffffffffff70);
                }
                uVar18 = 0;
code_r0x08005cf0:
                _raw_write_lock_irq(iVar11);
                if (*0xf3 == '\0') {
                    *0xf1 = 1;
                    _raw_write_unlock_irq(iVar11);
                    goto code_r0x08005bf0;
                }
                *0xf3 = '\x02';
                _raw_write_unlock_irq(iVar11);
                uVar7 = sym.sg_new_read(iVar16,arg3,0x58,0);
                uVar18 = uVar7 & (uVar7 << 0x20) >> 0x3f;
                goto code_r0x08005bf0;
            }
            goto code_r0x08005a40;
        }
code_r0x08004714:
        uVar18 = 0xffffffffffffffed;
    case 0x8005a48:
        goto code_r0x08005a48;
    }
code_r0x08005c18:
    uVar18 = 0xfffffffffffffff2;
code_r0x08005a48:
    while (iVar16 = sp_el0, *(iVar16 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        puVar12 = extraout_x8;
        piVar13 = extraout_x9;
        iVar8 = extraout_w10;
code_r0x08005dd8:
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr1_el1 = puVar12[1] & 0xffff000000000000 | uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar12[1];
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
        *piVar13 = iVar8;
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar18 = daif;
            if ((uVar18 & 0x80) == 0) {
                uVar15 = daif;
                daif = uVar15 | 0xc0;
            }
            uVar15 = ttbr1_el1;
            ttbr0_el1 = (uVar15 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar15 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar18;
        }
code_r0x08005bec:
        uVar18 = 0;
code_r0x08005bf0:
        if (uVar18 == -0x203) {
            iVar8 = scsi_ioctl(*unaff_x26,0,*(arg1 + 0x44),unaff_x20 & 0xffffffff,arg3);
            uVar18 = iVar8;
        }
    }
    return uVar18;
}


// ===== sym.sg_mmap @ 0x08006554 (size 200) =====

uint sym.sg_mmap(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0xfffffffa;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar4 = *(arg1 + 0xd8);
        if (iVar4 == 0) {
            uVar3 = 0xfffffffa;
        }
        else if (*(arg2 + 0x98) == 0) {
            iVar1 = *arg2;
            iVar2 = *(arg2 + 8);
            mutex_lock(iVar4 + 0x38);
            if (*(iVar4 + 0x78) < iVar2 - iVar1) {
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = 0;
                *(iVar4 + 0x142c) = 1;
                *(arg2 + 0xa8) = iVar4;
                *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4044000;
                *(arg2 + 0x90) = obj.sg_mmap_vm_ops;
            }
            mutex_unlock(iVar4 + 0x38);
        }
        else {
            uVar3 = 0xffffffea;
        }
    }
    return uVar3;
}


// ===== sym.sg_open @ 0x0800661c (size 580) =====

uint64_t sym.sg_open(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *arg1_00;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = *(arg1 + 0x4c);
    uVar2 = *(arg2 + 0x40);
    nonseekable_open();
    if (((uVar2 >> 7 & 1) != 0) && ((uVar2 & 3) == 0)) {
        uVar9 = 0xffffffff;
        goto code_r0x08006818;
    }
    arg1_00 = sym.sg_get_dev(uVar6 & 0xfffff);
    if (0xfffffffffffff000 < arg1_00) {
        uVar9 = arg1_00 & 0xffffffff;
        goto code_r0x08006818;
    }
    uVar7 = scsi_device_get(*arg1_00);
    uVar9 = uVar7 & 0xffffffff;
    if (uVar7 == 0) {
        uVar7 = scsi_autopm_get_device(*arg1_00);
        uVar9 = uVar7 & 0xffffffff;
        if (uVar7 == 0) {
            if ((uVar2 >> 0xb & 1) == 0) {
                iVar5 = scsi_block_when_processing_errors(*arg1_00);
                if (iVar5 != 0) {
                    mutex_lock(arg1_00 + 4);
                    uVar6 = sym.open_wait(arg1_00);
                    if (uVar6 == 0) {
                        if ((uVar2 >> 7 & 1) != 0) goto code_r0x08006780;
                        goto code_r0x08006788;
                    }
                    uVar9 = uVar6;
                    goto code_r0x080066f8;
                }
                uVar9 = 0xfffffffa;
            }
            else {
                mutex_lock(arg1_00 + 4);
                if ((uVar2 >> 7 & 1) == 0) {
                    if (*(arg1_00 + 0x74) != '\0') {
code_r0x080066f4:
                        uVar9 = 0xfffffff0;
                        goto code_r0x080066f8;
                    }
                }
                else {
                    if (0 < arg1_00[0xf]) goto code_r0x080066f4;
code_r0x08006780:
                    *(arg1_00 + 0x74) = 1;
                }
code_r0x08006788:
                if (arg1_00[0xf] < 1) {
                    *(arg1_00 + 0x7c) = 0;
                    *(arg1_00 + 10) = *(*(*arg1_00 + 8) + 0x510);
                }
                uVar9 = sym.sg_add_sfp(arg1_00);
                if (uVar9 < 0xfffffffffffff001) {
                    *(arg2 + 0xd8) = uVar9;
                    *(arg1_00 + 0xf) = arg1_00[0xf] + 1;
                    mutex_unlock(arg1_00 + 4);
                    uVar9 = 0;
                    goto code_r0x08006718;
                }
                if ((uVar2 >> 7 & 1) != 0) {
                    *(arg1_00 + 0x74) = 0;
                    __wake_up(arg1_00 + 1,1,1,0);
                }
code_r0x080066f8:
                mutex_unlock(arg1_00 + 4);
            }
            scsi_autopm_put_device(*arg1_00);
        }
        scsi_device_put(*arg1_00);
    }
code_r0x08006718:
    piVar1 = arg1_00 + 0x15;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (iVar5 == 1) {
        DataMemoryBarrier(2,1);
        uVar8 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(arg1_00 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar8);
        kfree(arg1_00);
    }
    else if (iVar5 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
code_r0x08006818:
    return uVar9 & 0xffffffff;
}


// ===== sym.sg_release @ 0x08006860 (size 440) =====

ulong sym.sg_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(arg1 + 0xd8);
    if ((piVar9 == NULL) || (puVar10 = piVar9[2], puVar10 == NULL)) {
        return 0xfffffffa;
    }
    mutex_lock(puVar10 + 4);
    scsi_autopm_put_device(*puVar10);
    piVar7 = piVar9 + 0x286;
    Hint_Prefetch(piVar7,2,0,1);
    do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
            *piVar7 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        iVar6 = piVar9[2];
        uVar5 = _raw_write_lock_irqsave(iVar6 + 0x68);
        uVar4 = __list_del_entry_valid(piVar9);
        if ((uVar4 & 1) != 0) {
            iVar8 = *piVar9;
            piVar7 = piVar9[1];
            *(iVar8 + 8) = piVar7;
            *piVar7 = iVar8;
        }
        *piVar9 = -0x2152ffffffffff00;
        piVar9[1] = -0x2152fffffffffede;
        _raw_write_unlock_irqrestore(iVar6 + 0x68,uVar5);
        piVar9[0x287] = 0xfffffffe0;
        piVar9[0x288] = piVar9 + 0x288;
        piVar9[0x289] = piVar9 + 0x288;
        piVar9[0x28a] = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        queue_work_on(0x20,__raw_write_lock_irqsave,piVar9 + 0x287);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(piVar7,3);
    }
    iVar1 = *(puVar10 + 0xf);
    *(puVar10 + 0xf) = iVar1 + -1;
    if (*(puVar10 + 0x74) == '\0') {
        if (iVar1 + -1 != 0) goto code_r0x080069c0;
        uVar5 = 1;
    }
    else {
        uVar5 = 0;
        *(puVar10 + 0x74) = 0;
    }
    __wake_up(puVar10 + 1,1,uVar5,0);
code_r0x080069c0:
    mutex_unlock(puVar10 + 4);
    return 0;
}


// ===== sym.sg_fasync @ 0x08006a18 (size 64) =====

ulong sym.sg_fasync(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0xd8) == 0) || (*(*(arg1 + 0xd8) + 0x10) == 0)) {
        uVar1 = 0xfffffffa;
    }
    else {
        uVar1 = fasync_helper();
    }
    return uVar1;
}


// ===== sym.get_sg_io_pack_id @ 0x08006a58 (size 1096) =====

uint sym.get_sg_io_pack_id(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int *piVar1;
    uint *puVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    bool bVar6;
    uint32_t uVar7;
    int *piVar8;
    uint *puVar9;
    ulong *in_x18;
    uint uVar10;
    uint uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = 0;
    uVar11 = 0xffffffff;
    if (0x23 < arg3) {
        piVar1 = arg2 + 4;
        puVar4 = sp_el0;
        uVar5 = piVar1 * 0x100 >> 8;
        if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (piVar8 = piVar1, (*puVar4 >> 0x1a & 1) != 0)) {
            piVar8 = piVar1 & uVar5;
        }
        bVar6 = 0xfffffffffffffffb < piVar8;
        piVar8 = piVar8 + 1;
        uVar3 = 0;
        if (!bVar6 || piVar8 == NULL) {
            uVar3 = 0x7fffffffff;
        }
        if (bVar6) {
            piVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(piVar8,~uVar3) || CARRY8(piVar8 + ~uVar3,bVar6)) && piVar8 != uVar3 + !bVar6) {
            return 0xfffffff2;
        }
        if ((piVar1 & uVar5 & 0xffffff8000000000) != 0) {
            piVar1 = NULL;
        }
        uVar7 = _kmem_cache_alloc_trace;
        if ((uVar7 >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar4[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((uVar7 >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if (*piVar1 < 0) {
            if ((arg3 < 0x40) || ((*puVar4 >> 0x16 & 1) == 0)) {
                uVar10 = 0;
                uVar11 = 0xffffffff;
                if (0x57 < arg3) {
                    puVar2 = arg2 + 0x30;
                    uVar5 = puVar2 * 0x100 >> 8;
                    if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (puVar9 = puVar2, (*puVar4 >> 0x1a & 1) != 0)) {
                        puVar9 = puVar2 & uVar5;
                    }
                    uVar11 = 0;
                    uVar10 = 0xfffffff2;
                    bVar6 = 0xfffffffffffffffb < puVar9;
                    puVar9 = puVar9 + 1;
                    uVar3 = 0;
                    if (!bVar6 || puVar9 == NULL) {
                        uVar3 = 0x7fffffffff;
                    }
                    if (bVar6) {
                        puVar9 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(puVar9,~uVar3) && !CARRY8(puVar9 + ~uVar3,bVar6) || puVar9 == uVar3 + !bVar6) {
                        if ((puVar2 & uVar5 & 0xffffff8000000000) != 0) {
                            puVar2 = NULL;
                        }
                        sym.uaccess_ttbr0_enable();
                        uVar10 = 0;
                        uVar11 = *puVar2;
                        sym.uaccess_ttbr0_disable();
                    }
                }
            }
            else {
                puVar2 = arg2 + 0x24;
                uVar5 = puVar2 * 0x100 >> 8;
                if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (puVar9 = puVar2, (*puVar4 >> 0x1a & 1) != 0)) {
                    puVar9 = puVar2 & uVar5;
                }
                uVar11 = 0;
                uVar10 = 0xfffffff2;
                bVar6 = 0xfffffffffffffffb < puVar9;
                puVar9 = puVar9 + 1;
                uVar3 = 0;
                if (!bVar6 || puVar9 == NULL) {
                    uVar3 = 0x7fffffffff;
                }
                if (bVar6) {
                    puVar9 = 0xffffffffffffffff;
                }
                if (!CARRY8(puVar9,~uVar3) && !CARRY8(puVar9 + ~uVar3,bVar6) || puVar9 == uVar3 + !bVar6) {
                    if ((puVar2 & uVar5 & 0xffffff8000000000) != 0) {
                        puVar2 = NULL;
                    }
                    if ((uVar7 >> 0x18 & 1) == 0) {
                        uVar5 = daif;
                        if ((uVar5 & 0x80) == 0) {
                            uVar3 = daif;
                            daif = uVar3 | 0xc0;
                        }
                        uVar3 = ttbr1_el1;
                        ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar4[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar5;
                    }
                    uVar10 = 0;
                    uVar11 = *puVar2;
                    if ((uVar7 >> 0x18 & 1) == 0) {
                        uVar5 = daif;
                        if ((uVar5 & 0x80) == 0) {
                            uVar3 = daif;
                            daif = uVar3 | 0xc0;
                        }
                        uVar3 = ttbr1_el1;
                        ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
                        InstructionSynchronizationBarrier();
                        ttbr1_el1 = uVar3 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        daif = uVar5;
                    }
                }
            }
        }
        else {
            puVar2 = arg2 + 8;
            uVar5 = puVar2 * 0x100 >> 8;
            if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (puVar9 = puVar2, (*puVar4 >> 0x1a & 1) != 0)) {
                puVar9 = puVar2 & uVar5;
            }
            uVar11 = 0;
            uVar10 = 0xfffffff2;
            bVar6 = 0xfffffffffffffffb < puVar9;
            puVar9 = puVar9 + 1;
            uVar3 = 0;
            if (!bVar6 || puVar9 == NULL) {
                uVar3 = 0x7fffffffff;
            }
            if (bVar6) {
                puVar9 = 0xffffffffffffffff;
            }
            if (!CARRY8(puVar9,~uVar3) && !CARRY8(puVar9 + ~uVar3,bVar6) || puVar9 == uVar3 + !bVar6) {
                if ((puVar2 & uVar5 & 0xffffff8000000000) != 0) {
                    puVar2 = NULL;
                }
                if ((uVar7 >> 0x18 & 1) == 0) {
                    uVar5 = daif;
                    if ((uVar5 & 0x80) == 0) {
                        uVar3 = daif;
                        daif = uVar3 | 0xc0;
                    }
                    uVar3 = ttbr1_el1;
                    ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar4[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar5;
                }
                uVar10 = 0;
                uVar11 = *puVar2;
                if ((uVar7 >> 0x18 & 1) == 0) {
                    uVar5 = daif;
                    if ((uVar5 & 0x80) == 0) {
                        uVar3 = daif;
                        daif = uVar3 | 0xc0;
                    }
                    uVar3 = ttbr1_el1;
                    ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar3 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar5;
                }
            }
        }
    }
    *arg1 = uVar11;
    return uVar10;
}


// ===== sym.sg_new_read @ 0x08006f3c (size 348) =====

int64_t sym.sg_new_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong *puVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    puVar3 = sp_el0;
    if ((*puVar3 >> 0x16 & 1) == 0) {
        if (arg3 < 0x58) {
code_r0x08007000:
            iVar4 = -0x16;
            goto code_r0x08007048;
        }
    }
    else if (arg3 < 0x40) goto code_r0x08007000;
    uVar2 = *(arg4 + 0x41);
    *(arg4 + 0x7b) = 0;
    if (((uVar2 != 0) && (iVar7 = *(arg4 + 0x58), iVar7 != 0)) &&
       (((*(arg4 + 0x79) & 1) != 0 || ((~*(arg4 + 0x90) & 0x70) == 0)))) {
        uVar6 = uVar2;
        if (0x5f < uVar2) {
            uVar6 = 0x60;
        }
        uVar1 = *(arg4 + 0x97) + 8;
        if (uVar1 <= uVar6) {
            uVar6 = uVar1;
        }
        noname_1 = __check_object_size(arg4 + 0x90,uVar6,1);
        iVar7 = sym._copy_to_user(iVar7,noname_1,uVar6);
        if (iVar7 != 0) {
            iVar4 = -0xe;
            goto code_r0x08007048;
        }
        *(arg4 + 0x7b) = uVar6;
        *(arg4 + 0x7e) = 8;
    }
    if (((*(arg4 + 0x79) != '\0') || (*(arg4 + 0x7c) != 0)) || (*(arg4 + 0x7e) != 0)) {
        *(arg4 + 0x88) = *(arg4 + 0x88) | 1;
    }
    iVar4 = put_sg_io_hdr(arg4 + 0x38,arg2);
code_r0x08007048:
    iVar5 = sym.sg_finish_rem_req(arg4);
    sym.sg_remove_request(arg1,arg4);
    if (iVar5 != 0) {
        arg3 = iVar5;
    }
    if (iVar4 != 0) {
        arg3 = iVar4;
    }
    return arg3;
}


// ===== sym.sg_read_oxfer @ 0x08007098 (size 364) =====

ulong sym.sg_read_oxfer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int iVar6;
    uint64_t arg2_00;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    
    *in_x18 = unaff_x30;
    if (((arg2 != 0) && (arg2_00 = arg3 & 0xffffffff, 0 < arg3)) && (*(arg1 + 0x18) != 0)) {
        uVar8 = 0;
        uVar1 = *(arg1 + 0x30) + 0xc;
        iVar2 = 1 << (uVar1 & 0x1f);
        iVar7 = iVar2;
        do {
            iVar5 = *(*(arg1 + 0x28) + uVar8 * 8);
            if (iVar5 == 0) {
                return 0;
            }
            uVar4 = iVar5 << 6;
            iVar6 = arg2_00;
            if (iVar6 < iVar2) {
                auVar9 = __check_object_size(uVar4 & 0xfffffffffff000 | 0xff00000000000000,arg2_00,1);
                iVar7 = sym._copy_to_user(arg2,auVar9,arg2_00);
                if (iVar7 == 0) {
                    return 0;
                }
                return 0xfffffff2;
            }
            if (uVar1 == 0x1f) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8007204);
                (*pcVar3)();
            }
            auVar9 = __check_object_size(uVar4 & 0xfffffffffff000 | 0xff00000000000000,iVar7,1);
            iVar5 = sym._copy_to_user(arg2,auVar9,iVar7);
            if (iVar5 != 0) {
                return 0xfffffff2;
            }
            if (iVar6 - iVar2 < 1) {
                return 0;
            }
            arg2_00 = iVar6 - iVar2;
            arg2 = arg2 + iVar7;
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(arg1 + 0x18));
    }
    return 0;
}


// ===== sym.sg_finish_rem_req @ 0x08007208 (size 284) =====

uint sym.sg_finish_rem_req(int64_t arg1)

{
    char cVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x10);
    if (*(arg1 + 0x100) == 0) {
        uVar2 = 0;
        iVar3 = *(arg1 + 0xf8);
    }
    else {
        uVar2 = blk_rq_unmap_user();
        iVar3 = *(arg1 + 0xf8);
    }
    if (iVar3 == 0) {
        cVar1 = *(arg1 + 0xf0);
    }
    else {
        if (*(iVar3 + 0x140) != iVar3 + 0x130) {
            kfree(*(iVar3 + 0x140));
            iVar3 = *(arg1 + 0xf8);
        }
        blk_put_request(iVar3);
        cVar1 = *(arg1 + 0xf0);
    }
    if (cVar1 == '\0') {
        piVar4 = *(arg1 + 0x28);
        if (((piVar4 != NULL) && (*(arg1 + 0x1c) != 0)) && (*(arg1 + 0x34) == '\0')) {
            if ((*(arg1 + 0x18) != 0) && (iVar5 = *piVar4, iVar5 != 0)) {
                uVar6 = 1;
                do {
                    __free_pages(iVar5,*(arg1 + 0x30));
                    if (*(arg1 + 0x18) <= uVar6) {
                        piVar4 = *(arg1 + 0x28);
                        break;
                    }
                    piVar4 = *(arg1 + 0x28);
                    iVar5 = piVar4[uVar6];
                    uVar6 = uVar6 + 1;
                } while (iVar5 != 0);
            }
            kfree(piVar4);
        }
        *(arg1 + 0x28) = 0;
        *(arg1 + 0x30) = 0;
        *(arg1 + 0x18) = 0;
        *(arg1 + 0x20) = 0;
    }
    else {
        *(arg1 + 0x18) = 0;
        *(arg1 + 0x28) = 0;
        *(arg1 + 0x30) = 0;
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0xf0) = 0;
        *(iVar5 + 0x142d) = 0;
    }
    return uVar2;
}


// ===== sym.sg_remove_request @ 0x08007324 (size 208) =====

void sym.sg_remove_request(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (arg2 != 0)) && (arg1 + 0x90 != *(arg1 + 0x90))) {
        uVar3 = _raw_write_lock_irqsave(arg1 + 0x30);
        if (arg2 != *arg2) {
            uVar4 = __list_del_entry_valid(arg2);
            if ((uVar4 & 1) != 0) {
                iVar1 = *arg2;
                piVar2 = *(arg2 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *(arg2 + 0x10) = 0;
            *arg2 = 0xdead000000000100;
            *(arg2 + 8) = 0xdead000000000122;
        }
        _raw_write_unlock_irqrestore(arg1 + 0x30,uVar3);
        if (*(*(arg1 + 0x10) + 0x70) != 0) {
            __wake_up(arg1 + 0x18,1,0,0);
        }
    }
    return;
}


// ===== sym.uaccess_ttbr0_enable @ 0x08007400 (size 112) =====

void sym.uaccess_ttbr0_enable(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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


// ===== sym.uaccess_ttbr0_disable @ 0x08007490 (size 100) =====

void sym.uaccess_ttbr0_disable(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user @ 0x08007510 (size 312) =====

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
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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


// ===== sym.sg_new_write @ 0x08007684 (size 628) =====

int64_t * sym.sg_new_write(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t *piVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    int in_w4;
    uchar in_w5;
    int64_t *in_x6;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    ulong *puVar11;
    ulong unaff_x30;
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
    uint uStack_78;
    int64_t iStack_70;
    
    piVar10 = arg4;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_70 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
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
    uStack_170 = 0;
    if (piVar10 < 0x58) {
        piVar10 = 0xffffffffffffffea;
    }
    else {
        *(arg1 + 0x1429) = 1;
        iVar6 = sym.sg_add_request(arg1);
        if (iVar6 == 0) {
            piVar10 = 0xffffffffffffffdf;
        }
        else {
            *(iVar6 + 0xf2) = in_w5;
            iVar3 = get_sg_io_hdr(iVar6 + 0x38,arg3);
            if (iVar3 == 0) {
                if (*(iVar6 + 0x38) == 0x53) {
                    if ((*(iVar6 + 100) >> 2 & 1) == 0) {
code_r0x0800778c:
                        uVar8 = __msecs_to_jiffies(*(iVar6 + 0x60));
                        iVar9 = *(iVar6 + 0x50);
                        uVar4 = uVar8;
                        if (0x7ffffffe < uVar8) {
                            uVar4 = 0x7fffffff;
                        }
                        if (iVar9 != 0) {
                            uVar2 = *(iVar6 + 0x40);
                            if ((5 < uVar2) && (2 < uVar2 - 0xfd)) {
                                __check_object_size(&uStack_170,uVar2,0);
                                iVar9 = sym._copy_from_user(&uStack_170,iVar9,uVar2);
                                if (iVar9 != 0) goto code_r0x0800775c;
                                if ((in_w4 == 0) || (iVar3 = sym.sg_allow_access(arg2,&uStack_170), iVar3 == 0)) {
                                    iVar3 = sym.sg_common_write(arg1,iVar6,&uStack_170,uVar4);
                                    if (iVar3 < 0) {
                                        piVar10 = iVar3;
                                    }
                                    else if (in_x6 != NULL) {
                                        *in_x6 = iVar6;
                                    }
                                }
                                else {
                                    sym.sg_remove_request(arg1,iVar6);
                                    piVar10 = 0xffffffffffffffff;
                                }
                                goto code_r0x080077e4;
                            }
                        }
                        sym.sg_remove_request(arg1,iVar6);
                        piVar10 = 0xffffffffffffffa6;
                    }
                    else if (*(arg1 + 0x78) < *(iVar6 + 0x44)) {
                        sym.sg_remove_request(arg1,iVar6);
                        piVar10 = 0xfffffffffffffff4;
                    }
                    else if ((*(iVar6 + 100) & 1) == 0) {
                        if (*(arg1 + 0x142d) == '\0') goto code_r0x0800778c;
                        sym.sg_remove_request(arg1,iVar6);
                        piVar10 = 0xfffffffffffffff0;
                    }
                    else {
                        sym.sg_remove_request(arg1,iVar6);
                        piVar10 = 0xffffffffffffffea;
                    }
                }
                else {
                    sym.sg_remove_request(arg1,iVar6);
                    piVar10 = 0xffffffffffffffda;
                }
            }
            else {
code_r0x0800775c:
                sym.sg_remove_request(arg1,iVar6);
                piVar10 = 0xfffffffffffffff2;
            }
        }
    }
code_r0x080077e4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_70) {
        return piVar10;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.sg_add_request;
    piVar10 = iVar6 + 0xa8;
    uVar7 = _raw_write_lock_irqsave(iVar6 + 0x30);
    piVar1 = iVar6 + 0x90;
    if (piVar1 != *piVar1) {
        if (*(iVar6 + 0x1429) == '\0') {
code_r0x080079c8:
            piVar10 = NULL;
            goto code_r0x08007a90;
        }
        if (*(iVar6 + 0xb8) != 0) {
            if (*(iVar6 + 0x1f0) == 0) {
                piVar10 = iVar6 + 0x1e0;
            }
            else if (*(iVar6 + 0x328) == 0) {
                piVar10 = iVar6 + 0x318;
            }
            else if (*(iVar6 + 0x460) == 0) {
                piVar10 = iVar6 + 0x450;
            }
            else if (*(iVar6 + 0x598) == 0) {
                piVar10 = iVar6 + 0x588;
            }
            else if (*(iVar6 + 0x6d0) == 0) {
                piVar10 = iVar6 + 0x6c0;
            }
            else if (*(iVar6 + 0x808) == 0) {
                piVar10 = iVar6 + 0x7f8;
            }
            else if (*(iVar6 + 0x940) == 0) {
                piVar10 = iVar6 + 0x930;
            }
            else if (*(iVar6 + 0xa78) == 0) {
                piVar10 = iVar6 + 0xa68;
            }
            else if (*(iVar6 + 0xbb0) == 0) {
                piVar10 = iVar6 + 0xba0;
            }
            else if (*(iVar6 + 0xce8) == 0) {
                piVar10 = iVar6 + 0xcd8;
            }
            else if (*(iVar6 + 0xe20) == 0) {
                piVar10 = iVar6 + 0xe10;
            }
            else if (*(iVar6 + 0xf58) == 0) {
                piVar10 = iVar6 + 0xf48;
            }
            else {
                if (*(iVar6 + 0x1090) == 0) {
                    iVar9 = 0x1080;
                }
                else if (*(iVar6 + 0x11c8) == 0) {
                    iVar9 = 0x11b8;
                }
                else {
                    if (*(iVar6 + 0x1300) != 0) goto code_r0x080079c8;
                    iVar9 = 0x12f0;
                }
                piVar10 = iVar6 + iVar9;
            }
        }
    }
    memset(piVar10,0,0x138);
    piVar10[2] = iVar6;
    uVar5 = jiffies_to_msecs(_cdev_alloc);
    *(piVar10 + 0x84) = uVar5;
    puVar11 = *(iVar6 + 0x98);
    uVar8 = __list_add_valid(piVar10,puVar11,piVar1);
    if ((uVar8 & 1) != 0) {
        *(iVar6 + 0x98) = piVar10;
        *piVar10 = piVar1;
        piVar10[1] = puVar11;
        *puVar11 = piVar10;
    }
code_r0x08007a90:
    _raw_write_unlock_irqrestore(iVar6 + 0x30,uVar7);
    return piVar10;
}


// ===== sym.sg_add_request @ 0x080078f8 (size 452) =====

int64_t * sym.sg_add_request(int64_t arg1)

{
    int64_t *piVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = arg1 + 0xa8;
    uVar3 = _raw_write_lock_irqsave(arg1 + 0x30);
    piVar1 = arg1 + 0x90;
    if (piVar1 != *piVar1) {
        if (*(arg1 + 0x1429) == '\0') {
code_r0x080079c8:
            piVar6 = NULL;
            goto code_r0x08007a90;
        }
        if (*(arg1 + 0xb8) != 0) {
            if (*(arg1 + 0x1f0) == 0) {
                piVar6 = arg1 + 0x1e0;
            }
            else if (*(arg1 + 0x328) == 0) {
                piVar6 = arg1 + 0x318;
            }
            else if (*(arg1 + 0x460) == 0) {
                piVar6 = arg1 + 0x450;
            }
            else if (*(arg1 + 0x598) == 0) {
                piVar6 = arg1 + 0x588;
            }
            else if (*(arg1 + 0x6d0) == 0) {
                piVar6 = arg1 + 0x6c0;
            }
            else if (*(arg1 + 0x808) == 0) {
                piVar6 = arg1 + 0x7f8;
            }
            else if (*(arg1 + 0x940) == 0) {
                piVar6 = arg1 + 0x930;
            }
            else if (*(arg1 + 0xa78) == 0) {
                piVar6 = arg1 + 0xa68;
            }
            else if (*(arg1 + 0xbb0) == 0) {
                piVar6 = arg1 + 0xba0;
            }
            else if (*(arg1 + 0xce8) == 0) {
                piVar6 = arg1 + 0xcd8;
            }
            else if (*(arg1 + 0xe20) == 0) {
                piVar6 = arg1 + 0xe10;
            }
            else if (*(arg1 + 0xf58) == 0) {
                piVar6 = arg1 + 0xf48;
            }
            else {
                if (*(arg1 + 0x1090) == 0) {
                    iVar5 = 0x1080;
                }
                else if (*(arg1 + 0x11c8) == 0) {
                    iVar5 = 0x11b8;
                }
                else {
                    if (*(arg1 + 0x1300) != 0) goto code_r0x080079c8;
                    iVar5 = 0x12f0;
                }
                piVar6 = arg1 + iVar5;
            }
        }
    }
    memset(piVar6,0,0x138);
    piVar6[2] = arg1;
    uVar2 = jiffies_to_msecs(_cdev_alloc);
    *(piVar6 + 0x84) = uVar2;
    puVar7 = *(arg1 + 0x98);
    uVar4 = __list_add_valid(piVar6,puVar7,piVar1);
    if ((uVar4 & 1) != 0) {
        *(arg1 + 0x98) = piVar6;
        *piVar6 = piVar1;
        piVar6[1] = puVar7;
        *puVar7 = piVar6;
    }
code_r0x08007a90:
    _raw_write_unlock_irqrestore(arg1 + 0x30,uVar3);
    return piVar6;
}


// ===== sym.sg_common_write @ 0x08007ac0 (size 1300) =====

uint64_t sym.sg_common_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uchar uVar3;
    uint8_t uVar4;
    int16_t iVar5;
    int iVar6;
    char cVar7;
    bool bVar8;
    uint32_t uVar9;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    ulong uVar15;
    ulong *puVar16;
    int iVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t unaff_x22;
    uint64_t uVar19;
    int64_t arg2_00;
    ulong unaff_x30;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    uVar3 = *arg3;
    uVar1 = *(arg2 + 0x44);
    iVar18 = *(arg1 + 0x10);
    *(arg2 + 0x78) = 0;
    *(arg2 + 0x35) = uVar3;
    *(arg2 + 0x7a) = 0;
    *(arg2 + 0x88) = 0;
    *(arg2 + 0x7c) = 0;
    if (uVar1 >> 0x1c != 0) {
        sym.sg_remove_request(arg1,arg2);
        uVar19 = 0xffffffea;
        goto code_r0x08007f54;
    }
    arg2_00 = *(arg2 + 0x10);
    iVar2 = *(arg2 + 0x3c);
    iVar5 = *(arg2 + 0x42);
    unaff_x22 = *(**(arg2_00 + 0x10) + 8);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    if (0x10 < *(arg2 + 0x40)) {
        iVar11 = __kmalloc(*(arg2 + 0x40),0xdc0);
        if (iVar11 != 0) {
            iVar17 = *(arg2 + 0x3c);
            goto code_r0x08007ba4;
        }
        uVar19 = 0xfffffff4;
        goto code_r0x08007f40;
    }
    iVar11 = 0;
    iVar17 = iVar2;
code_r0x08007ba4:
    uVar10 = 0x22;
    if (iVar17 == -2) {
        uVar10 = 0x23;
    }
    uVar12 = blk_get_request(unaff_x22,uVar10,0);
    if (uVar12 < 0xfffffffffffff001) {
        uVar4 = *(arg2 + 0x40);
        if (uVar4 < 0x11) {
            iVar11 = *(uVar12 + 0x140);
        }
        else {
            *(uVar12 + 0x140) = iVar11;
            uVar4 = *(arg2 + 0x40);
        }
        memcpy(iVar11,arg3,uVar4);
        *(uVar12 + 0x148) = *(arg2 + 0x40);
        *(arg2 + 0xf8) = uVar12;
        *(uVar12 + 0x120) = arg2;
        *(uVar12 + 0x158) = 0;
        if ((uVar1 != 0) && (iVar2 != -1)) {
            if ((*0x8001000 == 0) || ((((*(arg2 + 100) & 1) == 0 || (iVar2 == -5)) || (iVar5 != 0)))) {
code_r0x08007c88:
                iVar11 = arg2_00 + 0x38;
                mutex_lock(iVar11);
                if ((*(arg2_00 + 0x78) < uVar1) || (*(arg2_00 + 0x142d) != '\0')) {
                    if ((*(arg2 + 100) >> 2 & 1) == 0) {
                        uVar9 = sym.sg_build_indirect(arg2 + 0x18,arg2_00,uVar1);
                        if (uVar9 == 0) goto code_r0x08007d54;
                    }
                    else {
                        uVar9 = 0xfffffff4;
                        if (uVar1 <= *(arg2_00 + 0x78)) {
                            uVar9 = 0xfffffff0;
                        }
                    }
                    uVar19 = uVar9;
                    mutex_unlock(iVar11);
                }
                else {
                    *(arg2_00 + 0x142d) = '\x01';
                    *(arg2 + 0xf0) = 1;
                    if (*(arg2_00 + 0x70) != 0) {
                        uVar9 = 0;
                        iVar6 = 1 << (*(arg2_00 + 0x88) + 0xcU & 0x1f);
                        iVar17 = uVar1 + iVar6;
                        do {
                            iVar17 = iVar17 - iVar6;
                            uVar9 = uVar9 + 1;
                            if (iVar17 <= iVar6) {
                                *(arg2 + 0x18) = uVar9;
                                *(arg2 + 0x1c) = *(arg2_00 + 0x74);
                                uVar15 = *(arg2_00 + 0x80);
                                *(arg2 + 0x20) = uVar1;
                                *(arg2 + 0x28) = uVar15;
                                *(arg2 + 0x30) = *(arg2_00 + 0x88);
                                break;
                            }
                        } while (*(arg2_00 + 0x70) != uVar9);
                    }
code_r0x08007d54:
                    mutex_unlock(iVar11);
                    uVar19 = *(arg2 + 0x48);
                    uStack_78 = 0;
                    uStack_88 = *(arg2 + 0x28);
                    uStack_80 = CONCAT24(*(arg2 + 0x18),*(arg2 + 0x30));
                    uStack_70 = CONCAT14(iVar2 == -4,uVar19 == 0);
                    if (iVar5 == 0) {
                        bVar8 = false;
                        puVar16 = &uStack_88;
                        goto code_r0x08007e1c;
                    }
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    uStack_b8 = 0;
                    uVar19 = import_iovec(iVar2 == -2,uVar19,iVar5,0,&uStack_90,&uStack_b8);
                    if (-1 < uVar19) {
                        if (*(arg2 + 0x44) < uStack_a8) {
                            uStack_a8 = *(arg2 + 0x44);
                        }
                        if (uStack_a8 == 0) {
                            kfree(uStack_90);
                            uVar19 = 0xffffffea;
                        }
                        else {
                            uVar13 = blk_rq_map_user_iov(unaff_x22,uVar12,&uStack_88,&uStack_b8,0xa20);
                            uVar19 = uVar13 & 0xffffffff;
                            kfree(uStack_90);
                            if (uVar13 == 0) {
                                *(arg2 + 0x100) = *(uVar12 + 0x38);
                                goto code_r0x08007e58;
                            }
                        }
                    }
                }
            }
            else {
                uVar19 = *(arg2 + 0x48);
                if (unaff_x22 == 0) {
                    uVar9 = 0x1ff;
                }
                else {
                    uVar9 = *(unaff_x22 + 0x104);
                }
                uVar9 = *(unaff_x22 + 0x100) | uVar9;
                if (((uVar9 & uVar19) != 0) || ((uVar9 & uVar1) != 0)) goto code_r0x08007c88;
                puVar16 = NULL;
                bVar8 = true;
code_r0x08007e1c:
                uVar13 = blk_rq_map_user(unaff_x22,uVar12,puVar16,uVar19,*(arg2 + 0x44),0xa20);
                uVar19 = uVar13 & 0xffffffff;
                if (uVar13 == 0) {
                    *(arg2 + 0x100) = *(uVar12 + 0x38);
                    if (bVar8) {
                        *(arg2 + 0x34) = 1;
                        *(arg2 + 0x88) = *(arg2 + 0x88) | 2;
                    }
                    goto code_r0x08007e58;
                }
            }
code_r0x08007f40:
            sym.sg_finish_rem_req(arg2);
            sym.sg_remove_request(arg1,arg2);
            goto code_r0x08007f54;
        }
    }
    else {
        kfree(iVar11);
        uVar19 = uVar12 & 0xffffffff;
        if (uVar12 != 0) goto code_r0x08007f40;
    }
code_r0x08007e58:
    if (*(iVar18 + 0x70) == 0) {
        uVar10 = jiffies_to_msecs(_cdev_alloc);
        *(arg2 + 0x84) = uVar10;
        if ((*(arg2 + 0x38) == 0) || ((*(arg2 + 100) >> 4 & 1) == 0)) {
            unaff_x22 = 1;
        }
        else {
            unaff_x22 = 0;
        }
        puVar14 = arg1 + 0x1430;
        *(*(arg2 + 0xf8) + 0xec) = arg4;
        goto code_r0x08007fa4;
    }
    if (*(arg2 + 0x100) != 0) {
        iVar18 = *(arg2 + 0xf8);
        if (*(iVar18 + 0x140) != iVar18 + 0x130) {
            kfree(*(iVar18 + 0x140));
            iVar18 = *(arg2 + 0xf8);
        }
        blk_put_request(iVar18);
        *(arg2 + 0xf8) = 0;
    }
    sym.sg_finish_rem_req(arg2);
    sym.sg_remove_request(arg1,arg2);
    uVar19 = 0xffffffed;
code_r0x08007f54:
    do {
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_68) {
            return uVar19 & 0xffffffff;
        }
        puVar14 = __stack_chk_fail();
code_r0x08007fa4:
        Hint_Prefetch(puVar14,2,0,1);
        do {
            uVar1 = *puVar14;
            cVar7 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar14,0x10);
            if (bVar8) {
                *puVar14 = uVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        if (uVar1 == 0) {
            uVar15 = 2;
code_r0x08007fb0:
            refcount_warn_saturate(puVar14,uVar15);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar15 = 1;
            goto code_r0x08007fb0;
        }
        blk_execute_rq_nowait
                  (0,*(arg2 + 0xf8),unaff_x22 & 0xffffffff,sym.sg_rq_end_io.09869e51822c5a12dd1be57416341cc4.cfi_jt);
        uVar19 = 0;
    } while( true );
}


// ===== sym._copy_from_user @ 0x08007fd4 (size 376) =====

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
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
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


// ===== sym.sg_allow_access @ 0x08008188 (size 88) =====

int sym.sg_allow_access(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(**(*(arg1 + 0xd8) + 0x10) + 0xb0) == '\x06') {
        iVar2 = 0;
    }
    else {
        uVar1 = scsi_cmd_allowed(arg2,*(arg1 + 0x44));
        iVar2 = (uVar1 & 1) - 1;
    }
    return iVar2;
}


// ===== sym.sg_rq_end_io @ 0x080081e0 (size 960) =====

void sym.sg_rq_end_io(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong extraout_x9;
    ulong *in_x18;
    int *piVar14;
    ulong uVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    iVar16 = *(arg1 + 0x120);
    if (*(iVar16 + 0xf3) != '\0') {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x80084a4);
        (*pcVar7)();
    }
    iVar17 = *(iVar16 + 0x10);
    if (iVar17 != 0) {
        piVar18 = *(iVar17 + 0x10);
        if (piVar18[0xe] != 0) {
            _printk(0x8001f6a,"sg_rq_end_io");
        }
        uVar15 = *(arg1 + 0x160);
        uVar3 = *(arg1 + 0x14c);
        *(iVar16 + 0x80) = *(arg1 + 0x154);
        uVar8 = jiffies_to_msecs(_cdev_alloc);
        iVar4 = 0;
        if (*(iVar16 + 0x84) <= uVar8) {
            iVar4 = uVar8 - *(iVar16 + 0x84);
        }
        *(iVar16 + 0x84) = iVar4;
        if (uVar3 != 0) {
            *(iVar16 + 0x78) = uVar3;
            *(iVar16 + 0x7a) = 0;
            *(iVar16 + 0x79) = uVar3 >> 1 & 0x7f;
            *(iVar16 + 0x7c) = uVar3 >> 0x10 & 0xff;
            *(iVar16 + 0x7e) = uVar3 >> 0x18;
            uStack_60 = 0;
            if ((*(piVar18 + 0x7c) != '\0') && (((uVar3 & 0xfe) >> 1 | 0x10) == 0x11)) {
                __scsi_print_sense(*piVar18,"sg_rq_end_io",uVar15,0x60);
            }
            if ((((uVar3 >> 0x18 != 0) && (uVar9 = scsi_normalize_sense(uVar15,0x60,&uStack_60), (uVar9 & 1) != 0))
                && ((0x6f < uStack_60 & uStack_60) == 0)) && (uStack_60._1_1_ == '\x06')) {
                iVar12 = *piVar18;
                if ((*(iVar12 + 0x144) & 1) != 0) {
                    *(iVar12 + 0x14a) = *(iVar12 + 0x148) >> 0x10;
                    *(iVar12 + 0x148) = *(iVar12 + 0x148);
                    *(iVar12 + 0x144) = *(iVar12 + 0x144) | 2;
                }
            }
        }
        if (*(arg1 + 0x150) != 0) {
            puVar13 = *(arg1 + 0x160);
            uVar1 = puVar13[3];
            uVar15 = *puVar13;
            uVar2 = puVar13[1];
            *(iVar16 + 0xa0) = puVar13[2];
            *(iVar16 + 0xa8) = uVar1;
            *(iVar16 + 0x90) = uVar15;
            *(iVar16 + 0x98) = uVar2;
            uVar1 = puVar13[7];
            uVar15 = puVar13[4];
            uVar2 = puVar13[5];
            *(iVar16 + 0xc0) = puVar13[6];
            *(iVar16 + 200) = uVar1;
            *(iVar16 + 0xb0) = uVar15;
            *(iVar16 + 0xb8) = uVar2;
            uVar1 = puVar13[0xb];
            uVar15 = puVar13[8];
            uVar2 = puVar13[9];
            *(iVar16 + 0xe0) = puVar13[10];
            *(iVar16 + 0xe8) = uVar1;
            *(iVar16 + 0xd0) = uVar15;
            *(iVar16 + 0xd8) = uVar2;
        }
        *(iVar16 + 0xf8) = 0;
        if (*(arg1 + 0x140) != arg1 + 0x130) {
            kfree();
        }
        blk_put_request(arg1);
        piVar14 = iVar17 + 0x30;
        uVar15 = _raw_write_lock_irqsave(piVar14);
        if (*(iVar16 + 0xf1) != '\0') {
            if (*(iVar17 + 0x142b) == '\0') {
                *(iVar16 + 0xf3) = 0;
                _raw_write_unlock_irqrestore(piVar14,uVar15);
                piVar10 = iVar16 + 0x108;
                *(iVar16 + 0x108) = 0xfffffffe0;
                *(iVar16 + 0x110) = iVar16 + 0x110;
                *(iVar16 + 0x118) = iVar16 + 0x110;
                uVar15 = __raw_write_lock_irqsave;
                *(iVar16 + 0x120) = sym.sg_rq_end_io_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                goto code_r0x08008498;
            }
            *(iVar16 + 0xf2) = 0;
        }
        *(iVar16 + 0xf3) = 1;
        _raw_write_unlock_irqrestore(piVar14,uVar15);
        __wake_up(iVar17 + 0x18,1,1,0);
        kill_fasync(iVar17 + 0xa0,0x1d,1);
        piVar14 = iVar17 + 0x1430;
        uVar15 = 1;
        while( true ) {
            Hint_Prefetch(piVar14,2,0,1);
            do {
                iVar4 = *piVar14;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar14,0x10);
                if (bVar6) {
                    *piVar14 = iVar4 - uVar15;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            if (iVar4 == 1) {
                DataMemoryBarrier(2,1);
                piVar18 = piVar14 + -0x50c;
                iVar16 = *(piVar14 + -0x508);
                uVar15 = _raw_write_lock_irqsave(iVar16 + 0x68);
                uVar9 = __list_del_entry_valid(piVar18);
                if ((uVar9 & 1) != 0) {
                    iVar17 = *piVar18;
                    piVar11 = *(piVar14 + -0x50a);
                    *(iVar17 + 8) = piVar11;
                    *piVar11 = iVar17;
                }
                *piVar18 = -0x2152ffffffffff00;
                piVar14[-0x50a] = 0x122;
                piVar14[-0x509] = -0x21530000;
                _raw_write_unlock_irqrestore(iVar16 + 0x68,uVar15);
                piVar10 = piVar14 + 2;
                piVar10[0] = -0x20;
                piVar10[1] = 0xf;
                *(piVar14 + 4) = piVar14 + 4;
                *(piVar14 + 6) = piVar14 + 4;
                *(piVar14 + 8) = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
                uVar15 = __raw_write_lock_irqsave;
                piVar14 = piVar10;
code_r0x08008498:
                queue_work_on(0x20,uVar15,piVar10);
            }
            else if (iVar4 < 1) {
                refcount_warn_saturate(piVar14,3);
            }
            iVar16 = sp_el0;
            if (*(iVar16 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
            uVar15 = extraout_x9;
        }
        return;
    }
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x80084ac);
    (*pcVar7)();
}


// ===== sym.sg_build_indirect @ 0x080085a0 (size 524) =====

//WARNING: Removing unreachable block (ram,0x08008794)
//WARNING: Removing unreachable block (ram,0x0800879c)
//WARNING: Removing unreachable block (ram,0x080087a4)

uint64_t sym.sg_build_indirect(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 0) {
        return 0xfffffff2;
    }
    uVar8 = *(*(arg2 + 0x10) + 0x50);
    uVar2 = 0x200;
    if (arg3 != 0) {
        uVar2 = arg3 + 0x1ff & 0xfffffe00;
    }
    iVar6 = __kmalloc(uVar8 << 3,0x2b20);
    *(arg1 + 0x10) = iVar6;
    if (iVar6 != 0) {
        *(arg1 + 4) = uVar8 << 3;
        if (uVar8 < 0) {
            return uVar8;
        }
        uVar11 = 0;
        iVar9 = 0;
        if (0xfff < *0x8001000 - 1U) {
            iVar9 = 0x40 - LZCOUNT(*0x8001000 - 1U >> 0xc);
        }
        bVar1 = 0 < uVar2;
        if ((uVar2 < 1) || (uVar8 == 0)) {
code_r0x0800874c:
            uVar8 = 0xfffffff4;
            if (!bVar1) {
                uVar8 = 0;
            }
            *(arg1 + 0x18) = iVar9;
            *arg1 = uVar11;
            *(arg1 + 8) = uVar2;
            return uVar8;
        }
        do {
            uVar11 = 0;
            uVar4 = 1 << (iVar9 + 0xcU & 0x1f);
            uVar5 = uVar2;
            while( true ) {
                uVar3 = *0x8001000;
                uVar7 = tpidr_el1;
                uVar7 = __alloc_pages(uVar7,0x42b20,iVar9,0,0);
                *(*(arg1 + 0x10) + uVar11 * 8) = uVar7;
                if ((*(arg1 + 0x10))[uVar11] == 0) break;
                if (uVar5 <= uVar3) {
                    uVar3 = uVar5;
                }
                if ((uVar3 == *0x8001000) && (*0x8001000 < uVar4)) {
                    *0x8001000 = uVar4;
                }
                uVar11 = uVar11 + 1;
                bVar1 = 0 < uVar5 - uVar4;
                if ((uVar5 - uVar4 < 1) || (uVar5 = uVar5 - uVar4, uVar8 <= uVar11)) goto code_r0x0800874c;
            }
            if ((uVar11 != 0) && (__free_pages(**(arg1 + 0x10),iVar9), uVar11 != 1)) {
                uVar10 = 1;
                do {
                    __free_pages(*(*(arg1 + 0x10) + uVar10 * 8),iVar9);
                    uVar10 = uVar10 + 1;
                } while (uVar11 != uVar10);
            }
            bVar1 = 0 < iVar9;
            iVar9 = iVar9 + -1;
        } while (bVar1);
    }
    return 0xfffffff4;
}


// ===== sym.sg_remove_sfp @ 0x080087b0 (size 208) =====

void sym.sg_remove_sfp(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = arg1 + -0x1430;
    iVar1 = *(arg1 + -0x1420) + 0x68;
    uVar3 = _raw_write_lock_irqsave(iVar1);
    uVar4 = __list_del_entry_valid(piVar2);
    if ((uVar4 & 1) != 0) {
        iVar6 = *piVar2;
        piVar5 = *(arg1 + -0x1428);
        *(iVar6 + 8) = piVar5;
        *piVar5 = iVar6;
    }
    *piVar2 = -0x2152ffffffffff00;
    *(arg1 + -0x1428) = 0xdead000000000122;
    _raw_write_unlock_irqrestore(iVar1,uVar3);
    *(arg1 + 8) = 0xfffffffe0;
    *(arg1 + 0x10) = arg1 + 0x10;
    *(arg1 + 0x18) = arg1 + 0x10;
    *(arg1 + 0x20) = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
    queue_work_on(0x20,__raw_write_lock_irqsave,arg1 + 8);
    return;
}


// ===== sym.sg_rq_end_io_usercontext @ 0x08008880 (size 344) =====

void sym.sg_rq_end_io_usercontext(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + -0xf8);
    sym.sg_finish_rem_req(arg1 + -0x108);
    sym.sg_remove_request(arg1_00,arg1 + -0x108);
    piVar7 = arg1_00 + 0x286;
    Hint_Prefetch(piVar7,2,0,1);
    do {
        iVar1 = *piVar7;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
            *piVar7 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        iVar6 = arg1_00[2];
        uVar4 = _raw_write_lock_irqsave(iVar6 + 0x68);
        uVar5 = __list_del_entry_valid(arg1_00);
        if ((uVar5 & 1) != 0) {
            iVar8 = *arg1_00;
            piVar7 = arg1_00[1];
            *(iVar8 + 8) = piVar7;
            *piVar7 = iVar8;
        }
        *arg1_00 = -0x2152ffffffffff00;
        arg1_00[1] = -0x2152fffffffffede;
        _raw_write_unlock_irqrestore(iVar6 + 0x68,uVar4);
        arg1_00[0x287] = 0xfffffffe0;
        arg1_00[0x288] = arg1_00 + 0x288;
        arg1_00[0x289] = arg1_00 + 0x288;
        arg1_00[0x28a] = sym.sg_remove_sfp_usercontext.09869e51822c5a12dd1be57416341cc4.cfi_jt;
        queue_work_on(0x20,__raw_write_lock_irqsave,arg1_00 + 0x287);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(piVar7,3);
    }
    return;
}


// ===== sym.sg_remove_sfp_usercontext @ 0x080089d8 (size 528) =====

void sym.sg_remove_sfp_usercontext(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *puVar10;
    int *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(arg1 + -0x1428);
    uVar6 = _raw_write_lock_irqsave(arg1 + -0x1408);
    puVar1 = arg1 + -0x13a8;
    puVar8 = *puVar1;
    while (puVar1 != puVar8) {
        piVar12 = *puVar1;
        sym.sg_finish_rem_req(piVar12);
        uVar7 = __list_del_entry_valid(piVar12);
        if ((uVar7 & 1) != 0) {
            iVar9 = *piVar12;
            piVar2 = piVar12[1];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        piVar12[2] = 0;
        *piVar12 = -0x2152ffffffffff00;
        piVar12[1] = -0x2152fffffffffede;
        puVar8 = *puVar1;
    }
    _raw_write_unlock_irqrestore(arg1 + -0x1408,uVar6);
    if (*(arg1 + -0x13c0) != 0) {
        piVar12 = *(arg1 + -0x13b8);
        if (((piVar12 != NULL) && (*(arg1 + -0x13c4) != 0)) && (*(arg1 + -0x13ac) == '\0')) {
            if ((*(arg1 + -0x13c8) != 0) && (iVar9 = *piVar12, iVar9 != 0)) {
                uVar7 = 1;
                do {
                    __free_pages(iVar9,*(arg1 + -0x13b0));
                    if (*(arg1 + -0x13c8) <= uVar7) {
                        piVar12 = *(arg1 + -0x13b8);
                        break;
                    }
                    piVar12 = *(arg1 + -0x13b8);
                    iVar9 = piVar12[uVar7];
                    uVar7 = uVar7 + 1;
                } while (iVar9 != 0);
            }
            kfree(piVar12);
        }
        *(arg1 + -0x13b8) = 0;
        *(arg1 + -0x13b0) = 0;
        *(arg1 + -0x13c8) = 0;
        *(arg1 + -0x13c0) = 0;
    }
    kfree(arg1 + -0x1438);
    piVar11 = puVar10 + 0x15;
    scsi_device_put(*puVar10);
    Hint_Prefetch(piVar11,2,0,1);
    do {
        iVar3 = *piVar11;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
            *piVar11 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        uVar6 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
        idr_remove(obj.sg_index_idr,*(puVar10 + 0x54));
        _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar6);
        kfree(puVar10);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar11,3);
    }
    module_put(obj.__this_module);
    return;
}


// ===== sym.sg_device_destroy @ 0x08008be8 (size 112) =====

void sym.sg_device_destroy(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_write_lock_irqsave(obj.scatter_elem_sz_prev);
    idr_remove(obj.sg_index_idr,*(arg1 + -0x54));
    _raw_write_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar1);
    kfree(arg1 + -0xa8);
    return;
}


// ===== sym.sg_build_reserve @ 0x08008c58 (size 220) =====

void sym.sg_build_reserve(int64_t arg1,uint32_t arg2)

{
    int16_t *arg1_00;
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x70;
    do {
        if (arg2 < 0x1001) {
            arg2 = 0x1000;
        }
        iVar2 = sym.sg_build_indirect(arg1_00,arg1,arg2);
        if (iVar2 == 0) {
            return;
        }
        piVar3 = *(arg1 + 0x80);
        if (((piVar3 != NULL) && (*(arg1 + 0x74) != 0)) && (*(arg1 + 0x8c) == '\0')) {
            if ((*arg1_00 != 0) && (iVar4 = *piVar3, iVar4 != 0)) {
                uVar5 = 1;
                do {
                    __free_pages(iVar4,*(arg1 + 0x88));
                    if (*(arg1 + 0x70) <= uVar5) {
                        piVar3 = *(arg1 + 0x80);
                        break;
                    }
                    piVar3 = *(arg1 + 0x80);
                    iVar4 = piVar3[uVar5];
                    uVar5 = uVar5 + 1;
                } while (iVar4 != 0);
            }
            kfree(piVar3);
        }
        uVar1 = arg2 >> 1;
        *(arg1 + 0x80) = 0;
        *(arg1 + 0x88) = 0;
        arg1_00[0] = 0;
        arg1_00[1] = 0;
        arg1_00[2] = 0;
        arg1_00[3] = 0;
        *(arg1 + 0x78) = 0;
        arg2 = arg2 >> 1;
        if (uVar1 < 0x801) {
            return;
        }
    } while( true );
}


// ===== sym.put_compat_request_table @ 0x08008d34 (size 1088) =====

ulong sym.put_compat_request_table(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar8 = 0;
    iVar9 = arg1 * 0x100 + 0x1000;
    puVar3 = sp_el0;
    while( true ) {
        iVar6 = sym._copy_to_user(arg1 + iVar8,in_q0,8);
        if (iVar6 != 0) {
            return 0xfffffff2;
        }
        puVar1 = arg1 + iVar8 + 8;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (puVar7 = puVar1, (*puVar3 >> 0x1a & 1) != 0)) {
            puVar7 = arg1 + iVar8 + 8U & iVar9 + -0x800 >> 8;
        }
        bVar5 = 0xfffffffffffffffb < puVar7;
        puVar7 = puVar7 + 1;
        uVar2 = 0;
        if (!bVar5 || puVar7 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar7 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar7,~uVar2) || CARRY8(puVar7 + ~uVar2,bVar5)) && puVar7 != uVar2 + !bVar5) break;
        if ((arg1 + iVar8 + 8U & iVar9 + -0x800 >> 8 & 0xffffff8000000000) != 0) {
            puVar1 = NULL;
        }
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        *puVar1 = *(arg2 + 8);
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr0_el1 = (uVar4 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        puVar1 = arg1 + iVar8 + 0xc;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (puVar7 = puVar1, (*puVar3 >> 0x1a & 1) != 0)) {
            puVar7 = puVar1 & iVar9 + -0x400 >> 8;
        }
        bVar5 = 0xfffffffffffffffb < puVar7;
        puVar7 = puVar7 + 1;
        uVar2 = 0;
        if (!bVar5 || puVar7 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar7 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar7,~uVar2) || CARRY8(puVar7 + ~uVar2,bVar5)) && puVar7 != uVar2 + !bVar5) {
            return 0xfffffff2;
        }
        if ((arg1 + iVar8 + 0xcU & iVar9 + -0x400 >> 8 & 0xffffff8000000000) != 0) {
            puVar1 = NULL;
        }
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        *puVar1 = *(arg2 + 0x10);
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr0_el1 = (uVar4 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        puVar1 = arg1 + iVar8 + 0x10;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (puVar7 = puVar1, (*puVar3 >> 0x1a & 1) != 0)) {
            puVar7 = puVar1 & iVar9 >> 8;
        }
        bVar5 = 0xfffffffffffffffb < puVar7;
        puVar7 = puVar7 + 1;
        uVar2 = 0;
        if (!bVar5 || puVar7 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar7 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar7,~uVar2) || CARRY8(puVar7 + ~uVar2,bVar5)) && puVar7 != uVar2 + !bVar5) {
            return 0xfffffff2;
        }
        if ((arg1 + iVar8 + 0x10U & iVar9 >> 8 & 0xffffff8000000000) != 0) {
            puVar1 = NULL;
        }
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        *puVar1 = *(arg2 + 0x14);
        if ((_kmem_cache_alloc_trace >> 0x18 & 1) == 0) {
            uVar2 = daif;
            if ((uVar2 & 0x80) == 0) {
                uVar4 = daif;
                daif = uVar4 | 0xc0;
            }
            uVar4 = ttbr1_el1;
            ttbr0_el1 = (uVar4 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar4 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar2;
        }
        iVar8 = iVar8 + 0x14;
        iVar9 = iVar9 + 0x1400;
        arg2 = arg2 + 0x18;
        in_q0 = extraout_q0;
        if (iVar8 == 0x140) {
            return 0;
        }
    }
    return 0xfffffff2;
}


// ===== sym.sg_vma_fault @ 0x080091e0 (size 252) =====

ulong sym.sg_vma_fault(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    
    puVar11 = *arg1;
    if ((((puVar11 != NULL) && (uVar6 = puVar11[0x15], uVar6 != 0)) &&
        (uVar8 = *(arg1 + 0x10) << 0xc, uVar8 < *(uVar6 + 0x78))) && (*(uVar6 + 0x70) != 0)) {
        iVar7 = 0;
        uVar10 = *puVar11;
        uVar9 = 1 << (*(uVar6 + 0x88) + 0xcU & 0x1f);
        do {
            uVar5 = puVar11[1] - uVar10;
            if (puVar11[1] < uVar10 || uVar5 == 0) {
                return 2;
            }
            if (uVar9 <= uVar5) {
                uVar5 = uVar9;
            }
            if (uVar8 < uVar5) {
                iVar7 = *(*(uVar6 + 0x80) + iVar7) + (uVar8 >> 6 & 0x3ffffffffffffc0);
                iVar2 = iVar7;
                if ((*(iVar7 + 8) & 1) != 0) {
                    iVar2 = *(iVar7 + 8) - 1;
                }
                piVar1 = iVar2 + 0x34;
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                *(arg1 + 0x58) = iVar7;
                return 0;
            }
            uVar10 = uVar5 + uVar10;
            iVar7 = iVar7 + 8;
            uVar8 = uVar8 - uVar5;
        } while (*(uVar6 + 0x70) * 8 != iVar7);
    }
    return 2;
}


// ===== sym.sg_get_dev @ 0x080092dc (size 228) =====

int64_t sym.sg_get_dev(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = _raw_read_lock_irqsave(obj.scatter_elem_sz_prev);
    iVar6 = idr_find(obj.sg_index_idr,arg1 & 0xffffffff);
    if (iVar6 == 0) {
        iVar6 = -6;
    }
    else if (*(iVar6 + 0x70) == 0) {
        puVar1 = iVar6 + 0xa8;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0800935c;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
    else {
        iVar6 = -0x13;
    }
code_r0x0800935c:
    _raw_read_unlock_irqrestore(obj.scatter_elem_sz_prev,uVar5);
    return iVar6;
}


// ===== sym.open_wait @ 0x080093c0 (size 552) =====

//WARNING: Removing unreachable block (ram,0x08009790)

int64_t * sym.open_wait(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t arg2;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t *arg1_00;
    ulong uVar9;
    uint32_t in_w1;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar11;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + 0x20;
    iVar2 = arg1 + 8;
    if ((in_w1 >> 7 & 1) == 0) {
        do {
            if (*(arg1 + 0x74) == '\0') goto code_r0x08009584;
            mutex_unlock(iVar1);
            if ((*(arg1 + 0x70) == 0) && (*(arg1 + 0x74) != '\0')) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
                init_wait_entry(&stack0xffffffffffffffa0,0);
                uVar7 = prepare_to_wait_event(iVar2,&stack0xffffffffffffffa0,1);
                iVar10 = *(arg1 + 0x70);
                while ((iVar10 == 0 && (*(arg1 + 0x74) != '\0'))) {
                    if (uVar7 != 0) {
                        mutex_lock(iVar1);
                        if (uVar7 != 0) goto code_r0x08009590;
                        goto code_r0x08009464;
                    }
                    schedule();
                    uVar7 = prepare_to_wait_event(iVar2,&stack0xffffffffffffffa0,1);
                    iVar10 = *(arg1 + 0x70);
                }
                finish_wait(iVar2,&stack0xffffffffffffffa0);
            }
            mutex_lock(iVar1);
code_r0x08009464:
        } while (*(arg1 + 0x70) == 0);
    }
    else {
        do {
            if (*(arg1 + 0x78) < 1) goto code_r0x08009584;
            mutex_unlock(iVar1);
            if ((*(arg1 + 0x70) == 0) && (*(arg1 + 0x78) != 0)) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
                init_wait_entry(&stack0xffffffffffffffa0,0);
                uVar7 = prepare_to_wait_event(iVar2,&stack0xffffffffffffffa0,1);
                iVar10 = *(arg1 + 0x70);
                while ((iVar10 == 0 && (*(arg1 + 0x78) != 0))) {
                    if (uVar7 != 0) {
                        mutex_lock(iVar1);
                        if (uVar7 != 0) goto code_r0x08009590;
                        goto code_r0x0800952c;
                    }
                    schedule();
                    uVar7 = prepare_to_wait_event(iVar2,&stack0xffffffffffffffa0,1);
                    iVar10 = *(arg1 + 0x70);
                }
                finish_wait(iVar2,&stack0xffffffffffffffa0);
            }
            mutex_lock(iVar1);
code_r0x0800952c:
        } while (*(arg1 + 0x70) == 0);
    }
    uVar7 = 0xffffffed;
code_r0x08009590:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7 & 0xffffffff;
    }
    piVar8 = __stack_chk_fail();
    *extraout_x18 = 0x80095c8;
    arg1_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0x2b20,0x1468);
    if (arg1_00 == NULL) {
        return 0xfffffffffffffff4;
    }
    __init_waitqueue_head(arg1_00 + 3,"&sfp->read_wait",obj.sg_alloc.__key);
    arg1_00[6] = 0;
    arg1_00[0x12] = arg1_00 + 0x12;
    arg1_00[0x13] = arg1_00 + 0x12;
    *(arg1_00 + 0x286) = 1;
    __mutex_init(arg1_00 + 7,"&sfp->f_mutex",obj.sg_alloc.__key);
    *(arg1_00 + 0x285) = 0;
    *(arg1_00 + 0x142b) = 0;
    piVar3 = piVar8 + 0xd;
    arg1_00[2] = piVar8;
    arg1_00[0xd] = 0x177000003a98;
    uVar9 = _raw_write_lock_irqsave(piVar3);
    if (piVar8[0xe] != 0) {
        _raw_write_unlock_irqrestore(piVar3,uVar9);
        kfree(arg1_00);
        return 0xffffffffffffffed;
    }
    puVar12 = piVar8[0xc];
    uVar7 = __list_add_valid(arg1_00,puVar12,piVar8 + 0xb);
    if ((uVar7 & 1) != 0) {
        piVar8[0xc] = arg1_00;
        *arg1_00 = piVar8 + 0xb;
        arg1_00[1] = puVar12;
        *puVar12 = arg1_00;
    }
    _raw_write_unlock_irqrestore(piVar3,uVar9);
    puVar11 = piVar8 + 0x15;
    uVar4 = *(*(*piVar8 + 8) + 0x4d4);
    if (0x3ffffe < uVar4) {
        uVar4 = 0x3fffff;
    }
    arg2 = *0x8001000;
    if (uVar4 * 0x200 <= *0x8001000) {
        arg2 = uVar4 * 0x200;
    }
    sym.sg_build_reserve(arg1_00,arg2);
    Hint_Prefetch(puVar11,2,0,1);
    do {
        uVar4 = *puVar11;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar11,0x10);
        if (bVar6) {
            *puVar11 = uVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    if (uVar4 == 0) {
        uVar9 = 2;
    }
    else {
        if (-1 < (uVar4 + 1 | uVar4)) goto code_r0x08009764;
        uVar9 = 1;
    }
    refcount_warn_saturate(puVar11,uVar9);
code_r0x08009764:
    __module_get(obj.__this_module);
    return arg1_00;
code_r0x08009584:
    uVar7 = 0;
    goto code_r0x08009590;
}


// ===== sym.sg_add_sfp @ 0x080095e8 (size 500) =====

//WARNING: Removing unreachable block (ram,0x08009790)

int64_t * sym.sg_add_sfp(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg2;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *arg1_00;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    ulong *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_compat_ptr_ioctl,0x2b20,0x1468);
    if (arg1_00 == NULL) {
        return 0xfffffffffffffff4;
    }
    __init_waitqueue_head(arg1_00 + 3,"&sfp->read_wait",obj.sg_alloc.__key);
    arg1_00[6] = 0;
    arg1_00[0x12] = arg1_00 + 0x12;
    arg1_00[0x13] = arg1_00 + 0x12;
    *(arg1_00 + 0x286) = 1;
    __mutex_init(arg1_00 + 7,"&sfp->f_mutex",obj.sg_alloc.__key);
    *(arg1_00 + 0x285) = 0;
    *(arg1_00 + 0x142b) = 0;
    iVar1 = arg1 + 0x68;
    arg1_00[2] = arg1;
    arg1_00[0xd] = 0x177000003a98;
    uVar5 = _raw_write_lock_irqsave(iVar1);
    if (*(arg1 + 0x70) != 0) {
        _raw_write_unlock_irqrestore(iVar1,uVar5);
        kfree(arg1_00);
        return 0xffffffffffffffed;
    }
    puVar8 = *(arg1 + 0x60);
    uVar6 = __list_add_valid(arg1_00,puVar8,arg1 + 0x58);
    if ((uVar6 & 1) != 0) {
        *(arg1 + 0x60) = arg1_00;
        *arg1_00 = arg1 + 0x58;
        arg1_00[1] = puVar8;
        *puVar8 = arg1_00;
    }
    _raw_write_unlock_irqrestore(iVar1,uVar5);
    puVar7 = arg1 + 0xa8;
    uVar2 = *(*(*arg1 + 8) + 0x4d4);
    if (0x3ffffe < uVar2) {
        uVar2 = 0x3fffff;
    }
    arg2 = *0x8001000;
    if (uVar2 * 0x200 <= *0x8001000) {
        arg2 = uVar2 * 0x200;
    }
    sym.sg_build_reserve(arg1_00,arg2);
    Hint_Prefetch(puVar7,2,0,1);
    do {
        uVar2 = *puVar7;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar7,0x10);
        if (bVar4) {
            *puVar7 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08009764;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar7,uVar5);
code_r0x08009764:
    __module_get(obj.__this_module);
    return arg1_00;
}


// ===== sym.__cfi_check_fail @ 0x080097dc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08009820

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
    //switch table (4 cases) at 0x800206b
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8009834);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08009844 (size 244) =====

uint64_t sym.init_module(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8001000 < 0x1000) {
        *0x8001000 = CONCAT44(*0x8001000 >> 0x20,0x1000);
    }
    uVar1 = register_chrdev_region(0x1500000,0x8000,0x8002033);
    uVar2 = uVar1 & 0xffffffff;
    if (uVar1 == 0) {
        uVar2 = __class_create(obj.__this_module,"scsi_generic",obj.init_sg.__key);
        *0x8001000 = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            obj.def_reserved_size = 0x1;
            uVar1 = scsi_register_interface(obj.sg_interface);
            uVar2 = uVar1 & 0xffffffff;
            if (uVar1 == 0) goto code_r0x08009920;
            class_destroy(*0x8001000);
        }
        unregister_chrdev_region(0x1500000,0x8000);
    }
code_r0x08009920:
    return uVar2 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08009938 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    class_interface_unregister(obj.sg_interface);
    class_destroy(*0x8001000);
    obj.def_reserved_size = 0x0;
    unregister_chrdev_region(0x1500000,0x8000);
    idr_destroy(obj.sg_index_idr);
    return;
}

