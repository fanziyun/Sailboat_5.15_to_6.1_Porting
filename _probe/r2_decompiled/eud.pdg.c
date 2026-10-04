// decompiled from eud by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 800) =====

//WARNING: Switch with 1 destination removed at 0x080024c4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x199c66976d43c92e) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x51ee7ee63044c795) {
                if (arg1 == -0x57be845bca9148ef) {
                    pcVar2 = sym.msm_eud_resume.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
code_r0x080012e0:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08002484;
                }
                if (arg1 != -0x550b9e52359ac614) goto code_r0x08002484;
                pcVar2 = sym.eud_event_notifier.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
            }
            else {
                if (arg1 != -0x51ee7ee63044c795) {
                    if ((arg1 == -0x51322a85036b7b32) && ((pcVar1 + -0x80013c0 >> 3 | pcVar1 << 0x3d) < 5)) {
                        return;
                    }
                    goto code_r0x08002484;
                }
                pcVar2 = sym.eud_verify_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
            }
        }
        else if (arg1 < -0x240b32463195575a) {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08002484;
                pcVar2 = sym.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
                goto code_r0x080012e0;
            }
            pcVar2 = sym.handle_eud_irq.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        }
        else if (arg1 == -0x240b32463195575a) {
            pcVar2 = sym.eud_set_mctrl.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002484;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x4a220a35dbe7fc62) {
        if (arg1 < 0x1d30918f7dba8dbe) {
            if (arg1 == 0x199c66976d43c92e) {
                pcVar2 = sym.param_eud_set.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
            }
            else {
                if (arg1 != 0x1c03dfb3fb040011) goto code_r0x08002484;
                pcVar2 = sym.eud_config_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x1d30918f7dba8dbe) {
                pcVar2 = sym.eud_startup.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
                goto code_r0x080012e0;
            }
            if (arg1 != 0x22dafa125a47585b) goto code_r0x08002484;
            pcVar2 = sym.eud_set_termios.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        }
    }
    else if (arg1 < 0x751c7cba60b25fe1) {
        if (arg1 != 0x4a220a35dbe7fc62) {
            if (arg1 != 0x5f126d679599c911) goto code_r0x08002484;
            pcVar2 = sym.eud_tx_empty.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
            goto code_r0x080012e0;
        }
        pcVar2 = sym.param_get_int.cfi_jt;
    }
    else if (arg1 == 0x751c7cba60b25fe1) {
        pcVar2 = sym.eud_type.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002484;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002484:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024d8);
    (*pcVar1)();
}


// ===== sym.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001328 (size 8) =====

uint64_t sym.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar10 = param_1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar4 = devm_kmalloc(iVar10,0x270,0xdc0);
    if (piVar4 == NULL) {
code_r0x08001b10:
        uVar5 = 0xfffffff4;
        goto code_r0x08001b14;
    }
    *(param_1 + 0xa8) = piVar4;
    *piVar4 = iVar10;
    uVar5 = devm_extcon_dev_allocate(iVar10,obj.eud_extcon_cable);
    piVar4[4] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(*piVar4,"%s: failed to allocate extcon device\n","msm_eud_probe");
        uVar5 = *(piVar4 + 4);
        goto code_r0x08001b14;
    }
    uVar1 = devm_extcon_dev_register(iVar10,uVar5);
    if (uVar1 != 0) {
        uVar5 = uVar1;
        _dev_err(*piVar4,"%s: failed to register extcon device\n","msm_eud_probe");
        goto code_r0x08001b14;
    }
    iVar6 = platform_get_resource_byname(param_1,0x200,"eud_base");
    if (iVar6 == 0) {
        iVar10 = *piVar4;
        pcVar11 = "%s: failed to get resource eud_base\n";
code_r0x08001b04:
        _dev_err(iVar10,pcVar11,"msm_eud_probe");
        goto code_r0x08001b10;
    }
    uVar5 = devm_ioremap_resource(iVar10,iVar6);
    piVar4[3] = uVar5;
    if (0xfffffffffffff000 < uVar5) goto code_r0x08001b14;
    uVar2 = platform_get_irq_byname(param_1,"eud_irq");
    uVar12 = *(param_1 + 0x300);
    *(piVar4 + 1) = uVar2;
    iVar6 = of_find_property(uVar12,"qcom,secure-eud-en",0);
    *(piVar4 + 0x49) = iVar6 != 0;
    if (iVar6 != 0) {
        piVar7 = platform_get_resource_byname(param_1,0x200,"eud_mode_mgr2");
        if (piVar7 == NULL) {
            iVar10 = *piVar4;
            pcVar11 = "%s: failed to get resource eud_mode_mgr2\n";
            goto code_r0x08001b04;
        }
        piVar4[0x4a] = *piVar7;
    }
    iVar6 = of_find_property(*(param_1 + 0x300),"qcom,eud-clock-vote-req",0);
    *(piVar4 + 0x249) = iVar6 != 0;
    if (iVar6 != 0) {
        uVar8 = devm_clk_get(iVar10,"eud_ahb2phy_clk");
        piVar4[0x4b] = uVar8;
        if (0xfffffffffffff000 < uVar8) {
            uVar5 = uVar8 & 0xffffffff;
            goto code_r0x08001b14;
        }
        uVar9 = clk_prepare(uVar8);
        uVar5 = uVar9 & 0xffffffff;
        if (uVar9 != 0) goto code_r0x08001b14;
        uVar1 = clk_enable(uVar8);
        if (uVar1 != 0) {
            uVar5 = uVar1;
            clk_unprepare(uVar8);
            goto code_r0x08001b14;
        }
    }
    uVar8 = devm_clk_get(iVar10,"eud_clkref_clk");
    uVar5 = 0;
    if (uVar8 < 0xfffffffffffff001) {
        uVar5 = uVar8;
    }
    piVar4[0x4c] = uVar5;
    uVar1 = devm_request_threaded_irq
                      (iVar10,piVar4[1],sym.handle_eud_irq.0d70ea8df2a25403c682c91fcab27128.cfi_jt,0,4,"eud_irq",
                       piVar4);
    if (uVar1 == 0) {
        device_init_wakeup(iVar10,1);
        irq_set_irq_wake(piVar4[1],1);
        piVar4[0x42] = 0xfffffffe0;
        piVar4[0x43] = piVar4 + 0x43;
        piVar4[0x44] = piVar4 + 0x43;
        *(piVar4 + 0x144) = 300;
        piVar4[0x45] = sym.eud_event_notifier.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        *(piVar4 + 0xdc) = 0xe;
        *(piVar4 + 0xe2) = 2;
        piVar4[0x2e] = *piVar4;
        uVar12 = *(param_1 + 0x300);
        *(piVar4 + 0x26) = 0x10000000;
        *(piVar4 + 0x19) = piVar4[1];
        piVar4[7] = piVar4[3];
        *(param_1 + 8) = 0;
        *(piVar4 + 0x154) = 0;
        piVar4[0x29] = reloc.eud_tx_empty.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        iVar6 = of_find_property(uVar12,"qcom,eud-tcsr-check-enable",0);
        if (iVar6 != 0) {
            puVar13 = platform_get_resource_byname(param_1,0x200,"eud_tcsr_check_reg");
            if (puVar13 == NULL) {
                uVar5 = 0;
                pcVar11 = "Failed to get resource for tcsr check!\n";
                goto code_r0x08001b78;
            }
            iVar3 = qcom_scm_io_writel(*puVar13,1);
            if (iVar3 != 0) {
                _dev_err(iVar10,"TCSR qcom_scm_io_writel failed with rc:%d\n",iVar3);
            }
        }
        if (piVar4[0x49] != '\0') {
            uStack_4c = 0;
            qcom_scm_io_readl(piVar4[0x4a],&uStack_4c);
            if ((uStack_4c & 1) != 0) {
                _segment.ehdr = CONCAT44(*0x8000004,1);
            }
        }
        uVar1 = uart_add_one_port(obj.eud_uart_driver,piVar4 + 5);
        if (uVar1 == 0) {
            iVar6 = *(param_1 + 0xa8);
            uStack_4c = 0;
            obj.eud_ready = 0x1;
            _segment.ehdr = param_1;
            if (*(iVar6 + 0x248) == '\0') {
                uVar5 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x1014);
                if ((uVar5 & 1) == 0) {
code_r0x08001ae0:
                    uVar5 = 0;
                    goto code_r0x08001b14;
                }
            }
            else {
                iVar3 = qcom_scm_io_readl(*(iVar6 + 0x250),&uStack_4c);
                if (iVar3 != 0) {
                    _dev_err(iVar10,"qcom_scm_io_readl failed with rc: %d\n",iVar3);
                    uVar5 = 0;
                    goto code_r0x08001b14;
                }
                if (uStack_4c == 0) goto code_r0x08001ae0;
            }
            if (piVar4[0x4d] != '\x01') {
                iVar6 = piVar4[0x4c];
                iVar3 = clk_prepare(iVar6);
                if (iVar3 == 0) {
                    iVar3 = clk_enable(iVar6);
                    if (iVar3 == 0) {
                        *(piVar4 + 0x4d) = 1;
                        goto code_r0x08001a3c;
                    }
                    clk_unprepare(iVar6);
                }
                _dev_err(*piVar4,"Failed to enable eud_clkref_clk\n");
            }
code_r0x08001a3c:
            sym.writel_relaxed(0x1c,piVar4[3] + 0x24);
            iVar3 = extcon_set_state_sync(piVar4[4],1,1);
            if (iVar3 != 0) {
                _dev_warn(iVar10,"Failed to set EXTCON_USB (%d)\n",iVar3);
            }
            iVar3 = extcon_set_state_sync(piVar4[4],5,1);
            if (iVar3 != 0) {
                _dev_warn(iVar10,"Failed to set EXTCON_CHG_USB_SDP (%d)\n",iVar3);
            }
            uVar5 = 0;
            _segment.ehdr = CONCAT44(*0x8000004,1);
            goto code_r0x08001b14;
        }
        uVar5 = uVar1;
        pcVar11 = "failed to add uart port!\n";
    }
    else {
        uVar5 = uVar1;
        pcVar11 = "request failed for eud irq\n";
    }
code_r0x08001b78:
    _dev_err(*piVar4,pcVar11);
    if ((*(piVar4 + 0x249) != '\0') && (iVar10 = piVar4[0x4b], iVar10 != 0)) {
        clk_disable(iVar10);
        clk_unprepare(iVar10);
    }
code_r0x08001b14:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_48) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.msm_eud_remove;
        puVar13 = *(iVar10 + 0xa8);
        if (puVar13[0x48] != 0) {
            power_supply_put();
        }
        uart_remove_one_port(obj.eud_uart_driver,puVar13 + 5);
        device_init_wakeup(*puVar13,0);
        if (*(puVar13 + 0x249) != '\0') {
            uVar12 = puVar13[0x4b];
            clk_disable(uVar12);
            clk_unprepare(uVar12);
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.msm_eud_remove.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001330 (size 8) =====

ulong sym.msm_eud_remove.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(param_1 + 0xa8);
    if (puVar2[0x48] != 0) {
        power_supply_put();
    }
    uart_remove_one_port(obj.eud_uart_driver,puVar2 + 5);
    device_init_wakeup(*puVar2,0);
    if (*(puVar2 + 0x249) != '\0') {
        uVar1 = puVar2[0x4b];
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.eud_set_mctrl.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001338 (size 8) =====

void sym.eud_set_mctrl.0d70ea8df2a25403c682c91fcab27128.cfi_jt(void)

{
    return;
}


// ===== sym.eud_set_termios.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001340 (size 8) =====

void sym.eud_set_termios.0d70ea8df2a25403c682c91fcab27128.cfi_jt(void)

{
    return;
}


// ===== sym.eud_type.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001348 (size 8) =====

char * sym.eud_type.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    
    pcVar1 = "EUD UART";
    if (*(param_1 + 0x11c) != 300) {
        pcVar1 = NULL;
    }
    return pcVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001350 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt);
    uart_unregister_driver(obj.eud_uart_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001358 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = uart_register_driver(obj.eud_uart_driver);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            _printk(0x800037d,"msm_eud_init");
            uart_unregister_driver(obj.eud_uart_driver);
        }
    }
    else {
        _printk(0x80005aa,"msm_eud_init");
    }
    return iVar1;
}


// ===== sym.handle_eud_irq.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001360 (size 8) =====

//WARNING: Type propagation algorithm not settling

bool sym.handle_eud_irq.0d70ea8df2a25403c682c91fcab27128.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.readl_relaxed(*(param_2 + 0x18) + 0x24);
    uVar5 = sym.readb_relaxed(*(param_2 + 0x18) + 0x44);
    uVar7 = uVar5;
    if ((uVar5 & 1) != 0) {
        iVar6 = sym.readl_relaxed(*(param_2 + 0x18) + 0xc);
        if (iVar6 == 0x90) {
            iVar9 = param_2 + 0x28;
            _raw_spin_lock(iVar9);
            for (iVar6 = sym.readl_relaxed(*(param_2 + 0x18) + 0x10); iVar6 != 0; iVar6 = iVar6 + -1) {
                cVar3 = sym.readl_relaxed(*(param_2 + 0x18) + 0x14);
                *(param_2 + 0x108) = *(param_2 + 0x108) + 1;
                if (*(param_2 + 0x178) == 0) {
code_r0x08001d3c:
                    uart_insert_char(iVar9,0,0,cVar3,0);
                }
                else {
                    if ((cVar3 == '\0') || (-1 < _param_get_int - *(param_2 + 0x178))) {
code_r0x08001d38:
                        *(param_2 + 0x178) = 0;
                        goto code_r0x08001d3c;
                    }
                    iVar10 = sysrq_mask();
                    if (iVar10 == 0) {
                        uVar8 = uart_try_toggle_sysrq(iVar9,cVar3);
                        if ((uVar8 & 1) == 0) goto code_r0x08001d38;
                    }
                    else {
                        handle_sysrq(cVar3);
                        *(param_2 + 0x178) = 0;
                    }
                }
            }
            _raw_spin_unlock(iVar9);
            tty_flip_buffer_push(*(param_2 + 0xf0));
        }
        uVar7 = uVar5 & 0xfffffffe;
    }
    uVar1 = uVar7;
    if ((uVar5 >> 1 & 1) != 0) {
        if ((uVar4 >> 1 & 1) != 0) {
            iVar9 = *(param_2 + 0xf0);
            sym.writel_relaxed(0x90,*(param_2 + 0x18));
            iVar6 = sym.readl_relaxed(*(param_2 + 0x18));
            if (iVar6 == 0x90) {
                _raw_spin_lock(param_2 + 0x28);
                iVar6 = *(iVar9 + 0x1bc);
                uVar4 = *(iVar9 + 0x1b8) - iVar6 & 0xfff;
                if (uVar4 != 0) {
                    uVar5 = *(param_2 + 0xdc);
                    if (uVar4 <= *(param_2 + 0xdc)) {
                        uVar5 = uVar4;
                    }
                    if (uVar5 != 0) {
                        iVar10 = -uVar5;
                        while( true ) {
                            iVar10 = iVar10 + 1;
                            sym.writel_relaxed(*(*(iVar9 + 0x1b0) + iVar6),*(param_2 + 0x38) + 8);
                            *(iVar9 + 0x1bc) = *(iVar9 + 0x1bc) + 1U & 0xfff;
                            *(param_2 + 0x10c) = *(param_2 + 0x10c) + 1;
                            if (iVar10 == 0) break;
                            iVar6 = *(iVar9 + 0x1bc);
                        }
                    }
                }
                _raw_spin_unlock(param_2 + 0x28);
            }
        }
        uVar1 = uVar7 & 0xfffffffd;
    }
    uVar4 = uVar1;
    if ((uVar7 >> 2 & 1) != 0) {
        *(param_2 + 0xc) = 0x400000001;
        uVar7 = sym.readl_relaxed(*(param_2 + 0x18) + 0x74);
        uVar2 = _extcon_set_state_sync;
        *(param_2 + 0x14) = uVar7 >> 4 & 1;
        queue_work_on(0x20,uVar2,param_2 + 0x210);
        sym.writel_relaxed(1,*(param_2 + 0x18) + 0x80);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(param_2 + 0x18) + 0x80);
        uVar4 = uVar1 & 0xfffffffb;
    }
    uVar7 = uVar4;
    if ((uVar1 >> 3 & 1) != 0) {
        *(param_2 + 0xc) = 0x800000005;
        uVar7 = sym.readl_relaxed(*(param_2 + 0x18) + 0x74);
        uVar2 = _extcon_set_state_sync;
        *(param_2 + 0x15) = uVar7 >> 6 & 1;
        queue_work_on(0x20,uVar2,param_2 + 0x210);
        sym.writel_relaxed(1,*(param_2 + 0x18) + 0x84);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(param_2 + 0x18) + 0x84);
        uVar7 = uVar4 & 0xfffffff7;
    }
    if ((uVar4 >> 4 & 1) != 0) {
        uVar8 = sym.readl_relaxed(*(param_2 + 0x18) + 0x1018);
        iVar9 = *(param_2 + 0x18) + 0x1018;
        if ((uVar8 & 1) == 0) {
            sym.writel_relaxed(1,iVar9);
            DataSynchronizationBarrier(3,2,0);
        }
        else {
            sym.writel_relaxed(0,iVar9);
            DataSynchronizationBarrier(3,2,0);
            __const_udelay(0x68dbc);
            sym.writel_relaxed(1,*(param_2 + 0x18) + 0x1018);
            DataSynchronizationBarrier(3,2,0);
        }
        uVar7 = uVar7 & 0xffffffef;
    }
    return (uVar7 & 0xff) == 0;
}


// ===== sym.eud_tx_empty.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001368 (size 8) =====

uint32_t sym.eud_tx_empty.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(param_1 + 0x10) + 0x44);
    return uVar1 >> 1 & 1;
}


// ===== sym.eud_get_mctrl.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001370 (size 8) =====

ulong sym.eud_get_mctrl.0d70ea8df2a25403c682c91fcab27128.cfi_jt(void)

{
    return 0;
}


// ===== sym.param_get_int.cfi_jt @ 0x08001378 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.param_get_int.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.param_eud_set.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001380 (size 8) =====

void sym.param_eud_set.0d70ea8df2a25403c682c91fcab27128.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    iVar2 = sscanf(param_1,0x8000379,&uStack_40);
    if ((iVar2 != 1) || (1 < uStack_40)) {
        uVar5 = 0xffffffea;
        goto code_r0x080015fc;
    }
    if (obj.eud_ready == 0x1) {
        if (uStack_40 == 0) {
            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar7 = *(iVar1 + 0xa8);
            extcon_set_state(*(iVar7 + 0x20),0x3d,0);
            extcon_set_state_sync(*(iVar7 + 0x20),1,0);
            sym.writel_relaxed(0,*(iVar7 + 0x18) + 0x1014);
            if ((*(iVar7 + 0x248) == '\0') || (iVar2 = qcom_scm_io_writel(*(iVar7 + 0x250),0), iVar2 == 0)) {
                _segment.ehdr = 0;
                if (*(iVar7 + 0x268) != '\0') {
                    uVar5 = *(iVar7 + 0x260);
                    clk_disable(uVar5);
                    clk_unprepare(uVar5);
                    *(iVar7 + 0x268) = 0;
                }
                usleep_range_state(0x32,100,2);
                uVar5 = *(iVar7 + 0x20);
                uVar3 = 1;
                goto code_r0x080015f0;
            }
            _dev_err(iVar1 + 0x10,"qcom_scm_io_write failed with rc:%d\n",iVar2);
        }
        else if (uStack_40 == 1) {
            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar6 = *(iVar1 + 0xa8);
            extcon_set_state_sync(puVar6[4],1,1);
            extcon_set_state(puVar6[4],0x3d,0);
            extcon_set_state_sync(puVar6[4],1,0);
            if (*(puVar6 + 0x4d) != '\x01') {
                uVar5 = puVar6[0x4c];
                iVar2 = clk_prepare(uVar5);
                if (iVar2 == 0) {
                    iVar2 = clk_enable(uVar5);
                    if (iVar2 == 0) {
                        *(puVar6 + 0x4d) = 1;
                        goto code_r0x080014c0;
                    }
                    clk_unprepare(uVar5);
                }
                _dev_err(*puVar6,"Failed to enable eud_clkref_clk\n");
            }
code_r0x080014c0:
            sym.writel_relaxed(1,puVar6[3] + 0x1014);
            sym.writel_relaxed(0x1c,puVar6[3] + 0x24);
            if (*(puVar6 + 0x49) != '\0') {
                uStack_3c = 0;
                qcom_scm_io_readl(puVar6[0x4a],&uStack_3c);
                if (((uStack_3c & 1) == 0) && (iVar2 = qcom_scm_io_writel(puVar6[0x4a],1), iVar2 != 0)) {
                    _dev_err(iVar1 + 0x10,"qcom_scm_io_writel failed with rc:%d\n",iVar2);
                    goto code_r0x080015f8;
                }
            }
            DataSynchronizationBarrier(3,2,0);
            _segment.ehdr = 1;
            usleep_range_state(0x32,100,2);
            extcon_set_state_sync(puVar6[4],1,1);
            uVar5 = puVar6[4];
            uVar3 = 5;
code_r0x080015f0:
            extcon_set_state_sync(uVar5,uVar3,1);
        }
    }
code_r0x080015f8:
    uVar5 = 0;
code_r0x080015fc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail(uVar5);
    puVar4 = auVar9._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar8 = auVar9._0_8_ & 0xffffffff;
    log_write_mmio(uVar8,0x20,puVar4,0x8001698);
    *puVar4 = auVar9._0_4_;
    log_post_write_mmio(uVar8,0x20,puVar4,0x80016c0);
    return;
}


// ===== sym.eud_config_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001388 (size 8) =====

void sym.eud_config_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x11c) = 300;
    sym.writel_relaxed(0xffffffff,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.msm_eud_resume.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001390 (size 8) =====

int sym.msm_eud_resume.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x98);
    if ((*(puVar3 + 0x249) == '\0') || (iVar2 = puVar3[0x4b], iVar2 == 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(iVar2);
        }
        _dev_err(*puVar3,"%s failed to vote ahb2phy clk %d\n","msm_eud_resume",iVar1);
    }
    return iVar1;
}


// ===== sym.msm_eud_suspend.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x08001398 (size 8) =====

ulong sym.msm_eud_suspend.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(param_1 + 0x98) + 0x249) != '\0') && (iVar1 = *(*(param_1 + 0x98) + 600), iVar1 != 0)) {
        clk_disable(iVar1);
        clk_unprepare(iVar1);
    }
    return 0;
}


// ===== sym.eud_event_notifier.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013a0 (size 8) =====

uint64_t sym.eud_event_notifier.0d70ea8df2a25403c682c91fcab27128.cfi_jt(uint64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (*(param_1 - 0x200) == 8) {
        iVar3 = *(param_1 + 0x30);
        if (iVar3 == 0) {
            iVar3 = power_supply_get_by_name(0x8000695);
            *(param_1 + 0x30) = iVar3;
            uVar2 = 0;
            if (iVar3 == 0) goto code_r0x08002078;
        }
        uVar5 = 0;
        if (*(param_1 - 0x1fb) != '\0') {
            uVar5 = 0xffffffea;
        }
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar5);
        uVar2 = power_supply_set_property(iVar3,0x25,&uStack_30);
        if (uVar2 < 0) {
            uVar2 = _dev_err(*(param_1 - 0x210),"Failed to set the powersupply property: %d\n",uVar2 & 0xffffffff);
        }
    }
    else {
        uVar2 = param_1;
        if (*(param_1 - 0x200) == 4) {
            extcon_set_state(*(param_1 - 0x1f0),0x3d,1);
            uVar2 = extcon_set_state_sync(*(param_1 - 0x1f0),*(param_1 - 0x204),*(param_1 - 0x1fc));
        }
    }
code_r0x08002078:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar4,0x80020c4);
    uVar1 = *puVar4;
    log_post_read_mmio(uVar1,0x20,puVar4,0x80020f8);
    return uVar1;
}


// ===== sym.eud_startup.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013a8 (size 8) =====

ulong sym.eud_startup.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return 0;
}


// ===== sym.eud_request_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013b0 (size 8) =====

ulong sym.eud_request_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt(void)

{
    return 0;
}


// ===== sym.eud_verify_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013b8 (size 8) =====

uint sym.eud_verify_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt(ulong param_1,int *param_2)

{
    uint uVar1;
    
    uVar1 = 0;
    if (*param_2 != 300 && *param_2 != 0) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.eud_start_tx.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013c0 (size 8) =====

void sym.eud_start_tx.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(2,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_shutdown.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013c8 (size 8) =====

void sym.eud_shutdown.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xffffffff,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_stop_rx.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013d0 (size 8) =====

void sym.eud_stop_rx.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xfffffffe,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_release_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013d8 (size 8) =====

void sym.eud_release_port.0d70ea8df2a25403c682c91fcab27128.cfi_jt(void)

{
    return;
}


// ===== sym.eud_stop_tx.0d70ea8df2a25403c682c91fcab27128.cfi_jt @ 0x080013e0 (size 8) =====

void sym.eud_stop_tx.0d70ea8df2a25403c682c91fcab27128.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xfffffffd,*(param_1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.param_eud_set @ 0x080013e8 (size 660) =====

void sym.param_eud_set(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong *puVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_40 = 0;
    iVar2 = sscanf(arg1,0x8000379,&uStack_40);
    if ((iVar2 != 1) || (1 < uStack_40)) {
        uVar5 = 0xffffffea;
        goto code_r0x080015fc;
    }
    if (obj.eud_ready == 0x1) {
        if (uStack_40 == 0) {
            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            iVar7 = *(iVar1 + 0xa8);
            extcon_set_state(*(iVar7 + 0x20),0x3d,0);
            extcon_set_state_sync(*(iVar7 + 0x20),1,0);
            sym.writel_relaxed(0,*(iVar7 + 0x18) + 0x1014);
            if ((*(iVar7 + 0x248) == '\0') || (iVar2 = qcom_scm_io_writel(*(iVar7 + 0x250),0), iVar2 == 0)) {
                _segment.ehdr = 0;
                if (*(iVar7 + 0x268) != '\0') {
                    uVar5 = *(iVar7 + 0x260);
                    clk_disable(uVar5);
                    clk_unprepare(uVar5);
                    *(iVar7 + 0x268) = 0;
                }
                usleep_range_state(0x32,100,2);
                uVar5 = *(iVar7 + 0x20);
                uVar3 = 1;
                goto code_r0x080015f0;
            }
            _dev_err(iVar1 + 0x10,"qcom_scm_io_write failed with rc:%d\n",iVar2);
        }
        else if (uStack_40 == 1) {
            iVar1 = CONCAT44(*0x8000004,_segment.ehdr);
            puVar6 = *(iVar1 + 0xa8);
            extcon_set_state_sync(puVar6[4],1,1);
            extcon_set_state(puVar6[4],0x3d,0);
            extcon_set_state_sync(puVar6[4],1,0);
            if (*(puVar6 + 0x4d) != '\x01') {
                uVar5 = puVar6[0x4c];
                iVar2 = clk_prepare(uVar5);
                if (iVar2 == 0) {
                    iVar2 = clk_enable(uVar5);
                    if (iVar2 == 0) {
                        *(puVar6 + 0x4d) = 1;
                        goto code_r0x080014c0;
                    }
                    clk_unprepare(uVar5);
                }
                _dev_err(*puVar6,"Failed to enable eud_clkref_clk\n");
            }
code_r0x080014c0:
            sym.writel_relaxed(1,puVar6[3] + 0x1014);
            sym.writel_relaxed(0x1c,puVar6[3] + 0x24);
            if (*(puVar6 + 0x49) != '\0') {
                uStack_3c = 0;
                qcom_scm_io_readl(puVar6[0x4a],&uStack_3c);
                if (((uStack_3c & 1) == 0) && (iVar2 = qcom_scm_io_writel(puVar6[0x4a],1), iVar2 != 0)) {
                    _dev_err(iVar1 + 0x10,"qcom_scm_io_writel failed with rc:%d\n",iVar2);
                    goto code_r0x080015f8;
                }
            }
            DataSynchronizationBarrier(3,2,0);
            _segment.ehdr = 1;
            usleep_range_state(0x32,100,2);
            extcon_set_state_sync(puVar6[4],1,1);
            uVar5 = puVar6[4];
            uVar3 = 5;
code_r0x080015f0:
            extcon_set_state_sync(uVar5,uVar3,1);
        }
    }
code_r0x080015f8:
    uVar5 = 0;
code_r0x080015fc:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar9 = __stack_chk_fail(uVar5);
    puVar4 = auVar9._8_8_;
    *extraout_x18 = sym.writel_relaxed;
    uVar8 = auVar9._0_8_ & 0xffffffff;
    log_write_mmio(uVar8,0x20,puVar4,0x8001698);
    *puVar4 = auVar9._0_4_;
    log_post_write_mmio(uVar8,0x20,puVar4,0x80016c0);
    return;
}


// ===== sym.writel_relaxed @ 0x0800167c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001698);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80016c0);
    return;
}


// ===== sym.msm_eud_probe @ 0x080016f4 (size 1332) =====

uint64_t sym.msm_eud_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    ulong *puVar13;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar10 = arg1 + 0x10;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar4 = devm_kmalloc(iVar10,0x270,0xdc0);
    if (piVar4 == NULL) {
code_r0x08001b10:
        uVar5 = 0xfffffff4;
        goto code_r0x08001b14;
    }
    *(arg1 + 0xa8) = piVar4;
    *piVar4 = iVar10;
    uVar5 = devm_extcon_dev_allocate(iVar10,obj.eud_extcon_cable);
    piVar4[4] = uVar5;
    if (0xfffffffffffff000 < uVar5) {
        _dev_err(*piVar4,"%s: failed to allocate extcon device\n","msm_eud_probe");
        uVar5 = *(piVar4 + 4);
        goto code_r0x08001b14;
    }
    uVar1 = devm_extcon_dev_register(iVar10,uVar5);
    if (uVar1 != 0) {
        uVar5 = uVar1;
        _dev_err(*piVar4,"%s: failed to register extcon device\n","msm_eud_probe");
        goto code_r0x08001b14;
    }
    iVar6 = platform_get_resource_byname(arg1,0x200,"eud_base");
    if (iVar6 == 0) {
        iVar10 = *piVar4;
        pcVar11 = "%s: failed to get resource eud_base\n";
code_r0x08001b04:
        _dev_err(iVar10,pcVar11,"msm_eud_probe");
        goto code_r0x08001b10;
    }
    uVar5 = devm_ioremap_resource(iVar10,iVar6);
    piVar4[3] = uVar5;
    if (0xfffffffffffff000 < uVar5) goto code_r0x08001b14;
    uVar2 = platform_get_irq_byname(arg1,"eud_irq");
    uVar12 = *(arg1 + 0x300);
    *(piVar4 + 1) = uVar2;
    iVar6 = of_find_property(uVar12,"qcom,secure-eud-en",0);
    *(piVar4 + 0x49) = iVar6 != 0;
    if (iVar6 != 0) {
        piVar7 = platform_get_resource_byname(arg1,0x200,"eud_mode_mgr2");
        if (piVar7 == NULL) {
            iVar10 = *piVar4;
            pcVar11 = "%s: failed to get resource eud_mode_mgr2\n";
            goto code_r0x08001b04;
        }
        piVar4[0x4a] = *piVar7;
    }
    iVar6 = of_find_property(*(arg1 + 0x300),"qcom,eud-clock-vote-req",0);
    *(piVar4 + 0x249) = iVar6 != 0;
    if (iVar6 != 0) {
        uVar8 = devm_clk_get(iVar10,"eud_ahb2phy_clk");
        piVar4[0x4b] = uVar8;
        if (0xfffffffffffff000 < uVar8) {
            uVar5 = uVar8 & 0xffffffff;
            goto code_r0x08001b14;
        }
        uVar9 = clk_prepare(uVar8);
        uVar5 = uVar9 & 0xffffffff;
        if (uVar9 != 0) goto code_r0x08001b14;
        uVar1 = clk_enable(uVar8);
        if (uVar1 != 0) {
            uVar5 = uVar1;
            clk_unprepare(uVar8);
            goto code_r0x08001b14;
        }
    }
    uVar8 = devm_clk_get(iVar10,"eud_clkref_clk");
    uVar5 = 0;
    if (uVar8 < 0xfffffffffffff001) {
        uVar5 = uVar8;
    }
    piVar4[0x4c] = uVar5;
    uVar1 = devm_request_threaded_irq
                      (iVar10,piVar4[1],sym.handle_eud_irq.0d70ea8df2a25403c682c91fcab27128.cfi_jt,0,4,"eud_irq",
                       piVar4);
    if (uVar1 == 0) {
        device_init_wakeup(iVar10,1);
        irq_set_irq_wake(piVar4[1],1);
        piVar4[0x42] = 0xfffffffe0;
        piVar4[0x43] = piVar4 + 0x43;
        piVar4[0x44] = piVar4 + 0x43;
        *(piVar4 + 0x144) = 300;
        piVar4[0x45] = sym.eud_event_notifier.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        *(piVar4 + 0xdc) = 0xe;
        *(piVar4 + 0xe2) = 2;
        piVar4[0x2e] = *piVar4;
        uVar12 = *(arg1 + 0x300);
        *(piVar4 + 0x26) = 0x10000000;
        *(piVar4 + 0x19) = piVar4[1];
        piVar4[7] = piVar4[3];
        *(arg1 + 8) = 0;
        *(piVar4 + 0x154) = 0;
        piVar4[0x29] = reloc.eud_tx_empty.0d70ea8df2a25403c682c91fcab27128.cfi_jt;
        iVar6 = of_find_property(uVar12,"qcom,eud-tcsr-check-enable",0);
        if (iVar6 != 0) {
            puVar13 = platform_get_resource_byname(arg1,0x200,"eud_tcsr_check_reg");
            if (puVar13 == NULL) {
                uVar5 = 0;
                pcVar11 = "Failed to get resource for tcsr check!\n";
                goto code_r0x08001b78;
            }
            iVar3 = qcom_scm_io_writel(*puVar13,1);
            if (iVar3 != 0) {
                _dev_err(iVar10,"TCSR qcom_scm_io_writel failed with rc:%d\n",iVar3);
            }
        }
        if (piVar4[0x49] != '\0') {
            uStack_4c = 0;
            qcom_scm_io_readl(piVar4[0x4a],&uStack_4c);
            if ((uStack_4c & 1) != 0) {
                _segment.ehdr = CONCAT44(*0x8000004,1);
            }
        }
        uVar1 = uart_add_one_port(obj.eud_uart_driver,piVar4 + 5);
        if (uVar1 == 0) {
            iVar6 = *(arg1 + 0xa8);
            uStack_4c = 0;
            obj.eud_ready = 0x1;
            _segment.ehdr = arg1;
            if (*(iVar6 + 0x248) == '\0') {
                uVar5 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x1014);
                if ((uVar5 & 1) == 0) {
code_r0x08001ae0:
                    uVar5 = 0;
                    goto code_r0x08001b14;
                }
            }
            else {
                iVar3 = qcom_scm_io_readl(*(iVar6 + 0x250),&uStack_4c);
                if (iVar3 != 0) {
                    _dev_err(iVar10,"qcom_scm_io_readl failed with rc: %d\n",iVar3);
                    uVar5 = 0;
                    goto code_r0x08001b14;
                }
                if (uStack_4c == 0) goto code_r0x08001ae0;
            }
            if (piVar4[0x4d] != '\x01') {
                iVar6 = piVar4[0x4c];
                iVar3 = clk_prepare(iVar6);
                if (iVar3 == 0) {
                    iVar3 = clk_enable(iVar6);
                    if (iVar3 == 0) {
                        *(piVar4 + 0x4d) = 1;
                        goto code_r0x08001a3c;
                    }
                    clk_unprepare(iVar6);
                }
                _dev_err(*piVar4,"Failed to enable eud_clkref_clk\n");
            }
code_r0x08001a3c:
            sym.writel_relaxed(0x1c,piVar4[3] + 0x24);
            iVar3 = extcon_set_state_sync(piVar4[4],1,1);
            if (iVar3 != 0) {
                _dev_warn(iVar10,"Failed to set EXTCON_USB (%d)\n",iVar3);
            }
            iVar3 = extcon_set_state_sync(piVar4[4],5,1);
            if (iVar3 != 0) {
                _dev_warn(iVar10,"Failed to set EXTCON_CHG_USB_SDP (%d)\n",iVar3);
            }
            uVar5 = 0;
            _segment.ehdr = CONCAT44(*0x8000004,1);
            goto code_r0x08001b14;
        }
        uVar5 = uVar1;
        pcVar11 = "failed to add uart port!\n";
    }
    else {
        uVar5 = uVar1;
        pcVar11 = "request failed for eud irq\n";
    }
code_r0x08001b78:
    _dev_err(*piVar4,pcVar11);
    if ((*(piVar4 + 0x249) != '\0') && (iVar10 = piVar4[0x4b], iVar10 != 0)) {
        clk_disable(iVar10);
        clk_unprepare(iVar10);
    }
code_r0x08001b14:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_48) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.msm_eud_remove;
        puVar13 = *(iVar10 + 0xa8);
        if (puVar13[0x48] != 0) {
            power_supply_put();
        }
        uart_remove_one_port(obj.eud_uart_driver,puVar13 + 5);
        device_init_wakeup(*puVar13,0);
        if (*(puVar13 + 0x249) != '\0') {
            uVar12 = puVar13[0x4b];
            clk_disable(uVar12);
            clk_unprepare(uVar12);
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
}


// ===== sym.msm_eud_remove @ 0x08001c28 (size 120) =====

ulong sym.msm_eud_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(arg1 + 0xa8);
    if (puVar2[0x48] != 0) {
        power_supply_put();
    }
    uart_remove_one_port(obj.eud_uart_driver,puVar2 + 5);
    device_init_wakeup(*puVar2,0);
    if (*(puVar2 + 0x249) != '\0') {
        uVar1 = puVar2[0x4b];
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.handle_eud_irq @ 0x08001ca0 (size 808) =====

//WARNING: Type propagation algorithm not settling

bool sym.handle_eud_irq(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    int iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + 0x24);
    uVar5 = sym.readb_relaxed(*(arg1 + 0x18) + 0x44);
    uVar7 = uVar5;
    if ((uVar5 & 1) != 0) {
        iVar6 = sym.readl_relaxed(*(arg1 + 0x18) + 0xc);
        if (iVar6 == 0x90) {
            iVar9 = arg1 + 0x28;
            _raw_spin_lock(iVar9);
            for (iVar6 = sym.readl_relaxed(*(arg1 + 0x18) + 0x10); iVar6 != 0; iVar6 = iVar6 + -1) {
                cVar3 = sym.readl_relaxed(*(arg1 + 0x18) + 0x14);
                *(arg1 + 0x108) = *(arg1 + 0x108) + 1;
                if (*(arg1 + 0x178) == 0) {
code_r0x08001d3c:
                    uart_insert_char(iVar9,0,0,cVar3,0);
                }
                else {
                    if ((cVar3 == '\0') || (-1 < _param_get_int - *(arg1 + 0x178))) {
code_r0x08001d38:
                        *(arg1 + 0x178) = 0;
                        goto code_r0x08001d3c;
                    }
                    iVar10 = sysrq_mask();
                    if (iVar10 == 0) {
                        uVar8 = uart_try_toggle_sysrq(iVar9,cVar3);
                        if ((uVar8 & 1) == 0) goto code_r0x08001d38;
                    }
                    else {
                        handle_sysrq(cVar3);
                        *(arg1 + 0x178) = 0;
                    }
                }
            }
            _raw_spin_unlock(iVar9);
            tty_flip_buffer_push(*(arg1 + 0xf0));
        }
        uVar7 = uVar5 & 0xfffffffe;
    }
    uVar1 = uVar7;
    if ((uVar5 >> 1 & 1) != 0) {
        if ((uVar4 >> 1 & 1) != 0) {
            iVar9 = *(arg1 + 0xf0);
            sym.writel_relaxed(0x90,*(arg1 + 0x18));
            iVar6 = sym.readl_relaxed(*(arg1 + 0x18));
            if (iVar6 == 0x90) {
                _raw_spin_lock(arg1 + 0x28);
                iVar6 = *(iVar9 + 0x1bc);
                uVar4 = *(iVar9 + 0x1b8) - iVar6 & 0xfff;
                if (uVar4 != 0) {
                    uVar5 = *(arg1 + 0xdc);
                    if (uVar4 <= *(arg1 + 0xdc)) {
                        uVar5 = uVar4;
                    }
                    if (uVar5 != 0) {
                        iVar10 = -uVar5;
                        while( true ) {
                            iVar10 = iVar10 + 1;
                            sym.writel_relaxed(*(*(iVar9 + 0x1b0) + iVar6),*(arg1 + 0x38) + 8);
                            *(iVar9 + 0x1bc) = *(iVar9 + 0x1bc) + 1U & 0xfff;
                            *(arg1 + 0x10c) = *(arg1 + 0x10c) + 1;
                            if (iVar10 == 0) break;
                            iVar6 = *(iVar9 + 0x1bc);
                        }
                    }
                }
                _raw_spin_unlock(arg1 + 0x28);
            }
        }
        uVar1 = uVar7 & 0xfffffffd;
    }
    uVar4 = uVar1;
    if ((uVar7 >> 2 & 1) != 0) {
        *(arg1 + 0xc) = 0x400000001;
        uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + 0x74);
        uVar2 = _extcon_set_state_sync;
        *(arg1 + 0x14) = uVar7 >> 4 & 1;
        queue_work_on(0x20,uVar2,arg1 + 0x210);
        sym.writel_relaxed(1,*(arg1 + 0x18) + 0x80);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + 0x18) + 0x80);
        uVar4 = uVar1 & 0xfffffffb;
    }
    uVar7 = uVar4;
    if ((uVar1 >> 3 & 1) != 0) {
        *(arg1 + 0xc) = 0x800000005;
        uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + 0x74);
        uVar2 = _extcon_set_state_sync;
        *(arg1 + 0x15) = uVar7 >> 6 & 1;
        queue_work_on(0x20,uVar2,arg1 + 0x210);
        sym.writel_relaxed(1,*(arg1 + 0x18) + 0x84);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + 0x18) + 0x84);
        uVar7 = uVar4 & 0xfffffff7;
    }
    if ((uVar4 >> 4 & 1) != 0) {
        uVar8 = sym.readl_relaxed(*(arg1 + 0x18) + 0x1018);
        iVar9 = *(arg1 + 0x18) + 0x1018;
        if ((uVar8 & 1) == 0) {
            sym.writel_relaxed(1,iVar9);
            DataSynchronizationBarrier(3,2,0);
        }
        else {
            sym.writel_relaxed(0,iVar9);
            DataSynchronizationBarrier(3,2,0);
            __const_udelay(0x68dbc);
            sym.writel_relaxed(1,*(arg1 + 0x18) + 0x1018);
            DataSynchronizationBarrier(3,2,0);
        }
        uVar7 = uVar7 & 0xffffffef;
    }
    return (uVar7 & 0xff) == 0;
}


// ===== sym.eud_event_notifier @ 0x08001fc8 (size 248) =====

uint64_t sym.eud_event_notifier(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    if (*(arg1 + -0x200) == 8) {
        iVar3 = *(arg1 + 0x30);
        if (iVar3 == 0) {
            iVar3 = power_supply_get_by_name(0x8000695);
            *(arg1 + 0x30) = iVar3;
            uVar2 = 0;
            if (iVar3 == 0) goto code_r0x08002078;
        }
        uVar5 = 0;
        if (*(arg1 + -0x1fb) != '\0') {
            uVar5 = 0xffffffea;
        }
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar5);
        uVar2 = power_supply_set_property(iVar3,0x25,&uStack_30);
        if (uVar2 < 0) {
            uVar2 = _dev_err(*(arg1 + -0x210),"Failed to set the powersupply property: %d\n",uVar2 & 0xffffffff);
        }
    }
    else {
        uVar2 = arg1;
        if (*(arg1 + -0x200) == 4) {
            extcon_set_state(*(arg1 + -0x1f0),0x3d,1);
            uVar2 = extcon_set_state_sync(*(arg1 + -0x1f0),*(arg1 + -0x204),*(arg1 + -0x1fc));
        }
    }
code_r0x08002078:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar4,0x80020c4);
    uVar1 = *puVar4;
    log_post_read_mmio(uVar1,0x20,puVar4,0x80020f8);
    return uVar1;
}


// ===== sym.readl_relaxed @ 0x080020c0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80020c4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80020f8);
    return uVar1;
}


// ===== sym.readb_relaxed @ 0x08002130 (size 108) =====

uchar sym.readb_relaxed(int64_t arg1)

{
    uchar uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(8,arg1,0x8002134);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,8,arg1,0x8002168);
    return uVar1;
}


// ===== sym.eud_tx_empty @ 0x080021a0 (size 48) =====

uint32_t sym.eud_tx_empty(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readl_relaxed(*(arg1 + 0x10) + 0x44);
    return uVar1 >> 1 & 1;
}


// ===== sym.eud_set_mctrl @ 0x080021d0 (size 12) =====

void sym.eud_set_mctrl(void)

{
    return;
}


// ===== sym.eud_get_mctrl @ 0x080021dc (size 16) =====

ulong sym.eud_get_mctrl(int64_t arg1)

{
    return 0;
}


// ===== sym.eud_stop_tx @ 0x080021ec (size 52) =====

void sym.eud_stop_tx(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xfffffffd,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_start_tx @ 0x08002220 (size 52) =====

void sym.eud_start_tx(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(2,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_stop_rx @ 0x08002254 (size 52) =====

void sym.eud_stop_rx(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xfffffffe,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_startup @ 0x08002288 (size 56) =====

ulong sym.eud_startup(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return 0;
}


// ===== sym.eud_shutdown @ 0x080022c0 (size 52) =====

void sym.eud_shutdown(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(0xffffffff,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_set_termios @ 0x080022f4 (size 12) =====

void sym.eud_set_termios(void)

{
    return;
}


// ===== sym.eud_type @ 0x08002300 (size 32) =====

char * sym.eud_type(int64_t arg1)

{
    char *pcVar1;
    
    pcVar1 = "EUD UART";
    if (*(arg1 + 0x11c) != 300) {
        pcVar1 = NULL;
    }
    return pcVar1;
}


// ===== sym.eud_release_port @ 0x08002320 (size 12) =====

void sym.eud_release_port(void)

{
    return;
}


// ===== sym.eud_request_port @ 0x0800232c (size 16) =====

ulong sym.eud_request_port(int64_t arg1)

{
    return 0;
}


// ===== sym.eud_config_port @ 0x0800233c (size 60) =====

void sym.eud_config_port(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x11c) = 300;
    sym.writel_relaxed(0xffffffff,*(arg1 + 0x10) + 0x44);
    DataSynchronizationBarrier(3,2,0);
    return;
}


// ===== sym.eud_verify_port @ 0x08002378 (size 32) =====

uint sym.eud_verify_port(ulong noname_0,int64_t arg1)

{
    uint uVar1;
    
    uVar1 = 0;
    if (*arg1 != 300 && *arg1 != 0) {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.msm_eud_suspend @ 0x08002398 (size 80) =====

ulong sym.msm_eud_suspend(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg1 + 0x98) + 0x249) != '\0') && (iVar1 = *(*(arg1 + 0x98) + 600), iVar1 != 0)) {
        clk_disable(iVar1);
        clk_unprepare(iVar1);
    }
    return 0;
}


// ===== sym.msm_eud_resume @ 0x080023e8 (size 152) =====

int sym.msm_eud_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x98);
    if ((*(puVar3 + 0x249) == '\0') || (iVar2 = puVar3[0x4b], iVar2 == 0)) {
        iVar1 = 0;
    }
    else {
        iVar1 = clk_prepare(iVar2);
        if (iVar1 == 0) {
            iVar1 = clk_enable(iVar2);
            if (iVar1 == 0) {
                return 0;
            }
            clk_unprepare(iVar2);
        }
        _dev_err(*puVar3,"%s failed to vote ahb2phy clk %d\n","msm_eud_resume",iVar1);
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08002480 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080024c4

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
    //switch table (4 cases) at 0x8000190
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024d8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080024e4 (size 152) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = uart_register_driver(obj.eud_uart_driver);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            _printk(0x800037d,"msm_eud_init");
            uart_unregister_driver(obj.eud_uart_driver);
        }
    }
    else {
        _printk(0x80005aa,"msm_eud_init");
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800257c (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_eud_probe.0d70ea8df2a25403c682c91fcab27128.cfi_jt);
    uart_unregister_driver(obj.eud_uart_driver);
    return;
}

