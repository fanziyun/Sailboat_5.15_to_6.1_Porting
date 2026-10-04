// decompiled from msm_show_resume_irq by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x0800181c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2cf86867ad1e48c3) {
        if (arg1 == -0x3de76c8ef06d8055) {
            pcVar2 = sym.msm_show_resume_irqs.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt;
code_r0x080010b4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080017dc;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x080017dc;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x2cf86867ad1e48c3) {
            pcVar2 = sym.gic_s2idle_enter.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt;
            goto code_r0x080010b4;
        }
        if (arg1 != 0x7d57972cd3914fb1) goto code_r0x080017dc;
        pcVar2 = sym.gic_suspend_notifier.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080017dc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001830);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register_prio
              (__tracepoint_android_vh_cpuidle_psci_enter,sym.gic_s2idle_enter.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt
               ,0,0x7fffffff);
    tracepoint_probe_register_prio
              (__tracepoint_android_vh_cpuidle_psci_exit,sym.gic_s2idle_exit.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0
               ,0x7fffffff);
    tracepoint_probe_register
              (__tracepoint_android_vh_gic_resume,sym.msm_show_resume_irqs.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0);
    register_pm_notifier(reloc.gic_suspend_notifier.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt);
    tracepoint_probe_register
              (__tracepoint_android_vh_gic_suspend,sym.gic_suspend_ds.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0);
    return;
}


// ===== sym.gic_suspend_notifier.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.gic_suspend_notifier.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt(ulong param_1,ulong param_2)

{
    code cVar1;
    
    cVar1 = 0x1;
    switch(param_2) {
    case 1:
        break;
    case 3:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
        cVar1 = 0x1;
        break;
    case 4:
        if ((pm_suspend_global_flags & 1) == 0) {
            return 1;
        }
    case 2:
        cVar1 = 0x0;
        break;
    default:
        goto code_r0x080017cc;
    }
    obj.hibernation = cVar1;
code_r0x080017cc:
    return 1;
}


// ===== sym.msm_show_resume_irqs.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt @ 0x080010e8 (size 8) =====

void sym.msm_show_resume_irqs.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t extraout_x1;
    char *pcVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    uint uStack_dc;
    uint32_t auStack_d8 [32];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    auStack_d8[0x1c] = 0;
    auStack_d8[0x1d] = 0;
    auStack_d8[0x1e] = 0;
    auStack_d8[0x1f] = 0;
    auStack_d8[0x18] = 0;
    auStack_d8[0x19] = 0;
    auStack_d8[0x1a] = 0;
    auStack_d8[0x1b] = 0;
    auStack_d8[0x14] = 0;
    auStack_d8[0x15] = 0;
    auStack_d8[0x16] = 0;
    auStack_d8[0x17] = 0;
    auStack_d8[0x10] = 0;
    auStack_d8[0x11] = 0;
    auStack_d8[0x12] = 0;
    auStack_d8[0x13] = 0;
    auStack_d8[0xc] = 0;
    auStack_d8[0xd] = 0;
    auStack_d8[0xe] = 0;
    auStack_d8[0xf] = 0;
    auStack_d8[8] = 0;
    auStack_d8[9] = 0;
    auStack_d8[10] = 0;
    auStack_d8[0xb] = 0;
    auStack_d8[4] = 0;
    auStack_d8[5] = 0;
    auStack_d8[6] = 0;
    auStack_d8[7] = 0;
    auStack_d8[0] = 0;
    auStack_d8[1] = 0;
    auStack_d8[2] = 0;
    auStack_d8[3] = 0;
    if (obj.hibernation == 0x1) {
        sym.gic_resume_ds(param_2);
    }
    if (_segment.ehdr != 0) {
        iVar8 = *(param_2 + 8);
        uVar7 = *(param_2 + 0x48);
        uVar1 = sym.readl_relaxed(iVar8 + 4);
        uVar1 = (uVar1 & 0x1f) << 5;
        iVar8 = iVar8 + 0x200;
        if (0x3de < uVar1) {
            uVar1 = 0x3df;
        }
        uVar11 = (uVar1 + 0x1f >> 5) + 1;
        puVar12 = auStack_d8;
        do {
            uVar2 = sym.readl_relaxed(iVar8 + -0x80);
            uVar3 = sym.readl_relaxed(iVar8);
            uVar11 = uVar11 - 1;
            iVar8 = iVar8 + 4;
            *puVar12 = uVar3 & uVar2;
            puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
        uVar1 = uVar1 + 0x20;
        uVar2 = _find_first_bit(auStack_d8,uVar1);
        if (uVar2 < uVar1) {
            do {
                uStack_dc = 0;
                iVar8 = __irq_resolve_mapping(uVar7,uVar2,&uStack_dc);
                uVar4 = 0;
                if (iVar8 != 0) {
                    uVar4 = uStack_dc;
                }
                iVar8 = irq_to_desc(uVar4);
                if (0x1f < uVar2) {
                    pcVar5 = "stray irq";
                    if (((iVar8 != 0) && (pcVar5 = "null", *(iVar8 + 0x78) != 0)) &&
                       (pcVar6 = *(*(iVar8 + 0x78) + 0x50), pcVar6 != NULL)) {
                        pcVar5 = pcVar6;
                    }
                    _printk(0x8000110,"msm_show_resume_irqs",uVar4,uVar2,pcVar5);
                }
                uVar2 = _find_next_bit(auStack_d8,0,uVar1,uVar2 + 1,0,0);
            } while (uVar2 < uVar1);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.gic_suspend_ds;
        iVar8 = *(extraout_x1 + 8);
        iVar9 = tpidr_el1;
        if (obj.hibernation == 0x1) {
            iVar9 = *(iVar9 + *(extraout_x1 + 0x18) + 8);
            *0x8001be4 = sym.readl_relaxed(iVar9 + 0x10100);
            *0x8001be8 = sym.readl_relaxed(iVar9 + 0x10200);
            *0x8001be0 = sym.readl_relaxed(iVar9 + 0x10c04);
            uVar11 = 0;
            iVar9 = iVar8 + 0x200;
            puVar10 = 0x8001a60;
            do {
                uVar4 = sym.readl_relaxed(iVar9 + -0x100);
                puVar10[-0x20] = uVar4;
                uVar4 = sym.readl_relaxed(iVar9);
                *puVar10 = uVar4;
                uVar11 = uVar11 + 0x20;
                iVar9 = iVar9 + 4;
                uVar1 = (*(extraout_x1 + 0x38) & 0x1f) << 5;
                if (0x3db < uVar1) {
                    uVar1 = 0x3dc;
                }
                puVar10 = puVar10 + 1;
            } while (uVar11 < uVar1 + 0x20);
            if ((*(extraout_x1 + 0x38) & 0x1f) != 0) {
                iVar8 = iVar8 + 0xc08;
                iVar9 = 0x42;
                do {
                    uVar4 = sym.readl_relaxed(iVar8);
                    *(obj.gic_data_ds + iVar9 * 4) = uVar4;
                    uVar11 = iVar9 - 0x3f;
                    iVar8 = iVar8 + 4;
                    uVar1 = (*(extraout_x1 + 0x38) & 0x1f) << 5;
                    if (0x3db < uVar1) {
                        uVar1 = 0x3dc;
                    }
                    iVar9 = iVar9 + 1;
                } while (uVar11 < uVar1 + 0x20 >> 4);
            }
        }
        return;
    }
    return;
}


// ===== sym.gic_suspend_ds.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt @ 0x080010f0 (size 8) =====

void sym.gic_suspend_ds.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_2 + 8);
    iVar3 = tpidr_el1;
    if (obj.hibernation == 0x1) {
        iVar3 = *(iVar3 + *(param_2 + 0x18) + 8);
        *0x8001be4 = sym.readl_relaxed(iVar3 + 0x10100);
        *0x8001be8 = sym.readl_relaxed(iVar3 + 0x10200);
        *0x8001be0 = sym.readl_relaxed(iVar3 + 0x10c04);
        uVar6 = 0;
        iVar3 = iVar4 + 0x200;
        puVar5 = 0x8001a60;
        do {
            uVar2 = sym.readl_relaxed(iVar3 + -0x100);
            puVar5[-0x20] = uVar2;
            uVar2 = sym.readl_relaxed(iVar3);
            *puVar5 = uVar2;
            uVar6 = uVar6 + 0x20;
            iVar3 = iVar3 + 4;
            uVar1 = (*(param_2 + 0x38) & 0x1f) << 5;
            if (0x3db < uVar1) {
                uVar1 = 0x3dc;
            }
            puVar5 = puVar5 + 1;
        } while (uVar6 < uVar1 + 0x20);
        if ((*(param_2 + 0x38) & 0x1f) != 0) {
            iVar4 = iVar4 + 0xc08;
            iVar3 = 0x42;
            do {
                uVar2 = sym.readl_relaxed(iVar4);
                *(obj.gic_data_ds + iVar3 * 4) = uVar2;
                uVar6 = iVar3 - 0x3f;
                iVar4 = iVar4 + 4;
                uVar1 = (*(param_2 + 0x38) & 0x1f) << 5;
                if (0x3db < uVar1) {
                    uVar1 = 0x3dc;
                }
                iVar3 = iVar3 + 1;
            } while (uVar6 < uVar1 + 0x20 >> 4);
        }
    }
    return;
}


// ===== sym.gic_s2idle_enter.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt @ 0x080010f8 (size 8) =====

void sym.gic_s2idle_enter.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3)

{
    char cVar1;
    bool bVar2;
    
    if ((param_3 & 1) != 0) {
        Hint_Prefetch(0x80000c4,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x80000c4,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                _obj.cpus_in_s2idle = _obj.cpus_in_s2idle + 1;
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.gic_s2idle_exit.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt @ 0x08001100 (size 8) =====

void sym.gic_s2idle_exit.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3)

{
    char cVar1;
    bool bVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 & 1) != 0) {
        if (_obj.cpus_in_s2idle == ___num_online_cpus) {
            gic_resume();
        }
        Hint_Prefetch(0x80000c4,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x80000c4,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                _obj.cpus_in_s2idle = _obj.cpus_in_s2idle + -1;
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.gic_s2idle_enter @ 0x08001108 (size 88) =====

void sym.gic_s2idle_enter(ulong param_1,ulong param_2,uint32_t param_3)

{
    char cVar1;
    bool bVar2;
    
    if ((param_3 & 1) != 0) {
        Hint_Prefetch(0x80000c4,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x80000c4,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                _obj.cpus_in_s2idle = _obj.cpus_in_s2idle + 1;
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.gic_s2idle_exit @ 0x08001160 (size 156) =====

void sym.gic_s2idle_exit(ulong param_1,ulong param_2,uint32_t param_3)

{
    char cVar1;
    bool bVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_3 & 1) != 0) {
        if (_obj.cpus_in_s2idle == ___num_online_cpus) {
            gic_resume();
        }
        Hint_Prefetch(0x80000c4,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x80000c4,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                _obj.cpus_in_s2idle = _obj.cpus_in_s2idle + -1;
            }
        } while (cVar1 != '\0');
    }
    return;
}


// ===== sym.msm_show_resume_irqs @ 0x080011fc (size 484) =====

void sym.msm_show_resume_irqs(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t extraout_x1;
    char *pcVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint *puVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    uint uStack_dc;
    uint32_t auStack_d8 [32];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    auStack_d8[0x1c] = 0;
    auStack_d8[0x1d] = 0;
    auStack_d8[0x1e] = 0;
    auStack_d8[0x1f] = 0;
    auStack_d8[0x18] = 0;
    auStack_d8[0x19] = 0;
    auStack_d8[0x1a] = 0;
    auStack_d8[0x1b] = 0;
    auStack_d8[0x14] = 0;
    auStack_d8[0x15] = 0;
    auStack_d8[0x16] = 0;
    auStack_d8[0x17] = 0;
    auStack_d8[0x10] = 0;
    auStack_d8[0x11] = 0;
    auStack_d8[0x12] = 0;
    auStack_d8[0x13] = 0;
    auStack_d8[0xc] = 0;
    auStack_d8[0xd] = 0;
    auStack_d8[0xe] = 0;
    auStack_d8[0xf] = 0;
    auStack_d8[8] = 0;
    auStack_d8[9] = 0;
    auStack_d8[10] = 0;
    auStack_d8[0xb] = 0;
    auStack_d8[4] = 0;
    auStack_d8[5] = 0;
    auStack_d8[6] = 0;
    auStack_d8[7] = 0;
    auStack_d8[0] = 0;
    auStack_d8[1] = 0;
    auStack_d8[2] = 0;
    auStack_d8[3] = 0;
    if (obj.hibernation == 0x1) {
        sym.gic_resume_ds(arg1);
    }
    if (_segment.ehdr != 0) {
        iVar8 = *(arg1 + 8);
        uVar7 = *(arg1 + 0x48);
        uVar1 = sym.readl_relaxed(iVar8 + 4);
        uVar1 = (uVar1 & 0x1f) << 5;
        iVar8 = iVar8 + 0x200;
        if (0x3de < uVar1) {
            uVar1 = 0x3df;
        }
        uVar11 = (uVar1 + 0x1f >> 5) + 1;
        puVar12 = auStack_d8;
        do {
            uVar2 = sym.readl_relaxed(iVar8 + -0x80);
            uVar3 = sym.readl_relaxed(iVar8);
            uVar11 = uVar11 - 1;
            iVar8 = iVar8 + 4;
            *puVar12 = uVar3 & uVar2;
            puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
        uVar1 = uVar1 + 0x20;
        uVar2 = _find_first_bit(auStack_d8,uVar1);
        if (uVar2 < uVar1) {
            do {
                uStack_dc = 0;
                iVar8 = __irq_resolve_mapping(uVar7,uVar2,&uStack_dc);
                uVar4 = 0;
                if (iVar8 != 0) {
                    uVar4 = uStack_dc;
                }
                iVar8 = irq_to_desc(uVar4);
                if (0x1f < uVar2) {
                    pcVar5 = "stray irq";
                    if (((iVar8 != 0) && (pcVar5 = "null", *(iVar8 + 0x78) != 0)) &&
                       (pcVar6 = *(*(iVar8 + 0x78) + 0x50), pcVar6 != NULL)) {
                        pcVar5 = pcVar6;
                    }
                    _printk(0x8000110,"msm_show_resume_irqs",uVar4,uVar2,pcVar5);
                }
                uVar2 = _find_next_bit(auStack_d8,0,uVar1,uVar2 + 1,0,0);
            } while (uVar2 < uVar1);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.gic_suspend_ds;
        iVar8 = *(extraout_x1 + 8);
        iVar9 = tpidr_el1;
        if (obj.hibernation == 0x1) {
            iVar9 = *(iVar9 + *(extraout_x1 + 0x18) + 8);
            *0x8001be4 = sym.readl_relaxed(iVar9 + 0x10100);
            *0x8001be8 = sym.readl_relaxed(iVar9 + 0x10200);
            *0x8001be0 = sym.readl_relaxed(iVar9 + 0x10c04);
            uVar11 = 0;
            iVar9 = iVar8 + 0x200;
            puVar10 = 0x8001a60;
            do {
                uVar4 = sym.readl_relaxed(iVar9 + -0x100);
                puVar10[-0x20] = uVar4;
                uVar4 = sym.readl_relaxed(iVar9);
                *puVar10 = uVar4;
                uVar11 = uVar11 + 0x20;
                iVar9 = iVar9 + 4;
                uVar1 = (*(extraout_x1 + 0x38) & 0x1f) << 5;
                if (0x3db < uVar1) {
                    uVar1 = 0x3dc;
                }
                puVar10 = puVar10 + 1;
            } while (uVar11 < uVar1 + 0x20);
            if ((*(extraout_x1 + 0x38) & 0x1f) != 0) {
                iVar8 = iVar8 + 0xc08;
                iVar9 = 0x42;
                do {
                    uVar4 = sym.readl_relaxed(iVar8);
                    *(obj.gic_data_ds + iVar9 * 4) = uVar4;
                    uVar11 = iVar9 - 0x3f;
                    iVar8 = iVar8 + 4;
                    uVar1 = (*(extraout_x1 + 0x38) & 0x1f) << 5;
                    if (0x3db < uVar1) {
                        uVar1 = 0x3dc;
                    }
                    iVar9 = iVar9 + 1;
                } while (uVar11 < uVar1 + 0x20 >> 4);
            }
        }
        return;
    }
    return;
}


// ===== sym.gic_suspend_ds @ 0x080013e0 (size 320) =====

void sym.gic_suspend_ds(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 8);
    iVar3 = tpidr_el1;
    if (obj.hibernation == 0x1) {
        iVar3 = *(iVar3 + *(arg1 + 0x18) + 8);
        *0x8001be4 = sym.readl_relaxed(iVar3 + 0x10100);
        *0x8001be8 = sym.readl_relaxed(iVar3 + 0x10200);
        *0x8001be0 = sym.readl_relaxed(iVar3 + 0x10c04);
        uVar6 = 0;
        iVar3 = iVar4 + 0x200;
        puVar5 = 0x8001a60;
        do {
            uVar2 = sym.readl_relaxed(iVar3 + -0x100);
            puVar5[-0x20] = uVar2;
            uVar2 = sym.readl_relaxed(iVar3);
            *puVar5 = uVar2;
            uVar6 = uVar6 + 0x20;
            iVar3 = iVar3 + 4;
            uVar1 = (*(arg1 + 0x38) & 0x1f) << 5;
            if (0x3db < uVar1) {
                uVar1 = 0x3dc;
            }
            puVar5 = puVar5 + 1;
        } while (uVar6 < uVar1 + 0x20);
        if ((*(arg1 + 0x38) & 0x1f) != 0) {
            iVar4 = iVar4 + 0xc08;
            iVar3 = 0x42;
            do {
                uVar2 = sym.readl_relaxed(iVar4);
                *(obj.gic_data_ds + iVar3 * 4) = uVar2;
                uVar6 = iVar3 - 0x3f;
                iVar4 = iVar4 + 4;
                uVar1 = (*(arg1 + 0x38) & 0x1f) << 5;
                if (0x3db < uVar1) {
                    uVar1 = 0x3dc;
                }
                iVar3 = iVar3 + 1;
            } while (uVar6 < uVar1 + 0x20 >> 4);
        }
    }
    return;
}


// ===== sym.gic_resume_ds @ 0x08001524 (size 340) =====

void sym.gic_resume_ds(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 8);
    iVar3 = tpidr_el1;
    iVar3 = *(iVar3 + *(arg1 + 0x18) + 8);
    _printk(0x8000134);
    gic_dist_init();
    gic_cpu_init();
    sym.writel_relaxed(*0x8001be4,iVar3 + 0x10100);
    sym.writel_relaxed(*0x8001be8,iVar3 + 0x10200);
    sym.writel_relaxed(*0x8001be0,iVar3 + 0x10c04);
    if ((*(arg1 + 0x38) & 0x1f) != 0) {
        iVar3 = iVar4 + 0xc08;
        iVar6 = 0x42;
        do {
            sym.writel_relaxed(*(obj.gic_data_ds + iVar6 * 4),iVar3);
            uVar2 = iVar6 - 0x3f;
            iVar3 = iVar3 + 4;
            uVar1 = (*(arg1 + 0x38) & 0x1f) << 5;
            if (0x3db < uVar1) {
                uVar1 = 0x3dc;
            }
            iVar6 = iVar6 + 1;
        } while (uVar2 < uVar1 + 0x20 >> 4);
    }
    gic_dist_wait_for_rwp();
    uVar2 = 0;
    iVar4 = iVar4 + 0x100;
    puVar5 = 0x8001a60;
    do {
        sym.writel_relaxed(*puVar5,iVar4 + 0x100);
        sym.writel_relaxed(puVar5[-0x20],iVar4);
        uVar2 = uVar2 + 0x20;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + 4;
        uVar1 = (*(arg1 + 0x38) & 0x1f) << 5;
        if (0x3db < uVar1) {
            uVar1 = 0x3dc;
        }
    } while (uVar2 < uVar1 + 0x20);
    gic_dist_wait_for_rwp();
    return;
}


// ===== sym.readl_relaxed @ 0x0800167c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001680);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80016b4);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x080016ec (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001708);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001730);
    return;
}


// ===== sym.gic_suspend_notifier @ 0x08001764 (size 116) =====

ulong sym.gic_suspend_notifier(int64_t arg1,int64_t arg2)

{
    code cVar1;
    
    if (arg2 - 1U < 4) {
    //switch table (4 cases) at 0x80000d8
        cVar1 = 0x1;
        switch(*(arg2 + 0x80000d7) * 4 + 0x8001790) {
        case 0x8001794:
            if ((pm_suspend_global_flags & 1) == 0) {
                return 1;
            }
            cVar1 = 0x1;
            break;
        case 0x80017ac:
            if ((pm_suspend_global_flags & 1) == 0) {
                return 1;
            }
        case 0x80017bc:
            cVar1 = 0x0;
        }
        obj.hibernation = cVar1;
    }
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x080017d8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800181c

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
    //switch table (4 cases) at 0x80000dc
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001830);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001834 (size 148) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_register_prio
              (__tracepoint_android_vh_cpuidle_psci_enter,sym.gic_s2idle_enter.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt
               ,0,0x7fffffff);
    tracepoint_probe_register_prio
              (__tracepoint_android_vh_cpuidle_psci_exit,sym.gic_s2idle_exit.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0
               ,0x7fffffff);
    tracepoint_probe_register
              (__tracepoint_android_vh_gic_resume,sym.msm_show_resume_irqs.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0);
    register_pm_notifier(reloc.gic_suspend_notifier.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt);
    tracepoint_probe_register
              (__tracepoint_android_vh_gic_suspend,sym.gic_suspend_ds.5633a6a0134de04f243bc22b67bbaf1b.cfi_jt,0);
    return;
}

