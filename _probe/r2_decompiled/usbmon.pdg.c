// decompiled from usbmon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 888) =====

//WARNING: Switch with 1 destination removed at 0x08002f14

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3d8c2339470c4ff7) {
            if (arg1 < -0x6b0db3fa17571c58) {
                if (arg1 == -0x7caa78f0b92e0e1e) {
                    pcVar2 = sym.mon_submit_error.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt;
code_r0x08002344:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08002ed4;
                }
                if (arg1 != -0x7bcbda558eb245e5) goto code_r0x08002ed4;
                pcVar2 = sym.mon_bin_poll.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
            }
            else {
                if (arg1 == -0x6b0db3fa17571c58) {
                    pcVar2 = sym.__typeid__ZTSFvPvP3urbE_global_addr;
                    goto code_r0x08002344;
                }
                if (arg1 != -0x4d38130654d7aafc) goto code_r0x08002ed4;
                pcVar2 = sym.mon_bin_vma_fault.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
            }
        }
        else {
            if (arg1 < -0x4f207e12cd4a65c) {
                if (arg1 != -0x3d8c2339470c4ff7) {
                    if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8002458 >> 3 | pcVar1 << 0x3d) < 6)) {
                        return;
                    }
                    goto code_r0x08002ed4;
                }
                pcVar2 = sym.__typeid__ZTSFvPvP3urbiE_global_addr;
code_r0x0800231c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08002ed4;
            }
            if (arg1 == -0x4f207e12cd4a65c) {
                pcVar2 = sym.mon_submit.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt;
            }
            else {
                if (arg1 != -0x2ac316d8df914f8) {
                    if (arg1 != -0x890743871a4a53) goto code_r0x08002ed4;
                    pcVar2 = sym.mon_bin_ioctl.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
                    goto code_r0x08002344;
                }
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x321969b888d4949e) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08002ed4;
                pcVar2 = sym.mon_text_read_t.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
                goto code_r0x0800231c;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else {
            if (arg1 != 0x379d36f049eb9a81) goto code_r0x08002ed4;
            pcVar2 = sym.mon_bin_mmap.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
        }
    }
    else if (arg1 < 0x694f814fc4ef8dbe) {
        if (arg1 == 0x4c550309df1cf4c1) {
            pcVar2 = sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
        }
        else {
            if (arg1 != 0x6040f5087e34c703) goto code_r0x08002ed4;
            pcVar2 = sym.default_wake_function.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x694f814fc4ef8dbe) {
            pcVar2 = sym.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
            goto code_r0x08002344;
        }
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002ed4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002ed4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002f28);
    (*pcVar1)();
}


// ===== sym.mon_bin_ioctl.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002380 (size 8) =====

void sym.mon_bin_ioctl.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,uint64_t param_2,int *param_3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int *piVar12;
    ulong *extraout_x8;
    ulong *puVar13;
    int *extraout_x9;
    int *piVar14;
    uint32_t uVar15;
    ulong *in_x18;
    int64_t iVar16;
    int64_t iVar17;
    uint64_t uVar18;
    int *unaff_x23;
    ulong unaff_x30;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uVar18 = param_2 & 0xffffffff;
    iVar16 = *(param_1 + 0xd8);
    iVar6 = -0x19;
    iVar5 = param_2;
    if (iVar5 < 0x9201) {
        if (iVar5 == -0x7ff76dfd) {
            uVar8 = _raw_spin_lock_irqsave(iVar16);
            unaff_x23 = *(iVar16 + 0xa8);
            *(iVar16 + 0xa8) = 0;
            _raw_spin_unlock_irqrestore(iVar16,uVar8);
            mutex_lock(iVar16 + 0x38);
            uVar8 = _raw_spin_lock_irqsave(iVar16);
            uVar10 = *(iVar16 + 8);
            _raw_spin_unlock_irqrestore(iVar16,uVar8);
            if (uVar10 == 0) {
                uVar18 = 0;
            }
            else {
                uVar11 = 0;
                uVar18 = 0;
                uVar15 = *(iVar16 + 0x10);
                do {
                    uVar18 = uVar18 + 1;
                    uVar2 = *(*(*(iVar16 + 0x18) + (uVar15 >> 8 & 0xfffff0) + 8) + (uVar15 & 0xfff) + 0x24) + 0x7fU &
                            0xffffffc0;
                    uVar15 = uVar2 + uVar15;
                    uVar11 = uVar2 + uVar11;
                    uVar2 = 0;
                    if (*(iVar16 + 4) <= uVar15) {
                        uVar2 = *(iVar16 + 4);
                    }
                    uVar15 = uVar15 - uVar2;
                } while (uVar11 < uVar10);
            }
            mutex_unlock(iVar16 + 0x38);
            piVar12 = param_3 + 1;
            puVar13 = sp_el0;
            uVar7 = piVar12 * 0x100 >> 8;
            if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar14 = piVar12, (*puVar13 >> 0x1a & 1) != 0)) {
                piVar14 = piVar12 & uVar7;
            }
            bVar4 = 0xfffffffffffffffb < piVar14;
            piVar14 = piVar14 + 1;
            uVar3 = 0;
            if (!bVar4 || piVar14 == NULL) {
                uVar3 = 0x7fffffffff;
            }
            if (bVar4) {
                piVar14 = 0xffffffffffffffff;
            }
            if ((CARRY8(piVar14,~uVar3) || CARRY8(piVar14 + ~uVar3,bVar4)) && piVar14 != uVar3 + !bVar4)
            goto code_r0x0800504c;
            if ((piVar12 & uVar7 & 0xffffff8000000000) == 0) goto code_r0x0800519c;
            piVar12 = NULL;
            goto code_r0x0800519c;
        }
        if (iVar5 == -0x3fef6df9) {
            iStack_70 = 0;
            uStack_68 = 0;
            iVar6 = sym._copy_from_user(&iStack_70,param_3,0x10);
            if (iVar6 != 0) goto code_r0x0800504c;
            if (uStack_68._4_4_ != 0) {
                uVar7 = sym.mon_bin_flush(iVar16,uStack_68._4_4_);
                uVar18 = uVar7 & 0xffffffff;
                iVar5 = uVar7;
                if (iVar5 < 0) {
                    iVar6 = iVar5;
                    goto code_r0x08005054;
                }
                piVar12 = param_3 + 3;
                puVar13 = sp_el0;
                uVar7 = piVar12 * 0x100 >> 8;
                if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar14 = piVar12, (*puVar13 >> 0x1a & 1) != 0)) {
                    piVar14 = piVar12 & uVar7;
                }
                bVar4 = 0xfffffffffffffffb < piVar14;
                piVar14 = piVar14 + 1;
                uVar3 = 0;
                if (!bVar4 || piVar14 == NULL) {
                    uVar3 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar14 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar14,~uVar3) || CARRY8(piVar14 + ~uVar3,bVar4)) && piVar14 != uVar3 + !bVar4)
                goto code_r0x0800504c;
                if ((piVar12 & uVar7 & 0xffffff8000000000) != 0) {
                    piVar12 = NULL;
                }
                sym.uaccess_ttbr0_enable();
                *piVar12 = iVar5;
                sym.uaccess_ttbr0_disable();
                unaff_x23 = piVar12;
            }
            iVar5 = sym.mon_bin_fetch(param_1,iVar16,iStack_70,uStack_68 & 0xffffffff);
            if (-1 < iVar5) {
                piVar12 = param_3 + 2;
                puVar13 = sp_el0;
                uVar7 = piVar12 * 0x100 >> 8;
                if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar14 = piVar12, (*puVar13 >> 0x1a & 1) != 0)) {
                    piVar14 = piVar12 & uVar7;
                }
                bVar4 = 0xfffffffffffffffb < piVar14;
                piVar14 = piVar14 + 1;
                uVar3 = 0;
                if (!bVar4 || piVar14 == NULL) {
                    uVar3 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar14 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar14,~uVar3) || CARRY8(piVar14 + ~uVar3,bVar4)) && piVar14 != uVar3 + !bVar4)
                goto code_r0x0800504c;
                if ((piVar12 & uVar7 & 0xffffff8000000000) != 0) {
                    piVar12 = NULL;
                }
                sym.uaccess_ttbr0_enable();
                *piVar12 = iVar5;
                sym.uaccess_ttbr0_disable();
                goto code_r0x080050f0;
            }
            iVar6 = iVar5;
        }
        goto code_r0x08005054;
    }
    switch(iVar5) {
    case 0x9201:
        uVar8 = _raw_spin_lock_irqsave(iVar16);
        if (*(iVar16 + 8) == 0) {
            unaff_x23 = NULL;
        }
        else {
            unaff_x23 = *(*(*(iVar16 + 0x18) + (*(iVar16 + 0x10) >> 8 & 0xfffff0) + 8) + (*(iVar16 + 0x10) & 0xfff) +
                         0x24);
        }
        _raw_spin_unlock_irqrestore(iVar16,uVar8);
        iVar6 = unaff_x23;
    case 0x9202:
    case 0x9203:
    case 0x9206:
    case 0x9207:
        goto code_r0x08005054;
    case 0x9204:
        if (param_3 - 0x12c001U < 0xffffffffffed5fff) {
code_r0x08004db8:
            iVar6 = -0x16;
            goto code_r0x08005054;
        }
        uVar10 = param_3 + 0xfff;
        uVar18 = uVar10;
        iVar6 = (uVar10 >> 0xc) * 0x10;
        piVar12 = __kmalloc(iVar6,0xdc0);
        if (piVar12 == NULL) {
code_r0x0800511c:
            unaff_x23 = 0xfffffff4;
            iVar6 = -0xc;
            goto code_r0x08005054;
        }
        iVar17 = 0;
        uVar18 = 0;
        do {
            iVar9 = get_zeroed_page(0xcc0);
            if (iVar9 == 0) {
                if (iVar17 != 0) {
                    do {
                        free_pages(*(piVar12 + iVar17 + -8),0);
                        iVar17 = iVar17 + -0x10;
                    } while (iVar17 != 0);
                }
                kfree(piVar12);
                param_3 = piVar12;
                goto code_r0x0800511c;
            }
            piVar1 = piVar12 + iVar17;
            iVar17 = iVar17 + 0x10;
            *piVar1 = (((iVar9 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
            piVar1[1] = iVar9;
        } while (iVar6 - iVar17 != 0);
        mutex_lock(iVar16 + 0x38);
        uVar18 = _raw_spin_lock_irqsave(iVar16);
        if (*(iVar16 + 0x68) == 0) {
            iVar6 = *(iVar16 + 0x18);
            if (0xfff < *(iVar16 + 4)) {
                uVar7 = *(iVar16 + 4) >> 0xc;
                puVar13 = iVar6 + 8;
                do {
                    free_pages(*puVar13,0);
                    uVar7 = uVar7 - 1;
                    puVar13 = puVar13 + 2;
                } while (uVar7 != 0);
                iVar6 = *(iVar16 + 0x18);
            }
            kfree(iVar6);
            unaff_x23 = NULL;
            *(iVar16 + 0x10) = 0;
            *(iVar16 + 0x18) = piVar12;
            *(iVar16 + 4) = uVar10 & 0xfffff000;
            *(iVar16 + 0xa8) = 0;
            *(iVar16 + 8) = 0;
        }
        else {
            iVar17 = 0;
            do {
                free_pages(*(piVar12 + iVar17 + 8),0);
                iVar17 = iVar17 + 0x10;
            } while (iVar6 - iVar17 != 0);
            kfree(piVar12);
            unaff_x23 = 0xfffffff0;
        }
        _raw_spin_unlock_irqrestore(iVar16,uVar18);
        break;
    case 0x9205:
        piVar12 = iVar16 + 0x38;
        mutex_lock(piVar12);
        unaff_x23 = *(iVar16 + 4);
        break;
    case 0x9208:
        uVar7 = sym.mon_bin_flush(iVar16,param_3 & 0xffffffff);
        goto code_r0x08004d90;
    default:
        if ((iVar5 != 0x40189206) && (iVar5 != 0x4018920a)) goto code_r0x08005054;
        uStack_68 = 0;
        uStack_60 = 0;
        iStack_70 = 0;
        iVar6 = sym._copy_from_user(&iStack_70,param_3,0x18);
        if (iVar6 != 0) goto code_r0x0800504c;
        if (0x10000000 < uStack_60) goto code_r0x08004db8;
        uVar10 = 0x30;
        if (iVar5 != 0x40189206) {
            uVar10 = 0x40;
        }
        uVar7 = sym.mon_bin_get_event(param_1,iVar16,iStack_70,uVar10);
code_r0x08004d90:
        unaff_x23 = uVar7 & 0xffffffff;
        iVar6 = uVar7;
        goto code_r0x08005054;
    }
    mutex_unlock(iVar16 + 0x38);
    iVar6 = unaff_x23;
    param_3 = piVar12;
code_r0x08005054:
    while (iVar16 = sp_el0, *(iVar16 + 0x5e0) != iStack_58) {
        __stack_chk_fail(iVar6);
        puVar13 = extraout_x8;
        piVar12 = extraout_x9;
code_r0x0800519c:
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar13[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar13[1];
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        *piVar12 = unaff_x23;
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        uVar7 = (param_3 << 8) >> 8;
        if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar12 = param_3, (*puVar13 >> 0x1a & 1) != 0)) {
            piVar12 = param_3 & uVar7;
        }
        bVar4 = 0xfffffffffffffffb < piVar12;
        piVar12 = piVar12 + 1;
        uVar3 = 0;
        if (!bVar4 || piVar12 == NULL) {
            uVar3 = 0x7fffffffff;
        }
        if (bVar4) {
            piVar12 = 0xffffffffffffffff;
        }
        if ((CARRY8(piVar12,~uVar3) || CARRY8(piVar12 + ~uVar3,bVar4)) && piVar12 != uVar3 + !bVar4) {
code_r0x0800504c:
            iVar6 = -0xe;
        }
        else {
            if ((param_3 & uVar7 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            sym.uaccess_ttbr0_enable();
            piVar12 = NULL;
            *param_3 = uVar18;
            sym.uaccess_ttbr0_disable();
code_r0x080050f0:
            unaff_x23 = NULL;
            iVar6 = 0;
            param_3 = piVar12;
        }
    }
    return;
}


// ===== sym.mon_bin_compat_ioctl.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002388 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08005384)
//WARNING: Removing unreachable block (ram,0x08005310)
//WARNING: Removing unreachable block (ram,0x080053a0)

int64_t sym.mon_bin_compat_ioctl.0ef93d717f033c08657adc434aff0b7f.cfi_jt
                  (int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint64_t uStack_58;
    uint32_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    iVar8 = -0x19;
    iVar7 = *(param_1 + 0xd8);
    if (param_2 < 0x9201) {
        if (param_2 != 0x80089203) {
            if (param_2 != 0xc00c9207) goto code_r0x08005434;
            param_3 = param_3 & 0xffffffff;
            uStack_50 = 0;
            uStack_58 = 0;
            iVar8 = sym._copy_from_user(&uStack_58,param_3,0xc);
            if (iVar8 == 0) {
                if (uStack_50 != 0) {
                    iVar3 = sym.mon_bin_flush(iVar7,uStack_50);
                    if (iVar3 < 0) {
                        iVar8 = iVar3;
                        goto code_r0x08005434;
                    }
                    uVar5 = sp_el0;
                    bVar2 = 0xfffffffffffffffb < param_3 + 8;
                    uVar6 = param_3 + 0xc;
                    uVar1 = 0;
                    if (!bVar2 || uVar6 == 0) {
                        uVar1 = 0x7fffffffff;
                    }
                    if (bVar2) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar2)) && uVar6 != uVar1 + !bVar2)
                    goto code_r0x080053e4;
                    sym.uaccess_ttbr0_enable();
                    *(param_3 + 8) = iVar3;
                    sym.uaccess_ttbr0_disable();
                }
                iVar3 = sym.mon_bin_fetch(param_1,iVar7,uStack_58 & 0xffffffff,uStack_58 >> 0x20);
                if (iVar3 < 0) {
                    iVar8 = iVar3;
                }
                else {
                    uVar5 = sp_el0;
                    iVar8 = -0xe;
                    bVar2 = 0xfffffffffffffffb < param_3 + 4;
                    uVar6 = param_3 + 8;
                    uVar1 = 0;
                    if (!bVar2 || uVar6 == 0) {
                        uVar1 = 0x7fffffffff;
                    }
                    if (bVar2) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar2) || uVar6 == uVar1 + !bVar2) {
                        sym.uaccess_ttbr0_enable();
                        *(param_3 + 4) = iVar3;
                        sym.uaccess_ttbr0_disable();
                        iVar8 = 0;
                    }
                }
            }
            else {
code_r0x080053e4:
                iVar8 = -0xe;
            }
            goto code_r0x08005434;
        }
        param_3 = param_3 & 0xffffffff;
        uVar6 = 0x80089203;
    }
    else {
        if ((7 < param_2 - 0x9201) || ((1 << (param_2 - 0x9201 & 0x1f) & 0x99U) == 0)) {
            if ((param_2 != 0x400c920a) && (param_2 != 0x400c9206)) goto code_r0x08005434;
            uStack_50 = 0;
            uStack_58 = 0;
            iVar8 = sym._copy_from_user(&uStack_58,param_3,0xc);
            if (iVar8 == 0) {
                uVar4 = 0x30;
                if (param_2 != 0x400c9206) {
                    uVar4 = 0x40;
                }
                uVar4 = sym.mon_bin_get_event(param_1,iVar7,uStack_58 & 0xffffffff,uVar4);
                iVar8 = uVar4 & uVar4 >> 0x1f;
                goto code_r0x08005434;
            }
            goto code_r0x080053e4;
        }
        uVar6 = param_2;
    }
    iVar8 = sym.mon_bin_ioctl(param_1,uVar6,param_3);
code_r0x08005434:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_48) {
        auVar9 = __stack_chk_fail();
        iVar8 = auVar9._8_8_;
        *extraout_x18 = sym.mon_bin_mmap;
        *(iVar8 + 0x90) = reloc.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
        if ((*(iVar8 + 0x50) >> 1 & 1) == 0) {
            *(iVar8 + 0x50) = *(iVar8 + 0x50) & 0xffffffffffffffdf | 0x4040000;
            iVar7 = *(auVar9._0_8_ + 0xd8);
            *(iVar8 + 0xa8) = iVar7;
            uVar5 = _raw_spin_lock_irqsave(iVar7);
            *(iVar7 + 0x68) = *(iVar7 + 0x68) + 1;
            _raw_spin_unlock_irqrestore(iVar7,uVar5);
            iVar8 = 0;
        }
        else {
            iVar8 = 0xffffffff;
        }
        return iVar8;
    }
    return iVar8;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002390 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int64_t *arg1;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_unregister_notify(reloc.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
    usb_mon_deregister();
    mutex_lock(obj.mon_lock);
    if (_obj.mon_buses != obj.mon_buses) {
        do {
            arg1 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar7 = __list_del_entry_valid(arg1);
            if ((uVar7 & 1) != 0) {
                iVar9 = *arg1;
                piVar2 = arg1[1];
                *(iVar9 + 8) = piVar2;
                *piVar2 = iVar9;
            }
            *arg1 = -0x2152ffffffffff00;
            arg1[1] = -0x2152fffffffffede;
            if (arg1[4] != 0) {
                sym.mon_text_del(arg1);
            }
            if (*(arg1 + 0x24) != 0) {
                sym.mon_bin_del(arg1);
            }
            if (arg1[9] != 0) {
                _printk(0x800094e,arg1[9],*(arg1[3] + 0x10));
                puVar1 = arg1 + 0xc;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar4 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                        *puVar1 = uVar4 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                if (uVar4 == 0) {
                    uVar8 = 2;
                }
                else {
                    if (-1 < (uVar4 + 1 | uVar4)) goto code_r0x08006e5c;
                    uVar8 = 1;
                }
                refcount_warn_saturate(puVar1,uVar8);
            }
code_r0x08006e5c:
            iVar9 = arg1[3];
            if (*(iVar9 + 0x98) != 0) {
                *(iVar9 + 0x98) = 0;
                DataSynchronizationBarrier(3,3,0);
            }
            *(iVar9 + 0x90) = 0;
            piVar2 = arg1 + 0xc;
            arg1[3] = 0;
            DataSynchronizationBarrier(3,3,0);
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar3 = *piVar2;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = iVar3 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                kfree(arg1);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(piVar2,3);
            }
        } while (_obj.mon_buses != obj.mon_buses);
    }
    if (_segment.ehdr != 0) {
        sym.mon_text_del(0x8000648);
    }
    if (_segment.ehdr != 0) {
        sym.mon_bin_del(0x8000648);
    }
    mutex_unlock(obj.mon_lock);
    debugfs_remove(CONCAT44(*0x8000004,_segment.ehdr));
    sym.mon_bin_exit();
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002398 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    _segment.ehdr = debugfs_create_dir("usbmon",___cfi_slowpath_diag);
    iVar1 = sym.mon_bin_init();
    if (iVar1 == 0) {
        *0x80006a8 = 1;
        *0x8000658 = 0;
        *0x8000698 = 0x8000698;
        *0x80006a0 = 0x8000698;
        *0x8000668 = sym.mon_text_add(0x8000648,0);
        *0x800066c = sym.mon_bin_add(0x8000648,0);
        iVar1 = usb_mon_register(reloc.mon_submit.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
        if (iVar1 == 0) {
            mutex_lock(usb_bus_idr_lock);
            iStack_2c = 0;
            iVar2 = idr_get_next(usb_bus_idr,&iStack_2c);
            while (iVar2 != 0) {
                sym.mon_bus_init(iVar2);
                iStack_2c = iStack_2c + 1;
                iVar2 = idr_get_next(usb_bus_idr,&iStack_2c);
            }
            usb_register_notify(reloc.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
            mutex_unlock(usb_bus_idr_lock);
            iVar1 = 0;
            goto code_r0x08006c34;
        }
        _printk(0x8000750);
        sym.mon_bin_exit();
        iVar1 = -0x13;
    }
    debugfs_remove(_segment.ehdr);
code_r0x08006c34:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mon_text_init;
    _segment.ehdr = debugfs_create_dir("usbmon",___cfi_slowpath_diag);
    return 0;
}


// ===== sym.mon_bin_vma_fault.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x080023a0 (size 8) =====

uint sym.mon_bin_vma_fault.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    int64_t iVar6;
    
    if (param_1[2] * 0x1000 < *(*(*param_1 + 0xa8) + 4)) {
        iVar6 = *(*(*(*param_1 + 0xa8) + 0x18) + (param_1[2] & 0xfffffffffffffU) * 0x10);
        iVar2 = iVar6;
        if ((*(iVar6 + 8) & 1) != 0) {
            iVar2 = *(iVar6 + 8) - 1;
        }
        piVar1 = iVar2 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar5 = 0;
        param_1[0xb] = iVar6;
    }
    else {
        uVar5 = 2;
    }
    return uVar5;
}


// ===== sym.mon_bin_poll.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x080023a8 (size 8) =====

uint sym.mon_bin_poll.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xd8);
    if (((((*(param_1 + 0x44) & 1) != 0) && (param_2 != NULL)) && (iVar3 + 0x20 != 0)) &&
       (pcVar4 = *param_2, pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000710);
        (*pcVar4)(param_1,iVar3 + 0x20,param_2);
    }
    uVar1 = _raw_spin_lock_irqsave(iVar3);
    uVar2 = 0;
    if (*(iVar3 + 8) != 0) {
        uVar2 = 0x41;
    }
    _raw_spin_unlock_irqrestore(iVar3,uVar1);
    return uVar2;
}


// ===== sym.mon_submit_error.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt @ 0x080023b0 (size 8) =====

void sym.mon_submit_error.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[5];
            if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,obj.mon_bin_cdev);
            }
            (*pcVar2)(piVar4[3],param_2,param_3);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[5];
        if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,obj.mon_bin_cdev);
        }
        (*pcVar2)(piVar4[3],param_2,param_3);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.mon_complete.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt @ 0x080023b8 (size 8) =====

void sym.mon_complete.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[6];
            if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,0x80006f0);
            }
            (*pcVar2)(piVar4[3],param_2,param_3);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[6];
        if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,0x80006f0);
        }
        (*pcVar2)(piVar4[3],param_2,param_3);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080023c0 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(param_1 + -0x60);
    return;
}


// ===== sym.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x080023c8 (size 8) =====

void sym.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    *(iVar2 + 0x68) = *(iVar2 + 0x68) + 1;
    _raw_spin_unlock_irqrestore(iVar2,uVar1);
    return;
}


// ===== sym.mon_bin_vma_close.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x080023d0 (size 8) =====

void sym.mon_bin_vma_close.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    *(iVar2 + 0x68) = *(iVar2 + 0x68) + -1;
    _raw_spin_unlock_irqrestore(iVar2,uVar1);
    return;
}


// ===== sym.mon_submit.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt @ 0x080023d8 (size 8) =====

void sym.mon_submit.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[4];
            if (1 < (pcVar2 + -0x8002410 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0x94f24c05e8a8e3a8,pcVar2,0x80006b0);
            }
            (*pcVar2)(piVar4[3],param_2);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[4];
        if (1 < (pcVar2 + -0x8002410 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x94f24c05e8a8e3a8,pcVar2,0x80006b0);
        }
        (*pcVar2)(piVar4[3],param_2);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x080023e0 (size 8) =====

void sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt(ulong *param_1)

{
    param_1[0x14] = 0xe5e5e5e5e5e5e5e5;
    param_1[0x15] = 0xe5e5e5e5e5e5e5e5;
    param_1[0x12] = 0xe5e5e5e5e5e5e5e5;
    param_1[0x13] = 0xe5e5e5e5e5e5e5e5;
    param_1[0x10] = 0xe5e5e5e5e5e5e5e5;
    param_1[0x11] = 0xe5e5e5e5e5e5e5e5;
    param_1[0xe] = 0xe5e5e5e5e5e5e5e5;
    param_1[0xf] = 0xe5e5e5e5e5e5e5e5;
    param_1[0xc] = 0xe5e5e5e5e5e5e5e5;
    param_1[0xd] = 0xe5e5e5e5e5e5e5e5;
    param_1[10] = 0xe5e5e5e5e5e5e5e5;
    param_1[0xb] = 0xe5e5e5e5e5e5e5e5;
    param_1[8] = 0xe5e5e5e5e5e5e5e5;
    param_1[9] = 0xe5e5e5e5e5e5e5e5;
    param_1[6] = 0xe5e5e5e5e5e5e5e5;
    param_1[7] = 0xe5e5e5e5e5e5e5e5;
    param_1[4] = 0xe5e5e5e5e5e5e5e5;
    param_1[5] = 0xe5e5e5e5e5e5e5e5;
    param_1[2] = 0xe5e5e5e5e5e5e5e5;
    param_1[3] = 0xe5e5e5e5e5e5e5e5;
    *param_1 = 0xe5e5e5e5e5e5e5e5;
    param_1[1] = 0xe5e5e5e5e5e5e5e5;
    return;
}


// ===== sym.mon_text_read_t.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x080023e8 (size 8) =====

uint64_t sym.mon_text_read_t.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong uVar1;
    int iVar2;
    code *pcVar3;
    uint64_t arg2;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char32_t cVar7;
    uint uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    ulong *arg1;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_58;
    int iStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    arg1 = *(param_1 + 0xd8);
    mutex_lock(arg1 + 0x12);
    uVar9 = arg1[0x10];
    if (uVar9 == 0) {
        arg2 = sym.mon_text_read_wait(arg1,param_1);
        if (arg2 < 0xfffffffffffff001) {
            iStack_50 = arg1[0x11];
            iStack_54 = *(arg1 + 0xe);
            if (*(arg2 + 0x2b) < 4) {
                cVar7 = str.CZBI[*(arg2 + 0x2b)];
            }
            else {
                cVar7 = L'B';
            }
            uVar8 = 0x6f;
            if (*(arg2 + 0x2a) != '\0') {
                uVar8 = 0x69;
            }
            iStack_58 = scnprintf(iStack_50,iStack_54,"%lx %u %c %c%c:%03u:%02u",*(arg2 + 0x18),*(arg2 + 0x20),
                                  *(arg2 + 0x10),cVar7,uVar8,*(arg2 + 0x28),*(arg2 + 0x29));
            sym.mon_text_read_statset(&iStack_58,arg2);
            iVar2 = iStack_58;
            iStack_58 = scnprintf(iStack_50 + iStack_58,iStack_54 - iStack_58,0x800090c,*(arg2 + 0x2c));
            iStack_58 = iStack_58 + iVar2;
            sym.mon_text_read_data(&iStack_58,arg2);
            arg1[0xf] = 0;
            arg1[0x10] = iStack_58;
            kmem_cache_free(*arg1,arg2);
            uVar9 = arg1[0x10];
            goto code_r0x08003364;
        }
    }
    else {
code_r0x08003364:
        arg2 = param_3;
        if (uVar9 <= param_3) {
            arg2 = uVar9;
        }
        if (arg2 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8003404);
            (*pcVar3)();
        }
        auVar11 = __check_object_size(arg1[0x11] + arg1[0xf],arg2,1);
        iVar4 = sym._copy_to_user(param_2,auVar11,arg2);
        if (iVar4 == 0) {
            arg1[0xf] = arg1[0xf] + arg2;
            arg1[0x10] = arg1[0x10] - arg2;
        }
        else {
            arg2 = 0xfffffffffffffff2;
        }
    }
    mutex_unlock(arg1 + 0x12);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return arg2;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mon_text_open;
    mutex_lock(obj.mon_lock);
    iVar4 = *(auVar11._0_8_ + 0x2d8);
    piVar5 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xe0);
    if (piVar5 != NULL) {
        piVar5[2] = piVar5 + 2;
        piVar5[3] = piVar5 + 2;
        __init_waitqueue_head(piVar5 + 0xb,"&rp->wait",obj.mon_text_open.__key);
        __mutex_init(piVar5 + 0x12,"&rp->printf_lock",obj.mon_text_open.__key);
        uVar1 = _default_wake_function;
        *(piVar5 + 0xe) = 0xfa;
        iVar6 = kmem_cache_alloc_trace(uVar1,0xcc0,0xfa);
        piVar5[0x11] = iVar6;
        if (iVar6 != 0) {
            piVar5[8] = sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            piVar5[9] = sym.__typeid__ZTSFvPvP3urbiE_global_addr;
            piVar5[6] = iVar4;
            piVar5[7] = piVar5;
            piVar5[10] = sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            snprintf(piVar5 + 0x18,0x1e,"mon_text_%p",piVar5);
            iVar6 = kmem_cache_create(piVar5 + 0x18,0xb0,8,0,
                                      sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt);
            *piVar5 = iVar6;
            if (iVar6 != 0) {
                sym.mon_reader_add(iVar4,piVar5 + 4);
                uVar10 = 0;
                *(auVar11._8_8_ + 0xd8) = piVar5;
                goto code_r0x08003544;
            }
            kfree(piVar5[0x11]);
        }
        kfree(piVar5);
    }
    uVar10 = 0xfffffff4;
code_r0x08003544:
    mutex_unlock(obj.mon_lock);
    return uVar10;
}


// ===== sym.mon_text_read_u.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x080023f0 (size 8) =====

uint64_t sym.mon_text_read_u.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t arg2;
    ulong uVar5;
    uint32_t uVar6;
    char32_t cVar7;
    uint uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_78;
    int iStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    puVar10 = *(param_1 + 0xd8);
    mutex_lock(puVar10 + 0x12);
    uVar9 = puVar10[0x10];
    if (uVar9 == 0) {
        arg2 = sym.mon_text_read_wait(puVar10,param_1);
        if (0xfffffffffffff000 < arg2) goto code_r0x080046a0;
        iVar11 = puVar10[0x11];
        iVar4 = *(puVar10 + 0xe);
        if (*(arg2 + 0x2b) < 4) {
            cVar7 = str.CZBI[*(arg2 + 0x2b)];
        }
        else {
            cVar7 = L'B';
        }
        uVar8 = 0x6f;
        if (*(arg2 + 0x2a) != '\0') {
            uVar8 = 0x69;
        }
        iStack_74 = iVar4;
        iStack_70 = iVar11;
        iVar2 = scnprintf(iVar11,iVar4,"%lx %u %c %c%c:%d:%03u:%u",*(arg2 + 0x18),*(arg2 + 0x20),*(arg2 + 0x10),
                          cVar7,uVar8,*(arg2 + 0x24),*(arg2 + 0x28),*(arg2 + 0x29));
        iStack_78 = iVar2;
        if (*(arg2 + 0x10) == 0x45) {
code_r0x08004494:
            sym.mon_text_read_statset(&iStack_78,arg2);
            iVar2 = iStack_78;
        }
        else if (*(arg2 + 0x2b) == '\x03') {
            iVar4 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d",*(arg2 + 0x30),*(arg2 + 0x34));
            iVar2 = iVar4 + iVar2;
        }
        else {
            if (*(arg2 + 0x2b) != '\x01') goto code_r0x08004494;
            if (*(arg2 + 0x10) == 0x53) {
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d:%d",*(arg2 + 0x30),*(arg2 + 0x34),
                                  *(arg2 + 0x38));
            }
            else {
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d:%d:%d",*(arg2 + 0x30),*(arg2 + 0x34),
                                  *(arg2 + 0x38),*(arg2 + 0x3c));
            }
            iVar3 = iVar3 + iVar2;
            iVar2 = scnprintf(iVar11 + iVar3,iVar4 - iVar3,0x800090c,*(arg2 + 0x44));
            uVar6 = *(arg2 + 0x44);
            iVar2 = iVar2 + iVar3;
            if (0 < uVar6) {
                if (4 < uVar6) {
                    uVar6 = 5;
                }
                iStack_78 = iVar2;
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2 + 0x48),*(arg2 + 0x4c),
                                  *(arg2 + 0x50));
                iVar2 = iVar3 + iVar2;
                if (uVar6 != 1) {
                    iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2 + 0x54),*(arg2 + 0x58),
                                      *(arg2 + 0x5c));
                    iVar2 = iVar3 + iVar2;
                    if (uVar6 != 2) {
                        iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2 + 0x60),*(arg2 + 100),
                                          *(arg2 + 0x68));
                        iVar2 = iVar3 + iVar2;
                        if (uVar6 != 3) {
                            iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2 + 0x6c),*(arg2 + 0x70)
                                              ,*(arg2 + 0x74));
                            iVar2 = iVar3 + iVar2;
                            if (uVar6 != 4) {
                                iVar4 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2 + 0x78),
                                                  *(arg2 + 0x7c),*(arg2 + 0x80));
                                iVar2 = iVar4 + iVar2;
                            }
                        }
                    }
                }
            }
        }
        iStack_78 = iVar2;
        iVar4 = iStack_78;
        iStack_78 = scnprintf(iStack_70 + iStack_78,iStack_74 - iStack_78,0x800090c,*(arg2 + 0x2c));
        iStack_78 = iStack_78 + iVar4;
        sym.mon_text_read_data(&iStack_78,arg2);
        puVar10[0xf] = 0;
        puVar10[0x10] = iStack_78;
        kmem_cache_free(*puVar10,arg2);
        uVar9 = puVar10[0x10];
    }
    arg2 = param_3;
    if (uVar9 <= param_3) {
        arg2 = uVar9;
    }
    if (arg2 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80046f0);
        (*pcVar1)();
    }
    auVar12 = __check_object_size(puVar10[0x11] + puVar10[0xf],arg2,1);
    iVar11 = sym._copy_to_user(param_2,auVar12,arg2);
    if (iVar11 == 0) {
        puVar10[0xf] = puVar10[0xf] + arg2;
        puVar10[0x10] = puVar10[0x10] - arg2;
    }
    else {
        arg2 = 0xfffffffffffffff2;
    }
code_r0x080046a0:
    mutex_unlock(puVar10 + 0x12);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return arg2;
    }
    auVar12 = __stack_chk_fail();
    puVar10 = auVar12._8_8_;
    *extraout_x18 = sym.mon_bin_add;
    if (puVar10 == NULL) {
        uVar6 = 0;
        uVar5 = 0;
    }
    else {
        uVar6 = *(puVar10 + 2);
        if (0x7f < uVar6) {
            return 0;
        }
        uVar5 = *puVar10;
    }
    uVar9 = device_create(CONCAT44(*0x8000004,_segment.ehdr),uVar5,_segment.ehdr & 0xfff00000 | uVar6,0,"usbmon%d")
    ;
    if (0xfffffffffffff000 < uVar9) {
        return 0;
    }
    *(auVar12._0_8_ + 0x40) = uVar9;
    return 1;
}


// ===== sym.mon_bin_read.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x080023f8 (size 8) =====

uint64_t sym.mon_bin_read.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t arg2;
    uint64_t arg2_00;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 0xd8);
    iVar1 = arg2 + 0x38;
    mutex_lock(iVar1);
    iVar3 = sym.mon_bin_wait_event(param_1,arg2);
    if (iVar3 < 0) {
        mutex_unlock(iVar1);
        return iVar3;
    }
    uVar6 = *(arg2 + 0x10);
    uVar9 = *(arg2 + 0x14);
    iVar2 = *(*(arg2 + 0x18) + (uVar6 >> 8 & 0xfffff0) + 8) + (uVar6 & 0xfff);
    if (uVar9 < 0x30) {
        uVar7 = 0x30 - uVar9;
        arg2_00 = param_3;
        if (uVar7 <= param_3) {
            arg2_00 = uVar7;
        }
        if (arg2_00 != 0) {
            auVar10 = __check_object_size(iVar2 + uVar9,arg2_00,1);
            iVar4 = sym._copy_to_user_1(param_2,auVar10,arg2_00);
            if (iVar4 != 0) {
code_r0x080048b8:
                mutex_unlock(iVar1);
                return 0xfffffffffffffff2;
            }
            uVar9 = *(arg2 + 0x14);
        }
        uVar9 = uVar9 + arg2_00;
        *(arg2 + 0x14) = uVar9;
        if (uVar9 < 0x30) goto code_r0x080049c4;
        param_2 = param_2 + arg2_00;
        param_3 = param_3 - arg2_00;
        uVar6 = *(arg2 + 0x10);
    }
    else {
        arg2_00 = 0;
    }
    uVar7 = *(iVar2 + 0x24) - (uVar9 - 0x30);
    if (uVar7 <= param_3) {
        param_3 = uVar7;
    }
    if (param_3 != 0) {
        uVar9 = uVar6 + uVar9 + 0x10;
        uVar7 = param_3 & 0xffffffff;
        uVar6 = 0;
        if (*(arg2 + 4) <= uVar9) {
            uVar6 = *(arg2 + 4);
        }
        uVar9 = uVar9 - uVar6;
        do {
            uVar6 = 0x1000 - (uVar9 & 0xfff);
            uVar8 = uVar7;
            if (uVar8 <= uVar6) {
                uVar6 = uVar8;
            }
            uVar7 = uVar6;
            auVar10 = __check_object_size(*(*(arg2 + 0x18) + (uVar9 >> 8 & 0xfffff0) + 8) + (uVar9 & 0xfff),uVar7,1);
            iVar4 = sym._copy_to_user_1(param_2,auVar10,uVar7);
            if (iVar4 != 0) goto code_r0x080048b8;
            uVar9 = uVar6 + uVar9;
            param_2 = param_2 + uVar7;
            if (*(arg2 + 4) <= uVar9) {
                uVar9 = 0;
            }
            uVar7 = uVar8 - uVar6;
        } while (uVar8 - uVar6 != 0);
        uVar9 = *(arg2 + 0x14);
    }
    uVar9 = uVar9 + param_3;
    arg2_00 = param_3 + arg2_00;
    *(arg2 + 0x14) = uVar9;
code_r0x080049c4:
    if (*(iVar2 + 0x24) + 0x30U <= uVar9) {
        uVar5 = _raw_spin_lock_irqsave(arg2);
        uVar6 = *(iVar2 + 0x24) + 0x7fU & 0xffffffc0;
        uVar9 = *(arg2 + 0x10) + uVar6;
        *(arg2 + 8) = *(arg2 + 8) - uVar6;
        *(arg2 + 0x10) = uVar9;
        if (*(arg2 + 4) <= uVar9) {
            *(arg2 + 0x10) = uVar9 - *(arg2 + 4);
        }
        _raw_spin_unlock_irqrestore(arg2,uVar5);
        *(arg2 + 0x14) = 0;
    }
    mutex_unlock(iVar1);
    return arg2_00;
}


// ===== sym.mon_stat_read.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt @ 0x08002400 (size 8) =====

void sym.mon_stat_read.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(param_2,param_3,param_4,*(param_1 + 0xd8) + 1,**(param_1 + 0xd8));
    return;
}


// ===== sym.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt @ 0x08002408 (size 8) =====

ulong sym.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 4) {
        sym.mon_bus_remove(param_3);
    }
    else if (param_2 == 3) {
        sym.mon_bus_init(param_3);
        mutex_lock(obj.mon_lock);
        if (_segment.ehdr != 0) {
            *(param_3 + 0x98) = 1;
        }
        mutex_unlock(obj.mon_lock);
    }
    return 1;
}


// ===== sym.__typeid__ZTSFvPvP3urbE_global_addr @ 0x08002410 (size 8) =====

void sym.__typeid__ZTSFvPvP3urbE_global_addr(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_bin_event(param_1,param_2,0x53,0xffffff8d);
    return;
}


// ===== sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x08002418 (size 8) =====

void sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_text_event(param_1,param_2,0x53,0xffffff8d);
    return;
}


// ===== sym.__typeid__ZTSFvPvP3urbiE_global_addr @ 0x08002420 (size 8) =====

void sym.__typeid__ZTSFvPvP3urbiE_global_addr(ulong *param_1,int64_t param_2,uint64_t param_3)

{
    uint *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(param_1 + 1) < 0x5d) {
        uVar6 = param_3;
        piVar7 = kmem_cache_alloc(*param_1,0xa20);
        if (piVar7 != NULL) {
            piVar7[3] = param_2;
            puVar1 = *(param_2 + 0x40);
            iVar2 = *(param_2 + 0x48);
            *(piVar7 + 2) = 0x45;
            *(piVar7 + 0x24) = *(*(puVar1 + 0x14) + 0x10);
            uVar3 = *(param_2 + 0x5c);
            *(piVar7 + 5) = *puVar1;
            *(piVar7 + 0x29) = *(iVar2 + 2) & 0xf;
            uVar5 = *(iVar2 + 3);
            *(piVar7 + 0x2a) = uVar3 >> 9 & 1;
            uStack_48 = 0;
            iStack_40 = 0;
            *(piVar7 + 0x2b) = uVar5 & 3;
            ktime_get_ts64(&uStack_48);
            *(piVar7 + 0x2c) = 0;
            *(piVar7 + 6) = uVar6;
            puVar9 = param_1[3];
            iVar4 = *(param_1 + 1);
            *(piVar7 + 8) = 0x452d;
            *(piVar7 + 4) =
                 ((SUB168(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                 (SUB164(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) +
                 (uStack_48 & 0xfff) * 1000000;
            *(param_1 + 1) = iVar4 + 1;
            uVar8 = __list_add_valid(piVar7,puVar9,param_1 + 2);
            if ((uVar8 & 1) != 0) {
                param_1[3] = piVar7;
                *piVar7 = param_1 + 2;
                piVar7[1] = puVar9;
                *puVar9 = piVar7;
            }
            param_3 = 1;
            __wake_up(param_1 + 0xb,3,1,0);
            goto code_r0x08003ec0;
        }
    }
    *(param_1[6] + 0x68) = *(param_1[6] + 0x68) + 1;
code_r0x08003ec0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mon_text_complete;
    sym.mon_text_event(auVar10._0_8_,auVar10._8_8_,0x43,param_3 & 0xffffffff);
    return;
}


// ===== sym.mon_bin_error.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002428 (size 8) =====

void sym.mon_bin_error.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint8_t uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uVar9 = param_3;
    iStack_48 = 0;
    iStack_40 = 0;
    ktime_get_real_ts64(&iStack_48);
    uVar10 = _raw_spin_lock_irqsave(param_1);
    uVar4 = *(param_1 + 4);
    uVar1 = *(param_1 + 8) + 0x40;
    if (uVar1 <= uVar4) {
        uVar5 = *(param_1 + 0xc);
        uVar3 = 0;
        if (uVar4 <= uVar5 + 0x40) {
            uVar3 = uVar4;
        }
        *(param_1 + 8) = uVar1;
        *(param_1 + 0xc) = (uVar5 + 0x40) - uVar3;
        if (uVar5 != 0xffffffff) {
            piVar2 = *(*(param_1 + 0x18) + (uVar5 >> 8 & 0xfffff0) + 8) + (uVar5 & 0xfff);
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            *piVar2 = 0;
            piVar2[1] = 0;
            *(piVar2 + 1) = 0x45;
            *(piVar2 + 9) = obj.xfer_to_pipe[*(*(param_2 + 0x48) + 3) & 3];
            uVar7 = *(param_2 + 0x5c) >> 2 & 0x80;
            *(piVar2 + 10) = uVar7;
            *(piVar2 + 10) = uVar7 | *(*(param_2 + 0x48) + 2) & 0xf;
            *(piVar2 + 0xb) = **(param_2 + 0x40);
            uVar6 = *(*(*(param_2 + 0x40) + 0x50) + 0x10);
            *piVar2 = param_2;
            *(piVar2 + 0xc) = uVar6;
            piVar2[2] = iStack_48;
            *(piVar2 + 3) =
                 (SUB168(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                 (SUB164(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f);
            *(piVar2 + 0x1c) = uVar9;
            *(piVar2 + 0xe) = 0x452d;
            _raw_spin_unlock_irqrestore(param_1,uVar10);
            param_3 = 1;
            __wake_up(param_1 + 0x20,3,1,0);
            goto code_r0x08006354;
        }
    }
    _raw_spin_unlock_irqrestore(param_1,uVar10);
code_r0x08006354:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mon_bin_complete;
    sym.mon_bin_event(auVar11._0_8_,auVar11._8_8_,0x43,param_3 & 0xffffffff);
    return;
}


// ===== sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x08002430 (size 8) =====

void sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_text_event(param_1,param_2,0x43,param_3 & 0xffffffff);
    return;
}


// ===== sym.mon_bin_complete.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002438 (size 8) =====

void sym.mon_bin_complete.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_bin_event(param_1,param_2,0x43,param_3 & 0xffffffff);
    return;
}


// ===== sym.default_wake_function.cfi_jt @ 0x08002440 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_wake_function.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.no_llseek.cfi_jt @ 0x08002448 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mon_bin_mmap.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002450 (size 8) =====

ulong sym.mon_bin_mmap.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0x90) = reloc.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
    if ((*(param_2 + 0x50) >> 1 & 1) == 0) {
        *(param_2 + 0x50) = *(param_2 + 0x50) & 0xffffffffffffffdf | 0x4040000;
        iVar2 = *(param_1 + 0xd8);
        *(param_2 + 0xa8) = iVar2;
        uVar1 = _raw_spin_lock_irqsave(iVar2);
        *(iVar2 + 0x68) = *(iVar2 + 0x68) + 1;
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


// ===== sym.mon_stat_release.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt @ 0x08002458 (size 8) =====

ulong sym.mon_stat_release.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_2 + 0xd8);
    *(param_2 + 0xd8) = 0;
    kfree(uVar1);
    return 0;
}


// ===== sym.mon_bin_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002460 (size 8) =====

uint sym.mon_bin_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ulong uVar3;
    code *arg1;
    uint *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mon_lock);
    arg1 = sym.mon_bus_lookup(*(param_1 + 0x4c) & 0xfffff);
    if (arg1 == NULL) {
        uVar7 = 0xffffffed;
    }
    else if ((arg1 == obj.mon_bus0) || (*(arg1 + 0x18) != 0)) {
        puVar4 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xb0);
        if (puVar4 != NULL) {
            *puVar4 = 0;
            __init_waitqueue_head(puVar4 + 8,"&rp->b_wait",obj.mon_bin_open.__key);
            __mutex_init(puVar4 + 0xe,"&rp->fetch_lock",obj.mon_bin_open.__key);
            uVar3 = _default_wake_function;
            puVar4[1] = 0x4b000;
            iVar5 = kmem_cache_alloc_trace(uVar3,0xdc0,0x4b0);
            *(puVar4 + 6) = iVar5;
            if (iVar5 != 0) {
                uVar2 = puVar4[1];
                if (0xfff < uVar2) {
                    uVar8 = 0;
                    do {
                        iVar6 = get_zeroed_page(0xcc0);
                        if (iVar6 == 0) {
                            if (uVar8 != 0) {
                                do {
                                    free_pages(*(iVar5 + -8 + uVar8),0);
                                    uVar8 = uVar8 - 0x10;
                                } while (uVar8 != 0);
                            }
                            kfree(*(puVar4 + 6));
                            goto code_r0x08005698;
                        }
                        piVar1 = iVar5 + uVar8;
                        uVar8 = uVar8 + 0x10;
                        *piVar1 = (((iVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                        piVar1[1] = iVar6;
                    } while ((uVar2 >> 8 & 0xfffff0) != uVar8);
                }
                *(puVar4 + 0x20) = arg1;
                *(puVar4 + 0x22) = puVar4;
                *(puVar4 + 0x24) = sym.__typeid__ZTSFvPvP3urbE_global_addr;
                *(puVar4 + 0x26) = sym.mon_bin_error.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
                *(puVar4 + 0x28) = sym.mon_bin_complete.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
                sym.mon_reader_add(arg1,puVar4 + 0x1c);
                uVar7 = 0;
                *(param_2 + 0xd8) = puVar4;
                goto code_r0x080056a4;
            }
code_r0x08005698:
            kfree(puVar4);
        }
        uVar7 = 0xfffffff4;
    }
    else {
        _printk(0x80008b3);
        uVar7 = 0xffffffed;
    }
code_r0x080056a4:
    mutex_unlock(obj.mon_lock);
    return uVar7;
}


// ===== sym.mon_text_release.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x08002468 (size 8) =====

ulong sym.mon_text_release.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(param_2 + 0xd8);
    mutex_lock(obj.mon_lock);
    if (*(*(param_1 + 0x2d8) + 0x48) < 1) {
        _printk(0x8000854);
    }
    else {
        sym.mon_reader_del(*(param_1 + 0x2d8),puVar6 + 4);
        puVar1 = puVar6 + 2;
        puVar5 = *puVar1;
        while (puVar5 != puVar1) {
            piVar7 = *puVar1;
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            *(puVar6 + 1) = *(puVar6 + 1) + -1;
            kmem_cache_free(*puVar6,piVar7);
            puVar5 = puVar6[2];
        }
        kmem_cache_destroy(*puVar6);
        kfree(puVar6[0x11]);
        kfree(puVar6);
    }
    mutex_unlock(obj.mon_lock);
    return 0;
}


// ===== sym.mon_text_open.36b466f381a449f5f1cd43a02a17e957.cfi_jt @ 0x08002470 (size 8) =====

uint sym.mon_text_open.36b466f381a449f5f1cd43a02a17e957.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mon_lock);
    arg1 = *(param_1 + 0x2d8);
    piVar2 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xe0);
    if (piVar2 != NULL) {
        piVar2[2] = piVar2 + 2;
        piVar2[3] = piVar2 + 2;
        __init_waitqueue_head(piVar2 + 0xb,"&rp->wait",obj.mon_text_open.__key);
        __mutex_init(piVar2 + 0x12,"&rp->printf_lock",obj.mon_text_open.__key);
        uVar1 = _default_wake_function;
        *(piVar2 + 0xe) = 0xfa;
        iVar3 = kmem_cache_alloc_trace(uVar1,0xcc0,0xfa);
        piVar2[0x11] = iVar3;
        if (iVar3 != 0) {
            piVar2[8] = sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            piVar2[9] = sym.__typeid__ZTSFvPvP3urbiE_global_addr;
            piVar2[6] = arg1;
            piVar2[7] = piVar2;
            piVar2[10] = sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            snprintf(piVar2 + 0x18,0x1e,"mon_text_%p",piVar2);
            iVar3 = kmem_cache_create(piVar2 + 0x18,0xb0,8,0,
                                      sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt);
            *piVar2 = iVar3;
            if (iVar3 != 0) {
                sym.mon_reader_add(arg1,piVar2 + 4);
                uVar4 = 0;
                *(param_2 + 0xd8) = piVar2;
                goto code_r0x08003544;
            }
            kfree(piVar2[0x11]);
        }
        kfree(piVar2);
    }
    uVar4 = 0xfffffff4;
code_r0x08003544:
    mutex_unlock(obj.mon_lock);
    return uVar4;
}


// ===== sym.mon_bin_release.0ef93d717f033c08657adc434aff0b7f.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.mon_bin_release.0ef93d717f033c08657adc434aff0b7f.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 0xd8);
    iVar2 = *(iVar1 + 0x80);
    mutex_lock(obj.mon_lock);
    if (*(iVar2 + 0x48) < 1) {
        _printk(0x8000854);
    }
    else {
        sym.mon_reader_del(iVar2,iVar1 + 0x70);
        iVar2 = *(iVar1 + 0x18);
        if (0xfff < *(iVar1 + 4)) {
            uVar3 = *(iVar1 + 4) >> 0xc;
            puVar4 = iVar2 + 8;
            do {
                free_pages(*puVar4,0);
                uVar3 = uVar3 - 1;
                puVar4 = puVar4 + 2;
            } while (uVar3 != 0);
            iVar2 = *(iVar1 + 0x18);
        }
        kfree(iVar2);
        kfree(iVar1);
    }
    mutex_unlock(obj.mon_lock);
    return 0;
}


// ===== sym.mon_stat_open.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt @ 0x08002480 (size 8) =====

ulong sym.mon_stat_open.cbd5572ccf0bcec129fe27ec2786940f.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    uint *puVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = kmem_cache_alloc_trace(_default_wake_function,0xcc0,0x54);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        iVar4 = *(param_1 + 0x2d8);
        uVar1 = snprintf(puVar2 + 1,0x50,"nreaders %d events %u text_lost %u\n",*(iVar4 + 0x48),*(iVar4 + 100),
                         *(iVar4 + 0x68));
        uVar3 = 0;
        *(param_2 + 0xd8) = puVar2;
        *puVar2 = uVar1;
    }
    return uVar3;
}


// ===== sym.mon_reader_add @ 0x08002488 (size 320) =====

void sym.mon_reader_add(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x10);
    if (*(arg1 + 0x48) == 0) {
        if (arg1 == obj.mon_bus0) {
            pcVar7 = _obj.mon_buses;
            if (_obj.mon_buses != obj.mon_buses) {
                do {
                    *(*(pcVar7 + 0x18) + 0x98) = 1;
                    pcVar7 = *pcVar7;
                } while (pcVar7 != obj.mon_buses);
            }
        }
        else {
            *(*(arg1 + 0x18) + 0x98) = 1;
        }
    }
    piVar8 = *(arg1 + 0x58);
    *(arg1 + 0x48) = *(arg1 + 0x48) + 1;
    uVar6 = __list_add_valid(arg2,piVar8,arg1 + 0x50);
    if ((uVar6 & 1) != 0) {
        *(arg1 + 0x58) = arg2;
        *arg2 = arg1 + 0x50;
        *(arg2 + 8) = piVar8;
        *piVar8 = arg2;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x10,uVar5);
    puVar1 = arg1 + 0x60;
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
        if (-1 < (uVar2 + 1 | uVar2)) {
            return;
        }
        uVar5 = 1;
    }
    refcount_warn_saturate(puVar1,uVar5);
    return;
}


// ===== sym.mon_reader_del @ 0x080025c8 (size 356) =====

void sym.mon_reader_del(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    uint64_t uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x10);
    uVar8 = __list_del_entry_valid(arg2);
    if ((uVar8 & 1) != 0) {
        iVar2 = *arg2;
        piVar3 = *(arg2 + 8);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *arg2 = 0xdead000000000100;
    *(arg2 + 8) = 0xdead000000000122;
    iVar6 = *(arg1 + 0x48) + -1;
    *(arg1 + 0x48) = iVar6;
    if (iVar6 == 0) {
        pcVar9 = _obj.mon_buses;
        if (arg1 == obj.mon_bus0) {
            for (; pcVar9 != obj.mon_buses; pcVar9 = *pcVar9) {
                if ((*(pcVar9 + 0x48) == 0) && (*(pcVar9 + 0x18) != 0)) {
                    *(*(pcVar9 + 0x18) + 0x98) = 0;
                }
            }
        }
        else if ((_segment.ehdr == 0) && (*(arg1 + 0x18) != 0)) {
            *(*(arg1 + 0x18) + 0x98) = 0;
            DataSynchronizationBarrier(3,3,0);
        }
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x10,uVar7);
    piVar1 = arg1 + 0x60;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar6 == 1) {
        DataMemoryBarrier(2,1);
        kfree(arg1);
    }
    else if (iVar6 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
    return;
}


// ===== sym.mon_bus_drop @ 0x0800272c (size 40) =====

void sym.mon_bus_drop(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(arg1 + -0x60);
    return;
}


// ===== sym.mon_bus_lookup @ 0x08002754 (size 88) =====

code * sym.mon_bus_lookup(int64_t arg1)

{
    code *pcVar1;
    
    if (arg1 == 0) {
        return obj.mon_bus0;
    }
    pcVar1 = _obj.mon_buses;
    if (_obj.mon_buses != obj.mon_buses) {
        do {
            if (*(*(pcVar1 + 0x18) + 0x10) == arg1) {
                return pcVar1;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.mon_buses);
    }
    return NULL;
}


// ===== sym.mon_bus_init @ 0x080027ac (size 208) =====

void sym.mon_bus_init(int64_t arg1)

{
    ulong *puVar1;
    uint uVar2;
    ulong *arg1_00;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0x70);
    if (arg1_00 != NULL) {
        *(arg1_00 + 0xc) = 1;
        *(arg1_00 + 2) = 0;
        arg1_00[10] = arg1_00 + 10;
        arg1_00[0xb] = arg1_00 + 10;
        arg1_00[3] = arg1;
        *(arg1 + 0x90) = arg1_00;
        uVar2 = sym.mon_text_add(arg1_00,arg1);
        *(arg1_00 + 4) = uVar2;
        uVar2 = sym.mon_bin_add(arg1_00,arg1);
        *(arg1_00 + 0x24) = uVar2;
        mutex_lock(obj.mon_lock);
        puVar1 = *0x8000658;
        uVar3 = __list_add_valid(arg1_00,*0x8000658,obj.mon_buses);
        if ((uVar3 & 1) != 0) {
            *0x8000658 = arg1_00;
            *arg1_00 = obj.mon_buses;
            arg1_00[1] = puVar1;
            *puVar1 = arg1_00;
        }
        mutex_unlock(obj.mon_lock);
    }
    return;
}


// ===== sym.mon_submit @ 0x0800287c (size 388) =====

void sym.mon_submit(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[4];
            if (1 < (pcVar2 + -0x8002410 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0x94f24c05e8a8e3a8,pcVar2,0x80006b0);
            }
            (*pcVar2)(piVar4[3],arg2);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[4];
        if (1 < (pcVar2 + -0x8002410 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x94f24c05e8a8e3a8,pcVar2,0x80006b0);
        }
        (*pcVar2)(piVar4[3],arg2);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.mon_submit_error @ 0x08002a00 (size 408) =====

void sym.mon_submit_error(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[5];
            if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,obj.mon_bin_cdev);
            }
            (*pcVar2)(piVar4[3],arg2,arg3 & 0xffffffffU);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[5];
        if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,obj.mon_bin_cdev);
        }
        (*pcVar2)(piVar4[3],arg2,arg3 & 0xffffffffU);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.mon_complete @ 0x08002b98 (size 408) =====

void sym.mon_complete(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x90);
    if (iVar3 != 0) {
        uVar1 = _raw_spin_lock_irqsave(iVar3 + 0x10);
        piVar4 = *(iVar3 + 0x50);
        *(iVar3 + 100) = *(iVar3 + 100) + 1;
        for (; piVar4 != iVar3 + 0x50; piVar4 = *piVar4) {
            pcVar2 = piVar4[6];
            if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,0x80006f0);
            }
            (*pcVar2)(piVar4[3],arg2,arg3 & 0xffffffffU);
        }
        _raw_spin_unlock_irqrestore(iVar3 + 0x10,uVar1);
    }
    uVar1 = _raw_spin_lock_irqsave(0x8000658);
    *0x80006ac = *0x80006ac + 1;
    for (piVar4 = *0x8000698; piVar4 != 0x8000698; piVar4 = *piVar4) {
        pcVar2 = piVar4[6];
        if (3 < (pcVar2 + -0x8002420 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xc273dcc6b8f3b009,pcVar2,0x80006f0);
        }
        (*pcVar2)(piVar4[3],arg2,arg3 & 0xffffffffU);
    }
    _raw_spin_unlock_irqrestore(0x8000658,uVar1);
    return;
}


// ===== sym.mon_notify @ 0x08002d30 (size 128) =====

ulong sym.mon_notify(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 4) {
        sym.mon_bus_remove(arg2);
    }
    else if (arg1 == 3) {
        sym.mon_bus_init(arg2);
        mutex_lock(obj.mon_lock);
        if (_segment.ehdr != 0) {
            *(arg2 + 0x98) = 1;
        }
        mutex_unlock(obj.mon_lock);
    }
    return 1;
}


// ===== sym.mon_bus_remove @ 0x08002db0 (size 288) =====

void sym.mon_bus_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x90);
    mutex_lock(obj.mon_lock);
    uVar6 = __list_del_entry_valid(arg1_00);
    if ((uVar6 & 1) != 0) {
        iVar1 = *arg1_00;
        piVar2 = arg1_00[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *arg1_00 = -0x2152ffffffffff00;
    arg1_00[1] = -0x2152fffffffffede;
    if (arg1_00[4] != 0) {
        sym.mon_text_del(arg1_00);
    }
    if (*(arg1_00 + 0x24) != 0) {
        sym.mon_bin_del(arg1_00);
    }
    if (*(arg1 + 0x98) != 0) {
        *(arg1 + 0x98) = 0;
        DataSynchronizationBarrier(3,3,0);
    }
    *(arg1 + 0x90) = 0;
    piVar2 = arg1_00 + 0xc;
    arg1_00[3] = 0;
    DataSynchronizationBarrier(3,3,0);
    Hint_Prefetch(piVar2,2,0,1);
    do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        kfree(arg1_00);
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar2,3);
    }
    mutex_unlock(obj.mon_lock);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002ed0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002f14

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
    //switch table (4 cases) at 0x8000730
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002f28);
    (*pcVar1)();
}


// ===== sym.mon_stat_read @ 0x08002f28 (size 60) =====

void sym.mon_stat_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_read_from_buffer(arg2,arg3,arg4,*(arg1 + 0xd8) + 1,**(arg1 + 0xd8));
    return;
}


// ===== sym.mon_stat_open @ 0x08002f64 (size 140) =====

ulong sym.mon_stat_open(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint *puVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = kmem_cache_alloc_trace(_default_wake_function,0xcc0,0x54);
    if (puVar2 == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        iVar4 = *(arg1 + 0x2d8);
        uVar1 = snprintf(puVar2 + 1,0x50,"nreaders %d events %u text_lost %u\n",*(iVar4 + 0x48),*(iVar4 + 100),
                         *(iVar4 + 0x68));
        uVar3 = 0;
        *(arg2 + 0xd8) = puVar2;
        *puVar2 = uVar1;
    }
    return uVar3;
}


// ===== sym.mon_stat_release @ 0x08002ff0 (size 48) =====

ulong sym.mon_stat_release(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xd8);
    *(arg1 + 0xd8) = 0;
    kfree(uVar1);
    return 0;
}


// ===== sym.mon_text_add @ 0x08003020 (size 412) =====

void sym.mon_text_add(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar5;
    ulong unaff_x30;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    if (arg2 == 0) {
        uVar5 = 0;
        uVar2 = 0;
        if (_segment.ehdr == 0) goto code_r0x0800315c;
code_r0x080030c8:
        iVar1 = snprintf(&uStack_48,10,0x800077c,uVar5);
        if (0xfffffff6 < iVar1 - 10U) {
            uVar2 = debugfs_create_file(&uStack_48,0x180,_segment.ehdr,arg1,obj.mon_fops_text_u);
            *(arg1 + 0x38) = uVar2;
            iVar1 = snprintf(&uStack_48,10,0x8000a0b,uVar5);
            if (0xfffffff6 < iVar1 - 10U) {
                uVar3 = debugfs_create_file(&uStack_48,0x180,_segment.ehdr,arg1,obj.mon_fops_stat);
                uVar2 = 1;
                *(arg1 + 0x28) = uVar3;
                goto code_r0x0800315c;
            }
            debugfs_remove(*(arg1 + 0x38));
            *(arg1 + 0x38) = 0;
        }
        if (arg2 != 0) {
            debugfs_remove(*(arg1 + 0x30));
            uVar2 = 0;
            *(arg1 + 0x30) = 0;
            goto code_r0x0800315c;
        }
    }
    else if (_segment.ehdr != 0) {
        uVar5 = *(arg2 + 0x10);
        iVar1 = snprintf(&uStack_48,10,0x8000817,uVar5);
        if (0xfffffff6 < iVar1 - 10U) {
            uVar2 = debugfs_create_file(&uStack_48,0x180,_segment.ehdr,arg1,obj.mon_fops_text_t);
            *(arg1 + 0x30) = uVar2;
            goto code_r0x080030c8;
        }
    }
    uVar2 = 0;
code_r0x0800315c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.mon_text_del;
    debugfs_remove(*(iVar4 + 0x38));
    debugfs_remove(*(iVar4 + 0x30));
    debugfs_remove(*(iVar4 + 0x28));
    return;
}


// ===== sym.mon_text_del @ 0x080031bc (size 68) =====

void sym.mon_text_del(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(arg1 + 0x38));
    debugfs_remove(*(arg1 + 0x30));
    debugfs_remove(*(arg1 + 0x28));
    return;
}


// ===== sym.mon_text_exit @ 0x08003200 (size 44) =====

void sym.mon_text_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    return;
}


// ===== sym.mon_text_read_t @ 0x0800322c (size 480) =====

uint64_t sym.mon_text_read_t(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int iVar2;
    code *pcVar3;
    uint64_t arg2_00;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char32_t cVar7;
    uint uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    ulong *arg1_00;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_58;
    int iStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    arg1_00 = *(arg1 + 0xd8);
    mutex_lock(arg1_00 + 0x12);
    uVar9 = arg1_00[0x10];
    if (uVar9 == 0) {
        arg2_00 = sym.mon_text_read_wait(arg1_00,arg1);
        if (arg2_00 < 0xfffffffffffff001) {
            iStack_50 = arg1_00[0x11];
            iStack_54 = *(arg1_00 + 0xe);
            if (*(arg2_00 + 0x2b) < 4) {
                cVar7 = str.CZBI[*(arg2_00 + 0x2b)];
            }
            else {
                cVar7 = L'B';
            }
            uVar8 = 0x6f;
            if (*(arg2_00 + 0x2a) != '\0') {
                uVar8 = 0x69;
            }
            iStack_58 = scnprintf(iStack_50,iStack_54,"%lx %u %c %c%c:%03u:%02u",*(arg2_00 + 0x18),*(arg2_00 + 0x20)
                                  ,*(arg2_00 + 0x10),cVar7,uVar8,*(arg2_00 + 0x28),*(arg2_00 + 0x29));
            sym.mon_text_read_statset(&iStack_58,arg2_00);
            iVar2 = iStack_58;
            iStack_58 = scnprintf(iStack_50 + iStack_58,iStack_54 - iStack_58,0x800090c,*(arg2_00 + 0x2c));
            iStack_58 = iStack_58 + iVar2;
            sym.mon_text_read_data(&iStack_58,arg2_00);
            arg1_00[0xf] = 0;
            arg1_00[0x10] = iStack_58;
            kmem_cache_free(*arg1_00,arg2_00);
            uVar9 = arg1_00[0x10];
            goto code_r0x08003364;
        }
    }
    else {
code_r0x08003364:
        arg2_00 = arg3;
        if (uVar9 <= arg3) {
            arg2_00 = uVar9;
        }
        if (arg2_00 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8003404);
            (*pcVar3)();
        }
        auVar11 = __check_object_size(arg1_00[0x11] + arg1_00[0xf],arg2_00,1);
        iVar4 = sym._copy_to_user(arg2,auVar11,arg2_00);
        if (iVar4 == 0) {
            arg1_00[0xf] = arg1_00[0xf] + arg2_00;
            arg1_00[0x10] = arg1_00[0x10] - arg2_00;
        }
        else {
            arg2_00 = 0xfffffffffffffff2;
        }
    }
    mutex_unlock(arg1_00 + 0x12);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return arg2_00;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mon_text_open;
    mutex_lock(obj.mon_lock);
    iVar4 = *(auVar11._0_8_ + 0x2d8);
    piVar5 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xe0);
    if (piVar5 != NULL) {
        piVar5[2] = piVar5 + 2;
        piVar5[3] = piVar5 + 2;
        __init_waitqueue_head(piVar5 + 0xb,"&rp->wait",obj.mon_text_open.__key);
        __mutex_init(piVar5 + 0x12,"&rp->printf_lock",obj.mon_text_open.__key);
        uVar1 = _default_wake_function;
        *(piVar5 + 0xe) = 0xfa;
        iVar6 = kmem_cache_alloc_trace(uVar1,0xcc0,0xfa);
        piVar5[0x11] = iVar6;
        if (iVar6 != 0) {
            piVar5[8] = sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            piVar5[9] = sym.__typeid__ZTSFvPvP3urbiE_global_addr;
            piVar5[6] = iVar4;
            piVar5[7] = piVar5;
            piVar5[10] = sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            snprintf(piVar5 + 0x18,0x1e,"mon_text_%p",piVar5);
            iVar6 = kmem_cache_create(piVar5 + 0x18,0xb0,8,0,
                                      sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt);
            *piVar5 = iVar6;
            if (iVar6 != 0) {
                sym.mon_reader_add(iVar4,piVar5 + 4);
                uVar10 = 0;
                *(auVar11._8_8_ + 0xd8) = piVar5;
                goto code_r0x08003544;
            }
            kfree(piVar5[0x11]);
        }
        kfree(piVar5);
    }
    uVar10 = 0xfffffff4;
code_r0x08003544:
    mutex_unlock(obj.mon_lock);
    return uVar10;
}


// ===== sym.mon_text_open @ 0x0800340c (size 352) =====

uint sym.mon_text_open(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mon_lock);
    arg1_00 = *(arg1 + 0x2d8);
    piVar2 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xe0);
    if (piVar2 != NULL) {
        piVar2[2] = piVar2 + 2;
        piVar2[3] = piVar2 + 2;
        __init_waitqueue_head(piVar2 + 0xb,"&rp->wait",obj.mon_text_open.__key);
        __mutex_init(piVar2 + 0x12,"&rp->printf_lock",obj.mon_text_open.__key);
        uVar1 = _default_wake_function;
        *(piVar2 + 0xe) = 0xfa;
        iVar3 = kmem_cache_alloc_trace(uVar1,0xcc0,0xfa);
        piVar2[0x11] = iVar3;
        if (iVar3 != 0) {
            piVar2[8] = sym.mon_text_submit.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            piVar2[9] = sym.__typeid__ZTSFvPvP3urbiE_global_addr;
            piVar2[6] = arg1_00;
            piVar2[7] = piVar2;
            piVar2[10] = sym.mon_text_complete.36b466f381a449f5f1cd43a02a17e957.cfi_jt;
            snprintf(piVar2 + 0x18,0x1e,"mon_text_%p",piVar2);
            iVar3 = kmem_cache_create(piVar2 + 0x18,0xb0,8,0,
                                      sym.mon_text_ctor.36b466f381a449f5f1cd43a02a17e957.cfi_jt);
            *piVar2 = iVar3;
            if (iVar3 != 0) {
                sym.mon_reader_add(arg1_00,piVar2 + 4);
                uVar4 = 0;
                *(arg2 + 0xd8) = piVar2;
                goto code_r0x08003544;
            }
            kfree(piVar2[0x11]);
        }
        kfree(piVar2);
    }
    uVar4 = 0xfffffff4;
code_r0x08003544:
    mutex_unlock(obj.mon_lock);
    return uVar4;
}


// ===== sym.mon_text_release @ 0x0800356c (size 256) =====

ulong sym.mon_text_release(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar6 = *(arg2 + 0xd8);
    mutex_lock(obj.mon_lock);
    if (*(*(arg1 + 0x2d8) + 0x48) < 1) {
        _printk(0x8000854);
    }
    else {
        sym.mon_reader_del(*(arg1 + 0x2d8),puVar6 + 4);
        puVar1 = puVar6 + 2;
        puVar5 = *puVar1;
        while (puVar5 != puVar1) {
            piVar7 = *puVar1;
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            *(puVar6 + 1) = *(puVar6 + 1) + -1;
            kmem_cache_free(*puVar6,piVar7);
            puVar5 = puVar6[2];
        }
        kmem_cache_destroy(*puVar6);
        kfree(puVar6[0x11]);
        kfree(puVar6);
    }
    mutex_unlock(obj.mon_lock);
    return 0;
}


// ===== sym.mon_text_read_wait @ 0x08003674 (size 400) =====

int64_t * sym.mon_text_read_wait(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    int *piVar9;
    int64_t iVar10;
    char *pcVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t *piVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_90;
    uint64_t *puStack_88;
    code *pcStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = arg1 + 0x58;
    iVar13 = *(arg1 + 0x30);
    puVar6 = sp_el0;
    uStack_90 = 0;
    pcStack_80 = sym.default_wake_function.cfi_jt;
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_88 = puVar6;
    add_wait_queue(iVar10,&stack0xffffffffffffff70);
    iVar13 = iVar13 + 0x10;
    puVar1 = arg1 + 0x10;
    *(puVar6 + 5) = 1;
    DataMemoryBarrier(2,3);
    while( true ) {
        uVar7 = _raw_spin_lock_irqsave(iVar13);
        if (puVar1 == *puVar1) {
            _raw_spin_unlock_irqrestore(iVar13,uVar7);
            uVar4 = *(arg2 + 0x41);
        }
        else {
            piVar14 = *puVar1;
            uVar8 = __list_del_entry_valid(piVar14);
            if ((uVar8 & 1) != 0) {
                iVar2 = *piVar14;
                piVar3 = piVar14[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar14 = -0x2152ffffffffff00;
            piVar14[1] = -0x2152fffffffffede;
            *(arg1 + 8) = *(arg1 + 8) + -1;
            _raw_spin_unlock_irqrestore(iVar13,uVar7);
            if (piVar14 != NULL) {
                *(puVar6 + 5) = 0;
                DataMemoryBarrier(2,3);
                goto code_r0x080037b0;
            }
            uVar4 = *(arg2 + 0x41);
        }
        if ((uVar4 >> 3 & 1) != 0) {
            *(puVar6 + 5) = 0;
            piVar14 = 0xfffffffffffffff5;
            DataMemoryBarrier(2,3);
            goto code_r0x080037b0;
        }
        schedule();
        if (((*puVar6 >> 6 & 1) != 0) || ((*puVar6 & 1) != 0)) break;
        *(puVar6 + 5) = 1;
        DataMemoryBarrier(2,3);
    }
    piVar14 = 0xfffffffffffffffc;
code_r0x080037b0:
    remove_wait_queue(iVar10,&stack0xffffffffffffff70);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return piVar14;
    }
    auVar15 = __stack_chk_fail();
    iVar13 = auVar15._8_8_;
    piVar9 = auVar15._0_8_;
    *extraout_x18 = 0x8003800;
    uVar4 = *(iVar13 + 0x40);
    uVar12 = uVar4;
    if (uVar4 == 0x2d) {
        uVar12 = *(iVar13 + 0x30);
        pcVar11 = 0x800090c;
        iVar10 = *(piVar9 + 2) + *piVar9;
        iVar5 = piVar9[1] - *piVar9;
    }
    else {
        if (uVar4 == 0) {
            piVar14 = scnprintf(*(piVar9 + 2) + *piVar9,piVar9[1] - *piVar9," s %02x %02x %04x %04x %04x",
                                *(iVar13 + 0x84),*(iVar13 + 0x85),*(iVar13 + 0x86),*(iVar13 + 0x88),*(iVar13 + 0x8a)
                                ,&stack0xffffffffffffffa0,0x8003800,iVar10);
            goto code_r0x080038bc;
        }
        pcVar11 = " %c __ __ ____ ____ ____";
        iVar5 = piVar9[1] - *piVar9;
        iVar10 = *(piVar9 + 2) + *piVar9;
    }
    piVar14 = scnprintf(iVar10,iVar5,pcVar11,uVar12);
code_r0x080038bc:
    *piVar9 = *piVar9 + piVar14;
    return piVar14;
}


// ===== sym.mon_text_read_statset @ 0x08003804 (size 216) =====

void sym.mon_text_read_statset(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uint32_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg2 + 0x40);
    uVar5 = uVar1;
    if (uVar1 == 0x2d) {
        uVar5 = *(arg2 + 0x30);
        pcVar4 = 0x800090c;
        iVar3 = *(arg1 + 8) + *arg1;
        iVar2 = *(arg1 + 4) - *arg1;
    }
    else {
        if (uVar1 == 0) {
            iVar2 = scnprintf(*(arg1 + 8) + *arg1,*(arg1 + 4) - *arg1," s %02x %02x %04x %04x %04x",*(arg2 + 0x84),
                              *(arg2 + 0x85),*(arg2 + 0x86),*(arg2 + 0x88),*(arg2 + 0x8a));
            goto code_r0x080038bc;
        }
        pcVar4 = " %c __ __ ____ ____ ____";
        iVar2 = *(arg1 + 4) - *arg1;
        iVar3 = *(arg1 + 8) + *arg1;
    }
    iVar2 = scnprintf(iVar3,iVar2,pcVar4,uVar5);
code_r0x080038bc:
    *arg1 = *arg1 + iVar2;
    return;
}


// ===== sym.mon_text_read_data @ 0x080038dc (size 388) =====

void sym.mon_text_read_data(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg2 + 0x2c);
    if (uVar1 < 1) {
        iVar2 = *(arg1 + 4) - *arg1;
        iVar4 = *(arg1 + 8) + *arg1;
    }
    else {
        if (*(arg2 + 0x41) != '\0') {
            iVar2 = scnprintf(*(arg1 + 8) + *arg1,*(arg1 + 4) - *arg1," %c\n");
            goto code_r0x08003a38;
        }
        iVar3 = scnprintf(*(arg1 + 8) + *arg1,*(arg1 + 4) - *arg1,0x8000a0f);
        uVar5 = 0;
        iVar3 = *arg1 + iVar3;
        if (0x1f < uVar1) {
            uVar1 = 0x20;
        }
        *arg1 = iVar3;
        do {
            if ((uVar5 & 3) == 0) {
                iVar3 = scnprintf(*(arg1 + 8) + iVar3,*(arg1 + 4) - iVar3,0x800080b);
                iVar3 = *arg1 + iVar3;
                *arg1 = iVar3;
            }
            iVar3 = scnprintf(*(arg1 + 8) + iVar3,*(arg1 + 4) - iVar3,"%02x",*(arg2 + 0x8c + uVar5));
            uVar5 = uVar5 + 1;
            iVar3 = *arg1 + iVar3;
            *arg1 = iVar3;
        } while (uVar1 != uVar5);
        iVar2 = *(arg1 + 4) - iVar3;
        iVar4 = *(arg1 + 8) + iVar3;
    }
    iVar2 = scnprintf(iVar4,iVar2,0x800094c);
code_r0x08003a38:
    *arg1 = *arg1 + iVar2;
    return;
}


// ===== sym._copy_to_user @ 0x08003a60 (size 312) =====

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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user_1 @ 0x08003bd4 (size 312) =====

int64_t sym._copy_to_user_1(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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


// ===== sym.mon_text_submit @ 0x08003d48 (size 44) =====

void sym.mon_text_submit(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_text_event(arg1,arg2,0x53,0xffffff8d);
    return;
}


// ===== sym.mon_text_error @ 0x08003d74 (size 384) =====

void sym.mon_text_error(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint8_t uVar5;
    uint uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    if (*(arg1 + 8) < 0x5d) {
        uVar6 = arg3;
        piVar7 = kmem_cache_alloc(*arg1,0xa20);
        if (piVar7 != NULL) {
            piVar7[3] = arg2;
            puVar1 = *(arg2 + 0x40);
            iVar2 = *(arg2 + 0x48);
            *(piVar7 + 2) = 0x45;
            *(piVar7 + 0x24) = *(*(puVar1 + 0x14) + 0x10);
            uVar3 = *(arg2 + 0x5c);
            *(piVar7 + 5) = *puVar1;
            *(piVar7 + 0x29) = *(iVar2 + 2) & 0xf;
            uVar5 = *(iVar2 + 3);
            *(piVar7 + 0x2a) = uVar3 >> 9 & 1;
            uStack_48 = 0;
            iStack_40 = 0;
            *(piVar7 + 0x2b) = uVar5 & 3;
            ktime_get_ts64(&uStack_48);
            *(piVar7 + 0x2c) = 0;
            *(piVar7 + 6) = uVar6;
            puVar9 = *(arg1 + 0x18);
            iVar4 = *(arg1 + 8);
            *(piVar7 + 8) = 0x452d;
            *(piVar7 + 4) =
                 ((SUB168(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                 (SUB164(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) +
                 (uStack_48 & 0xfff) * 1000000;
            *(arg1 + 8) = iVar4 + 1;
            uVar8 = __list_add_valid(piVar7,puVar9,arg1 + 0x10);
            if ((uVar8 & 1) != 0) {
                *(arg1 + 0x18) = piVar7;
                *piVar7 = arg1 + 0x10;
                piVar7[1] = puVar9;
                *puVar9 = piVar7;
            }
            arg3 = 1;
            __wake_up(arg1 + 0x58,3,1,0);
            goto code_r0x08003ec0;
        }
    }
    *(*(arg1 + 0x30) + 0x68) = *(*(arg1 + 0x30) + 0x68) + 1;
code_r0x08003ec0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mon_text_complete;
    sym.mon_text_event(auVar10._0_8_,auVar10._8_8_,0x43,arg3 & 0xffffffff);
    return;
}


// ===== sym.mon_text_complete @ 0x08003ef4 (size 44) =====

void sym.mon_text_complete(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_text_event(arg1,arg2,0x43,arg3 & 0xffffffff);
    return;
}


// ===== sym.mon_text_ctor @ 0x08003f20 (size 72) =====

void sym.mon_text_ctor(int64_t arg1)

{
    *(arg1 + 0xa0) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0xa8) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x90) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x98) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x80) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x88) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x70) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x78) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x60) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x68) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x50) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x58) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x40) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x48) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x30) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x38) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x20) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x28) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x10) = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 0x18) = 0xe5e5e5e5e5e5e5e5;
    *arg1 = 0xe5e5e5e5e5e5e5e5;
    *(arg1 + 8) = 0xe5e5e5e5e5e5e5e5;
    return;
}


// ===== sym.mon_text_event @ 0x08003f68 (size 1008) =====

uint64_t sym.mon_text_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    code *pcVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint64_t arg2_00;
    ulong uVar11;
    uint64_t uVar12;
    char32_t cVar13;
    uint8_t uVar14;
    uint uVar15;
    uchar uVar16;
    uint32_t uVar17;
    uint *puVar18;
    int64_t iVar19;
    uint64_t *puVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar23 [16];
    int iStack_e8;
    int iStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_58 = *(iVar19 + 0x5e0);
    uStack_68 = 0;
    iStack_60 = 0;
    uVar12 = arg3;
    uVar9 = ktime_get_ts64(&uStack_68);
    iVar19 = iStack_60;
    if (*(arg1 + 8) < 0x5d) {
        uVar17 = uStack_68;
        piVar10 = kmem_cache_alloc(*arg1,0xa20);
        uVar9 = 0;
        if (piVar10 == NULL) goto code_r0x0800408c;
        uVar22 = arg3;
        piVar10[3] = arg2;
        puVar18 = *(arg2 + 0x40);
        iVar2 = *(arg2 + 0x48);
        *(piVar10 + 2) = uVar22 & 0xff;
        *(piVar10 + 0x24) = *(*(puVar18 + 0x14) + 0x10);
        *(piVar10 + 5) = *puVar18;
        iVar1 = 0x80;
        if ((uVar22 & 0xff) != 0x53) {
            iVar1 = 0x84;
        }
        uVar3 = *(arg2 + 0x5c);
        *(piVar10 + 0x29) = *(iVar2 + 2) & 0xf;
        uVar15 = *(arg2 + iVar1);
        uVar14 = *(iVar2 + 3) & 3;
        *(piVar10 + 0x2a) = uVar3 >> 9 & 1;
        *(piVar10 + 4) =
             ((SUB168(SEXT816(iVar19) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
             (SUB164(SEXT816(iVar19) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) + (uVar17 & 0xfff) * 1000000;
        *(piVar10 + 0x2b) = uVar14;
        *(piVar10 + 0x2c) = uVar15;
        *(piVar10 + 6) = arg4;
        if (uVar14 == 1) {
            puVar18 = arg2 + 0xa4;
            uVar15 = *(arg2 + 0x98);
            iVar19 = 0x3c;
            *(piVar10 + 0x34) = *(arg2 + 0xa0);
            *(piVar10 + 7) = uVar15;
code_r0x080040b4:
            *(piVar10 + iVar19) = *puVar18;
        }
        else if (uVar14 == 3) {
            puVar18 = arg2 + 0xa0;
            iVar19 = 0x34;
            goto code_r0x080040b4;
        }
        uVar17 = *(arg2 + 0x9c);
        *(piVar10 + 0x44) = uVar17;
        if ((uVar14 == 1) && (0 < uVar17)) {
            uVar3 = uVar22 & 0xff;
            if (4 < uVar17) {
                uVar17 = 5;
            }
            uVar15 = *(arg2 + 0xd8);
            iVar19 = 0xdc;
            if (uVar3 != 0x53) {
                iVar19 = 0xe0;
            }
            uVar4 = *(arg2 + iVar19);
            *(piVar10 + 9) = *(arg2 + 0xe4);
            *(piVar10 + 0x4c) = uVar15;
            *(piVar10 + 10) = uVar4;
            if (uVar17 != 1) {
                uVar15 = *(arg2 + 0xe8);
                iVar19 = 0xec;
                if (uVar3 != 0x53) {
                    iVar19 = 0xf0;
                }
                uVar4 = *(arg2 + iVar19);
                *(piVar10 + 0x54) = *(arg2 + 0xf4);
                *(piVar10 + 0xb) = uVar15;
                *(piVar10 + 0x5c) = uVar4;
                if (uVar17 != 2) {
                    iVar19 = 0xfc;
                    if ((uVar22 & 0xff) != 0x53) {
                        iVar19 = 0x100;
                    }
                    uVar15 = *(arg2 + 0xf8);
                    uVar4 = *(arg2 + iVar19);
                    *(piVar10 + 0xc) = *(arg2 + 0x104);
                    *(piVar10 + 100) = uVar15;
                    *(piVar10 + 0xd) = uVar4;
                    if (uVar17 != 3) {
                        uVar15 = *(arg2 + 0x108);
                        iVar19 = 0x10c;
                        if ((uVar22 & 0xff) != 0x53) {
                            iVar19 = 0x110;
                        }
                        uVar4 = *(arg2 + iVar19);
                        *(piVar10 + 0x6c) = *(arg2 + 0x114);
                        *(piVar10 + 0xe) = uVar15;
                        *(piVar10 + 0x74) = uVar4;
                        if (uVar17 != 4) {
                            iVar19 = 0x11c;
                            if ((uVar22 & 0xff) != 0x53) {
                                iVar19 = 0x120;
                            }
                            uVar15 = *(arg2 + 0x118);
                            uVar4 = *(arg2 + iVar19);
                            *(piVar10 + 0xf) = *(arg2 + 0x124);
                            *(piVar10 + 0x7c) = uVar15;
                            *(piVar10 + 0x10) = uVar4;
                        }
                    }
                }
            }
            if (uVar3 != 0x43) {
                uVar14 = *(piVar10 + 0x2b);
                goto code_r0x080041dc;
            }
            uVar17 = *(arg2 + 0x80);
            uVar16 = 0x2d;
            *(piVar10 + 0x2c) = uVar17;
        }
        else {
code_r0x080041dc:
            uVar16 = 0x2d;
            if (((uVar22 & 0xff) == 0x53) && (uVar14 == 0)) {
                if (*(arg2 + 0x88) == NULL) {
                    uVar16 = 0x5a;
                }
                else {
                    uVar16 = 0;
                    *(piVar10 + 0x84) = **(arg2 + 0x88);
                }
            }
            uVar17 = *(piVar10 + 0x2c);
        }
        *(piVar10 + 8) = uVar16;
        if (uVar17 < 1) {
            uVar16 = 0x4c;
        }
        else {
            if (0x1f < uVar17) {
                uVar17 = 0x20;
            }
            if (*(piVar10 + 0x2a) == '\0') {
                if ((uVar22 & 0xff) == 0x53) goto code_r0x08004254;
                uVar16 = 0x3e;
            }
            else if ((uVar22 & 0xff) == 0x43) {
code_r0x08004254:
                if (*(arg2 + 0x7c) == 0) {
                    iVar19 = *(arg2 + 0x60);
                    if (iVar19 == 0) {
                        uVar16 = 0x5a;
                        goto code_r0x080042c8;
                    }
                }
                else {
                    puVar20 = *(arg2 + 0x70);
                    uVar22 = *(puVar20 + 0xc);
                    if (uVar17 <= *(puVar20 + 0xc)) {
                        uVar22 = uVar17;
                    }
                    iVar19 = ((*puVar20 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + puVar20[1];
                    uVar17 = uVar22;
                }
                memcpy(piVar10 + 0x8c,iVar19,uVar17);
                uVar16 = 0;
            }
            else {
                uVar16 = 0x3c;
            }
        }
code_r0x080042c8:
        iVar8 = *(arg1 + 8);
        puVar21 = *(arg1 + 0x18);
        *(piVar10 + 0x41) = uVar16;
        *(arg1 + 8) = iVar8 + 1;
        uVar9 = __list_add_valid(piVar10,puVar21,arg1 + 0x10);
        if ((uVar9 & 1) != 0) {
            *(arg1 + 0x18) = piVar10;
            *piVar10 = arg1 + 0x10;
            piVar10[1] = puVar21;
            *puVar21 = piVar10;
        }
        uVar12 = 1;
        uVar9 = __wake_up(arg1 + 0x58,3,1,0);
    }
    else {
code_r0x0800408c:
        *(*(arg1 + 0x30) + 0x68) = *(*(arg1 + 0x30) + 0x68) + 1;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return uVar9;
    }
    auVar23 = __stack_chk_fail();
    *extraout_x18 = sym.mon_text_read_u;
    pcStack_c8 = sym.mon_text_read_u;
    iVar19 = sp_el0;
    iStack_d8 = *(iVar19 + 0x5e0);
    puVar21 = *(auVar23._0_8_ + 0xd8);
    puStack_d0 = &stack0xffffffffffffffb0;
    mutex_lock(puVar21 + 0x12);
    uVar9 = puVar21[0x10];
    if (uVar9 == 0) {
        arg2_00 = sym.mon_text_read_wait(puVar21,auVar23._0_8_);
        if (0xfffffffffffff000 < arg2_00) goto code_r0x080046a0;
        iVar19 = puVar21[0x11];
        iVar8 = *(puVar21 + 0xe);
        if (*(arg2_00 + 0x2b) < 4) {
            cVar13 = str.CZBI[*(arg2_00 + 0x2b)];
        }
        else {
            cVar13 = L'B';
        }
        uVar15 = 0x6f;
        if (*(arg2_00 + 0x2a) != '\0') {
            uVar15 = 0x69;
        }
        iStack_e4 = iVar8;
        iStack_e0 = iVar19;
        iVar6 = scnprintf(iVar19,iVar8,"%lx %u %c %c%c:%d:%03u:%u",*(arg2_00 + 0x18),*(arg2_00 + 0x20),
                          *(arg2_00 + 0x10),cVar13,uVar15,*(arg2_00 + 0x24),*(arg2_00 + 0x28),*(arg2_00 + 0x29));
        iStack_e8 = iVar6;
        if (*(arg2_00 + 0x10) == 0x45) {
code_r0x08004494:
            sym.mon_text_read_statset(&iStack_e8,arg2_00);
            iVar6 = iStack_e8;
        }
        else if (*(arg2_00 + 0x2b) == '\x03') {
            iVar8 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34));
            iVar6 = iVar8 + iVar6;
        }
        else {
            if (*(arg2_00 + 0x2b) != '\x01') goto code_r0x08004494;
            if (*(arg2_00 + 0x10) == 0x53) {
                iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34),
                                  *(arg2_00 + 0x38));
            }
            else {
                iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%d:%d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34),
                                  *(arg2_00 + 0x38),*(arg2_00 + 0x3c));
            }
            iVar7 = iVar7 + iVar6;
            iVar6 = scnprintf(iVar19 + iVar7,iVar8 - iVar7,0x800090c,*(arg2_00 + 0x44));
            uVar17 = *(arg2_00 + 0x44);
            iVar6 = iVar6 + iVar7;
            if (0 < uVar17) {
                if (4 < uVar17) {
                    uVar17 = 5;
                }
                iStack_e8 = iVar6;
                iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%u:%u",*(arg2_00 + 0x48),*(arg2_00 + 0x4c),
                                  *(arg2_00 + 0x50));
                iVar6 = iVar7 + iVar6;
                if (uVar17 != 1) {
                    iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%u:%u",*(arg2_00 + 0x54),*(arg2_00 + 0x58),
                                      *(arg2_00 + 0x5c));
                    iVar6 = iVar7 + iVar6;
                    if (uVar17 != 2) {
                        iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%u:%u",*(arg2_00 + 0x60),
                                          *(arg2_00 + 100),*(arg2_00 + 0x68));
                        iVar6 = iVar7 + iVar6;
                        if (uVar17 != 3) {
                            iVar7 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%u:%u",*(arg2_00 + 0x6c),
                                              *(arg2_00 + 0x70),*(arg2_00 + 0x74));
                            iVar6 = iVar7 + iVar6;
                            if (uVar17 != 4) {
                                iVar8 = scnprintf(iVar19 + iVar6,iVar8 - iVar6," %d:%u:%u",*(arg2_00 + 0x78),
                                                  *(arg2_00 + 0x7c),*(arg2_00 + 0x80));
                                iVar6 = iVar8 + iVar6;
                            }
                        }
                    }
                }
            }
        }
        iStack_e8 = iVar6;
        iVar8 = iStack_e8;
        iStack_e8 = scnprintf(iStack_e0 + iStack_e8,iStack_e4 - iStack_e8,0x800090c,*(arg2_00 + 0x2c));
        iStack_e8 = iStack_e8 + iVar8;
        sym.mon_text_read_data(&iStack_e8,arg2_00);
        puVar21[0xf] = 0;
        puVar21[0x10] = iStack_e8;
        kmem_cache_free(*puVar21,arg2_00);
        uVar9 = puVar21[0x10];
    }
    arg2_00 = uVar12;
    if (uVar9 <= uVar12) {
        arg2_00 = uVar9;
    }
    if (arg2_00 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80046f0);
        (*pcVar5)();
    }
    noname_1 = __check_object_size(puVar21[0x11] + puVar21[0xf],arg2_00,1);
    iVar19 = sym._copy_to_user(auVar23._8_8_,noname_1,arg2_00);
    if (iVar19 == 0) {
        puVar21[0xf] = puVar21[0xf] + arg2_00;
        puVar21[0x10] = puVar21[0x10] - arg2_00;
    }
    else {
        arg2_00 = 0xfffffffffffffff2;
    }
code_r0x080046a0:
    mutex_unlock(puVar21 + 0x12);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_d8) {
        return arg2_00;
    }
    auVar23 = __stack_chk_fail();
    puVar21 = auVar23._8_8_;
    *extraout_x18_00 = sym.mon_bin_add;
    if (puVar21 == NULL) {
        uVar17 = 0;
        uVar11 = 0;
    }
    else {
        uVar17 = *(puVar21 + 2);
        if (0x7f < uVar17) {
            return 0;
        }
        uVar11 = *puVar21;
    }
    uVar9 = device_create(CONCAT44(*0x8000004,_segment.ehdr),uVar11,_segment.ehdr & 0xfff00000 | uVar17,0,
                          "usbmon%d");
    if (0xfffffffffffff000 < uVar9) {
        return 0;
    }
    *(auVar23._0_8_ + 0x40) = uVar9;
    return 1;
}


// ===== sym.mon_text_read_u @ 0x08004358 (size 928) =====

uint64_t sym.mon_text_read_u(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint64_t arg2_00;
    ulong uVar5;
    uint32_t uVar6;
    char32_t cVar7;
    uint uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int iStack_78;
    int iStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    puVar10 = *(arg1 + 0xd8);
    mutex_lock(puVar10 + 0x12);
    uVar9 = puVar10[0x10];
    if (uVar9 == 0) {
        arg2_00 = sym.mon_text_read_wait(puVar10,arg1);
        if (0xfffffffffffff000 < arg2_00) goto code_r0x080046a0;
        iVar11 = puVar10[0x11];
        iVar4 = *(puVar10 + 0xe);
        if (*(arg2_00 + 0x2b) < 4) {
            cVar7 = str.CZBI[*(arg2_00 + 0x2b)];
        }
        else {
            cVar7 = L'B';
        }
        uVar8 = 0x6f;
        if (*(arg2_00 + 0x2a) != '\0') {
            uVar8 = 0x69;
        }
        iStack_74 = iVar4;
        iStack_70 = iVar11;
        iVar2 = scnprintf(iVar11,iVar4,"%lx %u %c %c%c:%d:%03u:%u",*(arg2_00 + 0x18),*(arg2_00 + 0x20),
                          *(arg2_00 + 0x10),cVar7,uVar8,*(arg2_00 + 0x24),*(arg2_00 + 0x28),*(arg2_00 + 0x29));
        iStack_78 = iVar2;
        if (*(arg2_00 + 0x10) == 0x45) {
code_r0x08004494:
            sym.mon_text_read_statset(&iStack_78,arg2_00);
            iVar2 = iStack_78;
        }
        else if (*(arg2_00 + 0x2b) == '\x03') {
            iVar4 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34));
            iVar2 = iVar4 + iVar2;
        }
        else {
            if (*(arg2_00 + 0x2b) != '\x01') goto code_r0x08004494;
            if (*(arg2_00 + 0x10) == 0x53) {
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34),
                                  *(arg2_00 + 0x38));
            }
            else {
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%d:%d:%d",*(arg2_00 + 0x30),*(arg2_00 + 0x34),
                                  *(arg2_00 + 0x38),*(arg2_00 + 0x3c));
            }
            iVar3 = iVar3 + iVar2;
            iVar2 = scnprintf(iVar11 + iVar3,iVar4 - iVar3,0x800090c,*(arg2_00 + 0x44));
            uVar6 = *(arg2_00 + 0x44);
            iVar2 = iVar2 + iVar3;
            if (0 < uVar6) {
                if (4 < uVar6) {
                    uVar6 = 5;
                }
                iStack_78 = iVar2;
                iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2_00 + 0x48),*(arg2_00 + 0x4c),
                                  *(arg2_00 + 0x50));
                iVar2 = iVar3 + iVar2;
                if (uVar6 != 1) {
                    iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2_00 + 0x54),*(arg2_00 + 0x58),
                                      *(arg2_00 + 0x5c));
                    iVar2 = iVar3 + iVar2;
                    if (uVar6 != 2) {
                        iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2_00 + 0x60),
                                          *(arg2_00 + 100),*(arg2_00 + 0x68));
                        iVar2 = iVar3 + iVar2;
                        if (uVar6 != 3) {
                            iVar3 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2_00 + 0x6c),
                                              *(arg2_00 + 0x70),*(arg2_00 + 0x74));
                            iVar2 = iVar3 + iVar2;
                            if (uVar6 != 4) {
                                iVar4 = scnprintf(iVar11 + iVar2,iVar4 - iVar2," %d:%u:%u",*(arg2_00 + 0x78),
                                                  *(arg2_00 + 0x7c),*(arg2_00 + 0x80));
                                iVar2 = iVar4 + iVar2;
                            }
                        }
                    }
                }
            }
        }
        iStack_78 = iVar2;
        iVar4 = iStack_78;
        iStack_78 = scnprintf(iStack_70 + iStack_78,iStack_74 - iStack_78,0x800090c,*(arg2_00 + 0x2c));
        iStack_78 = iStack_78 + iVar4;
        sym.mon_text_read_data(&iStack_78,arg2_00);
        puVar10[0xf] = 0;
        puVar10[0x10] = iStack_78;
        kmem_cache_free(*puVar10,arg2_00);
        uVar9 = puVar10[0x10];
    }
    arg2_00 = arg3;
    if (uVar9 <= arg3) {
        arg2_00 = uVar9;
    }
    if (arg2_00 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80046f0);
        (*pcVar1)();
    }
    auVar12 = __check_object_size(puVar10[0x11] + puVar10[0xf],arg2_00,1);
    iVar11 = sym._copy_to_user(arg2,auVar12,arg2_00);
    if (iVar11 == 0) {
        puVar10[0xf] = puVar10[0xf] + arg2_00;
        puVar10[0x10] = puVar10[0x10] - arg2_00;
    }
    else {
        arg2_00 = 0xfffffffffffffff2;
    }
code_r0x080046a0:
    mutex_unlock(puVar10 + 0x12);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return arg2_00;
    }
    auVar12 = __stack_chk_fail();
    puVar10 = auVar12._8_8_;
    *extraout_x18 = sym.mon_bin_add;
    if (puVar10 == NULL) {
        uVar6 = 0;
        uVar5 = 0;
    }
    else {
        uVar6 = *(puVar10 + 2);
        if (0x7f < uVar6) {
            return 0;
        }
        uVar5 = *puVar10;
    }
    uVar9 = device_create(CONCAT44(*0x8000004,_segment.ehdr),uVar5,_segment.ehdr & 0xfff00000 | uVar6,0,"usbmon%d")
    ;
    if (0xfffffffffffff000 < uVar9) {
        return 0;
    }
    *(auVar12._0_8_ + 0x40) = uVar9;
    return 1;
}


// ===== sym.mon_bin_add @ 0x080046f8 (size 140) =====

ulong sym.mon_bin_add(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        uVar3 = *(arg2 + 0x10);
        if (0x7f < uVar3) {
            return 0;
        }
        uVar2 = *arg2;
    }
    uVar1 = device_create(CONCAT44(*0x8000004,_segment.ehdr),uVar2,_segment.ehdr & 0xfff00000 | uVar3,0,"usbmon%d")
    ;
    if (0xfffffffffffff000 < uVar1) {
        return 0;
    }
    *(arg1 + 0x40) = uVar1;
    return 1;
}


// ===== sym.mon_bin_del @ 0x08004784 (size 52) =====

void sym.mon_bin_del(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(_segment.ehdr,*(*(arg1 + 0x40) + 0x300));
    return;
}


// ===== sym.mon_bin_exit @ 0x080047b8 (size 72) =====

void sym.mon_bin_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_del(obj.mon_bin_cdev);
    unregister_chrdev_region(_segment.ehdr,0x80);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    return;
}


// ===== sym.mon_bin_read @ 0x08004800 (size 592) =====

uint64_t sym.mon_bin_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    
    *in_x18 = unaff_x30;
    arg2_00 = *(arg1 + 0xd8);
    iVar1 = arg2_00 + 0x38;
    mutex_lock(iVar1);
    iVar3 = sym.mon_bin_wait_event(arg1,arg2_00);
    if (iVar3 < 0) {
        mutex_unlock(iVar1);
        return iVar3;
    }
    uVar6 = *(arg2_00 + 0x10);
    uVar9 = *(arg2_00 + 0x14);
    iVar2 = *(*(arg2_00 + 0x18) + (uVar6 >> 8 & 0xfffff0) + 8) + (uVar6 & 0xfff);
    if (uVar9 < 0x30) {
        uVar7 = 0x30 - uVar9;
        arg2_01 = arg3;
        if (uVar7 <= arg3) {
            arg2_01 = uVar7;
        }
        if (arg2_01 != 0) {
            auVar10 = __check_object_size(iVar2 + uVar9,arg2_01,1);
            iVar4 = sym._copy_to_user_1(arg2,auVar10,arg2_01);
            if (iVar4 != 0) {
code_r0x080048b8:
                mutex_unlock(iVar1);
                return 0xfffffffffffffff2;
            }
            uVar9 = *(arg2_00 + 0x14);
        }
        uVar9 = uVar9 + arg2_01;
        *(arg2_00 + 0x14) = uVar9;
        if (uVar9 < 0x30) goto code_r0x080049c4;
        arg2 = arg2 + arg2_01;
        arg3 = arg3 - arg2_01;
        uVar6 = *(arg2_00 + 0x10);
    }
    else {
        arg2_01 = 0;
    }
    uVar7 = *(iVar2 + 0x24) - (uVar9 - 0x30);
    if (uVar7 <= arg3) {
        arg3 = uVar7;
    }
    if (arg3 != 0) {
        uVar9 = uVar6 + uVar9 + 0x10;
        uVar7 = arg3 & 0xffffffff;
        uVar6 = 0;
        if (*(arg2_00 + 4) <= uVar9) {
            uVar6 = *(arg2_00 + 4);
        }
        uVar9 = uVar9 - uVar6;
        do {
            uVar6 = 0x1000 - (uVar9 & 0xfff);
            uVar8 = uVar7;
            if (uVar8 <= uVar6) {
                uVar6 = uVar8;
            }
            uVar7 = uVar6;
            auVar10 = __check_object_size(*(*(arg2_00 + 0x18) + (uVar9 >> 8 & 0xfffff0) + 8) + (uVar9 & 0xfff),uVar7,1
                                         );
            iVar4 = sym._copy_to_user_1(arg2,auVar10,uVar7);
            if (iVar4 != 0) goto code_r0x080048b8;
            uVar9 = uVar6 + uVar9;
            arg2 = arg2 + uVar7;
            if (*(arg2_00 + 4) <= uVar9) {
                uVar9 = 0;
            }
            uVar7 = uVar8 - uVar6;
        } while (uVar8 - uVar6 != 0);
        uVar9 = *(arg2_00 + 0x14);
    }
    uVar9 = uVar9 + arg3;
    arg2_01 = arg3 + arg2_01;
    *(arg2_00 + 0x14) = uVar9;
code_r0x080049c4:
    if (*(iVar2 + 0x24) + 0x30U <= uVar9) {
        uVar5 = _raw_spin_lock_irqsave(arg2_00);
        uVar6 = *(iVar2 + 0x24) + 0x7fU & 0xffffffc0;
        uVar9 = *(arg2_00 + 0x10) + uVar6;
        *(arg2_00 + 8) = *(arg2_00 + 8) - uVar6;
        *(arg2_00 + 0x10) = uVar9;
        if (*(arg2_00 + 4) <= uVar9) {
            *(arg2_00 + 0x10) = uVar9 - *(arg2_00 + 4);
        }
        _raw_spin_unlock_irqrestore(arg2_00,uVar5);
        *(arg2_00 + 0x14) = 0;
    }
    mutex_unlock(iVar1);
    return arg2_01;
}


// ===== sym.mon_bin_poll @ 0x08004a50 (size 184) =====

uint sym.mon_bin_poll(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xd8);
    if (((((*(arg1 + 0x44) & 1) != 0) && (arg2 != 0)) && (iVar3 + 0x20 != 0)) && (pcVar4 = *arg2, pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000710);
        (*pcVar4)(arg1,iVar3 + 0x20,arg2);
    }
    uVar1 = _raw_spin_lock_irqsave(iVar3);
    uVar2 = 0;
    if (*(iVar3 + 8) != 0) {
        uVar2 = 0x41;
    }
    _raw_spin_unlock_irqrestore(iVar3,uVar1);
    return uVar2;
}


// ===== sym.mon_bin_ioctl @ 0x08004b08 (size 1720) =====

void sym.mon_bin_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int *piVar12;
    ulong *extraout_x8;
    ulong *puVar13;
    uint *extraout_x9;
    uint *puVar14;
    int *piVar15;
    uint32_t uVar16;
    uint *puVar17;
    ulong *in_x18;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int *unaff_x23;
    ulong unaff_x30;
    int64_t iStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uVar20 = arg2 & 0xffffffff;
    iVar18 = *(arg1 + 0xd8);
    iVar6 = -0x19;
    iVar5 = arg2;
    if (iVar5 < 0x9201) {
        if (iVar5 == -0x7ff76dfd) {
            uVar8 = _raw_spin_lock_irqsave(iVar18);
            unaff_x23 = *(iVar18 + 0xa8);
            *(iVar18 + 0xa8) = 0;
            _raw_spin_unlock_irqrestore(iVar18,uVar8);
            mutex_lock(iVar18 + 0x38);
            uVar8 = _raw_spin_lock_irqsave(iVar18);
            uVar10 = *(iVar18 + 8);
            _raw_spin_unlock_irqrestore(iVar18,uVar8);
            if (uVar10 == 0) {
                uVar20 = 0;
            }
            else {
                uVar11 = 0;
                uVar20 = 0;
                uVar16 = *(iVar18 + 0x10);
                do {
                    uVar20 = uVar20 + 1;
                    uVar2 = *(*(*(iVar18 + 0x18) + (uVar16 >> 8 & 0xfffff0) + 8) + (uVar16 & 0xfff) + 0x24) + 0x7fU &
                            0xffffffc0;
                    uVar16 = uVar2 + uVar16;
                    uVar11 = uVar2 + uVar11;
                    uVar2 = 0;
                    if (*(iVar18 + 4) <= uVar16) {
                        uVar2 = *(iVar18 + 4);
                    }
                    uVar16 = uVar16 - uVar2;
                } while (uVar11 < uVar10);
            }
            mutex_unlock(iVar18 + 0x38);
            puVar14 = arg3 + 4;
            puVar13 = sp_el0;
            uVar7 = puVar14 * 0x100 >> 8;
            if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (puVar17 = puVar14, (*puVar13 >> 0x1a & 1) != 0)) {
                puVar17 = puVar14 & uVar7;
            }
            bVar4 = 0xfffffffffffffffb < puVar17;
            puVar17 = puVar17 + 1;
            uVar3 = 0;
            if (!bVar4 || puVar17 == NULL) {
                uVar3 = 0x7fffffffff;
            }
            if (bVar4) {
                puVar17 = 0xffffffffffffffff;
            }
            if ((CARRY8(puVar17,~uVar3) || CARRY8(puVar17 + ~uVar3,bVar4)) && puVar17 != uVar3 + !bVar4)
            goto code_r0x0800504c;
            if ((puVar14 & uVar7 & 0xffffff8000000000) == 0) goto code_r0x0800519c;
            puVar14 = NULL;
            goto code_r0x0800519c;
        }
        if (iVar5 == -0x3fef6df9) {
            iStack_70 = 0;
            uStack_68 = 0;
            iVar6 = sym._copy_from_user(&stack0xffffffffffffff90,arg3,0x10);
            if (iVar6 != 0) goto code_r0x0800504c;
            if (uStack_68._4_4_ != 0) {
                uVar7 = sym.mon_bin_flush(iVar18,uStack_68._4_4_);
                uVar20 = uVar7 & 0xffffffff;
                iVar5 = uVar7;
                if (iVar5 < 0) {
                    iVar6 = iVar5;
                    goto code_r0x08005054;
                }
                piVar12 = arg3 + 0xc;
                puVar13 = sp_el0;
                uVar7 = piVar12 * 0x100 >> 8;
                if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar15 = piVar12, (*puVar13 >> 0x1a & 1) != 0)) {
                    piVar15 = piVar12 & uVar7;
                }
                bVar4 = 0xfffffffffffffffb < piVar15;
                piVar15 = piVar15 + 1;
                uVar3 = 0;
                if (!bVar4 || piVar15 == NULL) {
                    uVar3 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar15 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar15,~uVar3) || CARRY8(piVar15 + ~uVar3,bVar4)) && piVar15 != uVar3 + !bVar4)
                goto code_r0x0800504c;
                if ((piVar12 & uVar7 & 0xffffff8000000000) != 0) {
                    piVar12 = NULL;
                }
                sym.uaccess_ttbr0_enable();
                *piVar12 = iVar5;
                sym.uaccess_ttbr0_disable();
                unaff_x23 = piVar12;
            }
            iVar5 = sym.mon_bin_fetch(arg1,iVar18,iStack_70,uStack_68 & 0xffffffff);
            if (-1 < iVar5) {
                piVar12 = arg3 + 8;
                puVar13 = sp_el0;
                uVar7 = piVar12 * 0x100 >> 8;
                if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar15 = piVar12, (*puVar13 >> 0x1a & 1) != 0)) {
                    piVar15 = piVar12 & uVar7;
                }
                bVar4 = 0xfffffffffffffffb < piVar15;
                piVar15 = piVar15 + 1;
                uVar3 = 0;
                if (!bVar4 || piVar15 == NULL) {
                    uVar3 = 0x7fffffffff;
                }
                if (bVar4) {
                    piVar15 = 0xffffffffffffffff;
                }
                if ((CARRY8(piVar15,~uVar3) || CARRY8(piVar15 + ~uVar3,bVar4)) && piVar15 != uVar3 + !bVar4)
                goto code_r0x0800504c;
                if ((piVar12 & uVar7 & 0xffffff8000000000) != 0) {
                    piVar12 = NULL;
                }
                sym.uaccess_ttbr0_enable();
                *piVar12 = iVar5;
                sym.uaccess_ttbr0_disable();
                goto code_r0x080050f0;
            }
            iVar6 = iVar5;
        }
        goto code_r0x08005054;
    }
    if (7 < iVar5 - 0x9201U) {
        if ((iVar5 != 0x40189206) && (iVar5 != 0x4018920a)) goto code_r0x08005054;
        uStack_68 = 0;
        uStack_60 = 0;
        iStack_70 = 0;
        iVar6 = sym._copy_from_user(&stack0xffffffffffffff90,arg3,0x18);
        if (iVar6 != 0) goto code_r0x0800504c;
        if (0x10000000 < uStack_60) goto code_r0x08004db8;
        uVar10 = 0x30;
        if (iVar5 != 0x40189206) {
            uVar10 = 0x40;
        }
        uVar7 = sym.mon_bin_get_event(arg1,iVar18,iStack_70,uVar10);
code_r0x08004d90:
        unaff_x23 = uVar7 & 0xffffffff;
        iVar6 = uVar7;
        goto code_r0x08005054;
    }
    //switch table (8 cases) at 0x8000d88
    switch(*((iVar5 - 0x9201U) * 4 + 0x8000d88) + 0x8004b70) {
    case 0x8004b84:
        uVar8 = _raw_spin_lock_irqsave(iVar18);
        if (*(iVar18 + 8) == 0) {
            unaff_x23 = NULL;
        }
        else {
            unaff_x23 = *(*(*(iVar18 + 0x18) + (*(iVar18 + 0x10) >> 8 & 0xfffff0) + 8) + (*(iVar18 + 0x10) & 0xfff) +
                         0x24);
        }
        _raw_spin_unlock_irqrestore(iVar18,uVar8);
        iVar6 = unaff_x23;
        goto code_r0x08005054;
    case 0x8004d84:
        uVar7 = sym.mon_bin_flush(iVar18,arg3 & 0xffffffff);
        goto code_r0x08004d90;
    case 0x8004da0:
        if (arg3 - 0x12c001U < 0xffffffffffed5fff) {
code_r0x08004db8:
            iVar6 = -0x16;
            goto code_r0x08005054;
        }
        uVar10 = arg3 + 0xfff;
        uVar20 = uVar10;
        iVar6 = (uVar10 >> 0xc) * 0x10;
        piVar12 = __kmalloc(iVar6,0xdc0);
        if (piVar12 == NULL) {
code_r0x0800511c:
            unaff_x23 = 0xfffffff4;
            iVar6 = -0xc;
            goto code_r0x08005054;
        }
        iVar19 = 0;
        uVar20 = 0;
        do {
            iVar9 = get_zeroed_page(0xcc0);
            if (iVar9 == 0) {
                if (iVar19 != 0) {
                    do {
                        free_pages(*(piVar12 + iVar19 + -8),0);
                        iVar19 = iVar19 + -0x10;
                    } while (iVar19 != 0);
                }
                kfree(piVar12);
                arg3 = piVar12;
                goto code_r0x0800511c;
            }
            piVar1 = piVar12 + iVar19;
            iVar19 = iVar19 + 0x10;
            *piVar1 = (((iVar9 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
            piVar1[1] = iVar9;
        } while (iVar6 - iVar19 != 0);
        mutex_lock(iVar18 + 0x38);
        uVar20 = _raw_spin_lock_irqsave(iVar18);
        if (*(iVar18 + 0x68) == 0) {
            iVar6 = *(iVar18 + 0x18);
            if (0xfff < *(iVar18 + 4)) {
                uVar7 = *(iVar18 + 4) >> 0xc;
                puVar13 = iVar6 + 8;
                do {
                    free_pages(*puVar13,0);
                    uVar7 = uVar7 - 1;
                    puVar13 = puVar13 + 2;
                } while (uVar7 != 0);
                iVar6 = *(iVar18 + 0x18);
            }
            kfree(iVar6);
            unaff_x23 = NULL;
            *(iVar18 + 0x10) = 0;
            *(iVar18 + 0x18) = piVar12;
            *(iVar18 + 4) = uVar10 & 0xfffff000;
            *(iVar18 + 0xa8) = 0;
            *(iVar18 + 8) = 0;
        }
        else {
            iVar19 = 0;
            do {
                free_pages(*(piVar12 + iVar19 + 8),0);
                iVar19 = iVar19 + 0x10;
            } while (iVar6 - iVar19 != 0);
            kfree(piVar12);
            unaff_x23 = 0xfffffff0;
        }
        _raw_spin_unlock_irqrestore(iVar18,uVar20);
        break;
    case 0x8004dc4:
        piVar12 = iVar18 + 0x38;
        mutex_lock(piVar12);
        unaff_x23 = *(iVar18 + 4);
        break;
    case 0x8005054:
        goto code_r0x08005054;
    }
    mutex_unlock(iVar18 + 0x38);
    iVar6 = unaff_x23;
    arg3 = piVar12;
code_r0x08005054:
    while (iVar18 = sp_el0, *(iVar18 + 0x5e0) != iStack_58) {
        __stack_chk_fail(iVar6);
        puVar13 = extraout_x8;
        puVar14 = extraout_x9;
code_r0x0800519c:
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar13[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar13[1];
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        *puVar14 = unaff_x23;
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr0_el1 = (uVar3 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        uVar7 = (arg3 << 8) >> 8;
        if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (piVar12 = arg3, (*puVar13 >> 0x1a & 1) != 0)) {
            piVar12 = arg3 & uVar7;
        }
        bVar4 = 0xfffffffffffffffb < piVar12;
        piVar12 = piVar12 + 1;
        uVar3 = 0;
        if (!bVar4 || piVar12 == NULL) {
            uVar3 = 0x7fffffffff;
        }
        if (bVar4) {
            piVar12 = 0xffffffffffffffff;
        }
        if ((CARRY8(piVar12,~uVar3) || CARRY8(piVar12 + ~uVar3,bVar4)) && piVar12 != uVar3 + !bVar4) {
code_r0x0800504c:
            iVar6 = -0xe;
        }
        else {
            if ((arg3 & uVar7 & 0xffffff8000000000) != 0) {
                arg3 = 0;
            }
            sym.uaccess_ttbr0_enable();
            piVar12 = NULL;
            *arg3 = uVar20;
            sym.uaccess_ttbr0_disable();
code_r0x080050f0:
            unaff_x23 = NULL;
            iVar6 = 0;
            arg3 = piVar12;
        }
    }
    return;
}


// ===== sym.mon_bin_compat_ioctl @ 0x080051fc (size 644) =====

//WARNING: Removing unreachable block (ram,0x08005384)
//WARNING: Removing unreachable block (ram,0x08005310)
//WARNING: Removing unreachable block (ram,0x080053a0)

int64_t sym.mon_bin_compat_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint64_t uStack_58;
    uint32_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar4 = arg2;
    iStack_48 = *(iVar9 + 0x5e0);
    iVar9 = -0x19;
    iVar8 = *(arg1 + 0xd8);
    if (iVar4 < 0x9201) {
        if (iVar4 != -0x7ff76dfd) {
            if (iVar4 != -0x3ff36df9) goto code_r0x08005434;
            uVar7 = arg3 & 0xffffffff;
            uStack_50 = 0;
            uStack_58 = 0;
            iVar9 = sym._copy_from_user(&uStack_58,uVar7,0xc);
            if (iVar9 == 0) {
                if (uStack_50 != 0) {
                    iVar4 = sym.mon_bin_flush(iVar8,uStack_50);
                    if (iVar4 < 0) {
                        iVar9 = iVar4;
                        goto code_r0x08005434;
                    }
                    uVar6 = sp_el0;
                    bVar3 = 0xfffffffffffffffb < uVar7 + 8;
                    uVar1 = uVar7 + 0xc;
                    uVar2 = 0;
                    if (!bVar3 || uVar1 == 0) {
                        uVar2 = 0x7fffffffff;
                    }
                    if (bVar3) {
                        uVar1 = 0xffffffffffffffff;
                    }
                    if ((CARRY8(uVar1,~uVar2) || CARRY8(uVar1 + ~uVar2,bVar3)) && uVar1 != uVar2 + !bVar3)
                    goto code_r0x080053e4;
                    sym.uaccess_ttbr0_enable();
                    *(uVar7 + 8) = iVar4;
                    sym.uaccess_ttbr0_disable();
                }
                iVar4 = sym.mon_bin_fetch(arg1,iVar8,uStack_58 & 0xffffffff,uStack_58 >> 0x20);
                if (iVar4 < 0) {
                    iVar9 = iVar4;
                }
                else {
                    uVar6 = sp_el0;
                    iVar9 = -0xe;
                    bVar3 = 0xfffffffffffffffb < uVar7 + 4;
                    uVar1 = uVar7 + 8;
                    uVar2 = 0;
                    if (!bVar3 || uVar1 == 0) {
                        uVar2 = 0x7fffffffff;
                    }
                    if (bVar3) {
                        uVar1 = 0xffffffffffffffff;
                    }
                    if (!CARRY8(uVar1,~uVar2) && !CARRY8(uVar1 + ~uVar2,bVar3) || uVar1 == uVar2 + !bVar3) {
                        sym.uaccess_ttbr0_enable();
                        *(uVar7 + 4) = iVar4;
                        sym.uaccess_ttbr0_disable();
                        iVar9 = 0;
                    }
                }
            }
            else {
code_r0x080053e4:
                iVar9 = -0xe;
            }
            goto code_r0x08005434;
        }
        arg3 = arg3 & 0xffffffff;
        uVar7 = 0x80089203;
    }
    else {
        if ((7 < iVar4 - 0x9201U) || ((1 << (iVar4 - 0x9201U & 0x1f) & 0x99U) == 0)) {
            if ((iVar4 != 0x400c920a) && (iVar4 != 0x400c9206)) goto code_r0x08005434;
            uStack_50 = 0;
            uStack_58 = 0;
            iVar9 = sym._copy_from_user(&uStack_58,arg3,0xc);
            if (iVar9 == 0) {
                uVar5 = 0x30;
                if (iVar4 != 0x400c9206) {
                    uVar5 = 0x40;
                }
                uVar5 = sym.mon_bin_get_event(arg1,iVar8,uStack_58 & 0xffffffff,uVar5);
                iVar9 = uVar5 & uVar5 >> 0x1f;
                goto code_r0x08005434;
            }
            goto code_r0x080053e4;
        }
        uVar7 = arg2 & 0xffffffff;
    }
    iVar9 = sym.mon_bin_ioctl(arg1,uVar7,arg3);
code_r0x08005434:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_48) {
        auVar10 = __stack_chk_fail();
        iVar9 = auVar10._8_8_;
        *extraout_x18 = sym.mon_bin_mmap;
        *(iVar9 + 0x90) = reloc.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
        if ((*(iVar9 + 0x50) >> 1 & 1) == 0) {
            *(iVar9 + 0x50) = *(iVar9 + 0x50) & 0xffffffffffffffdf | 0x4040000;
            iVar8 = *(auVar10._0_8_ + 0xd8);
            *(iVar9 + 0xa8) = iVar8;
            uVar6 = _raw_spin_lock_irqsave(iVar8);
            *(iVar8 + 0x68) = *(iVar8 + 0x68) + 1;
            _raw_spin_unlock_irqrestore(iVar8,uVar6);
            iVar9 = 0;
        }
        else {
            iVar9 = 0xffffffff;
        }
        return iVar9;
    }
    return iVar9;
}


// ===== sym.mon_bin_mmap @ 0x08005480 (size 128) =====

ulong sym.mon_bin_mmap(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg2 + 0x90) = reloc.mon_bin_vma_open.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
    if ((*(arg2 + 0x50) >> 1 & 1) == 0) {
        *(arg2 + 0x50) = *(arg2 + 0x50) & 0xffffffffffffffdf | 0x4040000;
        iVar2 = *(arg1 + 0xd8);
        *(arg2 + 0xa8) = iVar2;
        uVar1 = _raw_spin_lock_irqsave(iVar2);
        *(iVar2 + 0x68) = *(iVar2 + 0x68) + 1;
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}


// ===== sym.mon_bin_open @ 0x08005500 (size 488) =====

uint sym.mon_bin_open(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ulong uVar3;
    code *arg1_00;
    uint *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.mon_lock);
    arg1_00 = sym.mon_bus_lookup(*(arg1 + 0x4c) & 0xfffff);
    if (arg1_00 == NULL) {
        uVar7 = 0xffffffed;
    }
    else if ((arg1_00 == obj.mon_bus0) || (*(arg1_00 + 0x18) != 0)) {
        puVar4 = kmem_cache_alloc_trace(_default_wake_function,0xdc0,0xb0);
        if (puVar4 != NULL) {
            *puVar4 = 0;
            __init_waitqueue_head(puVar4 + 8,"&rp->b_wait",obj.mon_bin_open.__key);
            __mutex_init(puVar4 + 0xe,"&rp->fetch_lock",obj.mon_bin_open.__key);
            uVar3 = _default_wake_function;
            puVar4[1] = 0x4b000;
            iVar5 = kmem_cache_alloc_trace(uVar3,0xdc0,0x4b0);
            *(puVar4 + 6) = iVar5;
            if (iVar5 != 0) {
                uVar2 = puVar4[1];
                if (0xfff < uVar2) {
                    uVar8 = 0;
                    do {
                        iVar6 = get_zeroed_page(0xcc0);
                        if (iVar6 == 0) {
                            if (uVar8 != 0) {
                                do {
                                    free_pages(*(iVar5 + -8 + uVar8),0);
                                    uVar8 = uVar8 - 0x10;
                                } while (uVar8 != 0);
                            }
                            kfree(*(puVar4 + 6));
                            goto code_r0x08005698;
                        }
                        piVar1 = iVar5 + uVar8;
                        uVar8 = uVar8 + 0x10;
                        *piVar1 = (((iVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                        piVar1[1] = iVar6;
                    } while ((uVar2 >> 8 & 0xfffff0) != uVar8);
                }
                *(puVar4 + 0x20) = arg1_00;
                *(puVar4 + 0x22) = puVar4;
                *(puVar4 + 0x24) = sym.__typeid__ZTSFvPvP3urbE_global_addr;
                *(puVar4 + 0x26) = sym.mon_bin_error.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
                *(puVar4 + 0x28) = sym.mon_bin_complete.0ef93d717f033c08657adc434aff0b7f.cfi_jt;
                sym.mon_reader_add(arg1_00,puVar4 + 0x1c);
                uVar7 = 0;
                *(arg2 + 0xd8) = puVar4;
                goto code_r0x080056a4;
            }
code_r0x08005698:
            kfree(puVar4);
        }
        uVar7 = 0xfffffff4;
    }
    else {
        _printk(0x80008b3);
        uVar7 = 0xffffffed;
    }
code_r0x080056a4:
    mutex_unlock(obj.mon_lock);
    return uVar7;
}


// ===== sym.mon_bin_release @ 0x080056e8 (size 184) =====

ulong sym.mon_bin_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xd8);
    iVar2 = *(iVar1 + 0x80);
    mutex_lock(obj.mon_lock);
    if (*(iVar2 + 0x48) < 1) {
        _printk(0x8000854);
    }
    else {
        sym.mon_reader_del(iVar2,iVar1 + 0x70);
        iVar2 = *(iVar1 + 0x18);
        if (0xfff < *(iVar1 + 4)) {
            uVar3 = *(iVar1 + 4) >> 0xc;
            puVar4 = iVar2 + 8;
            do {
                free_pages(*puVar4,0);
                uVar3 = uVar3 - 1;
                puVar4 = puVar4 + 2;
            } while (uVar3 != 0);
            iVar2 = *(iVar1 + 0x18);
        }
        kfree(iVar2);
        kfree(iVar1);
    }
    mutex_unlock(obj.mon_lock);
    return 0;
}


// ===== sym.mon_bin_wait_event @ 0x080057a0 (size 288) =====

uint64_t sym.mon_bin_wait_event(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    ulong unaff_x30;
    ulong uStack_70;
    uint64_t *puStack_68;
    code *pcStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puVar2 = sp_el0;
    uStack_70 = 0;
    pcStack_60 = sym.default_wake_function.cfi_jt;
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_68 = puVar2;
    add_wait_queue(arg2 + 0x20,&uStack_70);
    *(puVar2 + 5) = 1;
    DataMemoryBarrier(2,3);
    do {
        uVar5 = _raw_spin_lock_irqsave(arg2);
        if (*(arg2 + 8) != 0) {
            _raw_spin_unlock_irqrestore(arg2,uVar5);
            *(puVar2 + 5) = 0;
            uVar7 = 0;
            DataMemoryBarrier(2,3);
code_r0x08005860:
            remove_wait_queue(arg2 + 0x20,&uStack_70);
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_48) {
                return uVar7;
            }
            uVar6 = __stack_chk_fail();
            if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar4 = daif;
                    daif = uVar4 | 0xc0;
                }
                iVar1 = sp_el0;
                uVar4 = ttbr1_el1;
                ttbr1_el1 = *(iVar1 + 8) & 0xffff000000000000 | uVar4 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = *(iVar1 + 8);
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
            return uVar6;
        }
        _raw_spin_unlock_irqrestore(arg2,uVar5);
        if ((*(arg1 + 0x41) >> 3 & 1) != 0) {
            *(puVar2 + 5) = 0;
            uVar7 = 0xfffffff5;
            DataMemoryBarrier(2,3);
            goto code_r0x08005860;
        }
        schedule();
        if (((*puVar2 >> 6 & 1) != 0) || ((*puVar2 & 1) != 0)) {
            uVar7 = 0xfffffffc;
            goto code_r0x08005860;
        }
        *(puVar2 + 5) = 1;
        DataMemoryBarrier(2,3);
    } while( true );
}


// ===== sym.uaccess_ttbr0_enable @ 0x080058c0 (size 112) =====

void sym.uaccess_ttbr0_enable(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
        uVar2 = daif;
        if ((uVar2 & 0x80) == 0) {
            uVar3 = daif;
            daif = uVar3 | 0xc0;
        }
        iVar1 = sp_el0;
        uVar3 = ttbr1_el1;
        ttbr1_el1 = *(iVar1 + 8) & 0xffff000000000000 | uVar3 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        ttbr0_el1 = *(iVar1 + 8);
        InstructionSynchronizationBarrier();
        daif = uVar2;
    }
    return;
}


// ===== sym.uaccess_ttbr0_disable @ 0x08005950 (size 100) =====

void sym.uaccess_ttbr0_disable(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
        uVar1 = daif;
        if ((uVar1 & 0x80) == 0) {
            uVar2 = daif;
            daif = uVar2 | 0xc0;
        }
        uVar2 = ttbr1_el1;
        ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
        InstructionSynchronizationBarrier();
        ttbr1_el1 = uVar2 & 0xffffffffffff;
        InstructionSynchronizationBarrier();
        daif = uVar1;
    }
    return;
}


// ===== sym.mon_bin_flush @ 0x080059d0 (size 220) =====

int sym.mon_bin_flush(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    int iVar5;
    int iVar6;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x38);
    uVar3 = _raw_spin_lock_irqsave(arg1);
    iVar5 = 0;
    iVar7 = arg2;
    iVar6 = iVar5;
    if (iVar7 != 0) {
        iVar4 = *(arg1 + 8);
        do {
            iVar6 = iVar5;
            if (iVar4 == 0) break;
            uVar2 = *(arg1 + 0x10);
            uVar1 = *(*(*(arg1 + 0x18) + (uVar2 >> 8 & 0xfffff0) + 8) + (uVar2 & 0xfff) + 0x24) + 0x7fU & 0xffffffc0;
            iVar4 = iVar4 - uVar1;
            uVar1 = uVar1 + uVar2;
            *(arg1 + 8) = iVar4;
            *(arg1 + 0x10) = uVar1;
            if (*(arg1 + 4) <= uVar1) {
                *(arg1 + 0x10) = uVar1 - *(arg1 + 4);
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar7;
        } while (iVar7 != iVar5);
    }
    _raw_spin_unlock_irqrestore(arg1,uVar3);
    *(arg1 + 0x14) = 0;
    mutex_unlock(arg1 + 0x38);
    return iVar6;
}


// ===== sym.mon_bin_get_event @ 0x08005aac (size 452) =====

int sym.mon_bin_get_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t in_x4;
    uint32_t in_w5;
    ulong *in_x18;
    uint64_t arg2_00;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    mutex_lock(arg2 + 0x38);
    iVar3 = sym.mon_bin_wait_event(arg1,arg2);
    if (-1 < iVar3) {
        iVar1 = *(*(arg2 + 0x18) + (*(arg2 + 0x10) >> 8 & 0xfffff0) + 8) + (*(arg2 + 0x10) & 0xfff);
        auVar8 = __check_object_size(iVar1,arg4 & 0xffffffffU,1);
        iVar4 = sym._copy_to_user_1(arg3,auVar8,arg4 & 0xffffffffU);
        if (iVar4 == 0) {
            uVar6 = *(iVar1 + 0x24);
            if (in_w5 <= *(iVar1 + 0x24)) {
                uVar6 = in_w5;
            }
            if (uVar6 != 0) {
                uVar7 = *(arg2 + 0x10) + 0x40;
                if (*(arg2 + 4) <= uVar7) {
                    uVar7 = 0;
                }
                do {
                    uVar2 = 0x1000 - (uVar7 & 0xfff);
                    if (uVar6 <= uVar2) {
                        uVar2 = uVar6;
                    }
                    arg2_00 = uVar2;
                    auVar8 = __check_object_size(*(*(arg2 + 0x18) + (uVar7 >> 8 & 0xfffff0) + 8) + (uVar7 & 0xfff),
                                                 arg2_00,1);
                    iVar4 = sym._copy_to_user_1(in_x4,auVar8,arg2_00);
                    if (iVar4 != 0) goto code_r0x08005b4c;
                    uVar7 = uVar2 + uVar7;
                    in_x4 = in_x4 + arg2_00;
                    if (*(arg2 + 4) <= uVar7) {
                        uVar7 = 0;
                    }
                    uVar6 = uVar6 - uVar2;
                } while (uVar6 != 0);
            }
            uVar5 = _raw_spin_lock_irqsave(arg2);
            uVar7 = *(iVar1 + 0x24) + 0x7fU & 0xffffffc0;
            uVar6 = *(arg2 + 0x10) + uVar7;
            *(arg2 + 8) = *(arg2 + 8) - uVar7;
            *(arg2 + 0x10) = uVar6;
            if (*(arg2 + 4) <= uVar6) {
                *(arg2 + 0x10) = uVar6 - *(arg2 + 4);
            }
            _raw_spin_unlock_irqrestore(arg2,uVar5);
            iVar3 = 0;
            *(arg2 + 0x14) = 0;
        }
        else {
code_r0x08005b4c:
            iVar3 = -0xe;
        }
    }
    mutex_unlock(arg2 + 0x38);
    return iVar3;
}


// ===== sym.mon_bin_fetch @ 0x08005c70 (size 580) =====

uint64_t sym.mon_bin_fetch(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint32_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint32_t *puVar14;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg2 + 0x38);
    uVar6 = sym.mon_bin_wait_event(arg1,arg2);
    if (uVar6 < 0) {
        uVar15 = uVar6;
    }
    else {
        uVar7 = _raw_spin_lock_irqsave(arg2);
        uVar6 = *(arg2 + 8);
        _raw_spin_unlock_irqrestore(arg2,uVar7);
        uVar15 = 0;
        if ((arg4 != 0) && (uVar6 != 0)) {
            uVar15 = 0;
            uVar10 = 0;
            uVar12 = *(arg2 + 0x10);
            iVar11 = arg3 << 8;
            puVar3 = sp_el0;
            puVar14 = arg3;
            do {
                puVar9 = arg3 & iVar11 >> 8;
                iVar13 = *(*(arg2 + 0x18) + (uVar12 >> 8 & 0xfffff0) + 8);
                if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (puVar8 = puVar14, (*puVar3 >> 0x1a & 1) != 0)) {
                    puVar8 = puVar9;
                }
                bVar5 = 0xfffffffffffffffb < puVar8;
                puVar8 = puVar8 + 1;
                uVar2 = 0;
                if (!bVar5 || puVar8 == NULL) {
                    uVar2 = 0x7fffffffff;
                }
                if (bVar5) {
                    puVar8 = 0xffffffffffffffff;
                }
                if ((CARRY8(puVar8,~uVar2) || CARRY8(puVar8 + ~uVar2,bVar5)) && puVar8 != uVar2 + !bVar5) {
                    uVar15 = 0xfffffff2;
                    break;
                }
                puVar8 = puVar14;
                if ((puVar9 & 0xffffff8000000000) != 0) {
                    puVar8 = NULL;
                }
                if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
                    uVar2 = daif;
                    if ((uVar2 & 0x80) == 0) {
                        uVar4 = daif;
                        daif = uVar4 | 0xc0;
                    }
                    uVar4 = ttbr1_el1;
                    ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar4 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    ttbr0_el1 = puVar3[1];
                    InstructionSynchronizationBarrier();
                    daif = uVar2;
                }
                *puVar8 = uVar12;
                if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
                    uVar2 = daif;
                    if ((uVar2 & 0x80) == 0) {
                        uVar4 = daif;
                        daif = uVar4 | 0xc0;
                    }
                    uVar4 = ttbr1_el1;
                    ttbr0_el1 = (uVar4 & 0xffffffffffff) - 0x1000;
                    InstructionSynchronizationBarrier();
                    ttbr1_el1 = uVar4 & 0xffffffffffff;
                    InstructionSynchronizationBarrier();
                    daif = uVar2;
                }
                uVar15 = uVar15 + 1;
                uVar1 = *(iVar13 + 0x24 + (uVar12 & 0xfff)) + 0x7fU & 0xffffffc0;
                uVar12 = uVar1 + uVar12;
                uVar10 = uVar1 + uVar10;
                uVar1 = 0;
                if (*(arg2 + 4) <= uVar12) {
                    uVar1 = *(arg2 + 4);
                }
                if (uVar6 <= uVar10) break;
                uVar12 = uVar12 - uVar1;
                arg3 = arg3 + 4;
                iVar11 = iVar11 + 0x400;
                puVar14 = puVar14 + 1;
            } while (uVar15 < (arg4 & 0xffffffffU));
        }
    }
    mutex_unlock(arg2 + 0x38);
    return uVar15 & 0xffffffff;
}


// ===== sym._copy_from_user @ 0x08005ed8 (size 376) =====

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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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
        if ((__raw_spin_lock_irqsave >> 0x18 & 1) == 0) {
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


// ===== sym.mon_bin_vma_open @ 0x0800608c (size 76) =====

void sym.mon_bin_vma_open(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    *(iVar2 + 0x68) = *(iVar2 + 0x68) + 1;
    _raw_spin_unlock_irqrestore(iVar2,uVar1);
    return;
}


// ===== sym.mon_bin_vma_close @ 0x080060d8 (size 76) =====

void sym.mon_bin_vma_close(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    *(iVar2 + 0x68) = *(iVar2 + 0x68) + -1;
    _raw_spin_unlock_irqrestore(iVar2,uVar1);
    return;
}


// ===== sym.mon_bin_vma_fault @ 0x08006124 (size 152) =====

uint sym.mon_bin_vma_fault(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint uVar5;
    int64_t iVar6;
    
    if (*(arg1 + 0x10) * 0x1000 < *(*(*arg1 + 0xa8) + 4)) {
        iVar6 = *(*(*(*arg1 + 0xa8) + 0x18) + (*(arg1 + 0x10) & 0xfffffffffffff) * 0x10);
        iVar2 = iVar6;
        if ((*(iVar6 + 8) & 1) != 0) {
            iVar2 = *(iVar6 + 8) - 1;
        }
        piVar1 = iVar2 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar5 = 0;
        *(arg1 + 0x58) = iVar6;
    }
    else {
        uVar5 = 2;
    }
    return uVar5;
}


// ===== sym.mon_bin_submit @ 0x080061bc (size 44) =====

void sym.mon_bin_submit(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_bin_event(arg1,arg2,0x53,0xffffff8d);
    return;
}


// ===== sym.mon_bin_error @ 0x080061e8 (size 416) =====

void sym.mon_bin_error(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint8_t uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uVar9 = arg3;
    iStack_48 = 0;
    iStack_40 = 0;
    ktime_get_real_ts64(&iStack_48);
    uVar10 = _raw_spin_lock_irqsave(arg1);
    uVar4 = *(arg1 + 4);
    uVar1 = *(arg1 + 8) + 0x40;
    if (uVar1 <= uVar4) {
        uVar5 = *(arg1 + 0xc);
        uVar3 = 0;
        if (uVar4 <= uVar5 + 0x40) {
            uVar3 = uVar4;
        }
        *(arg1 + 8) = uVar1;
        *(arg1 + 0xc) = (uVar5 + 0x40) - uVar3;
        if (uVar5 != 0xffffffff) {
            piVar2 = *(*(arg1 + 0x18) + (uVar5 >> 8 & 0xfffff0) + 8) + (uVar5 & 0xfff);
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            *piVar2 = 0;
            piVar2[1] = 0;
            *(piVar2 + 1) = 0x45;
            *(piVar2 + 9) = obj.xfer_to_pipe[*(*(arg2 + 0x48) + 3) & 3];
            uVar7 = *(arg2 + 0x5c) >> 2 & 0x80;
            *(piVar2 + 10) = uVar7;
            *(piVar2 + 10) = uVar7 | *(*(arg2 + 0x48) + 2) & 0xf;
            *(piVar2 + 0xb) = **(arg2 + 0x40);
            uVar6 = *(*(*(arg2 + 0x40) + 0x50) + 0x10);
            *piVar2 = arg2;
            *(piVar2 + 0xc) = uVar6;
            piVar2[2] = iStack_48;
            *(piVar2 + 3) =
                 (SUB168(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                 (SUB164(SEXT816(iStack_40) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f);
            *(piVar2 + 0x1c) = uVar9;
            *(piVar2 + 0xe) = 0x452d;
            _raw_spin_unlock_irqrestore(arg1,uVar10);
            arg3 = 1;
            __wake_up(arg1 + 0x20,3,1,0);
            goto code_r0x08006354;
        }
    }
    _raw_spin_unlock_irqrestore(arg1,uVar10);
code_r0x08006354:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mon_bin_complete;
    sym.mon_bin_event(auVar11._0_8_,auVar11._8_8_,0x43,arg3 & 0xffffffff);
    return;
}


// ===== sym.mon_bin_complete @ 0x08006388 (size 44) =====

void sym.mon_bin_complete(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mon_bin_event(arg1,arg2,0x43,arg3 & 0xffffffff);
    return;
}


// ===== sym.mon_bin_event @ 0x080063b4 (size 1420) =====

//WARNING: Removing unreachable block (ram,0x080065ec)

uint64_t sym.mon_bin_event(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    ulong *puVar2;
    int64_t *piVar3;
    uint *puVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uVar8;
    uint32_t uVar9;
    bool bVar10;
    int iVar11;
    ulong uVar12;
    uint32_t uVar13;
    int iVar14;
    uint64_t uVar15;
    int iVar16;
    uint64_t uVar17;
    uchar *in_x4;
    uchar uVar18;
    uint32_t uVar19;
    uchar uVar20;
    uint *puVar21;
    uint32_t uVar22;
    uint8_t uVar23;
    int64_t iVar24;
    int *piVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar31;
    uint64_t *puVar32;
    int64_t iVar33;
    ulong unaff_x30;
    uchar auVar34 [16];
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar24 = sp_el0;
    iStack_58 = *(iVar24 + 0x5e0);
    uVar13 = arg3;
    iVar33 = *(arg2 + 0x48);
    iStack_68 = 0;
    iStack_60 = 0;
    uVar15 = arg3;
    uVar17 = arg4;
    ktime_get_real_ts64(&iStack_68);
    uVar12 = _raw_spin_lock_irqsave(arg1);
    iVar24 = 0x80;
    if ((uVar13 & 0xff) != 0x53) {
        iVar24 = 0x84;
    }
    uVar9 = *(arg2 + iVar24);
    uVar31 = uVar9;
    if ((*(iVar33 + 3) & 3) == 1) {
        uVar22 = *(arg2 + 0x9c);
        if (0x7f < uVar22) {
            uVar22 = 0x80;
        }
        uVar19 = uVar22 & (uVar22 >> 0x1f ^ 0xffffffffU);
        if (((uVar13 & 0xff) == 0x43) && ((*(arg2 + 0x5d) >> 1 & 1) != 0)) {
            if (uVar22 < 1) {
                uVar19 = 0;
                uVar31 = 0;
            }
            else {
                uVar31 = 0;
                if (uVar19 - 1 == 0) {
                    iVar24 = arg2 + 0xd8;
                    uVar22 = uVar19;
                }
                else {
                    uVar28 = (uVar19 - 1) + 1;
                    uVar26 = 0;
                    uVar29 = uVar28 & 0x1fffffffe;
                    piVar25 = arg2 + 0xf0;
                    uVar22 = uVar19 - uVar29;
                    iVar24 = arg2 + uVar29 * 0x10 + 0xd8;
                    uVar30 = uVar29;
                    do {
                        iVar16 = uVar17;
                        iVar14 = uVar15;
                        iVar11 = piVar25[-4];
                        if (iVar11 != 0) {
                            iVar14 = piVar25[-6];
                        }
                        iVar6 = *piVar25;
                        if (iVar6 != 0) {
                            iVar16 = piVar25[-2];
                        }
                        piVar25 = piVar25 + 8;
                        uVar5 = iVar14 + iVar11;
                        if (iVar14 + iVar11 <= uVar31) {
                            uVar5 = uVar31;
                        }
                        uVar15 = uVar5;
                        uVar27 = iVar16 + iVar6;
                        if (iVar16 + iVar6 <= uVar26) {
                            uVar27 = uVar26;
                        }
                        uVar17 = uVar27;
                        if (iVar11 != 0) {
                            uVar31 = uVar5;
                        }
                        if (iVar6 != 0) {
                            uVar26 = uVar27;
                        }
                        uVar30 = uVar30 - 2;
                    } while (uVar30 != 0);
                    if (uVar31 <= uVar26) {
                        uVar31 = uVar26;
                    }
                    if (uVar28 == uVar29) goto code_r0x080064e8;
                }
                piVar25 = iVar24 + 8;
                do {
                    uVar22 = uVar22 - 1;
                    uVar26 = uVar31;
                    if ((*piVar25 != 0) && (uVar26 = piVar25[-2] + *piVar25, uVar26 <= uVar31)) {
                        uVar26 = uVar31;
                    }
                    uVar31 = uVar26;
                    piVar25 = piVar25 + 4;
                } while (uVar22 != 0);
            }
        }
    }
    else {
        uVar19 = 0;
    }
code_r0x080064e8:
    uVar22 = *(arg1 + 4);
    if (*(arg2 + 0x80) <= uVar31) {
        uVar31 = *(arg2 + 0x80);
    }
    iVar11 = uVar19 * 0x10;
    if (uVar22 / 5 <= uVar31) {
        uVar31 = uVar22 / 5;
    }
    if ((*(arg2 + 0x5d) >> 1 & 1) == 0) {
        uVar23 = 0;
        bVar10 = (uVar13 & 0xff) != 0x43;
        uVar26 = 0;
        if (bVar10) {
            uVar26 = uVar31;
        }
        uVar18 = 0x3e;
        if (bVar10) {
            uVar18 = 0;
        }
    }
    else {
        bVar10 = (uVar13 & 0xff) != 0x53;
        uVar26 = 0;
        if (bVar10) {
            uVar26 = uVar31;
        }
        uVar18 = 0x3c;
        if (bVar10) {
            uVar18 = 0;
        }
        uVar23 = 0x80;
    }
    uVar17 = uVar26;
    iVar14 = uVar26 + iVar11;
    uVar5 = iVar14 + 0x7fU & 0xffffffc0;
    uVar31 = *(arg1 + 8) + uVar5;
    if (*(arg1 + 0x68) == 0) {
        if (uVar31 <= uVar22) {
            uVar27 = *(arg1 + 0xc);
            uVar28 = uVar27;
            uVar5 = uVar27 + uVar5;
            *(arg1 + 8) = uVar31;
            *(arg1 + 0xc) = uVar5;
            if (uVar5 < uVar22) {
code_r0x08006638:
                uVar27 = uVar28;
            }
            else {
                *(arg1 + 0xc) = uVar5 - uVar22;
            }
            if (uVar27 != 0xffffffff) goto code_r0x08006640;
        }
    }
    else if (uVar31 <= uVar22) {
        uVar7 = *(arg1 + 0xc);
        uVar28 = uVar7;
        uVar27 = uVar7 + uVar5;
        if (uVar22 < uVar27) {
            iVar16 = uVar22 - uVar7;
            if (uVar22 < iVar16 + uVar31) goto code_r0x08006614;
            puVar2 = *(*(arg1 + 0x18) + (uVar7 >> 8 & 0xfffff0) + 8) + (uVar28 & 0xfff);
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(puVar2 + 1) = 0x40;
            *(puVar2 + 0x24) = iVar16 + -0x40;
            uVar28 = 0;
            *(arg1 + 8) = iVar16 + uVar5 + *(arg1 + 8);
            *(arg1 + 0xc) = uVar5;
        }
        else {
            if (uVar27 == uVar22) {
                *(arg1 + 8) = uVar31;
                *(arg1 + 0xc) = 0;
                goto code_r0x08006638;
            }
            *(arg1 + 8) = uVar31;
            *(arg1 + 0xc) = uVar27;
            if (uVar7 == 0xffffffff) goto code_r0x08006614;
        }
code_r0x08006640:
        piVar3 = *(*(arg1 + 0x18) + (uVar28 >> 8 & 0xfffff0) + 8) + (uVar28 & 0xfff);
        uVar22 = *(arg1 + 4);
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
        *(piVar3 + 1) = arg3;
        *(piVar3 + 9) = obj.xfer_to_pipe[*(iVar33 + 3) & 3];
        *(piVar3 + 10) = *(iVar33 + 2) & 0xf | uVar23;
        *(piVar3 + 0xb) = **(arg2 + 0x40);
        uVar8 = *(*(*(arg2 + 0x40) + 0x50) + 0x10);
        *piVar3 = arg2;
        *(piVar3 + 0xc) = uVar8;
        piVar3[2] = iStack_68;
        *(piVar3 + 4) = uVar9;
        *(piVar3 + 0x24) = iVar14;
        *(piVar3 + 3) =
             (SUB168(SEXT816(iStack_60) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
             (SUB164(SEXT816(iStack_60) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f);
        *(piVar3 + 0x1c) = arg4;
        uVar31 = uVar28 + 0x40;
        if (uVar22 <= uVar31) {
            uVar31 = 0;
        }
        uVar15 = uVar31;
        *(piVar3 + 7) = *(arg2 + 0x5c);
        uVar23 = *(iVar33 + 3) & 3;
        if (uVar23 == 1) {
            *(piVar3 + 6) = *(arg2 + 0xa0);
            *(piVar3 + 0x34) = *(arg2 + 0x98);
            *(piVar3 + 5) = *(arg2 + 0xa4);
            *(piVar3 + 0x2c) = *(arg2 + 0x9c);
        }
        else if (uVar23 == 3) {
            *(piVar3 + 6) = *(arg2 + 0xa0);
        }
        uVar20 = 0x2d;
        if (((uVar13 & 0xff) == 0x53) && ((*(iVar33 + 3) & 3) == 0)) {
            if (*(arg2 + 0x88) != NULL) {
                uVar20 = 0;
                piVar3[5] = **(arg2 + 0x88);
                goto code_r0x0800677c;
            }
            *(piVar3 + 0xe) = 0x5a;
        }
        else {
code_r0x0800677c:
            *(piVar3 + 0xe) = uVar20;
        }
        if (uVar19 != 0) {
            puVar21 = arg2 + 0xe4;
            *(piVar3 + 0x3c) = uVar19;
            do {
                uVar9 = uVar15 + 0x10;
                uVar19 = uVar19 - 1;
                puVar4 = *(*(arg1 + 0x18) + (uVar15 >> 8 & 0xfffff0) + 8) + (uVar15 & 0xfff);
                *puVar4 = *puVar21;
                iVar24 = -8;
                if ((uVar13 & 0xff) != 0x53) {
                    iVar24 = -4;
                }
                puVar4[1] = puVar21[-3];
                puVar1 = puVar21 + iVar24;
                puVar21 = puVar21 + 4;
                puVar4[2] = *puVar1;
                puVar4[3] = 0;
                uVar22 = *(arg1 + 4);
                if (uVar22 <= uVar9) {
                    uVar9 = 0;
                }
                uVar15 = uVar9;
            } while (uVar19 != 0);
            uVar31 = uVar31 + iVar11;
            uVar13 = 0;
            if (uVar22 <= uVar31) {
                uVar13 = uVar22;
            }
            uVar15 = uVar31 - uVar13;
        }
        in_x4 = piVar3 + 0xf;
        if (uVar26 == 0) {
            *in_x4 = uVar18;
        }
        else {
            iVar11 = sym.mon_bin_get_data(arg1,uVar15,arg2,uVar17);
            if (iVar11 != 0) {
                iVar14 = *(piVar3 + 0x24);
                iVar11 = iVar14 - iVar11;
                *(piVar3 + 0x24) = iVar11;
                uVar31 = (iVar14 + 0x3fU & 0xffffffc0) - (iVar11 + 0x3fU & 0xffffffc0);
                uVar13 = *(arg1 + 0xc);
                *(arg1 + 8) = *(arg1 + 8) - uVar31;
                if (uVar13 < uVar31) {
                    uVar13 = *(arg1 + 4) + uVar13;
                }
                *(arg1 + 0xc) = uVar13 - uVar31;
            }
        }
        _raw_spin_unlock_irqrestore(arg1,uVar12);
        uVar15 = 1;
        uVar17 = 0;
        uVar28 = __wake_up(arg1 + 0x20,3);
        goto code_r0x0800688c;
    }
code_r0x08006614:
    *(arg1 + 0xa8) = *(arg1 + 0xa8) + 1;
    uVar28 = _raw_spin_unlock_irqrestore(arg1,uVar12);
code_r0x0800688c:
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_58) {
        return uVar28;
    }
    auVar34 = __stack_chk_fail();
    iVar24 = auVar34._0_8_;
    *extraout_x18 = sym.mon_bin_get_data;
    *in_x4 = 0;
    uVar17 = uVar17 & 0xffffffff;
    uVar28 = auVar34._8_8_ & 0xffffffff;
    if (*(uVar15 + 0x7c) == 0) {
        iVar33 = *(uVar15 + 0x60);
        if (iVar33 != 0) {
            do {
                uVar13 = 0x1000 - (uVar28 & 0xfff);
                uVar31 = uVar17;
                if (uVar31 <= uVar13) {
                    uVar13 = uVar31;
                }
                memcpy(*(*(iVar24 + 0x18) + (uVar28 >> 8 & 0xfffff0) + 8) + (uVar28 & 0xfff),iVar33,uVar13);
                uVar9 = uVar13 + uVar28;
                iVar33 = iVar33 + uVar13;
                if (*(iVar24 + 4) <= uVar9) {
                    uVar9 = 0;
                }
                uVar28 = uVar9;
                uVar17 = uVar31 - uVar13;
            } while (uVar31 - uVar13 != 0);
            return 0;
        }
        uVar18 = 0x5a;
    }
    else {
        if (((*(uVar15 + 0x5e) >> 6 & 1) == 0) && (0 < *(uVar15 + 0x7c))) {
            iVar11 = 0;
            puVar32 = *(uVar15 + 0x70);
            while( true ) {
                uVar31 = uVar17;
                uVar13 = *(puVar32 + 0xc);
                if (uVar31 <= *(puVar32 + 0xc)) {
                    uVar13 = uVar31;
                }
                if (uVar13 != 0) {
                    iVar33 = ((*puVar32 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + puVar32[1];
                    uVar9 = uVar13;
                    do {
                        uVar19 = 0x1000 - (uVar28 & 0xfff);
                        if (uVar9 <= uVar19) {
                            uVar19 = uVar9;
                        }
                        memcpy(*(*(iVar24 + 0x18) + (uVar28 >> 8 & 0xfffff0) + 8) + (uVar28 & 0xfff),iVar33,uVar19);
                        uVar22 = uVar19 + uVar28;
                        iVar33 = iVar33 + uVar19;
                        if (*(iVar24 + 4) <= uVar22) {
                            uVar22 = 0;
                        }
                        uVar28 = uVar22;
                        uVar9 = uVar9 - uVar19;
                    } while (uVar9 != 0);
                }
                uVar17 = uVar31 - uVar13;
                iVar11 = iVar11 + 1;
                puVar32 = sg_next(puVar32);
                if (*(uVar15 + 0x7c) <= iVar11) break;
                if (uVar31 - uVar13 == 0) {
                    return 0;
                }
            }
            return uVar17;
        }
        uVar18 = 0x44;
    }
    *in_x4 = uVar18;
    return uVar17;
}


// ===== sym.mon_bin_get_data @ 0x08006940 (size 468) =====

uint64_t sym.mon_bin_get_data(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uchar *in_x4;
    uchar uVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x4 = 0;
    uVar7 = arg4 & 0xffffffff;
    uVar8 = arg2 & 0xffffffff;
    if (*(arg3 + 0x7c) == 0) {
        iVar9 = *(arg3 + 0x60);
        if (iVar9 != 0) {
            do {
                uVar3 = 0x1000 - (uVar8 & 0xfff);
                uVar6 = uVar7;
                if (uVar6 <= uVar3) {
                    uVar3 = uVar6;
                }
                memcpy(*(*(arg1 + 0x18) + (uVar8 >> 8 & 0xfffff0) + 8) + (uVar8 & 0xfff),iVar9,uVar3);
                uVar4 = uVar3 + uVar8;
                iVar9 = iVar9 + uVar3;
                if (*(arg1 + 4) <= uVar4) {
                    uVar4 = 0;
                }
                uVar8 = uVar4;
                uVar7 = uVar6 - uVar3;
            } while (uVar6 - uVar3 != 0);
            return 0;
        }
        uVar5 = 0x5a;
    }
    else {
        if (((*(arg3 + 0x5e) >> 6 & 1) == 0) && (0 < *(arg3 + 0x7c))) {
            iVar11 = 0;
            puVar10 = *(arg3 + 0x70);
            while( true ) {
                uVar6 = uVar7;
                uVar3 = *(puVar10 + 0xc);
                if (uVar6 <= *(puVar10 + 0xc)) {
                    uVar3 = uVar6;
                }
                if (uVar3 != 0) {
                    iVar9 = ((*puVar10 & 0x3ffffffffffc0) << 6 | 0xff00000000000000) + puVar10[1];
                    uVar4 = uVar3;
                    do {
                        uVar2 = 0x1000 - (uVar8 & 0xfff);
                        if (uVar4 <= uVar2) {
                            uVar2 = uVar4;
                        }
                        memcpy(*(*(arg1 + 0x18) + (uVar8 >> 8 & 0xfffff0) + 8) + (uVar8 & 0xfff),iVar9,uVar2);
                        uVar1 = uVar2 + uVar8;
                        iVar9 = iVar9 + uVar2;
                        if (*(arg1 + 4) <= uVar1) {
                            uVar1 = 0;
                        }
                        uVar8 = uVar1;
                        uVar4 = uVar4 - uVar2;
                    } while (uVar4 != 0);
                }
                uVar7 = uVar6 - uVar3;
                iVar11 = iVar11 + 1;
                puVar10 = sg_next(puVar10);
                if (*(arg3 + 0x7c) <= iVar11) break;
                if (uVar6 - uVar3 == 0) {
                    return 0;
                }
            }
            return uVar7;
        }
        uVar5 = 0x44;
    }
    *in_x4 = uVar5;
    return uVar7;
}


// ===== sym.init_module @ 0x08006b24 (size 348) =====

int sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    _segment.ehdr = debugfs_create_dir("usbmon",___cfi_slowpath_diag);
    iVar1 = sym.mon_bin_init();
    if (iVar1 == 0) {
        *0x80006a8 = 1;
        *0x8000658 = 0;
        *0x8000698 = 0x8000698;
        *0x80006a0 = 0x8000698;
        *0x8000668 = sym.mon_text_add(0x8000648,0);
        *0x800066c = sym.mon_bin_add(0x8000648,0);
        iVar1 = usb_mon_register(reloc.mon_submit.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
        if (iVar1 == 0) {
            mutex_lock(usb_bus_idr_lock);
            iStack_2c = 0;
            iVar2 = idr_get_next(usb_bus_idr,&iStack_2c);
            while (iVar2 != 0) {
                sym.mon_bus_init(iVar2);
                iStack_2c = iStack_2c + 1;
                iVar2 = idr_get_next(usb_bus_idr,&iStack_2c);
            }
            usb_register_notify(reloc.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
            mutex_unlock(usb_bus_idr_lock);
            iVar1 = 0;
            goto code_r0x08006c34;
        }
        _printk(0x8000750);
        sym.mon_bin_exit();
        iVar1 = -0x13;
    }
    debugfs_remove(_segment.ehdr);
code_r0x08006c34:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mon_text_init;
    _segment.ehdr = debugfs_create_dir("usbmon",___cfi_slowpath_diag);
    return 0;
}


// ===== sym.mon_text_init @ 0x08006c80 (size 68) =====

ulong sym.mon_text_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_create_dir("usbmon",___cfi_slowpath_diag);
    return 0;
}


// ===== sym.mon_bin_init @ 0x08006cc4 (size 232) =====

uint64_t sym.mon_bin_init(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = __class_create(obj.__this_module,"usbmon",obj.mon_bin_init.__key);
    _segment.ehdr = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = alloc_chrdev_region(obj.mon_bin_dev0,0,0x80,"usbmon");
        if (-1 < uVar1) {
            cdev_init(obj.mon_bin_cdev,obj.mon_fops_binary);
            *0x8000730 = obj.__this_module;
            uVar1 = cdev_add(obj.mon_bin_cdev,_segment.ehdr & 0xffffffff,0x80);
            if (-1 < uVar1) {
                uVar2 = 0;
                goto code_r0x08006d90;
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,0x80);
        }
        uVar2 = uVar1;
        class_destroy(_segment.ehdr);
    }
code_r0x08006d90:
    return uVar2 & 0xffffffff;
}


// ===== sym.cleanup_module @ 0x08006dac (size 548) =====

void sym.cleanup_module(void)

{
    uint32_t *puVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int64_t *arg1;
    uint64_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_unregister_notify(reloc.mon_notify.53d0a62b403671d6ff32fb23f4fbc007.cfi_jt);
    usb_mon_deregister();
    mutex_lock(obj.mon_lock);
    if (_obj.mon_buses != obj.mon_buses) {
        do {
            arg1 = CONCAT44(*0x8000004,_segment.ehdr);
            uVar7 = __list_del_entry_valid(arg1);
            if ((uVar7 & 1) != 0) {
                iVar9 = *arg1;
                piVar2 = arg1[1];
                *(iVar9 + 8) = piVar2;
                *piVar2 = iVar9;
            }
            *arg1 = -0x2152ffffffffff00;
            arg1[1] = -0x2152fffffffffede;
            if (arg1[4] != 0) {
                sym.mon_text_del(arg1);
            }
            if (*(arg1 + 0x24) != 0) {
                sym.mon_bin_del(arg1);
            }
            if (arg1[9] != 0) {
                _printk(0x800094e,arg1[9],*(arg1[3] + 0x10));
                puVar1 = arg1 + 0xc;
                Hint_Prefetch(puVar1,2,0,1);
                do {
                    uVar4 = *puVar1;
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                        *puVar1 = uVar4 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                if (uVar4 == 0) {
                    uVar8 = 2;
                }
                else {
                    if (-1 < (uVar4 + 1 | uVar4)) goto code_r0x08006e5c;
                    uVar8 = 1;
                }
                refcount_warn_saturate(puVar1,uVar8);
            }
code_r0x08006e5c:
            iVar9 = arg1[3];
            if (*(iVar9 + 0x98) != 0) {
                *(iVar9 + 0x98) = 0;
                DataSynchronizationBarrier(3,3,0);
            }
            *(iVar9 + 0x90) = 0;
            piVar2 = arg1 + 0xc;
            arg1[3] = 0;
            DataSynchronizationBarrier(3,3,0);
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar3 = *piVar2;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                    *piVar2 = iVar3 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                kfree(arg1);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(piVar2,3);
            }
        } while (_obj.mon_buses != obj.mon_buses);
    }
    if (_segment.ehdr != 0) {
        sym.mon_text_del(0x8000648);
    }
    if (_segment.ehdr != 0) {
        sym.mon_bin_del(0x8000648);
    }
    mutex_unlock(obj.mon_lock);
    debugfs_remove(CONCAT44(*0x8000004,_segment.ehdr));
    sym.mon_bin_exit();
    return;
}

