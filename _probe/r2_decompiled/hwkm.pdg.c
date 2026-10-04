// decompiled from hwkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 100) =====

//WARNING: Switch with 1 destination removed at 0x08001628

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0xaf9b7ae47484fae2) {
        uVar2 = 0x8001070;
    }
    else {
        if (arg1 != 0xdd09be822ac814dd) goto code_r0x080015e8;
        uVar2 = 0x8001078;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080015e8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800163c);
    (*pcVar1)();
}


// ===== sym.qti_hwkm_handle_cmd.cfi_jt @ 0x08001070 (size 8) =====

int sym.qti_hwkm_handle_cmd.cfi_jt(int *param_1)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong uVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
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
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    if (*param_1 == 7) {
        uStack_30 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        if (param_1[1] != 0x400000) {
            _printk(0x800026e);
            goto code_r0x0800119c;
        }
        iVar3 = tme_hwkm_master_broadcast_transportkey(&uStack_40);
        if (iVar3 == -0x13) {
code_r0x080010e4:
            uVar4 = 0;
            do {
                usleep_range_state(8000,12000,2);
                iVar3 = tme_hwkm_master_broadcast_transportkey(&uStack_40);
                if (iVar3 == 0) goto code_r0x080011a0;
            } while ((iVar3 == -0x13 || iVar3 == -0xb) && (bVar1 = uVar4 < 999, uVar4 = uVar4 + 1, bVar1));
code_r0x08001130:
            _printk(0x800008c,iVar3);
            _printk(0x800011a);
            _printk(0x8000298,uStack_40 & 0xffffffff);
            _printk(0x80001db,uStack_40._4_4_);
            _printk(0x80000b4,uStack_38 & 0xffffffff);
            _printk(0x8000071,uStack_38._4_4_);
        }
        else if (iVar3 != 0) {
            if (iVar3 == -0xb) goto code_r0x080010e4;
            goto code_r0x08001130;
        }
    }
    else {
code_r0x0800119c:
        iVar3 = -0x16;
    }
code_r0x080011a0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qti_hwkm_init;
    pcStack_68 = sym.qti_hwkm_init;
    iVar2 = sp_el0;
    iStack_78 = *(iVar2 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffe0;
    if ((piVar5[1] == 0) || (*piVar5 == 0)) {
        _printk(0x80001b8,"qti_hwkm_init");
        iVar3 = -0x16;
        goto code_r0x08001490;
    }
    uVar4 = sym.readl_relaxed(*piVar5);
    sym.writel_relaxed(uVar4 & 0xfffffffe,*piVar5);
    DataSynchronizationBarrier(3,2,0);
    uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
    if ((uVar4 >> 9 & 1) == 0) {
        uVar7 = 0x8000172;
code_r0x08001450:
        _printk(uVar7,"qti_hwkm_check_bist_status");
        _printk(0x800020d,"qti_hwkm_ice_init_sequence",0xffffffea);
        uVar7 = 0x80000cf;
    }
    else {
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 7 & 1) == 0) {
            uVar7 = 0x80002af;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 2 & 1) == 0) {
            uVar7 = 0x800013e;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 1 & 1) == 0) {
            uVar7 = 0x80000f4;
            goto code_r0x08001450;
        }
        uVar6 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar6 & 1) == 0) {
            uVar7 = 0x80002d6;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1000);
        sym.writel_relaxed(uVar4 & 0xfffffffe,piVar5[1] + 0x1000);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5000);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5004);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5008);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x500c);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5010);
        DataSynchronizationBarrier(3,2,0);
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x2008);
        sym.writel_relaxed(uVar4 | 8,piVar5[1] + 0x2008);
        DataSynchronizationBarrier(3,2,0);
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
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x101c);
        sym.writel_relaxed(uVar4 & 0xfffffeff,piVar5[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0x18c,piVar5[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        uStack_168 = 0x40000000000007;
        iVar3 = sym.qti_hwkm_handle_cmd(&uStack_168);
        if (iVar3 == 0) {
            sym.readl_relaxed(piVar5[1] + 0x1020);
            uVar4 = sym.readl_relaxed(piVar5[1] + 0x101c);
            sym.writel_relaxed(uVar4 & 0xfffffeff,piVar5[1] + 0x101c);
            DataSynchronizationBarrier(3,2,0);
            iVar3 = 0;
            DataSynchronizationBarrier(3,2,0);
            goto code_r0x08001490;
        }
        _printk(0x800018e,"qti_hwkm_set_tpkey",iVar3);
        uVar7 = 0x8000234;
    }
    iVar3 = -0x16;
    _printk(uVar7,"qti_hwkm_init",0xffffffea);
code_r0x08001490:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    piVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.readl_relaxed;
    log_read_mmio(0x20,piVar8,0x8001500);
    iVar3 = *piVar8;
    log_post_read_mmio(iVar3,0x20,piVar8,0x8001534);
    return iVar3;
}


// ===== sym.qti_hwkm_init.cfi_jt @ 0x08001078 (size 8) =====

uint sym.qti_hwkm_init.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar7;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if ((param_1[1] == 0) || (*param_1 == 0)) {
        _printk(0x80001b8,"qti_hwkm_init");
        uVar7 = 0xffffffea;
        goto code_r0x08001490;
    }
    uVar2 = sym.readl_relaxed(*param_1);
    sym.writel_relaxed(uVar2 & 0xfffffffe,*param_1);
    DataSynchronizationBarrier(3,2,0);
    uVar2 = sym.readl_relaxed(param_1[1] + 0x1004);
    if ((uVar2 >> 9 & 1) == 0) {
        uVar5 = 0x8000172;
code_r0x08001450:
        _printk(uVar5,"qti_hwkm_check_bist_status");
        _printk(0x800020d,"qti_hwkm_ice_init_sequence",0xffffffea);
        uVar5 = 0x80000cf;
    }
    else {
        uVar2 = sym.readl_relaxed(param_1[1] + 0x1004);
        if ((uVar2 >> 7 & 1) == 0) {
            uVar5 = 0x80002af;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(param_1[1] + 0x1004);
        if ((uVar2 >> 2 & 1) == 0) {
            uVar5 = 0x800013e;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(param_1[1] + 0x1004);
        if ((uVar2 >> 1 & 1) == 0) {
            uVar5 = 0x80000f4;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(param_1[1] + 0x1004);
        if ((uVar4 & 1) == 0) {
            uVar5 = 0x80002d6;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(param_1[1] + 0x1000);
        sym.writel_relaxed(uVar2 & 0xfffffffe,param_1[1] + 0x1000);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0xffffffff,param_1[1] + 0x5000);
        sym.writel_relaxed(0xffffffff,param_1[1] + 0x5004);
        sym.writel_relaxed(0xffffffff,param_1[1] + 0x5008);
        sym.writel_relaxed(0xffffffff,param_1[1] + 0x500c);
        sym.writel_relaxed(0xffffffff,param_1[1] + 0x5010);
        DataSynchronizationBarrier(3,2,0);
        uVar2 = sym.readl_relaxed(param_1[1] + 0x2008);
        sym.writel_relaxed(uVar2 | 8,param_1[1] + 0x2008);
        DataSynchronizationBarrier(3,2,0);
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
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        uVar2 = sym.readl_relaxed(param_1[1] + 0x101c);
        sym.writel_relaxed(uVar2 & 0xfffffeff,param_1[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0x18c,param_1[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        uStack_128 = 0x40000000000007;
        iVar3 = sym.qti_hwkm_handle_cmd(&uStack_128);
        if (iVar3 == 0) {
            sym.readl_relaxed(param_1[1] + 0x1020);
            uVar2 = sym.readl_relaxed(param_1[1] + 0x101c);
            sym.writel_relaxed(uVar2 & 0xfffffeff,param_1[1] + 0x101c);
            DataSynchronizationBarrier(3,2,0);
            uVar7 = 0;
            DataSynchronizationBarrier(3,2,0);
            goto code_r0x08001490;
        }
        _printk(0x800018e,"qti_hwkm_set_tpkey",iVar3);
        uVar5 = 0x8000234;
    }
    uVar7 = 0xffffffea;
    _printk(uVar5,"qti_hwkm_init",0xffffffea);
code_r0x08001490:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar6,0x8001500);
    uVar7 = *puVar6;
    log_post_read_mmio(uVar7,0x20,puVar6,0x8001534);
    return uVar7;
}


// ===== sym.qti_hwkm_handle_cmd @ 0x08001080 (size 340) =====

int sym.qti_hwkm_handle_cmd(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    ulong uVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
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
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    if (*arg1 == 7) {
        uStack_30 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        if (*(arg1 + 4) != 0x400000) {
            _printk(0x800026e);
            goto code_r0x0800119c;
        }
        iVar3 = tme_hwkm_master_broadcast_transportkey(&uStack_40);
        if (iVar3 == -0x13) {
code_r0x080010e4:
            uVar4 = 0;
            do {
                usleep_range_state(8000,12000,2);
                iVar3 = tme_hwkm_master_broadcast_transportkey(&uStack_40);
                if (iVar3 == 0) goto code_r0x080011a0;
            } while ((iVar3 == -0x13 || iVar3 == -0xb) && (bVar1 = uVar4 < 999, uVar4 = uVar4 + 1, bVar1));
code_r0x08001130:
            _printk(0x800008c,iVar3);
            _printk(0x800011a);
            _printk(0x8000298,uStack_40 & 0xffffffff);
            _printk(0x80001db,uStack_40._4_4_);
            _printk(0x80000b4,uStack_38 & 0xffffffff);
            _printk(0x8000071,uStack_38._4_4_);
        }
        else if (iVar3 != 0) {
            if (iVar3 == -0xb) goto code_r0x080010e4;
            goto code_r0x08001130;
        }
    }
    else {
code_r0x0800119c:
        iVar3 = -0x16;
    }
code_r0x080011a0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar3;
    }
    piVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qti_hwkm_init;
    pcStack_68 = sym.qti_hwkm_init;
    iVar2 = sp_el0;
    iStack_78 = *(iVar2 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffe0;
    if ((piVar5[1] == 0) || (*piVar5 == 0)) {
        _printk(0x80001b8,"qti_hwkm_init");
        iVar3 = -0x16;
        goto code_r0x08001490;
    }
    uVar4 = sym.readl_relaxed(*piVar5);
    sym.writel_relaxed(uVar4 & 0xfffffffe,*piVar5);
    DataSynchronizationBarrier(3,2,0);
    uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
    if ((uVar4 >> 9 & 1) == 0) {
        uVar7 = 0x8000172;
code_r0x08001450:
        _printk(uVar7,"qti_hwkm_check_bist_status");
        _printk(0x800020d,"qti_hwkm_ice_init_sequence",0xffffffea);
        uVar7 = 0x80000cf;
    }
    else {
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 7 & 1) == 0) {
            uVar7 = 0x80002af;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 2 & 1) == 0) {
            uVar7 = 0x800013e;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar4 >> 1 & 1) == 0) {
            uVar7 = 0x80000f4;
            goto code_r0x08001450;
        }
        uVar6 = sym.readl_relaxed(piVar5[1] + 0x1004);
        if ((uVar6 & 1) == 0) {
            uVar7 = 0x80002d6;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x1000);
        sym.writel_relaxed(uVar4 & 0xfffffffe,piVar5[1] + 0x1000);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5000);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5004);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5008);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x500c);
        sym.writel_relaxed(0xffffffff,piVar5[1] + 0x5010);
        DataSynchronizationBarrier(3,2,0);
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x2008);
        sym.writel_relaxed(uVar4 | 8,piVar5[1] + 0x2008);
        DataSynchronizationBarrier(3,2,0);
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
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        uVar4 = sym.readl_relaxed(piVar5[1] + 0x101c);
        sym.writel_relaxed(uVar4 & 0xfffffeff,piVar5[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0x18c,piVar5[1] + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        uStack_168 = 0x40000000000007;
        iVar3 = sym.qti_hwkm_handle_cmd(&uStack_168);
        if (iVar3 == 0) {
            sym.readl_relaxed(piVar5[1] + 0x1020);
            uVar4 = sym.readl_relaxed(piVar5[1] + 0x101c);
            sym.writel_relaxed(uVar4 & 0xfffffeff,piVar5[1] + 0x101c);
            DataSynchronizationBarrier(3,2,0);
            iVar3 = 0;
            DataSynchronizationBarrier(3,2,0);
            goto code_r0x08001490;
        }
        _printk(0x800018e,"qti_hwkm_set_tpkey",iVar3);
        uVar7 = 0x8000234;
    }
    iVar3 = -0x16;
    _printk(uVar7,"qti_hwkm_init",0xffffffea);
code_r0x08001490:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_78) {
        return iVar3;
    }
    piVar8 = __stack_chk_fail();
    *extraout_x18_00 = sym.readl_relaxed;
    log_read_mmio(0x20,piVar8,0x8001500);
    iVar3 = *piVar8;
    log_post_read_mmio(iVar3,0x20,piVar8,0x8001534);
    return iVar3;
}


// ===== sym.qti_hwkm_init @ 0x080011d4 (size 808) =====

uint sym.qti_hwkm_init(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar7;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if ((*(arg1 + 8) == 0) || (*arg1 == 0)) {
        _printk(0x80001b8,"qti_hwkm_init");
        uVar7 = 0xffffffea;
        goto code_r0x08001490;
    }
    uVar2 = sym.readl_relaxed(*arg1);
    sym.writel_relaxed(uVar2 & 0xfffffffe,*arg1);
    DataSynchronizationBarrier(3,2,0);
    uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x1004);
    if ((uVar2 >> 9 & 1) == 0) {
        uVar5 = 0x8000172;
code_r0x08001450:
        _printk(uVar5,"qti_hwkm_check_bist_status");
        _printk(0x800020d,"qti_hwkm_ice_init_sequence",0xffffffea);
        uVar5 = 0x80000cf;
    }
    else {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x1004);
        if ((uVar2 >> 7 & 1) == 0) {
            uVar5 = 0x80002af;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x1004);
        if ((uVar2 >> 2 & 1) == 0) {
            uVar5 = 0x800013e;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x1004);
        if ((uVar2 >> 1 & 1) == 0) {
            uVar5 = 0x80000f4;
            goto code_r0x08001450;
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 8) + 0x1004);
        if ((uVar4 & 1) == 0) {
            uVar5 = 0x80002d6;
            goto code_r0x08001450;
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x1000);
        sym.writel_relaxed(uVar2 & 0xfffffffe,*(arg1 + 8) + 0x1000);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x5000);
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x5004);
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x5008);
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x500c);
        sym.writel_relaxed(0xffffffff,*(arg1 + 8) + 0x5010);
        DataSynchronizationBarrier(3,2,0);
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x2008);
        sym.writel_relaxed(uVar2 | 8,*(arg1 + 8) + 0x2008);
        DataSynchronizationBarrier(3,2,0);
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
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x101c);
        sym.writel_relaxed(uVar2 & 0xfffffeff,*(arg1 + 8) + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0x18c,*(arg1 + 8) + 0x101c);
        DataSynchronizationBarrier(3,2,0);
        uStack_128 = 0x40000000000007;
        iVar3 = sym.qti_hwkm_handle_cmd(&uStack_128);
        if (iVar3 == 0) {
            sym.readl_relaxed(*(arg1 + 8) + 0x1020);
            uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x101c);
            sym.writel_relaxed(uVar2 & 0xfffffeff,*(arg1 + 8) + 0x101c);
            DataSynchronizationBarrier(3,2,0);
            uVar7 = 0;
            DataSynchronizationBarrier(3,2,0);
            goto code_r0x08001490;
        }
        _printk(0x800018e,"qti_hwkm_set_tpkey",iVar3);
        uVar5 = 0x8000234;
    }
    uVar7 = 0xffffffea;
    _printk(uVar5,"qti_hwkm_init",0xffffffea);
code_r0x08001490:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar6,0x8001500);
    uVar7 = *puVar6;
    log_post_read_mmio(uVar7,0x20,puVar6,0x8001534);
    return uVar7;
}


// ===== sym.readl_relaxed @ 0x080014fc (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001500);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8001534);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x0800156c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001588);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80015b0);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080015e4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001628

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
    //switch table (4 cases) at 0x800006c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800163c);
    (*pcVar1)();
}

