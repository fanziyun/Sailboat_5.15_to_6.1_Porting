// decompiled from xm_power by radare2+r2ghidra (pdg)

// ===== sym.reset_show @ 0x080025a4 (size 60) =====

int64_t sym.reset_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,obj.reset_write_flag);
    return iVar1;
}


// ===== sym.reset_store @ 0x080025e0 (size 156) =====

int64_t sym.reset_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = memchr(arg1,10,arg2);
    iVar1 = arg2;
    if (iVar2 != 0) {
        iVar1 = iVar2 - arg1;
    }
    if ((iVar1 == 5) && (iVar1 = strncmp(arg1,"",5), iVar1 == 0)) {
        obj.reset_write_flag = 0x1;
        _segment.ehdr = 0x14;
    }
    else {
        obj.reset_write_flag = 0x0;
    }
    return arg2;
}


// ===== sym.task_print_period_show @ 0x0800267c (size 60) =====

int64_t sym.task_print_period_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,_segment.ehdr);
    return iVar1;
}


// ===== sym.task_print_period_store @ 0x080026b8 (size 136) =====

int64_t sym.task_print_period_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar3 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar2 = kstrtoull(arg1,10,&uStack_30);
    if (iVar2 == 0) {
        _segment.ehdr = uStack_30;
    }
    else {
        arg2 = -0x16;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.wakelock_print_period_show;
    iVar2 = sprintf(puVar3,0x80002b0,_segment.ehdr);
    return iVar2;
}


// ===== sym.wakelock_print_period_show @ 0x08002740 (size 60) =====

int64_t sym.wakelock_print_period_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg1,0x80002b0,_segment.ehdr);
    return iVar1;
}


// ===== sym.wakelock_print_period_store @ 0x0800277c (size 136) =====

uchar * sym.wakelock_print_period_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    iVar3 = kstrtoull(arg1,10,&uStack_30);
    if (iVar3 == 0) {
        _segment.ehdr = uStack_30;
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
        pcVar2 = SoftwareBreakpoint(0x5502,0x800285c);
        (*pcVar2)();
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08002804 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002848

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
    //switch table (4 cases) at 0x8000100
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800285c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002864 (size 236) =====

ulong sym.init_module(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000129);
    memset(reloc.wakelock_print_period_store.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt,0,0x2000);
    _obj.attr_groups = 0xfffffffe0;
    *0x8000078 = 0x8000078;
    _obj.g = 0x8000078;
    *0x8000088 = sym.power_info_dump_func.889bbc4f56d707a8c0f78bec6d8250af.cfi_jt;
    init_timer_key(obj.reset_attr,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    __msecs_to_jiffies(_segment.ehdr * 1000);
    uVar1 = round_jiffies_relative();
    queue_delayed_work_on(0x20,_rtc_time64_to_tm,obj.attr_groups,uVar1);
    *0x8002000 = kobject_create_and_add("",0);
    if (*0x8002000 == 0) {
        uVar1 = 0xfffffff4;
    }
    else {
        uVar1 = sysfs_create_groups(*0x8002000,obj.attr_groups);
    }
    return uVar1;
}


// ===== sym.cleanup_module @ 0x08002950 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000185);
    cancel_delayed_work(obj.attr_groups);
    return;
}

