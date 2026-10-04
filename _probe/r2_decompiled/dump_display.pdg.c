// decompiled from dump_display by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 136) =====

//WARNING: Switch with 1 destination removed at 0x08001424

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar2 = arg1;
    if (uVar2 == 0xcaa8ce70472f848f) {
        uVar3 = 0x8001098;
    }
    else if (uVar2 == 0x2b3a43e29242445) {
        uVar3 = 0x8001090;
    }
    else {
        if (uVar2 != 0x7d57972cd3914fb1) goto code_r0x080013e4;
        uVar3 = 0x80010a0;
    }
    if (arg2 == uVar3) {
        return;
    }
code_r0x080013e4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001438);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08001090 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000171,"crash_record_init");
    __platform_driver_register(reloc.dump_display_probe.2caae72a261e2e72e65ac695212535db.cfi_jt,obj.__this_module);
    return 0;
}


// ===== sym.dump_display_probe.2caae72a261e2e72e65ac695212535db.cfi_jt @ 0x08001098 (size 8) =====

ulong sym.dump_display_probe.2caae72a261e2e72e65ac695212535db.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = platform_get_resource(param_1,0x200,0);
    if (piVar2 == NULL) {
        _printk(0x80001be);
        uVar3 = 0xffffffea;
    }
    else {
        iVar1 = (piVar2[1] - *piVar2) + 1;
        uVar3 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar3 = 0x68000000000f13;
        }
        _segment.ehdr = __ioremap(*piVar2,iVar1,uVar3);
        if (_segment.ehdr == NULL) {
            _printk(0x800018a);
            uVar3 = 0xfffffffb;
        }
        else {
            __memset_io(_segment.ehdr,0,iVar1);
            *_segment.ehdr = 0x12345678;
            __memcpy_toio(_segment.ehdr + 1,"UNKNOWN",8);
            atomic_notifier_chain_register
                      (panic_notifier_list,reloc.set_backtrace_msg.2caae72a261e2e72e65ac695212535db.cfi_jt);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.set_backtrace_msg.2caae72a261e2e72e65ac695212535db.cfi_jt @ 0x080010a0 (size 8) =====

uchar * sym.set_backtrace_msg.2caae72a261e2e72e65ac695212535db.cfi_jt(void)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_944 [2044];
    int64_t aiStack_148 [31];
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    aiStack_148[0x1e] = *(iVar4 + 0x5e0);
    aiStack_148[0x1c] = 0;
    aiStack_148[0x1d] = 0;
    aiStack_148[0x1a] = 0;
    aiStack_148[0x1b] = 0;
    aiStack_148[0x18] = 0;
    aiStack_148[0x19] = 0;
    aiStack_148[0x16] = 0;
    aiStack_148[0x17] = 0;
    aiStack_148[0x14] = 0;
    aiStack_148[0x15] = 0;
    aiStack_148[0x12] = 0;
    aiStack_148[0x13] = 0;
    aiStack_148[0x10] = 0;
    aiStack_148[0x11] = 0;
    aiStack_148[0xe] = 0;
    aiStack_148[0xf] = 0;
    aiStack_148[0xc] = 0;
    aiStack_148[0xd] = 0;
    aiStack_148[10] = 0;
    aiStack_148[0xb] = 0;
    aiStack_148[8] = 0;
    aiStack_148[9] = 0;
    aiStack_148[6] = 0;
    aiStack_148[7] = 0;
    aiStack_148[4] = 0;
    aiStack_148[5] = 0;
    aiStack_148[2] = 0;
    aiStack_148[3] = 0;
    aiStack_148[0] = 0;
    aiStack_148[1] = 0;
    memset(auStack_944,0,0x7fc);
    uVar6 = stack_trace_save(aiStack_148,0x1e,2);
    if (uVar6 != 0) {
        uVar10 = 0;
        puVar8 = auStack_944;
        uVar9 = 0x7fc;
        do {
            if (uVar10 == 0x1e) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x80013dc);
                (*pcVar5)();
            }
            uVar7 = snprintf(puVar8,uVar9,"\n\r%pS",aiStack_148[uVar10]);
            uVar7 = uVar7 & 0xffffffff;
            uVar10 = uVar10 + 1;
            uVar2 = uVar7;
            if (uVar7 > uVar9 || uVar9 - uVar7 == 0) {
                uVar2 = uVar9;
            }
            uVar3 = 0;
            if (uVar7 <= uVar9) {
                uVar3 = uVar9 - uVar7;
            }
            puVar8 = puVar8 + uVar2;
        } while ((uVar10 < uVar6) && (bVar1 = uVar7 < uVar9, uVar9 = uVar3, bVar1));
        iVar4 = sp_el0;
        snprintf(puVar8,uVar3,"\n\rcomm:%s",iVar4 + 0x7a8);
        __memcpy_toio(_segment.ehdr + 4,auStack_944,0x7fc);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != aiStack_148[0x1e]) {
        auVar11 = __stack_chk_fail();
        puVar8 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar11._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8001438);
        (*pcVar5)();
    }
    return NULL;
}


// ===== sym.trace_snprint @ 0x080010a8 (size 224) =====

int sym.trace_snprint(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        iVar6 = 0;
    }
    else {
        iVar6 = 0;
        if ((arg2 != 0) && (arg4 != 0)) {
            uVar8 = 0;
            iVar6 = 0;
            uVar7 = arg2;
            do {
                uVar4 = snprintf(arg1,uVar7,"\n\r%pS",*(arg3 + uVar8 * 8));
                uVar5 = uVar4;
                uVar8 = uVar8 + 1;
                iVar6 = uVar4 + iVar6;
                uVar2 = uVar5;
                if (uVar5 > uVar7 || uVar7 - uVar5 == 0) {
                    uVar2 = uVar7;
                }
                arg2 = 0;
                if (uVar5 <= uVar7) {
                    arg2 = uVar7 - uVar5;
                }
                arg1 = arg1 + uVar2;
            } while ((uVar8 < (arg4 & 0xffffffffU)) && (bVar1 = uVar5 < uVar7, uVar7 = arg2, bVar1));
        }
        iVar3 = sp_el0;
        snprintf(arg1,arg2,"\n\rcomm:%s",iVar3 + 0x7a8);
    }
    return iVar6;
}


// ===== sym.dump_display_probe @ 0x08001188 (size 236) =====

ulong sym.dump_display_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = platform_get_resource(arg1,0x200,0);
    if (piVar2 == NULL) {
        _printk(0x80001be);
        uVar3 = 0xffffffea;
    }
    else {
        iVar1 = (piVar2[1] - *piVar2) + 1;
        uVar3 = 0x68000000000713;
        if (arm64_use_ng_mappings != 0x0) {
            uVar3 = 0x68000000000f13;
        }
        _segment.ehdr = __ioremap(*piVar2,iVar1,uVar3);
        if (_segment.ehdr == NULL) {
            _printk(0x800018a);
            uVar3 = 0xfffffffb;
        }
        else {
            __memset_io(_segment.ehdr,0,iVar1);
            *_segment.ehdr = 0x12345678;
            __memcpy_toio(_segment.ehdr + 1,"UNKNOWN",8);
            atomic_notifier_chain_register
                      (panic_notifier_list,reloc.set_backtrace_msg.2caae72a261e2e72e65ac695212535db.cfi_jt);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.set_backtrace_msg @ 0x08001274 (size 364) =====

uchar * sym.set_backtrace_msg(void)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_944 [2044];
    int64_t aiStack_148 [31];
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    aiStack_148[0x1e] = *(iVar4 + 0x5e0);
    aiStack_148[0x1c] = 0;
    aiStack_148[0x1d] = 0;
    aiStack_148[0x1a] = 0;
    aiStack_148[0x1b] = 0;
    aiStack_148[0x18] = 0;
    aiStack_148[0x19] = 0;
    aiStack_148[0x16] = 0;
    aiStack_148[0x17] = 0;
    aiStack_148[0x14] = 0;
    aiStack_148[0x15] = 0;
    aiStack_148[0x12] = 0;
    aiStack_148[0x13] = 0;
    aiStack_148[0x10] = 0;
    aiStack_148[0x11] = 0;
    aiStack_148[0xe] = 0;
    aiStack_148[0xf] = 0;
    aiStack_148[0xc] = 0;
    aiStack_148[0xd] = 0;
    aiStack_148[10] = 0;
    aiStack_148[0xb] = 0;
    aiStack_148[8] = 0;
    aiStack_148[9] = 0;
    aiStack_148[6] = 0;
    aiStack_148[7] = 0;
    aiStack_148[4] = 0;
    aiStack_148[5] = 0;
    aiStack_148[2] = 0;
    aiStack_148[3] = 0;
    aiStack_148[0] = 0;
    aiStack_148[1] = 0;
    memset(auStack_944,0,0x7fc);
    uVar6 = stack_trace_save(aiStack_148,0x1e,2);
    if (uVar6 != 0) {
        uVar10 = 0;
        puVar8 = auStack_944;
        uVar9 = 0x7fc;
        do {
            if (uVar10 == 0x1e) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(1,0x80013dc);
                (*pcVar5)();
            }
            uVar7 = snprintf(puVar8,uVar9,"\n\r%pS",aiStack_148[uVar10]);
            uVar7 = uVar7 & 0xffffffff;
            uVar10 = uVar10 + 1;
            uVar2 = uVar7;
            if (uVar7 > uVar9 || uVar9 - uVar7 == 0) {
                uVar2 = uVar9;
            }
            uVar3 = 0;
            if (uVar7 <= uVar9) {
                uVar3 = uVar9 - uVar7;
            }
            puVar8 = puVar8 + uVar2;
        } while ((uVar10 < uVar6) && (bVar1 = uVar7 < uVar9, uVar9 = uVar3, bVar1));
        iVar4 = sp_el0;
        snprintf(puVar8,uVar3,"\n\rcomm:%s",iVar4 + 0x7a8);
        __memcpy_toio(_segment.ehdr + 4,auStack_944,0x7fc);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != aiStack_148[0x1e]) {
        auVar11 = __stack_chk_fail();
        puVar8 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar11._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8001438);
        (*pcVar5)();
    }
    return NULL;
}


// ===== sym.__cfi_check_fail @ 0x080013e0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001424

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
    //switch table (4 cases) at 0x8000148
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001438);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001444 (size 76) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000171,"crash_record_init");
    __platform_driver_register(reloc.dump_display_probe.2caae72a261e2e72e65ac695212535db.cfi_jt,obj.__this_module);
    return 0;
}

