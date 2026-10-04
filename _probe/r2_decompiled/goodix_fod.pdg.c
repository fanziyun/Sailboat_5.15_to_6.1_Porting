// decompiled from goodix_fod by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080037a4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 != -0x3987c0e26ee29729) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08003764;
                pcVar2 = sym.gf_open.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt;
            }
code_r0x08002138:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08003764;
        }
        pcVar2 = sym.gf_irq.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt;
    }
    else if (arg1 < 0x68131453fce1715e) {
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.gf_ioctl.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt;
            goto code_r0x08002138;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08003764;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x68131453fce1715e) {
        pcVar2 = sym.nl_data_ready.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003764;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003764:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80037b8);
    (*pcVar1)();
}


// ===== sym.nl_data_ready.cfi_jt @ 0x08002160 (size 8) =====

void sym.nl_data_ready.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08003bf4;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x08003bf4:
    if (0xf < *(param_1 + 0x70)) {
        _segment.ehdr = *(*(param_1 + 0xd8) + 0xc);
        kfree_skb(param_1);
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.netlink_exit();
    platform_driver_unregister(reloc.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,*0x80002e8);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002170 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = __register_chrdev(_segment.ehdr & 0xffffffff,0,0x100,"goodix_fp_spi",obj.gf_fops);
    uVar3 = uVar2 & 0xffffffff;
    if (uVar2 < 0) {
        _printk(0x8000d79);
    }
    else {
        _segment.ehdr = CONCAT44(*0x8000004,uVar2);
        _segment.ehdr = __class_create(obj.__this_module,"goodix_fp",obj.gf_init.__key);
        if (_segment.ehdr < 0xfffffffffffff001) {
            iVar1 = __platform_driver_register
                              (reloc.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt,obj.__this_module);
            if (iVar1 < 0) {
                class_destroy(_segment.ehdr);
                __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,_segment.ehdr);
                _printk(0x8000eb9);
            }
            sym.netlink_init();
            _printk(0x8000ee7,iVar1);
            uVar3 = 0;
        }
        else {
            __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,_segment.ehdr);
            _printk(0x80005eb);
            uVar3 = _segment.ehdr & 0xffffffff;
        }
    }
    return uVar3;
}


// ===== sym.gf_ioctl.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x08002178 (size 8) =====

void sym.gf_ioctl.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(ulong param_1,uint32_t param_2,uint64_t param_3)

{
    ulong *puVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_50;
    uchar uStack_48;
    uint32_t uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0x19;
    uStack_50 = 0;
    uVar6 = param_3;
    if ((param_2 & 0xff00) != 0x6700) {
        uVar4 = 0xffffffffffffffed;
        goto code_r0x08002528;
    }
    if (param_2 < 0) {
        puVar1 = sp_el0;
        uVar7 = param_2 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar8 = param_3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar8 = param_3 & (param_3 << 8) >> 8;
        }
        bVar2 = CARRY8(uVar8,uVar7);
        uVar8 = uVar8 + uVar7;
        uVar7 = 0;
        if (!bVar2 || uVar8 == 0) {
            uVar7 = 0x7fffffffff;
        }
        if (bVar2) {
            uVar8 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar8,~uVar7) && !CARRY8(uVar8 + ~uVar7,bVar2) || uVar8 == uVar7 + !bVar2) goto code_r0x08002298;
code_r0x0800236c:
        uVar4 = 0xfffffffffffffff2;
        uVar6 = param_3;
        goto code_r0x08002528;
    }
    if ((param_2 >> 0x1e & 1) != 0) {
        puVar1 = sp_el0;
        uVar7 = param_2 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar8 = param_3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar8 = param_3 & (param_3 << 8) >> 8;
        }
        bVar2 = CARRY8(uVar8,uVar7);
        uVar8 = uVar8 + uVar7;
        uVar7 = 0;
        if (!bVar2 || uVar8 == 0) {
            uVar7 = 0x7fffffffff;
        }
        if (bVar2) {
            uVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar8,~uVar7) || CARRY8(uVar8 + ~uVar7,bVar2)) && uVar8 != uVar7 + !bVar2) goto code_r0x0800236c;
    }
code_r0x08002298:
    if (*0x80002d8 == '\0') {
        if (1 < param_2 - 0x6707) {
            _printk(0x8000dce,param_2 & 0xff);
            uVar4 = 0xffffffffffffffed;
            uVar6 = param_3;
            goto code_r0x08002528;
        }
        _printk(0x8000f0b);
    }
    uVar4 = 0;
    if (0x40046704 < param_2) {
        if (param_2 < 0x4004670e) {
            if (param_2 == 0x40046705) goto code_r0x08002528;
            goto code_r0x080023dc;
        }
        if (param_2 == 0x4004670e) {
            _printk(0x80008ad,"gf_ioctl");
            uVar6 = 4;
            iVar5 = sym._copy_from_user(&uStack_44,param_3,4);
            if (iVar5 != 0) {
                uVar4 = 0x8000b59;
code_r0x080025fc:
                _printk(uVar4);
                uVar4 = 0xfffffffffffffff2;
                goto code_r0x08002528;
            }
            sym.nav_event_input(uStack_44);
        }
        else {
            if (param_2 != 0x40086709) {
                if (param_2 != 0x4008670d) goto code_r0x080023dc;
                _printk(0x8000f52,"gf_ioctl");
                uVar6 = 8;
                iVar5 = sym._copy_from_user(&uStack_50,param_3,8);
                param_3 = uVar6;
                if (iVar5 != 0) goto code_r0x0800236c;
                _printk(0x8000e6a,uStack_50 & 0xff);
                _printk(0x8000bb0,uStack_50._1_1_);
                param_2 = uStack_50._2_1_;
                uVar4 = 0x8000a14;
                goto code_r0x080023e8;
            }
            uVar6 = 8;
            iVar5 = sym._copy_from_user(&uStack_40,param_3,8);
            if (iVar5 != 0) {
                uVar4 = 0x8000983;
                goto code_r0x080025fc;
            }
            if (uStack_40 == 1) {
                uVar9 = 0x66;
            }
            else if (uStack_40 == 5) {
                uVar9 = 0xd4;
            }
            else {
                uVar9 = uStack_40;
                if (uStack_40 == 2) {
                    uVar9 = 0x74;
                }
            }
            uVar6 = uVar9;
            _printk(0x800078a,"gf_kernel_key_input",uVar6,uStack_40 & 0xffffffff,uStack_40._4_4_);
            if ((uStack_40 == 5) || (uStack_40 == 2)) {
                if (uStack_40._4_4_ != 1) goto code_r0x08002520;
                input_event(_segment.ehdr,1,uVar9,1);
                input_event(_segment.ehdr,0,0,0);
                input_event(_segment.ehdr,1,uVar9,0);
                uVar6 = 0;
                input_event(_segment.ehdr,0,0,0);
            }
            if (uStack_40 == 1) {
                input_event(_segment.ehdr,1,uVar9,uStack_40._4_4_ != 0);
                uVar6 = 0;
                input_event(_segment.ehdr,0,0,0);
            }
        }
        goto code_r0x08002520;
    }
    switch(param_2) {
    case 0x6701:
        uVar4 = 0x80009d0;
        goto code_r0x08002514;
    case 0x6702:
        _printk(0x8000b39,"gf_ioctl");
        sym.gf_hw_reset(0x8000268,3);
        uVar4 = 0;
        if (*0x8000310 == 0) goto code_r0x08002528;
        if ((_segment.ehdr != 0) && (iVar3 = pinctrl_select_state(), iVar3 < 0)) {
            _printk(0x8000630);
        }
        break;
    case 0x6703:
        _printk(0x80005c7,"gf_ioctl");
        sym.gf_enable_irq();
        break;
    case 0x6704:
        _printk(0x8000765,"gf_ioctl");
        sym.gf_disable_irq(0x8000268);
        break;
    case 0x6705:
    case 0x6709:
    case 0x670b:
code_r0x080023dc:
        uVar4 = 0x800110c;
code_r0x080023e8:
        _printk(uVar4,param_2);
        break;
    case 0x6706:
        goto code_r0x08002528;
    case 0x6707:
        _printk(0x80009ee,"gf_ioctl");
        if (*0x80002d8 == '\x01') {
            _printk(0x8000f24);
        }
        else {
            msleep(10);
        }
        uVar4 = 0;
        *0x80002d8 = '\x01';
        goto code_r0x08002528;
    case 0x6708:
        _printk(0x80008d0,"gf_ioctl");
        if (*0x80002d8 == '\0') {
            _printk(0x8000c86);
        }
        uVar4 = 0;
        *0x80002d8 = '\0';
        goto code_r0x08002528;
    case 0x670a:
        uVar4 = 0x800084b;
        goto code_r0x08002514;
    case 0x670c:
        uVar4 = 0x80006b1;
        goto code_r0x08002514;
    default:
        if (param_2 == 0x80016700) {
            _printk(0x8000612,"gf_ioctl");
            iVar5 = sym._copy_to_user(param_3);
            uVar4 = 0;
            if (iVar5 != 0) {
                uVar4 = 0xfffffffffffffff2;
            }
            goto code_r0x08002528;
        }
        if (param_2 != 0x8001670b) goto code_r0x080023dc;
        uVar4 = 0x800068c;
code_r0x08002514:
        _printk(uVar4,"gf_ioctl");
    }
code_r0x08002520:
    uVar4 = 0;
code_r0x08002528:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar10 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.gf_compat_ioctl;
        sym.gf_ioctl(auVar10._0_8_,auVar10._8_8_,uVar6 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.gf_compat_ioctl.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x08002180 (size 8) =====

void sym.gf_compat_ioctl.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gf_ioctl(param_1,param_2,param_3 & 0xffffffff);
    return;
}


// ===== sym.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x08002188 (size 8) =====

uint64_t sym.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(uint64_t param_1)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    ulong *puVar4;
    ulong *puVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = 0xffffffea;
    *0x8000270 = 0x8000270;
    *0x8000278 = 0x8000270;
    *0x80002a4 = 0xffffffeaffffffea;
    *0x80002ac = 0xffffffea;
    *0x80002d8 = 0;
    *0x80002da = 0;
    *0x8000280 = param_1;
    iVar6 = sym.gf_parse_dts(0x8000268);
    if (iVar6 != 0) goto code_r0x080031d8;
    mutex_lock(obj.device_list_lock);
    uVar12 = ~(_segment.ehdr | 0xffffffff00000000);
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = 0x20;
    if ((_segment.ehdr | 0xffffffff00000000) != 0xffffffffffffffff) {
        uVar12 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
    }
    if (uVar12 < 0x20) {
        _obj.gf = uVar12 | _segment.ehdr << 0x14;
        uVar8 = device_create(_segment.ehdr,*0x8000280 + 0x10,_obj.gf,obj.gf,"goodix_fp");
        uVar11 = _obj.device_list;
        if ((uVar8 < 0xfffffffffffff001) || (uVar8 == 0)) {
            Hint_Prefetch(0x8000328,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8000328,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.minors = _obj.minors | 1L << (uVar12 & 0x3f);
                }
            } while (cVar2 != '\0');
            uVar12 = __list_add_valid(0x8000270,obj.device_list,_obj.device_list);
            if ((uVar12 & 1) != 0) {
                *(uVar11 + 8) = 0x8000270;
                *0x8000270 = uVar11;
                *0x8000278 = obj.device_list;
                _obj.device_list = 0x8000270;
            }
            mutex_unlock(obj.device_list_lock);
            _segment.ehdr = input_allocate_device();
            if (_segment.ehdr != NULL) {
                input_set_capability(_segment.ehdr,_obj.SPIDEV_MAJOR,_obj.gf_init.__key);
                input_set_capability(_segment.ehdr,_obj.gf_class,*0x8000264);
                input_set_capability(_segment.ehdr,_obj.gf,*0x800026c);
                input_set_capability(_segment.ehdr,*0x8000270 & 0xffffffff,*0x8000274);
                input_set_capability(_segment.ehdr,*0x8000278 & 0xffffffff,*0x800027c);
                input_set_capability(_segment.ehdr,*0x8000280 & 0xffffffff,*0x8000284);
                input_set_capability(_segment.ehdr,*0x8000288,*0x800028c);
                input_set_capability(_segment.ehdr,*0x8000290,*0x8000294);
                input_set_capability(_segment.ehdr,*0x8000298,*0x800029c);
                input_set_capability(_segment.ehdr,*0x80002a0,*0x80002a4 & 0xffffffff);
                input_set_capability(_segment.ehdr,*0x80002a8,*0x80002ac);
                input_set_capability(_segment.ehdr,*0x80002b0,*0x80002b4);
                input_set_capability(_segment.ehdr,*0x80002b8,*0x80002bc);
                *_segment.ehdr = "uinput-goodix";
                uVar7 = input_register_device(_segment.ehdr);
                if (uVar7 == 0) goto code_r0x08003298;
                uVar12 = uVar7;
                _printk(0x8000fff);
                if (_segment.ehdr == NULL) goto code_r0x080033fc;
                goto code_r0x080033f8;
            }
            _printk(0x8000ab4,"gf_probe");
            uVar12 = 0xfffffff4;
        }
        else {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            mutex_unlock(obj.device_list_lock);
code_r0x08003298:
            puVar4 = _segment.ehdr + 2;
            puVar9 = devm_regulator_get(puVar4,"l11c_vdd");
            if (puVar9 < 0xfffffffffffff001) {
                _dev_err(puVar4,"fp %s: of vreg successful found\n","enable_regulator_3V0");
                uVar7 = regulator_set_load(puVar9,200000);
                uVar12 = uVar7;
                puVar4 = _segment.ehdr;
                if (uVar7 == 0) {
                    puVar10 = regulator_enable(puVar9);
                    iVar6 = puVar10;
                    puVar5 = puVar9;
                    puVar4 = _segment.ehdr;
                    puVar9 = puVar10;
                    goto joined_r0x080033d8;
                }
            }
            else {
                _dev_err(puVar4,"fp %s: no of vreg found\n","enable_regulator_3V0");
                iVar6 = puVar9;
                puVar5 = _segment.ehdr;
                puVar4 = _segment.ehdr;
joined_r0x080033d8:
                _segment.ehdr = puVar5;
                uVar12 = puVar9 & 0xffffffff;
                if (iVar6 == 0) {
                    *0x80002b0 = sym.gf_irq_num(0x8000268);
                    _segment.ehdr = wakeup_source_register(*0x8000280 + 0x10,"fp_wakelock");
                    if (_segment.ehdr != NULL) {
                        _printk(0x80010c2,1,2,1);
                        return 0;
                    }
                    _printk(0x8000d3d);
                    uVar12 = 0;
                    puVar4 = _segment.ehdr;
                }
            }
            _segment.ehdr = puVar4;
            devm_regulator_put(_segment.ehdr);
            input_unregister_device(_segment.ehdr);
            if (_segment.ehdr != NULL) {
code_r0x080033f8:
                input_free_device();
            }
        }
code_r0x080033fc:
        if (_segment.ehdr == 0) goto code_r0x080031d8;
        _printk(0x8000cfd,uVar12);
        mutex_lock(obj.device_list_lock);
        uVar11 = __list_del_entry_valid(0x8000270);
        if ((uVar11 & 1) != 0) {
            *(*0x8000270 + 8) = *0x8000278;
            **0x8000278 = *0x8000270;
        }
        *0x8000270 = 0xdead000000000100;
        *0x8000278 = 0xdead000000000122;
        device_destroy(_segment.ehdr,_obj.gf);
        uVar11 = _obj.gf;
        pcVar1 = obj.minors + ((uVar11 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        _dev_printk(0x8001161,_segment.ehdr + 2,"no minor number available!\n");
        uVar12 = 0xffffffed;
    }
    mutex_unlock(obj.device_list_lock);
code_r0x080031d8:
    sym.gf_cleanup(0x8000268);
    *0x80002d8 = *0x80002d8 & 0xff00;
    return uVar12;
}


// ===== sym.gf_remove.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x08002190 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800365c)
//WARNING: Removing unreachable block (ram,0x08003674)

ulong sym.gf_remove.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_regulator_put(_segment.ehdr);
    wakeup_source_unregister(_segment.ehdr);
    _segment.ehdr = 0;
    input_free_device(0);
    mutex_lock(obj.device_list_lock);
    uVar4 = __list_del_entry_valid(0x8000270);
    if ((uVar4 & 1) != 0) {
        *(*0x8000270 + 8) = *0x8000278;
        **0x8000278 = *0x8000270;
    }
    *0x8000270 = 0xdead000000000100;
    *0x8000278 = 0xdead000000000122;
    device_destroy(_segment.ehdr,_obj.gf);
    uVar4 = _obj.gf;
    pcVar1 = obj.minors + ((uVar4 & 0xfffc0) >> 3);
    Hint_Prefetch(pcVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar3) {
            *pcVar1 = *pcVar1 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (_segment.ehdr == 0) {
        sym.gf_cleanup(0x8000268);
    }
    mutex_unlock(obj.device_list_lock);
    return 0;
}


// ===== sym.gf_open.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x08002198 (size 8) =====

int sym.gf_open.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *arg1;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mutex_lock_interruptible(obj.device_list_lock);
    if (iVar1 == 0) {
        for (pcVar3 = _obj.device_list; pcVar3 != obj.device_list; pcVar3 = *pcVar3) {
            arg1 = pcVar3 + -8;
            if (*arg1 == *(param_1 + 0x4c)) {
                _printk(0x8000c42);
                iVar1 = gpio_request(*(pcVar3 + 0x38),"gpio-reset");
                if (iVar1 == 0) {
                    _dev_err(*(pcVar3 + 0x10) + 0x10,"requestd RESET GPIO = %d\n",*(pcVar3 + 0x38));
                    uVar2 = gpio_to_desc(*(pcVar3 + 0x38));
                    gpiod_direction_output_raw(uVar2,0);
                    iVar1 = gpio_request(*(pcVar3 + 0x34),"gpio-irq");
                    if (iVar1 == 0) {
                        gpio_to_desc(*(pcVar3 + 0x34));
                        gpiod_direction_input();
                        iVar1 = request_threaded_irq
                                          (*(pcVar3 + 0x40),0,sym.gf_irq.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt,
                                           0x2001,0x8000cfa,arg1);
                        if (iVar1 == 0) {
                            irq_set_irq_wake(*(pcVar3 + 0x40),1);
                            *(pcVar3 + 0x44) = 1;
                            sym.gf_disable_irq(arg1);
                            *(pcVar3 + 0x30) = *(pcVar3 + 0x30) + 1;
                            *(param_2 + 0xd8) = arg1;
                            nonseekable_open(param_1,param_2);
                            _printk(0x8000e15,*(pcVar3 + 0x40));
                            iVar1 = 0;
                            goto code_r0x08002818;
                        }
                        mutex_unlock(obj.device_list_lock);
                        gpio_free(*(pcVar3 + 0x34));
                    }
                    else {
                        _dev_err(*(pcVar3 + 0x10) + 0x10,"Failed to request IRQ GPIO %d . rc = %d\n",*(pcVar3 + 0x34)
                                 ,iVar1);
                        mutex_unlock(obj.device_list_lock);
                    }
                    gpio_free(*(pcVar3 + 0x38));
                }
                else {
                    _dev_err(*(pcVar3 + 0x10) + 0x10,"Failed to request RESET GPIO. rc = %d\n",iVar1);
                    mutex_unlock(obj.device_list_lock);
                }
                return -1;
            }
        }
        _printk(0x8000fcb,*(param_1 + 0x4c) & 0xfffff);
        iVar1 = -6;
code_r0x08002818:
        mutex_unlock(obj.device_list_lock);
    }
    return iVar1;
}


// ===== sym.gf_release.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x080021a0 (size 8) =====

int sym.gf_release.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800114f,"gf_release");
    uVar3 = mutex_is_locked(obj.device_list_lock);
    if ((uVar3 & 1) != 0) {
        _printk(0x80010a9,"gf_release");
        mutex_unlock(obj.device_list_lock);
    }
    iVar2 = mutex_lock_interruptible(obj.device_list_lock);
    if (iVar2 == 0) {
        iVar4 = *(param_2 + 0xd8);
        *(param_2 + 0xd8) = 0;
        iVar1 = *(iVar4 + 0x38) + -1;
        *(iVar4 + 0x38) = iVar1;
        if (iVar1 == 0) {
            _printk(0x8000a90,*(iVar4 + 0x48));
            if (*(iVar4 + 0x4c) == 0) {
                _printk(0x8000bcb);
            }
            else {
                *(iVar4 + 0x4c) = 0;
                disable_irq(*(iVar4 + 0x48));
            }
            *(iVar4 + 0x70) = 0;
            free_irq(*(iVar4 + 0x48),iVar4);
            gpio_free(*(iVar4 + 0x3c));
            gpio_free(*(iVar4 + 0x40));
        }
        mutex_unlock(obj.device_list_lock);
    }
    return iVar2;
}


// ===== sym.gf_irq.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt @ 0x080021a8 (size 8) =====

uint64_t sym.gf_irq.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *puVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 1;
    _printk(0x8001039,"gf_irq");
    if (_segment.ehdr != NULL) {
        pm_wakeup_ws_event(_segment.ehdr,2000,0);
    }
    sym.sendnlmsg(&uStack_2c);
    if (((*0x80002da == '\x01') && (*0x80002d8 == '\x01')) && (*0x80002d9 == '\x01')) {
        input_event(CONCAT44(*0x800029c,*0x8000298),1,0x6a,1);
        input_event(CONCAT44(*0x800029c,*0x8000298),0,0,0);
        input_event(CONCAT44(*0x800029c,*0x8000298),1,0x6a,0);
        input_event(CONCAT44(*0x800029c,*0x8000298),0,0,0);
        *0x80002da = '\0';
        queue_work_on(0x20,_msleep,0x80002e0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return 1;
    }
    *0x8000280 = __stack_chk_fail();
    *extraout_x18 = sym.gf_probe;
    uVar13 = 0xffffffea;
    *0x8000270 = 0x8000270;
    *0x8000278 = 0x8000270;
    *0x80002a4 = 0xffffffeaffffffea;
    *0x80002ac = 0xffffffea;
    *0x80002d8 = 0;
    *0x80002da = 0;
    iVar7 = sym.gf_parse_dts(0x8000268);
    if (iVar7 != 0) goto code_r0x080031d8;
    mutex_lock(obj.device_list_lock);
    uVar13 = ~(_segment.ehdr | 0xffffffff00000000);
    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = 0x20;
    if ((_segment.ehdr | 0xffffffff00000000) != 0xffffffffffffffff) {
        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    }
    if (uVar13 < 0x20) {
        _obj.gf = uVar13 | _segment.ehdr << 0x14;
        uVar9 = device_create(_segment.ehdr,*0x8000280 + 0x10,_obj.gf,obj.gf,"goodix_fp");
        uVar12 = _obj.device_list;
        if ((uVar9 < 0xfffffffffffff001) || (uVar9 == 0)) {
            Hint_Prefetch(0x8000328,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8000328,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.minors = _obj.minors | 1L << (uVar13 & 0x3f);
                }
            } while (cVar2 != '\0');
            uVar13 = __list_add_valid(0x8000270,obj.device_list,_obj.device_list);
            if ((uVar13 & 1) != 0) {
                *(uVar12 + 8) = 0x8000270;
                *0x8000270 = uVar12;
                *0x8000278 = obj.device_list;
                _obj.device_list = 0x8000270;
            }
            mutex_unlock(obj.device_list_lock);
            _segment.ehdr = input_allocate_device();
            if (_segment.ehdr != NULL) {
                input_set_capability(_segment.ehdr,_obj.SPIDEV_MAJOR,_obj.gf_init.__key);
                input_set_capability(_segment.ehdr,_obj.gf_class,*0x8000264);
                input_set_capability(_segment.ehdr,_obj.gf,*0x800026c);
                input_set_capability(_segment.ehdr,*0x8000270 & 0xffffffff,*0x8000274);
                input_set_capability(_segment.ehdr,*0x8000278 & 0xffffffff,*0x800027c);
                input_set_capability(_segment.ehdr,*0x8000280 & 0xffffffff,*0x8000284);
                input_set_capability(_segment.ehdr,*0x8000288,*0x800028c);
                input_set_capability(_segment.ehdr,*0x8000290,*0x8000294);
                input_set_capability(_segment.ehdr,*0x8000298,*0x800029c);
                input_set_capability(_segment.ehdr,*0x80002a0,*0x80002a4 & 0xffffffff);
                input_set_capability(_segment.ehdr,*0x80002a8,*0x80002ac);
                input_set_capability(_segment.ehdr,*0x80002b0,*0x80002b4);
                input_set_capability(_segment.ehdr,*0x80002b8,*0x80002bc);
                *_segment.ehdr = "uinput-goodix";
                uVar8 = input_register_device(_segment.ehdr);
                if (uVar8 == 0) goto code_r0x08003298;
                uVar13 = uVar8;
                _printk(0x8000fff);
                if (_segment.ehdr == NULL) goto code_r0x080033fc;
                goto code_r0x080033f8;
            }
            _printk(0x8000ab4,"gf_probe");
            uVar13 = 0xfffffff4;
        }
        else {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            mutex_unlock(obj.device_list_lock);
code_r0x08003298:
            puVar5 = _segment.ehdr + 2;
            puVar10 = devm_regulator_get(puVar5,"l11c_vdd");
            if (puVar10 < 0xfffffffffffff001) {
                _dev_err(puVar5,"fp %s: of vreg successful found\n","enable_regulator_3V0");
                uVar8 = regulator_set_load(puVar10,200000);
                uVar13 = uVar8;
                puVar5 = _segment.ehdr;
                if (uVar8 == 0) {
                    puVar11 = regulator_enable(puVar10);
                    iVar7 = puVar11;
                    puVar6 = puVar10;
                    puVar5 = _segment.ehdr;
                    puVar10 = puVar11;
                    goto joined_r0x080033d8;
                }
            }
            else {
                _dev_err(puVar5,"fp %s: no of vreg found\n","enable_regulator_3V0");
                iVar7 = puVar10;
                puVar6 = _segment.ehdr;
                puVar5 = _segment.ehdr;
joined_r0x080033d8:
                _segment.ehdr = puVar6;
                uVar13 = puVar10 & 0xffffffff;
                if (iVar7 == 0) {
                    *0x80002b0 = sym.gf_irq_num(0x8000268);
                    _segment.ehdr = wakeup_source_register(*0x8000280 + 0x10,"fp_wakelock");
                    if (_segment.ehdr != NULL) {
                        _printk(0x80010c2,1,2,1);
                        return 0;
                    }
                    _printk(0x8000d3d);
                    uVar13 = 0;
                    puVar5 = _segment.ehdr;
                }
            }
            _segment.ehdr = puVar5;
            devm_regulator_put(_segment.ehdr);
            input_unregister_device(_segment.ehdr);
            if (_segment.ehdr != NULL) {
code_r0x080033f8:
                input_free_device();
            }
        }
code_r0x080033fc:
        if (_segment.ehdr == 0) goto code_r0x080031d8;
        _printk(0x8000cfd,uVar13);
        mutex_lock(obj.device_list_lock);
        uVar12 = __list_del_entry_valid(0x8000270);
        if ((uVar12 & 1) != 0) {
            *(*0x8000270 + 8) = *0x8000278;
            **0x8000278 = *0x8000270;
        }
        *0x8000270 = 0xdead000000000100;
        *0x8000278 = 0xdead000000000122;
        device_destroy(_segment.ehdr,_obj.gf);
        uVar12 = _obj.gf;
        pcVar1 = obj.minors + ((uVar12 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        _dev_printk(0x8001161,_segment.ehdr + 2,"no minor number available!\n");
        uVar13 = 0xffffffed;
    }
    mutex_unlock(obj.device_list_lock);
code_r0x080031d8:
    sym.gf_cleanup(0x8000268);
    *0x80002d8 = *0x80002d8 & 0xff00;
    return uVar13;
}


// ===== sym.gf_ioctl @ 0x080021b0 (size 1440) =====

void sym.gf_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_50;
    uchar uStack_48;
    uint32_t uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uVar6 = arg2;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0x19;
    uStack_50 = 0;
    uVar7 = arg3;
    if ((uVar6 & 0xff00) != 0x6700) {
        uVar4 = 0xffffffffffffffed;
        goto code_r0x08002528;
    }
    uVar10 = arg2 & 0xffffffff;
    if (uVar6 < 0) {
        puVar1 = sp_el0;
        uVar8 = uVar6 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar9 = arg3 & (arg3 << 8) >> 8;
        }
        bVar2 = CARRY8(uVar9,uVar8);
        uVar9 = uVar9 + uVar8;
        uVar8 = 0;
        if (!bVar2 || uVar9 == 0) {
            uVar8 = 0x7fffffffff;
        }
        if (bVar2) {
            uVar9 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar9,~uVar8) && !CARRY8(uVar9 + ~uVar8,bVar2) || uVar9 == uVar8 + !bVar2) goto code_r0x08002298;
code_r0x0800236c:
        uVar4 = 0xfffffffffffffff2;
        uVar7 = arg3;
        goto code_r0x08002528;
    }
    if ((uVar6 >> 0x1e & 1) != 0) {
        puVar1 = sp_el0;
        uVar8 = uVar6 >> 0x10 & 0x3fff;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar9 = arg3, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar9 = arg3 & (arg3 << 8) >> 8;
        }
        bVar2 = CARRY8(uVar9,uVar8);
        uVar9 = uVar9 + uVar8;
        uVar8 = 0;
        if (!bVar2 || uVar9 == 0) {
            uVar8 = 0x7fffffffff;
        }
        if (bVar2) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar8) || CARRY8(uVar9 + ~uVar8,bVar2)) && uVar9 != uVar8 + !bVar2) goto code_r0x0800236c;
    }
code_r0x08002298:
    if (*0x80002d8 == '\0') {
        if (1 < uVar6 - 0x6707) {
            _printk(0x8000dce,uVar6 & 0xff);
            uVar4 = 0xffffffffffffffed;
            uVar7 = arg3;
            goto code_r0x08002528;
        }
        _printk(0x8000f0b);
    }
    uVar4 = 0;
    if (0x40046704 < uVar6) {
        if (uVar6 < 0x4004670e) {
            if (uVar6 == 0x40046705) goto code_r0x08002528;
code_r0x080023dc:
            uVar4 = 0x800110c;
code_r0x080023e8:
            _printk(uVar4,uVar10);
        }
        else if (uVar6 == 0x4004670e) {
            _printk(0x80008ad,"gf_ioctl");
            uVar7 = 4;
            iVar5 = sym._copy_from_user(&stack0xffffffffffffffbc,arg3,4);
            if (iVar5 != 0) {
                uVar4 = 0x8000b59;
code_r0x080025fc:
                _printk(uVar4);
                uVar4 = 0xfffffffffffffff2;
                goto code_r0x08002528;
            }
            sym.nav_event_input(uStack_44);
        }
        else {
            if (uVar6 != 0x40086709) {
                if (uVar6 != 0x4008670d) goto code_r0x080023dc;
                _printk(0x8000f52,"gf_ioctl");
                uVar7 = 8;
                iVar5 = sym._copy_from_user(&stack0xffffffffffffffb0,arg3,8);
                arg3 = uVar7;
                if (iVar5 != 0) goto code_r0x0800236c;
                _printk(0x8000e6a,uStack_50 & 0xff);
                _printk(0x8000bb0,uStack_50._1_1_);
                uVar10 = uStack_50 >> 0x10 & 0xff;
                uVar4 = 0x8000a14;
                goto code_r0x080023e8;
            }
            uVar7 = 8;
            iVar5 = sym._copy_from_user(&stack0xffffffffffffffc0,arg3,8);
            if (iVar5 != 0) {
                uVar4 = 0x8000983;
                goto code_r0x080025fc;
            }
            if (uStack_40 == 1) {
                uVar6 = 0x66;
            }
            else if (uStack_40 == 5) {
                uVar6 = 0xd4;
            }
            else {
                uVar6 = uStack_40;
                if (uStack_40 == 2) {
                    uVar6 = 0x74;
                }
            }
            uVar7 = uVar6;
            _printk(0x800078a,"gf_kernel_key_input",uVar7,uStack_40 & 0xffffffff,uStack_40._4_4_);
            if ((uStack_40 == 5) || (uStack_40 == 2)) {
                if (uStack_40._4_4_ != 1) goto code_r0x08002520;
                input_event(_segment.ehdr,1,uVar6,1);
                input_event(_segment.ehdr,0,0,0);
                input_event(_segment.ehdr,1,uVar6,0);
                uVar7 = 0;
                input_event(_segment.ehdr,0,0,0);
            }
            if (uStack_40 == 1) {
                input_event(_segment.ehdr,1,uVar6,uStack_40._4_4_ != 0);
                uVar7 = 0;
                input_event(_segment.ehdr,0,0,0);
            }
        }
        goto code_r0x08002520;
    }
    if (0xb < uVar6 - 0x6701) {
        if (uVar6 == 0x80016700) {
            _printk(0x8000612,"gf_ioctl");
            iVar5 = sym._copy_to_user(arg3);
            uVar4 = 0;
            if (iVar5 != 0) {
                uVar4 = 0xfffffffffffffff2;
            }
            goto code_r0x08002528;
        }
        if (uVar6 != 0x8001670b) goto code_r0x080023dc;
        uVar4 = 0x800068c;
        goto code_r0x08002514;
    }
    //switch table (12 cases) at 0x8000588
    switch(*((uVar6 - 0x6701) * 4 + 0x8000588) + 0x80022d0) {
    case 0x80022e4:
        uVar4 = 0x80009d0;
        goto code_r0x08002514;
    case 0x80023dc:
        goto code_r0x080023dc;
    case 0x80023f4:
        _printk(0x8000b39,"gf_ioctl");
        sym.gf_hw_reset(0x8000268,3);
        uVar4 = 0;
        if (*0x8000310 == 0) goto code_r0x08002528;
        if ((_segment.ehdr != 0) && (iVar3 = pinctrl_select_state(), iVar3 < 0)) {
            _printk(0x8000630);
        }
        break;
    case 0x800244c:
        _printk(0x80005c7,"gf_ioctl");
        sym.gf_enable_irq();
        break;
    case 0x800246c:
        _printk(0x8000765,"gf_ioctl");
        sym.gf_disable_irq(0x8000268);
        break;
    case 0x8002494:
        _printk(0x80009ee,"gf_ioctl");
        if (*0x80002d8 == '\x01') {
            _printk(0x8000f24);
        }
        else {
            msleep(10);
        }
        uVar4 = 0;
        *0x80002d8 = '\x01';
        goto code_r0x08002528;
    case 0x80024d0:
        _printk(0x80008d0,"gf_ioctl");
        if (*0x80002d8 == '\0') {
            _printk(0x8000c86);
        }
        uVar4 = 0;
        *0x80002d8 = '\0';
        goto code_r0x08002528;
    case 0x80024fc:
        uVar4 = 0x800084b;
        goto code_r0x08002514;
    case 0x800250c:
        uVar4 = 0x80006b1;
code_r0x08002514:
        _printk(uVar4,"gf_ioctl");
        break;
    case 0x8002528:
        goto code_r0x08002528;
    }
code_r0x08002520:
    uVar4 = 0;
code_r0x08002528:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar11 = __stack_chk_fail(uVar4);
        *extraout_x18 = sym.gf_compat_ioctl;
        sym.gf_ioctl(auVar11._0_8_,auVar11._8_8_,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.gf_compat_ioctl @ 0x08002750 (size 40) =====

void sym.gf_compat_ioctl(int64_t arg2,int64_t arg1,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.gf_ioctl(arg2,arg1,arg3 & 0xffffffff);
    return;
}


// ===== sym.gf_open @ 0x08002778 (size 516) =====

int sym.gf_open(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *arg1_00;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = mutex_lock_interruptible(obj.device_list_lock);
    if (iVar1 == 0) {
        for (pcVar3 = _obj.device_list; pcVar3 != obj.device_list; pcVar3 = *pcVar3) {
            arg1_00 = pcVar3 + -8;
            if (*arg1_00 == *(arg1 + 0x4c)) {
                _printk(0x8000c42);
                iVar1 = gpio_request(*(pcVar3 + 0x38),"gpio-reset");
                if (iVar1 == 0) {
                    _dev_err(*(pcVar3 + 0x10) + 0x10,"requestd RESET GPIO = %d\n",*(pcVar3 + 0x38));
                    uVar2 = gpio_to_desc(*(pcVar3 + 0x38));
                    gpiod_direction_output_raw(uVar2,0);
                    iVar1 = gpio_request(*(pcVar3 + 0x34),"gpio-irq");
                    if (iVar1 == 0) {
                        gpio_to_desc(*(pcVar3 + 0x34));
                        gpiod_direction_input();
                        iVar1 = request_threaded_irq
                                          (*(pcVar3 + 0x40),0,sym.gf_irq.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt,
                                           0x2001,0x8000cfa,arg1_00);
                        if (iVar1 == 0) {
                            irq_set_irq_wake(*(pcVar3 + 0x40),1);
                            *(pcVar3 + 0x44) = 1;
                            sym.gf_disable_irq(arg1_00);
                            *(pcVar3 + 0x30) = *(pcVar3 + 0x30) + 1;
                            *(arg2 + 0xd8) = arg1_00;
                            nonseekable_open(arg1,arg2);
                            _printk(0x8000e15,*(pcVar3 + 0x40));
                            iVar1 = 0;
                            goto code_r0x08002818;
                        }
                        mutex_unlock(obj.device_list_lock);
                        gpio_free(*(pcVar3 + 0x34));
                    }
                    else {
                        _dev_err(*(pcVar3 + 0x10) + 0x10,"Failed to request IRQ GPIO %d . rc = %d\n",*(pcVar3 + 0x34)
                                 ,iVar1);
                        mutex_unlock(obj.device_list_lock);
                    }
                    gpio_free(*(pcVar3 + 0x38));
                }
                else {
                    _dev_err(*(pcVar3 + 0x10) + 0x10,"Failed to request RESET GPIO. rc = %d\n",iVar1);
                    mutex_unlock(obj.device_list_lock);
                }
                return -1;
            }
        }
        _printk(0x8000fcb,*(arg1 + 0x4c) & 0xfffff);
        iVar1 = -6;
code_r0x08002818:
        mutex_unlock(obj.device_list_lock);
    }
    return iVar1;
}


// ===== sym.gf_release @ 0x0800297c (size 272) =====

int sym.gf_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800114f,"gf_release");
    uVar3 = mutex_is_locked(obj.device_list_lock);
    if ((uVar3 & 1) != 0) {
        _printk(0x80010a9,"gf_release");
        mutex_unlock(obj.device_list_lock);
    }
    iVar2 = mutex_lock_interruptible(obj.device_list_lock);
    if (iVar2 == 0) {
        iVar4 = *(arg1 + 0xd8);
        *(arg1 + 0xd8) = 0;
        iVar1 = *(iVar4 + 0x38) + -1;
        *(iVar4 + 0x38) = iVar1;
        if (iVar1 == 0) {
            _printk(0x8000a90,*(iVar4 + 0x48));
            if (*(iVar4 + 0x4c) == 0) {
                _printk(0x8000bcb);
            }
            else {
                *(iVar4 + 0x4c) = 0;
                disable_irq(*(iVar4 + 0x48));
            }
            *(iVar4 + 0x70) = 0;
            free_irq(*(iVar4 + 0x48),iVar4);
            gpio_free(*(iVar4 + 0x3c));
            gpio_free(*(iVar4 + 0x40));
        }
        mutex_unlock(obj.device_list_lock);
    }
    return iVar2;
}


// ===== sym.gf_disable_irq @ 0x08002a8c (size 72) =====

void sym.gf_disable_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x4c) == 0) {
        _printk(0x8000bcb);
    }
    else {
        *(arg1 + 0x4c) = 0;
        disable_irq(*(arg1 + 0x48));
    }
    return;
}


// ===== sym.gf_enable_irq @ 0x08002ad4 (size 92) =====

void sym.gf_enable_irq(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        enable_irq(*0x80002b0);
        *0x80002b4 = 1;
    }
    else {
        _printk(0x8000b14);
    }
    return;
}


// ===== sym.nav_event_input @ 0x08002b30 (size 488) =====

void sym.nav_event_input(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 - 1;
    if (9 < uVar1) {
        _printk(0x80006f1,"nav_event_input",arg1 & 0xffffffff);
        uVar3 = 0;
        goto code_r0x08002cb0;
    }
    //switch table (10 cases) at 0x80005b8
    switch(*(uVar1 + 0x80005b8) * 4 + 0x8002b68) {
    case 0x8002b6c:
        uVar2 = 0x80006d1;
        goto code_r0x08002ba4;
    case 0x8002b9c:
        uVar2 = 0x800065a;
code_r0x08002ba4:
        _printk(uVar2,"nav_event_input");
        return;
    case 0x8002bb8:
        _printk(0x8000832,"nav_event_input");
        uVar3 = 0x67;
        break;
    case 0x8002bd8:
        _printk(0x8000b95,"nav_event_input");
        uVar3 = 0x6c;
        break;
    case 0x8002bf8:
        _printk(0x8000f95,"nav_event_input");
        uVar3 = 0x69;
        break;
    case 0x8002c18:
        _printk(0x8000a74,"nav_event_input");
        uVar3 = 0x6a;
        break;
    case 0x8002c38:
        _printk(0x8000cb5,"nav_event_input");
        uVar3 = 0x72;
        break;
    case 0x8002c58:
        _printk(0x8000db2,"nav_event_input");
        uVar3 = 0xd8;
        break;
    case 0x8002c78:
        _printk(0x80007e5,"nav_event_input");
        uVar3 = 0x73;
        break;
    case 0x8002c98:
        _printk(0x800112e,"nav_event_input");
        uVar3 = 0xd9;
    }
code_r0x08002cb0:
    input_event(_segment.ehdr,1,uVar3,1);
    input_event(_segment.ehdr,0,0,0);
    input_event(_segment.ehdr,1,uVar3,0);
    input_event(_segment.ehdr,0,0,0);
    return;
}


// ===== sym._copy_to_user @ 0x08002d18 (size 320) =====

ulong sym._copy_to_user(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    uVar5 = 1;
    bVar4 = 0xfffffffffffffffe < uVar6;
    uVar6 = uVar6 + 1;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
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
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        uVar5 = __arch_copy_to_user(arg1,in_x1,1);
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
    return uVar5;
}


// ===== sym._copy_from_user @ 0x08002e94 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = sp_el0;
    uVar1 = (arg2 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar1;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar2 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar2 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar2) && !CARRY8(uVar6 + ~uVar2,bVar4) || uVar6 == uVar2 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar1 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        return iVar5;
    }
    if (arg3 != 0) {
        memset(arg1,0,arg3);
    }
    return arg3;
}


// ===== sym.gf_irq @ 0x08003048 (size 304) =====

uint64_t sym.gf_irq(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *puVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 1;
    _printk(0x8001039,"gf_irq");
    if (_segment.ehdr != NULL) {
        pm_wakeup_ws_event(_segment.ehdr,2000,0);
    }
    sym.sendnlmsg(&uStack_2c);
    if (((*0x80002da == '\x01') && (*0x80002d8 == '\x01')) && (*0x80002d9 == '\x01')) {
        input_event(CONCAT44(*0x800029c,*0x8000298),1,0x6a,1);
        input_event(CONCAT44(*0x800029c,*0x8000298),0,0,0);
        input_event(CONCAT44(*0x800029c,*0x8000298),1,0x6a,0);
        input_event(CONCAT44(*0x800029c,*0x8000298),0,0,0);
        *0x80002da = '\0';
        queue_work_on(0x20,_msleep,0x80002e0);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return 1;
    }
    *0x8000280 = __stack_chk_fail();
    *extraout_x18 = sym.gf_probe;
    uVar13 = 0xffffffea;
    *0x8000270 = 0x8000270;
    *0x8000278 = 0x8000270;
    *0x80002a4 = 0xffffffeaffffffea;
    *0x80002ac = 0xffffffea;
    *0x80002d8 = 0;
    *0x80002da = 0;
    iVar7 = sym.gf_parse_dts(0x8000268);
    if (iVar7 != 0) goto code_r0x080031d8;
    mutex_lock(obj.device_list_lock);
    uVar13 = ~(_segment.ehdr | 0xffffffff00000000);
    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = 0x20;
    if ((_segment.ehdr | 0xffffffff00000000) != 0xffffffffffffffff) {
        uVar13 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    }
    if (uVar13 < 0x20) {
        _obj.gf = uVar13 | _segment.ehdr << 0x14;
        uVar9 = device_create(_segment.ehdr,*0x8000280 + 0x10,_obj.gf,obj.gf,"goodix_fp");
        uVar12 = _obj.device_list;
        if ((uVar9 < 0xfffffffffffff001) || (uVar9 == 0)) {
            Hint_Prefetch(0x8000328,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8000328,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.minors = _obj.minors | 1L << (uVar13 & 0x3f);
                }
            } while (cVar2 != '\0');
            uVar13 = __list_add_valid(0x8000270,obj.device_list,_obj.device_list);
            if ((uVar13 & 1) != 0) {
                *(uVar12 + 8) = 0x8000270;
                *0x8000270 = uVar12;
                *0x8000278 = obj.device_list;
                _obj.device_list = 0x8000270;
            }
            mutex_unlock(obj.device_list_lock);
            _segment.ehdr = input_allocate_device();
            if (_segment.ehdr != NULL) {
                input_set_capability(_segment.ehdr,_obj.SPIDEV_MAJOR,_obj.gf_init.__key);
                input_set_capability(_segment.ehdr,_obj.gf_class,*0x8000264);
                input_set_capability(_segment.ehdr,_obj.gf,*0x800026c);
                input_set_capability(_segment.ehdr,*0x8000270 & 0xffffffff,*0x8000274);
                input_set_capability(_segment.ehdr,*0x8000278 & 0xffffffff,*0x800027c);
                input_set_capability(_segment.ehdr,*0x8000280 & 0xffffffff,*0x8000284);
                input_set_capability(_segment.ehdr,*0x8000288,*0x800028c);
                input_set_capability(_segment.ehdr,*0x8000290,*0x8000294);
                input_set_capability(_segment.ehdr,*0x8000298,*0x800029c);
                input_set_capability(_segment.ehdr,*0x80002a0,*0x80002a4 & 0xffffffff);
                input_set_capability(_segment.ehdr,*0x80002a8,*0x80002ac);
                input_set_capability(_segment.ehdr,*0x80002b0,*0x80002b4);
                input_set_capability(_segment.ehdr,*0x80002b8,*0x80002bc);
                *_segment.ehdr = "uinput-goodix";
                uVar8 = input_register_device(_segment.ehdr);
                if (uVar8 == 0) goto code_r0x08003298;
                uVar13 = uVar8;
                _printk(0x8000fff);
                if (_segment.ehdr == NULL) goto code_r0x080033fc;
                goto code_r0x080033f8;
            }
            _printk(0x8000ab4,"gf_probe");
            uVar13 = 0xfffffff4;
        }
        else {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            mutex_unlock(obj.device_list_lock);
code_r0x08003298:
            puVar5 = _segment.ehdr + 2;
            puVar10 = devm_regulator_get(puVar5,"l11c_vdd");
            if (puVar10 < 0xfffffffffffff001) {
                _dev_err(puVar5,"fp %s: of vreg successful found\n","enable_regulator_3V0");
                uVar8 = regulator_set_load(puVar10,200000);
                uVar13 = uVar8;
                puVar5 = _segment.ehdr;
                if (uVar8 == 0) {
                    puVar11 = regulator_enable(puVar10);
                    iVar7 = puVar11;
                    puVar6 = puVar10;
                    puVar5 = _segment.ehdr;
                    puVar10 = puVar11;
                    goto joined_r0x080033d8;
                }
            }
            else {
                _dev_err(puVar5,"fp %s: no of vreg found\n","enable_regulator_3V0");
                iVar7 = puVar10;
                puVar6 = _segment.ehdr;
                puVar5 = _segment.ehdr;
joined_r0x080033d8:
                _segment.ehdr = puVar6;
                uVar13 = puVar10 & 0xffffffff;
                if (iVar7 == 0) {
                    *0x80002b0 = sym.gf_irq_num(0x8000268);
                    _segment.ehdr = wakeup_source_register(*0x8000280 + 0x10,"fp_wakelock");
                    if (_segment.ehdr != NULL) {
                        _printk(0x80010c2,1,2,1);
                        return 0;
                    }
                    _printk(0x8000d3d);
                    uVar13 = 0;
                    puVar5 = _segment.ehdr;
                }
            }
            _segment.ehdr = puVar5;
            devm_regulator_put(_segment.ehdr);
            input_unregister_device(_segment.ehdr);
            if (_segment.ehdr != NULL) {
code_r0x080033f8:
                input_free_device();
            }
        }
code_r0x080033fc:
        if (_segment.ehdr == 0) goto code_r0x080031d8;
        _printk(0x8000cfd,uVar13);
        mutex_lock(obj.device_list_lock);
        uVar12 = __list_del_entry_valid(0x8000270);
        if ((uVar12 & 1) != 0) {
            *(*0x8000270 + 8) = *0x8000278;
            **0x8000278 = *0x8000270;
        }
        *0x8000270 = 0xdead000000000100;
        *0x8000278 = 0xdead000000000122;
        device_destroy(_segment.ehdr,_obj.gf);
        uVar12 = _obj.gf;
        pcVar1 = obj.minors + ((uVar12 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        _dev_printk(0x8001161,_segment.ehdr + 2,"no minor number available!\n");
        uVar13 = 0xffffffed;
    }
    mutex_unlock(obj.device_list_lock);
code_r0x080031d8:
    sym.gf_cleanup(0x8000268);
    *0x80002d8 = *0x80002d8 & 0xff00;
    return uVar13;
}


// ===== sym.gf_probe @ 0x08003178 (size 1192) =====

uint64_t sym.gf_probe(int64_t arg1)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    ulong *puVar4;
    ulong *puVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = 0xffffffea;
    *0x8000270 = 0x8000270;
    *0x8000278 = 0x8000270;
    *0x80002a4 = 0xffffffeaffffffea;
    *0x80002ac = 0xffffffea;
    *0x80002d8 = 0;
    *0x80002da = 0;
    *0x8000280 = arg1;
    iVar6 = sym.gf_parse_dts(0x8000268);
    if (iVar6 != 0) goto code_r0x080031d8;
    mutex_lock(obj.device_list_lock);
    uVar12 = ~(_segment.ehdr | 0xffffffff00000000);
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = 0x20;
    if ((_segment.ehdr | 0xffffffff00000000) != 0xffffffffffffffff) {
        uVar12 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
    }
    if (uVar12 < 0x20) {
        _obj.gf = uVar12 | _segment.ehdr << 0x14;
        uVar8 = device_create(_segment.ehdr,*0x8000280 + 0x10,_obj.gf,obj.gf,"goodix_fp");
        uVar11 = _obj.device_list;
        if ((uVar8 < 0xfffffffffffff001) || (uVar8 == 0)) {
            Hint_Prefetch(0x8000328,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x8000328,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.minors = _obj.minors | 1L << (uVar12 & 0x3f);
                }
            } while (cVar2 != '\0');
            uVar12 = __list_add_valid(0x8000270,obj.device_list,_obj.device_list);
            if ((uVar12 & 1) != 0) {
                *(uVar11 + 8) = 0x8000270;
                *0x8000270 = uVar11;
                *0x8000278 = obj.device_list;
                _obj.device_list = 0x8000270;
            }
            mutex_unlock(obj.device_list_lock);
            _segment.ehdr = input_allocate_device();
            if (_segment.ehdr != NULL) {
                input_set_capability(_segment.ehdr,_obj.SPIDEV_MAJOR,_obj.gf_init.__key);
                input_set_capability(_segment.ehdr,_obj.gf_class,*0x8000264);
                input_set_capability(_segment.ehdr,_obj.gf,*0x800026c);
                input_set_capability(_segment.ehdr,*0x8000270 & 0xffffffff,*0x8000274);
                input_set_capability(_segment.ehdr,*0x8000278 & 0xffffffff,*0x800027c);
                input_set_capability(_segment.ehdr,*0x8000280 & 0xffffffff,*0x8000284);
                input_set_capability(_segment.ehdr,*0x8000288,*0x800028c);
                input_set_capability(_segment.ehdr,*0x8000290,*0x8000294);
                input_set_capability(_segment.ehdr,*0x8000298,*0x800029c);
                input_set_capability(_segment.ehdr,*0x80002a0,*0x80002a4 & 0xffffffff);
                input_set_capability(_segment.ehdr,*0x80002a8,*0x80002ac);
                input_set_capability(_segment.ehdr,*0x80002b0,*0x80002b4);
                input_set_capability(_segment.ehdr,*0x80002b8,*0x80002bc);
                *_segment.ehdr = "uinput-goodix";
                uVar7 = input_register_device(_segment.ehdr);
                if (uVar7 == 0) goto code_r0x08003298;
                uVar12 = uVar7;
                _printk(0x8000fff);
                if (_segment.ehdr == NULL) goto code_r0x080033fc;
                goto code_r0x080033f8;
            }
            _printk(0x8000ab4,"gf_probe");
            uVar12 = 0xfffffff4;
        }
        else {
            _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            mutex_unlock(obj.device_list_lock);
code_r0x08003298:
            puVar4 = _segment.ehdr + 2;
            puVar9 = devm_regulator_get(puVar4,"l11c_vdd");
            if (puVar9 < 0xfffffffffffff001) {
                _dev_err(puVar4,"fp %s: of vreg successful found\n","enable_regulator_3V0");
                uVar7 = regulator_set_load(puVar9,200000);
                uVar12 = uVar7;
                puVar4 = _segment.ehdr;
                if (uVar7 == 0) {
                    puVar10 = regulator_enable(puVar9);
                    iVar6 = puVar10;
                    puVar5 = puVar9;
                    puVar4 = _segment.ehdr;
                    puVar9 = puVar10;
                    goto joined_r0x080033d8;
                }
            }
            else {
                _dev_err(puVar4,"fp %s: no of vreg found\n","enable_regulator_3V0");
                iVar6 = puVar9;
                puVar5 = _segment.ehdr;
                puVar4 = _segment.ehdr;
joined_r0x080033d8:
                _segment.ehdr = puVar5;
                uVar12 = puVar9 & 0xffffffff;
                if (iVar6 == 0) {
                    *0x80002b0 = sym.gf_irq_num(0x8000268);
                    _segment.ehdr = wakeup_source_register(*0x8000280 + 0x10,"fp_wakelock");
                    if (_segment.ehdr != NULL) {
                        _printk(0x80010c2,1,2,1);
                        return 0;
                    }
                    _printk(0x8000d3d);
                    uVar12 = 0;
                    puVar4 = _segment.ehdr;
                }
            }
            _segment.ehdr = puVar4;
            devm_regulator_put(_segment.ehdr);
            input_unregister_device(_segment.ehdr);
            if (_segment.ehdr != NULL) {
code_r0x080033f8:
                input_free_device();
            }
        }
code_r0x080033fc:
        if (_segment.ehdr == 0) goto code_r0x080031d8;
        _printk(0x8000cfd,uVar12);
        mutex_lock(obj.device_list_lock);
        uVar11 = __list_del_entry_valid(0x8000270);
        if ((uVar11 & 1) != 0) {
            *(*0x8000270 + 8) = *0x8000278;
            **0x8000278 = *0x8000270;
        }
        *0x8000270 = 0xdead000000000100;
        *0x8000278 = 0xdead000000000122;
        device_destroy(_segment.ehdr,_obj.gf);
        uVar11 = _obj.gf;
        pcVar1 = obj.minors + ((uVar11 & 0xfffc0) >> 3);
        Hint_Prefetch(pcVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
                *pcVar1 = *pcVar1 & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
    }
    else {
        _dev_printk(0x8001161,_segment.ehdr + 2,"no minor number available!\n");
        uVar12 = 0xffffffed;
    }
    mutex_unlock(obj.device_list_lock);
code_r0x080031d8:
    sym.gf_cleanup(0x8000268);
    *0x80002d8 = *0x80002d8 & 0xff00;
    return uVar12;
}


// ===== sym.gf_remove @ 0x08003620 (size 320) =====

//WARNING: Removing unreachable block (ram,0x0800365c)
//WARNING: Removing unreachable block (ram,0x08003674)

ulong sym.gf_remove(void)

{
    code *pcVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    devm_regulator_put(_segment.ehdr);
    wakeup_source_unregister(_segment.ehdr);
    _segment.ehdr = 0;
    input_free_device(0);
    mutex_lock(obj.device_list_lock);
    uVar4 = __list_del_entry_valid(0x8000270);
    if ((uVar4 & 1) != 0) {
        *(*0x8000270 + 8) = *0x8000278;
        **0x8000278 = *0x8000270;
    }
    *0x8000270 = 0xdead000000000100;
    *0x8000278 = 0xdead000000000122;
    device_destroy(_segment.ehdr,_obj.gf);
    uVar4 = _obj.gf;
    pcVar1 = obj.minors + ((uVar4 & 0xfffc0) >> 3);
    Hint_Prefetch(pcVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar3) {
            *pcVar1 = *pcVar1 & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (_segment.ehdr == 0) {
        sym.gf_cleanup(0x8000268);
    }
    mutex_unlock(obj.device_list_lock);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003760 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080037a4

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
    //switch table (4 cases) at 0x80005c2
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80037b8);
    (*pcVar1)();
}


// ===== sym.gf_parse_dts @ 0x080037b8 (size 320) =====

ulong sym.gf_parse_dts(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = of_get_named_gpio_flags(*(*(arg1 + 0x18) + 0x300),"goodix,gpio-reset",0,0);
    *(arg1 + 0x40) = uVar1;
    if (uVar1 < 0x200) {
        _printk(0x8000bf1,uVar1);
        uVar2 = of_get_named_gpio_flags(*(*(arg1 + 0x18) + 0x300),"goodix,gpio-irq",0,0);
        *(arg1 + 0x3c) = uVar2;
        _printk(0x8000d1d,uVar2);
        if (*(arg1 + 0x3c) < 0x200) {
            uVar3 = devm_pinctrl_get(*(arg1 + 0x18) + 0x10);
            puVar5 = arg1 + 0xa8;
            *puVar5 = uVar3;
            if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
                _printk(0x8000875);
            }
            else {
                uVar3 = pinctrl_lookup_state(uVar3,"fingerprint_goodix_default");
                *(arg1 + 0xb0) = uVar3;
                if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
                    _printk(0x8000740);
                    return 0;
                }
                _printk(0x8000940);
                if (*puVar5 != 0) {
                    devm_pinctrl_put();
                }
            }
            *puVar5 = 0;
            *(arg1 + 0xb0) = 0;
            return 0;
        }
        uVar4 = 0x8000a4f;
    }
    else {
        uVar4 = 0x80010e5;
    }
    _printk(uVar4);
    return 0xffffffff;
}


// ===== sym.gf_cleanup @ 0x080038f8 (size 128) =====

void sym.gf_cleanup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000926,"gf_cleanup");
    if (*(arg1 + 0x3c) < 0x200) {
        gpio_free();
        _printk(0x80008fe);
    }
    if (*(arg1 + 0x40) < 0x200) {
        gpio_free();
        _printk(0x8000808);
    }
    return;
}


// ===== sym.gf_power_on @ 0x08003978 (size 44) =====

ulong sym.gf_power_on(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    msleep(10);
    return 0;
}


// ===== sym.gf_power_off @ 0x080039a4 (size 16) =====

ulong sym.gf_power_off(int64_t arg1)

{
    return 0;
}


// ===== sym.gf_hw_reset @ 0x080039b4 (size 168) =====

ulong sym.gf_hw_reset(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000ae7);
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = gpio_to_desc(*(arg1 + 0x40));
        gpiod_direction_output_raw(uVar1,0);
        __const_udelay(0xc49c08);
        uVar1 = gpio_to_desc(*(arg1 + 0x40));
        gpiod_set_raw_value(uVar1,1);
        if (arg2 != 0) {
            uVar2 = arg2 & 0xffffffff;
            do {
                uVar2 = uVar2 - 1;
                __const_udelay(0x418958);
            } while (uVar2 != 0);
        }
        _printk(0x8000c23,"gf_hw_reset");
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.gf_irq_num @ 0x08003a5c (size 68) =====

ulong sym.gf_irq_num(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000ae7);
        uVar1 = 0xffffffff;
    }
    else {
        gpio_to_desc(*(arg1 + 0x3c));
        uVar1 = gpiod_to_irq();
    }
    return uVar1;
}


// ===== sym.sendnlmsg @ 0x08003aa0 (size 280) =====

void sym.sendnlmsg(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (CONCAT44(*0x8000004,_segment.ehdr) != 0 && _segment.ehdr != 0)) {
        iVar2 = __alloc_skb(0x30,0xcc0,0,0xffffffff);
        if (iVar2 == 0) {
            _printk(0x8000e57);
        }
        else {
            iVar1 = strlen(arg1);
            if ((*(iVar2 + 0x74) == 0) && (0x2f < *(iVar2 + 0xcc) - *(iVar2 + 200))) {
                iVar3 = __nlmsg_put(iVar2,0,0,0,0x20,0);
            }
            else {
                iVar3 = 0;
            }
            *(iVar2 + 0x34) = 0;
            *(arg1 + iVar1) = 0;
            memcpy(iVar3 + 0x10,arg1,iVar1 + 1);
            iVar1 = netlink_unicast(CONCAT44(*0x8000004,_segment.ehdr),iVar2,_segment.ehdr,0x40);
            if (iVar1 == 0) {
                _printk(0x8001051,0);
            }
        }
    }
    return;
}


// ===== sym.nl_data_ready @ 0x08003bb8 (size 172) =====

void sym.nl_data_ready(int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = arg1 + 0xe4;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar5 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08003bf4;
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
code_r0x08003bf4:
    if (0xf < *(arg1 + 0x70)) {
        _segment.ehdr = *(*(arg1 + 0xd8) + 0xc);
        kfree_skb(arg1);
    }
    return;
}


// ===== sym.netlink_init @ 0x08003c64 (size 160) =====

void sym.netlink_init(void)

{
    bool bVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    code *pcStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    pcStack_40 = sym.nl_data_ready.cfi_jt;
    _segment.ehdr = __netlink_kernel_create(init_net,0x19,obj.__this_module,&uStack_48);
    bVar1 = _segment.ehdr == 0;
    if (bVar1) {
        _printk(0x80007c6);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_18) {
        __stack_chk_fail(bVar1);
        *extraout_x18 = sym.netlink_exit;
        if (_segment.ehdr != 0) {
            netlink_kernel_release();
            _segment.ehdr = 0;
        }
        _printk(0x800096d);
        return;
    }
    return;
}


// ===== sym.netlink_exit @ 0x08003d04 (size 72) =====

void sym.netlink_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        netlink_kernel_release();
        _segment.ehdr = 0;
    }
    _printk(0x800096d);
    return;
}


// ===== sym.init_module @ 0x08003d54 (size 300) =====

uint64_t sym.init_module(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = __register_chrdev(_segment.ehdr & 0xffffffff,0,0x100,"goodix_fp_spi",obj.gf_fops);
    uVar3 = uVar2 & 0xffffffff;
    if (uVar2 < 0) {
        _printk(0x8000d79);
    }
    else {
        _segment.ehdr = CONCAT44(*0x8000004,uVar2);
        _segment.ehdr = __class_create(obj.__this_module,"goodix_fp",obj.gf_init.__key);
        if (_segment.ehdr < 0xfffffffffffff001) {
            iVar1 = __platform_driver_register
                              (reloc.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt,obj.__this_module);
            if (iVar1 < 0) {
                class_destroy(_segment.ehdr);
                __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,_segment.ehdr);
                _printk(0x8000eb9);
            }
            sym.netlink_init();
            _printk(0x8000ee7,iVar1);
            uVar3 = 0;
        }
        else {
            __unregister_chrdev(_segment.ehdr & 0xffffffff,0,0x100,_segment.ehdr);
            _printk(0x80005eb);
            uVar3 = _segment.ehdr & 0xffffffff;
        }
    }
    return uVar3;
}


// ===== sym.cleanup_module @ 0x08003e80 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.netlink_exit();
    platform_driver_unregister(reloc.gf_probe.9422672c6e2f3b23ed01cf5c89af1619.cfi_jt);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,*0x80002e8);
    return;
}

