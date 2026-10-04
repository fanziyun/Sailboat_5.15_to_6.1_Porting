// decompiled from clk-rpmh by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x0800499c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xd862cc386955394) {
        if (arg1 < -0x3377f916ca0c702) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
            }
            else {
                if (arg1 != -0x1b0a70f57deed9d1) goto code_r0x0800495c;
                pcVar2 = sym.clk_rpmh_bcm_set_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3377f916ca0c702) {
                pcVar2 = sym.clk_rpmh_prepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
                goto code_r0x08004198;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800495c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (0x59dd42e31ac63e91 < arg1) {
            if (arg1 == 0x59dd42e31ac63e92) {
                pcVar2 = sym.clk_rpmh_bcm_recalc_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
            }
            else {
                if (arg1 != 0x6f56d4dab1c62b9f) {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800495c;
                    pcVar2 = sym.cleanup_module.cfi_jt;
                    goto code_r0x08004180;
                }
                pcVar2 = sym.clk_rpmh_unprepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
            }
code_r0x08004198:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x0800495c;
        }
        if (arg1 == 0xd862cc386955394) {
            pcVar2 = sym.clk_rpmh_round_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
        }
        else {
            if (arg1 != 0x41bf92bc6b6aca25) goto code_r0x0800495c;
            pcVar2 = sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt;
        }
    }
code_r0x08004180:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800495c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80049b0);
    (*pcVar1)();
}


// ===== sym.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041c0 (size 8) =====

uint64_t sym.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int *piVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    param_1 = param_1 + 0x10;
    iStack_68 = *(iVar10 + 0x5e0);
    piVar5 = of_device_get_match_data(param_1);
    if (piVar5 == NULL) {
        uVar9 = 0xffffffed;
    }
    else {
        if (piVar5[1] != 0) {
            uVar9 = 0;
            iVar10 = *piVar5;
            do {
                iStack_70 = 0;
                iVar8 = *(iVar10 + uVar9 * 8);
                if (iVar8 != 0) {
                    uVar1 = **(iVar8 + 0x10);
                    if ((*(iVar8 + 0x10))[1] != clk_fixed_factor_ops) {
                        iVar4 = cmd_db_read_addr(*(iVar8 + 0x18));
                        if (iVar4 == 0) {
                            *(iVar10 + uVar9 * 8) = 0;
                            if (*(iVar8 + 0x21) == '\0') {
                                __warn_printk("clk-rpmh: Missing RPMh resource address for %s\n",*(iVar8 + 0x18));
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x800,0x8004844);
                                (*pcVar2)();
                            }
                            goto code_r0x080047ac;
                        }
                        piVar6 = cmd_db_read_aux_data(*(iVar8 + 0x18),&iStack_70);
                        if (0xfffffffffffff000 < piVar6) {
                            __warn_printk("clk-rpmh: error reading RPMh aux data for %s (%d)\n",*(iVar8 + 0x18),
                                          piVar6 & 0xffffffff);
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80048d4);
                            (*pcVar2)();
                        }
                        if (iStack_70 == 8) {
                            *(iVar8 + 0x3c) = *piVar6 * 1000;
                        }
                        *(iVar8 + 0x40) = param_1;
                        *(iVar8 + 0x24) = *(iVar8 + 0x24) + iVar4;
                        iVar8 = *(iVar10 + uVar9 * 8);
                    }
                    uVar3 = devm_clk_hw_register(param_1,iVar8);
                    if (uVar3 != 0) {
                        uVar9 = uVar3;
                        _dev_err(param_1,"failed to register %s\n",uVar1);
                        goto code_r0x0800487c;
                    }
                }
code_r0x080047ac:
                uVar9 = uVar9 + 1;
            } while (uVar9 < piVar5[1]);
        }
        uVar3 = devm_of_clk_add_hw_provider
                          (param_1,sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt,piVar5);
        uVar9 = uVar3;
        if (uVar3 != 0) {
            _dev_err(param_1,"Failed to add clock provider\n");
        }
    }
code_r0x0800487c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.of_clk_rpmh_hw_get;
        uVar9 = *(auVar11._0_8_ + 0xc);
        if (uVar9 < auVar11._8_8_[1]) {
            uVar7 = *(*auVar11._8_8_ + uVar9 * 8);
            uVar9 = 0xfffffffffffffffe;
            if (uVar7 != 0) {
                uVar9 = uVar7;
            }
        }
        else {
            _printk(0x8002412,"of_clk_rpmh_hw_get");
            uVar9 = 0xffffffffffffffea;
        }
        return uVar9;
    }
    return uVar9;
}


// ===== sym.clk_rpmh_unprepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041c8 (size 8) =====

void sym.clk_rpmh_unprepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.rpmh_clk_lock);
    sym.clk_rpmh_aggregate_state_send_command(param_1,0);
    mutex_unlock(obj.rpmh_clk_lock);
    return;
}


// ===== sym.clk_rpmh_bcm_unprepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041d0 (size 8) =====

uint64_t sym.clk_rpmh_bcm_unprepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = 0;
    mutex_lock(obj.rpmh_clk_lock);
    if (*(param_1 + 0x34) != 0) {
        uStack_38 = CONCAT44(0x40000000,*(param_1 + 0x24));
        iVar1 = rpmh_write_async(*(param_1 + 0x40),2,&uStack_38,1);
        if (iVar1 == 0) {
            *(param_1 + 0x34) = 0;
        }
        else {
            _dev_err(*(param_1 + 0x40),"set active state of %s failed: (%d)\n",*(param_1 + 0x18),iVar1);
        }
    }
    uVar2 = mutex_unlock(obj.rpmh_clk_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    return *(iVar3 + 0x3c) * *(iVar3 + 0x30);
}


// ===== sym.cleanup_module.cfi_jt @ 0x080041d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080041e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.clk_rpmh_prepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041e8 (size 8) =====

uint sym.clk_rpmh_prepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.rpmh_clk_lock);
    uVar1 = sym.clk_rpmh_aggregate_state_send_command(param_1,1);
    mutex_unlock(obj.rpmh_clk_lock);
    return uVar1;
}


// ===== sym.clk_rpmh_bcm_prepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041f0 (size 8) =====

void sym.clk_rpmh_bcm_prepare.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.clk_rpmh_bcm_send_cmd(param_1);
    return;
}


// ===== sym.clk_rpmh_bcm_set_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x080041f8 (size 8) =====

ulong sym.clk_rpmh_bcm_set_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (*(param_1 + 0x3c) != 0) {
        uVar1 = param_2 / *(param_1 + 0x3c);
    }
    *(param_1 + 0x30) = uVar1;
    uVar2 = clk_hw_is_prepared();
    if ((uVar2 & 1) != 0) {
        sym.clk_rpmh_bcm_send_cmd(param_1);
    }
    return 0;
}


// ===== sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x08004200 (size 8) =====

int64_t sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xc) < param_2[1]) {
        iVar2 = *(*param_2 + *(param_1 + 0xc) * 8);
        iVar1 = -2;
        if (iVar2 != 0) {
            iVar1 = iVar2;
        }
    }
    else {
        _printk(0x8002412,"of_clk_rpmh_hw_get");
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.clk_rpmh_bcm_recalc_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x08004208 (size 8) =====

int sym.clk_rpmh_bcm_recalc_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x3c) * *(param_1 + 0x30);
}


// ===== sym.clk_rpmh_recalc_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x08004210 (size 8) =====

uint64_t sym.clk_rpmh_recalc_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (*(param_1 + 0x20) != 0) {
        uVar1 = param_2 / *(param_1 + 0x20);
    }
    return uVar1;
}


// ===== sym.clk_rpmh_round_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt @ 0x08004218 (size 8) =====

ulong sym.clk_rpmh_round_rate.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt(ulong param_1,ulong param_2)

{
    return param_2;
}


// ===== sym.clk_rpmh_prepare @ 0x08004220 (size 88) =====

uint sym.clk_rpmh_prepare(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.rpmh_clk_lock);
    uVar1 = sym.clk_rpmh_aggregate_state_send_command(arg1,1);
    mutex_unlock(obj.rpmh_clk_lock);
    return uVar1;
}


// ===== sym.clk_rpmh_unprepare @ 0x08004278 (size 80) =====

void sym.clk_rpmh_unprepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.rpmh_clk_lock);
    sym.clk_rpmh_aggregate_state_send_command(arg1,0);
    mutex_unlock(obj.rpmh_clk_lock);
    return;
}


// ===== sym.clk_rpmh_recalc_rate @ 0x080042c8 (size 20) =====

uint64_t sym.clk_rpmh_recalc_rate(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if (*(arg1 + 0x20) != 0) {
        uVar1 = arg2 / *(arg1 + 0x20);
    }
    return uVar1;
}


// ===== sym.clk_rpmh_aggregate_state_send_command @ 0x080042dc (size 488) =====

ulong sym.clk_rpmh_aggregate_state_send_command(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char *pcVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_58;
    uint64_t uStack_54;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    if (*(arg1 + 0x2c) != (arg2 & 1)) {
        if ((arg2 & 1U) == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = *(arg1 + 0x38);
        }
        *(arg1 + 0x2c) = uVar8;
        uStack_54 = 0;
        uVar8 = *(*(arg1 + 0x48) + 0x2c) | uVar8;
        *(arg1 + 0x30) = uVar8;
        *(*(arg1 + 0x48) + 0x30) = uVar8;
        uVar1 = *(arg1 + 0x30);
        uStack_58 = *(arg1 + 0x24);
        uVar2 = *(arg1 + 0x28);
        uVar8 = *(arg1 + 0x34) ^ uVar1;
        uVar9 = uVar1;
        if ((uVar8 & 1) != 0) {
            if ((uVar1 & 1) != 0) {
                uStack_54 = uVar2;
            }
            iVar4 = rpmh_write_async(*(arg1 + 0x40),0,&uStack_58,1);
            if (iVar4 != 0) {
                pcVar7 = "sleep";
                goto code_r0x0800446c;
            }
            uVar9 = *(arg1 + 0x30);
            uVar8 = uVar9 ^ *(arg1 + 0x34);
        }
        if ((uVar8 >> 1 & 1) != 0) {
            if ((uVar1 >> 1 & 1) != 0) {
                uStack_54 = CONCAT44(uStack_54._4_4_,uVar2);
            }
            iVar4 = rpmh_write_async(*(arg1 + 0x40),1,&uStack_58,1);
            if (iVar4 != 0) {
                pcVar7 = "wake";
                goto code_r0x0800446c;
            }
            uVar9 = *(arg1 + 0x30);
            uVar8 = uVar9 ^ *(arg1 + 0x34);
        }
        if ((uVar8 >> 2 & 1) != 0) {
            if ((uVar1 >> 2 & 1) != 0) {
                uStack_54 = CONCAT44(uStack_54._4_4_,uVar2);
            }
            if (uVar1 == 0) {
                iVar4 = rpmh_write_async(*(arg1 + 0x40),2,&uStack_58,1);
            }
            else {
                iVar4 = rpmh_write();
            }
            if (iVar4 != 0) {
                pcVar7 = "active";
code_r0x0800446c:
                _dev_err(*(arg1 + 0x40),"set %s state of %s failed: (%d)\n",pcVar7,*(arg1 + 0x18),iVar4);
                if ((arg2 & 1U) == 0) {
                    uVar10 = *(arg1 + 0x38);
                    pcVar7 = "disable";
                }
                else {
                    uVar10 = 0;
                    pcVar7 = "enable";
                }
                *(arg1 + 0x2c) = uVar10;
                __warn_printk("clk: %s failed to %s\n",*(arg1 + 0x18),pcVar7);
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x80044bc);
                (*pcVar3)();
            }
            uVar9 = *(arg1 + 0x30);
        }
        *(arg1 + 0x34) = uVar9;
        *(*(arg1 + 0x48) + 0x34) = uVar9;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return 0;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.clk_rpmh_bcm_prepare;
    uVar6 = sym.clk_rpmh_bcm_send_cmd(iVar5);
    return uVar6;
}


// ===== sym.clk_rpmh_bcm_prepare @ 0x080044c4 (size 36) =====

void sym.clk_rpmh_bcm_prepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.clk_rpmh_bcm_send_cmd(arg1);
    return;
}


// ===== sym.clk_rpmh_bcm_unprepare @ 0x080044e8 (size 196) =====

uint64_t sym.clk_rpmh_bcm_unprepare(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = 0;
    mutex_lock(obj.rpmh_clk_lock);
    if (*(arg1 + 0x34) != 0) {
        uStack_38 = CONCAT44(0x40000000,*(arg1 + 0x24));
        iVar1 = rpmh_write_async(*(arg1 + 0x40),2,&uStack_38,1);
        if (iVar1 == 0) {
            *(arg1 + 0x34) = 0;
        }
        else {
            _dev_err(*(arg1 + 0x40),"set active state of %s failed: (%d)\n",*(arg1 + 0x18),iVar1);
        }
    }
    uVar2 = mutex_unlock(obj.rpmh_clk_lock);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail();
    return *(iVar3 + 0x3c) * *(iVar3 + 0x30);
}


// ===== sym.clk_rpmh_bcm_recalc_rate @ 0x080045ac (size 24) =====

int sym.clk_rpmh_bcm_recalc_rate(int64_t arg1)

{
    return *(arg1 + 0x3c) * *(arg1 + 0x30);
}


// ===== sym.clk_rpmh_round_rate @ 0x080045c4 (size 16) =====

int64_t sym.clk_rpmh_round_rate(ulong noname_0,int64_t arg1)

{
    return arg1;
}


// ===== sym.clk_rpmh_bcm_set_rate @ 0x080045d4 (size 76) =====

ulong sym.clk_rpmh_bcm_set_rate(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0;
    if (*(arg1 + 0x3c) != 0) {
        uVar1 = arg2 / *(arg1 + 0x3c);
    }
    *(arg1 + 0x30) = uVar1;
    uVar2 = clk_hw_is_prepared();
    if ((uVar2 & 1) != 0) {
        sym.clk_rpmh_bcm_send_cmd(arg1);
    }
    return 0;
}


// ===== sym.clk_rpmh_bcm_send_cmd @ 0x08004620 (size 256) =====

uint64_t sym.clk_rpmh_bcm_send_cmd(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int *piVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    mutex_lock(obj.rpmh_clk_lock);
    uVar4 = *(arg1 + 0x30);
    if (uVar4 == 0) {
        uVar4 = 1;
    }
    else if (0x3ffe < uVar4) {
        uVar4 = 0x3fff;
    }
    if (*(arg1 + 0x34) == uVar4) {
        uVar10 = 0;
    }
    else {
        uStack_48 = CONCAT44(uVar4,*(arg1 + 0x24)) | 0x6000000000000000;
        uVar3 = rpmh_write(*(arg1 + 0x40),2,&uStack_48,1);
        uVar10 = uVar3;
        if (uVar3 == 0) {
            *(arg1 + 0x34) = uVar4;
        }
        else {
            _dev_err(*(arg1 + 0x40),"set active state of %s failed: (%d)\n",*(arg1 + 0x18),uVar10);
        }
    }
    mutex_unlock(obj.rpmh_clk_lock);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar10;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.clk_rpmh_probe;
    pcStack_a8 = sym.clk_rpmh_probe;
    iVar12 = sp_el0;
    iVar6 = iVar6 + 0x10;
    iStack_b8 = *(iVar12 + 0x5e0);
    puStack_b0 = &stack0xffffffffffffffd0;
    piVar7 = of_device_get_match_data(iVar6);
    if (piVar7 == NULL) {
        uVar10 = 0xffffffed;
    }
    else {
        if (piVar7[1] != 0) {
            uVar10 = 0;
            iVar12 = *piVar7;
            do {
                iStack_c0 = 0;
                iVar11 = *(iVar12 + uVar10 * 8);
                if (iVar11 != 0) {
                    uVar1 = **(iVar11 + 0x10);
                    if ((*(iVar11 + 0x10))[1] != clk_fixed_factor_ops) {
                        iVar5 = cmd_db_read_addr(*(iVar11 + 0x18));
                        if (iVar5 == 0) {
                            *(iVar12 + uVar10 * 8) = 0;
                            if (*(iVar11 + 0x21) == '\0') {
                                __warn_printk("clk-rpmh: Missing RPMh resource address for %s\n",*(iVar11 + 0x18));
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x800,0x8004844);
                                (*pcVar2)();
                            }
                            goto code_r0x080047ac;
                        }
                        piVar8 = cmd_db_read_aux_data(*(iVar11 + 0x18),&iStack_c0);
                        if (0xfffffffffffff000 < piVar8) {
                            __warn_printk("clk-rpmh: error reading RPMh aux data for %s (%d)\n",*(iVar11 + 0x18),
                                          piVar8 & 0xffffffff);
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80048d4);
                            (*pcVar2)();
                        }
                        if (iStack_c0 == 8) {
                            *(iVar11 + 0x3c) = *piVar8 * 1000;
                        }
                        *(iVar11 + 0x40) = iVar6;
                        *(iVar11 + 0x24) = *(iVar11 + 0x24) + iVar5;
                        iVar11 = *(iVar12 + uVar10 * 8);
                    }
                    uVar4 = devm_clk_hw_register(iVar6,iVar11);
                    if (uVar4 != 0) {
                        uVar10 = uVar4;
                        _dev_err(iVar6,"failed to register %s\n",uVar1);
                        goto code_r0x0800487c;
                    }
                }
code_r0x080047ac:
                uVar10 = uVar10 + 1;
            } while (uVar10 < piVar7[1]);
        }
        uVar4 = devm_of_clk_add_hw_provider
                          (iVar6,sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt,piVar7);
        uVar10 = uVar4;
        if (uVar4 != 0) {
            _dev_err(iVar6,"Failed to add clock provider\n");
        }
    }
code_r0x0800487c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_b8) {
        auVar13 = __stack_chk_fail();
        *extraout_x18_00 = sym.of_clk_rpmh_hw_get;
        uVar10 = *(auVar13._0_8_ + 0xc);
        if (uVar10 < auVar13._8_8_[1]) {
            uVar9 = *(*auVar13._8_8_ + uVar10 * 8);
            uVar10 = 0xfffffffffffffffe;
            if (uVar9 != 0) {
                uVar10 = uVar9;
            }
        }
        else {
            _printk(0x8002412,"of_clk_rpmh_hw_get");
            uVar10 = 0xffffffffffffffea;
        }
        return uVar10;
    }
    return uVar10;
}


// ===== sym.clk_rpmh_probe @ 0x08004720 (size 472) =====

uint64_t sym.clk_rpmh_probe(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int *piVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    arg1 = arg1 + 0x10;
    iStack_68 = *(iVar10 + 0x5e0);
    piVar5 = of_device_get_match_data(arg1);
    if (piVar5 == NULL) {
        uVar9 = 0xffffffed;
    }
    else {
        if (piVar5[1] != 0) {
            uVar9 = 0;
            iVar10 = *piVar5;
            do {
                iStack_70 = 0;
                iVar8 = *(iVar10 + uVar9 * 8);
                if (iVar8 != 0) {
                    uVar1 = **(iVar8 + 0x10);
                    if ((*(iVar8 + 0x10))[1] != clk_fixed_factor_ops) {
                        iVar4 = cmd_db_read_addr(*(iVar8 + 0x18));
                        if (iVar4 == 0) {
                            *(iVar10 + uVar9 * 8) = 0;
                            if (*(iVar8 + 0x21) == '\0') {
                                __warn_printk("clk-rpmh: Missing RPMh resource address for %s\n",*(iVar8 + 0x18));
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x800,0x8004844);
                                (*pcVar2)();
                            }
                            goto code_r0x080047ac;
                        }
                        piVar6 = cmd_db_read_aux_data(*(iVar8 + 0x18),&iStack_70);
                        if (0xfffffffffffff000 < piVar6) {
                            __warn_printk("clk-rpmh: error reading RPMh aux data for %s (%d)\n",*(iVar8 + 0x18),
                                          piVar6 & 0xffffffff);
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80048d4);
                            (*pcVar2)();
                        }
                        if (iStack_70 == 8) {
                            *(iVar8 + 0x3c) = *piVar6 * 1000;
                        }
                        *(iVar8 + 0x40) = arg1;
                        *(iVar8 + 0x24) = *(iVar8 + 0x24) + iVar4;
                        iVar8 = *(iVar10 + uVar9 * 8);
                    }
                    uVar3 = devm_clk_hw_register(arg1,iVar8);
                    if (uVar3 != 0) {
                        uVar9 = uVar3;
                        _dev_err(arg1,"failed to register %s\n",uVar1);
                        goto code_r0x0800487c;
                    }
                }
code_r0x080047ac:
                uVar9 = uVar9 + 1;
            } while (uVar9 < piVar5[1]);
        }
        uVar3 = devm_of_clk_add_hw_provider
                          (arg1,sym.of_clk_rpmh_hw_get.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt,piVar5);
        uVar9 = uVar3;
        if (uVar3 != 0) {
            _dev_err(arg1,"Failed to add clock provider\n");
        }
    }
code_r0x0800487c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        *extraout_x18 = sym.of_clk_rpmh_hw_get;
        uVar9 = *(auVar11._0_8_ + 0xc);
        if (uVar9 < auVar11._8_8_[1]) {
            uVar7 = *(*auVar11._8_8_ + uVar9 * 8);
            uVar9 = 0xfffffffffffffffe;
            if (uVar7 != 0) {
                uVar9 = uVar7;
            }
        }
        else {
            _printk(0x8002412,"of_clk_rpmh_hw_get");
            uVar9 = 0xffffffffffffffea;
        }
        return uVar9;
    }
    return uVar9;
}


// ===== sym.of_clk_rpmh_hw_get @ 0x080048f8 (size 96) =====

int64_t sym.of_clk_rpmh_hw_get(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xc) < *(arg2 + 8)) {
        iVar2 = *(*arg2 + *(arg1 + 0xc) * 8);
        iVar1 = -2;
        if (iVar2 != 0) {
            iVar1 = iVar2;
        }
    }
    else {
        _printk(0x8002412,"of_clk_rpmh_hw_get");
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08004958 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800499c

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
    //switch table (4 cases) at 0x8002567
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80049b0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080049b4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080049e8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.clk_rpmh_probe.0f52b1a25323ec44a57ac670ed8fbfa3.cfi_jt);
    return;
}

