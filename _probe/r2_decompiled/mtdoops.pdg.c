// decompiled from mtdoops by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x08002444

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x7946ee14de9d94fb) {
                pcVar2 = sym.mtdoops_do_dump_if.cfi_jt;
                goto code_r0x0800115c;
            }
            if (arg1 != -0x550b9e52359ac614) goto code_r0x08002404;
            pcVar2 = sym.mtdoops_workfunc_write.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                goto code_r0x0800115c;
            }
            if (arg1 != -0x3257ac40236d799f) goto code_r0x08002404;
            pcVar2 = sym.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        }
code_r0x08001174:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < 0x7d57972cd3914fb1) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x4a4a6295cb9b6ffe) goto code_r0x08002404;
                pcVar2 = sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                goto code_r0x08001174;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002404;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x0800115c:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x08002404:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002458);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001198 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    kfree(*0x8000258);
    vfree(_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011a0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char *pcStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    pcStack_30 = NULL;
    if (obj.mtddev == 0x0) {
        uVar3 = 0x8000996;
    }
    else if ((_segment.ehdr & 0xfff) == 0) {
        if (0xfff < _segment.ehdr) {
            _segment.ehdr = CONCAT44(*0x8000004,0xffffffff);
            uVar2 = simple_strtoul(obj.mtddev,&pcStack_30,0);
            if (*pcStack_30 == '\0') {
                _segment.ehdr = CONCAT44(*0x8000004,uVar2);
            }
            _segment.ehdr = __kmalloc(_segment.ehdr,0xcc0);
            if (_segment.ehdr == 0) {
                uVar3 = 0xfffffff4;
            }
            else {
                memset(_segment.ehdr,0xff,_segment.ehdr);
                _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt = 0;
                *0x80001d0 = 0xfffffffe0;
                *0x80001d8 = 0x80001d8;
                *0x80001e0 = 0x80001d8;
                *0x8000200 = 0xfffffffe0;
                *0x80001e8 = sym.mtdoops_workfunc_erase.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                *0x8000208 = 0x8000208;
                *0x8000210 = 0x8000208;
                *0x8000218 = sym.mtdoops_workfunc_write.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                __platform_driver_register
                          (reloc.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt,obj.__this_module);
                register_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
                uVar3 = 0;
            }
            goto code_r0x080025b8;
        }
        uVar3 = 0x80005e7;
    }
    else {
        uVar3 = 0x80009d3;
    }
    _printk(uVar3);
    uVar3 = 0xffffffea;
code_r0x080025b8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.cleanup_module;
    unregister_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    kfree(*0x8000258);
    vfree(_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    return;
}


// ===== sym.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011a8 (size 8) =====

uint64_t sym.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    char *arg3;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg3 = NULL;
    piVar3 = platform_get_resource(param_1,0x200);
    if (piVar3 == NULL) {
        _dev_err(param_1 + 0x10,"failed to locate DT /reserved-memory resource\n");
        uVar8 = 0xffffffea;
        goto code_r0x08001e40;
    }
    uStack_3c = 0;
    *0x80001a8 = (piVar3[1] - *piVar3) + 1;
    *0x80001b0 = *piVar3;
    uVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"console-size",&uStack_3c,1,0);
    uVar8 = 0;
    uVar7 = uVar1 & uVar1 >> 0x1f;
    if (uVar7 == 0xffffffea) {
code_r0x08001d88:
        uStack_3c = 0;
        _segment.ehdr = uVar8;
        uVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"pmsg-size",&uStack_3c,1,0);
        uVar8 = 0;
        uVar7 = uVar1 & uVar1 >> 0x1f;
        if (uVar7 != 0xffffffea) {
            if (uVar1 < 0) {
                arg3 = "pmsg-size";
                goto code_r0x08001e10;
            }
            uVar8 = uStack_3c;
            if (uStack_3c < 0) {
                arg3 = "pmsg-size";
                goto code_r0x08001e38;
            }
        }
        arg3 = *0x80001a8;
        *0x80001c0 = uVar8;
        _printk(0x8000623,*0x80001b0);
        _printk(0x8000660,*0x80001c0);
        uVar8 = 0;
    }
    else {
        if (-1 < uVar1) {
            uVar8 = uStack_3c;
            if (-1 < uStack_3c) goto code_r0x08001d88;
            arg3 = "console-size";
code_r0x08001e38:
            _dev_err(param_1 + 0x10,"%s %u > INT_MAX\n");
            uVar8 = 0xffffffb5;
            goto code_r0x08001e40;
        }
        arg3 = "console-size";
code_r0x08001e10:
        uVar8 = uVar1;
        _dev_err(param_1 + 0x10,"failed to parse property %s: %d\n",arg3,uVar7);
    }
code_r0x08001e40:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mtdoops_notify_add;
    uVar8 = _segment.ehdr;
    uVar9 = *(iVar4 + 8);
    uVar5 = strcmp(*(iVar4 + 0x38),obj.mtddev);
    if (uVar5 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,*(iVar4 + 0x40));
        iVar2 = *(iVar4 + 0x40);
    }
    else {
        iVar2 = _segment.ehdr;
    }
    if (iVar2 < 0) {
        return uVar5;
    }
    if (*(iVar4 + 0x40) != iVar2) {
        return uVar5;
    }
    if (*(iVar4 + 8) < *(iVar4 + 0x10) << 1) {
        uVar6 = 0x80008a3;
    }
    else if (*(iVar4 + 0x10) < uVar8) {
        uVar6 = 0x800072c;
    }
    else {
        if (0x1000000 < *(iVar4 + 8)) {
            uVar8 = _printk(0x8000485,iVar2,0x10);
            return uVar8;
        }
        uVar8 = uVar8 & 0xffffffff;
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        _segment.ehdr = vmalloc(uVar5 + 0x3f >> 3 & 0x1ffffffffffffff8);
        if (_segment.ehdr == 0) {
            uVar8 = _printk(0x80004b6);
            return uVar8;
        }
        *0x8000170 = 5;
        *0x8000168 = sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        iVar2 = kmsg_dump_register();
        if (iVar2 != 0) {
            _printk(0x80003a8,iVar2);
            uVar8 = vfree(_segment.ehdr);
            _segment.ehdr = 0;
            return uVar8;
        }
        *0x8000188 = 0xff;
        *0x8000178 = sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        register_reboot_notifier(0x8000178);
        *0x8000190 = sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        *0x80001a0 = 0xff;
        auVar10 = atomic_notifier_chain_register(pwrkey_irq_notifier_list,0x8000190);
        *0x8000238 = 0;
        if (_segment.ehdr != 0) {
            *0x8000238 = *(iVar4 + 8) / _segment.ehdr;
        }
        *0x8000230 = iVar4;
        sym.find_next_position(auVar10._0_8_,auVar10._8_8_,arg3);
        iVar2 = *(iVar4 + 0x40);
        uVar6 = 0x800083d;
    }
    uVar8 = _printk(uVar6,iVar2);
    return uVar8;
}


// ===== sym.mtdoops_do_dump_if.cfi_jt @ 0x080011b0 (size 8) =====

void sym.mtdoops_do_dump_if.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(param_1);
    return;
}


// ===== sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011b8 (size 8) =====

void sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(void)

{
    return;
}


// ===== sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011c0 (size 8) =====

ulong sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 == 1) {
        arg1 = 5;
    }
    else {
        if (param_2 != 3) {
            return 1;
        }
        arg1 = 6;
    }
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(arg1);
    return 1;
}


// ===== sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(7);
    return 0;
}


// ===== sym.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011d0 (size 8) =====

void sym.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x40) == _segment.ehdr) && (-1 < _segment.ehdr)) {
        iVar1 = kmsg_dump_unregister(reloc.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
        if (iVar1 < 0) {
            _printk(0x8000863);
        }
        unregister_reboot_notifier(0x8000178);
        *0x8000230 = 0;
        flush_work(0x80001d0);
        flush_work(0x8000200);
    }
    return;
}


// ===== sym.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011d8 (size 8) =====

void sym.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint64_t uVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar4 = _segment.ehdr;
    uVar5 = *(param_1 + 8);
    iVar2 = strcmp(*(param_1 + 0x38),obj.mtddev);
    if (iVar2 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,*(param_1 + 0x40));
        iVar2 = *(param_1 + 0x40);
    }
    else {
        iVar2 = _segment.ehdr;
    }
    if (iVar2 < 0) {
        return;
    }
    if (*(param_1 + 0x40) != iVar2) {
        return;
    }
    if (*(param_1 + 8) < *(param_1 + 0x10) << 1) {
        uVar3 = 0x80008a3;
    }
    else if (*(param_1 + 0x10) < uVar4) {
        uVar3 = 0x800072c;
    }
    else {
        if (0x1000000 < *(param_1 + 8)) {
            _printk(0x8000485,iVar2,0x10);
            return;
        }
        uVar4 = uVar4 & 0xffffffff;
        uVar1 = 0;
        if (uVar4 != 0) {
            uVar1 = uVar5 / uVar4;
        }
        _segment.ehdr = vmalloc(uVar1 + 0x3f >> 3 & 0x1ffffffffffffff8);
        if (_segment.ehdr == 0) {
            _printk(0x80004b6);
            return;
        }
        *0x8000170 = 5;
        *0x8000168 = sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        iVar2 = kmsg_dump_register();
        if (iVar2 != 0) {
            _printk(0x80003a8,iVar2);
            vfree(_segment.ehdr);
            _segment.ehdr = 0;
            return;
        }
        *0x8000188 = 0xff;
        *0x8000178 = sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        register_reboot_notifier(0x8000178);
        *0x8000190 = sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        *0x80001a0 = 0xff;
        auVar6 = atomic_notifier_chain_register(pwrkey_irq_notifier_list,0x8000190);
        *0x8000238 = 0;
        if (_segment.ehdr != 0) {
            *0x8000238 = *(param_1 + 8) / _segment.ehdr;
        }
        *0x8000230 = param_1;
        sym.find_next_position(auVar6._0_8_,auVar6._8_8_,param_3);
        iVar2 = *(param_1 + 0x40);
        uVar3 = 0x800083d;
    }
    _printk(uVar3,iVar2);
    return;
}


// ===== sym.mtdoops_workfunc_write.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011e0 (size 8) =====

void sym.mtdoops_workfunc_write.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_write(param_1 + -0xa8);
    return;
}


// ===== sym.mtdoops_workfunc_erase.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt @ 0x080011e8 (size 8) =====

void sym.mtdoops_workfunc_erase.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t arg1;
    int iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x60);
    if (iVar8 != 0) {
        arg1 = param_1 + -0x78;
        uVar1 = *(iVar8 + 0x10);
        uVar7 = *(param_1 + 0x6c);
        uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        iVar9 = 0;
        if (uVar1 != 0) {
            iVar9 = (uVar6 * uVar7) / uVar1;
        }
        iVar9 = uVar6 * uVar7 - iVar9 * uVar1;
        if (iVar9 != 0) {
            iVar4 = 0;
            if (uVar6 != 0) {
                iVar4 = (uVar1 - iVar9) / uVar6;
            }
            uVar1 = *(param_1 + 0x6c) + iVar4;
            if (*(param_1 + 0x68) <= uVar1) {
                uVar1 = 0;
            }
            uVar7 = uVar1;
            *(param_1 + 0x6c) = uVar1;
            uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        iVar9 = 1;
        do {
            iVar4 = mtd_block_isbad(iVar8,uVar6 * uVar7);
            if (iVar4 < 1) {
                if (iVar4 < 0) {
                    uVar5 = 0x800033e;
                    goto code_r0x08001c5c;
                }
                iVar4 = sym.mtdoops_erase_block(arg1,*(param_1 + 0x6c) * _segment.ehdr);
                if ((iVar4 < 0) &&
                   (iVar4 = sym.mtdoops_erase_block(arg1,*(param_1 + 0x6c) * _segment.ehdr), iVar4 < 0)) {
                    iVar4 = sym.mtdoops_erase_block(arg1,*(param_1 + 0x6c) * _segment.ehdr);
                }
                if (-1 < iVar4) {
                    _printk(0x8000a06,*(param_1 + 0x6c),*(param_1 + 0x70));
                    return;
                }
                if (((iVar4 == -5) &&
                    (iVar4 = mtd_block_markbad(iVar8,CONCAT44(*0x8000004,_segment.ehdr) * *(param_1 + 0x6c)),
                    iVar4 < 0)) && (iVar4 != -0x5f)) {
                    uVar5 = 0x80006de;
                    goto code_r0x08001c5c;
                }
            }
            _printk(0x80004e0,CONCAT44(*0x8000004,_segment.ehdr) * *(param_1 + 0x6c));
            iVar4 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                iVar4 = *(iVar8 + 0x10) / CONCAT44(*0x8000004,_segment.ehdr);
            }
            uVar1 = *(param_1 + 0x6c) + iVar4;
            if (*(param_1 + 0x68) <= uVar1) {
                uVar1 = 0;
            }
            uVar7 = uVar1;
            *(param_1 + 0x6c) = uVar1;
            uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar2 = 0;
            if (uVar6 != 0) {
                uVar2 = *(iVar8 + 0x10) / uVar6;
            }
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = *(param_1 + 0x68) / uVar2;
            }
            uVar2 = iVar9;
            iVar9 = iVar9 + 1;
        } while (uVar3 != uVar2);
        uVar5 = 0x80002e6;
code_r0x08001c5c:
        _printk(uVar5);
    }
    return;
}


// ===== sym.mtdoops_do_dump_if @ 0x080011f0 (size 36) =====

void sym.mtdoops_do_dump_if(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(arg1);
    return;
}


// ===== sym.mtdoops_do_dump @ 0x08001214 (size 764) =====

//WARNING: Type propagation algorithm not settling

void sym.mtdoops_do_dump(int64_t arg1)

{
    int iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint64_t unaff_x19;
    int *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    int64_t aiStack_60 [4];
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    aiStack_60[3] = *(iVar9 + 0x5e0);
    aiStack_60[1] = 0;
    aiStack_60[2] = 0;
    aiStack_60[0] = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        unaff_x19 = arg1 & 0xffffffff;
        _segment.ehdr = _segment.ehdr + 1;
        _printk(0x80003dd,"mtdoops_do_dump",*0x8000240,*0x800023c,unaff_x19);
        if (((1 < _segment.ehdr) && (iVar6 = sym.mtdoops_erase_block(0x8000158,*0x800023c * _segment.ehdr), iVar6 < 0)
            ) && (iVar6 = sym.mtdoops_erase_block(0x8000158,*0x800023c * _segment.ehdr), iVar6 < 0)) {
            sym.mtdoops_erase_block(0x8000158,*0x800023c * _segment.ehdr);
        }
        if ((arg1 == 2) && (_segment.ehdr == 0)) goto code_r0x08001330;
        kmsg_dump_rewind(aiStack_60 + 1);
        goto code_r0x0800136c;
    }
    uVar7 = 0x8000429;
    do {
        _printk(uVar7);
code_r0x08001330:
        do {
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == aiStack_60[3]) {
                return;
            }
            __stack_chk_fail();
code_r0x0800136c:
            Hint_Prefetch(0x8000250,2,0,1);
            do {
                uVar5 = _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(0x8000250,0x10);
                if (bVar4) {
                    cVar3 = ExclusiveMonitorsStatus();
                    _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt =
                         _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt | 1;
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
        } while ((uVar5 & 1) != 0);
        kmsg_dump_get_buffer(aiStack_60 + 1,1,CONCAT44(*0x8000004,_segment.ehdr) + 8,0x7fff8,aiStack_60);
        Hint_Prefetch(0x8000250,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(0x8000250,0x10);
            if (bVar4) {
                cVar3 = ExclusiveMonitorsStatus();
                _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt =
                     _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt & 0xfffffffffffffffe;
            }
        } while (cVar3 != '\0');
        sym.mtdoops_add_reason(*0x8000258 + 8,unaff_x19 & 0xffffffff,*0x8000240,*0x800023c);
        piVar8 = (*0x80001a8 + *0x80001b0) - (*0x80001c0 + __printk) | 0xffffff8000000000;
        _printk(0x8000378,piVar8);
        if (*piVar8 == 0x43474244) {
            iVar1 = piVar8[1];
            iVar2 = piVar8[2];
            iVar9 = CONCAT44(*0x8000004,_segment.ehdr) + aiStack_60[0] + 8;
            iVar6 = _segment.ehdr - (aiStack_60[0] + 8);
            if (iVar2 <= iVar6) {
                iVar6 = iVar2;
            }
            if (iVar6 - iVar1 != 0 && iVar1 <= iVar6) {
                iVar10 = iVar6 - iVar1;
                memcpy(iVar9,piVar8 + 3 + (iVar2 - iVar10),iVar10);
                iVar9 = iVar9 + iVar10;
                iVar6 = iVar1;
            }
            memcpy(iVar9,piVar8 + 3,iVar6);
            sym.mtdoops_add_pmsg_head(aiStack_60[0] + CONCAT44(*0x8000004,_segment.ehdr) + 8);
        }
        else {
            _printk(0x8000539);
        }
        sym.mtdoops_write(0x8000158);
        uVar7 = 0x8000509;
    } while( true );
}


// ===== sym.mtdoops_erase_block @ 0x08001510 (size 328) =====

int sym.mtdoops_erase_block(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t extraout_x8;
    uint64_t uVar6;
    uint64_t extraout_x9;
    int64_t extraout_x10;
    uint64_t *extraout_x11;
    uint64_t *puVar7;
    uint64_t uVar8;
    uint64_t extraout_x12;
    ulong *in_x18;
    uint32_t uVar9;
    int iVar10;
    ulong unaff_x30;
    uint64_t uStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    uVar6 = _segment.ehdr;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_60 = arg2;
    iVar4 = *(arg1 + 0xd8);
    if (*(iVar4 + 0x24) == 0) {
        uVar9 = *(iVar4 + 0x10);
        iVar10 = 0;
        if (uVar9 != 0) {
            iVar10 = uStack_60 / uVar9;
        }
    }
    else {
        uVar9 = *(iVar4 + 0x10);
        iVar10 = uStack_60 >> (*(iVar4 + 0x24) & 0x3f);
    }
    uStack_50 = 0;
    uStack_58 = *(iVar4 + 0x10);
    iVar3 = mtd_erase(iVar4,&uStack_60);
    if (iVar3 == 0) {
        iVar3 = 0;
        if (uVar6 != 0) {
            iVar3 = uVar9 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
            uVar5 = (uVar9 * iVar10) / uVar6;
        }
        uVar9 = iVar3 + uVar5;
        uVar6 = uVar9;
        if (uVar9 <= uVar5) goto code_r0x080015e0;
        iVar4 = 1;
        do {
            puVar7 = *(arg1 + 0xf0) + (uVar5 >> 3 & 0x1ffffffffffffff8);
            uVar8 = iVar4 << (uVar5 & 0x3f);
            while( true ) {
                Hint_Prefetch(puVar7,2,0,1);
                do {
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(puVar7,0x10);
                    if (bVar2) {
                        *puVar7 = *puVar7 & (uVar8 ^ 0xffffffffffffffff);
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                uVar5 = uVar5 + 1;
                if (uVar5 != uVar6) break;
code_r0x080015e0:
                iVar3 = 0;
code_r0x080015e4:
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) == iStack_48) {
                    return iVar3;
                }
                __stack_chk_fail();
                uVar5 = extraout_x8;
                uVar6 = extraout_x9;
                iVar4 = extraout_x10;
                puVar7 = extraout_x11;
                uVar8 = extraout_x12;
            }
        } while( true );
    }
    _printk(0x8000a30,uStack_60,uStack_58,obj.mtddev);
    goto code_r0x080015e4;
}


// ===== sym.mtdoops_add_reason @ 0x08001658 (size 468) =====

void sym.mtdoops_add_reason(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    int iVar7;
    char *pcVar9;
    ulong uVar10;
    uint *puVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    int64_t iStack_280;
    int64_t iStack_278;
    uchar **ppuStack_270;
    code *pcStack_268;
    uint64_t uStack_260;
    uint64_t uStack_250;
    ulong uStack_248;
    uint uStack_240;
    uint uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    uint64_t uStack_220;
    int64_t iStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    int64_t iStack_1a8;
    uchar *puStack_1a0;
    code *pcStack_198;
    int64_t iStack_190;
    int64_t iStack_180;
    int iStack_178;
    uint uStack_170;
    uint uStack_168;
    uint uStack_160;
    uint uStack_158;
    uint uStack_14c;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    int64_t iStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iVar8;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    uVar13 = arg2 & 0xffffffff;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    iStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_14c = 0;
    ktime_get_coarse_real_ts64(&uStack_120);
    time64_to_tm(uStack_120,0,&uStack_148);
    if (_obj.off_boot == 0x31) {
        uStack_14c = 0x534559;
    }
    else {
        uVar3 = uStack_14c >> 0x10;
        uStack_14c = CONCAT22(uVar3 & 0xff00,0x4f4e);
    }
    if (arg4 < 2) {
        if (7 < arg2) goto code_r0x08001824;
        uVar10 = *(obj.kdump_reason + uVar13 * 8);
        pcVar9 = 
        "\n\n## Index: %d\t\n### Build: %s\t\n## REASON: %s\n#### LOG TYPE: %s\n## IsOffModeCharing:%s\n##### %04ld-%02d-%02d %02d:%02d:%02d\t\n```c\t\n"
        ;
    }
    else {
        if (7 < arg2) {
code_r0x08001824:
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8001828);
            (*pcVar6)();
        }
        uVar10 = *(obj.kdump_reason + uVar13 * 8);
        pcVar9 = 
        "\n```\n## Index: %d\t\n### Build: %s\t\n## REASON: %s\n#### LOG TYPE:%s\n## IsOffModeCharing:%s\n##### %04ld-%02d-%02d %02d:%02d:%02d\t\n```c\t\n"
        ;
    }
    uStack_158 = uStack_148;
    uStack_160 = uStack_148._4_4_;
    iStack_178 = uStack_138 + 1;
    iStack_180 = iStack_130 + 0x76c;
    uStack_168 = uStack_140;
    uStack_170 = uStack_140._4_4_;
    iVar7 = snprintf(&uStack_110,200,pcVar9,arg3 & 0xffffffffU,obj.build_fingerprint,uVar10,"LAST KMSG",
                     &uStack_14c);
    memcpy(arg1,&uStack_110,iVar7);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return;
    }
    uVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mtdoops_add_pmsg_head;
    pcStack_198 = sym.mtdoops_add_pmsg_head;
    iVar12 = sp_el0;
    iStack_1a8 = *(iVar12 + 0x5e0);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    iStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    puStack_1a0 = &stack0xffffffffffffffc0;
    iStack_190 = arg1;
    ktime_get_coarse_real_ts64(&uStack_208);
    time64_to_tm(uStack_208,0,&uStack_230);
    uStack_240 = uStack_230._4_4_;
    uStack_238 = uStack_230;
    iVar7 = snprintf(&uStack_1f8,0x50,"\n```\n#### LOG TYPE:%s\n#####%04ld-%02d-%02d %02d:%02d:%02d\t\n```c\t\n",
                     "LAST LOGCAT",iStack_218 + 0x76c,uStack_220 & 0xffffffff,uStack_228._4_4_,
                     uStack_228 & 0xffffffff);
    memcpy(uVar10,&uStack_1f8,iVar7);
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18_00 = sym.mtdoops_write;
    pcStack_268 = sym.mtdoops_write;
    iVar12 = sp_el0;
    iStack_278 = *(iVar12 + 0x5e0);
    puVar1 = iVar8 + 0xf8;
    auVar14._8_8_ = auVar14._8_8_;
    auVar14._0_8_ = *(iVar8 + 0xd8);
    iStack_280 = 0;
    ppuStack_270 = &puStack_1a0;
    uStack_260 = uVar13;
    uStack_250 = arg3 & 0xffffffffU;
    uStack_248 = uVar10;
    do {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar13 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar13 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar13 & 1) == 0) {
            puVar11 = *(iVar8 + 0x100);
            *puVar11 = *(iVar8 + 0xe8);
            puVar11[1] = 0x5d005d00;
            iVar12 = _segment.ehdr * *(iVar8 + 0xe4);
            if (auVar14._8_4_ == 0) {
                iVar7 = mtd_write(auVar14._0_8_,iVar12,_segment.ehdr,&iStack_280,*(iVar8 + 0x100));
code_r0x080019b4:
                if ((iStack_280 != _segment.ehdr) || (iVar7 < 0)) {
                    _printk(0x80007fd,_segment.ehdr * *(iVar8 + 0xe4));
                }
                uVar3 = *(iVar8 + 0xe4);
                puVar2 = *(iVar8 + 0xf0) + (uVar3 >> 3 & 0x1ffffff8);
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                        *puVar2 = *puVar2 | 1L << (uVar3 & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            else {
                iVar7 = mtd_panic_write(auVar14._0_8_,iVar12);
                if (iVar7 != -0x5f) goto code_r0x080019b4;
                _printk(0x800095e);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_278) {
            return;
        }
        auVar14 = __stack_chk_fail();
    } while( true );
}


// ===== sym.mtdoops_add_pmsg_head @ 0x0800182c (size 220) =====

void sym.mtdoops_add_pmsg_head(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_b0;
    ulong uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    int64_t iVar7;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    ktime_get_coarse_real_ts64(&uStack_88);
    time64_to_tm(uStack_88,0,&uStack_b0);
    iVar6 = snprintf(&uStack_78,0x50,"\n```\n#### LOG TYPE:%s\n#####%04ld-%02d-%02d %02d:%02d:%02d\t\n```c\t\n",
                     "LAST LOGCAT",iStack_98 + 0x76c,uStack_a0 & 0xffffffff,uStack_a8._4_4_,uStack_a8 & 0xffffffff);
    memcpy(arg1,&uStack_78,iVar6);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return;
    }
    auVar11 = __stack_chk_fail();
    iVar7 = auVar11._0_8_;
    *extraout_x18 = sym.mtdoops_write;
    pcStack_e8 = sym.mtdoops_write;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    puVar1 = iVar7 + 0xf8;
    auVar11._8_8_ = auVar11._8_8_;
    auVar11._0_8_ = *(iVar7 + 0xd8);
    iStack_100 = 0;
    puStack_f0 = &stack0xffffffffffffffe0;
    do {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar10 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar10 & 1) == 0) {
            puVar8 = *(iVar7 + 0x100);
            *puVar8 = *(iVar7 + 0xe8);
            puVar8[1] = 0x5d005d00;
            iVar9 = _segment.ehdr * *(iVar7 + 0xe4);
            if (auVar11._8_4_ == 0) {
                iVar6 = mtd_write(auVar11._0_8_,iVar9,_segment.ehdr,&iStack_100,*(iVar7 + 0x100));
code_r0x080019b4:
                if ((iStack_100 != _segment.ehdr) || (iVar6 < 0)) {
                    _printk(0x80007fd,_segment.ehdr * *(iVar7 + 0xe4));
                }
                uVar3 = *(iVar7 + 0xe4);
                puVar2 = *(iVar7 + 0xf0) + (uVar3 >> 3 & 0x1ffffff8);
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                        *puVar2 = *puVar2 | 1L << (uVar3 & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            else {
                iVar6 = mtd_panic_write(auVar11._0_8_,iVar9);
                if (iVar6 != -0x5f) goto code_r0x080019b4;
                _printk(0x800095e);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_f8) {
            return;
        }
        auVar11 = __stack_chk_fail();
    } while( true );
}


// ===== sym.mtdoops_write @ 0x08001908 (size 444) =====

void sym.mtdoops_write(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    ulong in_x1;
    uint *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puVar1 = arg1 + 0xf8;
    uVar7 = *(arg1 + 0xd8);
    iStack_40 = 0;
    do {
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
                *puVar1 = uVar10 | 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar10 & 1) == 0) {
            puVar8 = *(arg1 + 0x100);
            *puVar8 = *(arg1 + 0xe8);
            puVar8[1] = 0x5d005d00;
            iVar9 = _segment.ehdr * *(arg1 + 0xe4);
            if (in_x1 == 0) {
                iVar6 = mtd_write(uVar7,iVar9,_segment.ehdr,&iStack_40,*(arg1 + 0x100));
code_r0x080019b4:
                if ((iStack_40 != _segment.ehdr) || (iVar6 < 0)) {
                    _printk(0x80007fd,_segment.ehdr * *(arg1 + 0xe4));
                }
                uVar3 = *(arg1 + 0xe4);
                puVar2 = *(arg1 + 0xf0) + (uVar3 >> 3 & 0x1ffffff8);
                Hint_Prefetch(puVar2,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar5) {
                        *puVar2 = *puVar2 | 1L << (uVar3 & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
            }
            else {
                iVar6 = mtd_panic_write(uVar7,iVar9);
                if (iVar6 != -0x5f) goto code_r0x080019b4;
                _printk(0x800095e);
            }
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = *puVar1 & 0xfffffffffffffffe;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
        }
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_38) {
            return;
        }
        auVar11 = __stack_chk_fail();
        in_x1 = auVar11._8_8_;
        uVar7 = auVar11._0_8_;
    } while( true );
}


// ===== sym.mtdoops_workfunc_erase @ 0x08001ac4 (size 436) =====

void sym.mtdoops_workfunc_erase(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t arg1_00;
    int iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x60);
    if (iVar8 != 0) {
        arg1_00 = arg1 + -0x78;
        uVar1 = *(iVar8 + 0x10);
        uVar7 = *(arg1 + 0x6c);
        uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        iVar9 = 0;
        if (uVar1 != 0) {
            iVar9 = (uVar6 * uVar7) / uVar1;
        }
        iVar9 = uVar6 * uVar7 - iVar9 * uVar1;
        if (iVar9 != 0) {
            iVar4 = 0;
            if (uVar6 != 0) {
                iVar4 = (uVar1 - iVar9) / uVar6;
            }
            uVar1 = *(arg1 + 0x6c) + iVar4;
            if (*(arg1 + 0x68) <= uVar1) {
                uVar1 = 0;
            }
            uVar7 = uVar1;
            *(arg1 + 0x6c) = uVar1;
            uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        iVar9 = 1;
        do {
            iVar4 = mtd_block_isbad(iVar8,uVar6 * uVar7);
            if (iVar4 < 1) {
                if (iVar4 < 0) {
                    uVar5 = 0x800033e;
                    goto code_r0x08001c5c;
                }
                iVar4 = sym.mtdoops_erase_block(arg1_00,*(arg1 + 0x6c) * _segment.ehdr);
                if ((iVar4 < 0) &&
                   (iVar4 = sym.mtdoops_erase_block(arg1_00,*(arg1 + 0x6c) * _segment.ehdr), iVar4 < 0)) {
                    iVar4 = sym.mtdoops_erase_block(arg1_00,*(arg1 + 0x6c) * _segment.ehdr);
                }
                if (-1 < iVar4) {
                    _printk(0x8000a06,*(arg1 + 0x6c),*(arg1 + 0x70));
                    return;
                }
                if (((iVar4 == -5) &&
                    (iVar4 = mtd_block_markbad(iVar8,CONCAT44(*0x8000004,_segment.ehdr) * *(arg1 + 0x6c)), iVar4 < 0)
                    ) && (iVar4 != -0x5f)) {
                    uVar5 = 0x80006de;
                    goto code_r0x08001c5c;
                }
            }
            _printk(0x80004e0,CONCAT44(*0x8000004,_segment.ehdr) * *(arg1 + 0x6c));
            iVar4 = 0;
            if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
                iVar4 = *(iVar8 + 0x10) / CONCAT44(*0x8000004,_segment.ehdr);
            }
            uVar1 = *(arg1 + 0x6c) + iVar4;
            if (*(arg1 + 0x68) <= uVar1) {
                uVar1 = 0;
            }
            uVar7 = uVar1;
            *(arg1 + 0x6c) = uVar1;
            uVar6 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar2 = 0;
            if (uVar6 != 0) {
                uVar2 = *(iVar8 + 0x10) / uVar6;
            }
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = *(arg1 + 0x68) / uVar2;
            }
            uVar2 = iVar9;
            iVar9 = iVar9 + 1;
        } while (uVar3 != uVar2);
        uVar5 = 0x80002e6;
code_r0x08001c5c:
        _printk(uVar5);
    }
    return;
}


// ===== sym.mtdoops_workfunc_write @ 0x08001c78 (size 44) =====

void sym.mtdoops_workfunc_write(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_write(arg1 + -0xa8);
    return;
}


// ===== sym.mtdoops_pmsg_probe @ 0x08001ca4 (size 468) =====

uint64_t sym.mtdoops_pmsg_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    char *arg3;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg3 = NULL;
    piVar3 = platform_get_resource(arg1,0x200);
    if (piVar3 == NULL) {
        _dev_err(arg1 + 0x10,"failed to locate DT /reserved-memory resource\n");
        uVar8 = 0xffffffea;
        goto code_r0x08001e40;
    }
    uStack_3c = 0;
    *0x80001a8 = (piVar3[1] - *piVar3) + 1;
    *0x80001b0 = *piVar3;
    uVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"console-size",&uStack_3c,1,0);
    uVar8 = 0;
    uVar7 = uVar1 & uVar1 >> 0x1f;
    if (uVar7 == 0xffffffea) {
code_r0x08001d88:
        uStack_3c = 0;
        _segment.ehdr = uVar8;
        uVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"pmsg-size",&uStack_3c,1,0);
        uVar8 = 0;
        uVar7 = uVar1 & uVar1 >> 0x1f;
        if (uVar7 != 0xffffffea) {
            if (uVar1 < 0) {
                arg3 = "pmsg-size";
                goto code_r0x08001e10;
            }
            uVar8 = uStack_3c;
            if (uStack_3c < 0) {
                arg3 = "pmsg-size";
                goto code_r0x08001e38;
            }
        }
        arg3 = *0x80001a8;
        *0x80001c0 = uVar8;
        _printk(0x8000623,*0x80001b0);
        _printk(0x8000660,*0x80001c0);
        uVar8 = 0;
    }
    else {
        if (-1 < uVar1) {
            uVar8 = uStack_3c;
            if (-1 < uStack_3c) goto code_r0x08001d88;
            arg3 = "console-size";
code_r0x08001e38:
            _dev_err(arg1 + 0x10,"%s %u > INT_MAX\n");
            uVar8 = 0xffffffb5;
            goto code_r0x08001e40;
        }
        arg3 = "console-size";
code_r0x08001e10:
        uVar8 = uVar1;
        _dev_err(arg1 + 0x10,"failed to parse property %s: %d\n",arg3,uVar7);
    }
code_r0x08001e40:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mtdoops_notify_add;
    uVar8 = _segment.ehdr;
    uVar9 = *(iVar4 + 8);
    uVar5 = strcmp(*(iVar4 + 0x38),obj.mtddev);
    if (uVar5 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,*(iVar4 + 0x40));
        iVar2 = *(iVar4 + 0x40);
    }
    else {
        iVar2 = _segment.ehdr;
    }
    if (iVar2 < 0) {
        return uVar5;
    }
    if (*(iVar4 + 0x40) != iVar2) {
        return uVar5;
    }
    if (*(iVar4 + 8) < *(iVar4 + 0x10) << 1) {
        uVar6 = 0x80008a3;
    }
    else if (*(iVar4 + 0x10) < uVar8) {
        uVar6 = 0x800072c;
    }
    else {
        if (0x1000000 < *(iVar4 + 8)) {
            uVar8 = _printk(0x8000485,iVar2,0x10);
            return uVar8;
        }
        uVar8 = uVar8 & 0xffffffff;
        uVar5 = 0;
        if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
        }
        _segment.ehdr = vmalloc(uVar5 + 0x3f >> 3 & 0x1ffffffffffffff8);
        if (_segment.ehdr == 0) {
            uVar8 = _printk(0x80004b6);
            return uVar8;
        }
        *0x8000170 = 5;
        *0x8000168 = sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        iVar2 = kmsg_dump_register();
        if (iVar2 != 0) {
            _printk(0x80003a8,iVar2);
            uVar8 = vfree(_segment.ehdr);
            _segment.ehdr = 0;
            return uVar8;
        }
        *0x8000188 = 0xff;
        *0x8000178 = sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        register_reboot_notifier(0x8000178);
        *0x8000190 = sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        *0x80001a0 = 0xff;
        auVar10 = atomic_notifier_chain_register(pwrkey_irq_notifier_list,0x8000190);
        *0x8000238 = 0;
        if (_segment.ehdr != 0) {
            *0x8000238 = *(iVar4 + 8) / _segment.ehdr;
        }
        *0x8000230 = iVar4;
        sym.find_next_position(auVar10._0_8_,auVar10._8_8_,arg3);
        iVar2 = *(iVar4 + 0x40);
        uVar6 = 0x800083d;
    }
    uVar8 = _printk(uVar6,iVar2);
    return uVar8;
}


// ===== sym.mtdoops_notify_add @ 0x08001e78 (size 448) =====

void sym.mtdoops_notify_add(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t in_x2;
    uint64_t uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    uVar4 = _segment.ehdr;
    uVar5 = *(arg1 + 8);
    iVar2 = strcmp(*(arg1 + 0x38),obj.mtddev);
    if (iVar2 == 0) {
        _segment.ehdr = CONCAT44(*0x8000004,*(arg1 + 0x40));
        iVar2 = *(arg1 + 0x40);
    }
    else {
        iVar2 = _segment.ehdr;
    }
    if (iVar2 < 0) {
        return;
    }
    if (*(arg1 + 0x40) != iVar2) {
        return;
    }
    if (*(arg1 + 8) < *(arg1 + 0x10) << 1) {
        uVar3 = 0x80008a3;
    }
    else if (*(arg1 + 0x10) < uVar4) {
        uVar3 = 0x800072c;
    }
    else {
        if (0x1000000 < *(arg1 + 8)) {
            _printk(0x8000485,iVar2,0x10);
            return;
        }
        uVar4 = uVar4 & 0xffffffff;
        uVar1 = 0;
        if (uVar4 != 0) {
            uVar1 = uVar5 / uVar4;
        }
        _segment.ehdr = vmalloc(uVar1 + 0x3f >> 3 & 0x1ffffffffffffff8);
        if (_segment.ehdr == 0) {
            _printk(0x80004b6);
            return;
        }
        *0x8000170 = 5;
        *0x8000168 = sym.mtdoops_do_dump_kmsgdump.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        iVar2 = kmsg_dump_register();
        if (iVar2 != 0) {
            _printk(0x80003a8,iVar2);
            vfree(_segment.ehdr);
            _segment.ehdr = 0;
            return;
        }
        *0x8000188 = 0xff;
        *0x8000178 = sym.mtdoops_reboot_nb_handle.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        register_reboot_notifier(0x8000178);
        *0x8000190 = sym.pwrkey_long_press_irq_event.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
        *0x80001a0 = 0xff;
        auVar6 = atomic_notifier_chain_register(pwrkey_irq_notifier_list,0x8000190);
        *0x8000238 = 0;
        if (_segment.ehdr != 0) {
            *0x8000238 = *(arg1 + 8) / _segment.ehdr;
        }
        *0x8000230 = arg1;
        sym.find_next_position(auVar6._0_8_,auVar6._8_8_,in_x2);
        iVar2 = *(arg1 + 0x40);
        uVar3 = 0x800083d;
    }
    _printk(uVar3,iVar2);
    return;
}


// ===== sym.mtdoops_notify_remove @ 0x08002038 (size 132) =====

void sym.mtdoops_notify_remove(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x40) == _segment.ehdr) && (-1 < _segment.ehdr)) {
        iVar1 = kmsg_dump_unregister(reloc.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
        if (iVar1 < 0) {
            _printk(0x8000863);
        }
        unregister_reboot_notifier(0x8000178);
        *0x8000230 = 0;
        flush_work(0x80001d0);
        flush_work(0x8000200);
    }
    return;
}


// ===== sym.mtdoops_do_dump_kmsgdump @ 0x080020bc (size 12) =====

void sym.mtdoops_do_dump_kmsgdump(void)

{
    return;
}


// ===== sym.mtdoops_reboot_nb_handle @ 0x080020c8 (size 72) =====

ulong sym.mtdoops_reboot_nb_handle(ulong noname_0,uint32_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 1) {
        arg1_00 = 5;
    }
    else {
        if (arg1 != 3) {
            return 1;
        }
        arg1_00 = 6;
    }
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(arg1_00);
    return 1;
}


// ===== sym.pwrkey_long_press_irq_event @ 0x08002110 (size 44) =====

ulong sym.pwrkey_long_press_irq_event(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mtdoops_do_dump(7);
    return 0;
}


// ===== sym.find_next_position @ 0x0800213c (size 708) =====

void sym.find_next_position(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    uint64_t *extraout_x8;
    uint64_t *puVar6;
    ulong *in_x18;
    ulong uVar7;
    code *unaff_x20;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint64_t unaff_x23;
    code *unaff_x24;
    code *unaff_x25;
    int64_t unaff_x26;
    uint64_t unaff_x27;
    uint64_t unaff_x28;
    ulong unaff_x30;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iStack_78 = 0;
    uStack_70 = 0;
    if (*0x8000238 < 1) {
        iVar8 = 0;
        uVar9 = 0xffffffff;
        iVar11 = *0x8000238;
        goto code_r0x08002318;
    }
    unaff_x23 = 0;
    iVar8 = 0;
    uVar9 = 0xffffffff;
    unaff_x24 = segment.ehdr;
    unaff_x25 = segment.ehdr;
    unaff_x26 = 1;
    unaff_x20 = segment.ehdr;
    uVar7 = *0x8000230;
    do {
        iVar5 = mtd_block_isbad(uVar7,*unaff_x24 * unaff_x23);
        iVar11 = iVar8;
        if (iVar5 != 0) goto code_r0x080021b4;
        unaff_x27 = unaff_x23 >> 6;
        unaff_x28 = unaff_x26 << (unaff_x23 & 0x3f);
        puVar6 = *unaff_x25 + unaff_x27 * 8;
        uVar10 = uVar9;
        while( true ) {
            Hint_Prefetch(puVar6,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                if (bVar3) {
                    *puVar6 = *puVar6 | unaff_x28;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar5 = mtd_read(uVar7,*unaff_x24 * unaff_x23,8,&iStack_78,&uStack_70);
            iVar11 = iVar8;
            uVar9 = uVar10;
            if ((iStack_78 == 8) && ((-1 < iVar5 || (iVar5 == -0x75)))) {
                if ((uStack_70 == 0xffffffff) && (uStack_70._4_4_ == -1)) {
                    puVar6 = *unaff_x25 + unaff_x27 * 8;
                    Hint_Prefetch(puVar6,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(puVar6,0x10);
                        if (bVar3) {
                            *puVar6 = *puVar6 & (unaff_x28 ^ 0xffffffffffffffff);
                            cVar2 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar2 != '\0');
                }
                if ((((uStack_70 != 0xffffffff) && (uStack_70._4_4_ == 0x5d005d00)) &&
                    (iVar11 = unaff_x23, uVar9 = uStack_70, uVar10 != 0xffffffff)) &&
                   ((((uStack_70 >> 0x1e != 0 || (uVar10 < 0xc0000001)) &&
                     ((uStack_70 <= uVar10 || (2 < uStack_70 >> 0x1e)))) &&
                    (uVar10 < 0x80000001 || (uStack_70 <= uVar10 || uStack_70 < 0xc0000001))))) {
                    iVar11 = iVar8;
                    uVar9 = uVar10;
                }
            }
            else {
                _printk(0x8000766,*unaff_x24 * unaff_x23,iStack_78,8);
            }
code_r0x080021b4:
            iVar8 = iVar11;
            unaff_x23 = unaff_x23 + 1;
            iVar11 = *unaff_x20;
            if (unaff_x23 < *unaff_x20) break;
code_r0x08002318:
            iVar5 = uVar9 + 1;
            iVar1 = iVar11 + -1;
            if (uVar9 != 0xffffffff) {
                iVar1 = iVar8;
            }
            if (uVar9 == 0xffffffff) {
                iVar5 = 1;
            }
            uVar7 = 0x800023c;
            *0x800023c = 0;
            if (iVar1 + 1 < iVar11) {
                *0x800023c = iVar1 + 1;
            }
            *0x8000240 = 0;
            if (iVar5 != -1) {
                *0x8000240 = iVar5;
            }
            _printk(0x800068b,*0x800023c,*0x8000240,
                    *_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
            if ((*(_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt + (*0x800023c >> 3 & 0x1ffffff8))
                 >> (*0x800023c & 0x3f) & 1) != 0) {
                queue_work_on(0x20,___stack_chk_fail,0x80001d0);
            }
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail();
            puVar6 = extraout_x8;
            uVar10 = uVar9;
        }
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x08002400 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002444

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
    //switch table (4 cases) at 0x8000268
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002458);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002478 (size 368) =====

void sym.init_module(void)

{
    int64_t iVar1;
    uint uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char *pcStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    pcStack_30 = NULL;
    if (obj.mtddev == 0x0) {
        uVar3 = 0x8000996;
    }
    else if ((_segment.ehdr & 0xfff) == 0) {
        if (0xfff < _segment.ehdr) {
            _segment.ehdr = CONCAT44(*0x8000004,0xffffffff);
            uVar2 = simple_strtoul(obj.mtddev,&pcStack_30,0);
            if (*pcStack_30 == '\0') {
                _segment.ehdr = CONCAT44(*0x8000004,uVar2);
            }
            _segment.ehdr = __kmalloc(_segment.ehdr,0xcc0);
            if (_segment.ehdr == 0) {
                uVar3 = 0xfffffff4;
            }
            else {
                memset(_segment.ehdr,0xff,_segment.ehdr);
                _reloc.mtdoops_notify_remove.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt = 0;
                *0x80001d0 = 0xfffffffe0;
                *0x80001d8 = 0x80001d8;
                *0x80001e0 = 0x80001d8;
                *0x8000200 = 0xfffffffe0;
                *0x80001e8 = sym.mtdoops_workfunc_erase.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                *0x8000208 = 0x8000208;
                *0x8000210 = 0x8000208;
                *0x8000218 = sym.mtdoops_workfunc_write.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt;
                __platform_driver_register
                          (reloc.mtdoops_pmsg_probe.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt,obj.__this_module);
                register_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
                uVar3 = 0;
            }
            goto code_r0x080025b8;
        }
        uVar3 = 0x80005e7;
    }
    else {
        uVar3 = 0x80009d3;
    }
    _printk(uVar3);
    uVar3 = 0xffffffea;
code_r0x080025b8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.cleanup_module;
    unregister_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    kfree(*0x8000258);
    vfree(_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x080025e8 (size 76) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_mtd_user(reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    kfree(*0x8000258);
    vfree(_reloc.mtdoops_notify_add.10186a2d13ca0d3b022aff0ac525c89a.cfi_jt);
    return;
}

