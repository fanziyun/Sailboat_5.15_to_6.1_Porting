// decompiled from debug-regulator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 728) =====

//WARNING: Switch with 1 destination removed at 0x08003fa0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x48ef54602b463a27) {
            if (arg1 == -0x76e7814a8afd6df4) {
                if ((pcVar1 + -0x8002348 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08003f60;
            }
            if (arg1 == -0x58c4a7feef7ff60d) {
                pcVar2 = sym.devm_regulator_debug_match.216a89832cc52eb039fae63e443e7af0.cfi_jt;
                goto code_r0x080022b0;
            }
            if (arg1 != -0x4efb2d7f1773024a) goto code_r0x08003f60;
            pcVar2 = sym.devm_regulator_debug_unregister.cfi_jt;
        }
        else {
            if (-0x29bbde323c1d7b3d < arg1) {
                if (arg1 != -0x29bbde323c1d7b3c) {
                    if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8002380 >> 3 | pcVar1 << 0x3d) < 10)) {
                        return;
                    }
                    goto code_r0x08003f60;
                }
                pcVar2 = sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt;
                goto code_r0x080022b0;
            }
            if (arg1 == -0x48ef54602b463a27) {
                pcVar2 = sym._devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt;
            }
            else {
                if (arg1 != -0x3f6dd5edbae6077c) goto code_r0x08003f60;
                pcVar2 = sym.devm_regulator_debug_register.cfi_jt;
            }
        }
code_r0x08002238:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x08003f60:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8003fb4);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 == 0x7ff5a213d37b1a6) {
                    if ((pcVar1 + -0x8002318 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08003f60;
                }
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08003f60;
                pcVar2 = sym.reg_debug_voltage_write.216a89832cc52eb039fae63e443e7af0.cfi_jt;
                goto code_r0x08002238;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 < 0x6b141b54612cf75f) {
            if (arg1 == 0x321969b888d4949e) {
                pcVar2 = sym.seq_lseek.cfi_jt;
                goto code_r0x08002238;
            }
            if (arg1 != 0x5233d5bc7887ae44) goto code_r0x08003f60;
            pcVar2 = sym.reg_debug_consumers_show.216a89832cc52eb039fae63e443e7af0.cfi_jt;
        }
        else {
            if (arg1 == 0x6b141b54612cf75f) {
                if ((pcVar1 + -0x80023d0 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08003f60;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003f60;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080022b0:
        if (pcVar1 != pcVar2) goto code_r0x08003f60;
    }
    return;
}


// ===== sym.reg_debug_consumers_show.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080022e0 (size 8) =====

ulong sym.reg_debug_consumers_show.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x80);
    ww_mutex_lock(iVar2 + 0x98,0);
    if (*(iVar2 + 0x10) != 0) {
        seq_printf(param_1,"%-32s EN    Min_uV   Max_uV  load_uA\n","Device-Supply");
    }
    piVar3 = iVar2 + 0x28;
    piVar4 = *piVar3;
    if (piVar3 != piVar4) {
        do {
            pcVar1 = "(null)-(null)";
            if (piVar4[9] != NULL) {
                pcVar1 = piVar4[9];
            }
            uVar5 = 0x4e;
            if (piVar4[3] != 0) {
                uVar5 = 0x59;
            }
            seq_printf(param_1,"%-32s %c   %8d %8d %8d\n",pcVar1,uVar5,piVar4[4],*(piVar4 + 0x24),*(piVar4 + 0x14)
                      );
            piVar4 = *piVar4;
        } while (piVar3 != piVar4);
    }
    ww_mutex_unlock(iVar2 + 0x98);
    return 0;
}


// ===== sym._devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080022e8 (size 8) =====

void sym._devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.debug_reg_list != obj.debug_reg_list) {
        pcVar5 = *param_2;
        pcVar4 = _obj.debug_reg_list;
        do {
            if (pcVar4 == pcVar5) {
                regulator_put(*(pcVar5 + 0x10));
                uVar3 = __list_del_entry_valid(pcVar5);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5);
                return;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.debug_reg_list);
    }
    return;
}


// ===== sym.devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080022f0 (size 8) =====

void sym.devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.debug_reg_list_lock);
    if (_obj.debug_reg_list != obj.debug_reg_list) {
        pcVar5 = *param_2;
        pcVar4 = _obj.debug_reg_list;
        do {
            if (pcVar4 == pcVar5) {
                regulator_put(*(pcVar5 + 0x10));
                uVar3 = __list_del_entry_valid(pcVar5);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5);
                break;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.debug_reg_list);
    }
    mutex_unlock(obj.debug_reg_list_lock);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080022f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    if (obj.debug_suspend != 0x0) {
        tracepoint_probe_unregister
                  (__tracepoint_suspend_resume,
                   sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002300 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_lookup("regulator",0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = 0x800031d;
    }
    else {
        uVar2 = debugfs_create_file_unsafe("debug_suspend",0x1a4,_segment.ehdr,0,reloc.__this_module);
        uVar1 = _segment.ehdr;
        _segment.ehdr = uVar2;
        dput(uVar1);
        if (_segment.ehdr < 0xfffffffffffff001) {
            return 0;
        }
        uVar3 = 0x800022f;
    }
    _printk(uVar3,"regulator_debug_init");
    return 0;
}


// ===== sym.devm_regulator_debug_register.cfi_jt @ 0x08002308 (size 8) =====

uint64_t sym.devm_regulator_debug_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_regulator_debug_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regulator_debug_add(param_1,param_2);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            devres_free(puVar1);
        }
        else {
            *puVar1 = uVar2;
            devres_add(param_1,puVar1);
            uVar2 = 0;
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.regulator_debug_register.cfi_jt @ 0x08002310 (size 8) =====

uint sym.regulator_debug_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regulator_debug_add(param_1,param_2);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.reg_debug_voltage_read.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002318 (size 8) =====

uint64_t sym.reg_debug_voltage_read.216a89832cc52eb039fae63e443e7af0.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    uint uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t *puVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint32_t uStack_f8;
    int iStack_f4;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ushort uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    iVar15 = *(param_1 + 0xd8);
    if (*(iVar15 + 0x10) == 0) {
        piVar12 = (*(iVar15 + 0x20))[0x8f];
        if ((piVar12 == NULL) || (iVar7 = *piVar12, iVar7 == 0)) {
            iVar11 = ***(iVar15 + 0x20);
            iVar7 = 0x800075a;
            if (iVar11 != 0) {
                iVar7 = iVar11;
            }
        }
        uVar6 = regulator_get(0,iVar7);
        if (uVar6 < 0xfffffffffffff001) {
            *(iVar15 + 0x10) = uVar6;
            uStack_40 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            if (uVar6 != 0) goto code_r0x0800316c;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (param_4 = *puVar13, param_4 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            param_4 = 0x800075a;
            if (uVar6 != 0) {
                param_4 = uVar6;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_read");
        uVar6 = 0xffffffffffffffed;
    }
    else {
code_r0x0800316c:
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uVar4 = regulator_get_voltage();
        iVar5 = scnprintf(&uStack_70,0x32,0x80004a2,uVar4);
        uVar6 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_70,iVar5);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar16 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.reg_debug_voltage_write;
    pcStack_a8 = sym.reg_debug_voltage_write;
    iVar15 = sp_el0;
    iStack_b8 = *(iVar15 + 0x5e0);
    iVar15 = *(auVar16._0_8_ + 0xd8);
    uVar6 = *(iVar15 + 0x10);
    puStack_b0 = &stack0xffffffffffffffd0;
    if (uVar6 == 0) {
        piVar12 = (*(iVar15 + 0x20))[0x8f];
        if ((piVar12 == NULL) || (iVar7 = *piVar12, iVar7 == 0)) {
            iVar11 = ***(iVar15 + 0x20);
            iVar7 = 0x800075a;
            if (iVar11 != 0) {
                iVar7 = iVar11;
            }
        }
        uVar6 = regulator_get(0,iVar7);
        if (uVar6 < 0xfffffffffffff001) {
            *(iVar15 + 0x10) = uVar6;
            uStack_c0 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_f8 = 0xffffffff;
            iStack_f4 = 0;
            if (uVar6 != 0) goto code_r0x080032d8;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_write");
        param_4 = 0xffffffffffffffed;
        goto code_r0x0800347c;
    }
code_r0x080032d8:
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    iStack_f4 = 0;
    uStack_f8 = 0xffffffff;
    if (param_4 < 0x32) {
        __check_object_size(&uStack_f0,param_4,0);
        uVar10 = param_4;
        iVar7 = sym._copy_from_user(&uStack_f0,auVar16._8_8_,param_4);
        if (iVar7 != 0) {
            param_4 = 0xfffffffffffffff2;
            goto code_r0x0800347c;
        }
        *(&uStack_f0 + param_4) = 0;
        iVar5 = sscanf(&uStack_f0,"%d %d",&iStack_f4,&uStack_f8);
        if (((1 < iVar5) && (-1 < iStack_f4)) && (uVar10 = uStack_f8, iStack_f4 <= uStack_f8)) {
            iVar5 = regulator_set_voltage(uVar6);
            if (iVar5 != 0) {
                puVar13 = (*(iVar15 + 0x20))[0x8f];
                if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
                    uVar6 = ***(iVar15 + 0x20);
                    uVar10 = 0x800075a;
                    if (uVar6 != 0) {
                        uVar10 = uVar6;
                    }
                }
                _printk(0x80007fe,"reg_debug_voltage_write",uVar10,iStack_f4,uStack_f8,iVar5);
                param_4 = iVar5;
            }
            goto code_r0x0800347c;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x8000777,"reg_debug_voltage_write",uVar10,&uStack_f0);
    }
    else {
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x80002a1,"reg_debug_voltage_write");
    }
    param_4 = 0xffffffffffffffea;
code_r0x0800347c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_b8) {
        auVar16 = __stack_chk_fail();
        uVar9 = auVar16._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar6 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar14 = uVar9 & uVar6;
        }
        bVar3 = CARRY8(uVar14,uVar10);
        uVar14 = uVar14 + uVar10;
        uVar1 = 0;
        if (!bVar3 || uVar14 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar14 = 0xffffffffffffffff;
        }
        uVar8 = uVar10;
        if (!CARRY8(uVar14,~uVar1) && !CARRY8(uVar14 + ~uVar1,bVar3) || uVar14 == uVar1 + !bVar3) {
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar14 = daif;
                if ((uVar14 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar14;
            }
            if ((uVar9 & uVar6 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            uVar8 = __arch_copy_from_user(auVar16._0_8_,uVar9,uVar10);
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar6 = daif;
                if ((uVar6 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar6;
            }
        }
        if (uVar8 != 0) {
            memset(auVar16._0_8_ + (uVar10 - uVar8),0,uVar8);
        }
        return uVar8;
    }
    return param_4;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08002320 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x08002328 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.devm_regulator_debug_unregister.cfi_jt @ 0x08002330 (size 8) =====

void sym.devm_regulator_debug_unregister.cfi_jt(uint64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x8000576,"devm_regulator_debug_unregister");
    }
    else {
        mutex_lock(obj.debug_reg_list_lock);
        pcVar1 = _obj.debug_reg_list;
        if (_obj.debug_reg_list != obj.debug_reg_list) {
            do {
                pcVar2 = *pcVar1;
                if (*(pcVar1 + 0x20) == param_1) {
                    devres_release(*(pcVar1 + 0x18),
                                   sym._devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                                   sym.devm_regulator_debug_match.216a89832cc52eb039fae63e443e7af0.cfi_jt);
                }
                pcVar1 = pcVar2;
            } while (pcVar2 != obj.debug_reg_list);
        }
        mutex_unlock(obj.debug_reg_list_lock);
    }
    return;
}


// ===== sym.regulator_debug_unregister.cfi_jt @ 0x08002338 (size 8) =====

void sym.regulator_debug_unregister.cfi_jt(uint64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x8000576,"regulator_debug_unregister");
    }
    else {
        mutex_lock(obj.debug_reg_list_lock);
        pcVar4 = _obj.debug_reg_list;
        if (_obj.debug_reg_list != obj.debug_reg_list) {
            do {
                pcVar5 = *pcVar4;
                if (*(pcVar4 + 0x20) == param_1) {
                    regulator_put(*(pcVar4 + 0x10));
                    uVar3 = __list_del_entry_valid(pcVar4);
                    if ((uVar3 & 1) != 0) {
                        iVar1 = *pcVar4;
                        piVar2 = *(pcVar4 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *pcVar4 = -0x2152ffffffffff00;
                    *(pcVar4 + 8) = -0x2152fffffffffede;
                    kfree(pcVar4);
                }
                pcVar4 = pcVar5;
            } while (pcVar5 != obj.debug_reg_list);
        }
        mutex_unlock(obj.debug_reg_list_lock);
    }
    return;
}


// ===== sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002340 (size 8) =====

void sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt
               (ulong param_1,ulong param_2,int param_3,uint64_t param_4)

{
    int64_t iVar1;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    int64_t *piVar9;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((0 < param_3) && ((param_4 & 1) != 0)) && (iVar4 = strcmp("machine_suspend"), iVar4 == 0)) &&
       (_printk(0x80003d8), _obj.debug_reg_list != obj.debug_reg_list)) {
        iVar1 = 0x800075a;
        pcVar10 = _obj.debug_reg_list;
        do {
            piVar11 = *(pcVar10 + 0x20);
            if (piVar11[0xa6] == 0) {
                pcVar8 = *(*(*piVar11 + 0x40) + 0x80);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x1bf4c7c0f319a435,pcVar8,0x80001e0);
                    iVar4 = (*pcVar8)(piVar11);
                    if (iVar4 < 1) goto code_r0x08003db0;
                }
code_r0x08003dc0:
                iVar4 = regulator_get_voltage_rdev(piVar11);
                pcVar8 = *(*(*piVar11 + 0x40) + 0x90);
                if (pcVar8 == NULL) {
                    if (iVar4 == -1) {
code_r0x08003ed4:
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        _printk(0x800056c,iVar7,*(piVar11 + 0xc));
                    }
                    else {
code_r0x08003e60:
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        uVar3 = *(piVar11 + 0xc);
                        uVar6 = 0x80002f2;
                        iVar5 = iVar4;
code_r0x08003e90:
                        _printk(uVar6,iVar7,uVar3,iVar5);
                    }
                }
                else {
                    __cfi_slowpath_diag(0x8710919aaec63485,pcVar8,0x80001c0);
                    iVar5 = (*pcVar8)(piVar11);
                    if ((iVar4 == -1) || (iVar5 == -1)) {
                        if (iVar4 != -1) goto code_r0x08003e60;
                        if (iVar5 == -1) goto code_r0x08003ed4;
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        uVar3 = *(piVar11 + 0xc);
                        uVar6 = 0x80002df;
                        goto code_r0x08003e90;
                    }
                    if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                       (iVar7 = iVar1, **piVar11 != 0)) {
                        iVar7 = **piVar11;
                    }
                    _printk(0x8000216,iVar7,*(piVar11 + 0xc),iVar4);
                }
                if (piVar11[2] != 0) {
                    _printk(0x8000439,"Device-Supply");
                }
                for (piVar9 = piVar11[5]; piVar11 + 5 != piVar9; piVar9 = *piVar9) {
                    pcVar2 = "(null)-(null)";
                    if (piVar9[9] != NULL) {
                        pcVar2 = piVar9[9];
                    }
                    _printk(0x8000707,pcVar2,*(piVar9 + 3),*(piVar9 + 4),*(piVar9 + 0x24),*(piVar9 + 0x14));
                }
            }
            else if ((*(piVar11 + 0xa7) & 1) != 0) goto code_r0x08003dc0;
code_r0x08003db0:
            pcVar10 = *pcVar10;
        } while (pcVar10 != obj.debug_reg_list);
    }
    return;
}


// ===== sym.reg_debug_suspend_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002348 (size 8) =====

ulong sym.reg_debug_suspend_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = obj.debug_suspend;
    return 0;
}


// ===== sym.reg_debug_bypass_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002350 (size 8) =====

uint64_t sym.reg_debug_bypass_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    piVar6 = *(param_1 + 0x20);
    auStack_4c[0] = 0;
    ww_mutex_lock(piVar6 + 0x13,0);
    pcVar8 = *(*(*piVar6 + 0x40) + 0xe8);
    if (pcVar8 == NULL) {
        uVar7 = 0;
        auStack_4c[0] = *(piVar6 + 0x14) == piVar6[2];
    }
    else {
        __cfi_slowpath_diag(0x4daa72e6ec706725,pcVar8,0x80001a0);
        uVar1 = (*pcVar8)(piVar6,auStack_4c);
        uVar7 = uVar1;
        if (uVar1 != 0) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar2 = *piVar5, iVar2 == 0)) {
                iVar3 = ***(param_1 + 0x20);
                iVar2 = 0x800075a;
                if (iVar3 != 0) {
                    iVar2 = iVar3;
                }
            }
            _printk(0x80003ef,"reg_debug_bypass_enable_get",iVar2,uVar7);
        }
    }
    ww_mutex_unlock(piVar6 + 0x13);
    *param_2 = auStack_4c[0];
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail();
        iVar2 = auVar9._0_8_;
        *extraout_x18 = sym.reg_debug_bypass_enable_set;
        uVar7 = *(iVar2 + 0x10);
        if (uVar7 == 0) {
            piVar6 = (*(iVar2 + 0x20))[0x8f];
            if ((piVar6 == NULL) || (iVar3 = *piVar6, iVar3 == 0)) {
                iVar4 = ***(iVar2 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            uVar7 = regulator_get(0,iVar3);
            if ((0xfffffffffffff000 < uVar7) || (*(iVar2 + 0x10) = uVar7, uVar7 == 0)) {
                piVar6 = (*(iVar2 + 0x20))[0x8f];
                if ((piVar6 == NULL) || (iVar3 = *piVar6, iVar3 == 0)) {
                    iVar2 = ***(iVar2 + 0x20);
                    iVar3 = 0x800075a;
                    if (iVar2 != 0) {
                        iVar3 = iVar2;
                    }
                }
                _printk(0x80006bb,"reg_debug_bypass_enable_set",iVar3);
                return 0xffffffed;
            }
        }
        uVar7 = regulator_allow_bypass(uVar7,auVar9._8_8_ != 0);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002358 (size 8) =====

ulong sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x10) == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_enable_get",iVar3);
            return 0xffffffed;
        }
    }
    iVar1 = regulator_is_enabled();
    *param_2 = iVar1;
    return 0;
}


// ===== sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002360 (size 8) =====

uint64_t sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x10) == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_mode_get",iVar3);
            return 0xffffffed;
        }
    }
    uVar1 = regulator_get_mode();
    uVar2 = uVar1;
    if (uVar1 < 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x8000416,"reg_debug_mode_get",iVar3,uVar2);
    }
    else {
        *param_2 = uVar2;
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.devm_regulator_debug_match.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002368 (size 8) =====

bool sym.devm_regulator_debug_match.216a89832cc52eb039fae63e443e7af0.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3)

{
    code *pcVar1;
    
    if ((param_2 != NULL) && (*param_2 != 0)) {
        return *param_2 == param_3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002aac);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x08002370 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.no_llseek.cfi_jt @ 0x08002378 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reg_debug_suspend_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002380 (size 8) =====

void sym.reg_debug_suspend_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_suspend_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_suspend_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08002388 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reg_debug_consumers_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002390 (size 8) =====

void sym.reg_debug_consumers_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.reg_debug_consumers_show.216a89832cc52eb039fae63e443e7af0.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08002398 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reg_bypass_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023a0 (size 8) =====

void sym.reg_bypass_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_bypass_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_bypass_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_mode_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023a8 (size 8) =====

void sym.reg_mode_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_mode_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_force_disable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023b0 (size 8) =====

void sym.reg_force_disable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_force_disable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_set_load_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023b8 (size 8) =====

void sym.reg_set_load_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_set_load.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_open.cfi_jt @ 0x080023c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reg_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023c8 (size 8) =====

void sym.reg_enable_fops_open.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023d0 (size 8) =====

int sym.reg_debug_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x10) == 0) {
        piVar6 = (*(param_1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(param_1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar2 = regulator_get(0,iVar4);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar6 = (*(param_1 + 0x20))[0x8f];
            if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
                iVar5 = ***(param_1 + 0x20);
                iVar4 = 0x800075a;
                if (iVar5 != 0) {
                    iVar4 = iVar5;
                }
            }
            _printk(0x80006bb,"reg_debug_enable_set",iVar4);
            return -0x13;
        }
    }
    if (param_2 == 0) {
        iVar1 = regulator_disable();
        if (iVar1 == 0) {
            return 0;
        }
        piVar6 = (*(param_1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(param_1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar3 = 0x800039e;
    }
    else {
        iVar1 = regulator_enable();
        if (iVar1 == 0) {
            return 0;
        }
        piVar6 = (*(param_1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(param_1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar3 = 0x8000481;
    }
    _printk(uVar3,"reg_debug_enable_set",iVar4,iVar1);
    return iVar1;
}


// ===== sym.reg_debug_mode_set.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023d8 (size 8) =====

int sym.reg_debug_mode_set.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,uint param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x10);
    if (uVar2 == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_mode_set",iVar3);
            return -0x13;
        }
    }
    iVar1 = regulator_set_mode(uVar2,param_2);
    if (iVar1 != 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x800050e,"reg_debug_mode_set",iVar3,param_2,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_debug_set_load.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023e0 (size 8) =====

int sym.reg_debug_set_load.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,uint param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_1 + 0x10);
    if (uVar2 == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_set_load",iVar3);
            return -0x13;
        }
    }
    iVar1 = regulator_set_load(uVar2,param_2);
    if (iVar1 != 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x80005c6,"reg_debug_set_load",iVar3,param_2,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_debug_suspend_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023e8 (size 8) =====

int sym.reg_debug_suspend_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    code cVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.debug_suspend == (param_2 != 0)) {
        iVar3 = 0;
        cVar2 = obj.debug_suspend;
    }
    else {
        if (param_2 == 0) {
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
        }
        else {
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
        }
        cVar2 = param_2 != 0;
        if (iVar3 != 0) {
            uVar1 = 0x800075a;
            if (param_2 == 0) {
                uVar1 = 0x800082c;
            }
            _printk(0x800035c,"reg_debug_suspend_enable_set",uVar1,iVar3);
            cVar2 = obj.debug_suspend;
        }
    }
    obj.debug_suspend = cVar2;
    return iVar3;
}


// ===== sym.reg_debug_bypass_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023f0 (size 8) =====

ulong sym.reg_debug_bypass_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + 0x10);
    if (uVar1 == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar1 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar1) || (*(param_1 + 0x10) = uVar1, uVar1 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_bypass_enable_set",iVar3);
            return 0xffffffed;
        }
    }
    uVar2 = regulator_allow_bypass(uVar1,param_2 != 0);
    return uVar2;
}


// ===== sym.reg_debug_force_disable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x080023f8 (size 8) =====

int sym.reg_debug_force_disable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x10) == 0) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(param_1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(param_1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(param_1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_force_disable_set",iVar3);
            return -0x13;
        }
    }
    iVar1 = 0;
    if ((param_2 != 0) && (iVar1 = regulator_force_disable(), iVar1 != 0)) {
        piVar5 = (*(param_1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(param_1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x800059e,"reg_debug_force_disable_set",iVar3,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_debug_voltage_write.216a89832cc52eb039fae63e443e7af0.cfi_jt @ 0x08002400 (size 8) =====

uint64_t sym.reg_debug_voltage_write.216a89832cc52eb039fae63e443e7af0.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_88;
    int iStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_48 = *(iVar14 + 0x5e0);
    iVar14 = *(param_1 + 0xd8);
    uVar13 = *(iVar14 + 0x10);
    if (uVar13 == 0) {
        piVar10 = (*(iVar14 + 0x20))[0x8f];
        if ((piVar10 == NULL) || (iVar5 = *piVar10, iVar5 == 0)) {
            iVar9 = ***(iVar14 + 0x20);
            iVar5 = 0x800075a;
            if (iVar9 != 0) {
                iVar5 = iVar9;
            }
        }
        uVar13 = regulator_get(0,iVar5);
        if (uVar13 < 0xfffffffffffff001) {
            *(iVar14 + 0x10) = uVar13;
            uStack_50 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_88 = 0xffffffff;
            iStack_84 = 0;
            if (uVar13 != 0) goto code_r0x080032d8;
        }
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_write");
        param_3 = 0xffffffffffffffed;
        goto code_r0x0800347c;
    }
code_r0x080032d8:
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    iStack_84 = 0;
    uStack_88 = 0xffffffff;
    if (param_3 < 0x32) {
        __check_object_size(&uStack_80,param_3,0);
        uVar8 = param_3;
        iVar5 = sym._copy_from_user(&uStack_80,param_2,param_3);
        if (iVar5 != 0) {
            param_3 = 0xfffffffffffffff2;
            goto code_r0x0800347c;
        }
        *(&uStack_80 + param_3) = 0;
        iVar4 = sscanf(&uStack_80,"%d %d",&iStack_84,&uStack_88);
        if (((1 < iVar4) && (-1 < iStack_84)) && (uVar8 = uStack_88, iStack_84 <= uStack_88)) {
            iVar4 = regulator_set_voltage(uVar13);
            if (iVar4 != 0) {
                puVar11 = (*(iVar14 + 0x20))[0x8f];
                if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
                    uVar13 = ***(iVar14 + 0x20);
                    uVar8 = 0x800075a;
                    if (uVar13 != 0) {
                        uVar8 = uVar13;
                    }
                }
                _printk(0x80007fe,"reg_debug_voltage_write",uVar8,iStack_84,uStack_88,iVar4);
                param_3 = iVar4;
            }
            goto code_r0x0800347c;
        }
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x8000777,"reg_debug_voltage_write",uVar8,&uStack_80);
    }
    else {
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x80002a1,"reg_debug_voltage_write");
    }
    param_3 = 0xffffffffffffffea;
code_r0x0800347c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_48) {
        auVar15 = __stack_chk_fail();
        uVar7 = auVar15._8_8_;
        *extraout_x18 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar13 = (uVar7 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar12 = uVar7 & uVar13;
        }
        bVar3 = CARRY8(uVar12,uVar8);
        uVar12 = uVar12 + uVar8;
        uVar1 = 0;
        if (!bVar3 || uVar12 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar12 = 0xffffffffffffffff;
        }
        uVar6 = uVar8;
        if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar3) || uVar12 == uVar1 + !bVar3) {
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
            if ((uVar7 & uVar13 & 0xffffff8000000000) != 0) {
                uVar7 = 0;
            }
            uVar6 = __arch_copy_from_user(auVar15._0_8_,uVar7,uVar8);
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar13 = daif;
                if ((uVar13 & 0x80) == 0) {
                    uVar7 = daif;
                    daif = uVar7 | 0xc0;
                }
                uVar7 = ttbr1_el1;
                ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar7 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar13;
            }
        }
        if (uVar6 != 0) {
            memset(auVar15._0_8_ + (uVar8 - uVar6),0,uVar6);
        }
        return uVar6;
    }
    return param_3;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08002408 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.regulator_debug_register @ 0x08002410 (size 44) =====

uint sym.regulator_debug_register(int64_t arg2,int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regulator_debug_add(arg2,arg1);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.regulator_debug_add @ 0x0800243c (size 672) =====

int64_t * sym.regulator_debug_add(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong uVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        _printk(0x8000551,"regulator_debug_add");
        return 0xffffffffffffffea;
    }
    iVar7 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar7 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xdc0,0x28);
    if (piVar2 == NULL) {
        return 0xfffffffffffffff4;
    }
    piVar2[3] = arg1;
    piVar2[4] = arg2;
    mutex_lock(obj.debug_reg_list_lock);
    piVar1 = _obj.debug_reg_list;
    uVar3 = __list_add_valid(piVar2,obj.debug_reg_list,_obj.debug_reg_list);
    if ((uVar3 & 1) != 0) {
        piVar1[1] = piVar2;
        *piVar2 = piVar1;
        piVar2[1] = obj.debug_reg_list;
        _obj.debug_reg_list = piVar2;
    }
    mutex_unlock(obj.debug_reg_list_lock);
    uVar6 = *(arg2 + 0x528);
    iVar7 = *(*arg2 + 0x40);
    debugfs_create_file_unsafe("enable",0x1a4,uVar6,piVar2,obj.reg_enable_fops);
    if (*(iVar7 + 0xe0) != 0) {
        debugfs_create_file_unsafe("bypass",0x1a4,uVar6,piVar2,obj.reg_bypass_enable_fops);
    }
    uVar5 = 0;
    if (*(iVar7 + 0x80) != 0) {
        uVar5 = 0x124;
    }
    if (*(iVar7 + 0x78) != 0 || *(iVar7 + 0x80) != 0) {
        if (*(iVar7 + 0x78) != 0) {
            uVar5 = uVar5 | 0x80;
        }
        debugfs_create_file_unsafe("force_disable",uVar5,uVar6,piVar2,obj.reg_force_disable_fops);
    }
    if ((*(iVar7 + 0x20) == 0) && (*(iVar7 + 0x28) == 0)) {
        uVar5 = 0;
        bVar4 = true;
        if (*(iVar7 + 8) != 0) goto code_r0x080025c0;
code_r0x08002598:
        if (*(iVar7 + 0x18) != 0) goto code_r0x080025c0;
        if (!bVar4) goto code_r0x080025c4;
    }
    else {
        bVar4 = false;
        uVar5 = 0x124;
        if (*(iVar7 + 8) == 0) goto code_r0x08002598;
code_r0x080025c0:
        uVar5 = uVar5 | 0x80;
code_r0x080025c4:
        debugfs_create_file_unsafe("voltage",uVar5,uVar6,piVar2,obj.reg_voltage_fops);
    }
    uVar5 = 0;
    if (*(iVar7 + 0x90) != 0) {
        uVar5 = 0x124;
    }
    if ((*(iVar7 + 0x88) == 0) && (*(iVar7 + 0x90) == 0)) {
code_r0x0800263c:
        uVar5 = 0;
        bVar4 = true;
        if (*(iVar7 + 0xd8) != 0) goto code_r0x0800265c;
code_r0x0800264c:
        if ((*(iVar7 + 0xd0) != 0) && (*(iVar7 + 0x88) != 0)) goto code_r0x0800265c;
        if (bVar4) goto code_r0x0800267c;
    }
    else {
        if (*(iVar7 + 0x88) != 0) {
            uVar5 = uVar5 | 0x80;
        }
        debugfs_create_file_unsafe("mode",uVar5,uVar6,piVar2,obj.reg_mode_fops);
        if (*(iVar7 + 0x90) == 0) goto code_r0x0800263c;
        bVar4 = false;
        uVar5 = 0x124;
        if (*(iVar7 + 0xd8) == 0) goto code_r0x0800264c;
code_r0x0800265c:
        uVar5 = uVar5 | 0x80;
    }
    debugfs_create_file_unsafe("load",uVar5,uVar6,piVar2,obj.reg_set_load_fops);
code_r0x0800267c:
    debugfs_create_file("consumers",0x124,uVar6,arg2,obj.reg_consumers_fops);
    return piVar2;
}


// ===== sym.regulator_debug_unregister @ 0x080026dc (size 232) =====

void sym.regulator_debug_unregister(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
        _printk(0x8000576,"regulator_debug_unregister");
    }
    else {
        mutex_lock(obj.debug_reg_list_lock);
        pcVar5 = _obj.debug_reg_list;
        if (_obj.debug_reg_list != obj.debug_reg_list) {
            do {
                pcVar6 = *pcVar5;
                if (*(pcVar5 + 0x20) == uVar3) {
                    regulator_put(*(pcVar5 + 0x10));
                    uVar4 = __list_del_entry_valid(pcVar5);
                    if ((uVar4 & 1) != 0) {
                        iVar1 = *pcVar5;
                        piVar2 = *(pcVar5 + 8);
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *pcVar5 = -0x2152ffffffffff00;
                    *(pcVar5 + 8) = -0x2152fffffffffede;
                    kfree(pcVar5);
                }
                pcVar5 = pcVar6;
            } while (pcVar6 != obj.debug_reg_list);
        }
        mutex_unlock(obj.debug_reg_list_lock);
    }
    return;
}


// ===== sym.devm_regulator_debug_register @ 0x080027c4 (size 168) =====

uint64_t sym.devm_regulator_debug_register(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_regulator_debug_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regulator_debug_add(arg1,arg2);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            devres_free(puVar1);
        }
        else {
            *puVar1 = uVar2;
            devres_add(arg1,puVar1);
            uVar2 = 0;
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.devm_regulator_debug_release @ 0x0800286c (size 176) =====

void sym.devm_regulator_debug_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.debug_reg_list_lock);
    if (_obj.debug_reg_list != obj.debug_reg_list) {
        pcVar5 = *arg1;
        pcVar4 = _obj.debug_reg_list;
        do {
            if (pcVar4 == pcVar5) {
                regulator_put(*(pcVar5 + 0x10));
                uVar3 = __list_del_entry_valid(pcVar5);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5);
                break;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.debug_reg_list);
    }
    mutex_unlock(obj.debug_reg_list_lock);
    return;
}


// ===== sym.devm_regulator_debug_unregister @ 0x0800291c (size 208) =====

void sym.devm_regulator_debug_unregister(uint32_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x8000576,"devm_regulator_debug_unregister");
    }
    else {
        mutex_lock(obj.debug_reg_list_lock);
        pcVar2 = _obj.debug_reg_list;
        if (_obj.debug_reg_list != obj.debug_reg_list) {
            do {
                pcVar3 = *pcVar2;
                if (*(pcVar2 + 0x20) == uVar1) {
                    devres_release(*(pcVar2 + 0x18),
                                   sym._devm_regulator_debug_release.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                                   sym.devm_regulator_debug_match.216a89832cc52eb039fae63e443e7af0.cfi_jt);
                }
                pcVar2 = pcVar3;
            } while (pcVar3 != obj.debug_reg_list);
        }
        mutex_unlock(obj.debug_reg_list_lock);
    }
    return;
}


// ===== sym._devm_regulator_debug_release @ 0x080029ec (size 148) =====

void sym._devm_regulator_debug_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.debug_reg_list != obj.debug_reg_list) {
        pcVar5 = *arg1;
        pcVar4 = _obj.debug_reg_list;
        do {
            if (pcVar4 == pcVar5) {
                regulator_put(*(pcVar5 + 0x10));
                uVar3 = __list_del_entry_valid(pcVar5);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar5;
                    piVar2 = *(pcVar5 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar5 = -0x2152ffffffffff00;
                *(pcVar5 + 8) = -0x2152fffffffffede;
                kfree(pcVar5);
                return;
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.debug_reg_list);
    }
    return;
}


// ===== sym.devm_regulator_debug_match @ 0x08002a80 (size 44) =====

bool sym.devm_regulator_debug_match(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    
    if ((arg2 != 0) && (*arg2 != 0)) {
        return *arg2 == arg3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002aac);
    (*pcVar1)();
}


// ===== sym.reg_enable_fops_open @ 0x08002ab0 (size 60) =====

void sym.reg_enable_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_enable_get @ 0x08002aec (size 212) =====

ulong sym.reg_debug_enable_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x10) == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_enable_get",iVar3);
            return 0xffffffed;
        }
    }
    iVar1 = regulator_is_enabled();
    *arg2 = iVar1;
    return 0;
}


// ===== sym.reg_debug_enable_set @ 0x08002bc0 (size 356) =====

int sym.reg_debug_enable_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x10) == 0) {
        piVar6 = (*(arg1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(arg1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar2 = regulator_get(0,iVar4);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar6 = (*(arg1 + 0x20))[0x8f];
            if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
                iVar5 = ***(arg1 + 0x20);
                iVar4 = 0x800075a;
                if (iVar5 != 0) {
                    iVar4 = iVar5;
                }
            }
            _printk(0x80006bb,"reg_debug_enable_set",iVar4);
            return -0x13;
        }
    }
    if (arg2 == 0) {
        iVar1 = regulator_disable();
        if (iVar1 == 0) {
            return 0;
        }
        piVar6 = (*(arg1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(arg1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar3 = 0x800039e;
    }
    else {
        iVar1 = regulator_enable();
        if (iVar1 == 0) {
            return 0;
        }
        piVar6 = (*(arg1 + 0x20))[0x8f];
        if ((piVar6 == NULL) || (iVar4 = *piVar6, iVar4 == 0)) {
            iVar5 = ***(arg1 + 0x20);
            iVar4 = 0x800075a;
            if (iVar5 != 0) {
                iVar4 = iVar5;
            }
        }
        uVar3 = 0x8000481;
    }
    _printk(uVar3,"reg_debug_enable_set",iVar4,iVar1);
    return iVar1;
}


// ===== sym.reg_bypass_enable_fops_open @ 0x08002d24 (size 60) =====

void sym.reg_bypass_enable_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_bypass_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_bypass_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_bypass_enable_get @ 0x08002d60 (size 312) =====

uint64_t sym.reg_debug_bypass_enable_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    piVar6 = *(arg1 + 0x20);
    auStack_4c[0] = 0;
    ww_mutex_lock(piVar6 + 0x13,0);
    pcVar8 = *(*(*piVar6 + 0x40) + 0xe8);
    if (pcVar8 == NULL) {
        uVar7 = 0;
        auStack_4c[0] = *(piVar6 + 0x14) == piVar6[2];
    }
    else {
        __cfi_slowpath_diag(0x4daa72e6ec706725,pcVar8,0x80001a0);
        uVar1 = (*pcVar8)(piVar6,auStack_4c);
        uVar7 = uVar1;
        if (uVar1 != 0) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar2 = *piVar5, iVar2 == 0)) {
                iVar3 = ***(arg1 + 0x20);
                iVar2 = 0x800075a;
                if (iVar3 != 0) {
                    iVar2 = iVar3;
                }
            }
            _printk(0x80003ef,"reg_debug_bypass_enable_get",iVar2,uVar7);
        }
    }
    ww_mutex_unlock(piVar6 + 0x13);
    *arg2 = auStack_4c[0];
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail();
        iVar2 = auVar9._0_8_;
        *extraout_x18 = sym.reg_debug_bypass_enable_set;
        uVar7 = *(iVar2 + 0x10);
        if (uVar7 == 0) {
            piVar6 = (*(iVar2 + 0x20))[0x8f];
            if ((piVar6 == NULL) || (iVar3 = *piVar6, iVar3 == 0)) {
                iVar4 = ***(iVar2 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            uVar7 = regulator_get(0,iVar3);
            if ((0xfffffffffffff000 < uVar7) || (*(iVar2 + 0x10) = uVar7, uVar7 == 0)) {
                piVar6 = (*(iVar2 + 0x20))[0x8f];
                if ((piVar6 == NULL) || (iVar3 = *piVar6, iVar3 == 0)) {
                    iVar2 = ***(iVar2 + 0x20);
                    iVar3 = 0x800075a;
                    if (iVar2 != 0) {
                        iVar3 = iVar2;
                    }
                }
                _printk(0x80006bb,"reg_debug_bypass_enable_set",iVar3);
                return 0xffffffed;
            }
        }
        uVar7 = regulator_allow_bypass(uVar7,auVar9._8_8_ != 0);
        return uVar7;
    }
    return uVar7;
}


// ===== sym.reg_debug_bypass_enable_set @ 0x08002e98 (size 208) =====

ulong sym.reg_debug_bypass_enable_set(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x10);
    if (uVar1 == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar1 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar1) || (*(arg1 + 0x10) = uVar1, uVar1 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_bypass_enable_set",iVar3);
            return 0xffffffed;
        }
    }
    uVar2 = regulator_allow_bypass(uVar1,arg2 != 0);
    return uVar2;
}


// ===== sym.reg_force_disable_fops_open @ 0x08002f68 (size 60) =====

void sym.reg_force_disable_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_force_disable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_force_disable_set @ 0x08002fa4 (size 288) =====

int sym.reg_debug_force_disable_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x10) == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_force_disable_set",iVar3);
            return -0x13;
        }
    }
    iVar1 = 0;
    if ((arg2 != 0) && (iVar1 = regulator_force_disable(), iVar1 != 0)) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x800059e,"reg_debug_force_disable_set",iVar3,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_debug_voltage_read @ 0x080030c4 (size 344) =====

uint64_t sym.reg_debug_voltage_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    uint uVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t *puVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint32_t uStack_f8;
    int iStack_f4;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ushort uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    iVar15 = *(arg1 + 0xd8);
    if (*(iVar15 + 0x10) == 0) {
        piVar12 = (*(iVar15 + 0x20))[0x8f];
        if ((piVar12 == NULL) || (iVar7 = *piVar12, iVar7 == 0)) {
            iVar11 = ***(iVar15 + 0x20);
            iVar7 = 0x800075a;
            if (iVar11 != 0) {
                iVar7 = iVar11;
            }
        }
        uVar6 = regulator_get(0,iVar7);
        if (uVar6 < 0xfffffffffffff001) {
            *(iVar15 + 0x10) = uVar6;
            uStack_40 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            if (uVar6 != 0) goto code_r0x0800316c;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (arg4 = *puVar13, arg4 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            arg4 = 0x800075a;
            if (uVar6 != 0) {
                arg4 = uVar6;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_read");
        uVar6 = 0xffffffffffffffed;
    }
    else {
code_r0x0800316c:
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uVar4 = regulator_get_voltage();
        iVar5 = scnprintf(&uStack_70,0x32,0x80004a2,uVar4);
        uVar6 = simple_read_from_buffer(arg2,arg3,arg4,&uStack_70,iVar5);
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar16 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.reg_debug_voltage_write;
    pcStack_a8 = sym.reg_debug_voltage_write;
    iVar15 = sp_el0;
    iStack_b8 = *(iVar15 + 0x5e0);
    iVar15 = *(auVar16._0_8_ + 0xd8);
    uVar6 = *(iVar15 + 0x10);
    puStack_b0 = &stack0xffffffffffffffd0;
    if (uVar6 == 0) {
        piVar12 = (*(iVar15 + 0x20))[0x8f];
        if ((piVar12 == NULL) || (iVar7 = *piVar12, iVar7 == 0)) {
            iVar11 = ***(iVar15 + 0x20);
            iVar7 = 0x800075a;
            if (iVar11 != 0) {
                iVar7 = iVar11;
            }
        }
        uVar6 = regulator_get(0,iVar7);
        if (uVar6 < 0xfffffffffffff001) {
            *(iVar15 + 0x10) = uVar6;
            uStack_c0 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_f8 = 0xffffffff;
            iStack_f4 = 0;
            if (uVar6 != 0) goto code_r0x080032d8;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_write");
        arg4 = 0xffffffffffffffed;
        goto code_r0x0800347c;
    }
code_r0x080032d8:
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    iStack_f4 = 0;
    uStack_f8 = 0xffffffff;
    if (arg4 < 0x32) {
        __check_object_size(&uStack_f0,arg4,0);
        uVar10 = arg4;
        iVar7 = sym._copy_from_user(&uStack_f0,auVar16._8_8_,arg4);
        if (iVar7 != 0) {
            arg4 = 0xfffffffffffffff2;
            goto code_r0x0800347c;
        }
        *(&uStack_f0 + arg4) = 0;
        iVar5 = sscanf(&uStack_f0,"%d %d",&iStack_f4,&uStack_f8);
        if (((1 < iVar5) && (-1 < iStack_f4)) && (uVar10 = uStack_f8, iStack_f4 <= uStack_f8)) {
            iVar5 = regulator_set_voltage(uVar6);
            if (iVar5 != 0) {
                puVar13 = (*(iVar15 + 0x20))[0x8f];
                if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
                    uVar6 = ***(iVar15 + 0x20);
                    uVar10 = 0x800075a;
                    if (uVar6 != 0) {
                        uVar10 = uVar6;
                    }
                }
                _printk(0x80007fe,"reg_debug_voltage_write",uVar10,iStack_f4,uStack_f8,iVar5);
                arg4 = iVar5;
            }
            goto code_r0x0800347c;
        }
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x8000777,"reg_debug_voltage_write",uVar10,&uStack_f0);
    }
    else {
        puVar13 = (*(iVar15 + 0x20))[0x8f];
        if ((puVar13 == NULL) || (uVar10 = *puVar13, uVar10 == 0)) {
            uVar6 = ***(iVar15 + 0x20);
            uVar10 = 0x800075a;
            if (uVar6 != 0) {
                uVar10 = uVar6;
            }
        }
        _printk(0x80002a1,"reg_debug_voltage_write");
    }
    arg4 = 0xffffffffffffffea;
code_r0x0800347c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_b8) {
        auVar16 = __stack_chk_fail();
        uVar9 = auVar16._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar6 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar14 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar14 = uVar9 & uVar6;
        }
        bVar3 = CARRY8(uVar14,uVar10);
        uVar14 = uVar14 + uVar10;
        uVar1 = 0;
        if (!bVar3 || uVar14 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar14 = 0xffffffffffffffff;
        }
        uVar8 = uVar10;
        if (!CARRY8(uVar14,~uVar1) && !CARRY8(uVar14 + ~uVar1,bVar3) || uVar14 == uVar1 + !bVar3) {
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar14 = daif;
                if ((uVar14 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar14;
            }
            if ((uVar9 & uVar6 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            uVar8 = __arch_copy_from_user(auVar16._0_8_,uVar9,uVar10);
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar6 = daif;
                if ((uVar6 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar6;
            }
        }
        if (uVar8 != 0) {
            memset(auVar16._0_8_ + (uVar10 - uVar8),0,uVar8);
        }
        return uVar8;
    }
    return arg4;
}


// ===== sym.reg_debug_voltage_write @ 0x0800321c (size 668) =====

uint64_t sym.reg_debug_voltage_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint32_t uStack_88;
    int iStack_84;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ushort uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_48 = *(iVar14 + 0x5e0);
    iVar14 = *(arg1 + 0xd8);
    uVar13 = *(iVar14 + 0x10);
    if (uVar13 == 0) {
        piVar10 = (*(iVar14 + 0x20))[0x8f];
        if ((piVar10 == NULL) || (iVar5 = *piVar10, iVar5 == 0)) {
            iVar9 = ***(iVar14 + 0x20);
            iVar5 = 0x800075a;
            if (iVar9 != 0) {
                iVar5 = iVar9;
            }
        }
        uVar13 = regulator_get(0,iVar5);
        if (uVar13 < 0xfffffffffffff001) {
            *(iVar14 + 0x10) = uVar13;
            uStack_50 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_88 = 0xffffffff;
            iStack_84 = 0;
            if (uVar13 != 0) goto code_r0x080032d8;
        }
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x80006bb,"reg_debug_voltage_write");
        arg3 = 0xffffffffffffffed;
        goto code_r0x0800347c;
    }
code_r0x080032d8:
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    iStack_84 = 0;
    uStack_88 = 0xffffffff;
    if (arg3 < 0x32) {
        __check_object_size(&uStack_80,arg3,0);
        uVar8 = arg3;
        iVar5 = sym._copy_from_user(&uStack_80,arg2,arg3);
        if (iVar5 != 0) {
            arg3 = 0xfffffffffffffff2;
            goto code_r0x0800347c;
        }
        *(&uStack_80 + arg3) = 0;
        iVar4 = sscanf(&uStack_80,"%d %d",&iStack_84,&uStack_88);
        if (((1 < iVar4) && (-1 < iStack_84)) && (uVar8 = uStack_88, iStack_84 <= uStack_88)) {
            iVar4 = regulator_set_voltage(uVar13);
            if (iVar4 != 0) {
                puVar11 = (*(iVar14 + 0x20))[0x8f];
                if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
                    uVar13 = ***(iVar14 + 0x20);
                    uVar8 = 0x800075a;
                    if (uVar13 != 0) {
                        uVar8 = uVar13;
                    }
                }
                _printk(0x80007fe,"reg_debug_voltage_write",uVar8,iStack_84,uStack_88,iVar4);
                arg3 = iVar4;
            }
            goto code_r0x0800347c;
        }
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x8000777,"reg_debug_voltage_write",uVar8,&uStack_80);
    }
    else {
        puVar11 = (*(iVar14 + 0x20))[0x8f];
        if ((puVar11 == NULL) || (uVar8 = *puVar11, uVar8 == 0)) {
            uVar13 = ***(iVar14 + 0x20);
            uVar8 = 0x800075a;
            if (uVar13 != 0) {
                uVar8 = uVar13;
            }
        }
        _printk(0x80002a1,"reg_debug_voltage_write");
    }
    arg3 = 0xffffffffffffffea;
code_r0x0800347c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_48) {
        auVar15 = __stack_chk_fail();
        uVar7 = auVar15._8_8_;
        *extraout_x18 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar13 = (uVar7 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar7, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar12 = uVar7 & uVar13;
        }
        bVar3 = CARRY8(uVar12,uVar8);
        uVar12 = uVar12 + uVar8;
        uVar1 = 0;
        if (!bVar3 || uVar12 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar3) {
            uVar12 = 0xffffffffffffffff;
        }
        uVar6 = uVar8;
        if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar3) || uVar12 == uVar1 + !bVar3) {
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
            if ((uVar7 & uVar13 & 0xffffff8000000000) != 0) {
                uVar7 = 0;
            }
            uVar6 = __arch_copy_from_user(auVar15._0_8_,uVar7,uVar8);
            if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
                uVar13 = daif;
                if ((uVar13 & 0x80) == 0) {
                    uVar7 = daif;
                    daif = uVar7 | 0xc0;
                }
                uVar7 = ttbr1_el1;
                ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar7 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar13;
            }
        }
        if (uVar6 != 0) {
            memset(auVar15._0_8_ + (uVar8 - uVar6),0,uVar6);
        }
        return uVar6;
    }
    return arg3;
}


// ===== sym._copy_from_user @ 0x080034b8 (size 376) =====

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
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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


// ===== sym.reg_mode_fops_open @ 0x0800366c (size 60) =====

void sym.reg_mode_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_mode_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_mode_get @ 0x080036a8 (size 304) =====

uint64_t sym.reg_debug_mode_get(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x10) == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_mode_get",iVar3);
            return 0xffffffed;
        }
    }
    uVar1 = regulator_get_mode();
    uVar2 = uVar1;
    if (uVar1 < 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x8000416,"reg_debug_mode_get",iVar3,uVar2);
    }
    else {
        *arg2 = uVar2;
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.reg_debug_mode_set @ 0x080037d8 (size 300) =====

int sym.reg_debug_mode_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x10);
    if (uVar2 == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_mode_set",iVar3);
            return -0x13;
        }
    }
    iVar1 = regulator_set_mode(uVar2,arg2 & 0xffffffff);
    if (iVar1 != 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x800050e,"reg_debug_mode_set",iVar3,arg2 & 0xffffffff,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_set_load_fops_open @ 0x08003904 (size 60) =====

void sym.reg_set_load_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_mode_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_set_load.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_set_load @ 0x08003940 (size 300) =====

int sym.reg_debug_set_load(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x10);
    if (uVar2 == 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        uVar2 = regulator_get(0,iVar3);
        if ((0xfffffffffffff000 < uVar2) || (*(arg1 + 0x10) = uVar2, uVar2 == 0)) {
            piVar5 = (*(arg1 + 0x20))[0x8f];
            if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
                iVar4 = ***(arg1 + 0x20);
                iVar3 = 0x800075a;
                if (iVar4 != 0) {
                    iVar3 = iVar4;
                }
            }
            _printk(0x80006bb,"reg_debug_set_load",iVar3);
            return -0x13;
        }
    }
    iVar1 = regulator_set_load(uVar2,arg2 & 0xffffffff);
    if (iVar1 != 0) {
        piVar5 = (*(arg1 + 0x20))[0x8f];
        if ((piVar5 == NULL) || (iVar3 = *piVar5, iVar3 == 0)) {
            iVar4 = ***(arg1 + 0x20);
            iVar3 = 0x800075a;
            if (iVar4 != 0) {
                iVar3 = iVar4;
            }
        }
        _printk(0x80005c6,"reg_debug_set_load",iVar3,arg2 & 0xffffffff,iVar1);
    }
    return iVar1;
}


// ===== sym.reg_debug_consumers_open @ 0x08003a6c (size 56) =====

void sym.reg_debug_consumers_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.reg_debug_consumers_show.216a89832cc52eb039fae63e443e7af0.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.reg_debug_consumers_show @ 0x08003aa4 (size 220) =====

ulong sym.reg_debug_consumers_show(int64_t arg1)

{
    char *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x80);
    ww_mutex_lock(iVar2 + 0x98,0);
    if (*(iVar2 + 0x10) != 0) {
        seq_printf(arg1,"%-32s EN    Min_uV   Max_uV  load_uA\n","Device-Supply");
    }
    piVar3 = iVar2 + 0x28;
    piVar4 = *piVar3;
    if (piVar3 != piVar4) {
        do {
            pcVar1 = "(null)-(null)";
            if (piVar4[9] != NULL) {
                pcVar1 = piVar4[9];
            }
            uVar5 = 0x4e;
            if (piVar4[3] != 0) {
                uVar5 = 0x59;
            }
            seq_printf(arg1,"%-32s %c   %8d %8d %8d\n",pcVar1,uVar5,piVar4[4],*(piVar4 + 0x24),*(piVar4 + 0x14));
            piVar4 = *piVar4;
        } while (piVar3 != piVar4);
    }
    ww_mutex_unlock(iVar2 + 0x98);
    return 0;
}


// ===== sym.reg_debug_suspend_enable_fops_open @ 0x08003b80 (size 60) =====

void sym.reg_debug_suspend_enable_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.reg_debug_suspend_enable_get.216a89832cc52eb039fae63e443e7af0.cfi_jt,
                     sym.reg_debug_suspend_enable_set.216a89832cc52eb039fae63e443e7af0.cfi_jt,"%llu\n");
    return;
}


// ===== sym.reg_debug_suspend_enable_get @ 0x08003bbc (size 28) =====

ulong sym.reg_debug_suspend_enable_get(int64_t arg1,int64_t arg2)

{
    *arg2 = obj.debug_suspend;
    return 0;
}


// ===== sym.reg_debug_suspend_enable_set @ 0x08003bd8 (size 204) =====

int sym.reg_debug_suspend_enable_set(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    code cVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.debug_suspend == (arg2 != 0)) {
        iVar3 = 0;
        cVar2 = obj.debug_suspend;
    }
    else {
        if (arg2 == 0) {
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
        }
        else {
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
        }
        cVar2 = arg2 != 0;
        if (iVar3 != 0) {
            uVar1 = 0x800075a;
            if (arg2 == 0) {
                uVar1 = 0x800082c;
            }
            _printk(0x800035c,"reg_debug_suspend_enable_set",uVar1,iVar3);
            cVar2 = obj.debug_suspend;
        }
    }
    obj.debug_suspend = cVar2;
    return iVar3;
}


// ===== sym.regulator_debug_suspend_trace_probe @ 0x08003ca4 (size 696) =====

uchar  [16] sym.regulator_debug_suspend_trace_probe(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t in_x3;
    ulong *in_x18;
    code *pcVar8;
    int64_t *piVar9;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    if ((((0 < arg1) && ((in_x3 & 1) != 0)) && (iVar4 = strcmp("machine_suspend"), noname_1 = extraout_q0, iVar4 == 0)
        ) && (noname_1 = _printk(0x80003d8), _obj.debug_reg_list != obj.debug_reg_list)) {
        iVar1 = 0x800075a;
        pcVar10 = _obj.debug_reg_list;
        do {
            piVar11 = *(pcVar10 + 0x20);
            if (piVar11[0xa6] == 0) {
                pcVar8 = *(*(*piVar11 + 0x40) + 0x80);
                if (pcVar8 != NULL) {
                    __cfi_slowpath_diag(0x1bf4c7c0f319a435,pcVar8,0x80001e0);
                    iVar4 = (*pcVar8)(piVar11);
                    noname_1 = extraout_q0_00;
                    if (iVar4 < 1) goto code_r0x08003db0;
                }
code_r0x08003dc0:
                iVar4 = regulator_get_voltage_rdev(piVar11);
                pcVar8 = *(*(*piVar11 + 0x40) + 0x90);
                if (pcVar8 == NULL) {
                    if (iVar4 == -1) {
code_r0x08003ed4:
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        noname_1 = _printk(0x800056c,iVar7,*(piVar11 + 0xc));
                    }
                    else {
code_r0x08003e60:
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        uVar3 = *(piVar11 + 0xc);
                        uVar6 = 0x80002f2;
                        iVar5 = iVar4;
code_r0x08003e90:
                        noname_1 = _printk(uVar6,iVar7,uVar3,iVar5);
                    }
                }
                else {
                    __cfi_slowpath_diag(0x8710919aaec63485,pcVar8,0x80001c0);
                    iVar5 = (*pcVar8)(piVar11);
                    if ((iVar4 == -1) || (iVar5 == -1)) {
                        if (iVar4 != -1) goto code_r0x08003e60;
                        if (iVar5 == -1) goto code_r0x08003ed4;
                        if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                           (iVar7 = iVar1, **piVar11 != 0)) {
                            iVar7 = **piVar11;
                        }
                        uVar3 = *(piVar11 + 0xc);
                        uVar6 = 0x80002df;
                        goto code_r0x08003e90;
                    }
                    if (((piVar11[0x8f] == NULL) || (iVar7 = *piVar11[0x8f], iVar7 == 0)) &&
                       (iVar7 = iVar1, **piVar11 != 0)) {
                        iVar7 = **piVar11;
                    }
                    noname_1 = _printk(0x8000216,iVar7,*(piVar11 + 0xc),iVar4);
                }
                if (piVar11[2] != 0) {
                    noname_1 = _printk(0x8000439,"Device-Supply");
                }
                for (piVar9 = piVar11[5]; piVar11 + 5 != piVar9; piVar9 = *piVar9) {
                    pcVar2 = "(null)-(null)";
                    if (piVar9[9] != NULL) {
                        pcVar2 = piVar9[9];
                    }
                    noname_1 = _printk(0x8000707,pcVar2,*(piVar9 + 3),*(piVar9 + 4),*(piVar9 + 0x24),
                                       *(piVar9 + 0x14));
                }
            }
            else if ((*(piVar11 + 0xa7) & 1) != 0) goto code_r0x08003dc0;
code_r0x08003db0:
            pcVar10 = *pcVar10;
        } while (pcVar10 != obj.debug_reg_list);
    }
    return noname_1;
}


// ===== sym.__cfi_check_fail @ 0x08003f5c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003fa0

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
    //switch table (4 cases) at 0x800086b
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003fb4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004038 (size 180) =====

ulong sym.init_module(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_lookup("regulator",0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = 0x800031d;
    }
    else {
        uVar2 = debugfs_create_file_unsafe("debug_suspend",0x1a4,_segment.ehdr,0,reloc.__this_module);
        uVar1 = _segment.ehdr;
        _segment.ehdr = uVar2;
        dput(uVar1);
        if (_segment.ehdr < 0xfffffffffffff001) {
            return 0;
        }
        uVar3 = 0x800022f;
    }
    _printk(uVar3,"regulator_debug_init");
    return 0;
}


// ===== sym.cleanup_module @ 0x080040ec (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    if (obj.debug_suspend != 0x0) {
        tracepoint_probe_unregister
                  (__tracepoint_suspend_resume,
                   sym.regulator_debug_suspend_trace_probe.216a89832cc52eb039fae63e443e7af0.cfi_jt,0);
    }
    return;
}

