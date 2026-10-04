// decompiled from qcom_rimps by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001718

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 == -0x3e637c87541bd604) {
            pcVar2 = sym.qcom_rimps_mbox_send_data.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
        }
        else if (arg1 == -0x3ac64e6681b1b5a7) {
            pcVar2 = sym.qcom_rimps_mbox_xlate.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
        }
        else {
            if (arg1 != -0x3987c0e26ee29729) goto code_r0x080016d8;
            pcVar2 = sym.qcom_rimps_rx_interrupt.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080016d8;
        }
        if (arg1 != -0x8962c8020a87446) goto code_r0x080016d8;
        pcVar2 = sym.qcom_rimps_mbox_shutdown.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016d8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080016d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800172c);
    (*pcVar1)();
}


// ===== sym.qcom_rimps_mbox_send_data.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.qcom_rimps_mbox_send_data.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0x10000000,*(*param_1 + 0x278) + 0xc);
    return 0;
}


// ===== sym.qcom_rimps_rx_interrupt.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.qcom_rimps_rx_interrupt.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(param_2 + 0x294)) {
        uVar2 = sym.readl(*(param_2 + 0x280) + 0x30c);
        if ((uVar2 >> 3 & 1) != 0) {
            sym.writel(8,*(param_2 + 0x280) + 0x308);
            DataSynchronizationBarrier(3,3,0);
            uVar3 = _raw_spin_lock_irqsave(param_2 + 0x170);
            if (*(param_2 + 0x178) != 0) {
                mbox_chan_received_data(param_2 + 0x88,0);
            }
            _raw_spin_unlock_irqrestore(param_2 + 0x170,uVar3);
        }
        if (1 < *(param_2 + 0x294)) {
            uVar2 = sym.readl(*(param_2 + 0x280) + 0x130c);
            if ((uVar2 >> 3 & 1) != 0) {
                sym.writel(8,*(param_2 + 0x280) + 0x1308);
                DataSynchronizationBarrier(3,3,0);
                uVar3 = _raw_spin_lock_irqsave(param_2 + 0x268);
                if (*(param_2 + 0x270) != 0) {
                    mbox_chan_received_data(param_2 + 0x180,0);
                }
                _raw_spin_unlock_irqrestore(param_2 + 0x268,uVar3);
            }
            if (2 < *(param_2 + 0x294)) {
                iVar4 = 0x2000;
                iVar5 = 2;
                do {
                    uVar2 = sym.readl(*(param_2 + 0x280) + iVar4 + 0x30c);
                    if ((uVar2 >> 3 & 1) != 0) {
                        sym.writel(8,*(param_2 + 0x280) + iVar4 + 0x308);
                        DataSynchronizationBarrier(3,3,0);
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x80014f4);
                        (*pcVar1)();
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 0x1000;
                } while (iVar5 < *(param_2 + 0x294));
            }
        }
    }
    return 1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001170 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001178 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800035a,"qcom_rimps_init",iVar1);
    }
    return iVar1;
}


// ===== sym.qcom_rimps_mbox_shutdown.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001180 (size 8) =====

void sym.qcom_rimps_mbox_shutdown.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0xe8);
    *(param_1 + 0xf0) = 0;
    _raw_spin_unlock_irqrestore(param_1 + 0xe8,uVar1);
    return;
}


// ===== sym.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001188 (size 8) =====

int sym.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x298,0xdc0);
    if (piVar3 != NULL) {
        piVar3[0x51] = iVar1;
        piVar4 = platform_get_resource(param_1,0x200,0);
        if (piVar4 == NULL) {
code_r0x080012cc:
            _dev_err(iVar1,"Failed to get the device base address\n");
            return -0x13;
        }
        iVar5 = devm_ioremap(iVar1,*piVar4,(piVar4[1] - *piVar4) + 1);
        piVar3[0x4f] = iVar5;
        if (iVar5 == 0) {
            pcVar6 = "Failed to ioremap the rimps tx irq addr\n";
        }
        else {
            piVar4 = platform_get_resource(param_1,0x200,1);
            if (piVar4 == NULL) goto code_r0x080012cc;
            iVar5 = devm_ioremap(iVar1,*piVar4,(piVar4[1] - *piVar4) + 1);
            piVar3[0x50] = iVar5;
            if (iVar5 != 0) {
                iVar2 = platform_get_irq(param_1,0);
                *(piVar3 + 0x52) = iVar2;
                if (iVar2 < 0) {
                    pcVar6 = "Failed to get the IRQ\n";
                }
                else {
                    piVar3[0x2f] = 0;
                    piVar3[0x4e] = 0;
                    *(piVar3 + 0x294) = 2;
                    *(piVar3 + 3) = 2;
                    *piVar3 = iVar1;
                    *(piVar3 + 0x1c) = 0;
                    piVar3[1] = reloc.qcom_rimps_mbox_send_data.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
                    piVar3[2] = piVar3 + 0x11;
                    piVar3[5] = sym.qcom_rimps_mbox_xlate.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
                    iVar2 = mbox_controller_register(piVar3);
                    if (iVar2 == 0) {
                        iVar2 = devm_request_threaded_irq
                                          (iVar1,piVar3[0x52],
                                           sym.qcom_rimps_rx_interrupt.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt,0,
                                           0x4004,"qcom_rimps",piVar3);
                        if (-1 < iVar2) {
                            *(param_1 + 0xa8) = piVar3;
                            return 0;
                        }
                        _dev_err(iVar1,"Failed to register the irq: %d\n",iVar2);
                        mbox_controller_unregister(piVar3);
                        return iVar2;
                    }
                    pcVar6 = "Failed to create mailbox\n";
                }
                _dev_err(iVar1,pcVar6);
                return iVar2;
            }
            pcVar6 = "Failed to ioremap the rimps rx irq addr\n";
        }
        _dev_err(iVar1,pcVar6);
    }
    return -0xc;
}


// ===== sym.qcom_rimps_remove.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.qcom_rimps_remove.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mbox_controller_unregister(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.qcom_rimps_mbox_xlate.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt @ 0x08001198 (size 8) =====

int64_t sym.qcom_rimps_mbox_xlate.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    if ((*(param_2 + 8) == 1) && (uVar1 = *(param_2 + 0xc), uVar1 < *(param_1 + 0x18))) {
        piVar2 = *(param_1 + 0x10) + uVar1 * 0xf8 + 0xf0;
        if (*piVar2 != 0) {
            return -0x10;
        }
        *piVar2 = param_1;
        return *(param_1 + 0x10) + uVar1 * 0xf8;
    }
    return -0x16;
}


// ===== sym.qcom_rimps_probe @ 0x080011a0 (size 460) =====

int sym.qcom_rimps_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    piVar3 = devm_kmalloc(iVar1,0x298,0xdc0);
    if (piVar3 != NULL) {
        piVar3[0x51] = iVar1;
        piVar4 = platform_get_resource(arg1,0x200,0);
        if (piVar4 == NULL) {
code_r0x080012cc:
            _dev_err(iVar1,"Failed to get the device base address\n");
            return -0x13;
        }
        iVar5 = devm_ioremap(iVar1,*piVar4,(piVar4[1] - *piVar4) + 1);
        piVar3[0x4f] = iVar5;
        if (iVar5 == 0) {
            pcVar6 = "Failed to ioremap the rimps tx irq addr\n";
        }
        else {
            piVar4 = platform_get_resource(arg1,0x200,1);
            if (piVar4 == NULL) goto code_r0x080012cc;
            iVar5 = devm_ioremap(iVar1,*piVar4,(piVar4[1] - *piVar4) + 1);
            piVar3[0x50] = iVar5;
            if (iVar5 != 0) {
                iVar2 = platform_get_irq(arg1,0);
                *(piVar3 + 0x52) = iVar2;
                if (iVar2 < 0) {
                    pcVar6 = "Failed to get the IRQ\n";
                }
                else {
                    piVar3[0x2f] = 0;
                    piVar3[0x4e] = 0;
                    *(piVar3 + 0x294) = 2;
                    *(piVar3 + 3) = 2;
                    *piVar3 = iVar1;
                    *(piVar3 + 0x1c) = 0;
                    piVar3[1] = reloc.qcom_rimps_mbox_send_data.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
                    piVar3[2] = piVar3 + 0x11;
                    piVar3[5] = sym.qcom_rimps_mbox_xlate.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt;
                    iVar2 = mbox_controller_register(piVar3);
                    if (iVar2 == 0) {
                        iVar2 = devm_request_threaded_irq
                                          (iVar1,piVar3[0x52],
                                           sym.qcom_rimps_rx_interrupt.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt,0,
                                           0x4004,"qcom_rimps",piVar3);
                        if (-1 < iVar2) {
                            *(arg1 + 0xa8) = piVar3;
                            return 0;
                        }
                        _dev_err(iVar1,"Failed to register the irq: %d\n",iVar2);
                        mbox_controller_unregister(piVar3);
                        return iVar2;
                    }
                    pcVar6 = "Failed to create mailbox\n";
                }
                _dev_err(iVar1,pcVar6);
                return iVar2;
            }
            pcVar6 = "Failed to ioremap the rimps rx irq addr\n";
        }
        _dev_err(iVar1,pcVar6);
    }
    return -0xc;
}


// ===== sym.qcom_rimps_remove @ 0x0800136c (size 44) =====

ulong sym.qcom_rimps_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mbox_controller_unregister(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.qcom_rimps_rx_interrupt @ 0x08001398 (size 348) =====

ulong sym.qcom_rimps_rx_interrupt(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + 0x294)) {
        uVar2 = sym.readl(*(arg1 + 0x280) + 0x30c);
        if ((uVar2 >> 3 & 1) != 0) {
            sym.writel(8,*(arg1 + 0x280) + 0x308);
            DataSynchronizationBarrier(3,3,0);
            uVar3 = _raw_spin_lock_irqsave(arg1 + 0x170);
            if (*(arg1 + 0x178) != 0) {
                mbox_chan_received_data(arg1 + 0x88,0);
            }
            _raw_spin_unlock_irqrestore(arg1 + 0x170,uVar3);
        }
        if (1 < *(arg1 + 0x294)) {
            uVar2 = sym.readl(*(arg1 + 0x280) + 0x130c);
            if ((uVar2 >> 3 & 1) != 0) {
                sym.writel(8,*(arg1 + 0x280) + 0x1308);
                DataSynchronizationBarrier(3,3,0);
                uVar3 = _raw_spin_lock_irqsave(arg1 + 0x268);
                if (*(arg1 + 0x270) != 0) {
                    mbox_chan_received_data(arg1 + 0x180,0);
                }
                _raw_spin_unlock_irqrestore(arg1 + 0x268,uVar3);
            }
            if (2 < *(arg1 + 0x294)) {
                iVar4 = 0x2000;
                iVar5 = 2;
                do {
                    uVar2 = sym.readl(*(arg1 + 0x280) + iVar4 + 0x30c);
                    if ((uVar2 >> 3 & 1) != 0) {
                        sym.writel(8,*(arg1 + 0x280) + iVar4 + 0x308);
                        DataSynchronizationBarrier(3,3,0);
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x80014f4);
                        (*pcVar1)();
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 0x1000;
                } while (iVar5 < *(arg1 + 0x294));
            }
        }
    }
    return 1;
}


// ===== sym.qcom_rimps_mbox_xlate @ 0x080014f4 (size 100) =====

int64_t sym.qcom_rimps_mbox_xlate(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    if ((*(arg2 + 8) == 1) && (uVar1 = *(arg2 + 0xc), uVar1 < *(arg1 + 0x18))) {
        piVar2 = *(arg1 + 0x10) + uVar1 * 0xf8 + 0xf0;
        if (*piVar2 != 0) {
            return -0x10;
        }
        *piVar2 = arg1;
        return *(arg1 + 0x10) + uVar1 * 0xf8;
    }
    return -0x16;
}


// ===== sym.qcom_rimps_mbox_send_data @ 0x08001558 (size 56) =====

ulong sym.qcom_rimps_mbox_send_data(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel(0x10000000,*(*arg1 + 0x278) + 0xc);
    return 0;
}


// ===== sym.qcom_rimps_mbox_shutdown @ 0x08001590 (size 72) =====

void sym.qcom_rimps_mbox_shutdown(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xe8);
    *(arg1 + 0xf0) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0xe8,uVar1);
    return;
}


// ===== sym.writel @ 0x080015d8 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80015f4);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001620);
    return;
}


// ===== sym.readl @ 0x08001654 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001658);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x800169c);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080016d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001718

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x800172c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001734 (size 100) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt,obj.__this_module);
    if (iVar1 != 0) {
        _printk(0x800035a,"qcom_rimps_init",iVar1);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001798 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_rimps_probe.41b431eeb01f1ca532bf62fc582d42fd.cfi_jt);
    return;
}

