// decompiled from gh_ctrl by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 468) =====

//WARNING: Switch with 1 destination removed at 0x080017c0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x76e7814a8afd6df4) {
                if ((pcVar1 + -0x8001230 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001780;
            }
            if (arg1 != -0xec78b8726b9c1e8) goto code_r0x08001780;
            pcVar2 = sym.variant_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001168:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001780;
        }
        if (arg1 == -0x8dc801903aca538) {
            if ((pcVar1 + -0x8001210 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08001780;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001780;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08001780;
            pcVar2 = sym.debugfs_attr_write.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.no_llseek.cfi_jt;
    }
    else {
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x08001168;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001780;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001780:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017d4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_sysfs_unregister();
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080018e4)
//WARNING: Removing unreachable block (ram,0x080018c4)
//WARNING: Removing unreachable block (ram,0x080018a4)
//WARNING: Removing unreachable block (ram,0x080018d4)
//WARNING: Removing unreachable block (ram,0x08001910)
//WARNING: Removing unreachable block (ram,0x08001944)
//WARNING: Removing unreachable block (ram,0x080018f4)
//WARNING: Removing unreachable block (ram,0x08001920)
//WARNING: Removing unreachable block (ram,0x08001928)
//WARNING: Removing unreachable block (ram,0x08001930)

void sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar4 = *(iVar2 + 0x5e0);
    iVar2 = of_find_node_opts_by_path("/hypervisor",0);
    if ((iVar2 == 0) ||
       ((iVar1 = of_device_is_compatible(iVar2,"qcom,gunyah-hypervisor"), iVar1 == 0 &&
        (iVar1 = of_device_is_compatible(iVar2,"qcom,haven-hypervisor"), iVar1 == 0)))) {
        uVar3 = 0x8000422;
    }
    else {
        CallHyperVisor(0x6000);
        _segment.ehdr = 0;
        uVar3 = 0x800053c;
    }
    _printk(uVar3);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar4) {
        __stack_chk_fail(0);
        *extraout_x18 = sym.gh_sysfs_register;
        iVar1 = sysfs_create_file_ns(_debugfs_attr_read,obj.gunyah_api.0,0);
        if (iVar1 == 0) {
            sysfs_create_group(_debugfs_attr_read,obj.version_group);
        }
        return;
    }
    return;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x080011f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.variant_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f8 (size 8) =====

int64_t sym.variant_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80004a8,*0x800006f);
    return iVar1;
}


// ===== sym.type_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001200 (size 8) =====

int64_t sym.type_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"gunyah\n");
    return iVar1;
}


// ===== sym.api_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.api_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x80004a8,_segment.ehdr & 0x3fff);
    return iVar1;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08001210 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gh_dbgfs_trace_class_set_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001218 (size 8) =====

void sym.gh_dbgfs_trace_class_set_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_trace_class_clear_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001220 (size 8) =====

void sym.gh_dbgfs_trace_class_clear_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_hyp_uart_ctrl_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001228 (size 8) =====

void sym.gh_dbgfs_hyp_uart_ctrl_fops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_hyp_uart_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_hyp_uart_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_hyp_uart_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.gh_dbgfs_hyp_uart_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = obj.hyp_uart_enable;
    return 0;
}


// ===== sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001420)

void sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t extraout_x1;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar4 [16];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar3 = *(iVar3 + 0x5e0);
    *param_2 = 0;
    CallHyperVisor(0x603f);
    if (param_2 == NULL) {
    //WARNING: Could not recover jumptable at 0x080013f4. Too many branches
    //WARNING: Treating indirect jump as call
        (*(*0x80000e0 + 0x80013e8))(0,0,0,0,0,0,0,0);
        return;
    }
    *param_2 = 0;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iVar3) {
        __stack_chk_fail(0);
        *extraout_x18 = sym.gh_dbgfs_trace_class_set;
        iVar3 = sp_el0;
        CallHyperVisor(0x603f);
        uVar2 = extraout_x1;
        switch(extraout_x1 & 0xffffffff) {
        case 0:
            break;
        default:
            uVar2 = 0xffffffea;
            break;
        case 10:
            uVar2 = 0xfffffff4;
            break;
        case 0x1e:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
            uVar2 = 0xfffffff3;
            break;
        case 0x1f:
        case 0x20:
            uVar2 = 0xfffffff0;
            break;
        case 0x28:
        case 0x29:
        case 0x3c:
        case 0x3d:
            uVar2 = 0xffffffff;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == *(iVar3 + 0x5e0)) {
            return;
        }
        auVar4 = __stack_chk_fail(uVar2,0,0,0,0,0,0,0,0);
        *extraout_x18_00 = sym.gh_dbgfs_trace_class_clear_fops_open;
        simple_attr_open(auVar4._0_8_,auVar4._8_8_,
                         sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                         sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
        return;
    }
    return;
}


// ===== sym.no_llseek.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001248 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001624)
//WARNING: Removing unreachable block (ram,0x0800164c)
//WARNING: Removing unreachable block (ram,0x08001660)

void sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sp_el0;
    CallHyperVisor(0x603f);
    //WARNING: Could not recover jumptable at 0x080015f8. Too many branches
    //WARNING: Treating indirect jump as call
    (*(str.H444444444_4444444444444444444[0] + 0x80015ec))();
    return;
}


// ===== sym.gh_dbgfs_trace_class_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001250 (size 8) =====

void sym.gh_dbgfs_trace_class_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    CallHyperVisor(0x603f);
    switch(param_2 & 0xffffffff) {
    case 0:
        break;
    default:
        param_2 = 0xffffffea;
        break;
    case 10:
        param_2 = 0xfffffff4;
        break;
    case 0x1e:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
        param_2 = 0xfffffff3;
        break;
    case 0x1f:
    case 0x20:
        param_2 = 0xfffffff0;
        break;
    case 0x28:
    case 0x29:
    case 0x3c:
    case 0x3d:
        param_2 = 0xffffffff;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == *(iVar1 + 0x5e0)) {
        return;
    }
    auVar3 = __stack_chk_fail(param_2,0,0,0,0,0,0,0,0);
    *extraout_x18 = sym.gh_dbgfs_trace_class_clear_fops_open;
    simple_attr_open(auVar3._0_8_,auVar3._8_8_,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_hyp_uart_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.gh_dbgfs_hyp_uart_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        if (obj.hyp_uart_enable == 0x1) {
            obj.hyp_uart_enable = 0x0;
            _printk(0x8000482);
            CallSecureMonitor(0);
            return 0;
        }
        uVar1 = 0x80003cd;
    }
    else if (param_2 == 1) {
        if ((obj.hyp_uart_enable & 1) == 0) {
            obj.hyp_uart_enable = 0x1;
            _printk(0x80005cb);
            CallSecureMonitor(0);
            return 0;
        }
        uVar1 = 0x8000510;
    }
    else {
        uVar1 = 0x800058a;
    }
    _printk(uVar1);
    return 0;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.type_show @ 0x08001268 (size 56) =====

int64_t sym.type_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,"gunyah\n");
    return iVar1;
}


// ===== sym.api_show @ 0x080012a0 (size 68) =====

int64_t sym.api_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80004a8,_segment.ehdr & 0x3fff);
    return iVar1;
}


// ===== sym.variant_show @ 0x080012e4 (size 64) =====

int64_t sym.variant_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x80004a8,*0x800006f);
    return iVar1;
}


// ===== sym.gh_dbgfs_trace_class_set_fops_open @ 0x08001324 (size 60) =====

void sym.gh_dbgfs_trace_class_set_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_trace_class_get @ 0x08001360 (size 260) =====

//WARNING: Removing unreachable block (ram,0x08001420)

void sym.gh_dbgfs_trace_class_get(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t extraout_x1;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar4 [16];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar3 = *(iVar3 + 0x5e0);
    *arg1 = 0;
    CallHyperVisor(0x603f);
    if (arg1 == 0) {
    //switch table (62 cases) at 0x80000e0
    //WARNING: Could not recover jumptable at 0x080013f4. Too many branches
    //WARNING: Treating indirect jump as call
        (*(*0x80000e0 + 0x80013e8))(0,0,0,0,0,0,0,0);
        return;
    }
    *arg1 = 0;
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iVar3) {
        __stack_chk_fail(0);
        *extraout_x18 = sym.gh_dbgfs_trace_class_set;
        iVar3 = sp_el0;
        CallHyperVisor(0x603f);
        uVar2 = extraout_x1;
        switch(extraout_x1 & 0xffffffff) {
        case 0:
            break;
        default:
            uVar2 = 0xffffffea;
            break;
        case 10:
            uVar2 = 0xfffffff4;
            break;
        case 0x1e:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
            uVar2 = 0xfffffff3;
            break;
        case 0x1f:
        case 0x20:
            uVar2 = 0xfffffff0;
            break;
        case 0x28:
        case 0x29:
        case 0x3c:
        case 0x3d:
            uVar2 = 0xffffffff;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == *(iVar3 + 0x5e0)) {
            return;
        }
        auVar4 = __stack_chk_fail(uVar2,0,0,0,0,0,0,0,0);
        *extraout_x18_00 = sym.gh_dbgfs_trace_class_clear_fops_open;
        simple_attr_open(auVar4._0_8_,auVar4._8_8_,
                         sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                         sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
        return;
    }
    return;
}


// ===== sym.gh_dbgfs_trace_class_set @ 0x08001464 (size 228) =====

void sym.gh_dbgfs_trace_class_set(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    CallHyperVisor(0x603f);
    if (arg1 < 0x3e) {
    //switch table (62 cases) at 0x80001d8
        switch(*((arg1 & 0xffffffffU) * 4 + 0x80001d8) + 0x80014d0) {
        case 0x80014e4:
            arg1 = 0xfffffff3;
            break;
        case 0x80014f0:
            arg1 = 0xffffffff;
            break;
        case 0x80014fc:
            arg1 = 0xfffffff0;
            break;
        default:
            goto code_r0x08001508;
        case 0x8001514:
            arg1 = 0xfffffff4;
            break;
        case 0x800151c:
            break;
        }
    }
    else {
code_r0x08001508:
        arg1 = 0xffffffea;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == *(iVar1 + 0x5e0)) {
        return;
    }
    auVar3 = __stack_chk_fail(arg1,0,0,0,0,0,0,0,0);
    *extraout_x18 = sym.gh_dbgfs_trace_class_clear_fops_open;
    simple_attr_open(auVar3._0_8_,auVar3._8_8_,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_trace_class_clear_fops_open @ 0x08001548 (size 60) =====

void sym.gh_dbgfs_trace_class_clear_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_trace_class_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_trace_class_clear.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_trace_class_clear @ 0x08001584 (size 224) =====

//WARNING: Removing unreachable block (ram,0x08001624)
//WARNING: Removing unreachable block (ram,0x0800164c)
//WARNING: Removing unreachable block (ram,0x08001660)

void sym.gh_dbgfs_trace_class_clear(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sp_el0;
    CallHyperVisor(0x603f);
    //switch table (62 cases) at 0x80002d0
    //WARNING: Could not recover jumptable at 0x080015f8. Too many branches
    //WARNING: Treating indirect jump as call
    (*(str.H444444444_4444444444444444444[0] + 0x80015ec))();
    return;
}


// ===== sym.gh_dbgfs_hyp_uart_ctrl_fops_open @ 0x08001664 (size 60) =====

void sym.gh_dbgfs_hyp_uart_ctrl_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.gh_dbgfs_hyp_uart_get.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                     sym.gh_dbgfs_hyp_uart_set.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,"0x%llx\n");
    return;
}


// ===== sym.gh_dbgfs_hyp_uart_get @ 0x080016a0 (size 28) =====

ulong sym.gh_dbgfs_hyp_uart_get(int64_t arg1,int64_t arg2)

{
    *arg2 = obj.hyp_uart_enable;
    return 0;
}


// ===== sym.gh_dbgfs_hyp_uart_set @ 0x080016bc (size 184) =====

ulong sym.gh_dbgfs_hyp_uart_set(ulong noname_0,uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        if (obj.hyp_uart_enable == 0x1) {
            obj.hyp_uart_enable = 0x0;
            _printk(0x8000482);
            CallSecureMonitor(0);
            return 0;
        }
        uVar1 = 0x80003cd;
    }
    else if (arg1 == 1) {
        if ((obj.hyp_uart_enable & 1) == 0) {
            obj.hyp_uart_enable = 0x1;
            _printk(0x80005cb);
            CallSecureMonitor(0);
            return 0;
        }
        uVar1 = 0x8000510;
    }
    else {
        uVar1 = 0x800058a;
    }
    _printk(uVar1);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800177c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080017c0

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
    //switch table (4 cases) at 0x80003c8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017d4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017e4 (size 416) =====

//WARNING: Removing unreachable block (ram,0x080018e4)
//WARNING: Removing unreachable block (ram,0x080018c4)
//WARNING: Removing unreachable block (ram,0x080018a4)
//WARNING: Removing unreachable block (ram,0x080018d4)
//WARNING: Removing unreachable block (ram,0x08001910)
//WARNING: Removing unreachable block (ram,0x08001944)
//WARNING: Removing unreachable block (ram,0x080018f4)
//WARNING: Removing unreachable block (ram,0x08001920)
//WARNING: Removing unreachable block (ram,0x08001928)
//WARNING: Removing unreachable block (ram,0x08001930)

void sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar4 = *(iVar2 + 0x5e0);
    iVar2 = of_find_node_opts_by_path("/hypervisor",0);
    if ((iVar2 == 0) ||
       ((iVar1 = of_device_is_compatible(iVar2,"qcom,gunyah-hypervisor"), iVar1 == 0 &&
        (iVar1 = of_device_is_compatible(iVar2,"qcom,haven-hypervisor"), iVar1 == 0)))) {
        uVar3 = 0x8000422;
    }
    else {
        CallHyperVisor(0x6000);
        _segment.ehdr = 0;
        uVar3 = 0x800053c;
    }
    _printk(uVar3);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iVar4) {
        __stack_chk_fail(0);
        *extraout_x18 = sym.gh_sysfs_register;
        iVar1 = sysfs_create_file_ns(_debugfs_attr_read,obj.gunyah_api.0,0);
        if (iVar1 == 0) {
            sysfs_create_group(_debugfs_attr_read,obj.version_group);
        }
        return;
    }
    return;
}


// ===== sym.gh_sysfs_register @ 0x08001984 (size 84) =====

void sym.gh_sysfs_register(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sysfs_create_file_ns(_debugfs_attr_read,obj.gunyah_api.0,0);
    if (iVar1 == 0) {
        sysfs_create_group(_debugfs_attr_read,obj.version_group);
    }
    return;
}


// ===== sym.gh_dbgfs_register @ 0x080019d8 (size 224) =====

uint64_t sym.gh_dbgfs_register(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = debugfs_create_dir("gunyah",0);
    _segment.ehdr = uVar1;
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        if ((obj.gunyah_api.1 < '\0') &&
           (((uVar1 = debugfs_create_file("trace_set",0x180,uVar1,0,obj.gh_dbgfs_trace_class_set_fops),
             0xfffffffffffff000 < uVar1 ||
             (uVar1 = debugfs_create_file("trace_clear",0x180,_segment.ehdr,0,obj.gh_dbgfs_trace_class_clear_fops),
             0xfffffffffffff000 < uVar1)) ||
            (uVar1 = debugfs_create_file("hyp_uart_ctrl",0x180,_segment.ehdr,0,reloc.__this_module),
            0xfffffffffffff000 < uVar1)))) {
            uVar1 = uVar1 & 0xffffffff;
        }
        else {
            uVar1 = 0;
        }
    }
    return uVar1 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08001abc (size 48) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gh_sysfs_unregister();
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.gh_sysfs_unregister @ 0x08001aec (size 80) =====

void sym.gh_sysfs_unregister(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sysfs_remove_file_ns(_debugfs_attr_read,obj.gunyah_api.0,0);
    sysfs_remove_group(_debugfs_attr_read,obj.version_group);
    return;
}

