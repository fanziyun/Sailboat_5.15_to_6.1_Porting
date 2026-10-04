// decompiled from coresight-stm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 756) =====

//WARNING: Switch with 1 destination removed at 0x08003350

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7a682b931f8f094) {
        if (arg1 < -0x333e5f8f10676d42) {
            if (arg1 != -0x789c5b33123f613e) {
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x80013a0 >> 3 | pcVar1 << 0x3d) < 0x11) {
                        return;
                    }
                }
                else if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x8001378 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003310;
            }
            pcVar2 = sym.stm_mmio_addr.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
        }
        else if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x333e5f8f10676d42) {
                pcVar2 = sym.stm_probe.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
            }
            else {
                if (arg1 != -0x29740470e4130cf0) goto code_r0x08003310;
                pcVar2 = sym.stm_generic_unlink.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
            }
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x4b596879dd0fbb8) goto code_r0x08003310;
            pcVar2 = sym.stm_disable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
        }
    }
    else if (arg1 < 0x5ca94cbce5f388f2) {
        if (arg1 < 0x8e7df4cec2cf72c) {
            if (arg1 == 0x7a682b931f8f094) {
                pcVar2 = sym.stm_enable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
            }
            else {
                if (arg1 != 0x8cf312f378a18b3) goto code_r0x08003310;
                pcVar2 = sym.stm_generic_link.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x8e7df4cec2cf72c) {
                if ((arg1 == 0x1e3d0ffe3d0499e9) && ((pcVar1 + -0x8001320 >> 3 | pcVar1 << 0x3d) < 5)) {
                    return;
                }
                goto code_r0x08003310;
            }
            pcVar2 = sym.stm_generic_packet.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
        }
    }
    else if (arg1 < 0x76439dfb02cc8756) {
        if (arg1 == 0x5ca94cbce5f388f2) {
            pcVar2 = sym.stm_remove.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
        }
        else {
            if (arg1 != 0x69a07daa9186a39e) goto code_r0x08003310;
            pcVar2 = sym.stm_generic_set_options.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
        }
    }
    else if (arg1 == 0x76439dfb02cc8756) {
        pcVar2 = sym.stm_trace_id.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003310;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003310:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003364);
    (*pcVar1)();
}


// ===== sym.stm_generic_unlink.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001300 (size 8) =====

void sym.stm_generic_unlink.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0x38) && (*(param_1 + -0x28) != 0)) {
        coresight_disable();
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001308 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.stm_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001310 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.stm_driver);
    return;
}


// ===== sym.stm_disable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001318 (size 8) =====

void sym.stm_disable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(*(param_1 + 0x98) + 0x98);
    if (piVar1[0x11] == 1) {
        _raw_spin_lock(piVar1 + 3);
        *(*piVar1 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xe80) = *(*piVar1 + 0xe80) & 0xfffffffe;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xfb0) = 0;
        *(*piVar1 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xe00) = 0;
        *(*piVar1 + 0xe70) = 0;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xfb0) = 0;
        if (*(piVar1 + 0xa4) != 0) {
            *(*piVar1 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xd64) = 0;
            *(*piVar1 + 0xd00) = 0;
            *(*piVar1 + 0xd20) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar1 + 3);
        coresight_timeout(param_1 + 0x20,0xe80,0x17,0);
        __pm_runtime_idle(*(param_1 + 0x98),5);
        piVar1[0x11] = 0;
    }
    return;
}


// ===== sym.port_enable_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001320 (size 8) =====

int64_t sym.port_enable_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar1 == 0) {
        _raw_spin_lock(piVar5 + 3);
        *(piVar5 + 0x13) = uStack_40;
        if (piVar5[0x11] != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xe00) = piVar5[0x13];
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar5 + 3);
    }
    else {
        param_4 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = 0x800247c;
    piVar5 = *(*(iVar2 + 0x60) + 0x98);
    if (piVar5[0x11] == 0) {
        uVar4 = *(piVar5 + 0x9c);
    }
    else {
        _raw_spin_lock(piVar5 + 3);
        uVar4 = *(*piVar5 + 0xe60);
        _raw_spin_unlock(piVar5 + 3);
    }
    iVar1 = scnprintf(puVar3,0x1000,"%#lx\n",uVar4);
    return iVar1;
}


// ===== sym.port_select_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001328 (size 8) =====

int64_t sym.port_select_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(param_1 + 0x60) + 0x98);
    iVar2 = kstrtoull(param_3,0x10,&uStack_40);
    if (iVar2 == 0) {
        _raw_spin_lock(piVar5 + 3);
        *(piVar5 + 0x9c) = uStack_40;
        if (piVar5[0x11] != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar1 = *(*piVar5 + 0xe00);
            *(*piVar5 + 0xe00) = 0;
            *(*piVar5 + 0xe60) = *(piVar5 + 0x9c);
            *(*piVar5 + 0xe00) = uVar1;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar5 + 3);
    }
    else {
        param_4 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x800262c;
    iVar2 = sprintf(puVar4,"%#lx\n",*(*(*(iVar3 + 0x60) + 0x98) + 0x90));
    return iVar2;
}


// ===== sym.traceid_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001330 (size 8) =====

int64_t sym.traceid_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong *puVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar7 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_30 = 0;
    iVar10 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = kstrtoull(param_3,0x10,&uStack_30);
    if (iVar6 == 0) {
        *(iVar10 + 0x90) = uStack_30 & 0x7f;
    }
    else {
        param_4 = iVar6;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.tcsr_show;
    piVar11 = *(*(iVar10 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(iVar10 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(iVar10 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x080027c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027c8:
        } while (uVar8 != uVar3);
    }
    else {
        uVar2 = *(*piVar11 + 0xe80);
        __pm_runtime_idle(*(iVar10 + 0x60),4);
        iVar6 = scnprintf(puVar7,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.hwevent_select_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001338 (size 8) =====

int64_t sym.hwevent_select_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    uint uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xac) = uStack_30;
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.port_enable_show;
    piVar5 = *(*(iVar3 + 0x60) + 0x98);
    if (piVar5[0x11] == 0) {
        uVar4 = piVar5[0x13];
    }
    else {
        _raw_spin_lock(piVar5 + 3);
        uVar4 = *(*piVar5 + 0xe00);
        _raw_spin_unlock(piVar5 + 3);
    }
    iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",uVar4);
    return iVar1;
}


// ===== sym.hwevent_enable_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001340 (size 8) =====

int64_t sym.hwevent_enable_store.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(param_1 + 0x60) + 0x98);
    iVar1 = kstrtoull(param_3,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xa4) = uStack_30;
        *(iVar3 + 0xa8) = uStack_30;
    }
    else {
        param_4 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.hwevent_select_show;
    iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(*(iVar3 + 0x60) + 0x98) + 0xac));
    return iVar1;
}


// ===== sym.stm_trace_id.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001348 (size 8) =====

uchar sym.stm_trace_id.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    return *(*(*(param_1 + 0x98) + 0x98) + 0x90);
}


// ===== sym.stm_remove.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001350 (size 8) =====

void sym.stm_remove.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    coresight_unregister(*(iVar1 + 0x10));
    stm_unregister_device(iVar1 + 0x38);
    return;
}


// ===== sym.stm_mmio_addr.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001358 (size 8) =====

uint64_t sym.stm_mmio_addr.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                   (int64_t param_1,ulong param_2,int param_3,uint32_t param_4)

{
    uint64_t uVar1;
    
    uVar1 = *(param_1 + -0x10) + (param_3 << 8);
    if ((uVar1 & 0xfff) != 0 || (param_4 & 0xf) != 0) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.stm_probe.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001360 (size 8) =====

uint64_t sym.stm_probe.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t *arg1;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *extraout_x8;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar11;
    ulong unaff_x30;
    ulong uStack_120;
    ulong uStack_118;
    code *pcStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    uint64_t uStack_e0;
    ulong uStack_d8;
    uint64_t auStack_d0 [14];
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    auStack_d0[0xd] = *(iVar8 + 0x5e0);
    auStack_d0[10] = 0;
    auStack_d0[0xb] = 0;
    auStack_d0[8] = 0;
    auStack_d0[9] = 0;
    auStack_d0[6] = 0;
    auStack_d0[7] = 0;
    auStack_d0[4] = 0;
    auStack_d0[5] = 0;
    auStack_d0[2] = 0;
    auStack_d0[3] = 0;
    auStack_d0[0] = 0;
    auStack_d0[1] = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    iStack_100 = 0;
    pcStack_f8 = NULL;
    pcStack_110 = NULL;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uVar4 = coresight_alloc_device_name(obj.stm_devs,param_1);
    uStack_f0 = uVar4;
    if ((uVar4 == 0) || (arg1 = devm_kmalloc(param_1,0xb0,0xdc0), arg1 == NULL)) {
code_r0x08001770:
        uVar6 = 0xfffffff4;
        goto code_r0x08001774;
    }
    uVar5 = devm_clk_get(param_1,"atclk");
    arg1[1] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        uVar7 = clk_prepare();
        uVar6 = uVar7 & 0xffffffff;
        if (uVar7 != 0) goto code_r0x08001774;
        uVar1 = clk_enable(uVar5);
        if (uVar1 != 0) {
            uVar6 = uVar1;
            clk_unprepare(uVar5);
            goto code_r0x08001774;
        }
    }
    *(param_1 + 0x98) = arg1;
    uVar6 = devm_ioremap_resource(param_1,param_1 + 0x390);
    if (uVar6 < 0xfffffffffffff001) {
        *arg1 = uVar6;
        uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
        uStack_e0 = uVar6;
        uVar5 = dev_fwnode(param_1);
        uVar6 = 0xfffffffe;
        if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
            if (*(uVar5 + 8) == of_fwnode_ops) {
                uVar10 = *(param_1 + 0x2f0);
                auStack_d0[0xc] = 0;
                iVar2 = of_property_read_string_helper(uVar10,"reg-names",auStack_d0 + 0xc,1,0);
                if (-1 < iVar2) {
                    iVar2 = 0;
                    do {
                        iVar3 = strcmp("stm-stimulus-base",auStack_d0[0xc]);
                        if (iVar3 == 0) {
                            uVar5 = of_address_to_resource(uVar10,iVar2,auStack_d0);
                            uVar6 = uVar5 & 0xffffffff;
                            if (uVar5 != 0) goto code_r0x08001774;
                            arg1[5] = auStack_d0[0];
                            uVar6 = devm_ioremap_resource(param_1,auStack_d0);
                            if (0xfffffffffffff000 < uVar6) goto code_r0x08001500;
                            arg1[4] = uVar6;
                            uVar1 = _segment.ehdr;
                            uVar9 = 4;
                            if ((*(*arg1 + 0xea4) & 0xf000) != 0) {
                                uVar9 = 8;
                            }
                            *(arg1 + 0x94) = uVar9;
                            if (uVar1 == 0) {
                                uVar1 = 0x20;
                                if ((*(*arg1 + 0xfc8) & 0x1ffff) != 0) {
                                    uVar1 = *(*arg1 + 0xfc8) & 0x1ffff;
                                }
                            }
                            *(arg1 + 0x14) = uVar1;
                            uVar5 = devm_kmalloc(param_1,uVar1 + 0x3f >> 3 & 0x3ffffff8,0xdc0);
                            if (uVar5 == 0) goto code_r0x08001770;
                            arg1[6] = uVar5;
                            *(arg1 + 3) = 0;
                            sym.stm_init_default_data(arg1);
                            puVar11 = arg1 + 7;
                            *puVar11 = uVar4;
                            arg1[9] = 0x100000001;
                            *(arg1 + 0x54) = 0x100000100;
                            *(arg1 + 10) = arg1[0x14];
                            arg1[0xc] = sym.stm_generic_packet.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1[0xd] = sym.stm_mmio_addr.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1[0xe] = sym.stm_generic_link.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1[0xf] = sym.stm_generic_unlink.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1[0x10] = sym.stm_generic_set_options.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            iVar2 = stm_register_device(param_1,puVar11,obj.__this_module);
                            if (iVar2 != 0) {
                                _dev_info(param_1,"%s : stm_register_device failed, probing deferred\n",uVar4);
                                uVar6 = 0xfffffdfb;
                                goto code_r0x08001774;
                            }
                            uVar6 = coresight_get_platform_data(param_1);
                            if (uVar6 < 0xfffffffffffff001) {
                                *(param_1 + 0x90) = uVar6;
                                uStack_120 = 0x300000004;
                                pcStack_110 = obj.stm_cs_ops;
                                pcStack_f8 = obj.coresight_stm_groups;
                                uStack_108 = uVar6;
                                iStack_100 = param_1;
                                uVar6 = coresight_register(&uStack_120);
                                arg1[2] = uVar6;
                                if (uVar6 < 0xfffffffffffff001) {
                                    __pm_runtime_idle(param_1,5);
                                    if (*(param_2 + 8) == 0) {
                                        uVar10 = 0;
                                    }
                                    else {
                                        uVar10 = *(*(param_2 + 8) + 0x10);
                                    }
                                    _dev_info(arg1[2] + 0x38,"%s initialized\n",uVar10);
                                    uVar6 = 0;
                                    goto code_r0x08001774;
                                }
                            }
                            stm_unregister_device(puVar11);
                            goto code_r0x08001774;
                        }
                        iVar2 = iVar2 + 1;
                        iVar3 = of_property_read_string_helper(uVar10,"reg-names",auStack_d0 + 0xc,1,iVar2);
                    } while (-1 < iVar3);
                }
                uVar6 = 0xffffffea;
            }
            else {
                uVar6 = 0xfffffffe;
            }
        }
    }
    else {
code_r0x08001500:
        uVar6 = uVar6 & 0xffffffff;
    }
code_r0x08001774:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != auStack_d0[0xd]) {
        iVar8 = __stack_chk_fail();
        uVar10 = **extraout_x8;
        *extraout_x18 = 0x8001810;
        iVar8 = *(iVar8 + 0x98);
        coresight_unregister(uVar10,*(iVar8 + 0x10));
        uVar4 = stm_unregister_device(iVar8 + 0x38);
        return uVar4;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.stm_generic_link.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001368 (size 8) =====

ulong sym.stm_generic_link.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0x38) || (*(param_1 + -0x28) == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = coresight_enable();
    }
    return uVar1;
}


// ===== sym.stm_generic_packet.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001370 (size 8) =====

uint64_t sym.stm_generic_packet.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                   (int64_t param_1,ulong param_2,uint64_t param_3,uint32_t param_4,uint32_t param_5,
                   uint32_t param_6,ulong *param_7)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar4 = param_3;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((param_1 == 0x38) || (*(param_1 + 0x50) == 0)) {
        uVar7 = 0xfffffffffffffff3;
    }
    else if (uVar4 < *(param_1 + 0x68)) {
        uVar2 = *(param_1 + 0x5c);
        uVar7 = uVar2;
        if (param_6 <= uVar2) {
            uVar5 = 0;
            if (param_6 != 0) {
                uVar5 = 1L << ((LZCOUNT(param_6) ^ 0x3fU) & 0x3f);
            }
            uVar7 = uVar5;
        }
        uVar6 = uVar7;
        iVar3 = *(param_1 + -0x18) + (uVar4 << 8);
        uVar5 = (param_5 & 2) << 2 | (*(*(param_1 + -8) + (uVar4 >> 6) * 8) >> (param_3 & 0x3f) & 1) << 7;
        if (param_4 == 0) {
            uStack_40 = 0;
            if (((uVar2 & 0xff) - 1 & param_7) != 0) {
                uVar4 = uVar6;
                memcpy(&uStack_40,param_7);
                param_7 = &uStack_40;
            }
            if (uVar6 - 1 < 8) {
                puVar1 = iVar3 + ((uVar5 | (param_5 & 1) << 4) ^ 0x98);
                switch(uVar6) {
                case 1:
                    *puVar1 = *param_7;
                    break;
                case 2:
                    *puVar1 = *param_7;
                    break;
                case 4:
                    *puVar1 = *param_7;
                    break;
                case 8:
                    *puVar1 = *param_7;
                }
            }
        }
        else {
            if (param_4 != 1) {
                uVar7 = 0xfffffffffffffdf4;
                goto code_r0x08001b78;
            }
            uVar7 = 1;
            *(iVar3 + (uVar5 ^ 0xe8)) = *param_7;
        }
    }
    else {
        uVar7 = 0xffffffffffffffea;
    }
code_r0x08001b78:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar3 = __stack_chk_fail(uVar7);
    uVar7 = *(iVar3 + -0x10) + (uVar4 << 8);
    if ((uVar7 & 0xfff) != 0 || (param_4 & 0xf) != 0) {
        uVar7 = 0;
    }
    return uVar7;
}


// ===== sym.stm_freeze.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001378 (size 8) =====

ulong sym.stm_freeze.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    coresight_disable(*(iVar1 + 0x10));
    iVar1 = *(iVar1 + 0x40);
    if (iVar1 != 0) {
        for (piVar2 = *(iVar1 + 0x418); piVar2 != iVar1 + 0x418; piVar2 = *piVar2) {
            __pm_runtime_suspend(iVar1,0xd);
        }
    }
    return 0;
}


// ===== sym.stm_restore.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001380 (size 8) =====

ulong sym.stm_restore.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x98) + 0x40);
    if (iVar1 != 0) {
        for (piVar2 = *(iVar1 + 0x418); piVar2 != iVar1 + 0x418; piVar2 = *piVar2) {
            __pm_runtime_resume(iVar1,5);
        }
    }
    return 0;
}


// ===== sym.stm_runtime_suspend.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001388 (size 8) =====

ulong sym.stm_runtime_suspend.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x98) != 0) && (uVar1 = *(*(param_1 + 0x98) + 8), uVar1 < 0xfffffffffffff001)) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.stm_runtime_resume.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001390 (size 8) =====

ulong sym.stm_runtime_resume.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(param_1 + 0x98) != 0) && (uVar2 = *(*(param_1 + 0x98) + 8), uVar2 < 0xfffffffffffff001)) &&
        (iVar1 = clk_prepare(uVar2), iVar1 == 0)) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.stm_generic_set_options.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001398 (size 8) =====

ulong sym.stm_generic_set_options.21ab14be2196d0f496fb7edf31a23f67.cfi_jt
                (int64_t param_1,ulong param_2,uint32_t param_3,ulong param_4,int64_t param_5)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    
    if (((param_1 != 0x38) && (*(param_1 + 0x50) != 0)) && (param_3 < *(param_1 + 0x68))) {
        if (param_5 == 1) {
            puVar1 = *(param_1 + -8) + (param_3 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & (1L << (param_3 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            if (param_5 != 0) {
                return 0xffffffffffffffea;
            }
            puVar1 = *(param_1 + -8) + (param_3 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (param_3 & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return 0;
    }
    return 0xffffffffffffffea;
}


// ===== sym.spter_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013a0 (size 8) =====

int64_t sym.spter_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002bc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002bc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe20);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.devid_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013a8 (size 8) =====

int64_t sym.devid_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080032c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080032c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xfc8);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.port_enable_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013b0 (size 8) =====

int64_t sym.port_enable_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(param_1 + 0x60) + 0x98);
    if (piVar3[0x11] == 0) {
        uVar2 = piVar3[0x13];
    }
    else {
        _raw_spin_lock(piVar3 + 3);
        uVar2 = *(*piVar3 + 0xe00);
        _raw_spin_unlock(piVar3 + 3);
    }
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",uVar2);
    return iVar1;
}


// ===== sym.traceid_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013b8 (size 8) =====

int64_t sym.traceid_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0x90));
    return iVar1;
}


// ===== sym.tcsr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013c0 (size 8) =====

int64_t sym.tcsr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080027c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe80);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.hwevent_select_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013c8 (size 8) =====

int64_t sym.hwevent_select_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0xac));
    return iVar1;
}


// ===== sym.tsfreqr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013d0 (size 8) =====

int64_t sym.tsfreqr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080028c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080028c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe8c);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat3r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013d8 (size 8) =====

int64_t sym.spfeat3r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080031c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080031c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea8);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spmscr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013e0 (size 8) =====

int64_t sym.spmscr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002ec8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002ec8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe64);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat2r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013e8 (size 8) =====

int64_t sym.spfeat2r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080030c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080030c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea4);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.sper_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013f0 (size 8) =====

int64_t sym.sper_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002ac8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002ac8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe00);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.privmaskr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x080013f8 (size 8) =====

int64_t sym.privmaskr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002cc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002cc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe40);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.hwevent_enable_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001400 (size 8) =====

int64_t sym.hwevent_enable_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0xa4));
    return iVar1;
}


// ===== sym.port_select_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001408 (size 8) =====

int64_t sym.port_select_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(param_1 + 0x60) + 0x98);
    if (piVar3[0x11] == 0) {
        uVar2 = *(piVar3 + 0x9c);
    }
    else {
        _raw_spin_lock(piVar3 + 3);
        uVar2 = *(*piVar3 + 0xe60);
        _raw_spin_unlock(piVar3 + 3);
    }
    iVar1 = scnprintf(param_3,0x1000,"%#lx\n",uVar2);
    return iVar1;
}


// ===== sym.spscr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001410 (size 8) =====

int64_t sym.spscr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002dc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002dc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe60);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat1r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001418 (size 8) =====

int64_t sym.spfeat1r_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002fc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002fc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea0);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.syncr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001420 (size 8) =====

int64_t sym.syncr_show.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080029c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080029c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe90);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar6 = scnprintf(param_3,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.stm_enable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt @ 0x08001428 (size 8) =====

int sym.stm_enable.21ab14be2196d0f496fb7edf31a23f67.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == 1) {
        piVar10 = *(*(param_1 + 0x98) + 0x98);
        piVar1 = piVar10 + 0x11;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar7 = *piVar1;
            if (iVar7 != 0) goto code_r0x08001e04;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001e04:
        if (iVar7 == 0) {
            iVar6 = __pm_runtime_resume(*(param_1 + 0x98),4);
            if (iVar6 < 0) {
                puVar2 = *(param_1 + 0x98) + 0x1f8;
                uVar9 = *puVar2;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) {
                        return iVar6;
                    }
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        uVar3 = *puVar2;
                        uVar9 = uVar3;
                        if (uVar3 != uVar8) goto code_r0x08001f7c;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar5) {
                            *puVar2 = uVar8 - 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x08001f7c:
                } while (uVar8 != uVar3);
            }
            else {
                _raw_spin_lock(piVar10 + 3);
                if (*(piVar10 + 0xa4) != 0) {
                    *(*piVar10 + 0xfb0) = 0xc5acce55;
                    DataSynchronizationBarrier(3,3,0);
                    *(*piVar10 + 0xd60) = *(piVar10 + 0xac);
                    *(*piVar10 + 0xd20) = piVar10[0x15];
                    *(*piVar10 + 0xd00) = *(piVar10 + 0xa4);
                    *(*piVar10 + 0xd64) = 5;
                    DataSynchronizationBarrier(3,3,0);
                    *(*piVar10 + 0xfb0) = 0;
                }
                iVar6 = 0;
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xe70) = 0x10;
                *(*piVar10 + 0xe60) = *(piVar10 + 0x9c);
                *(*piVar10 + 0xe00) = piVar10[0x13];
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xe90) = 0xfff;
                *(*piVar10 + 0xe80) = *(piVar10 + 0x12) << 0x10 | 3;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
                _raw_spin_unlock(piVar10 + 3);
            }
        }
        else {
            iVar6 = -0x10;
        }
    }
    else {
        iVar6 = -0x16;
    }
    return iVar6;
}


// ===== sym.stm_probe @ 0x08001430 (size 1000) =====

uint64_t sym.stm_probe(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t *arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint uVar9;
    ulong *extraout_x8;
    ulong uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t *puVar11;
    ulong unaff_x30;
    ulong uStack_120;
    ulong uStack_118;
    code *pcStack_110;
    uint64_t uStack_108;
    int64_t iStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    uint64_t uStack_e0;
    ulong uStack_d8;
    uint64_t auStack_d0 [12];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    auStack_d0[10] = 0;
    auStack_d0[0xb] = 0;
    auStack_d0[8] = 0;
    auStack_d0[9] = 0;
    auStack_d0[6] = 0;
    auStack_d0[7] = 0;
    auStack_d0[4] = 0;
    auStack_d0[5] = 0;
    auStack_d0[2] = 0;
    auStack_d0[3] = 0;
    auStack_d0[0] = 0;
    auStack_d0[1] = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    iStack_100 = 0;
    pcStack_f8 = NULL;
    pcStack_110 = NULL;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uVar4 = coresight_alloc_device_name(obj.stm_devs,arg1);
    uStack_f0 = uVar4;
    if ((uVar4 == 0) || (arg1_00 = devm_kmalloc(arg1,0xb0,0xdc0), arg1_00 == NULL)) {
code_r0x08001770:
        uVar6 = 0xfffffff4;
        goto code_r0x08001774;
    }
    uVar5 = devm_clk_get(arg1,"atclk");
    arg1_00[1] = uVar5;
    if (uVar5 < 0xfffffffffffff001) {
        uVar7 = clk_prepare();
        uVar6 = uVar7 & 0xffffffff;
        if (uVar7 != 0) goto code_r0x08001774;
        uVar1 = clk_enable(uVar5);
        if (uVar1 != 0) {
            uVar6 = uVar1;
            clk_unprepare(uVar5);
            goto code_r0x08001774;
        }
    }
    *(arg1 + 0x98) = arg1_00;
    uVar6 = devm_ioremap_resource(arg1,arg1 + 0x390);
    if (uVar6 < 0xfffffffffffff001) {
        *arg1_00 = uVar6;
        uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
        uStack_e0 = uVar6;
        uVar5 = dev_fwnode(arg1);
        uVar6 = 0xfffffffe;
        if ((uVar5 != 0) && (uVar5 < 0xfffffffffffff001)) {
            if (*(uVar5 + 8) == of_fwnode_ops) {
                uVar10 = *(arg1 + 0x2f0);
                uStack_70 = 0;
                iVar2 = of_property_read_string_helper(uVar10,"reg-names",&stack0xffffffffffffff90,1,0);
                if (-1 < iVar2) {
                    iVar2 = 0;
                    do {
                        iVar3 = strcmp("stm-stimulus-base",uStack_70);
                        if (iVar3 == 0) {
                            uVar5 = of_address_to_resource(uVar10,iVar2,&stack0xffffffffffffff30);
                            uVar6 = uVar5 & 0xffffffff;
                            if (uVar5 != 0) goto code_r0x08001774;
                            arg1_00[5] = auStack_d0[0];
                            uVar6 = devm_ioremap_resource(arg1,&stack0xffffffffffffff30);
                            if (0xfffffffffffff000 < uVar6) goto code_r0x08001500;
                            arg1_00[4] = uVar6;
                            uVar1 = _segment.ehdr;
                            uVar9 = 4;
                            if ((*(*arg1_00 + 0xea4) & 0xf000) != 0) {
                                uVar9 = 8;
                            }
                            *(arg1_00 + 0x94) = uVar9;
                            if (uVar1 == 0) {
                                uVar1 = 0x20;
                                if ((*(*arg1_00 + 0xfc8) & 0x1ffff) != 0) {
                                    uVar1 = *(*arg1_00 + 0xfc8) & 0x1ffff;
                                }
                            }
                            *(arg1_00 + 0x14) = uVar1;
                            uVar5 = devm_kmalloc(arg1,uVar1 + 0x3f >> 3 & 0x3ffffff8,0xdc0);
                            if (uVar5 == 0) goto code_r0x08001770;
                            arg1_00[6] = uVar5;
                            *(arg1_00 + 3) = 0;
                            sym.stm_init_default_data(arg1_00);
                            puVar11 = arg1_00 + 7;
                            *puVar11 = uVar4;
                            arg1_00[9] = 0x100000001;
                            *(arg1_00 + 0x54) = 0x100000100;
                            *(arg1_00 + 10) = arg1_00[0x14];
                            arg1_00[0xc] = sym.stm_generic_packet.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1_00[0xd] = sym.stm_mmio_addr.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1_00[0xe] = sym.stm_generic_link.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1_00[0xf] = sym.stm_generic_unlink.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            arg1_00[0x10] = sym.stm_generic_set_options.21ab14be2196d0f496fb7edf31a23f67.cfi_jt;
                            iVar2 = stm_register_device(arg1,puVar11,obj.__this_module);
                            if (iVar2 != 0) {
                                _dev_info(arg1,"%s : stm_register_device failed, probing deferred\n",uVar4);
                                uVar6 = 0xfffffdfb;
                                goto code_r0x08001774;
                            }
                            uVar6 = coresight_get_platform_data(arg1);
                            if (uVar6 < 0xfffffffffffff001) {
                                *(arg1 + 0x90) = uVar6;
                                uStack_120 = 0x300000004;
                                pcStack_110 = obj.stm_cs_ops;
                                pcStack_f8 = obj.coresight_stm_groups;
                                uStack_108 = uVar6;
                                iStack_100 = arg1;
                                uVar6 = coresight_register(&stack0xfffffffffffffee0);
                                arg1_00[2] = uVar6;
                                if (uVar6 < 0xfffffffffffff001) {
                                    __pm_runtime_idle(arg1,5);
                                    if (*(arg2 + 8) == 0) {
                                        uVar10 = 0;
                                    }
                                    else {
                                        uVar10 = *(*(arg2 + 8) + 0x10);
                                    }
                                    _dev_info(arg1_00[2] + 0x38,"%s initialized\n",uVar10);
                                    uVar6 = 0;
                                    goto code_r0x08001774;
                                }
                            }
                            stm_unregister_device(puVar11);
                            goto code_r0x08001774;
                        }
                        iVar2 = iVar2 + 1;
                        iVar3 = of_property_read_string_helper(uVar10,"reg-names",&stack0xffffffffffffff90,1,iVar2);
                    } while (-1 < iVar3);
                }
                uVar6 = 0xffffffea;
            }
            else {
                uVar6 = 0xfffffffe;
            }
        }
    }
    else {
code_r0x08001500:
        uVar6 = uVar6 & 0xffffffff;
    }
code_r0x08001774:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        uVar10 = **extraout_x8;
        *extraout_x18 = 0x8001810;
        iVar8 = *(iVar8 + 0x98);
        coresight_unregister(uVar10,*(iVar8 + 0x10));
        uVar4 = stm_unregister_device(iVar8 + 0x38);
        return uVar4;
    }
    return uVar6 & 0xffffffff;
}


// ===== sym.stm_remove @ 0x08001818 (size 60) =====

void sym.stm_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    coresight_unregister(*(iVar1 + 0x10));
    stm_unregister_device(iVar1 + 0x38);
    return;
}


// ===== sym.stm_freeze @ 0x08001854 (size 112) =====

ulong sym.stm_freeze(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    coresight_disable(*(iVar1 + 0x10));
    iVar1 = *(iVar1 + 0x40);
    if (iVar1 != 0) {
        for (piVar2 = *(iVar1 + 0x418); piVar2 != iVar1 + 0x418; piVar2 = *piVar2) {
            __pm_runtime_suspend(iVar1,0xd);
        }
    }
    return 0;
}


// ===== sym.stm_restore @ 0x080018c4 (size 104) =====

ulong sym.stm_restore(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x98) + 0x40);
    if (iVar1 != 0) {
        for (piVar2 = *(iVar1 + 0x418); piVar2 != iVar1 + 0x418; piVar2 = *piVar2) {
            __pm_runtime_resume(iVar1,5);
        }
    }
    return 0;
}


// ===== sym.stm_runtime_suspend @ 0x0800192c (size 80) =====

ulong sym.stm_runtime_suspend(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x98) != 0) && (uVar1 = *(*(arg1 + 0x98) + 8), uVar1 < 0xfffffffffffff001)) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.stm_runtime_resume @ 0x0800197c (size 96) =====

ulong sym.stm_runtime_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(arg1 + 0x98) != 0) && (uVar2 = *(*(arg1 + 0x98) + 8), uVar2 < 0xfffffffffffff001)) &&
        (iVar1 = clk_prepare(uVar2), iVar1 == 0)) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.stm_init_default_data @ 0x080019dc (size 68) =====

void sym.stm_init_default_data(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x98) = 0xffffffff;
    *(arg1 + 0x90) = 1;
    __bitmap_clear(*(arg1 + 0x30),0,*(arg1 + 0xa0));
    return;
}


// ===== sym.stm_generic_packet @ 0x08001a20 (size 448) =====

uint64_t sym.stm_generic_packet(int64_t arg1,uchar noname_1 [16],uint32_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t in_w4;
    uint32_t in_w5;
    ulong *in_x6;
    uint32_t uVar4;
    ulong *in_x18;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((arg1 == 0x38) || (*(arg1 + 0x50) == 0)) {
        uVar6 = 0xfffffffffffffff3;
    }
    else if (arg2 < *(arg1 + 0x68)) {
        uVar2 = *(arg1 + 0x5c);
        uVar6 = uVar2;
        if (in_w5 <= uVar2) {
            uVar4 = 0;
            if (in_w5 != 0) {
                uVar4 = 1L << ((LZCOUNT(in_w5) ^ 0x3fU) & 0x3f);
            }
            uVar6 = uVar4;
        }
        uVar5 = uVar6;
        iVar3 = *(arg1 + -0x18) + (arg2 << 8);
        uVar4 = (in_w4 & 2) << 2 | (*(*(arg1 + -8) + (arg2 >> 6) * 8) >> (arg2 & 0x3f) & 1) << 7;
        if (arg3 == 0) {
            uStack_40 = 0;
            if (((uVar2 & 0xff) - 1 & in_x6) != 0) {
                arg2 = uVar5;
                noname_1 = memcpy(&uStack_40);
                in_x6 = &uStack_40;
            }
            if (uVar5 - 1 < 8) {
                puVar1 = iVar3 + ((uVar4 | (in_w4 & 1) << 4) ^ 0x98);
    //switch table (7 cases) at 0x80007c8
                switch(uVar5) {
                case 1:
                    *puVar1 = *in_x6;
                    break;
                case 2:
                    *puVar1 = *in_x6;
                    break;
                case 4:
                    *puVar1 = *in_x6;
                    break;
                case 8:
                    *puVar1 = *in_x6;
                }
            }
        }
        else {
            if (arg3 != 1) {
                uVar6 = 0xfffffffffffffdf4;
                goto code_r0x08001b78;
            }
            uVar6 = 1;
            *(iVar3 + (uVar4 ^ 0xe8)) = *in_x6;
        }
    }
    else {
        uVar6 = 0xffffffffffffffea;
    }
code_r0x08001b78:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar3 = __stack_chk_fail(noname_1,uVar6);
    uVar6 = *(iVar3 + -0x10) + (arg2 << 8);
    if ((uVar6 & 0xfff) != 0 || (arg3 & 0xf) != 0) {
        uVar6 = 0;
    }
    return uVar6;
}


// ===== sym.stm_mmio_addr @ 0x08001be0 (size 40) =====

uint64_t sym.stm_mmio_addr(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    uVar1 = *(arg1 + -0x10) + (arg2 << 8);
    if ((uVar1 & 0xfff) != 0 || (arg3 & 0xfU) != 0) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.stm_generic_link @ 0x08001c08 (size 60) =====

ulong sym.stm_generic_link(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0x38) || (*(arg1 + -0x28) == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = coresight_enable();
    }
    return uVar1;
}


// ===== sym.stm_generic_unlink @ 0x08001c44 (size 52) =====

void sym.stm_generic_unlink(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0x38) && (*(arg1 + -0x28) != 0)) {
        coresight_disable();
    }
    return;
}


// ===== sym.stm_generic_set_options @ 0x08001c78 (size 232) =====

ulong sym.stm_generic_set_options(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int64_t in_x4;
    
    if (((arg1 != 0x38) && (*(arg1 + 0x50) != 0)) && (arg2 < *(arg1 + 0x68))) {
        if (in_x4 == 1) {
            puVar1 = *(arg1 + -8) + (arg2 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & (1L << (arg2 & 0x3f) ^ 0xffffffffffffffffU);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        else {
            if (in_x4 != 0) {
                return 0xffffffffffffffea;
            }
            puVar1 = *(arg1 + -8) + (arg2 >> 3 & 0x1ffffff8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (arg2 & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
        }
        return 0;
    }
    return 0xffffffffffffffea;
}


// ===== sym.stm_trace_id @ 0x08001d60 (size 24) =====

uchar sym.stm_trace_id(int64_t arg1)

{
    return *(*(*(arg1 + 0x98) + 0x98) + 0x90);
}


// ===== sym.stm_enable @ 0x08001d78 (size 612) =====

int sym.stm_enable(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 1) {
        piVar10 = *(*(arg1 + 0x98) + 0x98);
        piVar1 = piVar10 + 0x11;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar7 = *piVar1;
            if (iVar7 != 0) goto code_r0x08001e04;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
                *piVar1 = 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001e04:
        if (iVar7 == 0) {
            iVar6 = __pm_runtime_resume(*(arg1 + 0x98),4);
            if (iVar6 < 0) {
                puVar2 = *(arg1 + 0x98) + 0x1f8;
                uVar9 = *puVar2;
                do {
                    uVar8 = uVar9;
                    if (uVar8 == 0) {
                        return iVar6;
                    }
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        uVar3 = *puVar2;
                        uVar9 = uVar3;
                        if (uVar3 != uVar8) goto code_r0x08001f7c;
                        cVar4 = '\x01';
                        bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar5) {
                            *puVar2 = uVar8 - 1;
                            cVar4 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar4 != '\0');
                    DataMemoryBarrier(2,3);
code_r0x08001f7c:
                } while (uVar8 != uVar3);
            }
            else {
                _raw_spin_lock(piVar10 + 3);
                if (*(piVar10 + 0xa4) != 0) {
                    *(*piVar10 + 0xfb0) = 0xc5acce55;
                    DataSynchronizationBarrier(3,3,0);
                    *(*piVar10 + 0xd60) = *(piVar10 + 0xac);
                    *(*piVar10 + 0xd20) = piVar10[0x15];
                    *(*piVar10 + 0xd00) = *(piVar10 + 0xa4);
                    *(*piVar10 + 0xd64) = 5;
                    DataSynchronizationBarrier(3,3,0);
                    *(*piVar10 + 0xfb0) = 0;
                }
                iVar6 = 0;
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xe70) = 0x10;
                *(*piVar10 + 0xe60) = *(piVar10 + 0x9c);
                *(*piVar10 + 0xe00) = piVar10[0x13];
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
                *(*piVar10 + 0xfb0) = 0xc5acce55;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xe90) = 0xfff;
                *(*piVar10 + 0xe80) = *(piVar10 + 0x12) << 0x10 | 3;
                DataSynchronizationBarrier(3,3,0);
                *(*piVar10 + 0xfb0) = 0;
                _raw_spin_unlock(piVar10 + 3);
            }
        }
        else {
            iVar6 = -0x10;
        }
    }
    else {
        iVar6 = -0x16;
    }
    return iVar6;
}


// ===== sym.stm_disable @ 0x08001fdc (size 352) =====

void sym.stm_disable(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(*(arg1 + 0x98) + 0x98);
    if (piVar1[0x11] == 1) {
        _raw_spin_lock(piVar1 + 3);
        *(*piVar1 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xe80) = *(*piVar1 + 0xe80) & 0xfffffffe;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xfb0) = 0;
        *(*piVar1 + 0xfb0) = 0xc5acce55;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xe00) = 0;
        *(*piVar1 + 0xe70) = 0;
        DataSynchronizationBarrier(3,3,0);
        *(*piVar1 + 0xfb0) = 0;
        if (*(piVar1 + 0xa4) != 0) {
            *(*piVar1 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xd64) = 0;
            *(*piVar1 + 0xd00) = 0;
            *(*piVar1 + 0xd20) = 0;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar1 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar1 + 3);
        coresight_timeout(arg1 + 0x20,0xe80,0x17,0);
        __pm_runtime_idle(*(arg1 + 0x98),5);
        piVar1[0x11] = 0;
    }
    return;
}


// ===== sym.hwevent_enable_show @ 0x08002144 (size 72) =====

int64_t sym.hwevent_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0xa4));
    return iVar1;
}


// ===== sym.hwevent_enable_store @ 0x0800218c (size 144) =====

int64_t sym.hwevent_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xa4) = uStack_30;
        *(iVar3 + 0xa8) = uStack_30;
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.hwevent_select_show;
    iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",*(*(*(iVar3 + 0x60) + 0x98) + 0xac));
    return iVar1;
}


// ===== sym.hwevent_select_show @ 0x0800221c (size 72) =====

int64_t sym.hwevent_select_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0xac));
    return iVar1;
}


// ===== sym.hwevent_select_store @ 0x08002264 (size 144) =====

int64_t sym.hwevent_select_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    uint uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar2 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar3 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&uStack_30);
    if (iVar1 == 0) {
        *(iVar3 + 0xac) = uStack_30;
    }
    else {
        arg3 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.port_enable_show;
    piVar5 = *(*(iVar3 + 0x60) + 0x98);
    if (piVar5[0x11] == 0) {
        uVar4 = piVar5[0x13];
    }
    else {
        _raw_spin_lock(piVar5 + 3);
        uVar4 = *(*piVar5 + 0xe00);
        _raw_spin_unlock(piVar5 + 3);
    }
    iVar1 = scnprintf(puVar2,0x1000,"%#lx\n",uVar4);
    return iVar1;
}


// ===== sym.port_enable_show @ 0x080022f4 (size 140) =====

int64_t sym.port_enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(arg1 + 0x60) + 0x98);
    if (piVar3[0x11] == 0) {
        uVar2 = piVar3[0x13];
    }
    else {
        _raw_spin_lock(piVar3 + 3);
        uVar2 = *(*piVar3 + 0xe00);
        noname_1 = _raw_spin_unlock(piVar3 + 3);
    }
    iVar1 = scnprintf(noname_1,arg2,0x1000,"%#lx\n",uVar2);
    return iVar1;
}


// ===== sym.port_enable_store @ 0x08002388 (size 248) =====

int64_t sym.port_enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint uVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar3 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar1 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar1 == 0) {
        _raw_spin_lock(piVar5 + 3);
        *(piVar5 + 0x13) = uStack_40;
        if (piVar5[0x11] != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xe00) = piVar5[0x13];
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar5 + 3);
    }
    else {
        arg3 = iVar1;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = 0x800247c;
    piVar5 = *(*(iVar2 + 0x60) + 0x98);
    if (piVar5[0x11] == 0) {
        uVar4 = *(piVar5 + 0x9c);
    }
    else {
        _raw_spin_lock(piVar5 + 3);
        uVar4 = *(*piVar5 + 0xe60);
        _raw_spin_unlock(piVar5 + 3);
    }
    iVar1 = scnprintf(puVar3,0x1000,"%#lx\n",uVar4);
    return iVar1;
}


// ===== sym.port_select_show @ 0x08002480 (size 140) =====

int64_t sym.port_select_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    uint uVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(*(arg1 + 0x60) + 0x98);
    if (piVar3[0x11] == 0) {
        uVar2 = *(piVar3 + 0x9c);
    }
    else {
        _raw_spin_lock(piVar3 + 3);
        uVar2 = *(*piVar3 + 0xe60);
        noname_1 = _raw_spin_unlock(piVar3 + 3);
    }
    iVar1 = scnprintf(noname_1,arg2,0x1000,"%#lx\n",uVar2);
    return iVar1;
}


// ===== sym.port_select_store @ 0x08002514 (size 288) =====

int64_t sym.port_select_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar4 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    piVar5 = *(*(arg1 + 0x60) + 0x98);
    iVar2 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if (iVar2 == 0) {
        _raw_spin_lock(piVar5 + 3);
        *(piVar5 + 0x9c) = uStack_40;
        if (piVar5[0x11] != 0) {
            *(*piVar5 + 0xfb0) = 0xc5acce55;
            DataSynchronizationBarrier(3,3,0);
            uVar1 = *(*piVar5 + 0xe00);
            *(*piVar5 + 0xe00) = 0;
            *(*piVar5 + 0xe60) = *(piVar5 + 0x9c);
            *(*piVar5 + 0xe00) = uVar1;
            DataSynchronizationBarrier(3,3,0);
            *(*piVar5 + 0xfb0) = 0;
        }
        _raw_spin_unlock(piVar5 + 3);
    }
    else {
        arg3 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = 0x800262c;
    iVar2 = sprintf(puVar4,"%#lx\n",*(*(*(iVar3 + 0x60) + 0x98) + 0x90));
    return iVar2;
}


// ===== sym.traceid_show @ 0x08002634 (size 68) =====

int64_t sym.traceid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0x90));
    return iVar1;
}


// ===== sym.traceid_store @ 0x08002678 (size 148) =====

int64_t sym.traceid_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    ulong *puVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    puVar7 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    uStack_30 = 0;
    iVar10 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = kstrtoull(arg2,0x10,&uStack_30);
    if (iVar6 == 0) {
        *(iVar10 + 0x90) = uStack_30 & 0x7f;
    }
    else {
        arg3 = iVar6;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.tcsr_show;
    piVar11 = *(*(iVar10 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(iVar10 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(iVar10 + 0x60) + 0x1f8;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar9 = uVar3;
                if (uVar3 != uVar8) goto code_r0x080027c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar8 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027c8:
        } while (uVar8 != uVar3);
    }
    else {
        uVar2 = *(*piVar11 + 0xe80);
        __pm_runtime_idle(*(iVar10 + 0x60),4);
        iVar6 = scnprintf(puVar7,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.tcsr_show @ 0x0800270c (size 256) =====

int64_t sym.tcsr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080027c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe80);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.tsfreqr_show @ 0x0800280c (size 256) =====

int64_t sym.tsfreqr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080028c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080028c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe8c);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.syncr_show @ 0x0800290c (size 256) =====

int64_t sym.syncr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080029c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080029c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe90);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.sper_show @ 0x08002a0c (size 256) =====

int64_t sym.sper_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002ac8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002ac8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe00);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spter_show @ 0x08002b0c (size 256) =====

int64_t sym.spter_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002bc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002bc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe20);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.privmaskr_show @ 0x08002c0c (size 256) =====

int64_t sym.privmaskr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002cc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002cc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe40);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spscr_show @ 0x08002d0c (size 256) =====

int64_t sym.spscr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002dc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002dc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe60);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spmscr_show @ 0x08002e0c (size 256) =====

int64_t sym.spmscr_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002ec8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002ec8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xe64);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat1r_show @ 0x08002f0c (size 256) =====

int64_t sym.spfeat1r_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x08002fc8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08002fc8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea0);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat2r_show @ 0x0800300c (size 256) =====

int64_t sym.spfeat2r_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080030c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080030c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea4);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.spfeat3r_show @ 0x0800310c (size 256) =====

int64_t sym.spfeat3r_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080031c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080031c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xea8);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.devid_show @ 0x0800320c (size 256) =====

int64_t sym.devid_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar6 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar6 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar3 = *puVar1;
                uVar8 = uVar3;
                if (uVar3 != uVar7) goto code_r0x080032c8;
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                    *puVar1 = uVar7 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080032c8:
        } while (uVar7 != uVar3);
    }
    else {
        uVar2 = *(*piVar9 + 0xfc8);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar6 = scnprintf(arg2,0x1000,"0x%llx\n",uVar2);
    }
    return iVar6;
}


// ===== sym.__cfi_check_fail @ 0x0800330c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003350

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
    //switch table (4 cases) at 0x80007e8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003364);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08003374 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_register(obj.stm_driver);
    return;
}


// ===== sym.cleanup_module @ 0x080033a0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    amba_driver_unregister(obj.stm_driver);
    return;
}

