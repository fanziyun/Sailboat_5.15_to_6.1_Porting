// decompiled from qrtr-mhi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080016fc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x6e9fb1c868c44dc4) {
        if (arg1 == -0x2648401b1c1d210c) {
            pcVar2 = sym.qcom_mhi_qrtr_probe.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x27a79143e48b18f9) goto code_r0x080016bc;
            pcVar2 = sym.qcom_mhi_qrtr_send.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt;
        }
    }
    else if (arg1 == 0x6e9fb1c868c44dc4) {
        pcVar2 = sym.qcom_mhi_qrtr_remove.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt;
    }
    else {
        if (arg1 == 0x791a5468d96d0f95) {
            if ((pcVar1 + -0x8001140 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080016bc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016bc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080016bc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001710);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.qcom_mhi_qrtr_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mhi_driver_register(obj.qcom_mhi_qrtr_driver,obj.__this_module);
    return;
}


// ===== sym.qcom_mhi_qrtr_send.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt @ 0x08001130 (size 8) =====

ulong sym.qcom_mhi_qrtr_send.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__qcom_mhi_qrtr_send(param_1,param_2);
    if (uVar1 == -0xb) {
        usleep_range_state(1000,2000,2);
        uVar1 = sym.__qcom_mhi_qrtr_send(param_1,param_2);
        if (uVar1 == -0xb) {
            usleep_range_state(1000,2000,2);
            uVar1 = sym.__qcom_mhi_qrtr_send(param_1,param_2);
            if (uVar1 == -0xb) {
                usleep_range_state(1000,2000,2);
                uVar1 = sym.__qcom_mhi_qrtr_send(param_1,param_2);
                if (uVar1 == -0xb) {
                    usleep_range_state(1000,2000,2);
                    uVar1 = sym.__qcom_mhi_qrtr_send(param_1,param_2);
                    if (uVar1 == -0xb) {
                        usleep_range_state(1000,2000,2);
                        uVar1 = 0xfffffff5;
                    }
                }
            }
        }
    }
    return uVar1;
}


// ===== sym.qcom_mhi_qrtr_probe.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt @ 0x08001138 (size 8) =====

uint64_t sym.qcom_mhi_qrtr_probe.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    uint uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    puVar4 = devm_kmalloc(param_1 + 0x28,0x40,0xdc0);
    if (puVar4 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x080012d4;
    }
    puVar4[2] = param_1;
    puVar4[3] = param_1 + 0x28;
    *puVar4 = sym.qcom_mhi_qrtr_send.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt;
    *(puVar4 + 4) = 0;
    __init_swait_queue_head(puVar4 + 5,"&x->wait",obj.qcom_mhi_qrtr_driver);
    piVar8 = *(param_1 + 0x10);
    *(param_1 + 0xc0) = puVar4;
    uStack_50 = 0;
    iVar5 = of_find_compatible_node(0,0,"qcom,qrtr-mhi");
    if (iVar5 == 0) {
code_r0x08001280:
        bVar1 = false;
        uVar7 = 1;
    }
    else {
        uVar7 = 1;
        iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,dev-id",&uStack_50 + 4,1,0);
        if (iVar2 < 0) {
            bVar1 = false;
        }
        else {
            if (uStack_50._4_4_ != *(*piVar8 + -0x92)) goto code_r0x08001280;
            iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,net-id",&uStack_50,1,0);
            uVar7 = uStack_50;
            if (iVar2 < 0) {
                uVar7 = 1;
            }
            iVar5 = of_find_property(iVar5,"qcom,low-latency",0);
            bVar1 = iVar5 != 0;
        }
    }
    uVar3 = qrtr_endpoint_register(puVar4,uVar7,bVar1,0);
    uVar6 = uVar3;
    if (uVar3 == 0) {
        uVar3 = mhi_prepare_for_transfer(param_1,1);
        uVar6 = uVar3;
        if (uVar3 == 0) {
            complete_all(puVar4 + 4);
        }
        else {
            qrtr_endpoint_unregister(puVar4);
            *(param_1 + 0xc0) = 0;
        }
    }
code_r0x080012d4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_mhi_qrtr_remove;
    qrtr_endpoint_unregister(*(iVar5 + 0xc0));
    uVar6 = mhi_unprepare_from_transfer(iVar5);
    *(iVar5 + 0xc0) = 0;
    return uVar6;
}


// ===== sym.qcom_mhi_qrtr_ul_callback.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt @ 0x08001140 (size 8) =====

void sym.qcom_mhi_qrtr_ul_callback.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt(ulong param_1,int64_t *param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *param_2;
    iVar5 = *(iVar6 + 0x18);
    if (iVar5 != 0) {
        piVar1 = iVar5 + 0x80;
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
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            sk_free();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    consume_skb(iVar6);
    return;
}


// ===== sym.qcom_mhi_qrtr_dl_callback.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt @ 0x08001148 (size 8) =====

void sym.qcom_mhi_qrtr_dl_callback.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt(int64_t param_1,ulong *param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xc0);
    if (((iVar2 != 0) && (*(param_2 + 0x14) == 0)) &&
       (iVar1 = qrtr_endpoint_post(iVar2,*param_2,param_2[1]), iVar1 == -0x16)) {
        _dev_err(*(iVar2 + 0x18),"invalid ipcrouter packet\n");
    }
    return;
}


// ===== sym.qcom_mhi_qrtr_remove.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt @ 0x08001150 (size 8) =====

void sym.qcom_mhi_qrtr_remove.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_endpoint_unregister(*(param_1 + 0xc0));
    mhi_unprepare_from_transfer(param_1);
    *(param_1 + 0xc0) = 0;
    return;
}


// ===== sym.qcom_mhi_qrtr_probe @ 0x08001158 (size 440) =====

uint64_t sym.qcom_mhi_qrtr_probe(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    uint uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    puVar4 = devm_kmalloc(arg1 + 0x28,0x40,0xdc0);
    if (puVar4 == NULL) {
        uVar6 = 0xfffffff4;
        goto code_r0x080012d4;
    }
    puVar4[2] = arg1;
    puVar4[3] = arg1 + 0x28;
    *puVar4 = sym.qcom_mhi_qrtr_send.c8abcd7e99aca7f4a871f9e6ffa57a20.cfi_jt;
    *(puVar4 + 4) = 0;
    __init_swait_queue_head(puVar4 + 5,"&x->wait",obj.qcom_mhi_qrtr_driver);
    piVar8 = *(arg1 + 0x10);
    *(arg1 + 0xc0) = puVar4;
    uStack_50 = 0;
    iVar5 = of_find_compatible_node(0,0,"qcom,qrtr-mhi");
    if (iVar5 == 0) {
code_r0x08001280:
        bVar1 = false;
        uVar7 = 1;
    }
    else {
        uVar7 = 1;
        iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,dev-id",&uStack_50 + 4,1,0);
        if (iVar2 < 0) {
            bVar1 = false;
        }
        else {
            if (uStack_50._4_4_ != *(*piVar8 + -0x92)) goto code_r0x08001280;
            iVar2 = of_property_read_variable_u32_array(iVar5,"qcom,net-id",&uStack_50,1,0);
            uVar7 = uStack_50;
            if (iVar2 < 0) {
                uVar7 = 1;
            }
            iVar5 = of_find_property(iVar5,"qcom,low-latency",0);
            bVar1 = iVar5 != 0;
        }
    }
    uVar3 = qrtr_endpoint_register(puVar4,uVar7,bVar1,0);
    uVar6 = uVar3;
    if (uVar3 == 0) {
        uVar3 = mhi_prepare_for_transfer(arg1,1);
        uVar6 = uVar3;
        if (uVar3 == 0) {
            complete_all(puVar4 + 4);
        }
        else {
            qrtr_endpoint_unregister(puVar4);
            *(arg1 + 0xc0) = 0;
        }
    }
code_r0x080012d4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_mhi_qrtr_remove;
    qrtr_endpoint_unregister(*(iVar5 + 0xc0));
    uVar6 = mhi_unprepare_from_transfer(iVar5);
    *(iVar5 + 0xc0) = 0;
    return uVar6;
}


// ===== sym.qcom_mhi_qrtr_remove @ 0x08001310 (size 64) =====

void sym.qcom_mhi_qrtr_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_endpoint_unregister(*(arg1 + 0xc0));
    mhi_unprepare_from_transfer(arg1);
    *(arg1 + 0xc0) = 0;
    return;
}


// ===== sym.qcom_mhi_qrtr_ul_callback @ 0x08001350 (size 172) =====

void sym.qcom_mhi_qrtr_ul_callback(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    iVar5 = *(arg1 + 0x18);
    if (iVar5 != 0) {
        piVar1 = iVar5 + 0x80;
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
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            sk_free();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    consume_skb(arg1);
    return;
}


// ===== sym.qcom_mhi_qrtr_dl_callback @ 0x080013fc (size 100) =====

void sym.qcom_mhi_qrtr_dl_callback(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xc0);
    if (((iVar2 != 0) && (*(arg2 + 0x14) == 0)) &&
       (iVar1 = qrtr_endpoint_post(iVar2,*arg2,*(arg2 + 8)), iVar1 == -0x16)) {
        _dev_err(*(iVar2 + 0x18),"invalid ipcrouter packet\n");
    }
    return;
}


// ===== sym.qcom_mhi_qrtr_send @ 0x08001460 (size 224) =====

ulong sym.qcom_mhi_qrtr_send(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__qcom_mhi_qrtr_send(arg1,arg2);
    if (uVar1 == -0xb) {
        usleep_range_state(1000,2000,2);
        uVar1 = sym.__qcom_mhi_qrtr_send(arg1,arg2);
        if (uVar1 == -0xb) {
            usleep_range_state(1000,2000,2);
            uVar1 = sym.__qcom_mhi_qrtr_send(arg1,arg2);
            if (uVar1 == -0xb) {
                usleep_range_state(1000,2000,2);
                uVar1 = sym.__qcom_mhi_qrtr_send(arg1,arg2);
                if (uVar1 == -0xb) {
                    usleep_range_state(1000,2000,2);
                    uVar1 = sym.__qcom_mhi_qrtr_send(arg1,arg2);
                    if (uVar1 == -0xb) {
                        usleep_range_state(1000,2000,2);
                        uVar1 = 0xfffffff5;
                    }
                }
            }
        }
    }
    return uVar1;
}


// ===== sym.__qcom_mhi_qrtr_send @ 0x08001540 (size 376) =====

int sym.__qcom_mhi_qrtr_send(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x18) != 0) {
        puVar1 = *(arg2 + 0x18) + 0x80;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar3 = *puVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if (uVar3 == 0) {
            uVar9 = 2;
        }
        else {
            if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x0800158c;
            uVar9 = 1;
        }
        refcount_warn_saturate(puVar1,uVar9);
    }
code_r0x0800158c:
    iVar7 = wait_for_completion_interruptible(arg1 + 0x20);
    if (iVar7 == 0) {
        if ((*(arg2 + 0x74) == 0) || (iVar8 = __pskb_pull_tail(arg2), iVar8 != 0)) {
            iVar7 = mhi_queue_skb(*(arg1 + 0x10),1,arg2,*(arg2 + 0x70),2);
            if (iVar7 == -0xb) {
                return -0xb;
            }
            if (iVar7 == 0) {
                return 0;
            }
        }
        else {
            iVar7 = -0xc;
        }
    }
    if (*(arg2 + 0x18) != 0) {
        piVar2 = *(arg2 + 0x18) + 0x80;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
                *piVar2 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sk_free();
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar2,3);
        }
    }
    kfree_skb(arg2);
    return iVar7;
}


// ===== sym.__cfi_check_fail @ 0x080016b8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016fc

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
    //switch table (4 cases) at 0x8000180
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001710);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001714 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mhi_driver_register(obj.qcom_mhi_qrtr_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001748 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.qcom_mhi_qrtr_driver);
    return;
}

