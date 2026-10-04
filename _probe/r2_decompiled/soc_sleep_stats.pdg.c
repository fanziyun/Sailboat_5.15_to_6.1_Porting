// decompiled from soc_sleep_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 468) =====

//WARNING: Switch with 1 destination removed at 0x080024b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (-0x8dc801903aca539 < arg1) {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.single_release.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08002474;
                pcVar2 = sym.init_module.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08002474;
        }
        if (arg1 != -0x38e7986761b41116) {
            if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x8001260 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08002474;
        }
        pcVar2 = sym.ddr_stats_get_ss_vote_info.cfi_jt;
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else {
            if (arg1 != 0x2fb07d7468c70efb) goto code_r0x08002474;
            pcVar2 = sym.ddr_stats_get_residency.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            if ((pcVar1 + -0x8001200 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002474;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002474;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002474:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024c8);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x080011e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt);
    return;
}


// ===== sym.ddr_stats_get_ss_vote_info.cfi_jt @ 0x080011f0 (size 8) =====

int sym.ddr_stats_get_ss_vote_info.cfi_jt(uint32_t param_1,uint32_t *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    int *piVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong unaff_x30;
    ulong uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = -0x13;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if ((param_2 != NULL) && (_segment.ehdr != NULL)) {
        iVar1 = -0x13;
        if ((*(_segment.ehdr + 0x18) != 0xffffffea) && (uVar6 = param_1, *(_segment.ehdr + 0x18) == param_1)) {
            if (*_segment.ehdr == '\0') {
                iVar1 = -0x5f;
            }
            else {
                puVar3 = __kmalloc(uVar6 << 2,0xdc0);
                if (puVar3 == NULL) {
                    iVar1 = -0xc;
                }
                else {
                    mutex_lock(_segment.ehdr + 0x20);
                    iVar1 = scnprintf(&uStack_80,0x28,"{class: ddr, res: drvs_ddr_votes}");
                    uStack_90 = CONCAT44(uStack_90._4_4_,iVar1 + 3) & 0xfffffffffffffffc;
                    puStack_88 = &uStack_80;
                    iVar1 = mbox_send_message(*(_segment.ehdr + 0x50),&uStack_90);
                    if (iVar1 < 0) {
                        _printk(0x80004a0,iVar1);
                    }
                    else if (param_1 < 1) {
                        iVar1 = 0;
                    }
                    else {
                        iVar7 = *(_segment.ehdr + 8) + (*(_segment.ehdr + 0x14) << 4 | 8);
                        puVar8 = puVar3;
                        do {
                            uVar2 = sym.readl_relaxed(iVar7);
                            *puVar8 = uVar2;
                            if (uVar2 == 0xffffdead) {
                                uVar5 = 0xffffdead;
                                *param_2 = 0xffffdead;
                            }
                            else if (uVar2 == 0xdeaddead) {
                                *param_2 = 0xdeaddead;
                                uVar5 = 0xdeaddead;
                            }
                            else {
                                uVar5 = *puVar8 & 0x3fff;
                                *param_2 = uVar2 >> 0xe & 0x3fff;
                            }
                            param_2[1] = uVar5;
                            uVar6 = uVar6 - 1;
                            param_2 = param_2 + 2;
                            puVar8 = puVar8 + 1;
                            iVar7 = iVar7 + 4;
                        } while (uVar6 != 0);
                        iVar1 = 0;
                    }
                    mutex_unlock(_segment.ehdr + 0x20);
                    kfree(puVar3);
                }
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        piVar4 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,piVar4,0x8001800);
        iVar1 = *piVar4;
        log_post_read_mmio(iVar1,0x20,piVar4,0x8001834);
        return iVar1;
    }
    return iVar1;
}


// ===== sym.ddr_stats_get_residency.cfi_jt @ 0x080011f8 (size 8) =====

uint64_t sym.ddr_stats_get_residency.cfi_jt(uint32_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int iVar7;
    uint64_t uVar8;
    int iVar9;
    ulong unaff_x30;
    uint uStack_198;
    int iStack_194;
    ulong auStack_190 [39];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    memset(&uStack_198,0,0x140);
    uVar8 = 0xffffffea;
    if (((param_1 < 0) || (param_2 == 0)) || (_segment.ehdr == NULL)) goto code_r0x08001510;
    if ((*(_segment.ehdr + 8) == 0) || (*(_segment.ehdr + 0x14) == 0)) {
        uVar8 = 0xffffffea;
        goto code_r0x08001510;
    }
    iVar4 = ktime_get_with_offset(1);
    while (iVar4 < _segment.ehdr) {
        __const_udelay(0x20c4ac);
        iVar4 = ktime_get_with_offset(1);
    }
    mutex_lock(_segment.ehdr + 0x20);
    iVar7 = *(_segment.ehdr + 0x14);
    uVar2 = *(_segment.ehdr + 0x10);
    if (param_1 <= *(_segment.ehdr + 0x10)) {
        uVar2 = param_1;
    }
    if (iVar7 == 0) {
code_r0x08001504:
        uVar8 = 0;
        pcVar5 = _segment.ehdr;
    }
    else {
        iVar9 = 0;
        iVar4 = *(_segment.ehdr + 8) + 8;
        do {
            __memcpy_fromio(&uStack_198 + iVar9 * 4,iVar4,0x10);
            iVar4 = iVar4 + 0x10;
            iVar9 = iVar9 + 1;
        } while (iVar7 != iVar9);
        if (*(_segment.ehdr + 0x14) == 0) goto code_r0x08001504;
        iVar4 = 0;
        do {
            if (iVar4 == 0x140) goto code_r0x080015cc;
            if (*(&uStack_198 + iVar4 + 1) == '\x01') {
                if (0x140 < iVar4 + 4U) goto code_r0x080015d0;
                if ((*(auStack_190 + iVar4 + -4) == 0) && (obj.ddr_freq_update != 0x0)) {
                    _printk(0x800042a);
                    uVar8 = 0xffffffea;
                    pcVar5 = _segment.ehdr;
                    goto code_r0x08001508;
                }
            }
            iVar4 = iVar4 + 0x10;
        } while (*(_segment.ehdr + 0x14) * 0x10 - iVar4 != 0);
        iVar4 = 0;
        uVar6 = 0;
        uVar8 = 0;
        pcVar5 = _segment.ehdr;
        do {
            if (uVar6 == 0x14) {
code_r0x080015cc:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80015d0);
                (*pcVar3)();
            }
            if ((*(&uStack_198 + iVar4) & 0xff00) == 0x100) {
                *(param_2 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) = *(&uStack_198 + iVar4) >> 0x10;
                if (0x140 < iVar4 + 8U) {
code_r0x080015d0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x80015d4);
                    (*pcVar3)();
                }
                iVar7 = uVar8;
                uVar1 = iVar7 + 1;
                uVar8 = uVar1;
                *(param_2 + iVar7 * 0x10 + 8) = *(auStack_190 + iVar4);
                pcVar5 = _segment.ehdr;
                if (uVar2 < uVar1) break;
            }
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + 0x10;
        } while (uVar6 < *(pcVar5 + 0x14));
    }
code_r0x08001508:
    mutex_unlock(pcVar5 + 0x20);
code_r0x08001510:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    __stack_chk_fail();
    if (*_segment.ehdr == '\0') {
        return 0xffffffa1;
    }
    return *(_segment.ehdr + 0x18);
}


// ===== sym.soc_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.soc_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar7 = *(param_1 + 0x80);
    iVar5 = piVar7[1];
    uStack_58 = 0;
    iStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    __memcpy_fromio(&uStack_68,iVar5,0x20);
    iVar6 = iStack_50;
    pcVar1 = _seq_lseek;
    if (uStack_58 < uStack_60) {
        __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000230);
        iVar3 = (*pcVar1)();
        iVar6 = (iVar3 + iVar6) - uStack_60;
    }
    seq_printf(param_1,"Count = %u\n",uStack_68._4_4_);
    seq_printf(param_1,"Last Entered At = %llu\n",uStack_60);
    seq_printf(param_1,"Last Exited At = %llu\n",uStack_58);
    seq_printf(param_1,"Accumulated Duration = %llu\n",iVar6);
    if (*(*piVar7 + 0xc) != '\0') {
        uVar2 = sym.readl_relaxed(iVar5 + 0x1c);
        seq_printf(param_1,"Client_votes = %#x\n",uVar2);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.subsystem_sleep_stats_open;
    uVar4 = single_open(auVar8._8_8_,sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,
                        *(auVar8._0_8_ + 0x2d8));
    return uVar4;
}


// ===== sym.ddr_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001208 (size 8) =====

uchar * sym.ddr_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uchar *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t auStack_1b0 [2];
    int64_t iStack_1a8;
    uchar auStack_1a0 [8];
    int64_t iStack_198;
    uchar auStack_190 [8];
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    uint32_t auStack_170 [2];
    int64_t aiStack_168 [31];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    memset(auStack_1b0,0,0x140);
    iVar7 = *(param_1 + 0x80);
    uVar3 = sym.readl_relaxed(iVar7 + 4);
    if (uVar3 < 0x15) {
        __memcpy_fromio(auStack_1b0,iVar7 + 8,0x10);
        __memcpy_fromio(auStack_1a0,iVar7 + 0x18,0x10);
        __memcpy_fromio(auStack_190,iVar7 + 0x28,0x10);
        __memcpy_fromio(auStack_180,iVar7 + 0x38,0x10);
        iVar10 = 0;
        iVar6 = 0;
        uVar9 = iStack_198 + iStack_1a8 + iStack_188 + iStack_178;
        uVar12 = uVar9 & 0xffffffff;
        do {
            if (uVar9 == 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = 0;
                if (uVar12 != 0) {
                    uVar5 = (*(auStack_1a0 + iVar10 + -8) * 100) / uVar12;
                }
            }
            uVar11 = *(auStack_1b0 + iVar10);
            uVar1 = uVar11 >> 8 & 0xff;
            if (uVar1 == 1) {
                if ((0xffff < uVar11) && (*(auStack_1b0 + iVar10 + 4) != 0)) {
                    seq_printf(param_1,"Freq %dMhz:\tCP IDX:%u\tDuration (ticks):%ld (~%d%%)\n",uVar11 >> 0x10,
                               uVar11 & 0x1f,*(auStack_1a0 + iVar10 + -8),uVar5);
                }
            }
            else if (uVar1 == 0) {
                iVar6 = iVar6 + 1;
                seq_printf(param_1,"LPM %d:\tName:0x%x\tcount:%u\tDuration (ticks):%ld (~%d%%)\n",iVar6,uVar11 & 0xff
                           ,*(auStack_1b0 + iVar10 + 4),*(auStack_1a0 + iVar10 + -8));
            }
            iVar10 = iVar10 + 0x10;
        } while (iVar10 != 0x40);
        if (4 < uVar3) {
            uVar9 = 0;
            iVar7 = iVar7 + 0x48;
            uVar11 = 4;
            do {
                __memcpy_fromio(auStack_1b0 + uVar11 * 4,iVar7,0x10);
                if (auStack_1b0[uVar11 * 4 + 1] == 0 && obj.ddr_freq_update != 0x0) {
                    seq_puts(param_1,"ddr_stats: Freq update failed.\n");
                    goto code_r0x0800241c;
                }
                iVar10 = uVar11;
                iVar7 = iVar7 + 0x10;
                uVar11 = uVar11 + 1;
                uVar9 = *(auStack_1a0 + iVar10 * 0x10 + -8) + uVar9;
            } while (uVar3 != uVar11);
            piVar8 = aiStack_168;
            iVar7 = uVar3 - 4;
            do {
                if (uVar9 == 0) {
                    uVar12 = 0;
                }
                else {
                    uVar12 = 0;
                    if ((uVar9 & 0xffffffff) != 0) {
                        uVar12 = (*piVar8 * 100) / (uVar9 & 0xffffffff);
                    }
                }
                uVar3 = *(piVar8 + -1);
                uVar11 = uVar3 >> 8 & 0xff;
                if (uVar11 == 1) {
                    if ((0xffff < uVar3) && (*(piVar8 + -4) != 0)) {
                        seq_printf(param_1,"Freq %dMhz:\tCP IDX:%u\tDuration (ticks):%ld (~%d%%)\n",uVar3 >> 0x10,
                                   uVar3 & 0x1f,*piVar8,uVar12);
                    }
                }
                else if (uVar11 == 0) {
                    iVar6 = iVar6 + 1;
                    seq_printf(param_1,"LPM %d:\tName:0x%x\tcount:%u\tDuration (ticks):%ld (~%d%%)\n",iVar6,
                               uVar3 & 0xff,*(piVar8 + -4),*piVar8);
                }
                piVar8 = piVar8 + 2;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
        }
    }
    else {
        _printk(0x800045b);
    }
code_r0x0800241c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_70) {
        auVar13 = __stack_chk_fail();
        puVar4 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar13._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80024c8);
        (*pcVar2)();
    }
    return NULL;
}


// ===== sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001210 (size 8) =====

uint64_t sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(*(*(param_1 + 0x80) + 0xc),*(*(param_1 + 0x80) + 8),0);
    pcVar1 = _seq_lseek;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000230);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(param_1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(param_1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(param_1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.seq_read.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.single_release.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.soc_sleep_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001228 (size 8) =====

void sym.soc_sleep_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.soc_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.subsystem_sleep_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001230 (size 8) =====

void sym.subsystem_sleep_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.ddr_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001238 (size 8) =====

void sym.ddr_stats_open.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.ddr_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001240 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.ddr_stats_get_freq_count.cfi_jt @ 0x08001248 (size 8) =====

uint sym.ddr_stats_get_freq_count.cfi_jt(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x10);
    }
    return 0xffffffed;
}


// ===== sym.ddr_stats_get_ss_count.cfi_jt @ 0x08001250 (size 8) =====

uint sym.ddr_stats_get_ss_count.cfi_jt(void)

{
    if (*_segment.ehdr != '\0') {
        return *(_segment.ehdr + 0x18);
    }
    return 0xffffffa1;
}


// ===== sym.ddr_stats_freq_sync_send_msg.cfi_jt @ 0x08001258 (size 8) =====

int sym.ddr_stats_freq_sync_send_msg.cfi_jt(void)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_60;
    ulong *puStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    mutex_lock(_segment.ehdr + 0x20);
    iVar2 = scnprintf(&uStack_50,0x28,"{class: ddr, action: freqsync}");
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar2 + 3) & 0xfffffffffffffffc;
    puStack_58 = &uStack_50;
    iVar2 = mbox_send_message(*(_segment.ehdr + 0x50),&uStack_60);
    if (iVar2 < 0) {
        _printk(0x80004a0,iVar2);
        mutex_unlock(_segment.ehdr + 0x20);
    }
    else {
        mutex_unlock(_segment.ehdr + 0x20);
        _segment.ehdr = ktime_get_with_offset(1);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x10);
    }
    return -0x13;
}


// ===== sym.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001260 (size 8) =====

uint64_t sym.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong uVar17;
    uchar *puVar18;
    int64_t iVar19;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar21;
    int iVar22;
    uint64_t uVar23;
    code *pcVar24;
    int64_t iVar25;
    ulong uVar26;
    ulong unaff_x30;
    int64_t iStack_88;
    ulong uStack_78;
    uint uStack_70;
    uchar uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iVar19 = param_1 + 0x10;
    iStack_68 = *(iVar25 + 0x5e0);
    puVar11 = device_get_match_data(iVar19);
    if (puVar11 == NULL) {
        uVar13 = 0xffffffed;
        goto code_r0x08001db0;
    }
    puVar12 = platform_get_resource(param_1,0x200,0);
    if (puVar12 == NULL) {
        uVar13 = 0;
        goto code_r0x08001db0;
    }
    uVar17 = 0x68000000000713;
    if (arm64_use_ng_mappings != 0x0) {
        uVar17 = 0x68000000000f13;
    }
    uVar13 = __ioremap(*puVar12 + *puVar11,4,uVar17);
    if (0xfffffffffffff000 < uVar13) goto code_r0x08001db0;
    uVar23 = *puVar12;
    uVar14 = sym.readl_relaxed(uVar13);
    iVar25 = (puVar12[1] - *puVar12) + 1;
    iounmap(uVar13);
    iVar15 = devm_ioremap(iVar19,uVar23 | uVar14 & 0xffffffff,iVar25);
    if ((iVar15 != 0) && (piVar16 = devm_kmalloc(iVar19,puVar11[2] * 0x18,0xdc0), piVar16 != NULL)) {
        if (puVar11[2] != 0) {
            uVar9 = 0;
            do {
                iVar3 = uVar9;
                uVar9 = uVar9 + 1;
                piVar16[iVar3 * 3] = puVar11;
            } while (uVar9 < puVar11[2]);
        }
        if (puVar11[1] == 0) {
            iStack_88 = 0;
code_r0x080019e4:
            uVar20 = *(param_1 + 0x300);
            uStack_6c = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uVar17 = debugfs_create_dir("qcom_sleep_stats",0);
            iVar19 = *piVar16;
            if (*(iVar19 + 8) != 0) {
                uVar21 = 0;
                uVar10 = 0;
                uVar9 = 0;
                do {
                    uVar2 = uVar21;
                    if (*(iVar19 + 0xc) != '\0') {
                        uVar2 = uVar10;
                    }
                    (piVar16 + uVar9 * 3)[1] = iVar15 + uVar2;
                    uStack_70 = sym.readl_relaxed(iVar15 + uVar2);
                    strim(&uStack_70);
                    debugfs_create_file(&uStack_70,0x124,uVar17,piVar16 + uVar9 * 3,obj.soc_sleep_stats_fops);
                    iVar19 = *piVar16;
                    uVar9 = uVar9 + 1;
                    uVar10 = uVar10 + 0x30;
                    uVar21 = uVar21 + 0x20;
                } while (uVar9 < *(iVar19 + 8));
            }
            iVar8 = of_property_read_string_helper(uVar20,"ss-name",0,0,0);
            if (-1 < iVar8) {
                if (iVar8 != 0) {
                    iVar22 = 0;
                    do {
                        of_property_read_string_helper(uVar20,"ss-name",&uStack_78,1,iVar22);
                        uVar6 = uStack_78;
                        uVar26 = _obj.subsystems;
                        iVar7 = strcmp(_obj.subsystems,uStack_78);
                        uVar4 = *0x80001a0;
                        if (iVar7 == 0) {
                            pcVar24 = obj.subsystems;
code_r0x08001c24:
                            debugfs_create_file(uVar26,0x124,uVar17,pcVar24,obj.subsystem_sleep_stats_fops);
                        }
                        else {
                            iVar7 = strcmp(*0x80001a0,uVar6);
                            uVar26 = *0x80001b0;
                            if (iVar7 == 0) {
                                pcVar24 = 0x80001a0;
                                uVar26 = uVar4;
                                goto code_r0x08001c24;
                            }
                            pcVar24 = 0x80001b0;
                            iVar7 = strcmp(*0x80001b0,uVar6);
                            uVar4 = *0x80001c0;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001c0;
                            iVar7 = strcmp(*0x80001c0,uVar6);
                            uVar5 = *0x80001d0;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001d0;
                            iVar7 = strcmp(*0x80001d0,uVar6);
                            uVar4 = *0x80001e0;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001e0;
                            iVar7 = strcmp(*0x80001e0,uVar6);
                            uVar5 = *0x80001f0;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001f0;
                            iVar7 = strcmp(*0x80001f0,uVar6);
                            uVar4 = *0x8000200;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x8000200;
                            iVar7 = strcmp(*0x8000200,uVar6);
                            uVar5 = *0x8000210;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x8000210;
                            iVar7 = strcmp(*0x8000210,uVar6);
                            uVar4 = *0x8000220;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            iVar7 = strcmp(*0x8000220,uVar6);
                            if (iVar7 == 0) {
                                pcVar24 = 0x8000220;
                                uVar26 = uVar4;
                                goto code_r0x08001c24;
                            }
                        }
                        iVar22 = iVar22 + 1;
                    } while (iVar8 != iVar22);
                }
                if ((iStack_88 != 0) && (iVar8 = sym.readl_relaxed(iStack_88), iVar8 == -0x5eea858b)) {
                    debugfs_create_file("ddr_stats",0x124,uVar17,iStack_88,obj.ddr_stats_fops);
                }
            }
            uVar13 = 0;
            *(param_1 + 0xa8) = uVar17;
            goto code_r0x08001db0;
        }
        uVar17 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar17 = 0x68000000000f13;
        }
        uVar13 = __ioremap(*puVar12 + puVar11[1],4,uVar17);
        if (0xfffffffffffff000 < uVar13) {
            uVar13 = uVar13 & 0xffffffff;
            goto code_r0x08001db0;
        }
        uVar23 = *puVar12;
        uVar14 = sym.readl_relaxed(uVar13);
        iounmap(uVar13);
        iStack_88 = devm_ioremap(iVar19,uVar23 | uVar14 & 0xffffffff,iVar25);
        if (iStack_88 != 0) {
            piVar1 = piVar16 + 2;
            iVar8 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,drv-max",piVar1,1,0);
            if (iVar8 < 0) {
                *piVar1 = 0xffffffea;
            }
            puVar18 = devm_kmalloc(iVar19,0x90,0xdc0);
            _segment.ehdr = puVar18;
            if (puVar18 != NULL) {
                *puVar18 = 0;
                *(puVar18 + 8) = iStack_88;
                __mutex_init(puVar18 + 0x20,"&ddr_gdata->ddr_stats_lock",obj.soc_sleep_stats_probe.__key);
                uVar9 = sym.readl_relaxed(*(_segment.ehdr + 8) + 4);
                puVar18 = _segment.ehdr;
                *(_segment.ehdr + 0x14) = uVar9;
                if (uVar9 < 0x15) {
                    if (uVar9 != 0) {
                        uVar9 = 0;
                        iVar25 = *(puVar18 + 8) + 8;
                        do {
                            uVar10 = sym.readl_relaxed(iVar25);
                            puVar18 = _segment.ehdr;
                            if ((uVar10 & 0xff00) == 0x100) {
                                *(_segment.ehdr + 0x10) = *(_segment.ehdr + 0x10) + 1;
                            }
                            iVar25 = iVar25 + 0x10;
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < *(puVar18 + 0x14));
                    }
                    *(puVar18 + 0x58) = iVar19;
                    puVar18[0x60] = 1;
                    *(puVar18 + 0x68) = 1000;
                    puVar18[0x70] = 0;
                    uVar13 = mbox_request_channel(puVar18 + 0x58,0);
                    puVar18 = _segment.ehdr;
                    *(_segment.ehdr + 0x50) = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        iVar19 = *piVar1;
                        *puVar18 = 1;
                        *(puVar18 + 0x18) = iVar19;
                        iVar19 = of_find_property(*(param_1 + 0x300),"ddr-freq-update",0);
                        obj.ddr_freq_update = iVar19 != 0;
                    }
                }
                else {
                    _printk(0x800045b);
                }
                goto code_r0x080019e4;
            }
        }
    }
    uVar13 = 0xfffffff4;
code_r0x08001db0:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_68) {
        iVar19 = __stack_chk_fail();
        *extraout_x18 = sym.soc_sleep_stats_remove;
        debugfs_remove(*(iVar19 + 0xa8));
        return 0;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.soc_sleep_stats_remove.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.soc_sleep_stats_remove.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.ddr_stats_freq_sync_send_msg @ 0x08001270 (size 244) =====

int sym.ddr_stats_freq_sync_send_msg(void)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_60;
    ulong *puStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    mutex_lock(_segment.ehdr + 0x20);
    iVar2 = scnprintf(&uStack_50,0x28,"{class: ddr, action: freqsync}");
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar2 + 3) & 0xfffffffffffffffc;
    puStack_58 = &uStack_50;
    iVar2 = mbox_send_message(*(_segment.ehdr + 0x50),&uStack_60);
    if (iVar2 < 0) {
        _printk(0x80004a0,iVar2);
        mutex_unlock(_segment.ehdr + 0x20);
    }
    else {
        mutex_unlock(_segment.ehdr + 0x20);
        _segment.ehdr = ktime_get_with_offset(1);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    __stack_chk_fail();
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x10);
    }
    return -0x13;
}


// ===== sym.ddr_stats_get_freq_count @ 0x08001364 (size 40) =====

uint sym.ddr_stats_get_freq_count(void)

{
    if (_segment.ehdr != 0) {
        return *(_segment.ehdr + 0x10);
    }
    return 0xffffffed;
}


// ===== sym.ddr_stats_get_residency @ 0x0800138c (size 588) =====

uint64_t sym.ddr_stats_get_residency(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int iVar7;
    uint64_t uVar8;
    int iVar9;
    ulong unaff_x30;
    uint uStack_198;
    int iStack_194;
    ulong auStack_190 [39];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar1 = arg1;
    memset(&uStack_198,0,0x140);
    uVar8 = 0xffffffea;
    if (((uVar1 < 0) || (arg2 == 0)) || (_segment.ehdr == NULL)) goto code_r0x08001510;
    if ((*(_segment.ehdr + 8) == 0) || (*(_segment.ehdr + 0x14) == 0)) {
        uVar8 = 0xffffffea;
        goto code_r0x08001510;
    }
    iVar4 = ktime_get_with_offset(1);
    while (iVar4 < _segment.ehdr) {
        __const_udelay(0x20c4ac);
        iVar4 = ktime_get_with_offset(1);
    }
    mutex_lock(_segment.ehdr + 0x20);
    iVar7 = *(_segment.ehdr + 0x14);
    uVar2 = *(_segment.ehdr + 0x10);
    if (uVar1 <= *(_segment.ehdr + 0x10)) {
        uVar2 = uVar1;
    }
    if (iVar7 == 0) {
code_r0x08001504:
        uVar8 = 0;
        pcVar5 = _segment.ehdr;
    }
    else {
        iVar9 = 0;
        iVar4 = *(_segment.ehdr + 8) + 8;
        do {
            __memcpy_fromio(&uStack_198 + iVar9 * 4,iVar4,0x10);
            iVar4 = iVar4 + 0x10;
            iVar9 = iVar9 + 1;
        } while (iVar7 != iVar9);
        if (*(_segment.ehdr + 0x14) == 0) goto code_r0x08001504;
        iVar4 = 0;
        do {
            if (iVar4 == 0x140) goto code_r0x080015cc;
            if (*(&uStack_198 + iVar4 + 1) == '\x01') {
                if (0x140 < iVar4 + 4U) goto code_r0x080015d0;
                if ((*(auStack_190 + iVar4 + -4) == 0) && (obj.ddr_freq_update != 0x0)) {
                    _printk(0x800042a);
                    uVar8 = 0xffffffea;
                    pcVar5 = _segment.ehdr;
                    goto code_r0x08001508;
                }
            }
            iVar4 = iVar4 + 0x10;
        } while (*(_segment.ehdr + 0x14) * 0x10 - iVar4 != 0);
        iVar4 = 0;
        uVar6 = 0;
        uVar8 = 0;
        pcVar5 = _segment.ehdr;
        do {
            if (uVar6 == 0x14) {
code_r0x080015cc:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80015d0);
                (*pcVar3)();
            }
            if ((*(&uStack_198 + iVar4) & 0xff00) == 0x100) {
                *(arg2 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) = *(&uStack_198 + iVar4) >> 0x10;
                if (0x140 < iVar4 + 8U) {
code_r0x080015d0:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x80015d4);
                    (*pcVar3)();
                }
                iVar7 = uVar8;
                uVar1 = iVar7 + 1;
                uVar8 = uVar1;
                *(arg2 + iVar7 * 0x10 + 8) = *(auStack_190 + iVar4);
                pcVar5 = _segment.ehdr;
                if (uVar2 < uVar1) break;
            }
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + 0x10;
        } while (uVar6 < *(pcVar5 + 0x14));
    }
code_r0x08001508:
    mutex_unlock(pcVar5 + 0x20);
code_r0x08001510:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    __stack_chk_fail();
    if (*_segment.ehdr == '\0') {
        return 0xffffffa1;
    }
    return *(_segment.ehdr + 0x18);
}


// ===== sym.ddr_stats_get_ss_count @ 0x080015d8 (size 44) =====

uint sym.ddr_stats_get_ss_count(void)

{
    if (*_segment.ehdr != '\0') {
        return *(_segment.ehdr + 0x18);
    }
    return 0xffffffa1;
}


// ===== sym.ddr_stats_get_ss_vote_info @ 0x08001604 (size 504) =====

int sym.ddr_stats_get_ss_vote_info(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int *piVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong unaff_x30;
    ulong uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = -0x13;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if ((arg2 != 0) && (_segment.ehdr != NULL)) {
        iVar1 = -0x13;
        if ((*(_segment.ehdr + 0x18) != 0xffffffea) && (*(_segment.ehdr + 0x18) == arg1)) {
            if (*_segment.ehdr == '\0') {
                iVar1 = -0x5f;
            }
            else {
                puVar4 = __kmalloc(uVar3 << 2,0xdc0);
                if (puVar4 == NULL) {
                    iVar1 = -0xc;
                }
                else {
                    mutex_lock(_segment.ehdr + 0x20);
                    iVar1 = scnprintf(&uStack_80,0x28,"{class: ddr, res: drvs_ddr_votes}");
                    uStack_90 = CONCAT44(uStack_90._4_4_,iVar1 + 3) & 0xfffffffffffffffc;
                    puStack_88 = &uStack_80;
                    iVar1 = mbox_send_message(*(_segment.ehdr + 0x50),&uStack_90);
                    if (iVar1 < 0) {
                        _printk(0x80004a0,iVar1);
                    }
                    else if (arg1 < 1) {
                        iVar1 = 0;
                    }
                    else {
                        iVar7 = *(_segment.ehdr + 8) + (*(_segment.ehdr + 0x14) << 4 | 8);
                        puVar8 = puVar4;
                        do {
                            uVar2 = sym.readl_relaxed(iVar7);
                            *puVar8 = uVar2;
                            if (uVar2 == 0xffffdead) {
                                uVar6 = 0xffffdead;
                                *arg2 = 0xffffdead;
                            }
                            else if (uVar2 == 0xdeaddead) {
                                *arg2 = 0xdeaddead;
                                uVar6 = 0xdeaddead;
                            }
                            else {
                                uVar6 = *puVar8 & 0x3fff;
                                *arg2 = uVar2 >> 0xe & 0x3fff;
                            }
                            *(arg2 + 4) = uVar6;
                            uVar3 = uVar3 - 1;
                            arg2 = arg2 + 8;
                            puVar8 = puVar8 + 1;
                            iVar7 = iVar7 + 4;
                        } while (uVar3 != 0);
                        iVar1 = 0;
                    }
                    mutex_unlock(_segment.ehdr + 0x20);
                    kfree(puVar4);
                }
            }
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        piVar5 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,piVar5,0x8001800);
        iVar1 = *piVar5;
        log_post_read_mmio(iVar1,0x20,piVar5,0x8001834);
        return iVar1;
    }
    return iVar1;
}


// ===== sym.readl_relaxed @ 0x080017fc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001800);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001834);
    return uVar1;
}


// ===== sym.soc_sleep_stats_probe @ 0x0800186c (size 1532) =====

uint64_t sym.soc_sleep_stats_probe(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong uVar17;
    uchar *puVar18;
    int64_t iVar19;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar21;
    int iVar22;
    uint64_t uVar23;
    code *pcVar24;
    int64_t iVar25;
    ulong uVar26;
    ulong unaff_x30;
    int64_t iStack_88;
    ulong uStack_78;
    uint uStack_70;
    uchar uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar25 = sp_el0;
    iVar19 = arg1 + 0x10;
    iStack_68 = *(iVar25 + 0x5e0);
    puVar11 = device_get_match_data(iVar19);
    if (puVar11 == NULL) {
        uVar13 = 0xffffffed;
        goto code_r0x08001db0;
    }
    puVar12 = platform_get_resource(arg1,0x200,0);
    if (puVar12 == NULL) {
        uVar13 = 0;
        goto code_r0x08001db0;
    }
    uVar17 = 0x68000000000713;
    if (arm64_use_ng_mappings != 0x0) {
        uVar17 = 0x68000000000f13;
    }
    uVar13 = __ioremap(*puVar12 + *puVar11,4,uVar17);
    if (0xfffffffffffff000 < uVar13) goto code_r0x08001db0;
    uVar23 = *puVar12;
    uVar14 = sym.readl_relaxed(uVar13);
    iVar25 = (puVar12[1] - *puVar12) + 1;
    iounmap(uVar13);
    iVar15 = devm_ioremap(iVar19,uVar23 | uVar14 & 0xffffffff,iVar25);
    if ((iVar15 != 0) && (piVar16 = devm_kmalloc(iVar19,puVar11[2] * 0x18,0xdc0), piVar16 != NULL)) {
        if (puVar11[2] != 0) {
            uVar9 = 0;
            do {
                iVar3 = uVar9;
                uVar9 = uVar9 + 1;
                piVar16[iVar3 * 3] = puVar11;
            } while (uVar9 < puVar11[2]);
        }
        if (puVar11[1] == 0) {
            iStack_88 = 0;
code_r0x080019e4:
            uVar20 = *(arg1 + 0x300);
            uStack_6c = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uVar17 = debugfs_create_dir("qcom_sleep_stats",0);
            iVar19 = *piVar16;
            if (*(iVar19 + 8) != 0) {
                uVar21 = 0;
                uVar10 = 0;
                uVar9 = 0;
                do {
                    uVar2 = uVar21;
                    if (*(iVar19 + 0xc) != '\0') {
                        uVar2 = uVar10;
                    }
                    (piVar16 + uVar9 * 3)[1] = iVar15 + uVar2;
                    uStack_70 = sym.readl_relaxed(iVar15 + uVar2);
                    strim(&uStack_70);
                    debugfs_create_file(&uStack_70,0x124,uVar17,piVar16 + uVar9 * 3,obj.soc_sleep_stats_fops);
                    iVar19 = *piVar16;
                    uVar9 = uVar9 + 1;
                    uVar10 = uVar10 + 0x30;
                    uVar21 = uVar21 + 0x20;
                } while (uVar9 < *(iVar19 + 8));
            }
            iVar8 = of_property_read_string_helper(uVar20,"ss-name",0,0,0);
            if (-1 < iVar8) {
                if (iVar8 != 0) {
                    iVar22 = 0;
                    do {
                        of_property_read_string_helper(uVar20,"ss-name",&uStack_78,1,iVar22);
                        uVar6 = uStack_78;
                        uVar26 = _obj.subsystems;
                        iVar7 = strcmp(_obj.subsystems,uStack_78);
                        uVar4 = *0x80001a0;
                        if (iVar7 == 0) {
                            pcVar24 = obj.subsystems;
code_r0x08001c24:
                            debugfs_create_file(uVar26,0x124,uVar17,pcVar24,obj.subsystem_sleep_stats_fops);
                        }
                        else {
                            iVar7 = strcmp(*0x80001a0,uVar6);
                            uVar26 = *0x80001b0;
                            if (iVar7 == 0) {
                                pcVar24 = 0x80001a0;
                                uVar26 = uVar4;
                                goto code_r0x08001c24;
                            }
                            pcVar24 = 0x80001b0;
                            iVar7 = strcmp(*0x80001b0,uVar6);
                            uVar4 = *0x80001c0;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001c0;
                            iVar7 = strcmp(*0x80001c0,uVar6);
                            uVar5 = *0x80001d0;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001d0;
                            iVar7 = strcmp(*0x80001d0,uVar6);
                            uVar4 = *0x80001e0;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001e0;
                            iVar7 = strcmp(*0x80001e0,uVar6);
                            uVar5 = *0x80001f0;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x80001f0;
                            iVar7 = strcmp(*0x80001f0,uVar6);
                            uVar4 = *0x8000200;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x8000200;
                            iVar7 = strcmp(*0x8000200,uVar6);
                            uVar5 = *0x8000210;
                            uVar26 = uVar4;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            pcVar24 = 0x8000210;
                            iVar7 = strcmp(*0x8000210,uVar6);
                            uVar4 = *0x8000220;
                            uVar26 = uVar5;
                            if (iVar7 == 0) goto code_r0x08001c24;
                            iVar7 = strcmp(*0x8000220,uVar6);
                            if (iVar7 == 0) {
                                pcVar24 = 0x8000220;
                                uVar26 = uVar4;
                                goto code_r0x08001c24;
                            }
                        }
                        iVar22 = iVar22 + 1;
                    } while (iVar8 != iVar22);
                }
                if ((iStack_88 != 0) && (iVar8 = sym.readl_relaxed(iStack_88), iVar8 == -0x5eea858b)) {
                    debugfs_create_file("ddr_stats",0x124,uVar17,iStack_88,obj.ddr_stats_fops);
                }
            }
            uVar13 = 0;
            *(arg1 + 0xa8) = uVar17;
            goto code_r0x08001db0;
        }
        uVar17 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar17 = 0x68000000000f13;
        }
        uVar13 = __ioremap(*puVar12 + puVar11[1],4,uVar17);
        if (0xfffffffffffff000 < uVar13) {
            uVar13 = uVar13 & 0xffffffff;
            goto code_r0x08001db0;
        }
        uVar23 = *puVar12;
        uVar14 = sym.readl_relaxed(uVar13);
        iounmap(uVar13);
        iStack_88 = devm_ioremap(iVar19,uVar23 | uVar14 & 0xffffffff,iVar25);
        if (iStack_88 != 0) {
            piVar1 = piVar16 + 2;
            iVar8 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,drv-max",piVar1,1,0);
            if (iVar8 < 0) {
                *piVar1 = 0xffffffea;
            }
            puVar18 = devm_kmalloc(iVar19,0x90,0xdc0);
            _segment.ehdr = puVar18;
            if (puVar18 != NULL) {
                *puVar18 = 0;
                *(puVar18 + 8) = iStack_88;
                __mutex_init(puVar18 + 0x20,"&ddr_gdata->ddr_stats_lock",obj.soc_sleep_stats_probe.__key);
                uVar9 = sym.readl_relaxed(*(_segment.ehdr + 8) + 4);
                puVar18 = _segment.ehdr;
                *(_segment.ehdr + 0x14) = uVar9;
                if (uVar9 < 0x15) {
                    if (uVar9 != 0) {
                        uVar9 = 0;
                        iVar25 = *(puVar18 + 8) + 8;
                        do {
                            uVar10 = sym.readl_relaxed(iVar25);
                            puVar18 = _segment.ehdr;
                            if ((uVar10 & 0xff00) == 0x100) {
                                *(_segment.ehdr + 0x10) = *(_segment.ehdr + 0x10) + 1;
                            }
                            iVar25 = iVar25 + 0x10;
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < *(puVar18 + 0x14));
                    }
                    *(puVar18 + 0x58) = iVar19;
                    puVar18[0x60] = 1;
                    *(puVar18 + 0x68) = 1000;
                    puVar18[0x70] = 0;
                    uVar13 = mbox_request_channel(puVar18 + 0x58,0);
                    puVar18 = _segment.ehdr;
                    *(_segment.ehdr + 0x50) = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        iVar19 = *piVar1;
                        *puVar18 = 1;
                        *(puVar18 + 0x18) = iVar19;
                        iVar19 = of_find_property(*(arg1 + 0x300),"ddr-freq-update",0);
                        obj.ddr_freq_update = iVar19 != 0;
                    }
                }
                else {
                    _printk(0x800045b);
                }
                goto code_r0x080019e4;
            }
        }
    }
    uVar13 = 0xfffffff4;
code_r0x08001db0:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack_68) {
        iVar19 = __stack_chk_fail();
        *extraout_x18 = sym.soc_sleep_stats_remove;
        debugfs_remove(*(iVar19 + 0xa8));
        return 0;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.soc_sleep_stats_remove @ 0x08001e68 (size 44) =====

ulong sym.soc_sleep_stats_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.soc_sleep_stats_open @ 0x08001e94 (size 56) =====

void sym.soc_sleep_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.soc_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.soc_sleep_stats_show @ 0x08001ecc (size 332) =====

ulong sym.soc_sleep_stats_show(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar7 = *(arg1 + 0x80);
    iVar5 = piVar7[1];
    uStack_58 = 0;
    iStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    __memcpy_fromio(&uStack_68,iVar5,0x20);
    iVar6 = iStack_50;
    pcVar1 = _seq_lseek;
    if (uStack_58 < uStack_60) {
        __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000230);
        iVar3 = (*pcVar1)();
        iVar6 = (iVar3 + iVar6) - uStack_60;
    }
    seq_printf(arg1,"Count = %u\n",uStack_68._4_4_);
    seq_printf(arg1,"Last Entered At = %llu\n",uStack_60);
    seq_printf(arg1,"Last Exited At = %llu\n",uStack_58);
    seq_printf(arg1,"Accumulated Duration = %llu\n",iVar6);
    if (*(*piVar7 + 0xc) != '\0') {
        uVar2 = sym.readl_relaxed(iVar5 + 0x1c);
        seq_printf(arg1,"Client_votes = %#x\n",uVar2);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.subsystem_sleep_stats_open;
    uVar4 = single_open(auVar8._8_8_,sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,
                        *(auVar8._0_8_ + 0x2d8));
    return uVar4;
}


// ===== sym.subsystem_sleep_stats_open @ 0x08002018 (size 56) =====

void sym.subsystem_sleep_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.subsystem_sleep_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.subsystem_sleep_stats_show @ 0x08002050 (size 240) =====

uint64_t sym.subsystem_sleep_stats_show(int64_t arg1)

{
    code *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = qcom_smem_get(*(*(arg1 + 0x80) + 0xc),*(*(arg1 + 0x80) + 8),0);
    pcVar1 = _seq_lseek;
    if (uVar2 < 0xfffffffffffff001) {
        iVar4 = *(uVar2 + 0x18);
        if (*(uVar2 + 0x10) < *(uVar2 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000230);
            iVar3 = (*pcVar1)();
            iVar4 = (iVar3 + iVar4) - *(uVar2 + 8);
        }
        seq_printf(arg1,"Count = %u\n",*(uVar2 + 4));
        seq_printf(arg1,"Last Entered At = %llu\n",*(uVar2 + 8));
        seq_printf(arg1,"Last Exited At = %llu\n",*(uVar2 + 0x10));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar4);
        uVar2 = 0;
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.ddr_stats_open @ 0x08002140 (size 56) =====

void sym.ddr_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.ddr_stats_show.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.ddr_stats_show @ 0x08002178 (size 760) =====

uchar * sym.ddr_stats_show(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uchar *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t auStack_1b0 [2];
    int64_t iStack_1a8;
    uchar auStack_1a0 [8];
    int64_t iStack_198;
    uchar auStack_190 [8];
    int64_t iStack_188;
    uchar auStack_180 [8];
    int64_t iStack_178;
    uint32_t auStack_170 [2];
    int64_t aiStack_168 [31];
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    memset(auStack_1b0,0,0x140);
    iVar7 = *(arg1 + 0x80);
    uVar3 = sym.readl_relaxed(iVar7 + 4);
    if (uVar3 < 0x15) {
        __memcpy_fromio(auStack_1b0,iVar7 + 8,0x10);
        __memcpy_fromio(auStack_1a0,iVar7 + 0x18,0x10);
        __memcpy_fromio(auStack_190,iVar7 + 0x28,0x10);
        __memcpy_fromio(auStack_180,iVar7 + 0x38,0x10);
        iVar10 = 0;
        iVar6 = 0;
        uVar9 = iStack_198 + iStack_1a8 + iStack_188 + iStack_178;
        uVar12 = uVar9 & 0xffffffff;
        do {
            if (uVar9 == 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = 0;
                if (uVar12 != 0) {
                    uVar5 = (*(auStack_1a0 + iVar10 + -8) * 100) / uVar12;
                }
            }
            uVar11 = *(auStack_1b0 + iVar10);
            uVar1 = uVar11 >> 8 & 0xff;
            if (uVar1 == 1) {
                if ((0xffff < uVar11) && (*(auStack_1b0 + iVar10 + 4) != 0)) {
                    seq_printf(arg1,"Freq %dMhz:\tCP IDX:%u\tDuration (ticks):%ld (~%d%%)\n",uVar11 >> 0x10,
                               uVar11 & 0x1f,*(auStack_1a0 + iVar10 + -8),uVar5);
                }
            }
            else if (uVar1 == 0) {
                iVar6 = iVar6 + 1;
                seq_printf(arg1,"LPM %d:\tName:0x%x\tcount:%u\tDuration (ticks):%ld (~%d%%)\n",iVar6,uVar11 & 0xff,
                           *(auStack_1b0 + iVar10 + 4),*(auStack_1a0 + iVar10 + -8));
            }
            iVar10 = iVar10 + 0x10;
        } while (iVar10 != 0x40);
        if (4 < uVar3) {
            uVar9 = 0;
            iVar7 = iVar7 + 0x48;
            uVar11 = 4;
            do {
                __memcpy_fromio(auStack_1b0 + uVar11 * 4,iVar7,0x10);
                if (auStack_1b0[uVar11 * 4 + 1] == 0 && obj.ddr_freq_update != 0x0) {
                    seq_puts(arg1,"ddr_stats: Freq update failed.\n");
                    goto code_r0x0800241c;
                }
                iVar10 = uVar11;
                iVar7 = iVar7 + 0x10;
                uVar11 = uVar11 + 1;
                uVar9 = *(auStack_1a0 + iVar10 * 0x10 + -8) + uVar9;
            } while (uVar3 != uVar11);
            piVar8 = aiStack_168;
            iVar7 = uVar3 - 4;
            do {
                if (uVar9 == 0) {
                    uVar12 = 0;
                }
                else {
                    uVar12 = 0;
                    if ((uVar9 & 0xffffffff) != 0) {
                        uVar12 = (*piVar8 * 100) / (uVar9 & 0xffffffff);
                    }
                }
                uVar3 = *(piVar8 + -1);
                uVar11 = uVar3 >> 8 & 0xff;
                if (uVar11 == 1) {
                    if ((0xffff < uVar3) && (*(piVar8 + -4) != 0)) {
                        seq_printf(arg1,"Freq %dMhz:\tCP IDX:%u\tDuration (ticks):%ld (~%d%%)\n",uVar3 >> 0x10,
                                   uVar3 & 0x1f,*piVar8,uVar12);
                    }
                }
                else if (uVar11 == 0) {
                    iVar6 = iVar6 + 1;
                    seq_printf(arg1,"LPM %d:\tName:0x%x\tcount:%u\tDuration (ticks):%ld (~%d%%)\n",iVar6,uVar3 & 0xff
                               ,*(piVar8 + -4),*piVar8);
                }
                piVar8 = piVar8 + 2;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
        }
    }
    else {
        _printk(0x800045b);
    }
code_r0x0800241c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_70) {
        auVar13 = __stack_chk_fail();
        puVar4 = auVar13._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar13._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80024c8);
        (*pcVar2)();
    }
    return NULL;
}


// ===== sym.__cfi_check_fail @ 0x08002470 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080024b4

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
    //switch table (4 cases) at 0x8000250
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024c8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002554 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08002588 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.soc_sleep_stats_probe.fb4877d3d4ff320f390dd55fc59eb8d8.cfi_jt);
    return;
}

