// decompiled from rmnet_shs by radare2+r2ghidra (pdg); repaired by ko_repair

// ===== sym.__cfi_check @ 0x08004000 (size 904) =====



//WARNING: Switch with 1 destination removed at 0x08004af8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x4336ce8ff630bbc3) {
            if (-0x4d7e2f04b135d45d < arg1) {
                if (arg1 == -0x4d7e2f04b135d45c) {
                    pcVar2 = sym.DATARMNET29175fb5fc.cfi_jt;
                }
                else {
                    if (arg1 != -0x4d38130654d7aafc) goto code_r0x08004ab8;
                    pcVar2 = sym.DATARMNETd005aa7157.19721571eac14341b021edd2d7ccdec0.cfi_jt;
                }
code_r0x08004374:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08004ab8;
            }
            if (arg1 == -0x708761f88da6c7f3) {
                pcVar2 = sym.DATARMNET4e292977da.cfi_jt;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08004ab8;
                pcVar2 = sym.DATARMNET056c939591.cfi_jt;
            }
code_r0x0800434c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08004ab8;
        }
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x4336ce8ff630bbc3) {
                pcVar2 = sym.DATARMNET78bb6be330.cfi_jt;
            }
            else {
                if (arg1 != -0x2ee0710dce68437c) goto code_r0x08004ab8;
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80044a0 >> 3 | pcVar1 << 0x3d) < 0xc) {
                    return;
                }
                goto code_r0x08004ab8;
            }
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x4195ad9e5223155) goto code_r0x08004ab8;
                pcVar2 = sym.DATARMNETf5821256ad.cfi_jt;
                goto code_r0x08004300;
            }
            pcVar2 = sym.DATARMNET163e93649e.cfi_jt;
        }
    }
    else {
        if (0x39e63916c3db07d9 < arg1) {
            if (arg1 < 0x694f814fc4ef8dbe) {
                if (arg1 == 0x39e63916c3db07da) {
                    pcVar2 = sym.DATARMNET2ba63fbd90.cfi_jt;
                    goto code_r0x0800434c;
                }
                if (arg1 != 0x4c550309df1cf4c1) goto code_r0x08004ab8;
                pcVar2 = sym.DATARMNETa4bd2ef52c.cfi_jt;
            }
            else if (arg1 == 0x694f814fc4ef8dbe) {
                pcVar2 = sym.DATARMNET0f6b7f3f93.19721571eac14341b021edd2d7ccdec0.cfi_jt;
            }
            else {
                if (arg1 != 0x7d57972cd3914fb1) {
                    if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004ab8;
                    pcVar2 = sym.DATARMNETf3298dab6f.cfi_jt;
                    goto code_r0x08004334;
                }
                pcVar2 = sym.DATARMNET2aa4ef6ff9.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt;
            }
code_r0x08004300:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004ab8;
        }
        if (arg1 < 0x379d36f049eb9a81) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.DATARMNETaf2aa1d70f.19721571eac14341b021edd2d7ccdec0.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08004ab8;
                pcVar2 = sym.DATARMNET4761dcd3fd.19721571eac14341b021edd2d7ccdec0.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x379d36f049eb9a81) {
                pcVar2 = sym.DATARMNET7cc042bdf3.19721571eac14341b021edd2d7ccdec0.cfi_jt;
                goto code_r0x08004374;
            }
            if (arg1 != 0x390ff1194794c0f0) goto code_r0x08004ab8;
            pcVar2 = sym.DATARMNETf61cd23b90.cfi_jt;
        }
    }
code_r0x08004334:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004ab8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004b0c);
    (*pcVar1)();
}




// ===== sym.DATARMNETf61cd23b90.cfi_jt @ 0x08004390 (size 8) =====



void sym.DATARMNETf61cd23b90.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET613a81eca8(param_1);
    return;
}




// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08004398 (size 8) =====



//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}




// ===== sym.DATARMNET78bb6be330.cfi_jt @ 0x080043a0 (size 8) =====



void sym.DATARMNET78bb6be330.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET7ed4cef8a3(param_1);
    return;
}




// ===== sym.DATARMNETf3298dab6f.cfi_jt @ 0x080043a8 (size 8) =====



void sym.DATARMNETf3298dab6f.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_netdevice_notifier(reloc.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt);
    sym.DATARMNETeabd69d1ab();
    _printk(0x8002915,"DATARMNETf3298dab6f");
    return;
}




// ===== sym.DATARMNET163e93649e.cfi_jt @ 0x080043b0 (size 8) =====



void sym.DATARMNET163e93649e.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002844,"DATARMNET163e93649e",*0x8002000);
    sym.DATARMNET0dbc627e8f();
    register_netdevice_notifier(reloc.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt);
    return;
}




// ===== sym.DATARMNET4761dcd3fd.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080043b8 (size 8) =====



ulong sym.DATARMNET4761dcd3fd.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    return param_3;
}




// ===== sym.DATARMNETf5821256ad.cfi_jt @ 0x080043c0 (size 8) =====



ulong sym.DATARMNETf5821256ad.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    ushort uVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    ushort uVar8;
    uint uVar9;
    int iVar10;
    uint64_t arg1;
    uchar uVar11;
    int64_t *piVar12;
    uint16_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    ulong *in_x18;
    int64_t arg2;
    uint64_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar16 = *0x80057d0;
    _sym.__cfi_check = _sym.__cfi_check + 1;
    if ((*(param_1 + 0x81) & 3) == 0) {
        __skb_get_hash(param_1);
    }
    iVar10 = *(param_1 + 0x94);
    _raw_spin_lock_bh(0x8004160);
    uVar17 = *0x8002000;
    arg2 = *(obj.DATARMNET58fe8ac797 + (iVar10 * 0x61c88647 >> 0x17) * 8) + -0x80;
    uVar8 = *0x8002000;
    if (*(obj.DATARMNET58fe8ac797 + (iVar10 * 0x61c88647 >> 0x17) * 8) != 0 && arg2 != 0) {
        do {
            if (iVar10 == *(arg2 + 0xc0)) {
                arg1 = *0x8002000;
                *(arg2 + 0xc6) = uVar8;
                uVar8 = sym.DATARMNET04e8d1b862(arg1,uVar16);
                uVar17 = 0;
                *(arg2 + 0xc4) = uVar8;
                goto code_r0x080058e4;
            }
            piVar12 = arg2 + 0x80;
            arg2 = 0;
            if (*piVar12 != 0) {
                arg2 = *piVar12 + -0x80;
            }
        } while (arg2 != 0);
    }
    if (*0x8002000 < 0) {
        pcVar7 = sym.DATARMNET36e5e526fa;
    }
    else if (*0x80057c0 < 0x2bd) {
        arg2 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0xd8);
        if (arg2 != 0) {
            Hint_Prefetch(0x80057c0,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(0x80057c0,0x10);
                if (bVar6) {
                    cVar5 = ExclusiveMonitorsStatus();
                    *0x80057c0 = *0x80057c0 + 1;
                }
            } while (cVar5 != '\0');
            uVar4 = *(param_2 + 2);
            uVar13 = *0x80057d0;
            uVar15 = *(param_1 + 0x10);
            *(arg2 + 0xc6) = uVar8;
            uVar9 = *(param_1 + 0x94);
            *(arg2 + 200) = uVar4;
            *(arg2 + 0xca) = uVar13;
            *(arg2 + 0x50) = uVar15;
            *(arg2 + 0xc0) = uVar9;
            *(arg2 + 0xd3) = 1;
            uVar8 = sym.DATARMNET04e8d1b862(uVar17,uVar16);
            *(arg2 + 0xc4) = uVar8;
            iVar14 = tpidr_el1;
            uVar2 = *(cpu_number + iVar14);
            *(arg2 + 0xc6) = uVar2;
            uVar8 = sym.DATARMNET04e8d1b862(uVar2,uVar16);
            *(arg2 + 0xc4) = uVar8;
            *(arg2 + 0x40) = arg2 + 0x40;
            *(arg2 + 0x48) = arg2 + 0x40;
            sym.DATARMNET44459105b4(param_1,arg2);
            sym.DATARMNET350f55bfca(arg2);
            uVar13 = *(arg2 + 0xc6);
            if (8 < uVar13) goto code_r0x08005b58;
            puVar1 = *(arg2 + 0x50) + 0xa00;
            if (puVar1 == NULL) {
                *0x800b000 = *0x800b000 + 1;
            }
            else {
                *(*(arg2 + 0x58) + 0x133) = *puVar1;
            }
            sym.DATARMNET3e37ad2816(arg2,uVar13 * 0x28 + 0x8004020);
            pcVar7 = obj.DATARMNET58fe8ac797 + (*(param_1 + 0x94) * 0x61c88647 >> 0x17) * 8;
            iVar14 = *pcVar7;
            piVar12 = arg2 + 0x80;
            *piVar12 = iVar14;
            *(arg2 + 0x88) = pcVar7;
            *pcVar7 = piVar12;
            if (iVar14 != 0) {
                *(iVar14 + 8) = piVar12;
            }
code_r0x080058e4:
            _raw_spin_unlock_bh(0x8004160);
            if (*(arg2 + 200) == 0) {
                uVar3 = *0x80057d1;
                if (*0x80057d0 != 0) goto code_r0x08005904;
            }
            else {
                uVar3 = *(arg2 + 0xca);
                if ((*(arg2 + 200) & 0xff) != 0) {
code_r0x08005904:
                    uVar9 = sym.DATARMNET8532ab3089(*(arg2 + 0xc4),uVar3,*(arg2 + 0xc0));
                    *(param_1 + 0x94) = uVar9;
                }
            }
            if (*(arg2 + 0xd4) != '\x02') {
                if (*(arg2 + 0xd4) == '\0') {
                    iVar14 = tpidr_el1;
                    uVar2 = *(cpu_number + iVar14);
                    if ((0xffffff07U >> (uVar2 & 0x1f) & 1) == 0) goto code_r0x08005944;
                    if (0x1f < uVar2) goto code_r0x08005b58;
                    if (*(hrtimer_active + *(__per_cpu_offset + uVar2 * 8)) +
                        *(cpus_read_unlock + *(__per_cpu_offset + uVar2 * 8)) < 0x14) {
                        iVar10 = sym.DATARMNETdc7bead533(uVar2,4000);
                        if (iVar10 == 0) {
                            if (*(arg2 + 0xd4) != '\0') goto code_r0x08005a34;
                            goto code_r0x08005a18;
                        }
                        goto code_r0x080059fc;
                    }
code_r0x08005a18:
                    uVar11 = 1;
code_r0x08005a1c:
                    *(arg2 + 0xd4) = uVar11;
                    *(arg2 + 0xc6) = uVar17;
                    uVar8 = sym.DATARMNET04e8d1b862(uVar17,uVar16);
                    *(arg2 + 0xc4) = uVar8;
                }
                else {
code_r0x08005944:
                    iVar14 = tpidr_el1;
                    uVar2 = *(cpu_number + iVar14);
                    if ((0xffffff07U >> (uVar2 & 0x1f) & 1) == 0) {
                        if (0x1f < uVar2) goto code_r0x08005b58;
                        if ((0x13 < *(hrtimer_active + *(__per_cpu_offset + uVar2 * 8)) +
                                    *(cpus_read_unlock + *(__per_cpu_offset + uVar2 * 8))) ||
                           (iVar10 = sym.DATARMNETdc7bead533(uVar2,12000), iVar10 == 0)) {
                            uVar11 = 2;
                            goto code_r0x08005a1c;
                        }
code_r0x080059fc:
                        *(param_1 + 0x94) = 0;
                        *(param_1 + 0x80) = *(param_1 + 0x80) | 0x200;
                    }
                }
            }
code_r0x08005a34:
            uVar16 = *(*(param_1 + 0xd0) + *(param_1 + 0xcc) + 6);
            if (uVar16 == 0) {
                *(arg2 + 0x90) = *(arg2 + 0x90) + 1;
                if (7 < *(arg2 + 0xc6)) goto code_r0x08005b58;
                iVar14 = *(arg2 + 0xc6) * 0x28;
                uVar17 = 1;
                *(iVar14 + 0x8005804) = *(iVar14 + 0x8005804) + 1;
            }
            else {
                *(arg2 + 0x90) = *(arg2 + 0x90) + uVar16;
                if (7 < *(arg2 + 0xc6)) {
code_r0x08005b58:
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x5512,0x8005b5c);
                    (*pcVar7)();
                }
                iVar14 = *(arg2 + 0xc6) * 0x28;
                *(iVar14 + 0x8005804) = *(iVar14 + 0x8005804) + 1;
                uVar17 = *(*(param_1 + 0xd0) + *(param_1 + 0xcc) + 6);
            }
            *(arg2 + 0x7c) = *(arg2 + 0x7c) + uVar17;
            *(arg2 + 0x98) = *(arg2 + 0x98) + 1;
            *(arg2 + 0xa8) = *(arg2 + 0xa8) + *(param_1 + 0x2c);
            *(arg2 + 0xb0) = *(arg2 + 0xb0) + *(param_1 + 0x30);
            if (*(param_1 + 0x8c) == 0xda1a) {
                *(arg2 + 0xb8) = *(arg2 + 0xb8) + 1;
            }
            *(arg2 + 0xa0) = *(arg2 + 0xa0) + *(param_1 + 0x70);
            goto code_r0x08005b28;
        }
        pcVar7 = 0x800b510;
    }
    else {
        pcVar7 = 0x800b520;
    }
    *pcVar7 = *pcVar7 + 1;
    _raw_spin_unlock_bh(0x8004160);
code_r0x08005b28:
    sym.DATARMNETe767554e6e(param_1);
    return 0;
}




// ===== sym.DATARMNET756778f14f.cfi_jt @ 0x080043c8 (size 8) =====


ulong sym.DATARMNET756778f14f.cfi_jt(int64_t param_1,uint16_t *param_2,uint32_t param_3,int64_t param_4)

{
    int64_t *piVar1;
    uchar *puVar2;
    uint uVar3;
    char cVar4;
    bool bVar5;
    uint8_t uVar6;
    code *pcVar7;
    ushort uVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong uVar13;
    uint16_t uVar14;
    int64_t iVar15;
    ulong uVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar noname_1 [16];
    char acStack_e4 [4];
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
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar6 = *0x80057d0;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    acStack_e4[0] = '\0';
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    if (((*param_2 & 1) == 0) &&
       (iVar9 = sym.DATARMNET9303cec796(param_1,acStack_e4), cVar4 = acStack_e4[0], iVar9 == 0)) {
        sym.DATARMNETe767554e6e(param_1);
        if (cVar4 != '\0') {
            sym.DATARMNET8d0d510d45(1,&uStack_e0);
            sym.DATARMNETb5d58adbe7(&uStack_e0);
        }
    }
    else if ((uVar6 == 0) || (*0x80057cd == '\0')) {
        sym.DATARMNETe767554e6e(param_1);
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        if ((*(param_1 + 0x80) & 0x300) == 0) {
            __skb_get_hash(param_1);
            if (param_2[1] != 0) goto code_r0x0800a3b0;
code_r0x0800a4c4:
            iVar9 = *(param_1 + 0x94);
        }
        else {
            if (param_2[1] == 0) goto code_r0x0800a4c4;
code_r0x0800a3b0:
            iVar9 = 0xdead;
            *(param_1 + 0x94) = 0xdead;
            iVar15 = tpidr_el1;
            if ((*(cpu_number + iVar15) == *0x80057d3) && (*0x80057d3 != *0x80057d6)) {
                netif_rx(param_1);
                *0x8005000 = *0x8005000 + 1;
                if (*0x8017000 < *0x8005000) {
                    _raw_spin_lock_bh(0x8004164);
                    sym.DATARMNETe377e0368d(8,0);
                    _raw_spin_unlock_bh(0x8004164);
                    _delayed_work_timer_fn = 0;
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                    *0x8005000 = 0;
                    *0x800b000 = *0x800b000 + 1;
                }
                goto code_r0x0800ad1c;
            }
        }
        uVar13 = _raw_spin_lock_irqsave(0x8004164);
        iVar15 = *((iVar9 * 0x61c88647 >> 0x17) * 8 + 0x8004168);
        if (iVar15 != 0) {
            iVar15 = iVar15 + -0x80;
            while (iVar15 != 0) {
                if (iVar9 == *(iVar15 + 0xc0)) {
                    if (*(iVar15 + 0xd3) != '\0') {
                        if (*(iVar15 + 0xd3) == '\x02') {
                            iVar9 = sym.DATARMNETe24386452c(param_1);
                            *(iVar15 + 0xd3) = iVar9 != 0;
                        }
                        _raw_spin_unlock_irqrestore(0x8004164,uVar13);
                        *(iVar15 + 0x90) = *(iVar15 + 0x90) + 1;
                        *(iVar15 + 0xa0) = *(iVar15 + 0xa0) + *(param_1 + 0x70);
                        goto code_r0x0800a9c0;
                    }
                    if (*(iVar15 + 0xcc) == '\0') goto code_r0x0800a9f4;
                    sym.DATARMNETe074a09496();
                    iVar18 = tpidr_el1;
                    if (*(cpu_number + iVar18) != *0x80057d6) {
                        *0x800b000 = *0x800b000 + 1;
                    }
                    if (*0x80057d2 == *0x80057d6) {
                        *(iVar15 + 0xce) = *(iVar15 + 0xce) + 1;
                        sym.DATARMNET495dab3d72(param_1,iVar15);
                        if (_rmnet_shs_switch == 0) {
                            bVar5 = false;
                            uVar12 = 2;
                            *0x800b000 = *0x800b000 + 1;
                            goto code_r0x0800aa60;
                        }
                        uVar12 = sym.DATARMNETadb0248bd4(*0x80057d6);
                        if (uVar12 < *(iVar15 + 0xbc) + *(iVar15 + 0xce)) {
                            if ((*0x8017000 == 0) || (*(iVar15 + 0x78) <= *0x8017000)) goto code_r0x0800a9e0;
                            bVar5 = false;
                            uVar12 = 1;
                            *0x800b000 = *0x800b000 + 1;
                        }
                        else {
                            bVar5 = false;
                            uVar12 = 3;
                        }
                        goto code_r0x0800aa60;
                    }
                    if (*(iVar15 + 0xc6) != *0x80057d6) {
                        if (8 < *0x80057d6) goto code_r0x0800ad60;
                        sym.DATARMNETe102b3a798(iVar15,*0x80057d6 * 0x28 + 0x80057e8,*(iVar15 + 0xc6));
                        *0x800b000 = *0x800b000 + 1;
                    }
                    sym.DATARMNET02fc8b29a0(iVar15,param_2,*(param_1 + 0x10));
                    netif_rx(param_1);
                    goto code_r0x0800aa58;
                }
                piVar1 = iVar15 + 0x80;
                iVar15 = 0;
                if (*piVar1 != 0) {
                    iVar15 = *piVar1 + -0x80;
                }
            }
        }
        if (param_2[1] == 0) {
            uVar12 = *0x80057d0 & 7 & (*0x80057cf ^ 0xff);
            if ((uVar12 & 1) == 0) {
                uVar10 = 0xffffffff;
                uVar11 = 0xffffffff;
                iVar9 = -1;
joined_r0x0800a6c0:
                if ((uVar12 >> 1 & 1) != 0) {
                    if (*0x8005810 == 0x8005810) {
                        uVar19 = 1;
                        goto code_r0x0800a548;
                    }
                    uVar10 = uVar11;
                    if (iVar9 == -1 || CONCAT22(*0x8005002,*0x8005000) <= iVar9) {
                        iVar9 = CONCAT22(*0x8005002,*0x8005000);
                        uVar10 = 1;
                    }
                }
                if ((uVar12 >> 2 == 0) ||
                   (((uVar19 = 2, *0x8005838 != 0x8005838 && (iVar9 != -1)) &&
                    (iVar9 < CONCAT22(*0x8005002,*0x8005000))))) goto code_r0x0800a540;
            }
            else {
                if (*0x80057e8 != 0x80057e8) {
                    uVar10 = 0;
                    uVar11 = 0;
                    iVar9 = CONCAT22(*0x8005002,*0x8005000);
                    goto joined_r0x0800a6c0;
                }
                uVar19 = 0;
            }
code_r0x0800a548:
            if (*0x80057c0 < 0x2bd) {
                iVar15 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0xd8);
                if (iVar15 == 0) {
                    *0x800b000 = *0x800b000 + 1;
                }
                else {
                    Hint_Prefetch(0x80057c0,2,0,1);
                    do {
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(0x80057c0,0x10);
                        if (bVar5) {
                            cVar4 = ExclusiveMonitorsStatus();
                            *0x80057c0 = *0x80057c0 + 1;
                        }
                    } while (cVar4 != '\0');
                    uVar16 = *(param_1 + 0x10);
                    uVar3 = *(param_1 + 0x94);
                    *(iVar15 + 0xc6) = uVar19;
                    *(iVar15 + 0x50) = uVar16;
                    *(iVar15 + 0xc0) = uVar3;
                    uVar8 = sym.DATARMNET04e8d1b862(uVar19,uVar6);
                    *(iVar15 + 0xc4) = uVar8;
                    *(iVar15 + 0x40) = iVar15 + 0x40;
                    *(iVar15 + 0x48) = iVar15 + 0x40;
                    sym.DATARMNET44459105b4(param_1,iVar15);
                    sym.DATARMNET350f55bfca(iVar15);
                    if (*(iVar15 + 0x58) != 0) {
                        if (param_2[1] == 0) {
                            uVar14 = *0x80057d1;
                            *(iVar15 + 200) = *0x80057d0;
                            *(iVar15 + 0xca) = uVar14;
                        }
                        else {
                            sym.DATARMNETe074a09496();
                            sym.DATARMNET02fc8b29a0(iVar15,param_2,*(param_1 + 0x10));
                        }
                        sym.DATARMNET0349051465(*(iVar15 + 0xc6));
                        uVar14 = *(iVar15 + 0xc6);
                        if (8 < uVar14) goto code_r0x0800ad60;
                        puVar2 = *(iVar15 + 0x50) + 0xa00;
                        if (puVar2 == NULL) {
                            *0x800b000 = *0x800b000 + 1;
                        }
                        else {
                            *(*(iVar15 + 0x58) + 0x133) = *puVar2;
                        }
                        sym.DATARMNET3e37ad2816(iVar15,uVar14 * 0x28 + 0x80057e8);
                        piVar1 = (*(param_1 + 0x94) * 0x61c88647 >> 0x17) * 8 + 0x8004168;
                        iVar18 = *piVar1;
                        piVar17 = iVar15 + 0x80;
                        *piVar17 = iVar18;
                        *(iVar15 + 0x88) = piVar1;
                        *piVar1 = piVar17;
                        if (iVar18 != 0) {
                            *(iVar18 + 8) = piVar17;
                        }
                        iVar9 = sym.DATARMNETe24386452c(param_1);
                        if (iVar9 == 0) {
                            if (*(iVar15 + 0xcc) == '\0') {
code_r0x0800a9f4:
                                sym.DATARMNET495dab3d72(param_1,iVar15);
code_r0x0800aa58:
                                uVar12 = 0;
                                bVar5 = true;
code_r0x0800aa60:
                                if (((*0x80057ca == '\0') && (*0x80057b8 != 0)) && (*0x8017000 != 0)) {
                                    *0x80057ca = '\x01';
                                    *0x80057cc = '\0';
                                    uVar19 = hrtimer_active();
                                    if ((uVar19 & 1) != 0) {
                                        if (*0x8017000 != 0) {
                                            sym.trace_rmnet_shs_low(7,0x22,2000000,0xdef,0xdef,param_1);
                                        }
                                        hrtimer_cancel(0x80051c8);
                                    }
                                    hrtimer_start_range_ns(0x80051c8,*0x8017000 * 1000000,0,1);
                                }
                                _raw_spin_unlock_irqrestore(0x8004164,uVar13);
                                iVar15 = CONCAT44(*0x8005004,CONCAT22(*0x8005002,*0x8005000));
                                if (*0x8017000 < iVar15) {
                                    if (*0x8017000 != 0) {
                                        *0x800b000 = *0x800b000 + 1;
                                    }
                                    _raw_spin_lock_bh(0x8004164);
                                    iVar15 = 5;
                                }
                                else {
                                    if (CONCAT44(*0x8005004,CONCAT22(*0x8005002,*0x8005000)) <= *0x8017000) {
                                        if (bVar5) {
                                            if (((*param_2 >> 2 & 1) == 0) || (iVar15 == 0)) {
                                                if (*0x80057cc == '\x01') {
                                                    *0x800b000 = *0x800b000 + 1;
                                                    if (*0x8017000 != 0) {
                                                        sym.trace_rmnet_shs_high_1
                                                                  (8,0x2d,1,iVar15,0xdef,0xdef,0,0);
                                                    }
                                                }
                                                else {
                                                    if ((((*param_2 >> 2 & 1) != 0) || (iVar15 == 0)) ||
                                                       (*0x80057ce == '\x01')) goto code_r0x0800ad1c;
                                                    *0x800b000 = *0x800b000 + 1;
                                                }
                                            }
                                            else if (*0x8017000 != 0) {
                                                *0x800b000 = *0x800b000 + 1;
                                            }
                                            uVar19 = 0;
                                        }
                                        else {
                                            if (*0x8017000 != 0) {
                                                sym.trace_rmnet_shs_high_1(8,0x2f,1,iVar15,0xdef,0xdef,0,0);
                                            }
                                            if (*0x8017000 != 0) {
                                                *0x800b000 = *0x800b000 + 1;
                                            }
                                            uVar19 = uVar12;
                                        }
                                        sym.DATARMNETa4bf9fbf64(uVar19,0);
                                        goto code_r0x0800ad1c;
                                    }
                                    if (*0x8017000 != 0) {
                                        *0x800b000 = *0x800b000 + 1;
                                        sym.trace_rmnet_shs_high_1(8,0x2e,0,0xdef,0xdef,0xdef,0,0);
                                    }
                                    _raw_spin_lock_bh(0x8004164);
                                    iVar15 = 6;
                                }
                                sym.DATARMNETe377e0368d(iVar15,0);
                                _raw_spin_unlock_bh(0x8004164);
                            }
                            else {
                                netif_rx(param_1);
code_r0x0800a9e0:
                                _raw_spin_unlock_irqrestore(0x8004164,uVar13);
                            }
                        }
                        else {
                            *(iVar15 + 0xd3) = 1;
                            _raw_spin_unlock_irqrestore(0x8004164,uVar13);
code_r0x0800a9c0:
                            sym.DATARMNETf5821256ad(param_1,param_2);
                        }
                        goto code_r0x0800ad1c;
                    }
                    Hint_Prefetch(0x80057c0,2,0,1);
                    do {
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(0x80057c0,0x10);
                        if (bVar5) {
                            cVar4 = ExclusiveMonitorsStatus();
                            *0x80057c0 = *0x80057c0 + -1;
                        }
                    } while (cVar4 != '\0');
                    kfree(iVar15);
                }
            }
            else {
                *0x800b000 = *0x800b000 + 1;
            }
        }
        else {
            uVar10 = sym.DATARMNET362c14e98b(*0x80057d0 & 7 & (*0x80057cf ^ 0xffffffff),noname_1,param_3,param_4);
code_r0x0800a540:
            uVar19 = uVar10;
            if (-1 < uVar10) goto code_r0x0800a548;
            *0x800b000 = *0x800b000 + 1;
        }
        _raw_spin_unlock_irqrestore(0x8004164,uVar13);
        *0x800b000 = *0x800b000 + 1;
        sym.DATARMNETe767554e6e(param_1);
    }
code_r0x0800ad1c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
code_r0x0800ad60:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x800ad64);
    (*pcVar7)();
}



// ===== sym.DATARMNETa4bd2ef52c.cfi_jt @ 0x080043d0 (size 8) =====



void sym.DATARMNETa4bd2ef52c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET7b6c061b06();
    return;
}




// ===== sym.DATARMNET7f1d9480cb.cfi_jt @ 0x080043d8 (size 8) =====



void sym.DATARMNET7f1d9480cb.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET4063c95208();
    return;
}




// ===== sym.DATARMNET2aa4ef6ff9.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt @ 0x080043e0 (size 8) =====



ulong sym.DATARMNET2aa4ef6ff9.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    code *pcVar1;
    uint32_t arg2;
    int64_t iVar2;
    ulong *in_x17;
    ulong *puVar3;
    ulong *extraout_x17;
    ulong *extraout_x17_00;
    ulong *in_x18;
    ulong unaff_x26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x17 = unaff_x26;
    arg2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    while( true ) {
        if (unaff_x26 <= arg2) {
            return 0;
        }
        if (0x1f < arg2) break;
        if ((*0x8017000 != 0) &&
           (iVar2 = *(__per_cpu_offset + arg2 * 8),
           *0x8017000 <= *(cpus_read_unlock + iVar2) + *(hrtimer_active + iVar2))) {
            sym.DATARMNET82e88dbb56(freq_qos_add_request + iVar2,arg2);
            puVar3 = extraout_x17;
            if (*0x8017000 <= *(cpus_read_unlock + iVar2)) {
                sym.DATARMNET82e88dbb56(__rcu_read_unlock + iVar2,arg2);
                puVar3 = extraout_x17_00;
            }
            *param_3 = *param_3 + 1;
            *puVar3 = unaff_x26;
        }
        arg2 = cpumask_next(arg2,__cpu_possible_mask);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800b364);
    (*pcVar1)();
}




// ===== sym.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt @ 0x080043e8 (size 8) =====



ulong sym.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt(ulong param_1,ulong param_2,int64_t *param_3)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t arg1;
    int64_t arg2;
    ulong noname_0;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *param_3;
    if (iVar5 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        arg2 = 10;
        iVar2 = strncmp(iVar5,"rmnet_data");
        iVar3 = *0x8005000;
        if (iVar2 == 0) {
            switch(param_2) {
            case 1:
                if ((*0x80057c9 == '\0') && (*0x80057cd != '\0')) {
                    if (*0x8005000 == 0) {
                        _printk(0x80027ad);
                    }
                    else {
                        *0x80052a0 = 1;
                        if ((*(*0x8005000 + 0xb) >> 5 & 1) != 0) {
                            *0x80052a8 = sym.DATARMNET78bb6be330.cfi_jt;
                            *0x80052b0 = sym.DATARMNETf61cd23b90.cfi_jt;
                        }
                        *0x80052c8 = sym.DATARMNET7f1d9480cb.cfi_jt;
                        *0x80052d0 = sym.DATARMNETa4bd2ef52c.cfi_jt;
                        iVar2 = rmnet_map_dl_ind_register(*0x8005000);
                        if (iVar2 != 0) {
                            _printk(0x8002876,"DATARMNETe9173bbe0e");
                        }
                        iVar2 = qmi_rmnet_ps_ind_register(iVar3,0x80052c8);
                        if (iVar2 != 0) {
                            _printk(0x8002a1d,"DATARMNETe9173bbe0e");
                        }
                        sym.DATARMNET7492293980(iVar5);
                        sym.DATARMNET039ac6d55d();
                        iVar5 = sym.DATARMNET0a6fb12cb2(noname_0,arg1,arg2);
                        sym.DATARMNETe46c480d71(iVar5);
                        *0x80057c9 = '\x01';
                        _delayed_work_timer_fn = 0;
                        rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                        ___cpu_online_mask = sym.DATARMNET756778f14f.cfi_jt;
                        rmnet_module_hook_register(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
                        rmnet_module_hook_register(obj.DATARMNETf6217b20b8,1);
                    }
                }
                else {
                    sym.DATARMNET7492293980(iVar5);
                }
                break;
            case 2:
                sym.DATARMNETd6ee05f1b4(iVar5);
                break;
            case 5:
                bVar1 = *0x8002000 != -1;
                *0x8002000 = *0x8002000 + 1;
                if ((bVar1) && (*0x80057cd == '\0')) {
                    _printk(0x800260c,iVar5);
                    iVar3 = rmnet_get_port(*(iVar5 + 0xa08));
                    if (iVar3 == 0) {
                        _printk(0x80029a2);
                    }
                    else {
                        sym.DATARMNET45d8cdb224(*(iVar5 + 0xa08),iVar5);
                        sym.DATARMNET3ae0d614d6();
                        sym.DATARMNETe1f95274f1();
                        *0x80057cb = 1;
                    }
                }
                break;
            case 6:
                *0x8002000 = *0x8002000 + -1;
                if ((*0x8002000 == 0) && (*0x80057cd != '\0')) {
                    _printk(0x80025e4,iVar5);
                    ___cpu_online_mask = NULL;
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
                    _delayed_work_timer_fn = 0;
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNETf6217b20b8,1);
                    qmi_rmnet_ps_ind_deregister(*0x80052e8,0x80052c8);
                    rmnet_map_dl_ind_deregister(*0x80052e8,0x80052a0);
                    sym.DATARMNETeacad8334e();
                    sym.DATARMNET90fe3a4b56();
                    uVar4 = sym.DATARMNET02cdd9b125();
                    sym.DATARMNETf7dcab9a9e();
                    sym.DATARMNET9297340f58(uVar4 & 0xffffffff);
                    sym.trace_rmnet_shs_high(1);
                }
            }
        }
    }
    return 0;
}




// ===== sym.DATARMNET056c939591.cfi_jt @ 0x080043f0 (size 8) =====



void sym.DATARMNET056c939591.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETfbc06e60f1(*(param_1 + 0x44));
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNETb4b5fc9686.cfi_jt @ 0x080043f8 (size 8) =====



void sym.DATARMNETb4b5fc9686.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(0x8005f08);
    sym.DATARMNETcd6e26f0ad();
    _raw_spin_unlock_irqrestore(0x8005f08,uVar1);
    sym.DATARMNET39391a8bc5(0);
    uVar1 = __msecs_to_jiffies(*0x8017000);
    queue_delayed_work_on(0x20,*0x8005000,*0x8005000,uVar1);
    return;
}




// ===== sym.DATARMNETa7afc8cdaa.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt @ 0x08004400 (size 8) =====



void sym.DATARMNETa7afc8cdaa.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80057b8 != 0) && (*0x80057cc == '\x01')) {
        iVar1 = sp_el0;
        *(iVar1 + 0x10) = *(iVar1 + 0x10) + 0x200;
        sym.DATARMNETa4bf9fbf64(0,1);
        sym.local_bh_enable();
    }
    return;
}




// ===== sym.DATARMNETb90d2272b4.bc28116c6e32bbd07043963e81855993.cfi_jt @ 0x08004408 (size 8) =====



void sym.DATARMNETb90d2272b4.bc28116c6e32bbd07043963e81855993.cfi_jt(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpus_read_lock();
    uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
    *extraout_x16 = extraout_w8;
    if (uVar2 < extraout_w8) {
        do {
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8011ef4);
                (*pcVar1)();
            }
            freq_qos_update_request
                      (obj.DATARMNET17d6a9530a + *(__per_cpu_offset + uVar2 * 8),
                       *(*(__per_cpu_offset + uVar2 * 8) + *0x8005000));
            uVar2 = cpumask_next(uVar2,__cpu_online_mask);
            *extraout_x16_00 = extraout_w8_00;
        } while (uVar2 < extraout_w8_00);
    }
    cpus_read_unlock();
    return;
}




// ===== sym.DATARMNET29175fb5fc.cfi_jt @ 0x08004410 (size 8) =====



ulong sym.DATARMNET29175fb5fc.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    if (param_2 == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        iVar3 = *(*(param_2 + 0x20) + 0x18);
        if ((iVar3 == 0) || (iVar1 = nla_memcpy(&uStack_48,iVar3,0xc), iVar1 < 1)) {
            sym.DATARMNET5d4ca1da1c(param_2,0x2d0);
        }
        else {
            if (uStack_48._4_4_ - 4 < 4) {
    //WARNING: Could not recover jumptable at 0x08014b90. Too many branches
    //WARNING: Treating indirect jump as call
                uVar2 = (*(*((uStack_48._4_4_ - 4) * 4 + 0x8003250) + 0x8014b84))();
                return uVar2;
            }
            iVar1 = sym.DATARMNET5f72606f6f(uStack_40,uStack_40._2_2_,uStack_48 & 0xffffffff,uStack_48._4_4_);
            if (iVar1 == 1) {
                sym.DATARMNET5d4ca1da1c(param_2,0x2d7);
            }
            else {
                sym.DATARMNET5d4ca1da1c(param_2,0x2d0);
            }
        }
        uVar2 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8014f28;
    if (*0x800a000 == 0) {
        *0x800a000 = CONCAT44(*0x800a004,1);
    }
    if (extraout_x1 == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = 0;
        *0x800a004 = *(extraout_x1 + 0x28) >> 0x20;
        *0x800a000 = CONCAT44(*0x800a004,*(extraout_x1 + 4));
    }
    return uVar2;
}




// ===== sym.DATARMNETc850634243.cfi_jt @ 0x08004418 (size 8) =====



ulong sym.DATARMNETc850634243.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800a000 == 0) {
        *0x800a000 = CONCAT44(*0x800a004,1);
    }
    if (param_2 == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        *0x800a004 = *(param_2 + 0x28) >> 0x20;
        *0x800a000 = CONCAT44(*0x800a004,*(param_2 + 4));
    }
    return uVar1;
}




// ===== sym.DATARMNETd81d2866ba.cfi_jt @ 0x08004420 (size 8) =====



void sym.DATARMNETd81d2866ba.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (param_2 != 0) {
        iVar4 = *(*(param_2 + 0x20) + 0x20);
        if ((iVar4 == 0) || (iVar2 = nla_memcpy(&uStack_30,iVar4,8), iVar2 < 1)) {
            sym.DATARMNET5d4ca1da1c(param_2,0x398);
        }
        else {
            iVar2 = sym.DATARMNETf85599b9d8(uStack_30 & 0xffffffff,uStack_30 >> 0x20);
            if (iVar2 == 1) {
                sym.DATARMNET5d4ca1da1c(param_2,0x3a1);
            }
            else {
                sym.DATARMNET5d4ca1da1c(param_2,0x398);
            }
        }
        while( true ) {
            uVar3 = 0;
code_r0x08014a40:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_28) break;
            __stack_chk_fail(uVar3);
            iVar4 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1)
                != 0) {
                iVar4 = sp_el0;
                piVar1 = iVar4 + 0x10;
                *(iVar4 + 0x10) = *piVar1 + 1;
                __traceiter_rmnet_shs_wq_high(0,9,0x3b);
                iVar5 = *piVar1;
                *(iVar4 + 0x10) = iVar5 + -1;
                if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
        }
        return;
    }
    uVar3 = 0xffffffff;
    goto code_r0x08014a40;
}




// ===== sym.DATARMNET740f3b34b3.cfi_jt @ 0x08004428 (size 8) =====



int sym.DATARMNET740f3b34b3.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET90fe3a4b56();
    return -(param_2 == 0);
}




// ===== sym.DATARMNETd65d1351b9.cfi_jt @ 0x08004430 (size 8) =====



ulong sym.DATARMNETd65d1351b9.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffff;
    if ((param_2 != 0) && (*0x800a000 != 0)) {
        uVar1 = 0;
        *0x800a000 = CONCAT44(*(param_2 + 0x28) >> 0x20,*(param_2 + 4));
    }
    return uVar1;
}




// ===== sym.DATARMNET283f08f439.cfi_jt @ 0x08004438 (size 8) =====



ulong sym.DATARMNET283f08f439.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t arg1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (param_2 != 0) {
        *in_x18 = unaff_x30;
        iVar2 = *(*(param_2 + 0x20) + 0x28);
        if (((iVar2 == 0) || (arg1 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x50), arg1 == 0)) ||
           (iVar1 = nla_memcpy(arg1 + 0x20,iVar2,0x50), iVar1 < 1)) {
            iVar2 = 0x398;
        }
        else {
            if (*(arg1 + 0x4f) == '\0') {
                sym.DATARMNETd52d50282d(arg1);
            }
            else if (*(arg1 + 0x4f) == '\x01') {
                sym.DATARMNET2ac305d296(arg1);
            }
            iVar2 = 0x3a1;
        }
        sym.DATARMNET5d4ca1da1c(param_2,iVar2);
        return 0;
    }
    return 0xffffffff;
}




// ===== sym.DATARMNET4e292977da.cfi_jt @ 0x08004440 (size 8) =====



uint64_t sym.DATARMNET4e292977da.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
        if (*(param_3 + 0x58) < *(param_2 + 0x58)) {
            return 0xffffffff;
        }
        uVar1 = *(param_2 + 0x58) < *(param_3 + 0x58);
    }
    return uVar1;
}




// ===== sym.DATARMNETd5c15f1ff3.cfi_jt @ 0x08004448 (size 8) =====



uint64_t sym.DATARMNETd5c15f1ff3.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
        if (*(param_3 + 0x18) < *(param_2 + 0x18)) {
            return 0xffffffff;
        }
        uVar1 = *(param_2 + 0x18) < *(param_3 + 0x18);
    }
    return uVar1;
}




// ===== sym.DATARMNET3c489db64a.cfi_jt @ 0x08004450 (size 8) =====



uint64_t sym.DATARMNET3c489db64a.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
        if (*(param_3 + 0x58) < *(param_2 + 0x58)) {
            return 0xffffffff;
        }
        uVar1 = *(param_2 + 0x58) < *(param_3 + 0x58);
    }
    return uVar1;
}




// ===== sym.DATARMNET85af86a36d.cfi_jt @ 0x08004458 (size 8) =====



uint64_t sym.DATARMNET85af86a36d.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((param_2 != 0) && (param_3 != 0)) {
        if (*(param_3 + 0x18) < *(param_2 + 0x18)) {
            return 0xffffffff;
        }
        uVar1 = *(param_2 + 0x18) < *(param_3 + 0x18);
    }
    return uVar1;
}




// ===== sym.DATARMNET0f6b7f3f93.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004460 (size 8) =====



void sym.DATARMNET0f6b7f3f93.19721571eac14341b021edd2d7ccdec0.cfi_jt(void)

{
    return;
}




// ===== sym.DATARMNET6069bf201a.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004468 (size 8) =====



void sym.DATARMNET6069bf201a.19721571eac14341b021edd2d7ccdec0.cfi_jt(void)

{
    return;
}




// ===== sym.DATARMNET7cc042bdf3.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004470 (size 8) =====



ulong sym.DATARMNET7cc042bdf3.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = obj.DATARMNET5462c2ce60;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNETc55748448d.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004478 (size 8) =====



ulong sym.DATARMNETc55748448d.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = obj.DATARMNETe9c0626068;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET150e284e90.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004480 (size 8) =====



ulong sym.DATARMNET150e284e90.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = obj.DATARMNET523167fa26;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET444e2eb654.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004488 (size 8) =====



ulong sym.DATARMNET444e2eb654.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = reloc.DATARMNET6069bf201a.19721571eac14341b021edd2d7ccdec0.cfi_jt;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET54418f934d.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004490 (size 8) =====



ulong sym.DATARMNET54418f934d.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = obj.DATARMNETfa4e968e7d;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET43c6d751a2.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004498 (size 8) =====



ulong sym.DATARMNET43c6d751a2.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0x50) = *(param_2 + 0x50) | 0x4040000;
    *(param_2 + 0x90) = obj.DATARMNET9a89317a86;
    *(param_2 + 0xa8) = *(param_1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET601894f27b.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044a0 (size 8) =====



uint sym.DATARMNET601894f27b.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8009000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013e90;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013e90;
        }
        *0x8009000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8009000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08013e84;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08013e84:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x8009000;
code_r0x08013e90:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET0935e3beb9.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044a8 (size 8) =====



uint sym.DATARMNET0935e3beb9.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x080134dc;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x080134dc;
        }
        *0x8006000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8006000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080134d0;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x080134d0:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x8006000;
code_r0x080134dc:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET59b415aded.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044b0 (size 8) =====



ulong sym.DATARMNET59b415aded.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8008000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8008000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNETfbd34e70a2.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044b8 (size 8) =====



uint sym.DATARMNETfbd34e70a2.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8007000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013818;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013818;
        }
        *0x8007000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8007000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0801380c;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x0801380c:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x8007000;
code_r0x08013818:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET2a9f67714f.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044c0 (size 8) =====



ulong sym.DATARMNET2a9f67714f.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8006000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNETb9d10d8cc0.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044c8 (size 8) =====



uint sym.DATARMNETb9d10d8cc0.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x800a000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x080141cc;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x080141cc;
        }
        *0x800a000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x800a000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080141c0;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x080141c0:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x800a000;
code_r0x080141cc:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET33a80d3bf7.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044d0 (size 8) =====



uint sym.DATARMNET33a80d3bf7.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013168;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013168;
        }
        *0x8006000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8006000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0801315c;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x0801315c:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x8006000;
code_r0x08013168:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET18464ea5e3.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044d8 (size 8) =====



ulong sym.DATARMNET18464ea5e3.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x800a000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x800a000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNETcfbc4f0c39.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044e0 (size 8) =====



ulong sym.DATARMNETcfbc4f0c39.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8006000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET57bcb932f3.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044e8 (size 8) =====



uint sym.DATARMNET57bcb932f3.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8008000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013b54;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013b54;
        }
        *0x8008000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8008000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08013b48;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08013b48:
    uVar8 = 0;
    *(param_2 + 0xd8) = *0x8008000;
code_r0x08013b54:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET968bc5b80d.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044f0 (size 8) =====



ulong sym.DATARMNET968bc5b80d.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8007000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8007000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET794d7587bd.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x080044f8 (size 8) =====



ulong sym.DATARMNET794d7587bd.19721571eac14341b021edd2d7ccdec0.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8009000 != 0) {
        puVar5 = *(param_2 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8009000 = 0;
            *(param_2 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNETd005aa7157.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004500 (size 8) =====



uint sym.DATARMNETd005aa7157.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8006000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNETe421c4e1db.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004508 (size 8) =====



uint sym.DATARMNETe421c4e1db.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x800a000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNETe35719979c.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004510 (size 8) =====



uint sym.DATARMNETe35719979c.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8008000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004518 (size 8) =====



uint sym.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8007000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET9efe8a3d18.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004520 (size 8) =====



uint sym.DATARMNET9efe8a3d18.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8006000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET1ab1f570f2.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004528 (size 8) =====



uint sym.DATARMNET1ab1f570f2.19721571eac14341b021edd2d7ccdec0.cfi_jt(int64_t *param_1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8009000 == 0) || (**(*param_1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*param_1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        param_1[0xb] = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET2ba63fbd90.cfi_jt @ 0x08004530 (size 8) =====



ulong sym.DATARMNET2ba63fbd90.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_relax(*0x8005000);
    *0x8017000 = 1;
    return 0;
}




// ===== sym.DATARMNET4ce9744605.cfi_jt @ 0x08004538 (size 8) =====



ulong sym.DATARMNET4ce9744605.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET371703c28d();
    queue_work_on(0x20,_rmnet_map_dl_ind_register,param_1 + 0x48);
    return 0;
}




// ===== sym.DATARMNET0a73c53ae6.cfi_jt @ 0x08004540 (size 8) =====



uint sym.DATARMNET0a73c53ae6.cfi_jt(int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8017000 != 0) {
        param_4 = *0x80057cc;
    }
    if (0 < CONCAT44(*0x8005004,*0x8005000)) {
        if (*0x80057cc == 2) {
            *0x80057cc = 0;
            return 0;
        }
        if (*0x80057cc == 1) {
            queue_work_on(0x20,_rmnet_map_dl_ind_register,0x8005190,param_4);
        }
        else if (*0x80057cc == 0) {
            *0x80057cc = 1;
            pcVar2 = *(*(param_1 + 0x30) + 0x30);
            __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar2,0x8002440);
            uVar1 = (*pcVar2)();
            hrtimer_forward(param_1,uVar1,2000000);
            if (*0x8017000 == 0) {
                return 1;
            }
            return 1;
        }
    }
    return 0;
}




// ===== sym.DATARMNETc2b0dbbb32.cfi_jt @ 0x08004548 (size 8) =====



ulong sym.DATARMNETc2b0dbbb32.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar2 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    sym.DATARMNET8d0d510d45(*0x8017000,&uStack_90);
    sym.DATARMNETb5d58adbe7(&uStack_90);
    ktime_get_with_offset(1);
    auVar2 = ns_to_timespec64();
    *0x8005000 = 0x7fffffffffffffff;
    if (auVar2._0_8_ < 0x225c17d04) {
        *0x8005000 = auVar2._8_8_ + auVar2._0_8_ * 1000000000;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    iVar1 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET4ce9744605;
    sym.DATARMNET371703c28d();
    queue_work_on(0x20,_rmnet_map_dl_ind_register,iVar1 + 0x48);
    return 0;
}




// ===== sym.DATARMNETaf2aa1d70f.19721571eac14341b021edd2d7ccdec0.cfi_jt @ 0x08004550 (size 8) =====



ulong sym.DATARMNETaf2aa1d70f.19721571eac14341b021edd2d7ccdec0.cfi_jt(void)

{
    return 0;
}




// ===== sym.trace_rmnet_shs_high @ 0x08004558 (size 52) =====



void sym.trace_rmnet_shs_high(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}




// ===== sym.trace_rmnet_shs_high_1 @ 0x08004628 (size 52) =====



void sym.trace_rmnet_shs_high_1(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}




// ===== sym.DATARMNETe9173bbe0e @ 0x080046f8 (size 800) =====



ulong sym.DATARMNETe9173bbe0e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t arg1_00;
    int64_t arg2_00;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *arg3;
    if (arg3 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        arg2_00 = 10;
        iVar2 = strncmp(arg3,"rmnet_data");
        iVar3 = *0x8005000;
        if ((iVar2 == 0) && (arg2 - 1U < 6)) {
    //switch table (5 cases) at 0x8002460
            switch(*((arg2 - 1U) * 4 + 0x8002460) + 0x8004748) {
            case 0x800475c:
                if ((*0x80057c9 == '\0') && (*0x80057cd != '\0')) {
                    if (*0x8005000 == 0) {
                        _printk(0x80027ad);
                    }
                    else {
                        *0x80052a0 = 1;
                        if ((*(*0x8005000 + 0xb) >> 5 & 1) != 0) {
                            *0x80052a8 = sym.DATARMNET78bb6be330.cfi_jt;
                            *0x80052b0 = sym.DATARMNETf61cd23b90.cfi_jt;
                        }
                        *0x80052c8 = sym.DATARMNET7f1d9480cb.cfi_jt;
                        *0x80052d0 = sym.DATARMNETa4bd2ef52c.cfi_jt;
                        iVar2 = rmnet_map_dl_ind_register(*0x8005000);
                        if (iVar2 != 0) {
                            _printk(0x8002876,"DATARMNETe9173bbe0e");
                        }
                        iVar2 = qmi_rmnet_ps_ind_register(iVar3,0x80052c8);
                        if (iVar2 != 0) {
                            _printk(0x8002a1d,"DATARMNETe9173bbe0e");
                        }
                        sym.DATARMNET7492293980(arg3);
                        sym.DATARMNET039ac6d55d();
                        iVar3 = sym.DATARMNET0a6fb12cb2(noname_0,arg1_00,arg2_00);
                        sym.DATARMNETe46c480d71(iVar3);
                        *0x80057c9 = '\x01';
                        _delayed_work_timer_fn = 0;
                        rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                        ___cpu_online_mask = sym.DATARMNET756778f14f.cfi_jt;
                        rmnet_module_hook_register(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
                        rmnet_module_hook_register(obj.DATARMNETf6217b20b8,1);
                    }
                }
                else {
                    sym.DATARMNET7492293980(arg3);
                }
                break;
            case 0x8004890:
                bVar1 = *0x8002000 != -1;
                *0x8002000 = *0x8002000 + 1;
                if ((bVar1) && (*0x80057cd == '\0')) {
                    _printk(0x800260c,arg3);
                    iVar3 = rmnet_get_port(*(arg3 + 0xa08));
                    if (iVar3 == 0) {
                        _printk(0x80029a2);
                    }
                    else {
                        sym.DATARMNET45d8cdb224(*(arg3 + 0xa08),arg3);
                        sym.DATARMNET3ae0d614d6();
                        sym.DATARMNETe1f95274f1();
                        *0x80057cb = 1;
                    }
                }
                break;
            case 0x80048f4:
                sym.DATARMNETd6ee05f1b4(arg3);
                break;
            case 0x8004904:
                *0x8002000 = *0x8002000 + -1;
                if ((*0x8002000 == 0) && (*0x80057cd != '\0')) {
                    _printk(0x80025e4,arg3);
                    ___cpu_online_mask = NULL;
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
                    _delayed_work_timer_fn = 0;
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                    rmnet_module_hook_unregister_no_sync(obj.DATARMNETf6217b20b8,1);
                    qmi_rmnet_ps_ind_deregister(*0x80052e8,0x80052c8);
                    rmnet_map_dl_ind_deregister(*0x80052e8,0x80052a0);
                    sym.DATARMNETeacad8334e();
                    sym.DATARMNET90fe3a4b56();
                    uVar4 = sym.DATARMNET02cdd9b125();
                    sym.DATARMNETf7dcab9a9e();
                    sym.DATARMNET9297340f58(uVar4 & 0xffffffff);
                    sym.trace_rmnet_shs_high(1);
                }
            }
        }
    }
    return 0;
}




// ===== sym.__cfi_check_fail @ 0x08004ab4 (size 88) =====



//WARNING: Switch with 1 destination removed at 0x08004af8

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
    //switch table (4 cases) at 0x8002478
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004b0c);
    (*pcVar1)();
}




// ===== sym.DATARMNET71b0abb49e @ 0x08004b0c (size 512) =====



uint32_t sym.DATARMNET71b0abb49e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint32_t arg2_00;
    int16_t *piVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t iVar6;
    int *piVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    uint uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    ushort auStack_80 [2];
    char acStack_7c [4];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    auStack_80[0] = 0;
    if (*(arg3 + 0x28) == '\0') {
        uVar11 = 1;
        if (*(arg3 + 0x29) == '\0') goto code_r0x08004bc8;
code_r0x08004b84:
        uVar9 = *(arg2 + 0x18) == *arg3 && *(arg2 + 0x20) == *(arg3 + 8);
        if (*(arg3 + 0x2b) != '\0') goto code_r0x08004ba8;
code_r0x08004bd4:
        acStack_7c[0] = *(arg2 + 6);
        uVar10 = 1;
    }
    else {
        uVar11 = *(arg2 + 8) == *(arg3 + 0x10) && *(arg2 + 0x10) == *(arg3 + 0x18);
        if (*(arg3 + 0x29) != '\0') goto code_r0x08004b84;
code_r0x08004bc8:
        uVar9 = 1;
        if (*(arg3 + 0x2b) == '\0') goto code_r0x08004bd4;
code_r0x08004ba8:
        acStack_7c[0] = *(arg2 + 6);
        uVar10 = *(arg3 + 0x2a) == acStack_7c[0];
    }
    uVar12 = *(arg3 + 0x22) == 0;
    uVar13 = *(arg3 + 0x26) == 0;
    if (*(arg3 + 0x22) == 0 && *(arg3 + 0x26) == 0) {
        uVar12 = 1;
        piVar7 = arg3;
code_r0x08004c04:
        uVar13 = 1;
code_r0x08004c08:
        uVar13 = uVar11 & uVar9 & uVar10 & uVar12 & uVar13;
    }
    else {
        piVar7 = acStack_7c;
        uVar8 = ipv6_skip_exthdr(arg1,0x28,piVar7,auStack_80);
        if (-1 < uVar8) {
            if (*(arg2 + 6) == '\x11') {
                piVar7 = 0x8;
                piVar3 = sym.DATARMNETefcaf5fbe9(arg1,uVar8,8,&uStack_78);
                if (piVar3 != NULL) {
                    if (*(arg3 + 0x22) != 0) goto code_r0x08004c9c;
code_r0x08004cdc:
                    uVar12 = 1;
                    iVar2 = *(arg3 + 0x26);
                    goto joined_r0x08004ce4;
                }
code_r0x08004cfc:
                uVar12 = 0;
                uVar13 = 0;
            }
            else if (*(arg2 + 6) == '\x06') {
                piVar7 = 0x14;
                piVar3 = sym.DATARMNETefcaf5fbe9(arg1,uVar8,0x14,&uStack_70);
                if (piVar3 == NULL) goto code_r0x08004cfc;
                if (*(arg3 + 0x22) == 0) goto code_r0x08004cdc;
code_r0x08004c9c:
                uVar12 = *piVar3 == *(arg3 + 0x20);
                iVar2 = *(arg3 + 0x26);
joined_r0x08004ce4:
                if (iVar2 == 0) goto code_r0x08004c04;
                uVar13 = piVar3[1] == *(arg3 + 0x24);
            }
            goto code_r0x08004c08;
        }
        uVar13 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar13;
    }
    auVar14 = __stack_chk_fail(uVar13);
    puVar5 = auVar14._8_8_;
    *extraout_x18 = sym.DATARMNETb9e0ebf153;
    pcStack_a8 = sym.DATARMNETb9e0ebf153;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    if (piVar7[10] == '\0') {
        uVar9 = 1;
        if (*(piVar7 + 0x29) == '\0') goto code_r0x08004d9c;
code_r0x08004d64:
        uVar10 = *(puVar5 + 0x10) == *piVar7;
        if (*(piVar7 + 0x2b) != '\0') goto code_r0x08004d7c;
code_r0x08004da8:
        uVar13 = 1;
    }
    else {
        uVar9 = *(puVar5 + 0xc) == piVar7[4];
        if (*(piVar7 + 0x29) != '\0') goto code_r0x08004d64;
code_r0x08004d9c:
        uVar10 = 1;
        if (*(piVar7 + 0x2b) == '\0') goto code_r0x08004da8;
code_r0x08004d7c:
        uVar13 = puVar5[9] == *(piVar7 + 0x2a);
    }
    uVar12 = *(piVar7 + 0x22) == 0;
    uVar8 = *(piVar7 + 0x26) == 0;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar11;
    iStack_98 = arg2;
    iStack_90 = arg1;
    iStack_88 = arg3;
    if (*(piVar7 + 0x22) == 0 && *(piVar7 + 0x26) == 0) {
        uVar12 = 1;
code_r0x08004dd0:
        uVar8 = 1;
    }
    else {
        arg2_00 = (*puVar5 & 0xf) << 2;
        if (puVar5[9] == 0x11) {
            piVar3 = sym.DATARMNETefcaf5fbe9(auVar14._0_8_,arg2_00,8,&uStack_d8);
            if (piVar3 == NULL) {
code_r0x08004e60:
                uVar12 = 0;
                uVar8 = 0;
            }
            else {
                if (*(piVar7 + 0x22) != 0) goto code_r0x08004e0c;
code_r0x08004e40:
                uVar12 = 1;
                if (*(piVar7 + 0x26) == 0) goto code_r0x08004dd0;
code_r0x08004e4c:
                uVar8 = piVar3[1] == piVar7[9];
            }
        }
        else if (puVar5[9] == 6) {
            piVar3 = sym.DATARMNETefcaf5fbe9(auVar14._0_8_,arg2_00,0x14,&uStack_d0);
            if (piVar3 == NULL) goto code_r0x08004e60;
            if (*(piVar7 + 0x22) == 0) goto code_r0x08004e40;
code_r0x08004e0c:
            uVar12 = *piVar3 == piVar7[8];
            if (*(piVar7 + 0x26) != 0) goto code_r0x08004e4c;
            goto code_r0x08004dd0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return uVar9 & uVar10 & uVar13 & uVar12 & uVar8;
    }
    auVar14 = __stack_chk_fail();
    iVar6 = auVar14._8_8_;
    iVar4 = auVar14._0_8_;
    cVar1 = *(iVar4 + 0x4c);
    if (((*(iVar4 + 0x4e) != '\0') && (*(iVar6 + 0x4e) != '\0')) && (*(iVar4 + 0x4e) == *(iVar6 + 0x4e))) {
        return 1;
    }
    if (*(iVar4 + 0x48) == '\0') {
        if (*(iVar6 + 0x48) != '\0') goto code_r0x08004f0c;
        uVar9 = 1;
    }
    else if ((*(iVar6 + 0x48) == '\0') || (cVar1 != '\x04')) {
code_r0x08004f0c:
        uVar9 = *(iVar6 + 0x30) == *(iVar4 + 0x30) && *(iVar6 + 0x38) == *(iVar4 + 0x38);
    }
    else {
        uVar9 = *(iVar4 + 0x30) == *(iVar6 + 0x30);
    }
    if (*(iVar4 + 0x49) == '\0') {
        if (*(iVar6 + 0x49) == '\0') {
            uVar10 = 1;
            goto code_r0x08004f74;
        }
    }
    else if ((*(iVar6 + 0x49) != '\0') && (cVar1 == '\x04')) {
        uVar10 = *(iVar4 + 0x20) == *(iVar6 + 0x20);
        goto code_r0x08004f74;
    }
    uVar10 = *(iVar6 + 0x20) == *(iVar4 + 0x20) && *(iVar6 + 0x28) == *(iVar4 + 0x28);
code_r0x08004f74:
    uVar13 = *(iVar4 + 0x4b) == '\0' && *(iVar6 + 0x4b) == '\0';
    if ((*(iVar4 + 0x4b) != '\0') && (*(iVar6 + 0x4b) != '\0')) {
        uVar13 = *(iVar4 + 0x4a) == *(iVar6 + 0x4a);
    }
    uVar12 = *(iVar4 + 0x42) == 0 && *(iVar6 + 0x42) == 0;
    if ((*(iVar4 + 0x42) != 0) && (*(iVar6 + 0x42) != 0)) {
        uVar12 = *(iVar4 + 0x40) == *(iVar6 + 0x40);
    }
    uVar8 = *(iVar4 + 0x46) == 0 && *(iVar6 + 0x46) == 0;
    if ((*(iVar4 + 0x46) != 0) && (*(iVar6 + 0x46) != 0)) {
        uVar8 = *(iVar4 + 0x44) == *(iVar6 + 0x44);
    }
    return cVar1 == *(iVar6 + 0x4c) & uVar9 & uVar10 & uVar13 & uVar12 & uVar8;
}




// ===== sym.DATARMNETb9e0ebf153 @ 0x08004d0c (size 416) =====



uint8_t sym.DATARMNETb9e0ebf153(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t arg2_00;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int16_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    if (*(arg3 + 0x28) == '\0') {
        bVar2 = true;
        if (*(arg3 + 0x29) != '\0') goto code_r0x08004d64;
code_r0x08004d9c:
        bVar3 = true;
        if (*(arg3 + 0x2b) != '\0') goto code_r0x08004d7c;
code_r0x08004da8:
        bVar4 = true;
    }
    else {
        bVar2 = *(arg2 + 0xc) == *(arg3 + 0x10);
        if (*(arg3 + 0x29) == '\0') goto code_r0x08004d9c;
code_r0x08004d64:
        bVar3 = *(arg2 + 0x10) == *arg3;
        if (*(arg3 + 0x2b) == '\0') goto code_r0x08004da8;
code_r0x08004d7c:
        bVar4 = *(arg2 + 9) == *(arg3 + 0x2a);
    }
    bVar5 = *(arg3 + 0x22) == 0;
    bVar6 = *(arg3 + 0x26) == 0;
    if (*(arg3 + 0x22) == 0 && *(arg3 + 0x26) == 0) {
        bVar5 = true;
code_r0x08004dd0:
        bVar6 = true;
    }
    else {
        arg2_00 = (*arg2 & 0xf) << 2;
        if (*(arg2 + 9) == '\x11') {
            piVar7 = sym.DATARMNETefcaf5fbe9(arg1,arg2_00,8,&uStack_58);
            if (piVar7 == NULL) {
code_r0x08004e60:
                bVar5 = false;
                bVar6 = false;
            }
            else {
                if (*(arg3 + 0x22) != 0) goto code_r0x08004e0c;
code_r0x08004e40:
                bVar5 = true;
                if (*(arg3 + 0x26) == 0) goto code_r0x08004dd0;
code_r0x08004e4c:
                bVar6 = piVar7[1] == *(arg3 + 0x24);
            }
        }
        else if (*(arg2 + 9) == '\x06') {
            piVar7 = sym.DATARMNETefcaf5fbe9(arg1,arg2_00,0x14,&uStack_50);
            if (piVar7 == NULL) goto code_r0x08004e60;
            if (*(arg3 + 0x22) == 0) goto code_r0x08004e40;
code_r0x08004e0c:
            bVar5 = *piVar7 == *(arg3 + 0x20);
            if (*(arg3 + 0x26) != 0) goto code_r0x08004e4c;
            goto code_r0x08004dd0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return bVar2 & bVar3 & bVar4 & bVar5 & bVar6;
    }
    auVar10 = __stack_chk_fail();
    iVar9 = auVar10._8_8_;
    iVar8 = auVar10._0_8_;
    cVar1 = *(iVar8 + 0x4c);
    if (((*(iVar8 + 0x4e) != '\0') && (*(iVar9 + 0x4e) != '\0')) && (*(iVar8 + 0x4e) == *(iVar9 + 0x4e))) {
        return 1;
    }
    if (*(iVar8 + 0x48) == '\0') {
        if (*(iVar9 + 0x48) != '\0') goto code_r0x08004f0c;
        bVar2 = true;
    }
    else if ((*(iVar9 + 0x48) == '\0') || (cVar1 != '\x04')) {
code_r0x08004f0c:
        bVar2 = *(iVar9 + 0x30) == *(iVar8 + 0x30) && *(iVar9 + 0x38) == *(iVar8 + 0x38);
    }
    else {
        bVar2 = *(iVar8 + 0x30) == *(iVar9 + 0x30);
    }
    if (*(iVar8 + 0x49) == '\0') {
        if (*(iVar9 + 0x49) == '\0') {
            bVar3 = true;
            goto code_r0x08004f74;
        }
    }
    else if ((*(iVar9 + 0x49) != '\0') && (cVar1 == '\x04')) {
        bVar3 = *(iVar8 + 0x20) == *(iVar9 + 0x20);
        goto code_r0x08004f74;
    }
    bVar3 = *(iVar9 + 0x20) == *(iVar8 + 0x20) && *(iVar9 + 0x28) == *(iVar8 + 0x28);
code_r0x08004f74:
    bVar4 = *(iVar8 + 0x4b) == '\0' && *(iVar9 + 0x4b) == '\0';
    if ((*(iVar8 + 0x4b) != '\0') && (*(iVar9 + 0x4b) != '\0')) {
        bVar4 = *(iVar8 + 0x4a) == *(iVar9 + 0x4a);
    }
    bVar5 = *(iVar8 + 0x42) == 0 && *(iVar9 + 0x42) == 0;
    if ((*(iVar8 + 0x42) != 0) && (*(iVar9 + 0x42) != 0)) {
        bVar5 = *(iVar8 + 0x40) == *(iVar9 + 0x40);
    }
    bVar6 = *(iVar8 + 0x46) == 0 && *(iVar9 + 0x46) == 0;
    if ((*(iVar8 + 0x46) != 0) && (*(iVar9 + 0x46) != 0)) {
        bVar6 = *(iVar8 + 0x44) == *(iVar9 + 0x44);
    }
    return cVar1 == *(iVar9 + 0x4c) & bVar2 & bVar3 & bVar4 & bVar5 & bVar6;
}




// ===== sym.DATARMNET8fc45abdc4 @ 0x08004eac (size 384) =====



uint8_t sym.DATARMNET8fc45abdc4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    
    cVar1 = *(arg1 + 0x4c);
    if (((*(arg1 + 0x4e) != '\0') && (*(arg2 + 0x4e) != '\0')) && (*(arg1 + 0x4e) == *(arg2 + 0x4e))) {
        return 1;
    }
    if (*(arg1 + 0x48) == '\0') {
        if (*(arg2 + 0x48) != '\0') goto code_r0x08004f0c;
        bVar2 = true;
    }
    else if ((*(arg2 + 0x48) == '\0') || (cVar1 != '\x04')) {
code_r0x08004f0c:
        bVar2 = *(arg2 + 0x30) == *(arg1 + 0x30) && *(arg2 + 0x38) == *(arg1 + 0x38);
    }
    else {
        bVar2 = *(arg1 + 0x30) == *(arg2 + 0x30);
    }
    if (*(arg1 + 0x49) == '\0') {
        if (*(arg2 + 0x49) == '\0') {
            bVar3 = true;
            goto code_r0x08004f74;
        }
    }
    else if ((*(arg2 + 0x49) != '\0') && (cVar1 == '\x04')) {
        bVar3 = *(arg1 + 0x20) == *(arg2 + 0x20);
        goto code_r0x08004f74;
    }
    bVar3 = *(arg2 + 0x20) == *(arg1 + 0x20) && *(arg2 + 0x28) == *(arg1 + 0x28);
code_r0x08004f74:
    bVar4 = *(arg1 + 0x4b) == '\0' && *(arg2 + 0x4b) == '\0';
    if ((*(arg1 + 0x4b) != '\0') && (*(arg2 + 0x4b) != '\0')) {
        bVar4 = *(arg1 + 0x4a) == *(arg2 + 0x4a);
    }
    bVar5 = *(arg1 + 0x42) == 0 && *(arg2 + 0x42) == 0;
    if ((*(arg1 + 0x42) != 0) && (*(arg2 + 0x42) != 0)) {
        bVar5 = *(arg1 + 0x40) == *(arg2 + 0x40);
    }
    bVar6 = *(arg1 + 0x46) == 0 && *(arg2 + 0x46) == 0;
    if ((*(arg1 + 0x46) != 0) && (*(arg2 + 0x46) != 0)) {
        bVar6 = *(arg1 + 0x44) == *(arg2 + 0x44);
    }
    return cVar1 == *(arg2 + 0x4c) & bVar2 & bVar3 & bVar4 & bVar5 & bVar6;
}




// ===== sym.DATARMNETe24386452c @ 0x0800502c (size 428) =====



void sym.DATARMNETe24386452c(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    uStack_38 = *(iVar3 + 0x5e0);
    uStack_68 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    _raw_spin_lock_bh(0x8004160);
    if (*(arg1 + 0xb0) != -0x227a) {
        if ((*(arg1 + 0xb0) != 8) || (iVar3 = sym.DATARMNETefcaf5fbe9(arg1,0,0x14,&uStack_78), iVar3 == 0))
        goto code_r0x08005194;
        if (*(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt +
             (*(iVar3 + 0xc) * 0x61c88647 >> 0x17) * 8) != 0) {
            iVar1 = *(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt +
                     (*(iVar3 + 0xc) * 0x61c88647 >> 0x17) * 8) + -0x10;
            while (iVar1 != 0) {
                iVar4 = *(iVar1 + 0x10);
                iVar2 = sym.DATARMNETb9e0ebf153(arg1,iVar3,iVar1 + 0x20);
                if (iVar2 != 0) break;
                iVar1 = 0;
                if (iVar4 != 0) {
                    iVar1 = iVar4 + -0x10;
                }
            }
        }
    }
    iVar3 = sym.DATARMNETefcaf5fbe9(arg1,0,0x28,&uStack_60);
    if ((iVar3 != 0) &&
       (*(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt + (*(iVar3 + 8) * 0x61c88647 >> 0x17) * 8)
        != 0)) {
        iVar1 = *(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt +
                 (*(iVar3 + 8) * 0x61c88647 >> 0x17) * 8) + -0x10;
        while (iVar1 != 0) {
            iVar4 = *(iVar1 + 0x10);
            iVar2 = sym.DATARMNET71b0abb49e(arg1,iVar3,iVar1 + 0x20);
            if (iVar2 != 0) break;
            iVar1 = 0;
            if (iVar4 != 0) {
                iVar1 = iVar4 + -0x10;
            }
        }
    }
code_r0x08005194:
    _raw_spin_unlock_bh(0x8004160);
    return;
}




// ===== sym.DATARMNETd52d50282d @ 0x080051d8 (size 344) =====



void sym.DATARMNETd52d50282d(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8004160);
    uVar4 = 0;
    do {
        arg1_00 = *(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt + uVar4 * 8) + -0x10;
        if (*(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt + uVar4 * 8) == 0 || arg1_00 == 0) {
            arg1_00 = 0;
        }
        else {
            do {
                iVar5 = *(arg1_00 + 0x10);
                iVar2 = sym.DATARMNET8fc45abdc4(arg1_00,arg1);
                if (iVar2 != 0) {
                    piVar3 = *(arg1_00 + 0x18);
                    if (piVar3 != NULL) {
                        *piVar3 = iVar5;
                        if (iVar5 != 0) {
                            *(iVar5 + 8) = piVar3;
                        }
                        *(arg1_00 + 0x18) = 0;
                    }
                    kfree(arg1_00);
                    break;
                }
                arg1_00 = 0;
                if (iVar5 != 0) {
                    arg1_00 = iVar5 + -0x10;
                }
            } while (arg1_00 != 0);
        }
        if ((arg1_00 != 0) || (bVar1 = 0x1fe < uVar4, uVar4 = uVar4 + 1, bVar1)) {
            _raw_spin_unlock_bh(0x8004160);
            _raw_spin_lock_bh(0x8005f0c);
            return;
        }
    } while( true );
}




// ===== sym.DATARMNET1e918c8e0d @ 0x08005330 (size 328) =====



void sym.DATARMNET1e918c8e0d(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002aa3,*(arg1 + 0x4b),*(arg1 + 0x48),*(arg1 + 0x49),*(arg1 + 0x46),*(arg1 + 0x42),*(arg1 + 0x4c),
            *(arg1 + 0x4e));
    _printk(0x800289e,*(arg1 + 0x4c));
    return;
}




// ===== sym.DATARMNET2ac305d296 @ 0x08005478 (size 424) =====



void sym.DATARMNET2ac305d296(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8004160);
    return;
}




// ===== sym.DATARMNET337eca0417 @ 0x08005620 (size 116) =====



void sym.DATARMNET337eca0417(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 200) == 0) {
        uVar1 = *0x80057d1;
        if (*0x80057d0 == '\0') {
            return;
        }
    }
    else {
        uVar1 = *(arg2 + 0xca);
        if ((*(arg2 + 200) & 0xff) == 0) {
            return;
        }
    }
    uVar2 = sym.DATARMNET8532ab3089(*(arg2 + 0xc4),uVar1,*(arg2 + 0xc0));
    *(arg1 + 0x94) = uVar2;
    return;
}




// ===== sym.DATARMNETf5821256ad @ 0x08005694 (size 1284) =====



ulong sym.DATARMNETf5821256ad(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ushort uVar5;
    uint uVar6;
    int iVar7;
    uint64_t arg1_00;
    ulong uVar8;
    int64_t extraout_x1;
    uchar uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar12 = *0x80057d0;
    _sym.__cfi_check = _sym.__cfi_check + 1;
    if ((*(arg1 + 0x81) & 3) == 0) {
        __skb_get_hash(arg1);
        arg2 = extraout_x1;
    }
    iVar7 = *(arg1 + 0x94);
    _raw_spin_lock_bh(0x8004160,arg2);
    iVar11 = *(obj.DATARMNET58fe8ac797 + (iVar7 * 0x61c88647 >> 0x17) * 8) + -0x80;
    if (*(obj.DATARMNET58fe8ac797 + (iVar7 * 0x61c88647 >> 0x17) * 8) != 0 && iVar11 != 0) {
        do {
            if (iVar7 == *(iVar11 + 0xc0)) {
                arg1_00 = *0x8002000;
                *(iVar11 + 0xc6) = *0x8002000;
                uVar5 = sym.DATARMNET04e8d1b862(arg1_00,uVar12);
                *(iVar11 + 0xc4) = uVar5;
                _raw_spin_unlock_bh(0x8004160);
                if (*(iVar11 + 200) == 0) {
                    uVar2 = *0x80057d1;
                    if (*0x80057d0 != 0) goto code_r0x08005904;
                }
                else {
                    uVar2 = *(iVar11 + 0xca);
                    if ((*(iVar11 + 200) & 0xff) != 0) {
code_r0x08005904:
                        uVar6 = sym.DATARMNET8532ab3089(*(iVar11 + 0xc4),uVar2,*(iVar11 + 0xc0));
                        *(arg1 + 0x94) = uVar6;
                    }
                }
                if (*(iVar11 + 0xd4) != '\x02') {
                    if (*(iVar11 + 0xd4) == '\0') {
                        iVar3 = tpidr_el1;
                        uVar10 = *(cpu_number + iVar3);
                        if ((0xffffff07U >> (uVar10 & 0x1f) & 1) == 0) goto code_r0x08005944;
                        if (0x1f < uVar10) goto code_r0x08005b58;
                        if (*(hrtimer_active + *(__per_cpu_offset + uVar10 * 8)) +
                            *(cpus_read_unlock + *(__per_cpu_offset + uVar10 * 8)) < 0x14) {
                            iVar7 = sym.DATARMNETdc7bead533(uVar10,4000);
                            if (iVar7 == 0) {
                                if (*(iVar11 + 0xd4) != '\0') goto code_r0x08005a34;
                                goto code_r0x08005a18;
                            }
                            goto code_r0x080059fc;
                        }
code_r0x08005a18:
                        uVar9 = 1;
code_r0x08005a1c:
                        *(iVar11 + 0xd4) = uVar9;
                        *(iVar11 + 0xc6) = 0;
                        uVar5 = sym.DATARMNET04e8d1b862(0,uVar12);
                        *(iVar11 + 0xc4) = uVar5;
                    }
                    else {
code_r0x08005944:
                        iVar3 = tpidr_el1;
                        uVar10 = *(cpu_number + iVar3);
                        if ((0xffffff07U >> (uVar10 & 0x1f) & 1) == 0) {
                            if (0x1f < uVar10) goto code_r0x08005b58;
                            if ((0x13 < *(hrtimer_active + *(__per_cpu_offset + uVar10 * 8)) +
                                        *(cpus_read_unlock + *(__per_cpu_offset + uVar10 * 8))) ||
                               (iVar7 = sym.DATARMNETdc7bead533(uVar10,12000), iVar7 == 0)) {
                                uVar9 = 2;
                                goto code_r0x08005a1c;
                            }
code_r0x080059fc:
                            *(arg1 + 0x94) = 0;
                            *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
                        }
                    }
                }
code_r0x08005a34:
                uVar12 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 6);
                if (uVar12 == 0) {
                    *(iVar11 + 0x90) = *(iVar11 + 0x90) + 1;
                    if (7 < *(iVar11 + 0xc6)) goto code_r0x08005b58;
                    iVar3 = *(iVar11 + 0xc6) * 0x28;
                    uVar10 = 1;
                    *(iVar3 + 0x8005804) = *(iVar3 + 0x8005804) + 1;
                }
                else {
                    *(iVar11 + 0x90) = *(iVar11 + 0x90) + uVar12;
                    if (7 < *(iVar11 + 0xc6)) {
code_r0x08005b58:
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x5512,0x8005b5c);
                        (*pcVar4)();
                    }
                    iVar3 = *(iVar11 + 0xc6) * 0x28;
                    *(iVar3 + 0x8005804) = *(iVar3 + 0x8005804) + 1;
                    uVar10 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 6);
                }
                *(iVar11 + 0x7c) = *(iVar11 + 0x7c) + uVar10;
                *(iVar11 + 0x98) = *(iVar11 + 0x98) + 1;
                *(iVar11 + 0xa8) = *(iVar11 + 0xa8) + *(arg1 + 0x2c);
                *(iVar11 + 0xb0) = *(iVar11 + 0xb0) + *(arg1 + 0x30);
                if (*(arg1 + 0x8c) == 0xda1a) {
                    *(iVar11 + 0xb8) = *(iVar11 + 0xb8) + 1;
                }
                *(iVar11 + 0xa0) = *(iVar11 + 0xa0) + *(arg1 + 0x70);
                goto code_r0x08005b28;
            }
            piVar1 = iVar11 + 0x80;
            iVar11 = 0;
            if (*piVar1 != 0) {
                iVar11 = *piVar1 + -0x80;
            }
        } while (iVar11 != 0);
    }
    if (*0x8002000 < 0) {
        pcVar4 = sym.DATARMNET36e5e526fa;
    }
    else {
        if (*0x80057c0 < 0x2bd) {
            uVar8 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0xd8);
            return uVar8;
        }
        pcVar4 = 0x800b520;
    }
    *pcVar4 = *pcVar4 + 1;
    _raw_spin_unlock_bh(0x8004160);
code_r0x08005b28:
    sym.DATARMNETe767554e6e(arg1);
    return 0;
}




// ===== sym.DATARMNET44499733f2 @ 0x08005b98 (size 112) =====



void sym.DATARMNET44499733f2(void)

{
    *0x8004020 = 0x8004020;
    *0x8004028 = 0x8004020;
    *0x8004048 = 0x8004048;
    *0x8004050 = 0x8004048;
    *0x8004070 = 0x8004070;
    *0x8004078 = 0x8004070;
    *0x8004098 = 0x8004098;
    *0x80040a0 = 0x8004098;
    *0x80040c0 = 0x80040c0;
    *0x80040c8 = 0x80040c0;
    *0x80040e8 = 0x80040e8;
    *0x80040f0 = 0x80040e8;
    *0x8004110 = 0x8004110;
    *0x8004118 = 0x8004110;
    *0x8004138 = 0x8004138;
    *0x8004140 = 0x8004138;
    return;
}




// ===== sym.DATARMNET90fe3a4b56 @ 0x08005c08 (size 308) =====



void sym.DATARMNET90fe3a4b56(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8004160);
    iVar3 = 0;
    do {
        iVar4 = *(obj.DATARMNET58fe8ac797 + iVar3 * 8) + -0x10;
        if (*(obj.DATARMNET58fe8ac797 + iVar3 * 8) != 0 && iVar4 != 0) {
            do {
                iVar1 = *(iVar4 + 0x10);
                piVar2 = *(iVar4 + 0x18);
                if (piVar2 != NULL) {
                    *piVar2 = iVar1;
                    if (iVar1 != 0) {
                        *(iVar1 + 8) = piVar2;
                    }
                    *(iVar4 + 0x18) = 0;
                }
                iVar4 = 0;
                if (iVar1 != 0) {
                    iVar4 = iVar1 + -0x10;
                }
            } while (iVar4 != 0);
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 0x200);
    iVar3 = 0;
    do {
        iVar4 = *(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt + iVar3 * 8) + -0x10;
        if (*(reloc.DATARMNETb3a7180954.19721571eac14341b021edd2d7ccdec0.cfi_jt + iVar3 * 8) != 0 && iVar4 != 0) {
            do {
                iVar1 = *(iVar4 + 0x10);
                piVar2 = *(iVar4 + 0x18);
                if (piVar2 != NULL) {
                    *piVar2 = iVar1;
                    if (iVar1 != 0) {
                        *(iVar1 + 8) = piVar2;
                    }
                    *(iVar4 + 0x18) = 0;
                }
                kfree();
                iVar4 = 0;
                if (iVar1 != 0) {
                    iVar4 = iVar1 + -0x10;
                }
                *0x80057c8 = *0x80057c8 + -1;
                _sym.__cfi_check = _sym.__cfi_check + -1;
            } while (iVar4 != 0);
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 0x200);
    _raw_spin_unlock_bh(0x8004160);
    return;
}




// ===== sym.DATARMNET713da9913c @ 0x08005d3c (size 420) =====



void sym.DATARMNET713da9913c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    uint64_t *extraout_x8;
    uint64_t *puVar8;
    uint64_t uVar9;
    uint64_t extraout_x9;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t uVar10;
    ulong unaff_x30;
    uint64_t auStack_40 [2];
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    auStack_40[1] = *(iVar6 + 0x5e0);
    auStack_40[0] = 0;
    puVar7 = *(arg1 + 0x40);
    uVar10 = arg2;
    if (puVar7 != NULL) {
        *(puVar7 + 6) = arg2 & 0xff;
        *puVar7 = 1;
        arg1 = unaff_x19;
        if ((1 << (uVar10 & 0x1f) & 0xf8U) == 0) {
            uVar5 = 0;
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            uVar5 = 0;
            *0x800b000 = *0x800b000 + 1;
        }
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == auStack_40[1]) break;
            __stack_chk_fail(uVar5);
            puVar8 = extraout_x8;
            uVar9 = extraout_x9;
code_r0x08005eb8:
            Hint_Prefetch(puVar8,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar3) {
                    *puVar8 = *puVar8 | uVar9;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            iVar4 = __sw_hweight64(auStack_40[0] & 0xffffffff);
            uVar1 = iVar4 * 2 + 0x18;
            if (uVar1 < 0x41) {
                uVar1 = 0x40;
            }
            puVar7 = __kmalloc(uVar1,0xb20);
            if (puVar7 == NULL) {
                uVar5 = 0xfffffffffffffff4;
            }
            else {
                *puVar7 = 1;
                iVar6 = 0x40;
                if ((1 << (uVar10 & 0x1f) & 0xf8U) != 0) {
                    iVar6 = 0x48;
                }
                *(puVar7 + 6) = arg2 & 0xff;
                *(obj.DATARMNETb7ddf3c5dd + iVar6) = *(obj.DATARMNETb7ddf3c5dd + iVar6) + 1;
                __rcu_read_lock();
                iVar6 = *(arg1 + 0x40);
                *(arg1 + 0x40) = puVar7;
                if (iVar6 != 0) {
                    kfree();
                }
                __rcu_read_unlock();
                uVar5 = 0;
            }
        }
        return;
    }
    puVar8 = auStack_40 + (uVar10 >> 3 & 0x18);
    uVar9 = 1L << (arg2 & 0x3fU);
    goto code_r0x08005eb8;
}




// ===== sym.DATARMNET9303cec796 @ 0x08005ee0 (size 24) =====



uint64_t sym.DATARMNET9303cec796(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t extraout_x8;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    int iStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    uint uStack_d8;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_d8 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    iStack_ec = 0;
    iVar3 = rmnet_module_hook_perf_ingress(&iStack_ec,arg1);
    if ((iVar3 != 0) && (uVar5 = 0, iStack_ec == 0)) goto code_r0x080062d0;
    if (*(arg1 + 0xb0) == -0x227a) {
        iVar4 = sym.DATARMNETefcaf5fbe9(arg1,0,0x28,&uStack_70);
        if (iVar4 != 0) {
            cVar2 = *(iVar4 + 6);
            uVar5 = 1;
            if ((cVar2 == '\x06') || (cVar2 == '\x11')) goto code_r0x080062d0;
            if (cVar2 == ':') {
                *(arg1 + 0x94) = 0;
                *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
                ktime_get_with_offset(1);
                auVar7 = ns_to_timespec64();
                iVar6 = *0x80057d8;
                iVar4 = 0x7fffffffffffffff;
                if (auVar7._0_8_ < 0x225c17d04) {
                    iVar4 = auVar7._8_8_ + auVar7._0_8_ * 1000000000;
                }
                uVar5 = hrtimer_active(0x8005258);
                if ((uVar5 & 1) == 0) {
                    hrtimer_start_range_ns(0x8005258,1200000000,0,3);
                    __pm_stay_awake(*0x80057e0);
                }
                else {
                    hrtimer_cancel(0x8005258);
                    hrtimer_start_range_ns(0x8005258,1200000000,0,3);
                }
                *0x8017000 = 2;
                uVar5 = hrtimer_active(0x8005210);
                if (((uVar5 & 1) == 0) &&
                   ((hrtimer_start_range_ns(0x8005210,950000000,0,3), iVar4 - iVar6 < 201000000 || (*0x80057d8 == 0)
                    ))) {
                    *arg2 = 1;
                }
                else {
                    *0x800b000 = *0x800b000 + 1;
                }
            }
        }
    }
    else if ((*(arg1 + 0xb0) == 8) && (iVar4 = sym.DATARMNETefcaf5fbe9(arg1,0,0x14,&uStack_e8), iVar4 != 0)) {
        cVar2 = *(iVar4 + 9);
        if ((*(iVar4 + 6) & 0xff3f) == 0) {
            if (cVar2 == '\x01') goto code_r0x08006078;
            uVar5 = 1;
            if ((cVar2 == '\x06') || (cVar2 == '\x11')) goto code_r0x080062d0;
        }
        else if (cVar2 == '\x01') {
code_r0x08006078:
            *(arg1 + 0x94) = 0;
            *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
            ktime_get_with_offset(1);
            auVar7 = ns_to_timespec64();
            iVar6 = *0x80057d8;
            iVar4 = 0x7fffffffffffffff;
            if (auVar7._0_8_ < 0x225c17d04) {
                iVar4 = auVar7._8_8_ + auVar7._0_8_ * 1000000000;
            }
            uVar5 = hrtimer_active(0x8005258);
            if ((uVar5 & 1) == 0) {
                hrtimer_start_range_ns(0x8005258,1200000000,0,3);
                __pm_stay_awake(*0x80057e0);
            }
            else {
                hrtimer_cancel(0x8005258);
                hrtimer_start_range_ns(0x8005258,1200000000,0,3);
            }
            *0x8017000 = 2;
            uVar5 = hrtimer_active(0x8005210);
            if (((uVar5 & 1) == 0) &&
               ((hrtimer_start_range_ns(0x8005210,950000000,0,3), iVar4 - iVar6 < 201000000 || (*0x80057d8 == 0))))
            {
                *arg2 = 1;
            }
            else {
                *0x800b000 = *0x800b000 + 1;
            }
        }
    }
    uVar5 = 0;
code_r0x080062d0:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        iVar4 = tpidr_el1;
        uVar5 = extraout_x8;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1) !=
            0) {
            iVar4 = sp_el0;
            piVar1 = iVar4 + 0x10;
            *(iVar4 + 0x10) = *piVar1 + 1;
            uVar5 = extraout_x8 & 0xffffffff;
            __traceiter_rmnet_shs_low(0,2,10,extraout_x8 & 0xffffffff,0xdef,0xdef,0xdef,arg1,0);
            iVar6 = *piVar1;
            *(iVar4 + 0x10) = iVar6 + -1;
            if ((iVar6 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return uVar5 & 0xffffffff;
}




// ===== obj.DATARMNETf141197982 @ 0x08005ef8 (size 1196) =====



uint64_t obj.DATARMNETf141197982(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t extraout_x8;
    int64_t iVar6;
    int64_t unaff_x29;
    uchar auVar7 [16];
    int iStack0000000000000014;
    ulong uStack0000000000000018;
    ulong uStack0000000000000020;
    uint uStack0000000000000028;
    
    iVar4 = sp_el0;
    *(unaff_x29 + -8) = *(iVar4 + 0x5e0);
    uStack0000000000000028 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000020 = 0;
    *(unaff_x29 + -0x18) = 0;
    *(unaff_x29 + -0x10) = 0;
    *(unaff_x29 + -0x28) = 0;
    *(unaff_x29 + -0x20) = 0;
    *(unaff_x29 + -0x30) = 0;
    iStack0000000000000014 = 0;
    iVar3 = rmnet_module_hook_perf_ingress(&stack0x00000014,arg1);
    if ((iVar3 != 0) && (uVar5 = 0, iStack0000000000000014 == 0)) goto code_r0x080062d0;
    if (*(arg1 + 0xb0) == -0x227a) {
        iVar4 = sym.DATARMNETefcaf5fbe9(arg1,0,0x28,unaff_x29 + -0x30);
        if (iVar4 != 0) {
            cVar2 = *(iVar4 + 6);
            uVar5 = 1;
            if ((cVar2 == '\x06') || (cVar2 == '\x11')) goto code_r0x080062d0;
            if (cVar2 == ':') {
                *(arg1 + 0x94) = 0;
                *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
                uVar5 = ktime_get_with_offset(1);
                return uVar5;
            }
        }
    }
    else if ((*(arg1 + 0xb0) == 8) && (iVar4 = sym.DATARMNETefcaf5fbe9(arg1,0,0x14,&stack0x00000018), iVar4 != 0)) {
        cVar2 = *(iVar4 + 9);
        if ((*(iVar4 + 6) & 0xff3f) == 0) {
            if (cVar2 == '\x01') goto code_r0x08006078;
            uVar5 = 1;
            if ((cVar2 == '\x06') || (cVar2 == '\x11')) goto code_r0x080062d0;
        }
        else if (cVar2 == '\x01') {
code_r0x08006078:
            *(arg1 + 0x94) = 0;
            *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
            ktime_get_with_offset(1);
            auVar7 = ns_to_timespec64();
            iVar6 = *0x80057d8;
            iVar4 = 0x7fffffffffffffff;
            if (auVar7._0_8_ < 0x225c17d04) {
                iVar4 = auVar7._8_8_ + auVar7._0_8_ * 1000000000;
            }
            uVar5 = hrtimer_active(0x8005258);
            if ((uVar5 & 1) == 0) {
                hrtimer_start_range_ns(0x8005258,1200000000,0,3);
                __pm_stay_awake(*0x80057e0);
            }
            else {
                hrtimer_cancel(0x8005258);
                hrtimer_start_range_ns(0x8005258,1200000000,0,3);
            }
            *0x8017000 = 2;
            uVar5 = hrtimer_active(0x8005210);
            if (((uVar5 & 1) == 0) &&
               ((hrtimer_start_range_ns(0x8005210,950000000,0,3), iVar4 - iVar6 < 201000000 || (*0x80057d8 == 0))))
            {
                *arg2 = 1;
            }
            else {
                *0x800b000 = *0x800b000 + 1;
            }
        }
    }
    uVar5 = 0;
code_r0x080062d0:
    while (iVar4 = sp_el0, *(iVar4 + 0x5e0) != *(unaff_x29 + -8)) {
        __stack_chk_fail();
        iVar4 = tpidr_el1;
        uVar5 = extraout_x8;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1) !=
            0) {
            iVar4 = sp_el0;
            piVar1 = iVar4 + 0x10;
            *(iVar4 + 0x10) = *piVar1 + 1;
            uVar5 = extraout_x8 & 0xffffffff;
            __traceiter_rmnet_shs_low(0,2,10,extraout_x8 & 0xffffffff,0xdef,0xdef,0xdef,arg1);
            iVar6 = *piVar1;
            *(iVar4 + 0x10) = iVar6 + -1;
            if ((iVar6 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return uVar5 & 0xffffffff;
}




// ===== fcn.08006228 @ 0x08006228 (size 532) =====



uint64_t fcn.08006228(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint64_t extraout_x8;
    int64_t iVar5;
    int64_t unaff_x19;
    uint8_t *unaff_x21;
    int64_t unaff_x29;
    ulong uStack0000000000000030;
    ulong uStack0000000000000038;
    ulong uStack0000000000000040;
    ulong uStack0000000000000048;
    ulong uStack0000000000000050;
    ulong uStack0000000000000058;
    ulong uStack0000000000000060;
    ulong uStack0000000000000068;
    ulong uStack0000000000000070;
    ulong uStack0000000000000078;
    ulong uStack0000000000000080;
    ulong uStack0000000000000088;
    
    uStack0000000000000060 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000078 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000088 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    uStack0000000000000048 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000058 = 0;
    puVar3 = sym.DATARMNETefcaf5fbe9(unaff_x19,(*unaff_x21 & 0xf) << 2,8,arg1);
    if (puVar3 != NULL) {
        if ((*puVar3 | 8) == 8) {
            snprintf(&stack0x00000060,0x30,"%pI4",unaff_x21 + 0xc);
            snprintf(&stack0x00000030,0x30,"%pI4",unaff_x21 + 0x10);
            sym.trace_print_icmp_rx();
        }
    }
    uVar4 = 0;
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != *(unaff_x29 + -8)) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        uVar4 = extraout_x8;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            uVar4 = extraout_x8 & 0xffffffff;
            __traceiter_rmnet_shs_low(0,2,10,extraout_x8 & 0xffffffff,0xdef,0xdef,0xdef);
            iVar5 = *piVar1;
            *(iVar2 + 0x10) = iVar5 + -1;
            if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return uVar4 & 0xffffffff;
}




// ===== fcn.080063bc @ 0x080063bc (size 112) =====



uint64_t fcn.080063bc(int64_t arg1,int64_t arg2,int64_t arg4,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    char *pcVar3;
    uint64_t uVar4;
    uint64_t extraout_x8;
    int64_t iVar5;
    int64_t unaff_x21;
    int64_t unaff_x29;
    ulong uStack0000000000000030;
    ulong uStack0000000000000038;
    ulong uStack0000000000000040;
    ulong uStack0000000000000048;
    ulong uStack0000000000000050;
    ulong uStack0000000000000058;
    ulong uStack0000000000000060;
    ulong uStack0000000000000068;
    ulong uStack0000000000000070;
    ulong uStack0000000000000078;
    ulong uStack0000000000000080;
    ulong uStack0000000000000088;
    
    uStack0000000000000060 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000078 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000088 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000040 = 0;
    uStack0000000000000048 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000058 = 0;
    pcVar3 = sym.DATARMNETefcaf5fbe9(arg1,arg2,arg4,arg3);
    if ((pcVar3 != NULL) && (*pcVar3 < -0x7e)) {
        snprintf(&stack0x00000060,0x30,"%pI6",unaff_x21 + 8);
        snprintf(&stack0x00000030,0x30,"%pI6",unaff_x21 + 0x18);
        sym.trace_print_icmp_rx();
    }
    uVar4 = 0;
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != *(unaff_x29 + -8)) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        uVar4 = extraout_x8;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            piVar1 = iVar2 + 0x10;
            *(iVar2 + 0x10) = *piVar1 + 1;
            uVar4 = extraout_x8 & 0xffffffff;
            __traceiter_rmnet_shs_low(0,2,10,extraout_x8 & 0xffffffff,0xdef,0xdef,0xdef);
            iVar5 = *piVar1;
            *(iVar2 + 0x10) = iVar5 + -1;
            if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return uVar4 & 0xffffffff;
}




// ===== sym.trace_print_icmp_rx @ 0x0800644c (size 44) =====



void sym.trace_print_icmp_rx(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}




// ===== sym.trace_rmnet_shs_low @ 0x0800650c (size 52) =====



void sym.trace_rmnet_shs_low(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    return;
}




// ===== sym.DATARMNETe767554e6e @ 0x080065e0 (size 76) =====



void sym.DATARMNETe767554e6e(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    netif_receive_skb(arg1);
    return;
}




// ===== fcn.08006690 @ 0x08006690 (size 48) =====



void fcn.08006690(ulong param_1)

{
    int64_t iVar1;
    int64_t *unaff_x19;
    int64_t unaff_x20;
    ulong uStack0000000000000000;
    ulong uStack0000000000000008;
    
    uStack0000000000000000 = 0;
    uStack0000000000000008 = param_1;
    __traceiter_rmnet_shs_low();
    iVar1 = *unaff_x19;
    *(unaff_x20 + 0x10) = iVar1 + -1;
    if ((iVar1 + -1 == 0) || (*unaff_x19 == 0)) {
        preempt_schedule_notrace();
    }
    netif_receive_skb(uStack0000000000000008);
    return;
}




// ===== sym.DATARMNET514ce0bf59 @ 0x080066d0 (size 76) =====



void sym.DATARMNET514ce0bf59(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    netif_rx_ni(arg1);
    return;
}




// ===== fcn.08006780 @ 0x08006780 (size 48) =====



void fcn.08006780(ulong param_1)

{
    int64_t iVar1;
    int64_t *unaff_x19;
    int64_t unaff_x20;
    ulong uStack0000000000000000;
    ulong uStack0000000000000008;
    
    uStack0000000000000000 = 0;
    uStack0000000000000008 = param_1;
    __traceiter_rmnet_shs_low();
    iVar1 = *unaff_x19;
    *(unaff_x20 + 0x10) = iVar1 + -1;
    if ((iVar1 + -1 == 0) || (*unaff_x19 == 0)) {
        preempt_schedule_notrace();
    }
    netif_rx_ni(uStack0000000000000008);
    return;
}




// ===== sym.DATARMNET2efb1a51c7 @ 0x080067c0 (size 80) =====



int sym.DATARMNET2efb1a51c7(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = *(*(arg1 + 0x58) + 0x11c);
    return (uVar1 >> 1 & 1) + (uVar1 & 1) + (uVar1 >> 2 & 1) + (uVar1 >> 3 & 1) + (uVar1 >> 4 & 1) + (uVar1 >> 5 & 1) +
           (uVar1 >> 6 & 1) + (uVar1 >> 7 & 1);
}




// ===== sym.DATARMNET762cfa52fe @ 0x08006810 (size 656) =====



uint sym.DATARMNET762cfa52fe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    
    uVar1 = arg1;
    if ((arg1 & 1U) == 0) {
        uVar4 = 0xffffffff;
        iVar5 = -1;
    }
    else {
        if (*0x80057e8 == 0x80057e8) {
            return 0;
        }
        uVar4 = 0;
        iVar5 = *0x8005000;
    }
    if (((uVar1 & 0xff) >> 1 & 1) != 0) {
        if (*0x8005810 == 0x8005810) {
            return 1;
        }
        if (iVar5 == -1 || *0x8005000 <= iVar5) {
            uVar4 = 1;
            iVar5 = *0x8005000;
        }
    }
    iVar2 = iVar5;
    uVar3 = uVar4;
    if (((uVar1 & 0xff) >> 2 & 1) != 0) {
        if (*0x8005838 == 0x8005838) {
            return 2;
        }
        iVar2 = *0x8005000;
        uVar3 = 2;
        if (iVar5 != -1 && iVar5 < *0x8005000) {
            iVar2 = iVar5;
            uVar3 = uVar4;
        }
    }
    iVar5 = iVar2;
    uVar4 = uVar3;
    if (((uVar1 & 0xff) >> 3 & 1) != 0) {
        if (*0x8005860 == 0x8005860) {
            return 3;
        }
        iVar5 = *0x8005000;
        uVar4 = 3;
        if (iVar2 != -1 && iVar2 < *0x8005000) {
            iVar5 = iVar2;
            uVar4 = uVar3;
        }
    }
    iVar2 = iVar5;
    uVar3 = uVar4;
    if (((uVar1 & 0xff) >> 4 & 1) != 0) {
        if (*0x8005888 == 0x8005888) {
            return 4;
        }
        iVar2 = *0x8005000;
        uVar3 = 4;
        if (iVar5 != -1 && iVar5 < *0x8005000) {
            iVar2 = iVar5;
            uVar3 = uVar4;
        }
    }
    iVar5 = iVar2;
    uVar4 = uVar3;
    if (((uVar1 & 0xff) >> 5 & 1) != 0) {
        if (*0x80058b0 == 0x80058b0) {
            return 5;
        }
        iVar5 = *0x8005000;
        uVar4 = 5;
        if (iVar2 != -1 && iVar2 < *0x8005000) {
            iVar5 = iVar2;
            uVar4 = uVar3;
        }
    }
    iVar2 = iVar5;
    uVar3 = uVar4;
    if (((uVar1 & 0xff) >> 6 & 1) != 0) {
        if (*0x80058d8 == 0x80058d8) {
            return 6;
        }
        iVar2 = *0x8005000;
        uVar3 = 6;
        if (iVar5 != -1 && iVar5 < *0x8005000) {
            iVar2 = iVar5;
            uVar3 = uVar4;
        }
    }
    if ((uVar1 & 0xff) >> 7 != 0) {
        if (*0x8005900 != 0x8005900) {
            uVar4 = 7;
            if (iVar2 < *0x8005000 && iVar2 != -1) {
                uVar4 = uVar3;
            }
            return uVar4;
        }
        return 7;
    }
    return uVar3;
}




// ===== sym.DATARMNET6af33ebb5b @ 0x08006ac0 (size 1244) =====



//WARNING: Type propagation algorithm not settling

uint64_t sym.DATARMNET6af33ebb5b(uint32_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int iVar8;
    int iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar7 = arg1;
    *in_x18 = unaff_x30;
    if (*(uVar7 + 0xcc) != '\0') {
        return *0x80057d2;
    }
    uVar6 = *(uVar7 + 0xc6);
    if (7 < uVar6) {
code_r0x08006f98:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8006f9c);
        (*pcVar3)();
    }
    uVar5 = *(uVar7 + 0xc6);
    if ((*(uVar6 * 0x28 + 0x800580c) != '\0') && ((0xffffff07U >> (uVar5 & 0x1f) & 1) != 0)) {
        uVar5 = *(uVar7 + 200) & (*0x80057cf ^ 0xffffffff);
        if ((uVar5 >> 3 & 1) == 0) {
            uVar4 = 0xffffffff;
            iVar9 = -1;
        }
        else {
            if (*0x8005860 == 0x8005860) {
                return 3;
            }
            uVar4 = 3;
            iVar9 = *0x8005000;
        }
        iVar8 = iVar9;
        uVar2 = uVar4;
        if ((uVar5 >> 4 & 1) != 0) {
            if (*0x8005888 == 0x8005888) {
                return 4;
            }
            iVar8 = *0x8005000;
            uVar2 = 4;
            if (iVar9 != -1 && iVar9 < *0x8005000) {
                iVar8 = iVar9;
                uVar2 = uVar4;
            }
        }
        iVar9 = iVar8;
        uVar4 = uVar2;
        if ((uVar5 >> 5 & 1) != 0) {
            if (*0x80058b0 == 0x80058b0) {
                return 5;
            }
            iVar9 = *0x8005000;
            uVar4 = 5;
            if (iVar8 != -1 && iVar8 < *0x8005000) {
                iVar9 = iVar8;
                uVar4 = uVar2;
            }
        }
        iVar8 = iVar9;
        uVar2 = uVar4;
        if ((uVar5 >> 6 & 1) != 0) {
            if (*0x80058d8 == 0x80058d8) {
                return 6;
            }
            iVar8 = *0x8005000;
            uVar2 = 6;
            if (iVar9 != -1 && iVar9 < *0x8005000) {
                iVar8 = iVar9;
                uVar2 = uVar4;
            }
        }
        if (uVar5 >> 7 != 0) {
            if (*0x8005900 == 0x8005900) {
                return 7;
            }
            if (iVar8 == -1) {
                return 7;
            }
            if (*0x8005000 <= iVar8) {
                return 7;
            }
        }
        if (-1 < uVar2) {
            return uVar2;
        }
        if (*(uVar7 + 0x58) == 0) {
            return 0xffffffff;
        }
        return *(*(uVar7 + 0x58) + 300);
    }
    if (*(uVar7 + 0x58) == 0) {
        return 0xffffffff;
    }
    uVar1 = *(*(uVar7 + 0x58) + 300);
    uVar4 = 1 << (uVar5 & 0x1f);
    uVar2 = 1 << (uVar1 & 0x1f);
    if ((uVar4 & *0x80057cf) == 0) {
        if ((uVar2 & *0x80057cf) != 0) {
            uVar10 = 7;
            uVar5 = uVar10;
            if ((uVar2 & 0xf8) != 0) {
                uVar5 = 0xf8;
            }
            if ((uVar4 & 0xf8) != 0) {
                uVar10 = 0xf8;
            }
            if (uVar5 != uVar10) {
                uVar7 = sym.DATARMNET762cfa52fe(uVar5 & (*0x80057cf ^ 0xffffffff) & *(uVar7 + 200));
                return uVar7;
            }
            return uVar6;
        }
        if (uVar1 < 8) {
            uVar4 = uVar1;
            if (*(uVar1 * 0x28 + 0x800580c) != '\0') {
                uVar4 = uVar5;
            }
            return uVar4;
        }
        goto code_r0x08006f98;
    }
    uVar5 = 7;
    if ((uVar2 & 0xf8) != 0) {
        uVar5 = 0xfffffff8;
    }
    uVar5 = uVar5 & (*0x80057cf ^ 0xffffffff) & *(uVar7 + 200);
    if ((uVar5 & 1) == 0) {
        uVar7 = 0xffffffff;
        iVar9 = -1;
    }
    else {
        if (*0x80057e8 == 0x80057e8) {
            uVar7 = 0;
            goto code_r0x08006f84;
        }
        uVar7 = 0;
        iVar9 = *0x8005000;
    }
    iVar8 = iVar9;
    if ((uVar5 >> 1 & 1) != 0) {
        if (*0x8005810 == 0x8005810) {
            uVar7 = 1;
            goto code_r0x08006f84;
        }
        uVar4 = uVar7;
        if (iVar9 == -1 || *0x8005000 <= iVar9) {
            uVar4 = 1;
        }
        uVar7 = uVar4;
        iVar8 = *0x8005000;
        if (iVar9 != -1 && iVar9 < *0x8005000) {
            iVar8 = iVar9;
        }
    }
    iVar9 = iVar8;
    if ((uVar5 >> 2 & 1) != 0) {
        if (*0x8005838 == 0x8005838) {
            uVar7 = 2;
            goto code_r0x08006f84;
        }
        uVar4 = 2;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            uVar4 = uVar7;
        }
        uVar7 = uVar4;
        iVar9 = *0x8005000;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            iVar9 = iVar8;
        }
    }
    iVar8 = iVar9;
    if ((uVar5 >> 3 & 1) != 0) {
        if (*0x8005860 == 0x8005860) {
            uVar7 = 3;
            goto code_r0x08006f84;
        }
        uVar4 = 3;
        if (iVar9 != -1 && iVar9 < *0x8005000) {
            uVar4 = uVar7;
        }
        uVar7 = uVar4;
        iVar8 = *0x8005000;
        if (iVar9 != -1 && iVar9 < *0x8005000) {
            iVar8 = iVar9;
        }
    }
    iVar9 = iVar8;
    if ((uVar5 >> 4 & 1) != 0) {
        if (*0x8005888 == 0x8005888) {
            uVar7 = 4;
            goto code_r0x08006f84;
        }
        uVar4 = 4;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            uVar4 = uVar7;
        }
        uVar7 = uVar4;
        iVar9 = *0x8005000;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            iVar9 = iVar8;
        }
    }
    iVar8 = iVar9;
    if ((uVar5 >> 5 & 1) != 0) {
        if (*0x80058b0 == 0x80058b0) {
            uVar7 = 5;
            goto code_r0x08006f84;
        }
        uVar4 = 5;
        if (iVar9 != -1 && iVar9 < *0x8005000) {
            uVar4 = uVar7;
        }
        uVar7 = uVar4;
        iVar8 = *0x8005000;
        if (iVar9 != -1 && iVar9 < *0x8005000) {
            iVar8 = iVar9;
        }
    }
    iVar9 = iVar8;
    if ((uVar5 >> 6 & 1) != 0) {
        if (*0x80058d8 == 0x80058d8) {
            uVar7 = 6;
            goto code_r0x08006f84;
        }
        uVar4 = 6;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            uVar4 = uVar7;
        }
        uVar7 = uVar4;
        iVar9 = *0x8005000;
        if (iVar8 != -1 && iVar8 < *0x8005000) {
            iVar9 = iVar8;
        }
    }
    if (uVar5 >> 7 != 0) {
        if (*0x8005900 == 0x8005900) {
            uVar7 = 7;
        }
        else {
            uVar5 = 7;
            if (iVar9 < *0x8005000 && iVar9 != -1) {
                uVar5 = uVar7;
            }
            uVar7 = uVar5;
        }
    }
code_r0x08006f84:
    *0x800b000 = *0x800b000 + 1;
    return uVar7;
}




// ===== sym.DATARMNETb6bff4a724 @ 0x08006fd0 (size 120) =====



void sym.DATARMNETb6bff4a724(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = sym.DATARMNET6af33ebb5b(arg1);
    sym.DATARMNET04e8d1b862(arg1_00,*(arg1 + 200));
    return;
}




// ===== fcn.080070a0 @ 0x080070a0 (size 52) =====



int64_t fcn.080070a0(int64_t arg1)

{
    int64_t iVar1;
    int64_t *unaff_x21;
    int64_t unaff_x22;
    ulong uStack0000000000000000;
    int64_t iStack0000000000000008;
    
    uStack0000000000000000 = 0;
    iStack0000000000000008 = arg1;
    __traceiter_rmnet_shs_low(0);
    iVar1 = *unaff_x21;
    *(unaff_x22 + 0x10) = iVar1 + -1;
    if ((iVar1 + -1 == 0) || (*unaff_x21 == 0)) {
        preempt_schedule_notrace(iStack0000000000000008);
    }
    return iStack0000000000000008;
}




// ===== sym.DATARMNET349c3a0cab @ 0x080070e4 (size 84) =====



void sym.DATARMNET349c3a0cab(int64_t arg1)

{
    uint32_t in_w1;
    int iVar1;
    
    if ((arg1 & 0xffff) < 8) {
        iVar1 = *((arg1 & 0xffffU) * 4 + 0x800516c);
        if ((in_w1 & 1) == 0) {
            iVar1 = iVar1 + -1;
        }
        else {
            iVar1 = iVar1 + 1;
        }
        *((arg1 & 0xffffU) * 4 + 0x800516c) = iVar1;
        return;
    }
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNETb1157fd5c4 @ 0x08007138 (size 168) =====



void sym.DATARMNETb1157fd5c4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xff) < 8) {
        __rcu_read_lock();
        iVar2 = *(__per_cpu_offset + (arg1 & 0xffU) * 8);
        iVar1 = (arg1 & 0xffU) * 0x28;
        *(iVar1 + 0x80057f8) = *(cancel_work_sync + iVar2);
        *(iVar1 + 0x80057fc) = *(__traceiter_rmnet_freq_reset + iVar2);
        __rcu_read_unlock();
        *(iVar1 + 0x8005800) = *(iVar1 + 0x80057fc) - *(iVar1 + 0x80057f8);
    }
    return;
}




// ===== sym.DATARMNETe074a09496 @ 0x08007274 (size 292) =====



void sym.DATARMNETe074a09496(void)

{
    ulong uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar2 = 0;
    uVar1 = sp_el0;
    do {
        if ((*(__cpu_online_mask + (uVar2 >> 6 & 0x3ffffff) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
            sym.DATARMNETb1157fd5c4(uVar2 & 0xffffffff);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
    __rcu_read_unlock();
    return;
}




// ===== sym.DATARMNET765b8ecfba @ 0x080073a8 (size 132) =====



ulong sym.DATARMNET765b8ecfba(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = rmnet_is_real_dev_registered();
    if (uVar1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        iVar2 = sym.DATARMNET713da9913c(*(arg1 + 0x310),arg2 & 0xffffffff);
        if (iVar2 == 0) {
            *0x80057cf = 1 << (arg2 & 0x1f);
            *0x80057d3 = *0x80057d6;
            uVar1 = 0;
            *0x80057d6 = arg2;
        }
        else {
            uVar1 = 0xffffffff;
        }
    }
    return uVar1;
}




// ===== sym.DATARMNETe488c1c396 @ 0x0800742c (size 896) =====



ulong sym.DATARMNETe488c1c396(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uchar uVar2;
    uint16_t uVar3;
    ushort uVar4;
    int64_t iVar5;
    code *pcVar6;
    bool bVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint uVar12;
    uint uVar13;
    ulong *in_x18;
    uint64_t arg1_00;
    uint64_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = *(arg1 + 200);
    uVar8 = sym.DATARMNETb6bff4a724(arg1);
    if ((uVar8 < 0) || (*(arg1 + 0xd2) = 1, (uVar3 & 0xff) == 0)) {
        *(arg1 + 0xd2) = 0;
        return 1;
    }
    if (uVar8 != *(arg1 + 0xc4)) {
        uVar9 = *(arg1 + 0xc6);
        if (*(arg1 + 0xcc) != '\0') {
            uVar9 = *0x80057d6;
        }
        uVar9 = sym.DATARMNETadb0248bd4(uVar9);
        iVar1 = *(arg1 + 0xbc);
        uVar3 = *(arg1 + 0xc6);
        arg1_00 = uVar3;
        if (*(arg1 + 0xcc) == '\0') {
            if (((arg2 & 0xff) < 4) && (uVar9 < iVar1 + *(arg1 + 0xce))) {
                iVar11 = sym.DATARMNETeea3cef5b6(arg1_00);
                if (iVar11 != 0) {
                    return 0;
                }
                bVar7 = *0x800b000 == -1;
                *0x800b000 = *0x800b000 + 1;
                if (bVar7) {
                    return 0;
                }
            }
        }
        else if ((arg2 & 0xffU) == 0) {
            return 0;
        }
        if ((*0x8017000 != 0) && (uVar10 = sym.DATARMNETaef946bb68(uVar8,*(arg1 + 200)), -1 < uVar10)) {
            *(uVar10 * 0x28 + 0x8005804) = *(arg1 + 0x78) + *(uVar10 * 0x28 + 0x8005804);
            if (*(arg1 + 0xc6) < 8) {
                iVar5 = *(arg1 + 0xc6) * 0x28;
                *(iVar5 + 0x8005804) = *(iVar5 + 0x8005804) - *(arg1 + 0x78);
                *(arg1 + 0xc4) = uVar8;
                *(arg1 + 0xc6) = uVar10;
                if (uVar9 < iVar1 + *(arg1 + 0xce)) {
                    uVar14 = (iVar1 - uVar9) + *(arg1 + 0xce);
                    *0x800b3c8 = *0x800b3c8 + 1;
                    *0x800b3d0 = *0x800b3d0 + uVar14;
                    sym.DATARMNET4bde88919f(arg1_00,uVar14);
                    uVar4 = *(arg1 + 0xce);
                    uVar2 = *(arg1 + 0xcc);
                    uVar12 = sym.DATARMNETeea3cef5b6(arg1_00);
                    uVar13 = sym.DATARMNETeea3cef5b6(uVar10);
                    _printk(0x8002716,uVar2,uVar10,arg1_00,uVar4,iVar1,uVar9,arg2 & 0xff,uVar12,uVar13);
                }
                if (uVar3 < 8) {
                    if (*(arg1_00 * 0x28 + 0x800580c) == '\0') {
                        pcVar6 = 0x800b3c0;
                    }
                    else {
                        *(uVar10 * 0x28 + 0x800580d) = 1;
                        pcVar6 = obj.DATARMNETb7ddf3c5dd;
                    }
                    uVar14 = *(arg1 + 0xc6);
                    *pcVar6 = *pcVar6 + 1;
                    if (uVar14 < 9) {
                        sym.DATARMNETe074a09496();
                        if (uVar14 * 0x28 < 0x131) {
                            *(arg1 + 0xbc) = *(arg1 + 0x78) + *(uVar14 * 0x28 + 0x80057f8);
                            if (*(arg1 + 0x58) != 0) {
                                *(*(arg1 + 0x58) + 300) = uVar10;
                            }
                            sym.DATARMNETe102b3a798(arg1,uVar14 * 0x28 + 0x80057e8,arg1_00);
                            return 1;
                        }
    //WARNING: Does not return
                        pcVar6 = SoftwareBreakpoint(1,0x80077ac);
                        (*pcVar6)();
                    }
                }
            }
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x80077a8);
            (*pcVar6)();
        }
    }
    return 1;
}




// ===== sym.DATARMNETaef946bb68 @ 0x08007854 (size 256) =====



uint sym.DATARMNETaef946bb68(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    
    uVar4 = arg2;
    uVar3 = arg1 & 0xff;
    if (((arg1 & 0xffU) == 0) && ((arg2 & 1U) != 0)) {
        return 0;
    }
    uVar2 = uVar4 & 0xff;
    if (((uVar2 >> 1 & 1) != 0) && ((uVar4 & 1) == uVar3)) {
        return 1;
    }
    uVar1 = (uVar4 & 1) + ((uVar4 & 2) >> 1);
    if (((uVar2 >> 2 & 1) != 0) && (uVar1 == uVar3)) {
        return 2;
    }
    uVar1 = uVar1 + ((uVar4 & 4) >> 2);
    if (((uVar2 >> 3 & 1) != 0) && (uVar1 == uVar3)) {
        return 3;
    }
    uVar1 = uVar1 + ((uVar4 & 8) >> 3);
    if (((uVar2 >> 4 & 1) != 0) && (uVar1 == uVar3)) {
        return 4;
    }
    uVar1 = uVar1 + ((uVar4 & 0x10) >> 4);
    if (((uVar2 >> 5 & 1) != 0) && (uVar1 == uVar3)) {
        return 5;
    }
    uVar1 = uVar1 + ((uVar4 & 0x20) >> 5);
    if (((uVar2 >> 6 & 1) != 0) && (uVar1 == uVar3)) {
        return 6;
    }
    uVar5 = 7;
    if (uVar1 + ((uVar4 & 0x40) >> 6) != uVar3 || (arg2 & 0x80U) == 0) {
        uVar5 = 0xffffffff;
    }
    return uVar5;
}




// ===== sym.DATARMNETfbc06e60f1 @ 0x08007954 (size 588) =====



void sym.DATARMNETfbc06e60f1(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETe074a09496();
    iVar3 = sp_el0;
    *(iVar3 + 0x10) = *(iVar3 + 0x10) + 0x200;
    uVar6 = _raw_spin_lock_irqsave(0x8004164);
    iVar5 = sym.DATARMNETeb3978575d(arg1 & 0xffffffff);
    uVar10 = arg1;
    if (7 < (uVar10 & 0xff)) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8007ba0);
        (*pcVar4)();
    }
    uVar7 = arg1 & 0xff;
    uVar8 = uVar7 * 0x28;
    if (uVar8 < 0x141) {
        piVar1 = uVar8 + 0x80057e8;
        if (*piVar1 == piVar1) {
            uVar11 = 0;
            uVar12 = 0;
        }
        else {
            uVar12 = 0;
            uVar11 = 0;
            piVar13 = *piVar1;
            do {
                iVar2 = piVar13[7];
                piVar9 = *piVar13;
                if (iVar2 != 0) {
                    iVar3 = piVar13[6];
                    sym.DATARMNETe02152c351(piVar13 + -8,7,1);
                    uVar11 = iVar2 + uVar11;
                    uVar12 = uVar12 + iVar3;
                    if (*(piVar13 + 0x86) == (uVar10 & 0xff)) {
                        iVar5 = iVar2 + iVar5;
                        *(piVar13 + 0x7c) = iVar5;
                    }
                }
                piVar13 = piVar9;
            } while (piVar9 != piVar1);
        }
        *0x80057b0 = *0x80057b0 - uVar12;
        *0x80057b8 = *0x80057b8 - uVar11;
        if ((uVar8 < 0x11d) && (*(uVar7 * 0x28 + 0x800580c) = 0, uVar7 * 0x90 < 0x471)) {
            *(uVar7 * 0x90 + 0x8005378) = 0;
            *(uVar7 * 0x28 + 0x8005804) = 0;
            _raw_spin_unlock_irqrestore(0x8004164,uVar6);
            sym.local_bh_enable();
            if ((*0x80057d3 == (uVar10 & 0xff)) && (_rmnet_shs_switch != 0)) {
                _delayed_work_timer_fn = 0;
                rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                *0x80057d4 = 0;
                *0x80057d3 = *0x80057d6;
            }
            return;
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(1,0x8007b9c);
    (*pcVar4)();
}




// ===== sym.DATARMNETe02152c351 @ 0x08007cd0 (size 368) =====



bool sym.DATARMNETe02152c351(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    ushort uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t arg1_00;
    ulong *in_x18;
    uint64_t arg2_00;
    uint64_t arg2_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = arg2 & 0xffffffff;
    uVar1 = *(arg1 + 200);
    arg2_01 = uVar1;
    uVar3 = sym.DATARMNETaef946bb68(*(arg1 + 0xc4),arg2_01);
    if (uVar3 != *(arg1 + 0xc6)) {
        arg1_00 = sym.DATARMNET04e8d1b862(*(arg1 + 0xc6),arg2_01);
        if (arg1_00 < 0) {
            uVar2 = 0;
            *(arg1 + 0xc4) = 0;
            if ((uVar1 & 1) == 0) {
                if ((uVar1 >> 1 & 1) == 0) {
                    if ((uVar1 >> 2 & 1) == 0) {
                        if ((uVar1 >> 3 & 1) == 0) {
                            if ((uVar1 >> 4 & 1) == 0) {
                                if ((uVar1 >> 5 & 1) == 0) {
                                    if ((uVar1 >> 6 & 1) == 0) {
                                        uVar2 = 7;
                                        if ((uVar1 & 0x80) == 0) {
                                            uVar2 = 0xffff;
                                        }
                                    }
                                    else {
                                        uVar2 = 6;
                                    }
                                }
                                else {
                                    uVar2 = 5;
                                }
                            }
                            else {
                                uVar2 = 4;
                            }
                        }
                        else {
                            uVar2 = 3;
                        }
                    }
                    else {
                        uVar2 = 2;
                    }
                }
                else {
                    uVar2 = 1;
                }
            }
        }
        else {
            *(arg1 + 0xc4) = arg1_00;
            uVar2 = sym.DATARMNETaef946bb68(arg1_00,arg2_01);
        }
        *(arg1 + 0xc6) = uVar2;
        *0x800b000 = *0x800b000 + 1;
        arg2_00 = 1;
    }
    iVar4 = sym.DATARMNETe488c1c396(arg1,arg2_00);
    if (iVar4 != 0) {
        sym.DATARMNETcba2f7f7b6(arg1,arg3 & 0xffffffff);
    }
    return iVar4 != 0;
}




// ===== sym.local_bh_enable @ 0x08008008 (size 56) =====



void sym.local_bh_enable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __local_bh_enable_ip(0x800800c,0x200);
    return;
}




// ===== sym.local_bh_enable_1 @ 0x08008040 (size 56) =====



void sym.local_bh_enable_1(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __local_bh_enable_ip(0x8008044,0x200);
    return;
}




// ===== sym.DATARMNETa871eeb7e7 @ 0x08008078 (size 56) =====



void sym.DATARMNETa871eeb7e7(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _delayed_work_timer_fn = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
    return;
}




// ===== sym.DATARMNET056c939591 @ 0x080080b0 (size 56) =====



void sym.DATARMNET056c939591(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETfbc06e60f1(*(arg1 + 0x44));
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNETcba2f7f7b6 @ 0x080080e8 (size 664) =====



void sym.DATARMNETcba2f7f7b6(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    ulong *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x60);
    if (iVar5 == 0) goto code_r0x0800833c;
    if (*(arg1 + 200) == 0) {
        uVar1 = *0x80057d1;
        if (*0x80057d0 == '\0') goto code_r0x08008174;
code_r0x08008144:
        uVar4 = sym.DATARMNET8532ab3089(*(arg1 + 0xc4),uVar1,*(iVar5 + 0x94));
    }
    else {
        uVar1 = *(arg1 + 0xca);
        if ((*(arg1 + 200) & 0xff) != 0) goto code_r0x08008144;
code_r0x08008174:
        uVar4 = 0;
        *(arg1 + 0xd2) = 0;
    }
    uVar1 = *(*(arg1 + 0x58) + 0x137);
    puStack_70 = *(arg1 + 0x60);
    while (puStack_70 != NULL) {
        if (*(arg1 + 0xd2) != '\0') {
            *(puStack_70 + 0x94) = uVar4;
        }
        puVar6 = *puStack_70;
        *puStack_70 = 0;
        if (uVar1 == 0) {
            if ((arg2 & 0xff) == 1) {
                if (*(arg1 + 0xcc) != '\0') goto code_r0x080082b0;
                sym.DATARMNET514ce0bf59(puStack_70);
                puStack_70 = puVar6;
            }
            else if ((arg2 & 0xffU) == 0) {
                if (*(arg1 + 0xcc) == '\0') {
                    sym.DATARMNETe767554e6e(puStack_70);
                    puStack_70 = puVar6;
                }
                else {
                    uVar2 = *(arg1 + 0xc6);
                    if (8 < uVar2) goto code_r0x0800837c;
                    sym.DATARMNETde8ee16f92(arg1);
                    _raw_spin_unlock_bh(0x8004164);
                    rmnet_rx_handler(&puStack_70);
                    _raw_spin_lock_bh(0x8004164);
                    sym.DATARMNET3e37ad2816(arg1,uVar2 * 0x28 + 0x80057e8);
                    puStack_70 = puVar6;
                }
            }
            else {
code_r0x080082b0:
                *0x800b000 = *0x800b000 + 1;
                netif_rx_ni();
                puStack_70 = puVar6;
            }
        }
        else {
            if (*(arg1 + 0xd0) == 0x11) {
                *0x800b000 = *0x800b000 + 1;
            }
            sym.DATARMNET21243b86ae(puStack_70,arg2 & 0xffffffff,uVar1);
            puStack_70 = puVar6;
        }
    }
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x60) = 0;
    if (*(arg1 + 0xcc) != '\0') {
        _delayed_work_timer_fn = 0;
        rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
        *(arg1 + 0xce) = 0;
        *0x80057d4 = 0;
        *0x80057d3 = *0x80057d6;
    }
code_r0x0800833c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x0800837c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8008380);
    (*pcVar3)();
}




// ===== sym.DATARMNET21243b86ae @ 0x080084a8 (size 368) =====



void sym.DATARMNET21243b86ae(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int16_t iVar3;
    uint uVar4;
    uint16_t uVar5;
    int16_t iVar6;
    ushort uVar7;
    uint32_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong uVar11;
    ulong *in_x18;
    uint32_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = arg3;
    iVar1 = *(arg1 + 0xd0) + *(arg1 + 0xcc);
    uVar2 = uVar8 & 0xffff;
    uVar5 = *(iVar1 + 6);
    uVar12 = uVar5;
    if (uVar2 < uVar5) {
        iVar6 = *(iVar1 + 4);
        uVar7 = 0;
        if ((arg3 & 0xffffU) != 0) {
            uVar7 = ((uVar2 + uVar5) - 1) / uVar2;
        }
        uVar4 = *(iVar1 + 0x18);
        *(iVar1 + 4) = iVar6 * arg3;
        *(iVar1 + 6) = uVar7;
        puVar9 = __skb_gso_segment(arg1,1,0);
        if ((puVar9 != NULL) && (puVar9 < 0xfffffffffffff001)) {
            puVar10 = puVar9;
            if (1 < (uVar8 & 0xffff)) {
                do {
                    iVar1 = puVar10[0x1a] + *(puVar10 + 0xcc);
                    iVar3 = uVar12;
                    if ((uVar8 & 0xffff) <= (uVar12 & 0xffff)) {
                        iVar3 = arg3;
                    }
                    uVar12 = uVar12 - uVar8;
                    *(iVar1 + 0x18) = uVar4;
                    *(iVar1 + 4) = iVar6;
                    *(iVar1 + 6) = iVar3;
                } while ((1 < (uVar12 & 0xffff)) && (puVar10 = *puVar10, puVar10 != NULL));
            }
            do {
                while( true ) {
                    puVar10 = *puVar9;
                    *(puVar9 + 0x94) = *(arg1 + 0x94);
                    uVar11 = *(arg1 + 0x10);
                    *puVar9 = 0;
                    puVar9[2] = uVar11;
                    puVar9 = puVar10;
                    if ((arg2 & 0xffU) != 0) break;
                    netif_receive_skb();
                    if (puVar10 == NULL) goto code_r0x080085c8;
                }
                netif_rx();
            } while (puVar10 != NULL);
code_r0x080085c8:
            consume_skb(arg1);
            return;
        }
        *(iVar1 + 4) = iVar6;
        *(iVar1 + 6) = uVar5;
    }
    if ((arg2 & 0xffU) == 0) {
        netif_receive_skb(arg1);
    }
    else {
        netif_rx();
    }
    return;
}




// ===== sym.DATARMNET23c7ddd780 @ 0x080086b4 (size 324) =====



void sym.DATARMNET23c7ddd780(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    uint uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    ulong *arg1_00;
    ulong *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x60);
    if (arg1_00 == NULL) {
        return;
    }
    if (*(arg1 + 200) == '\0') {
        uVar4 = 0;
        *(arg1 + 0xd2) = 0;
    }
    else {
        uVar4 = sym.DATARMNET8532ab3089(*(arg1 + 0xc4),*(arg1 + 0xca),*(arg1_00 + 0x94));
        arg1_00 = *(arg1 + 0x60);
        if (arg1_00 == NULL) {
            uVar5 = 0;
            uVar7 = 0;
            goto code_r0x08008784;
        }
    }
    uVar7 = 0;
    uVar5 = 0;
    do {
        if (*(arg1 + 0xd2) != '\0') {
            *(arg1_00 + 0x94) = uVar4;
        }
        puVar6 = *arg1_00;
        iVar1 = *(arg1_00 + 0xe);
        *arg1_00 = 0;
        if ((arg2 & 0xff) == 1) {
            if (*(arg1 + 0xcc) != '\0') goto code_r0x0800872c;
            sym.DATARMNET514ce0bf59(arg1_00);
        }
        else if (((arg2 & 0xffU) == 0) && (*(arg1 + 0xcc) == '\0')) {
            sym.DATARMNETe767554e6e(arg1_00);
        }
        else {
code_r0x0800872c:
            netif_rx_ni();
        }
        uVar7 = iVar1 + uVar7;
        uVar5 = uVar5 + 1;
        arg1_00 = puVar6;
    } while (puVar6 != NULL);
code_r0x08008784:
    *0x80057b0 = *0x80057b0 - uVar7;
    *0x80057b8 = *0x80057b8 - uVar5;
    *0x800b000 = *0x800b000 + 1;
    if (*(arg1 + 0xc6) < 8) {
        iVar2 = *(arg1 + 0xc6) * 0x28;
        *(iVar2 + 0x8005804) = *(iVar2 + 0x8005804) - uVar5;
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x80087f8);
    (*pcVar3)();
}




// ===== sym.DATARMNETe377e0368d @ 0x080087f8 (size 820) =====



void sym.DATARMNETe377e0368d(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    char cVar7;
    int iVar8;
    uint32_t uVar9;
    uint uVar10;
    uint64_t arg2_00;
    int64_t *piVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    int64_t iVar15;
    int iVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_68;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETe074a09496();
    uVar12 = 0;
    uStack_68 = 0;
    do {
        iVar8 = sym.DATARMNETeb3978575d(uVar12 & 0xffffffff);
        piVar13 = uVar12 * 0x28 + 0x80057e8;
        piVar14 = *piVar13;
        if (piVar14 == piVar13) {
            arg2_00 = 0;
        }
        else {
            arg2_00 = 0;
            piVar11 = piVar14;
            do {
                piVar1 = piVar11 + 0x3c;
                piVar11 = *piVar11;
                arg2_00 = *piVar1 + arg2_00;
            } while (piVar11 != piVar13);
        }
        if (*0x8017000 != 0) {
            sym.DATARMNETc54e431bbc(uVar12 & 0xffffffff,arg2_00);
            piVar14 = *piVar13;
        }
        if (piVar14 == piVar13) {
            iVar16 = 0;
        }
        else {
            iVar16 = 0;
            do {
                iVar2 = piVar14[7];
                piVar11 = *piVar14;
                if (iVar2 != 0) {
                    iVar15 = piVar14[6];
                    iVar3 = *(piVar14 + 0x3c);
                    cVar7 = sym.DATARMNETe02152c351(piVar14 + -8,arg1 & 0xffffffff,arg2 & 0xffffffff);
                    if (cVar7 != '\0') {
                        if (7 < *(piVar14 + 0x86)) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x5512,0x8008b2c);
                            (*pcVar6)();
                        }
                        iVar16 = iVar3 + iVar16;
                        iVar5 = *(piVar14 + 0x86) * 0x28;
                        *(iVar5 + 0x8005804) = *(iVar5 + 0x8005804) - iVar2;
                        *(piVar14 + 0x3c) = 0;
                        uStack_68 = CONCAT44(uStack_68._4_4_ + iVar15,iVar2 + uStack_68);
                        if (uVar12 == *(piVar14 + 0x86)) {
                            iVar8 = iVar2 + iVar8;
                            *(piVar14 + 0x7c) = iVar8;
                        }
                    }
                }
                piVar14 = piVar11;
            } while (piVar11 != piVar13);
        }
        uVar9 = *0x8017000;
        if (*0x8017000 != 0) {
            if (((0xffffff07U >> (uVar12 & 0x1f) & 1) != 0) && (*(uVar12 * 0x28 + 0x800580c) == '\0')) {
                ktime_get_with_offset(1);
                auVar17 = ns_to_timespec64();
                iVar15 = uVar12 * 0x90;
                if (uVar9 < 6) {
                    uVar9 = 5;
                }
                uVar4 = *(iVar15 + 0x8005378);
                if ((auVar17._8_8_ - *(iVar15 + 0x8005370)) + (auVar17._0_8_ - *(iVar15 + 0x8005368)) * 1000000000 <
                    uVar9 * 1000000) {
                    iVar16 = uVar4 + iVar16;
                }
                else {
                    if (*(uVar12 * 4 + 0x800b4c8) < uVar4) {
                        *(uVar12 * 4 + 0x800b4c8) = uVar4;
                    }
                    *(iVar15 + 0x8005368) = auVar17;
                }
                *(iVar15 + 0x8005378) = iVar16;
            }
            sym.DATARMNETc54e431bbc(uVar12 & 0xffffffff,0);
        }
        uVar9 = sym.DATARMNETeea3cef5b6(uVar12 & 0xffffffff);
        if (*(obj.DATARMNET84413d1257 + uVar12 * 4) <= uVar9) {
            uVar10 = sym.DATARMNETeea3cef5b6(uVar12 & 0xffffffff);
            *(obj.DATARMNET84413d1257 + uVar12 * 4) = uVar10;
        }
        uVar12 = uVar12 + 1;
    } while (uVar12 != 8);
    *0x80057b0 = *0x80057b0 - (uStack_68 >> 0x20);
    *0x80057b8 = *0x80057b8 - (uStack_68 & 0xffffffff);
    if ((*0x80057b0 < 1) || (*0x80057b8 < 1)) {
        *0x80057ca = 0;
        *0x80057b0 = 0;
        *0x80057b8 = 0;
        *0x80057cc = 2;
        if ((*0x8017000 != 0) && (uVar12 = hrtimer_active(0x80051c8), (uVar12 & 1) != 0)) {
            hrtimer_cancel(0x80051c8);
        }
    }
    return;
}




// ===== sym.DATARMNETc54e431bbc @ 0x08008c4c (size 408) =====



void sym.DATARMNETc54e431bbc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    int iVar7;
    char *pcVar8;
    ulong *in_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *0x8017000;
    uVar6 = arg1;
    if (7 < (uVar6 & 0xff)) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8008de4);
        (*pcVar5)();
    }
    uVar9 = arg1 & 0xff;
    if (uVar9 * 0x90 < 0x471) {
        uVar3 = *(obj.DATARMNET65393dea13 + uVar9 * 4);
        uVar2 = *(uVar9 * 0x90 + 0x8005378);
        iVar10 = (uVar3 <= uVar2) << 2;
        iVar7 = sym.DATARMNETeea3cef5b6(arg1 & 0xffffffff);
        if (iVar7 + arg2 < *(obj.DATARMNETbc049ffc4c + uVar9 * 4)) {
            if (uVar2 < uVar3) {
                return;
            }
        }
        else {
            iVar10 = 5;
        }
        if ((0xffffff07U >> (uVar6 & 0x1f) & 1) != 0) {
            if (0x11c < uVar9 * 0x28) goto code_r0x08008ddc;
            pcVar8 = uVar9 * 0x28 + 0x800580c;
            if (((*pcVar8 == '\0') && ((uVar6 & 0xff) != 1)) && (*0x80057d3 != (uVar6 & 0xff))) {
                *pcVar8 = '\x01';
                sym.DATARMNETfb7007f025();
                iVar1 = uVar9 * 0x90 + 0x80052f0;
                uVar9 = hrtimer_active(iVar1);
                if ((uVar9 & 1) != 0) {
                    hrtimer_cancel(iVar1);
                }
                iVar7 = 1000000;
                if (iVar4 != 0) {
                    iVar7 = iVar4 * 1000000;
                }
                hrtimer_start_range_ns(iVar1,iVar7,0,1);
                *(obj.DATARMNETb7ddf3c5dd + iVar10 * 8) = *(obj.DATARMNETb7ddf3c5dd + iVar10 * 8) + 1;
            }
        }
        return;
    }
code_r0x08008ddc:
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(1,0x8008de0);
    (*pcVar5)();
}




// ===== sym.DATARMNETa4bf9fbf64 @ 0x08008de4 (size 224) =====



void sym.DATARMNETa4bf9fbf64(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8004164);
    sym.DATARMNETe377e0368d(arg1 & 0xffffffff,arg2 & 0xffffffff);
    if ((arg2 & 0xff) == 1) {
        if (((*0x8017000 != 0) && (*0x80057b0 != 0)) && (*0x80057b8 != 0)) {
            uVar1 = hrtimer_active(0x80051c8);
            if ((uVar1 & 1) != 0) {
                hrtimer_cancel(0x80051c8);
            }
            hrtimer_start_range_ns(0x80051c8,*0x8017000 * 1000000,0,1);
        }
        *0x800b000 = *0x800b000 + 1;
    }
    _raw_spin_unlock_bh(0x8004164);
    return;
}




// ===== sym.DATARMNET495dab3d72 @ 0x08008ec4 (size 404) =====



void sym.DATARMNET495dab3d72(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 6);
    if (uVar5 == 0) {
        *(arg2 + 0x90) = *(arg2 + 0x90) + 1;
        if (7 < *(arg2 + 0xc6)) goto code_r0x08009054;
        iVar1 = *(arg2 + 0xc6) * 0x28;
        uVar3 = 1;
        *(iVar1 + 0x8005804) = *(iVar1 + 0x8005804) + 1;
    }
    else {
        *(arg2 + 0x90) = *(arg2 + 0x90) + uVar5;
        if (7 < *(arg2 + 0xc6)) {
code_r0x08009054:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8009058);
            (*pcVar2)();
        }
        iVar1 = *(arg2 + 0xc6) * 0x28;
        *(iVar1 + 0x8005804) = *(iVar1 + 0x8005804) + 1;
        uVar3 = *(*(arg1 + 0xd0) + *(arg1 + 0xcc) + 6);
    }
    *(arg2 + 0x7c) = *(arg2 + 0x7c) + uVar3;
    *(arg2 + 0x98) = *(arg2 + 0x98) + 1;
    *(arg2 + 0xa8) = *(arg2 + 0xa8) + *(arg1 + 0x2c);
    *(arg2 + 0xb0) = *(arg2 + 0xb0) + *(arg1 + 0x30);
    *(arg2 + 0xa0) = *(arg2 + 0xa0) + *(arg1 + 0x70);
    *(arg2 + 0x70) = *(arg2 + 0x70) + *(arg1 + 0x70);
    *0x8005000 = *0x8005000 + *(arg1 + 0x70);
    if (*(arg2 + 0x78) == 0) {
        iVar4 = 1;
        *(arg2 + 0x60) = arg1;
        *(arg2 + 0x68) = arg1;
    }
    else {
        **(arg2 + 0x68) = arg1;
        iVar4 = *(arg2 + 0x78) + 1;
        *(arg2 + 0x68) = **(arg2 + 0x68);
    }
    *(arg2 + 0x78) = iVar4;
    *0x8005000 = *0x8005000 + 1;
    return;
}




// ===== sym.DATARMNET0a73c53ae6 @ 0x080090e0 (size 284) =====



uint sym.DATARMNET0a73c53ae6(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < CONCAT44(*0x8005004,*0x8005000)) {
        if (*0x80057cc == '\x02') {
            *0x80057cc = 0;
            return 0;
        }
        if (*0x80057cc == '\x01') {
            queue_work_on(0x20,_rmnet_map_dl_ind_register,0x8005190);
        }
        else if (*0x80057cc == '\0') {
            *0x80057cc = 1;
            pcVar2 = *(*(arg1 + 0x30) + 0x30);
            __cfi_slowpath_diag(0x3d814571b26b7f8a,pcVar2,0x8002440);
            uVar1 = (*pcVar2)();
            hrtimer_forward(arg1,uVar1,2000000);
            if (*0x8017000 == 0) {
                return 1;
            }
            return 1;
        }
    }
    return 0;
}




// ===== sym.DATARMNET2ba63fbd90 @ 0x080093cc (size 60) =====



ulong sym.DATARMNET2ba63fbd90(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __pm_relax(*0x8005000);
    *0x8017000 = 1;
    return 0;
}




// ===== sym.DATARMNETc2b0dbbb32 @ 0x08009408 (size 192) =====



ulong sym.DATARMNETc2b0dbbb32(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar2 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    sym.DATARMNET8d0d510d45(*0x8017000,&uStack_90);
    sym.DATARMNETb5d58adbe7(&uStack_90);
    ktime_get_with_offset(1);
    auVar2 = ns_to_timespec64();
    *0x8005000 = 0x7fffffffffffffff;
    if (auVar2._0_8_ < 0x225c17d04) {
        *0x8005000 = auVar2._8_8_ + auVar2._0_8_ * 1000000000;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    iVar1 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET4ce9744605;
    sym.DATARMNET371703c28d();
    queue_work_on(0x20,_rmnet_map_dl_ind_register,iVar1 + 0x48);
    return 0;
}




// ===== sym.DATARMNET4ce9744605 @ 0x080094c8 (size 72) =====



ulong sym.DATARMNET4ce9744605(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET371703c28d();
    queue_work_on(0x20,_rmnet_map_dl_ind_register,arg1 + 0x48);
    return 0;
}




// ===== sym.DATARMNETe1f95274f1 @ 0x08009510 (size 584) =====



void sym.DATARMNETe1f95274f1(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x800537c = 0;
    *0x8005338 = 0xfffffffe0;
    *0x8005340 = 0x8005340;
    *0x8005348 = 0x8005340;
    *0x8005350 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x80052f0,1,1);
    *0x800540c = 1;
    *0x8005318 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x80053c8 = 0xfffffffe0;
    *0x80053d0 = 0x80053d0;
    *0x80053d8 = 0x80053d0;
    *0x80053e0 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x8005380,1,1);
    *0x80053a8 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x8005458 = 0xfffffffe0;
    *0x800549c = 2;
    *0x8005460 = 0x8005460;
    *0x8005468 = 0x8005460;
    *0x8005470 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x8005410,1,1);
    *0x8005438 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x80054e8 = 0xfffffffe0;
    *0x800552c = 3;
    *0x80054f0 = 0x80054f0;
    *0x80054f8 = 0x80054f0;
    *0x8005500 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x80054a0,1,1);
    *0x80054c8 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x8005578 = 0xfffffffe0;
    *0x80055bc = 4;
    *0x8005580 = 0x8005580;
    *0x8005588 = 0x8005580;
    *0x8005590 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x8005530,1,1);
    *0x8005558 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x8005608 = 0xfffffffe0;
    *0x800564c = 5;
    *0x8005610 = 0x8005610;
    *0x8005618 = 0x8005610;
    _sym.DATARMNET337eca0417 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x80055c0,1,1);
    *0x80055e8 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x8005698 = 0xfffffffe0;
    *0x80056dc = 6;
    *0x80056a0 = 0x80056a0;
    *0x80056a8 = 0x80056a0;
    *0x80056b0 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x8005650,1,1);
    *0x8005678 = sym.DATARMNET4ce9744605.cfi_jt;
    *0x8005728 = 0xfffffffe0;
    *0x800576c = 7;
    *0x8005730 = 0x8005730;
    *0x8005738 = 0x8005730;
    *0x8005740 = sym.DATARMNET056c939591.cfi_jt;
    hrtimer_init(0x80056e0,1,1);
    *0x8005708 = sym.DATARMNET4ce9744605.cfi_jt;
    hrtimer_init(0x80051c8,1,1);
    *0x80051f0 = sym.DATARMNET0a73c53ae6.cfi_jt;
    hrtimer_init(0x8005210,1,1);
    *0x8005238 = sym.DATARMNETc2b0dbbb32.cfi_jt;
    hrtimer_init(0x8005258,1,1);
    *0x8005280 = sym.DATARMNET2ba63fbd90.cfi_jt;
    *0x8005190 = 0xfffffffe0;
    *0x8005198 = 0x8005198;
    *0x80051a0 = 0x8005198;
    *0x80051a8 = sym.DATARMNETa7afc8cdaa.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt;
    return;
}




// ===== sym.DATARMNETa7afc8cdaa @ 0x08009758 (size 156) =====



int64_t sym.DATARMNETa7afc8cdaa(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x80057b8 != 0) && (*0x80057cc == '\x01')) {
        iVar1 = sp_el0;
        *(iVar1 + 0x10) = *(iVar1 + 0x10) + 0x200;
        sym.DATARMNETa4bf9fbf64(0,1);
        arg1 = sym.local_bh_enable();
    }
    return arg1;
}




// ===== sym.DATARMNET02cdd9b125 @ 0x0800992c (size 204) =====



uint sym.DATARMNET02cdd9b125(void)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *0x8017000;
    *0x8017000 = 0;
    hrtimer_cancel(0x80052f0);
    cancel_work_sync(0x8005338);
    hrtimer_cancel(0x8005380);
    cancel_work_sync(0x80053c8);
    hrtimer_cancel(0x8005410);
    cancel_work_sync(0x8005458);
    hrtimer_cancel(0x80054a0);
    cancel_work_sync(0x80054e8);
    hrtimer_cancel(0x8005530);
    cancel_work_sync(0x8005578);
    hrtimer_cancel(0x80055c0);
    cancel_work_sync(0x8005608);
    hrtimer_cancel(0x8005650);
    cancel_work_sync(0x8005698);
    hrtimer_cancel(0x80056e0);
    cancel_work_sync(0x8005728);
    cancel_work_sync(0x8005190);
    return uVar1;
}




// ===== sym.DATARMNET82e88dbb56 @ 0x080099f8 (size 260) =====



void sym.DATARMNET82e88dbb56(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 < 0x20) {
        *in_x18 = unaff_x30;
        rtnl_lock();
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8009a58);
    (*pcVar1)();
}




// ===== sym.DATARMNET78bb6be330 @ 0x08009afc (size 36) =====



void sym.DATARMNET78bb6be330(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET7ed4cef8a3(arg1);
    return;
}




// ===== sym.DATARMNET7ed4cef8a3 @ 0x08009b20 (size 276) =====



void sym.DATARMNET7ed4cef8a3(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *arg1;
    if (*0x8005000 != 0 && uVar1 <= *0x8005000) {
        if (*0x8017000 != 0) {
            _printk(0x80027da);
            uVar1 = *arg1;
        }
        *0x800b000 = *0x800b000 + 1;
    }
    *0x8005000 = uVar1;
    if (*0x8004164 == 0) {
        if ((0 < *0x80057b8) && (*0x80057ce != '\x02')) {
            *0x800b000 = *0x800b000 + 1;
            _raw_spin_lock_bh(0x8004164);
            sym.DATARMNETe377e0368d(0,0);
            _raw_spin_unlock_bh(0x8004164);
        }
        *0x80057ce = '\x01';
    }
    return;
}




// ===== sym.DATARMNETf61cd23b90 @ 0x08009cd4 (size 36) =====



void sym.DATARMNETf61cd23b90(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET613a81eca8(arg1);
    return;
}




// ===== sym.DATARMNET613a81eca8 @ 0x08009cf8 (size 172) =====



void sym.DATARMNET613a81eca8(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x80057ce = 2;
    if ((0 < *0x80057b8) && (*0x8004164 == 0)) {
        *0x800b000 = *0x800b000 + 1;
        _raw_spin_lock_bh(0x8004164);
        sym.DATARMNETe377e0368d(0,0);
        _raw_spin_unlock_bh(0x8004164);
    }
    return;
}




// ===== sym.DATARMNET45d8cdb224 @ 0x08009e3c (size 348) =====



void sym.DATARMNET45d8cdb224(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uchar uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80057cd == '\0') {
        iVar3 = *(*(arg2 + 0x310) + 0x40);
        if (iVar3 == 0) {
            uVar1 = 0;
            uVar4 = 0;
        }
        else {
            iVar3 = sym.DATARMNET928c931df9(iVar3);
            uVar4 = iVar3;
            uVar1 = sym.DATARMNET310c3eb16e(iVar3);
        }
        *0x80052e8 = rmnet_get_port(arg1);
        *0x80057cf = 2;
        *0x80057d2 = 0x101;
        *0x80057d6 = 1;
        *0x80057e8 = 0x80057e8;
        *0x80057f0 = 0x80057e8;
        *0x8005810 = 0x8005810;
        *0x8005818 = 0x8005810;
        *0x8005838 = 0x8005838;
        *0x8005840 = 0x8005838;
        *0x8005860 = 0x8005860;
        *0x8005868 = 0x8005860;
        *0x8005888 = 0x8005888;
        *0x8005890 = 0x8005888;
        *0x80058b0 = 0x80058b0;
        *0x80058b8 = 0x80058b0;
        *0x80058d8 = 0x80058d8;
        *0x80058e0 = 0x80058d8;
        *0x8005900 = 0x8005900;
        *0x8005908 = 0x8005900;
        *0x80057d0 = uVar4;
        *0x80057d1 = uVar1;
        sym.DATARMNETe6e8431304();
        sym.DATARMNET44499733f2();
        iVar2 = register_oom_notifier(reloc.DATARMNET2aa4ef6ff9.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt);
        if (iVar2 < 0) {
            _printk(0x800278c);
        }
        _printk(0x80024b8,*0x80057d0);
        *0x80057e0 = wakeup_source_register(0,"RMNET_SHS");
        *0x80057cd = '\x01';
    }
    return;
}




// ===== sym.DATARMNETeacad8334e @ 0x08009f9c (size 240) =====



void sym.DATARMNETeacad8334e(void)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8005000 != 0) {
        uVar2 = _raw_spin_lock_irqsave(0x8004164);
        iVar5 = 0;
        do {
            iVar4 = *(iVar5 * 8 + 0x8004168);
            iVar6 = iVar4 + -0x80;
            if (iVar4 != 0 && iVar6 != 0) {
                do {
                    piVar3 = *(iVar6 + 0x60);
                    iVar4 = *(iVar6 + 0x80);
                    while (piVar3 != NULL) {
                        piVar3 = *piVar3;
                        consume_skb();
                    }
                    iVar1 = 0;
                    if (iVar4 != 0) {
                        iVar1 = iVar4 + -0x80;
                    }
                    *(iVar6 + 0x78) = 0;
                    *(iVar6 + 0x68) = 0;
                    *(iVar6 + 0x70) = 0;
                    *(iVar6 + 0x60) = 0;
                    iVar6 = iVar1;
                } while (iVar1 != 0);
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 != 0x200);
        *0x80057ca = 0;
        *0x80057b0 = 0;
        *0x80057b8 = 0;
        *0x80057cc = 2;
        _raw_spin_unlock_irqrestore(0x8004164,uVar2);
    }
    return;
}




// ===== sym.DATARMNET02fc8b29a0 @ 0x0800a08c (size 624) =====



void sym.DATARMNET02fc8b29a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    code *pcVar4;
    ushort uVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xcc) = 1;
    uVar1 = *(arg2 + 2);
    *(arg1 + 200) = uVar1;
    uVar5 = sym.DATARMNET310c3eb16e(uVar1);
    *(arg1 + 0xca) = uVar5;
    uVar2 = *0x80057d6;
    *(arg1 + 0xce) = 0;
    *(arg1 + 0xc6) = uVar2;
    *(arg1 + 0xc4) = uVar2;
    if ((0xffffff07U >> (uVar2 & 0x1f) & 1) != 0) {
        sym.DATARMNET5e4aeef593(*0x80057d2);
        sym.DATARMNETfb7007f025();
    }
    uVar2 = *0x80057d2;
    uVar9 = *0x80057d2;
    iVar6 = rmnet_is_real_dev_registered(arg3);
    if (iVar6 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        iVar7 = sym.DATARMNET713da9913c(*(arg3 + 0x310),uVar9);
        uVar3 = *0x80057d6;
        if (iVar7 == 0) {
            *0x80057cf = 1 << (uVar2 & 0x1f);
            *0x80057d6 = uVar2;
            *0x80057d3 = uVar3;
        }
    }
    if (*(arg1 + 0xc6) < 0x20) {
        uVar8 = *(cpus_read_unlock + *(__per_cpu_offset + *(arg1 + 0xc6) * 8)) +
                *(hrtimer_active + *(__per_cpu_offset + *(arg1 + 0xc6) * 8));
        if (*0x8017000 < uVar8) {
            *0x8017000 = uVar8;
        }
        iVar6 = sym.DATARMNETeb3978575d(*0x80057d2);
        *(arg1 + 0xbc) = iVar6 + uVar8;
        if (*0x80057d2 < 0x20) {
            uVar1 = *(arg1 + 0xc6);
            uVar9 = uVar1;
            if ((0xffffff07U >> (uVar1 & 0x1f) & 1) == 0) {
                if (*(cpus_read_unlock + *(__per_cpu_offset + *0x80057d2 * 8)) + uVar8 +
                    *(hrtimer_active + *(__per_cpu_offset + *0x80057d2 * 8)) < 5) {
                    if (uVar1 < 8) {
                        uVar9 = hrtimer_active(uVar9 * 0x90 + 0x80052f0);
                        if ((uVar9 & 1) != 0) {
                            return;
                        }
                        if (*(arg1 + 0xc6) < 8) {
                            iVar7 = *(arg1 + 0xc6) * 0x90 + 0x80052f0;
                            uVar8 = *0x8017000 / 0x14;
code_r0x0800a2c4:
                            hrtimer_start_range_ns(iVar7,uVar8 * 1000000,0,1);
                            return;
                        }
                    }
                }
                else if (uVar1 < 8) {
                    uVar9 = hrtimer_active(uVar9 * 0x90 + 0x80052f0);
                    if ((uVar9 & 1) != 0) {
                        return;
                    }
                    if (*(arg1 + 0xc6) < 8) {
                        iVar7 = *(arg1 + 0xc6) * 0x90 + 0x80052f0;
                        uVar8 = *0x8017000 >> 1;
                        goto code_r0x0800a2c4;
                    }
                }
            }
            else if (uVar1 < 8) {
                uVar9 = hrtimer_active(uVar9 * 0x90 + 0x80052f0);
                if ((uVar9 & 1) != 0) {
                    return;
                }
                if (*(arg1 + 0xc6) < 8) {
                    iVar7 = *(arg1 + 0xc6) * 0x90 + 0x80052f0;
                    uVar8 = *0x8017000;
                    goto code_r0x0800a2c4;
                }
            }
        }
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x800a2fc);
    (*pcVar4)();
}




// ===== sym.DATARMNET756778f14f @ 0x0800a2fc (size 3552) =====


ulong sym.DATARMNET756778f14f(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint8_t uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong uVar12;
    uint32_t in_w2;
    int64_t in_x3;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    char acStack_e4 [4];
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
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar6 = *0x80057d0;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    acStack_e4[0] = '\0';
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    if (((*arg2 & 1) == 0) && (iVar8 = sym.DATARMNET9303cec796(arg1,acStack_e4), cVar3 = acStack_e4[0], iVar8 == 0))
    {
        sym.DATARMNETe767554e6e(arg1);
        if (cVar3 != '\0') {
            sym.DATARMNET8d0d510d45(1,&uStack_e0);
            sym.DATARMNETb5d58adbe7(&uStack_e0);
        }
        goto code_r0x0800ad1c;
    }
    if ((uVar6 == 0) || (*0x80057cd == '\0')) {
        sym.DATARMNETe767554e6e(arg1);
        *0x800b000 = *0x800b000 + 1;
        goto code_r0x0800ad1c;
    }
    if ((*(arg1 + 0x80) & 0x300) == 0) {
        __skb_get_hash(arg1);
        if (*(arg2 + 2) == 0) goto code_r0x0800a4c4;
code_r0x0800a3b0:
        iVar8 = 0xdead;
        *(arg1 + 0x94) = 0xdead;
        iVar13 = tpidr_el1;
        if ((*(cpu_number + iVar13) == *0x80057d3) && (*0x80057d3 != *0x80057d6)) {
            netif_rx(arg1);
            *0x8005000 = *0x8005000 + 1;
            if (*0x8017000 < *0x8005000) {
                _raw_spin_lock_bh(0x8004164);
                sym.DATARMNETe377e0368d(8,0);
                _raw_spin_unlock_bh(0x8004164);
                _delayed_work_timer_fn = 0;
                rmnet_module_hook_unregister_no_sync(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
                *0x8005000 = 0;
                *0x800b000 = *0x800b000 + 1;
            }
            goto code_r0x0800ad1c;
        }
    }
    else {
        if (*(arg2 + 2) != 0) goto code_r0x0800a3b0;
code_r0x0800a4c4:
        iVar8 = *(arg1 + 0x94);
    }
    uVar12 = _raw_spin_lock_irqsave(0x8004164);
    iVar13 = *((iVar8 * 0x61c88647 >> 0x17) * 8 + 0x8004168);
    if (iVar13 != 0) {
        iVar13 = iVar13 + -0x80;
        while (iVar13 != 0) {
            if (iVar8 == *(iVar13 + 0xc0)) {
                if (*(iVar13 + 0xd3) != '\0') {
                    if (*(iVar13 + 0xd3) == '\x02') {
                        iVar8 = sym.DATARMNETe24386452c(arg1);
                        *(iVar13 + 0xd3) = iVar8 != 0;
                    }
                    _raw_spin_unlock_irqrestore(0x8004164,uVar12);
                    *(iVar13 + 0x90) = *(iVar13 + 0x90) + 1;
                    *(iVar13 + 0xa0) = *(iVar13 + 0xa0) + *(arg1 + 0x70);
                    sym.DATARMNETf5821256ad(arg1,arg2);
                    goto code_r0x0800ad1c;
                }
                if (*(iVar13 + 0xcc) == '\0') {
                    sym.DATARMNET495dab3d72(arg1,iVar13);
code_r0x0800aa58:
                    uVar11 = 0;
                    bVar4 = true;
                }
                else {
                    sym.DATARMNETe074a09496();
                    iVar5 = tpidr_el1;
                    if (*(cpu_number + iVar5) != *0x80057d6) {
                        *0x800b000 = *0x800b000 + 1;
                    }
                    if (*0x80057d2 != *0x80057d6) {
                        if (*(iVar13 + 0xc6) != *0x80057d6) {
                            if (8 < *0x80057d6) goto code_r0x0800ad60;
                            sym.DATARMNETe102b3a798(iVar13,*0x80057d6 * 0x28 + 0x80057e8,*(iVar13 + 0xc6));
                            *0x800b000 = *0x800b000 + 1;
                        }
                        sym.DATARMNET02fc8b29a0(iVar13,arg2,*(arg1 + 0x10));
                        netif_rx(arg1);
                        goto code_r0x0800aa58;
                    }
                    *(iVar13 + 0xce) = *(iVar13 + 0xce) + 1;
                    sym.DATARMNET495dab3d72(arg1,iVar13);
                    if (_rmnet_shs_switch == 0) {
                        bVar4 = false;
                        uVar11 = 2;
                        *0x800b000 = *0x800b000 + 1;
                    }
                    else {
                        uVar11 = sym.DATARMNETadb0248bd4(*0x80057d6);
                        if (uVar11 < *(iVar13 + 0xbc) + *(iVar13 + 0xce)) {
                            if ((*0x8017000 == 0) || (*(iVar13 + 0x78) <= *0x8017000)) {
                                _raw_spin_unlock_irqrestore(0x8004164,uVar12);
                                goto code_r0x0800ad1c;
                            }
                            bVar4 = false;
                            uVar11 = 1;
                            *0x800b000 = *0x800b000 + 1;
                        }
                        else {
                            bVar4 = false;
                            uVar11 = 3;
                        }
                    }
                }
                if (((*0x80057ca == '\0') && (*0x80057b8 != 0)) && (*0x8017000 != 0)) {
                    *0x80057ca = '\x01';
                    *0x80057cc = '\0';
                    uVar14 = hrtimer_active();
                    if ((uVar14 & 1) != 0) {
                        if (*0x8017000 != 0) {
                            sym.trace_rmnet_shs_low(7,0x22,2000000,0xdef,0xdef,arg1);
                        }
                        hrtimer_cancel(0x80051c8);
                    }
                    hrtimer_start_range_ns(0x80051c8,*0x8017000 * 1000000,0,1);
                }
                _raw_spin_unlock_irqrestore(0x8004164,uVar12);
                iVar13 = CONCAT44(*0x8005004,CONCAT22(*0x8005002,*0x8005000));
                if (*0x8017000 < iVar13) {
                    if (*0x8017000 != 0) {
                        *0x800b000 = *0x800b000 + 1;
                    }
                    _raw_spin_lock_bh(0x8004164);
                    iVar13 = 5;
                }
                else {
                    if (CONCAT44(*0x8005004,CONCAT22(*0x8005002,*0x8005000)) <= *0x8017000) {
                        if (bVar4) {
                            if (((*arg2 >> 2 & 1) == 0) || (iVar13 == 0)) {
                                if (*0x80057cc == '\x01') {
                                    *0x800b000 = *0x800b000 + 1;
                                    if (*0x8017000 != 0) {
                                        sym.trace_rmnet_shs_high_1(8,0x2d,1,iVar13,0xdef,0xdef,0,0);
                                    }
                                }
                                else {
                                    if ((((*arg2 >> 2 & 1) != 0) || (iVar13 == 0)) || (*0x80057ce == '\x01'))
                                    goto code_r0x0800ad1c;
                                    *0x800b000 = *0x800b000 + 1;
                                }
                            }
                            else if (*0x8017000 != 0) {
                                *0x800b000 = *0x800b000 + 1;
                            }
                            uVar14 = 0;
                        }
                        else {
                            if (*0x8017000 != 0) {
                                sym.trace_rmnet_shs_high_1(8,0x2f,1,iVar13,0xdef,0xdef,0,0);
                            }
                            if (*0x8017000 != 0) {
                                *0x800b000 = *0x800b000 + 1;
                            }
                            uVar14 = uVar11;
                        }
                        sym.DATARMNETa4bf9fbf64(uVar14,0);
                        goto code_r0x0800ad1c;
                    }
                    if (*0x8017000 != 0) {
                        *0x800b000 = *0x800b000 + 1;
                        sym.trace_rmnet_shs_high_1(8,0x2e,0,0xdef,0xdef,0xdef,0,0);
                    }
                    _raw_spin_lock_bh(0x8004164);
                    iVar13 = 6;
                }
                sym.DATARMNETe377e0368d(iVar13,0);
                _raw_spin_unlock_bh(0x8004164);
                goto code_r0x0800ad1c;
            }
            piVar1 = iVar13 + 0x80;
            iVar13 = 0;
            if (*piVar1 != 0) {
                iVar13 = *piVar1 + -0x80;
            }
        }
    }
    if (*(arg2 + 2) == 0) {
        uVar11 = *0x80057d0 & 7 & (*0x80057cf ^ 0xff);
        if ((uVar11 & 1) == 0) {
            uVar9 = 0xffffffff;
            uVar10 = 0xffffffff;
            iVar8 = -1;
joined_r0x0800a6c0:
            if ((uVar11 >> 1 & 1) != 0) {
                if (*0x8005810 == 0x8005810) {
                    uVar14 = 1;
                    goto code_r0x0800a548;
                }
                uVar9 = uVar10;
                if (iVar8 == -1 || CONCAT22(*0x8005002,*0x8005000) <= iVar8) {
                    iVar8 = CONCAT22(*0x8005002,*0x8005000);
                    uVar9 = 1;
                }
            }
            if ((uVar11 >> 2 == 0) ||
               (((uVar14 = 2, *0x8005838 != 0x8005838 && (iVar8 != -1)) && (iVar8 < CONCAT22(*0x8005002,*0x8005000))))
               ) goto code_r0x0800a540;
        }
        else {
            if (*0x80057e8 != 0x80057e8) {
                uVar9 = 0;
                uVar10 = 0;
                iVar8 = CONCAT22(*0x8005002,*0x8005000);
                goto joined_r0x0800a6c0;
            }
            uVar14 = 0;
        }
code_r0x0800a548:
        if (*0x80057c0 < 0x2bd) {
            iVar13 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0xd8);
            if (iVar13 != 0) {
                Hint_Prefetch(0x80057c0,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(0x80057c0,0x10);
                    if (bVar4) {
                        cVar3 = ExclusiveMonitorsStatus();
                        *0x80057c0 = *0x80057c0 + 1;
                    }
                } while (cVar3 != '\0');
                uVar12 = *(arg1 + 0x10);
                uVar2 = *(arg1 + 0x94);
                *(iVar13 + 0xc6) = uVar14;
                *(iVar13 + 0x50) = uVar12;
                *(iVar13 + 0xc0) = uVar2;
                uVar12 = sym.DATARMNET04e8d1b862(uVar14,uVar6);
                return uVar12;
            }
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            *0x800b000 = *0x800b000 + 1;
        }
    }
    else {
        uVar9 = sym.DATARMNET362c14e98b(*0x80057d0 & 7 & (*0x80057cf ^ 0xffffffff),noname_1,in_w2,in_x3);
code_r0x0800a540:
        uVar14 = uVar9;
        if (-1 < uVar9) goto code_r0x0800a548;
        *0x800b000 = *0x800b000 + 1;
    }
    _raw_spin_unlock_irqrestore(0x8004164,uVar12);
    *0x800b000 = *0x800b000 + 1;
    sym.DATARMNETe767554e6e(arg1);
code_r0x0800ad1c:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return 0;
    }
    __stack_chk_fail();
code_r0x0800ad60:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x800ad64);
    (*pcVar7)();
}



// ===== sym.DATARMNET203752febd @ 0x0800b0fc (size 56) =====



void sym.DATARMNET203752febd(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ___cpu_online_mask = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
    return;
}




// ===== sym.DATARMNET7520667b38 @ 0x0800b134 (size 64) =====



void sym.DATARMNET7520667b38(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ___cpu_online_mask = sym.DATARMNET756778f14f.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNETef42b9f0b2.llvm.12794510937076405148,1);
    return;
}




// ===== sym.DATARMNET8f9da46b14 @ 0x0800b174 (size 64) =====



void sym.DATARMNET8f9da46b14(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _delayed_work_timer_fn = sym.DATARMNET756778f14f.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
    return;
}




// ===== sym.DATARMNET9297340f58 @ 0x0800b1b4 (size 152) =====



void sym.DATARMNET9297340f58(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETdf74db7e38();
    sym.DATARMNET90fe3a4b56();
    *0x80057c9 = 0;
    unregister_oom_notifier(reloc.DATARMNET2aa4ef6ff9.81efb59fd3a31beea9bc32b1f5369f20.cfi_jt);
    wakeup_source_unregister(*0x80057e0);
    if (*0x80057cb != '\0') {
        hrtimer_cancel(0x80051c8);
    }
    hrtimer_cancel(0x8005210);
    hrtimer_cancel(0x8005258);
    memset(0x80051c8,0,0x620);
    *0x8017000 = arg1;
    return;
}




// ===== sym.DATARMNET2aa4ef6ff9 @ 0x0800b24c (size 280) =====



ulong sym.DATARMNET2aa4ef6ff9(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    code *pcVar1;
    uint32_t arg2;
    int64_t iVar2;
    ulong *in_x17;
    ulong *puVar3;
    ulong *extraout_x17;
    ulong *extraout_x17_00;
    ulong *in_x18;
    ulong unaff_x26;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x17 = unaff_x26;
    arg2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    while( true ) {
        if (unaff_x26 <= arg2) {
            return 0;
        }
        if (0x1f < arg2) break;
        if ((*0x8017000 != 0) &&
           (iVar2 = *(__per_cpu_offset + arg2 * 8),
           *0x8017000 <= *(cpus_read_unlock + iVar2) + *(hrtimer_active + iVar2))) {
            sym.DATARMNET82e88dbb56(freq_qos_add_request + iVar2,arg2);
            puVar3 = extraout_x17;
            if (*0x8017000 <= *(cpus_read_unlock + iVar2)) {
                sym.DATARMNET82e88dbb56(__rcu_read_unlock + iVar2,arg2);
                puVar3 = extraout_x17_00;
            }
            *arg1 = *arg1 + 1;
            *puVar3 = unaff_x26;
        }
        arg2 = cpumask_next(arg2,__cpu_possible_mask);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x800b364);
    (*pcVar1)();
}




// ===== sym.DATARMNET4095253347 @ 0x0800b364 (size 84) =====



void sym.DATARMNET4095253347(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _obj.DATARMNET30a3e83974;
    iVar1 = arg1 + 0x10;
    uVar3 = __list_add_valid(iVar1,obj.DATARMNET30a3e83974,_obj.DATARMNET30a3e83974);
    if ((uVar3 & 1) != 0) {
        *(iVar2 + 8) = iVar1;
        *(arg1 + 0x10) = iVar2;
        *(arg1 + 0x18) = obj.DATARMNET30a3e83974;
        _obj.DATARMNET30a3e83974 = iVar1;
    }
    return;
}




// ===== obj.DATARMNETb7ddf3c5dd @ 0x0800b3b8 (size 28) =====



void obj.DATARMNETb7ddf3c5dd(void)

{
    return;
}




// ===== sym.DATARMNETf7d317ed55 @ 0x0800b470 (size 24) =====



void sym.DATARMNETf7d317ed55(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    uVar4 = __list_del_entry_valid(iVar1);
    if ((uVar4 & 1) != 0) {
        iVar2 = *(arg1 + 0x10);
        piVar3 = *(arg1 + 0x18);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg1 + 0x10) = iVar1;
    *(arg1 + 0x18) = iVar1;
    return;
}




// ===== obj.DATARMNET84413d1257 @ 0x0800b488 (size 76) =====



void obj.DATARMNET84413d1257(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    
    iVar1 = arg1 + 0x10;
    uVar4 = __list_del_entry_valid(iVar1);
    if ((uVar4 & 1) != 0) {
        iVar2 = *(arg1 + 0x10);
        piVar3 = *(arg1 + 0x18);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg1 + 0x10) = iVar1;
    *(arg1 + 0x18) = iVar1;
    return;
}




// ===== sym.DATARMNET36e5e526fa @ 0x0800b570 (size 152) =====



void sym.DATARMNET36e5e526fa(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(0x8005f0c);
    iVar2 = _obj.DATARMNET9825511866;
    iVar1 = arg1 + 0x50;
    uVar4 = __list_add_valid(iVar1,obj.DATARMNET9825511866,_obj.DATARMNET9825511866);
    if ((uVar4 & 1) != 0) {
        *(arg1 + 0x50) = iVar2;
        *(arg1 + 0x58) = obj.DATARMNET9825511866;
        _obj.DATARMNET9825511866 = iVar1;
        *(iVar2 + 8) = iVar1;
    }
    _raw_spin_unlock_irqrestore(0x8005f0c,uVar3);
    return;
}




// ===== sym.DATARMNET2fe780019f @ 0x0800b6a4 (size 132) =====



void sym.DATARMNET2fe780019f(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(0x8005f0c);
    uVar4 = __list_del_entry_valid(arg1 + 0x50);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(arg1 + 0x50);
        piVar2 = *(arg1 + 0x58);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x58) = 0xdead000000000122;
    _raw_spin_unlock_irqrestore(0x8005f0c,uVar3);
    return;
}




// ===== sym.DATARMNETb4a6870b3b @ 0x0800b7c4 (size 132) =====



void sym.DATARMNETb4a6870b3b(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(0x8005f0c);
    iVar1 = arg1 + 0x40;
    uVar5 = __list_del_entry_valid(iVar1);
    if ((uVar5 & 1) != 0) {
        iVar2 = *(arg1 + 0x40);
        piVar3 = *(arg1 + 0x48);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg1 + 0x40) = iVar1;
    *(arg1 + 0x48) = iVar1;
    _raw_spin_unlock_irqrestore(0x8005f0c,uVar4);
    return;
}




// ===== sym.DATARMNETd8a6375e9c @ 0x0800b8e4 (size 148) =====



void sym.DATARMNETd8a6375e9c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(0x8005f0c);
    iVar4 = *arg2;
    iVar1 = arg1 + 0x40;
    uVar3 = __list_add_valid(iVar1,arg2,iVar4);
    if ((uVar3 & 1) != 0) {
        *(iVar4 + 8) = iVar1;
        *(arg1 + 0x40) = iVar4;
        *(arg1 + 0x48) = arg2;
        *arg2 = iVar1;
    }
    _raw_spin_unlock_irqrestore(0x8005f0c,uVar2);
    return;
}




// ===== sym.DATARMNET9914e9761e @ 0x0800ba14 (size 176) =====



void sym.DATARMNET9914e9761e(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong in_x2;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(0x8005f0c,arg2,in_x2,*(arg1 + 0x12e));
    iVar1 = arg1 + 0x40;
    uVar4 = __list_del_entry_valid(iVar1);
    if ((uVar4 & 1) != 0) {
        iVar5 = *(arg1 + 0x40);
        piVar2 = *(arg1 + 0x48);
        *(iVar5 + 8) = piVar2;
        *piVar2 = iVar5;
    }
    iVar5 = *arg2;
    uVar4 = __list_add_valid(iVar1,arg2,iVar5);
    if ((uVar4 & 1) != 0) {
        *(iVar5 + 8) = iVar1;
        *(arg1 + 0x40) = iVar5;
        *(arg1 + 0x48) = arg2;
        *arg2 = iVar1;
    }
    _raw_spin_unlock_irqrestore(0x8005f0c,uVar3);
    return;
}




// ===== sym.DATARMNET6bf538fa23 @ 0x0800bb5c (size 44) =====



void sym.DATARMNET6bf538fa23(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    return;
}




// ===== sym.DATARMNETaea4c85748 @ 0x0800bb88 (size 44) =====



void sym.DATARMNETaea4c85748(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_unlock_bh(0x8005f08);
    return;
}




// ===== sym.DATARMNETe46c480d71 @ 0x0800bbb4 (size 244) =====



int64_t sym.DATARMNETe46c480d71(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    bool bVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.DATARMNET30a3e83974 == obj.DATARMNET30a3e83974) {
code_r0x0800bc1c:
        *0x8005000 = 0;
    }
    else {
        bVar3 = true;
        uVar4 = 0xff;
        pcVar5 = _obj.DATARMNET30a3e83974;
        do {
            while ((pcVar5[0x5e] == 0x0 || (pcVar1 = pcVar5 + 0x5c, *pcVar1 == 0))) {
                pcVar5 = *pcVar5;
                if (pcVar5 == obj.DATARMNET30a3e83974) {
                    if (bVar3) goto code_r0x0800bc1c;
                    goto code_r0x0800bc28;
                }
            }
            pcVar5 = *pcVar5;
            bVar3 = false;
            uVar4 = uVar4 & *pcVar1;
        } while (pcVar5 != obj.DATARMNET30a3e83974);
code_r0x0800bc28:
        if (*0x80057d0 != uVar4) {
            iVar2 = (uVar4 & 1) + (uVar4 >> 7) + (uVar4 >> 1 & 1) + (uVar4 >> 2 & 1) + (uVar4 >> 3 & 1) +
                    (uVar4 >> 4 & 1) + (uVar4 >> 5 & 1) + (uVar4 >> 6 & 1);
            *0x80057d0 = uVar4;
            *0x80057d1 = iVar2;
            arg1 = _printk(0x80029f9,uVar4,iVar2);
        }
    }
    return arg1;
}




// ===== sym.DATARMNET310c3eb16e @ 0x0800bca8 (size 76) =====



int sym.DATARMNET310c3eb16e(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xff;
    return (arg1 & 1) + (uVar1 >> 7) + (uVar1 >> 1 & 1) + (uVar1 >> 2 & 1) + (uVar1 >> 3 & 1) + (uVar1 >> 4 & 1) +
           (uVar1 >> 5 & 1) + (uVar1 >> 6 & 1);
}




// ===== sym.DATARMNETde8ee16f92 @ 0x0800bcf4 (size 124) =====



void sym.DATARMNETde8ee16f92(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x40;
    uVar4 = __list_del_entry_valid(iVar1);
    if ((uVar4 & 1) != 0) {
        iVar2 = *(arg1 + 0x40);
        piVar3 = *(arg1 + 0x48);
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *(arg1 + 0x40) = iVar1;
    *(arg1 + 0x48) = iVar1;
    sym.DATARMNET349c3a0cab(*(arg1 + 0xc6));
    return;
}




// ===== sym.DATARMNET3e37ad2816 @ 0x0800be0c (size 132) =====



void sym.DATARMNET3e37ad2816(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *arg2;
    iVar1 = arg1 + 0x40;
    uVar2 = __list_add_valid(iVar1,arg2,iVar3);
    if ((uVar2 & 1) != 0) {
        *(iVar3 + 8) = iVar1;
        *(arg1 + 0x40) = iVar3;
        *(arg1 + 0x48) = arg2;
        *arg2 = iVar1;
    }
    sym.DATARMNET349c3a0cab(*(arg1 + 0xc6));
    return;
}




// ===== sym.DATARMNETe102b3a798 @ 0x0800bf2c (size 180) =====



void sym.DATARMNETe102b3a798(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x40;
    uVar3 = __list_del_entry_valid(iVar1);
    if ((uVar3 & 1) != 0) {
        iVar4 = *(arg1 + 0x40);
        piVar2 = *(arg1 + 0x48);
        *(iVar4 + 8) = piVar2;
        *piVar2 = iVar4;
    }
    iVar4 = *arg2;
    uVar3 = __list_add_valid(iVar1,arg2,iVar4);
    if ((uVar3 & 1) != 0) {
        *(iVar4 + 8) = iVar1;
        *(arg1 + 0x40) = iVar4;
        *(arg1 + 0x48) = arg2;
        *arg2 = iVar1;
    }
    sym.DATARMNET349c3a0cab(*(arg1 + 0xc6));
    sym.DATARMNET349c3a0cab(arg3 & 0xffffffff);
    return;
}




// ===== sym.DATARMNET4bde88919f @ 0x0800c07c (size 56) =====



void sym.DATARMNET4bde88919f(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if ((arg1 & 0xff) < 8) {
        iVar1 = (arg1 & 0xffU) * 4;
        *(iVar1 + 0x800b4a8) = *(iVar1 + 0x800b4a8) + arg2;
    }
    return;
}




// ===== sym.DATARMNETfc888b4d3e @ 0x0800c0b4 (size 68) =====



ulong sym.DATARMNETfc888b4d3e(int64_t arg1)

{
    if (7 < (arg1 & 0xffff)) {
        *0x800b000 = *0x800b000 + 1;
        return 0;
    }
    return *(obj.DATARMNET713717107f + (arg1 & 0xffffU) * 8);
}




// ===== sym.DATARMNET362b15f941 @ 0x0800c0f8 (size 24) =====



uint32_t sym.DATARMNET362b15f941(int64_t arg1)

{
    return 0xffffff07U >> (arg1 & 0x1f) & 1;
}




// ===== sym.DATARMNETadb0248bd4 @ 0x0800c110 (size 112) =====



uint sym.DATARMNETadb0248bd4(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xff) < 8) {
        uVar1 = *((arg1 & 0xffU) * 0x28 + 0x80057f8);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}




// ===== sym.DATARMNETeb3978575d @ 0x0800c224 (size 112) =====



uint sym.DATARMNETeb3978575d(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xff) < 8) {
        uVar1 = *((arg1 & 0xffU) * 0x28 + 0x80057fc);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}




// ===== sym.DATARMNETeea3cef5b6 @ 0x0800c338 (size 112) =====



uint sym.DATARMNETeea3cef5b6(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xff) < 8) {
        uVar1 = *((arg1 & 0xffU) * 0x28 + 0x8005800);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}




// ===== sym.DATARMNET4e292977da @ 0x0800c44c (size 56) =====



uint64_t sym.DATARMNET4e292977da(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        if (*(arg3 + 0x58) < *(arg2 + 0x58)) {
            return 0xffffffff;
        }
        uVar1 = *(arg2 + 0x58) < *(arg3 + 0x58);
    }
    return uVar1;
}




// ===== sym.DATARMNET3c489db64a @ 0x0800c484 (size 56) =====



uint64_t sym.DATARMNET3c489db64a(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        if (*(arg3 + 0x58) < *(arg2 + 0x58)) {
            return 0xffffffff;
        }
        uVar1 = *(arg2 + 0x58) < *(arg3 + 0x58);
    }
    return uVar1;
}




// ===== sym.DATARMNETd5c15f1ff3 @ 0x0800c4bc (size 56) =====



uint64_t sym.DATARMNETd5c15f1ff3(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        if (*(arg3 + 0x18) < *(arg2 + 0x18)) {
            return 0xffffffff;
        }
        uVar1 = *(arg2 + 0x18) < *(arg3 + 0x18);
    }
    return uVar1;
}




// ===== sym.DATARMNET85af86a36d @ 0x0800c4f4 (size 56) =====



uint64_t sym.DATARMNET85af86a36d(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    uVar1 = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        if (*(arg3 + 0x18) < *(arg2 + 0x18)) {
            return 0xffffffff;
        }
        uVar1 = *(arg2 + 0x18) < *(arg3 + 0x18);
    }
    return uVar1;
}




// ===== sym.DATARMNETf181a18009 @ 0x0800c52c (size 312) =====



int sym.DATARMNETf181a18009(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    code *pcVar5;
    ulong uVar6;
    code *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
        return -1;
    }
    uVar6 = _raw_spin_lock_irqsave(0x8005f08);
    pcVar5 = _obj.DATARMNET30a3e83974;
    while( true ) {
        if (pcVar5 == obj.DATARMNET30a3e83974) {
            *0x800b000 = *0x800b000 + 1;
            _raw_spin_unlock_irqrestore(0x8005f08,uVar6);
            return -1;
        }
        if ((pcVar5[0x5e] != 0x0) && (*(pcVar5 + 0x10) == arg1)) break;
        pcVar5 = *pcVar5;
    }
    uVar2 = *(pcVar5 + 0x60);
    uVar3 = *(pcVar5 + 0x68);
    uVar9 = uVar2 & 0xff;
    if (uVar9 < (uVar3 & 0xff)) {
        uVar1 = uVar2 & 0xff;
        if (uVar1 < 9) {
            uVar1 = 8;
        }
        pcVar7 = pcVar5 + uVar9 * 4 + 0x18;
        iVar8 = (uVar3 & 0xff) - uVar9;
        iVar10 = uVar1 - uVar9;
        do {
            if (iVar10 == 0) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x5512,0x800c664);
                (*pcVar5)();
            }
            iVar11 = *pcVar7;
            if (-1 < iVar11) goto code_r0x0800c630;
            iVar8 = iVar8 + -1;
            pcVar7 = pcVar7 + 4;
            iVar10 = iVar10 + -1;
        } while (iVar8 != 0);
    }
    iVar11 = -1;
    if (uVar3 <= uVar2 + 1) {
code_r0x0800c630:
        iVar4 = 0;
        if (uVar3 != 0) {
            iVar4 = (uVar2 + 1) / uVar3;
        }
        *(pcVar5 + 0x60) = (uVar2 + 1) - iVar4 * uVar3;
    }
    _raw_spin_unlock_irqrestore(0x8005f08,uVar6);
    return iVar11;
}




// ===== sym.DATARMNET98b2a0ce62 @ 0x0800c664 (size 280) =====



int sym.DATARMNET98b2a0ce62(int64_t arg1)

{
    code cVar1;
    code cVar2;
    uint32_t uVar3;
    code *pcVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
        return -1;
    }
    uVar5 = _raw_spin_lock_irqsave(0x8005f08);
    pcVar4 = _obj.DATARMNET30a3e83974;
    while( true ) {
        if (pcVar4 == obj.DATARMNET30a3e83974) {
            *0x800b000 = *0x800b000 + 1;
            _raw_spin_unlock_irqrestore(0x8005f08,uVar5);
            return -1;
        }
        if ((pcVar4[0x5e] != 0x0) && (*(pcVar4 + 0x10) == arg1)) break;
        pcVar4 = *pcVar4;
    }
    cVar1 = pcVar4[100];
    uVar8 = cVar1;
    cVar2 = pcVar4[0x6c];
    if (cVar1 < cVar2) {
        uVar7 = cVar1;
        if (uVar7 < 9) {
            uVar7 = 8;
        }
        do {
            if (uVar7 == uVar8) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800c77c);
                (*pcVar4)();
            }
            iVar9 = *(pcVar4 + uVar8 * 4 + 0x38);
            if (-1 < iVar9) {
                uVar7 = (uVar8 & 0xff) + 1;
                uVar3 = 0;
                uVar6 = cVar2;
                if (uVar6 != 0) {
                    uVar3 = uVar7 / uVar6;
                }
                *(pcVar4 + 100) = uVar7 - uVar3 * uVar6;
                goto code_r0x0800c754;
            }
            uVar8 = uVar8 + 1;
        } while (cVar2 != uVar8);
    }
    iVar9 = -1;
code_r0x0800c754:
    _raw_spin_unlock_irqrestore(0x8005f08,uVar5);
    return iVar9;
}




// ===== sym.DATARMNET7f1d9480cb @ 0x0800c77c (size 36) =====



void sym.DATARMNET7f1d9480cb(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET4063c95208();
    return;
}




// ===== sym.DATARMNETa4bd2ef52c @ 0x0800c7a0 (size 36) =====



void sym.DATARMNETa4bd2ef52c(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET7b6c061b06();
    return;
}




// ===== sym.DATARMNET928c931df9 @ 0x0800c7c4 (size 196) =====



uint32_t sym.DATARMNET928c931df9(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    uVar3 = *arg1;
    uVar5 = 0;
    if (uVar3 == 0) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        if (uVar3 != 1) {
            uVar5 = 0;
            if ((-uVar3 & 0xff) == 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = 0;
                if (uVar3 - 1 < 0x100) {
                    uVar7 = 0;
                    uVar4 = 0;
                    uVar6 = 0;
                    uVar5 = uVar3 & 0xfffffffe;
                    do {
                        uVar2 = uVar7 & 0xfe;
                        uVar7 = uVar7 + 2;
                        uVar4 = uVar4 | 1 << (*(arg1 + 0x18 + uVar2 * 2) & 0x1f);
                        uVar6 = uVar6 | 1 << (*(arg1 + 0x18 + (uVar2 | 1) * 2) & 0x1f);
                    } while (uVar5 != uVar7);
                    uVar6 = uVar6 | uVar4;
                    if (uVar3 == uVar5) {
                        return uVar6;
                    }
                }
            }
        }
        do {
            uVar1 = uVar5;
            uVar5 = uVar5 + 1;
            uVar6 = uVar6 | 1 << (*(arg1 + uVar1 * 2 + 0x18) & 0x1f);
        } while ((uVar5 & 0xff) < uVar3);
    }
    return uVar6;
}




// ===== sym.DATARMNET04e8d1b862 @ 0x0800c888 (size 208) =====



uint32_t sym.DATARMNET04e8d1b862(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar3 = arg2;
    uVar1 = arg1;
    if (((uVar3 & 0xff) >> (uVar1 & 0x1f) & 1) != 0) {
        uVar2 = uVar3 & 1;
        if ((arg1 & 0xffU) == 0) {
            if ((arg2 & 1U) == 0) {
                return 0xffffffff;
            }
            return 0;
        }
        uVar4 = uVar3 & 2;
        if ((uVar1 & 0xff) != 1) {
            uVar2 = uVar2 + (uVar4 >> 1);
            uVar4 = uVar3 & 4;
            if ((uVar1 & 0xff) != 2) {
                uVar2 = uVar2 + (uVar4 >> 2);
                uVar4 = uVar3 & 8;
                if ((uVar1 & 0xff) != 3) {
                    uVar2 = uVar2 + (uVar4 >> 3);
                    uVar4 = uVar3 & 0x10;
                    if ((uVar1 & 0xff) != 4) {
                        uVar2 = uVar2 + (uVar4 >> 4);
                        uVar1 = uVar1 & 0xff;
                        uVar4 = uVar3 & 0x20;
                        if (uVar1 != 5) {
                            uVar2 = uVar2 + (uVar4 >> 5);
                            uVar4 = uVar3 & 0x40;
                            if (uVar1 == 7) {
                                if ((uVar3 & 0xff) >> 7 == 0) {
                                    return 0xffffffff;
                                }
                                return uVar2 + (uVar4 >> 6);
                            }
                            if (uVar1 != 6) {
                                return 0xffffffff;
                            }
                        }
                        if (uVar4 != 0) {
                            return uVar2;
                        }
                        return 0xffffffff;
                    }
                }
            }
        }
        if (uVar4 != 0) {
            return uVar2;
        }
    }
    return 0xffffffff;
}




// ===== sym.DATARMNET217fe38119 @ 0x0800c958 (size 128) =====



int sym.DATARMNET217fe38119(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((0x18 < arg1 >> 0xd) || (iVar1 = sym.DATARMNETf181a18009(arg2), iVar1 == -1)) {
        iVar1 = sym.DATARMNET98b2a0ce62(arg2);
    }
    return iVar1;
}




// ===== sym.DATARMNETefcaf5fbe9 @ 0x0800ca80 (size 296) =====



int64_t sym.DATARMNETefcaf5fbe9(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x70);
    iVar7 = 0;
    if ((arg2 <= uVar1) && (uVar4 = arg3, uVar4 <= uVar1)) {
        if (uVar1 < uVar4 + arg2) {
            iVar7 = 0;
        }
        else {
            uVar1 = uVar1 - *(arg1 + 0x74);
            if (uVar1 < uVar4 + arg2) {
                iVar7 = *(arg1 + 0xd0) + *(arg1 + 0xcc);
                if (*(iVar7 + 2) != 0) {
                    iVar8 = 0;
                    uVar6 = arg2 - uVar1;
                    do {
                        if (iVar8 == 0x120) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x5512,0x800cba8);
                            (*pcVar2)();
                        }
                        uVar1 = *(iVar7 + iVar8 + 0x50);
                        uVar5 = uVar6;
                        uVar9 = uVar5 - uVar1;
                        if ((uVar5 < uVar1) && (uVar9 = uVar6, uVar5 + uVar4 <= uVar1)) {
                            return ((*(iVar7 + iVar8 + 0x48) & 0x3ffffffffffc0) << 6 | 0xff00000000000000) +
                                   *(iVar7 + iVar8 + 0x54) + uVar6;
                        }
                        iVar8 = iVar8 + 0x10;
                        uVar6 = uVar9;
                    } while (*(iVar7 + 2) * 0x10 - iVar8 != 0);
                }
                iVar3 = skb_copy_bits(arg1,arg2,arg4);
                iVar7 = arg4;
                if (iVar3 != 0) {
                    iVar7 = 0;
                }
            }
            else {
                iVar7 = *(arg1 + 0xd8) + arg2;
            }
        }
    }
    return iVar7;
}




// ===== sym.DATARMNET44459105b4 @ 0x0800cba8 (size 404) =====



ulong * sym.DATARMNET44459105b4(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *puVar6;
    uint8_t *puVar7;
    ulong *puVar8;
    uint32_t extraout_w1;
    uint32_t in_w2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_90 [4];
    ushort auStack_8c [2];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    uint uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    auStack_8c[0] = 0;
    auStack_90[0] = 0;
    if (*(arg1 + 0xb0) == -0x227a) {
        in_w2 = 0x28;
        puVar8 = sym.DATARMNETefcaf5fbe9(arg1,0,0x28,&uStack_50);
        puVar6 = NULL;
        if (puVar8 == NULL) goto code_r0x0800cd0c;
        *(arg2 + 0xd0) = *(puVar8 + 6);
        *arg2 = *puVar8;
        uVar2 = puVar8[4];
        uVar1 = puVar8[1];
        uVar3 = puVar8[2];
        *(arg2 + 0x18) = puVar8[3];
        *(arg2 + 0x20) = uVar2;
        *(arg2 + 8) = uVar1;
        *(arg2 + 0x10) = uVar3;
        auStack_90[0] = *(puVar8 + 6);
        in_w2 = auStack_90;
        puVar6 = ipv6_skip_exthdr(arg1,0x28,auStack_90,auStack_8c);
        if (puVar6 < 0) goto code_r0x0800cd0c;
    }
    else {
        puVar6 = NULL;
        if (*(arg1 + 0xb0) == 8) {
            in_w2 = 0x14;
            puVar7 = sym.DATARMNETefcaf5fbe9(arg1,0,0x14,&uStack_68);
            puVar6 = NULL;
            if (puVar7 == NULL) goto code_r0x0800cd0c;
            *(arg2 + 0xd0) = puVar7[9];
            uVar1 = *puVar7;
            uVar2 = *(puVar7 + 8);
            *(arg2 + 0x10) = *(puVar7 + 0x10);
            *arg2 = uVar1;
            *(arg2 + 8) = uVar2;
            puVar6 = (*puVar7 & 0xf) << 2;
        }
    }
    if (*(arg2 + 0xd0) == 0x11) {
        in_w2 = 8;
        puVar6 = sym.DATARMNETefcaf5fbe9(arg1,puVar6 & 0xffff,8,&uStack_88);
        if (puVar6 != NULL) {
            *(arg2 + 0x28) = *puVar6;
        }
    }
    else if (*(arg2 + 0xd0) == 6) {
        in_w2 = 0x14;
        puVar6 = sym.DATARMNETefcaf5fbe9(arg1,puVar6 & 0xffff,0x14,&uStack_80);
        if (puVar6 != NULL) {
            uVar1 = *puVar6;
            uVar2 = puVar6[1];
            *(arg2 + 0x38) = *(puVar6 + 2);
            *(arg2 + 0x28) = uVar1;
            *(arg2 + 0x30) = uVar2;
        }
    }
code_r0x0800cd0c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET8532ab3089;
    if (extraout_w1 == 0) {
        puVar6 = NULL;
        *0x800b000 = *0x800b000 + 1;
    }
    else if (extraout_w1 < 8) {
        puVar6 = in_w2 & 0xfffff | ((extraout_w1 & 1) + iVar5) * *((extraout_w1 - 1 >> 1) * 4 + 0x8002c58) * 0x10000000;
    }
    else {
        puVar6 = NULL;
    }
    return puVar6;
}




// ===== sym.DATARMNET8532ab3089 @ 0x0800cd3c (size 164) =====



uint32_t sym.DATARMNET8532ab3089(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar1 = 0;
        *0x800b000 = *0x800b000 + 1;
    }
    else if (arg2 < 8) {
        uVar1 = arg3 & 0xfffff | ((arg2 & 1) + arg1) * *((arg2 - 1 >> 1) * 4 + 0x8002c58) * 0x10000000;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}




// ===== sym.DATARMNETdc7bead533 @ 0x0800ce7c (size 76) =====



bool sym.DATARMNETdc7bead533(uint32_t arg1,uint32_t arg2)

{
    if (7 < arg1) {
        *0x800b000 = *0x800b000 + 1;
        return false;
    }
    return arg2 < *(arg1 * 0x98 + 0x8005970);
}




// ===== sym.DATARMNETa6e92c3315 @ 0x0800cec8 (size 140) =====



void sym.DATARMNETa6e92c3315(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x137) = 0;
    *(arg1 + 0x60) = 0;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x12f) = 0;
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x128) = 0xffffffff;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x98) = 0;
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 200) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x118) = 0;
    *(arg1 + 0x40) = arg1 + 0x40;
    *(arg1 + 0x48) = arg1 + 0x40;
    *(arg1 + 0x136) = 0;
    *(arg1 + 0x134) = 0;
    return;
}




// ===== sym.DATARMNETf5b8fce55d @ 0x0800cfec (size 176) =====



void sym.DATARMNETf5b8fce55d(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xff) != 0) {
        do {
            arg1_00 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x138);
            if (arg1_00 == 0) {
                *0x800b000 = *0x800b000 + 1;
            }
            else {
                *(arg1_00 + 0x135) = arg2;
                sym.DATARMNETa6e92c3315(arg1_00);
                *(arg1_00 + 0x50) = arg1_00 + 0x50;
                *(arg1_00 + 0x58) = arg1_00 + 0x50;
                *(arg1_00 + 0x40) = arg1_00 + 0x40;
                *(arg1_00 + 0x48) = arg1_00 + 0x40;
                sym.DATARMNET36e5e526fa(arg1_00);
            }
            arg1 = arg1 - 1;
        } while ((arg1 & 0xff) != 0);
    }
    return;
}




// ===== sym.DATARMNETb062995420 @ 0x0800d09c (size 428) =====



code * sym.DATARMNETb062995420(void)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    code *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar1 = _raw_spin_lock_irqsave(0x8005f0c);
    pcVar2 = _obj.DATARMNET9825511866;
    do {
        if (pcVar2 == obj.DATARMNET9825511866) {
            arg1 = NULL;
code_r0x0800d118:
            _raw_spin_unlock_irqrestore(0x8005f0c,uVar1);
            __rcu_read_unlock();
            if (arg1 == NULL) {
                arg1 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x138);
                if (arg1 == NULL) {
                    *0x800b000 = *0x800b000 + 1;
                }
                else {
                    sym.DATARMNETa6e92c3315(arg1);
                    *(arg1 + 0x134) = 1;
                    arg1[0x136] = 0x1;
                    *(arg1 + 0x50) = arg1 + 0x50;
                    *(arg1 + 0x58) = arg1 + 0x50;
                    *(arg1 + 0x40) = arg1 + 0x40;
                    *(arg1 + 0x48) = arg1 + 0x40;
                    sym.DATARMNET36e5e526fa(arg1);
                }
            }
            return arg1;
        }
        if (pcVar2[0xe4] == 0x0) {
            arg1 = pcVar2 + -0x50;
            pcVar2[0xe4] = 0x1;
            pcVar2[0xe6] = 0x1;
            goto code_r0x0800d118;
        }
        pcVar2 = *pcVar2;
    } while( true );
}




// ===== sym.DATARMNET350f55bfca @ 0x0800d2fc (size 252) =====



void sym.DATARMNET350f55bfca(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar3 [16];
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        iVar2 = sym.DATARMNETb062995420();
        *(arg1 + 0x58) = iVar2;
        if (iVar2 != 0) {
            ktime_get_with_offset(1);
            auVar3 = ns_to_timespec64();
            *(*(arg1 + 0x58) + 0x124) = *(arg1 + 0xc0);
            *(*(arg1 + 0x58) + 0x130) = *(arg1 + 0xd0);
            *(*(arg1 + 0x58) + 0x12e) = *(arg1 + 0xc6);
            *(*(arg1 + 0x58) + 300) = *(arg1 + 0xc6);
            iVar1 = *0x800a000;
            *(*(arg1 + 0x58) + 0x137) = 0;
            if ((iVar1 != 0) && (*(*(arg1 + 0x58) + 0x130) == 6)) {
                *(*(arg1 + 0x58) + 0x137) = 2;
            }
            *(*(arg1 + 0x58) + 0x60) = arg1;
            iVar2 = auVar3._8_8_ + auVar3._0_8_ * 1000000000;
            *(*(arg1 + 0x58) + 0x68) = iVar2;
            *(*(arg1 + 0x58) + 0x70) = iVar2;
        }
    }
    return;
}




// ===== sym.DATARMNET0aa47ce397 @ 0x0800d494 (size 220) =====



void sym.DATARMNET0aa47ce397(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else if (_obj.DATARMNET30a3e83974 != obj.DATARMNET30a3e83974) {
        pcVar1 = _obj.DATARMNET30a3e83974;
        do {
            if (*(*(arg1 + 0x60) + 0x50) == *(pcVar1 + 0x10)) {
                *(arg1 + 0x110) = *(pcVar1 + 0x5c);
                *(arg1 + 0x118) = *(pcVar1 + 0x58);
                *(arg1 + 0x11c) = *(pcVar1 + 0x5a);
                if (*(arg1 + 0x130) == 6) {
                    iVar2 = -0x10;
                }
                else {
                    if (*(arg1 + 0x130) != 0x11) {
                        return;
                    }
                    iVar2 = -8;
                }
                *(pcVar1 + iVar2) = *(pcVar1 + iVar2) + *(arg1 + 0xa0);
                return;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.DATARMNET30a3e83974);
    }
    return;
}




// ===== sym.DATARMNETc55315279b @ 0x0800d5fc (size 468) =====



void sym.DATARMNETc55315279b(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    
    if (*0x8017000 == 0) {
        return;
    }
    if ((arg1 != 0) && (arg2 != 0)) {
        uVar2 = *(arg1 + 0x128);
        if (uVar2 < 0) {
            uVar2 = *0x8005000 % 0x20;
            *0x8005000 = *0x8005000 + 1;
            *(arg1 + 0x128) = uVar2;
        }
        if (uVar2 < 0x20) {
            *(uVar2 * 8 + 0x800a9b8) = *(arg1 + 0x124);
            if (*(arg1 + 0x128) < 0x20) {
                *(*(arg1 + 0x128) * 8 + 0x800aab8) = *(arg2 + 0xd0);
                if (*(arg1 + 0x128) < 0x20) {
                    *(*(arg1 + 0x128) * 8 + 0x800abb8) = *(arg1 + 0x78) / 1000000000;
                    if (*(arg1 + 0x128) < 0x20) {
                        *(obj.DATARMNET4b1ae621cd + *(arg1 + 0x128) * 8) = *(arg1 + 0xa0);
                        if (*(arg1 + 0x128) < 0x20) {
                            *(obj.DATARMNETf5133a99c6 + *(arg1 + 0x128) * 8) = *(arg1 + 0x98);
                            if (*(arg1 + 0x128) < 0x20) {
                                *(*(arg1 + 0x128) * 8 + 0x800acb8) = *(arg1 + 0x88);
                                if (*(arg1 + 0x128) < 0x20) {
                                    *(obj.DATARMNET338c8e7a2b + *(arg1 + 0x128) * 8) = *(arg1 + 0x80);
                                    if (*(arg1 + 0x128) < 0x20) {
                                        *(obj.DATARMNETdba344c809 + *(arg1 + 0x128) * 4) = *(arg1 + 0x12e);
                                        if (*(arg1 + 0x128) < 0x20) {
                                            *(obj.DATARMNET99a934c43a + *(arg1 + 0x128) * 4) = *(arg1 + 300);
                                            if (*(arg1 + 0x128) < 0x20) {
                                                *(obj.DATARMNETc5d73c43e6 + *(arg1 + 0x128) * 8) = *(arg1 + 8);
                                                if (*(arg1 + 0x128) < 0x20) {
                                                    *(*(arg1 + 0x128) * 8 + 0x800b1b8) = *(arg1 + 0x10);
                                                    if (*(arg1 + 0x128) < 0x20) {
                                                        *(*(arg1 + 0x128) * 8 + 0x800b2b8) = *(arg1 + 0x18);
                                                        return;
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
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800d7d0);
        (*pcVar1)();
    }
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNETd245b71b63 @ 0x0800d7d0 (size 64) =====



bool sym.DATARMNETd245b71b63(int64_t arg1,int64_t arg2)

{
    if ((arg1 != 0) && (arg2 != 0)) {
        return *(arg2 + 0x90) != *(arg1 + 0x80);
    }
    *0x800b000 = *0x800b000 + 1;
    return false;
}




// ===== sym.DATARMNETb49b4f6385 @ 0x0800d810 (size 236) =====



void sym.DATARMNETb49b4f6385(int64_t arg1)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (in_x1 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        *(arg1 + 0x78) = *0x8005000 - *(arg1 + 0x68);
    }
    return;
}




// ===== sym.DATARMNET9a7769cf21 @ 0x0800d90c (size 732) =====



void sym.DATARMNET9a7769cf21(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    bool bVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        arg2 = *(arg1 + 0x60);
        if (arg2 == 0) {
            *0x800b000 = *0x800b000 + 1;
        }
        else if (*(arg2 + 0x90) != *(arg1 + 0x80)) {
            sym.DATARMNET0aa47ce397(arg1);
            *(arg1 + 0x78) = 0;
            iVar18 = *0x8005000;
            iVar13 = *(*(arg2 + 0x58) + 0x68);
            *(arg1 + 0x70) = iVar13;
            uVar9 = iVar18 - iVar13;
            iVar14 = *(*(arg2 + 0x58) + 0x80);
            *(arg1 + 0xf0) = iVar14;
            iVar2 = *(*(arg2 + 0x58) + 0x10c);
            *(arg1 + 0x108) = iVar2;
            iVar11 = *(*(arg2 + 0x58) + 0x90);
            *(arg1 + 0xf8) = iVar11;
            iVar13 = *(*(arg2 + 0x58) + 0xe0);
            *(arg1 + 0xd0) = iVar13;
            iVar10 = *(*(arg2 + 0x58) + 0xe8);
            *(arg1 + 0xd8) = iVar10;
            iVar16 = *(*(arg2 + 0x58) + 0x88);
            *(arg1 + 0x68) = iVar18;
            *(arg1 + 0x100) = iVar16;
            iVar18 = *(arg2 + 0x90);
            *(arg1 + 0x80) = iVar18;
            uVar15 = iVar18 - iVar14;
            iVar3 = *(arg2 + 0xb8);
            *(arg1 + 0x10c) = iVar3;
            *(arg1 + 0x132) = iVar3 != iVar2;
            iVar18 = *(arg2 + 0x98);
            uVar5 = *0x8017000 * 1000000;
            bVar8 = *0x8017000 == 0;
            *(arg1 + 0x90) = iVar18;
            iVar14 = *(arg2 + 0xa8);
            uVar12 = iVar18 - iVar11;
            *(arg1 + 0xe0) = iVar14;
            if (bVar8 || uVar9 <= uVar5) {
                uVar9 = 100000000;
            }
            iVar18 = *(arg2 + 0xb0);
            uVar7 = 0;
            if (uVar9 != 0) {
                uVar7 = (uVar15 * 1000000000) / uVar9;
            }
            *(arg1 + 0xe8) = iVar18;
            iVar11 = *(arg2 + 0xa0);
            *(arg1 + 0x88) = iVar11;
            uVar5 = *0x8017000;
            uVar17 = 0;
            if (uVar9 != 0) {
                uVar17 = ((iVar11 - iVar16) * 1000000000) / uVar9;
            }
            uVar4 = 0xffffff07 >> (*(arg1 + 0x12e) & 0x1f);
            uVar6 = 100 - *0x8017000;
            uVar1 = uVar6;
            if ((uVar4 & 1) != 0) {
                uVar1 = *0x8017000;
            }
            *(arg1 + 0x98) = uVar7;
            *(arg1 + 0xa0) = uVar17 << 3;
            uVar9 = uVar7;
            if (*(arg1 + 0xa8) != 0) {
                if ((uVar4 & 1) != 0) {
                    uVar5 = uVar6;
                }
                uVar17 = (uVar5 & 0xffff) + (uVar1 & 0xffff);
                uVar9 = 0;
                if (uVar17 != 0) {
                    uVar9 = (uVar7 * (uVar1 & 0xffff) + (*(arg1 + 0xb0) + *(arg1 + 0xa8) >> 1) * (uVar5 & 0xffff)) /
                            uVar17;
                }
            }
            *(arg1 + 0xb0) = uVar9;
            uVar9 = 0;
            if ((uVar12 != 0) && (uVar9 = 0, uVar12 != 0)) {
                uVar9 = uVar15 / uVar12;
            }
            *(arg1 + 0xa8) = uVar7;
            *(arg1 + 0xb8) = uVar9;
            *(arg1 + 0xc0) = iVar14 - iVar13;
            *(arg1 + 200) = iVar18 - iVar10;
            sym.DATARMNETc55315279b(arg1,arg2);
            return;
        }
        *(arg1 + 0xb0) = 0;
        *(arg1 + 0x98) = 0;
        *(arg1 + 0xa0) = 0;
        sym.DATARMNETb49b4f6385(arg1);
        sym.DATARMNETc55315279b(arg1,arg2);
    }
    return;
}




// ===== sym.DATARMNET5b2ed86112 @ 0x0800dc88 (size 304) =====



void sym.DATARMNET5b2ed86112(int64_t arg1)

{
    uint16_t uVar1;
    int64_t *piVar2;
    ulong *in_x18;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar4 = 1;
        piVar2 = 0x800b580;
    }
    else {
        if (0 < *(arg1 + 0x78)) {
            return;
        }
        uVar1 = *(*(arg1 + 0x60) + 0xc6);
        uVar3 = uVar1;
        if (uVar3 < 8) {
            iVar6 = *(arg1 + 0x80);
            iVar4 = *(arg1 + 0x88);
            iVar5 = *(arg1 + 0xf0);
            iVar7 = *(arg1 + 0x100);
            if (*(arg1 + 0x136) != '\0') {
                sym.DATARMNETd8a6375e9c(arg1,uVar3 * 0x98 + 0x8005928);
                *(arg1 + 0x136) = 0;
            }
            iVar4 = iVar4 - iVar7;
            iVar6 = iVar6 - iVar5;
            if (uVar1 != *(arg1 + 0x12e)) {
                sym.DATARMNET9914e9761e(arg1,uVar3 * 0x98 + 0x8005928);
                sym.DATARMNET0349051465(uVar1);
                sym.DATARMNET3669e7b703(*(arg1 + 0x12e));
                *(arg1 + 0x12e) = uVar1;
            }
            iVar5 = uVar3 * 0x98;
            *(iVar5 + 0x8005958) = *(iVar5 + 0x8005958) + iVar6;
            *(iVar5 + 0x8005960) = *(iVar5 + 0x8005960) + iVar4;
            *0x8005e48 = *0x8005e48 + iVar6;
            piVar2 = 0x8005e50;
        }
        else {
            iVar4 = 1;
            piVar2 = 0x800b4f8;
        }
    }
    *piVar2 = *piVar2 + iVar4;
    return;
}




// ===== sym.DATARMNET0349051465 @ 0x0800de4c (size 116) =====



void sym.DATARMNET0349051465(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xffff) < 8) {
        iVar1 = (arg1 & 0xffffU) * 0x98;
        *(iVar1 + 0x80059b4) = *(iVar1 + 0x80059b4) + 1;
    }
    else {
        *0x800b000 = *0x800b000 + 1;
    }
    return;
}




// ===== sym.DATARMNET3669e7b703 @ 0x0800df54 (size 124) =====



void sym.DATARMNET3669e7b703(int64_t arg1)

{
    int iVar1;
    int *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xffff) < 8) {
        piVar2 = (arg1 & 0xffffU) * 0x98 + 0x80059b4;
        iVar1 = *piVar2;
        if (0 < iVar1) {
            *piVar2 = iVar1 + -1;
        }
    }
    else {
        *0x800b000 = *0x800b000 + 1;
    }
    return;
}




// ===== sym.DATARMNETdfb8ee742f @ 0x0800e064 (size 476) =====



void sym.DATARMNETdfb8ee742f(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    *(iVar2 + 0x10) = *(iVar2 + 0x10) + 0x200;
    uVar1 = _raw_spin_lock_irqsave(0x8004164);
    iVar2 = 0;
    do {
        iVar4 = *(iVar2 * 8 + 0x8004168);
        iVar3 = iVar4 + -0x80;
        if (iVar4 != 0 && iVar3 != 0) {
            do {
                iVar4 = *(iVar3 + 0x80);
                if (((*(iVar3 + 0x58) != 0) && (*(*(iVar3 + 0x58) + 300) == (arg1 & 0xffff))) &&
                   (*(iVar3 + 0x50) == *(arg3 + 0x20))) {
                    *(*(iVar3 + 0x58) + 300) = arg2;
                }
                iVar3 = 0;
                if (iVar4 != 0) {
                    iVar3 = iVar4 + -0x80;
                }
            } while (iVar3 != 0);
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 != 0x200);
    _raw_spin_unlock_irqrestore(0x8004164,uVar1);
    sym.local_bh_enable_1();
    return;
}




// ===== sym.DATARMNETd406e89a85 @ 0x0800e254 (size 172) =====



uint64_t sym.DATARMNETd406e89a85(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if ((arg1 & 1) != 0) {
        uVar2 = *0x8005970;
    }
    uVar1 = *0x8005a08;
    if (*0x8005a08 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 2) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005aa0;
    if (*0x8005aa0 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 4) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005b38;
    if (*0x8005b38 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 8) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005bd0;
    if (*0x8005bd0 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 0x10) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005c68;
    if (*0x8005c68 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 0x20) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005d00;
    if (*0x8005d00 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 0x40) != 0) {
        uVar2 = uVar1;
    }
    uVar1 = *0x8005d98;
    if (*0x8005d98 <= uVar2) {
        uVar1 = uVar2;
    }
    if ((arg1 & 0x80) != 0) {
        uVar2 = uVar1;
    }
    return uVar2;
}




// ===== sym.DATARMNET362c14e98b @ 0x0800e300 (size 456) =====



uint64_t sym.DATARMNET362c14e98b(int64_t arg1,uchar noname_1 [16],uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffffffffffff;
    puVar9 = 0x8005d98;
    uVar5 = 7;
    uVar10 = 0xffffffff;
    uVar11 = 0xffffffff;
    uVar2 = sp_el0;
    uVar8 = 0xffffffff;
    do {
        uVar4 = uVar5;
        uVar7 = uVar8;
        if ((((arg1 & 0xffff) >> (uVar4 & 0x1f) & 1) != 0) &&
           ((*(__cpu_online_mask + (uVar5 >> 6 & 0x3ffffff) * 8) >> (uVar5 & 0x3f) & 1) != 0)) {
            uVar1 = *(puVar9 + 0x44);
            if (uVar1 == 0) goto code_r0x0800e4ac;
            uVar3 = *puVar9;
            uVar7 = uVar4;
            if (uVar3 != 0 || uVar11 <= uVar1) {
                uVar7 = uVar8;
                uVar1 = uVar11;
            }
            uVar11 = uVar1;
            if (uVar3 <= uVar6) {
                uVar6 = uVar3;
                uVar10 = uVar4;
            }
        }
        uVar5 = uVar5 - 1;
        puVar9 = puVar9 + -0x13;
        uVar8 = uVar7;
    } while (uVar5 != 0xffffffffffffffff);
    if (uVar7 < 0) {
        uVar7 = uVar10;
    }
    uVar5 = uVar7;
code_r0x0800e4ac:
    return uVar5 & 0xffffffff;
}




// ===== sym.DATARMNET3c1fc10379 @ 0x0800e4d8 (size 732) =====



void sym.DATARMNET3c1fc10379(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        *0x800b000 = *0x800b000 + 1;
        return;
    }
    uVar4 = arg1;
    if ((uVar4 & 0xffff) < 9) {
        uVar6 = arg1 & 0xffff;
        if (0x578 < uVar6 * 0x98) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(1,0x800e7b4);
            (*pcVar3)();
        }
        if ((uVar4 & 0xffff) != 8) {
            uVar5 = *(uVar6 * 0x98 + 0x8005970);
            if ((((0xffffff07U >> (uVar4 & 0x1f) & 1) != 0) || (uVar5 <= *(obj.DATARMNET4793ed48af + uVar6 * 8))) &&
               (*(uVar6 * 0x28 + 0x800580d) == '\0')) {
                uVar7 = 0;
                piVar8 = 0x8005970;
                uVar2 = sp_el0;
                do {
                    if (((uVar6 != uVar7) &&
                        (uVar4 = uVar7, (1 << (uVar4 & 0x1f) & *(arg2 + 0x6c) & (*0x80057cf ^ 0xffffffff) & 0xff) != 0)
                        ) && ((*(__cpu_online_mask + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) != 0)) {
                        uVar1 = *piVar8 + uVar5;
                        if ((*(obj.DATARMNET713717107f + uVar7 * 8) <= uVar1 ||
                            uVar1 <= *(obj.DATARMNET4793ed48af + uVar7 * 8)) || *piVar8 != 0) {
                            uVar4 = arg1;
                        }
                        arg1 = uVar4;
                    }
                    uVar7 = uVar7 + 1;
                    piVar8 = piVar8 + 0x13;
                } while (uVar7 != 8);
                if (7 < (arg1 & 0xffff)) goto code_r0x0800e7ac;
            }
            return;
        }
    }
code_r0x0800e7ac:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x800e7b0);
    (*pcVar3)();
}




// ===== fcn.0800e688 @ 0x0800e688 (size 208) =====



void fcn.0800e688(uint64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *in_x14;
    int64_t in_x17;
    uint64_t uVar8;
    int64_t *unaff_x20;
    int64_t iVar9;
    int64_t unaff_x29;
    ulong uStack0000000000000000;
    uint64_t uStack0000000000000008;
    int64_t in_stack_00000010;
    int64_t *piStack0000000000000018;
    int64_t in_stack_00000020;
    int64_t iStack0000000000000028;
    uint64_t in_stack_00000030;
    uint64_t uVar3;
    
    uStack0000000000000000 = 0;
    uStack0000000000000008 = param_1;
    piStack0000000000000018 = in_x14;
    iStack0000000000000028 = in_x17;
    __traceiter_rmnet_shs_wq_low();
    uVar4 = *(unaff_x29 + -0x28);
    uVar8 = *(unaff_x29 + -8);
    uVar3 = *(unaff_x29 + -0x20);
    iVar5 = *(unaff_x29 + -0x18);
    uVar7 = *(unaff_x29 + 0x18);
    iVar9 = *unaff_x20;
    *(iStack0000000000000028 + 0x10) = iVar9 + -1;
    if ((iVar9 + -1 == 0) || (uVar6 = uStack0000000000000008, *unaff_x20 == 0)) {
        preempt_schedule_notrace();
        uVar3 = *(unaff_x29 + -0x20);
        iVar5 = *(unaff_x29 + -0x18);
        uVar4 = *(unaff_x29 + -0x28);
        uVar8 = *(unaff_x29 + -8);
        uVar7 = *(unaff_x29 + 0x18);
        uVar6 = uStack0000000000000008;
    }
    do {
        uVar2 = uVar7;
        if ((in_stack_00000030 <= uVar8 || uVar8 <= uVar4) || iVar5 != 0) {
            uVar2 = uVar3;
        }
        uVar3 = uVar2;
        do {
            uVar7 = uVar7 + 1;
            piStack0000000000000018 = piStack0000000000000018 + 0x13;
            if (uVar7 == 8) {
                if ((uVar2 & 0xffff) < 8) {
                    return;
                }
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x800e7b0);
                (*pcVar1)();
            }
        } while (((uVar6 == uVar7) ||
                 ((1 << (uVar7 & 0x1f) & *(in_stack_00000020 + 0x6c) & (*0x80057cf ^ 0xffffffff) & 0xff) == 0)) ||
                ((*(__cpu_online_mask + (uVar7 >> 6 & 0x3ffffff) * 8) >> (uVar7 & 0x3f) & 1) == 0));
        iVar5 = *piStack0000000000000018;
        in_stack_00000030 = *(obj.DATARMNET713717107f + uVar7 * 8);
        uVar8 = iVar5 + in_stack_00000010;
        uVar4 = *(obj.DATARMNET4793ed48af + uVar7 * 8);
    } while( true );
}




// ===== sym.DATARMNET466244e5d6 @ 0x0800e84c (size 144) =====



void sym.DATARMNET466244e5d6(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.DATARMNET30a3e83974 != obj.DATARMNET30a3e83974) {
        pcVar2 = _obj.DATARMNET30a3e83974;
        do {
            if (pcVar2[0x5e] != 0x0) {
                uVar1 = sym.DATARMNET3c1fc10379(arg1 & 0xffffffff,pcVar2 + -0x10);
                if ((uVar1 & 0xffff) != (arg1 & 0xffff)) {
                    sym.DATARMNETdfb8ee742f(arg1 & 0xffffffff,uVar1,pcVar2 + -0x10);
                }
            }
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.DATARMNET30a3e83974);
    }
    return;
}




// ===== sym.DATARMNET769bbe36c6 @ 0x0800e8dc (size 168) =====



uint32_t sym.DATARMNET769bbe36c6(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (arg3 == 0) {
        *0x800b000 = *0x800b000 + 1;
        return 0;
    }
    uVar1 = arg2 & 0xffff;
    uVar2 = arg1 & 0xffff;
    if ((uVar1 | uVar2) < 8) {
        if (uVar2 == uVar1) {
            return 0;
        }
        return *(__cpu_online_mask + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) &
               (1 << (arg2 & 0x1f) & *(arg3 + 0x6c) & (*0x80057cf ^ 0xffffffff)) != 0;
    }
    *0x800b000 = *0x800b000 + 1;
    return 0;
}




// ===== sym.DATARMNET5f72606f6f @ 0x0800e984 (size 428) =====



ulong sym.DATARMNET5f72606f6f(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2;
    if (((uVar4 | arg1) & 0xffff) < 8) {
        iVar1 = sp_el0;
        *(iVar1 + 0x10) = *(iVar1 + 0x10) + 0x200;
        uVar3 = _raw_spin_lock_irqsave(0x8005f08);
        if (_obj.DATARMNET30a3e83974 != obj.DATARMNET30a3e83974) {
            pcVar5 = _obj.DATARMNET30a3e83974;
            do {
                if (pcVar5[0x5e] != 0x0) {
                    if (pcVar5 + -0x10 == NULL) {
                        *0x800b000 = *0x800b000 + 1;
                    }
                    else if (((((arg1 & 0xffff) != (uVar4 & 0xffff)) &&
                              ((*(__cpu_online_mask + ((arg2 & 0xffffffffU) >> 6 & 0x3ff) * 8) & 1L << (arg2 & 0x3fU))
                               != 0)) && ((1 << (uVar4 & 0x1f) & *(pcVar5 + 0x5c) & (*0x80057cf ^ 0xffffffff)) != 0)) &&
                            (iVar2 = sym.DATARMNET6f56fe7597
                                               (arg1 & 0xffffffff,arg2 & 0xffffffffU,pcVar5 + -0x10,arg3 & 0xffffffff
                                               ), iVar2 != 0)) {
                        _raw_spin_unlock_irqrestore(0x8005f08,uVar3);
                        sym.local_bh_enable_1();
                        return 1;
                    }
                }
                pcVar5 = *pcVar5;
            } while (pcVar5 != obj.DATARMNET30a3e83974);
        }
        _raw_spin_unlock_irqrestore(0x8005f08,uVar3);
        sym.local_bh_enable_1();
    }
    else {
        *0x800b000 = *0x800b000 + 1;
    }
    return 0;
}




// ===== sym.DATARMNET6f56fe7597 @ 0x0800eb34 (size 636) =====



uint sym.DATARMNET6f56fe7597(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    bool bVar3;
    ulong uVar4;
    uint32_t in_w4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 == 0) {
        uVar9 = 0;
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar1 = arg1 & 0xffff;
        if ((arg2 & 0xffff | uVar1) < 8) {
            iVar6 = sp_el0;
            iVar2 = arg4;
            *(iVar6 + 0x10) = *(iVar6 + 0x10) + 0x200;
            uVar4 = _raw_spin_lock_irqsave(0x8004164);
            uVar9 = 0;
            uVar5 = 0;
            do {
                iVar7 = *(uVar5 * 8 + 0x8004168);
                iVar6 = iVar7 + -0x80;
                if (iVar7 == 0 || iVar6 == 0) {
                    iVar6 = 0;
                }
                else {
                    do {
                        iVar8 = *(iVar6 + 0x58);
                        iVar7 = *(iVar6 + 0x80);
                        if (((iVar8 != 0) &&
                            (((iVar2 == 0 || (*(iVar8 + 0x124) == iVar2)) && (*(iVar8 + 300) == uVar1)))) &&
                           (*(iVar6 + 0x50) == *(arg3 + 0x20))) {
                            *(*(iVar6 + 0x58) + 300) = arg2;
                            if (in_w4 < 8) {
                                *(iVar8 + in_w4 * 8) = *(iVar8 + in_w4 * 8) + 1;
                            }
                            if (iVar2 != 0) {
                                uVar9 = 1;
                                break;
                            }
                            uVar9 = 1;
                        }
                        iVar6 = 0;
                        if (iVar7 != 0) {
                            iVar6 = iVar7 + -0x80;
                        }
                    } while (iVar6 != 0);
                }
            } while ((iVar6 == 0) && (bVar3 = uVar5 < 0x1ff, uVar5 = uVar5 + 1, bVar3));
            _raw_spin_unlock_irqrestore(0x8004164,uVar4);
            sym.local_bh_enable_1();
        }
        else {
            uVar9 = 0;
            *0x800b000 = *0x800b000 + 1;
        }
    }
    return uVar9;
}




// ===== sym.DATARMNETf85599b9d8 @ 0x0800edc4 (size 216) =====



ulong sym.DATARMNETf85599b9d8(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(0x8004164);
    iVar4 = 0;
    do {
        iVar5 = *(iVar4 * 8 + 0x8004168);
        iVar3 = iVar5 + -0x80;
        if (iVar5 != 0 && iVar3 != 0) {
            do {
                if ((*(iVar3 + 0x58) != 0) && (*(*(iVar3 + 0x58) + 0x124) == arg1)) {
                    uVar6 = 1;
                    *(*(iVar3 + 0x58) + 0x137) = arg2;
                    goto code_r0x0800ee68;
                }
                piVar1 = iVar3 + 0x80;
                iVar3 = 0;
                if (*piVar1 != 0) {
                    iVar3 = *piVar1 + -0x80;
                }
            } while (iVar3 != 0);
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 0x200) {
            uVar6 = 0;
code_r0x0800ee68:
            _raw_spin_unlock_irqrestore(0x8004164,uVar2);
            return uVar6;
        }
    } while( true );
}




// ===== fcn.0800eef8 @ 0x0800eef8 (size 60) =====



ulong fcn.0800eef8(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong uVar1;
    int64_t iVar2;
    uchar unaff_w19;
    int64_t unaff_x20;
    int64_t *unaff_x21;
    int64_t unaff_x22;
    ulong uStack0000000000000000;
    int64_t iStack0000000000000008;
    
    uStack0000000000000000 = 0;
    iStack0000000000000008 = arg1;
    uVar1 = __traceiter_rmnet_shs_wq_high(in_x0,6);
    iVar2 = *unaff_x21;
    *(unaff_x22 + 0x10) = iVar2 + -1;
    if ((iVar2 + -1 == 0) || (*unaff_x21 == 0)) {
        preempt_schedule_notrace(uVar1,iStack0000000000000008);
    }
    *(*(unaff_x20 + 0x58) + 0x137) = unaff_w19;
    _raw_spin_unlock_irqrestore(0x8004164,iStack0000000000000008);
    return 1;
}




// ===== sym.DATARMNET5e1aaed12b @ 0x0800ef44 (size 12) =====



void sym.DATARMNET5e1aaed12b(void)

{
    return;
}




// ===== sym.DATARMNET468586cca6 @ 0x0800ef50 (size 12) =====



void sym.DATARMNET468586cca6(void)

{
    return;
}




// ===== sym.DATARMNET7792d4f4ad @ 0x0800ef5c (size 400) =====



void sym.DATARMNET7792d4f4ad(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) || ((arg4 == 0 || (in_x4 == 0)))) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        list_sort(0,arg1,sym.DATARMNET85af86a36d.cfi_jt);
        list_sort(0,arg2,sym.DATARMNETd5c15f1ff3.cfi_jt);
        list_sort(0,arg4,sym.DATARMNET3c489db64a.cfi_jt);
        list_sort(0);
        sym.DATARMNET5157210c44(arg1);
        sym.DATARMNET0e273eab79(arg2);
        sym.DATARMNETe15af8eb6d(arg3);
        sym.DATARMNET78f3a0ca4f(arg4);
        arg1_00 = sym.DATARMNETa3d6c4072d(in_x4);
        sym.DATARMNET78666f33a1(arg1_00);
        sym.DATARMNET5945236cd3(0x33c);
    }
    return;
}




// ===== sym.DATARMNET95736008d9 @ 0x0800f0fc (size 588) =====



void sym.DATARMNET95736008d9(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    bool bVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    uint64_t uVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = 0;
    uVar4 = sp_el0;
    do {
        if (0 < *(uVar8 * 0x98 + 0x80059b4)) {
            iVar2 = uVar8 * 0x98;
            bVar5 = (0xffffff07U >> (uVar8 & 0x1f) & 1) != 0;
            uVar6 = *0x8017000;
            if (bVar5) {
                uVar6 = 100 - *0x8017000;
            }
            uVar1 = 100 - *0x8017000;
            if (bVar5) {
                uVar1 = *0x8017000;
            }
            uVar7 = (uVar6 & 0xffff) + (uVar1 & 0xffff);
            uVar9 = *(obj.DATARMNET4793ed48af + uVar8 * 8);
            uVar3 = 0;
            if (uVar7 != 0) {
                uVar3 = ((*(iVar2 + 0x8005990) + *(iVar2 + 0x8005980) >> 1) * (uVar6 & 0xffff) +
                        *(iVar2 + 0x8005970) * (uVar1 & 0xffff)) / uVar7;
            }
            uVar7 = *(obj.DATARMNET713717107f + uVar8 * 8);
            *(iVar2 + 0x8005990) = uVar3;
            pcVar10 = _obj.DATARMNET30a3e83974;
            if ((((uVar7 < uVar3) || ((*0x80057cf >> (uVar8 & 0x1f) & 1) != 0)) ||
                ((*(__cpu_online_mask + (uVar8 >> 6 & 0x3ffffff) * 8) >> (uVar8 & 0x3f) & 1) == 0)) ||
               ((uVar3 < uVar9 && (pcVar10 = *0x8002000, *(iVar2 + 0x8005970) < uVar9)))) {
                for (; pcVar10 != obj.DATARMNET30a3e83974; pcVar10 = *pcVar10) {
                    if (pcVar10[0x5e] != 0x0) {
                        uVar6 = sym.DATARMNET3c1fc10379(uVar8 & 0xffffffff,pcVar10 + -0x10);
                        if (uVar8 != uVar6) {
                            sym.DATARMNETdfb8ee742f(uVar8 & 0xffffffff,uVar6,pcVar10 + -0x10);
                        }
                    }
                }
            }
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 != 8);
    return;
}




// ===== sym.DATARMNETe00453a3e4 @ 0x0800f358 (size 896) =====



void sym.DATARMNETe00453a3e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t arg2_00;
    int64_t in_x3;
    uint64_t arg3_00;
    uint uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uchar noname_1_01 [16];
    uchar noname_1_02 [16];
    uchar noname_1_03 [16];
    uchar noname_1_04 [16];
    uchar noname_1_05 [16];
    uchar noname_1_06 [16];
    uchar extraout_q0 [16];
    uchar auVar9 [16];
    uchar noname_1_07 [16];
    uchar noname_1_08 [16];
    uchar noname_1_09 [16];
    uchar noname_1_10 [16];
    uchar noname_1_11 [16];
    uchar noname_1_12 [16];
    uchar noname_1_13 [16];
    uchar noname_1_14 [16];
    
    arg2_00 = arg3;
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar1 = *(arg1 + 0x68);
        uVar2 = *(arg1 + 0x6a);
        *(arg1 + 0x28) = 0xffffffffffffffff;
        *(arg1 + 0x30) = 0xffffffffffffffff;
        *(arg1 + 0x38) = 0xffffffffffffffff;
        *(arg1 + 0x40) = 0xffffffffffffffff;
        *(arg1 + 0x48) = 0xffffffffffffffff;
        *(arg1 + 0x50) = 0xffffffffffffffff;
        *(arg1 + 0x58) = 0xffffffffffffffff;
        *(arg1 + 0x60) = 0xffffffffffffffff;
        uVar4 = sym.DATARMNET362c14e98b(uVar1 & (*0x80057cf ^ 0xffffffff),in_q0,arg2_00,in_x3);
        auVar9 = noname_1;
        if (uVar4 < 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = 1;
            *(arg1 + 0x28) = uVar4;
            uVar4 = uVar1 & (1 << (uVar4 & 0x1f) ^ 0xffffffffU);
            if (uVar4 != 0) {
                uVar5 = sym.DATARMNET362c14e98b(uVar4 & (*0x80057cf ^ 0xffffffff),noname_1,arg2_00,in_x3);
                uVar8 = 1;
                auVar9 = noname_1_00;
                if (-1 < uVar5) {
                    *(arg1 + 0x2c) = uVar5;
                    uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                    if ((uVar4 == 0) ||
                       (uVar5 = sym.DATARMNET362c14e98b(uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_00,arg2_00,in_x3)
                       , auVar9 = noname_1_01, uVar5 < 0)) {
                        uVar8 = 2;
                    }
                    else {
                        *(arg1 + 0x30) = uVar5;
                        uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                        if ((uVar4 == 0) ||
                           (uVar5 = sym.DATARMNET362c14e98b
                                              (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_01,arg2_00,in_x3),
                           auVar9 = noname_1_02, uVar5 < 0)) {
                            uVar8 = 3;
                        }
                        else {
                            *(arg1 + 0x34) = uVar5;
                            uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                            if ((uVar4 == 0) ||
                               (uVar5 = sym.DATARMNET362c14e98b
                                                  (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_02,arg2_00,in_x3),
                               auVar9 = noname_1_03, uVar5 < 0)) {
                                uVar8 = 4;
                            }
                            else {
                                *(arg1 + 0x38) = uVar5;
                                uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                if ((uVar4 == 0) ||
                                   (uVar5 = sym.DATARMNET362c14e98b
                                                      (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_03,arg2_00,in_x3),
                                   auVar9 = noname_1_04, uVar5 < 0)) {
                                    uVar8 = 5;
                                }
                                else {
                                    *(arg1 + 0x3c) = uVar5;
                                    uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                    if ((uVar4 == 0) ||
                                       (uVar5 = sym.DATARMNET362c14e98b
                                                          (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_04,arg2_00,
                                                           in_x3), auVar9 = noname_1_05, uVar5 < 0)) {
                                        uVar8 = 6;
                                    }
                                    else {
                                        *(arg1 + 0x40) = uVar5;
                                        uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                        if ((uVar4 == 0) ||
                                           (uVar5 = sym.DATARMNET362c14e98b
                                                              (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_05,arg2_00,
                                                               in_x3), auVar9 = noname_1_06, uVar5 < 0)) {
                                            uVar8 = 7;
                                        }
                                        else {
                                            *(arg1 + 0x44) = uVar5;
                                            uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                            if ((uVar4 != 0) &&
                                               (iVar6 = sym.DATARMNET362c14e98b
                                                                  (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_06,
                                                                   arg2_00,in_x3), auVar9 = extraout_q0, -1 < iVar6))
                                            goto code_r0x0800f6d4;
                                            uVar8 = 8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        arg3_00 = *(arg1 + 0x28);
        uVar4 = sym.DATARMNET362c14e98b(uVar2 & (*0x80057cf ^ 0xffffffff),auVar9,arg2_00,arg3_00);
        if (uVar4 < 0) {
            uVar7 = 0;
        }
        else {
            uVar7 = 1;
            *(arg1 + 0x48) = uVar4;
            uVar4 = uVar2 & (1 << (uVar4 & 0x1f) ^ 0xffffffffU);
            if (uVar4 != 0) {
                uVar5 = sym.DATARMNET362c14e98b(uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_07,arg2_00,arg3_00);
                uVar7 = 1;
                if (-1 < uVar5) {
                    *(arg1 + 0x4c) = uVar5;
                    uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                    if ((uVar4 == 0) ||
                       (uVar5 = sym.DATARMNET362c14e98b
                                          (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_08,arg2_00,arg3_00), uVar5 < 0
                       )) {
                        uVar7 = 2;
                    }
                    else {
                        *(arg1 + 0x50) = uVar5;
                        uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                        if ((uVar4 == 0) ||
                           (uVar5 = sym.DATARMNET362c14e98b
                                              (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_09,arg2_00,arg3_00),
                           uVar5 < 0)) {
                            uVar7 = 3;
                        }
                        else {
                            *(arg1 + 0x54) = uVar5;
                            uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                            if ((uVar4 == 0) ||
                               (uVar5 = sym.DATARMNET362c14e98b
                                                  (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_10,arg2_00,arg3_00),
                               uVar5 < 0)) {
                                uVar7 = 4;
                            }
                            else {
                                *(arg1 + 0x58) = uVar5;
                                uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                if ((uVar4 == 0) ||
                                   (uVar5 = sym.DATARMNET362c14e98b
                                                      (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_11,arg2_00,arg3_00)
                                   , uVar5 < 0)) {
                                    uVar7 = 5;
                                }
                                else {
                                    *(arg1 + 0x5c) = uVar5;
                                    uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                    if ((uVar4 == 0) ||
                                       (uVar5 = sym.DATARMNET362c14e98b
                                                          (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_12,arg2_00,
                                                           arg3_00), uVar5 < 0)) {
                                        uVar7 = 6;
                                    }
                                    else {
                                        *(arg1 + 0x60) = uVar5;
                                        uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                        if ((uVar4 == 0) ||
                                           (uVar5 = sym.DATARMNET362c14e98b
                                                              (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_13,arg2_00,
                                                               arg3_00), uVar5 < 0)) {
                                            uVar7 = 7;
                                        }
                                        else {
                                            *(arg1 + 100) = uVar5;
                                            uVar4 = uVar4 & (1 << (uVar5 & 0x1f) ^ 0xffffffffU);
                                            if ((uVar4 != 0) &&
                                               (iVar6 = sym.DATARMNET362c14e98b
                                                                  (uVar4 & (*0x80057cf ^ 0xffffffff),noname_1_14,
                                                                   arg2_00,arg3_00), -1 < iVar6)) {
code_r0x0800f6d4:
    //WARNING: Does not return
                                                pcVar3 = SoftwareBreakpoint(0x5512,0x800f6d8);
                                                (*pcVar3)();
                                            }
                                            uVar7 = 8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        *(arg1 + 0x78) = uVar8;
        *(arg1 + 0x7c) = uVar7;
        *(arg1 + 0x70) = 0;
    }
    return;
}




// ===== sym.DATARMNET0a6fb12cb2 @ 0x0800f7f0 (size 88) =====



void sym.DATARMNET0a6fb12cb2(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t extraout_x1;
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (pcVar1 = _obj.DATARMNET30a3e83974; pcVar1 != obj.DATARMNET30a3e83974; pcVar1 = *pcVar1) {
        if (pcVar1[0x5e] != 0x0) {
            sym.DATARMNETe00453a3e4(pcVar1 + -0x10,arg1,arg2);
            arg1 = extraout_x1;
        }
    }
    return;
}




// ===== sym.DATARMNET39391a8bc5 @ 0x0800f848 (size 784) =====



void sym.DATARMNET39391a8bc5(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    int64_t iVar9;
    code *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    iVar9 = sp_el0;
    *(iVar9 + 0x10) = *(iVar9 + 0x10) + 0x200;
    uVar3 = _raw_spin_lock_irqsave(0x8004164);
    pcVar5 = _obj.DATARMNET9825511866;
    if (_obj.DATARMNET9825511866 != obj.DATARMNET9825511866) {
        do {
            iVar9 = *(pcVar5 + 0x10);
            pcVar8 = *pcVar5;
            if (iVar9 != 0) {
                iVar7 = *(pcVar5 + 0x28);
                if (((*0x8017000 < iVar7 / 1000000000) || ((2999999999 < iVar7 && (0x8c < *0x80057c0)))) ||
                   ((8999999999 < iVar7 && (0x46 < *0x80057c0)))) {
                    if ((((*(iVar9 + 0xcc) == '\0') || (_rmnet_shs_switch == 0)) || ((arg1 & 0xffU) != 0)) ||
                       (*(iVar9 + 0xcc) == '\0')) goto code_r0x0800f988;
                }
                else if ((arg1 & 0xffU) != 0) {
code_r0x0800f988:
                    arg1_00 = pcVar5 + -0x50;
                    sym.DATARMNET23c7ddd780(iVar9,1);
                    sym.DATARMNET3669e7b703(*(pcVar5 + 0xde));
                    if (*(iVar9 + 0xd3) == '\0') {
                        sym.DATARMNETde8ee16f92(iVar9);
                        piVar6 = *(iVar9 + 0x88);
                        if (piVar6 != NULL) {
                            iVar7 = *(iVar9 + 0x80);
                            *piVar6 = iVar7;
                            if (iVar7 != 0) {
                                *(iVar7 + 8) = piVar6;
                            }
                            *(iVar9 + 0x88) = 0;
                        }
                        kfree(iVar9);
                    }
                    else {
                        uVar4 = _raw_spin_lock_irqsave(0x8004160);
                        sym.DATARMNETde8ee16f92(iVar9);
                        piVar6 = *(iVar9 + 0x88);
                        if (piVar6 != NULL) {
                            iVar7 = *(iVar9 + 0x80);
                            *piVar6 = iVar7;
                            if (iVar7 != 0) {
                                *(iVar7 + 8) = piVar6;
                            }
                            *(iVar9 + 0x88) = 0;
                        }
                        kfree(iVar9);
                        _raw_spin_unlock_irqrestore(0x8004160,uVar4);
                    }
                    sym.DATARMNETb4a6870b3b(arg1_00);
                    if (((arg1 & 0xffU) == 0) && (pcVar5[0xe5] != 0x0)) {
                        sym.DATARMNETa6e92c3315(arg1_00);
                    }
                    else {
                        sym.DATARMNET2fe780019f(arg1_00);
                        kfree(arg1_00);
                    }
                    Hint_Prefetch(0x80057c0,2,0,1);
                    do {
                        cVar1 = '\x01';
                        bVar2 = ExclusiveMonitorPass(0x80057c0,0x10);
                        if (bVar2) {
                            cVar1 = ExclusiveMonitorsStatus();
                            *0x80057c0 = *0x80057c0 + -1;
                        }
                    } while (cVar1 != '\0');
                }
            }
            pcVar5 = pcVar8;
        } while (pcVar8 != obj.DATARMNET9825511866);
    }
    _raw_spin_unlock_irqrestore(0x8004164,uVar3);
    sym.local_bh_enable_1();
    __rcu_read_unlock();
    return;
}




// ===== sym.DATARMNETe69c918dc8 @ 0x0800fb70 (size 204) =====



void sym.DATARMNETe69c918dc8(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (*(arg1 + 0x20) != 0)) {
        __rcu_read_lock();
        if (*(arg1 + 0x20) != 0) {
            puVar2 = *(*(*(arg1 + 0x20) + 0x310) + 0x40);
            *(arg1 + 0x6c) = 0;
            if ((puVar2 != NULL) && (*puVar2 != 0)) {
                uVar3 = 0;
                uVar4 = 0;
                do {
                    uVar1 = uVar4;
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 | 1 << (*(puVar2 + uVar1 * 2 + 0x18) & 0x1f);
                    *(arg1 + 0x6c) = uVar3;
                } while (uVar4 < *puVar2);
            }
            __rcu_read_unlock();
            *(arg1 + 0x68) = *(arg1 + 0x6c) & 0xf;
            *(arg1 + 0x6a) = *(arg1 + 0x6c) & 0xf0;
            return;
        }
        _printk(0x8002523,0);
    }
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNETd6ee05f1b4 @ 0x0800fc40 (size 160) =====



void sym.DATARMNETd6ee05f1b4(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar1 = _raw_spin_lock_irqsave(0x8005f08);
        pcVar2 = obj.DATARMNET30a3e83974;
        do {
            pcVar2 = *pcVar2;
            if (pcVar2 == obj.DATARMNET30a3e83974) goto code_r0x0800fca8;
        } while (*(pcVar2 + 0x10) != arg1);
        pcVar2[0x5e] = 0x0;
        sym.DATARMNETf7d317ed55(pcVar2 + -0x10);
        kfree(pcVar2 + -0x10);
code_r0x0800fca8:
        _raw_spin_unlock_irqrestore(0x8005f08,uVar1);
    }
    return;
}




// ===== sym.DATARMNET7492293980 @ 0x0800fce0 (size 192) =====



void sym.DATARMNET7492293980(int64_t arg1)

{
    ulong uVar1;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar1 = _raw_spin_lock_irqsave(0x8005f08);
        arg1_00 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x80);
        if (arg1_00 == 0) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            *(arg1_00 + 0x20) = arg1;
            *(arg1_00 + 0x6e) = 1;
            *(arg1_00 + 0x10) = arg1_00 + 0x10;
            *(arg1_00 + 0x18) = arg1_00 + 0x10;
            sym.DATARMNETe69c918dc8(arg1_00);
            sym.DATARMNET4095253347(arg1_00);
        }
        _raw_spin_unlock_irqrestore(0x8005f08,uVar1);
    }
    return;
}




// ===== sym.DATARMNET039ac6d55d @ 0x0800fda0 (size 104) =====



void sym.DATARMNET039ac6d55d(void)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (pcVar1 = _obj.DATARMNET30a3e83974; pcVar1 != obj.DATARMNET30a3e83974; pcVar1 = *pcVar1) {
        if (pcVar1[0x5e] != 0x0) {
            sym.DATARMNETe69c918dc8(pcVar1 + -0x10);
            *(pcVar1 + -0x10) = 0;
            *(pcVar1 + -8) = 0;
        }
    }
    return;
}




// ===== sym.DATARMNETedc898218c @ 0x0800fe08 (size 252) =====



void sym.DATARMNETedc898218c(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x800a828 = 0;
    *0x800a830 = 0;
    _obj.DATARMNET2d482e7d9f = 0;
    *0x800a820 = 0;
    *0x8005808 = 0;
    *0x8005830 = 0;
    *0x8005858 = 0;
    *0x8005880 = 0;
    *0x80058a8 = 0;
    *0x80058d0 = 0;
    *0x80058f8 = 0;
    *0x8005920 = 0;
    __rcu_read_lock();
    pcVar1 = _obj.DATARMNET9825511866;
    if (_obj.DATARMNET9825511866 != obj.DATARMNET9825511866) {
        do {
            if (pcVar1[0xe4] != 0x0) {
                if (((100 < *(pcVar1 + 0x60)) && (200 < *(pcVar1 + 0x30))) && (*(pcVar1 + 0xde) < 8)) {
                    iVar2 = *(pcVar1 + 0xde) * 4;
                    *(obj.DATARMNET2d482e7d9f + iVar2) = *(obj.DATARMNET2d482e7d9f + iVar2) + 1;
                }
                if ((*(pcVar1 + 0xde) < 8) && (pcVar1[0xe7] != 0x0)) {
                    iVar2 = *(pcVar1 + 0xde) * 0x28;
                    *(iVar2 + 0x8005808) = *(iVar2 + 0x8005808) + 1;
                }
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.DATARMNET9825511866);
    }
    __rcu_read_unlock();
    return;
}




// ===== sym.DATARMNETcd6e26f0ad @ 0x0800ff0c (size 736) =====



void sym.DATARMNETcd6e26f0ad(ulong param_1,ulong param_2,code *param_3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *arg1;
    code *pcVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    
    *in_x18 = unaff_x30;
    ktime_get_with_offset(1);
    auVar5 = ns_to_timespec64();
    iVar3 = auVar5._0_8_;
    *0x8005000 = auVar5._8_8_ + iVar3 * 1000000000;
    for (pcVar4 = _obj.DATARMNET30a3e83974; pcVar4 != obj.DATARMNET30a3e83974; pcVar4 = *pcVar4) {
        if (pcVar4[0x5e] != 0x0) {
            iVar3 = sym.DATARMNETe69c918dc8(pcVar4 + -0x10);
            *(pcVar4 + -0x10) = 0;
            *(pcVar4 + -8) = 0;
        }
    }
    sym.DATARMNETe46c480d71(iVar3);
    __rcu_read_lock();
    pcVar4 = _obj.DATARMNET9825511866;
    if (_obj.DATARMNET9825511866 != obj.DATARMNET9825511866) {
        do {
            if ((pcVar4[0xe4] != 0x0) && (*(pcVar4 + 0x10) != 0)) {
                arg1 = pcVar4 + -0x50;
                sym.DATARMNET9a7769cf21(arg1);
                sym.DATARMNET5b2ed86112(arg1);
                if (*0x800a000 == 0) {
                    *(*(*(pcVar4 + 0x10) + 0x58) + 0x137) = 0;
                }
                else {
                    if (*(*(pcVar4 + 0x10) + 0xd3) == '\0') {
                        sym.DATARMNET6f4b0915d3(arg1,0x8002128);
                    }
                    else {
                        sym.DATARMNET312b06829d(arg1,0x8002118);
                    }
                    if ((0xffffff07U >> (*(pcVar4 + 0xde) & 0x1f) & 1) == 0) {
                        sym.DATARMNET24e4475345(arg1,0x8002138);
                    }
                    if (*(pcVar4 + 0xe0) == 6) {
                        sym.DATARMNET28a80d526e(arg1,0x8002148);
                    }
                }
            }
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.DATARMNET9825511866);
    }
    iVar3 = __rcu_read_unlock();
    sym.DATARMNET617b443145(iVar3);
    sym.DATARMNET0ce3f33785();
    *0x8005df0 = *0x8005e00;
    *0x8005df8 = *0x8005e08;
    if (*0x8005000 == 0) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar1 = *0x8005000 - *0x8005de8;
        if (*0x8017000 == 0 || *0x8005000 - *0x8005de8 <= *0x8017000 * 1000000) {
            uVar1 = 100000000;
        }
        *0x8005e10 = 0;
        if (uVar1 != 0) {
            *0x8005e10 = ((*(*0x8005000 + 0xa38) - *0x8005e08) * 1000000000) / uVar1;
        }
        uVar2 = 0;
        if (uVar1 != 0) {
            uVar2 = ((*(*0x8005000 + 0xa30) - *0x8005e00) * 1000000000) / uVar1;
        }
        *0x8005e18 = uVar2 << 3;
        *0x8005e00 = *(*0x8005000 + 0xa30);
        *0x8005e08 = *(*0x8005000 + 0xa38);
    }
    if (*0x800a000 == 0) {
        auVar5 = sym.DATARMNET95736008d9();
        pcVar4 = _obj.DATARMNET30a3e83974;
    }
    else {
        param_3 = obj.DATARMNETf91b305f4e;
        sym.DATARMNET7792d4f4ad(0x8002158,0x8002138,0x8002148,0x8002128);
        sym.DATARMNETa1b141715b(0x8002138);
        sym.DATARMNET3af54cd726(0x8002148);
        sym.DATARMNETb177316a15(0x8002158);
        sym.DATARMNETcc489fbbad(0x8002128);
        auVar5 = sym.DATARMNETf7730d41c1(0x8002118);
        pcVar4 = _obj.DATARMNET30a3e83974;
    }
    while( true ) {
        if (pcVar4 == obj.DATARMNET30a3e83974) break;
        if (pcVar4[0x5e] != 0x0) {
            auVar5 = sym.DATARMNETe00453a3e4(pcVar4 + -0x10,auVar5._8_8_,param_3);
        }
        pcVar4 = *pcVar4;
    }
    sym.DATARMNETedc898218c(auVar5._0_8_);
    return;
}




// ===== sym.DATARMNET617b443145 @ 0x080101f4 (size 120) =====



void sym.DATARMNET617b443145(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET73d2153565(0);
    sym.DATARMNET73d2153565(1);
    sym.DATARMNET73d2153565(2);
    sym.DATARMNET73d2153565(3);
    sym.DATARMNET73d2153565(4);
    sym.DATARMNET73d2153565(5);
    sym.DATARMNET73d2153565(6);
    sym.DATARMNET73d2153565(7);
    return;
}




// ===== sym.DATARMNET0ce3f33785 @ 0x080103a4 (size 192) =====



void sym.DATARMNET0ce3f33785(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *0x8005000 - *0x8005de8;
    if (*0x8017000 == 0 || *0x8005000 - *0x8005de8 <= *0x8017000 * 1000000) {
        uVar1 = 100000000;
    }
    *0x8005de8 = *0x8005000;
    uVar2 = 0;
    if (uVar1 != 0) {
        uVar2 = ((*0x8005e50 - *0x8005e28) * 1000000000) / uVar1;
    }
    iVar4 = *0x8005e48 - *0x8005e20;
    *0x8005e20 = *0x8005e48;
    *0x8005e28 = *0x8005e50;
    uVar3 = 0;
    if (uVar1 != 0) {
        uVar3 = (iVar4 * 1000000000) / uVar1;
    }
    *0x8005e38 = *0x8005e60;
    *0x8005e40 = *0x8005e68;
    *0x8005e60 = uVar3;
    *0x8005e68 = uVar2 << 3;
    return;
}




// ===== sym.DATARMNETb4b5fc9686 @ 0x080104f0 (size 140) =====



void sym.DATARMNETb4b5fc9686(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(0x8005f08);
    sym.DATARMNETcd6e26f0ad();
    _raw_spin_unlock_irqrestore(0x8005f08,uVar1);
    sym.DATARMNET39391a8bc5(0);
    uVar1 = __msecs_to_jiffies(*0x8017000);
    queue_delayed_work_on(0x20,*0x8005000,*0x8005000,uVar1);
    return;
}




// ===== sym.DATARMNET5fb4151598 @ 0x080106b4 (size 272) =====



void sym.DATARMNET5fb4151598(void)

{
    ulong uVar1;
    ulong *in_x18;
    code *arg1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.DATARMNET30a3e83974 != obj.DATARMNET30a3e83974) {
        uVar1 = sp_el0;
        pcVar2 = _obj.DATARMNET30a3e83974;
        do {
            arg1 = pcVar2 + -0x10;
            pcVar2 = *pcVar2;
            sym.DATARMNETf7d317ed55(arg1);
            kfree(arg1);
        } while (pcVar2 != obj.DATARMNET30a3e83974);
    }
    return;
}




// ===== sym.DATARMNETf7dcab9a9e @ 0x080107d4 (size 156) =====



void sym.DATARMNETf7dcab9a9e(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8005000 != 0) {
        sym.DATARMNET28d33bd09f();
        sym.DATARMNET5945236cd3(0x2a);
        cancel_delayed_work_sync(*0x8005000);
        drain_workqueue(*0x8005000);
        destroy_workqueue(*0x8005000);
        kfree(*0x8005000);
        *0x8005000 = 0;
        sym.DATARMNET39391a8bc5(1);
        sym.DATARMNET5fb4151598();
    }
    return;
}




// ===== sym.DATARMNETd3d1d13f44 @ 0x080109a8 (size 304) =====



void sym.DATARMNETd3d1d13f44(void)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0;
    iVar2 = 0x8005928;
    uVar1 = sp_el0;
    do {
        *iVar2 = iVar2;
        *(iVar2 + 8) = iVar2;
        *(iVar2 + 0x90) = iVar3;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x98;
    } while (iVar3 != 8);
    return;
}




// ===== sym.DATARMNET4063c95208 @ 0x08010ae8 (size 168) =====



void sym.DATARMNET4063c95208(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8005000 != 0) {
        cancel_delayed_work_sync();
    }
    *0x800a828 = 0;
    *0x800a830 = 0;
    _obj.DATARMNET2d482e7d9f = 0;
    *0x800a820 = 0;
    __rcu_read_lock();
    if ((1 << (*0x80057d6 & 0x1f) & 0xf8U) != 0) {
        *0x80057d2 = 1;
        _delayed_work_timer_fn = sym.DATARMNET756778f14f.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET28a9685974.llvm.12794510937076405148,1);
        *0x800b000 = *0x800b000 + 1;
    }
    __rcu_read_unlock();
    return;
}




// ===== sym.DATARMNET7b6c061b06 @ 0x08010b90 (size 72) =====



void sym.DATARMNET7b6c061b06(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8005000 != 0) {
        queue_delayed_work_on(0x20,*0x8005000,*0x8005000,0);
    }
    return;
}




// ===== sym.DATARMNET3ae0d614d6 @ 0x08010bd8 (size 516) =====



void sym.DATARMNET3ae0d614d6(void)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    int64_t arg1;
    ulong *in_x18;
    char cVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8005000 == NULL) {
        sym.DATARMNETf5f83b943f();
        *0x8005000 = alloc_workqueue("rmnet_shs_wq",2,1);
        if (*0x8005000 == NULL) {
            *0x800b000 = *0x800b000 + 1;
            *0x8005000 = NULL;
        }
        else {
            *0x8005000 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xa20,0x88);
            if (*0x8005000 == NULL) {
                *0x800b000 = *0x800b000 + 1;
                sym.DATARMNETf7dcab9a9e();
            }
            else {
                cVar4 = '\x10';
                do {
                    arg1 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x138);
                    if (arg1 == 0) {
                        *0x800b000 = *0x800b000 + 1;
                    }
                    else {
                        *(arg1 + 0x135) = 1;
                        sym.DATARMNETa6e92c3315(arg1);
                        *(arg1 + 0x50) = arg1 + 0x50;
                        *(arg1 + 0x58) = arg1 + 0x50;
                        *(arg1 + 0x40) = arg1 + 0x40;
                        *(arg1 + 0x48) = arg1 + 0x40;
                        sym.DATARMNET36e5e526fa(arg1);
                    }
                    cVar4 = cVar4 + -1;
                } while (cVar4 != '\0');
                sym.DATARMNETd3d1d13f44();
                puVar3 = *0x8005000;
                puVar1 = *0x8005000 + 1;
                puVar2 = *0x8005000 + 6;
                **0x8005000 = 0xfffffffe0;
                puVar3[1] = puVar1;
                puVar3[2] = puVar1;
                puVar3[3] = sym.DATARMNETb4b5fc9686.cfi_jt;
                init_timer_key(puVar2,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            }
        }
    }
    return;
}




// ===== sym.DATARMNETb709a938b5 @ 0x08010e88 (size 112) =====



uint sym.DATARMNETb709a938b5(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 & 0xffff) < 8) {
        uVar1 = *((arg1 & 0xffffU) * 0x98 + 0x80059b4);
    }
    else {
        uVar1 = 0xffffffff;
        *0x800b000 = *0x800b000 + 1;
    }
    return uVar1;
}




// ===== sym.DATARMNET392890a12b @ 0x08010f9c (size 264) =====



int sym.DATARMNET392890a12b(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    int iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0;
    uVar1 = sp_el0;
    iVar4 = -1;
    do {
        iVar2 = sym.DATARMNETb709a938b5(uVar3);
        if (iVar2 <= iVar4) {
            iVar2 = iVar4;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar2;
    } while (uVar3 != 8);
    return iVar2;
}




// ===== fcn.08011050 @ 0x08011050 (size 48) =====



uint64_t fcn.08011050(uint64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t unaff_x19;
    int unaff_w20;
    int64_t unaff_x23;
    int64_t *unaff_x24;
    ulong uStack0000000000000000;
    uint64_t uStack0000000000000008;
    
    uStack0000000000000000 = 0;
    uStack0000000000000008 = param_1;
    __traceiter_rmnet_shs_wq_low();
    iVar4 = *unaff_x24;
    *(unaff_x23 + 0x10) = iVar4 + -1;
    if ((iVar4 + -1 == 0) || (uVar3 = uStack0000000000000008, *unaff_x24 == 0)) {
        preempt_schedule_notrace();
        uVar3 = uStack0000000000000008;
    }
    while (uVar1 = unaff_x19 + 1, unaff_x19 = uVar1, uVar1 != 8) {
        iVar2 = sym.DATARMNETb709a938b5(unaff_x19);
        if (iVar2 <= unaff_w20) {
            iVar2 = unaff_w20;
        }
        uVar3 = iVar2;
        unaff_w20 = iVar2;
    }
    return uVar3 & 0xffffffff;
}




// ===== sym.DATARMNETdd3b17f0c3 @ 0x080110b4 (size 180) =====



int sym.DATARMNETdd3b17f0c3(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int iVar4;
    uint32_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg1 & 0xffff;
    if (uVar1 < 9) {
        uVar5 = (3 < uVar1) * 4;
        uVar3 = 8;
        if (uVar1 < 4) {
            uVar3 = 4;
        }
        iVar2 = -1;
        iVar4 = iVar2;
        if (uVar5 < uVar3) {
            do {
                iVar2 = sym.DATARMNETb709a938b5(uVar5);
                uVar5 = uVar5 + 1;
                if (iVar2 <= iVar4) {
                    iVar2 = iVar4;
                }
                iVar4 = iVar2;
            } while (uVar3 != uVar5);
        }
    }
    else {
        iVar2 = -1;
        *0x800b000 = *0x800b000 + 1;
    }
    return iVar2;
}




// ===== sym.DATARMNET73d2153565 @ 0x080111f8 (size 924) =====



void sym.DATARMNET73d2153565(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    int64_t iVar5;
    char cVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    ulong uVar10;
    int iVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t *piVar14;
    uint8_t *puVar15;
    uint64_t uVar16;
    ulong *in_x18;
    int64_t iVar17;
    uint32_t *puVar18;
    uint64_t uVar19;
    int64_t iVar20;
    uint64_t *puVar21;
    uint64_t uVar22;
    int64_t *piVar23;
    uint32_t *puVar24;
    int64_t *piVar25;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar22 = arg1 & 0xffff;
    iVar13 = uVar22 * 0x98;
    iVar17 = iVar13 + 0x8005928;
    piVar14 = iVar13 + 0x8005958;
    iVar20 = *piVar14 - *(iVar13 + 0x8005940);
    iVar9 = sym.DATARMNETadb0248bd4(arg1);
    iVar11 = *(iVar13 + 0x80059ac);
    if (iVar11 == 0) {
        *(iVar13 + 0x80059ac) = iVar9;
        iVar11 = iVar9;
    }
    iVar5 = uVar22 * 0x98;
    iVar3 = *(iVar5 + 0x80059a0);
    *(iVar5 + 0x80059a0) = iVar9;
    puVar15 = uVar22 * 0x28 + 0x800580d;
    uVar4 = *puVar15;
    puVar24 = iVar5 + 0x80059a8;
    *puVar24 = iVar9 - iVar3;
    *(iVar5 + 0x80059a4) = iVar3;
    puVar18 = iVar5 + 0x80059b0;
    *puVar18 = iVar9 - iVar11;
    uVar12 = uVar4;
    if (uVar12 != 0) {
        uVar12 = uVar12 + 1;
        uVar2 = 2;
        if (*0x8017000 != 0) {
            uVar2 = *0x8017000;
        }
        cVar6 = '\0';
        if (uVar2 != 0) {
            cVar6 = uVar12 / uVar2;
        }
        *puVar15 = uVar12 - cVar6 * uVar2;
    }
    piVar1 = uVar22 * 0x98 + 0x8005938;
    if (iVar20 == 0) {
        *piVar1 = *0x8005000;
        iVar11 = *0x800a000;
        iVar13 = uVar22 * 0x98;
        *(iVar13 + 0x8005978) = 0;
        *(iVar13 + 0x8005990) = 0;
        *(iVar13 + 0x8005970) = 0;
        if (iVar11 != 0) {
            sym.DATARMNETc6439e3d71(0x8005928,iVar17,0x8002158);
        }
        if (*0x8017000 == 0) {
            return;
        }
        if (iVar17 != 0) {
            iVar20 = uVar22 * 8;
            *(obj.DATARMNET79263b1183 + iVar20) = *(iVar13 + 0x8005978);
            uVar10 = *(uVar22 * 0x98 + 0x8005960);
            *(uVar22 * 4 + 0x800a7f8) = *(uVar22 * 0x98 + 0x80059b4);
            *(iVar20 + 0x800a838) = uVar10;
            iVar17 = *piVar14;
            *(iVar20 + 0x800a8f8) = *(iVar13 + 0x8005970);
            *(obj.DATARMNET77189ab85c + iVar20) = iVar17;
            *(iVar20 + 0x800a938) = *puVar24;
            *(iVar20 + 0x800a978) = *puVar18;
            return;
        }
    }
    else {
        iVar5 = uVar22 * 0x98;
        uVar16 = *0x8005000 - *piVar1;
        if (*0x8017000 == 0 || *0x8005000 - *piVar1 <= *0x8017000 * 1000000) {
            uVar16 = 100000000;
        }
        piVar25 = iVar5 + 0x8005960;
        uVar7 = 0;
        if (uVar16 != 0) {
            uVar7 = (iVar20 * 1000000000) / uVar16;
        }
        piVar23 = iVar5 + 0x8005978;
        iVar20 = *piVar23;
        puVar21 = iVar5 + 0x8005970;
        uVar19 = *puVar21;
        uVar8 = 0;
        if (uVar16 != 0) {
            uVar8 = ((*piVar25 - *(iVar5 + 0x8005948)) * 1000000000) / uVar16;
        }
        *puVar21 = uVar7;
        *piVar23 = uVar8 << 3;
        uVar10 = sym.DATARMNET183789850d(arg1 & 0xffffffff);
        *(iVar5 + 0x8005980) = uVar19;
        *(iVar5 + 0x8005988) = iVar20;
        iVar20 = *0x8005000;
        *(iVar5 + 0x8005948) = *piVar25;
        *(iVar5 + 0x8005990) = uVar10;
        *(iVar5 + 0x8005998) = *piVar23;
        *piVar1 = iVar20;
        iVar11 = *0x800a000;
        *(iVar13 + 0x8005940) = *piVar14;
        if (iVar11 != 0) {
            sym.DATARMNETc6439e3d71(0x8005928,iVar17,0x8002158);
        }
        if (*0x8017000 == 0) {
            return;
        }
        if (iVar17 != 0) {
            iVar13 = uVar22 * 8;
            uVar16 = *puVar21;
            *(obj.DATARMNET79263b1183 + iVar13) = *piVar23;
            *(iVar13 + 0x800a8f8) = uVar16;
            *(uVar22 * 4 + 0x800a7f8) = *(uVar22 * 0x98 + 0x80059b4);
            *(iVar13 + 0x800a838) = *piVar25;
            *(obj.DATARMNET77189ab85c + iVar13) = *piVar14;
            *(iVar13 + 0x800a938) = *puVar24;
            *(iVar13 + 0x800a978) = *puVar18;
            return;
        }
    }
    *0x800b000 = *0x800b000 + 1;
    return;
}




// ===== sym.DATARMNET183789850d @ 0x08011624 (size 196) =====



uint64_t sym.DATARMNET183789850d(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = arg1 & 0xffff;
    uVar3 = 0xffffff07 >> (arg1 & 0x1f);
    iVar4 = *(uVar5 * 0x98 + 0x8005980);
    uVar1 = 100 - *0x8017000;
    if ((uVar3 & 1) != 0) {
        uVar1 = *0x8017000;
    }
    if (iVar4 == 0) {
        uVar6 = *(uVar5 * 0x98 + 0x8005990);
    }
    else {
        uVar2 = *0x8017000;
        if ((uVar3 & 1) != 0) {
            uVar2 = 100 - *0x8017000;
        }
        uVar7 = (uVar2 & 0xffff) + (uVar1 & 0xffff);
        uVar6 = 0;
        if (uVar7 != 0) {
            uVar6 = (*(uVar5 * 0x98 + 0x8005970) * (uVar1 & 0xffff) +
                    (*(uVar5 * 0x98 + 0x8005990) + iVar4 >> 1) * (uVar2 & 0xffff)) / uVar7;
        }
    }
    return uVar6;
}




// ===== fcn.08011740 @ 0x08011740 (size 48) =====



ulong fcn.08011740(ulong param_1)

{
    int64_t iVar1;
    int64_t *unaff_x19;
    int64_t unaff_x20;
    ulong uStack0000000000000000;
    ulong uStack0000000000000008;
    
    uStack0000000000000000 = 0;
    uStack0000000000000008 = param_1;
    __traceiter_rmnet_shs_wq_high();
    iVar1 = *unaff_x19;
    *(unaff_x20 + 0x10) = iVar1 + -1;
    if ((iVar1 + -1 == 0) || (*unaff_x19 == 0)) {
        preempt_schedule_notrace();
    }
    return uStack0000000000000008;
}




// ===== sym.DATARMNET82d7f4ffa2 @ 0x08011780 (size 156) =====



void sym.DATARMNET82d7f4ffa2(void)

{
    code *pcVar1;
    uint64_t uVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x16 = extraout_w8;
    if (uVar2 < extraout_w8) {
        do {
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x801181c);
                (*pcVar1)();
            }
            *(*(__per_cpu_offset + (uVar2 & 0xffffffff) * 8) + *0x8005000) = 0x7fffffff00000000;
            uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
            *extraout_x16_00 = extraout_w8_00;
        } while (uVar2 < extraout_w8_00);
    }
    return;
}




// ===== sym.DATARMNET5e4aeef593 @ 0x0801181c (size 96) =====



void sym.DATARMNET5e4aeef593(uint32_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (2 < arg1) {
        if (0x1f < arg1) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x801187c);
            (*pcVar1)();
        }
        *(*(__per_cpu_offset + arg1 * 8) + *0x8005000) = 0x7fffffff7fffffff;
    }
    return;
}




// ===== sym.DATARMNETfb7007f025 @ 0x080118fc (size 388) =====



void sym.DATARMNETfb7007f025(void)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t extraout_w9;
    uint32_t extraout_w9_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x16 = extraout_w9;
    if (uVar3 < extraout_w9) {
        uVar1 = sp_el0;
        do {
            if ((1 << (uVar3 & 0x1f) & 0xf8U) == 0) {
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8011a80);
                    (*pcVar2)();
                }
                *(*(__per_cpu_offset + uVar3 * 8) + *0x8005000) = 0x7fffffff7fffffff;
            }
            uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
            *extraout_x16_00 = extraout_w9_00;
        } while (uVar3 < extraout_w9_00);
    }
    if (((*0x8005000 & 1) == 0) && (*0x8005000 != 0)) {
        queue_work_on(2,*0x8005000,0x8005f18);
    }
    return;
}




// ===== sym.DATARMNET371703c28d @ 0x08011a90 (size 360) =====



void sym.DATARMNET371703c28d(void)

{
    ulong uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t extraout_w9;
    uint32_t extraout_w9_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *extraout_x16 = extraout_w9;
    if (uVar3 < extraout_w9) {
        uVar1 = sp_el0;
        do {
            if (0x1f < uVar3) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8011bf8);
                (*pcVar2)();
            }
            *(*(__per_cpu_offset + uVar3 * 8) + *0x8005000) = 0x7fffffff00000000;
            uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
            *extraout_x16_00 = extraout_w9_00;
        } while (uVar3 < extraout_w9_00);
    }
    if (((*0x8005000 & 1) == 0) && (*0x8005000 != 0)) {
        queue_work_on(2,*0x8005000,0x8005f18);
    }
    return;
}




// ===== sym.DATARMNETe6e8431304 @ 0x08011c08 (size 560) =====



int sym.DATARMNETe6e8431304(void)

{
    uint32_t *puVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    uint32_t *extraout_x16_01;
    uint32_t *extraout_x16_02;
    uint32_t *extraout_x16_03;
    ulong *in_x18;
    uint64_t uVar6;
    uint32_t uVar7;
    int64_t unaff_x21;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8005000 = __alloc_percpu(8,4);
    if (*0x8005000 != 0) {
        if ((*0x8005000 != 0) || (*0x8005000 = alloc_workqueue("shs_boost_wq",0x10,0), *0x8005000 != 0)) {
            uVar6 = 0xffffffff;
            while( true ) {
                uVar3 = cpumask_next(uVar6,__cpu_possible_mask);
                uVar7 = unaff_x21;
                *extraout_x16 = uVar7;
                if (uVar7 <= uVar3) {
                    *0x8005f18 = 0xfffffffe0;
                    *0x8005f20 = 0x8005f20;
                    *0x8005f28 = 0x8005f20;
                    *0x8005f30 = sym.DATARMNETb90d2272b4.bc28116c6e32bbd07043963e81855993.cfi_jt;
                    uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    uVar3 = uVar6;
                    puVar1 = extraout_x16_00;
                    while( true ) {
                        if (uVar7 <= uVar3) {
                            return 0;
                        }
                        if (0x1f < uVar6) break;
                        *(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + *0x8005000) = 0x7fffffff00000000;
                        *puVar1 = uVar7;
                        uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                        uVar3 = uVar6;
                        puVar1 = extraout_x16_01;
                    }
                    break;
                }
                uVar6 = uVar3;
                if (0x1f < uVar3) break;
                unaff_x21 = *(__per_cpu_offset + uVar6 * 8);
                iVar5 = cpufreq_cpu_get(uVar6);
                if (iVar5 == 0) {
                    _printk(0x8002967,"DATARMNETe6e8431304",uVar6);
                    return -3;
                }
                iVar4 = freq_qos_add_request(iVar5 + 0xa0,obj.DATARMNET17d6a9530a + unaff_x21,1,0);
                if (iVar4 < 0) {
                    _printk(0x80028de,"DATARMNETe6e8431304",iVar4);
                    return iVar4;
                }
            }
code_r0x08011e34:
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8011e38);
            (*pcVar2)();
        }
        uVar6 = cpumask_next(0xffffffff,__cpu_possible_mask);
        *extraout_x16_02 = extraout_w8;
        if (uVar6 < extraout_w8) {
            do {
                if (0x1f < uVar6) goto code_r0x08011e34;
                *(*(__per_cpu_offset + (uVar6 & 0xffffffff) * 8) + *0x8005000) = 0x7fffffff00000000;
                uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                *extraout_x16_03 = extraout_w8_00;
            } while (uVar6 < extraout_w8_00);
        }
        free_percpu(*0x8005000);
        if (*0x8005000 != 0) {
            destroy_workqueue();
            *0x8005000 = 0;
            return -0xc;
        }
    }
    return -0xc;
}




// ===== sym.DATARMNETb90d2272b4 @ 0x08011e38 (size 188) =====



void sym.DATARMNETb90d2272b4(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint32_t extraout_w8;
    uint32_t extraout_w8_00;
    uint32_t *extraout_x16;
    uint32_t *extraout_x16_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cpus_read_lock();
    uVar2 = cpumask_next(0xffffffff,__cpu_online_mask);
    *extraout_x16 = extraout_w8;
    if (uVar2 < extraout_w8) {
        do {
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8011ef4);
                (*pcVar1)();
            }
            freq_qos_update_request
                      (obj.DATARMNET17d6a9530a + *(__per_cpu_offset + uVar2 * 8),
                       *(*(__per_cpu_offset + uVar2 * 8) + *0x8005000));
            uVar2 = cpumask_next(uVar2,__cpu_online_mask);
            *extraout_x16_00 = extraout_w8_00;
        } while (uVar2 < extraout_w8_00);
    }
    cpus_read_unlock();
    return;
}




// ===== sym.DATARMNETdf74db7e38 @ 0x08011ef4 (size 232) =====



ulong sym.DATARMNETdf74db7e38(void)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *in_x16;
    uint32_t *extraout_x16;
    ulong *in_x18;
    uint32_t unaff_w22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *in_x16 = unaff_w22;
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    while( true ) {
        if (unaff_w22 <= uVar2) {
            if (*0x8005000 != 0) {
                destroy_workqueue();
                *0x8005000 = 0;
            }
            free_percpu(*0x8005000);
            return 0;
        }
        if (0x1f < uVar2) break;
        if (((*(__per_cpu_offset + uVar2 * 8) != -0x80175e8) &&
            (uVar3 = *(*(__per_cpu_offset + uVar2 * 8) + 0x8017618), uVar3 != 0)) && (uVar3 < 0xfffffffffffff001)) {
            freq_qos_remove_request();
            *extraout_x16 = unaff_w22;
        }
        uVar2 = cpumask_next(uVar2,__cpu_possible_mask);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8011fdc);
    (*pcVar1)();
}




// ===== sym.DATARMNET28a80d526e @ 0x08011fdc (size 224) =====



void sym.DATARMNET28a80d526e(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x30);
        if (piVar3 == NULL) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            uVar2 = *(arg1 + 0x124);
            iVar5 = *(arg1 + 0xb0);
            *(piVar3 + 0x2c) = *(arg1 + 0x12e);
            *(piVar3 + 5) = uVar2;
            iVar1 = *(arg1 + 0xa0);
            iVar6 = *arg2;
            piVar3[2] = *(arg1 + 0x98);
            piVar3[3] = iVar5;
            piVar3[4] = iVar1;
            uVar4 = __list_add_valid(piVar3,arg2,iVar6);
            if ((uVar4 & 1) != 0) {
                *(iVar6 + 8) = piVar3;
                *piVar3 = iVar6;
                piVar3[1] = arg2;
                *arg2 = piVar3;
            }
        }
    }
    return;
}




// ===== sym.DATARMNET3af54cd726 @ 0x080120bc (size 148) =====



void sym.DATARMNET3af54cd726(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == NULL) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar3 = *piVar4;
        while (piVar3 != piVar4) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3);
            piVar3 = piVar6;
        }
    }
    return;
}




// ===== sym.DATARMNET24e4475345 @ 0x08012150 (size 236) =====



void sym.DATARMNET24e4475345(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else if ((0xffffff07U >> (*(arg1 + 0x12e) & 0x1f) & 1) == 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xb20,0x28);
        if (piVar2 == NULL) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            uVar1 = *(arg1 + 0x124);
            iVar4 = *(arg1 + 0xb0);
            iVar5 = *(arg1 + 0x98);
            *(piVar2 + 0x24) = *(arg1 + 0x12e);
            iVar6 = *arg2;
            *(piVar2 + 4) = uVar1;
            piVar2[2] = iVar5;
            piVar2[3] = iVar4;
            uVar3 = __list_add_valid(piVar2,arg2,iVar6);
            if ((uVar3 & 1) != 0) {
                *(iVar6 + 8) = piVar2;
                *piVar2 = iVar6;
                piVar2[1] = arg2;
                *arg2 = piVar2;
            }
        }
    }
    return;
}




// ===== sym.DATARMNETa1b141715b @ 0x0801223c (size 148) =====



void sym.DATARMNETa1b141715b(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == NULL) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar3 = *piVar4;
        while (piVar3 != piVar4) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3);
            piVar3 = piVar6;
        }
    }
    return;
}




// ===== sym.DATARMNETc6439e3d71 @ 0x080122d0 (size 308) =====



void sym.DATARMNETc6439e3d71(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    code *pcVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (arg3 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        uVar6 = *(arg2 + 0x90);
        if (7 < uVar6) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8012404);
            (*pcVar4)();
        }
        uVar8 = *(obj.DATARMNET713717107f + uVar6 * 8);
        iVar7 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar7 = 0x30;
        }
        iVar3 = *(arg1 + uVar6 * 0x98 + 0x8c);
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xb20,0x30);
        if (piVar5 == NULL) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            *(piVar5 + 5) = *(arg2 + 0x90);
            if (iVar3 < 1) {
                iVar7 = *arg3;
                piVar5[2] = uVar8;
                piVar5[3] = uVar8;
                piVar5[4] = 0;
            }
            else {
                iVar7 = *arg3;
                iVar1 = 0;
                if (*(arg2 + 0x48) <= uVar8) {
                    iVar1 = uVar8 - *(arg2 + 0x48);
                }
                iVar2 = 0;
                if (*(arg2 + 0x68) <= uVar8) {
                    iVar2 = uVar8 - *(arg2 + 0x68);
                }
                piVar5[4] = *(arg2 + 0x50);
                piVar5[2] = iVar1;
                piVar5[3] = iVar2;
            }
            uVar6 = __list_add_valid(piVar5,arg3,iVar7);
            if ((uVar6 & 1) != 0) {
                *(iVar7 + 8) = piVar5;
                *piVar5 = iVar7;
                piVar5[1] = arg3;
                *arg3 = piVar5;
            }
        }
    }
    return;
}




// ===== sym.DATARMNETb177316a15 @ 0x08012404 (size 148) =====



void sym.DATARMNETb177316a15(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == NULL) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar3 = *piVar4;
        while (piVar3 != piVar4) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3);
            piVar3 = piVar6;
        }
    }
    return;
}




// ===== sym.DATARMNET312b06829d @ 0x08012498 (size 268) =====



void sym.DATARMNET312b06829d(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    uint uVar5;
    uchar uVar6;
    uchar uVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar8 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x90);
        if ((piVar8 == NULL) || (piVar10 = *(arg1 + 0x60), piVar10 == NULL)) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            iVar2 = *(arg1 + 0xa0);
            iVar1 = *(arg1 + 0xb0);
            iVar3 = *(arg1 + 0xb8);
            uVar4 = *(arg1 + 0x12e);
            uVar6 = *(arg1 + 0x133);
            piVar8[10] = *(arg1 + 0x98);
            piVar8[0xb] = iVar1;
            uVar5 = *(arg1 + 0x124);
            piVar8[0xc] = iVar2;
            piVar8[0xd] = iVar3;
            uVar7 = *(arg1 + 0x132);
            *(piVar8 + 0x11) = uVar6;
            *(piVar8 + 0x10) = uVar5;
            *(piVar8 + 0x84) = uVar4;
            iVar1 = *(arg1 + 0xc0);
            iVar2 = *(arg1 + 200);
            *(piVar8 + 0x89) = uVar7;
            iVar11 = *arg2;
            piVar8[0xe] = iVar1;
            piVar8[0xf] = iVar2;
            piVar8[2] = *piVar10;
            iVar2 = piVar10[4];
            iVar1 = piVar10[1];
            iVar3 = piVar10[2];
            piVar8[5] = piVar10[3];
            piVar8[6] = iVar2;
            piVar8[3] = iVar1;
            piVar8[4] = iVar3;
            iVar1 = piVar10[5];
            iVar2 = piVar10[6];
            *(piVar8 + 9) = piVar10[7];
            piVar8[7] = iVar1;
            piVar8[8] = iVar2;
            uVar9 = __list_add_valid(piVar8,arg2,iVar11);
            if ((uVar9 & 1) != 0) {
                *(iVar11 + 8) = piVar8;
                *piVar8 = iVar11;
                piVar8[1] = arg2;
                *arg2 = piVar8;
            }
        }
    }
    return;
}




// ===== sym.DATARMNET6f4b0915d3 @ 0x080125a4 (size 260) =====



void sym.DATARMNET6f4b0915d3(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    uint uVar5;
    uchar uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar7 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x90);
        if ((piVar7 == NULL) || (piVar9 = *(arg1 + 0x60), piVar9 == NULL)) {
            *0x800b000 = *0x800b000 + 1;
        }
        else {
            iVar2 = *(arg1 + 0xa0);
            iVar1 = *(arg1 + 0xb0);
            iVar3 = *(arg1 + 0xb8);
            uVar4 = *(arg1 + 0x12e);
            uVar6 = *(arg1 + 0x133);
            piVar7[10] = *(arg1 + 0x98);
            piVar7[0xb] = iVar1;
            uVar5 = *(arg1 + 0x124);
            piVar7[0xc] = iVar2;
            piVar7[0xd] = iVar3;
            *(piVar7 + 0x11) = uVar6;
            *(piVar7 + 0x10) = uVar5;
            *(piVar7 + 0x84) = uVar4;
            iVar1 = *(arg1 + 200);
            iVar10 = *arg2;
            piVar7[0xe] = *(arg1 + 0xc0);
            piVar7[0xf] = iVar1;
            piVar7[2] = *piVar9;
            iVar2 = piVar9[4];
            iVar1 = piVar9[1];
            iVar3 = piVar9[2];
            piVar7[5] = piVar9[3];
            piVar7[6] = iVar2;
            piVar7[3] = iVar1;
            piVar7[4] = iVar3;
            iVar1 = piVar9[5];
            iVar2 = piVar9[6];
            *(piVar7 + 9) = piVar9[7];
            piVar7[7] = iVar1;
            piVar7[8] = iVar2;
            uVar8 = __list_add_valid(piVar7,arg2,iVar10);
            if ((uVar8 & 1) != 0) {
                *(iVar10 + 8) = piVar7;
                *piVar7 = iVar10;
                piVar7[1] = arg2;
                *arg2 = piVar7;
            }
        }
    }
    return;
}




// ===== sym.DATARMNETf7730d41c1 @ 0x080126a8 (size 148) =====



void sym.DATARMNETf7730d41c1(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == NULL) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar3 = *piVar4;
        while (piVar3 != piVar4) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3);
            piVar3 = piVar6;
        }
    }
    return;
}




// ===== sym.DATARMNETcc489fbbad @ 0x0801273c (size 148) =====



void sym.DATARMNETcc489fbbad(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    piVar4 = arg1;
    *in_x18 = unaff_x30;
    if (piVar4 == NULL) {
        *0x800b000 = *0x800b000 + 1;
    }
    else {
        piVar3 = *piVar4;
        while (piVar3 != piVar4) {
            piVar6 = *piVar3;
            uVar5 = __list_del_entry_valid(piVar3);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            kfree(piVar3);
            piVar3 = piVar6;
        }
    }
    return;
}




// ===== sym.DATARMNET5157210c44 @ 0x080127d0 (size 528) =====



void sym.DATARMNET5157210c44(uint32_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    uint uVar3;
    uint uVar4;
    uint64_t *puVar5;
    ulong *puVar6;
    uint64_t *puVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar5 = arg1;
    *in_x18 = unaff_x30;
    if (puVar5 != NULL) {
        puVar6 = *puVar5;
        if (puVar6 != puVar5) {
            *0x8005f50 = puVar6[2];
            *0x8005f58 = puVar6[3];
            *0x8005f60 = puVar6[4];
            *0x8005f68 = *(puVar6 + 5);
            puVar7 = *puVar6;
            if (puVar7 != puVar5) {
                *0x8005f72 = puVar7[3];
                *0x8005f6a = puVar7[2];
                *0x8005f7a = puVar7[4];
                *0x8005f82 = puVar7[5];
                puVar7 = *puVar7;
                if (puVar7 != puVar5) {
                    *0x8005f8c = puVar7[3];
                    *0x8005f84 = puVar7[2];
                    *0x8005f94 = puVar7[4];
                    *0x8005f9c = puVar7[5];
                    puVar7 = *puVar7;
                    if (puVar7 != puVar5) {
                        *0x8005fa6 = puVar7[3];
                        *0x8005f9e = puVar7[2];
                        *0x8005fae = puVar7[4];
                        *0x8005fb6 = puVar7[5];
                        puVar7 = *puVar7;
                        if (puVar7 != puVar5) {
                            *0x8005fc0 = puVar7[3];
                            *0x8005fb8 = puVar7[2];
                            *0x8005fc8 = puVar7[4];
                            *0x8005fd0 = puVar7[5];
                            puVar7 = *puVar7;
                            if (puVar7 != puVar5) {
                                *0x8005fda = puVar7[3];
                                *0x8005fd2 = puVar7[2];
                                *0x8005fe2 = puVar7[4];
                                *0x8005fea = puVar7[5];
                                puVar7 = *puVar7;
                                if (puVar7 != puVar5) {
                                    *0x8005ff4 = puVar7[3];
                                    *0x8005fec = puVar7[2];
                                    *0x8005ffc = puVar7[4];
                                    *0x8006000 = puVar7[4] >> 0x20;
                                    *0x8006004 = puVar7[5];
                                    puVar7 = *puVar7;
                                    if (puVar7 != puVar5) {
                                        *0x800600e = puVar7[3];
                                        *0x8006006 = puVar7[2];
                                        *0x8006008 = puVar7[2] >> 0x10;
                                        *0x8006016 = puVar7[4];
                                        *0x800601e = puVar7[5];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        piVar1 = CONCAT26(*0x8006006,CONCAT24(*0x8006004,*0x8006000));
        if (piVar1 != NULL) {
            memcpy(*piVar1,0x8005f50,0xd0);
            uVar4 = _remove_proc_entry;
            uVar3 = _proc_mkdir;
            uVar2 = _init_net;
            iVar8 = *piVar1;
            *(iVar8 + 0xd0) = _proc_set_user;
            *(iVar8 + 0xd8) = uVar4;
            *(iVar8 + 0xdc) = uVar2;
            *(iVar8 + 0xe4) = uVar3;
        }
    }
    return;
}




// ===== sym.DATARMNET0e273eab79 @ 0x080129e0 (size 196) =====



void sym.DATARMNET0e273eab79(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 != NULL) {
        puVar5 = *puVar2;
        if (puVar5 == puVar2) {
            uVar3 = 0;
        }
        else {
            uVar4 = 0;
            do {
                uVar3 = uVar4;
                if (puVar5[2] != 0) {
                    if (0x7f < uVar3) break;
                    uVar6 = uVar4 & 0xffff;
                    uVar4 = uVar3 + 1;
                    iVar1 = uVar6 * 0x1e;
                    *(iVar1 + 0x8006044) = *(puVar5 + 0x24);
                    *(iVar1 + 0x8006040) = puVar5[4];
                    *(iVar1 + 0x8006030) = puVar5[3];
                    *(iVar1 + 0x8006028) = puVar5[2];
                }
                uVar3 = uVar4;
                puVar5 = *puVar5;
            } while (puVar5 != puVar2);
        }
        if (*0x8006000 != NULL) {
            ***0x8006000 = uVar3;
            memcpy(**0x8006000 + 2,0x8006028,0xf00);
        }
    }
    return;
}




// ===== sym.DATARMNETe15af8eb6d @ 0x08012aa4 (size 204) =====



void sym.DATARMNETe15af8eb6d(uint32_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar2 = arg1;
    *in_x18 = unaff_x30;
    if (puVar2 != NULL) {
        puVar5 = *puVar2;
        if (puVar5 == puVar2) {
            uVar3 = 0;
        }
        else {
            uVar4 = 0;
            do {
                uVar3 = uVar4;
                if (puVar5[2] != 0) {
                    if (0x7f < uVar3) break;
                    uVar6 = uVar4 & 0xffff;
                    uVar4 = uVar3 + 1;
                    iVar1 = uVar6 * 0x1e;
                    *(iVar1 + 0x8006f4c) = *(puVar5 + 0x2c);
                    *(iVar1 + 0x8006f48) = puVar5[5];
                    *(iVar1 + 0x8006f38) = puVar5[3];
                    *(iVar1 + 0x8006f30) = puVar5[2];
                    *(iVar1 + 0x8006f40) = puVar5[4];
                }
                uVar3 = uVar4;
                puVar5 = *puVar5;
            } while (puVar5 != puVar2);
        }
        if (*0x8007000 != NULL) {
            ***0x8007000 = uVar3;
            memcpy(**0x8007000 + 2,0x8006f30,0xf00);
        }
    }
    return;
}




// ===== sym.DATARMNET78f3a0ca4f @ 0x08012b70 (size 284) =====



void sym.DATARMNET78f3a0ca4f(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 != NULL) {
        puVar7 = *puVar4;
        if (puVar7 == puVar4) {
            uVar5 = 0;
        }
        else {
            uVar6 = 0;
            do {
                uVar5 = uVar6;
                if (puVar7[10] != 0) {
                    if (0x1d < uVar5) break;
                    uVar8 = uVar6 & 0xffff;
                    uVar6 = uVar5 + 1;
                    iVar3 = uVar8 * 0x75;
                    *(iVar3 + 0x8007e38) = puVar7[2];
                    uVar1 = puVar7[6];
                    uVar8 = puVar7[3];
                    uVar2 = puVar7[4];
                    *(iVar3 + 0x8007e50) = puVar7[5];
                    *(iVar3 + 0x8007e58) = uVar1;
                    *(iVar3 + 0x8007e40) = uVar8;
                    *(iVar3 + 0x8007e48) = uVar2;
                    uVar8 = puVar7[7];
                    uVar1 = puVar7[8];
                    *(iVar3 + 0x8007e70) = puVar7[9];
                    *(iVar3 + 0x8007e60) = uVar8;
                    *(iVar3 + 0x8007e68) = uVar1;
                    *(iVar3 + 0x8007ea8) = *(puVar7 + 0x84);
                    *(iVar3 + 0x8007ea4) = puVar7[0x10];
                    *(iVar3 + 0x8007e7c) = puVar7[0xb];
                    *(iVar3 + 0x8007e74) = puVar7[10];
                    *(iVar3 + 0x8007e84) = puVar7[0xc];
                    *(iVar3 + 0x8007eaa) = *(puVar7 + 0x86);
                    *(iVar3 + 0x8007eac) = puVar7[0x11];
                    *(iVar3 + 0x8007e8c) = puVar7[0xd];
                    *(iVar3 + 0x8007e94) = puVar7[0xe];
                    *(iVar3 + 0x8007e9c) = puVar7[0xf];
                }
                uVar5 = uVar6;
                puVar7 = *puVar7;
            } while (puVar7 != puVar4);
        }
        if (*0x8008000 != NULL) {
            ***0x8008000 = uVar5;
            memcpy(**0x8008000 + 2,0x8007e38,0xdb6);
        }
    }
    return;
}




// ===== sym.DATARMNETa3d6c4072d @ 0x08012c8c (size 288) =====



void sym.DATARMNETa3d6c4072d(uint32_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    bool bVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    uchar *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar4 = arg1;
    *in_x18 = unaff_x30;
    if (puVar4 != NULL) {
        puVar5 = *puVar4;
        if (puVar5 == puVar4) {
            uVar8 = 0;
        }
        else {
            puVar6 = 0x8008c6d;
            uVar7 = 0;
            do {
                *(puVar6 + -0x75) = puVar5[2];
                uVar1 = puVar5[6];
                uVar8 = puVar5[3];
                uVar2 = puVar5[4];
                *(puVar6 + -0x5d) = puVar5[5];
                *(puVar6 + -0x55) = uVar1;
                *(puVar6 + -0x6d) = uVar8;
                *(puVar6 + -0x65) = uVar2;
                uVar8 = puVar5[8];
                uVar1 = puVar5[9];
                *(puVar6 + -0x4d) = puVar5[7];
                *(puVar6 + -0x3d) = uVar1;
                *(puVar6 + -0x45) = uVar8;
                *(puVar6 + -5) = *(puVar5 + 0x84);
                *(puVar6 + -9) = puVar5[0x10];
                *(puVar6 + -0x31) = puVar5[0xb];
                *(puVar6 + -0x39) = puVar5[10];
                *puVar6 = *(puVar5 + 0x89);
                *(puVar6 + -0x29) = puVar5[0xc];
                *(puVar6 + -3) = *(puVar5 + 0x86);
                puVar6[-1] = puVar5[0x11];
                *(puVar6 + -0x21) = puVar5[0xd];
                *(puVar6 + -0x19) = puVar5[0xe];
                *(puVar6 + -0x11) = puVar5[0xf];
                uVar8 = uVar7 + 1;
                puVar5 = *puVar5;
                if (puVar5 == puVar4) break;
                puVar6 = puVar6 + 0x76;
                bVar3 = uVar7 < 0x1d;
                uVar7 = uVar8;
            } while (bVar3);
        }
        if (*0x8009000 != NULL) {
            ***0x8009000 = uVar8;
            memcpy(**0x8009000 + 2,obj.DATARMNET2fdef9da24,0xdd4);
        }
    }
    return;
}




// ===== sym.DATARMNET78666f33a1 @ 0x08012dac (size 308) =====



int64_t sym.DATARMNET78666f33a1(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    uint64_t uVar3;
    code *pcVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.DATARMNET30a3e83974 == obj.DATARMNET30a3e83974) {
        uVar2 = 0;
    }
    else {
        uVar3 = 0;
        pcVar4 = _obj.DATARMNET30a3e83974;
        do {
            uVar2 = uVar3;
            if (pcVar4[0x5e] != 0x0) {
                if (0x27 < uVar2) break;
                iVar5 = *(pcVar4 + 0x10);
                if (iVar5 != -0xa00) {
                    iVar1 = (uVar3 & 0xffff) * 0x59;
                    *(iVar1 + 0x80099e8) = *(iVar5 + 0xab8);
                    *(iVar1 + 0x80099f0) = *(iVar5 + 0xae8);
                    *(iVar1 + 0x8009a00) = *(iVar5 + 0xb78);
                    *(iVar1 + 0x8009a08) = *(iVar5 + 0xb80);
                    *(iVar1 + 0x8009a10) = *(iVar5 + 0xb88);
                    *(iVar1 + 0x8009a18) = *(iVar5 + 0xb90);
                    *(iVar1 + 0x8009a30) = *(iVar5 + 0xa00);
                    arg1 = strlcpy(iVar1 + 0x80099d8,*(pcVar4 + 0x10),0x10);
                    uVar3 = uVar2 + 1;
                    *(sym.DATARMNET82e88dbb56 + iVar1) = *(iVar5 + 0xa78);
                    *(iVar1 + 0x8009a28) = *(pcVar4 + -0x10);
                    *(iVar1 + 0x8009a20) = *(pcVar4 + -8);
                }
            }
            uVar2 = uVar3;
            pcVar4 = *pcVar4;
        } while (pcVar4 != obj.DATARMNET30a3e83974);
    }
    if (*0x800a000 != NULL) {
        ***0x800a000 = uVar2;
        arg1 = memcpy(**0x800a000 + 2,0x80099d8,0xde8);
    }
    return arg1;
}




// ===== sym.DATARMNETf5f83b943f @ 0x08012ee0 (size 320) =====



void sym.DATARMNETf5f83b943f(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x800a000 = proc_mkdir(0x8002954,0);
    if (*0x800a000 != 0) {
        proc_set_user(*0x800a000,0x3e9,0x3e9);
        proc_create("rmnet_shs_caps",0x1a4,*0x800a000,obj.DATARMNET668485bd14);
        proc_create("rmnet_shs_flows",0x1a4,*0x800a000,obj.DATARMNETe84fbaa6af);
        proc_create("rmnet_shs_ss_flows",0x1a4,*0x800a000,obj.DATARMNET8fe5f892a8);
        proc_create("rmnet_shs_fflows",0x1a4,*0x800a000,obj.DATARMNET0104d40d4b);
        proc_create("rmnet_shs_ll_flows",0x1a4,*0x800a000,obj.DATARMNETddcdf7bd4e);
        proc_create("rmnet_shs_netdev",0x1a4,*0x800a000,obj.DATARMNET6eb63d9ad0);
        _raw_spin_lock_bh(0x8005f08);
        *0x8006000 = 0;
        *0x8007000 = 0;
        *0x8008000 = 0;
        *0x8009000 = 0;
        *0x800a000 = 0;
        _raw_spin_unlock_bh(0x8005f08);
    }
    return;
}




// ===== sym.DATARMNET28d33bd09f @ 0x08013020 (size 228) =====



void sym.DATARMNET28d33bd09f(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("rmnet_shs_caps",*0x800a000);
    remove_proc_entry("rmnet_shs_flows",*0x800a000);
    remove_proc_entry("rmnet_shs_ss_flows",*0x800a000);
    remove_proc_entry("rmnet_shs_fflows",*0x800a000);
    remove_proc_entry("rmnet_shs_ll_flows",*0x800a000);
    remove_proc_entry("rmnet_shs_netdev",*0x800a000);
    remove_proc_entry(0x8002954,0);
    _raw_spin_lock_bh(0x8005f08);
    *0x8006000 = 0;
    *0x8007000 = 0;
    *0x8008000 = 0;
    *0x8009000 = 0;
    *0x800a000 = 0;
    _raw_spin_unlock_bh(0x8005f08);
    return;
}




// ===== sym.DATARMNET33a80d3bf7 @ 0x08013104 (size 308) =====



uint sym.DATARMNET33a80d3bf7(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013168;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013168;
        }
        *0x8006000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8006000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0801315c;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x0801315c:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x8006000;
code_r0x08013168:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNETaf2aa1d70f @ 0x08013238 (size 16) =====



ulong sym.DATARMNETaf2aa1d70f(void)

{
    return 0;
}




// ===== sym.DATARMNET4761dcd3fd @ 0x08013248 (size 16) =====



int64_t sym.DATARMNET4761dcd3fd(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    return arg1;
}




// ===== sym.DATARMNETcfbc4f0c39 @ 0x08013258 (size 232) =====



ulong sym.DATARMNETcfbc4f0c39(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8006000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET54418f934d @ 0x08013340 (size 52) =====



ulong sym.DATARMNET54418f934d(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = obj.DATARMNETfa4e968e7d;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET6069bf201a @ 0x08013374 (size 12) =====



void sym.DATARMNET6069bf201a(void)

{
    return;
}




// ===== sym.DATARMNET0f6b7f3f93 @ 0x08013380 (size 12) =====



void sym.DATARMNET0f6b7f3f93(void)

{
    return;
}




// ===== sym.DATARMNET9efe8a3d18 @ 0x0801338c (size 236) =====



uint sym.DATARMNET9efe8a3d18(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8006000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET0935e3beb9 @ 0x08013478 (size 308) =====



uint sym.DATARMNET0935e3beb9(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x080134dc;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x080134dc;
        }
        *0x8006000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8006000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080134d0;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x080134d0:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x8006000;
code_r0x080134dc:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET2a9f67714f @ 0x080135ac (size 232) =====



ulong sym.DATARMNET2a9f67714f(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8006000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8006000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNETc55748448d @ 0x08013694 (size 52) =====



ulong sym.DATARMNETc55748448d(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = obj.DATARMNETe9c0626068;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNETd005aa7157 @ 0x080136c8 (size 236) =====



uint sym.DATARMNETd005aa7157(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8006000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNETfbd34e70a2 @ 0x080137b4 (size 308) =====



uint sym.DATARMNETfbd34e70a2(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8007000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013818;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013818;
        }
        *0x8007000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8007000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x0801380c;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x0801380c:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x8007000;
code_r0x08013818:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET968bc5b80d @ 0x080138e8 (size 232) =====



ulong sym.DATARMNET968bc5b80d(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8007000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8007000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET43c6d751a2 @ 0x080139d0 (size 52) =====



ulong sym.DATARMNET43c6d751a2(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = obj.DATARMNET9a89317a86;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNETb3a7180954 @ 0x08013a04 (size 236) =====



uint sym.DATARMNETb3a7180954(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8007000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET57bcb932f3 @ 0x08013af0 (size 308) =====



uint sym.DATARMNET57bcb932f3(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8008000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013b54;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013b54;
        }
        *0x8008000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8008000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08013b48;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08013b48:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x8008000;
code_r0x08013b54:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET59b415aded @ 0x08013c24 (size 232) =====



ulong sym.DATARMNET59b415aded(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8008000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8008000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET7cc042bdf3 @ 0x08013d0c (size 52) =====



ulong sym.DATARMNET7cc042bdf3(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = obj.DATARMNET5462c2ce60;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNETe35719979c @ 0x08013d40 (size 236) =====



uint sym.DATARMNETe35719979c(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8008000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET601894f27b @ 0x08013e2c (size 308) =====



uint sym.DATARMNET601894f27b(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8009000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x08013e90;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x08013e90;
        }
        *0x8009000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x8009000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x08013e84;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x08013e84:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x8009000;
code_r0x08013e90:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET794d7587bd @ 0x08013f60 (size 232) =====



ulong sym.DATARMNET794d7587bd(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x8009000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x8009000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET150e284e90 @ 0x08014048 (size 52) =====



ulong sym.DATARMNET150e284e90(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = obj.DATARMNET523167fa26;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNET1ab1f570f2 @ 0x0801407c (size 236) =====



uint sym.DATARMNET1ab1f570f2(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x8009000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNETb9d10d8cc0 @ 0x08014168 (size 308) =====



uint sym.DATARMNETb9d10d8cc0(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x800a000 == NULL) {
        iVar6 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar6 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x10);
        if (piVar5 == NULL) {
            uVar8 = 0xfffffff4;
            goto code_r0x080141cc;
        }
        iVar6 = get_zeroed_page(0xa20);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
            kfree(piVar5);
            uVar8 = 0xfffffff4;
            goto code_r0x080141cc;
        }
        *0x800a000 = piVar5;
        *(piVar5 + 1) = 1;
    }
    else {
        puVar1 = *0x800a000 + 1;
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
            uVar7 = 2;
        }
        else {
            if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080141c0;
            uVar7 = 1;
        }
        refcount_warn_saturate(puVar1,uVar7);
    }
code_r0x080141c0:
    uVar8 = 0;
    *(arg1 + 0xd8) = *0x800a000;
code_r0x080141cc:
    _raw_spin_unlock_bh(0x8005f08);
    return uVar8;
}




// ===== sym.DATARMNET18464ea5e3 @ 0x0801429c (size 232) =====



ulong sym.DATARMNET18464ea5e3(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if (*0x800a000 != 0) {
        puVar5 = *(arg1 + 0xd8);
        piVar1 = puVar5 + 1;
        if (*piVar1 < 2) {
            free_pages(*puVar5,0);
            kfree(puVar5);
            *0x800a000 = 0;
            *(arg1 + 0xd8) = 0;
        }
        else {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 < 2) {
                refcount_warn_saturate(piVar1,4);
            }
        }
    }
    _raw_spin_unlock_bh(0x8005f08);
    return 0;
}




// ===== sym.DATARMNET444e2eb654 @ 0x08014384 (size 52) =====



ulong sym.DATARMNET444e2eb654(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0x50) = *(arg2 + 0x50) | 0x4040000;
    *(arg2 + 0x90) = reloc.DATARMNET6069bf201a.19721571eac14341b021edd2d7ccdec0.cfi_jt;
    *(arg2 + 0xa8) = *(arg1 + 0xd8);
    return 0;
}




// ===== sym.DATARMNETe421c4e1db @ 0x080143b8 (size 236) =====



uint sym.DATARMNETe421c4e1db(int64_t arg1)

{
    int *piVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(0x8005f08);
    if ((*0x800a000 == 0) || (**(*arg1 + 0xa8) == 0)) {
        uVar7 = 0x40;
    }
    else {
        uVar5 = ((**(*arg1 + 0xa8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0;
        iVar2 = uVar5 - 0x200000000;
        uVar5 = *(uVar5 - 0x1fffffff8);
        iVar6 = iVar2;
        if ((uVar5 & 1) != 0) {
            iVar6 = uVar5 - 1;
        }
        piVar1 = iVar6 + 0x34;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        uVar7 = 0;
        *(arg1 + 0x58) = iVar2;
    }
    _raw_spin_unlock_bh(0x8005f08);
    return uVar7;
}




// ===== sym.DATARMNET5d4ca1da1c @ 0x080144a4 (size 268) =====



int sym.DATARMNET5d4ca1da1c(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x20;
    uint64_t uVar11;
    int64_t unaff_x22;
    ulong unaff_x30;
    int iStack_bc;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    uVar11 = arg2 & 0xffffffff;
    iStack_38 = *(iVar8 + 0x5e0);
    uVar7 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
    iVar8 = unaff_x22;
    if (uVar7 == 0) {
code_r0x0801453c:
        iVar5 = -1;
        uVar7 = unaff_x20;
    }
    else {
        iVar8 = genlmsg_put(uVar7,0,*arg1 + 1,obj.DATARMNETecc643c219,0,1);
        unaff_x20 = uVar7;
        if (iVar8 == 0) {
code_r0x08014534:
            kfree(uVar7);
            iVar8 = unaff_x22;
            goto code_r0x0801453c;
        }
        uStack_3c = arg2;
        iVar5 = nla_put(uVar7,2,4,&uStack_3c);
        unaff_x22 = iVar8;
        if (iVar5 != 0) goto code_r0x08014534;
        *(iVar8 + -0x14) = (*(uVar7 + 0xd0) + *(uVar7 + 200)) - (iVar8 + -0x14);
        iVar5 = netlink_unicast(*(*(arg1 + 0x28) + 0x118),uVar7,*(arg1 + 4),0x40);
        if (iVar5 < 0) goto code_r0x0801453c;
        iVar5 = 0;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    uVar6 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.DATARMNET5945236cd3;
    pcStack_68 = sym.DATARMNET5945236cd3;
    iVar10 = sp_el0;
    iStack_78 = *(iVar10 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = iVar8;
    uStack_58 = uVar11;
    uStack_50 = uVar7;
    iStack_48 = arg1;
    if (CONCAT44(*0x800a004,*0x800a000) == 0) {
        iVar5 = -1;
    }
    else {
        iVar8 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
        iVar5 = *0x800a000;
        uVar9 = uVar11;
        uVar7 = uVar6;
        if (iVar8 != 0) {
            *0x800a000 = *0x800a000 + 1;
            uVar9 = genlmsg_put(iVar8,0,iVar5,obj.DATARMNETecc643c219,0,1);
            arg1 = iVar8;
            if (uVar9 != 0) {
                uStack_7c = uVar6;
                iVar5 = nla_put(iVar8,2,4,&uStack_7c);
                uVar11 = uVar9;
                if (iVar5 == 0) {
                    *(uVar9 - 0x14) = (*(iVar8 + 0xd0) + *(iVar8 + 200)) - (uVar9 + -0x14);
                    iVar5 = netlink_unicast(*(CONCAT44(*0x800a004,*0x800a000) + 0x118),iVar8,*0x800a000,0x40);
                    if (-1 < iVar5) {
                        iVar5 = 0;
                        goto code_r0x0801466c;
                    }
                    goto code_r0x08014658;
                }
            }
            kfree(iVar8);
            uVar9 = uVar11;
        }
code_r0x08014658:
        iVar5 = -1;
        *0x800a000 = 0;
        uVar11 = uVar9;
    }
code_r0x0801466c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_78) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18_00 = sym.DATARMNETa9a7fa898c;
    iVar5 = *0x800a000;
    pcStack_a8 = sym.DATARMNETa9a7fa898c;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    *0x800a000 = *0x800a000 + 1;
    ppuStack_b0 = &puStack_70;
    uStack_a0 = uVar11;
    uStack_90 = uVar7;
    iStack_88 = arg1;
    iVar8 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
    iVar2 = *0x800a000;
    if (iVar8 != 0) {
        *0x800a000 = *0x800a000 + 1;
        iVar10 = genlmsg_put(iVar8,0,iVar2,obj.DATARMNETecc643c219,0,1);
        if (iVar10 != 0) {
            iStack_bc = iVar5;
            iVar5 = nla_put(iVar8,2,4,&iStack_bc);
            if (iVar5 == 0) {
                *(iVar10 + -0x14) = (*(iVar8 + 0xd0) + *(iVar8 + 200)) - (iVar10 + -0x14);
                uVar3 = _rmnet_shs_skb_entry;
                uVar1 = *0x8002000;
                if (*0x800218f == '\0') {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8014818);
                    (*pcVar4)();
                }
                *(iVar8 + 0x38) = *0x8002000;
                netlink_broadcast(uVar3,iVar8,0,uVar1,0xa20);
                iVar5 = 0;
                goto code_r0x08014790;
            }
        }
        kfree(iVar8);
    }
    iVar5 = -1;
    *0x800a000 = 0;
code_r0x08014790:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18_01 = sym.DATARMNET740f3b34b3;
    sym.DATARMNET90fe3a4b56();
    return -(extraout_x1 == 0);
}




// ===== sym.DATARMNET5945236cd3 @ 0x080145b0 (size 304) =====



int sym.DATARMNET5945236cd3(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    int64_t unaff_x21;
    ulong unaff_x30;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    if (CONCAT44(*0x800a004,*0x800a000) == 0) {
        iVar5 = -1;
    }
    else {
        unaff_x20 = arg1 & 0xffffffff;
        iVar6 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
        iVar5 = *0x800a000;
        iVar7 = unaff_x21;
        if (iVar6 != 0) {
            *0x800a000 = *0x800a000 + 1;
            iVar7 = genlmsg_put(iVar6,0,iVar5,obj.DATARMNETecc643c219,0,1);
            unaff_x19 = iVar6;
            if (iVar7 != 0) {
                uStack_3c = arg1;
                iVar5 = nla_put(iVar6,2,4,&uStack_3c);
                unaff_x21 = iVar7;
                if (iVar5 == 0) {
                    *(iVar7 + -0x14) = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - (iVar7 + -0x14);
                    iVar5 = netlink_unicast(*(CONCAT44(*0x800a004,*0x800a000) + 0x118),iVar6,*0x800a000,0x40);
                    if (-1 < iVar5) {
                        iVar5 = 0;
                        goto code_r0x0801466c;
                    }
                    goto code_r0x08014658;
                }
            }
            kfree(iVar6);
            iVar7 = unaff_x21;
        }
code_r0x08014658:
        iVar5 = -1;
        *0x800a000 = 0;
        unaff_x21 = iVar7;
    }
code_r0x0801466c:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18 = sym.DATARMNETa9a7fa898c;
    iVar5 = *0x800a000;
    pcStack_68 = sym.DATARMNETa9a7fa898c;
    iVar7 = sp_el0;
    iStack_78 = *(iVar7 + 0x5e0);
    *0x800a000 = *0x800a000 + 1;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = unaff_x21;
    uStack_50 = unaff_x20;
    iStack_48 = unaff_x19;
    iVar7 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
    iVar2 = *0x800a000;
    if (iVar7 != 0) {
        *0x800a000 = *0x800a000 + 1;
        iVar6 = genlmsg_put(iVar7,0,iVar2,obj.DATARMNETecc643c219,0,1);
        if (iVar6 != 0) {
            iStack_7c = iVar5;
            iVar5 = nla_put(iVar7,2,4,&iStack_7c);
            if (iVar5 == 0) {
                *(iVar6 + -0x14) = (*(iVar7 + 0xd0) + *(iVar7 + 200)) - (iVar6 + -0x14);
                uVar3 = _rmnet_shs_skb_entry;
                uVar1 = *0x8002000;
                if (*0x800218f == '\0') {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8014818);
                    (*pcVar4)();
                }
                *(iVar7 + 0x38) = *0x8002000;
                netlink_broadcast(uVar3,iVar7,0,uVar1,0xa20);
                iVar5 = 0;
                goto code_r0x08014790;
            }
        }
        kfree(iVar7);
    }
    iVar5 = -1;
    *0x800a000 = 0;
code_r0x08014790:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_78) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18_00 = sym.DATARMNET740f3b34b3;
    sym.DATARMNET90fe3a4b56();
    return -(extraout_x1 == 0);
}




// ===== sym.DATARMNETa9a7fa898c @ 0x080146e0 (size 320) =====



int sym.DATARMNETa9a7fa898c(void)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = *0x800a000;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    *0x800a000 = *0x800a000 + 1;
    iVar6 = __alloc_skb(0xe94,0xa20,0,0xffffffff);
    iVar2 = *0x800a000;
    if (iVar6 != 0) {
        *0x800a000 = *0x800a000 + 1;
        iVar7 = genlmsg_put(iVar6,0,iVar2,obj.DATARMNETecc643c219,0,1);
        if (iVar7 != 0) {
            iStack_3c = iVar5;
            iVar5 = nla_put(iVar6,2,4,&iStack_3c);
            if (iVar5 == 0) {
                *(iVar7 + -0x14) = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - (iVar7 + -0x14);
                uVar3 = _rmnet_shs_skb_entry;
                uVar1 = *0x8002000;
                if (*0x800218f == '\0') {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8014818);
                    (*pcVar4)();
                }
                *(iVar6 + 0x38) = *0x8002000;
                netlink_broadcast(uVar3,iVar6,0,uVar1,0xa20);
                iVar5 = 0;
                goto code_r0x08014790;
            }
        }
        kfree(iVar6);
    }
    iVar5 = -1;
    *0x800a000 = 0;
code_r0x08014790:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar5;
    }
    __stack_chk_fail(iVar5);
    *extraout_x18 = sym.DATARMNET740f3b34b3;
    sym.DATARMNET90fe3a4b56();
    return -(extraout_x1 == 0);
}




// ===== sym.DATARMNET740f3b34b3 @ 0x08014820 (size 56) =====



int sym.DATARMNET740f3b34b3(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET90fe3a4b56();
    return -(arg1 == 0);
}




// ===== sym.DATARMNET283f08f439 @ 0x08014858 (size 192) =====



ulong sym.DATARMNET283f08f439(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t arg1_00;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        iVar2 = *(*(arg1 + 0x20) + 0x28);
        if (((iVar2 == 0) || (arg1_00 = kmem_cache_alloc_trace(_preempt_schedule_notrace,0xb20,0x50), arg1_00 == 0))
           || (iVar1 = nla_memcpy(arg1_00 + 0x20,iVar2,0x50), iVar1 < 1)) {
            iVar2 = 0x398;
        }
        else {
            if (*(arg1_00 + 0x4f) == '\0') {
                sym.DATARMNETd52d50282d(arg1_00);
            }
            else if (*(arg1_00 + 0x4f) == '\x01') {
                sym.DATARMNET2ac305d296(arg1_00);
            }
            iVar2 = 0x3a1;
        }
        sym.DATARMNET5d4ca1da1c(arg1,iVar2);
        return 0;
    }
    return 0xffffffff;
}




// ===== sym.DATARMNETd81d2866ba @ 0x08014918 (size 476) =====



void sym.DATARMNETd81d2866ba(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_30 = 0;
    if (arg1 != 0) {
        iVar4 = *(*(arg1 + 0x20) + 0x20);
        if ((iVar4 == 0) || (iVar2 = nla_memcpy(&uStack_30,iVar4,8), iVar2 < 1)) {
            sym.DATARMNET5d4ca1da1c(arg1,0x398);
        }
        else {
            iVar2 = sym.DATARMNETf85599b9d8(uStack_30 & 0xffffffff,uStack_30 >> 0x20);
            if (iVar2 == 1) {
                sym.DATARMNET5d4ca1da1c(arg1,0x3a1);
            }
            else {
                sym.DATARMNET5d4ca1da1c(arg1,0x398);
            }
        }
        while( true ) {
            uVar3 = 0;
code_r0x08014a40:
            iVar4 = sp_el0;
            if (*(iVar4 + 0x5e0) == iStack_28) break;
            __stack_chk_fail(uVar3);
            iVar4 = tpidr_el1;
            if ((*(__cpu_online_mask + (*(cpu_number + iVar4) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar4) & 0x3f) & 1)
                != 0) {
                iVar4 = sp_el0;
                piVar1 = iVar4 + 0x10;
                *(iVar4 + 0x10) = *piVar1 + 1;
                __traceiter_rmnet_shs_wq_high(0,9,0x3b);
                iVar5 = *piVar1;
                *(iVar4 + 0x10) = iVar5 + -1;
                if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
                    preempt_schedule_notrace();
                }
            }
        }
        return;
    }
    uVar3 = 0xffffffff;
    goto code_r0x08014a40;
}




// ===== sym.DATARMNET29175fb5fc @ 0x08014b14 (size 1108) =====



ulong sym.DATARMNET29175fb5fc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    uStack_48 = 0;
    if (arg2 == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        iVar3 = *(*(arg2 + 0x20) + 0x18);
        if ((iVar3 == 0) || (iVar1 = nla_memcpy(&stack0xffffffffffffffb8,iVar3,0xc), iVar1 < 1)) {
            sym.DATARMNET5d4ca1da1c(arg2,0x2d0);
        }
        else {
            if (uStack_48._4_4_ - 4 < 4) {
    //switch table (4 cases) at 0x8003250
    //WARNING: Could not recover jumptable at 0x08014b90. Too many branches
    //WARNING: Treating indirect jump as call
                uVar2 = (*(*((uStack_48._4_4_ - 4) * 4 + 0x8003250) + 0x8014b84))();
                return uVar2;
            }
            iVar1 = sym.DATARMNET5f72606f6f(uStack_40,uStack_40._2_2_,uStack_48 & 0xffffffff,uStack_48._4_4_);
            if (iVar1 == 1) {
                sym.DATARMNET5d4ca1da1c(arg2,0x2d7);
            }
            else {
                sym.DATARMNET5d4ca1da1c(arg2,0x2d0);
            }
        }
        uVar2 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8014f28;
    if (*0x800a000 == 0) {
        *0x800a000 = CONCAT44(*0x800a004,1);
    }
    if (extraout_x1 == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = 0;
        *0x800a004 = *(extraout_x1 + 0x28) >> 0x20;
        *0x800a000 = CONCAT44(*0x800a004,*(extraout_x1 + 4));
    }
    return uVar2;
}




// ===== sym.DATARMNETc850634243 @ 0x08014f68 (size 112) =====



ulong sym.DATARMNETc850634243(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x800a000 == 0) {
        *0x800a000 = CONCAT44(*0x800a004,1);
    }
    if (arg2 == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        *0x800a004 = *(arg2 + 0x28) >> 0x20;
        *0x800a000 = CONCAT44(*0x800a004,*(arg2 + 4));
    }
    return uVar1;
}




// ===== fcn.08015038 @ 0x08015038 (size 52) =====



ulong fcn.08015038(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong in_x0;
    int64_t iVar2;
    int64_t *unaff_x19;
    int64_t unaff_x20;
    ulong uStack0000000000000000;
    int64_t iStack0000000000000008;
    
    uStack0000000000000000 = 0;
    iStack0000000000000008 = arg1;
    __traceiter_rmnet_shs_wq_high(in_x0,9);
    iVar2 = *unaff_x19;
    *(unaff_x20 + 0x10) = iVar2 + -1;
    if ((iVar2 + -1 == 0) || (*unaff_x19 == 0)) {
        preempt_schedule_notrace();
    }
    if (iStack0000000000000008 == 0) {
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        *0x800a000 = CONCAT44(*(iStack0000000000000008 + 0x28) >> 0x20,*(iStack0000000000000008 + 4));
    }
    return uVar1;
}




// ===== sym.DATARMNET8d0d510d45 @ 0x0801507c (size 192) =====



int64_t sym.DATARMNET8d0d510d45(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong in_x6;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar *puVar5;
    code *pcVar6;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar5 = &stack0xffffffffffffffe0;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_38 = 0;
    iStack_30 = 0;
    iVar2 = arg1;
    if (arg2 != 0) {
        *(arg2 + 0x68) = 0;
        *(arg2 + 0x70) = 0;
        *(arg2 + 0x58) = 0;
        *(arg2 + 0x60) = 0;
        *(arg2 + 0x48) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x40) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 8) = 0;
        *(arg2 + 0x10) = 0;
        *arg2 = 0;
        iVar2 = ktime_get_real_ts64(&iStack_38);
        *arg2 = arg1;
        *(arg2 + 5) = 0;
        *(arg2 + 7) = 0;
        *(arg2 + 4) = 1;
        *(arg2 + 0x62) = 1;
        *(arg2 + 0x72) = 1;
        *(arg2 + 0x70) = 1;
        *(arg2 + 0x68) = iStack_30 + iStack_38 * 1000000000;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        uVar3 = __stack_chk_fail();
        *extraout_x18 = sym.DATARMNETb5d58adbe7;
        pcVar6 = sym.DATARMNETb5d58adbe7;
        if ((CONCAT44(*0x800a004,*0x800a000) != 0) &&
           (iVar2 = __alloc_skb(0xe94,0xa20,0,0xffffffff), iVar1 = *0x800a000, iVar2 != 0)) {
            *0x800a000 = *0x800a000 + 1;
            iVar4 = genlmsg_put(iVar2,0,iVar1,obj.rmnet_shs_genl_msg_family,0,1,in_x6,in_x7,puVar5,pcVar6);
            if ((iVar4 == 0) || (iVar1 = nla_put(iVar2,2,0x78,uVar3), iVar1 != 0)) {
                kfree(iVar2);
            }
            else {
                *(iVar4 + -0x14) = (*(iVar2 + 0xd0) + *(iVar2 + 200)) - (iVar4 + -0x14);
                iVar1 = netlink_unicast(*(CONCAT44(*0x800a004,*0x800a000) + 0x118),iVar2,*0x800a000,0x40);
                if (-1 < iVar1) {
                    return 0;
                }
            }
        }
        return 0xffffffff;
    }
    return iVar2;
}




// ===== sym.DATARMNETb5d58adbe7 @ 0x0801513c (size 240) =====



ulong sym.DATARMNETb5d58adbe7(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((CONCAT44(*0x800a004,*0x800a000) != 0) &&
       (iVar2 = __alloc_skb(0xe94,0xa20,0,0xffffffff), iVar1 = *0x800a000, iVar2 != 0)) {
        *0x800a000 = *0x800a000 + 1;
        iVar3 = genlmsg_put(iVar2,0,iVar1,obj.rmnet_shs_genl_msg_family,0,1);
        if ((iVar3 == 0) || (iVar1 = nla_put(iVar2,2,0x78,arg1), iVar1 != 0)) {
            kfree(iVar2);
        }
        else {
            *(iVar3 + -0x14) = (*(iVar2 + 0xd0) + *(iVar2 + 200)) - (iVar3 + -0x14);
            iVar1 = netlink_unicast(*(CONCAT44(*0x800a004,*0x800a000) + 0x118),iVar2,*0x800a000,0x40);
            if (-1 < iVar1) {
                return 0;
            }
        }
    }
    return 0xffffffff;
}




// ===== sym.DATARMNETd65d1351b9 @ 0x0801522c (size 60) =====



ulong sym.DATARMNETd65d1351b9(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0xffffffff;
    if ((arg1 != 0) && (*0x800a000 != 0)) {
        uVar1 = 0;
        *0x800a000 = CONCAT44(*(arg1 + 0x28) >> 0x20,*(arg1 + 4));
    }
    return uVar1;
}




// ===== sym.DATARMNET0dbc627e8f @ 0x08015268 (size 120) =====



uint sym.DATARMNET0dbc627e8f(void)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = obj.DATARMNETecc643c219;
    *0x800a000 = 0;
    iVar1 = genl_register_family(obj.DATARMNETecc643c219);
    if (iVar1 == 0) {
        pcVar2 = obj.rmnet_shs_genl_msg_family;
        iVar1 = genl_register_family(obj.rmnet_shs_genl_msg_family);
        uVar3 = 0;
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        uVar3 = 0xffffffff;
    }
    genl_unregister_family(pcVar2);
    return uVar3;
}




// ===== sym.DATARMNETeabd69d1ab @ 0x080152e0 (size 76) =====



ulong sym.DATARMNETeabd69d1ab(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNET5945236cd3(0x2a);
    genl_unregister_family(obj.DATARMNETecc643c219);
    *0x800a000 = 0;
    genl_unregister_family(obj.rmnet_shs_genl_msg_family);
    return 0;
}




// ===== sym.DATARMNET163e93649e @ 0x08015334 (size 96) =====



void sym.DATARMNET163e93649e(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8002844,"DATARMNET163e93649e",*0x8002000);
    sym.DATARMNET0dbc627e8f();
    register_netdevice_notifier(reloc.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt);
    return;
}




// ===== sym.DATARMNETf3298dab6f @ 0x08015430 (size 88) =====



void sym.DATARMNETf3298dab6f(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_netdevice_notifier(reloc.DATARMNETe9173bbe0e.2e8dafd16b80314f18dd40cd8778eef9.cfi_jt);
    sym.DATARMNETeabd69d1ab();
    _printk(0x8002915,"DATARMNETf3298dab6f");
    return;
}

