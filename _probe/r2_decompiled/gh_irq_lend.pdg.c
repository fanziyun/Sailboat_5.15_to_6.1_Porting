// decompiled from gh_irq_lend by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 452) =====

//WARNING: Switch with 1 destination removed at 0x08001e84

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x4159841e0efbfc89) {
            if (arg1 == -0x6a7cbb42022fec62) {
                pcVar2 = sym.gh_irq_accept.cfi_jt;
            }
            else {
                if (arg1 != -0x533d1ee0de111ed5) goto code_r0x08001e44;
                pcVar2 = sym.gh_irq_wait_for_lend.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x4159841e0efbfc89) {
                if ((pcVar1 + -0x8001208 >> 3 | pcVar1 << 0x3d) < 5) {
                    return;
                }
                goto code_r0x08001e44;
            }
            if (arg1 != -0x6f2d49d359de0d0) goto code_r0x08001e44;
            pcVar2 = sym.gh_irq_lend.cfi_jt;
        }
    }
    else if (arg1 < 0x39caf523556d3d78) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1c3e31724287866d) goto code_r0x08001e44;
            pcVar2 = sym.gh_irq_lend_v2.cfi_jt;
        }
    }
    else if (arg1 == 0x39caf523556d3d78) {
        pcVar2 = sym.gh_irq_wait_for_lend_v2.cfi_jt;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            if ((pcVar1 + -0x8001230 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001e44;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001e44;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001e44:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e98);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    gh_rm_unregister_notifier(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_register_notifier(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    if (iVar1 == 0) {
        gh_rm_register_notifier(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    }
    return;
}


// ===== sym.gh_irq_wait_for_lend_v2.cfi_jt @ 0x080011e0 (size 8) =====

uint sym.gh_irq_wait_for_lend_v2.cfi_jt(uint32_t param_1,uint param_2,int64_t param_3,ulong param_4)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    int *piVar4;
    ulong *in_x18;
    uint uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = 0xffffffea;
    if ((param_1 < 5) && (param_3 != 0)) {
        uVar6 = param_1;
        uVar3 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
        piVar4 = uVar6 * 0x28 + 0x8000100;
        if (*piVar4 == 0) {
            if (200 < (uVar6 * 0x28 | 4)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8001590);
                (*pcVar2)();
            }
            uVar5 = 0;
            iVar1 = uVar6 * 0x28;
            *piVar4 = 2;
            *(iVar1 + 0x80000e4) = param_2;
            *(iVar1 + 0x80000e8) = param_3;
            *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar1) = param_4;
        }
        else {
            uVar5 = 0xffffffea;
        }
        _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar3);
    }
    return uVar5;
}


// ===== sym.gh_irq_wait_for_lend.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.gh_irq_wait_for_lend.cfi_jt(void)

{
    return 0;
}


// ===== sym.gh_irq_lend.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.gh_irq_lend.cfi_jt(uint32_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((param_1 < 5) && (param_4 != 0)) {
        uVar1 = 0;
        *(param_1 * 0x28 + 0x80000f0) = param_4;
    }
    return uVar1;
}


// ===== sym.gh_irq_accept.cfi_jt @ 0x080011f8 (size 8) =====

uint64_t sym.gh_irq_accept.cfi_jt(uint32_t param_1,uint32_t param_2,uint param_3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar6;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_4c = 0;
    if (param_1 < 5) {
        piVar6 = param_1 * 0x28 + 0x8000100;
        if (*piVar6 == 5) {
            if (param_2 == 0xffffffff) {
                iStack_4c = -1;
            }
            else {
                iVar3 = gh_rm_irq_to_virq(param_2,&iStack_4c);
                if (iVar3 != 0) goto code_r0x08001618;
            }
            uVar5 = gh_rm_vm_irq_accept(*(param_1 * 0x28 + 0x8000104),iStack_4c);
            iStack_4c = uVar5;
            if (-1 < iStack_4c) {
                uVar2 = param_2;
                if (param_2 == 0xffffffff) {
                    uVar5 = gh_rm_virq_to_irq(uVar5,param_3);
                    uVar2 = uVar5 & 0xffffffff;
                }
                uVar5 = uVar2;
                *piVar6 = 4;
            }
            goto code_r0x0800161c;
        }
    }
code_r0x08001618:
    uVar5 = 0xffffffea;
code_r0x0800161c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        uVar4 = __stack_chk_fail(uVar5);
        *extraout_x18 = sym.gh_irq_accept_notify;
        if ((uVar4 < 5) && (*(uVar4 * 0x28 + 0x8000100) == 4)) {
            uVar5 = gh_rm_vm_irq_accept_notify
                              (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28),
                               *(uVar4 * 0x28 + 0x8000104));
        }
        else {
            uVar5 = 0xffffffea;
        }
        return uVar5;
    }
    return uVar5;
}


// ===== sym.gh_irq_lend_v2.cfi_jt @ 0x08001200 (size 8) =====

int sym.gh_irq_lend_v2.cfi_jt(uint32_t param_1,uint param_2,uint param_3,int64_t param_4,ulong param_5)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint64_t uVar6;
    int *piVar7;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = -0x16;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_6c = 0;
    iVar5 = param_4;
    if ((param_1 < 5) && (param_4 != 0)) {
        uVar6 = param_1;
        iVar2 = gh_rm_irq_to_virq(param_3,&uStack_6c);
        if (iVar2 == 0) {
            uVar4 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
            piVar7 = uVar6 * 0x28 + 0x8000100;
            if (*piVar7 == 0) {
                iVar2 = gh_rm_get_vmid(param_2,reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt +
                                                uVar6 * 0x28);
                if (iVar2 == 0) {
                    iVar5 = uVar6 * 0x28;
                    *piVar7 = 1;
                    *(iVar5 + 0x80000e8) = param_4;
                    *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar5) =
                         param_5;
                    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar4);
                    iVar5 = iVar5 + 0x8000104;
                    iVar2 = gh_rm_vm_irq_lend(*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt +
                                               uVar6 * 0x28),uStack_6c,uVar6);
                }
                else {
                    *piVar7 = 0;
                    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar4);
                }
            }
            else {
                _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar4);
                iVar2 = -0x16;
            }
        }
        else {
            iVar2 = -0x16;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar2;
    }
    uVar3 = __stack_chk_fail();
    iVar2 = -0x16;
    if ((uVar3 < 5) && (iVar5 != 0)) {
        iVar2 = 0;
        *(uVar3 * 0x28 + 0x80000f0) = iVar5;
    }
    return iVar2;
}


// ===== sym.gh_irq_release.cfi_jt @ 0x08001208 (size 8) =====

ulong sym.gh_irq_release.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 < 5) && (piVar2 = param_1 * 0x28 + 0x8000100, *piVar2 == 4)) {
        uVar1 = gh_rm_vm_irq_release(*(param_1 * 0x28 + 0x8000104));
        if (uVar1 == 0) {
            *piVar2 = 2;
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_accept_notify.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.gh_irq_accept_notify.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 < 5) && (*(param_1 * 0x28 + 0x8000100) == 4)) {
        uVar1 = gh_rm_vm_irq_accept_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + param_1 * 0x28),
                           *(param_1 * 0x28 + 0x8000104));
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_release_notify.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.gh_irq_release_notify.cfi_jt(uint32_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 < 5) && (iVar1 = *(param_1 * 0x28 + 0x8000100), iVar1 == 4 || iVar1 == 2)) {
        uVar2 = gh_rm_vm_irq_release_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + param_1 * 0x28),
                           *(param_1 * 0x28 + 0x8000104));
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.gh_irq_reclaim.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.gh_irq_reclaim.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 < 5) && (puVar2 = param_1 * 0x28 + 0x8000100, (*puVar2 | 2) == 3)) {
        uVar1 = gh_rm_vm_irq_reclaim(*(param_1 * 0x28 + 0x8000104));
        if (uVar1 == 0) {
            *puVar2 = 0;
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_lend_notify.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.gh_irq_lend_notify.cfi_jt(uint32_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 < 5) && (*(param_1 * 0x28 + 0x8000100) != 0)) {
        uVar1 = gh_rm_vm_irq_lend_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + param_1 * 0x28),
                           *(param_1 * 0x28 + 0x8000104));
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt @ 0x08001230 (size 8) =====

int sym.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt
              (ulong param_1,int64_t param_2,uint16_t *param_3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    uint64_t extraout_x1;
    uint16_t *puVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iVar2 = 0;
    iStack_38 = *(iVar1 + 0x5e0);
    iStack_3c = 0;
    puVar6 = param_3;
    if (param_2 == 0x56100011) {
        iVar2 = gh_rm_get_vm_name(*param_3,&iStack_3c);
        if (iVar2 == 0) {
            uVar4 = _raw_spin_lock_irqsave("");
            if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(param_3 + 4) == 0)) {
                uVar8 = 0;
                puVar7 = 0x8000100;
                if ((*0x80000e4 != 5) && (*0x80000e4 != iStack_3c)) goto code_r0x080018fc;
code_r0x08001a20:
                iVar1 = uVar8 * 0x28;
                *(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar1) = *param_3;
                iVar2 = *(param_3 + 2);
                *puVar7 = 5;
                *(iVar1 + 0x8000104) = iVar2;
                _raw_spin_unlock_irqrestore("",uVar4);
                pcVar9 = *(iVar1 + 0x80000e8);
                __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000140);
                puVar6 = uVar8;
                (*pcVar9)(*(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar1),
                          0x56100011);
                iVar2 = 1;
            }
            else {
code_r0x080018fc:
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(param_3 + 4) == 1)) {
                    uVar8 = 1;
                    puVar7 = 0x8000128;
                    if ((*0x800010c == 5) || (*0x800010c == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(param_3 + 4) == 2)) {
                    uVar8 = 2;
                    puVar7 = 0x8000150;
                    if ((*0x8000134 == 5) || (*0x8000134 == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(param_3 + 4) == 3)) {
                    uVar8 = 3;
                    puVar7 = 0x8000178;
                    if ((*0x800015c == 5) || (*0x800015c == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(param_3 + 4) == 4)) {
                    uVar8 = 4;
                    puVar7 = 0x80001a0;
                    if ((*0x8000184 == 5) || (*0x8000184 == iStack_3c)) goto code_r0x08001a20;
                }
                _raw_spin_unlock_irqrestore("",uVar4);
                iVar2 = 0;
            }
        }
        else {
            iVar3 = ___ratelimit(obj.gh_irq_lent_nb_handler._rs,"");
            if (iVar3 != 0) {
                puVar6 = *param_3;
                _printk(0x800022e,"");
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.gh_irq_released_accepted_nb_handler;
    if (extraout_x1 >> 1 != 0x2b080009) {
        return 0;
    }
    uVar4 = _raw_spin_lock_irqsave("");
    if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
        if (extraout_x1 != 0x56100013) {
            if ((extraout_x1 != 0x56100012) || (puVar7 = 0x8000100, *puVar6 != *0x8000104)) goto code_r0x08001b88;
            uVar8 = 0;
code_r0x08001db4:
            *puVar7 = 3;
            _raw_spin_unlock_irqrestore("",uVar4);
            pcVar9 = *(uVar8 * 0x28 + 0x80000e8);
            __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000160);
            uVar5 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar8 * 0x28);
            uVar4 = 0x56100012;
            goto code_r0x08001e08;
        }
        puVar7 = 0x8000100;
        if (*puVar6 != *0x8000104) goto code_r0x08001b88;
        uVar8 = 0;
    }
    else {
code_r0x08001b88:
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000128;
                if (*puVar6 == *0x800012c) {
                    uVar8 = 1;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000128, *puVar6 == *0x800012c)) {
                uVar8 = 1;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000150;
                if (*puVar6 == *0x8000154) {
                    uVar8 = 2;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000150, *puVar6 == *0x8000154)) {
                uVar8 = 2;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000178;
                if (*puVar6 == *0x800017c) {
                    uVar8 = 3;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000178, *puVar6 == *0x800017c)) {
                uVar8 = 3;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr != 4) && (_segment.ehdr != 1)) {
code_r0x08001e18:
            _raw_spin_unlock_irqrestore("",uVar4);
            return 0;
        }
        if (extraout_x1 == 0x56100012) {
            puVar7 = 0x80001a0;
            if (*puVar6 != *0x80001a4) goto code_r0x08001e18;
            uVar8 = 4;
            goto code_r0x08001db4;
        }
        if ((extraout_x1 != 0x56100013) || (puVar7 = 0x80001a0, *puVar6 != *0x80001a4)) goto code_r0x08001e18;
        uVar8 = 4;
    }
code_r0x08001d44:
    *puVar7 = 4;
    _raw_spin_unlock_irqrestore("",uVar4);
    pcVar9 = *(uVar8 * 0x28 + 0x80000e8);
    __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000180);
    uVar5 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar8 * 0x28);
    uVar4 = 0x56100013;
code_r0x08001e08:
    (*pcVar9)(uVar5,uVar4,uVar8);
    return 1;
}


// ===== sym.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt
                (ulong param_1,uint64_t param_2,int *param_3)

{
    ulong uVar1;
    ulong uVar2;
    uint *puVar3;
    ulong *in_x18;
    uint32_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 >> 1 != 0x2b080009) {
        return 0;
    }
    uVar1 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
    if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
        if (param_2 != 0x56100013) {
            if ((param_2 != 0x56100012) || (puVar3 = 0x8000100, *param_3 != *0x8000104)) goto code_r0x08001b88;
            uVar4 = 0;
code_r0x08001db4:
            *puVar3 = 3;
            _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
            pcVar5 = *(uVar4 * 0x28 + 0x80000e8);
            __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar5,0x8000160);
            uVar2 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28);
            uVar1 = 0x56100012;
            goto code_r0x08001e08;
        }
        puVar3 = 0x8000100;
        if (*param_3 != *0x8000104) goto code_r0x08001b88;
        uVar4 = 0;
    }
    else {
code_r0x08001b88:
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (param_2 == 0x56100012) {
                puVar3 = 0x8000128;
                if (*param_3 == *0x800012c) {
                    uVar4 = 1;
                    goto code_r0x08001db4;
                }
            }
            else if ((param_2 == 0x56100013) && (puVar3 = 0x8000128, *param_3 == *0x800012c)) {
                uVar4 = 1;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (param_2 == 0x56100012) {
                puVar3 = 0x8000150;
                if (*param_3 == *0x8000154) {
                    uVar4 = 2;
                    goto code_r0x08001db4;
                }
            }
            else if ((param_2 == 0x56100013) && (puVar3 = 0x8000150, *param_3 == *0x8000154)) {
                uVar4 = 2;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (param_2 == 0x56100012) {
                puVar3 = 0x8000178;
                if (*param_3 == *0x800017c) {
                    uVar4 = 3;
                    goto code_r0x08001db4;
                }
            }
            else if ((param_2 == 0x56100013) && (puVar3 = 0x8000178, *param_3 == *0x800017c)) {
                uVar4 = 3;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr != 4) && (_segment.ehdr != 1)) {
code_r0x08001e18:
            _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
            return 0;
        }
        if (param_2 == 0x56100012) {
            puVar3 = 0x80001a0;
            if (*param_3 != *0x80001a4) goto code_r0x08001e18;
            uVar4 = 4;
            goto code_r0x08001db4;
        }
        if ((param_2 != 0x56100013) || (puVar3 = 0x80001a0, *param_3 != *0x80001a4)) goto code_r0x08001e18;
        uVar4 = 4;
    }
code_r0x08001d44:
    *puVar3 = 4;
    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
    pcVar5 = *(uVar4 * 0x28 + 0x80000e8);
    __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar5,0x8000180);
    uVar2 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28);
    uVar1 = 0x56100013;
code_r0x08001e08:
    (*pcVar5)(uVar2,uVar1,uVar4);
    return 1;
}


// ===== sym.gh_irq_lend_v2 @ 0x08001240 (size 364) =====

int sym.gh_irq_lend_v2(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong in_x4;
    ulong *in_x18;
    int *piVar7;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    uVar4 = arg1;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar2 = -0x16;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_6c = 0;
    iVar6 = arg4;
    if ((arg1 < 5) && (arg4 != 0)) {
        iVar2 = gh_rm_irq_to_virq(arg3 & 0xffffffff,&uStack_6c);
        if (iVar2 == 0) {
            uVar5 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
            piVar7 = uVar4 * 0x28 + 0x8000100;
            if (*piVar7 == 0) {
                iVar2 = gh_rm_get_vmid(arg2 & 0xffffffff,
                                       reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt +
                                       uVar4 * 0x28);
                if (iVar2 == 0) {
                    iVar6 = uVar4 * 0x28;
                    *piVar7 = 1;
                    *(iVar6 + 0x80000e8) = arg4;
                    *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar6) = in_x4
                    ;
                    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar5);
                    iVar6 = iVar6 + 0x8000104;
                    iVar2 = gh_rm_vm_irq_lend(*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt +
                                               uVar4 * 0x28),uStack_6c,uVar4);
                }
                else {
                    *piVar7 = 0;
                    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar5);
                }
            }
            else {
                _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar5);
                iVar2 = -0x16;
            }
        }
        else {
            iVar2 = -0x16;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar2;
    }
    uVar3 = __stack_chk_fail();
    iVar2 = -0x16;
    if ((uVar3 < 5) && (iVar6 != 0)) {
        iVar2 = 0;
        *(uVar3 * 0x28 + 0x80000f0) = iVar6;
    }
    return iVar2;
}


// ===== sym.gh_irq_lend @ 0x080013ac (size 60) =====

ulong sym.gh_irq_lend(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((arg1 < 5) && (arg2 != 0)) {
        uVar1 = 0;
        *((arg1 & 0xffffffffU) * 0x28 + 0x80000f0) = arg2;
    }
    return uVar1;
}


// ===== sym.gh_irq_lend_notify @ 0x080013e8 (size 96) =====

ulong sym.gh_irq_lend_notify(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 5) && (*(arg1 * 0x28 + 0x8000100) != 0)) {
        uVar1 = gh_rm_vm_irq_lend_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + arg1 * 0x28),
                           *(arg1 * 0x28 + 0x8000104));
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_reclaim @ 0x08001448 (size 116) =====

ulong sym.gh_irq_reclaim(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 5) && (puVar2 = arg1 * 0x28 + 0x8000100, (*puVar2 | 2) == 3)) {
        uVar1 = gh_rm_vm_irq_reclaim(*(arg1 * 0x28 + 0x8000104));
        if (uVar1 == 0) {
            *puVar2 = 0;
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_wait_for_lend_v2 @ 0x080014bc (size 212) =====

uint sym.gh_irq_wait_for_lend_v2(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    int *piVar4;
    ulong *in_x18;
    uint uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = 0xffffffea;
    if ((arg1 < 5) && (arg3 != 0)) {
        uVar6 = arg1;
        uVar3 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
        piVar4 = uVar6 * 0x28 + 0x8000100;
        if (*piVar4 == 0) {
            if (200 < (uVar6 * 0x28 | 4)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(1,0x8001590);
                (*pcVar2)();
            }
            uVar5 = 0;
            iVar1 = uVar6 * 0x28;
            *piVar4 = 2;
            *(iVar1 + 0x80000e4) = arg2;
            *(iVar1 + 0x80000e8) = arg3;
            *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar1) = arg4;
        }
        else {
            uVar5 = 0xffffffea;
        }
        _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar3);
    }
    return uVar5;
}


// ===== sym.gh_irq_wait_for_lend @ 0x08001590 (size 16) =====

ulong sym.gh_irq_wait_for_lend(int64_t arg1)

{
    return 0;
}


// ===== sym.gh_irq_accept @ 0x080015a0 (size 260) =====

uint64_t sym.gh_irq_accept(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar6;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_4c = 0;
    if (arg1 < 5) {
        piVar6 = arg1 * 0x28 + 0x8000100;
        if (*piVar6 == 5) {
            if (arg2 == 0xffffffff) {
                iStack_4c = -1;
            }
            else {
                iVar3 = gh_rm_irq_to_virq(arg2,&iStack_4c);
                if (iVar3 != 0) goto code_r0x08001618;
            }
            uVar5 = gh_rm_vm_irq_accept(*(arg1 * 0x28 + 0x8000104),iStack_4c);
            iStack_4c = uVar5;
            if (-1 < iStack_4c) {
                uVar2 = arg2;
                if (arg2 == 0xffffffff) {
                    uVar5 = gh_rm_virq_to_irq(uVar5,arg3 & 0xffffffff);
                    uVar2 = uVar5 & 0xffffffff;
                }
                uVar5 = uVar2;
                *piVar6 = 4;
            }
            goto code_r0x0800161c;
        }
    }
code_r0x08001618:
    uVar5 = 0xffffffea;
code_r0x0800161c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_48) {
        uVar4 = __stack_chk_fail(uVar5);
        *extraout_x18 = sym.gh_irq_accept_notify;
        if ((uVar4 < 5) && (*(uVar4 * 0x28 + 0x8000100) == 4)) {
            uVar5 = gh_rm_vm_irq_accept_notify
                              (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28),
                               *(uVar4 * 0x28 + 0x8000104));
        }
        else {
            uVar5 = 0xffffffea;
        }
        return uVar5;
    }
    return uVar5;
}


// ===== sym.gh_irq_accept_notify @ 0x080016a4 (size 100) =====

ulong sym.gh_irq_accept_notify(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 5) && (*(arg1 * 0x28 + 0x8000100) == 4)) {
        uVar1 = gh_rm_vm_irq_accept_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + arg1 * 0x28),
                           *(arg1 * 0x28 + 0x8000104));
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_release @ 0x08001708 (size 116) =====

ulong sym.gh_irq_release(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 5) && (piVar2 = arg1 * 0x28 + 0x8000100, *piVar2 == 4)) {
        uVar1 = gh_rm_vm_irq_release(*(arg1 * 0x28 + 0x8000104));
        if (uVar1 == 0) {
            *piVar2 = 2;
        }
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_irq_release_notify @ 0x0800177c (size 104) =====

ulong sym.gh_irq_release_notify(uint32_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 < 5) && (iVar1 = *(arg1 * 0x28 + 0x8000100), iVar1 == 4 || iVar1 == 2)) {
        uVar2 = gh_rm_vm_irq_release_notify
                          (*(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + arg1 * 0x28),
                           *(arg1 * 0x28 + 0x8000104));
    }
    else {
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x080017e4 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gh_rm_unregister_notifier(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    gh_rm_unregister_notifier(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    return;
}


// ===== sym.gh_irq_lent_nb_handler @ 0x0800181c (size 684) =====

int sym.gh_irq_lent_nb_handler(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    uint64_t extraout_x1;
    int *piVar6;
    uint *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    code *pcVar9;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iVar3 = 0;
    iStack_38 = *(iVar2 + 0x5e0);
    iStack_3c = 0;
    piVar6 = arg3;
    if (arg2 == 0x56100011) {
        iVar3 = gh_rm_get_vm_name(*arg3,&iStack_3c);
        if (iVar3 == 0) {
            uVar4 = _raw_spin_lock_irqsave("");
            if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(arg3 + 8) == 0)) {
                uVar8 = 0;
                puVar7 = 0x8000100;
                if ((*0x80000e4 != 5) && (*0x80000e4 != iStack_3c)) goto code_r0x080018fc;
code_r0x08001a20:
                iVar2 = uVar8 * 0x28;
                *(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + iVar2) = *arg3;
                uVar1 = *(arg3 + 4);
                *puVar7 = 5;
                *(iVar2 + 0x8000104) = uVar1;
                _raw_spin_unlock_irqrestore("",uVar4);
                pcVar9 = *(iVar2 + 0x80000e8);
                __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000140);
                piVar6 = uVar8;
                arg1 = (*pcVar9)(*(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt +
                                  iVar2),0x56100011);
                iVar3 = 1;
            }
            else {
code_r0x080018fc:
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(arg3 + 8) == 1)) {
                    uVar8 = 1;
                    puVar7 = 0x8000128;
                    if ((*0x800010c == 5) || (*0x800010c == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(arg3 + 8) == 2)) {
                    uVar8 = 2;
                    puVar7 = 0x8000150;
                    if ((*0x8000134 == 5) || (*0x8000134 == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(arg3 + 8) == 3)) {
                    uVar8 = 3;
                    puVar7 = 0x8000178;
                    if ((*0x800015c == 5) || (*0x800015c == iStack_3c)) goto code_r0x08001a20;
                }
                if (((_segment.ehdr == 5) || (_segment.ehdr == 2)) && (*(arg3 + 8) == 4)) {
                    uVar8 = 4;
                    puVar7 = 0x80001a0;
                    if ((*0x8000184 == 5) || (*0x8000184 == iStack_3c)) goto code_r0x08001a20;
                }
                arg1 = _raw_spin_unlock_irqrestore("",uVar4);
                iVar3 = 0;
            }
        }
        else {
            arg1 = ___ratelimit(obj.gh_irq_lent_nb_handler._rs,"");
            if (arg1 != 0) {
                piVar6 = *arg3;
                arg1 = _printk(0x800022e,"");
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    __stack_chk_fail(arg1);
    *extraout_x18 = sym.gh_irq_released_accepted_nb_handler;
    if (extraout_x1 >> 1 != 0x2b080009) {
        return 0;
    }
    uVar4 = _raw_spin_lock_irqsave("");
    if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
        if (extraout_x1 != 0x56100013) {
            if ((extraout_x1 != 0x56100012) || (puVar7 = 0x8000100, *piVar6 != *0x8000104)) goto code_r0x08001b88;
            uVar8 = 0;
code_r0x08001db4:
            *puVar7 = 3;
            _raw_spin_unlock_irqrestore("",uVar4);
            pcVar9 = *(uVar8 * 0x28 + 0x80000e8);
            __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000160);
            uVar5 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar8 * 0x28);
            uVar4 = 0x56100012;
            goto code_r0x08001e08;
        }
        puVar7 = 0x8000100;
        if (*piVar6 != *0x8000104) goto code_r0x08001b88;
        uVar8 = 0;
    }
    else {
code_r0x08001b88:
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000128;
                if (*piVar6 == *0x800012c) {
                    uVar8 = 1;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000128, *piVar6 == *0x800012c)) {
                uVar8 = 1;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000150;
                if (*piVar6 == *0x8000154) {
                    uVar8 = 2;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000150, *piVar6 == *0x8000154)) {
                uVar8 = 2;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (extraout_x1 == 0x56100012) {
                puVar7 = 0x8000178;
                if (*piVar6 == *0x800017c) {
                    uVar8 = 3;
                    goto code_r0x08001db4;
                }
            }
            else if ((extraout_x1 == 0x56100013) && (puVar7 = 0x8000178, *piVar6 == *0x800017c)) {
                uVar8 = 3;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr != 4) && (_segment.ehdr != 1)) {
code_r0x08001e18:
            _raw_spin_unlock_irqrestore("",uVar4);
            return 0;
        }
        if (extraout_x1 == 0x56100012) {
            puVar7 = 0x80001a0;
            if (*piVar6 != *0x80001a4) goto code_r0x08001e18;
            uVar8 = 4;
            goto code_r0x08001db4;
        }
        if ((extraout_x1 != 0x56100013) || (puVar7 = 0x80001a0, *piVar6 != *0x80001a4)) goto code_r0x08001e18;
        uVar8 = 4;
    }
code_r0x08001d44:
    *puVar7 = 4;
    _raw_spin_unlock_irqrestore("",uVar4);
    pcVar9 = *(uVar8 * 0x28 + 0x80000e8);
    __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar9,0x8000180);
    uVar5 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar8 * 0x28);
    uVar4 = 0x56100013;
code_r0x08001e08:
    (*pcVar9)(uVar5,uVar4,uVar8);
    return 1;
}


// ===== sym.gh_irq_released_accepted_nb_handler @ 0x08001ac8 (size 888) =====

ulong sym.gh_irq_released_accepted_nb_handler(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    uint *puVar3;
    ulong *in_x18;
    uint32_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 >> 1 != 0x2b080009) {
        return 0;
    }
    uVar1 = _raw_spin_lock_irqsave(obj.gh_irq_lend_lock);
    if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
        if (arg2 != 0x56100013) {
            if ((arg2 != 0x56100012) || (puVar3 = 0x8000100, *arg3 != *0x8000104)) goto code_r0x08001b88;
            uVar4 = 0;
code_r0x08001db4:
            *puVar3 = 3;
            _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
            pcVar5 = *(uVar4 * 0x28 + 0x80000e8);
            __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar5,0x8000160);
            uVar2 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28);
            uVar1 = 0x56100012;
            goto code_r0x08001e08;
        }
        puVar3 = 0x8000100;
        if (*arg3 != *0x8000104) goto code_r0x08001b88;
        uVar4 = 0;
    }
    else {
code_r0x08001b88:
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (arg2 == 0x56100012) {
                puVar3 = 0x8000128;
                if (*arg3 == *0x800012c) {
                    uVar4 = 1;
                    goto code_r0x08001db4;
                }
            }
            else if ((arg2 == 0x56100013) && (puVar3 = 0x8000128, *arg3 == *0x800012c)) {
                uVar4 = 1;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (arg2 == 0x56100012) {
                puVar3 = 0x8000150;
                if (*arg3 == *0x8000154) {
                    uVar4 = 2;
                    goto code_r0x08001db4;
                }
            }
            else if ((arg2 == 0x56100013) && (puVar3 = 0x8000150, *arg3 == *0x8000154)) {
                uVar4 = 2;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr == 4) || (_segment.ehdr == 1)) {
            if (arg2 == 0x56100012) {
                puVar3 = 0x8000178;
                if (*arg3 == *0x800017c) {
                    uVar4 = 3;
                    goto code_r0x08001db4;
                }
            }
            else if ((arg2 == 0x56100013) && (puVar3 = 0x8000178, *arg3 == *0x800017c)) {
                uVar4 = 3;
                goto code_r0x08001d44;
            }
        }
        if ((_segment.ehdr != 4) && (_segment.ehdr != 1)) {
code_r0x08001e18:
            _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
            return 0;
        }
        if (arg2 == 0x56100012) {
            puVar3 = 0x80001a0;
            if (*arg3 != *0x80001a4) goto code_r0x08001e18;
            uVar4 = 4;
            goto code_r0x08001db4;
        }
        if ((arg2 != 0x56100013) || (puVar3 = 0x80001a0, *arg3 != *0x80001a4)) goto code_r0x08001e18;
        uVar4 = 4;
    }
code_r0x08001d44:
    *puVar3 = 4;
    _raw_spin_unlock_irqrestore(obj.gh_irq_lend_lock,uVar1);
    pcVar5 = *(uVar4 * 0x28 + 0x80000e8);
    __cfi_slowpath_diag(0x4f956fdb23e4cc74,pcVar5,0x8000180);
    uVar2 = *(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt + uVar4 * 0x28);
    uVar1 = 0x56100013;
code_r0x08001e08:
    (*pcVar5)(uVar2,uVar1,uVar4);
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001e40 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e84

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e98);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001f58 (size 60) =====

void sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = gh_rm_register_notifier(reloc.gh_irq_lent_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    if (iVar1 == 0) {
        gh_rm_register_notifier(reloc.gh_irq_released_accepted_nb_handler.27bab2d8b610875339c3ced4b6b3f515.cfi_jt);
    }
    return;
}

