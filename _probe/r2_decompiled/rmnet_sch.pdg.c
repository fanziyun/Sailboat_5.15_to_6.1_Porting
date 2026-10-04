// decompiled from rmnet_sch by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001c60

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x18a87c1e767a1d08) {
        if (arg1 == -0x76303cc23a471c87) {
            pcVar2 = sym.DATARMNET757a7de682.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x11be38befe00a4b) {
            pcVar2 = sym.DATARMNET9593ab9587.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001c20;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x60e70b7cba5931da) {
        if (arg1 == 0x18a87c1e767a1d08) {
            pcVar2 = sym.DATARMNET3a797cc4e9.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x4afd52e54c180b6e) goto code_r0x08001c20;
            pcVar2 = sym.DATARMNET6647342968.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x60e70b7cba5931da) {
            if ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001c20;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001c20;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001c20:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001c74);
    (*pcVar1)();
}


// ===== sym.DATARMNET3a797cc4e9.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.DATARMNET3a797cc4e9.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                (uchar param_1 [16],int64_t *param_2,int64_t param_3,int64_t *param_4)

{
    int *piVar1;
    uint8_t uVar2;
    code cVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint32_t uVar7;
    ulong *puVar8;
    int64_t *piVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *in_x18;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = param_3 + 0x140;
    iVar13 = param_2[5];
    cVar3 = obj.DATARMNET93bdeed8cb[*(param_2 + 0x8c) & 0xf];
    uVar16 = cVar3;
    if (*(**(param_3 + 0x40) + 0x3d8) <= *(param_3 + 0xa8)) {
        uVar7 = sym.DATARMNETdaae0b9ea8(iVar11,param_1,param_4);
        if ((3 < uVar7) || (uVar7 == cVar3)) {
            *param_2 = *param_4;
            *param_4 = param_2;
            *(param_3 + 0xcc) = *(param_3 + 0xcc) + 1;
            return 1;
        }
        if (3 < uVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x5512,0x80013e8);
            (*pcVar6)();
        }
        piVar14 = iVar11 + uVar7 * 0x28;
        piVar9 = *piVar14;
        if (piVar9 != NULL) {
            iVar15 = *piVar9;
            iVar12 = iVar11 + uVar7 * 0x28;
            *piVar14 = iVar15;
            *(iVar12 + 0x10) = *(iVar12 + 0x10) + -1;
            if (iVar15 == 0) {
                *(iVar11 + uVar7 * 0x28 + 8) = 0;
            }
            *piVar9 = 0;
            *(param_3 + 200) = *(param_3 + 200) - piVar9[5];
            *(param_3 + 0xa8) = *(param_3 + 0xa8) + -1;
            *piVar9 = *param_4;
            *param_4 = piVar9;
            *(param_3 + 0xcc) = *(param_3 + 0xcc) + 1;
        }
    }
    puVar8 = iVar11 + uVar16 * 0x28 + 8;
    puVar10 = *puVar8;
    if (puVar10 == NULL) {
        *puVar8 = param_2;
        puVar8 = iVar11 + uVar16 * 0x28;
    }
    else {
        *param_2 = 0;
        *puVar10 = param_2;
    }
    uVar2 = *(param_3 + 0x10);
    *puVar8 = param_2;
    iVar11 = iVar11 + uVar16 * 0x28;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) + 1;
    if ((uVar2 >> 5 & 1) == 0) {
        *(param_3 + 200) = *(param_3 + 200) + iVar13;
        *(param_3 + 0xa8) = *(param_3 + 0xa8) + 1;
    }
    else {
        iVar11 = sp_el0;
        piVar9 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar9 + 1;
        iVar12 = tpidr_el1;
        piVar1 = iVar12 + *(param_3 + 0x58);
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar12 = *piVar9;
        *(iVar11 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar9 == 0)) {
            preempt_schedule_notrace();
        }
        piVar9 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar9 + 1;
        iVar12 = tpidr_el1;
        piVar1 = *(param_3 + 0x58) + iVar12 + 4;
        do {
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = *piVar1 + iVar13;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        iVar13 = *piVar9;
        *(iVar11 + 0x10) = iVar13 + -1;
        if ((iVar13 + -1 == 0) || (*piVar9 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_qdisc(obj.DATARMNET9afaec21de);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001a7,0x8000191);
    register_qdisc(obj.DATARMNET9afaec21de);
    return;
}


// ===== sym.DATARMNET9593ab9587.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

void sym.DATARMNET9593ab9587.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree_skb_list(*(param_1 + 0x140));
    *(param_1 + 0x150) = 0;
    *(param_1 + 0x140) = 0;
    *(param_1 + 0x148) = 0;
    *(param_1 + 0x158) = 0x4000000000008;
    uVar1 = *(**(param_1 + 0x40) + 0x3d8) / 10;
    *(param_1 + 0x160) = uVar1 << 2;
    *(param_1 + 0x164) = uVar1 << 3;
    kfree_skb_list(*(param_1 + 0x168));
    *(param_1 + 0x178) = 0;
    *(param_1 + 0x168) = 0;
    *(param_1 + 0x170) = 0;
    *(param_1 + 0x180) = 0x2000000000006;
    uVar1 = *(**(param_1 + 0x40) + 0x3d8) / 10;
    *(param_1 + 0x188) = uVar1 * 3;
    *(param_1 + 0x18c) = uVar1 * 6;
    kfree_skb_list(*(param_1 + 400));
    *(param_1 + 0x1a0) = 0;
    *(param_1 + 400) = 0;
    *(param_1 + 0x198) = 0;
    *(param_1 + 0x1a8) = 0x1000000000004;
    uVar1 = *(**(param_1 + 0x40) + 0x3d8) / 10;
    *(param_1 + 0x1b0) = uVar1 << 1;
    *(param_1 + 0x1b4) = uVar1 << 2;
    kfree_skb_list(*(param_1 + 0x1b8));
    *(param_1 + 0x1c8) = 0;
    *(param_1 + 0x1b8) = 0;
    *(param_1 + 0x1c0) = 0;
    *(param_1 + 0x1d0) = 0x800000000002;
    uVar1 = *(**(param_1 + 0x40) + 0x3d8) / 10;
    *(param_1 + 0x1d8) = uVar1;
    *(param_1 + 0x1dc) = uVar1 << 1;
    return;
}


// ===== sym.DATARMNET757a7de682.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.DATARMNET757a7de682.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    
    piVar2 = *(param_1 + 0x40);
    *(param_1 + 0x140) = 0;
    *(param_1 + 0x148) = 0;
    *(param_1 + 0x150) = 0;
    *(param_1 + 0x158) = 0x4000000000008;
    uVar1 = *(*piVar2 + 0x3d8);
    *(param_1 + 0x168) = 0;
    *(param_1 + 0x170) = 0;
    *(param_1 + 0x178) = 0;
    *(param_1 + 0x180) = 0x2000000000006;
    uVar1 = uVar1 / 10;
    *(param_1 + 0x160) = uVar1 << 2;
    *(param_1 + 0x164) = uVar1 << 3;
    uVar1 = *(*piVar2 + 0x3d8);
    *(param_1 + 400) = 0;
    *(param_1 + 0x198) = 0;
    *(param_1 + 0x1a0) = 0;
    *(param_1 + 0x1a8) = 0x1000000000004;
    uVar1 = uVar1 / 10;
    *(param_1 + 0x188) = uVar1 * 3;
    *(param_1 + 0x18c) = uVar1 * 6;
    uVar1 = *(*piVar2 + 0x3d8);
    *(param_1 + 0x1d0) = 0x800000000002;
    *(param_1 + 0x1b8) = 0;
    *(param_1 + 0x1c0) = 0;
    *(param_1 + 0x1c8) = 0;
    uVar1 = uVar1 / 10;
    *(param_1 + 0x1b0) = uVar1 << 1;
    *(param_1 + 0x1b4) = uVar1 << 2;
    uVar1 = *(*piVar2 + 0x3d8);
    *(param_1 + 0x10) = *(param_1 + 0x10) | 4;
    uVar1 = uVar1 / 10;
    *(param_1 + 0x1d8) = uVar1;
    *(param_1 + 0x1dc) = uVar1 << 1;
    return 0;
}


// ===== sym.DATARMNET5842e6aac7.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.DATARMNET5842e6aac7.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    if (*(param_1 + 0x150) == 0) {
        uVar3 = 4;
        uVar2 = 1;
code_r0x080017b8:
        iVar1 = *(param_1 + 0x178);
    }
    else {
        if (0 < *(param_1 + 0x158)) {
            uVar2 = 0;
            uVar3 = 0;
            if (0 < *(param_1 + 0x15c)) goto code_r0x0800189c;
            goto code_r0x080017b8;
        }
        uVar2 = 0;
        uVar3 = 0;
        iVar1 = *(param_1 + 0x178);
    }
    if (((iVar1 == 0) || (uVar3 = uVar2, *(param_1 + 0x180) < 1)) || (*(param_1 + 0x184) < 1)) {
        if (*(param_1 + 0x1a0) != 0) {
            if ((0 < *(param_1 + 0x1a8)) && (0 < *(param_1 + 0x1ac))) {
                uVar3 = 2;
                goto code_r0x0800189c;
            }
            if (1 < uVar3) {
                uVar3 = 2;
            }
        }
        if (*(param_1 + 0x1c8) != 0) {
            if ((0 < *(param_1 + 0x1d0)) && (0 < *(param_1 + 0x1d4))) {
                uVar3 = 3;
                goto code_r0x0800189c;
            }
            if (2 < uVar3) {
                uVar3 = 3;
            }
        }
        *(param_1 + 0x158) = 0x4000000000008;
        *(param_1 + 0x180) = 0x2000000000006;
        *(param_1 + 0x1a8) = 0x1000000000004;
        *(param_1 + 0x1d0) = 0x800000000002;
        if (3 < uVar3) {
            return 0;
        }
    }
    else {
        uVar3 = 1;
    }
code_r0x0800189c:
    return *(param_1 + 0x140 + uVar3 * 0x28);
}


// ===== sym.DATARMNET11bbc6360d.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

int64_t * sym.DATARMNET11bbc6360d.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = param_1 + 0x140;
    if (*(param_1 + 0x150) == 0) {
        uVar10 = 4;
        uVar9 = 1;
code_r0x0800147c:
        iVar2 = *(param_1 + 0x178);
    }
    else {
        if (0 < *(param_1 + 0x158)) {
            uVar9 = 0;
            uVar10 = 0;
            if (0 < *(param_1 + 0x15c)) goto code_r0x08001560;
            goto code_r0x0800147c;
        }
        uVar9 = 0;
        uVar10 = 0;
        iVar2 = *(param_1 + 0x178);
    }
    if (((iVar2 == 0) || (uVar10 = uVar9, *(param_1 + 0x180) < 1)) || (*(param_1 + 0x184) < 1)) {
        if (*(param_1 + 0x1a0) != 0) {
            if ((0 < *(param_1 + 0x1a8)) && (0 < *(param_1 + 0x1ac))) {
                uVar10 = 2;
                goto code_r0x08001560;
            }
            if (1 < uVar10) {
                uVar10 = 2;
            }
        }
        if (*(param_1 + 0x1c8) != 0) {
            if ((0 < *(param_1 + 0x1d0)) && (0 < *(param_1 + 0x1d4))) {
                uVar10 = 3;
                goto code_r0x08001560;
            }
            if (2 < uVar10) {
                uVar10 = 3;
            }
        }
        *(param_1 + 0x158) = 0x4000000000008;
        *(param_1 + 0x180) = 0x2000000000006;
        *(param_1 + 0x1a8) = 0x1000000000004;
        *(param_1 + 0x1d0) = 0x800000000002;
        if (3 < uVar10) {
            return NULL;
        }
    }
    else {
        uVar10 = 1;
    }
code_r0x08001560:
    piVar11 = iVar6 + uVar10 * 0x28;
    piVar14 = *piVar11;
    if (piVar14 != NULL) {
        uVar8 = uVar10;
        iVar13 = *piVar14;
        iVar12 = iVar6 + uVar8 * 0x28;
        *piVar11 = iVar13;
        *(iVar12 + 0x10) = *(iVar12 + 0x10) + -1;
        if (iVar13 == 0) {
            *(iVar6 + uVar8 * 0x28 + 8) = 0;
        }
        *piVar14 = 0;
        iVar6 = iVar6 + uVar8 * 0x28;
        *(iVar6 + 0x18) = *(iVar6 + 0x18) + -1;
        uVar3 = *(param_1 + 0x10);
        *(iVar6 + 0x1c) = *(iVar6 + 0x1c) - piVar14[5];
        if ((uVar3 >> 5 & 1) == 0) {
            *(param_1 + 200) = *(param_1 + 200) - piVar14[5];
            iVar6 = piVar14[0x1a] + *(piVar14 + 0xcc);
            if (*(iVar6 + 4) == 0) {
                uVar8 = 1;
            }
            else {
                uVar8 = *(iVar6 + 6);
            }
            *(param_1 + 0xb0) = *(param_1 + 0xb0) + *(piVar14 + 5);
            *(param_1 + 0xb8) = *(param_1 + 0xb8) + uVar8;
            *(param_1 + 0xa8) = *(param_1 + 0xa8) + -1;
        }
        else {
            iVar6 = sp_el0;
            piVar11 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar11 + 1;
            iVar12 = tpidr_el1;
            iVar13 = piVar14[5];
            piVar1 = *(param_1 + 0x58) + iVar12 + 4;
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 - iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar12 = *piVar11;
            *(iVar6 + 0x10) = iVar12 + -1;
            if ((iVar12 + -1 == 0) || (*piVar11 == 0)) {
                preempt_schedule_notrace();
            }
            iVar7 = *(param_1 + 0x50);
            iVar13 = tpidr_el1;
            iVar12 = piVar14[0x1a] + *(piVar14 + 0xcc);
            if (*(iVar12 + 4) == 0) {
                uVar8 = 1;
            }
            else {
                uVar8 = *(iVar12 + 6);
            }
            *(iVar7 + iVar13) = *(iVar7 + iVar13) + *(piVar14 + 5);
            piVar11 = iVar6 + 0x10;
            *(iVar13 + iVar7 + 8) = *(iVar13 + iVar7 + 8) + uVar8;
            *(iVar6 + 0x10) = *piVar11 + 1;
            iVar12 = tpidr_el1;
            piVar1 = iVar12 + *(param_1 + 0x58);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar12 = *piVar11;
            *(iVar6 + 0x10) = iVar12 + -1;
            if ((iVar12 + -1 == 0) || (*piVar11 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return piVar14;
}


// ===== sym.DATARMNET6647342968.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.DATARMNET6647342968.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = param_2 / 10 << 2;
    uVar2 = param_2 / 10;
    *(param_1 + 0x1d8) = uVar2;
    *(param_1 + 0x164) = param_2 / 10 << 3;
    *(param_1 + 0x160) = iVar1;
    *(param_1 + 0x1b4) = iVar1;
    *(param_1 + 0x1b0) = uVar2 * 2;
    *(param_1 + 0x188) = uVar2 * 3;
    *(param_1 + 0x18c) = uVar2 * 6;
    *(param_1 + 0x1dc) = uVar2 * 2;
    return 0;
}


// ===== sym.DATARMNET3a797cc4e9 @ 0x080011a0 (size 584) =====

ulong sym.DATARMNET3a797cc4e9(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    uint8_t uVar3;
    code cVar4;
    char cVar5;
    bool bVar6;
    code *pcVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar11 = arg2 + 0x140;
    iVar2 = *(arg1 + 0x28);
    cVar4 = obj.DATARMNET93bdeed8cb[*(arg1 + 0x8c) & 0xf];
    uVar14 = cVar4;
    if (*(**(arg2 + 0x40) + 0x3d8) <= *(arg2 + 0xa8)) {
        uVar8 = sym.DATARMNETdaae0b9ea8(iVar11,in_q0,arg3);
        if ((3 < uVar8) || (uVar8 == cVar4)) {
            *arg1 = *arg3;
            *arg3 = arg1;
            *(arg2 + 0xcc) = *(arg2 + 0xcc) + 1;
            return 1;
        }
        if (3 < uVar8) {
    //WARNING: Does not return
            pcVar7 = SoftwareBreakpoint(0x5512,0x80013e8);
            (*pcVar7)();
        }
        piVar10 = iVar11 + uVar8 * 0x28;
        piVar9 = *piVar10;
        if (piVar9 != NULL) {
            iVar13 = *piVar9;
            iVar12 = iVar11 + uVar8 * 0x28;
            *piVar10 = iVar13;
            *(iVar12 + 0x10) = *(iVar12 + 0x10) + -1;
            if (iVar13 == 0) {
                *(iVar11 + uVar8 * 0x28 + 8) = 0;
            }
            *piVar9 = 0;
            *(arg2 + 200) = *(arg2 + 200) - piVar9[5];
            *(arg2 + 0xa8) = *(arg2 + 0xa8) + -1;
            *piVar9 = *arg3;
            *arg3 = piVar9;
            *(arg2 + 0xcc) = *(arg2 + 0xcc) + 1;
        }
    }
    piVar9 = iVar11 + uVar14 * 0x28 + 8;
    piVar10 = *piVar9;
    if (piVar10 == NULL) {
        *piVar9 = arg1;
        piVar9 = iVar11 + uVar14 * 0x28;
    }
    else {
        *arg1 = 0;
        *piVar10 = arg1;
    }
    uVar3 = *(arg2 + 0x10);
    *piVar9 = arg1;
    iVar11 = iVar11 + uVar14 * 0x28;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) + 1;
    if ((uVar3 >> 5 & 1) == 0) {
        *(arg2 + 200) = *(arg2 + 200) + iVar2;
        *(arg2 + 0xa8) = *(arg2 + 0xa8) + 1;
    }
    else {
        iVar11 = sp_el0;
        piVar9 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar9 + 1;
        iVar12 = tpidr_el1;
        piVar1 = iVar12 + *(arg2 + 0x58);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar12 = *piVar9;
        *(iVar11 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar9 == 0)) {
            preempt_schedule_notrace();
        }
        piVar9 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar9 + 1;
        iVar12 = tpidr_el1;
        piVar1 = *(arg2 + 0x58) + iVar12 + 4;
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = *piVar1 + iVar2;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        iVar12 = *piVar9;
        *(iVar11 + 0x10) = iVar12 + -1;
        if ((iVar12 + -1 == 0) || (*piVar9 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return 0;
}


// ===== sym.DATARMNET11bbc6360d @ 0x08001428 (size 784) =====

int64_t * sym.DATARMNET11bbc6360d(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg1 + 0x140;
    if (*(arg1 + 0x150) == 0) {
        uVar10 = 4;
        uVar9 = 1;
code_r0x0800147c:
        iVar2 = *(arg1 + 0x178);
    }
    else {
        if (0 < *(arg1 + 0x158)) {
            uVar9 = 0;
            uVar10 = 0;
            if (0 < *(arg1 + 0x15c)) goto code_r0x08001560;
            goto code_r0x0800147c;
        }
        uVar9 = 0;
        uVar10 = 0;
        iVar2 = *(arg1 + 0x178);
    }
    if (((iVar2 == 0) || (uVar10 = uVar9, *(arg1 + 0x180) < 1)) || (*(arg1 + 0x184) < 1)) {
        if (*(arg1 + 0x1a0) != 0) {
            if ((0 < *(arg1 + 0x1a8)) && (0 < *(arg1 + 0x1ac))) {
                uVar10 = 2;
                goto code_r0x08001560;
            }
            if (1 < uVar10) {
                uVar10 = 2;
            }
        }
        if (*(arg1 + 0x1c8) != 0) {
            if ((0 < *(arg1 + 0x1d0)) && (0 < *(arg1 + 0x1d4))) {
                uVar10 = 3;
                goto code_r0x08001560;
            }
            if (2 < uVar10) {
                uVar10 = 3;
            }
        }
        *(arg1 + 0x158) = 0x4000000000008;
        *(arg1 + 0x180) = 0x2000000000006;
        *(arg1 + 0x1a8) = 0x1000000000004;
        *(arg1 + 0x1d0) = 0x800000000002;
        if (3 < uVar10) {
            return NULL;
        }
    }
    else {
        uVar10 = 1;
    }
code_r0x08001560:
    piVar11 = iVar6 + uVar10 * 0x28;
    piVar14 = *piVar11;
    if (piVar14 != NULL) {
        uVar8 = uVar10;
        iVar13 = *piVar14;
        iVar12 = iVar6 + uVar8 * 0x28;
        *piVar11 = iVar13;
        *(iVar12 + 0x10) = *(iVar12 + 0x10) + -1;
        if (iVar13 == 0) {
            *(iVar6 + uVar8 * 0x28 + 8) = 0;
        }
        *piVar14 = 0;
        iVar6 = iVar6 + uVar8 * 0x28;
        *(iVar6 + 0x18) = *(iVar6 + 0x18) + -1;
        uVar3 = *(arg1 + 0x10);
        *(iVar6 + 0x1c) = *(iVar6 + 0x1c) - piVar14[5];
        if ((uVar3 >> 5 & 1) == 0) {
            *(arg1 + 200) = *(arg1 + 200) - piVar14[5];
            iVar6 = piVar14[0x1a] + *(piVar14 + 0xcc);
            if (*(iVar6 + 4) == 0) {
                uVar8 = 1;
            }
            else {
                uVar8 = *(iVar6 + 6);
            }
            *(arg1 + 0xb0) = *(arg1 + 0xb0) + *(piVar14 + 5);
            *(arg1 + 0xb8) = *(arg1 + 0xb8) + uVar8;
            *(arg1 + 0xa8) = *(arg1 + 0xa8) + -1;
        }
        else {
            iVar6 = sp_el0;
            piVar11 = iVar6 + 0x10;
            *(iVar6 + 0x10) = *piVar11 + 1;
            iVar12 = tpidr_el1;
            iVar13 = piVar14[5];
            piVar1 = *(arg1 + 0x58) + iVar12 + 4;
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 - iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar12 = *piVar11;
            *(iVar6 + 0x10) = iVar12 + -1;
            if ((iVar12 + -1 == 0) || (*piVar11 == 0)) {
                preempt_schedule_notrace();
            }
            iVar7 = *(arg1 + 0x50);
            iVar13 = tpidr_el1;
            iVar12 = piVar14[0x1a] + *(piVar14 + 0xcc);
            if (*(iVar12 + 4) == 0) {
                uVar8 = 1;
            }
            else {
                uVar8 = *(iVar12 + 6);
            }
            *(iVar7 + iVar13) = *(iVar7 + iVar13) + *(piVar14 + 5);
            piVar11 = iVar6 + 0x10;
            *(iVar13 + iVar7 + 8) = *(iVar13 + iVar7 + 8) + uVar8;
            *(iVar6 + 0x10) = *piVar11 + 1;
            iVar12 = tpidr_el1;
            piVar1 = iVar12 + *(arg1 + 0x58);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                    *piVar1 = *piVar1 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar12 = *piVar11;
            *(iVar6 + 0x10) = iVar12 + -1;
            if ((iVar12 + -1 == 0) || (*piVar11 == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return piVar14;
}


// ===== sym.DATARMNET5842e6aac7 @ 0x0800177c (size 320) =====

ulong sym.DATARMNET5842e6aac7(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    if (*(arg1 + 0x150) == 0) {
        uVar3 = 4;
        uVar2 = 1;
code_r0x080017b8:
        iVar1 = *(arg1 + 0x178);
    }
    else {
        if (0 < *(arg1 + 0x158)) {
            uVar2 = 0;
            uVar3 = 0;
            if (0 < *(arg1 + 0x15c)) goto code_r0x0800189c;
            goto code_r0x080017b8;
        }
        uVar2 = 0;
        uVar3 = 0;
        iVar1 = *(arg1 + 0x178);
    }
    if (((iVar1 == 0) || (uVar3 = uVar2, *(arg1 + 0x180) < 1)) || (*(arg1 + 0x184) < 1)) {
        if (*(arg1 + 0x1a0) != 0) {
            if ((0 < *(arg1 + 0x1a8)) && (0 < *(arg1 + 0x1ac))) {
                uVar3 = 2;
                goto code_r0x0800189c;
            }
            if (1 < uVar3) {
                uVar3 = 2;
            }
        }
        if (*(arg1 + 0x1c8) != 0) {
            if ((0 < *(arg1 + 0x1d0)) && (0 < *(arg1 + 0x1d4))) {
                uVar3 = 3;
                goto code_r0x0800189c;
            }
            if (2 < uVar3) {
                uVar3 = 3;
            }
        }
        *(arg1 + 0x158) = 0x4000000000008;
        *(arg1 + 0x180) = 0x2000000000006;
        *(arg1 + 0x1a8) = 0x1000000000004;
        *(arg1 + 0x1d0) = 0x800000000002;
        if (3 < uVar3) {
            return 0;
        }
    }
    else {
        uVar3 = 1;
    }
code_r0x0800189c:
    return *(arg1 + 0x140 + uVar3 * 0x28);
}


// ===== sym.DATARMNET757a7de682 @ 0x080018bc (size 252) =====

ulong sym.DATARMNET757a7de682(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    
    piVar2 = *(arg1 + 0x40);
    *(arg1 + 0x140) = 0;
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x158) = 0x4000000000008;
    uVar1 = *(*piVar2 + 0x3d8);
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x170) = 0;
    *(arg1 + 0x178) = 0;
    *(arg1 + 0x180) = 0x2000000000006;
    uVar1 = uVar1 / 10;
    *(arg1 + 0x160) = uVar1 << 2;
    *(arg1 + 0x164) = uVar1 << 3;
    uVar1 = *(*piVar2 + 0x3d8);
    *(arg1 + 400) = 0;
    *(arg1 + 0x198) = 0;
    *(arg1 + 0x1a0) = 0;
    *(arg1 + 0x1a8) = 0x1000000000004;
    uVar1 = uVar1 / 10;
    *(arg1 + 0x188) = uVar1 * 3;
    *(arg1 + 0x18c) = uVar1 * 6;
    uVar1 = *(*piVar2 + 0x3d8);
    *(arg1 + 0x1d0) = 0x800000000002;
    *(arg1 + 0x1b8) = 0;
    *(arg1 + 0x1c0) = 0;
    *(arg1 + 0x1c8) = 0;
    uVar1 = uVar1 / 10;
    *(arg1 + 0x1b0) = uVar1 << 1;
    *(arg1 + 0x1b4) = uVar1 << 2;
    uVar1 = *(*piVar2 + 0x3d8);
    *(arg1 + 0x10) = *(arg1 + 0x10) | 4;
    uVar1 = uVar1 / 10;
    *(arg1 + 0x1d8) = uVar1;
    *(arg1 + 0x1dc) = uVar1 << 1;
    return 0;
}


// ===== sym.DATARMNET9593ab9587 @ 0x080019b8 (size 316) =====

void sym.DATARMNET9593ab9587(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree_skb_list(*(arg1 + 0x140));
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x140) = 0;
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x158) = 0x4000000000008;
    uVar1 = *(**(arg1 + 0x40) + 0x3d8) / 10;
    *(arg1 + 0x160) = uVar1 << 2;
    *(arg1 + 0x164) = uVar1 << 3;
    kfree_skb_list(*(arg1 + 0x168));
    *(arg1 + 0x178) = 0;
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x170) = 0;
    *(arg1 + 0x180) = 0x2000000000006;
    uVar1 = *(**(arg1 + 0x40) + 0x3d8) / 10;
    *(arg1 + 0x188) = uVar1 * 3;
    *(arg1 + 0x18c) = uVar1 * 6;
    kfree_skb_list(*(arg1 + 400));
    *(arg1 + 0x1a0) = 0;
    *(arg1 + 400) = 0;
    *(arg1 + 0x198) = 0;
    *(arg1 + 0x1a8) = 0x1000000000004;
    uVar1 = *(**(arg1 + 0x40) + 0x3d8) / 10;
    *(arg1 + 0x1b0) = uVar1 << 1;
    *(arg1 + 0x1b4) = uVar1 << 2;
    kfree_skb_list(*(arg1 + 0x1b8));
    *(arg1 + 0x1c8) = 0;
    *(arg1 + 0x1b8) = 0;
    *(arg1 + 0x1c0) = 0;
    *(arg1 + 0x1d0) = 0x800000000002;
    uVar1 = *(**(arg1 + 0x40) + 0x3d8) / 10;
    *(arg1 + 0x1d8) = uVar1;
    *(arg1 + 0x1dc) = uVar1 << 1;
    return;
}


// ===== sym.DATARMNET6647342968 @ 0x08001af4 (size 88) =====

ulong sym.DATARMNET6647342968(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = (arg2 & 0xffffffffU) / 10;
    iVar1 = iVar2 << 2;
    iVar3 = (arg2 & 0xffffffffU) / 10;
    *(arg1 + 0x1d8) = iVar3;
    *(arg1 + 0x164) = iVar2 << 3;
    *(arg1 + 0x160) = iVar1;
    *(arg1 + 0x1b4) = iVar1;
    *(arg1 + 0x1b0) = iVar3 * 2;
    *(arg1 + 0x188) = iVar3 * 3;
    *(arg1 + 0x18c) = iVar3 * 6;
    *(arg1 + 0x1dc) = iVar3 * 2;
    return 0;
}


// ===== sym.DATARMNETdaae0b9ea8 @ 0x08001b4c (size 208) =====

uint32_t sym.DATARMNETdaae0b9ea8(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    
    uVar4 = *(arg1 + 0x10);
    uVar5 = *(arg1 + 0x38);
    iVar9 = uVar4 - *(arg1 + 0x24);
    bVar1 = iVar9 < -1;
    if (iVar9 < -1) {
        iVar9 = -1;
    }
    uVar8 = bVar1 << 2;
    if (uVar4 <= *(arg1 + 0x24)) {
        iVar9 = -1;
        uVar8 = 4;
    }
    iVar10 = uVar5 - *(arg1 + 0x4c);
    uVar6 = *(arg1 + 0x60);
    iVar2 = iVar9;
    uVar3 = uVar8;
    if (iVar9 <= iVar10) {
        uVar3 = 1;
        iVar2 = iVar10;
    }
    if (uVar5 <= *(arg1 + 0x4c)) {
        iVar2 = iVar9;
        uVar3 = uVar8;
    }
    uVar7 = *(arg1 + 0x88);
    iVar10 = uVar6 - *(arg1 + 0x74);
    iVar9 = iVar2;
    uVar8 = uVar3;
    if (iVar2 <= iVar10) {
        uVar8 = 2;
        iVar9 = iVar10;
    }
    if (uVar6 <= *(arg1 + 0x74)) {
        uVar8 = uVar3;
        iVar9 = iVar2;
    }
    uVar3 = uVar8;
    if (iVar9 <= uVar7 - *(arg1 + 0x9c)) {
        uVar3 = 3;
    }
    if (uVar7 <= *(arg1 + 0x9c)) {
        uVar3 = uVar8;
    }
    uVar4 = (uVar4 <= *(arg1 + 0x20)) << 2;
    if (*(arg1 + 0x48) < uVar5) {
        uVar4 = 1;
    }
    uVar5 = 2;
    if (uVar6 <= *(arg1 + 0x70)) {
        uVar5 = uVar4;
    }
    uVar4 = 3;
    if (uVar7 <= *(arg1 + 0x98)) {
        uVar4 = uVar5;
    }
    if (3 < uVar3) {
        uVar3 = uVar4;
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x08001c1c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001c60

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
    //switch table (4 cases) at 0x8000158
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001c74);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001c84 (size 64) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001a7,0x8000191);
    register_qdisc(obj.DATARMNET9afaec21de);
    return;
}


// ===== sym.cleanup_module @ 0x08001cc4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_qdisc(obj.DATARMNET9afaec21de);
    return;
}

