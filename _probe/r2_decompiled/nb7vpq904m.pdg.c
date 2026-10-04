// decompiled from nb7vpq904m by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 848) =====

//WARNING: Switch with 1 destination removed at 0x08004340

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18aafba39062885f) {
        if (arg1 < -0x34779720ede702ea) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 == -0x76e7814a8afd6df4) {
                    pcVar2 = sym.orientation_gpio_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x08002340;
                }
                if (arg1 != -0x57be845bca9148ef) goto code_r0x08004300;
                pcVar2 = sym.nb7vpq904m_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) {
                    if (arg1 != -0x39f83a5725bed94e) goto code_r0x08004300;
                    pcVar2 = sym.nb7vpq904m_release_usb_lanes.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    goto code_r0x080022cc;
                }
                pcVar2 = sym.nb7vpq904m_gadget_pullup_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
code_r0x080022f4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004300;
        }
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x34779720ede702ea) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x80023a8 >> 3 | pcVar1 << 0x3d) < 6)) {
                    return;
                }
                goto code_r0x08004300;
            }
            pcVar2 = sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr;
code_r0x080022cc:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08004300;
        }
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08004300;
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
            goto code_r0x080022f4;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 < 0x369ba1b7d1376e4f) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 != 0x18aafba39062885f) {
                if ((arg1 == 0x1d262e36d41a9d21) && ((pcVar1 + -0x8002428 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08004300;
            }
            pcVar2 = sym.nb7vpq904m_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                if ((pcVar1 + -0x80023f8 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08004300;
            }
            if (arg1 != 0x321969b888d4949e) goto code_r0x08004300;
            pcVar2 = sym.no_llseek.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 != 0x369ba1b7d1376e4f) {
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x08004300;
            pcVar2 = sym.flat_gain_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080022cc;
        }
        pcVar2 = sym.nb7vpq904m_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08004300;
        pcVar2 = sym.nb7vpq904m_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
code_r0x08002340:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004300:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004354);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002358 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.nb7vpq904m_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002360 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.nb7vpq904m_driver);
    return;
}


// ===== sym.nb7vpq904m_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002368 (size 8) =====

ulong sym.nb7vpq904m_resume.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if ((4 < *(iVar2 + 0x80) || (1 << (*(iVar2 + 0x80) & 0x1f) & 0x15U) == 0) &&
       (iVar1 = regmap_write(*(iVar2 + 0x68),0,*(iVar2 + 0xa8)), iVar1 < 0)) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    return 0;
}


// ===== sym.nb7vpq904m_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002370 (size 8) =====

ulong sym.nb7vpq904m_suspend.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if ((4 < *(iVar2 + 0x80) || (1 << (*(iVar2 + 0x80) & 0x1f) & 0x15U) == 0) &&
       (iVar1 = regmap_write(*(iVar2 + 0x68),0,*(iVar2 + 0xa8) & 0xfe), iVar1 < 0)) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    return 0;
}


// ===== sym.orientation_gpio_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002378 (size 8) =====

ulong sym.orientation_gpio_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(param_1 + 0x78));
    iVar1 = gpiod_get_raw_value();
    *param_2 = iVar1;
    return 0;
}


// ===== sym.nb7vpq904m_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002380 (size 8) =====

void sym.nb7vpq904m_shutdown.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    iVar1 = regmap_write(*(iVar2 + 0x68),0,0xfb);
    if (iVar1 < 0) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
        _dev_err(param_1 + 0x20,"%s: fail to set USB mode with 4 channel enabled.\n","nb7vpq904m_shutdown");
    }
    return;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08002388 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x08002390 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nb7vpq904m_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002398 (size 8) =====

uint64_t sym.nb7vpq904m_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x20;
    iVar4 = devm_kmalloc(piVar1,0x128,0xdc0);
    if (iVar4 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iVar7 = *(param_1 + 0x90);
        if (iVar7 == 0) {
            iVar7 = *piVar1;
        }
        iVar7 = alloc_workqueue("%s:pullup",0x12,0,iVar7);
        *(iVar4 + 0xb0) = iVar7;
        if (iVar7 == 0) {
            _dev_err(piVar1,"Failed to create pullup workqueue\n");
            uVar5 = 0xfffffff4;
        }
        else {
            uVar5 = __devm_regmap_init_i2c(param_1,obj.redriver_regmap,0,0);
            *(iVar4 + 0x68) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                uVar8 = *(param_1 + 0x310);
                *(iVar4 + 0x60) = piVar1;
                *(param_1 + 0xb8) = iVar4;
                iVar7 = of_find_property(uVar8,0x80008fe,0);
                if (((((iVar7 == 0) ||
                      (uVar5 = of_property_read_variable_u8_array(uVar8,0x80008fe,iVar4 + 0x88,8,0), -1 < uVar5))
                     && ((iVar7 = of_find_property(uVar8,"flat-gain",0), iVar7 == 0 ||
                         (uVar5 = of_property_read_variable_u8_array(uVar8,"flat-gain",iVar4 + 0xa0,8,0),
                         -1 < uVar5)))) &&
                    ((iVar7 = of_find_property(uVar8,"output-comp",0), iVar7 == 0 ||
                     (uVar5 = of_property_read_variable_u8_array(uVar8,"output-comp",iVar4 + 0x90,8,0), -1 < uVar5)
                     ))) && ((iVar7 = of_find_property(uVar8,0x80002b4,0), iVar7 == 0 ||
                             (uVar5 = of_property_read_variable_u8_array(uVar8,0x80002b4,iVar4 + 0x98,8,0),
                             -1 < uVar5)))) {
                    *(iVar4 + 0xb8) = 0xfffffffe0;
                    *(iVar4 + 0xc0) = iVar4 + 0xc0;
                    *(iVar4 + 200) = iVar4 + 0xc0;
                    *(iVar4 + 0xd0) = sym.nb7vpq904m_gadget_pullup_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0xf0) = 0xfffffffe0;
                    *(iVar4 + 0xf8) = iVar4 + 0xf8;
                    *(iVar4 + 0x100) = iVar4 + 0xf8;
                    *(iVar4 + 0x108) = sym.nb7vpq904m_host_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    iVar7 = of_find_property(*(*(iVar4 + 0x60) + 0x2f0),"lane-channel-swap",0);
                    *(iVar4 + 0xa9) = iVar7 != 0;
                    *(iVar4 + 0x80) = 0;
                    *(iVar4 + 0xa8) = 0;
                    iVar2 = regmap_write(*(iVar4 + 0x68),0,0);
                    if (iVar2 < 0) {
                        _dev_err(*(iVar4 + 0x60),"writing reg 0x%02x failure\n",0);
                    }
                    iVar7 = *(iVar4 + 0x60);
                    uVar3 = of_get_named_gpio_flags(*(iVar7 + 0x2f0),"gpios",0,0);
                    *(iVar4 + 0x78) = uVar3;
                    if (uVar3 < 0x200) {
                        iVar2 = devm_gpio_request(iVar7,uVar3,"redriver");
                        if (iVar2 < 0) {
                            _dev_err(iVar7,"Failed to request gpio\n");
                            *(iVar4 + 0x78) = 0xffffffea;
                        }
                        else {
                            *(iVar4 + 0x59) = 1;
                        }
                    }
                    else {
                        _dev_err(iVar7,"Failed to get gpio\n");
                    }
                    iVar7 = debugfs_create_dir("nb7vpq904m_redriver",0);
                    *(iVar4 + 0x120) = iVar7;
                    if (iVar7 == 0) {
                        _dev_warn(*(iVar4 + 0x60),"Couldn\'t create debug dir\n");
                    }
                    else {
                        debugfs_create_file(0x80008fe,0x180,iVar7,iVar4,obj.eq_ops);
                        debugfs_create_file(0x800032e,0x180,*(iVar4 + 0x120),iVar4,obj.flat_gain_ops);
                        debugfs_create_file(0x80002fb,0x180,*(iVar4 + 0x120),iVar4,obj.output_comp_ops);
                        debugfs_create_file("loss_match",0x180,*(iVar4 + 0x120),iVar4,obj.loss_match_ops);
                        debugfs_create_file("orientation-gpio",0x124,*(iVar4 + 0x120),iVar4,obj.orientation_gpio_ops
                                           );
                        debugfs_create_bool("lane-channel-swap",0x1a4,*(iVar4 + 0x120),iVar4 + 0xa9);
                    }
                    uVar8 = *(*(iVar4 + 0x60) + 0x2f0);
                    *(iVar4 + 0x20) = sym.nb7vpq904m_notify_connect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x28) = sym.nb7vpq904m_notify_disconnect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x10) = uVar8;
                    *(iVar4 + 0x18) = sym.nb7vpq904m_release_usb_lanes.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x30) = sym.nb7vpq904m_get_orientation.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x38) = sym.nb7vpq904m_gadget_pullup_enter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x40) = sym.nb7vpq904m_gadget_pullup_exit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x48) = sym.nb7vpq904m_host_powercycle.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    usb_add_redriver(iVar4);
                    uVar5 = 0;
                    goto code_r0x0800285c;
                }
                uVar5 = uVar5 & 0xffffffff;
                _dev_err(*(iVar4 + 0x60),"%s: error read parameters.\n","nb7vpq904m_read_configuration");
                pcVar6 = "Failed to read default configuration: %d\n";
            }
            else {
                pcVar6 = "Failed to allocate register map: %d\n";
            }
            _dev_err(piVar1,pcVar6,uVar5 & 0xffffffff);
        }
    }
code_r0x0800285c:
    return uVar5 & 0xffffffff;
}


// ===== sym.nb7vpq904m_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a0 (size 8) =====

ulong sym.nb7vpq904m_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xb8);
    iVar1 = usb_remove_redriver(iVar3);
    if (iVar1 == 0) {
        debugfs_remove(*(iVar3 + 0x120));
        *(iVar3 + 0xe8) = 0;
        destroy_workqueue(*(iVar3 + 0xb0));
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.orientation_gpio_ops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023a8 (size 8) =====

void sym.orientation_gpio_ops_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.orientation_gpio_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,"%llu\n");
    return;
}


// ===== sym.loss_match_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b0 (size 8) =====

void sym.loss_match_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.loss_match_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.eq_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023b8 (size 8) =====

void sym.eq_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.eq_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.flat_gain_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023c0 (size 8) =====

void sym.flat_gain_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.flat_gain_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x080023c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.output_comp_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023d0 (size 8) =====

void sym.output_comp_status_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.output_comp_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr @ 0x080023d8 (size 8) =====

void sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(param_1,1,param_2 & 0xffffffff,param_3 & 0xffffffff);
    return;
}


// ===== sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e0 (size 8) =====

void sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(param_1,0x18,param_2 & 0xffffffff,param_3 & 0xffffffff);
    return;
}


// ===== sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023e8 (size 8) =====

void sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(param_1,0x19,param_2 & 0xffffffff,param_3 & 0xffffffff);
    return;
}


// ===== sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080023f0 (size 8) =====

void sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(param_1,2,param_2 & 0xffffffff,param_3 & 0xffffffff);
    return;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x080023f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.loss_match_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002400 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003dbc)

uint64_t sym.loss_match_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = param_3;
    if (0x26 < param_3) {
        uVar6 = 0x27;
    }
    uVar7 = *(*(param_1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,param_2,uVar6);
    if (iVar3 != 0) goto code_r0x08003cd8;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003e0c;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003e24;
            uVar8 = *puVar4 - 0x61;
            if (uVar8 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar8 = *puVar4 - 0x41;
                if (3 < uVar8) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,uVar8,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003cd8:
        param_3 = 0xfffffffffffffff2;
code_r0x08003e24:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return param_3;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003e0c:
            iVar2 = sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.flat_gain_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002408 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800373c)

uint64_t sym.flat_gain_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = param_3;
    if (0x26 < param_3) {
        uVar6 = 0x27;
    }
    uVar7 = *(*(param_1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,param_2,uVar6);
    if (iVar3 != 0) goto code_r0x08003658;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x0800378c;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x080037a4;
            uVar8 = *puVar4 - 0x61;
            if (uVar8 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar8 = *puVar4 - 0x41;
                if (3 < uVar8) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,uVar8,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003658:
        param_3 = 0xfffffffffffffff2;
code_r0x080037a4:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return param_3;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x0800378c:
            iVar2 = sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.eq_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002410 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08002ff8)

uint64_t sym.eq_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = param_3;
    if (0x26 < param_3) {
        uVar6 = 0x27;
    }
    uVar7 = *(*(param_1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,param_2,uVar6);
    if (iVar3 != 0) goto code_r0x08002f14;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003048;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003060;
            uVar8 = *puVar4 - 0x61;
            if (uVar8 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar8 = *puVar4 - 0x41;
                if (3 < uVar8) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr(uVar7,uVar8,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08002f14:
        param_3 = 0xfffffffffffffff2;
code_r0x08003060:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return param_3;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr,0x8000220
                               );
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003048:
            iVar2 = sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr(uVar7,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.output_comp_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002418 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003a7c)

uint64_t sym.output_comp_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = param_3;
    if (0x26 < param_3) {
        uVar6 = 0x27;
    }
    uVar7 = *(*(param_1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,param_2,uVar6);
    if (iVar3 != 0) goto code_r0x08003998;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003acc;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003ae4;
            uVar8 = *puVar4 - 0x61;
            if (uVar8 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar8 = *puVar4 - 0x41;
                if (3 < uVar8) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,uVar8,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003998:
        param_3 = 0xfffffffffffffff2;
code_r0x08003ae4:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return param_3;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003acc:
            iVar2 = sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar7,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.no_llseek.cfi_jt @ 0x08002420 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.nb7vpq904m_host_powercycle.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002428 (size 8) =====

ulong sym.nb7vpq904m_host_powercycle.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 1) {
        queue_work_on(0x20,_debugfs_attr_read,param_1 + 0xf0);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.nb7vpq904m_get_orientation.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002430 (size 8) =====

void sym.nb7vpq904m_get_orientation.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(param_1 + 0x78));
    gpiod_get_raw_value();
    return;
}


// ===== sym.nb7vpq904m_notify_disconnect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002438 (size 8) =====

ulong sym.nb7vpq904m_notify_disconnect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) != 0) {
        *(param_1 + 0x80) = 0;
        iVar1 = regmap_write(*(param_1 + 0x68),0,0);
        if (iVar1 < 0) {
            _dev_err(*(param_1 + 0x60),"writing reg 0x%02x failure\n",0);
        }
    }
    return 0;
}


// ===== sym.flat_gain_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002440 (size 8) =====

ulong sym.flat_gain_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    seq_puts(param_1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(param_1,"TX/RX Flat Gain:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0xa0),*(iVar1 + 0xa1),
               *(iVar1 + 0xa2),*(iVar1 + 0xa3),*(iVar1 + 0xa4),*(iVar1 + 0xa5),*(iVar1 + 0xa6),*(iVar1 + 0xa7));
    return 0;
}


// ===== sym.eq_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002448 (size 8) =====

ulong sym.eq_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    seq_puts(param_1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(param_1,"Equalization:\t\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x88),*(iVar1 + 0x89),
               *(iVar1 + 0x8a),*(iVar1 + 0x8b),*(iVar1 + 0x8c),*(iVar1 + 0x8d),*(iVar1 + 0x8e),*(iVar1 + 0x8f));
    return 0;
}


// ===== sym.output_comp_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002450 (size 8) =====

ulong sym.output_comp_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    seq_puts(param_1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(param_1,"Output Compression:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x90),*(iVar1 + 0x91)
               ,*(iVar1 + 0x92),*(iVar1 + 0x93),*(iVar1 + 0x94),*(iVar1 + 0x95),*(iVar1 + 0x96),*(iVar1 + 0x97));
    return 0;
}


// ===== sym.loss_match_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002458 (size 8) =====

ulong sym.loss_match_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    seq_puts(param_1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(param_1,"Loss Profile Match:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x98),*(iVar1 + 0x99)
               ,*(iVar1 + 0x9a),*(iVar1 + 0x9b),*(iVar1 + 0x9c),*(iVar1 + 0x9d),*(iVar1 + 0x9e),*(iVar1 + 0x9f));
    return 0;
}


// ===== sym.nb7vpq904m_release_usb_lanes.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.nb7vpq904m_release_usb_lanes.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    uchar uVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 2) {
        *(param_1 + 0x80) = 3;
code_r0x08002b20:
        uVar2 = 0xf3;
        if (*(param_1 + 0x7c) != 0) {
            uVar2 = 0xf1;
        }
        goto code_r0x08002b38;
    }
    if (param_2 == 4) {
        *(param_1 + 0x80) = 2;
code_r0x08002b0c:
        uVar2 = 0xf5;
    }
    else {
        uVar2 = 0xfb;
        switch(*(param_1 + 0x80)) {
        case 1:
            uVar3 = 0x3b;
            if (*(param_1 + 0x7c) != 1) {
                uVar3 = 0xb;
            }
            uVar2 = 0xcb;
            if (*(param_1 + 0x7c) != 0) {
                uVar2 = uVar3;
            }
            break;
        case 2:
            goto code_r0x08002b0c;
        case 3:
            goto code_r0x08002b20;
        case 4:
            break;
        default:
            uVar2 = 0;
        }
    }
code_r0x08002b38:
    *(param_1 + 0xa8) = uVar2;
    iVar1 = regmap_write(*(param_1 + 0x68),0,uVar2);
    if (iVar1 < 0) {
        _dev_err(*(param_1 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    sym.nb7vpq904m_channel_update(param_1);
    return 0;
}


// ===== sym.nb7vpq904m_gadget_pullup_exit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002468 (size 8) =====

ulong sym.nb7vpq904m_gadget_pullup_exit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 1) {
        if (param_2 == 0) {
            *(param_1 + 0xe8) = 1;
            queue_work_on(0x20,*(param_1 + 0xb0),param_1 + 0xb8);
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.nb7vpq904m_gadget_pullup_enter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.nb7vpq904m_gadget_pullup_enter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == 1) {
        if (param_2 != 0) {
            iVar2 = 0x7a122;
            do {
                if (*(param_1 + 0xe8) == '\0') goto code_r0x08002dd4;
                __const_udelay(0x10c7);
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            _dev_warn(*(param_1 + 0x60),"pullup timeout\n");
        }
code_r0x08002dd4:
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.nb7vpq904m_notify_connect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.nb7vpq904m_notify_connect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    uchar uVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x80);
    if (iVar1 == 0) {
        iVar1 = 1;
        *(param_1 + 0x80) = 1;
    }
    *(param_1 + 0x7c) = param_2;
    if (*(param_1 + 0xa9) != '\0') {
        param_2 = param_2 == 0;
        *(param_1 + 0x7c) = param_2;
    }
    uVar3 = 0xfb;
    switch(iVar1) {
    case 1:
        uVar2 = 0x3b;
        if (param_2 != 1) {
            uVar2 = 0xb;
        }
        uVar3 = 0xcb;
        goto code_r0x08002c90;
    case 2:
        uVar3 = 0xf5;
        break;
    case 3:
        uVar2 = 0xf1;
        uVar3 = 0xf3;
code_r0x08002c90:
        if (param_2 != 0) {
            uVar3 = uVar2;
        }
        break;
    case 4:
        break;
    default:
        uVar3 = 0;
    }
    *(param_1 + 0xa8) = uVar3;
    iVar1 = regmap_write(*(param_1 + 0x68),0,uVar3);
    if (iVar1 < 0) {
        _dev_err(*(param_1 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    sym.nb7vpq904m_channel_update(param_1);
    return 0;
}


// ===== sym.nb7vpq904m_gadget_pullup_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002480 (size 8) =====

void sym.nb7vpq904m_gadget_pullup_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -0x10);
    iVar2 = regmap_write(*(param_1 + -0x50),0,uVar1 & 0xfe);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -0x58),"writing reg 0x%02x failure\n",0);
    }
    usleep_range_state(1000,0x5dc,2);
    iVar2 = regmap_write(*(param_1 + -0x50),0,uVar1);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -0x58),"writing reg 0x%02x failure\n",0);
    }
    *(param_1 + 0x30) = 0;
    return;
}


// ===== sym.nb7vpq904m_host_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002488 (size 8) =====

void sym.nb7vpq904m_host_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -0x48);
    iVar2 = regmap_write(*(param_1 + -0x88),0,uVar1 & 0xfe);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -0x90),"writing reg 0x%02x failure\n",0);
    }
    usleep_range_state(2000,0x9c4,2);
    iVar2 = regmap_write(*(param_1 + -0x88),0,uVar1);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -0x90),"writing reg 0x%02x failure\n",0);
    }
    return;
}


// ===== sym.nb7vpq904m_probe @ 0x08002490 (size 1096) =====

uint64_t sym.nb7vpq904m_probe(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x20;
    iVar4 = devm_kmalloc(piVar1,0x128,0xdc0);
    if (iVar4 == 0) {
        uVar5 = 0xfffffff4;
    }
    else {
        iVar7 = *(arg1 + 0x90);
        if (iVar7 == 0) {
            iVar7 = *piVar1;
        }
        iVar7 = alloc_workqueue("%s:pullup",0x12,0,iVar7);
        *(iVar4 + 0xb0) = iVar7;
        if (iVar7 == 0) {
            _dev_err(piVar1,"Failed to create pullup workqueue\n");
            uVar5 = 0xfffffff4;
        }
        else {
            uVar5 = __devm_regmap_init_i2c(arg1,obj.redriver_regmap,0,0);
            *(iVar4 + 0x68) = uVar5;
            if (uVar5 < 0xfffffffffffff001) {
                uVar8 = *(arg1 + 0x310);
                *(iVar4 + 0x60) = piVar1;
                *(arg1 + 0xb8) = iVar4;
                iVar7 = of_find_property(uVar8,0x80008fe,0);
                if (((((iVar7 == 0) ||
                      (uVar5 = of_property_read_variable_u8_array(uVar8,0x80008fe,iVar4 + 0x88,8,0), -1 < uVar5))
                     && ((iVar7 = of_find_property(uVar8,"flat-gain",0), iVar7 == 0 ||
                         (uVar5 = of_property_read_variable_u8_array(uVar8,"flat-gain",iVar4 + 0xa0,8,0),
                         -1 < uVar5)))) &&
                    ((iVar7 = of_find_property(uVar8,"output-comp",0), iVar7 == 0 ||
                     (uVar5 = of_property_read_variable_u8_array(uVar8,"output-comp",iVar4 + 0x90,8,0), -1 < uVar5)
                     ))) && ((iVar7 = of_find_property(uVar8,0x80002b4,0), iVar7 == 0 ||
                             (uVar5 = of_property_read_variable_u8_array(uVar8,0x80002b4,iVar4 + 0x98,8,0),
                             -1 < uVar5)))) {
                    *(iVar4 + 0xb8) = 0xfffffffe0;
                    *(iVar4 + 0xc0) = iVar4 + 0xc0;
                    *(iVar4 + 200) = iVar4 + 0xc0;
                    *(iVar4 + 0xd0) = sym.nb7vpq904m_gadget_pullup_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0xf0) = 0xfffffffe0;
                    *(iVar4 + 0xf8) = iVar4 + 0xf8;
                    *(iVar4 + 0x100) = iVar4 + 0xf8;
                    *(iVar4 + 0x108) = sym.nb7vpq904m_host_work.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    iVar7 = of_find_property(*(*(iVar4 + 0x60) + 0x2f0),"lane-channel-swap",0);
                    *(iVar4 + 0xa9) = iVar7 != 0;
                    *(iVar4 + 0x80) = 0;
                    *(iVar4 + 0xa8) = 0;
                    iVar2 = regmap_write(*(iVar4 + 0x68),0,0);
                    if (iVar2 < 0) {
                        _dev_err(*(iVar4 + 0x60),"writing reg 0x%02x failure\n",0);
                    }
                    iVar7 = *(iVar4 + 0x60);
                    uVar3 = of_get_named_gpio_flags(*(iVar7 + 0x2f0),"gpios",0,0);
                    *(iVar4 + 0x78) = uVar3;
                    if (uVar3 < 0x200) {
                        iVar2 = devm_gpio_request(iVar7,uVar3,"redriver");
                        if (iVar2 < 0) {
                            _dev_err(iVar7,"Failed to request gpio\n");
                            *(iVar4 + 0x78) = 0xffffffea;
                        }
                        else {
                            *(iVar4 + 0x59) = 1;
                        }
                    }
                    else {
                        _dev_err(iVar7,"Failed to get gpio\n");
                    }
                    iVar7 = debugfs_create_dir("nb7vpq904m_redriver",0);
                    *(iVar4 + 0x120) = iVar7;
                    if (iVar7 == 0) {
                        _dev_warn(*(iVar4 + 0x60),"Couldn\'t create debug dir\n");
                    }
                    else {
                        debugfs_create_file(0x80008fe,0x180,iVar7,iVar4,obj.eq_ops);
                        debugfs_create_file(0x800032e,0x180,*(iVar4 + 0x120),iVar4,obj.flat_gain_ops);
                        debugfs_create_file(0x80002fb,0x180,*(iVar4 + 0x120),iVar4,obj.output_comp_ops);
                        debugfs_create_file("loss_match",0x180,*(iVar4 + 0x120),iVar4,obj.loss_match_ops);
                        debugfs_create_file("orientation-gpio",0x124,*(iVar4 + 0x120),iVar4,obj.orientation_gpio_ops
                                           );
                        debugfs_create_bool("lane-channel-swap",0x1a4,*(iVar4 + 0x120),iVar4 + 0xa9);
                    }
                    uVar8 = *(*(iVar4 + 0x60) + 0x2f0);
                    *(iVar4 + 0x20) = sym.nb7vpq904m_notify_connect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x28) = sym.nb7vpq904m_notify_disconnect.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x10) = uVar8;
                    *(iVar4 + 0x18) = sym.nb7vpq904m_release_usb_lanes.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x30) = sym.nb7vpq904m_get_orientation.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x38) = sym.nb7vpq904m_gadget_pullup_enter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x40) = sym.nb7vpq904m_gadget_pullup_exit.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    *(iVar4 + 0x48) = sym.nb7vpq904m_host_powercycle.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                    usb_add_redriver(iVar4);
                    uVar5 = 0;
                    goto code_r0x0800285c;
                }
                uVar5 = uVar5 & 0xffffffff;
                _dev_err(*(iVar4 + 0x60),"%s: error read parameters.\n","nb7vpq904m_read_configuration");
                pcVar6 = "Failed to read default configuration: %d\n";
            }
            else {
                pcVar6 = "Failed to allocate register map: %d\n";
            }
            _dev_err(piVar1,pcVar6,uVar5 & 0xffffffff);
        }
    }
code_r0x0800285c:
    return uVar5 & 0xffffffff;
}


// ===== sym.nb7vpq904m_remove @ 0x080028d8 (size 88) =====

ulong sym.nb7vpq904m_remove(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xb8);
    iVar1 = usb_remove_redriver(iVar3);
    if (iVar1 == 0) {
        debugfs_remove(*(iVar3 + 0x120));
        *(iVar3 + 0xe8) = 0;
        destroy_workqueue(*(iVar3 + 0xb0));
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.nb7vpq904m_shutdown @ 0x08002930 (size 116) =====

void sym.nb7vpq904m_shutdown(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    iVar1 = regmap_write(*(iVar2 + 0x68),0,0xfb);
    if (iVar1 < 0) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
        _dev_err(arg1 + 0x20,"%s: fail to set USB mode with 4 channel enabled.\n","nb7vpq904m_shutdown");
    }
    return;
}


// ===== sym.nb7vpq904m_gadget_pullup_work @ 0x080029a4 (size 156) =====

void sym.nb7vpq904m_gadget_pullup_work(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -0x10);
    iVar2 = regmap_write(*(arg1 + -0x50),0,uVar1 & 0xfe);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -0x58),"writing reg 0x%02x failure\n",0);
    }
    usleep_range_state(1000,0x5dc,2);
    iVar2 = regmap_write(*(arg1 + -0x50),0,uVar1);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -0x58),"writing reg 0x%02x failure\n",0);
    }
    *(arg1 + 0x30) = 0;
    return;
}


// ===== sym.nb7vpq904m_host_work @ 0x08002a40 (size 152) =====

void sym.nb7vpq904m_host_work(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -0x48);
    iVar2 = regmap_write(*(arg1 + -0x88),0,uVar1 & 0xfe);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -0x90),"writing reg 0x%02x failure\n",0);
    }
    usleep_range_state(2000,0x9c4,2);
    iVar2 = regmap_write(*(arg1 + -0x88),0,uVar1);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -0x90),"writing reg 0x%02x failure\n",0);
    }
    return;
}


// ===== sym.nb7vpq904m_release_usb_lanes @ 0x08002ad8 (size 268) =====

ulong sym.nb7vpq904m_release_usb_lanes(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uchar uVar3;
    uchar uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        *(arg1 + 0x80) = 3;
code_r0x08002b20:
        uVar3 = 0xf3;
        if (*(arg1 + 0x7c) != 0) {
            uVar3 = 0xf1;
        }
        goto code_r0x08002b38;
    }
    if (arg2 == 4) {
        *(arg1 + 0x80) = 2;
code_r0x08002b0c:
        uVar3 = 0xf5;
    }
    else {
        uVar1 = *(arg1 + 0x80) - 1;
        if (3 < uVar1) {
            uVar3 = 0;
            goto code_r0x08002b38;
        }
    //switch table (3 cases) at 0x8000260
        uVar3 = 0xfb;
        switch(*(uVar1 + 0x8000260) * 4 + 0x8002b08) {
        case 0x8002b0c:
            goto code_r0x08002b0c;
        case 0x8002b20:
            goto code_r0x08002b20;
        case 0x8002ba0:
            uVar4 = 0x3b;
            if (*(arg1 + 0x7c) != 1) {
                uVar4 = 0xb;
            }
            uVar3 = 0xcb;
            if (*(arg1 + 0x7c) != 0) {
                uVar3 = uVar4;
            }
        }
    }
code_r0x08002b38:
    *(arg1 + 0xa8) = uVar3;
    iVar2 = regmap_write(*(arg1 + 0x68),0,uVar3);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    sym.nb7vpq904m_channel_update(arg1);
    return 0;
}


// ===== sym.nb7vpq904m_notify_connect @ 0x08002be4 (size 260) =====

ulong sym.nb7vpq904m_notify_connect(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uchar uVar2;
    uchar uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    if (iVar1 == 0) {
        iVar1 = 1;
        *(arg1 + 0x80) = 1;
    }
    *(arg1 + 0x7c) = arg2;
    if (*(arg1 + 0xa9) != '\0') {
        arg2 = arg2 == 0;
        *(arg1 + 0x7c) = arg2;
    }
    uVar3 = 0xfb;
    //switch table (4 cases) at 0x8000264
    switch(iVar1) {
    case 1:
        uVar2 = 0x3b;
        if (arg2 != 1) {
            uVar2 = 0xb;
        }
        uVar3 = 0xcb;
        goto code_r0x08002c90;
    case 2:
        uVar3 = 0xf5;
        break;
    case 3:
        uVar2 = 0xf1;
        uVar3 = 0xf3;
code_r0x08002c90:
        if (arg2 != 0) {
            uVar3 = uVar2;
        }
        break;
    case 4:
        break;
    default:
        uVar3 = 0;
    }
    *(arg1 + 0xa8) = uVar3;
    iVar1 = regmap_write(*(arg1 + 0x68),0,uVar3);
    if (iVar1 < 0) {
        _dev_err(*(arg1 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    sym.nb7vpq904m_channel_update(arg1);
    return 0;
}


// ===== sym.nb7vpq904m_notify_disconnect @ 0x08002ce8 (size 104) =====

ulong sym.nb7vpq904m_notify_disconnect(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) != 0) {
        *(arg1 + 0x80) = 0;
        iVar1 = regmap_write(*(arg1 + 0x68),0,0);
        if (iVar1 < 0) {
            _dev_err(*(arg1 + 0x60),"writing reg 0x%02x failure\n",0);
        }
    }
    return 0;
}


// ===== sym.nb7vpq904m_get_orientation @ 0x08002d50 (size 44) =====

void sym.nb7vpq904m_get_orientation(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(arg1 + 0x78));
    gpiod_get_raw_value();
    return;
}


// ===== sym.nb7vpq904m_gadget_pullup_enter @ 0x08002d7c (size 120) =====

ulong sym.nb7vpq904m_gadget_pullup_enter(int64_t arg1)

{
    ulong uVar1;
    int in_w1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 1) {
        if (in_w1 != 0) {
            iVar2 = 0x7a122;
            do {
                if (*(arg1 + 0xe8) == '\0') goto code_r0x08002dd4;
                __const_udelay(0x10c7);
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            _dev_warn(*(arg1 + 0x60),"pullup timeout\n");
        }
code_r0x08002dd4:
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.nb7vpq904m_gadget_pullup_exit @ 0x08002df4 (size 84) =====

ulong sym.nb7vpq904m_gadget_pullup_exit(int64_t arg1)

{
    ulong uVar1;
    int in_w1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 1) {
        if (in_w1 == 0) {
            *(arg1 + 0xe8) = 1;
            queue_work_on(0x20,*(arg1 + 0xb0),arg1 + 0xb8);
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.nb7vpq904m_host_powercycle @ 0x08002e48 (size 76) =====

ulong sym.nb7vpq904m_host_powercycle(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == 1) {
        queue_work_on(0x20,_debugfs_attr_read,arg1 + 0xf0);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.eq_write @ 0x08002e94 (size 584) =====

//WARNING: Removing unreachable block (ram,0x08002ff8)

uint64_t sym.eq_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = uVar7;
    if (0x26 < uVar7) {
        uVar6 = 0x27;
    }
    uVar8 = *(*(arg1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,arg2,uVar6);
    if (iVar3 != 0) goto code_r0x08002f14;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003048;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003060;
            uVar9 = *puVar4 - 0x61;
            if (uVar9 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar9 = *puVar4 - 0x41;
                if (3 < uVar9) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr(uVar8,uVar9,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08002f14:
        uVar7 = 0xfffffffffffffff2;
code_r0x08003060:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return uVar7;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr,0x8000220
                               );
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003048:
            iVar2 = sym.__typeid__ZTSFiP19nb7vpq904m_redriverhhhE_global_addr(uVar8,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.eq_status_open @ 0x080030dc (size 56) =====

void sym.eq_status_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.eq_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.nb7vpq904m_eq_config @ 0x08003114 (size 64) =====

void sym.nb7vpq904m_eq_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(arg1,1,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym._copy_from_user @ 0x08003154 (size 376) =====

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
        if ((_simple_attr_release >> 0x18 & 1) == 0) {
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
        if ((_simple_attr_release >> 0x18 & 1) == 0) {
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


// ===== sym.nb7vpq904m_param_config @ 0x08003308 (size 592) =====

int sym.nb7vpq904m_param_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint8_t in_w4;
    uint32_t in_w5;
    uint8_t in_w6;
    uint8_t *in_x7;
    ulong *in_x18;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg2;
    uVar1 = arg3 & 0xff;
    if (uVar1 != 4) {
        if (3 < uVar1) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8003558);
            (*pcVar3)();
        }
        if (*(arg1 + (arg3 & 0xffU) + 0x84) == (arg4 & 0xff)) {
            uVar1 = uVar2 + arg3 * 2 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar1,(in_w6 & in_w4) << (in_w5 & 0x1f) & 0xff);
            if (iVar4 < 0) {
                _dev_err(*(arg1 + 0x60),"writing reg 0x%02x failure\n",uVar1);
                return iVar4;
            }
        }
        in_x7[(arg3 & 0xffU) + (arg4 & 0xffU) * 4] = in_w6;
        return 0;
    }
    uVar1 = (in_w6 & in_w4) << (in_w5 & 0x1f) & 0xff;
    if (*(arg1 + 0x84) == '\0') {
        uVar5 = uVar2 & 0xff;
        iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
        if (-1 < iVar4) goto code_r0x08003374;
code_r0x0800351c:
        _dev_err(*(arg1 + 0x60),"writing reg 0x%02x failure\n",uVar5);
    }
    else {
code_r0x08003374:
        *in_x7 = in_w6;
        if (*(arg1 + 0x85) == '\0') {
            uVar5 = uVar2 + 2 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[1] = in_w6;
        if (*(arg1 + 0x86) == '\0') {
            uVar5 = uVar2 + 4 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[2] = in_w6;
        if (*(arg1 + 0x87) == '\0') {
            uVar5 = uVar2 + 6 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[3] = in_w6;
        if (*(arg1 + 0x84) == '\x01') {
            uVar5 = uVar2 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[4] = in_w6;
        if (*(arg1 + 0x85) == '\x01') {
            uVar5 = uVar2 + 2 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[5] = in_w6;
        if (*(arg1 + 0x86) == '\x01') {
            uVar5 = uVar2 + 4 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        in_x7[6] = in_w6;
        if (*(arg1 + 0x87) == '\x01') {
            uVar5 = uVar2 + 6 & 0xff;
            iVar4 = regmap_write(*(arg1 + 0x68),uVar5,uVar1);
            if (iVar4 < 0) goto code_r0x0800351c;
        }
        iVar4 = 0;
        in_x7[7] = in_w6;
    }
    return iVar4;
}


// ===== sym.eq_status @ 0x08003558 (size 128) =====

ulong sym.eq_status(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    seq_puts(arg1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(arg1,"Equalization:\t\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x88),*(iVar1 + 0x89),
               *(iVar1 + 0x8a),*(iVar1 + 0x8b),*(iVar1 + 0x8c),*(iVar1 + 0x8d),*(iVar1 + 0x8e),*(iVar1 + 0x8f));
    return 0;
}


// ===== sym.flat_gain_write @ 0x080035d8 (size 584) =====

//WARNING: Removing unreachable block (ram,0x0800373c)

uint64_t sym.flat_gain_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = uVar7;
    if (0x26 < uVar7) {
        uVar6 = 0x27;
    }
    uVar8 = *(*(arg1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,arg2,uVar6);
    if (iVar3 != 0) goto code_r0x08003658;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x0800378c;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x080037a4;
            uVar9 = *puVar4 - 0x61;
            if (uVar9 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar9 = *puVar4 - 0x41;
                if (3 < uVar9) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,uVar9,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003658:
        uVar7 = 0xfffffffffffffff2;
code_r0x080037a4:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return uVar7;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x0800378c:
            iVar2 = sym.nb7vpq904m_flat_gain_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.flat_gain_status_open @ 0x08003820 (size 56) =====

void sym.flat_gain_status_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.flat_gain_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.nb7vpq904m_flat_gain_config @ 0x08003858 (size 64) =====

void sym.nb7vpq904m_flat_gain_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(arg1,0x18,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.flat_gain_status @ 0x08003898 (size 128) =====

ulong sym.flat_gain_status(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    seq_puts(arg1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(arg1,"TX/RX Flat Gain:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0xa0),*(iVar1 + 0xa1),
               *(iVar1 + 0xa2),*(iVar1 + 0xa3),*(iVar1 + 0xa4),*(iVar1 + 0xa5),*(iVar1 + 0xa6),*(iVar1 + 0xa7));
    return 0;
}


// ===== sym.output_comp_write @ 0x08003918 (size 584) =====

//WARNING: Removing unreachable block (ram,0x08003a7c)

uint64_t sym.output_comp_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = uVar7;
    if (0x26 < uVar7) {
        uVar6 = 0x27;
    }
    uVar8 = *(*(arg1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,arg2,uVar6);
    if (iVar3 != 0) goto code_r0x08003998;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003acc;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003ae4;
            uVar9 = *puVar4 - 0x61;
            if (uVar9 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar9 = *puVar4 - 0x41;
                if (3 < uVar9) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,uVar9,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003998:
        uVar7 = 0xfffffffffffffff2;
code_r0x08003ae4:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return uVar7;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003acc:
            iVar2 = sym.nb7vpq904m_output_comp_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.output_comp_status_open @ 0x08003b60 (size 56) =====

void sym.output_comp_status_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.output_comp_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.nb7vpq904m_output_comp_config @ 0x08003b98 (size 64) =====

void sym.nb7vpq904m_output_comp_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(arg1,2,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.output_comp_status @ 0x08003bd8 (size 128) =====

ulong sym.output_comp_status(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    seq_puts(arg1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(arg1,"Output Compression:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x90),*(iVar1 + 0x91),
               *(iVar1 + 0x92),*(iVar1 + 0x93),*(iVar1 + 0x94),*(iVar1 + 0x95),*(iVar1 + 0x96),*(iVar1 + 0x97));
    return 0;
}


// ===== sym.loss_match_write @ 0x08003c58 (size 584) =====

//WARNING: Removing unreachable block (ram,0x08003dbc)

uint64_t sym.loss_match_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uint64_t *puStack_88;
    uint64_t auStack_80 [6];
    
    uVar7 = arg3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puStack_88 = auStack_80;
    auStack_80[5] = *(iVar3 + 0x5e0);
    auStack_80[0] = 0;
    uVar6 = uVar7;
    if (0x26 < uVar7) {
        uVar6 = 0x27;
    }
    uVar8 = *(*(arg1 + 0xd8) + 0x80);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[4] = 0;
    __check_object_size(auStack_80,uVar6,0);
    iVar3 = sym._copy_from_user(auStack_80,arg2,uVar6);
    if (iVar3 != 0) goto code_r0x08003cd8;
    uVar6 = auStack_80[0] & 0xff;
    if (0xfffffff5 < auStack_80[0] - 0x3a) goto code_r0x08003e0c;
    if ((_ctype[uVar6] & 3) != 0) {
        do {
            puVar4 = strsep(&puStack_88,0x800032c);
            if (puVar4 == NULL) goto code_r0x08003e24;
            uVar9 = *puVar4 - 0x61;
            if (uVar9 < 4) {
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 1;
            }
            else {
                uVar9 = *puVar4 - 0x41;
                if (3 < uVar9) break;
                puVar4 = strsep(&puStack_88,0x800032c);
                uVar1 = *puVar4;
                if (uVar1 - 0x3a < 0xfffffff6) break;
                uVar5 = 0;
            }
            iVar2 = sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,uVar9,uVar5,uVar1 - 0x30);
        } while (-1 < iVar2);
    }
    do {
        _printk(0x80003a2);
code_r0x08003cd8:
        uVar7 = 0xfffffffffffffff2;
code_r0x08003e24:
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == auStack_80[5]) {
                return uVar7;
            }
            __stack_chk_fail();
            __cfi_slowpath_diag(0xcb8868df1218fd16,
                                sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0x8000220);
            uVar6 = auStack_80[0] & 0xff;
code_r0x08003e0c:
            iVar2 = sym.nb7vpq904m_loss_match_config.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                              (uVar8,4,0xff,uVar6 + -0x30);
        } while (-1 < iVar2);
    } while( true );
}


// ===== sym.loss_match_status_open @ 0x08003ea0 (size 56) =====

void sym.loss_match_status_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.loss_match_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.nb7vpq904m_loss_match_config @ 0x08003ed8 (size 64) =====

void sym.nb7vpq904m_loss_match_config(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.nb7vpq904m_param_config(arg1,0x19,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.loss_match_status @ 0x08003f18 (size 128) =====

ulong sym.loss_match_status(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x80);
    seq_puts(arg1,"\t\t\t A(USB)\t B(USB)\t C(USB)\t D(USB)\tA(DP)\t B(DP)\t C(DP)\t D(DP)\n");
    seq_printf(arg1,"Loss Profile Match:\t %d\t %d\t %d\t %d\t%d\t %d\t %d\t %d\n",*(iVar1 + 0x98),*(iVar1 + 0x99),
               *(iVar1 + 0x9a),*(iVar1 + 0x9b),*(iVar1 + 0x9c),*(iVar1 + 0x9d),*(iVar1 + 0x9e),*(iVar1 + 0x9f));
    return 0;
}


// ===== sym.orientation_gpio_ops_open @ 0x08003f98 (size 56) =====

void sym.orientation_gpio_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.orientation_gpio_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,0,"%llu\n");
    return;
}


// ===== sym.orientation_gpio_read @ 0x08003fd0 (size 72) =====

ulong sym.orientation_gpio_read(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*(arg1 + 0x78));
    iVar1 = gpiod_get_raw_value();
    *arg2 = iVar1;
    return 0;
}


// ===== sym.nb7vpq904m_channel_update @ 0x08004018 (size 488) =====

void sym.nb7vpq904m_channel_update(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 0x80) - 1;
    if (3 < uVar5) {
        return;
    }
    //switch table (4 cases) at 0x8000268
    switch(*(uVar5 + 0x8000268) * 4 + 0x8004068) {
    case 0x800406c:
        if (*(arg1 + 0x7c) == 0) {
            uVar4 = 0xffff;
            uVar5 = 0xff;
        }
        else {
            uVar4 = 0xffff0000;
            uVar5 = 0;
        }
        break;
    case 0x8004084:
        uVar4 = 0x1010101;
code_r0x080040c4:
        uVar5 = 1;
        break;
    case 0x8004090:
        if (*(arg1 + 0x7c) == 0) {
            uVar4 = 0x101;
            goto code_r0x080040c4;
        }
        uVar4 = 0x1010000;
        uVar5 = 0;
        break;
    case 0x80040a8:
        uVar5 = 0;
        *(arg1 + 0x84) = 0;
        goto code_r0x080040cc;
    }
    *(arg1 + 0x84) = uVar4;
code_r0x080040cc:
    uVar6 = 0;
    do {
        if ((~uVar5 & 0xff) != 0) {
            if (1 < uVar5) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8004200);
                (*pcVar2)();
            }
            iVar3 = sym.nb7vpq904m_param_config(arg1,1,uVar6 & 0xffffffff,uVar5);
            if ((((iVar3 != 0) ||
                 (iVar3 = sym.nb7vpq904m_param_config(arg1,0x18,uVar6 & 0xffffffff,uVar5), iVar3 != 0)) ||
                (iVar3 = sym.nb7vpq904m_param_config(arg1,2,uVar6 & 0xffffffff,uVar5), iVar3 != 0)) ||
               (iVar3 = sym.nb7vpq904m_param_config(arg1,0x19,uVar6 & 0xffffffff,uVar5), iVar3 != 0)) {
                _dev_err(*(arg1 + 0x60),"channel parameters update failure(%d).\n",iVar3);
                return;
            }
        }
        if (uVar6 == 3) {
            return;
        }
        iVar1 = arg1 + uVar6;
        uVar6 = uVar6 + 1;
        uVar5 = *(iVar1 + 0x85);
    } while( true );
}


// ===== sym.nb7vpq904m_suspend @ 0x08004200 (size 128) =====

ulong sym.nb7vpq904m_suspend(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if ((4 < *(iVar2 + 0x80) || (1 << (*(iVar2 + 0x80) & 0x1f) & 0x15U) == 0) &&
       (iVar1 = regmap_write(*(iVar2 + 0x68),0,*(iVar2 + 0xa8) & 0xfe), iVar1 < 0)) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    return 0;
}


// ===== sym.nb7vpq904m_resume @ 0x08004280 (size 124) =====

ulong sym.nb7vpq904m_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if ((4 < *(iVar2 + 0x80) || (1 << (*(iVar2 + 0x80) & 0x1f) & 0x15U) == 0) &&
       (iVar1 = regmap_write(*(iVar2 + 0x68),0,*(iVar2 + 0xa8)), iVar1 < 0)) {
        _dev_err(*(iVar2 + 0x60),"writing reg 0x%02x failure\n",0);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080042fc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004340

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
    //switch table (4 cases) at 0x800026c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004354);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004364 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.nb7vpq904m_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08004398 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.nb7vpq904m_driver);
    return;
}

