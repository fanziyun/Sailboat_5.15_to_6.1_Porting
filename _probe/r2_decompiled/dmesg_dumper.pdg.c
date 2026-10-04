// decompiled from dmesg_dumper by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001f94

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x4a4a6295cb9b6ffe) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001f54;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08001f54;
            pcVar2 = sym.qcom_ddump_vmkmsg_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x4a4a6295cb9b6ffe) {
            pcVar2 = sym.qcom_ddump_to_shm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x77079828fb981a70) goto code_r0x08001f54;
            pcVar2 = sym.qcom_ddump_gh_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qcom_ddump_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001f54;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f54:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_ddump_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.qcom_ddump_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint16_t *param_3)

{
    uint64_t uVar1;
    char cVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint *puVar9;
    ushort *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong *extraout_x1;
    ulong uVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint16_t *unaff_x19;
    ulong *unaff_x20;
    uint *puVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint64_t *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    uchar auVar24 [12];
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    int64_t iStack_170;
    ulong *puStack_168;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar ****ppppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint *puStack_120;
    ulong *puStack_118;
    uint32_t uStack_110;
    uint32_t uStack_10c;
    ulong uStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    ulong *puStack_e0;
    ulong uStack_c8;
    uint32_t uStack_c0;
    uint32_t uStack_bc;
    ulong uStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong *puStack_40;
    uint16_t *puStack_38;
    uint16_t auStack_30 [2];
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_28 = *(iVar19 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    if ((param_2 == 0x56100008) && ((unaff_x19 = param_3, param_3[2] == '\v' || (param_3[2] == '\x02')))) {
        unaff_x20 = param_1 + -0xb8;
        iVar5 = gh_rm_get_vmid(*(param_1 + -0xc),auStack_2c);
        if ((iVar5 == 0) && ((iVar5 = gh_rm_get_vmid(1,auStack_30), iVar5 == 0 && (auStack_2c[0] == *param_3)))) {
            cVar2 = param_3[2];
            if (cVar2 == '\x02') {
                iVar5 = sym.qcom_ddump_share_mem(unaff_x20,auStack_30[0],auStack_2c[0]);
                if (iVar5 != 0) {
                    _dev_err(*unaff_x20,"Failed to share memory\n");
                    goto code_r0x0800178c;
                }
                cVar2 = param_3[2];
            }
            if (cVar2 == '\v') {
                sym.qcom_ddump_unshare_mem(unaff_x20,auStack_30[0],auStack_2c[0]);
            }
        }
    }
code_r0x0800178c:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar22 = __stack_chk_fail();
    iVar17 = auVar22._0_8_;
    *extraout_x18 = sym.qcom_ddump_to_shm;
    pcStack_48 = sym.qcom_ddump_to_shm;
    iVar19 = sp_el0;
    iStack_58 = *(iVar19 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    puStack_40 = unaff_x20;
    puStack_38 = unaff_x19;
    _dev_warn(*(iVar17 + -8),"reason = %d\n",auVar22._8_8_ & 0xffffffff);
    puVar18 = iVar17 + 0x20;
    kmsg_dump_rewind(puVar18);
    memset(*(iVar17 + 0x90),0,*(iVar17 + 0x98));
    kmsg_dump_get_buffer(puVar18,1,*(iVar17 + 0x90),*(iVar17 + 0x98),&uStack_60);
    uVar20 = uStack_60;
    uVar8 = _dev_warn(*(iVar17 + -8),"size of dmesg logbuf logged = %lld\n");
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    auVar22 = __stack_chk_fail();
    puVar14 = auVar22._0_8_;
    *extraout_x18_00 = sym.qcom_ddump_share_mem;
    pcStack_98 = sym.qcom_ddump_share_mem;
    iVar19 = sp_el0;
    iStack_a8 = *(iVar19 + 0x5e0);
    uVar8 = uVar20 & 0xffffffff;
    uStack_c0 = auVar22._8_4_ & 0xffff;
    uStack_b8 = 7;
    uStack_bc = uVar20 & 0xffff;
    uStack_c8 = 0x600000006;
    uStack_ac = uStack_c0;
    ppuStack_a0 = &puStack_50;
    uVar6 = hyp_assign_phys(puVar14[7],(puVar14[8] - puVar14[7]) + 1,&uStack_ac,1,&uStack_c0,&uStack_c8,2);
    if (uVar6 == 0) {
        uVar6 = 0xc;
        iVar19 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar19 = 0x30;
        }
        puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
        if (puVar9 == NULL) {
            uVar20 = 0xfffffff4;
        }
        else {
            uVar6 = 0x14;
            iVar19 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar19 = 0x30;
            }
            puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
            puVar18 = puVar9;
            if (puVar10 == NULL) {
                kfree(puVar9);
                uVar20 = 0xfffffff4;
            }
            else {
                iVar19 = puVar14[7];
                iVar17 = puVar14[8];
                *puVar9 = 2;
                *(puVar9 + 6) = 6;
                uVar6 = *(puVar14 + 0x15);
                *(puVar9 + 10) = 6;
                *puVar10 = 1;
                *(puVar10 + 2) = iVar19;
                *(puVar9 + 1) = auVar22._8_2_;
                *(puVar10 + 6) = (iVar17 - iVar19) + 1;
                *(puVar9 + 2) = uVar20;
                uVar7 = gh_rm_mem_share(0,0,uVar6,puVar9,puVar10,0,puVar14 + 0x16);
                uVar20 = uVar7;
                if (uVar7 != 0) {
                    _dev_err(*puVar14,"Gunyah mem share addr=%x size=%u failed: %d\n",puVar14[7],puVar14[0x14],
                             uVar20);
                    puVar16 = &uStack_c0;
                    hyp_assign_phys(puVar14[7],(puVar14[8] - puVar14[7]) + 1,puVar16,2,&uStack_ac,&uStack_b8,1);
                    uVar6 = puVar16;
                }
                kfree(puVar9);
                kfree(puVar10);
            }
        }
    }
    else {
        uVar20 = uVar6;
        uVar15 = puVar14[7];
        _dev_err(*puVar14,"hyp_assign_phys addr=%x size=%u failed: %d\n",uVar15,puVar14[0x14],uVar20);
        uVar6 = uVar15;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_a8) {
        return uVar20;
    }
    auVar24 = __stack_chk_fail();
    puVar11 = auVar24._0_8_;
    *extraout_x18_01 = sym.qcom_ddump_unshare_mem;
    pcStack_e8 = sym.qcom_ddump_unshare_mem;
    iVar19 = sp_el0;
    iStack_f8 = *(iVar19 + 0x5e0);
    uStack_110 = auVar24._8_4_ & 0xffff;
    uStack_10c = uVar6 & 0xffff;
    uStack_108 = 7;
    uStack_fc = uStack_110;
    pppuStack_f0 = &ppuStack_a0;
    puStack_e0 = puVar14;
    iVar5 = gh_rm_mem_reclaim(*(puVar11 + 0x16),0);
    if (iVar5 != 0) {
        _dev_err(*puVar11,"Gunyah mem reclaim failed: %d\n",iVar5);
    }
    uVar12 = hyp_assign_phys(puVar11[7],(puVar11[8] - puVar11[7]) + 1,&uStack_110,2,&uStack_fc,&uStack_108,1);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_f8) {
        return uVar12;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.qcom_ddump_gh_cb;
    pcStack_138 = sym.qcom_ddump_gh_cb;
    iVar19 = sp_el0;
    iStack_148 = *(iVar19 + 0x5e0);
    uVar12 = 0x100000000;
    iVar19 = extraout_x1[0x13];
    uStack_158 = 1;
    ppppuStack_140 = &pppuStack_f0;
    uStack_130 = uVar8;
    puStack_120 = puVar18;
    puStack_118 = puVar11;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_158);
    if (*(extraout_x1 + 0xb4) == '\0') {
        uVar8 = 1;
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar12 = 0;
        uStack_150 = 1;
        uVar13 = gh_dbl_send(extraout_x1[0x1a],&uStack_150);
        if (uVar13 == 0) {
            iVar17 = *(iVar19 + 8);
        }
        else {
            uVar12 = uVar13 & 0xffffffff;
            uVar13 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar17 = *(iVar19 + 8);
        }
        if (iVar17 == 0) {
            uVar12 = 1;
            uVar13 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar13 = complete(extraout_x1 + 0x1c);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_148) {
        return uVar13;
    }
    auVar23 = __stack_chk_fail();
    *extraout_x18_03 = sym.qcom_ddump_vmkmsg_read;
    pcStack_198 = sym.qcom_ddump_vmkmsg_read;
    iVar17 = sp_el0;
    iStack_1a8 = *(iVar17 + 0x5e0);
    uVar13 = uVar12;
    ppppuStack_1a0 = &ppppuStack_140;
    uStack_190 = uVar20;
    uStack_180 = auVar22._8_8_ & 0xffffffff;
    uStack_178 = uVar8;
    iStack_170 = iVar19;
    puStack_168 = extraout_x1;
    puVar14 = PDE_DATA(*(auVar23._0_8_ + 0x20));
    if (uVar12 < 0x400) {
        uVar13 = 0x400;
        _dev_err(*puVar14,"user buffer size should greater than %d\n");
        uVar20 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar21 = puVar14[0x13];
    if ((puVar21[2] == '\0') || (0x3ff < puVar21[1])) {
        *puVar21 = uVar12;
        uVar13 = 0;
        uStack_1b0 = 1;
        uVar6 = gh_dbl_send(puVar14[0x1a],&uStack_1b0);
        if (uVar6 != 0) {
            uVar13 = uVar6;
            _dev_err(*puVar14,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar14 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar14,"wait for completion timeout\n");
            uVar20 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar8 = puVar21[1];
        if (uVar12 < uVar8) {
            _dev_err(*puVar14,"can not read the correct length of svm kmsg\n");
            uVar20 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar8 != 0) {
            if (uVar8 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar3)();
            }
            auVar22 = __check_object_size(puVar21 + 3,uVar8,1);
            iVar19 = sym._copy_to_user(auVar23._8_8_,auVar22,uVar8);
            if (iVar19 == 0) {
                uVar20 = puVar21[1];
                uVar13 = uVar8;
            }
            else {
                _dev_err(*puVar14,"copy_to_user fail\n");
                uVar20 = 0xfffffffffffffff2;
                uVar13 = uVar8;
            }
            goto code_r0x08001d24;
        }
    }
    uVar20 = 0;
code_r0x08001d24:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_1a8) {
        return uVar20;
    }
    uVar8 = __stack_chk_fail(uVar20);
    *extraout_x18_04 = sym._copy_to_user;
    puVar14 = sp_el0;
    uVar20 = (uVar8 << 8) >> 8;
    if (((*(puVar14 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar8, (*puVar14 >> 0x1a & 1) != 0)) {
        uVar12 = uVar8 & uVar20;
    }
    bVar4 = CARRY8(uVar12,uVar13);
    uVar12 = uVar12 + uVar13;
    uVar1 = 0;
    if (!bVar4 || uVar12 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar12 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar4) || uVar12 == uVar1 + !bVar4) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar13 = daif;
                daif = uVar13 | 0xc0;
            }
            uVar13 = ttbr1_el1;
            ttbr1_el1 = puVar14[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar14[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar8 & uVar20 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        uVar13 = __arch_copy_to_user(uVar8);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar20 = daif;
            if ((uVar20 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar20;
        }
    }
    return uVar13;
}


// ===== sym.qcom_ddump_gh_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

uint64_t sym.qcom_ddump_gh_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong *param_2)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar13 [16];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uVar8 = 0x100000000;
    iVar10 = param_2[0x13];
    uStack_48 = 1;
    gh_dbl_read_and_clean(param_2[0x1b],&uStack_48);
    if (*(param_2 + 0xb4) == '\0') {
        pm_wakeup_ws_event(param_2[0x20],2000,1);
        uVar8 = 0;
        uStack_40 = 1;
        uVar6 = gh_dbl_send(param_2[0x1a],&uStack_40);
        if (uVar6 == 0) {
            iVar10 = *(iVar10 + 8);
        }
        else {
            uVar8 = uVar6 & 0xffffffff;
            uVar6 = _dev_err(*param_2,"failed to raise virq to the sender %d\n");
            iVar10 = *(iVar10 + 8);
        }
        if (iVar10 == 0) {
            uVar8 = 1;
            uVar6 = pm_wakeup_ws_event(param_2[0x20],0);
        }
    }
    else {
        uVar6 = complete(param_2 + 0x1c);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ddump_vmkmsg_read;
    pcStack_88 = sym.qcom_ddump_vmkmsg_read;
    iVar10 = sp_el0;
    iStack_98 = *(iVar10 + 0x5e0);
    uVar6 = uVar8;
    puStack_90 = &stack0xffffffffffffffd0;
    puVar7 = PDE_DATA(*(auVar13._0_8_ + 0x20));
    if (uVar8 < 0x400) {
        uVar6 = 0x400;
        _dev_err(*puVar7,"user buffer size should greater than %d\n");
        uVar8 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar12 = puVar7[0x13];
    if ((puVar12[2] == '\0') || (0x3ff < puVar12[1])) {
        *puVar12 = uVar8;
        uVar6 = 0;
        uStack_a0 = 1;
        uVar4 = gh_dbl_send(puVar7[0x1a],&uStack_a0);
        if (uVar4 != 0) {
            uVar6 = uVar4;
            _dev_err(*puVar7,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar7 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar7,"wait for completion timeout\n");
            uVar8 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar11 = puVar12[1];
        if (uVar8 < uVar11) {
            _dev_err(*puVar7,"can not read the correct length of svm kmsg\n");
            uVar8 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar11 != 0) {
            if (uVar11 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(puVar12 + 3,uVar11,1);
            iVar10 = sym._copy_to_user(auVar13._8_8_,noname_1,uVar11);
            if (iVar10 == 0) {
                uVar8 = puVar12[1];
                uVar6 = uVar11;
            }
            else {
                _dev_err(*puVar7,"copy_to_user fail\n");
                uVar8 = 0xfffffffffffffff2;
                uVar6 = uVar11;
            }
            goto code_r0x08001d24;
        }
    }
    uVar8 = 0;
code_r0x08001d24:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_98) {
        return uVar8;
    }
    uVar11 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym._copy_to_user;
    puVar7 = sp_el0;
    uVar8 = (uVar11 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar11, (*puVar7 >> 0x1a & 1) != 0)) {
        uVar9 = uVar11 & uVar8;
    }
    bVar3 = CARRY8(uVar9,uVar6);
    uVar9 = uVar9 + uVar6;
    uVar1 = 0;
    if (!bVar3 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar3) || uVar9 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((uVar11 & uVar8 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar6 = __arch_copy_to_user(uVar11);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    return uVar6;
}


// ===== sym.qcom_ddump_to_shm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

uint64_t sym.qcom_ddump_to_shm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,uint param_2)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint *puVar8;
    ushort *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *puVar13;
    ulong *extraout_x1;
    ulong uVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint *puVar17;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t *puVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auVar23 [12];
    ulong uStack_180;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_150;
    uint64_t uStack_148;
    int64_t iStack_140;
    ulong *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint *puStack_f0;
    ulong *puStack_e8;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    ulong uStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    ulong uStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    ulong uStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_28 = *(iVar18 + 0x5e0);
    uStack_30 = 0;
    _dev_warn(*(param_1 + -8),"reason = %d\n",param_2);
    puVar17 = param_1 + 0x20;
    kmsg_dump_rewind(puVar17);
    memset(*(param_1 + 0x90),0,*(param_1 + 0x98));
    kmsg_dump_get_buffer(puVar17,1,*(param_1 + 0x90),*(param_1 + 0x98),&uStack_30);
    uVar19 = uStack_30;
    uVar7 = _dev_warn(*(param_1 + -8),"size of dmesg logbuf logged = %lld\n");
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar21 = __stack_chk_fail();
    puVar13 = auVar21._0_8_;
    *extraout_x18 = sym.qcom_ddump_share_mem;
    pcStack_68 = sym.qcom_ddump_share_mem;
    iVar18 = sp_el0;
    iStack_78 = *(iVar18 + 0x5e0);
    uVar7 = uVar19 & 0xffffffff;
    uStack_90 = auVar21._8_4_ & 0xffff;
    uStack_88 = 7;
    uStack_8c = uVar19 & 0xffff;
    uStack_98 = 0x600000006;
    uStack_7c = uStack_90;
    puStack_70 = &stack0xffffffffffffffe0;
    uVar4 = hyp_assign_phys(puVar13[7],(puVar13[8] - puVar13[7]) + 1,&uStack_7c,1,&uStack_90,&uStack_98,2);
    if (uVar4 == 0) {
        uVar4 = 0xc;
        iVar18 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar18 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0);
        if (puVar8 == NULL) {
            uVar19 = 0xfffffff4;
        }
        else {
            uVar4 = 0x14;
            iVar18 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar18 = 0x30;
            }
            puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0);
            puVar17 = puVar8;
            if (puVar9 == NULL) {
                kfree(puVar8);
                uVar19 = 0xfffffff4;
            }
            else {
                iVar18 = puVar13[7];
                iVar16 = puVar13[8];
                *puVar8 = 2;
                *(puVar8 + 6) = 6;
                uVar4 = *(puVar13 + 0x15);
                *(puVar8 + 10) = 6;
                *puVar9 = 1;
                *(puVar9 + 2) = iVar18;
                *(puVar8 + 1) = auVar21._8_2_;
                *(puVar9 + 6) = (iVar16 - iVar18) + 1;
                *(puVar8 + 2) = uVar19;
                uVar5 = gh_rm_mem_share(0,0,uVar4,puVar8,puVar9,0,puVar13 + 0x16);
                uVar19 = uVar5;
                if (uVar5 != 0) {
                    _dev_err(*puVar13,"Gunyah mem share addr=%x size=%u failed: %d\n",puVar13[7],puVar13[0x14],
                             uVar19);
                    puVar15 = &uStack_90;
                    hyp_assign_phys(puVar13[7],(puVar13[8] - puVar13[7]) + 1,puVar15,2,&uStack_7c,&uStack_88,1);
                    uVar4 = puVar15;
                }
                kfree(puVar8);
                kfree(puVar9);
            }
        }
    }
    else {
        uVar19 = uVar4;
        uVar14 = puVar13[7];
        _dev_err(*puVar13,"hyp_assign_phys addr=%x size=%u failed: %d\n",uVar14,puVar13[0x14],uVar19);
        uVar4 = uVar14;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_78) {
        return uVar19;
    }
    auVar23 = __stack_chk_fail();
    puVar10 = auVar23._0_8_;
    *extraout_x18_00 = sym.qcom_ddump_unshare_mem;
    pcStack_b8 = sym.qcom_ddump_unshare_mem;
    iVar18 = sp_el0;
    iStack_c8 = *(iVar18 + 0x5e0);
    uStack_e0 = auVar23._8_4_ & 0xffff;
    uStack_dc = uVar4 & 0xffff;
    uStack_d8 = 7;
    uStack_cc = uStack_e0;
    ppuStack_c0 = &puStack_70;
    puStack_b0 = puVar13;
    iVar6 = gh_rm_mem_reclaim(*(puVar10 + 0x16),0);
    if (iVar6 != 0) {
        _dev_err(*puVar10,"Gunyah mem reclaim failed: %d\n",iVar6);
    }
    uVar11 = hyp_assign_phys(puVar10[7],(puVar10[8] - puVar10[7]) + 1,&uStack_e0,2,&uStack_cc,&uStack_d8,1);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_c8) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.qcom_ddump_gh_cb;
    pcStack_108 = sym.qcom_ddump_gh_cb;
    iVar18 = sp_el0;
    iStack_118 = *(iVar18 + 0x5e0);
    uVar11 = 0x100000000;
    iVar18 = extraout_x1[0x13];
    uStack_128 = 1;
    pppuStack_110 = &ppuStack_c0;
    uStack_100 = uVar7;
    puStack_f0 = puVar17;
    puStack_e8 = puVar10;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_128);
    if (*(extraout_x1 + 0xb4) == '\0') {
        uVar7 = 1;
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar11 = 0;
        uStack_120 = 1;
        uVar12 = gh_dbl_send(extraout_x1[0x1a],&uStack_120);
        if (uVar12 == 0) {
            iVar16 = *(iVar18 + 8);
        }
        else {
            uVar11 = uVar12 & 0xffffffff;
            uVar12 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar16 = *(iVar18 + 8);
        }
        if (iVar16 == 0) {
            uVar11 = 1;
            uVar12 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar12 = complete(extraout_x1 + 0x1c);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_118) {
        return uVar12;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_02 = sym.qcom_ddump_vmkmsg_read;
    pcStack_168 = sym.qcom_ddump_vmkmsg_read;
    iVar16 = sp_el0;
    iStack_178 = *(iVar16 + 0x5e0);
    uVar12 = uVar11;
    ppppuStack_170 = &pppuStack_110;
    uStack_160 = uVar19;
    uStack_150 = auVar21._8_8_ & 0xffffffff;
    uStack_148 = uVar7;
    iStack_140 = iVar18;
    puStack_138 = extraout_x1;
    puVar13 = PDE_DATA(*(auVar22._0_8_ + 0x20));
    if (uVar11 < 0x400) {
        uVar12 = 0x400;
        _dev_err(*puVar13,"user buffer size should greater than %d\n");
        uVar19 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar20 = puVar13[0x13];
    if ((puVar20[2] == '\0') || (0x3ff < puVar20[1])) {
        *puVar20 = uVar11;
        uVar12 = 0;
        uStack_180 = 1;
        uVar4 = gh_dbl_send(puVar13[0x1a],&uStack_180);
        if (uVar4 != 0) {
            uVar12 = uVar4;
            _dev_err(*puVar13,"failed to raise virq to the sender %d\n");
        }
        iVar6 = wait_for_completion_timeout(puVar13 + 0x1c,0xfa);
        if (iVar6 == 0) {
            _dev_err(*puVar13,"wait for completion timeout\n");
            uVar19 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar7 = puVar20[1];
        if (uVar11 < uVar7) {
            _dev_err(*puVar13,"can not read the correct length of svm kmsg\n");
            uVar19 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar7 != 0) {
            if (uVar7 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            auVar21 = __check_object_size(puVar20 + 3,uVar7,1);
            iVar18 = sym._copy_to_user(auVar22._8_8_,auVar21,uVar7);
            if (iVar18 == 0) {
                uVar19 = puVar20[1];
                uVar12 = uVar7;
            }
            else {
                _dev_err(*puVar13,"copy_to_user fail\n");
                uVar19 = 0xfffffffffffffff2;
                uVar12 = uVar7;
            }
            goto code_r0x08001d24;
        }
    }
    uVar19 = 0;
code_r0x08001d24:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_178) {
        return uVar19;
    }
    uVar7 = __stack_chk_fail(uVar19);
    *extraout_x18_03 = sym._copy_to_user;
    puVar13 = sp_el0;
    uVar19 = (uVar7 << 8) >> 8;
    if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar7, (*puVar13 >> 0x1a & 1) != 0)) {
        uVar11 = uVar7 & uVar19;
    }
    bVar3 = CARRY8(uVar11,uVar12);
    uVar11 = uVar11 + uVar12;
    uVar1 = 0;
    if (!bVar3 || uVar11 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar11 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar12 = daif;
                daif = uVar12 | 0xc0;
            }
            uVar12 = ttbr1_el1;
            ttbr1_el1 = puVar13[1] & 0xffff000000000000 | uVar12 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar13[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar7 & uVar19 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar12 = __arch_copy_to_user(uVar7);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar19 = daif;
            if ((uVar19 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar19;
        }
    }
    return uVar12;
}


// ===== sym.qcom_ddump_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.qcom_ddump_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    char cVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xa8);
    gh_dbl_tx_unregister(*(iVar3 + 0xd0));
    gh_dbl_rx_unregister(*(iVar3 + 0xd8));
    if (*(iVar3 + 0xb4) == '\0') {
        wakeup_source_unregister(*(iVar3 + 0x100));
        cVar1 = *(iVar3 + 0xb4);
    }
    else {
        remove_proc_entry("vmkmsg",0);
        cVar1 = *(iVar3 + 0xb4);
    }
    if (cVar1 == '\0') {
        uVar2 = kmsg_dump_unregister(iVar3 + 8);
        if (uVar2 != 0) {
            return uVar2;
        }
    }
    else {
        gh_rm_unregister_notifier(iVar3 + 0xb8);
    }
    return 0;
}


// ===== sym.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001190 (size 8) =====

uint64_t sym.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    piVar9 = param_1 + 0x10;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar10 = *(param_1 + 0x300);
    piVar4 = devm_kmalloc(piVar9,0x108,0xdc0);
    if (piVar4 == NULL) {
code_r0x080015fc:
        uVar6 = 0xfffffff4;
        goto code_r0x08001600;
    }
    *(param_1 + 0xa8) = piVar4;
    *piVar4 = piVar9;
    uVar2 = of_property_read_variable_u32_array(uVar10,"gunyah-label",piVar4 + 0x15,1,0);
    if (uVar2 < 0) {
        uVar6 = uVar2;
        _dev_err(piVar9,"Failed to read label %d\n",uVar6);
        goto code_r0x08001600;
    }
    iVar5 = of_find_property(uVar10,"qcom,primary-vm",0);
    iVar11 = *piVar4;
    *(piVar4 + 0xb4) = iVar5 != 0;
    iVar5 = of_parse_phandle(*(iVar11 + 0x2f0),"shared-buffer",0);
    if (iVar5 == 0) {
        iStack_6c = 0;
        for (iVar5 = of_find_compatible_node(0,0,"qcom,ddump-gunyah-gen"); iVar5 != 0;
            iVar5 = of_find_compatible_node(iVar5,0,"qcom,ddump-gunyah-gen")) {
            iVar3 = of_property_read_variable_u32_array(iVar5,"qcom,label",&iStack_6c,1,0);
            if ((-1 < iVar3) && (iStack_6c == piVar4[0x15])) {
                iVar5 = of_parse_phandle(iVar5,"memory-region",0);
                if (iVar5 != 0) goto code_r0x080012ec;
                break;
            }
        }
        pcVar8 = "Unable to parse shared mem node\n";
    }
    else {
code_r0x080012ec:
        iVar3 = of_address_to_resource(iVar5,0,piVar4 + 7);
        if (iVar3 == 0) {
            iVar5 = (piVar4[8] - piVar4[7]) + 1;
            piVar4[0x14] = iVar5;
            if (*(piVar4 + 0xb4) == '\0') {
                iVar11 = *(param_1 + 0x80);
                if (iVar11 == 0) {
                    iVar11 = *piVar9;
                }
                iVar5 = __devm_request_region(piVar9,iomem_resource,piVar4[7],iVar5,iVar11);
                if (iVar5 == 0) {
                    _dev_err(piVar9,"request mem region fail\n");
                    uVar6 = 0xfffffffa;
                    goto code_r0x08001600;
                }
                iVar5 = devm_ioremap_wc(piVar9,piVar4[7],piVar4[0x14]);
                piVar4[0x13] = iVar5;
                if (iVar5 == 0) {
                    _dev_err(piVar9,"ioremap fail\n");
                    goto code_r0x080015fc;
                }
                kmsg_dump_rewind(piVar4 + 5);
                piVar4[3] = sym.qcom_ddump_to_shm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar7 = kmsg_dump_register(piVar4 + 1);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 != 0) goto code_r0x08001600;
            }
            else {
                iVar3 = of_property_read_variable_u32_array(uVar10,"peer-name",piVar4 + 0xac,1,0);
                if (iVar3 < 0) {
                    *(piVar4 + 0xac) = 0;
                }
                piVar4[0x17] = sym.qcom_ddump_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(piVar4 + 0x19) = 0x7fffffff;
                gh_rm_register_notifier();
            }
            piVar9 = *piVar4;
            if (piVar4[0x14] < 0x418) {
                _dev_err(piVar9,"Shared memory size should greater than %d\n",0x418);
                uVar6 = 0xffffffea;
            }
            else {
                iVar5 = piVar4[0x15];
                uVar6 = gh_dbl_tx_register(iVar5);
                piVar4[0x1a] = uVar6;
                if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                    _dev_err(piVar9,"%s:Failed to get gunyah tx dbl %d\n","qcom_ddump_alive_log_probe",
                             uVar6 & 0xffffffff);
                }
                else {
                    uVar6 = gh_dbl_rx_register(iVar5,sym.qcom_ddump_gh_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                                               piVar4);
                    piVar4[0x1b] = uVar6;
                    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                        _dev_err(piVar9,"%s:Failed to get gunyah rx dbl %d\n","qcom_ddump_alive_log_probe",
                                 uVar6 & 0xffffffff);
                    }
                    else {
                        if (*(piVar4 + 0xb4) == '\0') {
                            iVar5 = piVar9[0xe];
                            if (iVar5 == 0) {
                                iVar5 = *piVar9;
                            }
                            iVar5 = wakeup_source_register(piVar9,iVar5);
                            piVar4[0x20] = iVar5;
                            if (iVar5 != 0) {
                                uVar6 = 0;
                                *(piVar4[0x13] + 0x10) = 0;
                                goto code_r0x08001600;
                            }
                            uVar6 = 0xfffffff4;
                        }
                        else {
                            iVar5 = piVar9[0xe];
                            if (iVar5 == 0) {
                                iVar5 = *piVar9;
                            }
                            iVar5 = __devm_request_region(piVar9,iomem_resource,piVar4[7],piVar4[0x14],iVar5);
                            if (iVar5 == 0) {
                                uVar6 = 0xfffffffa;
                                pcVar8 = "request mem region fail\n";
                            }
                            else {
                                iVar5 = devm_ioremap_wc(piVar9,piVar4[7],piVar4[0x14]);
                                piVar4[0x13] = iVar5;
                                if (iVar5 == 0) {
                                    uVar6 = 0xfffffff4;
                                    pcVar8 = "devm_ioremap_wc fail\n";
                                }
                                else {
                                    *(piVar4 + 0x1c) = 0;
                                    __init_swait_queue_head
                                              (piVar4 + 0x1d,"&x->wait",
                                               reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    iVar5 = proc_create_data("vmkmsg",0x100,0,obj.ddump_proc_ops,piVar4);
                                    uVar6 = 0;
                                    if (iVar5 != 0) goto code_r0x08001600;
                                    uVar6 = 0xfffffff4;
                                    pcVar8 = "proc_create_data fail\n";
                                }
                            }
                            _dev_err(piVar9,pcVar8);
                        }
                        gh_dbl_rx_unregister(piVar4[0x1b]);
                    }
                    gh_dbl_tx_unregister(piVar4[0x1a]);
                }
                if (uVar6 == 0) goto code_r0x08001600;
            }
            if (*(piVar4 + 0xb4) == '\0') {
                kmsg_dump_unregister(piVar4 + 1);
            }
            else {
                gh_rm_unregister_notifier(piVar4 + 0x17);
            }
            goto code_r0x08001600;
        }
        pcVar8 = "of_address_to_resource failed!\n";
    }
    _dev_err(iVar11,pcVar8);
    uVar6 = 0xffffffea;
code_r0x08001600:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ddump_remove;
    iVar5 = *(iVar5 + 0xa8);
    gh_dbl_tx_unregister(*(iVar5 + 0xd0));
    gh_dbl_rx_unregister(*(iVar5 + 0xd8));
    if (*(iVar5 + 0xb4) == '\0') {
        wakeup_source_unregister(*(iVar5 + 0x100));
        cVar1 = *(iVar5 + 0xb4);
    }
    else {
        remove_proc_entry("vmkmsg",0);
        cVar1 = *(iVar5 + 0xb4);
    }
    if (cVar1 == '\0') {
        uVar6 = kmsg_dump_unregister(iVar5 + 8);
        if (uVar6 != 0) {
            return uVar6;
        }
    }
    else {
        gh_rm_unregister_notifier(iVar5 + 0xb8);
    }
    return 0;
}


// ===== sym.qcom_ddump_vmkmsg_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.qcom_ddump_vmkmsg_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uVar9 = param_3;
    puVar6 = PDE_DATA(*(param_1 + 0x20));
    if (param_3 < 0x400) {
        uVar9 = 0x400;
        _dev_err(*puVar6,"user buffer size should greater than %d\n");
        uVar8 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar12 = puVar6[0x13];
    if ((puVar12[2] == '\0') || (0x3ff < puVar12[1])) {
        *puVar12 = param_3;
        uVar9 = 0;
        uStack_50 = 1;
        uVar4 = gh_dbl_send(puVar6[0x1a],&uStack_50);
        if (uVar4 != 0) {
            uVar9 = uVar4;
            _dev_err(*puVar6,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar6 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar6,"wait for completion timeout\n");
            uVar8 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar11 = puVar12[1];
        if (param_3 < uVar11) {
            _dev_err(*puVar6,"can not read the correct length of svm kmsg\n");
            uVar8 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar11 != 0) {
            if (uVar11 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(puVar12 + 3,uVar11,1);
            iVar7 = sym._copy_to_user(param_2,noname_1,uVar11);
            if (iVar7 == 0) {
                uVar8 = puVar12[1];
                uVar9 = uVar11;
            }
            else {
                _dev_err(*puVar6,"copy_to_user fail\n");
                uVar8 = 0xfffffffffffffff2;
                uVar9 = uVar11;
            }
            goto code_r0x08001d24;
        }
    }
    uVar8 = 0;
code_r0x08001d24:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    uVar11 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym._copy_to_user;
    puVar6 = sp_el0;
    uVar8 = (uVar11 << 8) >> 8;
    if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar11, (*puVar6 >> 0x1a & 1) != 0)) {
        uVar10 = uVar11 & uVar8;
    }
    bVar3 = CARRY8(uVar10,uVar9);
    uVar10 = uVar10 + uVar9;
    uVar1 = 0;
    if (!bVar3 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar10 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar3) || uVar10 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar6[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar11 & uVar8 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar9 = __arch_copy_to_user(uVar11);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    return uVar9;
}


// ===== sym.qcom_ddump_probe @ 0x080011a0 (size 1188) =====

uint64_t sym.qcom_ddump_probe(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    piVar9 = arg1 + 0x10;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar10 = *(arg1 + 0x300);
    piVar4 = devm_kmalloc(piVar9,0x108,0xdc0);
    if (piVar4 == NULL) {
code_r0x080015fc:
        uVar6 = 0xfffffff4;
        goto code_r0x08001600;
    }
    *(arg1 + 0xa8) = piVar4;
    *piVar4 = piVar9;
    uVar2 = of_property_read_variable_u32_array(uVar10,"gunyah-label",piVar4 + 0x15,1,0);
    if (uVar2 < 0) {
        uVar6 = uVar2;
        _dev_err(piVar9,"Failed to read label %d\n",uVar6);
        goto code_r0x08001600;
    }
    iVar5 = of_find_property(uVar10,"qcom,primary-vm",0);
    iVar11 = *piVar4;
    *(piVar4 + 0xb4) = iVar5 != 0;
    iVar5 = of_parse_phandle(*(iVar11 + 0x2f0),"shared-buffer",0);
    if (iVar5 == 0) {
        iStack_6c = 0;
        for (iVar5 = of_find_compatible_node(0,0,"qcom,ddump-gunyah-gen"); iVar5 != 0;
            iVar5 = of_find_compatible_node(iVar5,0,"qcom,ddump-gunyah-gen")) {
            iVar3 = of_property_read_variable_u32_array(iVar5,"qcom,label",&iStack_6c,1,0);
            if ((-1 < iVar3) && (iStack_6c == piVar4[0x15])) {
                iVar5 = of_parse_phandle(iVar5,"memory-region",0);
                if (iVar5 != 0) goto code_r0x080012ec;
                break;
            }
        }
        pcVar8 = "Unable to parse shared mem node\n";
    }
    else {
code_r0x080012ec:
        iVar3 = of_address_to_resource(iVar5,0,piVar4 + 7);
        if (iVar3 == 0) {
            iVar5 = (piVar4[8] - piVar4[7]) + 1;
            piVar4[0x14] = iVar5;
            if (*(piVar4 + 0xb4) == '\0') {
                iVar11 = *(arg1 + 0x80);
                if (iVar11 == 0) {
                    iVar11 = *piVar9;
                }
                iVar5 = __devm_request_region(piVar9,iomem_resource,piVar4[7],iVar5,iVar11);
                if (iVar5 == 0) {
                    _dev_err(piVar9,"request mem region fail\n");
                    uVar6 = 0xfffffffa;
                    goto code_r0x08001600;
                }
                iVar5 = devm_ioremap_wc(piVar9,piVar4[7],piVar4[0x14]);
                piVar4[0x13] = iVar5;
                if (iVar5 == 0) {
                    _dev_err(piVar9,"ioremap fail\n");
                    goto code_r0x080015fc;
                }
                kmsg_dump_rewind(piVar4 + 5);
                piVar4[3] = sym.qcom_ddump_to_shm.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                uVar7 = kmsg_dump_register(piVar4 + 1);
                uVar6 = uVar7 & 0xffffffff;
                if (uVar7 != 0) goto code_r0x08001600;
            }
            else {
                iVar3 = of_property_read_variable_u32_array(uVar10,"peer-name",piVar4 + 0xac,1,0);
                if (iVar3 < 0) {
                    *(piVar4 + 0xac) = 0;
                }
                piVar4[0x17] = sym.qcom_ddump_rm_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                *(piVar4 + 0x19) = 0x7fffffff;
                gh_rm_register_notifier();
            }
            piVar9 = *piVar4;
            if (piVar4[0x14] < 0x418) {
                _dev_err(piVar9,"Shared memory size should greater than %d\n",0x418);
                uVar6 = 0xffffffea;
            }
            else {
                iVar5 = piVar4[0x15];
                uVar6 = gh_dbl_tx_register(iVar5);
                piVar4[0x1a] = uVar6;
                if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                    _dev_err(piVar9,"%s:Failed to get gunyah tx dbl %d\n","qcom_ddump_alive_log_probe",
                             uVar6 & 0xffffffff);
                }
                else {
                    uVar6 = gh_dbl_rx_register(iVar5,sym.qcom_ddump_gh_cb.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
                                               piVar4);
                    piVar4[0x1b] = uVar6;
                    if ((uVar6 == 0) || (0xfffffffffffff000 < uVar6)) {
                        _dev_err(piVar9,"%s:Failed to get gunyah rx dbl %d\n","qcom_ddump_alive_log_probe",
                                 uVar6 & 0xffffffff);
                    }
                    else {
                        if (*(piVar4 + 0xb4) == '\0') {
                            iVar5 = piVar9[0xe];
                            if (iVar5 == 0) {
                                iVar5 = *piVar9;
                            }
                            iVar5 = wakeup_source_register(piVar9,iVar5);
                            piVar4[0x20] = iVar5;
                            if (iVar5 != 0) {
                                uVar6 = 0;
                                *(piVar4[0x13] + 0x10) = 0;
                                goto code_r0x08001600;
                            }
                            uVar6 = 0xfffffff4;
                        }
                        else {
                            iVar5 = piVar9[0xe];
                            if (iVar5 == 0) {
                                iVar5 = *piVar9;
                            }
                            iVar5 = __devm_request_region(piVar9,iomem_resource,piVar4[7],piVar4[0x14],iVar5);
                            if (iVar5 == 0) {
                                uVar6 = 0xfffffffa;
                                pcVar8 = "request mem region fail\n";
                            }
                            else {
                                iVar5 = devm_ioremap_wc(piVar9,piVar4[7],piVar4[0x14]);
                                piVar4[0x13] = iVar5;
                                if (iVar5 == 0) {
                                    uVar6 = 0xfffffff4;
                                    pcVar8 = "devm_ioremap_wc fail\n";
                                }
                                else {
                                    *(piVar4 + 0x1c) = 0;
                                    __init_swait_queue_head
                                              (piVar4 + 0x1d,"&x->wait",
                                               reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                                    iVar5 = proc_create_data("vmkmsg",0x100,0,obj.ddump_proc_ops,piVar4);
                                    uVar6 = 0;
                                    if (iVar5 != 0) goto code_r0x08001600;
                                    uVar6 = 0xfffffff4;
                                    pcVar8 = "proc_create_data fail\n";
                                }
                            }
                            _dev_err(piVar9,pcVar8);
                        }
                        gh_dbl_rx_unregister(piVar4[0x1b]);
                    }
                    gh_dbl_tx_unregister(piVar4[0x1a]);
                }
                if (uVar6 == 0) goto code_r0x08001600;
            }
            if (*(piVar4 + 0xb4) == '\0') {
                kmsg_dump_unregister(piVar4 + 1);
            }
            else {
                gh_rm_unregister_notifier(piVar4 + 0x17);
            }
            goto code_r0x08001600;
        }
        pcVar8 = "of_address_to_resource failed!\n";
    }
    _dev_err(iVar11,pcVar8);
    uVar6 = 0xffffffea;
code_r0x08001600:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar6 & 0xffffffff;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ddump_remove;
    iVar5 = *(iVar5 + 0xa8);
    gh_dbl_tx_unregister(*(iVar5 + 0xd0));
    gh_dbl_rx_unregister(*(iVar5 + 0xd8));
    if (*(iVar5 + 0xb4) == '\0') {
        wakeup_source_unregister(*(iVar5 + 0x100));
        cVar1 = *(iVar5 + 0xb4);
    }
    else {
        remove_proc_entry("vmkmsg",0);
        cVar1 = *(iVar5 + 0xb4);
    }
    if (cVar1 == '\0') {
        uVar6 = kmsg_dump_unregister(iVar5 + 8);
        if (uVar6 != 0) {
            return uVar6;
        }
    }
    else {
        gh_rm_unregister_notifier(iVar5 + 0xb8);
    }
    return 0;
}


// ===== sym.qcom_ddump_remove @ 0x08001644 (size 136) =====

ulong sym.qcom_ddump_remove(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa8);
    gh_dbl_tx_unregister(*(iVar3 + 0xd0));
    gh_dbl_rx_unregister(*(iVar3 + 0xd8));
    if (*(iVar3 + 0xb4) == '\0') {
        wakeup_source_unregister(*(iVar3 + 0x100));
        cVar1 = *(iVar3 + 0xb4);
    }
    else {
        remove_proc_entry("vmkmsg",0);
        cVar1 = *(iVar3 + 0xb4);
    }
    if (cVar1 == '\0') {
        uVar2 = kmsg_dump_unregister(iVar3 + 8);
        if (uVar2 != 0) {
            return uVar2;
        }
    }
    else {
        gh_rm_unregister_notifier(iVar3 + 0xb8);
    }
    return 0;
}


// ===== sym.qcom_ddump_rm_cb @ 0x080016cc (size 264) =====

uint64_t sym.qcom_ddump_rm_cb(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    char cVar2;
    code *pcVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint *puVar9;
    ushort *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *puVar14;
    ulong *extraout_x1;
    ulong uVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    int64_t unaff_x19;
    ulong *unaff_x20;
    uint *puVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint64_t *puVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    uchar auVar24 [12];
    ulong uStack_1b0;
    int64_t iStack_1a8;
    ulong ****ppppuStack_1a0;
    code *pcStack_198;
    uint64_t uStack_190;
    uint64_t uStack_180;
    uint64_t uStack_178;
    int64_t iStack_170;
    ulong *puStack_168;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar ****ppppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint *puStack_120;
    ulong *puStack_118;
    uint32_t uStack_110;
    uint32_t uStack_10c;
    ulong uStack_108;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    ulong *puStack_e0;
    ulong uStack_c8;
    uint32_t uStack_c0;
    uint32_t uStack_bc;
    ulong uStack_b8;
    uint32_t uStack_ac;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong *puStack_40;
    int64_t iStack_38;
    uint16_t auStack_30 [2];
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_28 = *(iVar19 + 0x5e0);
    auStack_2c[0] = 0;
    auStack_30[0] = 0;
    if ((arg2 == 0x56100008) && ((unaff_x19 = arg3, *(arg3 + 4) == '\v' || (*(arg3 + 4) == '\x02')))) {
        unaff_x20 = arg1 + -0xb8;
        iVar5 = gh_rm_get_vmid(*(arg1 + -0xc),auStack_2c);
        if ((iVar5 == 0) && ((iVar5 = gh_rm_get_vmid(1,auStack_30), iVar5 == 0 && (auStack_2c[0] == *arg3)))) {
            cVar2 = *(arg3 + 4);
            if (cVar2 == '\x02') {
                iVar5 = sym.qcom_ddump_share_mem(unaff_x20,auStack_30[0],auStack_2c[0]);
                if (iVar5 != 0) {
                    _dev_err(*unaff_x20,"Failed to share memory\n");
                    goto code_r0x0800178c;
                }
                cVar2 = *(arg3 + 4);
            }
            if (cVar2 == '\v') {
                sym.qcom_ddump_unshare_mem(unaff_x20,auStack_30[0],auStack_2c[0]);
            }
        }
    }
code_r0x0800178c:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar22 = __stack_chk_fail();
    iVar17 = auVar22._0_8_;
    *extraout_x18 = sym.qcom_ddump_to_shm;
    pcStack_48 = sym.qcom_ddump_to_shm;
    iVar19 = sp_el0;
    iStack_58 = *(iVar19 + 0x5e0);
    uStack_60 = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    puStack_40 = unaff_x20;
    iStack_38 = unaff_x19;
    _dev_warn(*(iVar17 + -8),"reason = %d\n",auVar22._8_8_ & 0xffffffff);
    puVar18 = iVar17 + 0x20;
    kmsg_dump_rewind(puVar18);
    memset(*(iVar17 + 0x90),0,*(iVar17 + 0x98));
    kmsg_dump_get_buffer(puVar18,1,*(iVar17 + 0x90),*(iVar17 + 0x98),&uStack_60);
    uVar20 = uStack_60;
    uVar8 = _dev_warn(*(iVar17 + -8),"size of dmesg logbuf logged = %lld\n");
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    auVar22 = __stack_chk_fail();
    puVar14 = auVar22._0_8_;
    *extraout_x18_00 = sym.qcom_ddump_share_mem;
    pcStack_98 = sym.qcom_ddump_share_mem;
    iVar19 = sp_el0;
    iStack_a8 = *(iVar19 + 0x5e0);
    uVar8 = uVar20 & 0xffffffff;
    uStack_c0 = auVar22._8_4_ & 0xffff;
    uStack_b8 = 7;
    uStack_bc = uVar20 & 0xffff;
    uStack_c8 = 0x600000006;
    uStack_ac = uStack_c0;
    ppuStack_a0 = &puStack_50;
    uVar6 = hyp_assign_phys(puVar14[7],(puVar14[8] - puVar14[7]) + 1,&uStack_ac,1,&uStack_c0,&uStack_c8,2);
    if (uVar6 == 0) {
        uVar6 = 0xc;
        iVar19 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar19 = 0x30;
        }
        puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
        if (puVar9 == NULL) {
            uVar20 = 0xfffffff4;
        }
        else {
            uVar6 = 0x14;
            iVar19 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar19 = 0x30;
            }
            puVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xdc0);
            puVar18 = puVar9;
            if (puVar10 == NULL) {
                kfree(puVar9);
                uVar20 = 0xfffffff4;
            }
            else {
                iVar19 = puVar14[7];
                iVar17 = puVar14[8];
                *puVar9 = 2;
                *(puVar9 + 6) = 6;
                uVar6 = *(puVar14 + 0x15);
                *(puVar9 + 10) = 6;
                *puVar10 = 1;
                *(puVar10 + 2) = iVar19;
                *(puVar9 + 1) = auVar22._8_2_;
                *(puVar10 + 6) = (iVar17 - iVar19) + 1;
                *(puVar9 + 2) = uVar20;
                uVar7 = gh_rm_mem_share(0,0,uVar6,puVar9,puVar10,0,puVar14 + 0x16);
                uVar20 = uVar7;
                if (uVar7 != 0) {
                    _dev_err(*puVar14,"Gunyah mem share addr=%x size=%u failed: %d\n",puVar14[7],puVar14[0x14],
                             uVar20);
                    puVar16 = &uStack_c0;
                    hyp_assign_phys(puVar14[7],(puVar14[8] - puVar14[7]) + 1,puVar16,2,&uStack_ac,&uStack_b8,1);
                    uVar6 = puVar16;
                }
                kfree(puVar9);
                kfree(puVar10);
            }
        }
    }
    else {
        uVar20 = uVar6;
        uVar15 = puVar14[7];
        _dev_err(*puVar14,"hyp_assign_phys addr=%x size=%u failed: %d\n",uVar15,puVar14[0x14],uVar20);
        uVar6 = uVar15;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_a8) {
        return uVar20;
    }
    auVar24 = __stack_chk_fail();
    puVar11 = auVar24._0_8_;
    *extraout_x18_01 = sym.qcom_ddump_unshare_mem;
    pcStack_e8 = sym.qcom_ddump_unshare_mem;
    iVar19 = sp_el0;
    iStack_f8 = *(iVar19 + 0x5e0);
    uStack_110 = auVar24._8_4_ & 0xffff;
    uStack_10c = uVar6 & 0xffff;
    uStack_108 = 7;
    uStack_fc = uStack_110;
    pppuStack_f0 = &ppuStack_a0;
    puStack_e0 = puVar14;
    iVar5 = gh_rm_mem_reclaim(*(puVar11 + 0x16),0);
    if (iVar5 != 0) {
        _dev_err(*puVar11,"Gunyah mem reclaim failed: %d\n",iVar5);
    }
    uVar12 = hyp_assign_phys(puVar11[7],(puVar11[8] - puVar11[7]) + 1,&uStack_110,2,&uStack_fc,&uStack_108,1);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_f8) {
        return uVar12;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.qcom_ddump_gh_cb;
    pcStack_138 = sym.qcom_ddump_gh_cb;
    iVar19 = sp_el0;
    iStack_148 = *(iVar19 + 0x5e0);
    uVar12 = 0x100000000;
    iVar19 = extraout_x1[0x13];
    uStack_158 = 1;
    ppppuStack_140 = &pppuStack_f0;
    uStack_130 = uVar8;
    puStack_120 = puVar18;
    puStack_118 = puVar11;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_158);
    if (*(extraout_x1 + 0xb4) == '\0') {
        uVar8 = 1;
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar12 = 0;
        uStack_150 = 1;
        uVar13 = gh_dbl_send(extraout_x1[0x1a],&uStack_150);
        if (uVar13 == 0) {
            iVar17 = *(iVar19 + 8);
        }
        else {
            uVar12 = uVar13 & 0xffffffff;
            uVar13 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar17 = *(iVar19 + 8);
        }
        if (iVar17 == 0) {
            uVar12 = 1;
            uVar13 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar13 = complete(extraout_x1 + 0x1c);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_148) {
        return uVar13;
    }
    auVar23 = __stack_chk_fail();
    *extraout_x18_03 = sym.qcom_ddump_vmkmsg_read;
    pcStack_198 = sym.qcom_ddump_vmkmsg_read;
    iVar17 = sp_el0;
    iStack_1a8 = *(iVar17 + 0x5e0);
    uVar13 = uVar12;
    ppppuStack_1a0 = &ppppuStack_140;
    uStack_190 = uVar20;
    uStack_180 = auVar22._8_8_ & 0xffffffff;
    uStack_178 = uVar8;
    iStack_170 = iVar19;
    puStack_168 = extraout_x1;
    puVar14 = PDE_DATA(*(auVar23._0_8_ + 0x20));
    if (uVar12 < 0x400) {
        uVar13 = 0x400;
        _dev_err(*puVar14,"user buffer size should greater than %d\n");
        uVar20 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar21 = puVar14[0x13];
    if ((puVar21[2] == '\0') || (0x3ff < puVar21[1])) {
        *puVar21 = uVar12;
        uVar13 = 0;
        uStack_1b0 = 1;
        uVar6 = gh_dbl_send(puVar14[0x1a],&uStack_1b0);
        if (uVar6 != 0) {
            uVar13 = uVar6;
            _dev_err(*puVar14,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar14 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar14,"wait for completion timeout\n");
            uVar20 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar8 = puVar21[1];
        if (uVar12 < uVar8) {
            _dev_err(*puVar14,"can not read the correct length of svm kmsg\n");
            uVar20 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar8 != 0) {
            if (uVar8 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar3)();
            }
            auVar22 = __check_object_size(puVar21 + 3,uVar8,1);
            iVar19 = sym._copy_to_user(auVar23._8_8_,auVar22,uVar8);
            if (iVar19 == 0) {
                uVar20 = puVar21[1];
                uVar13 = uVar8;
            }
            else {
                _dev_err(*puVar14,"copy_to_user fail\n");
                uVar20 = 0xfffffffffffffff2;
                uVar13 = uVar8;
            }
            goto code_r0x08001d24;
        }
    }
    uVar20 = 0;
code_r0x08001d24:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_1a8) {
        return uVar20;
    }
    uVar8 = __stack_chk_fail(uVar20);
    *extraout_x18_04 = sym._copy_to_user;
    puVar14 = sp_el0;
    uVar20 = (uVar8 << 8) >> 8;
    if (((*(puVar14 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar8, (*puVar14 >> 0x1a & 1) != 0)) {
        uVar12 = uVar8 & uVar20;
    }
    bVar4 = CARRY8(uVar12,uVar13);
    uVar12 = uVar12 + uVar13;
    uVar1 = 0;
    if (!bVar4 || uVar12 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar12 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar12,~uVar1) && !CARRY8(uVar12 + ~uVar1,bVar4) || uVar12 == uVar1 + !bVar4) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar13 = daif;
                daif = uVar13 | 0xc0;
            }
            uVar13 = ttbr1_el1;
            ttbr1_el1 = puVar14[1] & 0xffff000000000000 | uVar13 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar14[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar8 & uVar20 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        uVar13 = __arch_copy_to_user(uVar8);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar20 = daif;
            if ((uVar20 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar20;
        }
    }
    return uVar13;
}


// ===== sym.qcom_ddump_to_shm @ 0x080017d4 (size 176) =====

uint64_t sym.qcom_ddump_to_shm(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint *puVar8;
    ushort *puVar9;
    ulong *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    ulong *puVar13;
    ulong *extraout_x1;
    ulong uVar14;
    uint32_t *puVar15;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint *puVar17;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t *puVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auVar23 [12];
    ulong uStack_180;
    int64_t iStack_178;
    uchar ****ppppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_150;
    uint64_t uStack_148;
    int64_t iStack_140;
    ulong *puStack_138;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar ***pppuStack_110;
    code *pcStack_108;
    uint64_t uStack_100;
    uint *puStack_f0;
    ulong *puStack_e8;
    uint32_t uStack_e0;
    uint32_t uStack_dc;
    ulong uStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    ulong *puStack_b0;
    ulong uStack_98;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    ulong uStack_88;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_28 = *(iVar18 + 0x5e0);
    uStack_30 = 0;
    _dev_warn(*(arg1 + -8),"reason = %d\n",arg2 & 0xffffffff);
    puVar17 = arg1 + 0x20;
    kmsg_dump_rewind(puVar17);
    memset(*(arg1 + 0x90),0,*(arg1 + 0x98));
    kmsg_dump_get_buffer(puVar17,1,*(arg1 + 0x90),*(arg1 + 0x98),&uStack_30);
    uVar19 = uStack_30;
    uVar7 = _dev_warn(*(arg1 + -8),"size of dmesg logbuf logged = %lld\n");
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_28) {
        return uVar7;
    }
    auVar21 = __stack_chk_fail();
    puVar13 = auVar21._0_8_;
    *extraout_x18 = sym.qcom_ddump_share_mem;
    pcStack_68 = sym.qcom_ddump_share_mem;
    iVar18 = sp_el0;
    iStack_78 = *(iVar18 + 0x5e0);
    uVar7 = uVar19 & 0xffffffff;
    uStack_90 = auVar21._8_4_ & 0xffff;
    uStack_88 = 7;
    uStack_8c = uVar19 & 0xffff;
    uStack_98 = 0x600000006;
    uStack_7c = uStack_90;
    puStack_70 = &stack0xffffffffffffffe0;
    uVar4 = hyp_assign_phys(puVar13[7],(puVar13[8] - puVar13[7]) + 1,&uStack_7c,1,&uStack_90,&uStack_98,2);
    if (uVar4 == 0) {
        uVar4 = 0xc;
        iVar18 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar18 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0);
        if (puVar8 == NULL) {
            uVar19 = 0xfffffff4;
        }
        else {
            uVar4 = 0x14;
            iVar18 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar18 = 0x30;
            }
            puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xdc0);
            puVar17 = puVar8;
            if (puVar9 == NULL) {
                kfree(puVar8);
                uVar19 = 0xfffffff4;
            }
            else {
                iVar18 = puVar13[7];
                iVar16 = puVar13[8];
                *puVar8 = 2;
                *(puVar8 + 6) = 6;
                uVar4 = *(puVar13 + 0x15);
                *(puVar8 + 10) = 6;
                *puVar9 = 1;
                *(puVar9 + 2) = iVar18;
                *(puVar8 + 1) = auVar21._8_2_;
                *(puVar9 + 6) = (iVar16 - iVar18) + 1;
                *(puVar8 + 2) = uVar19;
                uVar5 = gh_rm_mem_share(0,0,uVar4,puVar8,puVar9,0,puVar13 + 0x16);
                uVar19 = uVar5;
                if (uVar5 != 0) {
                    _dev_err(*puVar13,"Gunyah mem share addr=%x size=%u failed: %d\n",puVar13[7],puVar13[0x14],
                             uVar19);
                    puVar15 = &uStack_90;
                    hyp_assign_phys(puVar13[7],(puVar13[8] - puVar13[7]) + 1,puVar15,2,&uStack_7c,&uStack_88,1);
                    uVar4 = puVar15;
                }
                kfree(puVar8);
                kfree(puVar9);
            }
        }
    }
    else {
        uVar19 = uVar4;
        uVar14 = puVar13[7];
        _dev_err(*puVar13,"hyp_assign_phys addr=%x size=%u failed: %d\n",uVar14,puVar13[0x14],uVar19);
        uVar4 = uVar14;
    }
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_78) {
        return uVar19;
    }
    auVar23 = __stack_chk_fail();
    puVar10 = auVar23._0_8_;
    *extraout_x18_00 = sym.qcom_ddump_unshare_mem;
    pcStack_b8 = sym.qcom_ddump_unshare_mem;
    iVar18 = sp_el0;
    iStack_c8 = *(iVar18 + 0x5e0);
    uStack_e0 = auVar23._8_4_ & 0xffff;
    uStack_dc = uVar4 & 0xffff;
    uStack_d8 = 7;
    uStack_cc = uStack_e0;
    ppuStack_c0 = &puStack_70;
    puStack_b0 = puVar13;
    iVar6 = gh_rm_mem_reclaim(*(puVar10 + 0x16),0);
    if (iVar6 != 0) {
        _dev_err(*puVar10,"Gunyah mem reclaim failed: %d\n",iVar6);
    }
    uVar11 = hyp_assign_phys(puVar10[7],(puVar10[8] - puVar10[7]) + 1,&uStack_e0,2,&uStack_cc,&uStack_d8,1);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_c8) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.qcom_ddump_gh_cb;
    pcStack_108 = sym.qcom_ddump_gh_cb;
    iVar18 = sp_el0;
    iStack_118 = *(iVar18 + 0x5e0);
    uVar11 = 0x100000000;
    iVar18 = extraout_x1[0x13];
    uStack_128 = 1;
    pppuStack_110 = &ppuStack_c0;
    uStack_100 = uVar7;
    puStack_f0 = puVar17;
    puStack_e8 = puVar10;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_128);
    if (*(extraout_x1 + 0xb4) == '\0') {
        uVar7 = 1;
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar11 = 0;
        uStack_120 = 1;
        uVar12 = gh_dbl_send(extraout_x1[0x1a],&uStack_120);
        if (uVar12 == 0) {
            iVar16 = *(iVar18 + 8);
        }
        else {
            uVar11 = uVar12 & 0xffffffff;
            uVar12 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar16 = *(iVar18 + 8);
        }
        if (iVar16 == 0) {
            uVar11 = 1;
            uVar12 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar12 = complete(extraout_x1 + 0x1c);
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_118) {
        return uVar12;
    }
    auVar22 = __stack_chk_fail();
    *extraout_x18_02 = sym.qcom_ddump_vmkmsg_read;
    pcStack_168 = sym.qcom_ddump_vmkmsg_read;
    iVar16 = sp_el0;
    iStack_178 = *(iVar16 + 0x5e0);
    uVar12 = uVar11;
    ppppuStack_170 = &pppuStack_110;
    uStack_160 = uVar19;
    uStack_150 = auVar21._8_8_ & 0xffffffff;
    uStack_148 = uVar7;
    iStack_140 = iVar18;
    puStack_138 = extraout_x1;
    puVar13 = PDE_DATA(*(auVar22._0_8_ + 0x20));
    if (uVar11 < 0x400) {
        uVar12 = 0x400;
        _dev_err(*puVar13,"user buffer size should greater than %d\n");
        uVar19 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar20 = puVar13[0x13];
    if ((puVar20[2] == '\0') || (0x3ff < puVar20[1])) {
        *puVar20 = uVar11;
        uVar12 = 0;
        uStack_180 = 1;
        uVar4 = gh_dbl_send(puVar13[0x1a],&uStack_180);
        if (uVar4 != 0) {
            uVar12 = uVar4;
            _dev_err(*puVar13,"failed to raise virq to the sender %d\n");
        }
        iVar6 = wait_for_completion_timeout(puVar13 + 0x1c,0xfa);
        if (iVar6 == 0) {
            _dev_err(*puVar13,"wait for completion timeout\n");
            uVar19 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar7 = puVar20[1];
        if (uVar11 < uVar7) {
            _dev_err(*puVar13,"can not read the correct length of svm kmsg\n");
            uVar19 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar7 != 0) {
            if (uVar7 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            auVar21 = __check_object_size(puVar20 + 3,uVar7,1);
            iVar18 = sym._copy_to_user(auVar22._8_8_,auVar21,uVar7);
            if (iVar18 == 0) {
                uVar19 = puVar20[1];
                uVar12 = uVar7;
            }
            else {
                _dev_err(*puVar13,"copy_to_user fail\n");
                uVar19 = 0xfffffffffffffff2;
                uVar12 = uVar7;
            }
            goto code_r0x08001d24;
        }
    }
    uVar19 = 0;
code_r0x08001d24:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_178) {
        return uVar19;
    }
    uVar7 = __stack_chk_fail(uVar19);
    *extraout_x18_03 = sym._copy_to_user;
    puVar13 = sp_el0;
    uVar19 = (uVar7 << 8) >> 8;
    if (((*(puVar13 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar7, (*puVar13 >> 0x1a & 1) != 0)) {
        uVar11 = uVar7 & uVar19;
    }
    bVar3 = CARRY8(uVar11,uVar12);
    uVar11 = uVar11 + uVar12;
    uVar1 = 0;
    if (!bVar3 || uVar11 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar11 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar12 = daif;
                daif = uVar12 | 0xc0;
            }
            uVar12 = ttbr1_el1;
            ttbr1_el1 = puVar13[1] & 0xffff000000000000 | uVar12 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar13[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar7 & uVar19 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar12 = __arch_copy_to_user(uVar7);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar19 = daif;
            if ((uVar19 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar19;
        }
    }
    return uVar12;
}


// ===== sym.qcom_ddump_share_mem @ 0x08001884 (size 532) =====

uint64_t sym.qcom_ddump_share_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint *puVar7;
    ushort *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *puVar11;
    ulong *extraout_x1;
    ulong uVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint *unaff_x20;
    int64_t iVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar19 [12];
    uchar auVar20 [16];
    ulong uStack_150;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    uint64_t uStack_120;
    uint64_t uStack_118;
    int64_t iStack_110;
    ulong *puStack_108;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint64_t uStack_d0;
    uint *puStack_c0;
    ulong *puStack_b8;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    ulong uStack_a8;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t iStack_80;
    ulong uStack_68;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    ulong uStack_58;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_48 = *(iVar15 + 0x5e0);
    uVar16 = arg3 & 0xffffffff;
    uStack_60 = arg2 & 0xffff;
    uStack_58 = 7;
    uStack_5c = arg3 & 0xffff;
    uStack_68 = 0x600000006;
    uStack_4c = uStack_60;
    uVar4 = hyp_assign_phys(*(arg1 + 0x38),(*(arg1 + 0x40) - *(arg1 + 0x38)) + 1,&uStack_4c,1,&uStack_60,&uStack_68
                            ,2);
    if (uVar4 == 0) {
        uVar4 = 0xc;
        iVar15 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar15 = 0x30;
        }
        puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0);
        if (puVar7 == NULL) {
            uVar17 = 0xfffffff4;
        }
        else {
            uVar4 = 0x14;
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0);
            unaff_x20 = puVar7;
            if (puVar8 == NULL) {
                kfree(puVar7);
                uVar17 = 0xfffffff4;
            }
            else {
                iVar15 = *(arg1 + 0x38);
                iVar14 = *(arg1 + 0x40);
                *puVar7 = 2;
                *(puVar7 + 6) = 6;
                uVar4 = *(arg1 + 0xa8);
                *(puVar7 + 10) = 6;
                *puVar8 = 1;
                *(puVar8 + 2) = iVar15;
                *(puVar7 + 1) = arg2;
                *(puVar8 + 6) = (iVar14 - iVar15) + 1;
                *(puVar7 + 2) = arg3;
                uVar5 = gh_rm_mem_share(0,0,uVar4,puVar7,puVar8,0,arg1 + 0xb0);
                uVar17 = uVar5;
                if (uVar5 != 0) {
                    _dev_err(*arg1,"Gunyah mem share addr=%x size=%u failed: %d\n",*(arg1 + 0x38),*(arg1 + 0xa0),
                             uVar17);
                    puVar13 = &uStack_60;
                    hyp_assign_phys(*(arg1 + 0x38),(*(arg1 + 0x40) - *(arg1 + 0x38)) + 1,puVar13,2,&uStack_4c,
                                    &uStack_58,1);
                    uVar4 = puVar13;
                }
                kfree(puVar7);
                kfree(puVar8);
            }
        }
    }
    else {
        uVar17 = uVar4;
        uVar12 = *(arg1 + 0x38);
        _dev_err(*arg1,"hyp_assign_phys addr=%x size=%u failed: %d\n",uVar12,*(arg1 + 0xa0),uVar17);
        uVar4 = uVar12;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_48) {
        return uVar17;
    }
    auVar19 = __stack_chk_fail();
    puVar11 = auVar19._0_8_;
    *extraout_x18 = sym.qcom_ddump_unshare_mem;
    pcStack_88 = sym.qcom_ddump_unshare_mem;
    iVar15 = sp_el0;
    iStack_98 = *(iVar15 + 0x5e0);
    uStack_b0 = auVar19._8_4_ & 0xffff;
    uStack_ac = uVar4 & 0xffff;
    uStack_a8 = 7;
    uStack_9c = uStack_b0;
    puStack_90 = &stack0xffffffffffffffc0;
    iStack_80 = arg1;
    iVar6 = gh_rm_mem_reclaim(*(puVar11 + 0x16),0);
    if (iVar6 != 0) {
        _dev_err(*puVar11,"Gunyah mem reclaim failed: %d\n",iVar6);
    }
    uVar9 = hyp_assign_phys(puVar11[7],(puVar11[8] - puVar11[7]) + 1,&uStack_b0,2,&uStack_9c,&uStack_a8,1);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_98) {
        return uVar9;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_ddump_gh_cb;
    pcStack_d8 = sym.qcom_ddump_gh_cb;
    iVar15 = sp_el0;
    iStack_e8 = *(iVar15 + 0x5e0);
    uVar9 = 0x100000000;
    iVar15 = extraout_x1[0x13];
    uStack_f8 = 1;
    ppuStack_e0 = &puStack_90;
    uStack_d0 = uVar16;
    puStack_c0 = unaff_x20;
    puStack_b8 = puVar11;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_f8);
    if (*(extraout_x1 + 0xb4) == '\0') {
        uVar16 = 1;
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar9 = 0;
        uStack_f0 = 1;
        uVar10 = gh_dbl_send(extraout_x1[0x1a],&uStack_f0);
        if (uVar10 == 0) {
            iVar14 = *(iVar15 + 8);
        }
        else {
            uVar9 = uVar10 & 0xffffffff;
            uVar10 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar14 = *(iVar15 + 8);
        }
        if (iVar14 == 0) {
            uVar9 = 1;
            uVar10 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar10 = complete(extraout_x1 + 0x1c);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_e8) {
        return uVar10;
    }
    auVar20 = __stack_chk_fail();
    *extraout_x18_01 = sym.qcom_ddump_vmkmsg_read;
    pcStack_138 = sym.qcom_ddump_vmkmsg_read;
    iVar14 = sp_el0;
    iStack_148 = *(iVar14 + 0x5e0);
    uVar10 = uVar9;
    pppuStack_140 = &ppuStack_e0;
    uStack_130 = uVar17;
    uStack_120 = arg2 & 0xffffffff;
    uStack_118 = uVar16;
    iStack_110 = iVar15;
    puStack_108 = extraout_x1;
    puVar11 = PDE_DATA(*(auVar20._0_8_ + 0x20));
    if (uVar9 < 0x400) {
        uVar10 = 0x400;
        _dev_err(*puVar11,"user buffer size should greater than %d\n");
        uVar16 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar18 = puVar11[0x13];
    if ((puVar18[2] == '\0') || (0x3ff < puVar18[1])) {
        *puVar18 = uVar9;
        uVar10 = 0;
        uStack_150 = 1;
        uVar4 = gh_dbl_send(puVar11[0x1a],&uStack_150);
        if (uVar4 != 0) {
            uVar10 = uVar4;
            _dev_err(*puVar11,"failed to raise virq to the sender %d\n");
        }
        iVar6 = wait_for_completion_timeout(puVar11 + 0x1c,0xfa);
        if (iVar6 == 0) {
            _dev_err(*puVar11,"wait for completion timeout\n");
            uVar16 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar17 = puVar18[1];
        if (uVar9 < uVar17) {
            _dev_err(*puVar11,"can not read the correct length of svm kmsg\n");
            uVar16 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar17 != 0) {
            if (uVar17 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(puVar18 + 3,uVar17,1);
            iVar15 = sym._copy_to_user(auVar20._8_8_,noname_1,uVar17);
            if (iVar15 == 0) {
                uVar16 = puVar18[1];
                uVar10 = uVar17;
            }
            else {
                _dev_err(*puVar11,"copy_to_user fail\n");
                uVar16 = 0xfffffffffffffff2;
                uVar10 = uVar17;
            }
            goto code_r0x08001d24;
        }
    }
    uVar16 = 0;
code_r0x08001d24:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_148) {
        return uVar16;
    }
    uVar17 = __stack_chk_fail(uVar16);
    *extraout_x18_02 = sym._copy_to_user;
    puVar11 = sp_el0;
    uVar16 = (uVar17 << 8) >> 8;
    if (((*(puVar11 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar17, (*puVar11 >> 0x1a & 1) != 0)) {
        uVar9 = uVar17 & uVar16;
    }
    bVar3 = CARRY8(uVar9,uVar10);
    uVar9 = uVar9 + uVar10;
    uVar1 = 0;
    if (!bVar3 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar3) || uVar9 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr1_el1 = puVar11[1] & 0xffff000000000000 | uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar11[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar17 & uVar16 & 0xffffff8000000000) != 0) {
            uVar17 = 0;
        }
        uVar10 = __arch_copy_to_user(uVar17);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar16 = daif;
            if ((uVar16 & 0x80) == 0) {
                uVar17 = daif;
                daif = uVar17 | 0xc0;
            }
            uVar17 = ttbr1_el1;
            ttbr0_el1 = (uVar17 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar17 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar16;
        }
    }
    return uVar10;
}


// ===== sym.qcom_ddump_unshare_mem @ 0x08001a98 (size 188) =====

uint64_t sym.qcom_ddump_unshare_mem(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *puVar8;
    ulong *extraout_x1;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar13 [16];
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    ulong uStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_40 = arg2 & 0xffff;
    uStack_3c = arg3 & 0xffff;
    uStack_38 = 7;
    uStack_2c = uStack_40;
    iVar4 = gh_rm_mem_reclaim(*(arg1 + 0xb0),0);
    if (iVar4 != 0) {
        _dev_err(*arg1,"Gunyah mem reclaim failed: %d\n",iVar4);
    }
    uVar6 = hyp_assign_phys(*(arg1 + 0x38),(*(arg1 + 0x40) - *(arg1 + 0x38)) + 1,&uStack_40,2,&uStack_2c,&uStack_38
                            ,1);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_ddump_gh_cb;
    pcStack_68 = sym.qcom_ddump_gh_cb;
    iVar10 = sp_el0;
    iStack_78 = *(iVar10 + 0x5e0);
    uVar6 = 0x100000000;
    iVar10 = extraout_x1[0x13];
    uStack_88 = 1;
    puStack_70 = &stack0xffffffffffffffe0;
    gh_dbl_read_and_clean(extraout_x1[0x1b],&uStack_88);
    if (*(extraout_x1 + 0xb4) == '\0') {
        pm_wakeup_ws_event(extraout_x1[0x20],2000,1);
        uVar6 = 0;
        uStack_80 = 1;
        uVar7 = gh_dbl_send(extraout_x1[0x1a],&uStack_80);
        if (uVar7 == 0) {
            iVar10 = *(iVar10 + 8);
        }
        else {
            uVar6 = uVar7 & 0xffffffff;
            uVar7 = _dev_err(*extraout_x1,"failed to raise virq to the sender %d\n");
            iVar10 = *(iVar10 + 8);
        }
        if (iVar10 == 0) {
            uVar6 = 1;
            uVar7 = pm_wakeup_ws_event(extraout_x1[0x20],0);
        }
    }
    else {
        uVar7 = complete(extraout_x1 + 0x1c);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_78) {
        return uVar7;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_ddump_vmkmsg_read;
    pcStack_c8 = sym.qcom_ddump_vmkmsg_read;
    iVar10 = sp_el0;
    iStack_d8 = *(iVar10 + 0x5e0);
    uVar7 = uVar6;
    ppuStack_d0 = &puStack_70;
    puVar8 = PDE_DATA(*(auVar13._0_8_ + 0x20));
    if (uVar6 < 0x400) {
        uVar7 = 0x400;
        _dev_err(*puVar8,"user buffer size should greater than %d\n");
        uVar6 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar12 = puVar8[0x13];
    if ((puVar12[2] == '\0') || (0x3ff < puVar12[1])) {
        *puVar12 = uVar6;
        uVar7 = 0;
        uStack_e0 = 1;
        uVar5 = gh_dbl_send(puVar8[0x1a],&uStack_e0);
        if (uVar5 != 0) {
            uVar7 = uVar5;
            _dev_err(*puVar8,"failed to raise virq to the sender %d\n");
        }
        iVar4 = wait_for_completion_timeout(puVar8 + 0x1c,0xfa);
        if (iVar4 == 0) {
            _dev_err(*puVar8,"wait for completion timeout\n");
            uVar6 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar11 = puVar12[1];
        if (uVar6 < uVar11) {
            _dev_err(*puVar8,"can not read the correct length of svm kmsg\n");
            uVar6 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar11 != 0) {
            if (uVar11 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(puVar12 + 3,uVar11,1);
            iVar10 = sym._copy_to_user(auVar13._8_8_,noname_1,uVar11);
            if (iVar10 == 0) {
                uVar6 = puVar12[1];
                uVar7 = uVar11;
            }
            else {
                _dev_err(*puVar8,"copy_to_user fail\n");
                uVar6 = 0xfffffffffffffff2;
                uVar7 = uVar11;
            }
            goto code_r0x08001d24;
        }
    }
    uVar6 = 0;
code_r0x08001d24:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_d8) {
        return uVar6;
    }
    uVar11 = __stack_chk_fail(uVar6);
    *extraout_x18_01 = sym._copy_to_user;
    puVar8 = sp_el0;
    uVar6 = (uVar11 << 8) >> 8;
    if (((*(puVar8 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar11, (*puVar8 >> 0x1a & 1) != 0)) {
        uVar9 = uVar11 & uVar6;
    }
    bVar3 = CARRY8(uVar9,uVar7);
    uVar9 = uVar9 + uVar7;
    uVar1 = 0;
    if (!bVar3 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar3) || uVar9 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar7 = daif;
            if ((uVar7 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr1_el1 = puVar8[1] & 0xffff000000000000 | uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar8[1];
            InstructionSynchronizationBarrier();
            daif = uVar7;
        }
        if ((uVar11 & uVar6 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar7 = __arch_copy_to_user(uVar11);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
    }
    return uVar7;
}


// ===== sym.qcom_ddump_gh_cb @ 0x08001b54 (size 244) =====

uint64_t sym.qcom_ddump_gh_cb(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *puVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar13 [16];
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    uVar8 = 0x100000000;
    iVar10 = *(arg1 + 0x98);
    uStack_48 = 1;
    gh_dbl_read_and_clean(*(arg1 + 0xd8),&uStack_48);
    if (*(arg1 + 0xb4) == '\0') {
        pm_wakeup_ws_event(*(arg1 + 0x100),2000,1);
        uVar8 = 0;
        uStack_40 = 1;
        uVar6 = gh_dbl_send(*(arg1 + 0xd0),&uStack_40);
        if (uVar6 == 0) {
            iVar10 = *(iVar10 + 8);
        }
        else {
            uVar8 = uVar6 & 0xffffffff;
            uVar6 = _dev_err(*arg1,"failed to raise virq to the sender %d\n");
            iVar10 = *(iVar10 + 8);
        }
        if (iVar10 == 0) {
            uVar8 = 1;
            uVar6 = pm_wakeup_ws_event(*(arg1 + 0x100),0);
        }
    }
    else {
        uVar6 = complete(arg1 + 0xe0);
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_ddump_vmkmsg_read;
    pcStack_88 = sym.qcom_ddump_vmkmsg_read;
    iVar10 = sp_el0;
    iStack_98 = *(iVar10 + 0x5e0);
    uVar6 = uVar8;
    puStack_90 = &stack0xffffffffffffffd0;
    puVar7 = PDE_DATA(*(auVar13._0_8_ + 0x20));
    if (uVar8 < 0x400) {
        uVar6 = 0x400;
        _dev_err(*puVar7,"user buffer size should greater than %d\n");
        uVar8 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    puVar12 = puVar7[0x13];
    if ((puVar12[2] == '\0') || (0x3ff < puVar12[1])) {
        *puVar12 = uVar8;
        uVar6 = 0;
        uStack_a0 = 1;
        uVar4 = gh_dbl_send(puVar7[0x1a],&uStack_a0);
        if (uVar4 != 0) {
            uVar6 = uVar4;
            _dev_err(*puVar7,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar7 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar7,"wait for completion timeout\n");
            uVar8 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar11 = puVar12[1];
        if (uVar8 < uVar11) {
            _dev_err(*puVar7,"can not read the correct length of svm kmsg\n");
            uVar8 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar11 != 0) {
            if (uVar11 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(puVar12 + 3,uVar11,1);
            iVar10 = sym._copy_to_user(auVar13._8_8_,noname_1,uVar11);
            if (iVar10 == 0) {
                uVar8 = puVar12[1];
                uVar6 = uVar11;
            }
            else {
                _dev_err(*puVar7,"copy_to_user fail\n");
                uVar8 = 0xfffffffffffffff2;
                uVar6 = uVar11;
            }
            goto code_r0x08001d24;
        }
    }
    uVar8 = 0;
code_r0x08001d24:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_98) {
        return uVar8;
    }
    uVar11 = __stack_chk_fail(uVar8);
    *extraout_x18_00 = sym._copy_to_user;
    puVar7 = sp_el0;
    uVar8 = (uVar11 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar11, (*puVar7 >> 0x1a & 1) != 0)) {
        uVar9 = uVar11 & uVar8;
    }
    bVar3 = CARRY8(uVar9,uVar6);
    uVar9 = uVar9 + uVar6;
    uVar1 = 0;
    if (!bVar3 || uVar9 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar9,~uVar1) && !CARRY8(uVar9 + ~uVar1,bVar3) || uVar9 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((uVar11 & uVar8 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar6 = __arch_copy_to_user(uVar11);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    return uVar6;
}


// ===== sym.qcom_ddump_vmkmsg_read @ 0x08001c48 (size 404) =====

uint64_t sym.qcom_ddump_vmkmsg_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    code *pcVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uVar9 = arg3;
    puVar6 = PDE_DATA(*(arg1 + 0x20));
    if (arg3 < 0x400) {
        uVar9 = 0x400;
        _dev_err(*puVar6,"user buffer size should greater than %d\n");
        uVar8 = 0xffffffffffffffea;
        goto code_r0x08001d24;
    }
    piVar12 = puVar6[0x13];
    if ((piVar12[2] == '\0') || (0x3ff < piVar12[1])) {
        *piVar12 = arg3;
        uVar9 = 0;
        uStack_50 = 1;
        uVar4 = gh_dbl_send(puVar6[0x1a],&uStack_50);
        if (uVar4 != 0) {
            uVar9 = uVar4;
            _dev_err(*puVar6,"failed to raise virq to the sender %d\n");
        }
        iVar5 = wait_for_completion_timeout(puVar6 + 0x1c,0xfa);
        if (iVar5 == 0) {
            _dev_err(*puVar6,"wait for completion timeout\n");
            uVar8 = 0xffffffffffffff92;
            goto code_r0x08001d24;
        }
        uVar11 = piVar12[1];
        if (arg3 < uVar11) {
            _dev_err(*puVar6,"can not read the correct length of svm kmsg\n");
            uVar8 = 0xffffffffffffffea;
            goto code_r0x08001d24;
        }
        if (uVar11 != 0) {
            if (uVar11 >> 0x1f != 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x8001dc0);
                (*pcVar2)();
            }
            noname_1 = __check_object_size(piVar12 + 3,uVar11,1);
            iVar7 = sym._copy_to_user(arg2,noname_1,uVar11);
            if (iVar7 == 0) {
                uVar8 = piVar12[1];
                uVar9 = uVar11;
            }
            else {
                _dev_err(*puVar6,"copy_to_user fail\n");
                uVar8 = 0xfffffffffffffff2;
                uVar9 = uVar11;
            }
            goto code_r0x08001d24;
        }
    }
    uVar8 = 0;
code_r0x08001d24:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    uVar11 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym._copy_to_user;
    puVar6 = sp_el0;
    uVar8 = (uVar11 << 8) >> 8;
    if (((*(puVar6 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar11, (*puVar6 >> 0x1a & 1) != 0)) {
        uVar10 = uVar11 & uVar8;
    }
    bVar3 = CARRY8(uVar10,uVar9);
    uVar10 = uVar10 + uVar9;
    uVar1 = 0;
    if (!bVar3 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar10 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar3) || uVar10 == uVar1 + !bVar3) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar9 = daif;
            if ((uVar9 & 0x80) == 0) {
                uVar10 = daif;
                daif = uVar10 | 0xc0;
            }
            uVar10 = ttbr1_el1;
            ttbr1_el1 = puVar6[1] & 0xffff000000000000 | uVar10 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar6[1];
            InstructionSynchronizationBarrier();
            daif = uVar9;
        }
        if ((uVar11 & uVar8 & 0xffffff8000000000) != 0) {
            uVar11 = 0;
        }
        uVar9 = __arch_copy_to_user(uVar11);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar11 = daif;
                daif = uVar11 | 0xc0;
            }
            uVar11 = ttbr1_el1;
            ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar11 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    return uVar9;
}


// ===== sym._copy_to_user @ 0x08001ddc (size 312) =====

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
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
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
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08001f50 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f94

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
    //switch table (4 cases) at 0x800055a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001fb4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001fe8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_ddump_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

