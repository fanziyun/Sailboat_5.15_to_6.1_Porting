// decompiled from charger-ulog-glink by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 576) =====

//WARNING: Switch with 1 destination removed at 0x08001e98

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 == -0x76e7814a8afd6df4) {
                pcVar2 = sym.ulog_time_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x0800122c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08001e58;
            }
            if (arg1 != -0x550b9e52359ac614) {
                if ((arg1 == -0x3557318fb8d07b71) && ((pcVar1 + -0x80012a0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001e58;
            }
            pcVar2 = sym.chg_ulog_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x2ee0710dce68437c) {
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80012d0 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08001e58;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001e58;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.debugfs_attr_write.cfi_jt;
        }
        else {
            if (arg1 != 0x268e9722c14a4592) goto code_r0x08001e58;
            pcVar2 = sym.chg_ulog_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.no_llseek.cfi_jt;
    }
    else {
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.ulog_time_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x0800122c;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001e58;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001e58:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001eac);
    (*pcVar1)();
}


// ===== sym.chg_ulog_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.chg_ulog_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(uint64_t param_1)

{
    char *pcVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    uint *puVar11;
    uint64_t unaff_x21;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    char *pcStack_70;
    uint64_t uStack_68;
    uint *puStack_60;
    uint64_t uStack_58;
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    pcVar1 = param_1 + 0x2099;
    uVar10 = param_1 - 0x50;
    uStack_48 = 0x10000800a;
    uStack_40 = 0x18;
    if (*pcVar1 != '\0') {
        uStack_40 = 0x23;
    }
    uStack_3c = 0x2000;
    mutex_lock(uVar10);
    puVar11 = param_1 - 0x20;
    *puVar11 = 0;
    uVar9 = 0x10;
    uVar3 = pmic_glink_write(*(param_1 - 0x70),&uStack_48);
    if (uVar3 == 0) {
        iVar4 = wait_for_completion_timeout(puVar11,0xfa);
        if (iVar4 == 0) {
            _printk(0x8000481,"chg_ulog_write");
            unaff_x21 = 0xffffff92;
            goto code_r0x080017e4;
        }
        puVar11 = param_1 - 0x78;
        uVar5 = mutex_unlock(uVar10);
        if ((*(param_1 + 0x2098) != '\0') || (*pcVar1 != '\0')) {
            uVar5 = __msecs_to_jiffies(*(param_1 + 0x2094));
            uVar9 = param_1;
            uVar5 = queue_delayed_work_on(0x20,_delayed_work_timer_fn,param_1,uVar5);
            uVar10 = param_1;
        }
    }
    else {
        unaff_x21 = uVar3;
code_r0x080017e4:
        mutex_unlock(uVar10);
        uVar9 = unaff_x21;
        uVar5 = _printk(0x80001c1,"chg_ulog_work");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_8_;
    iVar6 = auVar12._0_8_;
    *extraout_x18 = sym.chg_ulog_callback;
    pcStack_78 = sym.chg_ulog_callback;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar4 = *(iVar8 + 8);
    puStack_80 = &stack0xffffffffffffffd0;
    pcStack_70 = pcVar1;
    uStack_68 = unaff_x21;
    puStack_60 = puVar11;
    uStack_58 = uVar10;
    if ((iVar4 == 0x18) || (iVar4 == 0x23)) {
        if (uVar9 == 0x200c) {
            iVar7 = iVar6 + 0x100;
            memcpy(iVar7,iVar8 + 0xc,0x2000);
            iVar2 = 0x20;
            if (*(iVar8 + 8) != 0x23) {
                iVar2 = 0x18;
            }
            uVar5 = *(iVar6 + iVar2);
            iStack_90 = iVar7;
            if (*(iVar6 + 0x100) == '\0') {
                if (*(iVar6 + 0x2111) != '\0') {
                    *(iVar6 + 0x2111) = 0;
                }
            }
            else {
                *(iVar6 + 0x20ff) = 0;
                iVar7 = strsep(&iStack_90,0x80004b7);
                while (iVar7 != 0) {
                    ipc_log_string(uVar5,0x800028e,iVar7);
                    iVar7 = strsep(&iStack_90,0x80004b7);
                }
            }
        }
        else {
            _printk(0x8000338,"handle_ulog_message",0x200c);
        }
    }
    else if (iVar4 != 0x19) {
        _printk(0x8000406,"chg_ulog_callback");
        goto code_r0x08001940;
    }
    complete(iVar6 + 0x58);
code_r0x08001940:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_88) {
        return 0;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.ulog_cat_fops_open;
    uVar5 = simple_attr_open(auVar12._0_8_,auVar12._8_8_,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                             sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return uVar5;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001250 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001258 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001260 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ulog_time_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001270 (size 8) =====

uint sym.ulog_time_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint uVar1;
    
    if (*(param_1 + 0x210c) == param_2) {
        uVar1 = 0;
    }
    else if (param_2 < 500) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        *(param_1 + 0x210c) = param_2;
    }
    return uVar1;
}


// ===== sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = param_2 != 0;
    if (*(param_1 + 0x2110) != bVar1) {
        if (*(param_1 + 0x2100) == 0x100000000) {
            *(param_1 + 0x2111) = bVar1;
        }
        else {
            *(param_1 + 0x2110) = bVar1;
        }
        if (param_2 == 0) {
            cancel_delayed_work_sync(param_1 + 0x78);
        }
        else {
            uVar2 = __msecs_to_jiffies(*(param_1 + 0x210c));
            queue_delayed_work_on(0x20,_delayed_work_timer_fn,param_1 + 0x78,uVar2);
        }
    }
    return 0;
}


// ===== sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001280 (size 8) =====

uint64_t sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    if (*(param_1 + 0x2110) == '\0') {
        if (*(param_1 + 0x2108) == param_2) {
            uVar2 = 0;
        }
        else {
            iVar1 = param_1 + 0x28;
            uStack_58 = *(param_1 + 0x2100);
            uStack_68 = 0x10000800a;
            uStack_60 = 0x19;
            uStack_50 = param_2;
            mutex_lock(iVar1);
            *(param_1 + 0x58) = 0;
            uVar2 = pmic_glink_write(*(param_1 + 8),&uStack_68,0x20);
            if (uVar2 == 0) {
                iVar3 = wait_for_completion_timeout(param_1 + 0x58,0xfa);
                if (iVar3 != 0) {
                    mutex_unlock(iVar1);
                    uVar2 = 0;
                    *(param_1 + 0x2108) = param_2;
                    goto code_r0x08001c34;
                }
                _printk(0x8000481,"chg_ulog_write");
                uVar2 = 0xffffff92;
            }
            mutex_unlock(iVar1);
            _printk(0x800022f,"ulog_level_set",uVar2);
        }
    }
    else {
        _printk(0x80001f3,"ulog_level_set");
        uVar2 = 0xffffffea;
    }
code_r0x08001c34:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ulog_en_fops_open;
        uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                                 sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
        return uVar4;
    }
    return uVar2;
}


// ===== sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001288 (size 8) =====

uint64_t sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    if (*(param_1 + 0x2110) == '\0') {
        if (*(param_1 + 0x2100) == param_2) {
            uVar2 = 0;
        }
        else {
            iVar1 = param_1 + 0x28;
            uStack_68 = 0x10000800a;
            uStack_60 = 0x19;
            uStack_50 = *(param_1 + 0x2108);
            iStack_58 = param_2;
            mutex_lock(iVar1);
            *(param_1 + 0x58) = 0;
            uVar2 = pmic_glink_write(*(param_1 + 8),&uStack_68,0x20);
            if (uVar2 == 0) {
                iVar3 = wait_for_completion_timeout(param_1 + 0x58,0xfa);
                if (iVar3 != 0) {
                    mutex_unlock(iVar1);
                    uVar2 = 0;
                    *(param_1 + 0x2100) = param_2;
                    goto code_r0x08001a88;
                }
                _printk(0x8000481,"chg_ulog_write");
                uVar2 = 0xffffff92;
            }
            mutex_unlock(iVar1);
            _printk(0x8000376,"ulog_cat_set",uVar2);
        }
    }
    else {
        _printk(0x8000574,"ulog_cat_set");
        uVar2 = 0xffffffea;
    }
code_r0x08001a88:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ulog_level_fops_open;
        uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                 ,sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
        return uVar4;
    }
    return uVar2;
}


// ===== sym.chg_ulog_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.chg_ulog_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar2 = *(param_2 + 8);
    if ((iVar2 == 0x18) || (iVar2 == 0x23)) {
        if (param_3 == 0x200c) {
            iVar3 = param_1 + 0x100;
            memcpy(iVar3,param_2 + 0xc,0x2000);
            iVar1 = 0x20;
            if (*(param_2 + 8) != 0x23) {
                iVar1 = 0x18;
            }
            uVar4 = *(param_1 + iVar1);
            iStack_40 = iVar3;
            if (*(param_1 + 0x100) == '\0') {
                if (*(param_1 + 0x2111) != '\0') {
                    *(param_1 + 0x2111) = 0;
                }
            }
            else {
                *(param_1 + 0x20ff) = 0;
                iVar3 = strsep(&iStack_40,0x80004b7);
                while (iVar3 != 0) {
                    ipc_log_string(uVar4,0x800028e,iVar3);
                    iVar3 = strsep(&iStack_40,0x80004b7);
                }
            }
        }
        else {
            _printk(0x8000338,"handle_ulog_message",0x200c);
        }
    }
    else if (iVar2 != 0x19) {
        _printk(0x8000406,"chg_ulog_callback");
        goto code_r0x08001940;
    }
    complete(param_1 + 0x58);
code_r0x08001940:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.ulog_cat_fops_open;
    uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                             sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return uVar4;
}


// ===== sym.no_llseek.cfi_jt @ 0x08001298 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char *pcStack_60;
    ulong uStack_58;
    int64_t *piStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar5 = param_1 + 0x10;
    iStack_38 = *(iVar1 + 0x5e0);
    pcStack_48 = NULL;
    uStack_40 = 0;
    uStack_58 = 0;
    piStack_50 = NULL;
    piVar3 = devm_kmalloc(iVar5,0x2118,0xdc0);
    if (piVar3 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001614;
    }
    __mutex_init(piVar3 + 5,"&cd->lock",reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(piVar3 + 0xb) = 0;
    __init_swait_queue_head(piVar3 + 0xc,"&x->wait",reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    piVar3[0xf] = 0xfffffffe0;
    piVar3[0x10] = piVar3 + 0x10;
    piVar3[0x11] = piVar3 + 0x10;
    piVar3[0x12] = sym.chg_ulog_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    init_timer_key(piVar3 + 0x15,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(piVar3 + 0x210c) = 1000;
    *(param_1 + 0xa8) = piVar3;
    *piVar3 = iVar5;
    uStack_58 = CONCAT44(uStack_58._4_4_,0x800a);
    pcStack_60 = "chg_ulog";
    pcStack_48 = sym.chg_ulog_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piStack_50 = piVar3;
    uVar4 = pmic_glink_register_client(iVar5,&pcStack_60);
    piVar3[1] = uVar4;
    if (uVar4 < 0xfffffffffffff001) {
        uVar4 = debugfs_create_dir("charger_ulog",0);
        if (uVar4 < 0xfffffffffffff001) {
            uVar6 = debugfs_create_file_unsafe("category",0x180,uVar4,piVar3,obj.ulog_cat_fops);
            if (0xfffffffffffff000 < uVar6) {
                _printk(0x8000186,"chg_ulog_add_debugfs",uVar6 & 0xffffffff);
code_r0x080015ec:
                iVar2 = uVar6;
                debugfs_remove(uVar4);
                goto code_r0x080015f4;
            }
            uVar6 = debugfs_create_file_unsafe("level",0x180,uVar4,piVar3,obj.ulog_level_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x8000148;
code_r0x080015dc:
                _printk(uVar7,"chg_ulog_add_debugfs",uVar6 & 0xffffffff);
                goto code_r0x080015ec;
            }
            uVar6 = debugfs_create_file_unsafe("enable",0x180,uVar4,piVar3,obj.ulog_en_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x80002f8;
                goto code_r0x080015dc;
            }
            uVar6 = debugfs_create_file_unsafe("time_ms",0x180,uVar4,piVar3,obj.ulog_time_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x80002a6;
                goto code_r0x080015dc;
            }
            piVar3[2] = uVar4;
        }
        else {
            _printk(0x80003ab,"chg_ulog_add_debugfs",uVar4 & 0xffffffff);
            iVar2 = uVar4;
code_r0x080015f4:
            if (iVar2 != 0) {
                pmic_glink_unregister_client(piVar3[1]);
                iVar5 = *piVar3;
                pcVar8 = "Error in creating debugfs\n";
                uVar4 = 0xffffffea;
                goto code_r0x08001610;
            }
        }
        iVar5 = ipc_log_context_create(10,"charger_ulog",0);
        piVar3[3] = iVar5;
        if (iVar5 == 0) {
            pmic_glink_unregister_client(piVar3[1]);
            debugfs_remove(piVar3[2]);
            iVar5 = *piVar3;
            pcVar8 = "Error in creating charger_ulog\n";
        }
        else {
            iVar5 = ipc_log_context_create(8,"charger_ulog_init",0);
            uVar7 = 0;
            piVar3[4] = iVar5;
            if (iVar5 != 0) goto code_r0x08001614;
            pmic_glink_unregister_client(piVar3[1]);
            ipc_log_context_destroy(piVar3[3]);
            debugfs_remove(piVar3[2]);
            iVar5 = *piVar3;
            pcVar8 = "Error in creating charger_ulog_init\n";
        }
        uVar4 = 0xffffffed;
    }
    else {
        iVar5 = *piVar3;
        pcVar8 = "Error in registering with pmic_glink %d\n";
    }
code_r0x08001610:
    uVar7 = dev_err_probe(iVar5,uVar4,pcVar8);
code_r0x08001614:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar5 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.chg_ulog_remove;
    iVar5 = *(iVar5 + 0xa8);
    debugfs_remove(*(iVar5 + 0x10));
    cancel_delayed_work_sync(iVar5 + 0x78);
    iVar2 = pmic_glink_unregister_client(*(iVar5 + 8));
    if (iVar2 < 0) {
        _printk(0x80004dd,"chg_ulog_remove",iVar2);
    }
    ipc_log_context_destroy(*(iVar5 + 0x18));
    ipc_log_context_destroy(*(iVar5 + 0x20));
    return 0;
}


// ===== sym.chg_ulog_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012a8 (size 8) =====

ulong sym.chg_ulog_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    debugfs_remove(*(iVar2 + 0x10));
    cancel_delayed_work_sync(iVar2 + 0x78);
    iVar1 = pmic_glink_unregister_client(*(iVar2 + 8));
    if (iVar1 < 0) {
        _printk(0x80004dd,"chg_ulog_remove",iVar1);
    }
    ipc_log_context_destroy(*(iVar2 + 0x18));
    ipc_log_context_destroy(*(iVar2 + 0x20));
    return 0;
}


// ===== sym.ulog_time_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012b0 (size 8) =====

ulong sym.ulog_time_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x210c);
    return 0;
}


// ===== sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012b8 (size 8) =====

ulong sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong *param_2)

{
    *param_2 = *(param_1 + 0x2100);
    return 0;
}


// ===== sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x2110);
    return 0;
}


// ===== sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012c8 (size 8) =====

ulong sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x2108);
    return 0;
}


// ===== sym.ulog_level_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012d0 (size 8) =====

void sym.ulog_level_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x080012d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ulog_en_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012e0 (size 8) =====

void sym.ulog_en_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_time_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012e8 (size 8) =====

void sym.ulog_time_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_time_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_time_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_cat_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080012f0 (size 8) =====

void sym.ulog_cat_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x080012f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.chg_ulog_probe @ 0x08001300 (size 840) =====

ulong sym.chg_ulog_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char *pcStack_60;
    ulong uStack_58;
    int64_t *piStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar5 = arg1 + 0x10;
    iStack_38 = *(iVar1 + 0x5e0);
    pcStack_48 = NULL;
    uStack_40 = 0;
    uStack_58 = 0;
    piStack_50 = NULL;
    piVar3 = devm_kmalloc(iVar5,0x2118,0xdc0);
    if (piVar3 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001614;
    }
    __mutex_init(piVar3 + 5,"&cd->lock",reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(piVar3 + 0xb) = 0;
    __init_swait_queue_head(piVar3 + 0xc,"&x->wait",reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    piVar3[0xf] = 0xfffffffe0;
    piVar3[0x10] = piVar3 + 0x10;
    piVar3[0x11] = piVar3 + 0x10;
    piVar3[0x12] = sym.chg_ulog_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    init_timer_key(piVar3 + 0x15,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(piVar3 + 0x210c) = 1000;
    *(arg1 + 0xa8) = piVar3;
    *piVar3 = iVar5;
    uStack_58 = CONCAT44(uStack_58._4_4_,0x800a);
    pcStack_60 = "chg_ulog";
    pcStack_48 = sym.chg_ulog_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    piStack_50 = piVar3;
    uVar4 = pmic_glink_register_client(iVar5,&pcStack_60);
    piVar3[1] = uVar4;
    if (uVar4 < 0xfffffffffffff001) {
        uVar4 = debugfs_create_dir("charger_ulog",0);
        if (uVar4 < 0xfffffffffffff001) {
            uVar6 = debugfs_create_file_unsafe("category",0x180,uVar4,piVar3,obj.ulog_cat_fops);
            if (0xfffffffffffff000 < uVar6) {
                _printk(0x8000186,"chg_ulog_add_debugfs",uVar6 & 0xffffffff);
code_r0x080015ec:
                iVar2 = uVar6;
                debugfs_remove(uVar4);
                goto code_r0x080015f4;
            }
            uVar6 = debugfs_create_file_unsafe("level",0x180,uVar4,piVar3,obj.ulog_level_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x8000148;
code_r0x080015dc:
                _printk(uVar7,"chg_ulog_add_debugfs",uVar6 & 0xffffffff);
                goto code_r0x080015ec;
            }
            uVar6 = debugfs_create_file_unsafe("enable",0x180,uVar4,piVar3,obj.ulog_en_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x80002f8;
                goto code_r0x080015dc;
            }
            uVar6 = debugfs_create_file_unsafe("time_ms",0x180,uVar4,piVar3,obj.ulog_time_fops);
            if (0xfffffffffffff000 < uVar6) {
                uVar7 = 0x80002a6;
                goto code_r0x080015dc;
            }
            piVar3[2] = uVar4;
        }
        else {
            _printk(0x80003ab,"chg_ulog_add_debugfs",uVar4 & 0xffffffff);
            iVar2 = uVar4;
code_r0x080015f4:
            if (iVar2 != 0) {
                pmic_glink_unregister_client(piVar3[1]);
                iVar5 = *piVar3;
                pcVar8 = "Error in creating debugfs\n";
                uVar4 = 0xffffffea;
                goto code_r0x08001610;
            }
        }
        iVar5 = ipc_log_context_create(10,"charger_ulog",0);
        piVar3[3] = iVar5;
        if (iVar5 == 0) {
            pmic_glink_unregister_client(piVar3[1]);
            debugfs_remove(piVar3[2]);
            iVar5 = *piVar3;
            pcVar8 = "Error in creating charger_ulog\n";
        }
        else {
            iVar5 = ipc_log_context_create(8,"charger_ulog_init",0);
            uVar7 = 0;
            piVar3[4] = iVar5;
            if (iVar5 != 0) goto code_r0x08001614;
            pmic_glink_unregister_client(piVar3[1]);
            ipc_log_context_destroy(piVar3[3]);
            debugfs_remove(piVar3[2]);
            iVar5 = *piVar3;
            pcVar8 = "Error in creating charger_ulog_init\n";
        }
        uVar4 = 0xffffffed;
    }
    else {
        iVar5 = *piVar3;
        pcVar8 = "Error in registering with pmic_glink %d\n";
    }
code_r0x08001610:
    uVar7 = dev_err_probe(iVar5,uVar4,pcVar8);
code_r0x08001614:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar5 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.chg_ulog_remove;
    iVar5 = *(iVar5 + 0xa8);
    debugfs_remove(*(iVar5 + 0x10));
    cancel_delayed_work_sync(iVar5 + 0x78);
    iVar2 = pmic_glink_unregister_client(*(iVar5 + 8));
    if (iVar2 < 0) {
        _printk(0x80004dd,"chg_ulog_remove",iVar2);
    }
    ipc_log_context_destroy(*(iVar5 + 0x18));
    ipc_log_context_destroy(*(iVar5 + 0x20));
    return 0;
}


// ===== sym.chg_ulog_remove @ 0x08001648 (size 120) =====

ulong sym.chg_ulog_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    debugfs_remove(*(iVar2 + 0x10));
    cancel_delayed_work_sync(iVar2 + 0x78);
    iVar1 = pmic_glink_unregister_client(*(iVar2 + 8));
    if (iVar1 < 0) {
        _printk(0x80004dd,"chg_ulog_remove",iVar1);
    }
    ipc_log_context_destroy(*(iVar2 + 0x18));
    ipc_log_context_destroy(*(iVar2 + 0x20));
    return 0;
}


// ===== sym.chg_ulog_work @ 0x080016c0 (size 332) =====

ulong sym.chg_ulog_work(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    uint *puVar10;
    uint64_t unaff_x21;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    char *pcStack_70;
    uint64_t uStack_68;
    uint *puStack_60;
    int64_t iStack_58;
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    pcVar1 = arg1 + 0x2099;
    iVar9 = arg1 + -0x50;
    uStack_48 = 0x10000800a;
    uStack_40 = 0x18;
    if (*pcVar1 != '\0') {
        uStack_40 = 0x23;
    }
    uStack_3c = 0x2000;
    mutex_lock(iVar9);
    puVar10 = arg1 + -0x20;
    *puVar10 = 0;
    uVar8 = 0x10;
    uVar3 = pmic_glink_write(*(arg1 + -0x70),&uStack_48);
    if (uVar3 == 0) {
        iVar4 = wait_for_completion_timeout(puVar10,0xfa);
        if (iVar4 == 0) {
            _printk(0x8000481,"chg_ulog_write");
            unaff_x21 = 0xffffff92;
            goto code_r0x080017e4;
        }
        puVar10 = arg1 + -0x78;
        uVar5 = mutex_unlock(iVar9);
        if ((*(arg1 + 0x2098) != '\0') || (*pcVar1 != '\0')) {
            uVar5 = __msecs_to_jiffies(*(arg1 + 0x2094));
            uVar8 = arg1;
            uVar5 = queue_delayed_work_on(0x20,_delayed_work_timer_fn,arg1,uVar5);
            iVar9 = arg1;
        }
    }
    else {
        unaff_x21 = uVar3;
code_r0x080017e4:
        mutex_unlock(iVar9);
        uVar8 = unaff_x21;
        uVar5 = _printk(0x80001c1,"chg_ulog_work");
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    auVar11 = __stack_chk_fail();
    iVar7 = auVar11._8_8_;
    iVar6 = auVar11._0_8_;
    *extraout_x18 = sym.chg_ulog_callback;
    pcStack_78 = sym.chg_ulog_callback;
    iVar2 = sp_el0;
    iStack_88 = *(iVar2 + 0x5e0);
    iVar4 = *(iVar7 + 8);
    puStack_80 = &stack0xffffffffffffffd0;
    pcStack_70 = pcVar1;
    uStack_68 = unaff_x21;
    puStack_60 = puVar10;
    iStack_58 = iVar9;
    if ((iVar4 == 0x18) || (iVar4 == 0x23)) {
        if (uVar8 == 0x200c) {
            iVar9 = iVar6 + 0x100;
            memcpy(iVar9,iVar7 + 0xc,0x2000);
            iVar2 = 0x20;
            if (*(iVar7 + 8) != 0x23) {
                iVar2 = 0x18;
            }
            uVar5 = *(iVar6 + iVar2);
            iStack_90 = iVar9;
            if (*(iVar6 + 0x100) == '\0') {
                if (*(iVar6 + 0x2111) != '\0') {
                    *(iVar6 + 0x2111) = 0;
                }
            }
            else {
                *(iVar6 + 0x20ff) = 0;
                iVar9 = strsep(&iStack_90,0x80004b7);
                while (iVar9 != 0) {
                    ipc_log_string(uVar5,0x800028e,iVar9);
                    iVar9 = strsep(&iStack_90,0x80004b7);
                }
            }
        }
        else {
            _printk(0x8000338,"handle_ulog_message",0x200c);
        }
    }
    else if (iVar4 != 0x19) {
        _printk(0x8000406,"chg_ulog_callback");
        goto code_r0x08001940;
    }
    complete(iVar6 + 0x58);
code_r0x08001940:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_88) {
        return 0;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.ulog_cat_fops_open;
    uVar5 = simple_attr_open(auVar11._0_8_,auVar11._8_8_,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                             sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return uVar5;
}


// ===== sym.chg_ulog_callback @ 0x0800180c (size 364) =====

ulong sym.chg_ulog_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar2 = *(arg2 + 8);
    if ((iVar2 == 0x18) || (iVar2 == 0x23)) {
        if (arg3 == 0x200c) {
            iVar3 = arg1 + 0x100;
            memcpy(iVar3,arg2 + 0xc,0x2000);
            iVar1 = 0x20;
            if (*(arg2 + 8) != 0x23) {
                iVar1 = 0x18;
            }
            uVar4 = *(arg1 + iVar1);
            iStack_40 = iVar3;
            if (*(arg1 + 0x100) == '\0') {
                if (*(arg1 + 0x2111) != '\0') {
                    *(arg1 + 0x2111) = 0;
                }
            }
            else {
                *(arg1 + 0x20ff) = 0;
                iVar3 = strsep(&iStack_40,0x80004b7);
                while (iVar3 != 0) {
                    ipc_log_string(uVar4,0x800028e,iVar3);
                    iVar3 = strsep(&iStack_40,0x80004b7);
                }
            }
        }
        else {
            _printk(0x8000338,"handle_ulog_message",0x200c);
        }
    }
    else if (iVar2 != 0x19) {
        _printk(0x8000406,"chg_ulog_callback");
        goto code_r0x08001940;
    }
    complete(arg1 + 0x58);
code_r0x08001940:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.ulog_cat_fops_open;
    uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                             sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return uVar4;
}


// ===== sym.ulog_cat_fops_open @ 0x08001978 (size 60) =====

void sym.ulog_cat_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_cat_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_cat_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_cat_get @ 0x080019b4 (size 24) =====

ulong sym.ulog_cat_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x2100);
    return 0;
}


// ===== sym.ulog_cat_set @ 0x080019cc (size 344) =====

uint64_t sym.ulog_cat_set(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    if (*(arg1 + 0x2110) == '\0') {
        if (*(arg1 + 0x2100) == uVar4) {
            uVar2 = 0;
        }
        else {
            iVar1 = arg1 + 0x28;
            uStack_68 = 0x10000800a;
            uStack_60 = 0x19;
            uStack_50 = *(arg1 + 0x2108);
            uStack_58 = uVar4;
            mutex_lock(iVar1);
            *(arg1 + 0x58) = 0;
            uVar2 = pmic_glink_write(*(arg1 + 8),&uStack_68,0x20);
            if (uVar2 == 0) {
                iVar3 = wait_for_completion_timeout(arg1 + 0x58,0xfa);
                if (iVar3 != 0) {
                    mutex_unlock(iVar1);
                    uVar2 = 0;
                    *(arg1 + 0x2100) = uVar4;
                    goto code_r0x08001a88;
                }
                _printk(0x8000481,"chg_ulog_write");
                uVar2 = 0xffffff92;
            }
            mutex_unlock(iVar1);
            _printk(0x8000376,"ulog_cat_set",uVar2);
        }
    }
    else {
        _printk(0x8000574,"ulog_cat_set");
        uVar2 = 0xffffffea;
    }
code_r0x08001a88:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ulog_level_fops_open;
        uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                                 ,sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
        return uVar4;
    }
    return uVar2;
}


// ===== sym.ulog_level_fops_open @ 0x08001b24 (size 60) =====

void sym.ulog_level_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_level_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_level_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_level_get @ 0x08001b60 (size 24) =====

ulong sym.ulog_level_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x2108);
    return 0;
}


// ===== sym.ulog_level_set @ 0x08001b78 (size 344) =====

uint64_t sym.ulog_level_set(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    if (*(arg1 + 0x2110) == '\0') {
        if (*(arg1 + 0x2108) == arg2) {
            uVar2 = 0;
        }
        else {
            iVar1 = arg1 + 0x28;
            uStack_58 = *(arg1 + 0x2100);
            uStack_68 = 0x10000800a;
            uStack_60 = 0x19;
            uStack_50 = arg2 & 0xffffffff;
            mutex_lock(iVar1);
            *(arg1 + 0x58) = 0;
            uVar2 = pmic_glink_write(*(arg1 + 8),&uStack_68,0x20);
            if (uVar2 == 0) {
                iVar3 = wait_for_completion_timeout(arg1 + 0x58,0xfa);
                if (iVar3 != 0) {
                    mutex_unlock(iVar1);
                    uVar2 = 0;
                    *(arg1 + 0x2108) = arg2;
                    goto code_r0x08001c34;
                }
                _printk(0x8000481,"chg_ulog_write");
                uVar2 = 0xffffff92;
            }
            mutex_unlock(iVar1);
            _printk(0x800022f,"ulog_level_set",uVar2);
        }
    }
    else {
        _printk(0x80001f3,"ulog_level_set");
        uVar2 = 0xffffffea;
    }
code_r0x08001c34:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        auVar5 = __stack_chk_fail();
        *extraout_x18 = sym.ulog_en_fops_open;
        uVar4 = simple_attr_open(auVar5._0_8_,auVar5._8_8_,sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                                 sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
        return uVar4;
    }
    return uVar2;
}


// ===== sym.ulog_en_fops_open @ 0x08001cd0 (size 60) =====

void sym.ulog_en_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_en_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_en_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_en_get @ 0x08001d0c (size 28) =====

ulong sym.ulog_en_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x2110);
    return 0;
}


// ===== sym.ulog_en_set @ 0x08001d28 (size 156) =====

ulong sym.ulog_en_set(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = arg2 != 0;
    if (*(arg1 + 0x2110) != bVar1) {
        if (*(arg1 + 0x2100) == 0x100000000) {
            *(arg1 + 0x2111) = bVar1;
        }
        else {
            *(arg1 + 0x2110) = bVar1;
        }
        if (arg2 == 0) {
            cancel_delayed_work_sync(arg1 + 0x78);
        }
        else {
            uVar2 = __msecs_to_jiffies(*(arg1 + 0x210c));
            queue_delayed_work_on(0x20,_delayed_work_timer_fn,arg1 + 0x78,uVar2);
        }
    }
    return 0;
}


// ===== sym.ulog_time_fops_open @ 0x08001dc4 (size 60) =====

void sym.ulog_time_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.ulog_time_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.ulog_time_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"%llu\n");
    return;
}


// ===== sym.ulog_time_get @ 0x08001e00 (size 24) =====

ulong sym.ulog_time_get(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x210c);
    return 0;
}


// ===== sym.ulog_time_set @ 0x08001e18 (size 60) =====

uint sym.ulog_time_set(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    
    if (*(arg1 + 0x210c) == arg2) {
        uVar1 = 0;
    }
    else if (arg2 < 500) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        *(arg1 + 0x210c) = arg2;
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001e54 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e98

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001eac);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001eb4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001ee8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.chg_ulog_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

