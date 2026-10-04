// decompiled from sysmon_subsystem_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 524) =====

//WARNING: Switch with 1 destination removed at 0x08002eb0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x2ad2618bbe77de64) {
            if (arg1 != -0x6835ffd8261373d0) {
                if (arg1 != -0x530e21862dd8f955) goto code_r0x08002e70;
                pcVar2 = sym.sysmon_stats_query_hmx_utlization.cfi_jt;
code_r0x080011e0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08002e70;
            }
            pcVar2 = sym.sysmon_stats_query_power_residency.cfi_jt;
        }
        else if (arg1 == -0x2ad2618bbe77de64) {
            pcVar2 = sym.sysmon_stats_query_sleep.cfi_jt;
        }
        else if (arg1 == -0x237f91ced434d630) {
            pcVar2 = sym.sysmon_stats_query_q6_load.cfi_jt;
        }
        else {
            if (arg1 != -0x16c56e56902b05a1) goto code_r0x08002e70;
            pcVar2 = sym.sysmon_stats_query_q6_votes.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == -0x8dc801903aca538) {
            if ((pcVar1 + -0x8001250 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08002e70;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08002e70;
            pcVar2 = sym.seq_read.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.seq_lseek.cfi_jt;
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.master_adsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt;
            goto code_r0x080011e0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002e70;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002e70:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ec4);
    (*pcVar1)();
}


// ===== sym.sysmon_stats_query_power_residency.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.sysmon_stats_query_power_residency.cfi_jt(int param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x8000766,"sysmon_stats_query_power_residency");
code_r0x08001740:
        uVar1 = 0xffffffea;
    }
    else {
        if (param_1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (param_1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (param_1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_power_residency");
                goto code_r0x08001740;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar1 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar1 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(param_2,_segment.ehdr,0x88);
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.sysmon_stats_query_sleep.cfi_jt @ 0x08001220 (size 8) =====

uint sym.sysmon_stats_query_sleep.cfi_jt(int param_1,ulong *param_2,ulong *param_3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == NULL) && (param_3 == NULL)) {
        _printk(0x8000766,"sysmon_stats_query_sleep");
        return 0xffffffea;
    }
    if (param_1 == 5) {
        puVar6 = _segment.ehdr;
        pcVar4 = _seq_lseek;
        if (*0x80000a1 == '\0') {
            sym.sysmon_smem_init_cdsp();
            puVar6 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        if (param_2 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0;
        }
        if (puVar6 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (puVar6 < 0xfffffffffffff001) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            if (puVar6[2] < puVar6[1]) {
                __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x80000e0);
                iVar5 = (*pcVar4)();
                puVar6 = _segment.ehdr;
                _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
            }
            uVar2 = puVar6[3];
            uVar1 = *puVar6;
            uVar3 = puVar6[1];
            param_2[2] = puVar6[2];
            param_2[3] = uVar2;
            *param_2 = uVar1;
            param_2[1] = uVar3;
            return 0;
        }
        _segment.ehdr = puVar6;
        _seq_lseek = pcVar4;
        return 0xffffff82;
    }
    if (param_1 == 3) {
        if (*0x80000a2 == '\0') {
            sym.sysmon_smem_init_slpi();
            if (param_2 != NULL) goto code_r0x08001ff4;
code_r0x080020f8:
            uVar7 = 0;
            puVar6 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        else {
            if (param_2 == NULL) goto code_r0x080020f8;
code_r0x08001ff4:
            pcVar4 = _seq_lseek;
            uVar7 = 0xffffff82;
            puVar6 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
                if (_segment.ehdr[2] < _segment.ehdr[1]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000100);
                    iVar5 = (*pcVar4)();
                    puVar6 = _segment.ehdr;
                    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
                }
                uVar2 = puVar6[3];
                uVar7 = 0;
                uVar1 = *puVar6;
                uVar3 = puVar6[1];
                param_2[2] = puVar6[2];
                param_2[3] = uVar2;
                *param_2 = uVar1;
                param_2[1] = uVar3;
                puVar6 = _segment.ehdr;
                pcVar4 = _seq_lseek;
            }
        }
        if (param_3 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return uVar7;
        }
        if (puVar6 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (0xfffffffffffff000 < puVar6) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        _segment.ehdr = puVar6;
        _seq_lseek = pcVar4;
        if (puVar6[1] <= puVar6[2]) goto code_r0x08002168;
        __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x8000120);
        iVar5 = (*pcVar4)();
    }
    else {
        if (param_1 != 2) {
            _printk(0x80005bd,"sysmon_stats_query_sleep");
            return 0xffffffea;
        }
        if (obj.g_sysmon_stats == 0x0) {
            sym.sysmon_smem_init_adsp();
            if (param_2 != NULL) goto code_r0x08001ed0;
code_r0x08002080:
            uVar7 = 0;
            puVar6 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        else {
            if (param_2 == NULL) goto code_r0x08002080;
code_r0x08001ed0:
            pcVar4 = _seq_lseek;
            uVar7 = 0xffffff82;
            puVar6 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
                if (_segment.ehdr[2] < _segment.ehdr[1]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,obj.g_sysmon_stats);
                    iVar5 = (*pcVar4)();
                    puVar6 = _segment.ehdr;
                    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
                }
                uVar2 = puVar6[3];
                uVar7 = 0;
                uVar1 = *puVar6;
                uVar3 = puVar6[1];
                param_2[2] = puVar6[2];
                param_2[3] = uVar2;
                *param_2 = uVar1;
                param_2[1] = uVar3;
                puVar6 = _segment.ehdr;
                pcVar4 = _seq_lseek;
            }
        }
        if (param_3 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return uVar7;
        }
        if (puVar6 == NULL) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (0xfffffffffffff000 < puVar6) {
            _segment.ehdr = puVar6;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        _segment.ehdr = puVar6;
        _seq_lseek = pcVar4;
        if (puVar6[1] <= puVar6[2]) goto code_r0x08002168;
        __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x80000c0);
        iVar5 = (*pcVar4)();
    }
    puVar6 = _segment.ehdr;
    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
code_r0x08002168:
    uVar2 = puVar6[3];
    uVar1 = *puVar6;
    uVar3 = puVar6[1];
    param_3[2] = puVar6[2];
    param_3[3] = uVar2;
    *param_3 = uVar1;
    param_3[1] = uVar3;
    return uVar7;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001228 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001230 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("sysmon_subsystem_stats",0);
    if (_segment.ehdr == 0) {
        uVar1 = 0x8000996;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = debugfs_create_file("master_adsp_stats",0x124,_segment.ehdr,0,obj.master_adsp_stats_fops);
        if (_segment.ehdr == 0) {
            _printk(0x8000435);
        }
        *0x8000138 = debugfs_create_file("master_cdsp_stats",0x124,*0x8000128,0,reloc.__this_module);
        if (*0x8000138 != 0) {
            return 0;
        }
        uVar1 = 0x8000435;
        *0x8000138 = 0;
    }
    _printk(uVar1);
    return 0;
}


// ===== sym.seq_read.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sysmon_stats_query_q6_load.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.sysmon_stats_query_q6_load.cfi_jt(int param_1,uint *param_2)

{
    uint uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        _printk(0x8000766,"sysmon_stats_query_q6_load");
code_r0x08001e74:
        uVar2 = 0xffffffea;
    }
    else {
        if (param_1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        else if (param_1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        else {
            if (param_1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_load");
                goto code_r0x08001e74;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        uVar2 = 0;
        uVar1 = 0;
        if (uVar3 - *(_segment.ehdr + 1) < 0x1d9700 || uVar3 <= *(_segment.ehdr + 1)) {
            uVar1 = *_segment.ehdr;
        }
        *param_2 = uVar1;
    }
    return uVar2;
}


// ===== sym.master_adsp_stats_open.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt @ 0x08001250 (size 8) =====

void sym.master_adsp_stats_open.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.master_adsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08001258 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.master_cdsp_stats_open.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt @ 0x08001260 (size 8) =====

void sym.master_cdsp_stats_open.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.master_cdsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.master_adsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.master_adsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt(ulong param_1)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.g_sysmon_stats == 0x0) {
        sym.sysmon_smem_init_adsp();
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nsysMon stats:\n\n");
        seq_printf(param_1,"Core clock: %d\n",*_segment.ehdr);
        seq_printf(param_1,"Ab vote: %llu\n",*(_segment.ehdr + 1));
        seq_printf(param_1,"Ib vote: %llu\n",*(_segment.ehdr + 3));
        iVar2 = _segment.ehdr[5];
        if (iVar2 == 0) {
            iVar2 = -1;
        }
        seq_printf(param_1,"Sleep latency: %u\n",iVar2);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nDSPPM stats:\n\n");
        seq_printf(param_1,"Version: %u\n",*_segment.ehdr);
        seq_printf(param_1,"Sleep latency: %u\n",_segment.ehdr[1]);
        seq_printf(param_1,"Timestamp: %llu\n",_segment.ehdr[2]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[3],_segment.ehdr[4]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[5],_segment.ehdr[6]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[7],_segment.ehdr[8]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[9],_segment.ehdr[10]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[0xb],_segment.ehdr[0xc]);
    }
    pcVar3 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar6 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000140);
            iVar4 = (*pcVar3)();
            iVar6 = (iVar4 + iVar6) - *(_segment.ehdr + 2);
        }
        seq_puts(param_1,"\nLPM stats:\n\n");
        seq_printf(param_1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(param_1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(param_1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar6);
    }
    pcVar3 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar6 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000160);
            iVar4 = (*pcVar3)();
            iVar6 = (iVar4 + iVar6) - *(_segment.ehdr + 2);
        }
        seq_puts(param_1,"\nLPI stats:\n\n");
        seq_printf(param_1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(param_1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(param_1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar6);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nPower Stats:\n\n");
        uVar7 = 0;
        puVar5 = _segment.ehdr;
        do {
            if (puVar5[uVar7] != 0) {
                seq_printf(param_1,"%u: Core Clock = %u, Active Time = %u\n",uVar7 & 0xffffffff,puVar5[uVar7],
                           puVar5[uVar7 + 0x10]);
                puVar5 = _segment.ehdr;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 0x10);
        seq_printf(param_1,"Power collapse time(sec) = %u\n",puVar5[0x20]);
        seq_printf(param_1,"LPI time(sec) = %u\n",_segment.ehdr[0x21]);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nQ6 load:\n\n");
        InstructionSynchronizationBarrier();
        uVar7 = cntvct_el0;
        uVar1 = 0;
        if (uVar7 - *(_segment.ehdr + 1) < 0x1d9700 || uVar7 <= *(_segment.ehdr + 1)) {
            uVar1 = *_segment.ehdr;
        }
        seq_printf(param_1,"Average Q6 load in KCPS = %u\n",uVar1);
    }
    return 0;
}


// ===== sym.master_cdsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.master_cdsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt(ulong param_1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a1 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nsysMon stats:\n\n");
        seq_printf(param_1,"Core clock: %d\n",*_segment.ehdr);
        seq_printf(param_1,"Ab vote: %llu\n",*(_segment.ehdr + 1));
        seq_printf(param_1,"Ib vote: %llu\n",*(_segment.ehdr + 3));
        iVar1 = _segment.ehdr[5];
        if (iVar1 == 0) {
            iVar1 = -1;
        }
        seq_printf(param_1,"Sleep latency: %u\n",iVar1);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nDSPPM stats:\n\n");
        seq_printf(param_1,"Version: %u\n",*_segment.ehdr);
        seq_printf(param_1,"Sleep latency: %u\n",_segment.ehdr[1]);
        seq_printf(param_1,"Timestamp: %llu\n",_segment.ehdr[2]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[3],_segment.ehdr[4]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[5],_segment.ehdr[6]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[7],_segment.ehdr[8]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[9],_segment.ehdr[10]);
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[0xb],_segment.ehdr[0xc]);
    }
    pcVar2 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar5 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000180);
            iVar3 = (*pcVar2)();
            iVar5 = (iVar3 + iVar5) - *(_segment.ehdr + 2);
        }
        seq_puts(param_1,"\nLPM stats:\n\n");
        seq_printf(param_1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(param_1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(param_1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar5);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nPower Stats:\n\n");
        uVar6 = 0;
        piVar4 = _segment.ehdr;
        do {
            if (piVar4[uVar6] != 0) {
                seq_printf(param_1,"%u: Core Clock = %u, Active Time = %u\n",uVar6 & 0xffffffff,piVar4[uVar6],
                           piVar4[uVar6 + 0x10]);
                piVar4 = _segment.ehdr;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 0x10);
        seq_printf(param_1,"Power collapse time(sec) = %u\n",piVar4[0x20]);
        seq_printf(param_1,"LPI time(sec) = %u\n",_segment.ehdr[0x21]);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(param_1,"\nQ6 load:\n\n");
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        seq_printf(param_1,"Average Q6 load in KCPS = %u\n",iVar1);
    }
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x80005ea);
        }
        seq_puts(param_1,"\nHMX stats:\n\n");
        seq_printf(param_1,"HMX utilization in percentage = %u\n",iVar1);
    }
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x800070d);
        }
        seq_puts(param_1,"\nHVX Stats:\n\n");
        seq_printf(param_1,"HVX utilization in percentage = %u\n",iVar1);
    }
    return 0;
}


// ===== sym.sysmon_stats_query_hmx_utlization.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.sysmon_stats_query_hmx_utlization.cfi_jt(int *param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    uVar3 = 0xffffff82;
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar2 = cntvct_el0;
        iVar1 = 0;
        if (uVar2 - *(_segment.ehdr + 1) < 0x1d9700 || uVar2 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x80005ea);
        }
        uVar3 = 0;
        *param_1 = iVar1;
    }
    return uVar3;
}


// ===== sym.sysmon_stats_query_hvx_utlization.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.sysmon_stats_query_hvx_utlization.cfi_jt(int *param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    uVar3 = 0xffffff82;
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar2 = cntvct_el0;
        iVar1 = 0;
        if (uVar2 - *(_segment.ehdr + 1) < 0x1d9700 || uVar2 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x800070d);
        }
        uVar3 = 0;
        *param_1 = iVar1;
    }
    return uVar3;
}


// ===== sym.sysmon_stats_query_q6_votes.cfi_jt @ 0x08001288 (size 8) =====

ulong sym.sysmon_stats_query_q6_votes.cfi_jt(int param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x8000766,"sysmon_stats_query_q6_votes");
code_r0x08001c58:
        uVar1 = 0xffffffea;
    }
    else {
        if (param_1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (param_1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (param_1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_votes");
                goto code_r0x08001c58;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar1 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar1 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(param_2,_segment.ehdr,0x88);
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.sysmon_stats_query_hmx_utlization @ 0x08001290 (size 176) =====

ulong sym.sysmon_stats_query_hmx_utlization(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    uVar3 = 0xffffff82;
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar2 = cntvct_el0;
        iVar1 = 0;
        if (uVar2 - *(_segment.ehdr + 1) < 0x1d9700 || uVar2 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x80005ea);
        }
        uVar3 = 0;
        *arg1 = iVar1;
    }
    return uVar3;
}


// ===== sym.sysmon_smem_init_cdsp @ 0x08001340 (size 600) =====

ulong sym.sysmon_smem_init_cdsp(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_30 = 0;
    *0x80000a1 = 1;
    *0x80000a3 = '\x01';
    *0x8000120 = qcom_smem_get(5,0x270,0);
    if ((*0x8000120 == 0) || (0xfffffffffffff000 < *0x8000120)) {
        _printk(0x8000ab2,"sysmon_smem_init_cdsp");
        *0x80000a1 = 0;
    }
    _segment.ehdr = qcom_smem_get(5,0x25f,0);
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x8000823,"sysmon_smem_init_cdsp");
        *0x80000a1 = 0;
    }
    uVar3 = qcom_smem_get(5,0x27a,&iStack_30);
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (iStack_30 == 0)) {
        _printk(0x8000924,"sysmon_smem_init_cdsp",uVar3);
        *0x80000a1 = 0;
    }
    uVar4 = sym.update_sysmon_smem_pointers(uVar3,5,iStack_30);
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x8000b73,"sysmon_smem_init_cdsp");
        *0x80000a1 = 0;
    }
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x80001e3,"sysmon_smem_init_cdsp");
        *0x80000a1 = 0;
    }
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x8000b35,"sysmon_smem_init_cdsp");
        *0x80000a1 = 0;
    }
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x80009fc,"sysmon_smem_init_cdsp");
        *0x80000a3 = '\0';
    }
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x80009fc,"sysmon_smem_init_cdsp");
        *0x80000a3 = '\0';
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.sysmon_stats_query_hvx_utlization;
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    uVar4 = 0xffffff82;
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar3 = cntvct_el0;
        iVar1 = 0;
        if (uVar3 - *(_segment.ehdr + 1) < 0x1d9700 || uVar3 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x800070d);
        }
        uVar4 = 0;
        *piVar5 = iVar1;
    }
    return uVar4;
}


// ===== sym.sysmon_stats_query_hvx_utlization @ 0x08001598 (size 176) =====

ulong sym.sysmon_stats_query_hvx_utlization(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    uVar3 = 0xffffff82;
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar2 = cntvct_el0;
        iVar1 = 0;
        if (uVar2 - *(_segment.ehdr + 1) < 0x1d9700 || uVar2 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x800070d);
        }
        uVar3 = 0;
        *arg1 = iVar1;
    }
    return uVar3;
}


// ===== sym.sysmon_stats_query_power_residency @ 0x08001648 (size 256) =====

ulong sym.sysmon_stats_query_power_residency(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000766,"sysmon_stats_query_power_residency");
code_r0x08001740:
        uVar1 = 0xffffffea;
    }
    else {
        if (arg1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (arg1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (arg1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_power_residency");
                goto code_r0x08001740;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar1 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar1 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(arg2,_segment.ehdr,0x88);
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.sysmon_smem_init_adsp @ 0x08001748 (size 564) =====

ulong sym.sysmon_smem_init_adsp(void)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    int64_t iStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uint64_t uStack_40;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    obj.g_sysmon_stats = 0x1;
    *0x8000118 = qcom_smem_get(2,0x270,0);
    if ((*0x8000118 == 0) || (0xfffffffffffff000 < *0x8000118)) {
        _printk(0x8000222,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    _segment.ehdr = qcom_smem_get(2,0x25e,0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x80007e7,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    _segment.ehdr = qcom_smem_get(2,0x265,0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x800061f,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    uVar3 = qcom_smem_get(2,0x27a,&iStack_30);
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (iStack_30 == 0)) {
        _printk(0x8000399,"sysmon_smem_init_adsp",uVar3);
        obj.g_sysmon_stats = 0x0;
    }
    uVar4 = sym.update_sysmon_smem_pointers(uVar3,2,iStack_30);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x800026d,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x800065f,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x80004f2,"sysmon_smem_init_adsp");
        obj.g_sysmon_stats = 0x0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.sysmon_smem_init_slpi;
    pcStack_48 = sym.sysmon_smem_init_slpi;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iStack_60 = 0;
    *0x80000a2 = '\x01';
    puStack_50 = &stack0xffffffffffffffe0;
    uStack_40 = uVar3;
    *0x80000e8 = qcom_smem_get(3,0x260,0);
    if ((*0x80000e8 == 0) || (0xfffffffffffff000 < *0x80000e8)) {
        _printk(0x800095a,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    _segment.ehdr = qcom_smem_get(3,0x265,0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x800069d,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    uVar3 = qcom_smem_get(3,0x27a,&iStack_60);
    if (((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) || (iStack_60 == 0)) {
        _printk(0x800085f,"sysmon_smem_init_slpi",uVar3);
    }
    uVar4 = sym.update_sysmon_smem_pointers(uVar3,3,iStack_60);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x8000783,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x80002aa,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar4 = _printk(0x8000562,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18_00 = sym.sysmon_stats_query_q6_votes;
    if (extraout_x1 == 0) {
        _printk(0x8000766,"sysmon_stats_query_q6_votes");
code_r0x08001c58:
        uVar4 = 0xffffffea;
    }
    else {
        if (iVar2 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (iVar2 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (iVar2 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_votes");
                goto code_r0x08001c58;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar4 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar4 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(extraout_x1,_segment.ehdr,0x88);
            uVar4 = 0;
        }
    }
    return uVar4;
}


// ===== sym.sysmon_smem_init_slpi @ 0x0800197c (size 484) =====

ulong sym.sysmon_smem_init_slpi(void)

{
    int64_t iVar1;
    int iVar2;
    uint64_t arg1;
    ulong uVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iStack_30 = 0;
    *0x80000a2 = '\x01';
    *0x80000e8 = qcom_smem_get(3,0x260,0);
    if ((*0x80000e8 == 0) || (0xfffffffffffff000 < *0x80000e8)) {
        _printk(0x800095a,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    _segment.ehdr = qcom_smem_get(3,0x265,0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x800069d,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    arg1 = qcom_smem_get(3,0x27a,&iStack_30);
    if (((arg1 == 0) || (0xfffffffffffff000 < arg1)) || (iStack_30 == 0)) {
        _printk(0x800085f,"sysmon_smem_init_slpi",arg1);
    }
    uVar3 = sym.update_sysmon_smem_pointers(arg1,3,iStack_30);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = _printk(0x8000783,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = _printk(0x80002aa,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = _printk(0x8000562,"sysmon_smem_init_slpi");
        *0x80000a2 = '\0';
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.sysmon_stats_query_q6_votes;
    if (extraout_x1 == 0) {
        _printk(0x8000766,"sysmon_stats_query_q6_votes");
code_r0x08001c58:
        uVar3 = 0xffffffea;
    }
    else {
        if (iVar2 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (iVar2 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (iVar2 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_votes");
                goto code_r0x08001c58;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar3 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar3 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(extraout_x1,_segment.ehdr,0x88);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.sysmon_stats_query_q6_votes @ 0x08001b60 (size 256) =====

ulong sym.sysmon_stats_query_q6_votes(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000766,"sysmon_stats_query_q6_votes");
code_r0x08001c58:
        uVar1 = 0xffffffea;
    }
    else {
        if (arg1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
        }
        else if (arg1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
        }
        else {
            if (arg1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_votes");
                goto code_r0x08001c58;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
        }
        uVar1 = 0xffffff82;
        if ((_segment.ehdr != 0) && (uVar1 = 0xffffff82, _segment.ehdr < 0xfffffffffffff001)) {
            memcpy(arg2,_segment.ehdr,0x88);
            uVar1 = 0;
        }
    }
    return uVar1;
}


// ===== sym.sysmon_read_q6_load @ 0x08001c60 (size 172) =====

uint sym.sysmon_read_q6_load(uint32_t arg1)

{
    uint64_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    InstructionSynchronizationBarrier();
    uVar1 = cntvct_el0;
    if (((arg1 == 5) || (arg1 == 3)) || (arg1 == 2)) {
        uVar2 = 0;
        if (uVar1 - *(_segment.ehdr + 1) < 0x1d9700 || uVar1 <= *(_segment.ehdr + 1)) {
            uVar2 = *_segment.ehdr;
        }
    }
    else {
        _printk(0x80005bd,"sysmon_read_q6_load");
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.sysmon_stats_query_q6_load @ 0x08001d0c (size 368) =====

ulong sym.sysmon_stats_query_q6_load(uint32_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000766,"sysmon_stats_query_q6_load");
code_r0x08001e74:
        uVar2 = 0xffffffea;
    }
    else {
        if (arg1 == 5) {
            if (*0x80000a1 == '\0') {
                sym.sysmon_smem_init_cdsp();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        else if (arg1 == 3) {
            if (*0x80000a2 == '\0') {
                sym.sysmon_smem_init_slpi();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        else {
            if (arg1 != 2) {
                _printk(0x80005bd,"sysmon_stats_query_q6_load");
                goto code_r0x08001e74;
            }
            if (obj.g_sysmon_stats == 0x0) {
                sym.sysmon_smem_init_adsp();
            }
            if (_segment.ehdr == NULL) {
                return 0xffffff82;
            }
            if (0xfffffffffffff000 < _segment.ehdr) {
                return 0xffffff82;
            }
            InstructionSynchronizationBarrier();
            uVar3 = cntvct_el0;
        }
        uVar2 = 0;
        uVar1 = 0;
        if (uVar3 - *(_segment.ehdr + 1) < 0x1d9700 || uVar3 <= *(_segment.ehdr + 1)) {
            uVar1 = *_segment.ehdr;
        }
        *arg2 = uVar1;
    }
    return uVar2;
}


// ===== sym.sysmon_stats_query_sleep @ 0x08001e7c (size 852) =====

uint sym.sysmon_stats_query_sleep(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    code *pcVar4;
    int64_t iVar5;
    int iVar6;
    ulong *puVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) && (arg3 == 0)) {
        _printk(0x8000766,"sysmon_stats_query_sleep");
        return 0xffffffea;
    }
    iVar6 = arg1;
    if (iVar6 == 5) {
        puVar7 = _segment.ehdr;
        pcVar4 = _seq_lseek;
        if (*0x80000a1 == '\0') {
            sym.sysmon_smem_init_cdsp();
            puVar7 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        if (arg2 == 0) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0;
        }
        if (puVar7 == NULL) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (puVar7 < 0xfffffffffffff001) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            if (puVar7[2] < puVar7[1]) {
                __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x80000e0);
                iVar5 = (*pcVar4)();
                puVar7 = _segment.ehdr;
                _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
            }
            uVar2 = puVar7[3];
            uVar1 = *puVar7;
            uVar3 = puVar7[1];
            *(arg2 + 0x10) = puVar7[2];
            *(arg2 + 0x18) = uVar2;
            *arg2 = uVar1;
            *(arg2 + 8) = uVar3;
            return 0;
        }
        _segment.ehdr = puVar7;
        _seq_lseek = pcVar4;
        return 0xffffff82;
    }
    if (iVar6 == 3) {
        if (*0x80000a2 == '\0') {
            sym.sysmon_smem_init_slpi();
            if (arg2 != 0) goto code_r0x08001ff4;
code_r0x080020f8:
            uVar8 = 0;
            puVar7 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        else {
            if (arg2 == 0) goto code_r0x080020f8;
code_r0x08001ff4:
            pcVar4 = _seq_lseek;
            uVar8 = 0xffffff82;
            puVar7 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
                if (_segment.ehdr[2] < _segment.ehdr[1]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000100);
                    iVar5 = (*pcVar4)();
                    puVar7 = _segment.ehdr;
                    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
                }
                uVar2 = puVar7[3];
                uVar8 = 0;
                uVar1 = *puVar7;
                uVar3 = puVar7[1];
                *(arg2 + 0x10) = puVar7[2];
                *(arg2 + 0x18) = uVar2;
                *arg2 = uVar1;
                *(arg2 + 8) = uVar3;
                puVar7 = _segment.ehdr;
                pcVar4 = _seq_lseek;
            }
        }
        if (arg3 == 0) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return uVar8;
        }
        if (puVar7 == NULL) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (0xfffffffffffff000 < puVar7) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        _segment.ehdr = puVar7;
        _seq_lseek = pcVar4;
        if (puVar7[1] <= puVar7[2]) goto code_r0x08002168;
        __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x8000120);
        iVar5 = (*pcVar4)();
    }
    else {
        if (iVar6 != 2) {
            _printk(0x80005bd,"sysmon_stats_query_sleep");
            return 0xffffffea;
        }
        if (obj.g_sysmon_stats == 0x0) {
            sym.sysmon_smem_init_adsp();
            if (arg2 != 0) goto code_r0x08001ed0;
code_r0x08002080:
            uVar8 = 0;
            puVar7 = _segment.ehdr;
            pcVar4 = _seq_lseek;
        }
        else {
            if (arg2 == 0) goto code_r0x08002080;
code_r0x08001ed0:
            pcVar4 = _seq_lseek;
            uVar8 = 0xffffff82;
            puVar7 = _segment.ehdr;
            if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
                if (_segment.ehdr[2] < _segment.ehdr[1]) {
                    __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,obj.g_sysmon_stats);
                    iVar5 = (*pcVar4)();
                    puVar7 = _segment.ehdr;
                    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
                }
                uVar2 = puVar7[3];
                uVar8 = 0;
                uVar1 = *puVar7;
                uVar3 = puVar7[1];
                *(arg2 + 0x10) = puVar7[2];
                *(arg2 + 0x18) = uVar2;
                *arg2 = uVar1;
                *(arg2 + 8) = uVar3;
                puVar7 = _segment.ehdr;
                pcVar4 = _seq_lseek;
            }
        }
        if (arg3 == 0) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return uVar8;
        }
        if (puVar7 == NULL) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        if (0xfffffffffffff000 < puVar7) {
            _segment.ehdr = puVar7;
            _seq_lseek = pcVar4;
            return 0xffffff82;
        }
        _segment.ehdr = puVar7;
        _seq_lseek = pcVar4;
        if (puVar7[1] <= puVar7[2]) goto code_r0x08002168;
        __cfi_slowpath_diag(0x19e9081ee75ef79b,pcVar4,0x80000c0);
        iVar5 = (*pcVar4)();
    }
    puVar7 = _segment.ehdr;
    _segment.ehdr[3] = (iVar5 - _segment.ehdr[1]) + _segment.ehdr[3];
code_r0x08002168:
    uVar2 = puVar7[3];
    uVar1 = *puVar7;
    uVar3 = puVar7[1];
    *(arg3 + 0x10) = puVar7[2];
    *(arg3 + 0x18) = uVar2;
    *arg3 = uVar1;
    *(arg3 + 8) = uVar3;
    return uVar8;
}


// ===== sym.update_sysmon_smem_pointers @ 0x080021d0 (size 924) =====

//WARNING: Type propagation algorithm not settling

void sym.update_sysmon_smem_pointers(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    uVar4 = arg3;
    *in_x18 = unaff_x30;
    if (uVar4 != 0) {
        uVar2 = *arg1;
        uVar7 = uVar2 >> 0x10 & 0xfff;
        if (uVar7 <= uVar4) {
            iVar3 = arg2;
            do {
    //switch table (5 cases) at 0x80001a0
                switch(uVar2 >> 0x1c) {
                case 1:
                    puVar1 = arg1 + 4;
                    uVar5 = 1;
                    if ((puVar1 == NULL) || (0xfffffffffffff000 < puVar1)) {
code_r0x08002554:
                        _printk(0x8000bb0,"update_sysmon_smem_pointers",uVar5);
                        return;
                    }
                    if ((iVar3 != 5) && (iVar3 != 3)) {
                        if (iVar3 == 2) {
joined_r0x080023c8:
                            puVar1 = arg1 + 4;
                        }
                        else {
                            uVar5 = 0x80001aa;
                            uVar6 = 1;
code_r0x080024e0:
                            _printk(uVar5,"update_sysmon_smem_pointers",uVar6);
                            puVar1 = _segment.ehdr;
                        }
                    }
                    break;
                case 2:
                    uVar5 = 2;
                    if ((arg1 + 4 == NULL) || (0xfffffffffffff000 < arg1 + 4)) goto code_r0x08002554;
                    if (iVar3 != 5) {
                        if (iVar3 == 3) goto joined_r0x080023c8;
                        if (iVar3 != 2) {
                            uVar5 = 0x80001aa;
                            uVar6 = 2;
                            goto code_r0x080024e0;
                        }
                    }
                    goto joined_r0x080023d8;
                case 3:
                    puVar1 = arg1 + 4;
                    uVar5 = 3;
                    if ((puVar1 == NULL) || (0xfffffffffffff000 < puVar1)) goto code_r0x08002554;
                    if (iVar3 != 5) {
                        if (iVar3 == 3) break;
                        if (iVar3 != 2) {
                            uVar5 = 0x80003d6;
                            uVar6 = 3;
                            goto code_r0x080024e0;
                        }
                    }
joined_r0x080023d8:
                    puVar1 = arg1 + 4;
                    break;
                case 4:
                    puVar1 = arg1 + 4;
                    uVar5 = 4;
                    if ((puVar1 == NULL) || (0xfffffffffffff000 < puVar1)) goto code_r0x08002554;
                    if (iVar3 != 5) {
                        uVar5 = 4;
code_r0x0800246c:
                        _printk(0x8000378,"update_sysmon_smem_pointers",uVar5);
                        puVar1 = _segment.ehdr;
                    }
                    break;
                case 5:
                    puVar1 = arg1 + 4;
                    uVar5 = 5;
                    if ((puVar1 == NULL) || (0xfffffffffffff000 < puVar1)) goto code_r0x08002554;
                    if (iVar3 != 5) {
                        uVar5 = 5;
                        goto code_r0x0800246c;
                    }
                    break;
                default:
                    _printk(0x80003f4,"update_sysmon_smem_pointers");
                    puVar1 = _segment.ehdr;
                }
                _segment.ehdr = puVar1;
                if (arg1 + uVar7 == 0) {
                    return;
                }
                arg1 = arg1 + uVar7;
                if (0xfffffffffffff000 < arg1) {
                    return;
                }
                if (uVar4 <= uVar7) {
                    return;
                }
                uVar4 = uVar4 - uVar7;
                if (uVar4 == 0) {
                    return;
                }
                uVar2 = *arg1;
                uVar7 = uVar2 >> 0x10 & 0xfff;
                if (uVar4 < uVar7) {
                    return;
                }
            } while( true );
        }
    }
    return;
}


// ===== sym.master_adsp_stats_open @ 0x0800256c (size 56) =====

void sym.master_adsp_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.master_adsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.master_adsp_stats_show @ 0x080025a4 (size 1048) =====

ulong sym.master_adsp_stats_show(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    code *pcVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.g_sysmon_stats == 0x0) {
        sym.sysmon_smem_init_adsp();
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nsysMon stats:\n\n");
        seq_printf(arg1,"Core clock: %d\n",*_segment.ehdr);
        seq_printf(arg1,"Ab vote: %llu\n",*(_segment.ehdr + 1));
        seq_printf(arg1,"Ib vote: %llu\n",*(_segment.ehdr + 3));
        iVar2 = _segment.ehdr[5];
        if (iVar2 == 0) {
            iVar2 = -1;
        }
        seq_printf(arg1,"Sleep latency: %u\n",iVar2);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nDSPPM stats:\n\n");
        seq_printf(arg1,"Version: %u\n",*_segment.ehdr);
        seq_printf(arg1,"Sleep latency: %u\n",_segment.ehdr[1]);
        seq_printf(arg1,"Timestamp: %llu\n",_segment.ehdr[2]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[3],_segment.ehdr[4]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[5],_segment.ehdr[6]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[7],_segment.ehdr[8]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[9],_segment.ehdr[10]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[0xb],_segment.ehdr[0xc]);
    }
    pcVar3 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar6 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000140);
            iVar4 = (*pcVar3)();
            iVar6 = (iVar4 + iVar6) - *(_segment.ehdr + 2);
        }
        seq_puts(arg1,"\nLPM stats:\n\n");
        seq_printf(arg1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(arg1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(arg1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar6);
    }
    pcVar3 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar6 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000160);
            iVar4 = (*pcVar3)();
            iVar6 = (iVar4 + iVar6) - *(_segment.ehdr + 2);
        }
        seq_puts(arg1,"\nLPI stats:\n\n");
        seq_printf(arg1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(arg1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(arg1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar6);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nPower Stats:\n\n");
        uVar7 = 0;
        puVar5 = _segment.ehdr;
        do {
            if (puVar5[uVar7] != 0) {
                seq_printf(arg1,"%u: Core Clock = %u, Active Time = %u\n",uVar7 & 0xffffffff,puVar5[uVar7],
                           puVar5[uVar7 + 0x10]);
                puVar5 = _segment.ehdr;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 0x10);
        seq_printf(arg1,"Power collapse time(sec) = %u\n",puVar5[0x20]);
        seq_printf(arg1,"LPI time(sec) = %u\n",_segment.ehdr[0x21]);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nQ6 load:\n\n");
        InstructionSynchronizationBarrier();
        uVar7 = cntvct_el0;
        uVar1 = 0;
        if (uVar7 - *(_segment.ehdr + 1) < 0x1d9700 || uVar7 <= *(_segment.ehdr + 1)) {
            uVar1 = *_segment.ehdr;
        }
        seq_printf(arg1,"Average Q6 load in KCPS = %u\n",uVar1);
    }
    return 0;
}


// ===== sym.master_cdsp_stats_open @ 0x080029bc (size 56) =====

void sym.master_cdsp_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.master_cdsp_stats_show.bac7aa248ba99dee2f5eabcc4244dbfb.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.master_cdsp_stats_show @ 0x080029f4 (size 1144) =====

ulong sym.master_cdsp_stats_show(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    int *piVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80000a1 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nsysMon stats:\n\n");
        seq_printf(arg1,"Core clock: %d\n",*_segment.ehdr);
        seq_printf(arg1,"Ab vote: %llu\n",*(_segment.ehdr + 1));
        seq_printf(arg1,"Ib vote: %llu\n",*(_segment.ehdr + 3));
        iVar1 = _segment.ehdr[5];
        if (iVar1 == 0) {
            iVar1 = -1;
        }
        seq_printf(arg1,"Sleep latency: %u\n",iVar1);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nDSPPM stats:\n\n");
        seq_printf(arg1,"Version: %u\n",*_segment.ehdr);
        seq_printf(arg1,"Sleep latency: %u\n",_segment.ehdr[1]);
        seq_printf(arg1,"Timestamp: %llu\n",_segment.ehdr[2]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[3],_segment.ehdr[4]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[5],_segment.ehdr[6]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[7],_segment.ehdr[8]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[9],_segment.ehdr[10]);
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",_segment.ehdr[0xb],_segment.ehdr[0xc]);
    }
    pcVar2 = _seq_lseek;
    if (_segment.ehdr != NULL) {
        iVar5 = *(_segment.ehdr + 6);
        if (*(_segment.ehdr + 4) < *(_segment.ehdr + 2)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_seq_lseek,0x8000180);
            iVar3 = (*pcVar2)();
            iVar5 = (iVar3 + iVar5) - *(_segment.ehdr + 2);
        }
        seq_puts(arg1,"\nLPM stats:\n\n");
        seq_printf(arg1,"Count = %u\n",_segment.ehdr[1]);
        seq_printf(arg1,"Last Entered At = %llu\n",*(_segment.ehdr + 2));
        seq_printf(arg1,"Last Exited At = %llu\n",*(_segment.ehdr + 4));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar5);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nPower Stats:\n\n");
        uVar6 = 0;
        piVar4 = _segment.ehdr;
        do {
            if (piVar4[uVar6] != 0) {
                seq_printf(arg1,"%u: Core Clock = %u, Active Time = %u\n",uVar6 & 0xffffffff,piVar4[uVar6],
                           piVar4[uVar6 + 0x10]);
                piVar4 = _segment.ehdr;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 0x10);
        seq_printf(arg1,"Power collapse time(sec) = %u\n",piVar4[0x20]);
        seq_printf(arg1,"LPI time(sec) = %u\n",_segment.ehdr[0x21]);
    }
    if (_segment.ehdr != NULL) {
        seq_puts(arg1,"\nQ6 load:\n\n");
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        seq_printf(arg1,"Average Q6 load in KCPS = %u\n",iVar1);
    }
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x80005ea);
        }
        seq_puts(arg1,"\nHMX stats:\n\n");
        seq_printf(arg1,"HMX utilization in percentage = %u\n",iVar1);
    }
    if (*0x80000a3 == '\0') {
        sym.sysmon_smem_init_cdsp();
    }
    if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
        InstructionSynchronizationBarrier();
        uVar6 = cntvct_el0;
        iVar1 = 0;
        if (uVar6 - *(_segment.ehdr + 1) < 0x1d9700 || uVar6 <= *(_segment.ehdr + 1)) {
            iVar1 = *_segment.ehdr;
        }
        if (iVar1 == 0xffff) {
            _printk(0x800070d);
        }
        seq_puts(arg1,"\nHVX Stats:\n\n");
        seq_printf(arg1,"HVX utilization in percentage = %u\n",iVar1);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002e6c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002eb0

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
    //switch table (4 cases) at 0x80001a5
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002ec4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002f8c (size 208) =====

ulong sym.init_module(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("sysmon_subsystem_stats",0);
    if (_segment.ehdr == 0) {
        uVar1 = 0x8000996;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = debugfs_create_file("master_adsp_stats",0x124,_segment.ehdr,0,obj.master_adsp_stats_fops);
        if (_segment.ehdr == 0) {
            _printk(0x8000435);
        }
        *0x8000138 = debugfs_create_file("master_cdsp_stats",0x124,*0x8000128,0,reloc.__this_module);
        if (*0x8000138 != 0) {
            return 0;
        }
        uVar1 = 0x8000435;
        *0x8000138 = 0;
    }
    _printk(uVar1);
    return 0;
}


// ===== sym.cleanup_module @ 0x0800305c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}

