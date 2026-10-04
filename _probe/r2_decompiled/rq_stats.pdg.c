// decompiled from rq_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x080012f8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0xec78b8726b9c1e8) {
        if (arg1 == -0x550b9e52359ac614) {
            uVar2 = 0x8001110;
        }
        else {
            if (arg1 != -0xef4825473ba2583) goto code_r0x080012b8;
            uVar2 = 0x80010f0;
        }
    }
    else if (arg1 == -0xec78b8726b9c1e8) {
        uVar2 = 0x80010f8;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001100;
    }
    else {
        if (arg1 != 0x1b6c344e75cfc4ea) goto code_r0x080012b8;
        uVar2 = 0x8001108;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080012b8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800130c);
    (*pcVar1)();
}


// ===== sym.wakeup_user.315d832331d63e0a4107ab1f8140417d.cfi_jt @ 0x080010f0 (size 8) =====

void sym.wakeup_user.315d832331d63e0a4107ab1f8140417d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.rq_info <= _sysfs_notify - *0x8000068) {
        *0x8000068 = _sysfs_notify;
        queue_work_on(0x20,_segment.ehdr,obj.def_timer_ms_attr);
    }
    return;
}


// ===== sym.show_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt @ 0x080010f8 (size 8) =====

int64_t sym.show_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    iVar1 = scnprintf(param_3,0x18,0x80000ab,(iVar2 - _segment.ehdr) / 1000000);
    return iVar1;
}


// ===== sym.init_module.cfi_jt @ 0x08001100 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue(0x80000a8,0xe000a,1,0x80000af);
    if (_segment.ehdr != 0) {
        _obj.def_timer_ms_attr = 0xfffffffe0;
        *0x8000090 = 0x8000090;
        _reloc.show_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt = 0x8000090;
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _reloc.store_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt =
             sym.def_work_fn.315d832331d63e0a4107ab1f8140417d.cfi_jt;
        _obj.rq_info = 5;
        *0x8000068 = 0;
        _obj.rq_attrs = obj.rq_attr_group;
        uVar3 = get_cpu_device(0);
        *0x8000080 = kobject_create_and_add("rq-stats",uVar3);
        if (*0x8000080 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = sysfs_create_group(*0x8000080,_obj.rq_attrs);
            if (iVar2 == 0) {
                kobject_uevent(*0x8000080,0);
            }
            else {
                kobject_put();
            }
        }
        tracepoint_probe_register
                  (__tracepoint_android_vh_jiffies_update,sym.wakeup_user.315d832331d63e0a4107ab1f8140417d.cfi_jt,0);
        return iVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001420);
    (*pcVar1)();
}


// ===== sym.store_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt @ 0x08001108 (size 8) =====

uchar * sym.store_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    iVar3 = kstrtouint(param_3,0,&uStack_2c);
    if (iVar3 == 0) {
        _obj.rq_info = __msecs_to_jiffies(uStack_2c);
        *0x8000070 = ktime_get();
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x800130c);
        (*pcVar2)();
    }
    return param_4;
}


// ===== sym.def_work_fn.315d832331d63e0a4107ab1f8140417d.cfi_jt @ 0x08001110 (size 8) =====

void sym.def_work_fn.315d832331d63e0a4107ab1f8140417d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_notify(_segment.ehdr,0,"def_timer_ms");
    return;
}


// ===== sym.def_work_fn @ 0x08001118 (size 56) =====

void sym.def_work_fn(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_notify(_segment.ehdr,0,"def_timer_ms");
    return;
}


// ===== sym.wakeup_user @ 0x08001150 (size 96) =====

void sym.wakeup_user(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.rq_info <= _sysfs_notify - *0x8000068) {
        *0x8000068 = _sysfs_notify;
        queue_work_on(0x20,_segment.ehdr,obj.def_timer_ms_attr);
    }
    return;
}


// ===== sym.show_def_timer_ms @ 0x080011b0 (size 108) =====

int64_t sym.show_def_timer_ms(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = ktime_get();
    iVar1 = scnprintf(arg1,0x18,0x80000ab,(iVar2 - _segment.ehdr) / 1000000);
    return iVar1;
}


// ===== sym.store_def_timer_ms @ 0x0800121c (size 152) =====

uchar * sym.store_def_timer_ms(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_2c = 0;
    iVar3 = kstrtouint(arg1,0,&uStack_2c);
    if (iVar3 == 0) {
        _obj.rq_info = __msecs_to_jiffies(uStack_2c);
        *0x8000070 = ktime_get();
    }
    else {
        arg2 = -0x16;
    }
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x800130c);
        (*pcVar2)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x080012b4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012f8

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
    //switch table (4 cases) at 0x80000ea
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800130c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001314 (size 268) =====

int sym.init_module(void)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = alloc_workqueue(0x80000a8,0xe000a,1,0x80000af);
    if (_segment.ehdr != 0) {
        _obj.def_timer_ms_attr = 0xfffffffe0;
        *0x8000090 = 0x8000090;
        _reloc.show_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt = 0x8000090;
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _reloc.store_def_timer_ms.315d832331d63e0a4107ab1f8140417d.cfi_jt =
             sym.def_work_fn.315d832331d63e0a4107ab1f8140417d.cfi_jt;
        _obj.rq_info = 5;
        *0x8000068 = 0;
        _obj.rq_attrs = obj.rq_attr_group;
        uVar3 = get_cpu_device(0);
        *0x8000080 = kobject_create_and_add("rq-stats",uVar3);
        if (*0x8000080 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = sysfs_create_group(*0x8000080,_obj.rq_attrs);
            if (iVar2 == 0) {
                kobject_uevent(*0x8000080,0);
            }
            else {
                kobject_put();
            }
        }
        tracepoint_probe_register
                  (__tracepoint_android_vh_jiffies_update,sym.wakeup_user.315d832331d63e0a4107ab1f8140417d.cfi_jt,0);
        return iVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001420);
    (*pcVar1)();
}

