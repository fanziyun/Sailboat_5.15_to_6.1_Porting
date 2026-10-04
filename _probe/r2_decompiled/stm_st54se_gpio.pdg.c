// decompiled from stm_st54se_gpio by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080016cc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt;
        }
        else {
            if (arg1 != -0x8dc801903aca538) {
                if (arg1 != -0x890743871a4a53) goto code_r0x0800168c;
                pcVar2 = sym.st54spi_gpio_dev_ioctl.cfi_jt;
                goto code_r0x08001108;
            }
            pcVar2 = sym.st54spi_gpio_dev_release.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt;
        }
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x0800168c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80016e0);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800168c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001108:
        if (pcVar1 != pcVar2) goto code_r0x0800168c;
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001a4,"st54spi_gpio_dev_exit");
    platform_driver_unregister(reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80003ac,"st54spi_gpio_dev_init");
    __platform_driver_register(reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.st54spi_gpio_dev_ioctl.cfi_jt @ 0x08001130 (size 8) =====

int64_t sym.st54spi_gpio_dev_ioctl.cfi_jt(int64_t param_1,int param_2,uint64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xd8);
    _printk(0x800037c,"st54spi_gpio_dev_ioctl");
    if (iVar3 == 0) {
        _printk(0x8000135,"st54spi_gpio_dev_ioctl");
        iVar3 = -0x13;
    }
    else {
        if (param_2 == 0x4004eb02) {
            if (param_3 < 2) {
                uVar2 = gpio_to_desc(*(iVar3 + 0xa8));
                gpiod_set_raw_value(uVar2,param_3 & 0xffffffff);
                _printk(0x8000221,"st54spi_gpio_dev_ioctl",param_3);
                return 0;
            }
            _printk(0x800027a,"st54spi_gpio_dev_ioctl",param_3);
        }
        else {
            if (param_2 == 0x4004eb01) {
                gpio_to_desc(*(iVar3 + 0xa8));
                iVar1 = gpiod_get_raw_value();
                _printk(0x8000171,"st54spi_gpio_dev_ioctl");
                return iVar1;
            }
            _printk(0x8000323,"st54spi_gpio_dev_ioctl",param_2,param_3);
        }
        iVar3 = -0x203;
    }
    return iVar3;
}


// ===== sym.st54spi_gpio_dev_release.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.st54spi_gpio_dev_release.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_2 + 0xd8) + 0xa8) < 0x200) {
        gpio_free();
    }
    _printk(0x80002c7,"st54spi_gpio_dev_release");
    *(param_2 + 0xd8) = 0;
    return 0;
}


// ===== sym.st54spi_gpio_dev_open.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.st54spi_gpio_dev_open.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x2b0);
    _printk(0x8000391,"st54spi_gpio_dev_open");
    if (iVar3 + -8 == 0) {
        _printk(0x8000459,"st54spi_gpio_dev_open");
        uVar2 = 0xffffffed;
    }
    else {
        iVar1 = gpio_request(*(iVar3 + 0xa0),"gpio-power_nreset");
        if (iVar1 < 0) {
            _printk(0x800046b,"st54spi_gpio_dev_open",iVar1);
            uVar2 = 0xfffffff2;
        }
        else {
            uVar2 = gpio_to_desc(*(iVar3 + 0xa0));
            iVar1 = gpiod_direction_output_raw(uVar2,0);
            if (iVar1 < 0) {
                _printk(0x80002a2,"st54spi_gpio_dev_open",iVar1);
                gpio_free(*(iVar3 + 0xa0));
                uVar2 = 0xfffffff2;
            }
            else {
                uVar2 = 0;
                *(param_2 + 0xd8) = iVar3 + -8;
            }
        }
    }
    return uVar2;
}


// ===== sym.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt @ 0x08001148 (size 8) =====

uint64_t sym.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt(int64_t param_1)

{
    uint *puVar1;
    uint32_t uVar2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x300);
    _printk(0x800034d,"st54spi_gpio_probe");
    if (iVar6 == 0) {
        uVar5 = 0xfffffff4;
        uVar4 = 0x8000207;
    }
    else {
        puVar3 = devm_kmalloc(param_1 + 0x10,0xb0,0xdc0);
        if (puVar3 == NULL) {
            uVar5 = 0xfffffff4;
            goto code_r0x080012e8;
        }
        uVar2 = alloc_chrdev_region(puVar3,0,1,"st54spi_gpio");
        if (uVar2 < 0) {
            uVar5 = uVar2;
            uVar4 = 0x8000408;
        }
        else {
            uVar5 = __class_create(obj.__this_module,"st54spi_gpio",
                                   reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt);
            *(puVar3 + 0x24) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                puVar1 = puVar3 + 2;
                cdev_init(puVar1,obj.st54spi_gpio_dev_fops);
                uVar2 = cdev_add(puVar1,*puVar3,1);
                if (uVar2 == 0) {
                    uVar5 = device_create(*(puVar3 + 0x24),0,*puVar3,puVar3,"st54spi_gpio");
                    *(puVar3 + 0x26) = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        uVar2 = of_get_named_gpio_flags(iVar6,"gpio-power_nreset",0,0);
                        puVar3[0x2a] = uVar2;
                        if (uVar2 < 0x200) {
                            uVar5 = 0;
                            *(param_1 + 0xa8) = puVar3;
                            uVar4 = 0x800035a;
                            goto code_r0x080014a8;
                        }
                        _printk(0x80002e1,"st54spi_gpio_probe");
                        device_destroy(*(puVar3 + 0x24),*puVar3);
                        uVar5 = 0xfffffff2;
                    }
                    else {
                        _printk(0x800042c,"st54spi_gpio_probe",uVar5 & 0xffffffff);
                    }
                    cdev_del(puVar1);
                }
                else {
                    uVar5 = uVar2;
                    _printk(0x80001e5,"st54spi_gpio_probe",uVar5);
                }
                class_destroy(*(puVar3 + 0x24));
            }
            else {
                _printk(0x8000248,"st54spi_gpio_probe",uVar5 & 0xffffffff);
            }
            unregister_chrdev_region(*puVar3,1);
            devm_kfree(param_1 + 0x10,puVar3);
            uVar4 = 0x800015c;
        }
    }
code_r0x080014a8:
    _printk(uVar4,"st54spi_gpio_probe");
code_r0x080012e8:
    return uVar5 & 0xffffffff;
}


// ===== sym.st54spi_gpio_remove.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.st54spi_gpio_remove.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800044c,"st54spi_gpio_remove");
    puVar1 = *(param_1 + 0xa8);
    device_destroy(*(puVar1 + 0x24),*puVar1);
    unregister_chrdev_region(*puVar1,1);
    class_destroy(*(puVar1 + 0x24));
    cdev_del(puVar1 + 2);
    devm_kfree(param_1 + 0x10,puVar1);
    *(param_1 + 0xa8) = 0;
    return 0;
}


// ===== sym.no_llseek.cfi_jt @ 0x08001158 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.st54spi_gpio_dev_ioctl @ 0x08001160 (size 304) =====

int64_t sym.st54spi_gpio_dev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    _printk(0x800037c,"st54spi_gpio_dev_ioctl");
    if (iVar3 == 0) {
        _printk(0x8000135,"st54spi_gpio_dev_ioctl");
        iVar3 = -0x13;
    }
    else {
        if (arg2 == 0x4004eb02) {
            if (arg3 < 2) {
                uVar2 = gpio_to_desc(*(iVar3 + 0xa8));
                gpiod_set_raw_value(uVar2,arg3 & 0xffffffff);
                _printk(0x8000221,"st54spi_gpio_dev_ioctl",arg3);
                return 0;
            }
            _printk(0x800027a,"st54spi_gpio_dev_ioctl",arg3);
        }
        else {
            if (arg2 == 0x4004eb01) {
                gpio_to_desc(*(iVar3 + 0xa8));
                iVar1 = gpiod_get_raw_value();
                _printk(0x8000171,"st54spi_gpio_dev_ioctl");
                return iVar1;
            }
            _printk(0x8000323,"st54spi_gpio_dev_ioctl",arg2 & 0xffffffff,arg3);
        }
        iVar3 = -0x203;
    }
    return iVar3;
}


// ===== sym.st54spi_gpio_probe @ 0x08001290 (size 552) =====

uint64_t sym.st54spi_gpio_probe(int64_t arg1)

{
    uint *puVar1;
    uint32_t uVar2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x300);
    _printk(0x800034d,"st54spi_gpio_probe");
    if (iVar6 == 0) {
        uVar5 = 0xfffffff4;
        uVar4 = 0x8000207;
    }
    else {
        puVar3 = devm_kmalloc(arg1 + 0x10,0xb0,0xdc0);
        if (puVar3 == NULL) {
            uVar5 = 0xfffffff4;
            goto code_r0x080012e8;
        }
        uVar2 = alloc_chrdev_region(puVar3,0,1,"st54spi_gpio");
        if (uVar2 < 0) {
            uVar5 = uVar2;
            uVar4 = 0x8000408;
        }
        else {
            uVar5 = __class_create(obj.__this_module,"st54spi_gpio",
                                   reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt);
            *(puVar3 + 0x24) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                puVar1 = puVar3 + 2;
                cdev_init(puVar1,obj.st54spi_gpio_dev_fops);
                uVar2 = cdev_add(puVar1,*puVar3,1);
                if (uVar2 == 0) {
                    uVar5 = device_create(*(puVar3 + 0x24),0,*puVar3,puVar3,"st54spi_gpio");
                    *(puVar3 + 0x26) = uVar5;
                    if (uVar5 < 0xfffffffffffff001) {
                        uVar2 = of_get_named_gpio_flags(iVar6,"gpio-power_nreset",0,0);
                        puVar3[0x2a] = uVar2;
                        if (uVar2 < 0x200) {
                            uVar5 = 0;
                            *(arg1 + 0xa8) = puVar3;
                            uVar4 = 0x800035a;
                            goto code_r0x080014a8;
                        }
                        _printk(0x80002e1,"st54spi_gpio_probe");
                        device_destroy(*(puVar3 + 0x24),*puVar3);
                        uVar5 = 0xfffffff2;
                    }
                    else {
                        _printk(0x800042c,"st54spi_gpio_probe",uVar5 & 0xffffffff);
                    }
                    cdev_del(puVar1);
                }
                else {
                    uVar5 = uVar2;
                    _printk(0x80001e5,"st54spi_gpio_probe",uVar5);
                }
                class_destroy(*(puVar3 + 0x24));
            }
            else {
                _printk(0x8000248,"st54spi_gpio_probe",uVar5 & 0xffffffff);
            }
            unregister_chrdev_region(*puVar3,1);
            devm_kfree(arg1 + 0x10,puVar3);
            uVar4 = 0x800015c;
        }
    }
code_r0x080014a8:
    _printk(uVar4,"st54spi_gpio_probe");
code_r0x080012e8:
    return uVar5 & 0xffffffff;
}


// ===== sym.st54spi_gpio_remove @ 0x080014b8 (size 140) =====

ulong sym.st54spi_gpio_remove(int64_t arg1)

{
    ulong *in_x18;
    uint *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800044c,"st54spi_gpio_remove");
    puVar1 = *(arg1 + 0xa8);
    device_destroy(*(puVar1 + 0x24),*puVar1);
    unregister_chrdev_region(*puVar1,1);
    class_destroy(*(puVar1 + 0x24));
    cdev_del(puVar1 + 2);
    devm_kfree(arg1 + 0x10,puVar1);
    *(arg1 + 0xa8) = 0;
    return 0;
}


// ===== sym.st54spi_gpio_dev_open @ 0x08001544 (size 232) =====

ulong sym.st54spi_gpio_dev_open(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x2b0);
    _printk(0x8000391,"st54spi_gpio_dev_open");
    if (iVar3 + -8 == 0) {
        _printk(0x8000459,"st54spi_gpio_dev_open");
        uVar2 = 0xffffffed;
    }
    else {
        iVar1 = gpio_request(*(iVar3 + 0xa0),"gpio-power_nreset");
        if (iVar1 < 0) {
            _printk(0x800046b,"st54spi_gpio_dev_open",iVar1);
            uVar2 = 0xfffffff2;
        }
        else {
            uVar2 = gpio_to_desc(*(iVar3 + 0xa0));
            iVar1 = gpiod_direction_output_raw(uVar2,0);
            if (iVar1 < 0) {
                _printk(0x80002a2,"st54spi_gpio_dev_open",iVar1);
                gpio_free(*(iVar3 + 0xa0));
                uVar2 = 0xfffffff2;
            }
            else {
                uVar2 = 0;
                *(arg2 + 0xd8) = iVar3 + -8;
            }
        }
    }
    return uVar2;
}


// ===== sym.st54spi_gpio_dev_release @ 0x0800162c (size 92) =====

ulong sym.st54spi_gpio_dev_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0xd8) + 0xa8) < 0x200) {
        gpio_free();
    }
    _printk(0x80002c7,"st54spi_gpio_dev_release");
    *(arg1 + 0xd8) = 0;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001688 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016cc

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016e0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080016e4 (size 72) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80003ac,"st54spi_gpio_dev_init");
    __platform_driver_register(reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800172c (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001a4,"st54spi_gpio_dev_exit");
    platform_driver_unregister(reloc.st54spi_gpio_probe.cefb4c17aaaf57c7ac0b1e401a8840d2.cfi_jt);
    return;
}

