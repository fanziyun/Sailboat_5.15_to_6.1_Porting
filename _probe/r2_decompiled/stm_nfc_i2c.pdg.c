// decompiled from stm_nfc_i2c by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 740) =====

//WARNING: Switch with 1 destination removed at 0x08004350

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x550b9e52359ac614) {
            if (arg1 != -0x7bcbda558eb245e5) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x8002350 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08004310;
                }
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08004310;
                pcVar2 = sym.st21nfc_suspend.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
                goto code_r0x080022b8;
            }
            pcVar2 = sym.st21nfc_poll.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 != -0x550b9e52359ac614) {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08004310;
                pcVar2 = sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
code_r0x080022b8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08004310;
            }
            pcVar2 = sym.st21nfc_pstate_wq.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.st21nfc_release.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
                goto code_r0x080022b8;
            }
            if (arg1 != -0x890743871a4a53) goto code_r0x08004310;
            pcVar2 = sym.st21nfc_dev_ioctl.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
        }
    }
    else if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 < 0x18aafba39062885f) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08004310;
                pcVar2 = sym.st21nfc_dev_read.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
            }
        }
        else if (arg1 == 0x18aafba39062885f) {
            pcVar2 = sym.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08004310;
            pcVar2 = sym.st21nfc_dev_write.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.i2c_addr_store.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08004310;
            pcVar2 = sym.no_llseek.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08004310;
        pcVar2 = sym.st21nfc_remove.68d789d436e77bc71172105f3c93d7a0.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004310:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004364);
    (*pcVar1)();
}


// ===== sym.st21nfc_dev_write.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x080022f0 (size 8) =====

int64_t sym.st21nfc_dev_write.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x103 < param_3) {
        param_3 = 0x104;
    }
    iVar3 = *(param_1 + 0xd8);
    uVar2 = memdup_user(param_2,param_3);
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        _printk(0x800110d,"st21nfc_dev_write");
        iVar3 = -0xe;
    }
    else {
        iVar1 = i2c_transfer_buffer_flags(*(iVar3 + -8),uVar2,param_3 & 0xffffffff,0);
        if (param_3 != iVar1) {
            _printk(0x800072e,"st21nfc_dev_write",iVar1);
            iVar1 = -5;
        }
        kfree(uVar2);
        iVar3 = iVar1;
    }
    return iVar3;
}


// ===== sym.st21nfc_dev_read.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x080022f8 (size 8) =====

uint64_t sym.st21nfc_dev_read.68d789d436e77bc71172105f3c93d7a0.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t arg2;
    ulong unaff_x30;
    uchar auVar4 [16];
    
    *in_x18 = unaff_x30;
    if (param_3 == 0) {
        return 0;
    }
    iVar3 = *(param_1 + 0xd8);
    if (0x103 < param_3) {
        param_3 = 0x104;
    }
    iVar1 = gpiod_get_value(*(iVar3 + 0x308));
    if (iVar1 == 0) {
        _printk(0x80007e9,"st21nfc_dev_read");
        memset(iVar3 + 0x50,0x7e,param_3);
        auVar4 = __check_object_size(iVar3 + 0x50,param_3,1);
        iVar3 = sym._copy_to_user(param_2,auVar4,param_3);
        arg2 = param_3;
    }
    else {
        mutex_lock(iVar3 + -0x98);
        uVar2 = i2c_transfer_buffer_flags(*(iVar3 + -8),iVar3 + 0x50,param_3 & 0xffffffff,1);
        mutex_unlock(iVar3 + -0x98);
        if (uVar2 < 0) {
            _printk(0x800135c,"st21nfc_dev_read",uVar2);
            return uVar2;
        }
        arg2 = uVar2;
        if (param_3 < arg2) {
            _printk(0x800057d,"st21nfc_dev_read",uVar2);
            return 0xfffffffffffffffb;
        }
        auVar4 = __check_object_size(iVar3 + 0x50,arg2,1);
        iVar3 = sym._copy_to_user(param_2,auVar4,arg2);
    }
    if (iVar3 != 0) {
        _printk(0x8000709,"st21nfc_dev_read");
        arg2 = 0xfffffffffffffff2;
    }
    return arg2;
}


// ===== sym.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002300 (size 8) =====

int sym.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1)

{
    bool bVar1;
    uint uVar2;
    uint8_t uVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    uchar uVar11;
    int64_t iVar12;
    ulong *in_x18;
    int64_t iVar13;
    code *pcVar14;
    uint *puVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000513,"st21nfc_probe");
    iVar13 = *(param_1 + 0x18);
    pcVar14 = *(*(iVar13 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar14,0x80003c0);
    uVar7 = (*pcVar14)(iVar13);
    if ((uVar7 & 1) == 0) {
        uVar9 = 0x800139b;
code_r0x08002a38:
        _printk(uVar9,"st21nfc_probe");
        return -0x13;
    }
    iVar13 = param_1 + 0x20;
    iVar8 = devm_kmalloc(iVar13,0x3e0,0xdc0);
    if (iVar8 == 0) {
        return -0xc;
    }
    *(iVar8 + 0xa8) = param_1;
    *(iVar8 + 0x210) = 0;
    *(*(param_1 + 0x18) + 0x6c) = 0;
    _printk(0x800102c);
    uVar7 = devm_gpiod_get(iVar13,0x8000560,1);
    *(iVar8 + 0x3b8) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        uVar9 = 0x80013b5;
        goto code_r0x08002a38;
    }
    uVar3 = sym.nfc_hw_secure_check();
    if ((uVar3 & 1) == 0) {
        uVar7 = devm_gpiod_get(iVar13,"reset",7);
        *(iVar8 + 0x3c0) = uVar7;
        if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
            uVar9 = 0x800128b;
            goto code_r0x08002a38;
        }
        uVar11 = 0;
        pcVar10 = "false";
    }
    else {
        uVar11 = 1;
        pcVar10 = "true";
    }
    reloc.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt = uVar3 & 1;
    *(iVar8 + 0x3dc) = uVar11;
    _printk(0x8000ff7,"st21nfc_probe",pcVar10);
    uVar7 = devm_gpiod_get(iVar13,"pidle",1);
    *(iVar8 + 0x3d0) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        _printk(0x8000ea6,"st21nfc_probe");
    }
    else {
        uVar9 = gpiod_to_irq();
        *(iVar8 + 0x214) = uVar9;
        iVar4 = irq_set_irq_type(uVar9,3);
        if (iVar4 != 0) {
            uVar9 = 0x80010ad;
            goto code_r0x08002e10;
        }
        iVar4 = devm_request_threaded_irq
                          (iVar13,*(iVar8 + 0x214),
                           sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,3,
                           "st21nfc_pw_stats_idle_handle",iVar8);
        if (iVar4 != 0) {
            uVar9 = 0x8000906;
            goto code_r0x08002e10;
        }
        iVar4 = sysfs_create_file_ns(iVar13,obj.dev_attr_power_stats,0);
        if (iVar4 != 0) {
            uVar9 = 0x80012db;
            goto code_r0x08002e10;
        }
        __mutex_init(iVar8 + 0x48,"&st21nfc_dev->pidle_mutex",obj.st21nfc_probe.__key);
        uVar9 = alloc_workqueue(0x8000635,0x40008,1,"st_pstate_work");
        *(iVar8 + 0x2c0) = uVar9;
        *(iVar8 + 0x2c8) = 0xfffffffe0;
        *(iVar8 + 0x2d0) = iVar8 + 0x2d0;
        *(iVar8 + 0x2d8) = iVar8 + 0x2d0;
        *(iVar8 + 0x2e0) = sym.st21nfc_pstate_wq.cfi_jt;
    }
    uVar7 = devm_gpiod_get(iVar13,"clkreq",1);
    *(iVar8 + 0x3c8) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        *(iVar8 + 0x3a0) = 0;
        obj.clk_pin_voting = 0x1;
        _printk(0x8000673,"st21nfc_probe");
    }
    else {
        uVar7 = device_property_present(iVar13,"st,clk_pinctrl");
        bVar1 = (uVar7 & 1) == 0;
        if (bVar1) {
            _printk(0x80011f4,"st21nfc_probe");
            iVar12 = 0x3b0;
        }
        else {
            _printk(0x8000dbf,"st21nfc_probe");
            iVar12 = 0x3a0;
            *(iVar8 + 0x3b0) = 1;
        }
        *(iVar8 + iVar12) = !bVar1;
        obj.clk_pin_voting = 0x0;
    }
    uVar5 = gpiod_to_irq(*(iVar8 + 0x3b8));
    *(param_1 + 0x3b4) = uVar5;
    __init_waitqueue_head(iVar8,"&st21nfc_dev->read_wq",obj.st21nfc_probe.__key);
    __mutex_init(iVar8 + 0x18,"&st21nfc_dev->read_mutex",obj.st21nfc_probe.__key);
    __mutex_init(iVar8 + 0x78,"&st21nfc_dev->irq_dir_mutex",obj.st21nfc_probe.__key);
    uVar5 = 0xffffffff;
    *(iVar8 + 0x208) = 0;
    if ((*(iVar8 + 0x3b8) != 0) && (*(iVar8 + 0x3b8) < 0xfffffffffffff001)) {
        uVar5 = desc_to_gpio();
    }
    uVar6 = 0xffffffff;
    uVar2 = *(param_1 + 0x3b4);
    if ((*(iVar8 + 0x3d0) != 0) && (*(iVar8 + 0x3d0) < 0xfffffffffffff001)) {
        uVar6 = desc_to_gpio();
    }
    _printk(0x8000efd,"st21nfc_probe",uVar5,uVar2,uVar6);
    puVar15 = iVar8 + 0xb0;
    *puVar15 = 0xff;
    *(iVar8 + 0xd8) = iVar13;
    *(iVar8 + 0xb8) = 0x80010a5;
    *(iVar8 + 0xc0) = obj.st21nfc_dev_fops;
    *(param_1 + 0xb8) = iVar8;
    iVar4 = misc_register(puVar15);
    if (iVar4 == 0) {
        iVar4 = sysfs_create_group(iVar13,obj.st21nfc_attr_grp);
        if (iVar4 == 0) {
            device_init_wakeup(iVar13,1);
            device_set_wakeup_capable(iVar13,1);
            *(iVar8 + 0x205) = 0;
            uVar9 = 0x8000f71;
            iVar4 = 0;
code_r0x08002e10:
            _printk(uVar9,"st21nfc_probe");
            return iVar4;
        }
        _printk(0x800133a,"st21nfc_probe");
        misc_deregister(puVar15);
    }
    else {
        _printk(0x800106a,"st21nfc_probe");
    }
    if ((*(iVar8 + 0x3d0) != 0) && (*(iVar8 + 0x3d0) < 0xfffffffffffff001)) {
        sysfs_remove_file_ns(iVar13,obj.dev_attr_power_stats,0);
    }
    _printk(0x800089a,"st21nfc_probe",iVar4);
    return iVar4;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002308 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800137f);
    i2c_del_driver(obj.st21nfc_st54spi_data);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002310 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000798);
    i2c_register_driver(obj.__this_module,obj.st21nfc_st54spi_data);
    return;
}


// ===== sym.st21nfc_remove.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002318 (size 8) =====

ulong sym.st21nfc_remove.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    _printk(0x8000513,"st21nfc_remove");
    uVar1 = *(iVar2 + 0x3a8);
    if (((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) && (*(iVar2 + 0x3a0) != '\0')) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        *(iVar2 + 0x3a0) = 0;
    }
    misc_deregister(iVar2 + 0xb0);
    if ((*(iVar2 + 0x3d0) != 0) && (*(iVar2 + 0x3d0) < 0xfffffffffffff001)) {
        sysfs_remove_file_ns(param_1 + 0x20,obj.dev_attr_power_stats,0);
    }
    sysfs_remove_group(param_1 + 0x20,obj.st21nfc_attr_grp);
    _printk(0x8000507,"st21nfc_remove");
    return 0;
}


// ===== sym.i2c_addr_store.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002320 (size 8) =====

int64_t sym.i2c_addr_store.68d789d436e77bc71172105f3c93d7a0.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x98);
    uStack_40 = 0;
    if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
        param_4 = 0;
    }
    else {
        iVar1 = kstrtoll(param_3,10,&uStack_40);
        if (iVar1 == 0) {
            mutex_lock(iVar3 + 0x18);
            *(*(iVar3 + 0xa8) + 2) = uStack_40;
            mutex_unlock(iVar3 + 0x18);
            param_3 = puVar2;
        }
        else {
            param_4 = -0x16;
            param_3 = puVar2;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.version_show;
    iVar1 = scnprintf(param_3,0x1000,0x800142b,"2.2.0.15");
    return iVar1;
}


// ===== sym.st21nfc_suspend.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002328 (size 8) =====

ulong sym.st21nfc_suspend.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (((((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) && (*(iVar3 + 0x204) != '\0')) &&
       (iVar1 = irq_set_irq_wake(*(param_1 + 0x394),1), iVar1 == 0)) {
        *(iVar3 + 0x205) = 1;
    }
    if ((*(iVar3 + 0x3d0) != 0) && (*(iVar3 + 0x3d0) < 0xfffffffffffff001)) {
        uVar2 = gpiod_get_value();
        *(iVar3 + 0x218) = uVar2;
    }
    return 0;
}


// ===== sym.st21nfc_resume.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002330 (size 8) =====

ulong sym.st21nfc_resume.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (((((*(param_1 + 0x10c) & 1) != 0) && (*(param_1 + 0x148) != 0)) && (*(iVar2 + 0x205) != '\0')) &&
       (iVar1 = irq_set_irq_wake(*(param_1 + 0x394),0), iVar1 == 0)) {
        *(iVar2 + 0x205) = 0;
    }
    if (*(iVar2 + 0x3d0) < 0xfffffffffffff001) {
        iVar1 = gpiod_get_value();
        if ((*(iVar2 + 0x218) == iVar1) && ((*(iVar2 + 0x20c) != 0 || (iVar1 == 0)))) {
            if (*(iVar2 + 0x20c) != 1) {
                return 0;
            }
            if (iVar1 != 0) {
                return 0;
            }
        }
        queue_work_on(0x20,*(iVar2 + 0x2c0),iVar2 + 0x2c8);
    }
    return 0;
}


// ===== sym.st21nfc_dev_ioctl.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002338 (size 8) =====

int64_t sym.st21nfc_dev_ioctl.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1,uint32_t param_2,int *param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    code *pcVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint uVar8;
    uint64_t uVar9;
    int *piVar10;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = _segment.ehdr;
    if ((param_2 & 0xff00) != 0xea00) {
        return -0x19;
    }
    iVar12 = *(param_1 + 0xd8);
    if (param_2 < 0) {
        puVar2 = sp_el0;
        uVar9 = param_2 >> 0x10 & 0x3fff;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (piVar10 = param_3, (*puVar2 >> 0x1a & 1) != 0)) {
            piVar10 = param_3 & (param_3 << 8) >> 8;
        }
        bVar4 = CARRY8(piVar10,uVar9);
        uVar9 = piVar10 + uVar9;
        uVar1 = 0;
        if (!bVar4 || uVar9 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar1) || CARRY8(uVar9 + ~uVar1,bVar4)) && uVar9 != uVar1 + !bVar4) {
            return -0xe;
        }
    }
    if ((param_2 >> 0x1e & 1) != 0) {
        puVar2 = sp_el0;
        uVar9 = param_2 >> 0x10 & 0x3fff;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (piVar10 = param_3, (*puVar2 >> 0x1a & 1) != 0)) {
            piVar10 = param_3 & (param_3 << 8) >> 8;
        }
        bVar4 = CARRY8(piVar10,uVar9);
        uVar9 = piVar10 + uVar9;
        uVar1 = 0;
        if (!bVar4 || uVar9 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar1) || CARRY8(uVar9 + ~uVar1,bVar4)) && uVar9 != uVar1 + !bVar4) {
            return -0xe;
        }
    }
    if ((param_2 != 0xea0b) && (*(iVar12 + 0x32c) != '\0')) {
        _printk(0x80013ec);
        return -1;
    }
    arg1 = iVar12 + -0xb0;
    switch(param_2) {
    case 0xea01:
code_r0x080035fc:
        iVar6 = gpiod_get_value(*(iVar12 + 0x308));
        uVar5 = iVar6 != 0;
        break;
    case 0xea02:
code_r0x080037a0:
        _printk(0x800121e,"st21nfc_dev_ioctl");
        pcVar3 = _segment.ehdr;
        if ((*(iVar12 + 0x310) != 0) && (*(iVar12 + 0x310) < 0xfffffffffffff001)) {
            if (_segment.ehdr != NULL) {
                __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000400);
                (*pcVar3)(1,_segment.ehdr);
            }
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),0);
            }
            msleep(0x14);
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),1);
            }
            usleep_range_state(10000,11000,2);
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),0);
            }
            msleep(0x14);
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),1);
            }
            _printk(0x80007c1,"st21nfc_dev_ioctl");
            pcVar3 = _segment.ehdr;
            if (_segment.ehdr != NULL) {
                __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000420);
                (*pcVar3)(0,_segment.ehdr);
            }
        }
        uVar5 = 0;
        *(iVar12 + 0x160) = 0;
        break;
    case 0xea03:
code_r0x080037d4:
        _printk(0x8000ed5);
        sym.st21nfc_loc_set_polaritymode(arg1,1);
        uVar5 = 0;
        break;
    case 0xea05:
code_r0x080037f8:
        _printk(0x800060f);
        if (obj.clk_pin_voting == 0x0) {
            uVar5 = 0;
        }
        else {
            uVar5 = sym.st21nfc_clock_select(arg1);
            if (uVar5 < 0) {
                _printk(0x8000f83,"st21nfc_dev_ioctl");
            }
        }
        sym.st21nfc_loc_set_polaritymode(arg1,4);
        break;
    case 0xea07:
code_r0x08003614:
        uVar5 = *(iVar12 + 0x328);
        break;
    case 0xea08:
code_r0x0800383c:
        _printk(0x8000549,"st21nfc_dev_ioctl");
        iVar11 = iVar12 + -0x38;
        mutex_lock(iVar11);
        if ((*(iVar12 + 0x310) != 0) && (*(iVar12 + 0x310) < 0xfffffffffffff001)) {
            if (*(iVar12 + 0x156) != '\0') {
                devm_free_irq(*(iVar12 + -8) + 0x20,*(*(iVar12 + -8) + 0x3b4),arg1);
                *(iVar12 + 0x156) = 0;
            }
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),0);
            }
            usleep_range_state(10000,11000,2);
            iVar6 = gpiod_direction_output(*(iVar12 + 0x308),1);
            if (iVar6 != 0) {
                _printk(0x8000f3c,"st21nfc_dev_ioctl");
                mutex_unlock(iVar11);
                uVar5 = 0xffffffed;
                break;
            }
            gpiod_set_value(*(iVar12 + 0x308),1);
            usleep_range_state(10000,11000,2);
            if (*(iVar12 + 0x32c) == '\0') {
                gpiod_set_value(*(iVar12 + 0x310),1);
            }
            _printk(0x80004d1,"st21nfc_dev_ioctl");
        }
        msleep(0x14);
        gpiod_set_value(*(iVar12 + 0x308),0);
        msleep(0x14);
        gpiod_set_value(*(iVar12 + 0x308),1);
        msleep(0x14);
        gpiod_set_value(*(iVar12 + 0x308),0);
        msleep(0x14);
        _printk(0x8001409,"st21nfc_dev_ioctl");
        iVar6 = gpiod_direction_input(*(iVar12 + 0x308));
        if (iVar6 != 0) {
            _printk(0x800130c,"st21nfc_dev_ioctl");
        }
        iVar7 = *(iVar12 + -8);
        *(iVar12 + 0x154) = 1;
        iVar6 = devm_request_threaded_irq
                          (iVar7 + 0x20,*(iVar7 + 0x3b4),
                           sym.st21nfc_dev_irq_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,*(iVar12 + 0x328),
                           iVar7 + 4,arg1);
        if (iVar6 != 0) {
            _printk(0x8000d6a,"st21nfc_dev_ioctl");
            mutex_unlock(iVar11);
            return -0x13;
        }
        *(iVar12 + 0x156) = 1;
        sym.st21nfc_disable_irq(arg1);
        mutex_unlock(iVar11);
        goto code_r0x080039b4;
    case 0xea0a:
        if (obj.clk_pin_voting != 0x0) {
            uVar9 = *(iVar12 + 0x2f8);
            uVar5 = 0;
            if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) break;
            if (*(iVar12 + 0x2f0) != '\0') {
                clk_disable(uVar9);
                clk_unprepare(uVar9);
                uVar5 = 0;
                *(iVar12 + 0x2f0) = 0;
                break;
            }
        }
code_r0x080039b4:
        uVar5 = 0;
        break;
    case 0xea0b:
        uVar5 = sym.nfc_dynamic_protection_ioctl(arg1,param_3);
        break;
    default:
        switch(param_2) {
        case 0x8004ea01:
            goto code_r0x080035fc;
        case 0x8004ea02:
            goto code_r0x080037a0;
        case 0x8004ea03:
            goto code_r0x080037d4;
        case 0x8004ea04:
        case 0x8004ea06:
            break;
        case 0x8004ea05:
            goto code_r0x080037f8;
        case 0x8004ea07:
            goto code_r0x08003614;
        case 0x8004ea08:
            goto code_r0x0800383c;
        default:
            if (param_2 == 0x4004ea09) {
                puVar2 = sp_el0;
                if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (piVar10 = param_3, (*puVar2 >> 0x1a & 1) != 0)) {
                    piVar10 = param_3 & (param_3 << 8) >> 8;
                }
                bVar4 = 0xfffffffffffffffb < piVar10;
                piVar10 = piVar10 + 1;
                uVar9 = 0;
                if (!bVar4 || piVar10 == NULL) {
                    uVar9 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar10 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar10,~uVar9) || CARRY8(piVar10 + ~uVar9,bVar4)) && piVar10 != uVar9 + !bVar4) {
                    uVar5 = 0xfffffff2;
                }
                else {
                    if ((param_3 & (param_3 << 8) >> 8 & 0xffffff8000000000) != 0) {
                        param_3 = NULL;
                    }
                    if ((_no_llseek >> 0x18 & 1) == 0) {
                        uVar9 = daif;
                        if ((uVar9 & 0x80) == 0) {
                            uVar1 = daif;
                            daif = uVar1 | 0xc0;
                        }
                        uVar1 = ttbr1_el1;
                        ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        ttbr0_el1 = puVar2[1];
                        InstructionSynchronizationBarrier();
                        daif = uVar9;
                    }
                    uVar5 = 0;
                    iVar6 = *param_3;
                    if ((_no_llseek >> 0x18 & 1) == 0) {
                        uVar9 = daif;
                        if ((uVar9 & 0x80) == 0) {
                            uVar1 = daif;
                            daif = uVar1 | 0xc0;
                        }
                        uVar1 = ttbr1_el1;
                        ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                        InstructionSynchronizationBarrier();
                        ttbr1_el1 = uVar1 & 0xffffffffffff;
                        InstructionSynchronizationBarrier();
                        daif = uVar9;
                    }
                    if (_segment.ehdr != NULL) {
                        __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000440);
                        uVar8 = 2;
                        if (iVar6 != 0) {
                            uVar8 = 3;
                        }
                        (*pcVar3)(uVar8,_segment.ehdr);
                        uVar5 = 0;
                    }
                }
                goto code_r0x080039b8;
            }
        }
    case 0xea04:
    case 0xea06:
    case 0xea09:
        _printk(0x8000fa7,"st21nfc_dev_ioctl",param_2);
        uVar5 = 0xffffffea;
    }
code_r0x080039b8:
    return uVar5;
}


// ===== sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002340 (size 8) =====

ulong sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,*(param_2 + 0x2c0),param_2 + 0x2c8);
    return 1;
}


// ===== sym.st21nfc_dev_irq_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002348 (size 8) =====

ulong sym.st21nfc_dev_irq_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0xa8);
    if (((*(iVar2 + 300) & 1) != 0) && (*(iVar2 + 0x168) != 0)) {
        pm_wakeup_dev_event(iVar2 + 0x20,500,0);
    }
    uVar1 = _raw_spin_lock_irqsave(param_2 + 0x208);
    if (*(param_2 + 0x204) != '\0') {
        disable_irq_nosync(*(*(param_2 + 0xa8) + 0x3b4));
        *(param_2 + 0x204) = 0;
    }
    _raw_spin_unlock_irqrestore(param_2 + 0x208,uVar1);
    __wake_up(param_2,3,1,0);
    return 1;
}


// ===== sym.version_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002350 (size 8) =====

int64_t sym.version_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800142b,"2.2.0.15");
    return iVar1;
}


// ===== sym.i2c_addr_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002358 (size 8) =====

int64_t sym.i2c_addr_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0x20) {
        *in_x18 = unaff_x30;
        iVar1 = scnprintf(param_3,0x1000,"0x%.2x\n",*(param_1 + -0x1e));
        return iVar1;
    }
    return -0x13;
}


// ===== sym.power_stats_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002360 (size 8) =====

int64_t sym.power_stats_show.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x98);
    mutex_lock(iVar6 + 0x48);
    *(iVar6 + 0x2f8) = *(iVar6 + 0x20c);
    *(iVar6 + 0x380) = *(iVar6 + 0x2a0);
    *(iVar6 + 0x388) = *(iVar6 + 0x2a8);
    *(iVar6 + 0x390) = *(iVar6 + 0x2b0);
    *(iVar6 + 0x398) = *(iVar6 + 0x2b8);
    *(iVar6 + 0x360) = *(iVar6 + 0x280);
    *(iVar6 + 0x368) = *(iVar6 + 0x288);
    *(iVar6 + 0x370) = *(iVar6 + 0x290);
    *(iVar6 + 0x378) = *(iVar6 + 0x298);
    *(iVar6 + 0x358) = *(iVar6 + 0x278);
    *(iVar6 + 0x350) = *(iVar6 + 0x270);
    *(iVar6 + 0x348) = *(iVar6 + 0x268);
    *(iVar6 + 0x340) = *(iVar6 + 0x260);
    *(iVar6 + 0x338) = *(iVar6 + 600);
    *(iVar6 + 0x330) = *(iVar6 + 0x250);
    *(iVar6 + 0x328) = *(iVar6 + 0x248);
    *(iVar6 + 800) = *(iVar6 + 0x240);
    *(iVar6 + 0x318) = *(iVar6 + 0x238);
    *(iVar6 + 0x310) = *(iVar6 + 0x230);
    *(iVar6 + 0x308) = *(iVar6 + 0x228);
    *(iVar6 + 0x300) = *(iVar6 + 0x220);
    mutex_unlock(iVar6 + 0x48);
    iVar2 = ktime_get_with_offset(1);
    iVar1 = *(iVar6 + 0x2f8);
    iVar3 = *(iVar6 + 0x308);
    iVar2 = iVar2 / 1000000;
    if (iVar1 == 0) {
        iVar3 = (iVar3 + iVar2) - *(iVar6 + 0x310);
        iVar4 = *(iVar6 + 0x328);
        iVar5 = *(iVar6 + 0x348);
    }
    else {
        iVar4 = *(iVar6 + 0x328);
        if (iVar1 == 1) {
            iVar4 = (iVar4 + iVar2) - *(iVar6 + 0x330);
            iVar5 = *(iVar6 + 0x348);
        }
        else {
            iVar5 = *(iVar6 + 0x348);
            if (iVar1 == 2) {
                iVar5 = (iVar5 + iVar2) - *(iVar6 + 0x350);
            }
        }
    }
    iVar1 = scnprintf(param_3,0x1000,
                      "NFC subsystem\nIdle mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive Reader/Writer mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\n\nError transition header --> payload state machine: 0x%llx\nError transition from an Active state when not in Idle state: 0x%llx\nError transition from Idle state to Idle state: 0x%llx\nWarning transition from Active Reader/Writer state to Idle state: 0x%llx\nError transition from Active state to Active state: 0x%llx\nError transition from Idle state to Active state with notification: 0x%llx\nError transition from Active Reader/Writer state to Active Reader/Writer state: 0x%llx\nError transition from Idle state to Active Reader/Writer state with notification: 0x%llx\n\nTotal uptime: 0x%llx Cumulative modes time: 0x%llx\n"
                      ,*(iVar6 + 0x300),iVar3,*(iVar6 + 0x310),*(iVar6 + 0x318),*(iVar6 + 800),iVar4,
                      *(iVar6 + 0x330),*(iVar6 + 0x338),*(iVar6 + 0x340),iVar5,*(iVar6 + 0x350),*(iVar6 + 0x358),
                      *(iVar6 + 0x360),*(iVar6 + 0x368),*(iVar6 + 0x370),*(iVar6 + 0x378),*(iVar6 + 0x380),
                      *(iVar6 + 0x388),*(iVar6 + 0x390),*(iVar6 + 0x398),iVar2,iVar3 + iVar4 + iVar5);
    return iVar1;
}


// ===== sym.st21nfc_release.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002368 (size 8) =====

ulong sym.st21nfc_release.68d789d436e77bc71172105f3c93d7a0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(*(param_2 + 0xd8) + 0x157) = 0;
    _printk(0x8000fba,"st21nfc_release");
    return 0;
}


// ===== sym.st21nfc_dev_open.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002370 (size 8) =====

uint sym.st21nfc_dev_open.68d789d436e77bc71172105f3c93d7a0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    uint uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0xd8);
    _printk(0x80010c9,"../../vendor/st/opensource/driver/nfc/st21nfc.c",0x249);
    if (*(iVar2 + 0x157) == '\0') {
        uVar1 = 0;
        *(iVar2 + 0x157) = 1;
    }
    else {
        uVar1 = 0xfffffff0;
        _printk(0x8001155,"st21nfc_dev_open",0xfffffff0);
    }
    return uVar1;
}


// ===== sym.no_llseek.cfi_jt @ 0x08002378 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.st21nfc_poll.68d789d436e77bc71172105f3c93d7a0.cfi_jt @ 0x08002380 (size 8) =====

uint sym.st21nfc_poll.68d789d436e77bc71172105f3c93d7a0.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xd8);
    if (param_2 != NULL) {
        pcVar3 = *param_2;
        if (iVar5 + -0xb0 != 0 && pcVar3 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80003e0);
            (*pcVar3)(param_1,iVar5 + -0xb0,param_2);
        }
    }
    iVar1 = gpiod_get_value(*(iVar5 + 0x308));
    mutex_lock(iVar5 + -0x38);
    uVar2 = _raw_spin_lock_irqsave(iVar5 + 0x158);
    if (iVar1 == 0) {
        if (*(iVar5 + 0x154) == '\0') {
            *(iVar5 + 0x154) = 1;
            enable_irq(*(*(iVar5 + -8) + 0x3b4));
        }
        uVar4 = 0;
    }
    else if (*(iVar5 + 0x154) == '\0') {
        uVar4 = 0x41;
    }
    else {
        disable_irq_nosync(*(*(iVar5 + -8) + 0x3b4));
        uVar4 = 0x41;
        *(iVar5 + 0x154) = 0;
    }
    _raw_spin_unlock_irqrestore(iVar5 + 0x158,uVar2);
    mutex_unlock(iVar5 + -0x38);
    return uVar4;
}


// ===== sym.st21nfc_pstate_wq.cfi_jt @ 0x08002388 (size 8) =====

void sym.st21nfc_pstate_wq.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = ktime_get_with_offset(1);
    iVar8 = iVar8 / 1000000;
    iVar7 = gpiod_get_value(*(param_1 + 0x108));
    uVar5 = *(param_1 + -0xbc);
    mutex_lock(param_1 + -0x280);
    if (uVar5 == (iVar7 != 0)) {
        if ((iVar7 != 0) || (*(param_1 + -0x98) != 0)) {
            iVar2 = 0x2a0;
            if (iVar7 == 0) {
                iVar2 = 0x290;
            }
            _printk(0x80010da,"st21nfc_power_stats_switch",*(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),
                    *(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),iVar8,0);
            *(param_1 + -0x2c8 + iVar2) = *(param_1 + -0x2c8 + iVar2) + 1;
            goto code_r0x08002510;
        }
        if (2 < uVar5) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(1,0x800241c);
            (*pcVar6)();
        }
    }
    else {
        if ((iVar7 == 0) || (uVar5 == 0)) {
            if ((iVar7 == 0) && (uVar5 == 2)) {
                *(param_1 + -0x30) = *(param_1 + -0x30) + 1;
                goto code_r0x080024a8;
            }
        }
        else {
            *(param_1 + -0x40) = *(param_1 + -0x40) + 1;
        }
        if (2 < uVar5) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8002538);
            (*pcVar6)();
        }
    }
code_r0x080024a8:
    _printk(0x80008da,"st21nfc_power_stats_switch",*(obj.st21nfc_power_state_name + uVar5 * 8),
            *(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),iVar8,0);
    *(param_1 + -0xbc) = iVar7 != 0;
    piVar1 = param_1 + -0xa8 + (iVar7 != 0) * 0x20;
    iVar2 = param_1 + -0xa8 + uVar5 * 0x20;
    iVar3 = *(iVar2 + 8);
    iVar4 = *(iVar2 + 0x10);
    *(iVar2 + 0x18) = iVar8;
    piVar1[2] = iVar8;
    *piVar1 = *piVar1 + 1;
    *(iVar2 + 8) = (iVar8 - iVar4) + iVar3;
code_r0x08002510:
    mutex_unlock(param_1 + -0x280);
    return;
}


// ===== sym.st21nfc_pstate_wq @ 0x08002390 (size 424) =====

void sym.st21nfc_pstate_wq(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    code *pcVar6;
    int iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = ktime_get_with_offset(1);
    iVar8 = iVar8 / 1000000;
    iVar7 = gpiod_get_value(*(arg1 + 0x108));
    uVar5 = *(arg1 + -0xbc);
    mutex_lock(arg1 + -0x280);
    if (uVar5 == (iVar7 != 0)) {
        if ((iVar7 != 0) || (*(arg1 + -0x98) != 0)) {
            iVar2 = 0x2a0;
            if (iVar7 == 0) {
                iVar2 = 0x290;
            }
            _printk(0x80010da,"st21nfc_power_stats_switch",*(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),
                    *(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),iVar8,0);
            *(arg1 + -0x2c8 + iVar2) = *(arg1 + -0x2c8 + iVar2) + 1;
            goto code_r0x08002510;
        }
        if (2 < uVar5) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(1,0x800241c);
            (*pcVar6)();
        }
    }
    else {
        if ((iVar7 == 0) || (uVar5 == 0)) {
            if ((iVar7 == 0) && (uVar5 == 2)) {
                *(arg1 + -0x30) = *(arg1 + -0x30) + 1;
                goto code_r0x080024a8;
            }
        }
        else {
            *(arg1 + -0x40) = *(arg1 + -0x40) + 1;
        }
        if (2 < uVar5) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x8002538);
            (*pcVar6)();
        }
    }
code_r0x080024a8:
    _printk(0x80008da,"st21nfc_power_stats_switch",*(obj.st21nfc_power_state_name + uVar5 * 8),
            *(obj.st21nfc_power_state_name + (iVar7 != 0) * 8),iVar8,0);
    *(arg1 + -0xbc) = iVar7 != 0;
    piVar1 = arg1 + -0xa8 + (iVar7 != 0) * 0x20;
    iVar2 = arg1 + -0xa8 + uVar5 * 0x20;
    iVar3 = *(iVar2 + 8);
    iVar4 = *(iVar2 + 0x10);
    *(iVar2 + 0x18) = iVar8;
    piVar1[2] = iVar8;
    *piVar1 = *piVar1 + 1;
    *(iVar2 + 8) = (iVar8 - iVar4) + iVar3;
code_r0x08002510:
    mutex_unlock(arg1 + -0x280);
    return;
}


// ===== sym.st21nfc_register_st54spi_cb @ 0x08002538 (size 84) =====

void sym.st21nfc_register_st54spi_cb(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000de5,"st21nfc_register_st54spi_cb");
    _segment.ehdr = arg2;
    return;
}


// ===== sym.st21nfc_unregister_st54spi_cb @ 0x0800258c (size 68) =====

void sym.st21nfc_unregister_st54spi_cb(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000de5,"st21nfc_unregister_st54spi_cb");
    _segment.ehdr = 0;
    return;
}


// ===== sym.nfc_dynamic_protection_ioctl @ 0x080025d0 (size 292) =====

uint sym.nfc_dynamic_protection_ioctl(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        *(arg1 + 0x3dc) = 0;
        if (reloc.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt == 0x1) {
            uVar3 = devm_gpiod_get(*(arg1 + 0xa8) + 0x20,"reset",7);
            *(arg1 + 0x3c0) = uVar3;
            if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
                _printk(0x800128b,"nfc_dynamic_protection_ioctl");
                uVar1 = 0xffffffed;
            }
            else {
                uVar1 = 0;
                reloc.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt = 0x0;
            }
        }
        else {
            iVar2 = gpiod_get_value(*(arg1 + 0x3c0));
            if (iVar2 == 0) {
                gpiod_set_value(*(arg1 + 0x3c0),1);
            }
            uVar1 = 0;
        }
        uVar4 = 0x800112e;
    }
    else if (arg2 == 1) {
        uVar1 = gpiod_get_value(*(arg1 + 0x3c0));
        _printk(0x8001239,"nfc_dynamic_protection_ioctl",uVar1);
        gpiod_set_value(*(arg1 + 0x3c0),0);
        uVar1 = 0;
        uVar4 = 0x8001266;
        *(arg1 + 0x3dc) = 1;
    }
    else {
        uVar1 = 0xfffffdfd;
        uVar4 = 0x80007b2;
    }
    _printk(uVar4);
    return uVar1;
}


// ===== sym.nfc_hw_secure_check @ 0x080026f4 (size 552) =====

uint32_t sym.nfc_hw_secure_check(void)

{
    bool bVar1;
    uint uVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    char *pcVar12;
    uchar uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    code *pcVar16;
    uint *puVar17;
    ulong unaff_x30;
    char acStack_98 [4];
    uint uStack_94;
    code *pcStack_90;
    ulong uStack_88;
    uint uStack_7c;
    uint *puStack_78;
    ulong uStack_70;
    char *pcStack_68;
    ulong uStack_60;
    uint *puStack_58;
    ulong uStack_50;
    code *pcStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_94 = 0x506;
    pcStack_68 = NULL;
    uStack_60 = 0;
    puStack_78 = NULL;
    uStack_70 = 0;
    acStack_98[0] = '\0';
    iVar4 = get_client_env_object(&pcStack_90);
    uVar11 = uStack_88;
    pcVar16 = pcStack_90;
    if (iVar4 == 0) {
        puStack_58 = &uStack_7c;
        pcStack_48 = NULL;
        uStack_40 = 0;
        uStack_7c = 0x108;
        uStack_50 = 4;
        __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x80003a0);
        iVar4 = (*pcVar16)(uVar11,0,&puStack_58,0x1001);
        uVar11 = uStack_40;
        pcVar16 = pcStack_48;
        if (iVar4 == 0) {
            puStack_78 = &uStack_94;
            pcStack_68 = acStack_98;
            uVar5 = 1;
            uStack_70 = 4;
            uStack_60 = 1;
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_48,0x80003a0);
            iVar4 = (*pcVar16)(uVar11,1,&puStack_78,0x11);
            _printk(0x8000fd7,iVar4,acStack_98[0]);
            if (iVar4 == 0) {
                uVar5 = acStack_98[0] == '\x01';
            }
            else if (iVar4 == 10) {
                _printk(0x80011a0);
                uVar5 = 0;
            }
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcVar16,0x80003a0);
            (*pcVar16)(uVar11,0xffff,0,0);
        }
        else {
            _printk(0x800117b,iVar4);
            if (iVar4 == 0xc) {
                _printk(0x80012b1);
                uVar5 = 0;
            }
            else {
                uVar5 = 1;
            }
        }
        uVar11 = uStack_88;
        pcVar16 = pcStack_90;
        __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x80003a0);
        (*pcVar16)(uVar11,0xffff,0,0);
    }
    else {
        _printk(0x8000647,iVar4);
        uVar5 = 1;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.st21nfc_probe;
    _printk(0x8000513,"st21nfc_probe");
    iVar15 = *(iVar8 + 0x18);
    pcVar16 = *(*(iVar15 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar16,0x80003c0);
    uVar9 = (*pcVar16)(iVar15);
    if ((uVar9 & 1) == 0) {
        uVar11 = 0x800139b;
code_r0x08002a38:
        _printk(uVar11,"st21nfc_probe");
        return 0xffffffed;
    }
    iVar15 = iVar8 + 0x20;
    iVar10 = devm_kmalloc(iVar15,0x3e0,0xdc0);
    if (iVar10 == 0) {
        return 0xfffffff4;
    }
    *(iVar10 + 0xa8) = iVar8;
    *(iVar10 + 0x210) = 0;
    *(*(iVar8 + 0x18) + 0x6c) = 0;
    _printk(0x800102c);
    uVar9 = devm_gpiod_get(iVar15,0x8000560,1);
    *(iVar10 + 0x3b8) = uVar9;
    if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        uVar11 = 0x80013b5;
        goto code_r0x08002a38;
    }
    uVar3 = sym.nfc_hw_secure_check();
    if ((uVar3 & 1) == 0) {
        uVar9 = devm_gpiod_get(iVar15,"reset",7);
        *(iVar10 + 0x3c0) = uVar9;
        if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
            uVar11 = 0x800128b;
            goto code_r0x08002a38;
        }
        uVar13 = 0;
        pcVar12 = "false";
    }
    else {
        uVar13 = 1;
        pcVar12 = "true";
    }
    reloc.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt = uVar3 & 1;
    *(iVar10 + 0x3dc) = uVar13;
    _printk(0x8000ff7,"st21nfc_probe",pcVar12);
    uVar9 = devm_gpiod_get(iVar15,"pidle",1);
    *(iVar10 + 0x3d0) = uVar9;
    if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        _printk(0x8000ea6,"st21nfc_probe");
    }
    else {
        uVar11 = gpiod_to_irq();
        *(iVar10 + 0x214) = uVar11;
        uVar5 = irq_set_irq_type(uVar11,3);
        if (uVar5 != 0) {
            uVar11 = 0x80010ad;
            goto code_r0x08002e10;
        }
        uVar5 = devm_request_threaded_irq
                          (iVar15,*(iVar10 + 0x214),
                           sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,3,
                           "st21nfc_pw_stats_idle_handle",iVar10);
        if (uVar5 != 0) {
            uVar11 = 0x8000906;
            goto code_r0x08002e10;
        }
        uVar5 = sysfs_create_file_ns(iVar15,obj.dev_attr_power_stats,0);
        if (uVar5 != 0) {
            uVar11 = 0x80012db;
            goto code_r0x08002e10;
        }
        __mutex_init(iVar10 + 0x48,"&st21nfc_dev->pidle_mutex",obj.st21nfc_probe.__key);
        uVar11 = alloc_workqueue(0x8000635,0x40008,1,"st_pstate_work");
        *(iVar10 + 0x2c0) = uVar11;
        *(iVar10 + 0x2c8) = 0xfffffffe0;
        *(iVar10 + 0x2d0) = iVar10 + 0x2d0;
        *(iVar10 + 0x2d8) = iVar10 + 0x2d0;
        *(iVar10 + 0x2e0) = sym.st21nfc_pstate_wq.cfi_jt;
    }
    uVar9 = devm_gpiod_get(iVar15,"clkreq",1);
    *(iVar10 + 0x3c8) = uVar9;
    if ((uVar9 == 0) || (0xfffffffffffff000 < uVar9)) {
        *(iVar10 + 0x3a0) = 0;
        obj.clk_pin_voting = 0x1;
        _printk(0x8000673,"st21nfc_probe");
    }
    else {
        uVar9 = device_property_present(iVar15,"st,clk_pinctrl");
        bVar1 = (uVar9 & 1) == 0;
        if (bVar1) {
            _printk(0x80011f4,"st21nfc_probe");
            iVar14 = 0x3b0;
        }
        else {
            _printk(0x8000dbf,"st21nfc_probe");
            iVar14 = 0x3a0;
            *(iVar10 + 0x3b0) = 1;
        }
        *(iVar10 + iVar14) = !bVar1;
        obj.clk_pin_voting = 0x0;
    }
    uVar6 = gpiod_to_irq(*(iVar10 + 0x3b8));
    *(iVar8 + 0x3b4) = uVar6;
    __init_waitqueue_head(iVar10,"&st21nfc_dev->read_wq",obj.st21nfc_probe.__key);
    __mutex_init(iVar10 + 0x18,"&st21nfc_dev->read_mutex",obj.st21nfc_probe.__key);
    __mutex_init(iVar10 + 0x78,"&st21nfc_dev->irq_dir_mutex",obj.st21nfc_probe.__key);
    uVar6 = 0xffffffff;
    *(iVar10 + 0x208) = 0;
    if ((*(iVar10 + 0x3b8) != 0) && (*(iVar10 + 0x3b8) < 0xfffffffffffff001)) {
        uVar6 = desc_to_gpio();
    }
    uVar7 = 0xffffffff;
    uVar2 = *(iVar8 + 0x3b4);
    if ((*(iVar10 + 0x3d0) != 0) && (*(iVar10 + 0x3d0) < 0xfffffffffffff001)) {
        uVar7 = desc_to_gpio();
    }
    _printk(0x8000efd,"st21nfc_probe",uVar6,uVar2,uVar7);
    puVar17 = iVar10 + 0xb0;
    *puVar17 = 0xff;
    *(iVar10 + 0xd8) = iVar15;
    *(iVar10 + 0xb8) = 0x80010a5;
    *(iVar10 + 0xc0) = obj.st21nfc_dev_fops;
    *(iVar8 + 0xb8) = iVar10;
    uVar5 = misc_register(puVar17);
    if (uVar5 == 0) {
        uVar5 = sysfs_create_group(iVar15,obj.st21nfc_attr_grp);
        if (uVar5 == 0) {
            device_init_wakeup(iVar15,1);
            device_set_wakeup_capable(iVar15,1);
            *(iVar10 + 0x205) = 0;
            uVar11 = 0x8000f71;
            uVar5 = 0;
code_r0x08002e10:
            _printk(uVar11,"st21nfc_probe");
            return uVar5;
        }
        _printk(0x800133a,"st21nfc_probe");
        misc_deregister(puVar17);
    }
    else {
        _printk(0x800106a,"st21nfc_probe");
    }
    if ((*(iVar10 + 0x3d0) != 0) && (*(iVar10 + 0x3d0) < 0xfffffffffffff001)) {
        sysfs_remove_file_ns(iVar15,obj.dev_attr_power_stats,0);
    }
    _printk(0x800089a,"st21nfc_probe",uVar5);
    return uVar5;
}


// ===== sym.st21nfc_probe @ 0x0800291c (size 1284) =====

int sym.st21nfc_probe(int64_t arg1)

{
    bool bVar1;
    uint uVar2;
    uint8_t uVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    char *pcVar10;
    uchar uVar11;
    int64_t iVar12;
    ulong *in_x18;
    int64_t iVar13;
    code *pcVar14;
    uint *puVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000513,"st21nfc_probe");
    iVar13 = *(arg1 + 0x18);
    pcVar14 = *(*(iVar13 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar14,0x80003c0);
    uVar7 = (*pcVar14)(iVar13);
    if ((uVar7 & 1) == 0) {
        uVar9 = 0x800139b;
code_r0x08002a38:
        _printk(uVar9,"st21nfc_probe");
        return -0x13;
    }
    iVar13 = arg1 + 0x20;
    iVar8 = devm_kmalloc(iVar13,0x3e0,0xdc0);
    if (iVar8 == 0) {
        return -0xc;
    }
    *(iVar8 + 0xa8) = arg1;
    *(iVar8 + 0x210) = 0;
    *(*(arg1 + 0x18) + 0x6c) = 0;
    _printk(0x800102c);
    uVar7 = devm_gpiod_get(iVar13,0x8000560,1);
    *(iVar8 + 0x3b8) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        uVar9 = 0x80013b5;
        goto code_r0x08002a38;
    }
    uVar3 = sym.nfc_hw_secure_check();
    if ((uVar3 & 1) == 0) {
        uVar7 = devm_gpiod_get(iVar13,"reset",7);
        *(iVar8 + 0x3c0) = uVar7;
        if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
            uVar9 = 0x800128b;
            goto code_r0x08002a38;
        }
        uVar11 = 0;
        pcVar10 = "false";
    }
    else {
        uVar11 = 1;
        pcVar10 = "true";
    }
    reloc.st21nfc_probe.68d789d436e77bc71172105f3c93d7a0.cfi_jt = uVar3 & 1;
    *(iVar8 + 0x3dc) = uVar11;
    _printk(0x8000ff7,"st21nfc_probe",pcVar10);
    uVar7 = devm_gpiod_get(iVar13,"pidle",1);
    *(iVar8 + 0x3d0) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        _printk(0x8000ea6,"st21nfc_probe");
    }
    else {
        uVar9 = gpiod_to_irq();
        *(iVar8 + 0x214) = uVar9;
        iVar4 = irq_set_irq_type(uVar9,3);
        if (iVar4 != 0) {
            uVar9 = 0x80010ad;
            goto code_r0x08002e10;
        }
        iVar4 = devm_request_threaded_irq
                          (iVar13,*(iVar8 + 0x214),
                           sym.st21nfc_dev_power_stats_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,3,
                           "st21nfc_pw_stats_idle_handle",iVar8);
        if (iVar4 != 0) {
            uVar9 = 0x8000906;
            goto code_r0x08002e10;
        }
        iVar4 = sysfs_create_file_ns(iVar13,obj.dev_attr_power_stats,0);
        if (iVar4 != 0) {
            uVar9 = 0x80012db;
            goto code_r0x08002e10;
        }
        __mutex_init(iVar8 + 0x48,"&st21nfc_dev->pidle_mutex",obj.st21nfc_probe.__key);
        uVar9 = alloc_workqueue(0x8000635,0x40008,1,"st_pstate_work");
        *(iVar8 + 0x2c0) = uVar9;
        *(iVar8 + 0x2c8) = 0xfffffffe0;
        *(iVar8 + 0x2d0) = iVar8 + 0x2d0;
        *(iVar8 + 0x2d8) = iVar8 + 0x2d0;
        *(iVar8 + 0x2e0) = sym.st21nfc_pstate_wq.cfi_jt;
    }
    uVar7 = devm_gpiod_get(iVar13,"clkreq",1);
    *(iVar8 + 0x3c8) = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        *(iVar8 + 0x3a0) = 0;
        obj.clk_pin_voting = 0x1;
        _printk(0x8000673,"st21nfc_probe");
    }
    else {
        uVar7 = device_property_present(iVar13,"st,clk_pinctrl");
        bVar1 = (uVar7 & 1) == 0;
        if (bVar1) {
            _printk(0x80011f4,"st21nfc_probe");
            iVar12 = 0x3b0;
        }
        else {
            _printk(0x8000dbf,"st21nfc_probe");
            iVar12 = 0x3a0;
            *(iVar8 + 0x3b0) = 1;
        }
        *(iVar8 + iVar12) = !bVar1;
        obj.clk_pin_voting = 0x0;
    }
    uVar5 = gpiod_to_irq(*(iVar8 + 0x3b8));
    *(arg1 + 0x3b4) = uVar5;
    __init_waitqueue_head(iVar8,"&st21nfc_dev->read_wq",obj.st21nfc_probe.__key);
    __mutex_init(iVar8 + 0x18,"&st21nfc_dev->read_mutex",obj.st21nfc_probe.__key);
    __mutex_init(iVar8 + 0x78,"&st21nfc_dev->irq_dir_mutex",obj.st21nfc_probe.__key);
    uVar5 = 0xffffffff;
    *(iVar8 + 0x208) = 0;
    if ((*(iVar8 + 0x3b8) != 0) && (*(iVar8 + 0x3b8) < 0xfffffffffffff001)) {
        uVar5 = desc_to_gpio();
    }
    uVar6 = 0xffffffff;
    uVar2 = *(arg1 + 0x3b4);
    if ((*(iVar8 + 0x3d0) != 0) && (*(iVar8 + 0x3d0) < 0xfffffffffffff001)) {
        uVar6 = desc_to_gpio();
    }
    _printk(0x8000efd,"st21nfc_probe",uVar5,uVar2,uVar6);
    puVar15 = iVar8 + 0xb0;
    *puVar15 = 0xff;
    *(iVar8 + 0xd8) = iVar13;
    *(iVar8 + 0xb8) = 0x80010a5;
    *(iVar8 + 0xc0) = obj.st21nfc_dev_fops;
    *(arg1 + 0xb8) = iVar8;
    iVar4 = misc_register(puVar15);
    if (iVar4 == 0) {
        iVar4 = sysfs_create_group(iVar13,obj.st21nfc_attr_grp);
        if (iVar4 == 0) {
            device_init_wakeup(iVar13,1);
            device_set_wakeup_capable(iVar13,1);
            *(iVar8 + 0x205) = 0;
            uVar9 = 0x8000f71;
            iVar4 = 0;
code_r0x08002e10:
            _printk(uVar9,"st21nfc_probe");
            return iVar4;
        }
        _printk(0x800133a,"st21nfc_probe");
        misc_deregister(puVar15);
    }
    else {
        _printk(0x800106a,"st21nfc_probe");
    }
    if ((*(iVar8 + 0x3d0) != 0) && (*(iVar8 + 0x3d0) < 0xfffffffffffff001)) {
        sysfs_remove_file_ns(iVar13,obj.dev_attr_power_stats,0);
    }
    _printk(0x800089a,"st21nfc_probe",iVar4);
    return iVar4;
}


// ===== sym.st21nfc_remove @ 0x08002e20 (size 204) =====

ulong sym.st21nfc_remove(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    _printk(0x8000513,"st21nfc_remove");
    uVar1 = *(iVar2 + 0x3a8);
    if (((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) && (*(iVar2 + 0x3a0) != '\0')) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
        *(iVar2 + 0x3a0) = 0;
    }
    misc_deregister(iVar2 + 0xb0);
    if ((*(iVar2 + 0x3d0) != 0) && (*(iVar2 + 0x3d0) < 0xfffffffffffff001)) {
        sysfs_remove_file_ns(arg1 + 0x20,obj.dev_attr_power_stats,0);
    }
    sysfs_remove_group(arg1 + 0x20,obj.st21nfc_attr_grp);
    _printk(0x8000507,"st21nfc_remove");
    return 0;
}


// ===== sym.st21nfc_dev_power_stats_handler @ 0x08002eec (size 52) =====

ulong sym.st21nfc_dev_power_stats_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,*(arg1 + 0x2c0),arg1 + 0x2c8);
    return 1;
}


// ===== sym.power_stats_show @ 0x08002f20 (size 524) =====

int64_t sym.power_stats_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x98);
    mutex_lock(iVar6 + 0x48);
    *(iVar6 + 0x2f8) = *(iVar6 + 0x20c);
    *(iVar6 + 0x380) = *(iVar6 + 0x2a0);
    *(iVar6 + 0x388) = *(iVar6 + 0x2a8);
    *(iVar6 + 0x390) = *(iVar6 + 0x2b0);
    *(iVar6 + 0x398) = *(iVar6 + 0x2b8);
    *(iVar6 + 0x360) = *(iVar6 + 0x280);
    *(iVar6 + 0x368) = *(iVar6 + 0x288);
    *(iVar6 + 0x370) = *(iVar6 + 0x290);
    *(iVar6 + 0x378) = *(iVar6 + 0x298);
    *(iVar6 + 0x358) = *(iVar6 + 0x278);
    *(iVar6 + 0x350) = *(iVar6 + 0x270);
    *(iVar6 + 0x348) = *(iVar6 + 0x268);
    *(iVar6 + 0x340) = *(iVar6 + 0x260);
    *(iVar6 + 0x338) = *(iVar6 + 600);
    *(iVar6 + 0x330) = *(iVar6 + 0x250);
    *(iVar6 + 0x328) = *(iVar6 + 0x248);
    *(iVar6 + 800) = *(iVar6 + 0x240);
    *(iVar6 + 0x318) = *(iVar6 + 0x238);
    *(iVar6 + 0x310) = *(iVar6 + 0x230);
    *(iVar6 + 0x308) = *(iVar6 + 0x228);
    *(iVar6 + 0x300) = *(iVar6 + 0x220);
    mutex_unlock(iVar6 + 0x48);
    iVar2 = ktime_get_with_offset(1);
    iVar1 = *(iVar6 + 0x2f8);
    iVar3 = *(iVar6 + 0x308);
    iVar2 = iVar2 / 1000000;
    if (iVar1 == 0) {
        iVar3 = (iVar3 + iVar2) - *(iVar6 + 0x310);
        iVar4 = *(iVar6 + 0x328);
        iVar5 = *(iVar6 + 0x348);
    }
    else {
        iVar4 = *(iVar6 + 0x328);
        if (iVar1 == 1) {
            iVar4 = (iVar4 + iVar2) - *(iVar6 + 0x330);
            iVar5 = *(iVar6 + 0x348);
        }
        else {
            iVar5 = *(iVar6 + 0x348);
            if (iVar1 == 2) {
                iVar5 = (iVar5 + iVar2) - *(iVar6 + 0x350);
            }
        }
    }
    iVar1 = scnprintf(arg2,0x1000,
                      "NFC subsystem\nIdle mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\nActive Reader/Writer mode:\n\tCumulative count: 0x%llx\n\tCumulative duration msec: 0x%llx\n\tLast entry timestamp msec: 0x%llx\n\tLast exit timestamp msec: 0x%llx\n\nError transition header --> payload state machine: 0x%llx\nError transition from an Active state when not in Idle state: 0x%llx\nError transition from Idle state to Idle state: 0x%llx\nWarning transition from Active Reader/Writer state to Idle state: 0x%llx\nError transition from Active state to Active state: 0x%llx\nError transition from Idle state to Active state with notification: 0x%llx\nError transition from Active Reader/Writer state to Active Reader/Writer state: 0x%llx\nError transition from Idle state to Active Reader/Writer state with notification: 0x%llx\n\nTotal uptime: 0x%llx Cumulative modes time: 0x%llx\n"
                      ,*(iVar6 + 0x300),iVar3,*(iVar6 + 0x310),*(iVar6 + 0x318),*(iVar6 + 800),iVar4,
                      *(iVar6 + 0x330),*(iVar6 + 0x338),*(iVar6 + 0x340),iVar5,*(iVar6 + 0x350),*(iVar6 + 0x358),
                      *(iVar6 + 0x360),*(iVar6 + 0x368),*(iVar6 + 0x370),*(iVar6 + 0x378),*(iVar6 + 0x380),
                      *(iVar6 + 0x388),*(iVar6 + 0x390),*(iVar6 + 0x398),iVar2,iVar3 + iVar4 + iVar5);
    return iVar1;
}


// ===== sym.st21nfc_dev_read @ 0x0800312c (size 376) =====

uint64_t sym.st21nfc_dev_read(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t arg2_00;
    ulong *in_x18;
    int64_t iVar3;
    uint64_t arg2_01;
    ulong unaff_x30;
    uchar auVar4 [16];
    
    arg2_00 = arg3;
    *in_x18 = unaff_x30;
    if (arg2_00 == 0) {
        return 0;
    }
    iVar3 = *(arg1 + 0xd8);
    if (0x103 < arg2_00) {
        arg2_00 = 0x104;
    }
    iVar1 = gpiod_get_value(*(iVar3 + 0x308));
    if (iVar1 == 0) {
        _printk(0x80007e9,"st21nfc_dev_read");
        memset(iVar3 + 0x50,0x7e,arg2_00);
        auVar4 = __check_object_size(iVar3 + 0x50,arg2_00,1);
        iVar3 = sym._copy_to_user(arg2,auVar4,arg2_00);
        arg2_01 = arg2_00;
    }
    else {
        mutex_lock(iVar3 + -0x98);
        uVar2 = i2c_transfer_buffer_flags(*(iVar3 + -8),iVar3 + 0x50,arg2_00,1);
        mutex_unlock(iVar3 + -0x98);
        if (uVar2 < 0) {
            _printk(0x800135c,"st21nfc_dev_read",uVar2);
            return uVar2;
        }
        arg2_01 = uVar2;
        if (arg2_00 < arg2_01) {
            _printk(0x800057d,"st21nfc_dev_read",uVar2);
            return 0xfffffffffffffffb;
        }
        auVar4 = __check_object_size(iVar3 + 0x50,arg2_01,1);
        iVar3 = sym._copy_to_user(arg2,auVar4,arg2_01);
    }
    if (iVar3 != 0) {
        _printk(0x8000709,"st21nfc_dev_read");
        arg2_01 = 0xfffffffffffffff2;
    }
    return arg2_01;
}


// ===== sym.st21nfc_dev_write @ 0x080032a4 (size 196) =====

int64_t sym.st21nfc_dev_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    uVar3 = arg3;
    *in_x18 = unaff_x30;
    if (0x103 < uVar3) {
        uVar3 = 0x104;
    }
    iVar4 = *(arg1 + 0xd8);
    uVar2 = memdup_user(arg2,uVar3);
    if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
        _printk(0x800110d,"st21nfc_dev_write");
        iVar4 = -0xe;
    }
    else {
        iVar1 = i2c_transfer_buffer_flags(*(iVar4 + -8),uVar2,uVar3,0);
        if (uVar3 != iVar1) {
            _printk(0x800072e,"st21nfc_dev_write",iVar1);
            iVar1 = -5;
        }
        kfree(uVar2);
        iVar4 = iVar1;
    }
    return iVar4;
}


// ===== sym.st21nfc_poll @ 0x08003368 (size 276) =====

uint sym.st21nfc_poll(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    if (arg2 != 0) {
        pcVar3 = *arg2;
        if (iVar5 + -0xb0 != 0 && pcVar3 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80003e0);
            (*pcVar3)(arg1,iVar5 + -0xb0,arg2);
        }
    }
    iVar1 = gpiod_get_value(*(iVar5 + 0x308));
    mutex_lock(iVar5 + -0x38);
    uVar2 = _raw_spin_lock_irqsave(iVar5 + 0x158);
    if (iVar1 == 0) {
        if (*(iVar5 + 0x154) == '\0') {
            *(iVar5 + 0x154) = 1;
            enable_irq(*(*(iVar5 + -8) + 0x3b4));
        }
        uVar4 = 0;
    }
    else if (*(iVar5 + 0x154) == '\0') {
        uVar4 = 0x41;
    }
    else {
        disable_irq_nosync(*(*(iVar5 + -8) + 0x3b4));
        uVar4 = 0x41;
        *(iVar5 + 0x154) = 0;
    }
    _raw_spin_unlock_irqrestore(iVar5 + 0x158,uVar2);
    mutex_unlock(iVar5 + -0x38);
    return uVar4;
}


// ===== sym.st21nfc_dev_ioctl @ 0x0800347c (size 1808) =====

int64_t sym.st21nfc_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    uVar4 = arg2;
    if ((uVar4 & 0xff00) != 0xea00) {
        return -0x19;
    }
    iVar11 = *(arg1 + 0xd8);
    if (uVar4 < 0) {
        puVar1 = sp_el0;
        uVar8 = uVar4 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar9 = arg3 & (arg3 << 8) >> 8;
        }
        bVar3 = CARRY8(uVar9,uVar8);
        uVar9 = uVar9 + uVar8;
        uVar8 = 0;
        if (!bVar3 || uVar9 == 0) {
            uVar8 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar8) || CARRY8(uVar9 + ~uVar8,bVar3)) && uVar9 != uVar8 + !bVar3) {
            return -0xe;
        }
    }
    if ((uVar4 >> 0x1e & 1) != 0) {
        puVar1 = sp_el0;
        uVar8 = uVar4 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar9 = arg3 & (arg3 << 8) >> 8;
        }
        bVar3 = CARRY8(uVar9,uVar8);
        uVar9 = uVar9 + uVar8;
        uVar8 = 0;
        if (!bVar3 || uVar9 == 0) {
            uVar8 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar8) || CARRY8(uVar9 + ~uVar8,bVar3)) && uVar9 != uVar8 + !bVar3) {
            return -0xe;
        }
    }
    if ((uVar4 != 0xea0b) && (*(iVar11 + 0x32c) != '\0')) {
        _printk(0x80013ec);
        return -1;
    }
    arg1_00 = iVar11 + -0xb0;
    if (uVar4 - 0xea01 < 0xb) {
    //switch table (11 cases) at 0x8000480
        switch(*((uVar4 - 0xea01) * 4 + 0x8000480) + 0x8003564) {
        case 0x8003578:
            if (obj.clk_pin_voting != 0x0) {
                uVar8 = *(iVar11 + 0x2f8);
                uVar4 = 0;
                if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) goto code_r0x080039b8;
                if (*(iVar11 + 0x2f0) != '\0') {
                    clk_disable(uVar8);
                    clk_unprepare(uVar8);
                    uVar4 = 0;
                    *(iVar11 + 0x2f0) = 0;
                    goto code_r0x080039b8;
                }
            }
            break;
        case 0x80035fc:
code_r0x080035fc:
            iVar5 = gpiod_get_value(*(iVar11 + 0x308));
            uVar4 = iVar5 != 0;
            goto code_r0x080039b8;
        case 0x8003614:
code_r0x08003614:
            uVar4 = *(iVar11 + 0x328);
            goto code_r0x080039b8;
        case 0x800376c:
            uVar4 = sym.nfc_dynamic_protection_ioctl(arg1_00,arg3);
            goto code_r0x080039b8;
        case 0x80037a0:
code_r0x080037a0:
            _printk(0x800121e,"st21nfc_dev_ioctl");
            pcVar2 = _segment.ehdr;
            if ((*(iVar11 + 0x310) != 0) && (*(iVar11 + 0x310) < 0xfffffffffffff001)) {
                if (_segment.ehdr != NULL) {
                    __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000400);
                    (*pcVar2)(1,_segment.ehdr);
                }
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),0);
                }
                msleep(0x14);
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),1);
                }
                usleep_range_state(10000,11000,2);
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),0);
                }
                msleep(0x14);
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),1);
                }
                _printk(0x80007c1,"st21nfc_dev_ioctl");
                pcVar2 = _segment.ehdr;
                if (_segment.ehdr != NULL) {
                    __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000420);
                    (*pcVar2)(0,_segment.ehdr);
                }
            }
            uVar4 = 0;
            *(iVar11 + 0x160) = 0;
            goto code_r0x080039b8;
        case 0x80037d4:
code_r0x080037d4:
            _printk(0x8000ed5);
            sym.st21nfc_loc_set_polaritymode(arg1_00,1);
            uVar4 = 0;
            goto code_r0x080039b8;
        case 0x80037f8:
code_r0x080037f8:
            _printk(0x800060f);
            if (obj.clk_pin_voting == 0x0) {
                uVar4 = 0;
            }
            else {
                uVar4 = sym.st21nfc_clock_select(arg1_00);
                if (uVar4 < 0) {
                    _printk(0x8000f83,"st21nfc_dev_ioctl");
                }
            }
            sym.st21nfc_loc_set_polaritymode(arg1_00,4);
            goto code_r0x080039b8;
        case 0x800383c:
code_r0x0800383c:
            _printk(0x8000549,"st21nfc_dev_ioctl");
            iVar10 = iVar11 + -0x38;
            mutex_lock(iVar10);
            if ((*(iVar11 + 0x310) != 0) && (*(iVar11 + 0x310) < 0xfffffffffffff001)) {
                if (*(iVar11 + 0x156) != '\0') {
                    devm_free_irq(*(iVar11 + -8) + 0x20,*(*(iVar11 + -8) + 0x3b4),arg1_00);
                    *(iVar11 + 0x156) = 0;
                }
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),0);
                }
                usleep_range_state(10000,11000,2);
                iVar5 = gpiod_direction_output(*(iVar11 + 0x308),1);
                if (iVar5 != 0) {
                    _printk(0x8000f3c,"st21nfc_dev_ioctl");
                    mutex_unlock(iVar10);
                    uVar4 = 0xffffffed;
                    goto code_r0x080039b8;
                }
                gpiod_set_value(*(iVar11 + 0x308),1);
                usleep_range_state(10000,11000,2);
                if (*(iVar11 + 0x32c) == '\0') {
                    gpiod_set_value(*(iVar11 + 0x310),1);
                }
                _printk(0x80004d1,"st21nfc_dev_ioctl");
            }
            msleep(0x14);
            gpiod_set_value(*(iVar11 + 0x308),0);
            msleep(0x14);
            gpiod_set_value(*(iVar11 + 0x308),1);
            msleep(0x14);
            gpiod_set_value(*(iVar11 + 0x308),0);
            msleep(0x14);
            _printk(0x8001409,"st21nfc_dev_ioctl");
            iVar5 = gpiod_direction_input(*(iVar11 + 0x308));
            if (iVar5 != 0) {
                _printk(0x800130c,"st21nfc_dev_ioctl");
            }
            iVar6 = *(iVar11 + -8);
            *(iVar11 + 0x154) = 1;
            iVar5 = devm_request_threaded_irq
                              (iVar6 + 0x20,*(iVar6 + 0x3b4),
                               sym.st21nfc_dev_irq_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,*(iVar11 + 0x328)
                               ,iVar6 + 4,arg1_00);
            if (iVar5 != 0) {
                _printk(0x8000d6a,"st21nfc_dev_ioctl");
                mutex_unlock(iVar10);
                return -0x13;
            }
            *(iVar11 + 0x156) = 1;
            sym.st21nfc_disable_irq(arg1_00);
            mutex_unlock(iVar10);
            break;
        case 0x80039d8:
            goto code_r0x080039d8;
        }
        uVar4 = 0;
    }
    else {
        if (uVar4 + 0x7ffb15ff < 8) {
    //switch table (8 cases) at 0x8000460
            switch(*((uVar4 + 0x7ffb15ff) * 4 + 0x8000460) + 0x80035e8) {
            case 0x80035fc:
                goto code_r0x080035fc;
            case 0x8003614:
                goto code_r0x08003614;
            case 0x80037a0:
                goto code_r0x080037a0;
            case 0x80037d4:
                goto code_r0x080037d4;
            case 0x80037f8:
                goto code_r0x080037f8;
            case 0x800383c:
                goto code_r0x0800383c;
            }
        }
        else if (uVar4 == 0x4004ea09) {
            puVar1 = sp_el0;
            if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar8 = arg3, (*puVar1 >> 0x1a & 1) != 0)) {
                uVar8 = arg3 & (arg3 << 8) >> 8;
            }
            bVar3 = 0xfffffffffffffffb < uVar8;
            uVar8 = uVar8 + 4;
            uVar9 = 0;
            if (!bVar3 || uVar8 == 0) {
                uVar9 = 0x7fffffffff;
            }
            if (bVar3) {
                uVar8 = 0xffffffffffffffff;
            }
            if ((CARRY8(uVar8,~uVar9) || CARRY8(uVar8 + ~uVar9,bVar3)) && uVar8 != uVar9 + !bVar3) {
                uVar4 = 0xfffffff2;
            }
            else {
                if ((arg3 & (arg3 << 8) >> 8 & 0xffffff8000000000U) != 0) {
                    arg3 = 0;
                }
                if ((_no_llseek >> 0x18 & 1) == 0) {
                    uVar8 = daif;
                    if ((uVar8 & 0x80) == 0) {
                        uVar9 = daif;
                        daif = uVar9 | 0xc0;
                    }
                    uVar9 = ttbr1_el1;
                    ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar9 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar1[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar8;
                }
                uVar4 = 0;
                iVar5 = *arg3;
                if ((_no_llseek >> 0x18 & 1) == 0) {
                    uVar8 = daif;
                    if ((uVar8 & 0x80) == 0) {
                        uVar9 = daif;
                        daif = uVar9 | 0xc0;
                    }
                    uVar9 = ttbr1_el1;
                    ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar9 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar8;
                }
                if (_segment.ehdr != NULL) {
                    __cfi_slowpath_diag(0x77079828fb981a70,_segment.ehdr,0x8000440);
                    uVar7 = 2;
                    if (iVar5 != 0) {
                        uVar7 = 3;
                    }
                    (*pcVar2)(uVar7,_segment.ehdr);
                    uVar4 = 0;
                }
            }
            goto code_r0x080039b8;
        }
code_r0x080039d8:
        _printk(0x8000fa7,"st21nfc_dev_ioctl",arg2 & 0xffffffff);
        uVar4 = 0xffffffea;
    }
code_r0x080039b8:
    return uVar4;
}


// ===== sym.st21nfc_dev_open @ 0x08003bc8 (size 124) =====

uint sym.st21nfc_dev_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    uint uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xd8);
    _printk(0x80010c9,"../../vendor/st/opensource/driver/nfc/st21nfc.c",0x249);
    if (*(iVar2 + 0x157) == '\0') {
        uVar1 = 0;
        *(iVar2 + 0x157) = 1;
    }
    else {
        uVar1 = 0xfffffff0;
        _printk(0x8001155,"st21nfc_dev_open",0xfffffff0);
    }
    return uVar1;
}


// ===== sym.st21nfc_release @ 0x08003c44 (size 64) =====

ulong sym.st21nfc_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(*(arg1 + 0xd8) + 0x157) = 0;
    _printk(0x8000fba,"st21nfc_release");
    return 0;
}


// ===== sym._copy_to_user @ 0x08003c84 (size 312) =====

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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.st21nfc_disable_irq @ 0x08003df8 (size 104) =====

void sym.st21nfc_disable_irq(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x208);
    if (*(arg1 + 0x204) != '\0') {
        disable_irq_nosync(*(*(arg1 + 0xa8) + 0x3b4));
        *(arg1 + 0x204) = 0;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x208,uVar1);
    return;
}


// ===== sym.st21nfc_loc_set_polaritymode @ 0x08003e60 (size 256) =====

void sym.st21nfc_loc_set_polaritymode(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xa8);
    uVar1 = arg2;
    if (arg2 != 4) {
        uVar1 = 1;
    }
    *(arg1 + 0x3d8) = arg2;
    if (*(arg1 + 0x206) != '\0') {
        devm_free_irq(iVar4 + 0x20,*(iVar4 + 0x3b4),arg1);
        *(arg1 + 0x206) = 0;
    }
    iVar2 = irq_set_irq_type(*(iVar4 + 0x3b4),uVar1);
    if (iVar2 == 0) {
        *(arg1 + 0x204) = 1;
        iVar2 = devm_request_threaded_irq
                          (iVar4 + 0x20,*(iVar4 + 0x3b4),
                           sym.st21nfc_dev_irq_handler.68d789d436e77bc71172105f3c93d7a0.cfi_jt,0,*(arg1 + 0x3d8),
                           iVar4 + 4,arg1);
        if (iVar2 == 0) {
            *(arg1 + 0x206) = 1;
            uVar3 = _raw_spin_lock_irqsave(arg1 + 0x208);
            if (*(arg1 + 0x204) != '\0') {
                disable_irq_nosync(*(*(arg1 + 0xa8) + 0x3b4));
                *(arg1 + 0x204) = 0;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x208,uVar3);
            return;
        }
        uVar3 = 0x8000d6a;
    }
    else {
        uVar3 = 0x80010ad;
    }
    _printk(uVar3,"st21nfc_loc_set_polaritymode");
    return;
}


// ===== sym.st21nfc_clock_select @ 0x08003f60 (size 160) =====

ulong sym.st21nfc_clock_select(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = clk_get(*(arg1 + 0xa8) + 0x20,"nfc_ref_clk");
    uVar3 = 0;
    *(arg1 + 0x3a8) = uVar2;
    if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
        if (*(arg1 + 0x3a0) == '\0') {
            iVar1 = clk_prepare(uVar2);
            if (iVar1 == 0) {
                uVar3 = clk_enable(uVar2);
                if (uVar3 == 0) {
                    *(arg1 + 0x3a0) = 1;
                }
                else {
                    clk_unprepare(uVar2);
                    uVar3 = 0xffffffea;
                }
            }
            else {
                uVar3 = 0xffffffea;
            }
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.st21nfc_dev_irq_handler @ 0x08004000 (size 164) =====

ulong sym.st21nfc_dev_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    if (((*(iVar2 + 300) & 1) != 0) && (*(iVar2 + 0x168) != 0)) {
        pm_wakeup_dev_event(iVar2 + 0x20,500,0);
    }
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x208);
    if (*(arg1 + 0x204) != '\0') {
        disable_irq_nosync(*(*(arg1 + 0xa8) + 0x3b4));
        *(arg1 + 0x204) = 0;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x208,uVar1);
    __wake_up(arg1,3,1,0);
    return 1;
}


// ===== sym.i2c_addr_show @ 0x080040a4 (size 84) =====

int64_t sym.i2c_addr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0x20) {
        *in_x18 = unaff_x30;
        iVar1 = scnprintf(arg2,0x1000,"0x%.2x\n",*(arg1 + -0x1e));
        return iVar1;
    }
    return -0x13;
}


// ===== sym.i2c_addr_store @ 0x080040f8 (size 188) =====

int64_t sym.i2c_addr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar2 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x98);
    uStack_40 = 0;
    if ((iVar3 == 0) || (*(iVar3 + 0xa8) == 0)) {
        arg3 = 0;
    }
    else {
        iVar1 = kstrtoll(arg2,10,&uStack_40);
        if (iVar1 == 0) {
            mutex_lock(iVar3 + 0x18);
            *(*(iVar3 + 0xa8) + 2) = uStack_40;
            noname_1 = mutex_unlock(iVar3 + 0x18);
            arg2 = puVar2;
        }
        else {
            arg3 = -0x16;
            arg2 = puVar2;
            noname_1 = extraout_q0;
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    __stack_chk_fail(noname_1);
    *extraout_x18 = sym.version_show;
    iVar1 = scnprintf(arg2,0x1000,0x800142b,"2.2.0.15");
    return iVar1;
}


// ===== sym.version_show @ 0x080041b4 (size 64) =====

int64_t sym.version_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x800142b,"2.2.0.15");
    return iVar1;
}


// ===== sym.st21nfc_suspend @ 0x080041f4 (size 120) =====

ulong sym.st21nfc_suspend(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (((((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) && (*(iVar3 + 0x204) != '\0')) &&
       (iVar1 = irq_set_irq_wake(*(arg1 + 0x394),1), iVar1 == 0)) {
        *(iVar3 + 0x205) = 1;
    }
    if ((*(iVar3 + 0x3d0) != 0) && (*(iVar3 + 0x3d0) < 0xfffffffffffff001)) {
        uVar2 = gpiod_get_value();
        *(iVar3 + 0x218) = uVar2;
    }
    return 0;
}


// ===== sym.st21nfc_resume @ 0x0800426c (size 160) =====

ulong sym.st21nfc_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (((((*(arg1 + 0x10c) & 1) != 0) && (*(arg1 + 0x148) != 0)) && (*(iVar2 + 0x205) != '\0')) &&
       (iVar1 = irq_set_irq_wake(*(arg1 + 0x394),0), iVar1 == 0)) {
        *(iVar2 + 0x205) = 0;
    }
    if (*(iVar2 + 0x3d0) < 0xfffffffffffff001) {
        iVar1 = gpiod_get_value();
        if ((*(iVar2 + 0x218) == iVar1) && ((*(iVar2 + 0x20c) != 0 || (iVar1 == 0)))) {
            if (*(iVar2 + 0x20c) != 1) {
                return 0;
            }
            if (iVar1 != 0) {
                return 0;
            }
        }
        queue_work_on(0x20,*(iVar2 + 0x2c0),iVar2 + 0x2c8);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800430c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004350

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
    //switch table (4 cases) at 0x80004ac
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004364);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004374 (size 64) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000798);
    i2c_register_driver(obj.__this_module,obj.st21nfc_st54spi_data);
    return;
}


// ===== sym.cleanup_module @ 0x080043b4 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800137f);
    i2c_del_driver(obj.st21nfc_st54spi_data);
    return;
}

