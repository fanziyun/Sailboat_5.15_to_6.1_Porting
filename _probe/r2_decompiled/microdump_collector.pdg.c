// decompiled from microdump_collector by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 328) =====

//WARNING: Switch with 1 destination removed at 0x080016a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0x2ee0710dce68437c) {
        if (arg1 == -0x75b7d320ffd74518) {
            uVar2 = 0x8001178;
        }
        else if (arg1 == -0x550b9e52359ac614) {
            uVar2 = 0x8001180;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001660;
            uVar2 = 0x8001170;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == -0x2ee0710dce68437c) {
            uVar2 = 0x8001150;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001660;
            uVar2 = 0x8001160;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        uVar2 = 0x8001168;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001660;
        uVar2 = 0x8001158;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001660:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b4);
    (*pcVar1)();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001150 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001158 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    qcom_unregister_ssr_notifier(*(_segment.ehdr + 8),_segment.ehdr + 0x10);
    iVar2 = _segment.ehdr;
    *(iVar1 + 8) = 0;
    kfree(iVar2);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001160 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.microdump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x800042e,"microdump_init",iVar1);
    }
    return iVar1;
}


// ===== sym.microdump_modem_ssr_notifier_nb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.microdump_modem_ssr_notifier_nb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (ulong param_1,int64_t param_2,int64_t param_3)

{
    ulong *puVar1;
    ulong *****pppppuVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong *****pppppuStack_a8;
    ulong *****pppppuStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong *****pppppuStack_88;
    ulong *****pppppuStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    ulong *****pppppuStack_60;
    ulong *****pppppuStack_58;
    ulong uStack_50;
    uint64_t uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if ((param_2 == 2) && (*(param_3 + 8) != '\0')) {
        pppppuStack_a8 = &pppppuStack_a8;
        uStack_98 = 0;
        uStack_90 = 0;
        pppppuStack_88 = NULL;
        pppppuStack_80 = NULL;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        pppppuStack_60 = NULL;
        pppppuStack_58 = NULL;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        pppppuStack_a0 = pppppuStack_a8;
        uVar4 = qcom_smem_get(1,0x263,&uStack_98);
        pppppuVar2 = pppppuStack_a8;
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x80003a5,"microdump_crash_collection",0x263);
        }
        else {
            uStack_68 = uStack_98;
            uStack_70 = uVar4;
            uVar4 = __list_add_valid(&pppppuStack_88,&pppppuStack_a8,pppppuStack_a8);
            if ((uVar4 & 1) != 0) {
                pppppuVar2[1] = &pppppuStack_88;
                pppppuStack_88 = pppppuVar2;
                pppppuStack_a8 = &pppppuStack_88;
                pppppuStack_80 = &pppppuStack_a8;
            }
            uVar4 = qcom_smem_get(0xffffffff,0x1a5,&uStack_90);
            if (uVar4 == 0) {
                _printk(0x80002bd,"microdump_crash_collection",0x1a5);
            }
            else if (uVar4 < 0xfffffffffffff001) {
                strlcpy("none",uVar4,0x82);
                _printk(0x8000369,"none");
                uVar6 = strlen("none");
                iVar5 = strnstr("none","CRITICAL_DATA_CHECK_FAILED",uVar6);
                pppppuVar2 = pppppuStack_a8;
                if (iVar5 == 0) {
                    uStack_40 = uStack_90;
                    uStack_48 = uVar4;
                    uVar4 = __list_add_valid(&pppppuStack_60,&pppppuStack_a8,pppppuStack_a8);
                    puVar1 = _segment.ehdr;
                    if ((uVar4 & 1) != 0) {
                        pppppuVar2[1] = &pppppuStack_60;
                        pppppuStack_60 = pppppuVar2;
                        pppppuStack_a8 = &pppppuStack_60;
                        pppppuStack_58 = &pppppuStack_a8;
                    }
                    if (_segment.ehdr == 0) {
                        _printk(0x8000503,"microdump_crash_collection");
                    }
                    else {
                        _segment.ehdr = CONCAT44(*0x8000004,1);
                        iVar3 = qcom_dump(&pppppuStack_a8,*puVar1);
                        if (iVar3 != 0) {
                            _printk(0x80003d2,"microdump_crash_collection");
                        }
                        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    }
                }
                else {
                    _printk(0x800053c);
                    queue_delayed_work_on(0x20,_delayed_work_timer_fn,obj.create_kobj_work,0xfa);
                }
            }
            else {
                _printk(0x8000484,"microdump_crash_collection",0x1a5,uVar4);
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.checknv_kobj_create;
        if (_segment.ehdr != NULL) {
            _printk(0x8000457);
            kobject_uevent(_segment.ehdr,1);
            kobject_put(_segment.ehdr);
        }
        iVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x60);
        _segment.ehdr = iVar5;
        if (iVar5 == 0) {
            uVar6 = _printk(0x8000524);
        }
        else {
            if ((iVar5 == 0) && (iVar5 = kset_create_and_add("checknv_errimei",0,0), iVar5 == 0)) {
                _segment.ehdr = iVar5;
                _printk(0x8000582);
            }
            else {
                _segment.ehdr = iVar5;
                *(iVar5 + 0x20) = iVar5;
                iVar3 = kobject_init_and_add
                                  (iVar5,reloc.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0x8000323,
                                   "errimei");
                if (iVar3 == 0) {
                    uVar6 = kobject_uevent(_segment.ehdr,0);
                    return uVar6;
                }
                _printk(0x800059a,"checknv_kobj_create");
                kobject_put(_segment.ehdr);
                kset_unregister(_segment.ehdr);
            }
            uVar6 = kfree(_segment.ehdr);
        }
        return uVar6;
    }
    return 1;
}


// ===== sym.microdump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

uint sym.microdump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (piVar2 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        _segment.ehdr = piVar2;
        *piVar2 = param_1 + 0x10;
        if (param_1 + 0x10 == 0) {
            uVar5 = 0xffffffed;
            uVar4 = 0x80004af;
        }
        else {
            piVar2[2] = sym.microdump_modem_ssr_notifier_nb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            uVar3 = qcom_register_ssr_notifier("mpss",piVar2 + 2);
            piVar2[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                return 0;
            }
            _printk(0x8000326,uVar3);
            uVar5 = 0xffffffea;
            uVar4 = 0x80002d4;
        }
        _printk(uVar4,"microdump_probe");
        _printk(0x8000400,"microdump_probe");
        kfree(_segment.ehdr);
    }
    _segment.ehdr = NULL;
    return uVar5;
}


// ===== sym.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

void sym.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.checknv_kobj_create.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

void sym.checknv_kobj_create.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        _printk(0x8000457);
        kobject_uevent(_segment.ehdr,1);
        kobject_put(_segment.ehdr);
    }
    iVar2 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x60);
    _segment.ehdr = iVar2;
    if (iVar2 == 0) {
        _printk(0x8000524);
    }
    else {
        if ((iVar2 == 0) && (iVar2 = kset_create_and_add("checknv_errimei",0,0), iVar2 == 0)) {
            _segment.ehdr = iVar2;
            _printk(0x8000582);
        }
        else {
            _segment.ehdr = iVar2;
            *(iVar2 + 0x20) = iVar2;
            iVar1 = kobject_init_and_add
                              (iVar2,reloc.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0x8000323,
                               "errimei");
            if (iVar1 == 0) {
                kobject_uevent(_segment.ehdr,0);
                return;
            }
            _printk(0x800059a,"checknv_kobj_create");
            kobject_put(_segment.ehdr);
            kset_unregister(_segment.ehdr);
        }
        kfree(_segment.ehdr);
    }
    return;
}


// ===== sym.microdump_probe @ 0x08001188 (size 280) =====

uint sym.microdump_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (piVar2 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        _segment.ehdr = piVar2;
        *piVar2 = arg1 + 0x10;
        if (arg1 + 0x10 == 0) {
            uVar5 = 0xffffffed;
            uVar4 = 0x80004af;
        }
        else {
            piVar2[2] = sym.microdump_modem_ssr_notifier_nb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            uVar3 = qcom_register_ssr_notifier("mpss",piVar2 + 2);
            piVar2[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                return 0;
            }
            _printk(0x8000326,uVar3);
            uVar5 = 0xffffffea;
            uVar4 = 0x80002d4;
        }
        _printk(uVar4,"microdump_probe");
        _printk(0x8000400,"microdump_probe");
        kfree(_segment.ehdr);
    }
    _segment.ehdr = NULL;
    return uVar5;
}


// ===== sym.microdump_modem_ssr_notifier_nb @ 0x080012a0 (size 624) =====

ulong sym.microdump_modem_ssr_notifier_nb(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong *****pppppuVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong *****pppppuStack_a8;
    ulong *****pppppuStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong *****pppppuStack_88;
    ulong *****pppppuStack_80;
    ulong uStack_78;
    uint64_t uStack_70;
    ulong uStack_68;
    ulong *****pppppuStack_60;
    ulong *****pppppuStack_58;
    ulong uStack_50;
    uint64_t uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if ((arg1 == 2) && (*(arg2 + 8) != '\0')) {
        pppppuStack_a8 = &pppppuStack_a8;
        uStack_98 = 0;
        uStack_90 = 0;
        pppppuStack_88 = NULL;
        pppppuStack_80 = NULL;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        pppppuStack_60 = NULL;
        pppppuStack_58 = NULL;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        pppppuStack_a0 = pppppuStack_a8;
        uVar4 = qcom_smem_get(1,0x263,&uStack_98);
        pppppuVar2 = pppppuStack_a8;
        if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
            _printk(0x80003a5,"microdump_crash_collection",0x263);
        }
        else {
            uStack_68 = uStack_98;
            uStack_70 = uVar4;
            uVar4 = __list_add_valid(&pppppuStack_88,&pppppuStack_a8,pppppuStack_a8);
            if ((uVar4 & 1) != 0) {
                pppppuVar2[1] = &pppppuStack_88;
                pppppuStack_88 = pppppuVar2;
                pppppuStack_a8 = &pppppuStack_88;
                pppppuStack_80 = &pppppuStack_a8;
            }
            uVar4 = qcom_smem_get(0xffffffff,0x1a5,&uStack_90);
            if (uVar4 == 0) {
                _printk(0x80002bd,"microdump_crash_collection",0x1a5);
            }
            else if (uVar4 < 0xfffffffffffff001) {
                strlcpy("none",uVar4,0x82);
                _printk(0x8000369,"none");
                uVar6 = strlen("none");
                iVar5 = strnstr("none","CRITICAL_DATA_CHECK_FAILED",uVar6);
                pppppuVar2 = pppppuStack_a8;
                if (iVar5 == 0) {
                    uStack_40 = uStack_90;
                    uStack_48 = uVar4;
                    uVar4 = __list_add_valid(&pppppuStack_60,&pppppuStack_a8,pppppuStack_a8);
                    puVar1 = _segment.ehdr;
                    if ((uVar4 & 1) != 0) {
                        pppppuVar2[1] = &pppppuStack_60;
                        pppppuStack_60 = pppppuVar2;
                        pppppuStack_a8 = &pppppuStack_60;
                        pppppuStack_58 = &pppppuStack_a8;
                    }
                    if (_segment.ehdr == 0) {
                        _printk(0x8000503,"microdump_crash_collection");
                    }
                    else {
                        _segment.ehdr = CONCAT44(*0x8000004,1);
                        iVar3 = qcom_dump(&pppppuStack_a8,*puVar1);
                        if (iVar3 != 0) {
                            _printk(0x80003d2,"microdump_crash_collection");
                        }
                        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
                    }
                }
                else {
                    _printk(0x800053c);
                    queue_delayed_work_on(0x20,_delayed_work_timer_fn,obj.create_kobj_work,0xfa);
                }
            }
            else {
                _printk(0x8000484,"microdump_crash_collection",0x1a5,uVar4);
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.checknv_kobj_create;
        if (_segment.ehdr != NULL) {
            _printk(0x8000457);
            kobject_uevent(_segment.ehdr,1);
            kobject_put(_segment.ehdr);
        }
        iVar5 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x60);
        _segment.ehdr = iVar5;
        if (iVar5 == 0) {
            uVar6 = _printk(0x8000524);
        }
        else {
            if ((iVar5 == 0) && (iVar5 = kset_create_and_add("checknv_errimei",0,0), iVar5 == 0)) {
                _segment.ehdr = iVar5;
                _printk(0x8000582);
            }
            else {
                _segment.ehdr = iVar5;
                *(iVar5 + 0x20) = iVar5;
                iVar3 = kobject_init_and_add
                                  (iVar5,reloc.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0x8000323,
                                   "errimei");
                if (iVar3 == 0) {
                    uVar6 = kobject_uevent(_segment.ehdr,0);
                    return uVar6;
                }
                _printk(0x800059a,"checknv_kobj_create");
                kobject_put(_segment.ehdr);
                kset_unregister(_segment.ehdr);
            }
            uVar6 = kfree(_segment.ehdr);
        }
        return uVar6;
    }
    return 1;
}


// ===== sym.checknv_kobj_create @ 0x08001510 (size 296) =====

void sym.checknv_kobj_create(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        _printk(0x8000457);
        kobject_uevent(_segment.ehdr,1);
        kobject_put(_segment.ehdr);
    }
    iVar2 = kmem_cache_alloc_trace(_kmalloc_caches,0xdc0,0x60);
    _segment.ehdr = iVar2;
    if (iVar2 == 0) {
        _printk(0x8000524);
    }
    else {
        if ((iVar2 == 0) && (iVar2 = kset_create_and_add("checknv_errimei",0,0), iVar2 == 0)) {
            _segment.ehdr = iVar2;
            _printk(0x8000582);
        }
        else {
            _segment.ehdr = iVar2;
            *(iVar2 + 0x20) = iVar2;
            iVar1 = kobject_init_and_add
                              (iVar2,reloc.kobj_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,0x8000323,
                               "errimei");
            if (iVar1 == 0) {
                kobject_uevent(_segment.ehdr,0);
                return;
            }
            _printk(0x800059a,"checknv_kobj_create");
            kobject_put(_segment.ehdr);
            kset_unregister(_segment.ehdr);
        }
        kfree(_segment.ehdr);
    }
    return;
}


// ===== sym.kobj_release @ 0x08001638 (size 36) =====

void sym.kobj_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800165c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016a0

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
    //switch table (4 cases) at 0x8000298
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080016c4 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register(reloc.microdump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module)
    ;
    if (iVar1 != 0) {
        _printk(0x800042e,"microdump_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001728 (size 72) =====

void sym.cleanup_module(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _segment.ehdr;
    qcom_unregister_ssr_notifier(*(_segment.ehdr + 8),_segment.ehdr + 0x10);
    iVar2 = _segment.ehdr;
    *(iVar1 + 8) = 0;
    kfree(iVar2);
    return;
}

