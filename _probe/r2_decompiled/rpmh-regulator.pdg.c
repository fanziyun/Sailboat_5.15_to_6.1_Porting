// decompiled from rpmh-regulator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08004798

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x607809f436f9dcb0) {
            if (arg1 == -0x78ef6e655139cb7b) {
                pcVar2 = sym.rpmh_regulator_vrm_get_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
            else {
                if (arg1 != -0x6ca09bc2ae9ba293) goto code_r0x08004758;
                pcVar2 = sym.rpmh_regulator_vrm_set_load.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x607809f436f9dcb0) {
                if ((arg1 == -0x46e2d629c3d924cf) && ((pcVar1 + -0x80021e8 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08004758;
            }
            pcVar2 = sym.rpmh_regulator_vrm_set_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x1bf4c7c0f319a435) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08004758;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x1bf4c7c0f319a435) {
            if ((pcVar1 + -0x8002218 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x08004758;
        }
        if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.regulator_proxy_consumer_sync_state.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004758;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004758:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80047ac);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080021d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.regulator_proxy_consumer_sync_state.cfi_jt @ 0x080021e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.regulator_proxy_consumer_sync_state.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rpmh_regulator_arc_set_voltage_sel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021e8 (size 8) =====

int sym.rpmh_regulator_arc_set_voltage_sel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint param_2)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    mutex_lock(*(arg1 + 0x148) + 0x18);
    uVar1 = *(arg1 + 0x154);
    *(arg1 + 0x154) = param_2;
    *(arg1 + 0x164) = *(arg1 + 0x164) | 1;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar2 != 0) {
        _printk(0x8000626,"rpmh_regulator_arc_set_voltage_sel",*(arg1 + 8),*(arg1 + 0x154),iVar2);
        *(arg1 + 0x154) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 1;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_vrm_set_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021f0 (size 8) =====

int sym.rpmh_regulator_vrm_set_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int param_2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    int64_t arg1;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    iVar4 = *(arg1 + 0x148);
    if (0 < *(iVar4 + 0xb0)) {
        iVar6 = 0;
        iVar5 = 0;
        do {
            if (*(*(iVar4 + 0xa8) + 4 + iVar6) == param_2) {
                mutex_lock(iVar4 + 0x18);
                uVar2 = *(*(*(arg1 + 0x148) + 0xa8) + iVar6);
                uVar1 = *(arg1 + 0x15c);
                *(arg1 + 0x164) = *(arg1 + 0x164) | 4;
                *(arg1 + 0x15c) = uVar2;
                iVar3 = sym.rpmh_regulator_send_aggregate_requests(arg1);
                if (iVar3 == 0) {
                    *(arg1 + 0x168) = iVar5;
                }
                else {
                    _printk(0x80008af,"rpmh_regulator_vrm_set_mode_index",*(arg1 + 8),*(arg1 + 0x15c),iVar3);
                    *(arg1 + 0x15c) = uVar1;
                    *(arg1 + 0x164) = *(arg1 + 0x164) | 4;
                }
                mutex_unlock(*(arg1 + 0x148) + 0x18);
                return iVar3;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 0xc;
        } while (*(iVar4 + 0xb0) * 0xc - iVar6 != 0);
    }
    _printk(0x8000c1f,"rpmh_regulator_vrm_set_mode",*(arg1 + 8),param_2);
    return -0x16;
}


// ===== sym.rpmh_regulator_arc_list_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021f8 (size 8) =====

uint sym.rpmh_regulator_arc_list_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint32_t param_2)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = rdev_get_drvdata();
    if (param_2 < *(*(iVar3 + 0x148) + 0x90)) {
        if (0xf < param_2) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800434c);
            (*pcVar1)();
        }
        uVar2 = *(*(iVar3 + 0x148) + param_2 * 4 + 0x50);
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.rpmh_regulator_vrm_set_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002200 (size 8) =====

int sym.rpmh_regulator_vrm_set_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
              (ulong param_1,int param_2,uint32_t param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int64_t arg1;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    iVar2 = (param_2 + 999) / 1000;
    if (param_3 < iVar2 * 1000) {
        _printk(0x8000426,"rpmh_regulator_vrm_set_voltage",*(arg1 + 8),param_2,param_3);
        iVar3 = -0x16;
    }
    else {
        mutex_lock(*(arg1 + 0x148) + 0x18);
        uVar1 = *(arg1 + 0x154);
        *(arg1 + 0x154) = iVar2;
        iVar4 = *(arg1 + 0x148);
        *(arg1 + 0x164) = *(arg1 + 0x164) | 1;
        if (((*(iVar4 + 200) & 1) != 0) && (param_3 < *(iVar4 + 0xb8))) {
            *(iVar4 + 0x95) = 1;
        }
        iVar3 = sym.rpmh_regulator_send_aggregate_requests(arg1);
        if (iVar3 != 0) {
            _printk(0x80003bf,"rpmh_regulator_vrm_set_voltage",*(arg1 + 8),iVar2,iVar3);
            *(arg1 + 0x154) = uVar1;
            *(arg1 + 0x164) = *(arg1 + 0x164) | 1;
        }
        mutex_unlock(*(arg1 + 0x148) + 0x18);
    }
    return iVar3;
}


// ===== sym.rpmh_regulator_vrm_set_load.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002208 (size 8) =====

int sym.rpmh_regulator_vrm_set_load.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int param_2)

{
    uint uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t arg1;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    iVar5 = *(arg1 + 0x148);
    uVar6 = *(iVar5 + 0xb0);
    uVar3 = uVar6 - 1;
    if (-1 < uVar3) {
        uVar3 = 0;
    }
    do {
        uVar6 = uVar6 - 1;
        uVar7 = uVar3;
        if (uVar6 < 1) break;
        uVar7 = uVar6;
    } while (param_2 < *(*(iVar5 + 0xa8) + uVar6 * 0xc + 8));
    mutex_lock(iVar5 + 0x18);
    uVar1 = *(arg1 + 0x15c);
    uVar2 = *(*(*(arg1 + 0x148) + 0xa8) + uVar7 * 0xc);
    *(arg1 + 0x164) = *(arg1 + 0x164) | 4;
    *(arg1 + 0x15c) = uVar2;
    iVar4 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar4 == 0) {
        *(arg1 + 0x168) = uVar7;
    }
    else {
        _printk(0x80008af,"rpmh_regulator_vrm_set_mode_index",*(arg1 + 8),*(arg1 + 0x15c),iVar4);
        *(arg1 + 0x15c) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 4;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar4;
}


// ===== sym.rpmh_regulator_vrm_get_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002210 (size 8) =====

uint sym.rpmh_regulator_vrm_get_mode.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(*(*(iVar1 + 0x148) + 0xa8) + *(iVar1 + 0x168) * 0xc + 4);
}


// ===== sym.rpmh_regulator_enable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002218 (size 8) =====

int sym.rpmh_regulator_enable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    mutex_lock(*(arg1 + 0x148) + 0x18);
    uVar1 = *(arg1 + 0x158);
    *(arg1 + 0x158) = 1;
    *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar2 != 0) {
        _printk(0x800098e,"rpmh_regulator_enable",*(arg1 + 8),iVar2);
        *(arg1 + 0x158) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_vrm_get_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002220 (size 8) =====

int sym.rpmh_regulator_vrm_get_voltage.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = *(iVar2 + 0x154) * 1000;
    if (iVar1 == 0) {
        iVar1 = 1;
    }
    return iVar1;
}


// ===== sym.rpmh_regulator_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002228 (size 8) =====

int sym.rpmh_regulator_disable.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    mutex_lock(*(arg1 + 0x148) + 0x18);
    uVar1 = *(arg1 + 0x158);
    *(arg1 + 0x158) = 0;
    *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar2 != 0) {
        _printk(0x8000d2a,"rpmh_regulator_disable",*(arg1 + 8),iVar2);
        *(arg1 + 0x158) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_arc_get_voltage_sel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002230 (size 8) =====

uint sym.rpmh_regulator_arc_get_voltage_sel.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x154);
}


// ===== sym.rpmh_regulator_is_enabled.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002238 (size 8) =====

bool sym.rpmh_regulator_is_enabled.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x158) != 0;
}


// ===== sym.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002240 (size 8) =====

uint64_t sym.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(char *param_1)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    code *pcVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    ulong uVar17;
    char *pcVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint uVar21;
    uint32_t uVar22;
    int *piVar23;
    uint32_t uVar24;
    int64_t iVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint8_t *puVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    int64_t iVar32;
    int *piVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    int64_t iVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint64_t uVar43;
    uint32_t uVar44;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x20;
    int64_t *unaff_x21;
    char *pcVar45;
    int64_t *piVar46;
    uint64_t uVar47;
    ulong *puVar48;
    int64_t *unaff_x24;
    int64_t *unaff_x25;
    int64_t *unaff_x26;
    int64_t *unaff_x27;
    ulong unaff_x30;
    uint32_t auStack_1a8 [12];
    ulong uStack_178;
    ulong uStack_170;
    uint32_t uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    uint32_t uStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    int64_t *piStack_130;
    int64_t *piStack_120;
    int64_t *piStack_118;
    int64_t *piStack_110;
    uint64_t uStack_108;
    int64_t *piStack_100;
    int64_t *piStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
    int64_t *piStack_e0;
    int64_t *piStack_d8;
    int64_t *piStack_d0;
    int64_t *piStack_c8;
    int64_t *piStack_c0;
    int64_t *piStack_b8;
    int64_t *piStack_b0;
    uint32_t uStack_a4;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar12 = param_1 + 0x10;
    iStack_68 = *(iVar11 + 0x5e0);
    pcVar45 = *(param_1 + 0x300);
    if (pcVar45 == NULL) {
        _dev_err(piVar12,"Device tree node is missing\n");
        uVar47 = 0xffffffea;
    }
    else {
        piVar10 = devm_kmalloc(piVar12,0xe0,0xdc0);
        unaff_x25 = param_1;
        if (piVar10 == NULL) {
            uVar47 = 0xfffffff4;
        }
        else {
            unaff_x21 = piVar10 + 3;
            *piVar10 = piVar12;
            __mutex_init(unaff_x21,"&aggr_vreg->lock",
                         reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            iVar11 = of_match_node(obj.rpmh_regulator_match_table,pcVar45);
            if (iVar11 == 0) {
                _dev_err(piVar12,"could not find compatible string match\n");
                uVar47 = 0xffffffed;
            }
            else {
                unaff_x24 = piVar10 + 1;
                *(piVar10 + 9) = *(iVar11 + 0xc0);
                piStack_c0 = pcVar45;
                uVar6 = of_property_read_string(pcVar45,"qcom,resource-name",unaff_x24);
                if (uVar6 == 0) {
                    iVar7 = cmd_db_read_addr(piVar10[1]);
                    *(piVar10 + 2) = iVar7;
                    if (iVar7 == 0) {
                        _printk(0x800045b,"rpmh_regulator_probe");
                        uVar47 = 0xffffffed;
                    }
                    else {
                        uVar6 = cmd_db_read_slave_id(piVar10[1]);
                        uVar47 = uVar6;
                        piVar13 = unaff_x21;
                        if (uVar6 < 0) {
                            iVar11 = *unaff_x24;
                            uVar14 = 0x80003ea;
                        }
                        else {
                            iVar7 = piVar10[9];
                            if ((((iVar7 == 1) && (uVar6 != 3)) || ((iVar7 == 0 && (uVar6 != 4)))) ||
                               ((iVar7 == 2 && (uVar6 != 4)))) {
                                uVar14 = 0x8000711;
                                if (iVar7 != 0) {
                                    uVar14 = 0x8000cd0;
                                }
                                uVar17 = 0x80007d7;
                                if (iVar7 != 1) {
                                    uVar17 = uVar14;
                                }
                                _printk(0x800048f,"rpmh_regulator_probe",*unaff_x24,iVar7,uVar17,uVar47);
                                uVar47 = 0xffffffea;
                                goto code_r0x08003704;
                            }
                            piVar46 = pcVar45;
                            piStack_c8 = piVar12;
                            if (iVar7 == 1) {
                                piStack_a0 = NULL;
                                uVar47 = cmd_db_read_aux_data(*unaff_x24,&piStack_a0);
                                if (uVar47 < 0xfffffffffffff001) {
                                    if (piStack_a0 == NULL) {
                                        _printk(0x800027a,"rpmh_regulator_load_arc_level_mapping",*unaff_x24);
                                    }
                                    else if (piStack_a0 < 0x21) {
                                        if ((piStack_a0 & 1) == 0) {
                                            iVar7 = piStack_a0 >> 1;
                                            *(piVar10 + 0x12) = iVar7;
                                            if (iVar7 != 0) {
                                                iVar11 = 0;
                                                puVar29 = uVar47 + 1;
                                                do {
                                                    if (iVar11 == 0x10) goto code_r0x08003744;
                                                    iVar36 = iVar11 * 4;
                                                    uVar6 = *(piVar10 + iVar36 + 0x50) | puVar29[-1];
                                                    *(piVar10 + iVar36 + 0x50) = uVar6;
                                                    uVar6 = uVar6 | *puVar29 << 8;
                                                    *(piVar10 + iVar36 + 0x50) = uVar6;
                                                    if ((iVar11 != 0) && (uVar6 == 0)) {
                                                        *(piVar10 + 0x12) = iVar11;
                                                        break;
                                                    }
                                                    iVar11 = iVar11 + 1;
                                                    puVar29 = puVar29 + 2;
                                                } while (iVar11 < piVar10[0x12]);
                                            }
                                            goto code_r0x08002984;
                                        }
                                        _printk(0x8000acf,"rpmh_regulator_load_arc_level_mapping",*unaff_x24);
                                    }
                                    else {
                                        _printk(0x8000a31,"rpmh_regulator_load_arc_level_mapping",*unaff_x24,
                                                piStack_a0,0x20);
                                    }
                                    uVar47 = 0xffffffea;
                                }
                                else {
                                    _printk(0x800068d,"rpmh_regulator_load_arc_level_mapping",*unaff_x24,uVar47);
                                    if (uVar47 == 0) goto code_r0x08002984;
                                }
                                iVar11 = *unaff_x24;
                                uVar14 = 0x8000b46;
                            }
                            else {
                                if (iVar7 == 0) {
                                    piVar12 = *(*piVar10 + 0x2f0);
                                    piStack_a0 = 0x8000b79;
                                    uStack_6c = 0;
                                    uStack_a4 = 0;
                                    *(piVar10 + 0x4c) = 0;
                                    *(piVar10 + 0xb4) = 0xffffffea;
                                    iVar11 = of_find_property(piVar12,"qcom,regulator-type",&uStack_6c);
                                    unaff_x26 = unaff_x21;
                                    if (iVar11 != 0) {
                                        uVar6 = of_property_read_string(piVar12,"qcom,regulator-type",&piStack_a0);
                                        piVar46 = piStack_a0;
                                        if (uVar6 == 0) {
                                            iVar7 = strcmp(piStack_a0,"pmic4-ldo");
                                            pcVar45 = piVar46;
                                            if (iVar7 == 0) {
                                                iVar11 = 1;
                                            }
                                            else {
                                                iVar7 = strcmp(piVar46,"pmic4-hfsmps");
                                                if (iVar7 == 0) {
                                                    iVar11 = 2;
                                                }
                                                else {
                                                    iVar7 = strcmp(piVar46,"pmic4-ftsmps");
                                                    if (iVar7 == 0) {
                                                        iVar11 = 3;
                                                    }
                                                    else {
                                                        iVar7 = strcmp(piVar46,"pmic4-bob");
                                                        if (iVar7 == 0) {
                                                            iVar11 = 4;
                                                        }
                                                        else {
                                                            iVar7 = strcmp(piVar46,"pmic5-ldo");
                                                            if (iVar7 == 0) {
                                                                iVar11 = 5;
                                                            }
                                                            else {
                                                                iVar7 = strcmp(piVar46,"pmic5-hfsmps");
                                                                if (iVar7 == 0) {
                                                                    iVar11 = 6;
                                                                }
                                                                else {
                                                                    iVar7 = strcmp(piVar46,"pmic5-ftsmps");
                                                                    if (iVar7 == 0) {
                                                                        iVar11 = 7;
                                                                    }
                                                                    else {
                                                                        iVar7 = strcmp(piVar46,"pmic5-bob");
                                                                        if (iVar7 != 0) {
                                                                            _printk(0x80003a4,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,"qcom,regulator-type",
                                                                                    piVar46);
                                                                            uVar47 = 0xffffffea;
                                                                            goto code_r0x08003620;
                                                                        }
                                                                        iVar11 = 8;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            piVar13 = *(obj.rpmh_regulator_mode_map + iVar11 * 8);
                                            *(piVar10 + 0x4c) = iVar11;
                                            iVar7 = of_property_read_variable_u32_array
                                                              (piVar12,"qcom,disable-mode",&uStack_a4,1,0);
                                            if (iVar7 < 0) {
code_r0x0800277c:
                                                iVar11 = of_find_property(piVar12,"qcom,supported-modes",&uStack_6c);
                                                if (iVar11 == 0) goto code_r0x08002984;
                                                uVar47 = (uStack_6c << 0x20) >> 0x22;
                                                uStack_6c = uStack_6c >> 2;
                                                auVar1._8_8_ = 0;
                                                auVar1._0_8_ = uVar47;
                                                if (SUB168(auVar1 * ZEXT816(0xc),8) == 0) {
                                                    iVar11 = devm_kmalloc(*piVar10,(uVar47 + uStack_6c * 2) * 4,0xdc0)
                                                    ;
                                                    piVar10[0x15] = iVar11;
                                                    if (iVar11 != 0) {
                                                        *(piVar10 + 0x16) = uStack_6c;
                                                        if ((uStack_6c >> 0x3e == 0) &&
                                                           (pcVar45 = __kmalloc(uStack_6c << 2,0xdc0), pcVar45 != NULL
                                                           )) {
                                                            uVar6 = of_property_read_variable_u32_array
                                                                              (piVar12,"qcom,supported-modes",pcVar45
                                                                               ,uStack_6c,0);
                                                            if (uVar6 < 0) {
                                                                iVar11 = *unaff_x24;
                                                                pcVar18 = "qcom,supported-modes";
                                                            }
                                                            else {
                                                                if (0 < uStack_6c) {
                                                                    iVar7 = 0;
                                                                    do {
                                                                        uVar6 = *(pcVar45 + iVar7 * 4);
                                                                        uVar47 = uVar6;
                                                                        iVar11 = iVar7;
                                                                        if (4 < uVar6) {
                                                                            _printk(0x80006d4,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,iVar11,
                                                                                    "qcom,supported-modes");
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        if (*(piVar13 + uVar47 * 0xc + 4) == 0) {
                                                                            _printk(0x80002b2,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,iVar11,
                                                                                    "qcom,supported-modes",uVar47,
                                                                                    piStack_a0);
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        *(piVar10[0x15] + iVar11 * 0xc) =
                                                                             *(piVar13 + uVar47 * 0xc);
                                                                        *(piVar10[0x15] + iVar11 * 0xc + 4) =
                                                                             *(piVar13 +
                                                                              *(pcVar45 + iVar11 * 4) * 0xc + 4);
                                                                        if ((iVar7 != 0) &&
                                                                           (*(piVar10[0x15] + iVar11 * 0xc) <=
                                                                            *(piVar10[0x15] + (iVar7 - 1) * 0xc))) {
                                                                            _printk(0x80007db,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,"qcom,supported-modes");
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        iVar7 = iVar7 + 1;
                                                                    } while (iVar7 < uStack_6c);
                                                                }
                                                                uVar6 = of_property_read_variable_u32_array
                                                                                  (piVar12,
                                                            "qcom,mode-threshold-currents",pcVar45,uStack_6c,0);
                                                            if (-1 < uVar6) {
                                                                if (0 < uStack_6c) {
                                                                    iVar11 = 0;
                                                                    iVar36 = 8;
code_r0x0800292c:
                                                                    *(piVar10[0x15] + iVar36) = *(pcVar45 + iVar11 * 4);
                                                                    if ((iVar11 == 0) ||
                                                                       (*(piVar10[0x15] + (iVar11 - 1) * 0xc + 8) <
                                                                        *(piVar10[0x15] + iVar36)))
                                                                    goto code_r0x08002918;
                                                                    _printk(0x80007db,"rpmh_regulator_parse_vrm_modes"
                                                                            ,*unaff_x24,"qcom,mode-threshold-currents"
                                                                           );
                                                                    piVar13 = unaff_x21;
code_r0x08003614:
                                                                    uVar47 = 0xffffffea;
                                                                    goto code_r0x08003618;
                                                                }
code_r0x0800297c:
                                                                kfree(pcVar45);
                                                                piVar46 = pcVar45;
                                                                goto code_r0x08002984;
                                                            }
                                                            iVar11 = *unaff_x24;
                                                            pcVar18 = "qcom,mode-threshold-currents";
                                                            }
                                                            uVar47 = uVar6;
                                                            _printk(0x8000ce7,"rpmh_regulator_parse_vrm_modes",iVar11
                                                                    ,pcVar18,uVar47);
code_r0x08003618:
                                                            kfree(pcVar45);
                                                            goto code_r0x08003620;
                                                        }
                                                    }
                                                    uVar47 = 0xfffffff4;
                                                    pcVar45 = piVar46;
                                                }
                                                else {
                                                    uVar47 = 0xfffffff4;
                                                    piVar10[0x15] = 0;
                                                }
                                            }
                                            else {
                                                uVar47 = uStack_a4;
                                                if (uStack_a4 < 5) {
                                                    if (*(piVar13 + uVar47 * 0xc + 4) != 0) {
                                                        *(piVar10 + 0xb4) = *(piVar13 + uVar47 * 0xc);
                                                        goto code_r0x0800277c;
                                                    }
                                                    _printk(0x8000bc0,"rpmh_regulator_parse_vrm_modes",*unaff_x24,
                                                            uVar47,piStack_a0);
                                                    uVar47 = 0xffffffea;
                                                }
                                                else {
                                                    _printk(0x8000d60,"rpmh_regulator_parse_vrm_modes",*unaff_x24);
                                                    uVar47 = 0xffffffea;
                                                }
                                            }
                                        }
                                        else {
                                            uVar47 = uVar6;
                                            _printk(0x8000ce7,"rpmh_regulator_parse_vrm_modes",*unaff_x24,
                                                    "qcom,regulator-type",uVar47);
                                        }
code_r0x08003620:
                                        iVar11 = *unaff_x24;
                                        uVar14 = 0x80009fe;
                                        goto code_r0x0800362c;
                                    }
                                }
code_r0x08002984:
                                iVar11 = of_find_property(piStack_c0,"qcom,always-wait-for-ack",0);
                                *(piVar10 + 0x14) = 0;
                                *(piVar10 + 0x94) = iVar11 != 0;
                                iVar11 = of_get_next_available_child(*(*piVar10 + 0x2f0),0);
                                pcVar45 = piVar46;
                                if (iVar11 != 0) {
                                    pcVar45 = "compatible";
                                    do {
                                        iVar36 = of_find_property(iVar11,"compatible",0);
                                        if (iVar36 == 0) {
                                            *(piVar10 + 0x14) = piVar10[0x14] + 1;
                                        }
                                        iVar11 = of_get_next_available_child(*(*piVar10 + 0x2f0),iVar11);
                                        piVar12 = NULL;
                                    } while (iVar11 != 0);
                                }
                                iVar7 = piVar10[0x14];
                                if (iVar7 == 0) {
                                    _printk(0x800030a,"rpmh_regulator_allocate_vreg",*unaff_x24);
                                    uVar47 = 0xffffffed;
                                }
                                else {
                                    auVar2._8_8_ = 0;
                                    auVar2._0_8_ = iVar7;
                                    if (SUB168(auVar2 * ZEXT816(0x170),8) == 0) {
                                        iVar11 = devm_kmalloc(*piVar10,iVar7 * 0x170,0xdc0);
                                        piVar10[0x13] = iVar11;
                                        if (iVar11 != 0) {
                                            piStack_e0 = unaff_x24;
                                            piStack_d8 = unaff_x21;
                                            piStack_d0 = param_1;
                                            piVar12 = of_get_next_available_child(*(*piVar10 + 0x2f0),0);
                                            if (piVar12 != NULL) {
                                                unaff_x21 = NULL;
                                                pcVar45 = "compatible";
                                                param_1 = "regulator-name";
                                                do {
                                                    iVar11 = of_find_property(piVar12,"compatible",0);
                                                    if (iVar11 == 0) {
                                                        iVar7 = unaff_x21;
                                                        *(piVar10[0x13] + iVar7 * 0x170) = piVar12;
                                                        *(piVar10[0x13] + iVar7 * 0x170 + 0x148) = piVar10;
                                                        uVar6 = of_property_read_string
                                                                          (piVar12,"regulator-name",
                                                                           piVar10[0x13] + iVar7 * 0x170 + 8);
                                                        unaff_x24 = piStack_e0;
                                                        if (uVar6 != 0) {
                                                            uVar47 = uVar6;
                                                            _printk(0x8000b7a,"rpmh_regulator_allocate_vreg",
                                                                    *piStack_e0,uVar47);
                                                            goto code_r0x080033c4;
                                                        }
                                                        unaff_x21 = iVar7 + 1;
                                                    }
                                                    piVar12 = of_get_next_available_child(*(*piVar10 + 0x2f0),piVar12);
                                                    unaff_x24 = 0x170;
                                                } while (piVar12 != NULL);
                                            }
                                            piVar13 = unaff_x21;
                                            if (0 < piVar10[0x14]) {
                                                iVar7 = 0;
                                                piStack_b8 = piVar10;
                                                do {
                                                    unaff_x24 = piVar10[0x13];
                                                    unaff_x21 = iVar7;
                                                    uStack_a4 = 0;
                                                    param_1 = unaff_x24 + iVar7 * 0x2e;
                                                    unaff_x26 = **(param_1 + 0x148);
                                                    uStack_80 = 0;
                                                    uStack_78 = 0;
                                                    uVar6 = *(*(param_1 + 0x148) + 9);
                                                    piVar12 = uVar6;
                                                    piStack_90 = NULL;
                                                    iStack_88 = 0;
                                                    piStack_a0 = NULL;
                                                    piStack_98 = NULL;
                                                    iVar11 = devm_kmalloc(unaff_x26,0x128,0xdc0);
                                                    if (iVar11 == 0) {
code_r0x080033d4:
                                                        uVar47 = 0xfffffff4;
code_r0x080036d8:
                                                        unaff_x20 = 0x170;
                                                        _printk(0x8000230,"rpmh_regulator_probe",
                                                                *(piVar10[0x13] + unaff_x21 * 0x170 + 8),piVar10[1],
                                                                uVar47 & 0xffffffff);
                                                        unaff_x25 = param_1;
                                                        goto code_r0x08003704;
                                                    }
                                                    if (2 < uVar6) goto code_r0x08003744;
                                                    memcpy(iVar11,*(obj.rpmh_regulator_ops + piVar12 * 8),0x128);
                                                    iVar36 = *param_1;
                                                    piStack_b0 = unaff_x24 + unaff_x21 * 0x2e + 1;
                                                    unaff_x24[unaff_x21 * 0x2e + 0xb] = obj.__this_module;
                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x54) = 0;
                                                    unaff_x24[unaff_x21 * 0x2e + 9] = iVar11;
                                                    piVar13 = of_get_regulator_init_data(unaff_x26,iVar36);
                                                    if (piVar13 == NULL) goto code_r0x080033d4;
                                                    uVar20 = *(piVar13 + 0x14);
                                                    *(piVar13 + 0x44) = uVar20;
                                                    if (uVar6 == 0) {
                                                        uVar20 = uVar20 & (uVar20 >> 0x1f ^ 0xffffffffU);
                                                        uVar22 = *(piVar13 + 2) & (*(piVar13 + 2) >> 0x1f ^ 0xffffffffU)
                                                        ;
                                                        if (0x7cfc17 < uVar22) {
                                                            uVar22 = 0x7cfc18;
                                                        }
                                                        if (0x7cfc17 < uVar20) {
                                                            uVar20 = 0x7cfc18;
                                                        }
                                                        *(piVar13 + 2) = uVar22;
                                                        *(piVar13 + 0x14) = uVar20;
                                                        if (*(iVar11 + 8) == 0) goto code_r0x08002c0c;
code_r0x08002c14:
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 1;
                                                    }
                                                    else {
                                                        if (*(iVar11 + 8) != 0) goto code_r0x08002c14;
code_r0x08002c0c:
                                                        if (*(iVar11 + 0x18) != 0) goto code_r0x08002c14;
                                                    }
                                                    if ((uVar6 == 2) && (*(piVar13 + 2) == uVar20)) {
                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x6c) = uVar20;
                                                    }
                                                    unaff_x27 = param_1 + 0x148;
                                                    iVar36 = *unaff_x27;
                                                    if (*(iVar36 + 0xb0) == 0) {
                                                        *(iVar11 + 0xd8) = 0;
                                                        *(iVar11 + 0x88) = 0;
                                                        *(iVar11 + 0x90) = 0;
                                                    }
                                                    else {
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 0x14;
                                                        iVar36 = *unaff_x27;
                                                        if (0 < *(iVar36 + 0xb0)) {
                                                            iVar25 = 0;
                                                            uVar20 = *(piVar13 + 0x3c);
                                                            iVar32 = 4;
                                                            do {
                                                                iVar25 = iVar25 + 1;
                                                                puVar16 = *(iVar36 + 0xa8) + iVar32;
                                                                iVar32 = iVar32 + 0xc;
                                                                uVar20 = *puVar16 | uVar20;
                                                                *(piVar13 + 0x3c) = uVar20;
                                                                iVar36 = *unaff_x27;
                                                            } while (iVar25 < *(iVar36 + 0xb0));
                                                        }
                                                    }
                                                    if ((uVar6 == 1) && (*(iVar36 + 0x50) != 0)) {
                                                        *(iVar11 + 0x78) = 0;
                                                        *(iVar11 + 0x80) = 0;
                                                        *(iVar11 + 0x70) = 0;
                                                    }
                                                    if (*(iVar11 + 0x70) != 0) {
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 8;
                                                    }
                                                    pcVar45 = piVar13;
                                                    if (uVar6 != 0) {
                                                        if (uVar6 == 2) {
                                                            uVar21 = 1;
                                                            goto code_r0x08002d0c;
                                                        }
                                                        if (uVar6 == 1) {
                                                            uVar21 = *(*unaff_x27 + 0x90);
                                                            goto code_r0x08002d0c;
                                                        }
                                                        uVar47 = 0xffffffea;
                                                        goto code_r0x080036d8;
                                                    }
                                                    uVar21 = 2;
code_r0x08002d0c:
                                                    iVar11 = *param_1;
                                                    *(unaff_x24 + unaff_x21 * 0x2e + 8) = uVar21;
                                                    uVar6 = of_property_read_variable_u32_array
                                                                      (iVar11,"qcom,set",&uStack_a4,1,0);
                                                    if (uVar6 < 0) {
                                                        uVar47 = uVar6;
                                                        _printk(0x8000925,"rpmh_regulator_init_vreg",*piStack_b0,
                                                                uVar47);
                                                        goto code_r0x080036d8;
                                                    }
                                                    if ((uStack_a4 & 3) != 0) {
                                                        piVar10 = unaff_x24 + unaff_x21 * 0x2e + 1;
                                                        iVar11 = *piVar10;
                                                        *(unaff_x24 + unaff_x21 * 0x2e + 0x2a) = uStack_a4 & 1;
                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x151) = uStack_a4 >> 1 & 1;
                                                        iVar11 = strlen(iVar11);
                                                        piVar12 = iVar11 + 0x10;
                                                        iVar11 = __kmalloc(piVar12,0xdc0);
                                                        if (iVar11 == 0) {
code_r0x080033dc:
                                                            uVar14 = 0x8000951;
                                                            uVar17 = 0xfffffff4;
                                                            iVar11 = *piStack_b0;
                                                            uVar47 = 0xfffffff4;
                                                        }
                                                        else {
                                                            scnprintf(iVar11,piVar12,"%s-parent-supply",*piVar10);
                                                            iVar36 = of_find_property(*(**unaff_x27 + 0x2f0),iVar11,0)
                                                            ;
                                                            if ((iVar36 == 0) &&
                                                               (iVar36 = of_find_property(*param_1,iVar11,0),
                                                               iVar36 == 0)) {
                                                                piVar12 = of_find_property(*param_1,"vin-supply",0);
                                                                kfree(iVar11);
                                                                iVar11 = 0x8000791;
                                                                if (piVar12 != NULL) goto code_r0x08002e04;
                                                            }
                                                            else {
                                                                kfree(iVar11);
                                                                iVar11 = strlen(*piVar10);
                                                                piVar12 = iVar11 + 10;
                                                                iVar11 = devm_kmalloc(**unaff_x27,piVar12,0xdc0);
                                                                if (iVar11 == 0) goto code_r0x080033dc;
                                                                scnprintf(iVar11,piVar12,"%s-parent",*piVar10);
code_r0x08002e04:
                                                                unaff_x24[unaff_x21 * 0x2e + 2] = iVar11;
                                                            }
                                                            pcVar45 = piStack_b0;
                                                            iStack_88 = *param_1;
                                                            uStack_6c = 0;
                                                            iVar8 = *(*unaff_x27 + 0x48);
                                                            piStack_a0 = unaff_x26;
                                                            piStack_98 = piVar13;
                                                            piStack_90 = param_1;
                                                            if (iVar8 != 0) {
                                                                if (iVar8 == 2) {
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (iStack_88,"qcom,init-enable",
                                                                                       &uStack_6c,1,0);
                                                                    if (-1 < iVar8) {
                                                                        uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164)
                                                                        ;
                                                                        *(unaff_x24 + unaff_x21 * 0x2e + 0x2b) =
                                                                             uStack_6c != 0;
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                             uVar6 | 2;
                                                                    }
                                                                }
                                                                else if (iVar8 == 1) {
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (iStack_88,
                                                                                       "qcom,init-voltage-level",
                                                                                       &uStack_6c,1,0);
                                                                    if (iVar8 < 0) {
code_r0x0800328c:
                                                                        iVar11 = *param_1;
                                                                        pcVar18 = "qcom,min-dropout-voltage-level";
                                                                        goto code_r0x0800329c;
                                                                    }
                                                                    iVar11 = *unaff_x27;
                                                                    iVar8 = *(iVar11 + 0x90);
                                                                    if (0 < iVar8) {
                                                                        if (uStack_6c <= *(iVar11 + 0x50)) {
                                                                            uVar21 = 0;
code_r0x08003270:
                                                                            *(unaff_x24 + unaff_x21 * 0x170 + 0x154) =
                                                                                 uVar21;
                                                                            *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                                 *(unaff_x24 + unaff_x21 * 0x170 + 0x164
                                                                                  ) | 1;
                                                                            goto code_r0x0800328c;
                                                                        }
                                                                        if (iVar8 != 1) {
                                                                            if (uStack_6c <= *(iVar11 + 0x54)) {
                                                                                uVar21 = 1;
                                                                                goto code_r0x08003270;
                                                                            }
                                                                            if (iVar8 != 2) {
                                                                                if (uStack_6c <= *(iVar11 + 0x58)) {
                                                                                    uVar21 = 2;
                                                                                    goto code_r0x08003270;
                                                                                }
                                                                                if (iVar8 != 3) {
                                                                                    if (uStack_6c <= *(iVar11 + 0x5c)) {
                                                                                        uVar21 = 3;
                                                                                        goto code_r0x08003270;
                                                                                    }
                                                                                    if (iVar8 != 4) {
                                                                                        if (uStack_6c <=
                                                                                            *(iVar11 + 0x60)) {
                                                                                            uVar21 = 4;
                                                                                            goto code_r0x08003270;
                                                                                        }
                                                                                        if (iVar8 != 5) {
                                                                                            if (uStack_6c <=
                                                                                                *(iVar11 + 100)) {
                                                                                                uVar21 = 5;
                                                                                                goto code_r0x08003270;
                                                                                            }
                                                                                            if (iVar8 != 6) {
                                                                                                if (uStack_6c <=
                                                                                                    *(iVar11 + 0x68)) {
                                                                                                    uVar21 = 6;
                                                                                                    goto 
                                                            code_r0x08003270;
                                                            }
                                                            if (iVar8 != 7) {
                                                                if (uStack_6c <= *(iVar11 + 0x6c)) {
                                                                    uVar21 = 7;
                                                                    goto code_r0x08003270;
                                                                }
                                                                if (iVar8 != 8) {
                                                                    if (uStack_6c <= *(iVar11 + 0x70)) {
                                                                        uVar21 = 8;
                                                                        goto code_r0x08003270;
                                                                    }
                                                                    if (iVar8 != 9) {
                                                                        if (uStack_6c <= *(iVar11 + 0x74)) {
                                                                            uVar21 = 9;
                                                                            goto code_r0x08003270;
                                                                        }
                                                                        if (iVar8 != 10) {
                                                                            if (uStack_6c <= *(iVar11 + 0x78)) {
                                                                                uVar21 = 10;
                                                                                goto code_r0x08003270;
                                                                            }
                                                                            if (iVar8 != 0xb) {
                                                                                if (uStack_6c <= *(iVar11 + 0x7c)) {
                                                                                    uVar21 = 0xb;
                                                                                    goto code_r0x08003270;
                                                                                }
                                                                                if (iVar8 != 0xc) {
                                                                                    if (uStack_6c <= *(iVar11 + 0x80)) {
                                                                                        uVar21 = 0xc;
                                                                                        goto code_r0x08003270;
                                                                                    }
                                                                                    if (iVar8 != 0xd) {
                                                                                        if (uStack_6c <=
                                                                                            *(iVar11 + 0x84)) {
                                                                                            uVar21 = 0xd;
                                                                                            goto code_r0x08003270;
                                                                                        }
                                                                                        if (iVar8 != 0xe) {
                                                                                            pcVar45 = piStack_b0;
                                                                                            if (uStack_6c <=
                                                                                                *(iVar11 + 0x88)) {
                                                                                                uVar21 = 0xe;
                                                                                                goto code_r0x08003270;
                                                                                            }
                                                                                            if (iVar8 != 0xf) {
                                                                                                if (uStack_6c <=
                                                                                                    *(iVar11 + 0x8c)) {
                                                                                                    uVar21 = 0xf;
                                                                                                    goto 
                                                            code_r0x08003270;
                                                            }
                                                            if (iVar8 != 0x10) {
code_r0x08003744:
    //WARNING: Does not return
                                                                pcVar3 = SoftwareBreakpoint(0x5512,0x8003748);
                                                                (*pcVar3)();
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            iVar11 = *piVar10;
                                                            pcVar18 = "qcom,init-voltage-level";
                                                            goto code_r0x080036b0;
                                                            }
code_r0x080032b8:
                                                            uVar47 = devm_regulator_register
                                                                               (unaff_x26,pcVar45,&piStack_a0);
                                                            piVar12 = unaff_x24 + unaff_x21 * 0x2e + 0x28;
                                                            unaff_x24[unaff_x21 * 0x2e + 0x28] = uVar47;
                                                            if (uVar47 < 0xfffffffffffff001) {
                                                                iVar8 = devm_regulator_proxy_consumer_register
                                                                                  (unaff_x26,*param_1);
                                                                piVar10 = piStack_b8;
                                                                if (iVar8 != 0) {
                                                                    _printk(0x800075d,"rpmh_regulator_init_vreg",
                                                                            *pcVar45,iVar8);
                                                                }
                                                                uVar6 = devm_regulator_debug_register
                                                                                  (unaff_x26,*piVar12);
                                                                if (uVar6 != 0) {
                                                                    iVar11 = *pcVar45;
                                                                    uVar14 = 0x80005f1;
                                                                    goto code_r0x08003314;
                                                                }
                                                            }
                                                            else {
                                                                iVar11 = *pcVar45;
                                                                *piVar12 = 0;
                                                                _printk(0x800072a,"rpmh_regulator_init_vreg",iVar11,
                                                                        uVar47 & 0xffffffff);
                                                                piVar10 = piStack_b8;
                                                                if (uVar47 != 0) goto code_r0x080036d8;
                                                            }
                                                            goto code_r0x08002b24;
                                                            }
                                                            iVar8 = of_property_read_variable_u32_array
                                                                              (iStack_88,"qcom,init-enable",&uStack_6c
                                                                               ,1,0);
                                                            pcVar45 = piStack_b0;
                                                            if (-1 < iVar8) {
                                                                uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164);
                                                                *(unaff_x24 + unaff_x21 * 0x2e + 0x2b) = uStack_6c != 0;
                                                                *(unaff_x24 + unaff_x21 * 0x170 + 0x164) = uVar6 | 2;
                                                            }
                                                            iVar8 = of_property_read_variable_u32_array
                                                                              (*param_1,"qcom,init-voltage",&uStack_6c
                                                                               ,1,0);
                                                            if (iVar8 < 0) {
code_r0x08003048:
                                                                iVar8 = of_property_read_variable_u32_array
                                                                                  (*param_1,"qcom,init-mode",
                                                                                   &uStack_6c,1,0);
                                                                if (iVar8 < 0) {
code_r0x08003190:
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (*param_1,
                                                                                       "qcom,init-headroom-voltage",
                                                                                       &uStack_6c,1,0);
                                                                    if (-1 < iVar8) {
                                                                        if (0x7cc18 < uStack_6c) {
                                                                            iVar11 = *piVar10;
                                                                            pcVar18 = "qcom,init-headroom-voltage";
                                                                            goto code_r0x080036b0;
                                                                        }
                                                                        uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164)
                                                                        ;
                                                                        *(unaff_x24 + unaff_x21 * 0x2e + 0x2c) =
                                                                             uStack_6c / 1000;
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                             uVar6 | 8;
                                                                    }
                                                                    iVar11 = *param_1;
                                                                    pcVar18 = "qcom,min-dropout-voltage";
code_r0x0800329c:
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (iVar11,pcVar18,&uStack_6c,1,0
                                                                                      );
                                                                    if (-1 < iVar8) {
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x74) =
                                                                             uStack_6c;
                                                                    }
                                                                    goto code_r0x080032b8;
                                                                }
                                                                if (4 < uStack_6c) {
                                                                    iVar11 = *piVar10;
                                                                    pcVar18 = "qcom,init-mode";
                                                                    goto code_r0x080036b0;
                                                                }
                                                                iVar11 = *unaff_x27;
                                                                uVar6 = *(iVar11 + 0x4c);
                                                                if (uVar6 == 0) {
                                                                    _printk(0x8000161,
                                                                            "rpmh_regulator_load_default_parameters",
                                                                            *piVar10,"qcom,init-mode");
                                                                }
                                                                else {
                                                                    if (8 < uVar6) goto code_r0x08003744;
                                                                    if (*(*(obj.rpmh_regulator_mode_map + uVar6 * 8) +
                                                                          uStack_6c * 0xc + 4) != 0) {
                                                                        piVar33 = *(obj.rpmh_regulator_mode_map +
                                                                                   uVar6 * 8) + uStack_6c * 0xc;
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x15c) =
                                                                             *piVar33;
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                             *(unaff_x24 + unaff_x21 * 0x170 + 0x164) |
                                                                             4;
                                                                        if (0 < *(iVar11 + 0xb0)) {
                                                                            uVar47 = 0;
                                                                            piVar23 = *(iVar11 + 0xa8);
                                                                            do {
                                                                                if (*piVar23 == *piVar33) {
                                                                                    *(unaff_x24 +
                                                                                     unaff_x21 * 0x2e + 0x2d) = uVar47;
                                                                                    break;
                                                                                }
                                                                                uVar47 = uVar47 + 1;
                                                                                piVar23 = piVar23 + 3;
                                                                            } while (*(iVar11 + 0xb0) != uVar47);
                                                                        }
                                                                        goto code_r0x08003190;
                                                                    }
                                                                    _printk(0x8000c61,
                                                                            "rpmh_regulator_load_default_parameters",
                                                                            *piVar10,"qcom,init-mode");
                                                                }
                                                            }
                                                            else {
                                                                if (uStack_6c < 0x7cfc19) {
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x154) =
                                                                         uStack_6c / 1000;
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                         *(unaff_x24 + unaff_x21 * 0x170 + 0x164) | 1;
                                                                    goto code_r0x08003048;
                                                                }
                                                                iVar11 = *piVar10;
                                                                pcVar18 = "qcom,init-voltage";
code_r0x080036b0:
                                                                _printk(0x80008d4,
                                                                        "rpmh_regulator_load_default_parameters",iVar11
                                                                        ,pcVar18);
                                                            }
                                                            iVar11 = *pcVar45;
                                                            uVar14 = 0x80005bd;
                                                            uVar17 = 0xffffffea;
                                                            uVar47 = 0xffffffea;
                                                            piVar13 = pcVar45;
                                                        }
                                                        _printk(uVar14,"rpmh_regulator_init_vreg",iVar11,uVar17);
                                                        pcVar45 = piVar13;
                                                        piVar10 = piStack_b8;
                                                        goto code_r0x080036d8;
                                                    }
                                                    uVar14 = 0x800056e;
                                                    iVar11 = *piStack_b0;
                                                    uVar6 = uStack_a4;
code_r0x08003314:
                                                    _printk(uVar14,"rpmh_regulator_init_vreg",iVar11,uVar6);
code_r0x08002b24:
                                                    unaff_x20 = 0x170;
                                                    iVar7 = iVar7 + 1;
                                                    piVar13 = unaff_x21;
                                                } while (iVar7 < piVar10[0x14]);
                                            }
                                            iVar11 = of_find_property(piStack_c0,"qcom,send-defaults",0);
                                            piVar12 = piStack_d0;
                                            unaff_x21 = piStack_d8;
                                            unaff_x25 = param_1;
                                            if (iVar11 != 0) {
                                                mutex_lock(piStack_d8);
                                                uVar6 = sym.rpmh_regulator_send_aggregate_requests(piVar10[0x13]);
                                                if (uVar6 != 0) {
                                                    uVar47 = uVar6;
                                                    _printk(0x80004ce,"rpmh_regulator_probe",*piStack_e0,uVar47);
                                                    mutex_unlock(unaff_x21);
                                                    goto code_r0x08003704;
                                                }
                                                mutex_unlock(unaff_x21);
                                                piVar13 = unaff_x21;
                                            }
                                            unaff_x21 = piVar13;
                                            of_platform_populate(piVar12[0x60],0,0,piStack_c8);
                                            uVar47 = 0;
                                            piVar12[0x15] = piVar10;
                                            goto code_r0x08003704;
                                        }
                                        uVar47 = 0xfffffff4;
                                    }
                                    else {
                                        uVar47 = 0xfffffff4;
                                        piVar10[0x13] = 0;
                                    }
                                }
code_r0x080033c4:
                                iVar11 = *unaff_x24;
                                uVar14 = 0x8000a92;
                                piVar13 = unaff_x21;
                            }
                        }
code_r0x0800362c:
                        unaff_x21 = piVar13;
                        _printk(uVar14,"rpmh_regulator_probe",iVar11,uVar47 & 0xffffffff);
                        unaff_x25 = param_1;
                    }
                }
                else {
                    uVar47 = uVar6;
                    _dev_err(piVar12,"qcom,resource-name missing in DT node\n");
                }
            }
        }
    }
code_r0x08003704:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar47 & 0xffffffff;
    }
    iVar36 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_regulator_send_aggregate_requests;
    puStack_140 = &stack0xffffffffffffffa0;
    pcStack_138 = sym.rpmh_regulator_send_aggregate_requests;
    piStack_130 = unaff_x27;
    piStack_120 = unaff_x26;
    piStack_118 = unaff_x25;
    piStack_110 = unaff_x24;
    uStack_108 = uVar47;
    piStack_100 = pcVar45;
    piStack_f8 = unaff_x21;
    uStack_f0 = unaff_x20;
    piStack_e8 = piVar12;
    iVar11 = sp_el0;
    iStack_148 = *(iVar11 + 0x5e0);
    puVar48 = *(iVar36 + 0x148);
    uStack_150 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    auStack_1a8[8] = 0;
    auStack_1a8[9] = 0;
    auStack_1a8[10] = 0;
    auStack_1a8[0xb] = 0;
    auStack_1a8[4] = 0;
    auStack_1a8[5] = 0;
    auStack_1a8[6] = 0;
    auStack_1a8[7] = 0;
    auStack_1a8[0] = 0;
    auStack_1a8[1] = 0;
    auStack_1a8[2] = 0;
    auStack_1a8[3] = 0;
    if (*(puVar48 + 0x94) == '\0') {
        bVar4 = *(puVar48 + 0x95) != '\0';
    }
    else {
        bVar4 = true;
    }
    uVar6 = *(puVar48 + 9);
    if (uVar6 < 3) {
        uVar20 = *(obj.max_reg_index_map + uVar6 * 4);
    }
    else {
        uVar20 = 0xffffffea;
    }
    uVar47 = *(puVar48 + 0x14);
    if (*(puVar48 + 0x14) < 1) {
        uVar22 = 0;
        uVar44 = 0;
        uVar9 = 0;
        uVar24 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar37 = 0;
        uVar38 = 0;
        if (uVar6 != 0) goto code_r0x08003920;
code_r0x0800396c:
        uVar6 = *(puVar48 + 0xb4);
        if (0 < uVar6) {
            if (((uStack_150 >> 1 & 1) != 0) && (uVar38 == 0)) {
                uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
                uStack_150 = uStack_150 | 2;
                uVar31 = uVar6;
            }
            if (((uStack_168 >> 1 & 1) != 0) && (uVar35 == 0)) {
                uStack_168 = uStack_168 | 2;
                uStack_170 = CONCAT44(uStack_170._4_4_,uVar6);
                uVar28 = uVar6;
code_r0x080039e4:
            }
        }
    }
    else {
        uVar44 = 0;
        uVar22 = 0;
        uVar27 = 0;
        uVar34 = 0;
        uVar39 = 0;
        uVar28 = 0;
        uVar9 = 0;
        uVar30 = 0;
        uVar37 = 0;
        uVar41 = 0;
        puVar16 = puVar48[0x13] + 0x164;
        do {
            if (puVar16[-5] != '\0') {
                if (0 < uVar20) {
                    if (uVar41 <= puVar16[-4]) {
                        uVar41 = puVar16[-4];
                    }
                    if (uVar20 != 1) {
                        if (uVar37 <= puVar16[-3]) {
                            uVar37 = puVar16[-3];
                        }
                        if (uVar20 != 2) {
                            if (uVar30 <= puVar16[-2]) {
                                uVar30 = puVar16[-2];
                            }
                            if (uVar20 != 3) {
                                if (uVar9 <= puVar16[-1]) {
                                    uVar9 = puVar16[-1];
                                }
                                if (uVar20 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar28 = *puVar16 | uVar28;
            }
            if (*(puVar16 + -0x13) != '\0') {
                if (0 < uVar20) {
                    if (uVar39 <= puVar16[-4]) {
                        uVar39 = puVar16[-4];
                    }
                    if (uVar20 != 1) {
                        if (uVar34 <= puVar16[-3]) {
                            uVar34 = puVar16[-3];
                        }
                        if (uVar20 != 2) {
                            if (uVar27 <= puVar16[-2]) {
                                uVar27 = puVar16[-2];
                            }
                            if (uVar20 != 3) {
                                if (uVar22 <= puVar16[-1]) {
                                    uVar22 = puVar16[-1];
                                }
                                if (uVar20 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar44 = *puVar16 | uVar44;
            }
            uVar47 = uVar47 - 1;
            puVar16 = puVar16 + 0x5c;
        } while (uVar47 != 0);
        uStack_160 = CONCAT44(uVar37,uVar41);
        uStack_158 = CONCAT44(uVar9,uVar30);
        uStack_150 = uVar28;
        uStack_178 = CONCAT44(uVar34,uVar39);
        uStack_170 = CONCAT44(uVar22,uVar27);
        uStack_168 = uVar44;
        uVar44 = uVar22;
        uVar28 = uVar27;
        uVar35 = uVar34;
        uVar40 = uVar39;
        uVar24 = uVar9;
        uVar31 = uVar30;
        uVar38 = uVar37;
        uVar42 = uVar41;
        if (uVar6 == 0) goto code_r0x0800396c;
code_r0x08003920:
        uVar44 = uVar22;
        uVar28 = uVar27;
        uVar35 = uVar34;
        uVar40 = uVar39;
        uVar24 = uVar9;
        uVar31 = uVar30;
        uVar38 = uVar37;
        uVar42 = uVar41;
        if (uVar6 == 1) {
            if (*(puVar48 + 10) == 0) {
                if ((uStack_150 >> 1 & 1) == 0) {
                    uStack_150 = uStack_150 & 0xfffffffe;
                }
                else if (uVar37 == 0) {
                    uVar42 = 0;
                    uStack_160 = uStack_160 & 0xffffffff00000000;
                }
                uStack_150 = uStack_150 & 0xfffffffd;
                if ((uStack_168 >> 1 & 1) == 0) {
                    uStack_168 = uStack_168 & 0xfffffffe;
                }
                else if (uVar34 == 0) {
                    uVar40 = 0;
                    uStack_178 = uStack_178 & 0xffffffff00000000;
                }
                uStack_168 = uStack_168 & 0xfffffffd;
            }
            else {
                uStack_168 = uStack_168 & 0xfffffffd;
                uStack_150 = uStack_150 & 0xfffffffd;
            }
            goto code_r0x080039e4;
        }
    }
    uVar6 = uStack_150;
    bVar5 = *(puVar48 + 0x96) == '\0';
    uVar47 = uStack_168;
    if (*(puVar48 + 0x96) == '\0') {
        if (uVar20 < 1) goto code_r0x08003c60;
        if ((uVar42 == uVar40) || ((uStack_168 & 1) == 0)) {
            if (uVar20 != 1) {
                if ((uVar38 != uVar35) && ((uStack_168 >> 1 & 1) != 0)) goto code_r0x08003a14;
                if (uVar20 != 2) {
                    if ((uVar31 != uVar28) && ((uStack_168 >> 2 & 1) != 0)) goto code_r0x08003a14;
                    if (uVar20 != 3) {
                        if ((uVar24 != uVar44) && ((uStack_168 >> 3 & 1) != 0)) goto code_r0x08003a14;
                        if (uVar20 != 4) goto code_r0x08003900;
                    }
                }
            }
            uVar22 = 0;
            bVar5 = false;
code_r0x08003b18:
            iVar11 = 0;
            uVar47 = 0;
            uVar30 = 0;
            uVar27 = 0;
            do {
                uVar26 = 1L << (uVar47 & 0x3f);
                if ((uVar26 & uVar6) != 0) {
                    if ((uVar26 & *(puVar48 + 0x19)) != 0) {
                        if (3 < uVar47) goto code_r0x08003900;
                        if (*(puVar48 + iVar11 + 0xb8) == *(&uStack_160 + iVar11) & (bVar5 ^ 1U)) goto code_r0x08003b48;
                    }
                    if ((3 < uVar27) || (auStack_1a8[uVar27 * 3] = iVar11 + *(puVar48 + 2), 3 < uVar47))
                    goto code_r0x08003900;
                    uVar15 = uVar27;
                    uVar9 = *(&uStack_160 + iVar11);
                    uVar27 = uVar27 + 1;
                    uVar30 = uVar30 | uVar26;
                    auStack_1a8[uVar15 * 3 + 1] = uVar9;
                    auStack_1a8[uVar15 * 3 + 2] = uVar22;
                    bVar4 = *(puVar48 + iVar11 + 0xb8) < uVar9 | bVar4;
                }
code_r0x08003b48:
                uVar47 = uVar47 + 1;
                iVar11 = iVar11 + 4;
            } while (uVar20 != uVar47);
            if (uVar27 < 1) goto code_r0x08003c60;
            if (uVar22 == 0) {
code_r0x08003c44:
                if (bVar4) {
                    uVar9 = rpmh_write();
                }
                else {
                    uVar9 = rpmh_write_async(*puVar48,2,auStack_1a8,uVar27);
                }
                if (uVar9 == 0) {
                    sym.rpmh_regulator_req(iVar36,&uStack_160,puVar48 + 0x17,uVar30);
                    *(puVar48 + 0x95) = 0;
                    puVar48[0x17] = uStack_160;
                    puVar48[0x18] = uStack_158;
                    *(puVar48 + 0x19) = uStack_150;
                    goto code_r0x08003ca0;
                }
                uVar17 = puVar48[1];
                uVar14 = 0x800084d;
                pcVar45 = "active";
            }
            else {
                uVar9 = rpmh_write_async(*puVar48,1,auStack_1a8,uVar27);
                if (uVar9 == 0) {
                    sym.rpmh_regulator_req(iVar36,&uStack_160,puVar48 + 0x17,uVar30);
                    if (3 < uVar27) {
code_r0x08003900:
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8003904);
                        (*pcVar3)();
                    }
                    if (0x28 < uVar27 * 0xc) goto code_r0x08003da4;
                    auStack_1a8[uVar27 * 3 + 2] = 0;
                    goto code_r0x08003c44;
                }
                uVar17 = puVar48[1];
                uVar14 = 0x800034c;
                pcVar45 = "wake  ";
            }
            _printk(uVar14,"rpmh_regulator_send_aggregate_requests",uVar17,pcVar45,uVar9);
        }
        else {
code_r0x08003a14:
            iVar11 = 0;
            uVar26 = 0;
            uVar22 = 0;
            uVar15 = 0;
            do {
                uVar43 = 1L << (uVar26 & 0x3f);
                uVar19 = uVar15;
                if ((uVar43 & uVar47) != 0) {
                    if ((uVar43 & *(puVar48 + 0xdc)) != 0) {
                        if (3 < uVar26) goto code_r0x08003900;
                        if (*(puVar48 + iVar11 + 0xcc) == *(&uStack_178 + iVar11)) goto code_r0x08003a40;
                    }
                    if ((3 < uVar15) || (auStack_1a8[uVar15 * 3] = iVar11 + *(puVar48 + 2), 3 < uVar26))
                    goto code_r0x08003900;
                    uVar19 = uVar15 + 1;
                    uVar22 = uVar22 | uVar43;
                    auStack_1a8[uVar15 * 3 + 1] = *(&uStack_178 + iVar11);
                }
code_r0x08003a40:
                uVar26 = uVar26 + 1;
                iVar11 = iVar11 + 4;
                uVar15 = uVar19;
            } while (uVar20 != uVar26);
            if (uVar19 < 1) {
code_r0x08003b0c:
                if (uVar20 < 1) goto code_r0x08003c60;
                uVar22 = 1;
                goto code_r0x08003b18;
            }
            uVar9 = rpmh_write_async(*puVar48,0,auStack_1a8);
            if (uVar9 == 0) {
                sym.rpmh_regulator_req(iVar36,&uStack_178,puVar48 + 0xcc,uVar22);
                *(puVar48 + 0x96) = 1;
                *(puVar48 + 0xcc) = uStack_178;
                *(puVar48 + 0xd4) = uStack_170;
                *(puVar48 + 0xdc) = uStack_168;
                goto code_r0x08003b0c;
            }
            _printk(0x8000af9,"rpmh_regulator_send_aggregate_requests",puVar48[1],uVar9);
        }
    }
    else {
        if (0 < uVar20) goto code_r0x08003a14;
code_r0x08003c60:
        uVar9 = 0;
    }
code_r0x08003ca0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    __stack_chk_fail();
code_r0x08003da4:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8003da8);
    (*pcVar3)();
code_r0x08002918:
    iVar11 = iVar11 + 1;
    iVar36 = iVar36 + 0xc;
    if (uStack_6c <= iVar11) goto code_r0x0800297c;
    goto code_r0x0800292c;
}


// ===== sym.init_module @ 0x08002248 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800227c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.rpmh_regulator_probe @ 0x080022a8 (size 5284) =====

uint64_t sym.rpmh_regulator_probe(int64_t arg1)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    code *pcVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong uVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    ulong uVar17;
    char *pcVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint uVar21;
    uint32_t uVar22;
    int *piVar23;
    uint32_t uVar24;
    int64_t iVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint8_t *puVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    int64_t iVar32;
    int *piVar33;
    uint32_t uVar34;
    uint32_t uVar35;
    int64_t iVar36;
    uint32_t uVar37;
    uint32_t uVar38;
    uint32_t uVar39;
    uint32_t uVar40;
    uint32_t uVar41;
    uint32_t uVar42;
    uint64_t uVar43;
    uint32_t uVar44;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x20;
    int64_t *unaff_x21;
    char *pcVar45;
    int64_t *piVar46;
    uint64_t uVar47;
    ulong *puVar48;
    int64_t *unaff_x24;
    char *unaff_x25;
    int64_t *unaff_x26;
    int64_t *unaff_x27;
    ulong unaff_x30;
    uint32_t auStack_1a8 [12];
    ulong uStack_178;
    ulong uStack_170;
    uint32_t uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    uint32_t uStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    int64_t *piStack_130;
    int64_t *piStack_120;
    int64_t *piStack_118;
    int64_t *piStack_110;
    uint64_t uStack_108;
    int64_t *piStack_100;
    int64_t *piStack_f8;
    ulong uStack_f0;
    int64_t *piStack_e8;
    int64_t *piStack_e0;
    int64_t *piStack_d8;
    int64_t *piStack_d0;
    int64_t *piStack_c8;
    int64_t *piStack_c0;
    int64_t *piStack_b8;
    int64_t *piStack_b0;
    uint32_t uStack_a4;
    int64_t *piStack_a0;
    int64_t *piStack_98;
    int64_t *piStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    piVar12 = arg1 + 0x10;
    iStack_68 = *(iVar11 + 0x5e0);
    pcVar45 = *(arg1 + 0x300);
    if (pcVar45 == NULL) {
        _dev_err(piVar12,"Device tree node is missing\n");
        uVar47 = 0xffffffea;
    }
    else {
        piVar10 = devm_kmalloc(piVar12,0xe0,0xdc0);
        unaff_x25 = arg1;
        if (piVar10 == NULL) {
            uVar47 = 0xfffffff4;
        }
        else {
            unaff_x21 = piVar10 + 3;
            *piVar10 = piVar12;
            __mutex_init(unaff_x21,"&aggr_vreg->lock",
                         reloc.rpmh_regulator_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            iVar11 = of_match_node(obj.rpmh_regulator_match_table,pcVar45);
            if (iVar11 == 0) {
                _dev_err(piVar12,"could not find compatible string match\n");
                uVar47 = 0xffffffed;
            }
            else {
                unaff_x24 = piVar10 + 1;
                *(piVar10 + 9) = *(iVar11 + 0xc0);
                piStack_c0 = pcVar45;
                uVar6 = of_property_read_string(pcVar45,"qcom,resource-name",unaff_x24);
                if (uVar6 == 0) {
                    iVar7 = cmd_db_read_addr(piVar10[1]);
                    *(piVar10 + 2) = iVar7;
                    if (iVar7 == 0) {
                        _printk(0x800045b,"rpmh_regulator_probe");
                        uVar47 = 0xffffffed;
                    }
                    else {
                        uVar6 = cmd_db_read_slave_id(piVar10[1]);
                        uVar47 = uVar6;
                        piVar13 = unaff_x21;
                        if (uVar6 < 0) {
                            iVar11 = *unaff_x24;
                            uVar14 = 0x80003ea;
                        }
                        else {
                            iVar7 = piVar10[9];
                            if ((((iVar7 == 1) && (uVar6 != 3)) || ((iVar7 == 0 && (uVar6 != 4)))) ||
                               ((iVar7 == 2 && (uVar6 != 4)))) {
                                uVar14 = 0x8000711;
                                if (iVar7 != 0) {
                                    uVar14 = 0x8000cd0;
                                }
                                uVar17 = 0x80007d7;
                                if (iVar7 != 1) {
                                    uVar17 = uVar14;
                                }
                                _printk(0x800048f,"rpmh_regulator_probe",*unaff_x24,iVar7,uVar17,uVar47);
                                uVar47 = 0xffffffea;
                                goto code_r0x08003704;
                            }
                            piVar46 = pcVar45;
                            piStack_c8 = piVar12;
                            if (iVar7 == 1) {
                                piStack_a0 = NULL;
                                uVar47 = cmd_db_read_aux_data(*unaff_x24,&piStack_a0);
                                if (uVar47 < 0xfffffffffffff001) {
                                    if (piStack_a0 == NULL) {
                                        _printk(0x800027a,"rpmh_regulator_load_arc_level_mapping",*unaff_x24);
                                    }
                                    else if (piStack_a0 < 0x21) {
                                        if ((piStack_a0 & 1) == 0) {
                                            iVar7 = piStack_a0 >> 1;
                                            *(piVar10 + 0x12) = iVar7;
                                            if (iVar7 != 0) {
                                                iVar11 = 0;
                                                puVar29 = uVar47 + 1;
                                                do {
                                                    if (iVar11 == 0x10) goto code_r0x08003744;
                                                    iVar36 = iVar11 * 4;
                                                    uVar6 = *(piVar10 + iVar36 + 0x50) | puVar29[-1];
                                                    *(piVar10 + iVar36 + 0x50) = uVar6;
                                                    uVar6 = uVar6 | *puVar29 << 8;
                                                    *(piVar10 + iVar36 + 0x50) = uVar6;
                                                    if ((iVar11 != 0) && (uVar6 == 0)) {
                                                        *(piVar10 + 0x12) = iVar11;
                                                        break;
                                                    }
                                                    iVar11 = iVar11 + 1;
                                                    puVar29 = puVar29 + 2;
                                                } while (iVar11 < piVar10[0x12]);
                                            }
                                            goto code_r0x08002984;
                                        }
                                        _printk(0x8000acf,"rpmh_regulator_load_arc_level_mapping",*unaff_x24);
                                    }
                                    else {
                                        _printk(0x8000a31,"rpmh_regulator_load_arc_level_mapping",*unaff_x24,
                                                piStack_a0,0x20);
                                    }
                                    uVar47 = 0xffffffea;
                                }
                                else {
                                    _printk(0x800068d,"rpmh_regulator_load_arc_level_mapping",*unaff_x24,uVar47);
                                    if (uVar47 == 0) goto code_r0x08002984;
                                }
                                iVar11 = *unaff_x24;
                                uVar14 = 0x8000b46;
                            }
                            else {
                                if (iVar7 == 0) {
                                    piVar12 = *(*piVar10 + 0x2f0);
                                    piStack_a0 = 0x8000b79;
                                    uStack_6c = 0;
                                    uStack_a4 = 0;
                                    *(piVar10 + 0x4c) = 0;
                                    *(piVar10 + 0xb4) = 0xffffffea;
                                    iVar11 = of_find_property(piVar12,"qcom,regulator-type",&uStack_6c);
                                    unaff_x26 = unaff_x21;
                                    if (iVar11 != 0) {
                                        uVar6 = of_property_read_string(piVar12,"qcom,regulator-type",&piStack_a0);
                                        piVar46 = piStack_a0;
                                        if (uVar6 == 0) {
                                            iVar7 = strcmp(piStack_a0,"pmic4-ldo");
                                            pcVar45 = piVar46;
                                            if (iVar7 == 0) {
                                                iVar11 = 1;
                                            }
                                            else {
                                                iVar7 = strcmp(piVar46,"pmic4-hfsmps");
                                                if (iVar7 == 0) {
                                                    iVar11 = 2;
                                                }
                                                else {
                                                    iVar7 = strcmp(piVar46,"pmic4-ftsmps");
                                                    if (iVar7 == 0) {
                                                        iVar11 = 3;
                                                    }
                                                    else {
                                                        iVar7 = strcmp(piVar46,"pmic4-bob");
                                                        if (iVar7 == 0) {
                                                            iVar11 = 4;
                                                        }
                                                        else {
                                                            iVar7 = strcmp(piVar46,"pmic5-ldo");
                                                            if (iVar7 == 0) {
                                                                iVar11 = 5;
                                                            }
                                                            else {
                                                                iVar7 = strcmp(piVar46,"pmic5-hfsmps");
                                                                if (iVar7 == 0) {
                                                                    iVar11 = 6;
                                                                }
                                                                else {
                                                                    iVar7 = strcmp(piVar46,"pmic5-ftsmps");
                                                                    if (iVar7 == 0) {
                                                                        iVar11 = 7;
                                                                    }
                                                                    else {
                                                                        iVar7 = strcmp(piVar46,"pmic5-bob");
                                                                        if (iVar7 != 0) {
                                                                            _printk(0x80003a4,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,"qcom,regulator-type",
                                                                                    piVar46);
                                                                            uVar47 = 0xffffffea;
                                                                            goto code_r0x08003620;
                                                                        }
                                                                        iVar11 = 8;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            piVar13 = *(obj.rpmh_regulator_mode_map + iVar11 * 8);
                                            *(piVar10 + 0x4c) = iVar11;
                                            iVar7 = of_property_read_variable_u32_array
                                                              (piVar12,"qcom,disable-mode",&uStack_a4,1,0);
                                            if (iVar7 < 0) {
code_r0x0800277c:
                                                iVar11 = of_find_property(piVar12,"qcom,supported-modes",&uStack_6c);
                                                if (iVar11 == 0) goto code_r0x08002984;
                                                uVar47 = (uStack_6c << 0x20) >> 0x22;
                                                uStack_6c = uStack_6c >> 2;
                                                auVar1._8_8_ = 0;
                                                auVar1._0_8_ = uVar47;
                                                if (SUB168(auVar1 * ZEXT816(0xc),8) == 0) {
                                                    iVar11 = devm_kmalloc(*piVar10,(uVar47 + uStack_6c * 2) * 4,0xdc0)
                                                    ;
                                                    piVar10[0x15] = iVar11;
                                                    if (iVar11 != 0) {
                                                        *(piVar10 + 0x16) = uStack_6c;
                                                        if ((uStack_6c >> 0x3e == 0) &&
                                                           (pcVar45 = __kmalloc(uStack_6c << 2,0xdc0), pcVar45 != NULL
                                                           )) {
                                                            uVar6 = of_property_read_variable_u32_array
                                                                              (piVar12,"qcom,supported-modes",pcVar45
                                                                               ,uStack_6c,0);
                                                            if (uVar6 < 0) {
                                                                iVar11 = *unaff_x24;
                                                                pcVar18 = "qcom,supported-modes";
                                                            }
                                                            else {
                                                                if (0 < uStack_6c) {
                                                                    iVar7 = 0;
                                                                    do {
                                                                        uVar6 = *(pcVar45 + iVar7 * 4);
                                                                        uVar47 = uVar6;
                                                                        iVar11 = iVar7;
                                                                        if (4 < uVar6) {
                                                                            _printk(0x80006d4,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,iVar11,
                                                                                    "qcom,supported-modes");
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        if (*(piVar13 + uVar47 * 0xc + 4) == 0) {
                                                                            _printk(0x80002b2,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,iVar11,
                                                                                    "qcom,supported-modes",uVar47,
                                                                                    piStack_a0);
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        *(piVar10[0x15] + iVar11 * 0xc) =
                                                                             *(piVar13 + uVar47 * 0xc);
                                                                        *(piVar10[0x15] + iVar11 * 0xc + 4) =
                                                                             *(piVar13 +
                                                                              *(pcVar45 + iVar11 * 4) * 0xc + 4);
                                                                        if ((iVar7 != 0) &&
                                                                           (*(piVar10[0x15] + iVar11 * 0xc) <=
                                                                            *(piVar10[0x15] + (iVar7 - 1) * 0xc))) {
                                                                            _printk(0x80007db,
                                                                                    "rpmh_regulator_parse_vrm_modes",
                                                                                    *unaff_x24,"qcom,supported-modes");
                                                                            goto code_r0x08003614;
                                                                        }
                                                                        iVar7 = iVar7 + 1;
                                                                    } while (iVar7 < uStack_6c);
                                                                }
                                                                uVar6 = of_property_read_variable_u32_array
                                                                                  (piVar12,
                                                            "qcom,mode-threshold-currents",pcVar45,uStack_6c,0);
                                                            if (-1 < uVar6) {
                                                                if (0 < uStack_6c) {
                                                                    iVar11 = 0;
                                                                    iVar36 = 8;
code_r0x0800292c:
                                                                    *(piVar10[0x15] + iVar36) = *(pcVar45 + iVar11 * 4);
                                                                    if ((iVar11 == 0) ||
                                                                       (*(piVar10[0x15] + (iVar11 - 1) * 0xc + 8) <
                                                                        *(piVar10[0x15] + iVar36)))
                                                                    goto code_r0x08002918;
                                                                    _printk(0x80007db,"rpmh_regulator_parse_vrm_modes"
                                                                            ,*unaff_x24,"qcom,mode-threshold-currents"
                                                                           );
                                                                    piVar13 = unaff_x21;
code_r0x08003614:
                                                                    uVar47 = 0xffffffea;
                                                                    goto code_r0x08003618;
                                                                }
code_r0x0800297c:
                                                                kfree(pcVar45);
                                                                piVar46 = pcVar45;
                                                                goto code_r0x08002984;
                                                            }
                                                            iVar11 = *unaff_x24;
                                                            pcVar18 = "qcom,mode-threshold-currents";
                                                            }
                                                            uVar47 = uVar6;
                                                            _printk(0x8000ce7,"rpmh_regulator_parse_vrm_modes",iVar11
                                                                    ,pcVar18,uVar47);
code_r0x08003618:
                                                            kfree(pcVar45);
                                                            goto code_r0x08003620;
                                                        }
                                                    }
                                                    uVar47 = 0xfffffff4;
                                                    pcVar45 = piVar46;
                                                }
                                                else {
                                                    uVar47 = 0xfffffff4;
                                                    piVar10[0x15] = 0;
                                                }
                                            }
                                            else {
                                                uVar47 = uStack_a4;
                                                if (uStack_a4 < 5) {
                                                    if (*(piVar13 + uVar47 * 0xc + 4) != 0) {
                                                        *(piVar10 + 0xb4) = *(piVar13 + uVar47 * 0xc);
                                                        goto code_r0x0800277c;
                                                    }
                                                    _printk(0x8000bc0,"rpmh_regulator_parse_vrm_modes",*unaff_x24,
                                                            uVar47,piStack_a0);
                                                    uVar47 = 0xffffffea;
                                                }
                                                else {
                                                    _printk(0x8000d60,"rpmh_regulator_parse_vrm_modes",*unaff_x24);
                                                    uVar47 = 0xffffffea;
                                                }
                                            }
                                        }
                                        else {
                                            uVar47 = uVar6;
                                            _printk(0x8000ce7,"rpmh_regulator_parse_vrm_modes",*unaff_x24,
                                                    "qcom,regulator-type",uVar47);
                                        }
code_r0x08003620:
                                        iVar11 = *unaff_x24;
                                        uVar14 = 0x80009fe;
                                        goto code_r0x0800362c;
                                    }
                                }
code_r0x08002984:
                                iVar11 = of_find_property(piStack_c0,"qcom,always-wait-for-ack",0);
                                *(piVar10 + 0x14) = 0;
                                *(piVar10 + 0x94) = iVar11 != 0;
                                iVar11 = of_get_next_available_child(*(*piVar10 + 0x2f0),0);
                                pcVar45 = piVar46;
                                if (iVar11 != 0) {
                                    pcVar45 = "compatible";
                                    do {
                                        iVar36 = of_find_property(iVar11,"compatible",0);
                                        if (iVar36 == 0) {
                                            *(piVar10 + 0x14) = piVar10[0x14] + 1;
                                        }
                                        iVar11 = of_get_next_available_child(*(*piVar10 + 0x2f0),iVar11);
                                        piVar12 = NULL;
                                    } while (iVar11 != 0);
                                }
                                iVar7 = piVar10[0x14];
                                if (iVar7 == 0) {
                                    _printk(0x800030a,"rpmh_regulator_allocate_vreg",*unaff_x24);
                                    uVar47 = 0xffffffed;
                                }
                                else {
                                    auVar2._8_8_ = 0;
                                    auVar2._0_8_ = iVar7;
                                    if (SUB168(auVar2 * ZEXT816(0x170),8) == 0) {
                                        iVar11 = devm_kmalloc(*piVar10,iVar7 * 0x170,0xdc0);
                                        piVar10[0x13] = iVar11;
                                        if (iVar11 != 0) {
                                            piStack_e0 = unaff_x24;
                                            piStack_d8 = unaff_x21;
                                            piStack_d0 = arg1;
                                            piVar12 = of_get_next_available_child(*(*piVar10 + 0x2f0),0);
                                            if (piVar12 != NULL) {
                                                unaff_x21 = NULL;
                                                pcVar45 = "compatible";
                                                unaff_x25 = "regulator-name";
                                                do {
                                                    iVar11 = of_find_property(piVar12,"compatible",0);
                                                    if (iVar11 == 0) {
                                                        iVar7 = unaff_x21;
                                                        *(piVar10[0x13] + iVar7 * 0x170) = piVar12;
                                                        *(piVar10[0x13] + iVar7 * 0x170 + 0x148) = piVar10;
                                                        uVar6 = of_property_read_string
                                                                          (piVar12,"regulator-name",
                                                                           piVar10[0x13] + iVar7 * 0x170 + 8);
                                                        unaff_x24 = piStack_e0;
                                                        if (uVar6 != 0) {
                                                            uVar47 = uVar6;
                                                            _printk(0x8000b7a,"rpmh_regulator_allocate_vreg",
                                                                    *piStack_e0,uVar47);
                                                            goto code_r0x080033c4;
                                                        }
                                                        unaff_x21 = iVar7 + 1;
                                                    }
                                                    piVar12 = of_get_next_available_child(*(*piVar10 + 0x2f0),piVar12);
                                                    unaff_x24 = 0x170;
                                                    arg1 = unaff_x25;
                                                } while (piVar12 != NULL);
                                            }
                                            piVar13 = unaff_x21;
                                            if (0 < piVar10[0x14]) {
                                                iVar7 = 0;
                                                piStack_b8 = piVar10;
                                                do {
                                                    unaff_x24 = piVar10[0x13];
                                                    unaff_x21 = iVar7;
                                                    uStack_a4 = 0;
                                                    arg1 = unaff_x24 + iVar7 * 0x2e;
                                                    unaff_x26 = **(arg1 + 0x148);
                                                    uStack_80 = 0;
                                                    uStack_78 = 0;
                                                    uVar6 = *(*(arg1 + 0x148) + 9);
                                                    piVar12 = uVar6;
                                                    piStack_90 = NULL;
                                                    iStack_88 = 0;
                                                    piStack_a0 = NULL;
                                                    piStack_98 = NULL;
                                                    iVar11 = devm_kmalloc(unaff_x26,0x128,0xdc0);
                                                    if (iVar11 == 0) {
code_r0x080033d4:
                                                        uVar47 = 0xfffffff4;
code_r0x080036d8:
                                                        unaff_x20 = 0x170;
                                                        _printk(0x8000230,"rpmh_regulator_probe",
                                                                *(piVar10[0x13] + unaff_x21 * 0x170 + 8),piVar10[1],
                                                                uVar47 & 0xffffffff);
                                                        unaff_x25 = arg1;
                                                        goto code_r0x08003704;
                                                    }
                                                    if (2 < uVar6) goto code_r0x08003744;
                                                    memcpy(iVar11,*(obj.rpmh_regulator_ops + piVar12 * 8),0x128);
                                                    iVar36 = *arg1;
                                                    piStack_b0 = unaff_x24 + unaff_x21 * 0x2e + 1;
                                                    unaff_x24[unaff_x21 * 0x2e + 0xb] = obj.__this_module;
                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x54) = 0;
                                                    unaff_x24[unaff_x21 * 0x2e + 9] = iVar11;
                                                    piVar13 = of_get_regulator_init_data(unaff_x26,iVar36);
                                                    if (piVar13 == NULL) goto code_r0x080033d4;
                                                    uVar20 = *(piVar13 + 0x14);
                                                    *(piVar13 + 0x44) = uVar20;
                                                    if (uVar6 == 0) {
                                                        uVar20 = uVar20 & (uVar20 >> 0x1f ^ 0xffffffffU);
                                                        uVar22 = *(piVar13 + 2) & (*(piVar13 + 2) >> 0x1f ^ 0xffffffffU)
                                                        ;
                                                        if (0x7cfc17 < uVar22) {
                                                            uVar22 = 0x7cfc18;
                                                        }
                                                        if (0x7cfc17 < uVar20) {
                                                            uVar20 = 0x7cfc18;
                                                        }
                                                        *(piVar13 + 2) = uVar22;
                                                        *(piVar13 + 0x14) = uVar20;
                                                        if (*(iVar11 + 8) == 0) goto code_r0x08002c0c;
code_r0x08002c14:
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 1;
                                                    }
                                                    else {
                                                        if (*(iVar11 + 8) != 0) goto code_r0x08002c14;
code_r0x08002c0c:
                                                        if (*(iVar11 + 0x18) != 0) goto code_r0x08002c14;
                                                    }
                                                    if ((uVar6 == 2) && (*(piVar13 + 2) == uVar20)) {
                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x6c) = uVar20;
                                                    }
                                                    unaff_x27 = arg1 + 0x148;
                                                    iVar36 = *unaff_x27;
                                                    if (*(iVar36 + 0xb0) == 0) {
                                                        *(iVar11 + 0xd8) = 0;
                                                        *(iVar11 + 0x88) = 0;
                                                        *(iVar11 + 0x90) = 0;
                                                    }
                                                    else {
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 0x14;
                                                        iVar36 = *unaff_x27;
                                                        if (0 < *(iVar36 + 0xb0)) {
                                                            iVar25 = 0;
                                                            uVar20 = *(piVar13 + 0x3c);
                                                            iVar32 = 4;
                                                            do {
                                                                iVar25 = iVar25 + 1;
                                                                puVar16 = *(iVar36 + 0xa8) + iVar32;
                                                                iVar32 = iVar32 + 0xc;
                                                                uVar20 = *puVar16 | uVar20;
                                                                *(piVar13 + 0x3c) = uVar20;
                                                                iVar36 = *unaff_x27;
                                                            } while (iVar25 < *(iVar36 + 0xb0));
                                                        }
                                                    }
                                                    if ((uVar6 == 1) && (*(iVar36 + 0x50) != 0)) {
                                                        *(iVar11 + 0x78) = 0;
                                                        *(iVar11 + 0x80) = 0;
                                                        *(iVar11 + 0x70) = 0;
                                                    }
                                                    if (*(iVar11 + 0x70) != 0) {
                                                        *(piVar13 + 8) = *(piVar13 + 8) | 8;
                                                    }
                                                    pcVar45 = piVar13;
                                                    if (uVar6 != 0) {
                                                        if (uVar6 == 2) {
                                                            uVar21 = 1;
                                                            goto code_r0x08002d0c;
                                                        }
                                                        if (uVar6 == 1) {
                                                            uVar21 = *(*unaff_x27 + 0x90);
                                                            goto code_r0x08002d0c;
                                                        }
                                                        uVar47 = 0xffffffea;
                                                        goto code_r0x080036d8;
                                                    }
                                                    uVar21 = 2;
code_r0x08002d0c:
                                                    iVar11 = *arg1;
                                                    *(unaff_x24 + unaff_x21 * 0x2e + 8) = uVar21;
                                                    uVar6 = of_property_read_variable_u32_array
                                                                      (iVar11,"qcom,set",&uStack_a4,1,0);
                                                    if (uVar6 < 0) {
                                                        uVar47 = uVar6;
                                                        _printk(0x8000925,"rpmh_regulator_init_vreg",*piStack_b0,
                                                                uVar47);
                                                        goto code_r0x080036d8;
                                                    }
                                                    if ((uStack_a4 & 3) != 0) {
                                                        piVar10 = unaff_x24 + unaff_x21 * 0x2e + 1;
                                                        iVar11 = *piVar10;
                                                        *(unaff_x24 + unaff_x21 * 0x2e + 0x2a) = uStack_a4 & 1;
                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x151) = uStack_a4 >> 1 & 1;
                                                        iVar11 = strlen(iVar11);
                                                        piVar12 = iVar11 + 0x10;
                                                        iVar11 = __kmalloc(piVar12,0xdc0);
                                                        if (iVar11 == 0) {
code_r0x080033dc:
                                                            uVar14 = 0x8000951;
                                                            uVar17 = 0xfffffff4;
                                                            iVar11 = *piStack_b0;
                                                            uVar47 = 0xfffffff4;
                                                        }
                                                        else {
                                                            scnprintf(iVar11,piVar12,"%s-parent-supply",*piVar10);
                                                            iVar36 = of_find_property(*(**unaff_x27 + 0x2f0),iVar11,0)
                                                            ;
                                                            if ((iVar36 == 0) &&
                                                               (iVar36 = of_find_property(*arg1,iVar11,0),
                                                               iVar36 == 0)) {
                                                                piVar12 = of_find_property(*arg1,"vin-supply",0);
                                                                kfree(iVar11);
                                                                iVar11 = 0x8000791;
                                                                if (piVar12 != NULL) goto code_r0x08002e04;
                                                            }
                                                            else {
                                                                kfree(iVar11);
                                                                iVar11 = strlen(*piVar10);
                                                                piVar12 = iVar11 + 10;
                                                                iVar11 = devm_kmalloc(**unaff_x27,piVar12,0xdc0);
                                                                if (iVar11 == 0) goto code_r0x080033dc;
                                                                scnprintf(iVar11,piVar12,"%s-parent",*piVar10);
code_r0x08002e04:
                                                                unaff_x24[unaff_x21 * 0x2e + 2] = iVar11;
                                                            }
                                                            pcVar45 = piStack_b0;
                                                            iStack_88 = *arg1;
                                                            uStack_6c = 0;
                                                            iVar8 = *(*unaff_x27 + 0x48);
                                                            piStack_a0 = unaff_x26;
                                                            piStack_98 = piVar13;
                                                            piStack_90 = arg1;
                                                            if (iVar8 != 0) {
                                                                if (iVar8 == 2) {
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (iStack_88,"qcom,init-enable",
                                                                                       &uStack_6c,1,0);
                                                                    if (-1 < iVar8) {
                                                                        uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164)
                                                                        ;
                                                                        *(unaff_x24 + unaff_x21 * 0x2e + 0x2b) =
                                                                             uStack_6c != 0;
                                                                        *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                             uVar6 | 2;
                                                                    }
                                                                }
                                                                else if (iVar8 == 1) {
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (iStack_88,
                                                                                       "qcom,init-voltage-level",
                                                                                       &uStack_6c,1,0);
                                                                    if (iVar8 < 0) {
code_r0x0800328c:
                                                                        iVar11 = *arg1;
                                                                        pcVar18 = "qcom,min-dropout-voltage-level";
                                                                        goto code_r0x0800329c;
                                                                    }
                                                                    iVar11 = *unaff_x27;
                                                                    iVar8 = *(iVar11 + 0x90);
                                                                    if (0 < iVar8) {
                                                                        if (uStack_6c <= *(iVar11 + 0x50)) {
                                                                            uVar21 = 0;
code_r0x08003270:
                                                                            *(unaff_x24 + unaff_x21 * 0x170 + 0x154) =
                                                                                 uVar21;
                                                                            *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                                 *(unaff_x24 + unaff_x21 * 0x170 + 0x164
                                                                                  ) | 1;
                                                                            goto code_r0x0800328c;
                                                                        }
                                                                        if (iVar8 != 1) {
                                                                            if (uStack_6c <= *(iVar11 + 0x54)) {
                                                                                uVar21 = 1;
                                                                                goto code_r0x08003270;
                                                                            }
                                                                            if (iVar8 != 2) {
                                                                                if (uStack_6c <= *(iVar11 + 0x58)) {
                                                                                    uVar21 = 2;
                                                                                    goto code_r0x08003270;
                                                                                }
                                                                                if (iVar8 != 3) {
                                                                                    if (uStack_6c <= *(iVar11 + 0x5c)) {
                                                                                        uVar21 = 3;
                                                                                        goto code_r0x08003270;
                                                                                    }
                                                                                    if (iVar8 != 4) {
                                                                                        if (uStack_6c <=
                                                                                            *(iVar11 + 0x60)) {
                                                                                            uVar21 = 4;
                                                                                            goto code_r0x08003270;
                                                                                        }
                                                                                        if (iVar8 != 5) {
                                                                                            if (uStack_6c <=
                                                                                                *(iVar11 + 100)) {
                                                                                                uVar21 = 5;
                                                                                                goto code_r0x08003270;
                                                                                            }
                                                                                            if (iVar8 != 6) {
                                                                                                if (uStack_6c <=
                                                                                                    *(iVar11 + 0x68)) {
                                                                                                    uVar21 = 6;
                                                                                                    goto 
                                                            code_r0x08003270;
                                                            }
                                                            if (iVar8 != 7) {
                                                                if (uStack_6c <= *(iVar11 + 0x6c)) {
                                                                    uVar21 = 7;
                                                                    goto code_r0x08003270;
                                                                }
                                                                if (iVar8 != 8) {
                                                                    if (uStack_6c <= *(iVar11 + 0x70)) {
                                                                        uVar21 = 8;
                                                                        goto code_r0x08003270;
                                                                    }
                                                                    if (iVar8 != 9) {
                                                                        if (uStack_6c <= *(iVar11 + 0x74)) {
                                                                            uVar21 = 9;
                                                                            goto code_r0x08003270;
                                                                        }
                                                                        if (iVar8 != 10) {
                                                                            if (uStack_6c <= *(iVar11 + 0x78)) {
                                                                                uVar21 = 10;
                                                                                goto code_r0x08003270;
                                                                            }
                                                                            if (iVar8 != 0xb) {
                                                                                if (uStack_6c <= *(iVar11 + 0x7c)) {
                                                                                    uVar21 = 0xb;
                                                                                    goto code_r0x08003270;
                                                                                }
                                                                                if (iVar8 != 0xc) {
                                                                                    if (uStack_6c <= *(iVar11 + 0x80)) {
                                                                                        uVar21 = 0xc;
                                                                                        goto code_r0x08003270;
                                                                                    }
                                                                                    if (iVar8 != 0xd) {
                                                                                        if (uStack_6c <=
                                                                                            *(iVar11 + 0x84)) {
                                                                                            uVar21 = 0xd;
                                                                                            goto code_r0x08003270;
                                                                                        }
                                                                                        if (iVar8 != 0xe) {
                                                                                            pcVar45 = piStack_b0;
                                                                                            if (uStack_6c <=
                                                                                                *(iVar11 + 0x88)) {
                                                                                                uVar21 = 0xe;
                                                                                                goto code_r0x08003270;
                                                                                            }
                                                                                            if (iVar8 != 0xf) {
                                                                                                if (uStack_6c <=
                                                                                                    *(iVar11 + 0x8c)) {
                                                                                                    uVar21 = 0xf;
                                                                                                    goto 
                                                            code_r0x08003270;
                                                            }
                                                            if (iVar8 != 0x10) {
code_r0x08003744:
    //WARNING: Does not return
                                                                pcVar3 = SoftwareBreakpoint(0x5512,0x8003748);
                                                                (*pcVar3)();
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            iVar11 = *piVar10;
                                                            pcVar18 = "qcom,init-voltage-level";
                                                            goto code_r0x080036b0;
                                                            }
code_r0x080032b8:
                                                            uVar47 = devm_regulator_register
                                                                               (unaff_x26,pcVar45,&piStack_a0);
                                                            piVar12 = unaff_x24 + unaff_x21 * 0x2e + 0x28;
                                                            unaff_x24[unaff_x21 * 0x2e + 0x28] = uVar47;
                                                            if (uVar47 < 0xfffffffffffff001) {
                                                                iVar8 = devm_regulator_proxy_consumer_register
                                                                                  (unaff_x26,*arg1);
                                                                piVar10 = piStack_b8;
                                                                if (iVar8 != 0) {
                                                                    _printk(0x800075d,"rpmh_regulator_init_vreg",
                                                                            *pcVar45,iVar8);
                                                                }
                                                                uVar6 = devm_regulator_debug_register
                                                                                  (unaff_x26,*piVar12);
                                                                if (uVar6 != 0) {
                                                                    iVar11 = *pcVar45;
                                                                    uVar14 = 0x80005f1;
                                                                    goto code_r0x08003314;
                                                                }
                                                            }
                                                            else {
                                                                iVar11 = *pcVar45;
                                                                *piVar12 = 0;
                                                                _printk(0x800072a,"rpmh_regulator_init_vreg",iVar11,
                                                                        uVar47 & 0xffffffff);
                                                                piVar10 = piStack_b8;
                                                                if (uVar47 != 0) goto code_r0x080036d8;
                                                            }
                                                            goto code_r0x08002b24;
                                                            }
                                                            iVar8 = of_property_read_variable_u32_array
                                                                              (iStack_88,"qcom,init-enable",&uStack_6c
                                                                               ,1,0);
                                                            pcVar45 = piStack_b0;
                                                            if (-1 < iVar8) {
                                                                uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164);
                                                                *(unaff_x24 + unaff_x21 * 0x2e + 0x2b) = uStack_6c != 0;
                                                                *(unaff_x24 + unaff_x21 * 0x170 + 0x164) = uVar6 | 2;
                                                            }
                                                            iVar8 = of_property_read_variable_u32_array
                                                                              (*arg1,"qcom,init-voltage",&uStack_6c,1
                                                                               ,0);
                                                            if (iVar8 < 0) {
code_r0x08003048:
                                                                iVar8 = of_property_read_variable_u32_array
                                                                                  (*arg1,"qcom,init-mode",&uStack_6c,
                                                                                   1,0);
                                                                if (iVar8 < 0) {
code_r0x08003190:
                                                                    iVar8 = of_property_read_variable_u32_array
                                                                                      (*arg1,
                                                            "qcom,init-headroom-voltage",&uStack_6c,1,0);
                                                            if (-1 < iVar8) {
                                                                if (0x7cc18 < uStack_6c) {
                                                                    iVar11 = *piVar10;
                                                                    pcVar18 = "qcom,init-headroom-voltage";
                                                                    goto code_r0x080036b0;
                                                                }
                                                                uVar6 = *(unaff_x24 + unaff_x21 * 0x170 + 0x164);
                                                                *(unaff_x24 + unaff_x21 * 0x2e + 0x2c) =
                                                                     uStack_6c / 1000;
                                                                *(unaff_x24 + unaff_x21 * 0x170 + 0x164) = uVar6 | 8;
                                                            }
                                                            iVar11 = *arg1;
                                                            pcVar18 = "qcom,min-dropout-voltage";
code_r0x0800329c:
                                                            iVar8 = of_property_read_variable_u32_array
                                                                              (iVar11,pcVar18,&uStack_6c,1,0);
                                                            if (-1 < iVar8) {
                                                                *(unaff_x24 + unaff_x21 * 0x170 + 0x74) = uStack_6c;
                                                            }
                                                            goto code_r0x080032b8;
                                                            }
                                                            if (4 < uStack_6c) {
                                                                iVar11 = *piVar10;
                                                                pcVar18 = "qcom,init-mode";
                                                                goto code_r0x080036b0;
                                                            }
                                                            iVar11 = *unaff_x27;
                                                            uVar6 = *(iVar11 + 0x4c);
                                                            if (uVar6 == 0) {
                                                                _printk(0x8000161,
                                                                        "rpmh_regulator_load_default_parameters",
                                                                        *piVar10,"qcom,init-mode");
                                                            }
                                                            else {
                                                                if (8 < uVar6) goto code_r0x08003744;
                                                                if (*(*(obj.rpmh_regulator_mode_map + uVar6 * 8) +
                                                                      uStack_6c * 0xc + 4) != 0) {
                                                                    piVar33 = *(obj.rpmh_regulator_mode_map + uVar6 * 8)
                                                                              + uStack_6c * 0xc;
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x15c) = *piVar33;
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                         *(unaff_x24 + unaff_x21 * 0x170 + 0x164) | 4;
                                                                    if (0 < *(iVar11 + 0xb0)) {
                                                                        uVar47 = 0;
                                                                        piVar23 = *(iVar11 + 0xa8);
                                                                        do {
                                                                            if (*piVar23 == *piVar33) {
                                                                                *(unaff_x24 + unaff_x21 * 0x2e + 0x2d) =
                                                                                     uVar47;
                                                                                break;
                                                                            }
                                                                            uVar47 = uVar47 + 1;
                                                                            piVar23 = piVar23 + 3;
                                                                        } while (*(iVar11 + 0xb0) != uVar47);
                                                                    }
                                                                    goto code_r0x08003190;
                                                                }
                                                                _printk(0x8000c61,
                                                                        "rpmh_regulator_load_default_parameters",
                                                                        *piVar10,"qcom,init-mode");
                                                            }
                                                            }
                                                            else {
                                                                if (uStack_6c < 0x7cfc19) {
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x154) =
                                                                         uStack_6c / 1000;
                                                                    *(unaff_x24 + unaff_x21 * 0x170 + 0x164) =
                                                                         *(unaff_x24 + unaff_x21 * 0x170 + 0x164) | 1;
                                                                    goto code_r0x08003048;
                                                                }
                                                                iVar11 = *piVar10;
                                                                pcVar18 = "qcom,init-voltage";
code_r0x080036b0:
                                                                _printk(0x80008d4,
                                                                        "rpmh_regulator_load_default_parameters",iVar11
                                                                        ,pcVar18);
                                                            }
                                                            iVar11 = *pcVar45;
                                                            uVar14 = 0x80005bd;
                                                            uVar17 = 0xffffffea;
                                                            uVar47 = 0xffffffea;
                                                            piVar13 = pcVar45;
                                                        }
                                                        _printk(uVar14,"rpmh_regulator_init_vreg",iVar11,uVar17);
                                                        pcVar45 = piVar13;
                                                        piVar10 = piStack_b8;
                                                        goto code_r0x080036d8;
                                                    }
                                                    uVar14 = 0x800056e;
                                                    iVar11 = *piStack_b0;
                                                    uVar6 = uStack_a4;
code_r0x08003314:
                                                    _printk(uVar14,"rpmh_regulator_init_vreg",iVar11,uVar6);
code_r0x08002b24:
                                                    unaff_x20 = 0x170;
                                                    iVar7 = iVar7 + 1;
                                                    piVar13 = unaff_x21;
                                                } while (iVar7 < piVar10[0x14]);
                                            }
                                            iVar11 = of_find_property(piStack_c0,"qcom,send-defaults",0);
                                            piVar12 = piStack_d0;
                                            unaff_x21 = piStack_d8;
                                            unaff_x25 = arg1;
                                            if (iVar11 != 0) {
                                                mutex_lock(piStack_d8);
                                                uVar6 = sym.rpmh_regulator_send_aggregate_requests(piVar10[0x13]);
                                                if (uVar6 != 0) {
                                                    uVar47 = uVar6;
                                                    _printk(0x80004ce,"rpmh_regulator_probe",*piStack_e0,uVar47);
                                                    mutex_unlock(unaff_x21);
                                                    goto code_r0x08003704;
                                                }
                                                mutex_unlock(unaff_x21);
                                                piVar13 = unaff_x21;
                                            }
                                            unaff_x21 = piVar13;
                                            of_platform_populate(piVar12[0x60],0,0,piStack_c8);
                                            uVar47 = 0;
                                            piVar12[0x15] = piVar10;
                                            goto code_r0x08003704;
                                        }
                                        uVar47 = 0xfffffff4;
                                    }
                                    else {
                                        uVar47 = 0xfffffff4;
                                        piVar10[0x13] = 0;
                                    }
                                }
code_r0x080033c4:
                                iVar11 = *unaff_x24;
                                uVar14 = 0x8000a92;
                                piVar13 = unaff_x21;
                            }
                        }
code_r0x0800362c:
                        unaff_x21 = piVar13;
                        _printk(uVar14,"rpmh_regulator_probe",iVar11,uVar47 & 0xffffffff);
                    }
                }
                else {
                    uVar47 = uVar6;
                    _dev_err(piVar12,"qcom,resource-name missing in DT node\n");
                }
            }
        }
    }
code_r0x08003704:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return uVar47 & 0xffffffff;
    }
    iVar36 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_regulator_send_aggregate_requests;
    puStack_140 = &stack0xffffffffffffffa0;
    pcStack_138 = sym.rpmh_regulator_send_aggregate_requests;
    piStack_130 = unaff_x27;
    piStack_120 = unaff_x26;
    piStack_118 = unaff_x25;
    piStack_110 = unaff_x24;
    uStack_108 = uVar47;
    piStack_100 = pcVar45;
    piStack_f8 = unaff_x21;
    uStack_f0 = unaff_x20;
    piStack_e8 = piVar12;
    iVar11 = sp_el0;
    iStack_148 = *(iVar11 + 0x5e0);
    puVar48 = *(iVar36 + 0x148);
    uStack_150 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    auStack_1a8[8] = 0;
    auStack_1a8[9] = 0;
    auStack_1a8[10] = 0;
    auStack_1a8[0xb] = 0;
    auStack_1a8[4] = 0;
    auStack_1a8[5] = 0;
    auStack_1a8[6] = 0;
    auStack_1a8[7] = 0;
    auStack_1a8[0] = 0;
    auStack_1a8[1] = 0;
    auStack_1a8[2] = 0;
    auStack_1a8[3] = 0;
    if (*(puVar48 + 0x94) == '\0') {
        bVar4 = *(puVar48 + 0x95) != '\0';
    }
    else {
        bVar4 = true;
    }
    uVar6 = *(puVar48 + 9);
    if (uVar6 < 3) {
        uVar20 = *(obj.max_reg_index_map + uVar6 * 4);
    }
    else {
        uVar20 = 0xffffffea;
    }
    uVar47 = *(puVar48 + 0x14);
    if (*(puVar48 + 0x14) < 1) {
        uVar22 = 0;
        uVar44 = 0;
        uVar9 = 0;
        uVar24 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar37 = 0;
        uVar38 = 0;
        if (uVar6 != 0) goto code_r0x08003920;
code_r0x0800396c:
        uVar6 = *(puVar48 + 0xb4);
        if (0 < uVar6) {
            if (((uStack_150 >> 1 & 1) != 0) && (uVar38 == 0)) {
                uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
                uStack_150 = uStack_150 | 2;
                uVar31 = uVar6;
            }
            if (((uStack_168 >> 1 & 1) != 0) && (uVar35 == 0)) {
                uStack_168 = uStack_168 | 2;
                uStack_170 = CONCAT44(uStack_170._4_4_,uVar6);
                uVar28 = uVar6;
code_r0x080039e4:
            }
        }
    }
    else {
        uVar44 = 0;
        uVar22 = 0;
        uVar27 = 0;
        uVar34 = 0;
        uVar39 = 0;
        uVar28 = 0;
        uVar9 = 0;
        uVar30 = 0;
        uVar37 = 0;
        uVar41 = 0;
        puVar16 = puVar48[0x13] + 0x164;
        do {
            if (puVar16[-5] != '\0') {
                if (0 < uVar20) {
                    if (uVar41 <= puVar16[-4]) {
                        uVar41 = puVar16[-4];
                    }
                    if (uVar20 != 1) {
                        if (uVar37 <= puVar16[-3]) {
                            uVar37 = puVar16[-3];
                        }
                        if (uVar20 != 2) {
                            if (uVar30 <= puVar16[-2]) {
                                uVar30 = puVar16[-2];
                            }
                            if (uVar20 != 3) {
                                if (uVar9 <= puVar16[-1]) {
                                    uVar9 = puVar16[-1];
                                }
                                if (uVar20 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar28 = *puVar16 | uVar28;
            }
            if (*(puVar16 + -0x13) != '\0') {
                if (0 < uVar20) {
                    if (uVar39 <= puVar16[-4]) {
                        uVar39 = puVar16[-4];
                    }
                    if (uVar20 != 1) {
                        if (uVar34 <= puVar16[-3]) {
                            uVar34 = puVar16[-3];
                        }
                        if (uVar20 != 2) {
                            if (uVar27 <= puVar16[-2]) {
                                uVar27 = puVar16[-2];
                            }
                            if (uVar20 != 3) {
                                if (uVar22 <= puVar16[-1]) {
                                    uVar22 = puVar16[-1];
                                }
                                if (uVar20 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar44 = *puVar16 | uVar44;
            }
            uVar47 = uVar47 - 1;
            puVar16 = puVar16 + 0x5c;
        } while (uVar47 != 0);
        uStack_160 = CONCAT44(uVar37,uVar41);
        uStack_158 = CONCAT44(uVar9,uVar30);
        uStack_150 = uVar28;
        uStack_178 = CONCAT44(uVar34,uVar39);
        uStack_170 = CONCAT44(uVar22,uVar27);
        uStack_168 = uVar44;
        uVar44 = uVar22;
        uVar28 = uVar27;
        uVar35 = uVar34;
        uVar40 = uVar39;
        uVar24 = uVar9;
        uVar31 = uVar30;
        uVar38 = uVar37;
        uVar42 = uVar41;
        if (uVar6 == 0) goto code_r0x0800396c;
code_r0x08003920:
        uVar44 = uVar22;
        uVar28 = uVar27;
        uVar35 = uVar34;
        uVar40 = uVar39;
        uVar24 = uVar9;
        uVar31 = uVar30;
        uVar38 = uVar37;
        uVar42 = uVar41;
        if (uVar6 == 1) {
            if (*(puVar48 + 10) == 0) {
                if ((uStack_150 >> 1 & 1) == 0) {
                    uStack_150 = uStack_150 & 0xfffffffe;
                }
                else if (uVar37 == 0) {
                    uVar42 = 0;
                    uStack_160 = uStack_160 & 0xffffffff00000000;
                }
                uStack_150 = uStack_150 & 0xfffffffd;
                if ((uStack_168 >> 1 & 1) == 0) {
                    uStack_168 = uStack_168 & 0xfffffffe;
                }
                else if (uVar34 == 0) {
                    uVar40 = 0;
                    uStack_178 = uStack_178 & 0xffffffff00000000;
                }
                uStack_168 = uStack_168 & 0xfffffffd;
            }
            else {
                uStack_168 = uStack_168 & 0xfffffffd;
                uStack_150 = uStack_150 & 0xfffffffd;
            }
            goto code_r0x080039e4;
        }
    }
    uVar6 = uStack_150;
    bVar5 = *(puVar48 + 0x96) == '\0';
    uVar47 = uStack_168;
    if (*(puVar48 + 0x96) == '\0') {
        if (uVar20 < 1) goto code_r0x08003c60;
        if ((uVar42 == uVar40) || ((uStack_168 & 1) == 0)) {
            if (uVar20 != 1) {
                if ((uVar38 != uVar35) && ((uStack_168 >> 1 & 1) != 0)) goto code_r0x08003a14;
                if (uVar20 != 2) {
                    if ((uVar31 != uVar28) && ((uStack_168 >> 2 & 1) != 0)) goto code_r0x08003a14;
                    if (uVar20 != 3) {
                        if ((uVar24 != uVar44) && ((uStack_168 >> 3 & 1) != 0)) goto code_r0x08003a14;
                        if (uVar20 != 4) goto code_r0x08003900;
                    }
                }
            }
            uVar22 = 0;
            bVar5 = false;
code_r0x08003b18:
            iVar11 = 0;
            uVar47 = 0;
            uVar30 = 0;
            uVar27 = 0;
            do {
                uVar26 = 1L << (uVar47 & 0x3f);
                if ((uVar26 & uVar6) != 0) {
                    if ((uVar26 & *(puVar48 + 0x19)) != 0) {
                        if (3 < uVar47) goto code_r0x08003900;
                        if (*(puVar48 + iVar11 + 0xb8) == *(&uStack_160 + iVar11) & (bVar5 ^ 1U)) goto code_r0x08003b48;
                    }
                    if ((3 < uVar27) || (auStack_1a8[uVar27 * 3] = iVar11 + *(puVar48 + 2), 3 < uVar47))
                    goto code_r0x08003900;
                    uVar15 = uVar27;
                    uVar9 = *(&uStack_160 + iVar11);
                    uVar27 = uVar27 + 1;
                    uVar30 = uVar30 | uVar26;
                    auStack_1a8[uVar15 * 3 + 1] = uVar9;
                    auStack_1a8[uVar15 * 3 + 2] = uVar22;
                    bVar4 = *(puVar48 + iVar11 + 0xb8) < uVar9 | bVar4;
                }
code_r0x08003b48:
                uVar47 = uVar47 + 1;
                iVar11 = iVar11 + 4;
            } while (uVar20 != uVar47);
            if (uVar27 < 1) goto code_r0x08003c60;
            if (uVar22 == 0) {
code_r0x08003c44:
                if (bVar4) {
                    uVar9 = rpmh_write();
                }
                else {
                    uVar9 = rpmh_write_async(*puVar48,2,auStack_1a8,uVar27);
                }
                if (uVar9 == 0) {
                    sym.rpmh_regulator_req(iVar36,&uStack_160,puVar48 + 0x17,uVar30);
                    *(puVar48 + 0x95) = 0;
                    puVar48[0x17] = uStack_160;
                    puVar48[0x18] = uStack_158;
                    *(puVar48 + 0x19) = uStack_150;
                    goto code_r0x08003ca0;
                }
                uVar17 = puVar48[1];
                uVar14 = 0x800084d;
                pcVar45 = "active";
            }
            else {
                uVar9 = rpmh_write_async(*puVar48,1,auStack_1a8,uVar27);
                if (uVar9 == 0) {
                    sym.rpmh_regulator_req(iVar36,&uStack_160,puVar48 + 0x17,uVar30);
                    if (3 < uVar27) {
code_r0x08003900:
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8003904);
                        (*pcVar3)();
                    }
                    if (0x28 < uVar27 * 0xc) goto code_r0x08003da4;
                    auStack_1a8[uVar27 * 3 + 2] = 0;
                    goto code_r0x08003c44;
                }
                uVar17 = puVar48[1];
                uVar14 = 0x800034c;
                pcVar45 = "wake  ";
            }
            _printk(uVar14,"rpmh_regulator_send_aggregate_requests",uVar17,pcVar45,uVar9);
        }
        else {
code_r0x08003a14:
            iVar11 = 0;
            uVar26 = 0;
            uVar22 = 0;
            uVar15 = 0;
            do {
                uVar43 = 1L << (uVar26 & 0x3f);
                uVar19 = uVar15;
                if ((uVar43 & uVar47) != 0) {
                    if ((uVar43 & *(puVar48 + 0xdc)) != 0) {
                        if (3 < uVar26) goto code_r0x08003900;
                        if (*(puVar48 + iVar11 + 0xcc) == *(&uStack_178 + iVar11)) goto code_r0x08003a40;
                    }
                    if ((3 < uVar15) || (auStack_1a8[uVar15 * 3] = iVar11 + *(puVar48 + 2), 3 < uVar26))
                    goto code_r0x08003900;
                    uVar19 = uVar15 + 1;
                    uVar22 = uVar22 | uVar43;
                    auStack_1a8[uVar15 * 3 + 1] = *(&uStack_178 + iVar11);
                }
code_r0x08003a40:
                uVar26 = uVar26 + 1;
                iVar11 = iVar11 + 4;
                uVar15 = uVar19;
            } while (uVar20 != uVar26);
            if (uVar19 < 1) {
code_r0x08003b0c:
                if (uVar20 < 1) goto code_r0x08003c60;
                uVar22 = 1;
                goto code_r0x08003b18;
            }
            uVar9 = rpmh_write_async(*puVar48,0,auStack_1a8);
            if (uVar9 == 0) {
                sym.rpmh_regulator_req(iVar36,&uStack_178,puVar48 + 0xcc,uVar22);
                *(puVar48 + 0x96) = 1;
                *(puVar48 + 0xcc) = uStack_178;
                *(puVar48 + 0xd4) = uStack_170;
                *(puVar48 + 0xdc) = uStack_168;
                goto code_r0x08003b0c;
            }
            _printk(0x8000af9,"rpmh_regulator_send_aggregate_requests",puVar48[1],uVar9);
        }
    }
    else {
        if (0 < uVar20) goto code_r0x08003a14;
code_r0x08003c60:
        uVar9 = 0;
    }
code_r0x08003ca0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return uVar9;
    }
    __stack_chk_fail();
code_r0x08003da4:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(1,0x8003da8);
    (*pcVar3)();
code_r0x08002918:
    iVar11 = iVar11 + 1;
    iVar36 = iVar36 + 0xc;
    if (uStack_6c <= iVar11) goto code_r0x0800297c;
    goto code_r0x0800292c;
}


// ===== sym.rpmh_regulator_send_aggregate_requests @ 0x0800374c (size 1628) =====

int sym.rpmh_regulator_send_aggregate_requests(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    char *pcVar12;
    uint32_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint32_t uVar31;
    ulong *in_x18;
    ulong *puVar32;
    uint32_t uVar33;
    ulong unaff_x30;
    uint32_t auStack_c8 [12];
    ulong uStack_98;
    ulong uStack_90;
    uint32_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    puVar32 = *(arg1 + 0x148);
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auStack_c8[8] = 0;
    auStack_c8[9] = 0;
    auStack_c8[10] = 0;
    auStack_c8[0xb] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    auStack_c8[6] = 0;
    auStack_c8[7] = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    if (*(puVar32 + 0x94) == '\0') {
        bVar3 = *(puVar32 + 0x95) != '\0';
    }
    else {
        bVar3 = true;
    }
    uVar1 = *(puVar32 + 9);
    if (uVar1 < 3) {
        uVar33 = *(obj.max_reg_index_map + uVar1 * 4);
    }
    else {
        uVar33 = 0xffffffea;
    }
    uVar7 = *(puVar32 + 0x14);
    if (*(puVar32 + 0x14) < 1) {
        uVar13 = 0;
        uVar31 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        if (uVar1 != 0) goto code_r0x08003920;
code_r0x0800396c:
        uVar1 = *(puVar32 + 0xb4);
        if (0 < uVar1) {
            if (((uStack_70 >> 1 & 1) != 0) && (uVar25 == 0)) {
                uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
                uStack_70 = uStack_70 | 2;
                uVar21 = uVar1;
            }
            if (((uStack_88 >> 1 & 1) != 0) && (uVar23 == 0)) {
                uStack_88 = uStack_88 | 2;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
                uVar19 = uVar1;
code_r0x080039e4:
            }
        }
    }
    else {
        uVar31 = 0;
        uVar13 = 0;
        uVar18 = 0;
        uVar22 = 0;
        uVar26 = 0;
        uVar19 = 0;
        uVar15 = 0;
        uVar20 = 0;
        uVar24 = 0;
        uVar28 = 0;
        puVar9 = puVar32[0x13] + 0x164;
        do {
            if (puVar9[-5] != '\0') {
                if (0 < uVar33) {
                    if (uVar28 <= puVar9[-4]) {
                        uVar28 = puVar9[-4];
                    }
                    if (uVar33 != 1) {
                        if (uVar24 <= puVar9[-3]) {
                            uVar24 = puVar9[-3];
                        }
                        if (uVar33 != 2) {
                            if (uVar20 <= puVar9[-2]) {
                                uVar20 = puVar9[-2];
                            }
                            if (uVar33 != 3) {
                                if (uVar15 <= puVar9[-1]) {
                                    uVar15 = puVar9[-1];
                                }
                                if (uVar33 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar19 = *puVar9 | uVar19;
            }
            if (*(puVar9 + -0x13) != '\0') {
                if (0 < uVar33) {
                    if (uVar26 <= puVar9[-4]) {
                        uVar26 = puVar9[-4];
                    }
                    if (uVar33 != 1) {
                        if (uVar22 <= puVar9[-3]) {
                            uVar22 = puVar9[-3];
                        }
                        if (uVar33 != 2) {
                            if (uVar18 <= puVar9[-2]) {
                                uVar18 = puVar9[-2];
                            }
                            if (uVar33 != 3) {
                                if (uVar13 <= puVar9[-1]) {
                                    uVar13 = puVar9[-1];
                                }
                                if (uVar33 != 4) goto code_r0x08003900;
                            }
                        }
                    }
                }
                uVar31 = *puVar9 | uVar31;
            }
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 0x5c;
        } while (uVar7 != 0);
        uStack_80 = CONCAT44(uVar24,uVar28);
        uStack_78 = CONCAT44(uVar15,uVar20);
        uStack_70 = uVar19;
        uStack_98 = CONCAT44(uVar22,uVar26);
        uStack_90 = CONCAT44(uVar13,uVar18);
        uStack_88 = uVar31;
        uVar31 = uVar13;
        uVar19 = uVar18;
        uVar23 = uVar22;
        uVar27 = uVar26;
        uVar16 = uVar15;
        uVar21 = uVar20;
        uVar25 = uVar24;
        uVar29 = uVar28;
        if (uVar1 == 0) goto code_r0x0800396c;
code_r0x08003920:
        uVar31 = uVar13;
        uVar19 = uVar18;
        uVar23 = uVar22;
        uVar27 = uVar26;
        uVar16 = uVar15;
        uVar21 = uVar20;
        uVar25 = uVar24;
        uVar29 = uVar28;
        if (uVar1 == 1) {
            if (*(puVar32 + 10) == 0) {
                if ((uStack_70 >> 1 & 1) == 0) {
                    uStack_70 = uStack_70 & 0xfffffffe;
                }
                else if (uVar24 == 0) {
                    uVar29 = 0;
                    uStack_80 = uStack_80 & 0xffffffff00000000;
                }
                uStack_70 = uStack_70 & 0xfffffffd;
                if ((uStack_88 >> 1 & 1) == 0) {
                    uStack_88 = uStack_88 & 0xfffffffe;
                }
                else if (uVar22 == 0) {
                    uVar27 = 0;
                    uStack_98 = uStack_98 & 0xffffffff00000000;
                }
                uStack_88 = uStack_88 & 0xfffffffd;
            }
            else {
                uStack_88 = uStack_88 & 0xfffffffd;
                uStack_70 = uStack_70 & 0xfffffffd;
            }
            goto code_r0x080039e4;
        }
    }
    uVar1 = uStack_70;
    bVar4 = *(puVar32 + 0x96) == '\0';
    uVar7 = uStack_88;
    if (*(puVar32 + 0x96) == '\0') {
        if (uVar33 < 1) goto code_r0x08003c60;
        if ((uVar29 == uVar27) || ((uStack_88 & 1) == 0)) {
            if (uVar33 != 1) {
                if ((uVar25 != uVar23) && ((uStack_88 >> 1 & 1) != 0)) goto code_r0x08003a14;
                if (uVar33 != 2) {
                    if ((uVar21 != uVar19) && ((uStack_88 >> 2 & 1) != 0)) goto code_r0x08003a14;
                    if (uVar33 != 3) {
                        if ((uVar16 != uVar31) && ((uStack_88 >> 3 & 1) != 0)) goto code_r0x08003a14;
                        if (uVar33 != 4) goto code_r0x08003900;
                    }
                }
            }
            uVar13 = 0;
            bVar4 = false;
code_r0x08003b18:
            iVar14 = 0;
            uVar7 = 0;
            uVar18 = 0;
            uVar15 = 0;
            do {
                uVar17 = 1L << (uVar7 & 0x3f);
                if ((uVar17 & uVar1) != 0) {
                    if ((uVar17 & *(puVar32 + 0x19)) != 0) {
                        if (3 < uVar7) goto code_r0x08003900;
                        if (*(puVar32 + iVar14 + 0xb8) == *(&uStack_80 + iVar14) & (bVar4 ^ 1U)) goto code_r0x08003b48;
                    }
                    if ((3 < uVar15) || (auStack_c8[uVar15 * 3] = iVar14 + *(puVar32 + 2), 3 < uVar7))
                    goto code_r0x08003900;
                    uVar8 = uVar15;
                    uVar20 = *(&uStack_80 + iVar14);
                    uVar15 = uVar15 + 1;
                    uVar18 = uVar18 | uVar17;
                    auStack_c8[uVar8 * 3 + 1] = uVar20;
                    auStack_c8[uVar8 * 3 + 2] = uVar13;
                    bVar3 = *(puVar32 + iVar14 + 0xb8) < uVar20 | bVar3;
                }
code_r0x08003b48:
                uVar7 = uVar7 + 1;
                iVar14 = iVar14 + 4;
            } while (uVar33 != uVar7);
            if (uVar15 < 1) goto code_r0x08003c60;
            if (uVar13 == 0) {
code_r0x08003c44:
                if (bVar3) {
                    iVar5 = rpmh_write();
                }
                else {
                    iVar5 = rpmh_write_async(*puVar32,2,auStack_c8,uVar15);
                }
                if (iVar5 == 0) {
                    sym.rpmh_regulator_req(arg1,&uStack_80,puVar32 + 0x17,uVar18);
                    *(puVar32 + 0x95) = 0;
                    puVar32[0x17] = uStack_80;
                    puVar32[0x18] = uStack_78;
                    *(puVar32 + 0x19) = uStack_70;
                    goto code_r0x08003ca0;
                }
                uVar10 = puVar32[1];
                uVar6 = 0x800084d;
                pcVar12 = "active";
            }
            else {
                iVar5 = rpmh_write_async(*puVar32,1,auStack_c8,uVar15);
                if (iVar5 == 0) {
                    sym.rpmh_regulator_req(arg1,&uStack_80,puVar32 + 0x17,uVar18);
                    if (3 < uVar15) {
code_r0x08003900:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8003904);
                        (*pcVar2)();
                    }
                    if (0x28 < uVar15 * 0xc) goto code_r0x08003da4;
                    auStack_c8[uVar15 * 3 + 2] = 0;
                    goto code_r0x08003c44;
                }
                uVar10 = puVar32[1];
                uVar6 = 0x800034c;
                pcVar12 = "wake  ";
            }
            _printk(uVar6,"rpmh_regulator_send_aggregate_requests",uVar10,pcVar12,iVar5);
        }
        else {
code_r0x08003a14:
            iVar14 = 0;
            uVar17 = 0;
            uVar13 = 0;
            uVar8 = 0;
            do {
                uVar30 = 1L << (uVar17 & 0x3f);
                uVar11 = uVar8;
                if ((uVar30 & uVar7) != 0) {
                    if ((uVar30 & *(puVar32 + 0xdc)) != 0) {
                        if (3 < uVar17) goto code_r0x08003900;
                        if (*(puVar32 + iVar14 + 0xcc) == *(&uStack_98 + iVar14)) goto code_r0x08003a40;
                    }
                    if ((3 < uVar8) || (auStack_c8[uVar8 * 3] = iVar14 + *(puVar32 + 2), 3 < uVar17))
                    goto code_r0x08003900;
                    uVar11 = uVar8 + 1;
                    uVar13 = uVar13 | uVar30;
                    auStack_c8[uVar8 * 3 + 1] = *(&uStack_98 + iVar14);
                }
code_r0x08003a40:
                uVar17 = uVar17 + 1;
                iVar14 = iVar14 + 4;
                uVar8 = uVar11;
            } while (uVar33 != uVar17);
            if (uVar11 < 1) {
code_r0x08003b0c:
                if (uVar33 < 1) goto code_r0x08003c60;
                uVar13 = 1;
                goto code_r0x08003b18;
            }
            iVar5 = rpmh_write_async(*puVar32,0,auStack_c8);
            if (iVar5 == 0) {
                sym.rpmh_regulator_req(arg1,&uStack_98,puVar32 + 0xcc,uVar13);
                *(puVar32 + 0x96) = 1;
                *(puVar32 + 0xcc) = uStack_98;
                *(puVar32 + 0xd4) = uStack_90;
                *(puVar32 + 0xdc) = uStack_88;
                goto code_r0x08003b0c;
            }
            _printk(0x8000af9,"rpmh_regulator_send_aggregate_requests",puVar32[1],iVar5);
        }
    }
    else {
        if (0 < uVar33) goto code_r0x08003a14;
code_r0x08003c60:
        iVar5 = 0;
    }
code_r0x08003ca0:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    __stack_chk_fail();
code_r0x08003da4:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x8003da8);
    (*pcVar2)();
}


// ===== sym.rpmh_regulator_vrm_set_voltage @ 0x08003da8 (size 296) =====

int sym.rpmh_regulator_vrm_set_voltage(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = rdev_get_drvdata();
    iVar2 = (arg1 + 999) / 1000;
    if (arg2 < iVar2 * 1000) {
        _printk(0x8000426,"rpmh_regulator_vrm_set_voltage",*(arg1_00 + 8),arg1 & 0xffffffff,arg2 & 0xffffffff);
        iVar3 = -0x16;
    }
    else {
        mutex_lock(*(arg1_00 + 0x148) + 0x18);
        uVar1 = *(arg1_00 + 0x154);
        *(arg1_00 + 0x154) = iVar2;
        iVar4 = *(arg1_00 + 0x148);
        *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 1;
        if (((*(iVar4 + 200) & 1) != 0) && (arg2 < *(iVar4 + 0xb8))) {
            *(iVar4 + 0x95) = 1;
        }
        iVar3 = sym.rpmh_regulator_send_aggregate_requests(arg1_00);
        if (iVar3 != 0) {
            _printk(0x80003bf,"rpmh_regulator_vrm_set_voltage",*(arg1_00 + 8),iVar2,iVar3);
            *(arg1_00 + 0x154) = uVar1;
            *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 1;
        }
        mutex_unlock(*(arg1_00 + 0x148) + 0x18);
    }
    return iVar3;
}


// ===== sym.rpmh_regulator_vrm_get_voltage @ 0x08003ed0 (size 56) =====

int sym.rpmh_regulator_vrm_get_voltage(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = rdev_get_drvdata();
    iVar1 = *(iVar2 + 0x154) * 1000;
    if (iVar1 == 0) {
        iVar1 = 1;
    }
    return iVar1;
}


// ===== sym.rpmh_regulator_enable @ 0x08003f08 (size 172) =====

int sym.rpmh_regulator_enable(void)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    mutex_lock(*(arg1 + 0x148) + 0x18);
    uVar1 = *(arg1 + 0x158);
    *(arg1 + 0x158) = 1;
    *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar2 != 0) {
        _printk(0x800098e,"rpmh_regulator_enable",*(arg1 + 8),iVar2);
        *(arg1 + 0x158) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_disable @ 0x08003fb4 (size 168) =====

int sym.rpmh_regulator_disable(void)

{
    uint uVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = rdev_get_drvdata();
    mutex_lock(*(arg1 + 0x148) + 0x18);
    uVar1 = *(arg1 + 0x158);
    *(arg1 + 0x158) = 0;
    *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1);
    if (iVar2 != 0) {
        _printk(0x8000d2a,"rpmh_regulator_disable",*(arg1 + 8),iVar2);
        *(arg1 + 0x158) = uVar1;
        *(arg1 + 0x164) = *(arg1 + 0x164) | 2;
    }
    mutex_unlock(*(arg1 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_is_enabled @ 0x0800405c (size 48) =====

bool sym.rpmh_regulator_is_enabled(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x158) != 0;
}


// ===== sym.rpmh_regulator_vrm_set_mode @ 0x0800408c (size 292) =====

int sym.rpmh_regulator_vrm_set_mode(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = rdev_get_drvdata();
    iVar4 = *(arg1_00 + 0x148);
    if (0 < *(iVar4 + 0xb0)) {
        iVar6 = 0;
        iVar5 = 0;
        do {
            if (*(*(iVar4 + 0xa8) + 4 + iVar6) == arg1) {
                mutex_lock(iVar4 + 0x18);
                uVar2 = *(*(*(arg1_00 + 0x148) + 0xa8) + iVar6);
                uVar1 = *(arg1_00 + 0x15c);
                *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 4;
                *(arg1_00 + 0x15c) = uVar2;
                iVar3 = sym.rpmh_regulator_send_aggregate_requests(arg1_00);
                if (iVar3 == 0) {
                    *(arg1_00 + 0x168) = iVar5;
                }
                else {
                    _printk(0x80008af,"rpmh_regulator_vrm_set_mode_index",*(arg1_00 + 8),*(arg1_00 + 0x15c),iVar3);
                    *(arg1_00 + 0x15c) = uVar1;
                    *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 4;
                }
                mutex_unlock(*(arg1_00 + 0x148) + 0x18);
                return iVar3;
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 0xc;
        } while (*(iVar4 + 0xb0) * 0xc - iVar6 != 0);
    }
    _printk(0x8000c1f,"rpmh_regulator_vrm_set_mode",*(arg1_00 + 8),arg1 & 0xffffffff);
    return -0x16;
}


// ===== sym.rpmh_regulator_vrm_get_mode @ 0x080041b0 (size 60) =====

uint sym.rpmh_regulator_vrm_get_mode(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(*(*(iVar1 + 0x148) + 0xa8) + *(iVar1 + 0x168) * 0xc + 4);
}


// ===== sym.rpmh_regulator_vrm_set_load @ 0x080041ec (size 260) =====

int sym.rpmh_regulator_vrm_set_load(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t arg1_00;
    int64_t iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = rdev_get_drvdata();
    iVar5 = *(arg1_00 + 0x148);
    uVar6 = *(iVar5 + 0xb0);
    uVar3 = uVar6 - 1;
    if (-1 < uVar3) {
        uVar3 = 0;
    }
    do {
        uVar6 = uVar6 - 1;
        uVar7 = uVar3;
        if (uVar6 < 1) break;
        uVar7 = uVar6;
    } while (arg1 < *(*(iVar5 + 0xa8) + uVar6 * 0xc + 8));
    mutex_lock(iVar5 + 0x18);
    uVar1 = *(arg1_00 + 0x15c);
    uVar2 = *(*(*(arg1_00 + 0x148) + 0xa8) + uVar7 * 0xc);
    *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 4;
    *(arg1_00 + 0x15c) = uVar2;
    iVar4 = sym.rpmh_regulator_send_aggregate_requests(arg1_00);
    if (iVar4 == 0) {
        *(arg1_00 + 0x168) = uVar7;
    }
    else {
        _printk(0x80008af,"rpmh_regulator_vrm_set_mode_index",*(arg1_00 + 8),*(arg1_00 + 0x15c),iVar4);
        *(arg1_00 + 0x15c) = uVar1;
        *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 4;
    }
    mutex_unlock(*(arg1_00 + 0x148) + 0x18);
    return iVar4;
}


// ===== sym.rpmh_regulator_arc_list_voltage @ 0x080042f0 (size 92) =====

uint sym.rpmh_regulator_arc_list_voltage(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = rdev_get_drvdata();
    if (arg1 < *(*(iVar3 + 0x148) + 0x90)) {
        if (0xf < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x800434c);
            (*pcVar1)();
        }
        uVar2 = *(*(iVar3 + 0x148) + (arg1 & 0xffffffffU) * 4 + 0x50);
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.rpmh_regulator_arc_set_voltage_sel @ 0x0800434c (size 176) =====

int sym.rpmh_regulator_arc_set_voltage_sel(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    int iVar2;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = rdev_get_drvdata();
    mutex_lock(*(arg1_00 + 0x148) + 0x18);
    uVar1 = *(arg1_00 + 0x154);
    *(arg1_00 + 0x154) = arg1;
    *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 1;
    iVar2 = sym.rpmh_regulator_send_aggregate_requests(arg1_00);
    if (iVar2 != 0) {
        _printk(0x8000626,"rpmh_regulator_arc_set_voltage_sel",*(arg1_00 + 8),*(arg1_00 + 0x154),iVar2);
        *(arg1_00 + 0x154) = uVar1;
        *(arg1_00 + 0x164) = *(arg1_00 + 0x164) | 1;
    }
    mutex_unlock(*(arg1_00 + 0x148) + 0x18);
    return iVar2;
}


// ===== sym.rpmh_regulator_arc_get_voltage_sel @ 0x080043fc (size 40) =====

uint sym.rpmh_regulator_arc_get_voltage_sel(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x154);
}


// ===== sym.rpmh_regulator_req @ 0x08004424 (size 816) =====

void sym.rpmh_regulator_req(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    uchar *puVar6;
    uint64_t in_x4;
    bool bVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x148);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    if (*(iVar11 + 0x48) < 3) {
        iVar8 = *(iVar11 + 0x48) * 8;
        uVar12 = *(iVar8 + 0x80016a0);
        iVar13 = *(iVar8 + 0x80016b8);
        uVar14 = *(iVar8 + 0x80016d0);
        uVar4 = scnprintf(&uStack_170,0x100,"%s (%s), addr=0x%05X: s=%s; sent: ",*(iVar11 + 8),*(arg1 + 8),
                          *(iVar11 + 0x10),*(obj.rpmh_regulator_state_names + (in_x4 & 0xffffffff) * 8));
        uVar9 = 0;
        uVar10 = 0;
        bVar7 = true;
        do {
            if ((arg4 >> (uVar10 & 0x3f) & 1) != 0) {
                if (0x100 < uVar4) goto code_r0x08004748;
                if (uVar12 <= uVar9) goto code_r0x0800474c;
                uVar2 = 0x8000b79;
                if (!bVar7) {
                    uVar2 = 0x8000b3b;
                }
                iVar5 = scnprintf(&uStack_170 + uVar4,0x100 - uVar4,"%s%s=%u",uVar2,*(iVar13 + uVar10 * 8),
                                  *(arg2 + uVar10 * 4));
                bVar7 = false;
                uVar4 = iVar5 + uVar4;
                if ((*(iVar11 + 0x48) == 1) && (uVar10 == 0)) {
                    if ((0x100 < uVar4) || (0xf < *arg2)) goto code_r0x08004748;
                    iVar5 = scnprintf(&uStack_170 + uVar4,0x100 - uVar4," (vlvl=%u)",*(iVar11 + *arg2 * 4 + 0x50));
                    bVar7 = false;
                    uVar4 = iVar5 + uVar4;
                }
            }
            uVar10 = uVar10 + 1;
            uVar9 = uVar9 + 8;
        } while (uVar14 != uVar10);
        uVar1 = *(arg3 + 0x10) & (arg4 ^ 0xffffffff);
        if (uVar1 != 0) {
            if (0x100 < uVar4) {
code_r0x08004748:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x800474c);
                (*pcVar3)();
            }
            iVar5 = scnprintf(&uStack_170 + uVar4,0x100 - uVar4,"; prev: ");
            uVar4 = iVar5 + uVar4;
        }
        uVar9 = 0;
        uVar10 = 0;
        bVar7 = true;
        do {
            if ((uVar1 >> (uVar10 & 0x3f) & 1) != 0) {
                if (0x100 < uVar4) goto code_r0x08004748;
                if (uVar12 <= uVar9) {
code_r0x0800474c:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8004750);
                    (*pcVar3)();
                }
                uVar2 = 0x8000b79;
                if (!bVar7) {
                    uVar2 = 0x8000b3b;
                }
                iVar5 = scnprintf(&uStack_170 + uVar4,0x100 - uVar4,"%s%s=%u",uVar2,*(iVar13 + uVar10 * 8),
                                  *(arg2 + uVar10 * 4));
                bVar7 = false;
                uVar4 = iVar5 + uVar4;
                if ((*(iVar11 + 0x48) == 1) && (uVar10 == 0)) {
                    if ((0x100 < uVar4) || (0xf < *arg2)) goto code_r0x08004748;
                    iVar5 = scnprintf(&uStack_170 + uVar4,0x100 - uVar4," (vlvl=%u)",*(iVar11 + *arg2 * 4 + 0x50));
                    bVar7 = false;
                    uVar4 = iVar5 + uVar4;
                }
            }
            uVar10 = uVar10 + 1;
            uVar9 = uVar9 + 8;
        } while (uVar14 != uVar10);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_70) {
        auVar15 = __stack_chk_fail();
        puVar6 = auVar15._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar15._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x80047ac);
        (*pcVar3)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08004754 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004798

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80047ac);
    (*pcVar1)();
}

