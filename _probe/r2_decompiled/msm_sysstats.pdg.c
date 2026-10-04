// decompiled from msm_sysstats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x08002bf4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xb5e713949a242a1) {
        if (arg1 < -0x156acdc0cfd5f5ac) {
            if (arg1 == -0x4d7e2f04b135d45c) {
                pcVar2 = sym.sysstats_meminfo_user_cmd.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt;
                goto code_r0x08001150;
            }
            if (arg1 != -0x26129460156ffe87) goto code_r0x08002bb4;
            pcVar2 = sym.__typeid__ZTSFyiE_global_addr;
        }
        else if (arg1 == -0x156acdc0cfd5f5ac) {
            pcVar2 = sym.sysstats_pre_doit.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002bb4;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3e48e028d83f0c1a) {
        if (arg1 == 0xb5e713949a242a1) {
            pcVar2 = sym.sysstats_task_foreach.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt;
code_r0x08001150:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002bb4;
        }
        if (arg1 != 0x1f2df59bc2e8108c) goto code_r0x08002bb4;
        pcVar2 = sym.sysstats_register_kgsl_stats_cb.cfi_jt;
    }
    else {
        if (arg1 != 0x3e48e028d83f0c1a) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002bb4;
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x08001150;
        }
        pcVar2 = sym.get_dma_info.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002bb4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002c08);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFyiE_global_addr @ 0x08001198 (size 8) =====

ulong sym.__typeid__ZTSFyiE_global_addr(void)

{
    return 0;
}


// ===== sym.sysstats_pre_doit.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011a0 (size 8) =====

ulong sym.sysstats_pre_doit.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    char cVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar2 = *(param_1 + 0x2c);
    if (cVar2 != '\x05') {
        if (cVar2 == '\x03') {
            pcVar4 = NULL;
            goto code_r0x0800126c;
        }
        if (cVar2 != '\x01') {
            return 0xffffffea;
        }
    }
    pcVar4 = obj.sysstats_cmd_get_policy;
code_r0x0800126c:
    uVar1 = **(param_3 + 8);
    if (uVar1 < 0x14) {
        return 0xffffffea;
    }
    uVar3 = __nla_validate(*(param_3 + 8) + 5,uVar1 - 0x14,3,pcVar4,0,*(param_3 + 0x40));
    return uVar3;
}


// ===== sym.sysstats_register_kgsl_stats_cb.cfi_jt @ 0x080011a8 (size 8) =====

void sym.sysstats_register_kgsl_stats_cb.cfi_jt(ulong param_1)

{
    _segment.ehdr = param_1;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.family);
    if (iVar1 == 0) {
        _segment.ehdr = sym.__typeid__ZTSFyiE_global_addr;
        _printk(0x800067a,2);
    }
    return iVar1;
}


// ===== sym.get_dma_info.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.get_dma_info.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = is_dma_buf_file(param_2);
    if (iVar1 != 0) {
        piVar3 = *(param_2 + 0xd8);
        iVar2 = piVar3[0xe];
        iVar1 = strcmp(iVar2,"qcom,system");
        if ((((iVar1 == 0) || (iVar1 = strcmp(iVar2,"qcom,system-uncached"), iVar1 == 0)) ||
            (iVar1 = strcmp(iVar2,"system-secure"), iVar1 == 0)) ||
           ((iVar1 = strcmp(iVar2,"qcom,secure-pixel"), iVar1 == 0 ||
            (iVar1 = strcmp(iVar2,"qcom,secure-non-pixel"), iVar1 == 0)))) {
            *param_1 = *param_1 + *piVar3;
        }
    }
    return 0;
}


// ===== sym.sysstats_meminfo_user_cmd.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011c0 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.sysstats_meminfo_user_cmd.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t unaff_x21;
    code *unaff_x22;
    code *arg1;
    ulong uVar9;
    ulong unaff_x30;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t aiStack_e8 [17];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    aiStack_e8[0xf] = *(iVar8 + 0x5e0);
    aiStack_e8[0] = 0;
    uVar3 = sym.prepare_reply(param_2,4,aiStack_e8,0x124);
    iVar6 = aiStack_e8[0];
    iVar8 = param_2;
    iVar4 = unaff_x21;
    if (uVar3 < 0) goto code_r0x08001b9c;
    iVar4 = nla_reserve(aiStack_e8[0],4,0x120);
    if (iVar4 == 0) {
        kfree_skb(iVar6);
        uVar3 = 0xffffffa6;
        iVar4 = unaff_x21;
        goto code_r0x08001b9c;
    }
    iStack_110 = iVar6;
    memset(iVar4 + 4,0,0x120);
    aiStack_e8[0xd] = 0;
    aiStack_e8[0xe] = 0;
    aiStack_e8[0xb] = 0;
    aiStack_e8[0xc] = 0;
    aiStack_e8[9] = 0;
    aiStack_e8[10] = 0;
    aiStack_e8[7] = 0;
    aiStack_e8[8] = 0;
    aiStack_e8[5] = 0;
    aiStack_e8[6] = 0;
    aiStack_e8[3] = 0;
    aiStack_e8[4] = 0;
    aiStack_e8[1] = 0;
    aiStack_e8[2] = 0;
    si_meminfo(aiStack_e8 + 1);
    si_swapinfo(aiStack_e8 + 1);
    *(iVar4 + 4) = aiStack_e8[5] << 2;
    *(iVar4 + 0xc) = (_vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    __rcu_read_lock();
    arg1 = *0x8019514 + -0x4d0;
    if (arg1 == init_task) {
        iVar8 = 0;
    }
    else {
        iVar8 = 0;
        iVar6 = *0x8019514;
        do {
            _raw_spin_lock(iVar6 + 0x3b0);
            iVar5 = sym.get_task_unreclaimable_info(arg1);
            iVar8 = iVar5 + iVar8;
            _raw_spin_unlock(iVar6 + 0x3b0);
            iVar6 = *(arg1 + 0x4d0);
            arg1 = iVar6 + -0x4d0;
        } while (arg1 != init_task);
    }
    __rcu_read_unlock();
    unaff_x22 = _segment.ehdr;
    iStack_108 = param_2;
    if (_segment.ehdr != sym.__typeid__ZTSFyiE_global_addr) goto code_r0x08001bdc;
    do {
        uVar3 = (*unaff_x22)(0xffffffff);
        *(iVar4 + 0x14) = (iVar8 + (uVar3 >> 0xc)) * 4;
        *(iVar4 + 0x34) = aiStack_e8[8] << 2;
        *(iVar4 + 0x2c) = aiStack_e8[9] << 2;
        *(iVar4 + 0x24) = (aiStack_e8[9] - aiStack_e8[10]) * 4;
        iVar8 = vmalloc_nr_pages();
        *(iVar4 + 0x3c) = iVar8 << 2;
        iVar8 = 0;
        iVar6 = 0;
        unaff_x22 = 0x8000576;
        *(iVar4 + 0x44) = (*0x8019150 & (*0x8019150 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x4c) = (_vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x54) = (_kfree_skb & (_kfree_skb >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x5c) = (_vm_zone_stat & (_vm_zone_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 100) = (_pid_task & (_pid_task >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x74) = *0x8019138 & (*0x8019138 >> 0x3f ^ 0xffffffffffffffffU);
        *(iVar4 + 0x6c) = (*0x8019148 & (*0x8019148 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x7c) = aiStack_e8[7] << 2;
        do {
            if (*(iVar8 + 0x80190c8) != 0) {
                uVar9 = *(iVar8 + 0x80190e0);
                iVar6 = (*(iVar8 + 0x8019658) & (*(iVar8 + 0x8019658) >> 0x3f ^ 0xffffffffffffffffU)) + iVar6;
                iVar1 = strcmp(uVar9,0x8000576);
                if (iVar1 == 0) {
                    *(iVar4 + 0x84) = (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x8c) = (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x94) = (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x9c) = (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    uVar3 = *(iVar8 + 0x8019628);
                    piVar7 = iVar4 + 0xa4;
                }
                else {
                    iVar1 = strcmp(uVar9,"Normal");
                    if (iVar1 == 0) {
                        *(iVar4 + 0xac) =
                             (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xb4) =
                             (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xbc) =
                             (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xc4) =
                             (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        uVar3 = *(iVar8 + 0x8019628);
                        piVar7 = iVar4 + 0xcc;
                    }
                    else {
                        iVar1 = strcmp(uVar9,"HighMem");
                        if (iVar1 == 0) {
                            *(iVar4 + 0xfc) =
                                 (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x104) =
                                 (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x10c) =
                                 (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x114) =
                                 (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            uVar3 = *(iVar8 + 0x8019628);
                            piVar7 = iVar4 + 0x11c;
                        }
                        else {
                            iVar1 = strcmp(uVar9,"Movable");
                            if (iVar1 != 0) goto code_r0x080019bc;
                            *(iVar4 + 0xd4) =
                                 (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xdc) =
                                 (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xe4) =
                                 (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xec) =
                                 (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            uVar3 = *(iVar8 + 0x8019628);
                            piVar7 = iVar4 + 0xf4;
                        }
                    }
                }
                *piVar7 = (uVar3 & (uVar3 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
            }
code_r0x080019bc:
            iVar8 = iVar8 + 0x640;
        } while (iVar8 < 0x12c0);
        *(iVar4 + 0x1c) = iVar6 << 2;
        **(iStack_110 + 0xd8) = (*(iStack_110 + 0xd0) + *(iStack_110 + 200)) - *(iStack_110 + 0xd8);
        uVar2 = netlink_unicast(*(*(iStack_108 + 0x28) + 0x118),iStack_110,*(iStack_108 + 4),0x40);
        uVar3 = uVar2 & uVar2 >> 0x1f;
        iVar8 = 0x12c0;
code_r0x08001b9c:
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == aiStack_e8[0xf]) {
            return;
        }
        __stack_chk_fail(uVar3);
code_r0x08001bdc:
        __cfi_slowpath_diag(0xd9ed6b9fea900179,unaff_x22,0x8000540);
    } while( true );
}


// ===== sym.sysstats_task_user_cmd.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.sysstats_task_user_cmd.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_2 + 0x20) + 8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = sym.sysstats_task_cmd_attr_pid(param_2);
    }
    return uVar1;
}


// ===== sym.sysstats_task_foreach.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011d0 (size 8) =====

uint sym.sysstats_task_foreach.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int16_t iVar5;
    char cVar6;
    ulong uVar7;
    code *pcVar8;
    bool bVar9;
    bool bVar10;
    uint uVar11;
    int64_t arg1;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong *in_x18;
    uint64_t uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    
    *in_x18 = unaff_x30;
    uVar7 = sp_el0;
    arg1 = task_active_pid_ns();
    iVar12 = nla_find(param_2[1] + 5,*param_2[1] + -0x14,2);
    if (iVar12 != 0) {
        iVar4 = *(iVar12 + 4);
        auVar20 = sym.next_tgid(arg1,*(param_2 + 10),0);
        uVar17 = auVar20._0_8_;
        if (auVar20._8_8_ != 0) {
            iVar3 = iVar4 >> 0x10;
code_r0x080013b4:
            iVar12 = auVar20._8_8_;
            uVar17 = auVar20._0_8_;
            if ((*(iVar12 + 0x3e) >> 5 & 1) != 0) goto code_r0x08001390;
            iVar5 = *(*(iVar12 + 0x7f0) + 0x3c2);
            bVar9 = true;
            bVar10 = false;
            if (iVar4 <= iVar5) {
                bVar10 = SBORROW4(iVar3,iVar5);
                bVar9 = iVar3 - iVar5 < 0;
            }
            if (bVar9 != bVar10) goto code_r0x08001390;
            iVar13 = genlmsg_put(param_1,*(*param_2 + 0x34),*(param_2[1] + 8),obj.family,0,1);
            if (iVar13 == 0) {
                piVar2 = iVar12 + 0x38;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    iVar4 = *piVar2;
                    cVar6 = '\x01';
                    bVar9 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar9) {
                        *piVar2 = iVar4 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(iVar12);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar2,3);
                }
            }
            else {
                iVar14 = nla_reserve(param_1,3,0x98);
                if (iVar14 != 0) {
                    *(iVar14 + 0x94) = 0;
                    *(iVar14 + 0x8c) = 0;
                    *(iVar14 + 0x84) = 0;
                    *(iVar14 + 0x7c) = 0;
                    *(iVar14 + 0x74) = 0;
                    *(iVar14 + 0x6c) = 0;
                    *(iVar14 + 100) = 0;
                    *(iVar14 + 0x5c) = 0;
                    *(iVar14 + 0x54) = 0;
                    *(iVar14 + 0x4c) = 0;
                    *(iVar14 + 0x44) = 0;
                    *(iVar14 + 0x3c) = 0;
                    *(iVar14 + 0x34) = 0;
                    *(iVar14 + 0x2c) = 0;
                    *(iVar14 + 0x24) = 0;
                    *(iVar14 + 0x1c) = 0;
                    *(iVar14 + 0x14) = 0;
                    *(iVar14 + 0xc) = 0;
                    *(iVar14 + 4) = 0;
                    __rcu_read_lock();
                    uVar15 = task_active_pid_ns(uVar7);
                    uVar11 = __task_pid_nr_ns(iVar12,0,uVar15);
                    *(iVar14 + 0x50) = uVar11;
                    *(iVar14 + 0x4c) = *(*(iVar12 + 0x7f0) + 0x3c2);
                    __rcu_read_unlock();
                    __rcu_read_lock();
                    for (piVar19 = *(*(iVar12 + 0x7f0) + 0x10); *(iVar12 + 0x7f0) + 0x10 != piVar19; piVar19 = *piVar19)
                    {
                        iVar1 = piVar19 + 0x3d;
                        _raw_spin_lock(iVar1);
                        piVar18 = piVar19 + -0x2f;
                        if (*piVar18 != 0) {
                            __rcu_read_unlock();
                            if (piVar19 + -0xd3 != NULL) {
                                *(iVar14 + 4) =
                                     (*(*piVar18 + 0x2e0) & (*(*piVar18 + 0x2e0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0xc) =
                                     (*(*piVar18 + 0x2d8) & (*(*piVar18 + 0x2d8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0x1c) =
                                     (*(*piVar18 + 0x2f0) & (*(*piVar18 + 0x2f0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0x14) =
                                     (*(*piVar18 + 0x2e8) & (*(*piVar18 + 0x2e8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                iVar16 = sym.get_task_unreclaimable_info(piVar19 + -0xd3);
                                *(iVar14 + 0x24) = iVar16 << 2;
                                _raw_spin_unlock(iVar1);
                            }
                            goto code_r0x08001370;
                        }
                        _raw_spin_unlock(iVar1);
                    }
                    __rcu_read_unlock();
code_r0x08001370:
                    *(iVar13 + -0x14) = (*(param_1 + 0xd0) + *(param_1 + 200)) - (iVar13 + -0x14);
                    goto code_r0x08001390;
                }
                piVar2 = iVar12 + 0x38;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    iVar4 = *piVar2;
                    cVar6 = '\x01';
                    bVar9 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar9) {
                        *piVar2 = iVar4 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(iVar12);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar2,3);
                }
                if (iVar13 != 0x14) {
                    if (iVar13 - 0x14U < *(param_1 + 0xd8)) {
    //WARNING: Does not return
                        pcVar8 = SoftwareBreakpoint(0x800,0x8001668);
                        (*pcVar8)();
                    }
                    skb_trim(param_1,(iVar13 - 0x14U) - *(param_1 + 0xd8));
                }
            }
        }
code_r0x08001630:
        param_2[10] = uVar17 & 0xffffffff;
    }
    return *(param_1 + 0x70);
code_r0x08001390:
    auVar20 = sym.next_tgid(arg1,auVar20._0_4_ + 1 | uVar17 & 0xffffffff00000000,iVar12);
    uVar17 = auVar20._0_8_;
    if (auVar20._8_8_ == 0) goto code_r0x08001630;
    goto code_r0x080013b4;
}


// ===== sym.sysstats_all_pids_of_name.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt @ 0x080011d8 (size 8) =====

uint sym.sysstats_all_pids_of_name.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt(int64_t param_1,int64_t *param_2)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    code *pcVar6;
    int iVar7;
    int64_t arg1;
    uint16_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    
    *in_x18 = unaff_x30;
    uVar5 = sp_el0;
    arg1 = task_active_pid_ns(uVar5);
    puVar8 = nla_find(param_2[1] + 5,*param_2[1] + -0x14,3);
    if (puVar8 != NULL) {
        iVar12 = *puVar8 - 4;
        if (iVar12 == 0) {
            iVar13 = 0;
        }
        else {
            iVar13 = *puVar8 - 5;
            if (*(puVar8 + 2 + iVar13) != '\0') {
                iVar13 = iVar12;
            }
        }
        iVar12 = __kmalloc(iVar13 + 1,0xcc0);
        if (iVar12 != 0) {
            memcpy(iVar12,puVar8 + 2,iVar13);
            uVar2 = *(param_2 + 10);
            *(iVar12 + iVar13) = 0;
            auVar15 = sym.next_tgid(arg1,uVar2,0);
            uVar14 = auVar15._0_8_;
            if (auVar15._8_8_ != 0) {
code_r0x08001d68:
                iVar13 = auVar15._8_8_;
                uVar14 = auVar15._0_8_;
                iVar7 = strcmp(iVar13 + 0x7a8,iVar12);
                if (iVar7 != 0) goto code_r0x08001d44;
                iVar9 = genlmsg_put(param_1,*(*param_2 + 0x34),*(param_2[1] + 8),obj.family,0,5);
                if (iVar9 == 0) {
                    piVar1 = iVar13 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar7 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar7 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar7 == 1) {
                        DataMemoryBarrier(2,1);
                        __put_task_struct(iVar13);
                    }
                    else if (iVar7 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                }
                else {
                    iVar10 = nla_reserve(param_1,5,8);
                    if (iVar10 != 0) {
                        *(iVar10 + 4) = 0;
                        __rcu_read_lock();
                        uVar11 = task_active_pid_ns(uVar5);
                        iVar7 = __task_pid_nr_ns(iVar13,0,uVar11);
                        *(iVar10 + 4) = iVar7;
                        __rcu_read_unlock();
                        *(iVar9 + -0x14) = (*(param_1 + 0xd0) + *(param_1 + 200)) - (iVar9 + -0x14);
                        goto code_r0x08001d44;
                    }
                    piVar1 = iVar13 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar7 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar7 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar7 == 1) {
                        DataMemoryBarrier(2,1);
                        __put_task_struct(iVar13);
                    }
                    else if (iVar7 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                    if (iVar9 != 0x14) {
                        if (iVar9 - 0x14U < *(param_1 + 0xd8)) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8001f08);
                            (*pcVar6)();
                        }
                        skb_trim(param_1,(iVar9 - 0x14U) - *(param_1 + 0xd8));
                    }
                }
            }
code_r0x08001ecc:
            param_2[10] = uVar14 & 0xffffffff;
            kfree(iVar12);
        }
    }
    return *(param_1 + 0x70);
code_r0x08001d44:
    auVar15 = sym.next_tgid(arg1,auVar15._0_4_ + 1 | uVar14 & 0xffffffff00000000,iVar13);
    uVar14 = auVar15._0_8_;
    if (auVar15._8_8_ == 0) goto code_r0x08001ecc;
    goto code_r0x08001d68;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.family);
    return;
}


// ===== sym.sysstats_unregister_kgsl_stats_cb.cfi_jt @ 0x080011e8 (size 8) =====

void sym.sysstats_unregister_kgsl_stats_cb.cfi_jt(void)

{
    _segment.ehdr = sym.__typeid__ZTSFyiE_global_addr;
    return;
}


// ===== sym.sysstats_register_kgsl_stats_cb @ 0x080011f0 (size 20) =====

void sym.sysstats_register_kgsl_stats_cb(int64_t arg1)

{
    _segment.ehdr = arg1;
    return;
}


// ===== sym.sysstats_unregister_kgsl_stats_cb @ 0x08001204 (size 28) =====

void sym.sysstats_unregister_kgsl_stats_cb(void)

{
    _segment.ehdr = sym.__typeid__ZTSFyiE_global_addr;
    return;
}


// ===== sym.sysstats_kgsl_stats @ 0x08001220 (size 16) =====

ulong sym.sysstats_kgsl_stats(void)

{
    return 0;
}


// ===== sym.sysstats_pre_doit @ 0x08001230 (size 120) =====

ulong sym.sysstats_pre_doit(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar2 = *(arg1 + 0x2c);
    if (cVar2 != '\x05') {
        if (cVar2 == '\x03') {
            pcVar4 = NULL;
            goto code_r0x0800126c;
        }
        if (cVar2 != '\x01') {
            return 0xffffffea;
        }
    }
    pcVar4 = obj.sysstats_cmd_get_policy;
code_r0x0800126c:
    uVar1 = **(arg2 + 8);
    if (uVar1 < 0x14) {
        return 0xffffffea;
    }
    uVar3 = __nla_validate(*(arg2 + 8) + 5,uVar1 - 0x14,3,pcVar4,0,*(arg2 + 0x40));
    return uVar3;
}


// ===== sym.sysstats_task_user_cmd @ 0x080012a8 (size 60) =====

ulong sym.sysstats_task_user_cmd(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x20) + 8) == 0) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = sym.sysstats_task_cmd_attr_pid(arg1);
    }
    return uVar1;
}


// ===== sym.sysstats_task_foreach @ 0x080012e4 (size 1000) =====

uint sym.sysstats_task_foreach(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int16_t iVar5;
    char cVar6;
    ulong uVar7;
    code *pcVar8;
    bool bVar9;
    bool bVar10;
    uint uVar11;
    int64_t arg1_00;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    ulong *in_x18;
    uint64_t uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    
    *in_x18 = unaff_x30;
    uVar7 = sp_el0;
    arg1_00 = task_active_pid_ns();
    iVar12 = nla_find(*(arg2 + 8) + 5,**(arg2 + 8) + -0x14,2);
    if (iVar12 != 0) {
        iVar4 = *(iVar12 + 4);
        auVar20 = sym.next_tgid(arg1_00,*(arg2 + 0x50),0);
        uVar17 = auVar20._0_8_;
        if (auVar20._8_8_ != 0) {
            iVar3 = iVar4 >> 0x10;
code_r0x080013b4:
            iVar12 = auVar20._8_8_;
            uVar17 = auVar20._0_8_;
            if ((*(iVar12 + 0x3e) >> 5 & 1) != 0) goto code_r0x08001390;
            iVar5 = *(*(iVar12 + 0x7f0) + 0x3c2);
            bVar9 = true;
            bVar10 = false;
            if (iVar4 <= iVar5) {
                bVar10 = SBORROW4(iVar3,iVar5);
                bVar9 = iVar3 - iVar5 < 0;
            }
            if (bVar9 != bVar10) goto code_r0x08001390;
            iVar13 = genlmsg_put(arg1,*(*arg2 + 0x34),*(*(arg2 + 8) + 8),obj.family,0,1);
            if (iVar13 == 0) {
                piVar2 = iVar12 + 0x38;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    iVar4 = *piVar2;
                    cVar6 = '\x01';
                    bVar9 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar9) {
                        *piVar2 = iVar4 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(iVar12);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar2,3);
                }
            }
            else {
                iVar14 = nla_reserve(arg1,3,0x98);
                if (iVar14 != 0) {
                    *(iVar14 + 0x94) = 0;
                    *(iVar14 + 0x8c) = 0;
                    *(iVar14 + 0x84) = 0;
                    *(iVar14 + 0x7c) = 0;
                    *(iVar14 + 0x74) = 0;
                    *(iVar14 + 0x6c) = 0;
                    *(iVar14 + 100) = 0;
                    *(iVar14 + 0x5c) = 0;
                    *(iVar14 + 0x54) = 0;
                    *(iVar14 + 0x4c) = 0;
                    *(iVar14 + 0x44) = 0;
                    *(iVar14 + 0x3c) = 0;
                    *(iVar14 + 0x34) = 0;
                    *(iVar14 + 0x2c) = 0;
                    *(iVar14 + 0x24) = 0;
                    *(iVar14 + 0x1c) = 0;
                    *(iVar14 + 0x14) = 0;
                    *(iVar14 + 0xc) = 0;
                    *(iVar14 + 4) = 0;
                    __rcu_read_lock();
                    uVar15 = task_active_pid_ns(uVar7);
                    uVar11 = __task_pid_nr_ns(iVar12,0,uVar15);
                    *(iVar14 + 0x50) = uVar11;
                    *(iVar14 + 0x4c) = *(*(iVar12 + 0x7f0) + 0x3c2);
                    __rcu_read_unlock();
                    __rcu_read_lock();
                    for (piVar19 = *(*(iVar12 + 0x7f0) + 0x10); *(iVar12 + 0x7f0) + 0x10 != piVar19; piVar19 = *piVar19)
                    {
                        iVar1 = piVar19 + 0x3d;
                        _raw_spin_lock(iVar1);
                        piVar18 = piVar19 + -0x2f;
                        if (*piVar18 != 0) {
                            __rcu_read_unlock();
                            if (piVar19 + -0xd3 != NULL) {
                                *(iVar14 + 4) =
                                     (*(*piVar18 + 0x2e0) & (*(*piVar18 + 0x2e0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0xc) =
                                     (*(*piVar18 + 0x2d8) & (*(*piVar18 + 0x2d8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0x1c) =
                                     (*(*piVar18 + 0x2f0) & (*(*piVar18 + 0x2f0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                *(iVar14 + 0x14) =
                                     (*(*piVar18 + 0x2e8) & (*(*piVar18 + 0x2e8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                                iVar16 = sym.get_task_unreclaimable_info(piVar19 + -0xd3);
                                *(iVar14 + 0x24) = iVar16 << 2;
                                _raw_spin_unlock(iVar1);
                            }
                            goto code_r0x08001370;
                        }
                        _raw_spin_unlock(iVar1);
                    }
                    __rcu_read_unlock();
code_r0x08001370:
                    *(iVar13 + -0x14) = (*(arg1 + 0xd0) + *(arg1 + 200)) - (iVar13 + -0x14);
                    goto code_r0x08001390;
                }
                piVar2 = iVar12 + 0x38;
                Hint_Prefetch(piVar2,2,0,1);
                do {
                    iVar4 = *piVar2;
                    cVar6 = '\x01';
                    bVar9 = ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar9) {
                        *piVar2 = iVar4 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                    }
                } while (cVar6 != '\0');
                if (iVar4 == 1) {
                    DataMemoryBarrier(2,1);
                    __put_task_struct(iVar12);
                }
                else if (iVar4 < 1) {
                    refcount_warn_saturate(piVar2,3);
                }
                if (iVar13 != 0x14) {
                    if (iVar13 - 0x14U < *(arg1 + 0xd8)) {
    //WARNING: Does not return
                        pcVar8 = SoftwareBreakpoint(0x800,0x8001668);
                        (*pcVar8)();
                    }
                    skb_trim(arg1,(iVar13 - 0x14U) - *(arg1 + 0xd8));
                }
            }
        }
code_r0x08001630:
        *(arg2 + 0x50) = uVar17 & 0xffffffff;
    }
    return *(arg1 + 0x70);
code_r0x08001390:
    auVar20 = sym.next_tgid(arg1_00,auVar20._0_4_ + 1 | uVar17 & 0xffffffff00000000,iVar12);
    uVar17 = auVar20._0_8_;
    if (auVar20._8_8_ == 0) goto code_r0x08001630;
    goto code_r0x080013b4;
}


// ===== sym.sysstats_meminfo_user_cmd @ 0x080016cc (size 1332) =====

//WARNING: Type propagation algorithm not settling

void sym.sysstats_meminfo_user_cmd(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t unaff_x21;
    code *unaff_x22;
    code *arg1_00;
    ulong uVar9;
    ulong unaff_x30;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t aiStack_e8 [17];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    aiStack_e8[0xf] = *(iVar8 + 0x5e0);
    aiStack_e8[0] = 0;
    uVar3 = sym.prepare_reply(arg1,4,aiStack_e8,0x124);
    iVar6 = aiStack_e8[0];
    iVar8 = arg1;
    iVar4 = unaff_x21;
    if (uVar3 < 0) goto code_r0x08001b9c;
    iVar4 = nla_reserve(aiStack_e8[0],4,0x120);
    if (iVar4 == 0) {
        kfree_skb(iVar6);
        uVar3 = 0xffffffa6;
        iVar4 = unaff_x21;
        goto code_r0x08001b9c;
    }
    iStack_110 = iVar6;
    memset(iVar4 + 4,0,0x120);
    aiStack_e8[0xd] = 0;
    aiStack_e8[0xe] = 0;
    aiStack_e8[0xb] = 0;
    aiStack_e8[0xc] = 0;
    aiStack_e8[9] = 0;
    aiStack_e8[10] = 0;
    aiStack_e8[7] = 0;
    aiStack_e8[8] = 0;
    aiStack_e8[5] = 0;
    aiStack_e8[6] = 0;
    aiStack_e8[3] = 0;
    aiStack_e8[4] = 0;
    aiStack_e8[1] = 0;
    aiStack_e8[2] = 0;
    si_meminfo(aiStack_e8 + 1);
    si_swapinfo(aiStack_e8 + 1);
    *(iVar4 + 4) = aiStack_e8[5] << 2;
    *(iVar4 + 0xc) = (_vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    __rcu_read_lock();
    arg1_00 = *0x8019514 + -0x4d0;
    if (arg1_00 == init_task) {
        iVar8 = 0;
    }
    else {
        iVar8 = 0;
        iVar6 = *0x8019514;
        do {
            _raw_spin_lock(iVar6 + 0x3b0);
            iVar5 = sym.get_task_unreclaimable_info(arg1_00);
            iVar8 = iVar5 + iVar8;
            _raw_spin_unlock(iVar6 + 0x3b0);
            iVar6 = *(arg1_00 + 0x4d0);
            arg1_00 = iVar6 + -0x4d0;
        } while (arg1_00 != init_task);
    }
    __rcu_read_unlock();
    unaff_x22 = _segment.ehdr;
    iStack_108 = arg1;
    if (_segment.ehdr != sym.__typeid__ZTSFyiE_global_addr) goto code_r0x08001bdc;
    do {
        uVar3 = (*unaff_x22)(0xffffffff);
        *(iVar4 + 0x14) = (iVar8 + (uVar3 >> 0xc)) * 4;
        *(iVar4 + 0x34) = aiStack_e8[8] << 2;
        *(iVar4 + 0x2c) = aiStack_e8[9] << 2;
        *(iVar4 + 0x24) = (aiStack_e8[9] - aiStack_e8[10]) * 4;
        iVar8 = vmalloc_nr_pages();
        *(iVar4 + 0x3c) = iVar8 << 2;
        iVar8 = 0;
        iVar6 = 0;
        unaff_x22 = 0x8000576;
        *(iVar4 + 0x44) = (*0x8019150 & (*0x8019150 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x4c) = (_vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x54) = (_kfree_skb & (_kfree_skb >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x5c) = (_vm_zone_stat & (_vm_zone_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 100) = (_pid_task & (_pid_task >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x74) = *0x8019138 & (*0x8019138 >> 0x3f ^ 0xffffffffffffffffU);
        *(iVar4 + 0x6c) = (*0x8019148 & (*0x8019148 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
        *(iVar4 + 0x7c) = aiStack_e8[7] << 2;
        do {
            if (*(iVar8 + 0x80190c8) != 0) {
                uVar9 = *(iVar8 + 0x80190e0);
                iVar6 = (*(iVar8 + 0x8019658) & (*(iVar8 + 0x8019658) >> 0x3f ^ 0xffffffffffffffffU)) + iVar6;
                iVar1 = strcmp(uVar9,0x8000576);
                if (iVar1 == 0) {
                    *(iVar4 + 0x84) = (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x8c) = (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x94) = (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    *(iVar4 + 0x9c) = (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2
                    ;
                    uVar3 = *(iVar8 + 0x8019628);
                    piVar7 = iVar4 + 0xa4;
                }
                else {
                    iVar1 = strcmp(uVar9,"Normal");
                    if (iVar1 == 0) {
                        *(iVar4 + 0xac) =
                             (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xb4) =
                             (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xbc) =
                             (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        *(iVar4 + 0xc4) =
                             (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                        uVar3 = *(iVar8 + 0x8019628);
                        piVar7 = iVar4 + 0xcc;
                    }
                    else {
                        iVar1 = strcmp(uVar9,"HighMem");
                        if (iVar1 == 0) {
                            *(iVar4 + 0xfc) =
                                 (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x104) =
                                 (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x10c) =
                                 (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0x114) =
                                 (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            uVar3 = *(iVar8 + 0x8019628);
                            piVar7 = iVar4 + 0x11c;
                        }
                        else {
                            iVar1 = strcmp(uVar9,"Movable");
                            if (iVar1 != 0) goto code_r0x080019bc;
                            *(iVar4 + 0xd4) =
                                 (*(iVar8 + 0x8019610) & (*(iVar8 + 0x8019610) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xdc) =
                                 (*(iVar8 + 0x8019620) & (*(iVar8 + 0x8019620) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xe4) =
                                 (*(iVar8 + 0x8019618) & (*(iVar8 + 0x8019618) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            *(iVar4 + 0xec) =
                                 (*(iVar8 + 0x8019630) & (*(iVar8 + 0x8019630) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                            uVar3 = *(iVar8 + 0x8019628);
                            piVar7 = iVar4 + 0xf4;
                        }
                    }
                }
                *piVar7 = (uVar3 & (uVar3 >> 0x3f ^ 0xffffffffffffffffU)) << 2;
            }
code_r0x080019bc:
            iVar8 = iVar8 + 0x640;
        } while (iVar8 < 0x12c0);
        *(iVar4 + 0x1c) = iVar6 << 2;
        **(iStack_110 + 0xd8) = (*(iStack_110 + 0xd0) + *(iStack_110 + 200)) - *(iStack_110 + 0xd8);
        uVar2 = netlink_unicast(*(*(iStack_108 + 0x28) + 0x118),iStack_110,*(iStack_108 + 4),0x40);
        uVar3 = uVar2 & uVar2 >> 0x1f;
        iVar8 = 0x12c0;
code_r0x08001b9c:
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == aiStack_e8[0xf]) {
            return;
        }
        __stack_chk_fail(uVar3);
code_r0x08001bdc:
        __cfi_slowpath_diag(0xd9ed6b9fea900179,unaff_x22,0x8000540);
    } while( true );
}


// ===== sym.sysstats_all_pids_of_name @ 0x08001c7c (size 728) =====

uint sym.sysstats_all_pids_of_name(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    code *pcVar6;
    int iVar7;
    int64_t arg1_00;
    uint16_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    
    *in_x18 = unaff_x30;
    uVar5 = sp_el0;
    arg1_00 = task_active_pid_ns(uVar5);
    puVar8 = nla_find(*(arg2 + 8) + 5,**(arg2 + 8) + -0x14,3);
    if (puVar8 != NULL) {
        iVar12 = *puVar8 - 4;
        if (iVar12 == 0) {
            iVar13 = 0;
        }
        else {
            iVar13 = *puVar8 - 5;
            if (*(puVar8 + 2 + iVar13) != '\0') {
                iVar13 = iVar12;
            }
        }
        iVar12 = __kmalloc(iVar13 + 1,0xcc0);
        if (iVar12 != 0) {
            memcpy(iVar12,puVar8 + 2,iVar13);
            uVar2 = *(arg2 + 0x50);
            *(iVar12 + iVar13) = 0;
            auVar15 = sym.next_tgid(arg1_00,uVar2,0);
            uVar14 = auVar15._0_8_;
            if (auVar15._8_8_ != 0) {
code_r0x08001d68:
                iVar13 = auVar15._8_8_;
                uVar14 = auVar15._0_8_;
                iVar7 = strcmp(iVar13 + 0x7a8,iVar12);
                if (iVar7 != 0) goto code_r0x08001d44;
                iVar9 = genlmsg_put(arg1,*(*arg2 + 0x34),*(*(arg2 + 8) + 8),obj.family,0,5);
                if (iVar9 == 0) {
                    piVar1 = iVar13 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar7 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar7 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar7 == 1) {
                        DataMemoryBarrier(2,1);
                        __put_task_struct(iVar13);
                    }
                    else if (iVar7 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                }
                else {
                    iVar10 = nla_reserve(arg1,5,8);
                    if (iVar10 != 0) {
                        *(iVar10 + 4) = 0;
                        __rcu_read_lock();
                        uVar11 = task_active_pid_ns(uVar5);
                        iVar7 = __task_pid_nr_ns(iVar13,0,uVar11);
                        *(iVar10 + 4) = iVar7;
                        __rcu_read_unlock();
                        *(iVar9 + -0x14) = (*(arg1 + 0xd0) + *(arg1 + 200)) - (iVar9 + -0x14);
                        goto code_r0x08001d44;
                    }
                    piVar1 = iVar13 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar7 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                            *piVar1 = iVar7 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    if (iVar7 == 1) {
                        DataMemoryBarrier(2,1);
                        __put_task_struct(iVar13);
                    }
                    else if (iVar7 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                    if (iVar9 != 0x14) {
                        if (iVar9 - 0x14U < *(arg1 + 0xd8)) {
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8001f08);
                            (*pcVar6)();
                        }
                        skb_trim(arg1,(iVar9 - 0x14U) - *(arg1 + 0xd8));
                    }
                }
            }
code_r0x08001ecc:
            *(arg2 + 0x50) = uVar14 & 0xffffffff;
            kfree(iVar12);
        }
    }
    return *(arg1 + 0x70);
code_r0x08001d44:
    auVar15 = sym.next_tgid(arg1_00,auVar15._0_4_ + 1 | uVar14 & 0xffffffff00000000,iVar13);
    uVar14 = auVar15._0_8_;
    if (auVar15._8_8_ == 0) goto code_r0x08001ecc;
    goto code_r0x08001d68;
}


// ===== sym.sysstats_task_cmd_attr_pid @ 0x08001f54 (size 1300) =====

uint64_t sym.sysstats_task_cmd_attr_pid(int64_t arg1)

{
    int iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    uint *in_x6;
    ulong *puVar14;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t iVar15;
    uint32_t *unaff_x22;
    int64_t unaff_x23;
    int64_t iVar16;
    ulong uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    iStack_70 = 0;
    uVar7 = sym.prepare_reply(arg1,2,&iStack_70,0x9c);
    iVar15 = iStack_70;
    if (uVar7 < 0) {
        uVar10 = uVar7;
        iVar15 = unaff_x19;
        iVar9 = unaff_x23;
    }
    else {
        uVar8 = *(*(*(arg1 + 0x20) + 8) + 4);
        iVar9 = nla_reserve_64bit(iStack_70,1,0x98,2);
        if (iVar9 == 0) {
            uVar10 = 0xffffffea;
        }
        else {
            __rcu_read_lock();
            uVar10 = find_task_by_vpid(uVar8);
            if (uVar10 != 0) {
                unaff_x22 = uVar10 + 0x38;
                goto code_r0x08002438;
            }
            __rcu_read_unlock();
            uVar10 = 0xfffffffd;
            unaff_x23 = iVar9;
        }
        kfree_skb(iVar15);
        iVar9 = unaff_x23;
    }
    do {
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_68) {
            return uVar10;
        }
        __stack_chk_fail();
code_r0x08002438:
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar7 = *unaff_x22;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar4) {
                *unaff_x22 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar13 = 2;
code_r0x08002358:
            refcount_warn_saturate(unaff_x22,uVar13);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar13 = 1;
            goto code_r0x08002358;
        }
        __rcu_read_unlock();
        *(iVar9 + 0x8c) = 0;
        *(iVar9 + 0x94) = 0;
        *(iVar9 + 0x7c) = 0;
        *(iVar9 + 0x84) = 0;
        *(iVar9 + 0x6c) = 0;
        *(iVar9 + 0x74) = 0;
        *(iVar9 + 0x5c) = 0;
        *(iVar9 + 100) = 0;
        *(iVar9 + 0x4c) = 0;
        *(iVar9 + 0x54) = 0;
        *(iVar9 + 0x3c) = 0;
        *(iVar9 + 0x44) = 0;
        *(iVar9 + 0x2c) = 0;
        *(iVar9 + 0x34) = 0;
        *(iVar9 + 0x1c) = 0;
        *(iVar9 + 0x24) = 0;
        *(iVar9 + 0xc) = 0;
        *(iVar9 + 0x14) = 0;
        *(iVar9 + 4) = 0;
        iVar5 = sp_el0;
        uVar13 = task_active_pid_ns(iVar5);
        uVar8 = __task_pid_nr_ns(uVar10,0,uVar13);
        *(iVar9 + 0x50) = uVar8;
        __rcu_read_lock();
        for (piVar18 = *(*(uVar10 + 0x7f0) + 0x10); *(uVar10 + 0x7f0) + 0x10 != piVar18; piVar18 = *piVar18) {
            iVar16 = piVar18 + 0x3d;
            _raw_spin_lock(iVar16);
            piVar19 = piVar18 + -0x2f;
            if (*piVar19 != 0) {
                __rcu_read_unlock();
                if (piVar18 + -0xd3 != NULL) {
                    *(iVar9 + 4) = (*(*piVar19 + 0x2e0) & (*(*piVar19 + 0x2e0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                    *(iVar9 + 0xc) = (*(*piVar19 + 0x2d8) & (*(*piVar19 + 0x2d8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                    *(iVar9 + 0x1c) = (*(*piVar19 + 0x2f0) & (*(*piVar19 + 0x2f0) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                    *(iVar9 + 0x14) = (*(*piVar19 + 0x2e8) & (*(*piVar19 + 0x2e8) >> 0x3f ^ 0xffffffffffffffffU)) << 2;
                    iVar11 = sym.get_task_unreclaimable_info(piVar18 + -0xd3);
                    *(iVar9 + 0x24) = iVar11 << 2;
                    _raw_spin_unlock(iVar16);
                }
                goto code_r0x08002150;
            }
            _raw_spin_unlock(iVar16);
        }
        __rcu_read_unlock();
code_r0x08002150:
        pcVar6 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFyiE_global_addr) {
            __cfi_slowpath_diag(0xd9ed6b9fea900179,_segment.ehdr,0x8000500);
        }
        uVar12 = (*pcVar6)(*(iVar9 + 0x50));
        *(iVar9 + 0x24) = *(iVar9 + 0x24) + (uVar12 >> 10);
        uVar12 = *(uVar10 + 0x6d0);
        *(iVar9 + 0x2c) = *(uVar10 + 0x6c8) / 1000;
        *(iVar9 + 0x34) = uVar12 / 1000;
        __rcu_read_lock();
        iVar16 = *(uVar10 + 0x7f8);
        while (iVar16 != 0) {
            uVar13 = _raw_spin_lock_irqsave(iVar16);
            if (*(uVar10 + 0x7f8) == iVar16) {
                __rcu_read_unlock();
                iVar16 = *(uVar10 + 0x7f0);
                *(iVar9 + 0x3c) = *(iVar16 + 0x1b8);
                *(iVar9 + 0x44) = *(iVar16 + 0x1c0);
                _raw_spin_unlock_irqrestore(*(uVar10 + 0x7f8),uVar13);
                goto code_r0x08002220;
            }
            _raw_spin_unlock_irqrestore(iVar16,uVar13);
            iVar16 = *(uVar10 + 0x7f8);
        }
        __rcu_read_unlock();
code_r0x08002220:
        __rcu_read_lock();
        iVar2 = *(*(uVar10 + 0x790) + 4);
        *in_x6 = 0x8019000;
        iVar1 = 0x8019000;
        if (iVar2 != -1) {
            iVar1 = iVar2;
        }
        *(iVar9 + 0x54) = iVar1;
        if (*(uVar10 + 0x640) == 0) {
            uVar8 = 0;
        }
        else {
            uVar17 = *(uVar10 + 0x5e8);
            uVar13 = task_active_pid_ns(iVar5);
            uVar8 = __task_pid_nr_ns(uVar17,1,uVar13);
        }
        *(iVar9 + 0x58) = uVar8;
        __rcu_read_unlock();
        strscpy(iVar9 + 0x5c,uVar10 + 0x7a8,0x20);
        __rcu_read_lock();
        puVar14 = *(uVar10 + 0x978);
        while ((puVar14 = *puVar14, (*(puVar14 + 0x54) & 1) == 0 &&
               (uVar12 = sym.percpu_ref_tryget_many(puVar14 + 2), (uVar12 & 1) == 0))) {
            Yield();
            puVar14 = *(uVar10 + 0x978);
        }
        __rcu_read_unlock();
        cgroup_path_ns(*puVar14,iVar9 + 0x7c,0x20,*(*(iVar5 + 0x7e8) + 0x40));
        if ((*(puVar14 + 0x54) & 1) == 0) {
            sym.percpu_ref_put_many(puVar14 + 2);
        }
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar7 = *unaff_x22;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar4) {
                *unaff_x22 = uVar7 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar10);
        }
        else if (uVar7 < 1) {
            refcount_warn_saturate(unaff_x22,3);
        }
        **(iVar15 + 0xd8) = (*(iVar15 + 0xd0) + *(iVar15 + 200)) - *(iVar15 + 0xd8);
        uVar7 = netlink_unicast(*(*(arg1 + 0x28) + 0x118),iVar15,*(arg1 + 4),0x40);
        uVar10 = uVar7 & uVar7 >> 0x1f;
    } while( true );
}


// ===== sym.prepare_reply @ 0x08002468 (size 280) =====

ulong sym.prepare_reply(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = __alloc_skb((arg4 + 7U & 0xfffffffc) + 0x10,0xcc0,0,0xffffffff);
    if (iVar6 == 0) {
        uVar8 = 0xfffffff4;
    }
    else {
        if (arg1 == 0) {
            iVar7 = sp_el0;
            piVar1 = iVar7 + 0x10;
            *(iVar7 + 0x10) = *piVar1 + 1;
            iVar10 = tpidr_el1;
            pcVar2 = obj.sysstats_seqnum + iVar10;
            do {
                iVar3 = *pcVar2;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar5) {
                    *pcVar2 = iVar3 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            iVar10 = *piVar1;
            *(iVar7 + 0x10) = iVar10 + -1;
            if ((iVar10 + -1 == 0) || (*piVar1 == 0)) {
                preempt_schedule_notrace();
            }
            uVar9 = 0;
        }
        else {
            iVar3 = *arg1;
            uVar9 = *(arg1 + 4);
        }
        iVar7 = genlmsg_put(iVar6,uVar9,iVar3,obj.family,0,arg2 & 0xffffffff);
        if (iVar7 == 0) {
            kfree_skb(iVar6);
            uVar8 = 0xffffffea;
        }
        else {
            uVar8 = 0;
            *arg3 = iVar6;
        }
    }
    return uVar8;
}


// ===== sym.get_task_unreclaimable_info @ 0x080025a0 (size 324) =====

uint64_t sym.get_task_unreclaimable_info(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    piVar4 = *(*(arg1 + 0x7f0) + 0x10);
    if (*(arg1 + 0x7f0) + 0x10 == piVar4) {
        uVar3 = 0;
    }
    else {
        iVar5 = 0;
        do {
            piVar6 = piVar4 + -0xd3;
            if (piVar6 != arg1) {
                _raw_spin_lock(piVar4 + 0x3d);
            }
            if (iVar5 == 0) {
                iVar5 = *(*(arg1 + 0x618) + 0x7d8);
                iVar2 = piVar4[0x28];
                if (iVar2 != 0) goto code_r0x0800261c;
code_r0x08002650:
                iVar1 = 0;
            }
            else {
                iVar2 = piVar4[0x28];
                if (iVar2 == 0) goto code_r0x08002650;
code_r0x0800261c:
                if ((iVar5 == iVar2) && (*(arg1 + 0x618) != piVar6)) goto code_r0x08002650;
                iVar1 = iterate_fd(iVar2,0,sym.get_dma_info.4c66488f3ae26eca887bb7bd2c5f1e82.cfi_jt,
                                   &stack0xffffffffffffffb0);
            }
            if (piVar6 != arg1) {
                _raw_spin_unlock(piVar4 + 0x3d);
            }
        } while ((iVar1 == 0) && (piVar4 = *piVar4, *(arg1 + 0x7f0) + 0x10 != piVar4));
        uVar3 = uStack_50 >> 0xc;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    auVar7 = __stack_chk_fail(uVar3);
    *extraout_x18 = 0x80026dc;
    iVar1 = is_dma_buf_file(auVar7._8_8_);
    if (iVar1 != 0) {
        piVar4 = *(auVar7._8_8_ + 0xd8);
        iVar5 = piVar4[0xe];
        iVar1 = strcmp(iVar5,"qcom,system");
        if ((((iVar1 == 0) || (iVar1 = strcmp(iVar5,"qcom,system-uncached"), iVar1 == 0)) ||
            (iVar1 = strcmp(iVar5,"system-secure"), iVar1 == 0)) ||
           ((iVar1 = strcmp(iVar5,"qcom,secure-pixel"), iVar1 == 0 ||
            (iVar1 = strcmp(iVar5,"qcom,secure-non-pixel"), iVar1 == 0)))) {
            *auVar7._0_8_ = *auVar7._0_8_ + *piVar4;
        }
    }
    return 0;
}


// ===== sym.get_dma_info @ 0x080026e4 (size 196) =====

ulong sym.get_dma_info(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = is_dma_buf_file(arg2);
    if (iVar1 != 0) {
        piVar3 = *(arg2 + 0xd8);
        iVar2 = piVar3[0xe];
        iVar1 = strcmp(iVar2,"qcom,system");
        if ((((iVar1 == 0) || (iVar1 = strcmp(iVar2,"qcom,system-uncached"), iVar1 == 0)) ||
            (iVar1 = strcmp(iVar2,"system-secure"), iVar1 == 0)) ||
           ((iVar1 = strcmp(iVar2,"qcom,secure-pixel"), iVar1 == 0 ||
            (iVar1 = strcmp(iVar2,"qcom,secure-non-pixel"), iVar1 == 0)))) {
            *arg1 = *arg1 + *piVar3;
        }
    }
    return 0;
}


// ===== sym.percpu_ref_tryget_many @ 0x080027a8 (size 308) =====

bool sym.percpu_ref_tryget_many(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar6 = *arg1;
    if ((uVar6 & 3) == 0) {
        iVar4 = sp_el0;
        piVar5 = iVar4 + 0x10;
        *(iVar4 + 0x10) = *piVar5 + 1;
        iVar7 = tpidr_el1;
        piVar1 = iVar7 + uVar6;
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar7 = *piVar5;
        *(iVar4 + 0x10) = iVar7 + -1;
        if ((iVar7 + -1 == 0) || (*piVar5 == 0)) {
            preempt_schedule_notrace();
        }
        bVar3 = true;
    }
    else {
        piVar5 = *(arg1 + 8);
        iVar4 = *piVar5;
        do {
            iVar7 = iVar4;
            if (iVar7 == 0) break;
            Hint_Prefetch(piVar5,2,0,1);
            do {
                iVar4 = *piVar5;
                if (iVar4 != iVar7) goto code_r0x08002880;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar5,0x10);
                if (bVar3) {
                    *piVar5 = iVar7 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002880:
        } while (iVar4 != iVar7);
        bVar3 = iVar7 != 0;
    }
    __rcu_read_unlock();
    return bVar3;
}


// ===== sym.percpu_ref_put_many @ 0x080028dc (size 312) =====

void sym.percpu_ref_put_many(int64_t arg1)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    uVar5 = *arg1;
    if ((uVar5 & 3) == 0) {
        iVar7 = sp_el0;
        piVar4 = iVar7 + 0x10;
        *(iVar7 + 0x10) = *piVar4 + 1;
        iVar6 = tpidr_el1;
        piVar1 = iVar6 + uVar5;
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        iVar6 = *piVar4;
        *(iVar7 + 0x10) = iVar6 + -1;
        if ((iVar6 + -1 == 0) || (*piVar4 == 0)) {
            preempt_schedule_notrace();
        }
    }
    else {
        piVar4 = *(arg1 + 8);
        Hint_Prefetch(piVar4,2,0,1);
        do {
            iVar7 = *piVar4;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar4,0x10);
            if (bVar3) {
                *piVar4 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (iVar7 + -1 == 0) {
            pcVar8 = *(*(arg1 + 8) + 8);
            __cfi_slowpath_diag(0x5d437c84a61e422c,pcVar8,0x8000520);
            (*pcVar8)(arg1);
        }
    }
    __rcu_read_unlock();
    return;
}


// ===== sym.next_tgid @ 0x08002a14 (size 412) =====

void sym.next_tgid(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    uint uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iStack_38 = arg2;
    if (arg3 != 0) {
        piVar1 = arg3 + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(arg3);
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    __rcu_read_lock();
    iStack_30 = 0;
    iVar7 = idr_get_next(arg1,&iStack_38);
    while (iVar7 != 0) {
        uVar6 = pid_nr_ns(iVar7,arg1);
        iStack_38 = CONCAT44(iStack_38._4_4_,uVar6);
        iStack_30 = pid_task(iVar7,1);
        if (iStack_30 != 0) {
            puVar8 = iStack_30 + 0x38;
            goto code_r0x08002b6c;
        }
        iStack_30 = 0;
        iStack_38 = CONCAT44(iStack_38._4_4_,iStack_38 + 1);
        iVar7 = idr_get_next(arg1,&iStack_38);
    }
code_r0x08002b1c:
    __rcu_read_unlock();
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return;
    }
    puVar8 = __stack_chk_fail(iStack_38,iStack_30);
code_r0x08002b6c:
    Hint_Prefetch(puVar8,2,0,1);
    do {
        uVar3 = *puVar8;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar8,0x10);
        if (bVar5) {
            *puVar8 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 != 0) goto code_r0x08002b10;
    uVar9 = 2;
    goto code_r0x08002b78;
code_r0x08002b10:
    if ((uVar3 + 1 | uVar3) < 0) {
        uVar9 = 1;
code_r0x08002b78:
        refcount_warn_saturate(puVar8,uVar9);
    }
    goto code_r0x08002b1c;
}


// ===== sym.__cfi_check_fail @ 0x08002bb0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002bf4

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
    //switch table (4 cases) at 0x80006e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002c08);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002c58 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.family);
    if (iVar1 == 0) {
        _segment.ehdr = sym.__typeid__ZTSFyiE_global_addr;
        _printk(0x800067a,2);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002cbc (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.family);
    return;
}

