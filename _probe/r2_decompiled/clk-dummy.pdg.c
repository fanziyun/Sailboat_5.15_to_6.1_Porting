// decompiled from clk-dummy by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08001460

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x18e6884b1569d5ca) {
        if (arg1 < -0x20deda1622da4019) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt;
                goto code_r0x08001180;
            }
            if (arg1 != -0x22b4abf473726dc3) goto code_r0x08001420;
            pcVar2 = sym.of_clk_src_simple_get.cfi_jt;
        }
        else if (arg1 == -0x20deda1622da4019) {
            pcVar2 = sym.clk_debug_measure_add.cfi_jt;
        }
        else {
            if (arg1 != -0x1b0a70f57deed9d1) goto code_r0x08001420;
            pcVar2 = sym.dummy_clk_set_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt;
        }
    }
    else if (arg1 < 0xd862cc386955394) {
        if (arg1 == -0x18e6884b1569d5ca) {
            pcVar2 = sym.dummy_reset_deassert.0636774e5de5e07bc0ae4e96393a5903.cfi_jt;
code_r0x08001180:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001420;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001420;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0xd862cc386955394) {
        pcVar2 = sym.dummy_clk_round_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt;
    }
    else if (arg1 == 0x59dd42e31ac63e92) {
        pcVar2 = sym.dummy_clk_recalc_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001420;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001420:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001474);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011c0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011c8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dummy_clk_recalc_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.dummy_clk_recalc_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x70);
}


// ===== sym.dummy_clk_set_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.dummy_clk_set_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(int64_t param_1,ulong param_2)

{
    *(param_1 + 0x70) = param_2;
    return 0;
}


// ===== sym.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x080011e0 (size 8) =====

uint64_t sym.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    char *pcStack_88;
    char *pcStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = param_1 + 0x10;
    uVar7 = *(param_1 + 0x300);
    pcStack_88 = "dummy_clk";
    of_property_read_string(uVar7,"clock-output-names",&pcStack_88);
    pcVar2 = pcStack_88;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iVar4 = devm_kmalloc(iVar6,0x78,0xdc0);
    if (iVar4 == 0) {
        uVar8 = 0xfffffffffffffff4;
    }
    else {
        uStack_50 = 0;
        uStack_58 = uStack_58 & 0xffffffffffffff00;
        pcStack_80 = pcVar2;
        pcStack_78 = obj.clk_dummy_ops;
        *(iVar4 + 0x10) = &pcStack_80;
        uVar8 = devm_clk_register(iVar6,iVar4);
        if (uVar8 < 0xfffffffffffff001) {
            *(iVar4 + 0x18) = obj.dummy_reset_ops;
            *(iVar4 + 0x50) = uVar7;
            *(iVar4 + 0x68) = 100;
            iVar3 = devm_reset_controller_register(iVar6,iVar4 + 0x18);
            uVar1 = 0x8000456;
            if (iVar3 != 0) {
                uVar1 = 0x80004a3;
            }
            _printk(uVar1,pcVar2);
            uVar5 = of_clk_add_provider(uVar7,sym.of_clk_src_simple_get.cfi_jt,uVar8);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 == 0) {
                _dev_info(iVar6,"Successfully registered dummy clock controller for %s\n",pcStack_88);
            }
            goto code_r0x0800137c;
        }
    }
    _printk(0x80003d0,pcStack_88,uVar8 & 0xffffffff);
code_r0x0800137c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.dummy_clk_remove;
    of_clk_del_provider(*(iVar6 + 0x300));
    return 0;
}


// ===== sym.dummy_clk_remove.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.dummy_clk_remove.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_clk_del_provider(*(param_1 + 0x300));
    return 0;
}


// ===== sym.of_clk_src_simple_get.cfi_jt @ 0x080011f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.of_clk_src_simple_get.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dummy_reset_deassert.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.dummy_reset_deassert.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(void)

{
    return 0;
}


// ===== sym.dummy_reset_assert.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.dummy_reset_assert.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(void)

{
    return 0;
}


// ===== sym.dummy_clk_round_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.dummy_clk_round_rate.0636774e5de5e07bc0ae4e96393a5903.cfi_jt(ulong param_1,ulong param_2)

{
    return param_2;
}


// ===== sym.clk_debug_measure_add.cfi_jt @ 0x08001210 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.clk_debug_measure_add.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dummy_clk_recalc_rate @ 0x08001218 (size 16) =====

ulong sym.dummy_clk_recalc_rate(int64_t arg1)

{
    return *(arg1 + 0x70);
}


// ===== sym.dummy_clk_round_rate @ 0x08001228 (size 16) =====

int64_t sym.dummy_clk_round_rate(ulong noname_0,int64_t arg1)

{
    return arg1;
}


// ===== sym.dummy_clk_set_rate @ 0x08001238 (size 24) =====

ulong sym.dummy_clk_set_rate(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x70) = arg2;
    return 0;
}


// ===== sym.dummy_clk_probe @ 0x08001250 (size 384) =====

uint64_t sym.dummy_clk_probe(int64_t arg1)

{
    ulong uVar1;
    char *pcVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    char *pcStack_88;
    char *pcStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = arg1 + 0x10;
    uVar7 = *(arg1 + 0x300);
    pcStack_88 = "dummy_clk";
    of_property_read_string(uVar7,"clock-output-names",&pcStack_88);
    pcVar2 = pcStack_88;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iVar4 = devm_kmalloc(iVar6,0x78,0xdc0);
    if (iVar4 == 0) {
        uVar8 = 0xfffffffffffffff4;
    }
    else {
        uStack_50 = 0;
        uStack_58 = uStack_58 & 0xffffffffffffff00;
        pcStack_80 = pcVar2;
        pcStack_78 = obj.clk_dummy_ops;
        *(iVar4 + 0x10) = &pcStack_80;
        uVar8 = devm_clk_register(iVar6,iVar4);
        if (uVar8 < 0xfffffffffffff001) {
            *(iVar4 + 0x18) = obj.dummy_reset_ops;
            *(iVar4 + 0x50) = uVar7;
            *(iVar4 + 0x68) = 100;
            iVar3 = devm_reset_controller_register(iVar6,iVar4 + 0x18);
            uVar1 = 0x8000456;
            if (iVar3 != 0) {
                uVar1 = 0x80004a3;
            }
            _printk(uVar1,pcVar2);
            uVar5 = of_clk_add_provider(uVar7,sym.of_clk_src_simple_get.cfi_jt,uVar8);
            uVar8 = uVar5 & 0xffffffff;
            if (uVar5 == 0) {
                _dev_info(iVar6,"Successfully registered dummy clock controller for %s\n",pcStack_88);
            }
            goto code_r0x0800137c;
        }
    }
    _printk(0x80003d0,pcStack_88,uVar8 & 0xffffffff);
code_r0x0800137c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar8 & 0xffffffff;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.dummy_clk_remove;
    of_clk_del_provider(*(iVar6 + 0x300));
    return 0;
}


// ===== sym.dummy_clk_remove @ 0x080013d0 (size 44) =====

ulong sym.dummy_clk_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_clk_del_provider(*(arg1 + 0x300));
    return 0;
}


// ===== sym.dummy_reset_assert @ 0x080013fc (size 16) =====

ulong sym.dummy_reset_assert(int64_t arg1)

{
    return 0;
}


// ===== sym.dummy_reset_deassert @ 0x0800140c (size 16) =====

ulong sym.dummy_reset_deassert(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800141c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001460

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001474);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001494 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080014c8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dummy_clk_probe.0636774e5de5e07bc0ae4e96393a5903.cfi_jt);
    return;
}

