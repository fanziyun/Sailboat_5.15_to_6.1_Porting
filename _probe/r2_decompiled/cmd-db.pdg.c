// decompiled from cmd-db by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x080018d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2924f966af6797f8) {
        if (-0x8dc801903aca539 < arg1) {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.single_release.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) {
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08001890;
                    pcVar2 = sym.seq_read.cfi_jt;
                    goto code_r0x080011c8;
                }
                pcVar2 = sym.cmd_db_ready.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001890;
        }
        if (arg1 == -0x3d48df0516bd500d) {
            pcVar2 = sym.cmd_db_read_slave_id.cfi_jt;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001890;
            pcVar2 = sym.cmd_db_dev_probe.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x2924f966af6797f8) {
            pcVar2 = sym.cmd_db_read_aux_data.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08001890;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 == 0x5233d5bc7887ae44) {
        pcVar2 = sym.cmd_db_debugfs_dump.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt;
    }
    else if (arg1 == 0x741b966c574d47b1) {
        pcVar2 = sym.cmd_db_is_standalone.cfi_jt;
    }
    else {
        if (arg1 != 0x7d973fbcf785e0e3) goto code_r0x08001890;
        pcVar2 = sym.cmd_db_read_addr.cfi_jt;
    }
code_r0x080011c8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001890:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018e4);
    (*pcVar1)();
}


// ===== sym.cmd_db_read_aux_data.cfi_jt @ 0x080011e0 (size 8) =====

uint64_t sym.cmd_db_read_aux_data.cfi_jt(ulong param_1,uint64_t *param_2)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *unaff_x19;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t *puStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    if (_segment.ehdr == 0) {
        uVar4 = 0xfffffffffffffdfb;
    }
    else if (*(_segment.ehdr + 4) == 0xc0330db) {
        strncpy(&iStack_30,param_1,8);
        uVar6 = 0;
        uVar4 = 0xffffffffffffffed;
        do {
            iVar7 = iVar3 + uVar6 * 0x10;
            unaff_x19 = param_2;
            if (*(iVar7 + 8) == 0) {
                uVar4 = 0xffffffffffffffed;
                break;
            }
            uVar2 = *(iVar7 + 0xe);
            uVar8 = uVar2;
            if (uVar2 != 0) {
                piVar9 = iVar3 + *(iVar3 + uVar6 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_30) {
                        if (param_2 != NULL) {
                            *param_2 = *(piVar9 + 0x14);
                        }
                        uVar4 = iVar3 + *(iVar3 + (uVar6 & 0xffffffff) * 0x10 + 0xc) + *(piVar9 + 0x16) + 0x90;
                        goto code_r0x08001450;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
    }
    else {
        uVar4 = 0xffffffffffffffea;
    }
code_r0x08001450:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    uVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.cmd_db_read_slave_id;
    iVar3 = _segment.ehdr;
    pcStack_48 = sym.cmd_db_read_slave_id;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    puStack_40 = unaff_x19;
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_60,uVar5,8);
        iVar7 = 0;
        while (iVar1 = iVar3 + iVar7 * 0x10, *(iVar1 + 8) != 0) {
            uVar2 = *(iVar1 + 0xe);
            uVar8 = uVar2;
            if (uVar2 != 0) {
                piVar9 = iVar3 + *(iVar3 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_60) {
                        uVar4 = *(piVar9 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar4 = 0;
code_r0x08001544:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar4);
        if (_segment.ehdr == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar8 & *(_segment.ehdr + 0x8c);
    }
    return uVar4;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080011e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cmd_db_is_standalone.cfi_jt @ 0x080011f0 (size 8) =====

uint8_t sym.cmd_db_is_standalone.cfi_jt(void)

{
    bool bVar1;
    
    if (_segment.ehdr == 0) {
        bVar1 = false;
    }
    else {
        bVar1 = *(_segment.ehdr + 4) == 0xc0330db;
    }
    return bVar1 & *(_segment.ehdr + 0x8c);
}


// ===== sym.cmd_db_ready.cfi_jt @ 0x080011f8 (size 8) =====

uint sym.cmd_db_ready.cfi_jt(void)

{
    uint uVar1;
    
    if (_segment.ehdr != 0) {
        uVar1 = 0;
        if (*(_segment.ehdr + 4) != 0xc0330db) {
            uVar1 = 0xffffffea;
        }
        return uVar1;
    }
    return 0xfffffdfb;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cmd_db_dev_probe.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08001208 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.open_cmd_db_debugfs.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt @ 0x08001210 (size 8) =====

void sym.open_cmd_db_debugfs.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.cmd_db_debugfs_dump.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.cmd_db_dev_probe.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.cmd_db_dev_probe.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_reserved_mem_lookup(*(param_1 + 0x300));
    if (iVar1 == 0) {
        pcVar2 = "failed to acquire memory region\n";
    }
    else {
        _segment.ehdr = memremap(*(iVar1 + 0x20),*(iVar1 + 0x28),4);
        if (_segment.ehdr == 0) {
            _segment.ehdr = 0;
            return 0xfffffff4;
        }
        if (*(_segment.ehdr + 4) == 0xc0330db) {
            debugfs_create_file("cmd-db",0x100,0,0,obj.cmd_db_debugfs_ops);
            if (_segment.ehdr != 0) {
                if (*(_segment.ehdr + 4) != 0xc0330db) {
                    return 0;
                }
                if ((*(_segment.ehdr + 0x8c) & 1) == 0) {
                    return 0;
                }
                _printk(0x800034e);
            }
            return 0;
        }
        pcVar2 = "Invalid Command DB Magic\n";
    }
    _dev_err(param_1 + 0x10,pcVar2);
    return 0xffffffea;
}


// ===== sym.seq_read.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cmd_db_read_addr.cfi_jt @ 0x08001228 (size 8) =====

uint64_t sym.cmd_db_read_addr.cfi_jt(ulong param_1)

{
    uint16_t uVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    uint64_t *puStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar10 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_30,param_1,8);
        iVar7 = 0;
        while (puVar10[iVar7 * 2 + 1] != 0) {
            uVar1 = *(puVar10 + iVar7 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar10 + *(puVar10 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_30) {
                        uVar3 = *(piVar9 + 2);
                        goto code_r0x08001334;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar3 = 0;
code_r0x08001334:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail(uVar3);
    puVar5 = auVar11._8_8_;
    *extraout_x18 = sym.cmd_db_read_aux_data;
    puVar2 = _segment.ehdr;
    pcStack_48 = sym.cmd_db_read_aux_data;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    if (_segment.ehdr == NULL) {
        uVar3 = 0xfffffffffffffdfb;
    }
    else if (*(_segment.ehdr + 4) == 0xc0330db) {
        strncpy(&iStack_60,auVar11._0_8_,8);
        uVar6 = 0;
        uVar3 = 0xffffffffffffffed;
        do {
            puVar10 = puVar5;
            if (puVar2[uVar6 * 2 + 1] == 0) {
                uVar3 = 0xffffffffffffffed;
                break;
            }
            uVar1 = *(puVar2 + uVar6 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar2 + *(puVar2 + uVar6 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_60) {
                        if (puVar5 != NULL) {
                            *puVar5 = *(piVar9 + 0x14);
                        }
                        uVar3 = puVar2 + *(piVar9 + 0x16) + *(puVar2 + (uVar6 & 0xffffffff) * 0x10 + 0xc) + 0x90;
                        goto code_r0x08001450;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
code_r0x08001450:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    uVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.cmd_db_read_slave_id;
    puVar2 = _segment.ehdr;
    pcStack_78 = sym.cmd_db_read_slave_id;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    ppuStack_80 = &puStack_50;
    puStack_70 = puVar10;
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_90,uVar4,8);
        iVar7 = 0;
        while (puVar2[iVar7 * 2 + 1] != 0) {
            uVar1 = *(puVar2 + iVar7 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar2 + *(puVar2 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_90) {
                        uVar3 = *(piVar9 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar3 = 0;
code_r0x08001544:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_88) {
        __stack_chk_fail(uVar3);
        if (_segment.ehdr == NULL) {
            uVar8 = 0;
        }
        else {
            uVar8 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar8 & *(_segment.ehdr + 0x8c);
    }
    return uVar3;
}


// ===== sym.cmd_db_debugfs_dump.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.cmd_db_debugfs_dump.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_puts(param_1,"Command DB DUMP\n");
    iVar4 = 0;
    do {
        pcVar2 = 0x80003ae;
        switch(*(_segment.ehdr + iVar4 * 0x10 + 8)) {
        case 0:
            goto code_r0x08001864;
        default:
            pcVar2 = "Unknown";
            break;
        case 3:
            break;
        case 4:
            pcVar2 = 0x8000399;
            break;
        case 5:
            pcVar2 = 0x80003fb;
        }
        iVar1 = _segment.ehdr + iVar4 * 0x10;
        seq_printf(param_1,"Slave %s (v%u.%u)\n",pcVar2,*(iVar1 + 0x10) >> 8,*(iVar1 + 0x10) & 0xff);
        seq_puts(param_1,0x8000324);
        if (*(iVar1 + 0xe) != 0) {
            uVar5 = 0;
            iVar3 = _segment.ehdr + *(iVar1 + 10) + 0x90;
            do {
                seq_printf(param_1,"0x%05x: %*pEp",*(iVar3 + 0x10),8,iVar3);
                if (*(iVar3 + 0x14) != 0) {
                    seq_printf(param_1," [%*ph]",*(iVar3 + 0x14),
                               _segment.ehdr + *(iVar1 + 0xc) + *(iVar3 + 0x16) + 0x90);
                }
                seq_putc(param_1,10);
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + 0x18;
            } while (uVar5 < *(iVar1 + 0xe));
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
code_r0x08001864:
    return 0;
}


// ===== sym.cmd_db_read_slave_id.cfi_jt @ 0x08001238 (size 8) =====

uint16_t sym.cmd_db_read_slave_id.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_30,param_1,8);
        iVar3 = 0;
        while (iVar1 = iVar2 + iVar3 * 0x10, *(iVar1 + 8) != 0) {
            uVar4 = *(iVar1 + 0xe);
            uVar5 = uVar4;
            if (uVar4 != 0) {
                piVar6 = iVar2 + *(iVar2 + iVar3 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar6 == iStack_30) {
                        uVar4 = *(piVar6 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar6 = piVar6 + 3;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            iVar3 = iVar3 + 1;
            if (iVar3 == 8) break;
        }
    }
    uVar4 = 0;
code_r0x08001544:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar4);
        if (_segment.ehdr == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar4 & *(_segment.ehdr + 0x8c);
    }
    return uVar4;
}


// ===== sym.cmd_db_ready @ 0x08001240 (size 60) =====

uint sym.cmd_db_ready(void)

{
    uint uVar1;
    
    if (_segment.ehdr != 0) {
        uVar1 = 0;
        if (*(_segment.ehdr + 4) != 0xc0330db) {
            uVar1 = 0xffffffea;
        }
        return uVar1;
    }
    return 0xfffffdfb;
}


// ===== sym.cmd_db_read_addr @ 0x0800127c (size 232) =====

uint64_t sym.cmd_db_read_addr(int64_t arg1)

{
    uint16_t uVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    uint64_t *puStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar10 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_30,arg1,8);
        iVar7 = 0;
        while (puVar10[iVar7 * 2 + 1] != 0) {
            uVar1 = *(puVar10 + iVar7 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar10 + *(puVar10 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_30) {
                        uVar3 = *(piVar9 + 2);
                        goto code_r0x08001334;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar3 = 0;
code_r0x08001334:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    auVar11 = __stack_chk_fail(uVar3);
    puVar5 = auVar11._8_8_;
    *extraout_x18 = sym.cmd_db_read_aux_data;
    puVar2 = _segment.ehdr;
    pcStack_48 = sym.cmd_db_read_aux_data;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    if (_segment.ehdr == NULL) {
        uVar3 = 0xfffffffffffffdfb;
    }
    else if (*(_segment.ehdr + 4) == 0xc0330db) {
        strncpy(&iStack_60,auVar11._0_8_,8);
        uVar6 = 0;
        uVar3 = 0xffffffffffffffed;
        do {
            puVar10 = puVar5;
            if (puVar2[uVar6 * 2 + 1] == 0) {
                uVar3 = 0xffffffffffffffed;
                break;
            }
            uVar1 = *(puVar2 + uVar6 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar2 + *(puVar2 + uVar6 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_60) {
                        if (puVar5 != NULL) {
                            *puVar5 = *(piVar9 + 0x14);
                        }
                        uVar3 = puVar2 + *(piVar9 + 0x16) + *(puVar2 + (uVar6 & 0xffffffff) * 0x10 + 0xc) + 0x90;
                        goto code_r0x08001450;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
    }
    else {
        uVar3 = 0xffffffffffffffea;
    }
code_r0x08001450:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    uVar4 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.cmd_db_read_slave_id;
    puVar2 = _segment.ehdr;
    pcStack_78 = sym.cmd_db_read_slave_id;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    ppuStack_80 = &puStack_50;
    puStack_70 = puVar10;
    if ((_segment.ehdr != NULL) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_90,uVar4,8);
        iVar7 = 0;
        while (puVar2[iVar7 * 2 + 1] != 0) {
            uVar1 = *(puVar2 + iVar7 * 0x10 + 0xe);
            uVar8 = uVar1;
            if (uVar1 != 0) {
                piVar9 = puVar2 + *(puVar2 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_90) {
                        uVar3 = *(piVar9 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar3 = 0;
code_r0x08001544:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_88) {
        __stack_chk_fail(uVar3);
        if (_segment.ehdr == NULL) {
            uVar8 = 0;
        }
        else {
            uVar8 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar8 & *(_segment.ehdr + 0x8c);
    }
    return uVar3;
}


// ===== sym.cmd_db_read_aux_data @ 0x08001364 (size 292) =====

uint64_t sym.cmd_db_read_aux_data(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = _segment.ehdr;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    if (_segment.ehdr == 0) {
        uVar4 = 0xfffffffffffffdfb;
    }
    else if (*(_segment.ehdr + 4) == 0xc0330db) {
        strncpy(&iStack_30,arg1,8);
        uVar6 = 0;
        uVar4 = 0xffffffffffffffed;
        do {
            iVar7 = iVar3 + uVar6 * 0x10;
            unaff_x19 = arg2;
            if (*(iVar7 + 8) == 0) {
                uVar4 = 0xffffffffffffffed;
                break;
            }
            uVar2 = *(iVar7 + 0xe);
            uVar8 = uVar2;
            if (uVar2 != 0) {
                piVar9 = iVar3 + *(iVar3 + uVar6 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_30) {
                        if (arg2 != 0) {
                            *arg2 = *(piVar9 + 0x14);
                        }
                        uVar4 = iVar3 + *(iVar3 + (uVar6 & 0xffffffff) * 0x10 + 0xc) + *(piVar9 + 0x16) + 0x90;
                        goto code_r0x08001450;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 8);
    }
    else {
        uVar4 = 0xffffffffffffffea;
    }
code_r0x08001450:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    uVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.cmd_db_read_slave_id;
    iVar3 = _segment.ehdr;
    pcStack_48 = sym.cmd_db_read_slave_id;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = unaff_x19;
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_60,uVar5,8);
        iVar7 = 0;
        while (iVar1 = iVar3 + iVar7 * 0x10, *(iVar1 + 8) != 0) {
            uVar2 = *(iVar1 + 0xe);
            uVar8 = uVar2;
            if (uVar2 != 0) {
                piVar9 = iVar3 + *(iVar3 + iVar7 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar9 == iStack_60) {
                        uVar4 = *(piVar9 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar9 = piVar9 + 3;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) break;
        }
    }
    uVar4 = 0;
code_r0x08001544:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        __stack_chk_fail(uVar4);
        if (_segment.ehdr == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar8 & *(_segment.ehdr + 0x8c);
    }
    return uVar4;
}


// ===== sym.cmd_db_read_slave_id @ 0x08001488 (size 236) =====

uint16_t sym.cmd_db_read_slave_id(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 4) == 0xc0330db)) {
        strncpy(&iStack_30,arg1,8);
        iVar3 = 0;
        while (iVar1 = iVar2 + iVar3 * 0x10, *(iVar1 + 8) != 0) {
            uVar4 = *(iVar1 + 0xe);
            uVar5 = uVar4;
            if (uVar4 != 0) {
                piVar6 = iVar2 + *(iVar2 + iVar3 * 0x10 + 10) + 0x90;
                do {
                    if (*piVar6 == iStack_30) {
                        uVar4 = *(piVar6 + 0x12) & 7;
                        goto code_r0x08001544;
                    }
                    piVar6 = piVar6 + 3;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            iVar3 = iVar3 + 1;
            if (iVar3 == 8) break;
        }
    }
    uVar4 = 0;
code_r0x08001544:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar4);
        if (_segment.ehdr == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(_segment.ehdr + 4) == 0xc0330db;
        }
        return uVar4 & *(_segment.ehdr + 0x8c);
    }
    return uVar4;
}


// ===== sym.cmd_db_is_standalone @ 0x08001574 (size 60) =====

uint8_t sym.cmd_db_is_standalone(int64_t arg1)

{
    bool bVar1;
    
    if (_segment.ehdr == 0) {
        bVar1 = false;
    }
    else {
        bVar1 = *(_segment.ehdr + 4) == 0xc0330db;
    }
    return bVar1 & *(_segment.ehdr + 0x8c);
}


// ===== sym.cmd_db_dev_probe @ 0x080015b0 (size 244) =====

ulong sym.cmd_db_dev_probe(int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_reserved_mem_lookup(*(arg1 + 0x300));
    if (iVar1 == 0) {
        pcVar2 = "failed to acquire memory region\n";
    }
    else {
        _segment.ehdr = memremap(*(iVar1 + 0x20),*(iVar1 + 0x28),4);
        if (_segment.ehdr == 0) {
            _segment.ehdr = 0;
            return 0xfffffff4;
        }
        if (*(_segment.ehdr + 4) == 0xc0330db) {
            debugfs_create_file("cmd-db",0x100,0,0,obj.cmd_db_debugfs_ops);
            if (_segment.ehdr != 0) {
                if (*(_segment.ehdr + 4) != 0xc0330db) {
                    return 0;
                }
                if ((*(_segment.ehdr + 0x8c) & 1) == 0) {
                    return 0;
                }
                _printk(0x800034e);
            }
            return 0;
        }
        pcVar2 = "Invalid Command DB Magic\n";
    }
    _dev_err(arg1 + 0x10,pcVar2);
    return 0xffffffea;
}


// ===== sym.open_cmd_db_debugfs @ 0x080016a4 (size 56) =====

void sym.open_cmd_db_debugfs(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.cmd_db_debugfs_dump.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.cmd_db_debugfs_dump @ 0x080016dc (size 432) =====

ulong sym.cmd_db_debugfs_dump(int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_puts(arg1,"Command DB DUMP\n");
    iVar4 = 0;
    do {
        pcVar2 = 0x80003ae;
    //switch table (6 cases) at 0x8000180
        switch(*(_segment.ehdr + iVar4 * 0x10 + 8)) {
        case 0:
            goto code_r0x08001864;
        default:
            pcVar2 = "Unknown";
            break;
        case 3:
            break;
        case 4:
            pcVar2 = 0x8000399;
            break;
        case 5:
            pcVar2 = 0x80003fb;
        }
        iVar1 = _segment.ehdr + iVar4 * 0x10;
        seq_printf(arg1,"Slave %s (v%u.%u)\n",pcVar2,*(iVar1 + 0x10) >> 8,*(iVar1 + 0x10) & 0xff);
        seq_puts(arg1,0x8000324);
        if (*(iVar1 + 0xe) != 0) {
            uVar5 = 0;
            iVar3 = _segment.ehdr + *(iVar1 + 10) + 0x90;
            do {
                seq_printf(arg1,"0x%05x: %*pEp",*(iVar3 + 0x10),8,iVar3);
                if (*(iVar3 + 0x14) != 0) {
                    seq_printf(arg1," [%*ph]",*(iVar3 + 0x14),_segment.ehdr + *(iVar1 + 0xc) + *(iVar3 + 0x16) + 0x90
                              );
                }
                seq_putc(arg1,10);
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + 0x18;
            } while (uVar5 < *(iVar1 + 0xe));
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
code_r0x08001864:
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800188c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018d0

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
    //switch table (4 cases) at 0x8000186
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018e4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001954 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.cmd_db_dev_probe.e7d0859c1ba25495e409b50c5d1230bf.cfi_jt,obj.__this_module);
    return;
}

