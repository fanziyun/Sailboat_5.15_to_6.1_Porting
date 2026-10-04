// decompiled from qbt_handler by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 620) =====

//WARNING: Switch with 1 destination removed at 0x08004d1c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.qbt_poll.a87462e69df2f7c04b58d521675786f5.cfi_jt;
            }
            else {
                if (arg1 == -0x550b9e52359ac614) {
                    pcVar2 = sym.qbt_touch_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt;
code_r0x08002240:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08004cdc;
                }
                if (arg1 != -0x48c2be0df2ec5f4e) goto code_r0x08004cdc;
                pcVar2 = sym.qbt_touch_connect.a87462e69df2f7c04b58d521675786f5.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.qbt_gpio_isr.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                goto code_r0x0800221c;
            }
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.qbt_resume.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                goto code_r0x08002240;
            }
            if (arg1 != -0x28a32141a94bf020) goto code_r0x08004cdc;
            pcVar2 = sym.qbt_touch_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt;
        }
    }
    else if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.qbt_release.a87462e69df2f7c04b58d521675786f5.cfi_jt;
code_r0x0800221c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004cdc;
        }
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.qbt_ioctl.a87462e69df2f7c04b58d521675786f5.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004cdc;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5df81899cdb98e8a) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.qbt_read.a87462e69df2f7c04b58d521675786f5.cfi_jt;
        }
        else {
            if (arg1 != 0x573dbb8879fb8f65) goto code_r0x08004cdc;
            pcVar2 = sym.qbt_suspend.a87462e69df2f7c04b58d521675786f5.cfi_jt;
        }
    }
    else if (arg1 == 0x5df81899cdb98e8a) {
        pcVar2 = sym.qbt_touch_disconnect.a87462e69df2f7c04b58d521675786f5.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004cdc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004cdc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004d30);
    (*pcVar1)();
}


// ===== sym.qbt_touch_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x08002278 (size 8) =====

void sym.qbt_touch_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt
               (int64_t param_1,int param_2,int param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = **(param_1 + 0x20);
    if ((param_2 != 3) && (param_2 != 0)) {
        return;
    }
    uVar2 = *(iVar5 + 0x440);
    uVar4 = uVar2;
    if (9 < uVar2) {
        _printk(0x80008a1,"qbt_touch_report_event");
        return;
    }
    if (10 < uVar2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8004b78);
        (*pcVar3)();
    }
    switch(param_3) {
    case 0x2f:
        *(iVar5 + 0x440) = param_4;
        if (reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt == 0x1) {
            *(iVar5 + uVar4 * 0x10 + 700) = 1;
        }
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
        break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x37:
    case 0x38:
code_r0x08004ab4:
        if ((reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt & 1) != 0) {
            return;
        }
        goto code_r0x08004af0;
    case 0x35:
        iVar1 = -param_4;
        if (-1 < param_4) {
            iVar1 = param_4;
        }
        *(iVar5 + uVar4 * 0x10 + 0x2b0) = iVar1;
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
        break;
    case 0x36:
        iVar1 = -param_4;
        if (-1 < param_4) {
            iVar1 = param_4;
        }
        *(iVar5 + uVar4 * 0x10 + 0x2b4) = iVar1;
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
        break;
    case 0x39:
        *(iVar5 + uVar4 * 0x10 + 0x2b8) = param_4;
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
        break;
    default:
        if (param_3 != 0) goto code_r0x08004ab4;
        *(iVar5 + uVar4 * 0x10 + 700) = 1;
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x0;
code_r0x08004af0:
        if (((*(iVar5 + 0x25c) == '\0') && (*(iVar5 + 0x278) == '\0')) && (*(iVar5 + 0x250) == '\0')) {
            _printk(0x8000a23,"qbt_touch_report_event");
            memcpy(iVar5 + 0x350,iVar5 + 0x2b0,0xa0);
        }
        else {
            _printk(0x8000d86,"qbt_touch_report_event");
            pm_stay_awake(*(iVar5 + 0x120));
            queue_work_on(0x20,_of_get_named_gpio_flags,iVar5 + 0x280);
        }
    }
    return;
}


// ===== sym.qbt_touch_connect.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x08002280 (size 8) =====

int sym.qbt_touch_connect.a87462e69df2f7c04b58d521675786f5.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_strscpy,0xdc0,0x50);
    if (iVar2 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar2 + 0x18) = param_2;
        *(iVar2 + 0x20) = param_1;
        *(iVar2 + 0x10) = "qbt_touch";
        iVar1 = input_register_handle();
        if (iVar1 == 0) {
            iVar1 = input_open_device(iVar2);
            if (iVar1 == 0) {
                iVar2 = *(param_2 + 0x2b0);
                if (iVar2 == 0) {
                    iVar2 = *(param_2 + 0x240);
                }
                _printk(0x800104c,"qbt_touch_connect",iVar2);
                return 0;
            }
            _printk(0x8000b52,"qbt_touch_connect",iVar1);
            input_unregister_handle(iVar2);
        }
        else {
            _printk(0x8000731,"qbt_touch_connect",iVar1);
        }
        kfree(iVar2);
    }
    return iVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002288 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002290 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qbt_ioctl.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x08002298 (size 8) =====

void sym.qbt_ioctl.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1,uint param_2,int *param_3)

{
    uint32_t *arg1;
    int *piVar1;
    uchar uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    int *unaff_x20;
    int64_t iVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    if ((param_1 == 0) || (iVar10 = *(param_1 + 0xd8), iVar10 == 0)) {
        _printk(0x8000b14,"qbt_ioctl");
        param_3 = unaff_x20;
code_r0x08003908:
        iVar10 = -0x16;
        goto code_r0x0800390c;
    }
    if (0xfffffffffffff000 < param_3) {
        _dev_err(*(iVar10 + 0x120),"%s: invalid user space pointer %lu\n","qbt_ioctl",param_3);
        goto code_r0x08003908;
    }
    unaff_x19 = iVar10 + 0x138;
    mutex_lock(unaff_x19);
    noname_1 = _printk(0x80012a5,"qbt_ioctl",param_2);
    switch(param_2) {
    case 100:
        uStack_40 = CONCAT71(uStack_40._1_7_,*(iVar10 + 0x1ad8));
        uVar9 = sym._copy_to_user(param_3,noname_1,1);
        if (uVar9 == 0) break;
        uVar8 = 0x8001139;
        goto code_r0x08003d8c;
    case 0x65:
        uStack_40 = 0;
        iVar7 = sym._copy_from_user(&uStack_40,param_3,8);
        if (iVar7 == 0) {
            input_event(*(iVar10 + 0x118),1,uStack_40 & 0xffffffff,uStack_40._4_4_);
            input_event(*(iVar10 + 0x118),0,0,0);
            param_3 = NULL;
            goto code_r0x08003b9c;
        }
        goto code_r0x08003d70;
    case 0x66:
        if (*(iVar10 + 0x1d0) == '\0') {
            enable_irq(*(iVar10 + 0x1cc));
            uVar9 = 0x80012c0;
            *(iVar10 + 0x1d0) = 1;
code_r0x08003b10:
            _printk(uVar9,"qbt_ioctl","qbt_ioctl");
            param_3 = NULL;
            goto code_r0x08003b9c;
        }
        break;
    case 0x67:
        if (*(iVar10 + 0x1d0) != '\0') {
            disable_irq(*(iVar10 + 0x1cc));
            *(iVar10 + 0x1d0) = 0;
            uVar9 = 0x8001231;
            goto code_r0x08003b10;
        }
        break;
    case 0x68:
        if ((*(iVar10 + 0x1ad8) != '\0') && (*(iVar10 + 0x250) == '\0')) {
            enable_irq(*(iVar10 + 0x210));
            uVar9 = 0x800135e;
            *(iVar10 + 0x250) = 1;
            goto code_r0x08003b10;
        }
        break;
    case 0x69:
        if ((*(iVar10 + 0x1ad8) != '\0') && (*(iVar10 + 0x250) != '\0')) {
            disable_irq(*(iVar10 + 0x210));
            *(iVar10 + 0x250) = 0;
            uVar9 = 0x8000e17;
            goto code_r0x08003b10;
        }
        break;
    case 0x6a:
        param_3 = 0xffffffea00000000;
        _printk(0x8000b33,"qbt_ioctl");
        goto code_r0x08003b9c;
    case 0x6b:
        param_3 = iVar10 + 0x2ee8;
        if (*param_3 != 0) goto code_r0x08003db8;
        _printk(0x80009ba,"qbt_ioctl");
        pm_stay_awake(*(iVar10 + 0x120));
        goto code_r0x08003db8;
    case 0x6c:
        piVar1 = iVar10 + 0x2ee8;
        if (*piVar1 != 0) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                _printk(0x80006af,"qbt_ioctl");
                pm_relax(*(iVar10 + 0x120));
                param_3 = NULL;
                goto code_r0x08003b9c;
            }
        }
        break;
    case 0x6d:
        uStack_40 = CONCAT44(uStack_40._4_4_,3);
        uVar9 = sym._copy_to_user(param_3,noname_1,4);
        if (uVar9 != 0) {
            uVar8 = 0x80006cd;
            goto code_r0x08003d8c;
        }
        break;
    case 0x6e:
    case 0x70:
        arg1 = iVar10 + 600;
        iVar7 = sym._copy_from_user(arg1,param_3,4);
        if (iVar7 == 0) {
            if ((*arg1 & 0xfffffffe) != 2) {
                param_3 = 0xffffffea00000000;
                _printk(0x80012de,"qbt_ioctl");
                goto code_r0x08003b9c;
            }
            if (*arg1 == 2) {
                iVar7 = sym._copy_from_user(arg1,param_3,0x23);
                if (iVar7 == 0) {
                    uVar2 = *(iVar10 + 0x25c);
                    *(iVar10 + 0x278) = uVar2;
code_r0x08003cf0:
                    _printk(0x8000ca6,"qbt_ioctl",uVar2);
                    _printk(0x8001405,"qbt_ioctl",*(iVar10 + 0x260),*(iVar10 + 0x268),*(iVar10 + 0x264),
                            *(iVar10 + 0x26c));
                    _printk(0x80009d8,"qbt_ioctl",*(iVar10 + 0x25d));
                    _printk(0x8001300,"qbt_ioctl",*(iVar10 + 0x270),*(iVar10 + 0x274));
                    _printk(0x80010ac,"qbt_ioctl",*(iVar10 + 0x278));
                    param_3 = NULL;
                    goto code_r0x08003b9c;
                }
            }
            else {
                iVar7 = sym._copy_from_user(arg1,param_3,0x24);
                if (iVar7 == 0) {
                    uVar2 = *(iVar10 + 0x25c);
                    goto code_r0x08003cf0;
                }
            }
        }
        goto code_r0x08003d70;
    case 0x6f:
        uStack_40 = uStack_40._4_4_ << 0x20;
        iVar7 = sym._copy_from_user(&uStack_40,param_3,4);
        if (iVar7 == 0) {
            _printk(0x8000f10,"qbt_ioctl",uStack_40 & 0xffffffff);
            uVar6 = uStack_40;
            if (*(iVar10 + 0x448) < 0x200) {
                uVar9 = gpio_to_desc();
                gpiod_set_raw_value(uVar9,uVar6 & 0xffffffff);
                param_3 = NULL;
            }
            else {
                _printk(0x80014a5,"qbt_ioctl");
                param_3 = NULL;
            }
            goto code_r0x08003b9c;
        }
code_r0x08003d70:
        uVar8 = 0x8001250;
        uVar9 = 0xfffffff2;
code_r0x08003d8c:
        param_3 = 0xfffffff200000000;
        _printk(uVar8,"qbt_ioctl",uVar9);
        goto code_r0x08003b9c;
    default:
        _printk(0x8001436,"qbt_ioctl",param_2);
        param_3 = 0xfffffdfd00000000;
        goto code_r0x08003b9c;
    }
    param_3 = NULL;
code_r0x08003b9c:
    while( true ) {
        mutex_unlock(unaff_x19);
        iVar10 = param_3 >> 0x20;
code_r0x0800390c:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(iVar10);
code_r0x08003db8:
        Hint_Prefetch(param_3,2,0,1);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(param_3,0x10);
            if (bVar5) {
                *param_3 = *param_3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        param_3 = NULL;
    }
    return;
}


// ===== sym.qbt_suspend.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022a0 (size 8) =====

ulong sym.qbt_suspend.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa8);
    iVar1 = mutex_trylock(iVar3 + 0x138);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff0;
    }
    else {
        if (*(iVar3 + 0x1ad8) != '\0') {
            irq_set_irq_wake(*(iVar3 + 0x210),1);
        }
        irq_set_irq_wake(*(iVar3 + 0x1cc),1);
        mutex_unlock(iVar3 + 0x138);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.qbt_release.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022a8 (size 8) =====

ulong sym.qbt_release.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_2 == 0) || (param_1 == 0)) || (iVar7 = *(param_2 + 0xd8), iVar7 == 0)) {
        uVar6 = 0x8000b14;
code_r0x08004060:
        _printk(uVar6,"qbt_release");
        uVar6 = 0xffffffea;
    }
    else {
        uVar3 = *(param_1 + 0x4c) & 0xfffff;
        piVar1 = iVar7 + 0x130;
        _printk(0x80015a1,"qbt_release",uVar3,*(iVar7 + 0x130));
        if (uVar3 == 1) {
            piVar2 = iVar7 + 0x134;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            if (uVar3 != 0) {
                uVar6 = 0x8000a67;
                goto code_r0x08004060;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (*(iVar7 + 0x2ee8) != 0) {
            _printk(0x80006af,"qbt_release");
            pm_relax(*(iVar7 + 0x120));
            *(iVar7 + 0x2ee8) = 0;
        }
        _printk(0x80015ce,"qbt_release",*piVar1);
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.qbt_open.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022b0 (size 8) =====

ulong sym.qbt_open.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong *in_x18;
    ulong uVar6;
    int64_t iVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == 0)) || (iVar7 = *(param_1 + 0x2b0), iVar7 == 0)) {
        uVar6 = 0x8000b14;
code_r0x08003e58:
        _printk(uVar6,"qbt_open");
        uVar6 = 0xffffffea;
    }
    else {
        uVar2 = *(param_1 + 0x4c) & 0xfffff;
        if (uVar2 == 0) {
            piVar8 = iVar7 + 0x128;
            *(param_2 + 0xd8) = iVar7 + -8;
            _printk(0x80015a1,"qbt_open",0,*(iVar7 + 0x128));
            Hint_Prefetch(piVar8,2,0,1);
            do {
                iVar3 = *piVar8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar8,0x10);
                if (bVar5) {
                    *piVar8 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                uVar6 = 0;
            }
            else {
                Hint_Prefetch(piVar8,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar5) {
                        *piVar8 = *piVar8 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                uVar6 = 0xfffffff0;
            }
        }
        else {
            if (uVar2 != 1) {
                uVar6 = 0x8000a67;
                goto code_r0x08003e58;
            }
            *(param_2 + 0xd8) = iVar7 + -0x90;
            piVar8 = iVar7 + 0xa0;
            _printk(0x80015a1,"qbt_open",1,*piVar8);
            piVar1 = iVar7 + 0xa4;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                uVar6 = 0;
            }
            else {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                uVar6 = 0xfffffff0;
            }
        }
        _printk(0x8000cf8,"qbt_open",uVar6,*piVar8);
    }
    return uVar6;
}


// ===== sym.qbt_read.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022b8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003448)

uint64_t sym.qbt_read.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *puVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint uVar20;
    int64_t iVar21;
    uint32_t *puVar22;
    uint32_t *puVar23;
    uint64_t uVar24;
    code *pcVar25;
    int64_t iVar26;
    int64_t iVar27;
    ulong *puVar28;
    ulong unaff_x30;
    uchar auVar29 [16];
    int64_t iStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    uStack_70 = 0;
    _printk(0x8000a87,"qbt_read",param_3,0xffffffff);
    if ((param_1 == 0) || (iVar27 = *(param_1 + 0xd8), iVar27 == 0)) {
        uVar10 = 0x8000b14;
code_r0x08003534:
        _printk(uVar10,"qbt_read");
        uVar11 = 0xffffffffffffffea;
    }
    else {
        uVar13 = *(*(*(param_1 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        memset(iVar27 + 0x1ae0,0,0x1408);
        if (uVar13 == 0) {
            if (param_3 >> 3 < 0x281) {
code_r0x080034e4:
                uVar10 = 0x8001207;
                goto code_r0x08003534;
            }
            iVar17 = 0x47c;
            iVar21 = 0x478;
            iVar14 = 0x168;
            iVar26 = 0x1aa8;
        }
        else {
            if (uVar13 != 1) {
                uVar10 = 0x8000a67;
                goto code_r0x08003534;
            }
            if (param_3 < 4) goto code_r0x080034e4;
            iVar17 = 0x1894;
            iVar21 = 0x1890;
            iVar14 = 0x198;
            iVar26 = 0x1ac0;
        }
        mutex_lock(iVar27 + iVar14);
        iVar12 = *(iVar27 + iVar21);
        iVar16 = *(iVar27 + iVar17);
        mutex_unlock(iVar27 + iVar14);
        iStack_a8 = iVar27 + 0x198;
        puVar3 = iVar27 + 0x1890;
        puVar4 = iVar27 + 0x1894;
        iVar14 = iVar27 + 0x168;
        puVar1 = iVar27 + 0x478;
        puVar2 = iVar27 + 0x47c;
        if (iVar12 == iVar16) {
code_r0x08003338:
            do {
                if ((*(param_1 + 0x41) >> 3 & 1) != 0) {
                    _printk(0x8001176,"qbt_read");
                    uVar11 = 0xfffffffffffffff5;
                    goto code_r0x0800371c;
                }
                _printk(0x8000c7c,"qbt_read");
                puVar18 = puVar1;
                iVar21 = iVar14;
                puVar22 = puVar2;
                puVar19 = puVar2;
                puVar23 = puVar1;
                iVar17 = iVar14;
                if ((uVar13 == 0) || (puVar18 = puVar3, iVar21 = iStack_a8, puVar22 = puVar4, uVar13 == 1)) {
                    mutex_lock(iVar21);
                    uVar7 = *puVar18;
                    uVar8 = *puVar22;
                    mutex_unlock(iVar21);
                    if (uVar7 - uVar8 < 1) goto code_r0x0800339c;
                }
                else {
code_r0x0800339c:
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    init_wait_entry(&uStack_98,0);
                    while( true ) {
                        iVar9 = prepare_to_wait_event(iVar27 + iVar26,&uStack_98,1);
                        puVar18 = puVar2;
                        puVar22 = puVar1;
                        iVar21 = iVar14;
                        if ((uVar13 == 0) || (puVar18 = puVar4, puVar22 = puVar3, iVar21 = iStack_a8, uVar13 == 1)) {
                            mutex_lock(iVar21);
                            uVar7 = *puVar22;
                            uVar8 = *puVar18;
                            mutex_unlock(iVar21);
                            if (0 < uVar7 - uVar8) {
                                finish_wait(iVar27 + iVar26,&uStack_98);
                                if (uVar13 == 0) goto code_r0x08003464;
                                goto code_r0x08003424;
                            }
                        }
                        if (iVar9 != 0) break;
                        schedule();
                    }
                    if (iVar9 != 0) {
                        uVar11 = 0xfffffffffffffe00;
                        goto code_r0x0800371c;
                    }
                }
                if (uVar13 != 0) {
code_r0x08003424:
                    puVar19 = puVar4;
                    puVar23 = puVar3;
                    iVar17 = iStack_a8;
                    if (uVar13 != 1) goto code_r0x08003338;
                }
code_r0x08003464:
                mutex_lock(iVar17);
                uVar7 = *puVar23;
                uVar8 = *puVar19;
                mutex_unlock(iVar17);
            } while (uVar7 == uVar8);
        }
        if (uVar13 == 0) {
            mutex_lock(iVar14);
            iVar12 = *(iVar27 + 0x478) - *(iVar27 + 0x47c);
            *(iVar27 + 0x1ae0) = iVar12;
            if (iVar12 == 0) {
                uVar24 = 0;
            }
            else {
                uVar11 = 0;
                puVar28 = iVar27 + 0x1ae8;
                do {
                    if (uVar11 == 0x81) {
    //WARNING: Does not return
                        pcVar25 = SoftwareBreakpoint(0x5512,0x800377c);
                        (*pcVar25)();
                    }
                    if (*puVar1 == *puVar2) {
                        _printk(0x8000903,"qbt_read");
                        *(iVar27 + 0x1ae0) = uVar11;
                        uVar24 = uVar11;
                        break;
                    }
                    puVar15 = iVar27 + 0x490 + (*(iVar27 + 0x480) & *puVar2) * 0x28;
                    *puVar28 = *puVar15;
                    uVar5 = puVar15[4];
                    uVar10 = puVar15[1];
                    uVar6 = puVar15[2];
                    puVar28[3] = puVar15[3];
                    puVar28[4] = uVar5;
                    puVar28[1] = uVar10;
                    puVar28[2] = uVar6;
                    DataMemoryBarrier(2,2);
                    *(iVar27 + 0x47c) = *(iVar27 + 0x47c) + 1;
                    _printk(0x8000822,"qbt_read",*(puVar28 + 3),*(puVar28 + 0x1c));
                    _printk(0x8000fd8,"qbt_read",*(puVar28 + 2),*(puVar28 + 0x14),*puVar28,puVar28[1]);
                    uVar24 = *(iVar27 + 0x1ae0);
                    uVar11 = uVar11 + 1;
                    puVar28 = puVar28 + 5;
                } while (uVar11 < uVar24);
            }
            iVar27 = ktime_get();
            auVar29 = _printk(0x80013d9,"qbt_read",uVar24 & 0xffffffff,iVar27 / 1000);
            uVar11 = sym._copy_to_user(param_2,auVar29,0x1408);
            iStack_a8 = iVar14;
        }
        else {
            if (uVar13 != 1) {
                _printk(0x8000a67,"qbt_read");
                uVar11 = 0;
                goto code_r0x0800371c;
            }
            mutex_lock(iStack_a8);
            if (*puVar3 == *puVar4) {
                _printk(0x8000e84,"qbt_read");
                uVar20 = 0;
            }
            else {
                uStack_70 = *(iVar27 + (*(iVar27 + 0x1898) & *puVar4) * 4 + 0x18a8);
                DataMemoryBarrier(2,2);
                *(iVar27 + 0x1894) = *(iVar27 + 0x1894) + 1;
                uVar20 = uStack_70;
            }
            iVar27 = ktime_get();
            auVar29 = _printk(0x8000ac4,"qbt_read",uVar20,1,iVar27 / 1000);
            uVar11 = sym._copy_to_user(param_2,auVar29,4);
        }
        mutex_unlock(iStack_a8);
        if (uVar11 != 0) {
            _printk(0x8000be6,"qbt_read",uVar11);
        }
    }
code_r0x0800371c:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    auVar29 = __stack_chk_fail();
    puVar28 = auVar29._8_8_;
    iVar27 = auVar29._0_8_;
    *extraout_x18 = sym.qbt_poll;
    if ((iVar27 == 0) || (iVar14 = *(iVar27 + 0xd8), iVar14 == 0)) {
        uVar10 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar10,"qbt_poll");
        uVar11 = 0xffffffea;
    }
    else {
        uVar13 = *(*(*(iVar27 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar13 == 1) {
            if (((puVar28 != NULL) && (iVar14 + 0x1ac0 != 0)) && (pcVar25 = *puVar28, pcVar25 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar25,0x8000470);
                (*pcVar25)(iVar27,iVar14 + 0x1ac0,puVar28);
            }
            iVar12 = *(iVar14 + 0x1890);
            iVar16 = *(iVar14 + 0x1894);
        }
        else {
            if (uVar13 != 0) {
                uVar10 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((puVar28 != NULL) && (iVar14 + 0x1aa8 != 0)) && (pcVar25 = *puVar28, pcVar25 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar25,0x8000470);
                (*pcVar25)(iVar27,iVar14 + 0x1aa8,puVar28);
            }
            iVar12 = *(iVar14 + 0x478);
            iVar16 = *(iVar14 + 0x47c);
        }
        uVar13 = 0;
        if (iVar12 != iVar16) {
            uVar13 = 0x41;
        }
        uVar11 = uVar13;
    }
    return uVar11;
}


// ===== sym.qbt_touch_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022c0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003448)

uint64_t sym.qbt_touch_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt
                   (int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    char cVar15;
    ulong uVar16;
    bool bVar17;
    uint32_t uVar18;
    int64_t iVar19;
    ulong *puVar20;
    int iVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    int64_t iVar23;
    uint32_t *puVar24;
    uint uVar25;
    ulong unaff_x20;
    int64_t iVar26;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    uint32_t *puVar27;
    uint64_t uVar28;
    code *pcVar29;
    uint64_t unaff_x23;
    int64_t iVar30;
    uint64_t unaff_x24;
    int64_t iVar31;
    uint64_t unaff_x25;
    int iVar32;
    uint64_t unaff_x26;
    int64_t unaff_x27;
    ulong *puVar33;
    ulong unaff_x28;
    int64_t iVar34;
    ulong unaff_x30;
    uchar auVar35 [16];
    uchar auVar36 [16];
    int64_t iStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_a4;
    int64_t iStack_a0;
    uint64_t uStack_98;
    uchar auStack_90 [16];
    ulong uStack_80;
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar34 = sp_el0;
    iStack_68 = *(iVar34 + 0x5e0);
    iStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    auStack_90._8_8_ = 0;
    uStack_80 = 0;
    auStack_90._0_8_ = 0;
    if (param_1 == 0) {
        uVar22 = _printk(0x8000b14,"qbt_touch_work_func");
    }
    else {
        unaff_x26 = 0;
        unaff_x27 = 0;
        uVar22 = param_1 - 0x280;
        iVar34 = 0x170;
        uStack_a4 = 0;
        uStack_70 = 1;
        iStack_a0 = param_1;
        uStack_98 = uVar22;
        auStack_90 = ZEXT816(0);
        do {
            iVar30 = param_1 + unaff_x27;
            puVar1 = iVar30 + 0x30;
            uVar18 = *puVar1;
            unaff_x21 = uVar18;
            uVar6 = *(iVar30 + 0x34);
            uVar8 = *puVar1;
            uVar16 = *puVar1;
            unaff_x25 = uVar6;
            cVar15 = *(iVar30 + 0x3c);
            *(iVar30 + 0x3c) = 0;
            uVar10 = *(iVar30 + 0x38);
            unaff_x23 = uVar10;
            iVar32 = unaff_x26;
            if (cVar15 != '\0') {
                uVar5 = *(iVar30 + 0xd0);
                unaff_x22 = uVar5;
                uVar7 = *(iVar30 + 0xd4);
                unaff_x24 = uVar7;
                uVar11 = *(iVar30 + 0xd8);
                unaff_x19 = uVar11;
                *(iVar30 + 0xd0) = uVar18;
                *(iVar30 + 0xd4) = uVar6;
                *(iVar30 + 0xd8) = uVar10;
                *(iVar30 + 0xdc) = cVar15;
                *(iVar30 + 0xdd) = *(iVar30 + 0x3d);
                *(iVar30 + 0xdf) = *(iVar30 + 0x3f);
                if (uVar10 < 0) {
                    bVar17 = false;
                    unaff_x20 = 0;
                }
                else {
                    if (-1 < uVar11) {
                        if (uVar11 == uVar10) {
                            unaff_x20 = 2;
                            bVar17 = true;
                            goto code_r0x08002f84;
                        }
                        _printk(0x80011d0,"qbt_touch_work_func");
                        param_1 = iStack_a0;
                        uVar22 = uStack_98;
                    }
                    bVar17 = false;
                    unaff_x20 = 1;
                }
code_r0x08002f84:
                iVar21 = *(uVar22 + 0x260);
                uStack_74 = unaff_x20;
                if ((((uVar18 < iVar21) || (iVar12 = *(uVar22 + 0x268), iVar12 < uVar18)) ||
                    (iVar13 = *(uVar22 + 0x264), uVar6 < iVar13)) || (iVar14 = *(uVar22 + 0x26c), iVar14 < uVar6)) {
                    if (((iVar21 <= uVar5) && (uVar5 <= *(uVar22 + 0x268))) &&
                       ((*(uVar22 + 0x264) <= uVar7 && ((uVar7 <= *(uVar22 + 0x26c) && (-1 < uVar11)))))) {
                        unaff_x20 = 0;
                        goto code_r0x0800300c;
                    }
                }
                else {
                    if (((((iVar14 < uVar7 || uVar7 < iVar13) || iVar12 < uVar5) || uVar5 - iVar21 < 0) ==
                         (((uVar7 <= iVar14 && uVar7 >= iVar13) && uVar5 <= iVar12) && SBORROW4(uVar5,iVar21))) ||
                       (uVar10 < 0)) {
                        if (!bVar17) goto code_r0x08003010;
                        puVar1 = param_1 + iVar34;
                        cVar15 = *(param_1 + -0x23);
                        uVar6 = puVar1[10] + (uVar6 - uVar7);
                        uVar18 = *puVar1 + (uVar18 - uVar5);
                        uVar10 = -uVar6;
                        if (-1 < uVar6) {
                            uVar10 = uVar6;
                        }
                        puVar1[10] = uVar6;
                        *puVar1 = uVar18;
                        if (cVar15 != '\0') {
                            uVar6 = -uVar18;
                            if (-1 < uVar18) {
                                uVar6 = uVar18;
                            }
                            if ((uVar6 <= *(uVar22 + 0x270)) && (uVar10 <= *(uVar22 + 0x274))) goto code_r0x08002eec;
                        }
                        *(param_1 + iVar34) = 0;
                        puVar1[10] = 0;
                        ktime_get();
                        auVar36 = ns_to_timespec64();
                        cVar15 = *(uStack_98 + 0x25c);
                        iStack_78 = iVar32;
                        param_1 = iStack_a0;
                        uVar22 = uStack_98;
                        uStack_80 = uVar16;
                        auStack_90 = auVar36;
                    }
                    else {
                        unaff_x20 = 1;
code_r0x0800300c:
                        uStack_74 = unaff_x20;
code_r0x08003010:
                        ktime_get();
                        auVar36 = ns_to_timespec64();
                        uVar22 = uStack_98;
                        *(iStack_a0 + iVar34 + 0x5c) = unaff_x20;
                        uStack_80 = uVar8;
                        auStack_90 = auVar36;
                        if (*(iStack_a0 + 0x1cc) == 1) {
                            uStack_a4 = 1;
                            if (*(uStack_98 + 0x278) != '\0') {
                                uStack_a4 = 1;
code_r0x08003144:
                                unaff_x25 = uStack_a4 & 1;
                                param_3 = unaff_x25;
                                iStack_78 = iVar32;
                                _printk(0x8000f10,"qbt_touch_work_func");
                                if (*(uVar22 + 0x448) < 0x200) {
                                    uVar16 = gpio_to_desc();
                                    gpiod_set_raw_value(uVar16,unaff_x25);
                                }
                                else {
                                    _printk(0x80008df,"qbt_touch_work_func");
                                }
                                cVar15 = *(uStack_98 + 0x25c);
                                unaff_x19 = uVar22;
                                param_1 = iStack_a0;
                                uVar22 = uStack_98;
                                goto joined_r0x080030c4;
                            }
                        }
                        else {
                            if (((((*(uStack_98 + 0x450) == 1) || (*(uStack_98 + 0x454) == 1)) ||
                                 (*(uStack_98 + 0x458) == 1)) ||
                                ((*(uStack_98 + 0x45c) == 1 || (*(uStack_98 + 0x460) == 1)))) ||
                               ((*(uStack_98 + 0x464) == 1 ||
                                ((*(uStack_98 + 0x468) == 1 || (*(uStack_98 + 0x46c) == 1)))))) {
                                uStack_a4 = 1;
                                cVar15 = *(uStack_98 + 0x278);
                            }
                            else {
                                uStack_a4 = *(uStack_98 + 0x470) == 1 | uStack_a4;
                                cVar15 = *(uStack_98 + 0x278);
                            }
                            if (cVar15 != '\0') goto code_r0x08003144;
                        }
                        cVar15 = *(uStack_98 + 0x25c);
                        iStack_78 = iVar32;
                        param_1 = iStack_a0;
                    }
joined_r0x080030c4:
                    iStack_a0 = param_1;
                    uStack_98 = uVar22;
                    if (cVar15 != '\0') {
                        sym.qbt_fd_report_event(uVar22,auStack_90);
                        param_1 = iStack_a0;
                        uVar22 = uStack_98;
                    }
                }
            }
code_r0x08002eec:
            iVar34 = iVar34 + 4;
            unaff_x27 = unaff_x27 + 0x10;
            unaff_x26 = iVar32 + 1;
        } while (iVar34 != 0x198);
        uVar22 = pm_relax(*(uVar22 + 0x120));
        unaff_x28 = 0x198;
    }
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_68) {
        return uVar22;
    }
    auVar36 = __stack_chk_fail();
    iVar30 = auVar36._0_8_;
    *extraout_x18 = sym.qbt_read;
    pcStack_108 = sym.qbt_read;
    iVar34 = sp_el0;
    iStack_118 = *(iVar34 + 0x5e0);
    uStack_120 = 0;
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_100 = unaff_x28;
    iStack_f8 = unaff_x27;
    uStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    uStack_c8 = unaff_x21;
    uStack_c0 = unaff_x20;
    uStack_b8 = unaff_x19;
    _printk(0x8000a87,"qbt_read");
    if ((iVar30 == 0) || (iVar34 = *(iVar30 + 0xd8), iVar34 == 0)) {
        uVar16 = 0x8000b14;
code_r0x08003534:
        _printk(uVar16,"qbt_read");
        uVar22 = 0xffffffffffffffea;
    }
    else {
        uVar18 = *(*(*(iVar30 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        memset(iVar34 + 0x1ae0,0,0x1408);
        if (uVar18 == 0) {
            if (param_3 >> 3 < 0x281) {
code_r0x080034e4:
                uVar16 = 0x8001207;
                goto code_r0x08003534;
            }
            iVar23 = 0x47c;
            iVar26 = 0x478;
            iVar19 = 0x168;
            iVar31 = 0x1aa8;
        }
        else {
            if (uVar18 != 1) {
                uVar16 = 0x8000a67;
                goto code_r0x08003534;
            }
            if (param_3 < 4) goto code_r0x080034e4;
            iVar23 = 0x1894;
            iVar26 = 0x1890;
            iVar19 = 0x198;
            iVar31 = 0x1ac0;
        }
        mutex_lock(iVar34 + iVar19);
        iVar32 = *(iVar34 + iVar26);
        iVar21 = *(iVar34 + iVar23);
        mutex_unlock(iVar34 + iVar19);
        iStack_158 = iVar34 + 0x198;
        puVar3 = iVar34 + 0x1890;
        puVar4 = iVar34 + 0x1894;
        iVar19 = iVar34 + 0x168;
        puVar1 = iVar34 + 0x478;
        puVar2 = iVar34 + 0x47c;
        if (iVar32 == iVar21) {
            do {
                do {
                    if ((*(iVar30 + 0x41) >> 3 & 1) != 0) {
                        _printk(0x8001176,"qbt_read");
                        uVar22 = 0xfffffffffffffff5;
                        goto code_r0x0800371c;
                    }
                    _printk(0x8000c7c,"qbt_read");
                    puVar24 = puVar1;
                    iVar23 = iVar19;
                    puVar27 = puVar2;
                    if ((uVar18 == 0) || (puVar24 = puVar3, iVar23 = iStack_158, puVar27 = puVar4, uVar18 == 1)) {
                        mutex_lock(iVar23);
                        uVar6 = *puVar24;
                        uVar10 = *puVar27;
                        mutex_unlock(iVar23);
                        if (uVar6 - uVar10 < 1) goto code_r0x0800339c;
                    }
                    else {
code_r0x0800339c:
                        uStack_130 = 0;
                        uStack_128 = 0;
                        uStack_140 = 0;
                        uStack_138 = 0;
                        uStack_148 = 0;
                        init_wait_entry(&uStack_148,0);
                        while( true ) {
                            iVar26 = prepare_to_wait_event(iVar34 + iVar31,&uStack_148,1);
                            puVar24 = puVar2;
                            puVar27 = puVar1;
                            iVar23 = iVar19;
                            if ((uVar18 == 0) ||
                               (puVar24 = puVar4, puVar27 = puVar3, iVar23 = iStack_158, uVar18 == 1)) {
                                mutex_lock(iVar23);
                                uVar6 = *puVar27;
                                uVar10 = *puVar24;
                                mutex_unlock(iVar23);
                                if (0 < uVar6 - uVar10) {
                                    finish_wait(iVar34 + iVar31,&uStack_148);
                                    goto joined_r0x08003458;
                                }
                            }
                            if (iVar26 != 0) break;
                            schedule();
                        }
                        if (iVar26 != 0) {
                            uVar22 = 0xfffffffffffffe00;
                            goto code_r0x0800371c;
                        }
                    }
joined_r0x08003458:
                    puVar24 = puVar2;
                    puVar27 = puVar1;
                    iVar23 = iVar19;
                } while ((uVar18 != 0) && (puVar24 = puVar4, puVar27 = puVar3, iVar23 = iStack_158, uVar18 != 1));
                mutex_lock(iVar23);
                uVar6 = *puVar27;
                uVar10 = *puVar24;
                mutex_unlock(iVar23);
            } while (uVar6 == uVar10);
        }
        if (uVar18 == 0) {
            mutex_lock(iVar19);
            iVar32 = *(iVar34 + 0x478) - *(iVar34 + 0x47c);
            *(iVar34 + 0x1ae0) = iVar32;
            if (iVar32 == 0) {
                uVar28 = 0;
            }
            else {
                uVar22 = 0;
                puVar33 = iVar34 + 0x1ae8;
                do {
                    if (uVar22 == 0x81) {
    //WARNING: Does not return
                        pcVar29 = SoftwareBreakpoint(0x5512,0x800377c);
                        (*pcVar29)();
                    }
                    if (*puVar1 == *puVar2) {
                        _printk(0x8000903,"qbt_read");
                        *(iVar34 + 0x1ae0) = uVar22;
                        uVar28 = uVar22;
                        break;
                    }
                    puVar20 = iVar34 + 0x490 + (*(iVar34 + 0x480) & *puVar2) * 0x28;
                    *puVar33 = *puVar20;
                    uVar8 = puVar20[4];
                    uVar16 = puVar20[1];
                    uVar9 = puVar20[2];
                    puVar33[3] = puVar20[3];
                    puVar33[4] = uVar8;
                    puVar33[1] = uVar16;
                    puVar33[2] = uVar9;
                    DataMemoryBarrier(2,2);
                    *(iVar34 + 0x47c) = *(iVar34 + 0x47c) + 1;
                    _printk(0x8000822,"qbt_read",*(puVar33 + 3),*(puVar33 + 0x1c));
                    _printk(0x8000fd8,"qbt_read",*(puVar33 + 2),*(puVar33 + 0x14),*puVar33,puVar33[1]);
                    uVar28 = *(iVar34 + 0x1ae0);
                    uVar22 = uVar22 + 1;
                    puVar33 = puVar33 + 5;
                } while (uVar22 < uVar28);
            }
            iVar34 = ktime_get();
            auVar35 = _printk(0x80013d9,"qbt_read",uVar28 & 0xffffffff,iVar34 / 1000);
            uVar22 = sym._copy_to_user(auVar36._8_8_,auVar35,0x1408);
            iStack_158 = iVar19;
        }
        else {
            if (uVar18 != 1) {
                _printk(0x8000a67,"qbt_read");
                uVar22 = 0;
                goto code_r0x0800371c;
            }
            mutex_lock(iStack_158);
            if (*puVar3 == *puVar4) {
                _printk(0x8000e84,"qbt_read");
                uVar25 = 0;
            }
            else {
                uStack_120 = *(iVar34 + (*(iVar34 + 0x1898) & *puVar4) * 4 + 0x18a8);
                DataMemoryBarrier(2,2);
                *(iVar34 + 0x1894) = *(iVar34 + 0x1894) + 1;
                uVar25 = uStack_120;
            }
            iVar34 = ktime_get();
            auVar35 = _printk(0x8000ac4,"qbt_read",uVar25,1,iVar34 / 1000);
            uVar22 = sym._copy_to_user(auVar36._8_8_,auVar35,4);
        }
        mutex_unlock(iStack_158);
        if (uVar22 != 0) {
            _printk(0x8000be6,"qbt_read",uVar22);
        }
    }
code_r0x0800371c:
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_118) {
        return uVar22;
    }
    auVar36 = __stack_chk_fail();
    puVar33 = auVar36._8_8_;
    iVar34 = auVar36._0_8_;
    *extraout_x18_00 = sym.qbt_poll;
    if ((iVar34 == 0) || (iVar30 = *(iVar34 + 0xd8), iVar30 == 0)) {
        uVar16 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar16,"qbt_poll");
        uVar22 = 0xffffffea;
    }
    else {
        uVar18 = *(*(*(iVar34 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar18 == 1) {
            if (((puVar33 != NULL) && (iVar30 + 0x1ac0 != 0)) && (pcVar29 = *puVar33, pcVar29 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar29,0x8000470);
                (*pcVar29)(iVar34,iVar30 + 0x1ac0,puVar33);
            }
            iVar32 = *(iVar30 + 0x1890);
            iVar21 = *(iVar30 + 0x1894);
        }
        else {
            if (uVar18 != 0) {
                uVar16 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((puVar33 != NULL) && (iVar30 + 0x1aa8 != 0)) && (pcVar29 = *puVar33, pcVar29 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar29,0x8000470);
                (*pcVar29)(iVar34,iVar30 + 0x1aa8,puVar33);
            }
            iVar32 = *(iVar30 + 0x478);
            iVar21 = *(iVar30 + 0x47c);
        }
        uVar18 = 0;
        if (iVar32 != iVar21) {
            uVar18 = 0x41;
        }
        uVar22 = uVar18;
    }
    return uVar22;
}


// ===== sym.qbt_irq_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022c8 (size 8) =====

void sym.qbt_irq_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x8000b14,"qbt_irq_report_event");
    }
    else {
        mutex_lock(param_1 + -0x40);
        if (*(param_1 + 0x16c0) < *(param_1 + 0x16b8) - *(param_1 + 0x16bc)) {
            _printk(0x8000763,"qbt_irq_report_event",3);
        }
        else {
            *(param_1 + (*(param_1 + 0x16c0) & *(param_1 + 0x16b8)) * 4 + 0x16d0) = 3;
            DataMemoryBarrier(2,2);
            *(param_1 + 0x16b8) = *(param_1 + 0x16b8) + 1;
            iVar1 = ktime_get();
            _printk(0x8000793,"qbt_irq_report_event",3,iVar1 / 1000);
        }
        mutex_unlock(param_1 + -0x40);
        __wake_up(param_1 + 0x18e8,1,1,0);
        pm_relax(*(param_1 + -0xb8));
    }
    return;
}


// ===== sym.qbt_gpio_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022d0 (size 8) =====

ulong sym.qbt_gpio_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (param_1 == 0) {
        uVar4 = _printk(0x8000b14,"qbt_gpio_work_func");
    }
    else {
        gpio_to_desc(*(param_1 + -0x10));
        iVar3 = gpiod_get_raw_value();
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        if (*(param_1 + 0x18c0) == '\0') {
            _printk(0x8001531,"qbt_gpio_report_event");
        }
        else {
            uVar1 = *(param_1 + -0xc) ^ iVar3 != 0;
            if ((*(param_1 + 0x34) == 0) || (*(param_1 + 0x30) != uVar1)) {
                uVar2 = *(param_1 + -0x10);
                iVar5 = ktime_get();
                _printk(0x8000c09,"qbt_gpio_report_event",uVar2,uVar1,iVar5 / 1000);
                *(param_1 + 0x30) = uVar1;
                uStack_48 = CONCAT44(uVar1,uStack_48);
                uStack_40 = uStack_40 & 0xffffffffffffff00;
                *(param_1 + 0x34) = 1;
                ktime_get();
                auStack_60 = ns_to_timespec64();
                sym.qbt_fd_report_event(param_1 + -0x218,auStack_60);
            }
        }
        uVar4 = pm_relax(*(param_1 + -0xf8));
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._8_8_;
    *extraout_x18 = sym.qbt_gpio_isr;
    if (iVar5 == 0) {
        _printk(0x8000b14,"qbt_gpio_isr");
    }
    else if (*(iVar5 + 0x210) == auVar7._0_4_) {
        iVar6 = ktime_get();
        _printk(0x8001561,"qbt_gpio_isr",iVar6 / 1000);
        pm_stay_awake(*(iVar5 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,iVar5 + 0x218);
    }
    else {
        _printk(0x8000d4a,"qbt_gpio_isr",auVar7._0_8_ & 0xffffffff);
    }
    return 1;
}


// ===== sym.qbt_gpio_isr.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022d8 (size 8) =====

ulong sym.qbt_gpio_isr.a87462e69df2f7c04b58d521675786f5.cfi_jt(int param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x8000b14,"qbt_gpio_isr");
    }
    else if (*(param_2 + 0x210) == param_1) {
        iVar1 = ktime_get();
        _printk(0x8001561,"qbt_gpio_isr",iVar1 / 1000);
        pm_stay_awake(*(param_2 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,param_2 + 0x218);
    }
    else {
        _printk(0x8000d4a,"qbt_gpio_isr",param_1);
    }
    return 1;
}


// ===== sym.qbt_ipc_irq_handler.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022e0 (size 8) =====

ulong sym.qbt_ipc_irq_handler.a87462e69df2f7c04b58d521675786f5.cfi_jt(int param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x8000b14,"qbt_ipc_irq_handler");
    }
    else if (*(param_2 + 0x1cc) == param_1) {
        iVar1 = ktime_get();
        _printk(0x80015f0,"qbt_ipc_irq_handler",iVar1 / 1000);
        pm_stay_awake(*(param_2 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,param_2 + 0x1d8);
    }
    else {
        _printk(0x8000d4a,"qbt_ipc_irq_handler",param_1);
    }
    return 1;
}


// ===== sym.qbt_touch_disconnect.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022e8 (size 8) =====

void sym.qbt_touch_disconnect.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x18) + 0x2b0);
    if (iVar1 == 0) {
        iVar1 = *(*(param_1 + 0x18) + 0x240);
    }
    _printk(0x80007cb,"qbt_touch_disconnect",iVar1);
    input_close_device(param_1);
    input_unregister_handle(param_1);
    kfree(param_1);
    return;
}


// ===== sym.qbt_resume.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022f0 (size 8) =====

ulong sym.qbt_resume.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 0x1ad8) != '\0') {
        irq_set_irq_wake(*(iVar1 + 0x210),0);
    }
    irq_set_irq_wake(*(iVar1 + 0x1cc),0);
    return 0;
}


// ===== sym.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x080022f8 (size 8) =====

uint64_t sym.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    uVar1 = param_1 + 0x10;
    iStack_58 = *(iVar11 + 0x5e0);
    _printk(0x8000cd7,"qbt_probe");
    puVar8 = devm_kmalloc(uVar1,0x2ef0,0xdc0);
    if (puVar8 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x08002374;
    }
    puVar8[0x24] = uVar1;
    *(param_1 + 0xa8) = puVar8;
    uStack_5c = 0;
    uVar4 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,intr2-gpio",0,0);
    *(puVar8 + 0x89) = uVar4;
    if (0x1ff < uVar4) {
        _printk(0x8001335,"qbt_read_device_tree");
    }
    uVar4 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,ipc-gpio",0,0);
    *(puVar8 + 0x39) = uVar4;
    if (uVar4 < 0) {
        uVar13 = uVar4;
        _printk(0x8000fb0,"qbt_read_device_tree",uVar13);
    }
    else {
        iVar5 = of_get_named_gpio_flags(*(param_1 + 0x300),"qcom,finger-detect-gpio",0,&uStack_5c);
        if (iVar5 < 0) {
            _printk(0x80007fe,"qbt_read_device_tree");
            *(puVar8 + 0x35b) = 0;
        }
        else {
            *(puVar8 + 0x41) = iVar5;
            *(puVar8 + 0x35b) = 1;
            *(puVar8 + 0x20c) = uStack_5c & 1;
            _printk(0x8000668,"qbt_read_device_tree",1);
        }
        *(puVar8 + 0x26) = 1;
        *(puVar8 + 0x134) = 1;
        *(puVar8 + 0x5dd) = 0;
        __mutex_init(puVar8 + 0x27,"&drvdata->mutex",reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
        __mutex_init(puVar8 + 0x2d,"&drvdata->fd_events_mutex",reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt
                    );
        __mutex_init(puVar8 + 0x33,"&drvdata->ipc_events_mutex",
                     reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
        uVar13 = puVar8[0x24];
        uStack_5c = 0;
        _printk(0x8000cd7,"qbt_dev_register");
        uVar13 = devm_kmalloc(uVar13,4,0xdc0);
        puVar8[0x25] = uVar13;
        if (uVar13 == 0) {
            uVar13 = 0xfffffff4;
        }
        else {
            strscpy(uVar13,0x800159d,4);
            uVar4 = alloc_chrdev_region(&uStack_5c,0,2,puVar8[0x25]);
            if (uVar4 == 0) {
                puVar2 = puVar8 + 1;
                uVar4 = uStack_5c & 0xfff00000;
                cdev_init(puVar2,obj.qbt_fops);
                puVar8[0xd] = obj.__this_module;
                uVar6 = cdev_add(puVar2,uVar4,1);
                if (uVar6 != 0) {
                    uVar10 = 0x8001081;
code_r0x08002650:
                    uVar13 = uVar6;
                    _printk(uVar10,"qbt_dev_register",uVar13);
code_r0x080026f8:
                    unregister_chrdev_region(puVar8[0x11],1);
                    unregister_chrdev_region(puVar8[0x22],1);
                    goto code_r0x08002710;
                }
                puVar3 = puVar8 + 0x12;
                cdev_init(puVar3,obj.qbt_fops);
                puVar8[0x1e] = obj.__this_module;
                uVar6 = cdev_add(puVar3,uVar4 | 1,1);
                if (uVar6 != 0) {
                    uVar10 = 0x80013b3;
                    goto code_r0x08002650;
                }
                uVar13 = __class_create(obj.__this_module,puVar8[0x25],
                                        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                *puVar8 = uVar13;
                if (0xfffffffffffff000 < uVar13) {
                    _printk(0x8001117,"qbt_dev_register",uVar13 & 0xffffffff);
code_r0x080026e8:
                    cdev_del(puVar2);
                    cdev_del(puVar3);
                    goto code_r0x080026f8;
                }
                uVar13 = device_create(uVar13,0,puVar8[0x11],puVar8,"%s_fd",puVar8[0x25]);
                if (0xfffffffffffff000 < uVar13) {
                    uVar10 = 0x8000c56;
code_r0x080026d0:
                    _printk(uVar10,"qbt_dev_register",uVar13 & 0xffffffff);
                    class_destroy(*puVar8);
                    goto code_r0x080026e8;
                }
                uVar13 = device_create(*puVar8,0,puVar8[0x22],puVar8,"%s_ipc",puVar8[0x25]);
                if (0xfffffffffffff000 < uVar13) {
                    uVar10 = 0x8000688;
                    goto code_r0x080026d0;
                }
            }
            else {
                uVar13 = uVar4;
                _printk(0x8000e5b,"qbt_dev_register",uVar13);
code_r0x08002710:
                if (uVar13 < 0) goto code_r0x08002bc0;
            }
            puVar14 = input_allocate_device();
            puVar8[0x23] = puVar14;
            if (puVar14 == NULL) {
                _dev_err(puVar8[0x24],"%s: input_allocate_device() failed\n","qbt_create_input_device");
                input_free_device(puVar8[0x23]);
                uVar13 = 0xfffffff4;
            }
            else {
                *puVar14 = "qbt_key_input";
                *(puVar8[0x23] + 8) = 0;
                *(puVar8[0x23] + 0x18) = 0x19;
                *(puVar8[0x23] + 0x1a) = 1;
                *(puVar8[0x23] + 0x1c) = 1;
                *(puVar8[0x23] + 0x1e) = 0x100;
                *(puVar8[0x23] + 0x28) = 10;
                *(puVar8[0x23] + 0x58) = 0x400;
                *(puVar8[0x23] + 0x40) = *(puVar8[0x23] + 0x40) | 0x100000000000;
                *(puVar8[0x23] + 0x38) = *(puVar8[0x23] + 0x38) | 0x4000000000000;
                *(puVar8[0x23] + 0x38) = *(puVar8[0x23] + 0x38) | 0x10000000000000;
                input_set_abs_params(puVar8[0x23],0,0,1000,0,0);
                input_set_abs_params(puVar8[0x23],1,0,1000,0,0);
                uVar4 = input_register_device(puVar8[0x23]);
                if (uVar4 != 0) {
                    uVar13 = uVar4;
                    _dev_err(puVar8[0x24],"%s: input_reg_dev() failed %d\n","qbt_create_input_device",uVar13);
                    input_free_device(puVar8[0x23]);
                    if (uVar4 < 0) goto code_r0x08002b38;
                }
                puVar8[0x90] = 0x280000007f;
                puVar8[0x8f] = 0;
                puVar8[0x91] = puVar8 + 0x92;
                puVar8[0x312] = 0;
                puVar8[0x313] = 0x40000007f;
                puVar8[0x314] = puVar8 + 0x315;
                __init_waitqueue_head
                          (puVar8 + 0x355,"&drvdata->read_wait_queue_fd",
                           reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                __init_waitqueue_head
                          (puVar8 + 0x358,"&drvdata->read_wait_queue_ipc",
                           reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                if (puVar8[0x89] < 0x200) {
                    uVar9 = devm_gpio_request_one(uVar1,puVar8[0x89],0,"qbt_intr2");
                    uVar13 = uVar9 & 0xffffffff;
                    if (-1 < uVar9) {
                        _printk(0x8000f6f,"setup_intr2_irq",uVar13);
                        goto code_r0x0800291c;
                    }
                    pcVar12 = "setup_intr2_irq";
                    _printk(0x80006fc,"setup_intr2_irq",puVar8[0x89],uVar13);
                    uVar10 = 0x8000f6f;
code_r0x08002b28:
                    _printk(uVar10,pcVar12,uVar13);
                }
                else {
code_r0x0800291c:
                    if (puVar8[0x35b] != '\0') {
                        uVar4 = devm_gpio_request_one(uVar1,puVar8[0x41],1,"qbt_finger_detect");
                        uVar7 = puVar8[0x41];
                        if (uVar4 < 0) {
                            uVar13 = uVar4;
                            uVar10 = 0x8000eb4;
                        }
                        else {
                            gpio_to_desc(uVar7);
                            uVar9 = gpiod_to_irq();
                            uVar13 = uVar9 & 0xffffffff;
                            if (uVar9 < 0) {
                                uVar7 = puVar8[0x41];
                                uVar10 = 0x8001450;
                            }
                            else {
                                *(puVar8 + 0x42) = uVar9;
                                puVar8[0x43] = 0xfffffffe0;
                                puVar8[0x44] = puVar8 + 0x44;
                                puVar8[0x45] = puVar8 + 0x44;
                                puVar8[0x46] = sym.qbt_gpio_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                                uVar9 = devm_request_any_context_irq
                                                  (uVar1,uVar13,
                                                   sym.qbt_gpio_isr.a87462e69df2f7c04b58d521675786f5.cfi_jt,3,
                                                   "qbt_finger_detect",puVar8);
                                uVar13 = uVar9 & 0xffffffff;
                                if (-1 < uVar9) goto code_r0x08002940;
                                uVar7 = puVar8[0x42];
                                uVar10 = 0x8000d1e;
                            }
                        }
                        _printk(uVar10,"setup_fd_gpio_irq",uVar7,uVar13);
                        uVar10 = 0x8000f6f;
                        pcVar12 = "setup_fd_gpio_irq";
                        goto code_r0x08002b28;
                    }
                    _printk(0x8001531,"setup_fd_gpio_irq");
                    uVar13 = 0;
code_r0x08002940:
                    _printk(0x8000f6f,"setup_fd_gpio_irq",uVar13);
                    *(puVar8 + 0x4a) = 0;
                    disable_irq(puVar8[0x42]);
                    gpio_to_desc(puVar8[0x39]);
                    uVar7 = gpiod_to_irq();
                    *(puVar8 + 0x1cc) = uVar7;
                    puVar8[0x3b] = 0xfffffffe0;
                    puVar8[0x3c] = puVar8 + 0x3c;
                    puVar8[0x3d] = puVar8 + 0x3c;
                    puVar8[0x3e] = sym.qbt_irq_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                    _printk(0x80011a2,"setup_ipc_irq",uVar7,puVar8[0x39]);
                    uVar13 = *(puVar8 + 0x1cc);
                    uVar7 = puVar8[0x39];
                    if (*(puVar8 + 0x1cc) < 0) {
                        uVar10 = 0x8000879;
code_r0x08002a88:
                        _printk(uVar10,"setup_ipc_irq",uVar7,uVar13);
                        uVar10 = 0x8000f6f;
                        pcVar12 = "setup_ipc_irq";
                        goto code_r0x08002b28;
                    }
                    uVar4 = devm_gpio_request_one(uVar1,uVar7,1,"qbt_ipc");
                    if (uVar4 < 0) {
                        uVar7 = puVar8[0x39];
                        uVar13 = uVar4;
                        uVar10 = 0x8000eb4;
                        goto code_r0x08002a88;
                    }
                    uVar9 = devm_request_threaded_irq
                                      (uVar1,*(puVar8 + 0x1cc),0,
                                       sym.qbt_ipc_irq_handler.a87462e69df2f7c04b58d521675786f5.cfi_jt,0x2002,
                                       "qbt_ipc",puVar8);
                    uVar13 = uVar9 & 0xffffffff;
                    if (uVar9 < 0) {
                        uVar7 = *(puVar8 + 0x1cc);
                        uVar10 = 0x8000dd7;
                        goto code_r0x08002a88;
                    }
                    _printk(0x8000f6f,"setup_ipc_irq",uVar13);
                    *(puVar8 + 0x3a) = 0;
                    disable_irq(*(puVar8 + 0x1cc));
                    uVar4 = device_init_wakeup(uVar1,1);
                    if (uVar4 < 0) {
                        uVar13 = uVar4;
                        uVar10 = 0x80014ec;
                        pcVar12 = "qbt_probe";
                        goto code_r0x08002b28;
                    }
                    puVar8[0x50] = 0xfffffffe0;
                    _obj.qbt_touch_handler = puVar8;
                    puVar8[0x51] = puVar8 + 0x51;
                    puVar8[0x52] = puVar8 + 0x51;
                    *(puVar8 + 0x57) = 0xffffffff;
                    *(puVar8 + 0x6b) = 0xffffffff;
                    *(puVar8 + 0x59) = 0xffffffff;
                    puVar8[0x53] = sym.qbt_touch_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                    *(puVar8 + 0x6d) = 0xffffffff;
                    *(puVar8 + 0x5b) = 0xffffffff;
                    *(puVar8 + 0x6f) = 0xffffffff;
                    *(puVar8 + 0x5d) = 0xffffffff;
                    *(puVar8 + 0x71) = 0xffffffff;
                    *(puVar8 + 0x5f) = 0xffffffff;
                    *(puVar8 + 0x73) = 0xffffffff;
                    *(puVar8 + 0x61) = 0xffffffff;
                    *(puVar8 + 0x75) = 0xffffffff;
                    *(puVar8 + 99) = 0xffffffff;
                    *(puVar8 + 0x77) = 0xffffffff;
                    *(puVar8 + 0x65) = 0xffffffff;
                    *(puVar8 + 0x79) = 0xffffffff;
                    *(puVar8 + 0x67) = 0xffffffff;
                    *(puVar8 + 0x7b) = 0xffffffff;
                    *(puVar8 + 0x69) = 0xffffffff;
                    *(puVar8 + 0x7d) = 0xffffffff;
                    uVar9 = input_register_handler();
                    uVar13 = uVar9 & 0xffffffff;
                    if (-1 < uVar9) goto code_r0x08002374;
                    _printk(0x8000f80,"qbt_probe",uVar13);
                    device_init_wakeup(uVar1,0);
                }
                input_unregister_device(puVar8[0x23]);
            }
code_r0x08002b38:
            _printk(0x8000cd7,"qbt_dev_unregister");
            class_destroy(*puVar8);
            _printk(0x80010da,"qbt_dev_unregister");
            cdev_del(puVar8 + 1);
            cdev_del(puVar8 + 0x12);
            _printk(0x8000b93,"qbt_dev_unregister");
            unregister_chrdev_region(puVar8[0x11],1);
            unregister_chrdev_region(puVar8[0x22],1);
            _printk(0x8000e35,"qbt_dev_unregister");
            _printk(0x800158d,"qbt_dev_unregister");
        }
    }
code_r0x08002bc0:
    _printk(0x800158d,"qbt_probe");
code_r0x08002374:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return uVar13 & 0xffffffff;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.qbt_remove;
    puVar14 = *(iVar11 + 0xa8);
    device_destroy(*puVar14,*(puVar14 + 0x11));
    device_destroy(*puVar14,*(puVar14 + 0x22));
    class_destroy(*puVar14);
    cdev_del(puVar14 + 1);
    cdev_del(puVar14 + 0x12);
    unregister_chrdev_region(*(puVar14 + 0x11),1);
    unregister_chrdev_region(*(puVar14 + 0x22),1);
    device_init_wakeup(iVar11 + 0x10,0);
    input_unregister_handler(obj.qbt_touch_handler);
    return 0;
}


// ===== sym.qbt_remove.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x08002300 (size 8) =====

ulong sym.qbt_remove.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0xa8);
    device_destroy(*puVar1,*(puVar1 + 0x11));
    device_destroy(*puVar1,*(puVar1 + 0x22));
    class_destroy(*puVar1);
    cdev_del(puVar1 + 1);
    cdev_del(puVar1 + 0x12);
    unregister_chrdev_region(*(puVar1 + 0x11),1);
    unregister_chrdev_region(*(puVar1 + 0x22),1);
    device_init_wakeup(param_1 + 0x10,0);
    input_unregister_handler(obj.qbt_touch_handler);
    return 0;
}


// ===== sym.qbt_poll.a87462e69df2f7c04b58d521675786f5.cfi_jt @ 0x08002308 (size 8) =====

uint sym.qbt_poll.a87462e69df2f7c04b58d521675786f5.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar7 = *(param_1 + 0xd8), iVar7 == 0)) {
        uVar2 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar2,"qbt_poll");
        uVar4 = 0xffffffea;
    }
    else {
        uVar1 = *(*(*(param_1 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar1 == 1) {
            if (((param_2 != NULL) && (iVar7 + 0x1ac0 != 0)) && (pcVar6 = *param_2, pcVar6 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000470);
                (*pcVar6)(param_1,iVar7 + 0x1ac0,param_2);
            }
            iVar3 = *(iVar7 + 0x1890);
            iVar5 = *(iVar7 + 0x1894);
        }
        else {
            if (uVar1 != 0) {
                uVar2 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((param_2 != NULL) && (iVar7 + 0x1aa8 != 0)) && (pcVar6 = *param_2, pcVar6 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000470);
                (*pcVar6)(param_1,iVar7 + 0x1aa8,param_2);
            }
            iVar3 = *(iVar7 + 0x478);
            iVar5 = *(iVar7 + 0x47c);
        }
        uVar4 = 0;
        if (iVar3 != iVar5) {
            uVar4 = 0x41;
        }
    }
    return uVar4;
}


// ===== sym.qbt_probe @ 0x08002310 (size 2508) =====

uint64_t sym.qbt_probe(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    uVar8 = arg1 + 0x10;
    iStack_58 = *(iVar11 + 0x5e0);
    _printk(0x8000cd7,"qbt_probe");
    puVar7 = devm_kmalloc(uVar8,0x2ef0,0xdc0);
    if (puVar7 == NULL) {
        uVar13 = 0xfffffff4;
        goto code_r0x08002374;
    }
    puVar7[0x24] = uVar8;
    *(arg1 + 0xa8) = puVar7;
    uStack_5c = 0;
    uVar3 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,intr2-gpio",0,0);
    *(puVar7 + 0x89) = uVar3;
    if (0x1ff < uVar3) {
        uVar8 = _printk(0x8001335,"qbt_read_device_tree");
        return uVar8;
    }
    uVar3 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,ipc-gpio",0,0);
    *(puVar7 + 0x39) = uVar3;
    if (uVar3 < 0) {
        uVar13 = uVar3;
        _printk(0x8000fb0,"qbt_read_device_tree",uVar13);
    }
    else {
        iVar4 = of_get_named_gpio_flags(*(arg1 + 0x300),"qcom,finger-detect-gpio",0,&uStack_5c);
        if (iVar4 < 0) {
            _printk(0x80007fe,"qbt_read_device_tree");
            *(puVar7 + 0x35b) = 0;
        }
        else {
            *(puVar7 + 0x41) = iVar4;
            *(puVar7 + 0x35b) = 1;
            *(puVar7 + 0x20c) = uStack_5c & 1;
            _printk(0x8000668,"qbt_read_device_tree",1);
        }
        *(puVar7 + 0x26) = 1;
        *(puVar7 + 0x134) = 1;
        *(puVar7 + 0x5dd) = 0;
        __mutex_init(puVar7 + 0x27,"&drvdata->mutex",reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
        __mutex_init(puVar7 + 0x2d,"&drvdata->fd_events_mutex",reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt
                    );
        __mutex_init(puVar7 + 0x33,"&drvdata->ipc_events_mutex",
                     reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
        uVar13 = puVar7[0x24];
        uStack_5c = 0;
        _printk(0x8000cd7,"qbt_dev_register");
        uVar13 = devm_kmalloc(uVar13,4,0xdc0);
        puVar7[0x25] = uVar13;
        if (uVar13 == 0) {
            uVar13 = 0xfffffff4;
        }
        else {
            strscpy(uVar13,0x800159d,4);
            uVar3 = alloc_chrdev_region(&uStack_5c,0,2,puVar7[0x25]);
            if (uVar3 == 0) {
                puVar1 = puVar7 + 1;
                uVar3 = uStack_5c & 0xfff00000;
                cdev_init(puVar1,obj.qbt_fops);
                puVar7[0xd] = obj.__this_module;
                uVar5 = cdev_add(puVar1,uVar3,1);
                if (uVar5 != 0) {
                    uVar10 = 0x8001081;
code_r0x08002650:
                    uVar13 = uVar5;
                    _printk(uVar10,"qbt_dev_register",uVar13);
code_r0x080026f8:
                    unregister_chrdev_region(puVar7[0x11],1);
                    unregister_chrdev_region(puVar7[0x22],1);
                    goto code_r0x08002710;
                }
                puVar2 = puVar7 + 0x12;
                cdev_init(puVar2,obj.qbt_fops);
                puVar7[0x1e] = obj.__this_module;
                uVar5 = cdev_add(puVar2,uVar3 | 1,1);
                if (uVar5 != 0) {
                    uVar10 = 0x80013b3;
                    goto code_r0x08002650;
                }
                uVar13 = __class_create(obj.__this_module,puVar7[0x25],
                                        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                *puVar7 = uVar13;
                if (0xfffffffffffff000 < uVar13) {
                    _printk(0x8001117,"qbt_dev_register",uVar13 & 0xffffffff);
code_r0x080026e8:
                    cdev_del(puVar1);
                    cdev_del(puVar2);
                    goto code_r0x080026f8;
                }
                uVar13 = device_create(uVar13,0,puVar7[0x11],puVar7,"%s_fd",puVar7[0x25]);
                if (0xfffffffffffff000 < uVar13) {
                    uVar10 = 0x8000c56;
code_r0x080026d0:
                    _printk(uVar10,"qbt_dev_register",uVar13 & 0xffffffff);
                    class_destroy(*puVar7);
                    goto code_r0x080026e8;
                }
                uVar13 = device_create(*puVar7,0,puVar7[0x22],puVar7,"%s_ipc",puVar7[0x25]);
                if (0xfffffffffffff000 < uVar13) {
                    uVar10 = 0x8000688;
                    goto code_r0x080026d0;
                }
            }
            else {
                uVar13 = uVar3;
                _printk(0x8000e5b,"qbt_dev_register",uVar13);
code_r0x08002710:
                if (uVar13 < 0) goto code_r0x08002bc0;
            }
            puVar14 = input_allocate_device();
            puVar7[0x23] = puVar14;
            if (puVar14 == NULL) {
                _dev_err(puVar7[0x24],"%s: input_allocate_device() failed\n","qbt_create_input_device");
                input_free_device(puVar7[0x23]);
                uVar13 = 0xfffffff4;
            }
            else {
                *puVar14 = "qbt_key_input";
                *(puVar7[0x23] + 8) = 0;
                *(puVar7[0x23] + 0x18) = 0x19;
                *(puVar7[0x23] + 0x1a) = 1;
                *(puVar7[0x23] + 0x1c) = 1;
                *(puVar7[0x23] + 0x1e) = 0x100;
                *(puVar7[0x23] + 0x28) = 10;
                *(puVar7[0x23] + 0x58) = 0x400;
                *(puVar7[0x23] + 0x40) = *(puVar7[0x23] + 0x40) | 0x100000000000;
                *(puVar7[0x23] + 0x38) = *(puVar7[0x23] + 0x38) | 0x4000000000000;
                *(puVar7[0x23] + 0x38) = *(puVar7[0x23] + 0x38) | 0x10000000000000;
                input_set_abs_params(puVar7[0x23],0,0,1000,0,0);
                input_set_abs_params(puVar7[0x23],1,0,1000,0,0);
                uVar3 = input_register_device(puVar7[0x23]);
                if (uVar3 != 0) {
                    uVar13 = uVar3;
                    _dev_err(puVar7[0x24],"%s: input_reg_dev() failed %d\n","qbt_create_input_device",uVar13);
                    input_free_device(puVar7[0x23]);
                    if (uVar3 < 0) goto code_r0x08002b38;
                }
                puVar7[0x90] = 0x280000007f;
                puVar7[0x8f] = 0;
                puVar7[0x91] = puVar7 + 0x92;
                puVar7[0x312] = 0;
                puVar7[0x313] = 0x40000007f;
                puVar7[0x314] = puVar7 + 0x315;
                __init_waitqueue_head
                          (puVar7 + 0x355,"&drvdata->read_wait_queue_fd",
                           reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                __init_waitqueue_head
                          (puVar7 + 0x358,"&drvdata->read_wait_queue_ipc",
                           reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
                if (puVar7[0x89] < 0x200) {
                    uVar9 = devm_gpio_request_one(uVar8,puVar7[0x89],0,"qbt_intr2");
                    uVar13 = uVar9 & 0xffffffff;
                    if (-1 < uVar9) {
                        _printk(0x8000f6f,"setup_intr2_irq",uVar13);
                        goto code_r0x0800291c;
                    }
                    pcVar12 = "setup_intr2_irq";
                    _printk(0x80006fc,"setup_intr2_irq",puVar7[0x89],uVar13);
                    uVar10 = 0x8000f6f;
code_r0x08002b28:
                    _printk(uVar10,pcVar12,uVar13);
                }
                else {
code_r0x0800291c:
                    if (puVar7[0x35b] != '\0') {
                        uVar3 = devm_gpio_request_one(uVar8,puVar7[0x41],1,"qbt_finger_detect");
                        uVar6 = puVar7[0x41];
                        if (uVar3 < 0) {
                            uVar13 = uVar3;
                            uVar10 = 0x8000eb4;
                        }
                        else {
                            gpio_to_desc(uVar6);
                            uVar9 = gpiod_to_irq();
                            uVar13 = uVar9 & 0xffffffff;
                            if (uVar9 < 0) {
                                uVar6 = puVar7[0x41];
                                uVar10 = 0x8001450;
                            }
                            else {
                                *(puVar7 + 0x42) = uVar9;
                                puVar7[0x43] = 0xfffffffe0;
                                puVar7[0x44] = puVar7 + 0x44;
                                puVar7[0x45] = puVar7 + 0x44;
                                puVar7[0x46] = sym.qbt_gpio_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                                uVar9 = devm_request_any_context_irq
                                                  (uVar8,uVar13,
                                                   sym.qbt_gpio_isr.a87462e69df2f7c04b58d521675786f5.cfi_jt,3,
                                                   "qbt_finger_detect",puVar7);
                                uVar13 = uVar9 & 0xffffffff;
                                if (-1 < uVar9) goto code_r0x08002940;
                                uVar6 = puVar7[0x42];
                                uVar10 = 0x8000d1e;
                            }
                        }
                        _printk(uVar10,"setup_fd_gpio_irq",uVar6,uVar13);
                        uVar10 = 0x8000f6f;
                        pcVar12 = "setup_fd_gpio_irq";
                        goto code_r0x08002b28;
                    }
                    _printk(0x8001531,"setup_fd_gpio_irq");
                    uVar13 = 0;
code_r0x08002940:
                    _printk(0x8000f6f,"setup_fd_gpio_irq",uVar13);
                    *(puVar7 + 0x4a) = 0;
                    disable_irq(puVar7[0x42]);
                    gpio_to_desc(puVar7[0x39]);
                    uVar6 = gpiod_to_irq();
                    *(puVar7 + 0x1cc) = uVar6;
                    puVar7[0x3b] = 0xfffffffe0;
                    puVar7[0x3c] = puVar7 + 0x3c;
                    puVar7[0x3d] = puVar7 + 0x3c;
                    puVar7[0x3e] = sym.qbt_irq_report_event.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                    _printk(0x80011a2,"setup_ipc_irq",uVar6,puVar7[0x39]);
                    uVar13 = *(puVar7 + 0x1cc);
                    uVar6 = puVar7[0x39];
                    if (*(puVar7 + 0x1cc) < 0) {
                        uVar10 = 0x8000879;
code_r0x08002a88:
                        _printk(uVar10,"setup_ipc_irq",uVar6,uVar13);
                        uVar10 = 0x8000f6f;
                        pcVar12 = "setup_ipc_irq";
                        goto code_r0x08002b28;
                    }
                    uVar3 = devm_gpio_request_one(uVar8,uVar6,1,"qbt_ipc");
                    if (uVar3 < 0) {
                        uVar6 = puVar7[0x39];
                        uVar13 = uVar3;
                        uVar10 = 0x8000eb4;
                        goto code_r0x08002a88;
                    }
                    uVar9 = devm_request_threaded_irq
                                      (uVar8,*(puVar7 + 0x1cc),0,
                                       sym.qbt_ipc_irq_handler.a87462e69df2f7c04b58d521675786f5.cfi_jt,0x2002,
                                       "qbt_ipc",puVar7);
                    uVar13 = uVar9 & 0xffffffff;
                    if (uVar9 < 0) {
                        uVar6 = *(puVar7 + 0x1cc);
                        uVar10 = 0x8000dd7;
                        goto code_r0x08002a88;
                    }
                    _printk(0x8000f6f,"setup_ipc_irq",uVar13);
                    *(puVar7 + 0x3a) = 0;
                    disable_irq(*(puVar7 + 0x1cc));
                    uVar3 = device_init_wakeup(uVar8,1);
                    if (uVar3 < 0) {
                        uVar13 = uVar3;
                        uVar10 = 0x80014ec;
                        pcVar12 = "qbt_probe";
                        goto code_r0x08002b28;
                    }
                    puVar7[0x50] = 0xfffffffe0;
                    _obj.qbt_touch_handler = puVar7;
                    puVar7[0x51] = puVar7 + 0x51;
                    puVar7[0x52] = puVar7 + 0x51;
                    *(puVar7 + 0x57) = 0xffffffff;
                    *(puVar7 + 0x6b) = 0xffffffff;
                    *(puVar7 + 0x59) = 0xffffffff;
                    puVar7[0x53] = sym.qbt_touch_work_func.a87462e69df2f7c04b58d521675786f5.cfi_jt;
                    *(puVar7 + 0x6d) = 0xffffffff;
                    *(puVar7 + 0x5b) = 0xffffffff;
                    *(puVar7 + 0x6f) = 0xffffffff;
                    *(puVar7 + 0x5d) = 0xffffffff;
                    *(puVar7 + 0x71) = 0xffffffff;
                    *(puVar7 + 0x5f) = 0xffffffff;
                    *(puVar7 + 0x73) = 0xffffffff;
                    *(puVar7 + 0x61) = 0xffffffff;
                    *(puVar7 + 0x75) = 0xffffffff;
                    *(puVar7 + 99) = 0xffffffff;
                    *(puVar7 + 0x77) = 0xffffffff;
                    *(puVar7 + 0x65) = 0xffffffff;
                    *(puVar7 + 0x79) = 0xffffffff;
                    *(puVar7 + 0x67) = 0xffffffff;
                    *(puVar7 + 0x7b) = 0xffffffff;
                    *(puVar7 + 0x69) = 0xffffffff;
                    *(puVar7 + 0x7d) = 0xffffffff;
                    uVar9 = input_register_handler();
                    uVar13 = uVar9 & 0xffffffff;
                    if (-1 < uVar9) goto code_r0x08002374;
                    _printk(0x8000f80,"qbt_probe",uVar13);
                    device_init_wakeup(uVar8,0);
                }
                input_unregister_device(puVar7[0x23]);
            }
code_r0x08002b38:
            _printk(0x8000cd7,"qbt_dev_unregister");
            class_destroy(*puVar7);
            _printk(0x80010da,"qbt_dev_unregister");
            cdev_del(puVar7 + 1);
            cdev_del(puVar7 + 0x12);
            _printk(0x8000b93,"qbt_dev_unregister");
            unregister_chrdev_region(puVar7[0x11],1);
            unregister_chrdev_region(puVar7[0x22],1);
            _printk(0x8000e35,"qbt_dev_unregister");
            _printk(0x800158d,"qbt_dev_unregister");
        }
    }
code_r0x08002bc0:
    _printk(0x800158d,"qbt_probe");
code_r0x08002374:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return uVar13 & 0xffffffff;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18 = sym.qbt_remove;
    puVar14 = *(iVar11 + 0xa8);
    device_destroy(*puVar14,*(puVar14 + 0x11));
    device_destroy(*puVar14,*(puVar14 + 0x22));
    class_destroy(*puVar14);
    cdev_del(puVar14 + 1);
    cdev_del(puVar14 + 0x12);
    unregister_chrdev_region(*(puVar14 + 0x11),1);
    unregister_chrdev_region(*(puVar14 + 0x22),1);
    device_init_wakeup(iVar11 + 0x10,0);
    input_unregister_handler(obj.qbt_touch_handler);
    return 0;
}


// ===== sym.qbt_remove @ 0x08002cdc (size 164) =====

ulong sym.qbt_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0xa8);
    device_destroy(*puVar1,*(puVar1 + 0x11));
    device_destroy(*puVar1,*(puVar1 + 0x22));
    class_destroy(*puVar1);
    cdev_del(puVar1 + 1);
    cdev_del(puVar1 + 0x12);
    unregister_chrdev_region(*(puVar1 + 0x11),1);
    unregister_chrdev_region(*(puVar1 + 0x22),1);
    device_init_wakeup(arg1 + 0x10,0);
    input_unregister_handler(obj.qbt_touch_handler);
    return 0;
}


// ===== sym.qbt_suspend @ 0x08002d80 (size 116) =====

ulong sym.qbt_suspend(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa8);
    iVar1 = mutex_trylock(iVar3 + 0x138);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff0;
    }
    else {
        if (*(iVar3 + 0x1ad8) != '\0') {
            irq_set_irq_wake(*(iVar3 + 0x210),1);
        }
        irq_set_irq_wake(*(iVar3 + 0x1cc),1);
        mutex_unlock(iVar3 + 0x138);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.qbt_resume @ 0x08002df4 (size 84) =====

ulong sym.qbt_resume(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 0x1ad8) != '\0') {
        irq_set_irq_wake(*(iVar1 + 0x210),0);
    }
    irq_set_irq_wake(*(iVar1 + 0x1cc),0);
    return 0;
}


// ===== sym.qbt_touch_work_func @ 0x08002e48 (size 960) =====

//WARNING: Removing unreachable block (ram,0x08003448)

uint64_t sym.qbt_touch_work_func(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    ulong uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    char cVar15;
    ulong uVar16;
    uint64_t in_x2;
    bool bVar17;
    uint32_t uVar18;
    int64_t iVar19;
    ulong *puVar20;
    int iVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    int64_t iVar23;
    uint32_t *puVar24;
    uint uVar25;
    ulong unaff_x20;
    int64_t iVar26;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    uint32_t *puVar27;
    uint64_t uVar28;
    code *pcVar29;
    uint64_t unaff_x23;
    int64_t iVar30;
    uint64_t unaff_x24;
    int64_t iVar31;
    uint64_t unaff_x25;
    int iVar32;
    uint64_t unaff_x26;
    int64_t unaff_x27;
    ulong *puVar33;
    ulong unaff_x28;
    int64_t iVar34;
    ulong unaff_x30;
    uchar auVar35 [16];
    uchar auVar36 [16];
    int64_t iStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    uint uStack_120;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    uint64_t uStack_b8;
    uint32_t uStack_a4;
    int64_t iStack_a0;
    uint64_t uStack_98;
    uchar auStack_90 [16];
    ulong uStack_80;
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar34 = sp_el0;
    iStack_68 = *(iVar34 + 0x5e0);
    iStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    auStack_90._8_8_ = 0;
    uStack_80 = 0;
    auStack_90._0_8_ = 0;
    if (arg1 == 0) {
        uVar22 = _printk(0x8000b14,"qbt_touch_work_func");
    }
    else {
        unaff_x26 = 0;
        unaff_x27 = 0;
        uVar22 = arg1 - 0x280;
        iVar34 = 0x170;
        uStack_a4 = 0;
        uStack_70 = 1;
        iStack_a0 = arg1;
        uStack_98 = uVar22;
        auStack_90 = ZEXT816(0);
        do {
            iVar30 = arg1 + unaff_x27;
            puVar1 = iVar30 + 0x30;
            uVar18 = *puVar1;
            unaff_x21 = uVar18;
            uVar6 = *(iVar30 + 0x34);
            uVar8 = *puVar1;
            uVar16 = *puVar1;
            unaff_x25 = uVar6;
            cVar15 = *(iVar30 + 0x3c);
            *(iVar30 + 0x3c) = 0;
            uVar10 = *(iVar30 + 0x38);
            unaff_x23 = uVar10;
            iVar32 = unaff_x26;
            if (cVar15 != '\0') {
                uVar5 = *(iVar30 + 0xd0);
                unaff_x22 = uVar5;
                uVar7 = *(iVar30 + 0xd4);
                unaff_x24 = uVar7;
                uVar11 = *(iVar30 + 0xd8);
                unaff_x19 = uVar11;
                *(iVar30 + 0xd0) = uVar18;
                *(iVar30 + 0xd4) = uVar6;
                *(iVar30 + 0xd8) = uVar10;
                *(iVar30 + 0xdc) = cVar15;
                *(iVar30 + 0xdd) = *(iVar30 + 0x3d);
                *(iVar30 + 0xdf) = *(iVar30 + 0x3f);
                if (uVar10 < 0) {
                    bVar17 = false;
                    unaff_x20 = 0;
                }
                else {
                    if (-1 < uVar11) {
                        if (uVar11 == uVar10) {
                            unaff_x20 = 2;
                            bVar17 = true;
                            goto code_r0x08002f84;
                        }
                        _printk(0x80011d0,"qbt_touch_work_func");
                        arg1 = iStack_a0;
                        uVar22 = uStack_98;
                    }
                    bVar17 = false;
                    unaff_x20 = 1;
                }
code_r0x08002f84:
                iVar21 = *(uVar22 + 0x260);
                uStack_74 = unaff_x20;
                if ((((uVar18 < iVar21) || (iVar12 = *(uVar22 + 0x268), iVar12 < uVar18)) ||
                    (iVar13 = *(uVar22 + 0x264), uVar6 < iVar13)) || (iVar14 = *(uVar22 + 0x26c), iVar14 < uVar6)) {
                    if (((iVar21 <= uVar5) && (uVar5 <= *(uVar22 + 0x268))) &&
                       ((*(uVar22 + 0x264) <= uVar7 && ((uVar7 <= *(uVar22 + 0x26c) && (-1 < uVar11)))))) {
                        unaff_x20 = 0;
                        goto code_r0x0800300c;
                    }
                }
                else {
                    if (((((iVar14 < uVar7 || uVar7 < iVar13) || iVar12 < uVar5) || uVar5 - iVar21 < 0) ==
                         (((uVar7 <= iVar14 && uVar7 >= iVar13) && uVar5 <= iVar12) && SBORROW4(uVar5,iVar21))) ||
                       (uVar10 < 0)) {
                        if (!bVar17) goto code_r0x08003010;
                        puVar1 = arg1 + iVar34;
                        cVar15 = *(arg1 + -0x23);
                        uVar6 = puVar1[10] + (uVar6 - uVar7);
                        uVar18 = *puVar1 + (uVar18 - uVar5);
                        uVar10 = -uVar6;
                        if (-1 < uVar6) {
                            uVar10 = uVar6;
                        }
                        puVar1[10] = uVar6;
                        *puVar1 = uVar18;
                        if (cVar15 != '\0') {
                            uVar6 = -uVar18;
                            if (-1 < uVar18) {
                                uVar6 = uVar18;
                            }
                            if ((uVar6 <= *(uVar22 + 0x270)) && (uVar10 <= *(uVar22 + 0x274))) goto code_r0x08002eec;
                        }
                        *(arg1 + iVar34) = 0;
                        puVar1[10] = 0;
                        ktime_get();
                        auVar36 = ns_to_timespec64();
                        cVar15 = *(uStack_98 + 0x25c);
                        iStack_78 = iVar32;
                        arg1 = iStack_a0;
                        uVar22 = uStack_98;
                        uStack_80 = uVar16;
                        auStack_90 = auVar36;
                    }
                    else {
                        unaff_x20 = 1;
code_r0x0800300c:
                        uStack_74 = unaff_x20;
code_r0x08003010:
                        ktime_get();
                        auVar36 = ns_to_timespec64();
                        uVar22 = uStack_98;
                        *(iStack_a0 + iVar34 + 0x5c) = unaff_x20;
                        uStack_80 = uVar8;
                        auStack_90 = auVar36;
                        if (*(iStack_a0 + 0x1cc) == 1) {
                            uStack_a4 = 1;
                            if (*(uStack_98 + 0x278) != '\0') {
                                uStack_a4 = 1;
code_r0x08003144:
                                unaff_x25 = uStack_a4 & 1;
                                in_x2 = unaff_x25;
                                iStack_78 = iVar32;
                                _printk(0x8000f10,"qbt_touch_work_func");
                                if (*(uVar22 + 0x448) < 0x200) {
                                    uVar16 = gpio_to_desc();
                                    gpiod_set_raw_value(uVar16,unaff_x25);
                                }
                                else {
                                    _printk(0x80008df,"qbt_touch_work_func");
                                }
                                cVar15 = *(uStack_98 + 0x25c);
                                unaff_x19 = uVar22;
                                arg1 = iStack_a0;
                                uVar22 = uStack_98;
                                goto joined_r0x080030c4;
                            }
                        }
                        else {
                            if (((((*(uStack_98 + 0x450) == 1) || (*(uStack_98 + 0x454) == 1)) ||
                                 (*(uStack_98 + 0x458) == 1)) ||
                                ((*(uStack_98 + 0x45c) == 1 || (*(uStack_98 + 0x460) == 1)))) ||
                               ((*(uStack_98 + 0x464) == 1 ||
                                ((*(uStack_98 + 0x468) == 1 || (*(uStack_98 + 0x46c) == 1)))))) {
                                uStack_a4 = 1;
                                cVar15 = *(uStack_98 + 0x278);
                            }
                            else {
                                uStack_a4 = *(uStack_98 + 0x470) == 1 | uStack_a4;
                                cVar15 = *(uStack_98 + 0x278);
                            }
                            if (cVar15 != '\0') goto code_r0x08003144;
                        }
                        cVar15 = *(uStack_98 + 0x25c);
                        iStack_78 = iVar32;
                        arg1 = iStack_a0;
                    }
joined_r0x080030c4:
                    iStack_a0 = arg1;
                    uStack_98 = uVar22;
                    if (cVar15 != '\0') {
                        sym.qbt_fd_report_event(uVar22,auStack_90);
                        arg1 = iStack_a0;
                        uVar22 = uStack_98;
                    }
                }
            }
code_r0x08002eec:
            iVar34 = iVar34 + 4;
            unaff_x27 = unaff_x27 + 0x10;
            unaff_x26 = iVar32 + 1;
        } while (iVar34 != 0x198);
        uVar22 = pm_relax(*(uVar22 + 0x120));
        unaff_x28 = 0x198;
    }
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_68) {
        return uVar22;
    }
    auVar36 = __stack_chk_fail();
    iVar30 = auVar36._0_8_;
    *extraout_x18 = sym.qbt_read;
    pcStack_108 = sym.qbt_read;
    iVar34 = sp_el0;
    iStack_118 = *(iVar34 + 0x5e0);
    uStack_120 = 0;
    puStack_110 = &stack0xffffffffffffffa0;
    uStack_100 = unaff_x28;
    iStack_f8 = unaff_x27;
    uStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    uStack_c8 = unaff_x21;
    uStack_c0 = unaff_x20;
    uStack_b8 = unaff_x19;
    _printk(0x8000a87,"qbt_read");
    if ((iVar30 == 0) || (iVar34 = *(iVar30 + 0xd8), iVar34 == 0)) {
        uVar16 = 0x8000b14;
code_r0x08003534:
        _printk(uVar16,"qbt_read");
        uVar22 = 0xffffffffffffffea;
    }
    else {
        uVar18 = *(*(*(iVar30 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        memset(iVar34 + 0x1ae0,0,0x1408);
        if (uVar18 == 0) {
            if (in_x2 >> 3 < 0x281) {
code_r0x080034e4:
                uVar16 = 0x8001207;
                goto code_r0x08003534;
            }
            iVar23 = 0x47c;
            iVar26 = 0x478;
            iVar19 = 0x168;
            iVar31 = 0x1aa8;
        }
        else {
            if (uVar18 != 1) {
                uVar16 = 0x8000a67;
                goto code_r0x08003534;
            }
            if (in_x2 < 4) goto code_r0x080034e4;
            iVar23 = 0x1894;
            iVar26 = 0x1890;
            iVar19 = 0x198;
            iVar31 = 0x1ac0;
        }
        mutex_lock(iVar34 + iVar19);
        iVar32 = *(iVar34 + iVar26);
        iVar21 = *(iVar34 + iVar23);
        mutex_unlock(iVar34 + iVar19);
        iStack_158 = iVar34 + 0x198;
        puVar3 = iVar34 + 0x1890;
        puVar4 = iVar34 + 0x1894;
        iVar19 = iVar34 + 0x168;
        puVar1 = iVar34 + 0x478;
        puVar2 = iVar34 + 0x47c;
        if (iVar32 == iVar21) {
            do {
                do {
                    if ((*(iVar30 + 0x41) >> 3 & 1) != 0) {
                        _printk(0x8001176,"qbt_read");
                        uVar22 = 0xfffffffffffffff5;
                        goto code_r0x0800371c;
                    }
                    _printk(0x8000c7c,"qbt_read");
                    puVar24 = puVar1;
                    iVar23 = iVar19;
                    puVar27 = puVar2;
                    if ((uVar18 == 0) || (puVar24 = puVar3, iVar23 = iStack_158, puVar27 = puVar4, uVar18 == 1)) {
                        mutex_lock(iVar23);
                        uVar6 = *puVar24;
                        uVar10 = *puVar27;
                        mutex_unlock(iVar23);
                        if (uVar6 - uVar10 < 1) goto code_r0x0800339c;
                    }
                    else {
code_r0x0800339c:
                        uStack_130 = 0;
                        uStack_128 = 0;
                        uStack_140 = 0;
                        uStack_138 = 0;
                        uStack_148 = 0;
                        init_wait_entry(&uStack_148,0);
                        while( true ) {
                            iVar26 = prepare_to_wait_event(iVar34 + iVar31,&uStack_148,1);
                            puVar24 = puVar2;
                            puVar27 = puVar1;
                            iVar23 = iVar19;
                            if ((uVar18 == 0) ||
                               (puVar24 = puVar4, puVar27 = puVar3, iVar23 = iStack_158, uVar18 == 1)) {
                                mutex_lock(iVar23);
                                uVar6 = *puVar27;
                                uVar10 = *puVar24;
                                mutex_unlock(iVar23);
                                if (0 < uVar6 - uVar10) {
                                    finish_wait(iVar34 + iVar31,&uStack_148);
                                    goto joined_r0x08003458;
                                }
                            }
                            if (iVar26 != 0) break;
                            schedule();
                        }
                        if (iVar26 != 0) {
                            uVar22 = 0xfffffffffffffe00;
                            goto code_r0x0800371c;
                        }
                    }
joined_r0x08003458:
                    puVar24 = puVar2;
                    puVar27 = puVar1;
                    iVar23 = iVar19;
                } while ((uVar18 != 0) && (puVar24 = puVar4, puVar27 = puVar3, iVar23 = iStack_158, uVar18 != 1));
                mutex_lock(iVar23);
                uVar6 = *puVar27;
                uVar10 = *puVar24;
                mutex_unlock(iVar23);
            } while (uVar6 == uVar10);
        }
        if (uVar18 == 0) {
            mutex_lock(iVar19);
            iVar32 = *(iVar34 + 0x478) - *(iVar34 + 0x47c);
            *(iVar34 + 0x1ae0) = iVar32;
            if (iVar32 == 0) {
                uVar28 = 0;
            }
            else {
                uVar22 = 0;
                puVar33 = iVar34 + 0x1ae8;
                do {
                    if (uVar22 == 0x81) {
    //WARNING: Does not return
                        pcVar29 = SoftwareBreakpoint(0x5512,0x800377c);
                        (*pcVar29)();
                    }
                    if (*puVar1 == *puVar2) {
                        _printk(0x8000903,"qbt_read");
                        *(iVar34 + 0x1ae0) = uVar22;
                        uVar28 = uVar22;
                        break;
                    }
                    puVar20 = iVar34 + 0x490 + (*(iVar34 + 0x480) & *puVar2) * 0x28;
                    *puVar33 = *puVar20;
                    uVar8 = puVar20[4];
                    uVar16 = puVar20[1];
                    uVar9 = puVar20[2];
                    puVar33[3] = puVar20[3];
                    puVar33[4] = uVar8;
                    puVar33[1] = uVar16;
                    puVar33[2] = uVar9;
                    DataMemoryBarrier(2,2);
                    *(iVar34 + 0x47c) = *(iVar34 + 0x47c) + 1;
                    _printk(0x8000822,"qbt_read",*(puVar33 + 3),*(puVar33 + 0x1c));
                    _printk(0x8000fd8,"qbt_read",*(puVar33 + 2),*(puVar33 + 0x14),*puVar33,puVar33[1]);
                    uVar28 = *(iVar34 + 0x1ae0);
                    uVar22 = uVar22 + 1;
                    puVar33 = puVar33 + 5;
                } while (uVar22 < uVar28);
            }
            iVar34 = ktime_get();
            auVar35 = _printk(0x80013d9,"qbt_read",uVar28 & 0xffffffff,iVar34 / 1000);
            uVar22 = sym._copy_to_user(auVar36._8_8_,auVar35,0x1408);
            iStack_158 = iVar19;
        }
        else {
            if (uVar18 != 1) {
                _printk(0x8000a67,"qbt_read");
                uVar22 = 0;
                goto code_r0x0800371c;
            }
            mutex_lock(iStack_158);
            if (*puVar3 == *puVar4) {
                _printk(0x8000e84,"qbt_read");
                uVar25 = 0;
            }
            else {
                uStack_120 = *(iVar34 + (*(iVar34 + 0x1898) & *puVar4) * 4 + 0x18a8);
                DataMemoryBarrier(2,2);
                *(iVar34 + 0x1894) = *(iVar34 + 0x1894) + 1;
                uVar25 = uStack_120;
            }
            iVar34 = ktime_get();
            auVar35 = _printk(0x8000ac4,"qbt_read",uVar25,1,iVar34 / 1000);
            uVar22 = sym._copy_to_user(auVar36._8_8_,auVar35,4);
        }
        mutex_unlock(iStack_158);
        if (uVar22 != 0) {
            _printk(0x8000be6,"qbt_read",uVar22);
        }
    }
code_r0x0800371c:
    iVar34 = sp_el0;
    if (*(iVar34 + 0x5e0) == iStack_118) {
        return uVar22;
    }
    auVar36 = __stack_chk_fail();
    puVar33 = auVar36._8_8_;
    iVar34 = auVar36._0_8_;
    *extraout_x18_00 = sym.qbt_poll;
    if ((iVar34 == 0) || (iVar30 = *(iVar34 + 0xd8), iVar30 == 0)) {
        uVar16 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar16,"qbt_poll");
        uVar22 = 0xffffffea;
    }
    else {
        uVar18 = *(*(*(iVar34 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar18 == 1) {
            if (((puVar33 != NULL) && (iVar30 + 0x1ac0 != 0)) && (pcVar29 = *puVar33, pcVar29 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar29,0x8000470);
                (*pcVar29)(iVar34,iVar30 + 0x1ac0,puVar33);
            }
            iVar32 = *(iVar30 + 0x1890);
            iVar21 = *(iVar30 + 0x1894);
        }
        else {
            if (uVar18 != 0) {
                uVar16 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((puVar33 != NULL) && (iVar30 + 0x1aa8 != 0)) && (pcVar29 = *puVar33, pcVar29 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar29,0x8000470);
                (*pcVar29)(iVar34,iVar30 + 0x1aa8,puVar33);
            }
            iVar32 = *(iVar30 + 0x478);
            iVar21 = *(iVar30 + 0x47c);
        }
        uVar18 = 0;
        if (iVar32 != iVar21) {
            uVar18 = 0x41;
        }
        uVar22 = uVar18;
    }
    return uVar22;
}


// ===== sym.qbt_read @ 0x08003208 (size 1400) =====

//WARNING: Removing unreachable block (ram,0x08003448)

uint64_t sym.qbt_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    ulong uVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int iVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *puVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint uVar20;
    int64_t iVar21;
    uint32_t *puVar22;
    uint32_t *puVar23;
    uint64_t uVar24;
    code *pcVar25;
    int64_t iVar26;
    int64_t iVar27;
    ulong *puVar28;
    ulong unaff_x30;
    uchar auVar29 [16];
    int64_t iStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    uStack_70 = 0;
    _printk(0x8000a87,"qbt_read",arg3,0xffffffff);
    if ((arg1 == 0) || (iVar27 = *(arg1 + 0xd8), iVar27 == 0)) {
        uVar10 = 0x8000b14;
code_r0x08003534:
        _printk(uVar10,"qbt_read");
        uVar11 = 0xffffffffffffffea;
    }
    else {
        uVar13 = *(*(*(arg1 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        memset(iVar27 + 0x1ae0,0,0x1408);
        if (uVar13 == 0) {
            if (arg3 >> 3 < 0x281) {
code_r0x080034e4:
                uVar10 = 0x8001207;
                goto code_r0x08003534;
            }
            iVar17 = 0x47c;
            iVar21 = 0x478;
            iVar14 = 0x168;
            iVar26 = 0x1aa8;
        }
        else {
            if (uVar13 != 1) {
                uVar10 = 0x8000a67;
                goto code_r0x08003534;
            }
            if (arg3 < 4) goto code_r0x080034e4;
            iVar17 = 0x1894;
            iVar21 = 0x1890;
            iVar14 = 0x198;
            iVar26 = 0x1ac0;
        }
        mutex_lock(iVar27 + iVar14);
        iVar12 = *(iVar27 + iVar21);
        iVar16 = *(iVar27 + iVar17);
        mutex_unlock(iVar27 + iVar14);
        iStack_a8 = iVar27 + 0x198;
        puVar3 = iVar27 + 0x1890;
        puVar4 = iVar27 + 0x1894;
        iVar14 = iVar27 + 0x168;
        puVar1 = iVar27 + 0x478;
        puVar2 = iVar27 + 0x47c;
        if (iVar12 == iVar16) {
code_r0x08003338:
            do {
                if ((*(arg1 + 0x41) >> 3 & 1) != 0) {
                    _printk(0x8001176,"qbt_read");
                    uVar11 = 0xfffffffffffffff5;
                    goto code_r0x0800371c;
                }
                _printk(0x8000c7c,"qbt_read");
                puVar18 = puVar1;
                iVar21 = iVar14;
                puVar22 = puVar2;
                puVar19 = puVar2;
                puVar23 = puVar1;
                iVar17 = iVar14;
                if ((uVar13 == 0) || (puVar18 = puVar3, iVar21 = iStack_a8, puVar22 = puVar4, uVar13 == 1)) {
                    mutex_lock(iVar21);
                    uVar7 = *puVar18;
                    uVar8 = *puVar22;
                    mutex_unlock(iVar21);
                    if (uVar7 - uVar8 < 1) goto code_r0x0800339c;
                }
                else {
code_r0x0800339c:
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_98 = 0;
                    init_wait_entry(&uStack_98,0);
                    while( true ) {
                        iVar9 = prepare_to_wait_event(iVar27 + iVar26,&uStack_98,1);
                        puVar18 = puVar2;
                        puVar22 = puVar1;
                        iVar21 = iVar14;
                        if ((uVar13 == 0) || (puVar18 = puVar4, puVar22 = puVar3, iVar21 = iStack_a8, uVar13 == 1)) {
                            mutex_lock(iVar21);
                            uVar7 = *puVar22;
                            uVar8 = *puVar18;
                            mutex_unlock(iVar21);
                            if (0 < uVar7 - uVar8) {
                                finish_wait(iVar27 + iVar26,&uStack_98);
                                if (uVar13 == 0) goto code_r0x08003464;
                                goto code_r0x08003424;
                            }
                        }
                        if (iVar9 != 0) break;
                        schedule();
                    }
                    if (iVar9 != 0) {
                        uVar11 = 0xfffffffffffffe00;
                        goto code_r0x0800371c;
                    }
                }
                if (uVar13 != 0) {
code_r0x08003424:
                    puVar19 = puVar4;
                    puVar23 = puVar3;
                    iVar17 = iStack_a8;
                    if (uVar13 != 1) goto code_r0x08003338;
                }
code_r0x08003464:
                mutex_lock(iVar17);
                uVar7 = *puVar23;
                uVar8 = *puVar19;
                mutex_unlock(iVar17);
            } while (uVar7 == uVar8);
        }
        if (uVar13 == 0) {
            mutex_lock(iVar14);
            iVar12 = *(iVar27 + 0x478) - *(iVar27 + 0x47c);
            *(iVar27 + 0x1ae0) = iVar12;
            if (iVar12 == 0) {
                uVar24 = 0;
            }
            else {
                uVar11 = 0;
                puVar28 = iVar27 + 0x1ae8;
                do {
                    if (uVar11 == 0x81) {
    //WARNING: Does not return
                        pcVar25 = SoftwareBreakpoint(0x5512,0x800377c);
                        (*pcVar25)();
                    }
                    if (*puVar1 == *puVar2) {
                        _printk(0x8000903,"qbt_read");
                        *(iVar27 + 0x1ae0) = uVar11;
                        uVar24 = uVar11;
                        break;
                    }
                    puVar15 = iVar27 + 0x490 + (*(iVar27 + 0x480) & *puVar2) * 0x28;
                    *puVar28 = *puVar15;
                    uVar5 = puVar15[4];
                    uVar10 = puVar15[1];
                    uVar6 = puVar15[2];
                    puVar28[3] = puVar15[3];
                    puVar28[4] = uVar5;
                    puVar28[1] = uVar10;
                    puVar28[2] = uVar6;
                    DataMemoryBarrier(2,2);
                    *(iVar27 + 0x47c) = *(iVar27 + 0x47c) + 1;
                    _printk(0x8000822,"qbt_read",*(puVar28 + 3),*(puVar28 + 0x1c));
                    _printk(0x8000fd8,"qbt_read",*(puVar28 + 2),*(puVar28 + 0x14),*puVar28,puVar28[1]);
                    uVar24 = *(iVar27 + 0x1ae0);
                    uVar11 = uVar11 + 1;
                    puVar28 = puVar28 + 5;
                } while (uVar11 < uVar24);
            }
            iVar27 = ktime_get();
            auVar29 = _printk(0x80013d9,"qbt_read",uVar24 & 0xffffffff,iVar27 / 1000);
            uVar11 = sym._copy_to_user(arg2,auVar29,0x1408);
            iStack_a8 = iVar14;
        }
        else {
            if (uVar13 != 1) {
                _printk(0x8000a67,"qbt_read");
                uVar11 = 0;
                goto code_r0x0800371c;
            }
            mutex_lock(iStack_a8);
            if (*puVar3 == *puVar4) {
                _printk(0x8000e84,"qbt_read");
                uVar20 = 0;
            }
            else {
                uStack_70 = *(iVar27 + (*(iVar27 + 0x1898) & *puVar4) * 4 + 0x18a8);
                DataMemoryBarrier(2,2);
                *(iVar27 + 0x1894) = *(iVar27 + 0x1894) + 1;
                uVar20 = uStack_70;
            }
            iVar27 = ktime_get();
            auVar29 = _printk(0x8000ac4,"qbt_read",uVar20,1,iVar27 / 1000);
            uVar11 = sym._copy_to_user(arg2,auVar29,4);
        }
        mutex_unlock(iStack_a8);
        if (uVar11 != 0) {
            _printk(0x8000be6,"qbt_read",uVar11);
        }
    }
code_r0x0800371c:
    iVar27 = sp_el0;
    if (*(iVar27 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    auVar29 = __stack_chk_fail();
    puVar28 = auVar29._8_8_;
    iVar27 = auVar29._0_8_;
    *extraout_x18 = sym.qbt_poll;
    if ((iVar27 == 0) || (iVar14 = *(iVar27 + 0xd8), iVar14 == 0)) {
        uVar10 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar10,"qbt_poll");
        uVar11 = 0xffffffea;
    }
    else {
        uVar13 = *(*(*(iVar27 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar13 == 1) {
            if (((puVar28 != NULL) && (iVar14 + 0x1ac0 != 0)) && (pcVar25 = *puVar28, pcVar25 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar25,0x8000470);
                (*pcVar25)(iVar27,iVar14 + 0x1ac0,puVar28);
            }
            iVar12 = *(iVar14 + 0x1890);
            iVar16 = *(iVar14 + 0x1894);
        }
        else {
            if (uVar13 != 0) {
                uVar10 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((puVar28 != NULL) && (iVar14 + 0x1aa8 != 0)) && (pcVar25 = *puVar28, pcVar25 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar25,0x8000470);
                (*pcVar25)(iVar27,iVar14 + 0x1aa8,puVar28);
            }
            iVar12 = *(iVar14 + 0x478);
            iVar16 = *(iVar14 + 0x47c);
        }
        uVar13 = 0;
        if (iVar12 != iVar16) {
            uVar13 = 0x41;
        }
        uVar11 = uVar13;
    }
    return uVar11;
}


// ===== sym.qbt_poll @ 0x08003780 (size 320) =====

uint sym.qbt_poll(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulong *in_x18;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar7 = *(arg1 + 0xd8), iVar7 == 0)) {
        uVar2 = 0x8000b14;
code_r0x080038ac:
        _printk(uVar2,"qbt_poll");
        uVar4 = 0xffffffea;
    }
    else {
        uVar1 = *(*(*(arg1 + 0x18) + 0x30) + 0x4c) & 0xfffff;
        if (uVar1 == 1) {
            if (((arg2 != 0) && (iVar7 + 0x1ac0 != 0)) && (pcVar6 = *arg2, pcVar6 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000470);
                (*pcVar6)(arg1,iVar7 + 0x1ac0,arg2);
            }
            iVar3 = *(iVar7 + 0x1890);
            iVar5 = *(iVar7 + 0x1894);
        }
        else {
            if (uVar1 != 0) {
                uVar2 = 0x8000a67;
                goto code_r0x080038ac;
            }
            if (((arg2 != 0) && (iVar7 + 0x1aa8 != 0)) && (pcVar6 = *arg2, pcVar6 != NULL)) {
                __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar6,0x8000470);
                (*pcVar6)(arg1,iVar7 + 0x1aa8,arg2);
            }
            iVar3 = *(iVar7 + 0x478);
            iVar5 = *(iVar7 + 0x47c);
        }
        uVar4 = 0;
        if (iVar3 != iVar5) {
            uVar4 = 0x41;
        }
    }
    return uVar4;
}


// ===== sym.qbt_ioctl @ 0x080038c0 (size 1396) =====

void sym.qbt_ioctl(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t *arg1_00;
    uchar uVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    int *unaff_x20;
    int *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    piVar10 = arg3;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    if ((arg1 == 0) || (iVar11 = *(arg1 + 0xd8), iVar11 == 0)) {
        _printk(0x8000b14,"qbt_ioctl");
        piVar10 = unaff_x20;
code_r0x08003908:
        iVar11 = -0x16;
        goto code_r0x0800390c;
    }
    if (0xfffffffffffff000 < piVar10) {
        _dev_err(*(iVar11 + 0x120),"%s: invalid user space pointer %lu\n","qbt_ioctl",piVar10);
        goto code_r0x08003908;
    }
    unaff_x19 = iVar11 + 0x138;
    mutex_lock(unaff_x19);
    noname_1 = _printk(0x80012a5,"qbt_ioctl",arg2 & 0xffffffff);
    uVar5 = arg2 - 100;
    if (0xc < uVar5) {
        _printk(0x8001436,"qbt_ioctl",arg2 & 0xffffffff);
        piVar10 = 0xfffffdfd00000000;
        goto code_r0x08003b9c;
    }
    //switch table (12 cases) at 0x8000490
    switch(*(uVar5 * 4 + 0x8000490) + 0x80039a4) {
    case 0x80039b8:
        uStack_40 = CONCAT71(uStack_40._1_7_,*(iVar11 + 0x1ad8));
        uVar9 = sym._copy_to_user(piVar10,noname_1,1);
        if (uVar9 == 0) break;
        uVar8 = 0x8001139;
        goto code_r0x08003d8c;
    case 0x80039f4:
        piVar10 = iVar11 + 0x2ee8;
        if (*piVar10 != 0) goto code_r0x08003db8;
        _printk(0x80009ba,"qbt_ioctl");
        pm_stay_awake(*(iVar11 + 0x120));
        goto code_r0x08003db8;
    case 0x8003a20:
        if ((*(iVar11 + 0x1ad8) != '\0') && (*(iVar11 + 0x250) == '\0')) {
            enable_irq(*(iVar11 + 0x210));
            uVar9 = 0x800135e;
            *(iVar11 + 0x250) = 1;
            goto code_r0x08003b10;
        }
        break;
    case 0x8003a54:
        if (*(iVar11 + 0x1d0) == '\0') {
            enable_irq(*(iVar11 + 0x1cc));
            uVar9 = 0x80012c0;
            *(iVar11 + 0x1d0) = 1;
code_r0x08003b10:
            _printk(uVar9,"qbt_ioctl","qbt_ioctl");
            piVar10 = NULL;
            goto code_r0x08003b9c;
        }
        break;
    case 0x8003a7c:
        if (*(iVar11 + 0x1d0) != '\0') {
            disable_irq(*(iVar11 + 0x1cc));
            *(iVar11 + 0x1d0) = 0;
            uVar9 = 0x8001231;
            goto code_r0x08003b10;
        }
        break;
    case 0x8003aa0:
        uStack_40 = 0;
        iVar7 = sym._copy_from_user(&stack0xffffffffffffffc0,piVar10,8);
        if (iVar7 == 0) {
            input_event(*(iVar11 + 0x118),1,uStack_40 & 0xffffffff,uStack_40._4_4_);
            input_event(*(iVar11 + 0x118),0,0,0);
            piVar10 = NULL;
            goto code_r0x08003b9c;
        }
        goto code_r0x08003d70;
    case 0x8003ae8:
        if ((*(iVar11 + 0x1ad8) != '\0') && (*(iVar11 + 0x250) != '\0')) {
            disable_irq(*(iVar11 + 0x210));
            *(iVar11 + 0x250) = 0;
            uVar9 = 0x8000e17;
            goto code_r0x08003b10;
        }
        break;
    case 0x8003b2c:
        uStack_40 = CONCAT44(uStack_40._4_4_,3);
        uVar9 = sym._copy_to_user(piVar10,noname_1,4);
        if (uVar9 != 0) {
            uVar8 = 0x80006cd;
            goto code_r0x08003d8c;
        }
        break;
    case 0x8003b6c:
        piVar10 = iVar11 + 0x2ee8;
        if (*piVar10 != 0) {
            Hint_Prefetch(piVar10,2,0,1);
            do {
                iVar2 = *piVar10;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                if (bVar4) {
                    *piVar10 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar2 + -1 == 0) {
                _printk(0x80006af,"qbt_ioctl");
                pm_relax(*(iVar11 + 0x120));
                piVar10 = NULL;
                goto code_r0x08003b9c;
            }
        }
        break;
    case 0x8003bb0:
        arg1_00 = iVar11 + 600;
        iVar7 = sym._copy_from_user(arg1_00,piVar10,4);
        if (iVar7 == 0) {
            if ((*arg1_00 & 0xfffffffe) != 2) {
                piVar10 = 0xffffffea00000000;
                _printk(0x80012de,"qbt_ioctl");
                goto code_r0x08003b9c;
            }
            if (*arg1_00 == 2) {
                iVar7 = sym._copy_from_user(arg1_00,piVar10,0x23);
                if (iVar7 == 0) {
                    uVar1 = *(iVar11 + 0x25c);
                    *(iVar11 + 0x278) = uVar1;
code_r0x08003cf0:
                    _printk(0x8000ca6,"qbt_ioctl",uVar1);
                    _printk(0x8001405,"qbt_ioctl",*(iVar11 + 0x260),*(iVar11 + 0x268),*(iVar11 + 0x264),
                            *(iVar11 + 0x26c));
                    _printk(0x80009d8,"qbt_ioctl",*(iVar11 + 0x25d));
                    _printk(0x8001300,"qbt_ioctl",*(iVar11 + 0x270),*(iVar11 + 0x274));
                    _printk(0x80010ac,"qbt_ioctl",*(iVar11 + 0x278));
                    piVar10 = NULL;
                    goto code_r0x08003b9c;
                }
            }
            else {
                iVar7 = sym._copy_from_user(arg1_00,piVar10,0x24);
                if (iVar7 == 0) {
                    uVar1 = *(iVar11 + 0x25c);
                    goto code_r0x08003cf0;
                }
            }
        }
        goto code_r0x08003d70;
    case 0x8003c04:
        piVar10 = 0xffffffea00000000;
        _printk(0x8000b33,"qbt_ioctl");
        goto code_r0x08003b9c;
    case 0x8003c28:
        uStack_40 = uStack_40._4_4_ << 0x20;
        iVar7 = sym._copy_from_user(&stack0xffffffffffffffc0,piVar10,4);
        if (iVar7 == 0) {
            _printk(0x8000f10,"qbt_ioctl",uStack_40 & 0xffffffff);
            uVar6 = uStack_40;
            if (*(iVar11 + 0x448) < 0x200) {
                uVar9 = gpio_to_desc();
                gpiod_set_raw_value(uVar9,uVar6 & 0xffffffff);
                piVar10 = NULL;
            }
            else {
                _printk(0x80014a5,"qbt_ioctl");
                piVar10 = NULL;
            }
            goto code_r0x08003b9c;
        }
code_r0x08003d70:
        uVar8 = 0x8001250;
        uVar9 = 0xfffffff2;
code_r0x08003d8c:
        piVar10 = 0xfffffff200000000;
        _printk(uVar8,"qbt_ioctl",uVar9);
        goto code_r0x08003b9c;
    }
    piVar10 = NULL;
code_r0x08003b9c:
    while( true ) {
        mutex_unlock(unaff_x19);
        iVar11 = piVar10 >> 0x20;
code_r0x0800390c:
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(iVar11);
code_r0x08003db8:
        Hint_Prefetch(piVar10,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
                *piVar10 = *piVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        piVar10 = NULL;
    }
    return;
}


// ===== sym.qbt_open @ 0x08003e34 (size 520) =====

ulong sym.qbt_open(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    ulong *in_x18;
    ulong uVar6;
    int64_t iVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (iVar7 = *(arg1 + 0x2b0), iVar7 == 0)) {
        uVar6 = 0x8000b14;
code_r0x08003e58:
        _printk(uVar6,"qbt_open");
        uVar6 = 0xffffffea;
    }
    else {
        uVar2 = *(arg1 + 0x4c) & 0xfffff;
        if (uVar2 == 0) {
            piVar8 = iVar7 + 0x128;
            *(arg2 + 0xd8) = iVar7 + -8;
            _printk(0x80015a1,"qbt_open",0,*(iVar7 + 0x128));
            Hint_Prefetch(piVar8,2,0,1);
            do {
                iVar3 = *piVar8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar8,0x10);
                if (bVar5) {
                    *piVar8 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                uVar6 = 0;
            }
            else {
                Hint_Prefetch(piVar8,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar8,0x10);
                    if (bVar5) {
                        *piVar8 = *piVar8 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                uVar6 = 0xfffffff0;
            }
        }
        else {
            if (uVar2 != 1) {
                uVar6 = 0x8000a67;
                goto code_r0x08003e58;
            }
            *(arg2 + 0xd8) = iVar7 + -0x90;
            piVar8 = iVar7 + 0xa0;
            _printk(0x80015a1,"qbt_open",1,*piVar8);
            piVar1 = iVar7 + 0xa4;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar3 + -1 == 0) {
                uVar6 = 0;
            }
            else {
                Hint_Prefetch(piVar1,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                        *piVar1 = *piVar1 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                uVar6 = 0xfffffff0;
            }
        }
        _printk(0x8000cf8,"qbt_open",uVar6,*piVar8);
    }
    return uVar6;
}


// ===== sym.qbt_release @ 0x0800403c (size 348) =====

ulong sym.qbt_release(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int *piVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 == 0) || (arg1 == 0)) || (iVar7 = *(arg2 + 0xd8), iVar7 == 0)) {
        uVar6 = 0x8000b14;
code_r0x08004060:
        _printk(uVar6,"qbt_release");
        uVar6 = 0xffffffea;
    }
    else {
        uVar3 = *(arg1 + 0x4c) & 0xfffff;
        piVar1 = iVar7 + 0x130;
        _printk(0x80015a1,"qbt_release",uVar3,*(iVar7 + 0x130));
        if (uVar3 == 1) {
            piVar2 = iVar7 + 0x134;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        else {
            if (uVar3 != 0) {
                uVar6 = 0x8000a67;
                goto code_r0x08004060;
            }
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        if (*(iVar7 + 0x2ee8) != 0) {
            _printk(0x80006af,"qbt_release");
            pm_relax(*(iVar7 + 0x120));
            *(iVar7 + 0x2ee8) = 0;
        }
        _printk(0x80015ce,"qbt_release",*piVar1);
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym._copy_to_user @ 0x08004198 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((__printk >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym._copy_from_user @ 0x0800430c (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((__printk >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.qbt_gpio_work_func @ 0x080044c0 (size 340) =====

ulong sym.qbt_gpio_work_func(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uchar auStack_60 [16];
    ulong uStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if (arg1 == 0) {
        uVar4 = _printk(0x8000b14,"qbt_gpio_work_func");
    }
    else {
        gpio_to_desc(*(arg1 + -0x10));
        iVar3 = gpiod_get_raw_value();
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        if (*(arg1 + 0x18c0) == '\0') {
            _printk(0x8001531,"qbt_gpio_report_event");
        }
        else {
            uVar1 = *(arg1 + -0xc) ^ iVar3 != 0;
            if ((*(arg1 + 0x34) == 0) || (*(arg1 + 0x30) != uVar1)) {
                uVar2 = *(arg1 + -0x10);
                iVar5 = ktime_get();
                _printk(0x8000c09,"qbt_gpio_report_event",uVar2,uVar1,iVar5 / 1000);
                *(arg1 + 0x30) = uVar1;
                uStack_48 = CONCAT44(uVar1,uStack_48);
                uStack_40 = uStack_40 & 0xffffffffffffff00;
                *(arg1 + 0x34) = 1;
                ktime_get();
                auStack_60 = ns_to_timespec64();
                sym.qbt_fd_report_event(arg1 + -0x218,auStack_60);
            }
        }
        uVar4 = pm_relax(*(arg1 + -0xf8));
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar7 = __stack_chk_fail();
    iVar5 = auVar7._8_8_;
    *extraout_x18 = sym.qbt_gpio_isr;
    if (iVar5 == 0) {
        _printk(0x8000b14,"qbt_gpio_isr");
    }
    else if (*(iVar5 + 0x210) == auVar7._0_4_) {
        iVar6 = ktime_get();
        _printk(0x8001561,"qbt_gpio_isr",iVar6 / 1000);
        pm_stay_awake(*(iVar5 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,iVar5 + 0x218);
    }
    else {
        _printk(0x8000d4a,"qbt_gpio_isr",auVar7._0_8_ & 0xffffffff);
    }
    return 1;
}


// ===== sym.qbt_gpio_isr @ 0x08004614 (size 196) =====

ulong sym.qbt_gpio_isr(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000b14,"qbt_gpio_isr");
    }
    else if (*(arg2 + 0x210) == arg1) {
        iVar1 = ktime_get();
        _printk(0x8001561,"qbt_gpio_isr",iVar1 / 1000);
        pm_stay_awake(*(arg2 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,arg2 + 0x218);
    }
    else {
        _printk(0x8000d4a,"qbt_gpio_isr",arg1);
    }
    return 1;
}


// ===== sym.qbt_fd_report_event @ 0x080046d8 (size 260) =====

void sym.qbt_fd_report_event(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x168);
    if (*(arg1 + 0x480) < *(arg1 + 0x478) - *(arg1 + 0x47c)) {
        _printk(0x800084c,"qbt_fd_report_event");
    }
    else {
        memmove(arg1 + (*(arg1 + 0x480) & *(arg1 + 0x478)) * 0x28 + 0x490,arg2,0x28);
        DataMemoryBarrier(2,2);
        *(arg1 + 0x478) = *(arg1 + 0x478) + 1;
        uVar1 = *(arg2 + 0x18);
        uVar2 = *(arg2 + 0x1c);
        iVar3 = ktime_get();
        _printk(0x8001014,"qbt_fd_report_event",uVar2,uVar1,iVar3 / 1000);
    }
    mutex_unlock(arg1 + 0x168);
    __wake_up(arg1 + 0x1aa8,1,1,0);
    return;
}


// ===== sym.qbt_irq_report_event @ 0x080047dc (size 276) =====

void sym.qbt_irq_report_event(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000b14,"qbt_irq_report_event");
    }
    else {
        mutex_lock(arg1 + -0x40);
        if (*(arg1 + 0x16c0) < *(arg1 + 0x16b8) - *(arg1 + 0x16bc)) {
            _printk(0x8000763,"qbt_irq_report_event",3);
        }
        else {
            *(arg1 + (*(arg1 + 0x16c0) & *(arg1 + 0x16b8)) * 4 + 0x16d0) = 3;
            DataMemoryBarrier(2,2);
            *(arg1 + 0x16b8) = *(arg1 + 0x16b8) + 1;
            iVar1 = ktime_get();
            _printk(0x8000793,"qbt_irq_report_event",3,iVar1 / 1000);
        }
        mutex_unlock(arg1 + -0x40);
        __wake_up(arg1 + 0x18e8,1,1,0);
        pm_relax(*(arg1 + -0xb8));
    }
    return;
}


// ===== sym.qbt_ipc_irq_handler @ 0x080048f0 (size 196) =====

ulong sym.qbt_ipc_irq_handler(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8000b14,"qbt_ipc_irq_handler");
    }
    else if (*(arg2 + 0x1cc) == arg1) {
        iVar1 = ktime_get();
        _printk(0x80015f0,"qbt_ipc_irq_handler",iVar1 / 1000);
        pm_stay_awake(*(arg2 + 0x120));
        queue_work_on(0x20,_of_get_named_gpio_flags,arg2 + 0x1d8);
    }
    else {
        _printk(0x8000d4a,"qbt_ipc_irq_handler",arg1);
    }
    return 1;
}


// ===== sym.qbt_touch_report_event @ 0x080049b4 (size 452) =====

void sym.qbt_touch_report_event(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint64_t uVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    iVar5 = arg4;
    *in_x18 = unaff_x30;
    iVar6 = **(arg1 + 0x20);
    if ((arg2 != 3) && (arg2 != 0)) {
        return;
    }
    uVar2 = *(iVar6 + 0x440);
    uVar4 = uVar2;
    if (9 < uVar2) {
        _printk(0x80008a1,"qbt_touch_report_event");
        return;
    }
    if (10 < uVar2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8004b78);
        (*pcVar3)();
    }
    uVar2 = arg3 - 0x2f;
    if (uVar2 < 0xb) {
    //switch table (11 cases) at 0x80004c4
        switch(*(uVar2 + 0x80004c4) * 4 + 0x8004a18) {
        case 0x8004a1c:
            *(iVar6 + 0x440) = iVar5;
            if (reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt == 0x1) {
                *(iVar6 + uVar4 * 0x10 + 700) = 1;
            }
            reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
            break;
        case 0x8004a4c:
            iVar1 = -iVar5;
            if (-1 < iVar5) {
                iVar1 = iVar5;
            }
            *(iVar6 + uVar4 * 0x10 + 0x2b0) = iVar1;
            reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
            break;
        case 0x8004a70:
            iVar1 = -iVar5;
            if (-1 < iVar5) {
                iVar1 = iVar5;
            }
            *(iVar6 + uVar4 * 0x10 + 0x2b4) = iVar1;
            reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
            break;
        case 0x8004a94:
            *(iVar6 + uVar4 * 0x10 + 0x2b8) = iVar5;
            reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x1;
            break;
        case 0x8004ab4:
code_r0x08004ab4:
            if ((reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt & 1) != 0) {
                return;
            }
            goto code_r0x08004af0;
        }
    }
    else {
        if (arg3 != 0) goto code_r0x08004ab4;
        *(iVar6 + uVar4 * 0x10 + 700) = 1;
        reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt = 0x0;
code_r0x08004af0:
        if (((*(iVar6 + 0x25c) == '\0') && (*(iVar6 + 0x278) == '\0')) && (*(iVar6 + 0x250) == '\0')) {
            _printk(0x8000a23,"qbt_touch_report_event");
            memcpy(iVar6 + 0x350,iVar6 + 0x2b0,0xa0);
        }
        else {
            _printk(0x8000d86,"qbt_touch_report_event");
            pm_stay_awake(*(iVar6 + 0x120));
            queue_work_on(0x20,_of_get_named_gpio_flags,iVar6 + 0x280);
        }
    }
    return;
}


// ===== sym.qbt_touch_connect @ 0x08004b78 (size 248) =====

int sym.qbt_touch_connect(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_strscpy,0xdc0,0x50);
    if (iVar2 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar2 + 0x18) = arg2;
        *(iVar2 + 0x20) = arg1;
        *(iVar2 + 0x10) = "qbt_touch";
        iVar1 = input_register_handle();
        if (iVar1 == 0) {
            iVar1 = input_open_device(iVar2);
            if (iVar1 == 0) {
                iVar2 = *(arg2 + 0x2b0);
                if (iVar2 == 0) {
                    iVar2 = *(arg2 + 0x240);
                }
                _printk(0x800104c,"qbt_touch_connect",iVar2);
                return 0;
            }
            _printk(0x8000b52,"qbt_touch_connect",iVar1);
            input_unregister_handle(iVar2);
        }
        else {
            _printk(0x8000731,"qbt_touch_connect",iVar1);
        }
        kfree(iVar2);
    }
    return iVar1;
}


// ===== sym.qbt_touch_disconnect @ 0x08004c70 (size 104) =====

void sym.qbt_touch_disconnect(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x18) + 0x2b0);
    if (iVar1 == 0) {
        iVar1 = *(*(arg1 + 0x18) + 0x240);
    }
    _printk(0x80007cb,"qbt_touch_disconnect",iVar1);
    input_close_device(arg1);
    input_unregister_handle(arg1);
    kfree(arg1);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004cd8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004d1c

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
    //switch table (4 cases) at 0x80004cf
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004d30);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004d34 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08004d68 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qbt_probe.a87462e69df2f7c04b58d521675786f5.cfi_jt);
    return;
}

