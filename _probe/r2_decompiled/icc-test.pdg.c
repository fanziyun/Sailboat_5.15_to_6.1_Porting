// decompiled from icc-test by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x0800128c

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0x2b3a43e29242445) {
        pcVar3 = sym.init_module.cfi_jt;
    }
    else {
        if (uVar2 == 0x1d7ed092cb04d3f1) {
            if ((pcVar1 + -0x80010b0 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800124c;
        }
        if (uVar2 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800124c;
        pcVar3 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar3) {
        return;
    }
code_r0x0800124c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012a0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        icc_put();
    }
    debugfs_remove(_segment.ehdr);
    platform_device_del(_segment.ehdr);
    platform_device_put(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010a8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar1 [16];
    
    *in_x18 = unaff_x30;
    _segment.ehdr = platform_device_alloc("",0xfffffffe);
    platform_device_add();
    auVar1 = debugfs_create_dir("interconnect-test",0);
    _segment.ehdr = auVar1._0_8_;
    if (_segment.ehdr == 0) {
        _printk(0x8000072,auVar1._8_8_,0);
    }
    debugfs_create_u32("",0x180,_segment.ehdr,"");
    debugfs_create_u32("dst_port",0x180,_segment.ehdr,"");
    debugfs_create_file(0x800004c,0x80,_segment.ehdr,0,obj.get_fops);
    debugfs_create_u32("",0x180,_segment.ehdr,"");
    debugfs_create_u32("peak_bw",0x180,_segment.ehdr,"");
    debugfs_create_file("",0x80,_segment.ehdr,0,reloc.__this_module);
    return 0;
}


// ===== sym.commit_write_op.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010b0 (size 8) =====

uchar * sym.commit_write_op.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (ulong param_1,ulong param_2,uchar *param_3,int64_t *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoul_from_user(param_2,param_3,10,&uStack_30);
    if (iVar3 == 0) {
        puVar4 = CONCAT44(*0x8000004,_segment.ehdr);
        if (0xfffffffffffff000 < puVar4) goto code_r0x08001214;
        iVar3 = icc_set_bw(puVar4,_segment.ehdr,_segment.ehdr);
        if (iVar3 == 0) {
            *param_4 = param_3 + *param_4;
            puVar4 = param_3;
            goto code_r0x08001214;
        }
    }
    puVar4 = iVar3;
code_r0x08001214:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80012a0);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.get_write_op.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010b8 (size 8) =====

uchar * sym.get_write_op.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (ulong param_1,ulong param_2,uchar *param_3,int64_t *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong extraout_x1;
    uchar *puVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uchar *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t *piStack_40;
    uchar *puStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar5 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar4 = 0xa;
    iStack_30 = 0;
    iVar3 = kstrtoul_from_user(param_2,param_3);
    if (iVar3 == 0) {
        puVar4 = _segment.ehdr & 0xffffffff;
        puStack_38 = icc_get(_segment.ehdr + 0x10,_segment.ehdr & 0xffffffff);
        _segment.ehdr = puStack_38;
        if (puStack_38 < 0xfffffffffffff001) {
            *param_4 = param_3 + *param_4;
            puStack_38 = param_3;
        }
    }
    else {
        puStack_38 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return puStack_38;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.commit_write_op;
    pcStack_48 = sym.commit_write_op;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    piStack_40 = param_4;
    iVar3 = kstrtoul_from_user(extraout_x1,puVar4,10,&uStack_60);
    if (iVar3 == 0) {
        puVar6 = _segment.ehdr;
        if (0xfffffffffffff000 < _segment.ehdr) goto code_r0x08001214;
        iVar3 = icc_set_bw(_segment.ehdr,_segment.ehdr & 0xffffffff,_segment.ehdr & 0xffffffff);
        if (iVar3 == 0) {
            *piVar5 = puVar4 + *piVar5;
            puVar6 = puVar4;
            goto code_r0x08001214;
        }
    }
    puVar6 = iVar3;
code_r0x08001214:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        auVar7 = __stack_chk_fail();
        puVar4 = auVar7._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80012a0);
        (*pcVar2)();
    }
    return puVar6;
}


// ===== sym.get_write_op @ 0x080010c0 (size 200) =====

uchar * sym.get_write_op(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong extraout_x1;
    uchar *puVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uchar *puVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    uchar *puStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    piVar5 = &iStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    puVar4 = 0xa;
    iStack_30 = 0;
    iVar3 = kstrtoul_from_user(arg1,arg2);
    if (iVar3 == 0) {
        puVar4 = _segment.ehdr & 0xffffffff;
        puStack_38 = icc_get(_segment.ehdr + 0x10,_segment.ehdr & 0xffffffff);
        _segment.ehdr = puStack_38;
        if (puStack_38 < 0xfffffffffffff001) {
            *arg3 = *arg3 + arg2;
            puStack_38 = arg2;
        }
    }
    else {
        puStack_38 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return puStack_38;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.commit_write_op;
    pcStack_48 = sym.commit_write_op;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg3;
    iVar3 = kstrtoul_from_user(extraout_x1,puVar4,10,&uStack_60);
    if (iVar3 == 0) {
        puVar6 = _segment.ehdr;
        if (0xfffffffffffff000 < _segment.ehdr) goto code_r0x08001214;
        iVar3 = icc_set_bw(_segment.ehdr,_segment.ehdr & 0xffffffff,_segment.ehdr & 0xffffffff);
        if (iVar3 == 0) {
            *piVar5 = puVar4 + *piVar5;
            puVar6 = puVar4;
            goto code_r0x08001214;
        }
    }
    puVar6 = iVar3;
code_r0x08001214:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_58) {
        auVar7 = __stack_chk_fail();
        puVar4 = auVar7._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar7._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80012a0);
        (*pcVar2)();
    }
    return puVar6;
}


// ===== sym.commit_write_op @ 0x08001188 (size 192) =====

uchar * sym.commit_write_op(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uchar *puVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoul_from_user(arg1,arg2,10,&uStack_30);
    if (iVar3 == 0) {
        puVar4 = CONCAT44(*0x8000004,_segment.ehdr);
        if (0xfffffffffffff000 < puVar4) goto code_r0x08001214;
        iVar3 = icc_set_bw(puVar4,_segment.ehdr,_segment.ehdr);
        if (iVar3 == 0) {
            *arg3 = *arg3 + arg2;
            puVar4 = arg2;
            goto code_r0x08001214;
        }
    }
    puVar4 = iVar3;
code_r0x08001214:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar4 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar5._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80012a0);
        (*pcVar2)();
    }
    return puVar4;
}


// ===== sym.__cfi_check_fail @ 0x08001248 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800128c

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
    //switch table (4 cases) at 0x8000040
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012a0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080012a4 (size 296) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar1 [16];
    
    *in_x18 = unaff_x30;
    _segment.ehdr = platform_device_alloc("",0xfffffffe);
    platform_device_add();
    auVar1 = debugfs_create_dir("interconnect-test",0);
    _segment.ehdr = auVar1._0_8_;
    if (_segment.ehdr == 0) {
        _printk(0x8000072,auVar1._8_8_,0);
    }
    debugfs_create_u32("",0x180,_segment.ehdr,"");
    debugfs_create_u32("dst_port",0x180,_segment.ehdr,"");
    debugfs_create_file(0x800004c,0x80,_segment.ehdr,0,obj.get_fops);
    debugfs_create_u32("",0x180,_segment.ehdr,"");
    debugfs_create_u32("peak_bw",0x180,_segment.ehdr,"");
    debugfs_create_file("",0x80,_segment.ehdr,0,reloc.__this_module);
    return 0;
}


// ===== sym.cleanup_module @ 0x080013cc (size 92) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr < 0xfffffffffffff001) {
        icc_put();
    }
    debugfs_remove(_segment.ehdr);
    platform_device_del(_segment.ehdr);
    platform_device_put(_segment.ehdr);
    return;
}

