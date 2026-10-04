// decompiled from nxp-nci by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 724) =====

//WARNING: Switch with 1 destination removed at 0x08003fe0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x30547d604e32781e) {
            if (arg1 == -0x645a8ecb0c19f98d) {
                pcVar2 = sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    pcVar2 = sym.nfc_i2c_dev_suspend.cfi_jt;
                    goto code_r0x080032a0;
                }
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x08003fa0;
                pcVar2 = sym.i2c_irq_handler.8f0a466369daca5d41c8c2cb28712dd7.cfi_jt;
            }
        }
        else {
            if (-0x8dc801903aca539 < arg1) {
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.nfc_dev_close.cfi_jt;
                }
                else {
                    if (arg1 != -0x890743871a4a53) goto code_r0x08003fa0;
                    pcVar2 = sym.nfc_dev_ioctl.cfi_jt;
                }
code_r0x080032a0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08003fa0;
            }
            if (arg1 == -0x30547d604e32781e) {
                pcVar2 = sym.nfc_dev_flush.cfi_jt;
            }
            else {
                if (arg1 != -0x110ff39b222fd5f3) goto code_r0x08003fa0;
                pcVar2 = sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr;
            }
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 < 0x18aafba39062885f) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08003fa0;
                pcVar2 = sym.nfc_i2c_dev_read.cfi_jt;
            }
        }
        else if (arg1 == 0x18aafba39062885f) {
            pcVar2 = sym.nfc_i2c_dev_probe.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08003fa0;
            pcVar2 = sym.nfc_i2c_dev_write.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 != 0x321969b888d4949e) {
            if (arg1 != 0x3f1a38ef3ded7aea) goto code_r0x08003fa0;
            pcVar2 = sym.__typeid__ZTSFiP7nfc_devE_global_addr;
            goto code_r0x080032a0;
        }
        pcVar2 = sym.no_llseek.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08003fa0;
        pcVar2 = sym.nfc_i2c_dev_remove.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003fa0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003ff4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080032e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80015a3,"nfc_i2c_dev_exit");
    i2c_del_driver(obj.nfc_i2c_dev_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080032e8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80017df,"nfc_i2c_dev_init");
    iVar1 = i2c_register_driver(obj.__this_module,obj.nfc_i2c_dev_driver);
    if (iVar1 != 0) {
        _printk(0x80008d1,"nfc_i2c_dev_init",iVar1);
    }
    return iVar1;
}


// ===== sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr @ 0x080032f0 (size 8) =====

char * sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr(int64_t param_1,uint8_t *param_2,char *param_3,ulong param_4)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uchar *puVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar12;
    char *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    pcVar13 = param_3;
    if (0x3 < param_3) {
        pcVar13 = 0x4;
    }
    iVar5 = param_4;
    if (1999 < iVar5) {
        iVar5 = 2000;
    }
    pcVar11 = param_3;
    if (0x101 < param_3) {
        pcVar11 = 0x102;
    }
    gpio_to_desc(*(param_1 + 0x180));
    iVar2 = gpiod_get_raw_value();
    if (iVar2 != 0) {
code_r0x08006524:
        memset(param_2,0,pcVar11);
        uVar3 = i2c_transfer_buffer_flags(*(param_1 + 0x168),param_2,pcVar11 & 0xffffffff,1);
        pcVar12 = uVar3;
        param_3 = "i2c_read";
        ipc_log_string(*(param_1 + 0x218),"%s of %d bytes, ret %d","i2c_read",pcVar11,pcVar12);
        iVar2 = pcVar11;
        if (uVar3 < 1) {
            param_3 = pcVar12;
            _printk(0x800172f,"i2c_read");
        }
        else {
            if (pcVar13 != NULL) {
                param_3 = *param_2;
                ipc_log_string(*(param_1 + 0x218)," %02x");
                if (pcVar13 != 0x1) {
                    param_3 = param_2[1];
                    ipc_log_string(*(param_1 + 0x218)," %02x");
                    if (pcVar13 != 0x2) {
                        param_3 = param_2[2];
                        ipc_log_string(*(param_1 + 0x218)," %02x");
                        if (pcVar13 != 0x3) {
                            param_3 = param_2[3];
                            ipc_log_string(*(param_1 + 0x218)," %02x");
                        }
                    }
                }
            }
            if ((((*(param_1 + 0x1e7) != '\0') && (*(param_1 + 0x1d8) != 0)) && (*param_2 == 0x4f)) &&
               (param_2[1] == *(*(param_1 + 0x1d8) + 1))) {
                sym.read_cold_reset_rsp(param_1,param_2);
                param_3 = 0x1;
                iVar2 = 0;
                *(param_1 + 0x1e7) = 0;
                __wake_up(param_1 + 0x1c0,1);
code_r0x08006630:
                pcVar12 = NULL;
            }
        }
code_r0x08006634:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_68) {
            return pcVar12 & 0xffffffff;
        }
        auVar14 = __stack_chk_fail();
        puVar10 = auVar14._8_8_;
        iVar9 = auVar14._0_8_;
        *extraout_x18 = sym.i2c_write;
        pcVar13 = param_3;
        if (0x3 < param_3) {
            pcVar13 = 0x4;
        }
        if (0x229 < param_3) {
            param_3 = 0x22a;
        }
        ipc_log_string(*(iVar9 + 0x218),"%s sending %d B","i2c_write",param_3);
        if (((pcVar13 != NULL) && (ipc_log_string(*(iVar9 + 0x218)," %02x",*puVar10), pcVar13 != 0x1)) &&
           ((ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[1]), pcVar13 != 0x2 &&
            (ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[2]), pcVar13 != 0x3)))) {
            ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[3]);
        }
        gpio_to_desc(*(iVar9 + 0x180));
        iVar5 = gpiod_get_raw_value();
        if (iVar5 != 0) {
            _printk(0x8000d32,"i2c_write");
            usleep_range_state(3000,0xc1c,2);
            gpio_to_desc(*(iVar9 + 0x180));
            iVar5 = gpiod_get_raw_value();
            if (iVar5 != 0) {
                _printk(0x8000d32,"i2c_write");
                usleep_range_state(3000,0xc1c,2);
                gpio_to_desc(*(iVar9 + 0x180));
                iVar5 = gpiod_get_raw_value();
                if (iVar5 != 0) {
                    _printk(0x8000d32,"i2c_write");
                    usleep_range_state(3000,0xc1c,2);
                    gpio_to_desc(*(iVar9 + 0x180));
                    iVar5 = gpiod_get_raw_value();
                    if (iVar5 != 0) {
                        _printk(0x8000d32,"i2c_write");
                        usleep_range_state(3000,0xc1c,2);
                        gpio_to_desc(*(iVar9 + 0x180));
                        iVar5 = gpiod_get_raw_value();
                        if (iVar5 != 0) {
                            _printk(0x8000d32,"i2c_write");
                            usleep_range_state(3000,0xc1c,2);
                            gpio_to_desc(*(iVar9 + 0x180));
                            iVar5 = gpiod_get_raw_value();
                            if (iVar5 != 0) {
                                _printk(0x8001653,"i2c_write");
                            }
                        }
                    }
                }
            }
        }
        if (iVar2 < 1) {
            pcVar13 = 0xffffffea;
        }
        else {
            iVar5 = 1;
            do {
                uVar3 = i2c_transfer_buffer_flags(*(iVar9 + 0x168),puVar10,param_3 & 0xffffffff,0);
                pcVar13 = uVar3;
                ipc_log_string(*(iVar9 + 0x218),"%s ret %d","i2c_write",pcVar13);
                if (uVar3 < 1) {
                    _printk(0x80017b1,"i2c_write",uVar3);
                    usleep_range_state(3000,0xc1c,2);
                }
                else {
                    if (param_3 == pcVar13) {
                        return pcVar13;
                    }
                    _printk(0x8000c83,"i2c_write",uVar3);
                    pcVar13 = 0xfffffffb;
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar2);
        }
        return pcVar13;
    }
    cVar1 = *(param_1 + 0x170);
    do {
        if (cVar1 == '\0') {
            *(param_1 + 0x170) = 1;
            enable_irq(*(*(param_1 + 0x168) + 0x3b4));
        }
        gpio_to_desc(*(param_1 + 0x180));
        iVar2 = gpiod_get_raw_value();
        if (iVar2 == 0) {
            if (iVar5 == 0) {
                if ((*(param_1 + 0x170) != '\0') && (*(param_1 + 0x162) == '\0')) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while( true ) {
                        param_3 = 0x1;
                        uVar7 = prepare_to_wait_event(param_1,&uStack_90);
                        iVar2 = param_4;
                        if ((*(param_1 + 0x170) == '\0') || (*(param_1 + 0x162) != '\0')) break;
                        if (uVar7 != 0) {
                            if (uVar7 == 0) goto code_r0x080067e8;
                            pcVar12 = uVar7 & 0xffffffff;
                            goto code_r0x08006634;
                        }
                        schedule();
                    }
                    finish_wait(param_1,&uStack_90);
                }
            }
            else {
                pcVar12 = __msecs_to_jiffies(iVar5);
                if (*(param_1 + 0x170) == '\0') {
                    if (pcVar12 == NULL) {
                        pcVar12 = 0x1;
                    }
                }
                else {
                    if (pcVar12 == NULL && *(param_1 + 0x162) != '\0') {
                        pcVar12 = 0x1;
                    }
                    if ((*(param_1 + 0x162) == '\0') && (pcVar12 != NULL)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        pcVar6 = __msecs_to_jiffies(iVar5);
                        init_wait_entry(&uStack_90,0);
                        param_3 = 0x1;
                        pcVar12 = prepare_to_wait_event(param_1,&uStack_90);
                        cVar1 = *(param_1 + 0x170);
                        while (cVar1 != '\0') {
                            if (pcVar6 == NULL && *(param_1 + 0x162) != '\0') {
                                pcVar6 = 0x1;
                            }
                            if ((*(param_1 + 0x162) != '\0') || (pcVar6 == NULL)) goto code_r0x0800676c;
                            if (pcVar12 != NULL) goto code_r0x080067e0;
                            pcVar6 = schedule_timeout(pcVar6);
                            param_3 = 0x1;
                            pcVar12 = prepare_to_wait_event(param_1,&uStack_90);
                            cVar1 = *(param_1 + 0x170);
                        }
                        if (pcVar6 == NULL) {
                            pcVar6 = 0x1;
                        }
code_r0x0800676c:
                        pcVar12 = pcVar6;
                        finish_wait(param_1,&uStack_90);
                    }
                }
code_r0x080067e0:
                iVar2 = param_4;
                if (pcVar12 < 1) {
                    _printk(0x80014b0,"i2c_read");
                    goto code_r0x08006634;
                }
            }
        }
code_r0x080067e8:
        uVar8 = _raw_spin_lock_irqsave(param_1 + 0x174);
        if (*(param_1 + 0x170) != '\0') {
            disable_irq_nosync(*(*(param_1 + 0x168) + 0x3b4));
            *(param_1 + 0x170) = 0;
        }
        _raw_spin_unlock_irqrestore(param_1 + 0x174,uVar8);
        gpio_to_desc(*(param_1 + 0x180));
        iVar2 = gpiod_get_raw_value();
        if (iVar2 != 0) goto code_r0x08006524;
        if (*(param_1 + 0x20c) == '\0') {
            gpio_to_desc(*(param_1 + 0x184));
            iVar4 = gpiod_get_raw_value();
            iVar2 = param_4;
            if (iVar4 == 0) {
                _printk(0x80010ed,"i2c_read");
                pcVar12 = 0xfffffffb;
                goto code_r0x08006634;
            }
        }
        iVar2 = param_4;
        if (*(param_1 + 0x162) != '\0') goto code_r0x08006630;
        _printk(0x8001024,"i2c_read");
        cVar1 = *(param_1 + 0x170);
    } while( true );
}


// ===== sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr @ 0x080032f8 (size 8) =====

uint64_t sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr(int64_t param_1,uchar *param_2,uint64_t param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = param_3;
    if (3 < param_3) {
        uVar3 = 4;
    }
    if (0x229 < param_3) {
        param_3 = 0x22a;
    }
    ipc_log_string(*(param_1 + 0x218),"%s sending %d B","i2c_write",param_3);
    if ((((uVar3 != 0) && (ipc_log_string(*(param_1 + 0x218)," %02x",*param_2), uVar3 != 1)) &&
        (ipc_log_string(*(param_1 + 0x218)," %02x",param_2[1]), uVar3 != 2)) &&
       (ipc_log_string(*(param_1 + 0x218)," %02x",param_2[2]), uVar3 != 3)) {
        ipc_log_string(*(param_1 + 0x218)," %02x",param_2[3]);
    }
    gpio_to_desc(*(param_1 + 0x180));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 != 0) {
        _printk(0x8000d32,"i2c_write");
        usleep_range_state(3000,0xc1c,2);
        gpio_to_desc(*(param_1 + 0x180));
        iVar1 = gpiod_get_raw_value();
        if (iVar1 != 0) {
            _printk(0x8000d32,"i2c_write");
            usleep_range_state(3000,0xc1c,2);
            gpio_to_desc(*(param_1 + 0x180));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 0) {
                _printk(0x8000d32,"i2c_write");
                usleep_range_state(3000,0xc1c,2);
                gpio_to_desc(*(param_1 + 0x180));
                iVar1 = gpiod_get_raw_value();
                if (iVar1 != 0) {
                    _printk(0x8000d32,"i2c_write");
                    usleep_range_state(3000,0xc1c,2);
                    gpio_to_desc(*(param_1 + 0x180));
                    iVar1 = gpiod_get_raw_value();
                    if (iVar1 != 0) {
                        _printk(0x8000d32,"i2c_write");
                        usleep_range_state(3000,0xc1c,2);
                        gpio_to_desc(*(param_1 + 0x180));
                        iVar1 = gpiod_get_raw_value();
                        if (iVar1 != 0) {
                            _printk(0x8001653,"i2c_write");
                        }
                    }
                }
            }
        }
    }
    if (param_4 < 1) {
        uVar3 = 0xffffffea;
    }
    else {
        iVar1 = 1;
        do {
            uVar2 = i2c_transfer_buffer_flags(*(param_1 + 0x168),param_2,param_3 & 0xffffffff,0);
            uVar3 = uVar2;
            ipc_log_string(*(param_1 + 0x218),"%s ret %d","i2c_write",uVar3);
            if (uVar2 < 1) {
                _printk(0x80017b1,"i2c_write",uVar2);
                usleep_range_state(3000,0xc1c,2);
            }
            else {
                if (param_3 == uVar3) {
                    return uVar3;
                }
                _printk(0x8000c83,"i2c_write",uVar2);
                uVar3 = 0xfffffffb;
            }
            iVar1 = iVar1 + 1;
        } while (iVar1 <= param_4);
    }
    return uVar3;
}


// ===== sym.nfc_i2c_dev_read.cfi_jt @ 0x08003300 (size 8) =====

int64_t sym.nfc_i2c_dev_read.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xd8);
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_read");
        iVar3 = -0x13;
    }
    else {
        mutex_lock(iVar3 + 0x18);
        if (0x101 < param_3) {
            param_3 = 0x102;
        }
        if ((*(param_1 + 0x41) >> 3 & 1) == 0) {
            uVar1 = sym.i2c_read(iVar3,*(iVar3 + 0x78),param_3,0);
        }
        else {
            uVar1 = i2c_transfer_buffer_flags(*(iVar3 + 0x168),*(iVar3 + 0x78),param_3,1);
        }
        if (0 < uVar1) {
            noname_1 = __check_object_size(*(iVar3 + 0x78),uVar1,1);
            iVar2 = sym._copy_to_user(param_2,noname_1,uVar1);
            if (iVar2 != 0) {
                _printk(0x8001858,"nfc_i2c_dev_read");
                uVar1 = 0xfffffff2;
            }
        }
        mutex_unlock(iVar3 + 0x18);
        iVar3 = uVar1;
    }
    return iVar3;
}


// ===== sym.i2c_irq_handler.8f0a466369daca5d41c8c2cb28712dd7.cfi_jt @ 0x08003308 (size 8) =====

ulong sym.i2c_irq_handler.8f0a466369daca5d41c8c2cb28712dd7.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0x168);
    if (((*(iVar2 + 300) & 1) != 0) && (*(iVar2 + 0x168) != 0)) {
        pm_wakeup_dev_event(iVar2 + 0x20,2000,0);
    }
    uVar1 = _raw_spin_lock_irqsave(param_2 + 0x174);
    if (*(param_2 + 0x170) != '\0') {
        disable_irq_nosync(*(*(param_2 + 0x168) + 0x3b4));
        *(param_2 + 0x170) = 0;
    }
    _raw_spin_unlock_irqrestore(param_2 + 0x174,uVar1);
    __wake_up(param_2,3,1,0);
    return 1;
}


// ===== sym.nfc_i2c_dev_suspend.cfi_jt @ 0x08003310 (size 8) =====

ulong sym.nfc_i2c_dev_suspend.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_suspend");
        uVar1 = 0xffffffed;
    }
    else {
        ipc_log_string(*(iVar2 + 0x218),"%s: irq_enabled = %d","nfc_i2c_dev_suspend",*(iVar2 + 0x170));
        if (((((*(param_1 + 0x10c) & 1) == 0) || (*(param_1 + 0x148) == 0)) || (*(iVar2 + 0x170) == '\0')) ||
           (uVar1 = irq_set_irq_wake(*(param_1 + 0x394),1), uVar1 != 0)) {
            uVar1 = 0;
        }
        else {
            *(iVar2 + 0x178) = 1;
        }
    }
    return uVar1;
}


// ===== sym.nfc_i2c_dev_resume.cfi_jt @ 0x08003318 (size 8) =====

ulong sym.nfc_i2c_dev_resume.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_resume");
        uVar2 = 0xffffffed;
    }
    else {
        ipc_log_string(*(iVar3 + 0x218),"%s: irq_wake_up = %d","nfc_i2c_dev_resume",*(iVar3 + 0x178));
        if ((((*(param_1 + 0x10c) & 1) == 0) || (*(param_1 + 0x148) == 0)) || (*(iVar3 + 0x178) == '\0')) {
            uVar2 = 0;
        }
        else {
            iVar1 = irq_set_irq_wake(*(param_1 + 0x394),0);
            uVar2 = 0;
            if (iVar1 == 0) {
                uVar2 = 0;
                *(iVar3 + 0x178) = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym.nfc_dev_close.cfi_jt @ 0x08003320 (size 8) =====

ulong sym.nfc_dev_close.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x2b0);
    if (iVar5 + -0xd0 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x3c) >> 0xf & 1) != 0) {
            *(iVar2 + 0x3c) = *(iVar2 + 0x3c) & 0xffff7fff;
        }
        mutex_lock(iVar5 + -0x48);
        iVar1 = *(iVar5 + -0x18);
        if (iVar1 == 1) {
            pcVar4 = *(iVar5 + 0x168);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x80004b0);
            }
            (*pcVar4)(iVar5 + -0xd0);
            if (*(iVar5 + 0xbc) < 0x200) {
                uVar3 = gpio_to_desc();
                gpiod_set_raw_value(uVar3,0);
                usleep_range_state(10000,0x2774,2);
            }
            iVar1 = *(iVar5 + -0x18);
        }
        if (iVar1 != 0) {
            *(iVar5 + -0x18) = iVar1 + -1;
        }
        *(param_2 + 0xd8) = 0;
        mutex_unlock(iVar5 + -0x48);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.nfc_dev_open.cfi_jt @ 0x08003328 (size 8) =====

ulong sym.nfc_dev_open.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x2b0);
    iVar1 = iVar6 + -0xd0;
    if (iVar1 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x3c) >> 0xf & 1) == 0) {
            *(iVar2 + 0x3c) = *(iVar2 + 0x3c) | 0x8000;
        }
        mutex_lock(iVar6 + -0x48);
        *(param_2 + 0xd8) = iVar1;
        iVar4 = *(iVar6 + -0x18);
        if (iVar4 == 0) {
            if (*(iVar6 + 0xbc) < 0x200) {
                uVar3 = gpio_to_desc();
                gpiod_set_raw_value(uVar3,0);
                usleep_range_state(10000,0x2774,2);
            }
            pcVar5 = *(iVar6 + 0x160);
            if (1 < (pcVar5 + -0x8003348 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar5,0x8000470);
            }
            (*pcVar5)(iVar1);
            iVar4 = *(iVar6 + -0x18);
        }
        *(iVar6 + -0x18) = iVar4 + 1;
        mutex_unlock(iVar6 + -0x48);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.nfc_i2c_dev_write.cfi_jt @ 0x08003330 (size 8) =====

int64_t sym.nfc_i2c_dev_write.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xd8);
    if (0x229 < param_3) {
        param_3 = 0x22a;
    }
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_write");
        iVar3 = -0x13;
    }
    else {
        iVar1 = iVar3 + 0x48;
        mutex_lock(iVar1);
        iVar4 = *(iVar3 + 0x80);
        __check_object_size(iVar4,param_3,0);
        iVar4 = sym._copy_from_user_1(iVar4,param_2,param_3);
        if (iVar4 == 0) {
            iVar2 = sym.i2c_write(iVar3,*(iVar3 + 0x80),param_3,1);
            mutex_unlock(iVar1);
            iVar3 = iVar2;
        }
        else {
            _printk(0x8001103,"nfc_i2c_dev_write");
            mutex_unlock(iVar1);
            iVar3 = -0xe;
        }
    }
    return iVar3;
}


// ===== sym.nfc_dev_flush.cfi_jt @ 0x08003338 (size 8) =====

ulong sym.nfc_dev_flush.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0xd8);
    if (iVar5 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar1 = iVar5 + 0x18;
        iVar2 = mutex_trylock(iVar1);
        if (iVar2 == 0) {
            pcVar4 = *(iVar5 + 0x238);
            *(iVar5 + 0x162) = 1;
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000490);
            }
            (*pcVar4)(iVar5);
            __wake_up(iVar5,3,1,0);
            mutex_lock(iVar1);
            *(iVar5 + 0x162) = 0;
        }
        mutex_unlock(iVar1);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.nfc_i2c_dev_probe.cfi_jt @ 0x08003340 (size 8) =====

int sym.nfc_i2c_dev_probe.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    bool bVar1;
    uint uVar2;
    int iVar3;
    int64_t arg1_00;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80008c4,"nfc_i2c_dev_probe");
    arg1_00 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc0,0x240);
    if (arg1_00 == 0) {
        iVar3 = -0xc;
    }
    else {
        arg1 = param_1 + 0x20;
        iVar3 = sym.nfc_parse_dt(arg1,arg1_00 + 0x180,0);
        if (iVar3 == 0) {
            iVar7 = *(param_1 + 0x18);
            pcVar8 = *(*(iVar7 + 0x10) + 0x20);
            __cfi_slowpath_diag(0x6871e466cec98751,pcVar8,0x8000730);
            uVar4 = (*pcVar8)(iVar7);
            if ((uVar4 & 1) == 0) {
                _printk(0x8001952,"nfc_i2c_dev_probe");
                iVar3 = -0x13;
            }
            else {
                iVar7 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc1,0x102);
                *(arg1_00 + 0x78) = iVar7;
                if (iVar7 == 0) {
                    iVar3 = -0xc;
                }
                else {
                    iVar7 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc1,0x22a);
                    *(arg1_00 + 0x80) = iVar7;
                    if (iVar7 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        *(arg1_00 + 0x168) = param_1;
                        *(arg1_00 + 0x15c) = 0x200;
                        *(arg1_00 + 0x220) = sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr;
                        *(arg1_00 + 0x230) = sym.__typeid__ZTSFiP7nfc_devE_global_addr;
                        *(arg1_00 + 0x228) = sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr;
                        *(arg1_00 + 0x238) = sym.i2c_disable_irq.cfi_jt;
                        iVar3 = sym.configure_gpio(*(arg1_00 + 0x180),4);
                        if (iVar3 < 1) {
                            _printk(0x8001ce6,"nfc_i2c_dev_probe",*(arg1_00 + 0x180));
                        }
                        else {
                            *(param_1 + 0x3b4) = iVar3;
                            __init_waitqueue_head(arg1_00,"&nfc_dev->read_wq",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_00 + 0x18,"&nfc_dev->read_mutex",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_00 + 0x48,"&nfc_dev->write_mutex",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_00 + 0x88,"&nfc_dev->dev_ref_mutex",obj.nfc_i2c_dev_probe.__key);
                            *(arg1_00 + 0x174) = 0;
                            iVar3 = sym.nfc_misc_register(arg1_00,0x8001d40,1,0x8000bbb);
                            if (iVar3 == 0) {
                                _printk(0x8000840,"nfc_i2c_dev_probe",*(param_1 + 0x3b4));
                                uVar2 = *(param_1 + 0x3b4);
                                *(arg1_00 + 0x170) = 1;
                                iVar3 = request_threaded_irq
                                                  (uVar2,sym.i2c_irq_handler.8f0a466369daca5d41c8c2cb28712dd7.cfi_jt,0
                                                   ,4,param_1 + 4,arg1_00);
                                if (iVar3 == 0) {
                                    sym.i2c_disable_irq(arg1_00);
                                    iVar3 = sym.nfc_ldo_config(arg1,arg1_00);
                                    if (iVar3 == 0) {
                                        if (*(arg1_00 + 0x1b8) == '\0') {
                                            sym.nfc_post_init(arg1_00);
                                        }
                                        else {
                                            uVar4 = sym.nfc_hw_secure_check();
                                            bVar1 = (uVar4 & 1) == 0;
                                            if (bVar1) {
                                                sym.nfc_post_init(arg1_00);
                                                pcVar6 = "false";
                                            }
                                            else {
                                                pcVar6 = "true";
                                            }
                                            *(arg1_00 + 0x20c) = !bVar1;
                                            _printk(0x800196b,"nfc_i2c_dev_probe",pcVar6);
                                        }
                                        *(arg1_00 + 0x20d) = *(arg1_00 + 0x1a8) ^ 1;
                                        device_init_wakeup(arg1,1);
                                        iVar3 = 0;
                                        uVar5 = 0x80011f0;
                                        *(param_1 + 0xb8) = arg1_00;
                                        *(arg1_00 + 0x178) = 0;
                                        *(arg1_00 + 0x161) = 0;
                                        goto code_r0x08006e94;
                                    }
                                    _printk(0x8000950);
                                    free_irq(*(param_1 + 0x3b4),arg1_00);
                                }
                                else {
                                    _printk(0x800078c,"nfc_i2c_dev_probe");
                                }
                                sym.nfc_misc_unregister(arg1_00,1);
                            }
                            else {
                                _printk(0x80011cb,"nfc_i2c_dev_probe");
                            }
                        }
                        sym.gpio_free_all(arg1_00);
                        kfree(*(arg1_00 + 0x80));
                    }
                    kfree(*(arg1_00 + 0x78));
                }
            }
        }
        else {
            _printk(0x80012d1,"nfc_i2c_dev_probe");
        }
        kfree(arg1_00);
    }
    uVar5 = 0x8001279;
code_r0x08006e94:
    _printk(uVar5,"nfc_i2c_dev_probe");
    return iVar3;
}


// ===== sym.__typeid__ZTSFiP7nfc_devE_global_addr @ 0x08003348 (size 8) =====

ulong sym.__typeid__ZTSFiP7nfc_devE_global_addr(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x174);
    if (*(param_1 + 0x170) == '\0') {
        *(param_1 + 0x170) = 1;
        enable_irq(*(*(param_1 + 0x168) + 0x3b4));
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x174,uVar1);
    return 0;
}


// ===== sym.i2c_disable_irq.cfi_jt @ 0x08003350 (size 8) =====

ulong sym.i2c_disable_irq.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0x174);
    if (*(param_1 + 0x170) != '\0') {
        disable_irq_nosync(*(*(param_1 + 0x168) + 0x3b4));
        *(param_1 + 0x170) = 0;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x174,uVar1);
    return 0;
}


// ===== sym.nfc_i2c_dev_remove.cfi_jt @ 0x08003358 (size 8) =====

ulong sym.nfc_i2c_dev_remove.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001d11,"nfc_i2c_dev_remove");
    arg1 = *(param_1 + 0xb8);
    if (arg1 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_remove");
        uVar1 = 0xffffffed;
    }
    else if (*(arg1 + 0xb8) == 0) {
        uVar1 = gpio_to_desc(*(arg1 + 0x184));
        gpiod_set_raw_value(uVar1,0);
        usleep_range_state(10000,0x2774,2);
        if (*(arg1 + 0x1f0) != 0) {
            sym.nfc_ldo_unvote(arg1);
            regulator_put(*(arg1 + 0x1f0));
        }
        device_init_wakeup(param_1 + 0x20,0);
        free_irq(*(param_1 + 0x3b4),arg1);
        sym.nfc_misc_unregister(arg1,1);
        sym.gpio_free_all(arg1);
        kfree(*(arg1 + 0x78));
        kfree(*(arg1 + 0x80));
        kfree(arg1);
        uVar1 = 0;
    }
    else {
        _printk(0x80009fd,"nfc_i2c_dev_remove");
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.no_llseek.cfi_jt @ 0x08003360 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nfc_dev_ioctl.cfi_jt @ 0x08003368 (size 8) =====

int64_t sym.nfc_dev_ioctl.cfi_jt(int64_t param_1,int param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xd8);
    if (arg1 == 0) {
        return -0x13;
    }
    if (((*(arg1 + 0x1b8) != '\0') && (param_2 != 0x4004e90a)) && (*(arg1 + 0x20c) != '\0')) {
        _printk(0x8000db0);
        return -1;
    }
    _printk(0x8000acf,"nfc_dev_ioctl",param_2,param_3);
    switch(param_2) {
    case 0x4004e901:
        iVar1 = sym.nfc_ioctl_power_states(arg1,param_3);
        break;
    case 0x4004e902:
        goto code_r0x08004c14;
    case 0x4004e903:
    case 0x4004e905:
    case 0x4004e906:
    case 0x4004e907:
    case 0x4004e908:
code_r0x08004c40:
        _printk(0x800136d,"nfc_dev_ioctl",param_3);
        iVar1 = -0x203;
        break;
    case 0x4004e904:
        if (param_3 == 0) {
            iVar1 = 0;
            *(arg1 + 0x1e9) = 0;
        }
        else if (param_3 == 1) {
            iVar1 = 0;
            *(arg1 + 0x1e9) = 1;
            *(arg1 + 0x15d) = 2;
        }
        else {
            iVar1 = -0x16;
        }
        break;
    case 0x4004e909:
        iVar1 = sym.nfc_ioctl_nfcc_info(param_1);
        break;
    case 0x4004e90a:
        if (*(arg1 + 0x1b8) == '\0') {
            iVar1 = 0;
        }
        else {
            iVar1 = sym.nfc_dynamic_protection_ioctl(arg1,param_3);
        }
        break;
    default:
        if (param_2 != -0x7ffb16fd) {
            if (param_2 == -0x3fef16f8) {
                iVar1 = sym.ese_cold_reset_ioctl(arg1);
                break;
            }
            goto code_r0x08004c40;
        }
        param_3 = 2;
code_r0x08004c14:
        iVar1 = sym.nfc_ese_pwr(arg1,param_3);
    }
    return iVar1;
}


// ===== sym.nfc_dev_compat_ioctl.cfi_jt @ 0x08003370 (size 8) =====

int64_t sym.nfc_dev_compat_ioctl.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.nfc_dev_ioctl(param_1,param_2,param_3);
    return iVar1;
}


// ===== sym.nfc_ese_pwr @ 0x08003378 (size 224) =====

ulong sym.nfc_ese_pwr(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80007a6,"nfc_ese_pwr",arg2);
    if (arg2 == 2) {
        gpio_to_desc(*(arg1 + 0x184));
        uVar2 = gpiod_get_raw_value();
    }
    else if (arg2 == 1) {
        if (*(arg1 + 0x15e) == '\0') {
            sym.gpio_set_ven(arg1,0);
        }
        uVar2 = 0;
        *(arg1 + 0x161) = 0;
    }
    else if (arg2 == 0) {
        gpio_to_desc(*(arg1 + 0x184));
        iVar1 = gpiod_get_raw_value();
        *(arg1 + 0x15e) = iVar1 != 0;
        if (iVar1 == 0) {
            sym.gpio_set_ven(arg1,1);
        }
        uVar2 = 0;
        *(arg1 + 0x161) = 1;
    }
    else {
        _printk(0x8000b4d,"nfc_ese_pwr",arg2);
        uVar2 = 0xfffffdfd;
    }
    return uVar2;
}


// ===== sym.read_cold_reset_rsp @ 0x08003458 (size 516) =====

uint32_t sym.read_cold_reset_rsp(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint8_t *puVar3;
    ulong uVar4;
    char *pcVar5;
    uint8_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (*(uVar2 + 0x1e2) < 4) {
        _dev_err(*(uVar2 + 200),"%s: received cold reset rsp buffer length is invalid \n","read_cold_reset_rsp");
        return 0xffffffea;
    }
    puVar3 = __kmalloc(*(uVar2 + 0x1e2),0xdc1);
    if (puVar3 == NULL) {
        return 0xfffffff4;
    }
    if ((*(uVar2 + 0x1e8) == '\0') && (*(uVar2 + 0x15c) == '\0')) {
        uVar7 = i2c_transfer_buffer_flags(*(uVar2 + 0x168),puVar3,3,1);
        if (0 < uVar7) {
            if ((((*puVar3 >> 6 & 1) == 0) || (*(uVar2 + 0x1d8) == 0)) || (puVar3[1] != *(*(uVar2 + 0x1d8) + 1))) {
                _dev_err(*(uVar2 + 200),"%s: - invalid cold reset response 0x%x 0x%x\n","read_cold_reset_rsp",*puVar3
                         ,puVar3[1]);
                uVar7 = 0xffffffea;
                goto code_r0x08003514;
            }
            goto code_r0x080034bc;
        }
        uVar4 = *(uVar2 + 200);
        pcVar5 = "%s: failure to read cold reset rsp header\n";
    }
    else {
        if (arg2 == 0) {
            _dev_err(*(uVar2 + 200),"%s: - invalid or NULL header\n","read_cold_reset_rsp");
            uVar7 = 0xffffffea;
            goto code_r0x08003514;
        }
        uVar6 = *(arg2 + 2);
        uVar7 = 0xffffffff;
        *puVar3 = *arg2;
        puVar3[2] = uVar6;
code_r0x080034bc:
        uVar6 = puVar3[2];
        if (*(uVar2 + 0x1e2) < uVar6 + 3) {
            _dev_err(*(uVar2 + 200),"%s: - no space for cold_reset resp\n","read_cold_reset_rsp");
            uVar7 = 0xfffffff4;
            goto code_r0x08003514;
        }
        if (*(uVar2 + 0x15c) != '\0') goto code_r0x08003514;
        pcVar8 = *(uVar2 + 0x220);
        if (pcVar8 != sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr) {
            __cfi_slowpath_diag(0xeef00c64ddd02a0d,pcVar8,0x80003d0);
            uVar6 = puVar3[2];
        }
        iVar1 = (*pcVar8)(uVar2,puVar3 + 3,uVar6,2000);
        if (0 < iVar1) {
            uVar6 = puVar3[3];
            uVar7 = uVar6;
            *(uVar2 + 0x1e5) = uVar6;
            goto code_r0x08003514;
        }
        uVar4 = *(uVar2 + 200);
        pcVar5 = "%s: failure to read cold reset rsp payload\n";
    }
    _dev_err(uVar4,pcVar5,"read_cold_reset_rsp");
    uVar7 = 0xfffffffb;
code_r0x08003514:
    kfree(puVar3);
    return uVar7;
}


// ===== sym.ese_cold_reset_ioctl @ 0x0800365c (size 1496) =====

code * sym.ese_cold_reset_ioctl(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    char *pcVar3;
    int64_t iVar4;
    ushort *puVar5;
    int64_t iVar6;
    int64_t in_x1;
    ulong uVar7;
    ulong uVar8;
    char cVar9;
    code *pcVar10;
    ulong *in_x18;
    int64_t unaff_x20;
    char *unaff_x21;
    code *pcVar11;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t aiStack_58 [3];
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    aiStack_58[2] = *(iVar4 + 0x5e0);
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    pcVar3 = unaff_x21;
    if (in_x1 == 0) {
        _dev_err(*(arg1 + 200),"arg is invalid\n");
        pcVar11 = 0xffffffea;
        goto code_r0x08003804;
    }
    iVar1 = sym._copy_from_user(aiStack_58,in_x1,0x10);
    if (iVar1 != 0) {
        _dev_err(*(arg1 + 200),"ese ioctl arg copy from user failed\n");
        pcVar11 = 0xfffffff2;
        goto code_r0x08003804;
    }
    iVar4 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar4 = 0x30;
    }
    pcVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,4);
    if (pcVar3 == NULL) {
        pcVar11 = 0xfffffff4;
        pcVar3 = unaff_x21;
        goto code_r0x08003804;
    }
    unaff_x20 = arg1 + 0x48;
    mutex_lock(unaff_x20);
    iVar4 = sym._copy_from_user(pcVar3,aiStack_58[0],4);
    if (iVar4 != 0) {
        _dev_err(*(arg1 + 200),"ese ioctl arg buffer copy from user failed\n");
        pcVar11 = 0xfffffff2;
        goto code_r0x080037e8;
    }
    cVar9 = pcVar3[1];
    if (cVar9 == '\x02') {
        if ((*(arg1 + 0x1e6) != '\0') && (*pcVar3 != *(arg1 + 0x1e4))) {
            _printk(0x8001a45);
            pcVar11 = 0xfffffff3;
            goto code_r0x080037e8;
        }
    }
    else {
        if (cVar9 != '\x01') {
            if (cVar9 != '\0') {
                _printk(0x8000fa9,"ese_cold_reset_ioctl");
                pcVar11 = 0xfffffdfd;
                goto code_r0x080037e8;
            }
            if (*(arg1 + 0x1e6) != '\0') {
                if (*pcVar3 != *(arg1 + 0x1e4)) {
                    _dev_err(*(arg1 + 200),"cold reset from %d denied, protection is on\n");
                    pcVar11 = 0xfffffff3;
                    goto code_r0x080037e8;
                }
            }
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc1,3);
            *(arg1 + 0x1d8) = puVar5;
            if (puVar5 == NULL) goto code_r0x080037e4;
            uVar8 = 0;
            uVar7 = 0x1e;
            *(puVar5 + 1) = 0;
            *puVar5 = 0x1e2f;
            *(arg1 + 0x1e0) = 0x40003;
            goto code_r0x080038fc;
        }
        if (*(arg1 + 0x1e6) != '\0') {
            if (*pcVar3 == *(arg1 + 0x1e4)) {
                _printk(0x8001742);
                pcVar11 = NULL;
                goto code_r0x080037e8;
            }
            _dev_err(*(arg1 + 200),"ese protection enable denied\n");
            pcVar11 = 0xfffffff3;
            goto code_r0x080037e8;
        }
    }
    iVar4 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar4 = 0x30;
    }
    puVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc1,4);
    *(arg1 + 0x1d8) = puVar5;
    if (puVar5 == NULL) {
code_r0x080037e4:
        pcVar11 = 0xfffffff4;
        goto code_r0x080037e8;
    }
    cVar9 = pcVar3[1];
    uVar8 = 1;
    uVar7 = 0x1f;
    *puVar5 = 0x1f2f;
    *(puVar5 + 1) = 1;
    *(arg1 + 0x1e0) = 0x40004;
    if (cVar9 == '\x01') {
        *(puVar5 + 3) = 1;
    }
    else {
        uVar8 = 1;
        *(puVar5 + 3) = 0;
    }
code_r0x080038fc:
    _printk(0x8001c2a,0x2f,uVar7,uVar8);
    if (*(arg1 + 0x15d) == '\x01') {
        _dev_err(*(arg1 + 200),"cannot send ese cmd as FW download is in-progress\n");
        pcVar11 = 0xfffffff0;
        goto code_r0x08003b54;
    }
    gpio_to_desc(*(arg1 + 0x184));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 == 0) {
        _dev_err(*(arg1 + 200),"cannot send ese cmd as NFCC powered off\n");
        pcVar11 = 0xffffffed;
        goto code_r0x08003b54;
    }
    iVar4 = *(arg1 + 0x1d8);
    if (iVar4 == 0) {
        pcVar11 = 0xfffffff2;
        goto code_r0x08003b54;
    }
    pcVar11 = *(arg1 + 0x228);
    if (pcVar11 != sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr) goto code_r0x08003b90;
    do {
        uVar2 = (*pcVar11)(arg1,iVar4,*(arg1 + 0x1e0),3);
        if (uVar2 < 1) {
            pcVar11 = uVar2;
            _dev_err(*(arg1 + 200),"%s: write failed after max retry, ret %d\n","send_ese_cmd",pcVar11);
code_r0x08003b54:
            _printk(0x80007bc);
            goto code_r0x080037e8;
        }
        iVar4 = arg1 + 0x1c0;
        *(arg1 + 0x1e7) = 1;
        if (*(arg1 + 0x1e8) == '\0') {
            if (*(arg1 + 0x15c) != '\0') {
                pcVar11 = *(arg1 + 0x230);
                if (1 < (pcVar11 + -0x8003348 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar11,0x8000410);
                }
                (*pcVar11)(arg1);
                if (*(arg1 + 0x1e7) != '\0') {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    while( true ) {
                        iVar6 = prepare_to_wait_event(iVar4,&uStack_80,1);
                        if (*(arg1 + 0x1e7) == '\0') break;
                        if (iVar6 != 0) goto code_r0x08003aa8;
                        schedule();
                    }
                    finish_wait(iVar4,&uStack_80);
                }
code_r0x08003aa8:
                pcVar11 = *(arg1 + 0x238);
                if (1 < (pcVar11 + -0x8003348 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar11,0x8000430);
                }
                (*pcVar11)(arg1);
                goto code_r0x08003ac4;
            }
            uVar2 = sym.is_nfc_data_available_for_read(arg1);
            if (uVar2 < 1) {
                pcVar10 = *(arg1 + 0x238);
                pcVar11 = uVar2;
                if (1 < (pcVar10 + -0x8003348 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar10,0x80003f0);
                }
                (*pcVar10)(arg1);
                *(arg1 + 0x1e7) = 0;
            }
            else {
                uVar2 = sym.read_cold_reset_rsp(arg1,0);
                *(arg1 + 0x1e7) = 0;
                if (-1 < uVar2) goto code_r0x08003aa8;
                pcVar11 = uVar2;
                _printk(0x8001a71,"ese_cold_reset_ioctl");
            }
        }
        else {
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            init_wait_entry(&uStack_80,0);
            while( true ) {
                iVar6 = prepare_to_wait_event(iVar4,&uStack_80,1);
                if (*(arg1 + 0x1e7) == '\0') break;
                if (iVar6 != 0) goto code_r0x08003ac4;
                schedule();
            }
            finish_wait(iVar4,&uStack_80);
code_r0x08003ac4:
            if (pcVar3[1] == '\x02') {
                cVar9 = -1;
                *(arg1 + 0x1e6) = 0;
code_r0x08003af0:
                *(arg1 + 0x1e4) = cVar9;
            }
            else if (pcVar3[1] == '\x01') {
                cVar9 = *pcVar3;
                *(arg1 + 0x1e6) = 1;
                goto code_r0x08003af0;
            }
            pcVar11 = *(arg1 + 0x1e5);
        }
code_r0x080037e8:
        kfree(*(arg1 + 0x1d8));
        *(arg1 + 0x1d8) = 0;
        kfree(pcVar3);
        mutex_unlock(unaff_x20);
code_r0x08003804:
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == aiStack_58[2]) {
            return pcVar11;
        }
        __stack_chk_fail();
code_r0x08003b90:
        __cfi_slowpath_diag(0x9ba57134f3e60673,pcVar11,0x8000450);
        iVar4 = *(arg1 + 0x1d8);
    } while( true );
}


// ===== sym._copy_from_user @ 0x08003c34 (size 376) =====

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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user_1 @ 0x08003de8 (size 376) =====

int64_t sym._copy_from_user_1(int64_t arg1,int64_t arg2,int64_t arg3)

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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08003f9c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003fe0

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
    //switch table (4 cases) at 0x8000750
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003ff4);
    (*pcVar1)();
}


// ===== sym.nfc_parse_dt @ 0x08003ff4 (size 828) =====

void sym.nfc_parse_dt(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
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
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_c8 = 0;
    uStack_d0 = 0x800120f;
    iVar6 = *(arg1 + 0x2f0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_b8 = 0;
    uStack_98 = 0x8000b74;
    uStack_90 = 0;
    uStack_c0 = 0x8001502;
    uStack_78 = 0;
    uStack_88 = 0x8001502;
    if (iVar6 == 0) {
        _printk(0x800181f,"nfc_parse_dt");
code_r0x0800408c:
        uVar2 = 0xffffffea;
    }
    else {
        *arg2 = 0xffffffeaffffffea;
        *(arg2 + 8) = 0xffffffeaffffffea;
        if ((arg3 & 0xff) == 0) {
            uVar3 = of_get_named_gpio_flags(iVar6,"qcom,sn-irq",0,0);
            *arg2 = uVar3;
            if (0x1ff < uVar3) {
                _printk(0x8000bdd,"nfc_parse_dt");
                uVar2 = *arg2;
                goto code_r0x0800429c;
            }
            _printk(0x8000fcc,"nfc_parse_dt");
        }
        uVar3 = of_get_named_gpio_flags(iVar6,"qcom,sn-ven",0,0);
        *(arg2 + 4) = uVar3;
        if (0x1ff < uVar3) {
            _printk(0x800106c,"nfc_parse_dt");
            uVar2 = *(arg2 + 4);
            goto code_r0x0800429c;
        }
        uVar3 = of_get_named_gpio_flags(iVar6,"qcom,sn-firm",0,0);
        *(arg2 + 0xc) = uVar3;
        if (0x1ff < uVar3) {
            _printk(0x8000bfc,"nfc_parse_dt");
        }
        iVar1 = of_property_read_string(iVar6,"qcom,clk-src",arg2 + 0x20);
        if (iVar1 == 0) {
            *(arg2 + 0x28) = 1;
        }
        else {
            *(arg2 + 0x28) = 0;
            uVar3 = of_get_named_gpio_flags(iVar6,"qcom,sn-clkreq",0,0);
            *(arg2 + 8) = uVar3;
            if (0x1ff < uVar3) {
                _dev_err(arg1,"clkreq gpio invalid %d\n");
                goto code_r0x0800408c;
            }
        }
        iVar4 = soc_device_match(&uStack_e0);
        if (iVar4 != 0) {
            *(arg2 + 0x28) = 1;
            _printk(0x8000978,"nfc_parse_dt");
        }
        iVar1 = of_property_read_string(iVar6,"qcom,sn-szone",arg2 + 0x30);
        *(arg2 + 0x38) = iVar1 == 0;
        _printk(0x8000cb7,"nfc_parse_dt");
        _printk(0x80012ff,"nfc_parse_dt",*arg2,*(arg2 + 4),*(arg2 + 0xc),*(arg2 + 8),*(arg2 + 0x28));
        iVar1 = of_property_read_variable_u32_array(iVar6,"qcom,sn-vdd-1p8-voltage",arg2 + 0x10,2,0);
        if (iVar1 < 0) {
            _dev_err(arg1,"error reading NFC VDDIO min and max value\n");
            *(arg2 + 0x10) = 0x1dc13000192d50;
        }
        iVar1 = of_property_read_variable_u32_array(iVar6,"qcom,sn-vdd-1p8-current",arg2 + 0x18,1,0);
        if (iVar1 < 0) {
            _dev_err(arg1,"error reading NFC current value\n");
            uVar2 = 0;
            *(arg2 + 0x18) = 0x26548;
        }
        else {
            uVar2 = 0;
        }
    }
code_r0x0800429c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    uVar3 = __stack_chk_fail(uVar2);
    if (uVar3 < 0x200) {
        *extraout_x18 = sym.set_valid_gpio;
        uVar5 = gpio_to_desc();
        gpiod_set_raw_value(uVar5,extraout_x1 & 0xffffffff);
        usleep_range_state(10000,0x2774,2);
    }
    return;
}


// ===== sym.set_valid_gpio @ 0x08004330 (size 84) =====

void sym.set_valid_gpio(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x200) {
        *in_x18 = unaff_x30;
        uVar1 = gpio_to_desc();
        gpiod_set_raw_value(uVar1,arg2 & 0xffffffff);
        usleep_range_state(10000,0x2774,2);
    }
    return;
}


// ===== sym.get_valid_gpio @ 0x08004384 (size 60) =====

ulong sym.get_valid_gpio(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x200) {
        *in_x18 = unaff_x30;
        gpio_to_desc();
        uVar1 = gpiod_get_raw_value();
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.gpio_set_ven @ 0x080043c0 (size 136) =====

void sym.gpio_set_ven(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(arg1 + 0x184));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 != arg2) {
        if ((obj.sem_eSE_pwr_off != 0x0) || (uVar2 = sym.nfc_hw_secure_check(), (uVar2 & 1) == 0)) {
            uVar3 = gpio_to_desc(*(arg1 + 0x184));
            gpiod_set_raw_value(uVar3,arg2 & 0xffffffff);
        }
        if (arg2 == 0) {
            uVar3 = 20000;
            uVar4 = 0x4e84;
        }
        else {
            uVar3 = 10000;
            uVar4 = 0x2774;
        }
        usleep_range_state(uVar3,uVar4,2);
    }
    return;
}


// ===== sym.nfc_hw_secure_check @ 0x08004448 (size 516) =====

uint32_t sym.nfc_hw_secure_check(void)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
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
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pcStack_90 = NULL;
    uStack_88 = 0;
    uStack_94 = 0x506;
    pcStack_68 = NULL;
    uStack_60 = 0;
    puStack_78 = NULL;
    uStack_70 = 0;
    acStack_98[0] = '\0';
    iVar3 = get_client_env_object(&pcStack_90);
    uVar5 = uStack_88;
    pcVar2 = pcStack_90;
    if (iVar3 == 0) {
        puStack_58 = &uStack_7c;
        pcStack_48 = NULL;
        uStack_40 = 0;
        uStack_7c = 0x108;
        uStack_50 = 4;
        __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x80004d0);
        iVar3 = (*pcVar2)(uVar5,0,&puStack_58,0x1001);
        uVar5 = uStack_40;
        pcVar2 = pcStack_48;
        if (iVar3 == 0xc) {
            uVar4 = 0;
        }
        else if (iVar3 == 0) {
            puStack_78 = &uStack_94;
            pcStack_68 = acStack_98;
            uVar4 = 1;
            uStack_70 = 4;
            uStack_60 = 1;
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_48,0x80004d0);
            iVar3 = (*pcVar2)(uVar5,1,&puStack_78,0x11);
            _printk(0x800089b,iVar3,acStack_98[0]);
            if (iVar3 == 0) {
                obj.sem_eSE_pwr_off = 0x0;
                uVar4 = acStack_98[0] == '\x01';
            }
            else if (iVar3 == 10) {
                uVar4 = 0;
            }
            __cfi_slowpath_diag(0x265628c5e7c4aad4,pcVar2,0x80004d0);
            (*pcVar2)(uVar5,0xffff,0,0);
        }
        else {
            uVar4 = 1;
        }
        uVar5 = uStack_88;
        pcVar2 = pcStack_90;
        __cfi_slowpath_diag(0x265628c5e7c4aad4,pcStack_90,0x80004d0);
        (*pcVar2)(uVar5,0xffff,0,0);
    }
    else {
        _printk(0x8000aa3,iVar3);
        uVar4 = 1;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.configure_gpio;
    if (0x1ff < auVar7._0_4_) {
        _printk(0x8000b85,"configure_gpio");
        return 0xffffffea;
    }
    uVar6 = auVar7._0_8_ & 0xffffffff;
    uVar4 = gpio_request(auVar7._0_8_,"nfc_gpio");
    if (uVar4 == 0) {
        if ((auVar7._8_8_ & 1) == 0) {
            gpio_to_desc(uVar6);
            uVar4 = gpiod_direction_input();
        }
        else {
            uVar5 = gpio_to_desc(uVar6);
            uVar4 = gpiod_direction_output_raw(uVar5,auVar7._8_4_ & 2);
        }
        if (uVar4 == 0) {
            if ((auVar7._8_4_ >> 2 & 1) == 0) {
                return 0;
            }
            gpio_to_desc(uVar6);
            uVar4 = gpiod_to_irq();
            if (-1 < uVar4) {
                return uVar4;
            }
            uVar5 = 0x80019c2;
        }
        else {
            uVar5 = 0x800133c;
        }
        _printk(uVar5,"configure_gpio",uVar6);
        gpio_free(uVar6);
        return uVar4;
    }
    _printk(0x8000a4f,"configure_gpio",uVar6);
    return uVar4;
}


// ===== sym.configure_gpio @ 0x0800464c (size 276) =====

int sym.configure_gpio(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x1ff < arg1) {
        _printk(0x8000b85,"configure_gpio");
        return -0x16;
    }
    iVar1 = gpio_request(arg1,"nfc_gpio");
    if (iVar1 != 0) {
        _printk(0x8000a4f,"configure_gpio",arg1);
        return iVar1;
    }
    if ((arg2 & 1U) == 0) {
        gpio_to_desc(arg1);
        iVar1 = gpiod_direction_input();
    }
    else {
        uVar2 = gpio_to_desc(arg1);
        iVar1 = gpiod_direction_output_raw(uVar2,arg2 & 2);
    }
    if (iVar1 == 0) {
        if ((arg2 >> 2 & 1) == 0) {
            return 0;
        }
        gpio_to_desc(arg1);
        iVar1 = gpiod_to_irq();
        if (-1 < iVar1) {
            return iVar1;
        }
        uVar2 = 0x80019c2;
    }
    else {
        uVar2 = 0x800133c;
    }
    _printk(uVar2,"configure_gpio",arg1);
    gpio_free(arg1);
    return iVar1;
}


// ===== sym.gpio_free_all @ 0x08004760 (size 108) =====

void sym.gpio_free_all(uint32_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if (*(uVar1 + 0x188) < 0x200) {
        gpio_free();
    }
    if (*(uVar1 + 0x18c) < 0x200) {
        gpio_free();
    }
    if (*(uVar1 + 0x180) < 0x200) {
        gpio_free();
    }
    if (*(uVar1 + 0x184) < 0x200) {
        gpio_free();
    }
    return;
}


// ===== sym.nfc_misc_unregister @ 0x080047cc (size 108) =====

void sym.nfc_misc_unregister(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(*(arg1 + 0x200));
    device_destroy(*(arg1 + 0xc0),*(arg1 + 0x158));
    cdev_del(arg1 + 0xd0);
    class_destroy(*(arg1 + 0xc0));
    unregister_chrdev_region(*(arg1 + 0x158),arg2 & 0xffffffff);
    if (*(arg1 + 0x218) != 0) {
        ipc_log_context_destroy();
    }
    return;
}


// ===== sym.nfc_misc_register @ 0x08004838 (size 572) =====

uint64_t sym.nfc_misc_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg3 & 0xffffffff;
    uVar3 = alloc_chrdev_region(arg1 + 0x158,0);
    if (uVar3 < 0) {
        piVar4 = uVar3;
        _printk(0x80007e3,"nfc_misc_register",piVar4);
    }
    else {
        piVar4 = __class_create(obj.__this_module);
        *(arg1 + 0xc0) = piVar4;
        if (piVar4 < 0xfffffffffffff001) {
            iVar1 = arg1 + 0xd0;
            cdev_init(iVar1,arg2);
            uVar3 = cdev_add(iVar1,*(arg1 + 0x158),uVar7);
            if (-1 < uVar3) {
                piVar4 = device_create(*(arg1 + 0xc0),0,*(arg1 + 0x158),arg1,arg4);
                *(arg1 + 200) = piVar4;
                if (piVar4 < 0xfffffffffffff001) {
                    iVar6 = piVar4[0xe];
                    if (iVar6 == 0) {
                        iVar6 = *piVar4;
                    }
                    uVar5 = ipc_log_context_create(2,iVar6,0);
                    *(arg1 + 0x218) = uVar5;
                    uVar5 = _gpio_to_desc;
                    *(arg1 + 0x1f8) = 0x102;
                    iVar6 = kmem_cache_alloc_trace(uVar5,0xdc1,0x102);
                    *(arg1 + 0x200) = iVar6;
                    if (iVar6 == 0) {
                        kfree();
                        device_destroy(*(arg1 + 0xc0),*(arg1 + 0x158));
                        cdev_del(iVar1);
                        class_destroy(*(arg1 + 0xc0));
                        unregister_chrdev_region(*(arg1 + 0x158),uVar7);
                        if (*(arg1 + 0x218) != 0) {
                            ipc_log_context_destroy();
                        }
                        piVar4 = 0xfffffff4;
                    }
                    else {
                        *(arg1 + 0x1e8) = 0;
                        *(arg1 + 0x1e6) = 0;
                        *(arg1 + 0x1e4) = 0xff;
                        __init_waitqueue_head(arg1 + 0x1c0,"&nfc_dev->cold_reset.read_wq",obj.nfc_misc_register.__key)
                        ;
                        piVar4 = NULL;
                    }
                }
                else {
                    _printk(0x8001b10,"nfc_misc_register",piVar4 & 0xffffffff);
                    cdev_del(iVar1);
                    class_destroy(*(arg1 + 0xc0));
                    unregister_chrdev_region(*(arg1 + 0x158),uVar7);
                }
                goto code_r0x08004a50;
            }
            piVar4 = uVar3;
            _printk(0x8001837,"nfc_misc_register",piVar4);
            class_destroy(*(arg1 + 0xc0));
            uVar2 = *(arg1 + 0x158);
        }
        else {
            _printk(0x8000d73,"nfc_misc_register",piVar4 & 0xffffffff);
            uVar2 = *(arg1 + 0x158);
        }
        unregister_chrdev_region(uVar2,uVar7);
    }
code_r0x08004a50:
    return piVar4 & 0xffffffff;
}


// ===== sym.nfc_dev_compat_ioctl @ 0x08004a74 (size 40) =====

int64_t sym.nfc_dev_compat_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.nfc_dev_ioctl(arg1,arg2,arg3);
    return iVar1;
}


// ===== sym.nfc_dev_ioctl @ 0x08004a9c (size 452) =====

int64_t sym.nfc_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    if (arg1_00 == 0) {
        return -0x13;
    }
    iVar1 = arg2;
    if (((*(arg1_00 + 0x1b8) != '\0') && (iVar1 != 0x4004e90a)) && (*(arg1_00 + 0x20c) != '\0')) {
        _printk(0x8000db0);
        return -1;
    }
    _printk(0x8000acf,"nfc_dev_ioctl",arg2 & 0xffffffff,arg3);
    if (iVar1 + 0xbffb16ffU < 10) {
    //switch table (10 cases) at 0x8001d26
        switch(*(iVar1 + 0xbffb16ffU + 0x8001d26) * 4 + 0x8004b60) {
        case 0x8004b64:
            iVar1 = sym.nfc_ioctl_power_states(arg1_00,arg3);
            break;
        case 0x8004ba8:
            goto code_r0x08004c14;
        case 0x8004bb8:
            if (arg3 == 0) {
                iVar1 = 0;
                *(arg1_00 + 0x1e9) = 0;
            }
            else if (arg3 == 1) {
                iVar1 = 0;
                *(arg1_00 + 0x1e9) = 1;
                *(arg1_00 + 0x15d) = 2;
            }
            else {
                iVar1 = -0x16;
            }
            break;
        case 0x8004be0:
            iVar1 = sym.nfc_ioctl_nfcc_info(arg1);
            break;
        case 0x8004bf4:
            if (*(arg1_00 + 0x1b8) == '\0') {
                iVar1 = 0;
            }
            else {
                iVar1 = sym.nfc_dynamic_protection_ioctl(arg1_00,arg3);
            }
            break;
        case 0x8004c40:
code_r0x08004c40:
            _printk(0x800136d,"nfc_dev_ioctl",arg3);
            iVar1 = -0x203;
        }
    }
    else {
        if (iVar1 != -0x7ffb16fd) {
            if (iVar1 == -0x3fef16f8) {
                iVar1 = sym.ese_cold_reset_ioctl(arg1_00);
                goto code_r0x08004c18;
            }
            goto code_r0x08004c40;
        }
        arg3 = 2;
code_r0x08004c14:
        iVar1 = sym.nfc_ese_pwr(arg1_00,arg3);
    }
code_r0x08004c18:
    return iVar1;
}


// ===== sym.nfc_post_init @ 0x08004c60 (size 360) =====

int sym.nfc_post_init(int64_t arg1)

{
    uint32_t arg1_00;
    uint32_t arg1_01;
    uint32_t arg1_02;
    uint8_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.nfc_misc_register.__key & 1) == 0) {
        if (arg1 == 0) {
            return -0x13;
        }
        arg1_00 = *(arg1 + 0x184);
        arg1_01 = *(arg1 + 0x188);
        arg1_02 = *(arg1 + 0x18c);
        uVar1 = *(arg1 + 0x1a8);
        iVar2 = sym.configure_gpio(arg1_00,1);
        if (iVar2 != 0) {
            _printk(0x8000a76,"nfc_post_init",arg1_00);
            return iVar2;
        }
        iVar2 = sym.configure_gpio(arg1_02,1);
        if (iVar2 != 0) {
            _printk(0x8001a84,"nfc_post_init",arg1_02);
        }
        if (((uVar1 & 1) == 0) && (iVar2 = sym.configure_gpio(arg1_01,0), iVar2 != 0)) {
            _printk(0x80018f9,"nfc_post_init",arg1_01);
            return iVar2;
        }
        iVar2 = sym.nfcc_hw_check(arg1);
        if ((iVar2 != 0) || (*(arg1 + 0x15d) == '\0')) {
            _printk(0x80011ad,iVar2);
            gpio_free(arg1_02);
            gpio_free(arg1_00);
            return iVar2;
        }
        if (*(arg1 + 0x1b8) != '\0') {
            _obj.sem_eSE_pwr_off = 0;
            _obj.nfc_i2c_dev_driver = obj.nfc_i2c_dev_driver;
            _reloc.nfc_i2c_dev_probe.cfi_jt = obj.nfc_i2c_dev_driver;
        }
        obj.nfc_misc_register.__key = 0x1;
        _printk(0x8001047,"nfc_post_init");
    }
    return 0;
}


// ===== sym.nfc_dynamic_protection_ioctl @ 0x08004dd8 (size 168) =====

int sym.nfc_dynamic_protection_ioctl(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 1) {
        if (*(arg1 + 0x1e8) != '\0') {
            return -1;
        }
        if ((*(arg1 + 0x161) != '\0') && (iVar1 = down_timeout(obj.sem_eSE_pwr_off,0xfa), iVar1 != 0)) {
            _printk(0x800080f);
        }
        iVar1 = sym.nfc_ioctl_power_states(arg1,0);
        uVar2 = 0x80019e0;
        *(arg1 + 0x20c) = 1;
    }
    else if (arg2 == 0) {
        *(arg1 + 0x20c) = 0;
        if ((reloc.nfc_i2c_dev_remove.cfi_jt & 1) == 0) {
            iVar1 = sym.nfc_post_init(arg1);
            if (iVar1 == 0) {
                uVar2 = 0x8001b3a;
                reloc.nfc_i2c_dev_remove.cfi_jt = 0x1;
                goto code_r0x08004ee8;
            }
        }
        else {
            gpio_to_desc(*(arg1 + 0x184));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 == 0) {
                iVar1 = sym.nfc_ioctl_power_states(arg1,1);
            }
            else {
                iVar1 = 0;
            }
        }
        uVar2 = 0x8001b3a;
    }
    else {
        iVar1 = -0x203;
        uVar2 = 0x8000da1;
    }
code_r0x08004ee8:
    _printk(uVar2);
    return iVar1;
}


// ===== fcn.08004ee8 @ 0x08004ee8 (size 232) =====

uint fcn.08004ee8(void)

{
    uint unaff_w20;
    
    _printk();
    return unaff_w20;
}


// ===== sym.nfc_ioctl_power_states @ 0x08004ef0 (size 1832) =====

int sym.nfc_ioctl_power_states(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001055,"nfc_ioctl_power_states",arg2);
    if (arg2 < 9) {
    //switch table (9 cases) at 0x8001d30
        switch(*(arg2 + 0x8001d30) * 4 + 0x8004f48) {
        case 0x8004f4c:
            pcVar4 = *(arg1 + 0x238);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x80004f0);
            }
            (*pcVar4)(arg1);
            if (*(arg1 + 0x18c) < 0x200) {
                uVar2 = gpio_to_desc();
                gpiod_set_raw_value(uVar2,0);
                usleep_range_state(10000,0x2774,2);
            }
            gpio_to_desc(*(arg1 + 0x184));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 0) {
                if ((obj.sem_eSE_pwr_off != 0x0) || (uVar3 = sym.nfc_hw_secure_check(), (uVar3 & 1) == 0)) {
                    uVar2 = gpio_to_desc(*(arg1 + 0x184));
                    gpiod_set_raw_value(uVar2,0);
                }
                usleep_range_state(20000,0x4e84,2);
            }
            iVar1 = 0;
            *(arg1 + 0x15e) = 0;
            break;
        case 0x8004fec:
            pcVar4 = *(arg1 + 0x230);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000510);
            }
            (*pcVar4)(arg1);
            if (*(arg1 + 0x18c) < 0x200) {
                uVar2 = gpio_to_desc();
                gpiod_set_raw_value(uVar2,0);
                usleep_range_state(10000,0x2774,2);
            }
            gpio_to_desc(*(arg1 + 0x184));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 1) {
                if ((obj.sem_eSE_pwr_off != 0x0) || (uVar3 = sym.nfc_hw_secure_check(), (uVar3 & 1) == 0)) {
                    uVar2 = gpio_to_desc(*(arg1 + 0x184));
                    gpiod_set_raw_value(uVar2,1);
                }
                usleep_range_state(10000,0x2774,2);
            }
            iVar1 = 0;
            *(arg1 + 0x15e) = 1;
            break;
        case 0x8005094:
            pcVar4 = *(arg1 + 0x238);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000530);
            }
            (*pcVar4)(arg1);
            if (*(arg1 + 0x18c) < 0x200) {
                uVar2 = gpio_to_desc();
                gpiod_set_raw_value(uVar2,1);
                usleep_range_state(10000,0x2774,2);
            }
            *(arg1 + 0x15d) = 1;
            gpio_to_desc(*(arg1 + 0x184));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 0) {
                if ((obj.sem_eSE_pwr_off != 0x0) || (uVar3 = sym.nfc_hw_secure_check(), (uVar3 & 1) == 0)) {
                    uVar2 = gpio_to_desc(*(arg1 + 0x184));
                    gpiod_set_raw_value(uVar2,0);
                }
                usleep_range_state(20000,0x4e84,2);
            }
            gpio_to_desc(*(arg1 + 0x184));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 1) {
                if ((obj.sem_eSE_pwr_off != 0x0) || (uVar3 = sym.nfc_hw_secure_check(), (uVar3 & 1) == 0)) {
                    uVar2 = gpio_to_desc(*(arg1 + 0x184));
                    gpiod_set_raw_value(uVar2,1);
                }
                usleep_range_state(10000,0x2774,2);
            }
            pcVar4 = *(arg1 + 0x230);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000550);
            }
            (*pcVar4)(arg1);
            iVar1 = 0;
            break;
        case 0x8005198:
            if (*(arg1 + 0x1a8) == '\0') {
                iVar1 = 0;
            }
            else {
                iVar1 = sym.nfc_clock_select(arg1);
                if (iVar1 != 0) {
                    _printk(0x800143c,"nfc_ioctl_power_states");
                }
            }
            *(arg1 + 0x1e8) = 1;
            break;
        case 0x80051cc:
            if (*(arg1 + 0x1a8) == '\0') {
                iVar1 = 0;
            }
            else {
                iVar1 = sym.nfc_clock_deselect(arg1);
                if (iVar1 != 0) {
                    _printk(0x8001459,"nfc_ioctl_power_states");
                }
            }
            *(arg1 + 0x1e8) = 0;
            break;
        case 0x8005234:
            goto code_r0x08005234;
        case 0x8005258:
            _printk(0x800082c);
            sym.set_valid_gpio(*(arg1 + 0x18c),1);
            iVar1 = 0;
            *(arg1 + 0x15d) = 1;
            break;
        case 0x8005284:
            pcVar4 = *(arg1 + 0x238);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000570);
            }
            (*pcVar4)(arg1);
            sym.gpio_set_ven(arg1,0);
            sym.gpio_set_ven(arg1,1);
            pcVar4 = *(arg1 + 0x230);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000590);
            }
            (*pcVar4)(arg1);
            _printk(0x8000fe8,"nfc_ioctl_power_states");
            iVar1 = 0;
            break;
        case 0x80052fc:
            _printk(0x800189a);
            sym.set_valid_gpio(*(arg1 + 0x18c),0);
            iVar1 = 0;
            *(arg1 + 0x15d) = 2;
        }
    }
    else {
code_r0x08005234:
        _printk(0x8000b4d,"nfc_ioctl_power_states",arg2);
        iVar1 = -0x203;
    }
    return iVar1;
}


// ===== sym.nfc_dev_open @ 0x080053fc (size 252) =====

ulong sym.nfc_dev_open(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x2b0);
    iVar1 = iVar6 + -0xd0;
    if (iVar1 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x3c) >> 0xf & 1) == 0) {
            *(iVar2 + 0x3c) = *(iVar2 + 0x3c) | 0x8000;
        }
        mutex_lock(iVar6 + -0x48);
        *(arg2 + 0xd8) = iVar1;
        iVar4 = *(iVar6 + -0x18);
        if (iVar4 == 0) {
            if (*(iVar6 + 0xbc) < 0x200) {
                uVar3 = gpio_to_desc();
                gpiod_set_raw_value(uVar3,0);
                usleep_range_state(10000,0x2774,2);
            }
            pcVar5 = *(iVar6 + 0x160);
            if (1 < (pcVar5 + -0x8003348 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar5,0x8000470);
            }
            (*pcVar5)(iVar1);
            iVar4 = *(iVar6 + -0x18);
        }
        *(iVar6 + -0x18) = iVar4 + 1;
        mutex_unlock(iVar6 + -0x48);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.nfc_dev_flush @ 0x080054f8 (size 212) =====

ulong sym.nfc_dev_flush(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    if (iVar5 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar1 = iVar5 + 0x18;
        iVar2 = mutex_trylock(iVar1);
        if (iVar2 == 0) {
            pcVar4 = *(iVar5 + 0x238);
            *(iVar5 + 0x162) = 1;
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x8000490);
            }
            (*pcVar4)(iVar5);
            __wake_up(iVar5,3,1,0);
            mutex_lock(iVar1);
            *(iVar5 + 0x162) = 0;
        }
        mutex_unlock(iVar1);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.nfc_dev_close @ 0x080055cc (size 276) =====

ulong sym.nfc_dev_close(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x2b0);
    if (iVar5 + -0xd0 == 0) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar2 = sp_el0;
        if ((*(iVar2 + 0x3c) >> 0xf & 1) != 0) {
            *(iVar2 + 0x3c) = *(iVar2 + 0x3c) & 0xffff7fff;
        }
        mutex_lock(iVar5 + -0x48);
        iVar1 = *(iVar5 + -0x18);
        if (iVar1 == 1) {
            pcVar4 = *(iVar5 + 0x168);
            if (1 < (pcVar4 + -0x8003348 >> 3 | pcVar4 << 0x3d)) {
                __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar4,0x80004b0);
            }
            (*pcVar4)(iVar5 + -0xd0);
            if (*(iVar5 + 0xbc) < 0x200) {
                uVar3 = gpio_to_desc();
                gpiod_set_raw_value(uVar3,0);
                usleep_range_state(10000,0x2774,2);
            }
            iVar1 = *(iVar5 + -0x18);
        }
        if (iVar1 != 0) {
            *(iVar5 + -0x18) = iVar1 + -1;
        }
        *(arg2 + 0xd8) = 0;
        mutex_unlock(iVar5 + -0x48);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.validate_nfc_state_nci @ 0x080056e0 (size 176) =====

uint sym.validate_nfc_state_nci(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x20c) == '\0') {
        gpio_to_desc(*(arg1 + 0x184));
        iVar1 = gpiod_get_raw_value();
        if (iVar1 == 0) {
            uVar3 = 0xffffffed;
            uVar2 = 0x8000b99;
            goto code_r0x08005780;
        }
    }
    if (*(arg1 + 0x18c) < 0x200) {
        gpio_to_desc();
        iVar1 = gpiod_get_raw_value();
        if (iVar1 == 1) {
            uVar3 = 0xfffffff0;
            uVar2 = 0x8000c1f;
            goto code_r0x08005780;
        }
    }
    if (*(arg1 + 0x15d) == '\x02') {
        return 0;
    }
    uVar3 = 0xfffffff0;
    uVar2 = 0x800108b;
code_r0x08005780:
    _printk(uVar2,"validate_nfc_state_nci");
    return uVar3;
}


// ===== sym.get_nfcc_session_state_dl @ 0x08005790 (size 400) =====

ulong sym.get_nfcc_session_state_dl(int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = *(arg1 + 0x78);
    **(arg1 + 0x80) = 0x33f5000000f20400;
    pcVar4 = *(arg1 + 0x228);
    if (pcVar4 != sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr) {
        __cfi_slowpath_diag(0x9ba57134f3e60673,pcVar4,0x80005b0);
    }
    iVar2 = (*pcVar4)(arg1,*(arg1 + 0x80),8,3);
    if (iVar2 < 1) {
        uVar3 = 0x8001b66;
    }
    else {
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar4 = *(arg1 + 0x220);
        if (pcVar4 != sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr) {
            __cfi_slowpath_diag(0xeef00c64ddd02a0d,pcVar4,0x80005d0);
        }
        iVar2 = (*pcVar4)(arg1,pcVar1,8,2000);
        if (0 < iVar2) {
            if (*pcVar1 != '\0') {
                _printk(0x8001927,"get_nfcc_session_state_dl");
                return 0;
            }
            if (pcVar1[3] != '\0') {
                _printk(0x80010a4,"get_nfcc_session_state_dl");
                return 4;
            }
            _printk(0x8001004,"get_nfcc_session_state_dl");
            return 1;
        }
        uVar3 = 0x80012a7;
    }
    _printk(uVar3,"get_nfcc_session_state_dl",iVar2);
    return 0;
}


// ===== sym.nfcc_hw_check @ 0x08005920 (size 1580) =====

uint sym.nfcc_hw_check(int64_t arg1)

{
    char *pcVar1;
    char *pcVar2;
    char cVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    ulong uVar8;
    code *pcVar9;
    ulong *in_x18;
    uint uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gpio_set_ven(arg1,1);
    sym.gpio_set_ven(arg1,0);
    sym.gpio_set_ven(arg1,1);
    pcVar2 = *(arg1 + 0x78);
    **(arg1 + 0x80) = 0x10020;
    pcVar9 = *(arg1 + 0x228);
    if (pcVar9 != sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr) {
        __cfi_slowpath_diag(0x9ba57134f3e60673,pcVar9,0x8000630);
    }
    iVar6 = (*pcVar9)(arg1,*(arg1 + 0x80),4,1);
    if (iVar6 < 1) {
        _printk(0x8001b90,"get_nfcc_chip_type",iVar6);
code_r0x08005b3c:
        pcVar9 = *(arg1 + 0x230);
        if (1 < (pcVar9 + -0x8003348 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar9,0x80005f0);
        }
        (*pcVar9)(arg1);
        sym.set_valid_gpio(*(arg1 + 0x18c),1);
        sym.gpio_set_ven(arg1,0);
        sym.gpio_set_ven(arg1,1);
        pcVar2 = *(arg1 + 0x78);
        **(arg1 + 0x80) = 0xef6e000000f10400;
        pcVar9 = *(arg1 + 0x228);
        if (pcVar9 != sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr) {
            __cfi_slowpath_diag(0x9ba57134f3e60673,pcVar9,0x80006d0);
        }
        uVar7 = (*pcVar9)(arg1,*(arg1 + 0x80),8,3);
        if (uVar7 < 1) {
            uVar8 = 0x8000c59;
        }
        else {
            pcVar2[0x10] = '\0';
            pcVar2[0x11] = '\0';
            pcVar2[0x12] = '\0';
            pcVar2[0x13] = '\0';
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2[4] = '\0';
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            pcVar2[8] = '\0';
            pcVar2[9] = '\0';
            pcVar2[10] = '\0';
            pcVar2[0xb] = '\0';
            pcVar2[0xc] = '\0';
            pcVar2[0xd] = '\0';
            pcVar2[0xe] = '\0';
            pcVar2[0xf] = '\0';
            pcVar9 = *(arg1 + 0x220);
            if (pcVar9 != sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr) {
                __cfi_slowpath_diag(0xeef00c64ddd02a0d,pcVar9,0x80006f0);
            }
            uVar7 = (*pcVar9)(arg1,pcVar2,0x14,2000);
            if (0 < uVar7) {
                iVar6 = 0xff;
                if ((*pcVar2 == '\0') && (0x13 < uVar7)) {
                    *(arg1 + 0x15f) = pcVar2[7];
                    if (pcVar2[4] == '\x01') {
                        if (pcVar2[7] == '\x10') {
                            iVar6 = 1;
                        }
                        else {
                            iVar6 = 2;
                            if (pcVar2[7] != '\x01') {
                                iVar6 = 0xff;
                            }
                        }
                    }
                    else {
                        iVar6 = 0xff;
                    }
                    *(arg1 + 0x208) = pcVar2[3];
                    *(arg1 + 0x209) = pcVar2[4];
                    *(arg1 + 0x20b) = pcVar2[6];
                    *(arg1 + 0x20a) = pcVar2[7];
                }
                bVar5 = true;
                goto joined_r0x08005c80;
            }
            uVar8 = 0x80015f3;
        }
        _printk(uVar8,"get_nfcc_chip_type_dl",uVar7);
        iVar6 = 0xff;
        bVar5 = true;
        if (arg1 != 0) goto code_r0x08005c84;
code_r0x08005c34:
        _printk(0x80010c9);
code_r0x08005d74:
        uVar8 = 0x8000c3e;
    }
    else {
        usleep_range_state(10000,0x2774,2);
        pcVar9 = *(arg1 + 0x230);
        if (1 < (pcVar9 + -0x8003348 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar9,0x8000650);
        }
        (*pcVar9)(arg1);
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar9 = *(arg1 + 0x220);
        if (pcVar9 != sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr) {
            __cfi_slowpath_diag(0xeef00c64ddd02a0d,pcVar9,0x8000670);
        }
        iVar6 = (*pcVar9)(arg1,pcVar2,4,2000);
        if (iVar6 < 1) {
            uVar8 = 0x8000de9;
code_r0x08005b08:
            _printk(uVar8,"get_nfcc_chip_type",iVar6);
code_r0x08005b14:
            iVar6 = 0xff;
        }
        else {
            if (*pcVar2 != '@') {
                _printk(0x800148a,"get_nfcc_chip_type");
                goto code_r0x08005b14;
            }
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            pcVar2[8] = '\0';
            pcVar2[9] = '\0';
            pcVar2[10] = '\0';
            pcVar2[0xb] = '\0';
            pcVar2[0xc] = '\0';
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2[4] = '\0';
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            pcVar9 = *(arg1 + 0x220);
            if (pcVar9 != sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr) {
                __cfi_slowpath_diag(0xeef00c64ddd02a0d,pcVar9,0x8000690);
            }
            iVar6 = (*pcVar9)(arg1,pcVar2,0xd,2000);
            if (iVar6 < 1) {
                uVar8 = 0x8000e16;
                goto code_r0x08005b08;
            }
            iVar6 = 0xff;
            if (*pcVar2 == '`') {
                pcVar1 = pcVar2 + pcVar2[2];
                cVar3 = *pcVar1;
                cVar4 = pcVar1[1];
                *(arg1 + 0x208) = pcVar1[-1];
                *(arg1 + 0x209) = cVar3;
                *(arg1 + 0x20a) = cVar4;
                iVar6 = 2;
                if (cVar3 != '\x01' || cVar4 != '\x01') {
                    iVar6 = 0xff;
                }
                if (cVar3 == '\x01' && cVar4 == '\x10') {
                    iVar6 = 1;
                }
                *(arg1 + 0x20b) = pcVar2[pcVar2[2] + 2];
            }
        }
        pcVar9 = *(arg1 + 0x238);
        if (1 < (pcVar9 + -0x8003348 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar9,0x80006b0);
        }
        (*pcVar9)(arg1);
        if (iVar6 == 0xff) goto code_r0x08005b3c;
        bVar5 = false;
joined_r0x08005c80:
        if (arg1 == 0) goto code_r0x08005c34;
code_r0x08005c84:
        if (iVar6 == 1) {
            if (*(arg1 + 0x18c) < 0x200) goto code_r0x08005cc0;
            goto code_r0x08005d74;
        }
        if (iVar6 != 2) goto code_r0x08005d74;
        sym.set_valid_gpio(*(arg1 + 0x18c),0);
        gpio_free(*(arg1 + 0x18c));
        *(arg1 + 0x18c) = 0xffffffea;
code_r0x08005cc0:
        if (!bVar5) {
            iVar6 = 2;
code_r0x08005d00:
            uVar10 = 0;
            *(arg1 + 0x15d) = iVar6;
            goto code_r0x08005d08;
        }
        iVar6 = sym.get_nfcc_session_state_dl(arg1);
        if (iVar6 - 1U < 2) goto code_r0x08005d00;
        if (iVar6 == 4) {
            _printk(0x8000cf4,"nfcc_hw_check");
            iVar6 = 4;
            goto code_r0x08005d00;
        }
        uVar8 = 0x8001a05;
    }
    _printk(uVar8,"nfcc_hw_check");
    uVar10 = 0xfffffffa;
code_r0x08005d08:
    pcVar9 = *(arg1 + 0x238);
    if (1 < (pcVar9 + -0x8003348 >> 3 | pcVar9 << 0x3d)) {
        __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar9,0x8000610);
    }
    (*pcVar9)(arg1);
    sym.set_valid_gpio(*(arg1 + 0x18c),0);
    sym.gpio_set_ven(arg1,0);
    sym.gpio_set_ven(arg1,1);
    *(arg1 + 0x15e) = 1;
    return uVar10;
}


// ===== sym.nfc_ioctl_nfcc_info @ 0x08005f4c (size 20) =====

uint sym.nfc_ioctl_nfcc_info(int64_t arg1)

{
    return *(*(arg1 + 0xd8) + 0x208);
}


// ===== sym.is_nfc_data_available_for_read @ 0x08005f60 (size 308) =====

uint64_t sym.is_nfc_data_available_for_read(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    pcVar5 = *(arg1 + 0x230);
    if (1 < (pcVar5 + -0x8003348 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x3f1a38ef3ded7aea,pcVar5,0x8000710);
    }
    (*pcVar5)(arg1);
    if (*(arg1 + 0x170) == '\0') {
        uVar2 = 0x17;
    }
    else {
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        init_wait_entry(&uStack_50,0);
        uVar2 = prepare_to_wait_event(arg1,&uStack_50,1);
        if (*(arg1 + 0x170) == '\0') {
            uVar6 = 0x17;
        }
        else {
            uVar6 = 0x17;
            do {
                if (uVar2 != 0) goto code_r0x08006040;
                uVar6 = schedule_timeout(uVar6);
                uVar2 = prepare_to_wait_event(arg1,&uStack_50,1);
                if (uVar6 == 0 && *(arg1 + 0x170) == '\0') {
                    uVar6 = 1;
                }
            } while ((*(arg1 + 0x170) != '\0') && (uVar6 != 0));
        }
        uVar2 = uVar6;
        finish_wait(arg1,&uStack_50);
    }
code_r0x08006040:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.nfc_ldo_vote;
    uVar1 = regulator_set_voltage(*(iVar3 + 0x1f0),*(iVar3 + 400),*(iVar3 + 0x194));
    if (uVar1 < 0) {
        uVar2 = uVar1;
        uVar4 = 0x80009a6;
    }
    else {
        uVar1 = regulator_set_load(*(iVar3 + 0x1f0),*(iVar3 + 0x198));
        if (uVar1 < 0) {
            uVar2 = uVar1;
            uVar4 = 0x8001253;
        }
        else {
            uVar1 = regulator_enable(*(iVar3 + 0x1f0));
            uVar2 = uVar1;
            if (-1 < uVar1) {
                *(iVar3 + 0x160) = 1;
                return uVar2;
            }
            uVar4 = 0x800161d;
        }
    }
    _printk(uVar4,"nfc_ldo_vote");
    return uVar2;
}


// ===== sym.nfc_ldo_vote @ 0x08006094 (size 164) =====

int sym.nfc_ldo_vote(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = regulator_set_voltage(*(arg1 + 0x1f0),*(arg1 + 400),*(arg1 + 0x194));
    if (iVar1 < 0) {
        uVar2 = 0x80009a6;
    }
    else {
        iVar1 = regulator_set_load(*(arg1 + 0x1f0),*(arg1 + 0x198));
        if (iVar1 < 0) {
            uVar2 = 0x8001253;
        }
        else {
            iVar1 = regulator_enable(*(arg1 + 0x1f0));
            if (-1 < iVar1) {
                *(arg1 + 0x160) = 1;
                return iVar1;
            }
            uVar2 = 0x800161d;
        }
    }
    _printk(uVar2,"nfc_ldo_vote");
    return iVar1;
}


// ===== sym.nfc_ldo_config @ 0x08006138 (size 224) =====

uint64_t sym.nfc_ldo_config(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_get_property(*(arg1 + 0x2f0),"qcom,sn-vdd-1p8-supply",0);
    if (iVar1 == 0) {
        *(arg2 + 0x1f0) = 0;
        _printk(0x8000915,"nfc_ldo_config");
        uVar2 = 0;
    }
    else {
        uVar2 = regulator_get(arg1,"qcom,sn-vdd-1p8");
        *(arg2 + 0x1f0) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar3 = sym.nfc_ldo_vote(arg2);
            uVar2 = uVar3 & 0xffffffff;
            if (uVar3 < 0) {
                _printk(0x8000ec8,"nfc_ldo_config",uVar2);
                regulator_put(*(arg2 + 0x1f0));
            }
        }
        else {
            *(arg2 + 0x1f0) = 0;
            _printk(0x8000755,"nfc_ldo_config",uVar2 & 0xffffffff);
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.nfc_ldo_unvote @ 0x08006218 (size 184) =====

int sym.nfc_ldo_unvote(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x160) == '\0') {
        iVar1 = -0x16;
        uVar2 = 0x8001bbd;
    }
    else {
        iVar1 = regulator_disable(*(arg1 + 0x1f0));
        if (iVar1 < 0) {
            uVar2 = 0x8000d12;
        }
        else {
            *(arg1 + 0x160) = 0;
            iVar1 = regulator_set_voltage(*(arg1 + 0x1f0),0,0x1dc130);
            if (iVar1 < 0) {
                uVar2 = 0x80009a6;
            }
            else {
                iVar1 = regulator_set_load(*(arg1 + 0x1f0),0);
                if (-1 < iVar1) {
                    return iVar1;
                }
                uVar2 = 0x8001253;
            }
        }
    }
    _printk(uVar2,"nfc_ldo_unvote");
    return iVar1;
}


// ===== sym.nfc_clock_select @ 0x080062d0 (size 164) =====

uint64_t sym.nfc_clock_select(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = clk_get(*(arg1 + 0x168) + 0x20,"nfc_ref_clk");
    *(arg1 + 0x210) = uVar2;
    if (0xfffffffffffff000 < uVar2) {
        return uVar2 & 0xffffffff;
    }
    if (*(arg1 + 0x20d) == '\0') {
        uVar1 = clk_prepare(uVar2);
        if (uVar1 != 0) {
            return uVar1;
        }
        uVar1 = clk_enable(uVar2);
        if (uVar1 != 0) {
            clk_unprepare(uVar2);
            return uVar1;
        }
    }
    *(arg1 + 0x20d) = 1;
    return 0;
}


// ===== sym.nfc_clock_deselect @ 0x08006374 (size 100) =====

ulong sym.nfc_clock_deselect(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x210);
    if (iVar2 == 0) {
        uVar1 = 0xffffffea;
    }
    else if (*(arg1 + 0x20d) == '\0') {
        uVar1 = 0;
    }
    else {
        clk_disable(iVar2);
        clk_unprepare(iVar2);
        uVar1 = 0;
        *(arg1 + 0x20d) = 0;
    }
    return uVar1;
}


// ===== sym.i2c_disable_irq @ 0x080063d8 (size 108) =====

ulong sym.i2c_disable_irq(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x174);
    if (*(arg1 + 0x170) != '\0') {
        disable_irq_nosync(*(*(arg1 + 0x168) + 0x3b4));
        *(arg1 + 0x170) = 0;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x174,uVar1);
    return 0;
}


// ===== sym.i2c_enable_irq @ 0x08006444 (size 112) =====

ulong sym.i2c_enable_irq(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x174);
    if (*(arg1 + 0x170) == '\0') {
        *(arg1 + 0x170) = 1;
        enable_irq(*(*(arg1 + 0x168) + 0x3b4));
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x174,uVar1);
    return 0;
}


// ===== sym.i2c_read @ 0x080064b4 (size 1052) =====

char * sym.i2c_read(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    char *pcVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uchar *puVar10;
    char *pcVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar13;
    char *pcVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    uVar12 = arg4;
    pcVar11 = arg3;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    pcVar14 = pcVar11;
    if (0x3 < pcVar11) {
        pcVar14 = 0x4;
    }
    if (1999 < arg4) {
        arg4 = 2000;
    }
    pcVar1 = pcVar11;
    if (0x101 < pcVar11) {
        pcVar1 = 0x102;
    }
    gpio_to_desc(*(arg1 + 0x180));
    iVar3 = gpiod_get_raw_value();
    if (iVar3 != 0) {
code_r0x08006524:
        memset(arg2,0,pcVar1);
        uVar4 = i2c_transfer_buffer_flags(*(arg1 + 0x168),arg2,pcVar1,1);
        pcVar13 = uVar4;
        pcVar11 = "i2c_read";
        iVar3 = pcVar1;
        ipc_log_string(*(arg1 + 0x218),"%s of %d bytes, ret %d","i2c_read",pcVar1,pcVar13);
        if (uVar4 < 1) {
            pcVar11 = pcVar13;
            _printk(0x800172f,"i2c_read");
        }
        else {
            if (pcVar14 != NULL) {
                pcVar11 = *arg2;
                ipc_log_string(*(arg1 + 0x218)," %02x");
                if (pcVar14 != 0x1) {
                    pcVar11 = *(arg2 + 1);
                    ipc_log_string(*(arg1 + 0x218)," %02x");
                    if (pcVar14 != 0x2) {
                        pcVar11 = *(arg2 + 2);
                        ipc_log_string(*(arg1 + 0x218)," %02x");
                        if (pcVar14 != 0x3) {
                            pcVar11 = *(arg2 + 3);
                            ipc_log_string(*(arg1 + 0x218)," %02x");
                        }
                    }
                }
            }
            if ((((*(arg1 + 0x1e7) != '\0') && (*(arg1 + 0x1d8) != 0)) && (*arg2 == 'O')) &&
               (*(arg2 + 1) == *(*(arg1 + 0x1d8) + 1))) {
                sym.read_cold_reset_rsp(arg1,arg2);
                pcVar11 = 0x1;
                iVar3 = 0;
                *(arg1 + 0x1e7) = 0;
                __wake_up(arg1 + 0x1c0,1);
code_r0x08006630:
                pcVar13 = NULL;
            }
        }
code_r0x08006634:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_68) {
            return pcVar13 & 0xffffffff;
        }
        auVar15 = __stack_chk_fail();
        puVar10 = auVar15._8_8_;
        iVar9 = auVar15._0_8_;
        *extraout_x18 = sym.i2c_write;
        pcVar14 = pcVar11;
        if (0x3 < pcVar11) {
            pcVar14 = 0x4;
        }
        if (0x229 < pcVar11) {
            pcVar11 = 0x22a;
        }
        ipc_log_string(*(iVar9 + 0x218),"%s sending %d B","i2c_write",pcVar11);
        if (((pcVar14 != NULL) && (ipc_log_string(*(iVar9 + 0x218)," %02x",*puVar10), pcVar14 != 0x1)) &&
           ((ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[1]), pcVar14 != 0x2 &&
            (ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[2]), pcVar14 != 0x3)))) {
            ipc_log_string(*(iVar9 + 0x218)," %02x",puVar10[3]);
        }
        gpio_to_desc(*(iVar9 + 0x180));
        iVar5 = gpiod_get_raw_value();
        if (iVar5 != 0) {
            _printk(0x8000d32,"i2c_write");
            usleep_range_state(3000,0xc1c,2);
            gpio_to_desc(*(iVar9 + 0x180));
            iVar5 = gpiod_get_raw_value();
            if (iVar5 != 0) {
                _printk(0x8000d32,"i2c_write");
                usleep_range_state(3000,0xc1c,2);
                gpio_to_desc(*(iVar9 + 0x180));
                iVar5 = gpiod_get_raw_value();
                if (iVar5 != 0) {
                    _printk(0x8000d32,"i2c_write");
                    usleep_range_state(3000,0xc1c,2);
                    gpio_to_desc(*(iVar9 + 0x180));
                    iVar5 = gpiod_get_raw_value();
                    if (iVar5 != 0) {
                        _printk(0x8000d32,"i2c_write");
                        usleep_range_state(3000,0xc1c,2);
                        gpio_to_desc(*(iVar9 + 0x180));
                        iVar5 = gpiod_get_raw_value();
                        if (iVar5 != 0) {
                            _printk(0x8000d32,"i2c_write");
                            usleep_range_state(3000,0xc1c,2);
                            gpio_to_desc(*(iVar9 + 0x180));
                            iVar5 = gpiod_get_raw_value();
                            if (iVar5 != 0) {
                                _printk(0x8001653,"i2c_write");
                            }
                        }
                    }
                }
            }
        }
        if (iVar3 < 1) {
            pcVar14 = 0xffffffea;
        }
        else {
            iVar5 = 1;
            do {
                uVar4 = i2c_transfer_buffer_flags(*(iVar9 + 0x168),puVar10,pcVar11 & 0xffffffff,0);
                pcVar14 = uVar4;
                ipc_log_string(*(iVar9 + 0x218),"%s ret %d","i2c_write",pcVar14);
                if (uVar4 < 1) {
                    _printk(0x80017b1,"i2c_write",uVar4);
                    usleep_range_state(3000,0xc1c,2);
                }
                else {
                    if (pcVar11 == pcVar14) {
                        return pcVar14;
                    }
                    _printk(0x8000c83,"i2c_write",uVar4);
                    pcVar14 = 0xfffffffb;
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar3);
        }
        return pcVar14;
    }
    cVar2 = *(arg1 + 0x170);
    do {
        if (cVar2 == '\0') {
            *(arg1 + 0x170) = 1;
            enable_irq(*(*(arg1 + 0x168) + 0x3b4));
        }
        gpio_to_desc(*(arg1 + 0x180));
        iVar3 = gpiod_get_raw_value();
        if (iVar3 == 0) {
            if (arg4 == 0) {
                if ((*(arg1 + 0x170) != '\0') && (*(arg1 + 0x162) == '\0')) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&uStack_90,0);
                    while( true ) {
                        pcVar11 = 0x1;
                        uVar7 = prepare_to_wait_event(arg1,&uStack_90);
                        iVar3 = uVar12;
                        if ((*(arg1 + 0x170) == '\0') || (*(arg1 + 0x162) != '\0')) break;
                        if (uVar7 != 0) {
                            if (uVar7 == 0) goto code_r0x080067e8;
                            pcVar13 = uVar7 & 0xffffffff;
                            goto code_r0x08006634;
                        }
                        schedule();
                    }
                    finish_wait(arg1,&uStack_90);
                }
            }
            else {
                pcVar13 = __msecs_to_jiffies(arg4);
                if (*(arg1 + 0x170) == '\0') {
                    if (pcVar13 == NULL) {
                        pcVar13 = 0x1;
                    }
                }
                else {
                    if (pcVar13 == NULL && *(arg1 + 0x162) != '\0') {
                        pcVar13 = 0x1;
                    }
                    if ((*(arg1 + 0x162) == '\0') && (pcVar13 != NULL)) {
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_90 = 0;
                        pcVar6 = __msecs_to_jiffies(arg4);
                        init_wait_entry(&uStack_90,0);
                        pcVar11 = 0x1;
                        pcVar13 = prepare_to_wait_event(arg1,&uStack_90);
                        cVar2 = *(arg1 + 0x170);
                        while (cVar2 != '\0') {
                            if (pcVar6 == NULL && *(arg1 + 0x162) != '\0') {
                                pcVar6 = 0x1;
                            }
                            if ((*(arg1 + 0x162) != '\0') || (pcVar6 == NULL)) goto code_r0x0800676c;
                            if (pcVar13 != NULL) goto code_r0x080067e0;
                            pcVar6 = schedule_timeout(pcVar6);
                            pcVar11 = 0x1;
                            pcVar13 = prepare_to_wait_event(arg1,&uStack_90);
                            cVar2 = *(arg1 + 0x170);
                        }
                        if (pcVar6 == NULL) {
                            pcVar6 = 0x1;
                        }
code_r0x0800676c:
                        pcVar13 = pcVar6;
                        finish_wait(arg1,&uStack_90);
                    }
                }
code_r0x080067e0:
                iVar3 = uVar12;
                if (pcVar13 < 1) {
                    _printk(0x80014b0,"i2c_read");
                    goto code_r0x08006634;
                }
            }
        }
code_r0x080067e8:
        uVar8 = _raw_spin_lock_irqsave(arg1 + 0x174);
        if (*(arg1 + 0x170) != '\0') {
            disable_irq_nosync(*(*(arg1 + 0x168) + 0x3b4));
            *(arg1 + 0x170) = 0;
        }
        _raw_spin_unlock_irqrestore(arg1 + 0x174,uVar8);
        gpio_to_desc(*(arg1 + 0x180));
        iVar3 = gpiod_get_raw_value();
        if (iVar3 != 0) goto code_r0x08006524;
        if (*(arg1 + 0x20c) == '\0') {
            gpio_to_desc(*(arg1 + 0x184));
            iVar5 = gpiod_get_raw_value();
            iVar3 = uVar12;
            if (iVar5 == 0) {
                _printk(0x80010ed,"i2c_read");
                pcVar13 = 0xfffffffb;
                goto code_r0x08006634;
            }
        }
        iVar3 = uVar12;
        if (*(arg1 + 0x162) != '\0') goto code_r0x08006630;
        _printk(0x8001024,"i2c_read");
        cVar2 = *(arg1 + 0x170);
    } while( true );
}


// ===== sym.i2c_write @ 0x080068d0 (size 728) =====

uint32_t sym.i2c_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg3;
    if (3 < arg3) {
        uVar2 = 4;
    }
    if (0x229 < arg3) {
        arg3 = 0x22a;
    }
    ipc_log_string(*(arg1 + 0x218),"%s sending %d B","i2c_write",arg3);
    if ((((uVar2 != 0) && (ipc_log_string(*(arg1 + 0x218)," %02x",*arg2), uVar2 != 1)) &&
        (ipc_log_string(*(arg1 + 0x218)," %02x",*(arg2 + 1)), uVar2 != 2)) &&
       (ipc_log_string(*(arg1 + 0x218)," %02x",*(arg2 + 2)), uVar2 != 3)) {
        ipc_log_string(*(arg1 + 0x218)," %02x",*(arg2 + 3));
    }
    gpio_to_desc(*(arg1 + 0x180));
    iVar1 = gpiod_get_raw_value();
    if (iVar1 != 0) {
        _printk(0x8000d32,"i2c_write");
        usleep_range_state(3000,0xc1c,2);
        gpio_to_desc(*(arg1 + 0x180));
        iVar1 = gpiod_get_raw_value();
        if (iVar1 != 0) {
            _printk(0x8000d32,"i2c_write");
            usleep_range_state(3000,0xc1c,2);
            gpio_to_desc(*(arg1 + 0x180));
            iVar1 = gpiod_get_raw_value();
            if (iVar1 != 0) {
                _printk(0x8000d32,"i2c_write");
                usleep_range_state(3000,0xc1c,2);
                gpio_to_desc(*(arg1 + 0x180));
                iVar1 = gpiod_get_raw_value();
                if (iVar1 != 0) {
                    _printk(0x8000d32,"i2c_write");
                    usleep_range_state(3000,0xc1c,2);
                    gpio_to_desc(*(arg1 + 0x180));
                    iVar1 = gpiod_get_raw_value();
                    if (iVar1 != 0) {
                        _printk(0x8000d32,"i2c_write");
                        usleep_range_state(3000,0xc1c,2);
                        gpio_to_desc(*(arg1 + 0x180));
                        iVar1 = gpiod_get_raw_value();
                        if (iVar1 != 0) {
                            _printk(0x8001653,"i2c_write");
                        }
                    }
                }
            }
        }
    }
    if (arg4 < 1) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = 1;
        do {
            uVar2 = i2c_transfer_buffer_flags(*(arg1 + 0x168),arg2,arg3,0);
            ipc_log_string(*(arg1 + 0x218),"%s ret %d","i2c_write",uVar2);
            if (uVar2 < 1) {
                _printk(0x80017b1,"i2c_write",uVar2);
                usleep_range_state(3000,0xc1c,2);
            }
            else {
                if (arg3 == uVar2) {
                    return uVar2;
                }
                _printk(0x8000c83,"i2c_write",uVar2);
                uVar2 = 0xfffffffb;
            }
            iVar1 = iVar1 + 1;
        } while (iVar1 <= arg4);
    }
    return uVar2;
}


// ===== sym.nfc_i2c_dev_read @ 0x08006ba8 (size 268) =====

int64_t sym.nfc_i2c_dev_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_read");
        iVar3 = -0x13;
    }
    else {
        mutex_lock(iVar3 + 0x18);
        if (0x101 < arg3) {
            arg3 = 0x102;
        }
        if ((*(arg1 + 0x41) >> 3 & 1) == 0) {
            uVar1 = sym.i2c_read(iVar3,*(iVar3 + 0x78),arg3,0);
        }
        else {
            uVar1 = i2c_transfer_buffer_flags(*(iVar3 + 0x168),*(iVar3 + 0x78),arg3,1);
        }
        if (0 < uVar1) {
            noname_1 = __check_object_size(*(iVar3 + 0x78),uVar1,1);
            iVar2 = sym._copy_to_user(arg2,noname_1,uVar1);
            if (iVar2 != 0) {
                _printk(0x8001858,"nfc_i2c_dev_read");
                uVar1 = 0xfffffff2;
            }
        }
        mutex_unlock(iVar3 + 0x18);
        iVar3 = uVar1;
    }
    return iVar3;
}


// ===== sym.nfc_i2c_dev_write @ 0x08006cb4 (size 232) =====

int64_t sym.nfc_i2c_dev_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t arg3_00;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    arg3_00 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    if (0x229 < arg3_00) {
        arg3_00 = 0x22a;
    }
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_write");
        iVar3 = -0x13;
    }
    else {
        iVar1 = iVar3 + 0x48;
        mutex_lock(iVar1);
        iVar4 = *(iVar3 + 0x80);
        __check_object_size(iVar4,arg3_00,0);
        iVar4 = sym._copy_from_user_1(iVar4,arg2,arg3_00);
        if (iVar4 == 0) {
            iVar2 = sym.i2c_write(iVar3,*(iVar3 + 0x80),arg3_00,1);
            mutex_unlock(iVar1);
            iVar3 = iVar2;
        }
        else {
            _printk(0x8001103,"nfc_i2c_dev_write");
            mutex_unlock(iVar1);
            iVar3 = -0xe;
        }
    }
    return iVar3;
}


// ===== sym.nfc_i2c_dev_probe @ 0x08006d9c (size 976) =====

int sym.nfc_i2c_dev_probe(int64_t arg1)

{
    int64_t arg1_00;
    bool bVar1;
    uint uVar2;
    int iVar3;
    int64_t arg1_01;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    int64_t iVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80008c4,"nfc_i2c_dev_probe");
    arg1_01 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc0,0x240);
    if (arg1_01 == 0) {
        iVar3 = -0xc;
    }
    else {
        arg1_00 = arg1 + 0x20;
        iVar3 = sym.nfc_parse_dt(arg1_00,arg1_01 + 0x180,0);
        if (iVar3 == 0) {
            iVar7 = *(arg1 + 0x18);
            pcVar8 = *(*(iVar7 + 0x10) + 0x20);
            __cfi_slowpath_diag(0x6871e466cec98751,pcVar8,0x8000730);
            uVar4 = (*pcVar8)(iVar7);
            if ((uVar4 & 1) == 0) {
                _printk(0x8001952,"nfc_i2c_dev_probe");
                iVar3 = -0x13;
            }
            else {
                iVar7 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc1,0x102);
                *(arg1_01 + 0x78) = iVar7;
                if (iVar7 == 0) {
                    iVar3 = -0xc;
                }
                else {
                    iVar7 = kmem_cache_alloc_trace(_gpio_to_desc,0xdc1,0x22a);
                    *(arg1_01 + 0x80) = iVar7;
                    if (iVar7 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        *(arg1_01 + 0x168) = arg1;
                        *(arg1_01 + 0x15c) = 0x200;
                        *(arg1_01 + 0x220) = sym.__typeid__ZTSFiP7nfc_devPcmiE_global_addr;
                        *(arg1_01 + 0x230) = sym.__typeid__ZTSFiP7nfc_devE_global_addr;
                        *(arg1_01 + 0x228) = sym.__typeid__ZTSFiP7nfc_devPKcmiE_global_addr;
                        *(arg1_01 + 0x238) = sym.i2c_disable_irq.cfi_jt;
                        iVar3 = sym.configure_gpio(*(arg1_01 + 0x180),4);
                        if (iVar3 < 1) {
                            _printk(0x8001ce6,"nfc_i2c_dev_probe",*(arg1_01 + 0x180));
                        }
                        else {
                            *(arg1 + 0x3b4) = iVar3;
                            __init_waitqueue_head(arg1_01,"&nfc_dev->read_wq",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_01 + 0x18,"&nfc_dev->read_mutex",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_01 + 0x48,"&nfc_dev->write_mutex",obj.nfc_i2c_dev_probe.__key);
                            __mutex_init(arg1_01 + 0x88,"&nfc_dev->dev_ref_mutex",obj.nfc_i2c_dev_probe.__key);
                            *(arg1_01 + 0x174) = 0;
                            iVar3 = sym.nfc_misc_register(arg1_01,0x8001d40,1,0x8000bbb);
                            if (iVar3 == 0) {
                                _printk(0x8000840,"nfc_i2c_dev_probe",*(arg1 + 0x3b4));
                                uVar2 = *(arg1 + 0x3b4);
                                *(arg1_01 + 0x170) = 1;
                                iVar3 = request_threaded_irq
                                                  (uVar2,sym.i2c_irq_handler.8f0a466369daca5d41c8c2cb28712dd7.cfi_jt,0
                                                   ,4,arg1 + 4,arg1_01);
                                if (iVar3 == 0) {
                                    sym.i2c_disable_irq(arg1_01);
                                    iVar3 = sym.nfc_ldo_config(arg1_00,arg1_01);
                                    if (iVar3 == 0) {
                                        if (*(arg1_01 + 0x1b8) == '\0') {
                                            sym.nfc_post_init(arg1_01);
                                        }
                                        else {
                                            uVar4 = sym.nfc_hw_secure_check();
                                            bVar1 = (uVar4 & 1) == 0;
                                            if (bVar1) {
                                                sym.nfc_post_init(arg1_01);
                                                pcVar6 = "false";
                                            }
                                            else {
                                                pcVar6 = "true";
                                            }
                                            *(arg1_01 + 0x20c) = !bVar1;
                                            _printk(0x800196b,"nfc_i2c_dev_probe",pcVar6);
                                        }
                                        *(arg1_01 + 0x20d) = *(arg1_01 + 0x1a8) ^ 1;
                                        device_init_wakeup(arg1_00,1);
                                        iVar3 = 0;
                                        uVar5 = 0x80011f0;
                                        *(arg1 + 0xb8) = arg1_01;
                                        *(arg1_01 + 0x178) = 0;
                                        *(arg1_01 + 0x161) = 0;
                                        goto code_r0x08006e94;
                                    }
                                    _printk(0x8000950);
                                    free_irq(*(arg1 + 0x3b4),arg1_01);
                                }
                                else {
                                    _printk(0x800078c,"nfc_i2c_dev_probe");
                                }
                                sym.nfc_misc_unregister(arg1_01,1);
                            }
                            else {
                                _printk(0x80011cb,"nfc_i2c_dev_probe");
                            }
                        }
                        sym.gpio_free_all(arg1_01);
                        kfree(*(arg1_01 + 0x80));
                    }
                    kfree(*(arg1_01 + 0x78));
                }
            }
        }
        else {
            _printk(0x80012d1,"nfc_i2c_dev_probe");
        }
        kfree(arg1_01);
    }
    uVar5 = 0x8001279;
code_r0x08006e94:
    _printk(uVar5,"nfc_i2c_dev_probe");
    return iVar3;
}


// ===== sym.i2c_irq_handler @ 0x0800716c (size 164) =====

ulong sym.i2c_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x168);
    if (((*(iVar2 + 300) & 1) != 0) && (*(iVar2 + 0x168) != 0)) {
        pm_wakeup_dev_event(iVar2 + 0x20,2000,0);
    }
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0x174);
    if (*(arg1 + 0x170) != '\0') {
        disable_irq_nosync(*(*(arg1 + 0x168) + 0x3b4));
        *(arg1 + 0x170) = 0;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x174,uVar1);
    __wake_up(arg1,3,1,0);
    return 1;
}


// ===== sym.nfc_i2c_dev_remove @ 0x08007210 (size 264) =====

ulong sym.nfc_i2c_dev_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8001d11,"nfc_i2c_dev_remove");
    arg1_00 = *(arg1 + 0xb8);
    if (arg1_00 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_remove");
        uVar1 = 0xffffffed;
    }
    else if (*(arg1_00 + 0xb8) == 0) {
        uVar1 = gpio_to_desc(*(arg1_00 + 0x184));
        gpiod_set_raw_value(uVar1,0);
        usleep_range_state(10000,0x2774,2);
        if (*(arg1_00 + 0x1f0) != 0) {
            sym.nfc_ldo_unvote(arg1_00);
            regulator_put(*(arg1_00 + 0x1f0));
        }
        device_init_wakeup(arg1 + 0x20,0);
        free_irq(*(arg1 + 0x3b4),arg1_00);
        sym.nfc_misc_unregister(arg1_00,1);
        sym.gpio_free_all(arg1_00);
        kfree(*(arg1_00 + 0x78));
        kfree(*(arg1_00 + 0x80));
        kfree(arg1_00);
        uVar1 = 0;
    }
    else {
        _printk(0x80009fd,"nfc_i2c_dev_remove");
        uVar1 = 0xfffffff0;
    }
    return uVar1;
}


// ===== sym.nfc_i2c_dev_suspend @ 0x08007318 (size 164) =====

ulong sym.nfc_i2c_dev_suspend(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_suspend");
        uVar1 = 0xffffffed;
    }
    else {
        ipc_log_string(*(iVar2 + 0x218),"%s: irq_enabled = %d","nfc_i2c_dev_suspend",*(iVar2 + 0x170));
        if (((((*(arg1 + 0x10c) & 1) == 0) || (*(arg1 + 0x148) == 0)) || (*(iVar2 + 0x170) == '\0')) ||
           (uVar1 = irq_set_irq_wake(*(arg1 + 0x394),1), uVar1 != 0)) {
            uVar1 = 0;
        }
        else {
            *(iVar2 + 0x178) = 1;
        }
    }
    return uVar1;
}


// ===== sym.nfc_i2c_dev_resume @ 0x080073bc (size 172) =====

ulong sym.nfc_i2c_dev_resume(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (iVar3 == 0) {
        _printk(0x8001178,"nfc_i2c_dev_resume");
        uVar2 = 0xffffffed;
    }
    else {
        ipc_log_string(*(iVar3 + 0x218),"%s: irq_wake_up = %d","nfc_i2c_dev_resume",*(iVar3 + 0x178));
        if ((((*(arg1 + 0x10c) & 1) == 0) || (*(arg1 + 0x148) == 0)) || (*(iVar3 + 0x178) == '\0')) {
            uVar2 = 0;
        }
        else {
            iVar1 = irq_set_irq_wake(*(arg1 + 0x394),0);
            uVar2 = 0;
            if (iVar1 == 0) {
                uVar2 = 0;
                *(iVar3 + 0x178) = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym._copy_to_user @ 0x08007468 (size 312) =====

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


// ===== sym.init_module @ 0x080075e4 (size 120) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80017df,"nfc_i2c_dev_init");
    iVar1 = i2c_register_driver(obj.__this_module,obj.nfc_i2c_dev_driver);
    if (iVar1 != 0) {
        _printk(0x80008d1,"nfc_i2c_dev_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800765c (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80015a3,"nfc_i2c_dev_exit");
    i2c_del_driver(obj.nfc_i2c_dev_driver);
    return;
}

