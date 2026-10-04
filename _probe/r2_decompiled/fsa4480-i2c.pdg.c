// decompiled from fsa4480-i2c by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 404) =====

//WARNING: Switch with 1 destination removed at 0x08002074

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3c93864c2bf5bf31) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x550b9e52359ac614) {
                if ((arg1 == -0x342aed347fbc98d5) && ((pcVar1 + -0x80011d0 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08002034;
            }
            pcVar2 = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x18aafba39062885f) goto code_r0x08002034;
            pcVar2 = sym.fsa4480_probe.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 == 0x3c93864c2bf5bf31) {
            pcVar2 = sym.fsa4480_switch_event.cfi_jt;
        }
        else {
            if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08002034;
            pcVar2 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        }
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08002034;
        pcVar2 = sym.fsa4480_remove.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002034:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002088);
    (*pcVar1)();
}


// ===== sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt
                (int64_t param_1,ulong param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0x18) || (iVar3 = *(param_1 + -0x10), iVar3 == 0)) {
        return 0xffffffea;
    }
    if (*(param_1 + 0xd0) == 0) {
        uVar1 = *param_3;
        _dev_printk(0x80006c5,iVar3,"%s: USB change event received, supply mode %d, usbc mode %ld, expected %d\n",
                    "fsa4480_usbc_event_changed_ucsi",uVar1,*(param_1 + 0x20),1);
        if (1 < uVar1) {
            return 0;
        }
        if (*(param_1 + 0x20) == uVar1) {
            return 0;
        }
        *(param_1 + 0x20) = uVar1;
        pcVar2 = "fsa4480_usbc_event_changed_ucsi";
    }
    else {
        pcVar2 = "fsa4480_usbc_event_changed_psupply";
    }
    _dev_printk(0x80006c5,iVar3,"%s: queueing usbc_analog_work\n",pcVar2);
    pm_stay_awake(*(param_1 + -0x10));
    queue_work_on(0x20,_of_find_i2c_device_by_node,param_1 + 0x28);
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.fsa4480_i2c_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = i2c_register_driver(obj.__this_module,obj.fsa4480_i2c_driver);
    if (iVar1 != 0) {
        _printk(0x800028e,iVar1);
    }
    return iVar1;
}


// ===== sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt @ 0x080011b8 (size 8) =====

void sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 + -0x40 == 0) {
        _printk(0x800051d,"fsa4480_usbc_analog_work_fn");
    }
    else {
        sym.fsa4480_usbc_analog_setup_switches(param_1 + -0x40);
        pm_relax(*(param_1 + -0x38));
    }
    return;
}


// ===== sym.fsa4480_probe.1ec9187fd6f57c6252763995e3873c31.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.fsa4480_probe.1ec9187fd6f57c6252763995e3873c31.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    uint64_t *puVar9;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar8 = param_1 + 0x20;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_4c = 0;
    puVar3 = devm_kmalloc(uVar8,0xf0,0xdc0);
    if (puVar3 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = uVar8;
    uVar4 = __devm_regmap_init_i2c(param_1,obj.fsa4480_regmap_config,0,0);
    *puVar3 = uVar4;
    if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
        _dev_err(uVar8,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar4 == 0) {
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar4,8,0);
    regmap_write(uVar4,9,0);
    regmap_write(uVar4,10,0);
    regmap_write(uVar4,0xb,0);
    regmap_write(uVar4,0xc,0);
    regmap_write(uVar4,0xd,0);
    regmap_write(uVar4,0xe,0);
    regmap_write(uVar4,0xf,0);
    regmap_write(uVar4,0x10,9);
    regmap_write(uVar4,4,0x98);
    devm_regmap_qti_debugfs_register(uVar8,uVar4);
    uVar5 = *(param_1 + 0x310);
    puVar9 = puVar3 + 3;
    *puVar9 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar3 + 5) = 0;
    iVar1 = of_property_read_variable_u32_array(uVar5,"qcom,use-power-supply",&iStack_4c,1,0);
    if ((iVar1 < 0) || (iStack_4c == 0)) {
        _dev_printk(0x80006c5,uVar8,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar3 + 0x1d) = 0;
        uVar2 = register_ucsi_glink_notifier(puVar9);
        if (uVar2 != 0) {
            uVar4 = uVar2;
            _dev_err(puVar3[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar4);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar3 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar3[8] = 0xfffffffe0;
        *(param_1 + 0xb8) = puVar3;
        puVar3[9] = puVar3 + 9;
        puVar3[10] = puVar3 + 9;
        puVar3[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar3 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar4 = 0;
        puVar3[0x16] = 0;
    }
    else {
        *(puVar3 + 0x1d) = 1;
        uVar6 = power_supply_get_by_name(0x8000678);
        puVar3[2] = uVar6;
        if (uVar6 == 0) {
            uVar4 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar8,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar4 = iio_channel_get(uVar8,"typec_mode");
        puVar3[6] = uVar4;
        if (uVar4 == 0) {
            _dev_err(uVar8,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar4 = 0;
        }
        else {
            uVar2 = power_supply_reg_notifier(puVar9);
            if (uVar2 == 0) goto code_r0x08001cc4;
            uVar4 = uVar2;
            _dev_err(puVar3[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar4);
            uVar6 = puVar3[2];
        }
        power_supply_put(uVar6);
    }
code_r0x08001d28:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar4 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.fsa4480_remove;
    arg1 = *(iVar7 + 0xb8);
    if (arg1 == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        if (*(arg1 + 0xe8) == 0) {
            unregister_ucsi_glink_notifier(arg1 + 0x18);
        }
        else {
            power_supply_unreg_notifier();
            power_supply_put(*(arg1 + 0x10));
        }
        sym.fsa4480_usbc_update_settings(arg1,0x18,0x98);
        cancel_work_sync(arg1 + 0x40);
        pm_relax(*(arg1 + 8));
        uVar8 = 0;
        *(iVar7 + 0xb8) = 0;
    }
    return uVar8;
}


// ===== sym.fsa4480_switch_event.cfi_jt @ 0x080011c8 (size 8) =====

uint64_t sym.fsa4480_switch_event.cfi_jt(ulong param_1,uint param_2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *arg1;
    uint64_t *puVar10;
    ulong unaff_x30;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = of_find_i2c_device_by_node();
    if (((iVar3 == 0) || (arg1 = *(iVar3 + 0xb8), arg1 == NULL)) || (*arg1 == 0)) {
        uVar4 = 0xffffffea;
        goto code_r0x08001a30;
    }
    switch(param_2) {
    case 0:
        regmap_read(*arg1,5,&uStack_30);
        uVar2 = uStack_30 ^ 0xffffffff;
        uStack_30 = 0;
        if ((uVar2 & 7) != 0) {
            uStack_30 = 7;
        }
        sym.fsa4480_usbc_update_settings(arg1,uStack_30,0x9f);
        uVar4 = 1;
        break;
    case 1:
        iVar3 = 0x18;
        goto code_r0x08001a78;
    case 2:
        iVar3 = 0x78;
code_r0x08001a78:
        sym.fsa4480_usbc_update_settings(arg1,iVar3,0xf8);
        iStack_2c = 0;
        regmap_read(*arg1,7,&iStack_2c);
        uVar4 = 0;
        if ((iStack_2c != 0x1c) && (iStack_2c != 0x23)) {
            _printk(0x800039b);
            uVar4 = 0xfffffffb;
        }
        break;
    case 3:
        sym.fsa4480_usbc_update_settings(arg1,0x18,0x98);
    default:
        uVar4 = 0;
    }
code_r0x08001a30:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.fsa4480_probe;
    pcStack_68 = sym.fsa4480_probe;
    iVar3 = sp_el0;
    uVar4 = iVar5 + 0x20;
    iStack_78 = *(iVar3 + 0x5e0);
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    puVar6 = devm_kmalloc(uVar4,0xf0,0xdc0);
    if (puVar6 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = uVar4;
    uVar7 = __devm_regmap_init_i2c(iVar5,obj.fsa4480_regmap_config,0,0);
    *puVar6 = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        _dev_err(uVar4,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar7 == 0) {
            uVar7 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar7,8,0);
    regmap_write(uVar7,9,0);
    regmap_write(uVar7,10,0);
    regmap_write(uVar7,0xb,0);
    regmap_write(uVar7,0xc,0);
    regmap_write(uVar7,0xd,0);
    regmap_write(uVar7,0xe,0);
    regmap_write(uVar7,0xf,0);
    regmap_write(uVar7,0x10,9);
    regmap_write(uVar7,4,0x98);
    devm_regmap_qti_debugfs_register(uVar4,uVar7);
    uVar8 = *(iVar5 + 0x310);
    puVar10 = puVar6 + 3;
    *puVar10 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar6 + 5) = 0;
    iVar1 = of_property_read_variable_u32_array(uVar8,"qcom,use-power-supply",&iStack_7c,1,0);
    if ((iVar1 < 0) || (iStack_7c == 0)) {
        _dev_printk(0x80006c5,uVar4,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar6 + 0x1d) = 0;
        uVar2 = register_ucsi_glink_notifier(puVar10);
        if (uVar2 != 0) {
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar7);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar6 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar6[8] = 0xfffffffe0;
        *(iVar5 + 0xb8) = puVar6;
        puVar6[9] = puVar6 + 9;
        puVar6[10] = puVar6 + 9;
        puVar6[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar6 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar7 = 0;
        puVar6[0x16] = 0;
    }
    else {
        *(puVar6 + 0x1d) = 1;
        uVar9 = power_supply_get_by_name(0x8000678);
        puVar6[2] = uVar9;
        if (uVar9 == 0) {
            uVar7 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar4,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar7 = iio_channel_get(uVar4,"typec_mode");
        puVar6[6] = uVar7;
        if (uVar7 == 0) {
            _dev_err(uVar4,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar7 = 0;
        }
        else {
            uVar2 = power_supply_reg_notifier(puVar10);
            if (uVar2 == 0) goto code_r0x08001cc4;
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar7);
            uVar9 = puVar6[2];
        }
        power_supply_put(uVar9);
    }
code_r0x08001d28:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_78) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_00 = sym.fsa4480_remove;
        iVar5 = *(iVar3 + 0xb8);
        if (iVar5 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            if (*(iVar5 + 0xe8) == 0) {
                unregister_ucsi_glink_notifier(iVar5 + 0x18);
            }
            else {
                power_supply_unreg_notifier();
                power_supply_put(*(iVar5 + 0x10));
            }
            sym.fsa4480_usbc_update_settings(iVar5,0x18,0x98);
            cancel_work_sync(iVar5 + 0x40);
            pm_relax(*(iVar5 + 8));
            uVar4 = 0;
            *(iVar3 + 0xb8) = 0;
        }
        return uVar4;
    }
    return uVar7 & 0xffffffff;
}


// ===== sym.fsa4480_unreg_notifier.cfi_jt @ 0x080011d0 (size 8) =====

uint64_t sym.fsa4480_unreg_notifier.cfi_jt(int64_t *param_1,ulong param_2,char *param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t *puVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t unaff_x20;
    int64_t unaff_x22;
    uint64_t *puVar11;
    int64_t unaff_x23;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_10c;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    uint32_t uStack_c0;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    int64_t iStack_60;
    int64_t *piStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar3 = of_find_i2c_device_by_node(param_2);
    uStack_50 = 0;
    if ((iVar3 == 0) || (unaff_x22 = *(iVar3 + 0xb8), unaff_x22 == 0)) {
code_r0x08001780:
        uVar4 = 0xffffffea;
    }
    else if (*(unaff_x22 + 0xe8) == 0) {
        param_3 = 0x98;
        sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
        uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,param_1);
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        unaff_x23 = *(unaff_x22 + 8);
        if (unaff_x23 == 0) goto code_r0x08001780;
        unaff_x20 = unaff_x22 + 0xb8;
        mutex_lock(unaff_x20);
        uVar1 = iio_read_channel_processed(*(unaff_x22 + 0x30),&uStack_50);
        if (uVar1 == 0) {
            if (uStack_50 == 1) {
                param_3 = 0x98;
                sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
            }
            uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,param_1);
            uVar4 = uVar4 & 0xffffffff;
        }
        else {
            uVar4 = uVar1;
            param_3 = "%s: Unable to read USB TYPEC_MODE: %d\n";
            _dev_printk(0x80006c5,unaff_x23,"%s: Unable to read USB TYPEC_MODE: %d\n","fsa4480_unreg_notifier",uVar4
                       );
        }
        mutex_unlock(unaff_x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    auVar12 = __stack_chk_fail();
    piVar5 = auVar12._0_8_;
    *extraout_x18 = sym.fsa4480_usbc_update_settings;
    pcStack_78 = sym.fsa4480_usbc_update_settings;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_90 = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = uVar4;
    iStack_60 = unaff_x20;
    piStack_58 = param_1;
    if (*piVar5 == 0) {
        uVar6 = _dev_err(piVar5[1],"%s: regmap invalid\n","fsa4480_usbc_update_settings");
    }
    else {
        param_1 = param_3 & 0xffffffff;
        uVar4 = auVar12._8_8_ & 0xffffffff;
        regmap_read(*piVar5,5,&uStack_90 + 4);
        regmap_read(*piVar5,4,&uStack_90);
        if ((uStack_90._4_4_ == auVar12._8_4_) && (uStack_90 == param_3)) {
            uVar6 = _dev_printk(0x80006c5,piVar5[1],"%s: settings unchanged\n","fsa4480_usbc_update_settings");
        }
        else {
            if (auVar12._8_4_ == 7) {
                regmap_write(*piVar5,4,0x87);
                regmap_write(*piVar5,5,7);
                usleep_range_state(20000,25000,2);
                _dev_printk(0x80006c5,piVar5[1],"%s  update setting for reverse insertion\n",
                            "fsa4480_usbc_update_settings");
            }
            else {
                regmap_write(*piVar5,4,0x80);
                regmap_write(*piVar5,5,uVar4);
                usleep_range_state(0x32,0x37,2);
            }
            uVar6 = regmap_write(*piVar5,4,param_1);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.fsa4480_switch_event;
    pcStack_a8 = sym.fsa4480_switch_event;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_80;
    piStack_a0 = piVar5;
    piStack_98 = param_1;
    iVar3 = of_find_i2c_device_by_node();
    if (((iVar3 == 0) || (param_1 = *(iVar3 + 0xb8), param_1 == NULL)) || (*param_1 == 0)) {
        uVar6 = 0xffffffea;
        goto code_r0x08001a30;
    }
    switch(extraout_x1 & 0xffffffff) {
    case 0:
        regmap_read(*param_1,5,&uStack_c0);
        uVar1 = uStack_c0 ^ 0xffffffff;
        uStack_c0 = 0;
        if ((uVar1 & 7) != 0) {
            uStack_c0 = 7;
        }
        sym.fsa4480_usbc_update_settings(param_1,uStack_c0,0x9f);
        uVar6 = 1;
        break;
    case 1:
        iVar3 = 0x18;
        goto code_r0x08001a78;
    case 2:
        iVar3 = 0x78;
code_r0x08001a78:
        sym.fsa4480_usbc_update_settings(param_1,iVar3,0xf8);
        iStack_bc = 0;
        regmap_read(*param_1,7,&iStack_bc);
        uVar6 = 0;
        if ((iStack_bc != 0x1c) && (iStack_bc != 0x23)) {
            _printk(0x800039b);
            uVar6 = 0xfffffffb;
        }
        break;
    case 3:
        sym.fsa4480_usbc_update_settings(param_1,0x18,0x98);
    default:
        uVar6 = 0;
    }
code_r0x08001a30:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18_01 = sym.fsa4480_probe;
    pcStack_f8 = sym.fsa4480_probe;
    iVar3 = sp_el0;
    uVar6 = iVar7 + 0x20;
    iStack_108 = *(iVar3 + 0x5e0);
    iStack_10c = 0;
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = unaff_x23;
    iStack_e0 = unaff_x22;
    uStack_d8 = uVar4;
    uStack_d0 = extraout_x1 & 0xffffffff;
    piStack_c8 = param_1;
    puVar8 = devm_kmalloc(uVar6,0xf0,0xdc0);
    if (puVar8 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = uVar6;
    uVar4 = __devm_regmap_init_i2c(iVar7,obj.fsa4480_regmap_config,0,0);
    *puVar8 = uVar4;
    if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
        _dev_err(uVar6,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar4 == 0) {
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar4,8,0);
    regmap_write(uVar4,9,0);
    regmap_write(uVar4,10,0);
    regmap_write(uVar4,0xb,0);
    regmap_write(uVar4,0xc,0);
    regmap_write(uVar4,0xd,0);
    regmap_write(uVar4,0xe,0);
    regmap_write(uVar4,0xf,0);
    regmap_write(uVar4,0x10,9);
    regmap_write(uVar4,4,0x98);
    devm_regmap_qti_debugfs_register(uVar6,uVar4);
    uVar9 = *(iVar7 + 0x310);
    puVar11 = puVar8 + 3;
    *puVar11 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar8 + 5) = 0;
    iVar2 = of_property_read_variable_u32_array(uVar9,"qcom,use-power-supply",&iStack_10c,1,0);
    if ((iVar2 < 0) || (iStack_10c == 0)) {
        _dev_printk(0x80006c5,uVar6,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar8 + 0x1d) = 0;
        uVar1 = register_ucsi_glink_notifier(puVar11);
        if (uVar1 != 0) {
            uVar4 = uVar1;
            _dev_err(puVar8[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar4);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar8 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar8[8] = 0xfffffffe0;
        *(iVar7 + 0xb8) = puVar8;
        puVar8[9] = puVar8 + 9;
        puVar8[10] = puVar8 + 9;
        puVar8[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar8 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar4 = 0;
        puVar8[0x16] = 0;
    }
    else {
        *(puVar8 + 0x1d) = 1;
        uVar10 = power_supply_get_by_name(0x8000678);
        puVar8[2] = uVar10;
        if (uVar10 == 0) {
            uVar4 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar6,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar4 = iio_channel_get(uVar6,"typec_mode");
        puVar8[6] = uVar4;
        if (uVar4 == 0) {
            _dev_err(uVar6,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar4 = 0;
        }
        else {
            uVar1 = power_supply_reg_notifier(puVar11);
            if (uVar1 == 0) goto code_r0x08001cc4;
            uVar4 = uVar1;
            _dev_err(puVar8[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar4);
            uVar10 = puVar8[2];
        }
        power_supply_put(uVar10);
    }
code_r0x08001d28:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_108) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_02 = sym.fsa4480_remove;
        iVar7 = *(iVar3 + 0xb8);
        if (iVar7 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            if (*(iVar7 + 0xe8) == 0) {
                unregister_ucsi_glink_notifier(iVar7 + 0x18);
            }
            else {
                power_supply_unreg_notifier();
                power_supply_put(*(iVar7 + 0x10));
            }
            sym.fsa4480_usbc_update_settings(iVar7,0x18,0x98);
            cancel_work_sync(iVar7 + 0x40);
            pm_relax(*(iVar7 + 8));
            uVar4 = 0;
            *(iVar3 + 0xb8) = 0;
        }
        return uVar4;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.fsa4480_reg_notifier.cfi_jt @ 0x080011d8 (size 8) =====

int sym.fsa4480_reg_notifier.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_i2c_device_by_node(param_2);
    if ((iVar2 == 0) || (iVar2 = *(iVar2 + 0xb8), iVar2 == 0)) {
        iVar1 = -0x16;
    }
    else {
        iVar1 = blocking_notifier_chain_register(iVar2 + 0x70,param_1);
        _dev_printk(0x80006c5,*(iVar2 + 8),"%s: registered notifier for %s\n","fsa4480_reg_notifier",*param_2);
        if (iVar1 == 0) {
            if (*(iVar2 + 0x38) == 1) {
                _dev_printk(0x80006c5,*(iVar2 + 8),"%s: analog adapter already inserted\n","fsa4480_reg_notifier");
                iVar1 = sym.fsa4480_usbc_analog_setup_switches(iVar2);
            }
            else {
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.fsa4480_remove.1ec9187fd6f57c6252763995e3873c31.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.fsa4480_remove.1ec9187fd6f57c6252763995e3873c31.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xb8);
    if (arg1 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        if (*(arg1 + 0xe8) == 0) {
            unregister_ucsi_glink_notifier(arg1 + 0x18);
        }
        else {
            power_supply_unreg_notifier();
            power_supply_put(*(arg1 + 0x10));
        }
        sym.fsa4480_usbc_update_settings(arg1,0x18,0x98);
        cancel_work_sync(arg1 + 0x40);
        pm_relax(*(arg1 + 8));
        uVar1 = 0;
        *(param_1 + 0xb8) = 0;
    }
    return uVar1;
}


// ===== sym.fsa4480_reg_notifier @ 0x080011e8 (size 212) =====

int sym.fsa4480_reg_notifier(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_i2c_device_by_node(arg2);
    if ((iVar2 == 0) || (iVar2 = *(iVar2 + 0xb8), iVar2 == 0)) {
        iVar1 = -0x16;
    }
    else {
        iVar1 = blocking_notifier_chain_register(iVar2 + 0x70,arg1);
        _dev_printk(0x80006c5,*(iVar2 + 8),"%s: registered notifier for %s\n","fsa4480_reg_notifier",*arg2);
        if (iVar1 == 0) {
            if (*(iVar2 + 0x38) == 1) {
                _dev_printk(0x80006c5,*(iVar2 + 8),"%s: analog adapter already inserted\n","fsa4480_reg_notifier");
                iVar1 = sym.fsa4480_usbc_analog_setup_switches(iVar2);
            }
            else {
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


// ===== sym.fsa4480_usbc_analog_setup_switches @ 0x080012c0 (size 1044) =====

uint64_t sym.fsa4480_usbc_analog_setup_switches(int arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong *arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t extraout_x1;
    char *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t *piVar10;
    uint64_t uVar11;
    char *unaff_x21;
    int64_t unaff_x22;
    uint64_t *puVar12;
    char *unaff_x23;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_15c;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    char *pcStack_140;
    int64_t iStack_130;
    uint64_t uStack_128;
    uint64_t uStack_120;
    int64_t *piStack_118;
    uint32_t uStack_110;
    int iStack_10c;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    int64_t *piStack_f0;
    int64_t *piStack_e8;
    int iStack_e0;
    int iStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b0;
    int64_t *piStack_a8;
    int aiStack_a0 [2];
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    char *pcStack_80;
    int64_t iStack_70;
    char *pcStack_68;
    uint64_t uStack_60;
    ulong *puStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    arg1_00 = arg1;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    if (*(arg1_00 + 0x1d) == 0) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        if ((arg1_00 == NULL) || (unaff_x21 = arg1_00[1], unaff_x21 == NULL)) goto code_r0x08001358;
        mutex_lock(arg1_00 + 0x17);
        iVar2 = arg1_00[7];
        unaff_x23 = "fsa4480_usbc_analog_setup_switches_ucsi";
        _dev_printk(0x80006c5,unaff_x21,"%s: setting GPIOs active = %d\n","fsa4480_usbc_analog_setup_switches_ucsi",
                    iVar2 != 0);
        regmap_read(*arg1_00,0,&stack0xffffffffffffffb0);
        in_x2 = "%s: reg[0x00]=0x%x\n";
        _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x00]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                    uStack_50 & 0xffffffff);
        if (uStack_50 == 0xf1) {
            in_x2 = 0x1;
            regmap_write(*arg1_00,0x1e);
            msleep(10);
        }
        if (iVar2 == 0) {
            blocking_notifier_call_chain(arg1_00 + 0xe,0,0);
            in_x2 = 0x98;
            sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
        }
        else if (iVar2 == 1) {
            if (uStack_50 == 0xf1) {
                regmap_write(*arg1_00,8,0x4f);
                regmap_read(*arg1_00,8,&stack0xffffffffffffffb0);
                unaff_x21 = "fsa4480_usbc_analog_setup_switches_ucsi";
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x08]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
                regmap_write(*arg1_00,9,0x4f);
                regmap_read(*arg1_00,9,&stack0xffffffffffffffb0);
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x09]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
                regmap_write(*arg1_00,10,0x4f);
                regmap_read(*arg1_00,10,&stack0xffffffffffffffb0);
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x0a]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
                regmap_write(*arg1_00,0xb,0x4f);
                regmap_read(*arg1_00,0xb,&stack0xffffffffffffffb0);
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x0b]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
                regmap_write(*arg1_00,0xc,0x4f);
                regmap_read(*arg1_00,0xc,&stack0xffffffffffffffb0);
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x0c]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
                regmap_write(*arg1_00,0x12,8);
                _dev_printk(0x80006c5,arg1_00[1],"%s: set reg[0x12] done.\n",
                            "fsa4480_usbc_analog_setup_switches_ucsi");
                regmap_read(*arg1_00,0x12,&stack0xffffffffffffffb0);
                _dev_printk(0x80006c5,arg1_00[1],"%s: reg[0x12]=0x%x\n","fsa4480_usbc_analog_setup_switches_ucsi",
                            uStack_50 & 0xffffffff);
            }
            sym.fsa4480_usbc_update_settings(arg1_00,0,0x9f);
            in_x2 = NULL;
            blocking_notifier_call_chain(arg1_00 + 0xe,1);
        }
        unaff_x22 = 0x80006c5;
        mutex_unlock(arg1_00 + 0x17);
        uVar11 = 0;
    }
    else {
        uStack_50 = 0;
        if ((arg1_00 == NULL) || (unaff_x22 = arg1_00[1], unaff_x22 == 0)) {
code_r0x08001358:
            uVar11 = 0xffffffea;
        }
        else {
            uVar1 = iio_read_channel_processed(arg1_00[6],&stack0xffffffffffffffb0);
            unaff_x21 = arg1_00 + 0x17;
            uVar11 = uVar1;
            mutex_lock(unaff_x21);
            if (uVar1 < 0) {
                in_x2 = "fsa4480_usbc_analog_setup_switches_psupply";
                _dev_err(unaff_x22,"%s: Unable to read USB TYPEC_MODE: %d\n",
                         "fsa4480_usbc_analog_setup_switches_psupply",uVar1);
            }
            else {
                in_x2 = "%s: setting GPIOs active = %d rcvd intval 0x%X\n";
                _dev_printk(0x80006c5,unaff_x22,"%s: setting GPIOs active = %d rcvd intval 0x%X\n",
                            "fsa4480_usbc_analog_setup_switches_psupply",uStack_50 != 0);
                if (arg1_00[7] != uStack_50) {
                    *(arg1_00 + 7) = uStack_50;
                    if (uStack_50 == 0) {
                        blocking_notifier_call_chain(arg1_00 + 0xe,0,0);
                        in_x2 = 0x98;
                        sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
                    }
                    else if (uStack_50 == 1) {
                        sym.fsa4480_usbc_update_settings(arg1_00,0,0x9f);
                        in_x2 = NULL;
                        blocking_notifier_call_chain(arg1_00 + 0xe,uStack_50);
                    }
                }
            }
            mutex_unlock(unaff_x21);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar11;
    }
    auVar13 = __stack_chk_fail();
    piVar10 = auVar13._0_8_;
    *extraout_x18 = 0x80016cc;
    uStack_88 = 0x80016cc;
    iVar3 = sp_el0;
    iStack_98 = *(iVar3 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffc0;
    pcStack_80 = unaff_x23;
    iStack_70 = unaff_x22;
    pcStack_68 = unaff_x21;
    uStack_60 = uVar11;
    puStack_58 = arg1_00;
    iVar3 = of_find_i2c_device_by_node(auVar13._8_8_);
    aiStack_a0[0] = 0;
    aiStack_a0[1] = 0;
    if ((iVar3 == 0) || (unaff_x22 = *(iVar3 + 0xb8), unaff_x22 == 0)) {
code_r0x08001780:
        uVar4 = 0xffffffea;
    }
    else if (*(unaff_x22 + 0xe8) == 0) {
        in_x2 = 0x98;
        sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
        uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,piVar10);
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        unaff_x23 = *(unaff_x22 + 8);
        if (unaff_x23 == NULL) goto code_r0x08001780;
        uVar11 = unaff_x22 + 0xb8;
        mutex_lock(uVar11);
        uVar1 = iio_read_channel_processed(*(unaff_x22 + 0x30),&stack0xffffffffffffff60);
        if (uVar1 == 0) {
            if (aiStack_a0[0] == 1) {
                in_x2 = 0x98;
                sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
            }
            uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,piVar10);
            uVar4 = uVar4 & 0xffffffff;
        }
        else {
            uVar4 = uVar1;
            in_x2 = "%s: Unable to read USB TYPEC_MODE: %d\n";
            _dev_printk(0x80006c5,unaff_x23,"%s: Unable to read USB TYPEC_MODE: %d\n","fsa4480_unreg_notifier",uVar4
                       );
        }
        mutex_unlock(uVar11);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return uVar4;
    }
    auVar13 = __stack_chk_fail();
    piVar5 = auVar13._0_8_;
    *extraout_x18_00 = sym.fsa4480_usbc_update_settings;
    pcStack_c8 = sym.fsa4480_usbc_update_settings;
    iVar3 = sp_el0;
    iStack_d8 = *(iVar3 + 0x5e0);
    _iStack_e0 = 0;
    puStack_d0 = &stack0xffffffffffffff70;
    uStack_c0 = uVar4;
    uStack_b0 = uVar11;
    piStack_a8 = piVar10;
    if (*piVar5 == 0) {
        uVar11 = _dev_err(piVar5[1],"%s: regmap invalid\n","fsa4480_usbc_update_settings");
    }
    else {
        piVar10 = in_x2 & 0xffffffff;
        uVar4 = auVar13._8_8_ & 0xffffffff;
        regmap_read(*piVar5,5,&stack0xffffffffffffff24);
        regmap_read(*piVar5,4,&stack0xffffffffffffff20);
        if ((iStack_dc == auVar13._8_4_) && (iStack_e0 == in_x2)) {
            uVar11 = _dev_printk(0x80006c5,piVar5[1],"%s: settings unchanged\n","fsa4480_usbc_update_settings");
        }
        else {
            if (auVar13._8_4_ == 7) {
                regmap_write(*piVar5,4,0x87);
                regmap_write(*piVar5,5,7);
                usleep_range_state(20000,25000,2);
                _dev_printk(0x80006c5,piVar5[1],"%s  update setting for reverse insertion\n",
                            "fsa4480_usbc_update_settings");
            }
            else {
                regmap_write(*piVar5,4,0x80);
                regmap_write(*piVar5,5,uVar4);
                usleep_range_state(0x32,0x37,2);
            }
            uVar11 = regmap_write(*piVar5,4,piVar10);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_d8) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.fsa4480_switch_event;
    pcStack_f8 = sym.fsa4480_switch_event;
    iVar3 = sp_el0;
    iStack_108 = *(iVar3 + 0x5e0);
    uStack_110 = 0;
    puStack_100 = &stack0xffffffffffffff30;
    piStack_f0 = piVar5;
    piStack_e8 = piVar10;
    iVar3 = of_find_i2c_device_by_node();
    if (((iVar3 == 0) || (piVar10 = *(iVar3 + 0xb8), piVar10 == NULL)) || (*piVar10 == 0)) {
        uVar11 = 0xffffffea;
        goto code_r0x08001a30;
    }
    switch(extraout_x1 & 0xffffffff) {
    case 0:
        regmap_read(*piVar10,5,&stack0xfffffffffffffef0);
        uVar1 = uStack_110 ^ 0xffffffff;
        uStack_110 = 0;
        if ((uVar1 & 7) != 0) {
            uStack_110 = 7;
        }
        sym.fsa4480_usbc_update_settings(piVar10,uStack_110,0x9f);
        uVar11 = 1;
        break;
    case 1:
        iVar3 = 0x18;
        goto code_r0x08001a78;
    case 2:
        iVar3 = 0x78;
code_r0x08001a78:
        sym.fsa4480_usbc_update_settings(piVar10,iVar3,0xf8);
        iStack_10c = 0;
        regmap_read(*piVar10,7,&stack0xfffffffffffffef4);
        uVar11 = 0;
        if ((iStack_10c != 0x1c) && (iStack_10c != 0x23)) {
            _printk(0x800039b);
            uVar11 = 0xfffffffb;
        }
        break;
    case 3:
        sym.fsa4480_usbc_update_settings(piVar10,0x18,0x98);
    default:
        uVar11 = 0;
    }
code_r0x08001a30:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_108) {
        return uVar11;
    }
    iVar6 = __stack_chk_fail(uVar11);
    *extraout_x18_02 = sym.fsa4480_probe;
    pcStack_148 = sym.fsa4480_probe;
    iVar3 = sp_el0;
    uVar11 = iVar6 + 0x20;
    iStack_158 = *(iVar3 + 0x5e0);
    iStack_15c = 0;
    puStack_150 = &stack0xffffffffffffff00;
    pcStack_140 = unaff_x23;
    iStack_130 = unaff_x22;
    uStack_128 = uVar4;
    uStack_120 = extraout_x1 & 0xffffffff;
    piStack_118 = piVar10;
    puVar7 = devm_kmalloc(uVar11,0xf0,0xdc0);
    if (puVar7 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar7[0x1c] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[1] = uVar11;
    uVar4 = __devm_regmap_init_i2c(iVar6,obj.fsa4480_regmap_config,0,0);
    *puVar7 = uVar4;
    if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
        _dev_err(uVar11,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar4 == 0) {
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar4,8,0);
    regmap_write(uVar4,9,0);
    regmap_write(uVar4,10,0);
    regmap_write(uVar4,0xb,0);
    regmap_write(uVar4,0xc,0);
    regmap_write(uVar4,0xd,0);
    regmap_write(uVar4,0xe,0);
    regmap_write(uVar4,0xf,0);
    regmap_write(uVar4,0x10,9);
    regmap_write(uVar4,4,0x98);
    devm_regmap_qti_debugfs_register(uVar11,uVar4);
    uVar8 = *(iVar6 + 0x310);
    puVar12 = puVar7 + 3;
    *puVar12 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar7 + 5) = 0;
    iVar2 = of_property_read_variable_u32_array(uVar8,"qcom,use-power-supply",&stack0xfffffffffffffea4,1,0);
    if ((iVar2 < 0) || (iStack_15c == 0)) {
        _dev_printk(0x80006c5,uVar11,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar7 + 0x1d) = 0;
        uVar1 = register_ucsi_glink_notifier(puVar12);
        if (uVar1 != 0) {
            uVar4 = uVar1;
            _dev_err(puVar7[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar4);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar7 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar7[8] = 0xfffffffe0;
        *(iVar6 + 0xb8) = puVar7;
        puVar7[9] = puVar7 + 9;
        puVar7[10] = puVar7 + 9;
        puVar7[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar7 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar4 = 0;
        puVar7[0x16] = 0;
    }
    else {
        *(puVar7 + 0x1d) = 1;
        uVar9 = power_supply_get_by_name(0x8000678);
        puVar7[2] = uVar9;
        if (uVar9 == 0) {
            uVar4 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar11,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar4 = iio_channel_get(uVar11,"typec_mode");
        puVar7[6] = uVar4;
        if (uVar4 == 0) {
            _dev_err(uVar11,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar4 = 0;
        }
        else {
            uVar1 = power_supply_reg_notifier(puVar12);
            if (uVar1 == 0) goto code_r0x08001cc4;
            uVar4 = uVar1;
            _dev_err(puVar7[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar4);
            uVar9 = puVar7[2];
        }
        power_supply_put(uVar9);
    }
code_r0x08001d28:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_158) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_03 = sym.fsa4480_remove;
        iVar6 = *(iVar3 + 0xb8);
        if (iVar6 == 0) {
            uVar11 = 0xffffffea;
        }
        else {
            if (*(iVar6 + 0xe8) == 0) {
                unregister_ucsi_glink_notifier(iVar6 + 0x18);
            }
            else {
                power_supply_unreg_notifier();
                power_supply_put(*(iVar6 + 0x10));
            }
            sym.fsa4480_usbc_update_settings(iVar6,0x18,0x98);
            cancel_work_sync(iVar6 + 0x40);
            pm_relax(*(iVar6 + 8));
            uVar11 = 0;
            *(iVar3 + 0xb8) = 0;
        }
        return uVar11;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.fsa4480_unreg_notifier @ 0x080016d4 (size 316) =====

uint64_t sym.fsa4480_unreg_notifier(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t *puVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint64_t extraout_x1;
    char *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t *piVar11;
    int64_t unaff_x20;
    int64_t unaff_x22;
    uint64_t *puVar12;
    int64_t unaff_x23;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_10c;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    int64_t iStack_f0;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    uint32_t uStack_c0;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_48 = *(iVar3 + 0x5e0);
    iVar3 = of_find_i2c_device_by_node(arg2);
    uStack_50 = 0;
    if ((iVar3 == 0) || (unaff_x22 = *(iVar3 + 0xb8), unaff_x22 == 0)) {
code_r0x08001780:
        uVar4 = 0xffffffea;
    }
    else if (*(unaff_x22 + 0xe8) == 0) {
        in_x2 = 0x98;
        sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
        uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,arg1);
        uVar4 = uVar4 & 0xffffffff;
    }
    else {
        unaff_x23 = *(unaff_x22 + 8);
        if (unaff_x23 == 0) goto code_r0x08001780;
        unaff_x20 = unaff_x22 + 0xb8;
        mutex_lock(unaff_x20);
        uVar1 = iio_read_channel_processed(*(unaff_x22 + 0x30),&uStack_50);
        if (uVar1 == 0) {
            if (uStack_50 == 1) {
                in_x2 = 0x98;
                sym.fsa4480_usbc_update_settings(unaff_x22,0x18,0x98);
            }
            uVar4 = blocking_notifier_chain_unregister(unaff_x22 + 0x70,arg1);
            uVar4 = uVar4 & 0xffffffff;
        }
        else {
            uVar4 = uVar1;
            in_x2 = "%s: Unable to read USB TYPEC_MODE: %d\n";
            _dev_printk(0x80006c5,unaff_x23,"%s: Unable to read USB TYPEC_MODE: %d\n","fsa4480_unreg_notifier",uVar4
                       );
        }
        mutex_unlock(unaff_x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    auVar13 = __stack_chk_fail();
    piVar5 = auVar13._0_8_;
    *extraout_x18 = sym.fsa4480_usbc_update_settings;
    pcStack_78 = sym.fsa4480_usbc_update_settings;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_90 = 0;
    puStack_80 = &stack0xffffffffffffffc0;
    uStack_70 = uVar4;
    iStack_60 = unaff_x20;
    iStack_58 = arg1;
    if (*piVar5 == 0) {
        uVar6 = _dev_err(piVar5[1],"%s: regmap invalid\n","fsa4480_usbc_update_settings");
    }
    else {
        piVar11 = in_x2 & 0xffffffff;
        uVar4 = auVar13._8_8_ & 0xffffffff;
        regmap_read(*piVar5,5,&uStack_90 + 4);
        regmap_read(*piVar5,4,&uStack_90);
        arg1 = piVar11;
        if ((uStack_90._4_4_ == auVar13._8_4_) && (uStack_90 == in_x2)) {
            uVar6 = _dev_printk(0x80006c5,piVar5[1],"%s: settings unchanged\n","fsa4480_usbc_update_settings");
        }
        else {
            if (auVar13._8_4_ == 7) {
                regmap_write(*piVar5,4,0x87);
                regmap_write(*piVar5,5,7);
                usleep_range_state(20000,25000,2);
                _dev_printk(0x80006c5,piVar5[1],"%s  update setting for reverse insertion\n",
                            "fsa4480_usbc_update_settings");
            }
            else {
                regmap_write(*piVar5,4,0x80);
                regmap_write(*piVar5,5,uVar4);
                usleep_range_state(0x32,0x37,2);
            }
            uVar6 = regmap_write(*piVar5,4,piVar11);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_88) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.fsa4480_switch_event;
    pcStack_a8 = sym.fsa4480_switch_event;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_80;
    piStack_a0 = piVar5;
    piStack_98 = arg1;
    iVar3 = of_find_i2c_device_by_node();
    if (((iVar3 == 0) || (arg1 = *(iVar3 + 0xb8), arg1 == NULL)) || (*arg1 == 0)) {
        uVar6 = 0xffffffea;
        goto code_r0x08001a30;
    }
    switch(extraout_x1 & 0xffffffff) {
    case 0:
        regmap_read(*arg1,5,&uStack_c0);
        uVar1 = uStack_c0 ^ 0xffffffff;
        uStack_c0 = 0;
        if ((uVar1 & 7) != 0) {
            uStack_c0 = 7;
        }
        sym.fsa4480_usbc_update_settings(arg1,uStack_c0,0x9f);
        uVar6 = 1;
        break;
    case 1:
        iVar3 = 0x18;
        goto code_r0x08001a78;
    case 2:
        iVar3 = 0x78;
code_r0x08001a78:
        sym.fsa4480_usbc_update_settings(arg1,iVar3,0xf8);
        iStack_bc = 0;
        regmap_read(*arg1,7,&iStack_bc);
        uVar6 = 0;
        if ((iStack_bc != 0x1c) && (iStack_bc != 0x23)) {
            _printk(0x800039b);
            uVar6 = 0xfffffffb;
        }
        break;
    case 3:
        sym.fsa4480_usbc_update_settings(arg1,0x18,0x98);
    default:
        uVar6 = 0;
    }
code_r0x08001a30:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18_01 = sym.fsa4480_probe;
    pcStack_f8 = sym.fsa4480_probe;
    iVar3 = sp_el0;
    uVar6 = iVar7 + 0x20;
    iStack_108 = *(iVar3 + 0x5e0);
    iStack_10c = 0;
    pppuStack_100 = &ppuStack_b0;
    iStack_f0 = unaff_x23;
    iStack_e0 = unaff_x22;
    uStack_d8 = uVar4;
    uStack_d0 = extraout_x1 & 0xffffffff;
    piStack_c8 = arg1;
    puVar8 = devm_kmalloc(uVar6,0xf0,0xdc0);
    if (puVar8 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = uVar6;
    uVar4 = __devm_regmap_init_i2c(iVar7,obj.fsa4480_regmap_config,0,0);
    *puVar8 = uVar4;
    if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
        _dev_err(uVar6,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar4 == 0) {
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar4,8,0);
    regmap_write(uVar4,9,0);
    regmap_write(uVar4,10,0);
    regmap_write(uVar4,0xb,0);
    regmap_write(uVar4,0xc,0);
    regmap_write(uVar4,0xd,0);
    regmap_write(uVar4,0xe,0);
    regmap_write(uVar4,0xf,0);
    regmap_write(uVar4,0x10,9);
    regmap_write(uVar4,4,0x98);
    devm_regmap_qti_debugfs_register(uVar6,uVar4);
    uVar9 = *(iVar7 + 0x310);
    puVar12 = puVar8 + 3;
    *puVar12 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar8 + 5) = 0;
    iVar2 = of_property_read_variable_u32_array(uVar9,"qcom,use-power-supply",&iStack_10c,1,0);
    if ((iVar2 < 0) || (iStack_10c == 0)) {
        _dev_printk(0x80006c5,uVar6,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar8 + 0x1d) = 0;
        uVar1 = register_ucsi_glink_notifier(puVar12);
        if (uVar1 != 0) {
            uVar4 = uVar1;
            _dev_err(puVar8[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar4);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar8 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar8[8] = 0xfffffffe0;
        *(iVar7 + 0xb8) = puVar8;
        puVar8[9] = puVar8 + 9;
        puVar8[10] = puVar8 + 9;
        puVar8[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar8 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar4 = 0;
        puVar8[0x16] = 0;
    }
    else {
        *(puVar8 + 0x1d) = 1;
        uVar10 = power_supply_get_by_name(0x8000678);
        puVar8[2] = uVar10;
        if (uVar10 == 0) {
            uVar4 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar6,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar4 = iio_channel_get(uVar6,"typec_mode");
        puVar8[6] = uVar4;
        if (uVar4 == 0) {
            _dev_err(uVar6,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar4 = 0;
        }
        else {
            uVar1 = power_supply_reg_notifier(puVar12);
            if (uVar1 == 0) goto code_r0x08001cc4;
            uVar4 = uVar1;
            _dev_err(puVar8[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar4);
            uVar10 = puVar8[2];
        }
        power_supply_put(uVar10);
    }
code_r0x08001d28:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_108) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_02 = sym.fsa4480_remove;
        iVar7 = *(iVar3 + 0xb8);
        if (iVar7 == 0) {
            uVar4 = 0xffffffea;
        }
        else {
            if (*(iVar7 + 0xe8) == 0) {
                unregister_ucsi_glink_notifier(iVar7 + 0x18);
            }
            else {
                power_supply_unreg_notifier();
                power_supply_put(*(iVar7 + 0x10));
            }
            sym.fsa4480_usbc_update_settings(iVar7,0x18,0x98);
            cancel_work_sync(iVar7 + 0x40);
            pm_relax(*(iVar7 + 8));
            uVar4 = 0;
            *(iVar3 + 0xb8) = 0;
        }
        return uVar4;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.fsa4480_usbc_update_settings @ 0x08001810 (size 380) =====

uint64_t sym.fsa4480_usbc_update_settings(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x19;
    int64_t *arg1_00;
    uint64_t *puVar10;
    ulong unaff_x30;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    uint32_t uStack_70;
    int iStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    if (*arg1 == 0) {
        uVar3 = _dev_err(*(arg1 + 8),"%s: regmap invalid\n","fsa4480_usbc_update_settings");
    }
    else {
        unaff_x19 = arg3 & 0xffffffff;
        regmap_read(*arg1,5,&uStack_40 + 4);
        regmap_read(*arg1,4,&uStack_40);
        if ((uStack_40._4_4_ == arg2) && (uStack_40 == arg3)) {
            uVar3 = _dev_printk(0x80006c5,*(arg1 + 8),"%s: settings unchanged\n","fsa4480_usbc_update_settings");
        }
        else {
            if (arg2 == 7) {
                regmap_write(*arg1,4,0x87);
                regmap_write(*arg1,5,7);
                usleep_range_state(20000,25000,2);
                _dev_printk(0x80006c5,*(arg1 + 8),"%s  update setting for reverse insertion\n",
                            "fsa4480_usbc_update_settings");
            }
            else {
                regmap_write(*arg1,4,0x80);
                regmap_write(*arg1,5,arg2 & 0xffffffff);
                usleep_range_state(0x32,0x37,2);
            }
            uVar3 = regmap_write(*arg1,4,unaff_x19);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.fsa4480_switch_event;
    pcStack_58 = sym.fsa4480_switch_event;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = arg1;
    uStack_48 = unaff_x19;
    iVar4 = of_find_i2c_device_by_node();
    if (((iVar4 == 0) || (arg1_00 = *(iVar4 + 0xb8), arg1_00 == NULL)) || (*arg1_00 == 0)) {
        uVar3 = 0xffffffea;
        goto code_r0x08001a30;
    }
    switch(extraout_x1 & 0xffffffff) {
    case 0:
        regmap_read(*arg1_00,5,&uStack_70);
        uVar2 = uStack_70 ^ 0xffffffff;
        uStack_70 = 0;
        if ((uVar2 & 7) != 0) {
            uStack_70 = 7;
        }
        sym.fsa4480_usbc_update_settings(arg1_00,uStack_70,0x9f);
        uVar3 = 1;
        break;
    case 1:
        iVar4 = 0x18;
        goto code_r0x08001a78;
    case 2:
        iVar4 = 0x78;
code_r0x08001a78:
        sym.fsa4480_usbc_update_settings(arg1_00,iVar4,0xf8);
        iStack_6c = 0;
        regmap_read(*arg1_00,7,&iStack_6c);
        uVar3 = 0;
        if ((iStack_6c != 0x1c) && (iStack_6c != 0x23)) {
            _printk(0x800039b);
            uVar3 = 0xfffffffb;
        }
        break;
    case 3:
        sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
    default:
        uVar3 = 0;
    }
code_r0x08001a30:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    iVar5 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.fsa4480_probe;
    pcStack_a8 = sym.fsa4480_probe;
    iVar4 = sp_el0;
    uVar3 = iVar5 + 0x20;
    iStack_b8 = *(iVar4 + 0x5e0);
    iStack_bc = 0;
    ppuStack_b0 = &puStack_60;
    puVar6 = devm_kmalloc(uVar3,0xf0,0xdc0);
    if (puVar6 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = uVar3;
    uVar7 = __devm_regmap_init_i2c(iVar5,obj.fsa4480_regmap_config,0,0);
    *puVar6 = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        _dev_err(uVar3,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar7 == 0) {
            uVar7 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar7,8,0);
    regmap_write(uVar7,9,0);
    regmap_write(uVar7,10,0);
    regmap_write(uVar7,0xb,0);
    regmap_write(uVar7,0xc,0);
    regmap_write(uVar7,0xd,0);
    regmap_write(uVar7,0xe,0);
    regmap_write(uVar7,0xf,0);
    regmap_write(uVar7,0x10,9);
    regmap_write(uVar7,4,0x98);
    devm_regmap_qti_debugfs_register(uVar3,uVar7);
    uVar8 = *(iVar5 + 0x310);
    puVar10 = puVar6 + 3;
    *puVar10 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar6 + 5) = 0;
    iVar1 = of_property_read_variable_u32_array(uVar8,"qcom,use-power-supply",&iStack_bc,1,0);
    if ((iVar1 < 0) || (iStack_bc == 0)) {
        _dev_printk(0x80006c5,uVar3,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar6 + 0x1d) = 0;
        uVar2 = register_ucsi_glink_notifier(puVar10);
        if (uVar2 != 0) {
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar7);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar6 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar6[8] = 0xfffffffe0;
        *(iVar5 + 0xb8) = puVar6;
        puVar6[9] = puVar6 + 9;
        puVar6[10] = puVar6 + 9;
        puVar6[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar6 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar7 = 0;
        puVar6[0x16] = 0;
    }
    else {
        *(puVar6 + 0x1d) = 1;
        uVar9 = power_supply_get_by_name(0x8000678);
        puVar6[2] = uVar9;
        if (uVar9 == 0) {
            uVar7 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar3,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar7 = iio_channel_get(uVar3,"typec_mode");
        puVar6[6] = uVar7;
        if (uVar7 == 0) {
            _dev_err(uVar3,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar7 = 0;
        }
        else {
            uVar2 = power_supply_reg_notifier(puVar10);
            if (uVar2 == 0) goto code_r0x08001cc4;
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar7);
            uVar9 = puVar6[2];
        }
        power_supply_put(uVar9);
    }
code_r0x08001d28:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_b8) {
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.fsa4480_remove;
        iVar5 = *(iVar4 + 0xb8);
        if (iVar5 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            if (*(iVar5 + 0xe8) == 0) {
                unregister_ucsi_glink_notifier(iVar5 + 0x18);
            }
            else {
                power_supply_unreg_notifier();
                power_supply_put(*(iVar5 + 0x10));
            }
            sym.fsa4480_usbc_update_settings(iVar5,0x18,0x98);
            cancel_work_sync(iVar5 + 0x40);
            pm_relax(*(iVar5 + 8));
            uVar3 = 0;
            *(iVar4 + 0xb8) = 0;
        }
        return uVar3;
    }
    return uVar7 & 0xffffffff;
}


// ===== sym.fsa4480_switch_event @ 0x0800198c (size 340) =====

uint64_t sym.fsa4480_switch_event(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *arg1_00;
    uint64_t *puVar10;
    ulong unaff_x30;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = of_find_i2c_device_by_node();
    if (((iVar3 == 0) || (arg1_00 = *(iVar3 + 0xb8), arg1_00 == NULL)) || (*arg1_00 == 0)) {
        uVar4 = 0xffffffea;
    }
    else if (arg2 < 4) {
    //switch table (3 cases) at 0x80001b0
        switch(*((arg2 & 0xffffffffU) + 0x80001b0) * 4 + 0x80019f4) {
        case 0x80019f8:
            regmap_read(*arg1_00,5,&stack0xffffffffffffffd0);
            uVar2 = uStack_30 ^ 0xffffffff;
            uStack_30 = 0;
            if ((uVar2 & 7) != 0) {
                uStack_30 = 7;
            }
            sym.fsa4480_usbc_update_settings(arg1_00,uStack_30,0x9f);
            uVar4 = 1;
            goto code_r0x08001a30;
        case 0x8001a60:
            iVar3 = 0x18;
            break;
        case 0x8001a70:
            iVar3 = 0x78;
            break;
        case 0x8001ac4:
            sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
            goto code_r0x08001ad4;
        }
        sym.fsa4480_usbc_update_settings(arg1_00,iVar3,0xf8);
        iStack_2c = 0;
        regmap_read(*arg1_00,7,&stack0xffffffffffffffd4);
        uVar4 = 0;
        if ((iStack_2c != 0x1c) && (iStack_2c != 0x23)) {
            _printk(0x800039b);
            uVar4 = 0xfffffffb;
        }
    }
    else {
code_r0x08001ad4:
        uVar4 = 0;
    }
code_r0x08001a30:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.fsa4480_probe;
    pcStack_68 = sym.fsa4480_probe;
    iVar3 = sp_el0;
    uVar4 = iVar5 + 0x20;
    iStack_78 = *(iVar3 + 0x5e0);
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    puVar6 = devm_kmalloc(uVar4,0xf0,0xdc0);
    if (puVar6 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = uVar4;
    uVar7 = __devm_regmap_init_i2c(iVar5,obj.fsa4480_regmap_config,0,0);
    *puVar6 = uVar7;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        _dev_err(uVar4,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar7 == 0) {
            uVar7 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar7,8,0);
    regmap_write(uVar7,9,0);
    regmap_write(uVar7,10,0);
    regmap_write(uVar7,0xb,0);
    regmap_write(uVar7,0xc,0);
    regmap_write(uVar7,0xd,0);
    regmap_write(uVar7,0xe,0);
    regmap_write(uVar7,0xf,0);
    regmap_write(uVar7,0x10,9);
    regmap_write(uVar7,4,0x98);
    devm_regmap_qti_debugfs_register(uVar4,uVar7);
    uVar8 = *(iVar5 + 0x310);
    puVar10 = puVar6 + 3;
    *puVar10 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar6 + 5) = 0;
    iVar1 = of_property_read_variable_u32_array(uVar8,"qcom,use-power-supply",&stack0xffffffffffffff84,1,0);
    if ((iVar1 < 0) || (iStack_7c == 0)) {
        _dev_printk(0x80006c5,uVar4,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar6 + 0x1d) = 0;
        uVar2 = register_ucsi_glink_notifier(puVar10);
        if (uVar2 != 0) {
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar7);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar6 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar6[8] = 0xfffffffe0;
        *(iVar5 + 0xb8) = puVar6;
        puVar6[9] = puVar6 + 9;
        puVar6[10] = puVar6 + 9;
        puVar6[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar6 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar7 = 0;
        puVar6[0x16] = 0;
    }
    else {
        *(puVar6 + 0x1d) = 1;
        uVar9 = power_supply_get_by_name(0x8000678);
        puVar6[2] = uVar9;
        if (uVar9 == 0) {
            uVar7 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar4,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar7 = iio_channel_get(uVar4,"typec_mode");
        puVar6[6] = uVar7;
        if (uVar7 == 0) {
            _dev_err(uVar4,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar7 = 0;
        }
        else {
            uVar2 = power_supply_reg_notifier(puVar10);
            if (uVar2 == 0) goto code_r0x08001cc4;
            uVar7 = uVar2;
            _dev_err(puVar6[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar7);
            uVar9 = puVar6[2];
        }
        power_supply_put(uVar9);
    }
code_r0x08001d28:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_78) {
        return uVar7 & 0xffffffff;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.fsa4480_remove;
    iVar5 = *(iVar3 + 0xb8);
    if (iVar5 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        if (*(iVar5 + 0xe8) == 0) {
            unregister_ucsi_glink_notifier(iVar5 + 0x18);
        }
        else {
            power_supply_unreg_notifier();
            power_supply_put(*(iVar5 + 0x10));
        }
        sym.fsa4480_usbc_update_settings(iVar5,0x18,0x98);
        cancel_work_sync(iVar5 + 0x40);
        pm_relax(*(iVar5 + 8));
        uVar4 = 0;
        *(iVar3 + 0xb8) = 0;
    }
    return uVar4;
}


// ===== sym.fsa4480_probe @ 0x08001ae0 (size 900) =====

uint64_t sym.fsa4480_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    uint64_t *puVar9;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar8 = arg1 + 0x20;
    iStack_48 = *(iVar7 + 0x5e0);
    iStack_4c = 0;
    puVar3 = devm_kmalloc(uVar8,0xf0,0xdc0);
    if (puVar3 == NULL) {
        uVar4 = 0xfffffff4;
        goto code_r0x08001d28;
    }
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = uVar8;
    uVar4 = __devm_regmap_init_i2c(arg1,obj.fsa4480_regmap_config,0,0);
    *puVar3 = uVar4;
    if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) {
        _dev_err(uVar8,"%s: Failed to initialize regmap: %d\n","fsa4480_probe",0);
        if (uVar4 == 0) {
            uVar4 = 0xffffffea;
        }
        goto code_r0x08001d28;
    }
    regmap_write(uVar4,8,0);
    regmap_write(uVar4,9,0);
    regmap_write(uVar4,10,0);
    regmap_write(uVar4,0xb,0);
    regmap_write(uVar4,0xc,0);
    regmap_write(uVar4,0xd,0);
    regmap_write(uVar4,0xe,0);
    regmap_write(uVar4,0xf,0);
    regmap_write(uVar4,0x10,9);
    regmap_write(uVar4,4,0x98);
    devm_regmap_qti_debugfs_register(uVar8,uVar4);
    uVar5 = *(arg1 + 0x310);
    puVar9 = puVar3 + 3;
    *puVar9 = sym.fsa4480_usbc_event_changed.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
    *(puVar3 + 5) = 0;
    iVar1 = of_property_read_variable_u32_array(uVar5,"qcom,use-power-supply",&iStack_4c,1,0);
    if ((iVar1 < 0) || (iStack_4c == 0)) {
        _dev_printk(0x80006c5,uVar8,"%s: Looking up %s property failed or disabled\n","fsa4480_probe",
                    "qcom,use-power-supply");
        *(puVar3 + 0x1d) = 0;
        uVar2 = register_ucsi_glink_notifier(puVar9);
        if (uVar2 != 0) {
            uVar4 = uVar2;
            _dev_err(puVar3[1],"%s: ucsi glink notifier registration failed: %d\n","fsa4480_probe",uVar4);
            goto code_r0x08001d28;
        }
code_r0x08001cc4:
        __mutex_init(puVar3 + 0x17,"&fsa_priv->notification_lock",obj.fsa4480_i2c_driver);
        puVar3[8] = 0xfffffffe0;
        *(arg1 + 0xb8) = puVar3;
        puVar3[9] = puVar3 + 9;
        puVar3[10] = puVar3 + 9;
        puVar3[0xb] = sym.fsa4480_usbc_analog_work_fn.1ec9187fd6f57c6252763995e3873c31.cfi_jt;
        __init_rwsem(puVar3 + 0xe,"&(&fsa_priv->fsa4480_notifier)->rwsem",obj.fsa4480_i2c_driver);
        uVar4 = 0;
        puVar3[0x16] = 0;
    }
    else {
        *(puVar3 + 0x1d) = 1;
        uVar6 = power_supply_get_by_name(0x8000678);
        puVar3[2] = uVar6;
        if (uVar6 == 0) {
            uVar4 = 0xfffffdfb;
            _dev_printk(0x80006c5,uVar8,"%s: could not get USB psy info: %d\n","fsa4480_probe",0xfffffdfb);
            goto code_r0x08001d28;
        }
        uVar4 = iio_channel_get(uVar8,"typec_mode");
        puVar3[6] = uVar4;
        if (uVar4 == 0) {
            _dev_err(uVar8,"%s: iio_channel_get failed for typec_mode\n","fsa4480_probe");
            uVar4 = 0;
        }
        else {
            uVar2 = power_supply_reg_notifier(puVar9);
            if (uVar2 == 0) goto code_r0x08001cc4;
            uVar4 = uVar2;
            _dev_err(puVar3[1],"%s: power supply reg failed: %d\n","fsa4480_probe",uVar4);
            uVar6 = puVar3[2];
        }
        power_supply_put(uVar6);
    }
code_r0x08001d28:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar4 & 0xffffffff;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.fsa4480_remove;
    arg1_00 = *(iVar7 + 0xb8);
    if (arg1_00 == 0) {
        uVar8 = 0xffffffea;
    }
    else {
        if (*(arg1_00 + 0xe8) == 0) {
            unregister_ucsi_glink_notifier(arg1_00 + 0x18);
        }
        else {
            power_supply_unreg_notifier();
            power_supply_put(*(arg1_00 + 0x10));
        }
        sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
        cancel_work_sync(arg1_00 + 0x40);
        pm_relax(*(arg1_00 + 8));
        uVar8 = 0;
        *(iVar7 + 0xb8) = 0;
    }
    return uVar8;
}


// ===== sym.fsa4480_remove @ 0x08001e64 (size 132) =====

ulong sym.fsa4480_remove(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xb8);
    if (arg1_00 == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        if (*(arg1_00 + 0xe8) == 0) {
            unregister_ucsi_glink_notifier(arg1_00 + 0x18);
        }
        else {
            power_supply_unreg_notifier();
            power_supply_put(*(arg1_00 + 0x10));
        }
        sym.fsa4480_usbc_update_settings(arg1_00,0x18,0x98);
        cancel_work_sync(arg1_00 + 0x40);
        pm_relax(*(arg1_00 + 8));
        uVar1 = 0;
        *(arg1 + 0xb8) = 0;
    }
    return uVar1;
}


// ===== sym.fsa4480_usbc_event_changed @ 0x08001ee8 (size 236) =====

ulong sym.fsa4480_usbc_event_changed(uint32_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar2 == 0x18) || (iVar4 = *(uVar2 - 0x10), iVar4 == 0)) {
        return 0xffffffea;
    }
    if (*(uVar2 + 0xd0) == 0) {
        uVar1 = *arg2;
        noname_1 = _dev_printk(0x80006c5,iVar4,
                               "%s: USB change event received, supply mode %d, usbc mode %ld, expected %d\n",
                               "fsa4480_usbc_event_changed_ucsi",uVar1,*(uVar2 + 0x20),1);
        if (1 < uVar1) {
            return 0;
        }
        if (*(uVar2 + 0x20) == uVar1) {
            return 0;
        }
        *(uVar2 + 0x20) = uVar1;
        pcVar3 = "fsa4480_usbc_event_changed_ucsi";
    }
    else {
        pcVar3 = "fsa4480_usbc_event_changed_psupply";
    }
    _dev_printk(noname_1,0x80006c5,iVar4,"%s: queueing usbc_analog_work\n",pcVar3);
    pm_stay_awake(*(uVar2 - 0x10));
    queue_work_on(0x20,_of_find_i2c_device_by_node,uVar2 + 0x28);
    return 0;
}


// ===== sym.fsa4480_usbc_analog_work_fn @ 0x08001fd8 (size 88) =====

void sym.fsa4480_usbc_analog_work_fn(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 + -0x40 == 0) {
        _printk(0x800051d,"fsa4480_usbc_analog_work_fn");
    }
    else {
        sym.fsa4480_usbc_analog_setup_switches(arg1 + -0x40);
        pm_relax(*(arg1 + -0x38));
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002030 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002074

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
    //switch table (4 cases) at 0x80001b4
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002088);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080020d8 (size 92) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = i2c_register_driver(obj.__this_module,obj.fsa4480_i2c_driver);
    if (iVar1 != 0) {
        _printk(0x800028e,iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002134 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.fsa4480_i2c_driver);
    return;
}

