// decompiled from ir-spi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080019d0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1988e11120acdc5c) {
        if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.ir_spi_chardev_open.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt;
code_r0x08001114:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001990;
        }
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.ir_spi_chardev_ioctl.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001990;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x1988e11120acdc5c) {
            pcVar2 = sym.ir_spi_remove.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt;
            goto code_r0x08001114;
        }
        if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08001990;
        pcVar2 = sym.ir_spi_chardev_write.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt;
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.noop_llseek.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001990;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001990:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019e4);
    (*pcVar1)();
}


// ===== sym.ir_spi_chardev_write.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x08001160 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080015a8)

ulong ******
sym.ir_spi_chardev_write.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(int64_t param_1,int64_t param_2,ulong ******param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    int iVar4;
    uint32_t uVar5;
    ulong *puVar6;
    code *pcVar7;
    bool bVar8;
    int iVar9;
    uint64_t uVar10;
    ulong ******ppppppuVar11;
    ulong ******ppppppuVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint16_t *puVar13;
    ulong uVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    ulong *****pppppuStack_c8;
    ulong *****pppppuStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong *****pppppuStack_70;
    ulong *****pppppuStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    iVar16 = *(param_1 + 0xd8);
    ppppppuVar11 = param_3;
    if (*(iVar16 + 0x38) == 0 || *(iVar16 + 0x38) == param_3) {
        iVar1 = iVar16 + 0xc0;
        mutex_lock(iVar1);
        iVar4 = *(iVar16 + 0x38);
        if (iVar4 == 0) {
            iVar15 = __kmalloc(param_3,1);
            *(iVar16 + 0x10) = iVar15;
            if (iVar15 == 0) {
                mutex_unlock(iVar1);
                param_3 = 0xfffffffffffffff4;
                goto code_r0x08001374;
            }
            *(iVar16 + 0x38) = param_3;
        }
        else {
            iVar15 = *(iVar16 + 0x10);
        }
        if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x800,0x80013d8);
            (*pcVar7)();
        }
        __check_object_size(iVar15,param_3,0);
        ppppppuVar11 = param_3;
        iVar15 = sym._copy_from_user(iVar15,param_2,param_3);
        if (iVar15 == 0) {
            *(iVar16 + 0x28) = *(iVar16 + 0x10);
            _dev_warn(*(iVar16 + 0x20),"xfer.len%d buffer_size %d\n",*(iVar16 + 0x38),*(iVar16 + 8));
            ppppppuVar12 = iVar16 + 0xa0;
            pppppuStack_70 = &pppppuStack_70;
            ppppppuVar11 = &pppppuStack_c8;
            uVar14 = *(iVar16 + 0x20);
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            pppppuStack_c8 = &pppppuStack_c8;
            pppppuStack_c0 = &pppppuStack_c8;
            pppppuStack_68 = pppppuStack_70;
            uVar10 = __list_add_valid(ppppppuVar12,&pppppuStack_c8);
            if ((uVar10 & 1) != 0) {
                *(iVar16 + 0xa0) = &pppppuStack_c8;
                *(iVar16 + 0xa8) = &pppppuStack_c8;
                pppppuStack_c8 = ppppppuVar12;
                pppppuStack_c0 = ppppppuVar12;
            }
            iVar9 = spi_sync(uVar14,&pppppuStack_c8);
            if (iVar9 != 0) {
                _dev_err(*(iVar16 + 0x20),"unable to deliver the signal\n");
            }
        }
        else {
            iVar9 = -0xe;
        }
        if (iVar4 == 0) {
            kfree(*(iVar16 + 0x10));
            *(iVar16 + 0x38) = 0;
            *(iVar16 + 0x10) = 0;
        }
        mutex_unlock(iVar1);
        if (iVar9 != 0) {
            param_3 = iVar9;
        }
    }
    else {
        param_3 = 0xffffffffffffffea;
    }
code_r0x08001374:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_58) {
        return param_3;
    }
    auVar17 = __stack_chk_fail(param_3);
    *extraout_x18 = sym.ir_spi_chardev_ioctl;
    if (auVar17._8_4_ == 0x40046911) {
        puVar6 = sp_el0;
        puVar13 = *(auVar17._0_8_ + 0xd8);
        uVar10 = (ppppppuVar11 << 8) >> 8;
        if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (ppppppuVar12 = ppppppuVar11, (*puVar6 >> 0x1a & 1) != 0)) {
            ppppppuVar12 = ppppppuVar11 & uVar10;
        }
        bVar8 = 0xfffffffffffffffb < ppppppuVar12;
        puVar3 = ppppppuVar12 + 4;
        uVar2 = 0;
        if (!bVar8 || puVar3 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar8) {
            puVar3 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar3,~uVar2) || CARRY8(puVar3 + ~uVar2,bVar8)) && puVar3 != uVar2 + !bVar8) {
            ppppppuVar11 = 0xfffffffffffffff2;
        }
        else {
            if ((ppppppuVar11 & uVar10 & 0xffffff8000000000) != 0) {
                ppppppuVar11 = NULL;
            }
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar10 = daif;
                if ((uVar10 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar6[1];
                InstructionSynchronizationBarrier();
                daif = uVar10;
            }
            uVar5 = *ppppppuVar11;
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar10 = daif;
                if ((uVar10 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar10;
            }
            if (*(puVar13 + 0x1c) != uVar5) {
                if (1 < *puVar13) {
                    return 0xffffffffffffffff;
                }
                if (*(puVar13 + 0x1c) == 0) {
                    if ((*(puVar13 + 4) < uVar5) || (*(puVar13 + 8) == 0)) {
                        _printk("IR new malloc %d",0);
                        if (*(puVar13 + 8) != 0) {
                            kfree();
                            puVar13[8] = 0;
                            puVar13[9] = 0;
                            puVar13[10] = 0;
                            puVar13[0xb] = 0;
                        }
                        iVar16 = __kmalloc(uVar5,1);
                        if (iVar16 == 0) {
                            return 0xfffffffffffffff4;
                        }
                        *(puVar13 + 8) = iVar16;
                        *(puVar13 + 4) = uVar5;
                    }
                }
                else {
                    krealloc(*(puVar13 + 8),uVar5,1);
                }
                mutex_lock(puVar13 + 0x60);
                *(puVar13 + 0x1c) = uVar5;
                mutex_unlock(puVar13 + 0x60);
            }
            ppppppuVar11 = NULL;
        }
    }
    else {
        ppppppuVar11 = 0xffffffffffffffea;
    }
    return ppppppuVar11;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(0x8000208);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __spi_register_driver(obj.__this_module,obj.ir_spi_driver);
    return;
}


// ===== sym.noop_llseek.cfi_jt @ 0x08001178 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.noop_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ir_spi_chardev_ioctl.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x08001180 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080015a8)

ulong sym.ir_spi_chardev_ioctl.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(int64_t param_1,int param_2,uint32_t *param_3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong *in_x18;
    uint16_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0x40046911) {
        puVar3 = sp_el0;
        puVar9 = *(param_1 + 0xd8);
        uVar4 = (param_3 << 8) >> 8;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (puVar8 = param_3, (*puVar3 >> 0x1a & 1) != 0)) {
            puVar8 = param_3 & uVar4;
        }
        bVar5 = 0xfffffffffffffffb < puVar8;
        puVar8 = puVar8 + 1;
        uVar1 = 0;
        if (!bVar5 || puVar8 == NULL) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar5) {
            puVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar8,~uVar1) || CARRY8(puVar8 + ~uVar1,bVar5)) && puVar8 != uVar1 + !bVar5) {
            uVar6 = 0xfffffffffffffff2;
        }
        else {
            if ((param_3 & uVar4 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar4 = daif;
                if ((uVar4 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar3[1];
                InstructionSynchronizationBarrier();
                daif = uVar4;
            }
            uVar2 = *param_3;
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar4 = daif;
                if ((uVar4 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar4;
            }
            if (*(puVar9 + 0x1c) != uVar2) {
                if (1 < *puVar9) {
                    return 0xffffffffffffffff;
                }
                if (*(puVar9 + 0x1c) == 0) {
                    if ((*(puVar9 + 4) < uVar2) || (*(puVar9 + 8) == 0)) {
                        _printk("IR new malloc %d",0);
                        if (*(puVar9 + 8) != 0) {
                            kfree();
                            puVar9[8] = 0;
                            puVar9[9] = 0;
                            puVar9[10] = 0;
                            puVar9[0xb] = 0;
                        }
                        iVar7 = __kmalloc(uVar2,1);
                        if (iVar7 == 0) {
                            return 0xfffffffffffffff4;
                        }
                        *(puVar9 + 8) = iVar7;
                        *(puVar9 + 4) = uVar2;
                    }
                }
                else {
                    krealloc(*(puVar9 + 8),uVar2,1);
                }
                mutex_lock(puVar9 + 0x60);
                *(puVar9 + 0x1c) = uVar2;
                mutex_unlock(puVar9 + 0x60);
            }
            uVar6 = 0;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    return uVar6;
}


// ===== sym.ir_spi_chardev_open.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.ir_spi_chardev_open.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(ulong param_1,int64_t param_2)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (*_segment.ehdr < 0x7fff) {
        puVar1 = _segment.ehdr + 0x60;
        *(param_2 + 0xd8) = _segment.ehdr;
        mutex_lock(puVar1);
        *puVar2 = *puVar2 + 1;
        mutex_unlock(puVar1);
        uVar3 = 0;
    }
    else {
        _dev_err(*(_segment.ehdr + 0x10),"device busy\n");
        uVar3 = 0xfffffff0;
    }
    return uVar3;
}


// ===== sym.ir_spi_chardev_close.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.ir_spi_chardev_close.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(void)

{
    int16_t *piVar1;
    int16_t iVar2;
    int16_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = _segment.ehdr;
    piVar1 = _segment.ehdr + 0x60;
    mutex_lock(piVar1);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        piVar3[0x1c] = 0;
        piVar3[0x1d] = 0;
        piVar3[0x40] = 0x4c00;
        piVar3[0x41] = 0x1d;
    }
    mutex_unlock(piVar1);
    return 0;
}


// ===== sym.ir_spi_remove.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.ir_spi_remove.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (*(iVar1 + 0x10) != 0) {
        kfree();
        *(iVar1 + 0x10) = 0;
    }
    misc_deregister(obj.ir_spi_dev_drv);
    return 0;
}


// ===== sym.ir_spi_probe.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.ir_spi_probe.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(param_1,0xf8,0xdc0);
    if (iVar1 != 0) {
        __mutex_init(iVar1 + 0xc0,"&idata->mutex",reloc.ir_spi_probe.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt);
        *(iVar1 + 0x20) = param_1;
        *(param_1 + 0x98) = iVar1;
        _segment.ehdr = iVar1;
        *(iVar1 + 0x71) = 0x20;
        *(iVar1 + 0x80) = 0x1d4c00;
        iVar2 = kmalloc_order_trace(150000,1,6);
        if (iVar2 != 0) {
            *(iVar1 + 0x10) = iVar2;
            *(iVar1 + 8) = 150000;
            misc_register(obj.ir_spi_dev_drv);
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.ir_spi_probe @ 0x080011a8 (size 188) =====

ulong sym.ir_spi_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(arg1,0xf8,0xdc0);
    if (iVar1 != 0) {
        __mutex_init(iVar1 + 0xc0,"&idata->mutex",reloc.ir_spi_probe.a0e7ac0ec4360f0f812df4b4e64bbd45.cfi_jt);
        *(iVar1 + 0x20) = arg1;
        *(arg1 + 0x98) = iVar1;
        _segment.ehdr = iVar1;
        *(iVar1 + 0x71) = 0x20;
        *(iVar1 + 0x80) = 0x1d4c00;
        iVar2 = kmalloc_order_trace(150000,1,6);
        if (iVar2 != 0) {
            *(iVar1 + 0x10) = iVar2;
            *(iVar1 + 8) = 150000;
            misc_register(obj.ir_spi_dev_drv);
            return 0;
        }
    }
    return 0xfffffff4;
}


// ===== sym.ir_spi_remove @ 0x08001264 (size 76) =====

ulong sym.ir_spi_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (*(iVar1 + 0x10) != 0) {
        kfree();
        *(iVar1 + 0x10) = 0;
    }
    misc_deregister(obj.ir_spi_dev_drv);
    return 0;
}


// ===== sym.ir_spi_chardev_write @ 0x080012b0 (size 480) =====

//WARNING: Removing unreachable block (ram,0x080015a8)

ulong ****** sym.ir_spi_chardev_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    ulong ******ppppppuVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *puVar7;
    code *pcVar8;
    bool bVar9;
    int iVar10;
    uint64_t uVar11;
    ulong ******ppppppuVar12;
    ulong ******ppppppuVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    uint16_t *puVar14;
    ulong uVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    ulong *****pppppuStack_c8;
    ulong *****pppppuStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong *****pppppuStack_70;
    ulong *****pppppuStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    ppppppuVar13 = arg3;
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_58 = *(iVar17 + 0x5e0);
    iVar17 = *(arg1 + 0xd8);
    ppppppuVar12 = ppppppuVar13;
    if (*(iVar17 + 0x38) == 0 || *(iVar17 + 0x38) == ppppppuVar13) {
        iVar1 = iVar17 + 0xc0;
        mutex_lock(iVar1);
        iVar5 = *(iVar17 + 0x38);
        if (iVar5 == 0) {
            iVar16 = __kmalloc(ppppppuVar13,1);
            *(iVar17 + 0x10) = iVar16;
            if (iVar16 == 0) {
                mutex_unlock(iVar1);
                ppppppuVar13 = 0xfffffffffffffff4;
                goto code_r0x08001374;
            }
            *(iVar17 + 0x38) = arg3;
        }
        else {
            iVar16 = *(iVar17 + 0x10);
        }
        if (arg3 < 0) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x80013d8);
            (*pcVar8)();
        }
        __check_object_size(iVar16,ppppppuVar13,0);
        ppppppuVar12 = ppppppuVar13;
        iVar16 = sym._copy_from_user(iVar16,arg2,ppppppuVar13);
        if (iVar16 == 0) {
            *(iVar17 + 0x28) = *(iVar17 + 0x10);
            _dev_warn(*(iVar17 + 0x20),"xfer.len%d buffer_size %d\n",*(iVar17 + 0x38),*(iVar17 + 8));
            ppppppuVar2 = iVar17 + 0xa0;
            pppppuStack_70 = &pppppuStack_70;
            ppppppuVar12 = &pppppuStack_c8;
            uVar15 = *(iVar17 + 0x20);
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            pppppuStack_c8 = &pppppuStack_c8;
            pppppuStack_c0 = &pppppuStack_c8;
            pppppuStack_68 = pppppuStack_70;
            uVar11 = __list_add_valid(ppppppuVar2,&pppppuStack_c8);
            if ((uVar11 & 1) != 0) {
                *(iVar17 + 0xa0) = &pppppuStack_c8;
                *(iVar17 + 0xa8) = &pppppuStack_c8;
                pppppuStack_c8 = ppppppuVar2;
                pppppuStack_c0 = ppppppuVar2;
            }
            iVar10 = spi_sync(uVar15,&pppppuStack_c8);
            if (iVar10 != 0) {
                _dev_err(*(iVar17 + 0x20),"unable to deliver the signal\n");
            }
        }
        else {
            iVar10 = -0xe;
        }
        if (iVar5 == 0) {
            kfree(*(iVar17 + 0x10));
            *(iVar17 + 0x38) = 0;
            *(iVar17 + 0x10) = 0;
        }
        mutex_unlock(iVar1);
        if (iVar10 != 0) {
            ppppppuVar13 = iVar10;
        }
    }
    else {
        ppppppuVar13 = 0xffffffffffffffea;
    }
code_r0x08001374:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_58) {
        return ppppppuVar13;
    }
    auVar18 = __stack_chk_fail(ppppppuVar13);
    *extraout_x18 = sym.ir_spi_chardev_ioctl;
    if (auVar18._8_4_ == 0x40046911) {
        puVar7 = sp_el0;
        puVar14 = *(auVar18._0_8_ + 0xd8);
        uVar11 = (ppppppuVar12 << 8) >> 8;
        if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (ppppppuVar13 = ppppppuVar12, (*puVar7 >> 0x1a & 1) != 0)) {
            ppppppuVar13 = ppppppuVar12 & uVar11;
        }
        bVar9 = 0xfffffffffffffffb < ppppppuVar13;
        puVar4 = ppppppuVar13 + 4;
        uVar3 = 0;
        if (!bVar9 || puVar4 == NULL) {
            uVar3 = 0x7fffffffff;
        }
        if (bVar9) {
            puVar4 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar4,~uVar3) || CARRY8(puVar4 + ~uVar3,bVar9)) && puVar4 != uVar3 + !bVar9) {
            ppppppuVar12 = 0xfffffffffffffff2;
        }
        else {
            if ((ppppppuVar12 & uVar11 & 0xffffff8000000000) != 0) {
                ppppppuVar12 = NULL;
            }
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar11 = daif;
                if ((uVar11 & 0x80) == 0) {
                    uVar3 = daif;
                    daif = uVar3 | 0xc0;
                }
                uVar3 = ttbr1_el1;
                ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar7[1];
                InstructionSynchronizationBarrier();
                daif = uVar11;
            }
            uVar6 = *ppppppuVar12;
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar11 = daif;
                if ((uVar11 & 0x80) == 0) {
                    uVar3 = daif;
                    daif = uVar3 | 0xc0;
                }
                uVar3 = ttbr1_el1;
                ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar3 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar11;
            }
            if (*(puVar14 + 0x1c) != uVar6) {
                if (1 < *puVar14) {
                    return 0xffffffffffffffff;
                }
                if (*(puVar14 + 0x1c) == 0) {
                    if ((*(puVar14 + 4) < uVar6) || (*(puVar14 + 8) == 0)) {
                        _printk("IR new malloc %d",0);
                        if (*(puVar14 + 8) != 0) {
                            kfree();
                            puVar14[8] = 0;
                            puVar14[9] = 0;
                            puVar14[10] = 0;
                            puVar14[0xb] = 0;
                        }
                        iVar17 = __kmalloc(uVar6,1);
                        if (iVar17 == 0) {
                            return 0xfffffffffffffff4;
                        }
                        *(puVar14 + 8) = iVar17;
                        *(puVar14 + 4) = uVar6;
                    }
                }
                else {
                    krealloc(*(puVar14 + 8),uVar6,1);
                }
                mutex_lock(puVar14 + 0x60);
                *(puVar14 + 0x1c) = uVar6;
                mutex_unlock(puVar14 + 0x60);
            }
            ppppppuVar12 = NULL;
        }
    }
    else {
        ppppppuVar12 = 0xffffffffffffffea;
    }
    return ppppppuVar12;
}


// ===== sym.ir_spi_chardev_ioctl @ 0x08001490 (size 544) =====

//WARNING: Removing unreachable block (ram,0x080015a8)

ulong sym.ir_spi_chardev_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint16_t *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0x40046911) {
        puVar3 = sp_el0;
        puVar9 = *(arg1 + 0xd8);
        uVar4 = (arg3 << 8) >> 8;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = arg3, (*puVar3 >> 0x1a & 1) != 0)) {
            uVar8 = arg3 & uVar4;
        }
        bVar5 = 0xfffffffffffffffb < uVar8;
        uVar8 = uVar8 + 4;
        uVar1 = 0;
        if (!bVar5 || uVar8 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar8 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar8,~uVar1) || CARRY8(uVar8 + ~uVar1,bVar5)) && uVar8 != uVar1 + !bVar5) {
            uVar6 = 0xfffffffffffffff2;
        }
        else {
            if ((arg3 & uVar4 & 0xffffff8000000000) != 0) {
                arg3 = 0;
            }
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar4 = daif;
                if ((uVar4 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar3[1];
                InstructionSynchronizationBarrier();
                daif = uVar4;
            }
            uVar2 = *arg3;
            if ((_noop_llseek >> 0x18 & 1) == 0) {
                uVar4 = daif;
                if ((uVar4 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar4;
            }
            if (*(puVar9 + 0x1c) != uVar2) {
                if (1 < *puVar9) {
                    return 0xffffffffffffffff;
                }
                if (*(puVar9 + 0x1c) == 0) {
                    if ((*(puVar9 + 4) < uVar2) || (*(puVar9 + 8) == 0)) {
                        _printk("IR new malloc %d",0);
                        if (*(puVar9 + 8) != 0) {
                            kfree();
                            puVar9[8] = 0;
                            puVar9[9] = 0;
                            puVar9[10] = 0;
                            puVar9[0xb] = 0;
                        }
                        iVar7 = __kmalloc(uVar2,1);
                        if (iVar7 == 0) {
                            return 0xfffffffffffffff4;
                        }
                        *(puVar9 + 8) = iVar7;
                        *(puVar9 + 4) = uVar2;
                    }
                }
                else {
                    krealloc(*(puVar9 + 8),uVar2,1);
                }
                mutex_lock(puVar9 + 0x60);
                *(puVar9 + 0x1c) = uVar2;
                mutex_unlock(puVar9 + 0x60);
            }
            uVar6 = 0;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
    return uVar6;
}


// ===== sym.ir_spi_chardev_open @ 0x080016ec (size 128) =====

ulong sym.ir_spi_chardev_open(ulong noname_0,int64_t arg1)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    if (*_segment.ehdr < 0x7fff) {
        puVar1 = _segment.ehdr + 0x60;
        *(arg1 + 0xd8) = _segment.ehdr;
        mutex_lock(puVar1);
        *puVar2 = *puVar2 + 1;
        mutex_unlock(puVar1);
        uVar3 = 0;
    }
    else {
        _dev_err(*(_segment.ehdr + 0x10),"device busy\n");
        uVar3 = 0xfffffff0;
    }
    return uVar3;
}


// ===== sym.ir_spi_chardev_close @ 0x0800176c (size 108) =====

ulong sym.ir_spi_chardev_close(void)

{
    int16_t *piVar1;
    int16_t iVar2;
    int16_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = _segment.ehdr;
    piVar1 = _segment.ehdr + 0x60;
    mutex_lock(piVar1);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        piVar3[0x1c] = 0;
        piVar3[0x1d] = 0;
        piVar3[0x40] = 0x4c00;
        piVar3[0x41] = 0x1d;
    }
    mutex_unlock(piVar1);
    return 0;
}


// ===== sym._copy_from_user @ 0x080017d8 (size 376) =====

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
        if ((_noop_llseek >> 0x18 & 1) == 0) {
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
        if ((_noop_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x0800198c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080019d0

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
    //switch table (4 cases) at 0x800039f
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019e4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080019f4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __spi_register_driver(obj.__this_module,obj.ir_spi_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08001a28 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(0x8000208);
    return;
}

