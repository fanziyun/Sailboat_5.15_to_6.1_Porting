// decompiled from qrtr-smd by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x08001488

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x27a79143e48b18f9) {
        if (arg1 == -0x61278529fef85643) {
            uVar2 = 0x8001138;
        }
        else if (arg1 == -0x19ad56ffbc919b67) {
            uVar2 = 0x8001140;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001448;
            uVar2 = 0x8001120;
        }
    }
    else if (arg1 == 0x27a79143e48b18f9) {
        uVar2 = 0x8001128;
    }
    else if (arg1 == 0x2ce63a3287021e91) {
        uVar2 = 0x8001130;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001448;
        uVar2 = 0x8001118;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001448:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800149c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001118 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.qcom_smd_qrtr_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.qcom_smd_qrtr_driver,obj.__this_module);
    return;
}


// ===== sym.qcom_smd_qrtr_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001128 (size 8) =====

int sym.qcom_smd_qrtr_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + 0x74) == 0) || (iVar2 = __pskb_pull_tail(param_2), iVar2 != 0)) {
        iVar1 = rpmsg_send(*(param_1 + 0x10),*(param_2 + 0xd8),*(param_2 + 0x70));
        if (iVar1 == 0) {
            consume_skb(param_2);
            return 0;
        }
    }
    else {
        iVar1 = -0xc;
    }
    kfree_skb(param_2);
    return iVar1;
}


// ===== sym.qcom_smd_qrtr_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001130 (size 8) =====

void sym.qcom_smd_qrtr_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_endpoint_unregister(*(param_1 + 0x98));
    *(param_1 + 0x98) = 0;
    return;
}


// ===== sym.qcom_smd_qrtr_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001138 (size 8) =====

int sym.qcom_smd_qrtr_callback.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.qcom_smd_qrtr_callback._rs,"qcom_smd_qrtr_callback");
        if (iVar1 != 0) {
            _printk(0x80001df,"qcom_smd_qrtr_callback");
        }
        iVar1 = -0xb;
    }
    else {
        iVar1 = qrtr_endpoint_post(iVar3,param_2,param_3);
        if (iVar1 == -0x16) {
            _dev_err(*(iVar3 + 0x18),"invalid ipcrouter packet\n");
            iVar1 = 0;
        }
        uVar2 = qcom_glink_is_wakeup(1);
        if ((uVar2 & 1) != 0) {
            qrtr_print_wakeup_reason(param_2);
        }
    }
    return iVar1;
}


// ===== sym.qcom_smd_qrtr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001140 (size 8) =====

uint64_t sym.qcom_smd_qrtr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_4c = 0;
    puVar3 = devm_kmalloc(param_1,0x20,0xdc0);
    if (puVar3 == NULL) {
code_r0x0800121c:
        uVar6 = 0xfffffff4;
    }
    else {
        uVar4 = *(param_1 + 0x2f0);
        puVar3[2] = *(param_1 + 0x3c8);
        puVar3[3] = param_1;
        *puVar3 = sym.qcom_smd_qrtr_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar1 = of_property_read_variable_u32_array(uVar4,"qcom,net-id",&uStack_4c,1,0);
        if (iVar1 < 0) {
            uStack_4c = 1;
        }
        iVar5 = of_find_property(*(param_1 + 0x2f0),"qcom,low-latency",0);
        uVar2 = of_property_count_elems_of_size(*(param_1 + 0x2f0),"qcom,no-wake-svc",4);
        if (0 < uVar2) {
            uVar6 = uVar2;
            uStack_40 = uVar6;
            iStack_48 = __kmalloc(uVar6 << 2,0xcc0);
            if (iStack_48 == 0) goto code_r0x0800121c;
            of_property_read_variable_u32_array(*(param_1 + 0x2f0),"qcom,no-wake-svc",iStack_48,uVar6,0);
        }
        uVar2 = qrtr_endpoint_register(puVar3,uStack_4c,iVar5 != 0,&iStack_48);
        uVar6 = uVar2;
        kfree(iStack_48);
        if (uVar2 == 0) {
            *(param_1 + 0x98) = puVar3;
            _printk(0x8000181,"qcom_smd_qrtr_probe");
        }
        else {
            _dev_err(puVar3[3],"endpoint register failed: %d\n",uVar2,iVar5 != 0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_smd_qrtr_remove;
    uVar6 = qrtr_endpoint_unregister(*(iVar5 + 0x98));
    *(iVar5 + 0x98) = 0;
    return uVar6;
}


// ===== sym.qcom_smd_qrtr_probe @ 0x08001148 (size 400) =====

uint64_t sym.qcom_smd_qrtr_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_4c = 0;
    puVar3 = devm_kmalloc(arg1,0x20,0xdc0);
    if (puVar3 == NULL) {
code_r0x0800121c:
        uVar6 = 0xfffffff4;
    }
    else {
        uVar4 = *(arg1 + 0x2f0);
        puVar3[2] = *(arg1 + 0x3c8);
        puVar3[3] = arg1;
        *puVar3 = sym.qcom_smd_qrtr_send.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        iVar1 = of_property_read_variable_u32_array(uVar4,"qcom,net-id",&uStack_4c,1,0);
        if (iVar1 < 0) {
            uStack_4c = 1;
        }
        iVar5 = of_find_property(*(arg1 + 0x2f0),"qcom,low-latency",0);
        uVar2 = of_property_count_elems_of_size(*(arg1 + 0x2f0),"qcom,no-wake-svc",4);
        if (0 < uVar2) {
            uVar6 = uVar2;
            uStack_40 = uVar6;
            iStack_48 = __kmalloc(uVar6 << 2,0xcc0);
            if (iStack_48 == 0) goto code_r0x0800121c;
            of_property_read_variable_u32_array(*(arg1 + 0x2f0),"qcom,no-wake-svc",iStack_48,uVar6,0);
        }
        uVar2 = qrtr_endpoint_register(puVar3,uStack_4c,iVar5 != 0,&iStack_48);
        uVar6 = uVar2;
        kfree(iStack_48);
        if (uVar2 == 0) {
            *(arg1 + 0x98) = puVar3;
            _printk(0x8000181,"qcom_smd_qrtr_probe");
        }
        else {
            _dev_err(puVar3[3],"endpoint register failed: %d\n",uVar2,iVar5 != 0);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_smd_qrtr_remove;
    uVar6 = qrtr_endpoint_unregister(*(iVar5 + 0x98));
    *(iVar5 + 0x98) = 0;
    return uVar6;
}


// ===== sym.qcom_smd_qrtr_remove @ 0x080012d8 (size 56) =====

void sym.qcom_smd_qrtr_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    qrtr_endpoint_unregister(*(arg1 + 0x98));
    *(arg1 + 0x98) = 0;
    return;
}


// ===== sym.qcom_smd_qrtr_callback @ 0x08001310 (size 188) =====

int sym.qcom_smd_qrtr_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (iVar3 == 0) {
        iVar1 = ___ratelimit(obj.qcom_smd_qrtr_callback._rs,"qcom_smd_qrtr_callback");
        if (iVar1 != 0) {
            _printk(0x80001df,"qcom_smd_qrtr_callback");
        }
        iVar1 = -0xb;
    }
    else {
        iVar1 = qrtr_endpoint_post(iVar3,arg2,arg3);
        if (iVar1 == -0x16) {
            _dev_err(*(iVar3 + 0x18),"invalid ipcrouter packet\n");
            iVar1 = 0;
        }
        uVar2 = qcom_glink_is_wakeup(1);
        if ((uVar2 & 1) != 0) {
            qrtr_print_wakeup_reason(arg2);
        }
    }
    return iVar1;
}


// ===== sym.qcom_smd_qrtr_send @ 0x080013cc (size 120) =====

int sym.qcom_smd_qrtr_send(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg2 + 0x74) == 0) || (iVar2 = __pskb_pull_tail(arg2), iVar2 != 0)) {
        iVar1 = rpmsg_send(*(arg1 + 0x10),*(arg2 + 0xd8),*(arg2 + 0x70));
        if (iVar1 == 0) {
            consume_skb(arg2);
            return 0;
        }
    }
    else {
        iVar1 = -0xc;
    }
    kfree_skb(arg2);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001444 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001488

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
    //switch table (4 cases) at 0x8000140
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800149c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080014a4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.qcom_smd_qrtr_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080014d8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.qcom_smd_qrtr_driver);
    return;
}

