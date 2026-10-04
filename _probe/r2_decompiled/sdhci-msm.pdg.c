// decompiled from sdhci-msm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1404) =====

//WARNING: Switch with 1 destination removed at 0x0800bd70

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x17b35aa830d45bd1) {
        if (arg1 < -0x3f827ebe2d539e6d) {
            if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x7e191f3af285e684) {
                    pcVar2 = sym.sdhci_msm_set_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                }
                else {
                    if (arg1 != -0x7ae1aa96e3ae7ad5) {
                        if (arg1 != -0x66d421a09845f9f8) goto code_r0x0800bd30;
                        pcVar2 = sym.dbg_state_show.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                        goto code_r0x080034c8;
                    }
                    pcVar2 = sym.sdhci_msm_hw_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                }
code_r0x08003550:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800bd30;
            }
            if (arg1 < -0x46bb7fa9d7f84da2) {
                if (arg1 == -0x57be845bca9148ef) {
                    if ((pcVar1 + -0x80036d8 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x0800bd30;
                }
                if (arg1 != -0x550b9e52359ac614) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_clkgate_bus_delayed_work.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
            else {
                if (arg1 == -0x46bb7fa9d7f84da2) {
                    pcVar2 = sym.sdhci_msm_enhanced_strobe_mask.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                    goto code_r0x08003550;
                }
                if (arg1 != -0x407df5a24a3f0d40) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_execute_tuning.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x3f827ebe2d539e6d) {
                pcVar2 = sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr;
            }
            else if (arg1 == -0x3aae5f50751f242d) {
                pcVar2 = sym.sdhci_set_bus_width.cfi_jt;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_pwr_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
        }
        else if (arg1 < -0x28f0e94db73b717c) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.sdhci_msm_remove.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                goto code_r0x08003550;
            }
            if (arg1 != -0x2ee0710dce68437c) goto code_r0x0800bd30;
            pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
        }
        else {
            if (arg1 == -0x28f0e94db73b717c) {
                pcVar2 = sym.__typeid__ZTSFvP8mmc_hostE_global_addr;
                goto code_r0x08003550;
            }
            if (arg1 != -0x27114621caeb398b) goto code_r0x0800bd30;
            pcVar2 = sym.__typeid__ZTSFvP10sdhci_hosthiE_global_addr;
        }
    }
    else if (arg1 < 0x4219b48f0ba1dc64) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x17b35aa830d45bd1) {
                pcVar2 = sym.__typeid__ZTSFvjP10sdhci_hostjE_global_addr;
                goto code_r0x08003550;
            }
            if (arg1 == -0x83089136590252c) {
                pcVar2 = sym.sdhci_msm_init_card.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
            else {
                if (arg1 != -0x2ac316d8df914f8) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_irq_affinity_release.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
        }
        else if (arg1 < 0x17c37e692ff0f10c) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x72c2478ad742c3c) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_set_sdio_pm_flag.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x17c37e692ff0f10c) {
                if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800bd30;
                pcVar2 = sym.store_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                goto code_r0x080034c8;
            }
            pcVar2 = sym.sdhci_msm_irq_affinity_notify.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
        }
    }
    else if (arg1 < 0x4f528f009ba945ce) {
        if (arg1 < 0x48d2ea6a8ce42ee6) {
            if (arg1 == 0x4219b48f0ba1dc64) {
                pcVar2 = sym.sdhci_msm_start_signal_voltage_switch.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            }
            else {
                if (arg1 != 0x4361fd2018bdba85) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_set_power_noreg.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x48d2ea6a8ce42ee6) {
                if (arg1 != 0x4be5badca5f10994) goto code_r0x0800bd30;
                pcVar2 = sym.sdhci_msm_get_max_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
code_r0x080034c8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x0800bd30;
            }
            pcVar2 = sym.sdhci_msm_set_timeout.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
        }
    }
    else if (arg1 < 0x666408267b48a086) {
        if (arg1 == 0x4f528f009ba945ce) {
            pcVar2 = sym.__typeid__ZTSFjP10sdhci_hostjE_global_addr;
            goto code_r0x080034c8;
        }
        if (arg1 != 0x615ac24fcb8eaca0) goto code_r0x0800bd30;
        pcVar2 = sym.sdhci_msm_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    }
    else if (arg1 == 0x666408267b48a086) {
        pcVar2 = sym.sdhci_msm_program_key.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800bd30;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800bd30:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800bd84);
    (*pcVar1)();
}


// ===== sym.sdhci_msm_enhanced_strobe_mask.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003588 (size 8) =====

void sym.sdhci_msm_enhanced_strobe_mask.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x423) != '\0') {
        iVar3 = *(param_1 + 0xe38);
        uVar1 = sym.readl_relaxed(*(param_1 + 0x7d8) + *(iVar3 + 0x60));
        uVar2 = 0x2000;
        if ((param_2 & 1) == 0) {
            uVar2 = 0;
        }
        sym.writel_relaxed(uVar1 & 0xffffdfff | uVar2,*(param_1 + 0x7d8) + *(iVar3 + 0x60));
    }
    return;
}


// ===== sym.sdhci_msm_cqe_disable.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003590 (size 8) =====

void sym.sdhci_msm_cqe_disable.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x7c0;
    if ((*(param_1 + 0xab5) >> 4 & 1) != 0) {
        *(param_1 + 0xba0) = 0x10;
    }
    uVar3 = _raw_spin_lock_irqsave(param_1 + 0xab0);
    pcVar4 = **(param_1 + 0x800);
    if (pcVar4 == NULL) {
        uVar2 = sym.readl(*(param_1 + 0x7d8) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar4,0x8000450);
        uVar2 = (*pcVar4)(iVar1,0x34);
    }
    pcVar4 = *(*(param_1 + 0x800) + 0x18);
    if (pcVar4 == NULL) {
        sym.writel(uVar2 | 1,*(param_1 + 0x7d8) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar4,0x80004b0);
        (*pcVar4)(iVar1,uVar2 | 1,0x34);
    }
    pcVar4 = *(*(param_1 + 0x800) + 0x18);
    if (pcVar4 == NULL) {
        sym.writel(1,*(param_1 + 0x7d8) + 0x30);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar4,0x80004b0);
        (*pcVar4)(iVar1,1,0x30);
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xab0,uVar3);
    sdhci_cqe_disable(param_1,param_2 & 1);
    return;
}


// ===== sym.sdhci_set_power_noreg.cfi_jt @ 0x08003598 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sdhci_set_power_noreg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sdhci_msm_clkgate_bus_delayed_work.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035a0 (size 8) =====

void sym.sdhci_msm_clkgate_bus_delayed_work.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + -0x108) + 0x7c0;
    sym.sdhci_msm_registers_save(arg1);
    dev_pm_opp_set_rate(*(param_1 + -0x1a0) + 0x10,0);
    clk_bulk_disable(5,param_1 + -0x168);
    clk_bulk_unprepare(5,param_1 + -0x168);
    if ((*(param_1 + 0x1c0) != 0) && (*(param_1 + 0x1c8) != '\0')) {
        ipc_log_string(*(param_1 + 0x1c0),"%s: Clocks gated\n","sdhci_msm_clkgate_bus_delayed_work");
    }
    sym.sdhci_msm_bus_get_and_set_vote(arg1,0);
    return;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080035a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080035b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080035b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.sdhci_msm_pwr_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035c0 (size 8) =====

ulong sym.sdhci_msm_pwr_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt(uint64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.sdhci_msm_handle_pwr_irq(param_2,param_1 & 0xffffffff);
    *(param_2 + 0x660) = 1;
    __wake_up(param_2 + 0x648,3,1,0);
    return 1;
}


// ===== sym.sdhci_msm_program_key.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035c8 (size 8) =====

void sym.sdhci_msm_program_key.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,ulong *param_2,uint param_3)

{
    char *pcVar1;
    char cVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
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
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    if (*(param_2 + 0x43) < '\0') {
        pcVar1 = *(param_1 + 200) + *(param_2 + 0x41) * 4;
        cVar2 = *pcVar1;
        cVar3 = pcVar1[2];
        if (cVar2 == '\0' && cVar3 == '\x03') {
            uVar10 = *param_2;
            uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
            uVar7 = *param_2 >> 0x20;
            uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
            uStack_70._0_4_ = param_2[1];
            uStack_70._4_4_ = param_2[1] >> 0x20;
            uStack_78 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uStack_68._0_4_ = param_2[2];
            uStack_68._4_4_ = param_2[2] >> 0x20;
            uVar10 = (uStack_70 & 0xff00ff00) >> 8 | (uStack_70 & 0xff00ff) << 8;
            uVar7 = (uStack_70._4_4_ & 0xff00ff00) >> 8 | (uStack_70._4_4_ & 0xff00ff) << 8;
            uStack_70 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_68 & 0xff00ff00) >> 8 | (uStack_68 & 0xff00ff) << 8;
            uStack_60._0_4_ = param_2[3];
            uStack_60._4_4_ = param_2[3] >> 0x20;
            uVar7 = (uStack_68._4_4_ & 0xff00ff00) >> 8 | (uStack_68._4_4_ & 0xff00ff) << 8;
            uStack_58._0_4_ = param_2[4];
            uStack_58._4_4_ = param_2[4] >> 0x20;
            uVar4 = (uStack_60 & 0xff00ff00) >> 8 | (uStack_60 & 0xff00ff) << 8;
            uStack_68 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_60._4_4_ & 0xff00ff00) >> 8 | (uStack_60._4_4_ & 0xff00ff) << 8;
            uVar7 = (uStack_58 & 0xff00ff00) >> 8 | (uStack_58 & 0xff00ff) << 8;
            uVar5 = (uStack_58._4_4_ & 0xff00ff00) >> 8 | (uStack_58._4_4_ & 0xff00ff) << 8;
            uStack_60 = CONCAT44(uVar10 >> 0x10 | uVar10 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10);
            uStack_50._0_4_ = param_2[5];
            uStack_50._4_4_ = param_2[5] >> 0x20;
            uStack_58 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10);
            uStack_40._0_4_ = param_2[7];
            uStack_40._4_4_ = param_2[7] >> 0x20;
            uVar10 = (uStack_50 & 0xff00ff00) >> 8 | (uStack_50 & 0xff00ff) << 8;
            uVar7 = (uStack_50._4_4_ & 0xff00ff00) >> 8 | (uStack_50._4_4_ & 0xff00ff) << 8;
            uStack_48._0_4_ = param_2[6];
            uStack_48._4_4_ = param_2[6] >> 0x20;
            uStack_50 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_40 & 0xff00ff00) >> 8 | (uStack_40 & 0xff00ff) << 8;
            uVar7 = (uStack_40._4_4_ & 0xff00ff00) >> 8 | (uStack_40._4_4_ & 0xff00ff) << 8;
            uVar4 = (uStack_48 & 0xff00ff00) >> 8 | (uStack_48 & 0xff00ff) << 8;
            uVar5 = (uStack_48._4_4_ & 0xff00ff00) >> 8 | (uStack_48._4_4_ & 0xff00ff) << 8;
            uStack_40 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uStack_48 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10);
            uVar8 = qcom_scm_ice_set_key(param_3,&uStack_78,0x40,3,*(param_2 + 8));
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
        }
        else {
            uVar8 = **(param_1 + 0x10);
            iVar6 = ___ratelimit(obj.sdhci_msm_program_key._rs,"sdhci_msm_program_key");
            if (iVar6 == 0) {
                uVar8 = 0xffffffea;
            }
            else {
                _dev_err(uVar8,"Unhandled crypto capability; algorithm_id=%d, key_size=%d\n",cVar2,cVar3);
                uVar8 = 0xffffffea;
            }
        }
    }
    else {
        uVar8 = qcom_scm_ice_invalidate_key(param_3);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return;
    }
    auVar12 = __stack_chk_fail(uVar8);
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.sdhci_msm_enhanced_strobe_mask;
    if (*(iVar9 + 0x423) != '\0') {
        iVar11 = *(iVar9 + 0xe38);
        uVar7 = sym.readl_relaxed(*(iVar9 + 0x7d8) + *(iVar11 + 0x60));
        uVar10 = 0x2000;
        if ((auVar12._8_8_ & 1) == 0) {
            uVar10 = 0;
        }
        sym.writel_relaxed(uVar7 & 0xffffdfff | uVar10,*(iVar9 + 0x7d8) + *(iVar11 + 0x60));
    }
    return;
}


// ===== sym.sdhci_msm_set_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035d0 (size 8) =====

void sym.sdhci_msm_set_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    char cVar1;
    uint uVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        *(param_1 + 0x608) = 0;
        *(*(param_1 + 0x48) + 0x640) = 0;
    }
    else {
        sym.sdhci_msm_hc_select_mode(param_1);
        sym.msm_set_clock_rate_for_bus_mode(param_1,param_2);
        if (*(param_1 + 0x689) == '\0') {
            uVar3 = *(param_1 + 0x608);
            cVar1 = *(*(param_1 + 0x48) + 0x41f);
            if (cVar1 == '\0') {
                uVar3 = uVar3 >> 3;
            }
            else if (cVar1 == '\x02') {
                uVar3 = uVar3 >> 1;
            }
            sym.sdhci_msm_bus_get_and_set_vote(param_1,uVar3);
        }
    }
    pcVar4 = *(*(param_1 + 0x40) + 0x20);
    if (pcVar4 == NULL) {
        sym.writew(0,*(param_1 + 0x18) + 0x2c);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
            __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar4,0x80003d0);
        }
        (*pcVar4)(param_1,0,0x2c);
    }
    if (param_2 != 0) {
        pcVar4 = *(*(param_1 + 0x40) + 8);
        if (pcVar4 == NULL) {
            uVar2 = sym.readw(*(param_1 + 0x18) + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar4,0x80003f0);
            uVar2 = (*pcVar4)(param_1,0x2c);
        }
        sdhci_enable_clk(param_1,uVar2);
    }
    return;
}


// ===== sym.sdhci_msm_set_uhs_signaling.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035d8 (size 8) =====

void sym.sdhci_msm_set_uhs_signaling.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    code *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x48);
    iVar10 = *(param_1 + 0x678);
    pcVar6 = *(*(param_1 + 0x40) + 8);
    if (pcVar6 == NULL) {
        uVar1 = sym.readw(*(param_1 + 0x18) + 0x3e);
    }
    else {
        __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar6,0x80003f0);
        uVar1 = (*pcVar6)(param_1,0x3e);
    }
    uVar1 = uVar1 & 0xfffffff8;
    uVar7 = uVar1;
    switch(param_2) {
    case 4:
        uVar7 = uVar1 | 1;
        break;
    case 5:
        uVar7 = uVar1 | 2;
        break;
    case 6:
    case 9:
    case 10:
        uVar7 = uVar1 | 3;
        break;
    case 7:
    case 8:
        uVar7 = uVar1 | 4;
    }
    if (*(param_1 + 0x30c) < 0x5f5e101) {
        if ((param_2 < 0xb) && ((1 << (param_2 & 0x1f) & 0x640U) != 0)) {
            uVar7 = uVar1;
        }
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar1 | 0x40000000,*(param_1 + 0x18) + *(iVar10 + 0x3c));
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar1 | 0x20000000,*(param_1 + 0x18) + *(iVar10 + 0x3c));
        *(param_1 + 0x63a) = 0;
    }
    pcVar6 = *(*(param_1 + 0x40) + 0x20);
    if (pcVar6 == NULL) {
        sym.writew(uVar7,*(param_1 + 0x18) + 0x3e);
    }
    else {
        if (pcVar6 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
            __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar6,0x80003d0);
        }
        (*pcVar6)(param_1,uVar7,0x3e);
    }
    if (*(iVar8 + 0x420) != '\n') {
        return;
    }
    if (*(param_1 + 0x30c) < 0x5f5e101) {
        return;
    }
    if ((*(param_1 + 0x639) == '\0') && (*(iVar8 + 0x423) == '\0')) {
        return;
    }
    if (*(param_1 + 0x63a) != '\0') {
        return;
    }
    iVar10 = *(param_1 + 0x48);
    iVar8 = *(param_1 + 0x678);
    iVar2 = sym.msm_init_cm_dll(param_1,0);
    if (iVar2 != 0) goto code_r0x080079ac;
    if (*(iVar10 + 0x423) == '\0') {
        iVar2 = sym.msm_config_cm_dll_phase(param_1,*(param_1 + 0x63b));
        if (iVar2 != 0) goto code_r0x080079ac;
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar8 + 0x3c));
        sym.writel_relaxed(uVar1 | 1,*(param_1 + 0x18) + *(iVar8 + 0x3c));
    }
    if (*(param_1 + 0x63c) == '\0') {
        iVar3 = *(param_1 + 0x678);
        iVar10 = *(param_1 + 0x48);
        iVar8 = 0x6c;
        if (*(param_1 + 0x688) != '\0') {
            iVar8 = 0x70;
        }
        if ((*(param_1 + 0x860) == 0) || (uVar1 = *(*(param_1 + 0x860) + 0x10), uVar1 == 0)) {
            uVar1 = 0x80040873;
        }
        sym.writel_relaxed(uVar1,*(param_1 + 0x18) + *(iVar3 + iVar8));
        if (*(iVar10 + 0x423) != '\0') {
            uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 0x5c));
            sym.writel_relaxed(uVar1 | 2,*(param_1 + 0x18) + *(iVar3 + 0x5c));
        }
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 100));
        sym.writel_relaxed(uVar1 | 1,*(param_1 + 0x18) + *(iVar3 + 100));
        iVar8 = ktime_get();
        uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 0x40));
        if ((uVar1 >> 0xb & 1) == 0) {
            do {
                iVar10 = ktime_get();
                if (iVar8 + 1000000 < iVar10) {
                    uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 0x40));
                    break;
                }
                usleep_range_state(3,10,2);
                uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 0x40));
            } while ((uVar1 >> 0xb & 1) == 0);
        }
        if ((uVar1 >> 0xb & 1) != 0) {
            if (*(param_1 + 0x638) == '\0') {
                uVar1 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar3 + 0x60));
                sym.writel_relaxed(uVar1 | 8,*(param_1 + 0x18) + *(iVar3 + 0x60));
            }
            DataSynchronizationBarrier(3,2,0);
code_r0x08007928:
            *(param_1 + 0x63a) = 1;
            return;
        }
        iVar8 = *(*(param_1 + 0x48) + 0x78);
        if (iVar8 == 0) {
            iVar8 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = 0x8001b3f;
        pcVar5 = "sdhci_msm_cm_dll_sdc4_calibration";
    }
    else {
        iVar8 = *(param_1 + 0x678);
        iVar2 = sym.msm_init_cm_dll(param_1,0);
        if ((iVar2 != 0) || (iVar2 = sym.msm_config_cm_dll_phase(param_1,*(param_1 + 0x63b)), iVar2 != 0))
        goto code_r0x080079ac;
        piVar9 = param_1 + 0x18;
        uVar1 = sym.readl_relaxed(*piVar9 + *(iVar8 + 0x3c));
        sym.writel_relaxed(uVar1 | 1,*piVar9 + *(iVar8 + 0x3c));
        uVar1 = sym.readl_relaxed(*piVar9 + *(iVar8 + 0x5c));
        sym.writel_relaxed(uVar1 & 0xfffffffe,*piVar9 + *(iVar8 + 0x5c));
        uVar1 = sym.readl_relaxed(*piVar9 + 0x178);
        sym.writel_relaxed(uVar1 & 0xfffffffe,*piVar9 + 0x178);
        uVar1 = sym.readl_relaxed(*piVar9 + 0x178);
        sym.writel_relaxed(uVar1 | 2,*piVar9 + 0x178);
        uVar1 = sym.readl_relaxed(*piVar9 + *(iVar8 + 0x5c));
        sym.writel_relaxed(uVar1 & 0xffffffbf,*piVar9 + *(iVar8 + 0x5c));
        sym.writel_relaxed(0x11800ec,*piVar9 + 0x130);
        sym.writel_relaxed(0x3011111,*piVar9 + 0x134);
        sym.writel_relaxed(0x1201000,*piVar9 + 0x138);
        sym.writel_relaxed(4,*piVar9 + 0x13c);
        sym.writel_relaxed(0xcb732020,*piVar9 + 0x140);
        sym.writel_relaxed(0xb19,*piVar9 + 0x144);
        sym.writel_relaxed(0x4e2,*piVar9 + 0x150);
        sym.writel_relaxed(0,*piVar9 + 0x14c);
        sym.writel_relaxed(0x16334,*piVar9 + 0x160);
        uVar1 = sym.readl_relaxed(*piVar9 + 0x130);
        sym.writel_relaxed(uVar1 | 0x10000,*piVar9 + 0x130);
        uVar1 = sym.readl_relaxed(*piVar9 + 0x130);
        sym.writel_relaxed(uVar1 & 0xfffeffff,*piVar9 + 0x130);
        uVar1 = sym.readl_relaxed(*piVar9 + 0x130);
        sym.writel_relaxed(uVar1 | 0x20000,*piVar9 + 0x130);
        uVar1 = sym.readl_relaxed(*piVar9 + 0x138);
        sym.writel_relaxed(uVar1 | 0x10000,*piVar9 + 0x138);
        iVar10 = ktime_get();
        uVar7 = sym.readl_relaxed(*piVar9 + 0x164);
        if ((uVar7 & 1) == 0) {
            do {
                iVar3 = ktime_get();
                if (iVar10 + 50000 < iVar3) {
                    uVar7 = sym.readl_relaxed(*piVar9 + 0x164);
                    break;
                }
                usleep_range_state(1,1,2);
                uVar7 = sym.readl_relaxed(*piVar9 + 0x164);
            } while ((uVar7 & 1) == 0);
        }
        if ((uVar7 & 1) != 0) {
            uVar1 = sym.readl_relaxed(*piVar9 + 0x164);
            if ((uVar1 & 0x7000000) == 0) {
                uVar1 = sym.readl_relaxed(*piVar9 + *(iVar8 + 0x5c));
                sym.writel_relaxed(uVar1 | 0x40,*piVar9 + *(iVar8 + 0x5c));
                goto code_r0x08007928;
            }
            iVar8 = *(*(param_1 + 0x48) + 0x78);
            if (iVar8 == 0) {
                iVar8 = *(*(param_1 + 0x48) + 8);
            }
            _printk(0x800150a,iVar8,"sdhci_msm_cdclp533_calibration",uVar1 & 0x7000000);
            iVar2 = -0x16;
            goto code_r0x080079ac;
        }
        iVar8 = *(*(param_1 + 0x48) + 0x78);
        if (iVar8 == 0) {
            iVar8 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = 0x8001ed9;
        pcVar5 = "sdhci_msm_cdclp533_calibration";
    }
    _printk(uVar4,iVar8,pcVar5);
    iVar2 = -0x6e;
code_r0x080079ac:
    iVar8 = *(*(param_1 + 0x48) + 0x78);
    if (iVar8 == 0) {
        iVar8 = *(*(param_1 + 0x48) + 8);
    }
    _printk(0x800196f,iVar8,iVar2);
    return;
}


// ===== sym.sdhci_set_bus_width.cfi_jt @ 0x080035e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.sdhci_set_bus_width.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr @ 0x080035e8 (size 8) =====

void sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__sdhci_msm_check_write(param_1,param_2,param_3);
    sym.writew_relaxed(param_2 & 0xffffffff,*(param_1 + 0x18) + param_3);
    if (uVar1 != 0) {
        sym.sdhci_msm_check_power_status(param_1,uVar1);
    }
    return;
}


// ===== sym.__typeid__ZTSFvP10sdhci_hosthiE_global_addr @ 0x080035f0 (size 8) =====

void sym.__typeid__ZTSFvP10sdhci_hosthiE_global_addr(int64_t param_1,uint32_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__sdhci_msm_check_write(param_1,param_2 & 0xff,param_3);
    sym.writeb_relaxed(param_2,*(param_1 + 0x18) + param_3);
    if (uVar1 != 0) {
        sym.sdhci_msm_check_power_status(param_1,uVar1);
    }
    return;
}


// ===== sym.sdhci_msm_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080035f8 (size 8) =====

void sym.sdhci_msm_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 1) != 0) {
        if ((*(*(param_1 + 0x48) + 1000) >> 0x17 & 1) != 0) {
            cqhci_deactivate();
        }
    }
    sdhci_reset(param_1,param_2);
    return;
}


// ===== sym.__typeid__ZTSFjP10sdhci_hostjE_global_addr @ 0x08003600 (size 8) =====

void sym.__typeid__ZTSFjP10sdhci_hostjE_global_addr(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed(*(param_1 + 0x18) + param_2);
    return;
}


// ===== sym.sdhci_msm_mci_variant_readl_relaxed.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003608 (size 8) =====

void sym.sdhci_msm_mci_variant_readl_relaxed.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed(*(param_1 + 0x588) + param_2);
    return;
}


// ===== sym.sdhci_msm_cqe_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003610 (size 8) =====

uint64_t sym.sdhci_msm_cqe_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if ((*(param_1 + 0x8e0) != 0) && (*(param_1 + 0x8e8) != '\0')) {
        ipc_log_string(*(param_1 + 0x8e0),"%s: intmask: 0x%x\n","sdhci_msm_log_irq",param_2);
    }
    uVar1 = sdhci_cqe_irq(param_1,param_2,&uStack_30 + 4,&uStack_30);
    if ((uVar1 & 1) != 0) {
        cqhci_irq(*(param_1 + 0x48),param_2,uStack_30._4_4_,uStack_30 & 0xffffffff);
        param_2 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_2;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.sdhci_msm_get_max_clock;
    uVar1 = clk_round_rate(*(iVar2 + 0x5c0),0xffffffffffffffff);
    return uVar1;
}


// ===== sym.sdhci_msm_execute_tuning.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003618 (size 8) =====

uint64_t sym.sdhci_msm_execute_tuning.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint param_2)

{
    uint8_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = param_1 + 0x7c0;
    iVar10 = *(param_1 + 0x808);
    uStack_78 = 0;
    uStack_70 = 0;
    iVar12 = *(param_1 + 0xe38);
    uVar1 = *(iVar10 + 0x420);
    uVar4 = *(iVar10 + 0x410);
    if ((uVar1 == 5) && ((*(param_1 + 0xab4) >> 4 & 1) != 0)) {
        *(param_1 + 0xdf9) = 0;
        *(param_1 + 0xe40) = 1;
        uVar5 = sym.readl_relaxed(*(param_1 + 0x7d8) + *(iVar12 + 0x44));
        sym.writel_relaxed(uVar5 & 0xffc00000 | uVar5 & 0x3ffff | 0x240000,*(param_1 + 0x7d8) + *(iVar12 + 0x44));
        uVar1 = *(param_1 + 0xab5);
    }
    else {
        if ((*(param_1 + 0xacc) < 0x5f5e101) ||
           (((10 < uVar1 || ((1 << (uVar1 & 0x1f) & 0x640U) == 0)) || (*(iVar10 + 0x423) != '\0')))) {
            *(param_1 + 0xe40) = 0;
            uVar3 = sym.readl_relaxed(*(param_1 + 0x7d8) + *(iVar12 + 0x3c));
            uVar5 = 0;
            uVar4 = uVar3 & 0xfffdffff | 0x80000;
            if (uVar4 != uVar3) {
                sym.writel_relaxed(uVar4,*(param_1 + 0x7d8) + *(iVar12 + 0x3c));
                uVar5 = 0;
            }
            goto code_r0x080061bc;
        }
        *(param_1 + 0xdf9) = 0;
        *(param_1 + 0xe40) = 1;
        uVar1 = *(param_1 + 0xab5);
    }
    if ((uVar1 >> 5 & 1) != 0) {
        sym.sdhci_msm_hc_select_mode(iVar9);
        sym.msm_set_clock_rate_for_bus_mode(iVar9,uVar4);
        *(param_1 + 0xab4) = *(param_1 + 0xab4) & 0xffffdfff;
    }
    uVar4 = sym.readl_relaxed(*(param_1 + 0x7d8) + *(iVar12 + 0x44));
    sym.writel_relaxed(uVar4 & 0xfffffffd,*(param_1 + 0x7d8) + *(iVar12 + 0x44));
    uVar5 = sym.msm_init_cm_dll(iVar9,0);
    if (uVar5 == 0) {
        iVar13 = 10;
        do {
            uVar7 = 0;
            uVar3 = 0;
            do {
                uVar5 = sym.msm_config_cm_dll_phase(iVar9,uVar3);
                if (uVar5 != 0) goto code_r0x08006194;
                iVar6 = mmc_send_tuning(param_1,param_2,0);
                if (iVar6 == 0) {
                    if (0xf < (uVar7 & 0xff)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80062bc);
                        (*pcVar2)();
                    }
                    uVar11 = uVar7 & 0xff;
                    uVar7 = uVar7 + 1;
                    *(&uStack_78 + uVar11) = uVar3;
                }
                uVar5 = uVar3 & 0xff;
                uVar3 = uVar3 + 1;
            } while (uVar5 < 0xf);
            if ((uVar7 & 0xff) == 0) {
                if (iVar13 == 1) {
                    if ((*(param_1 + 0x10a0) != 0) && (*(param_1 + 0x10a8) != '\0')) {
                        ipc_log_string(*(param_1 + 0x10a0),"%s: No tuning point found\n","sdhci_msm_execute_tuning");
                    }
                    uVar5 = 0xfffffffb;
                    break;
                }
            }
            else if (((uVar7 & 0xff) != 0x10) || (iVar13 == 1)) {
                uVar3 = sym.msm_find_most_appropriate_phase(iVar9,&uStack_78,uVar7);
                uVar5 = uVar3;
                if ((-1 < uVar3) && (uVar5 = sym.msm_config_cm_dll_phase(iVar9,uVar3), uVar5 == 0)) {
                    *(param_1 + 0xdfb) = uVar3;
                    if ((*(param_1 + 0x10a0) != 0) && (*(param_1 + 0x10a8) != '\0')) {
                        ipc_log_string(*(param_1 + 0x10a0),"%s: Setting the tuning phase to %d\n",
                                       "sdhci_msm_execute_tuning",uVar3 & 0xff);
                    }
                    *(param_1 + 0xdf9) = 1;
                    uVar5 = 0;
                }
                break;
            }
            iVar13 = iVar13 + -1;
            uVar5 = sym.msm_init_cm_dll(iVar9,0);
        } while (uVar5 == 0);
    }
code_r0x08006194:
    if ((uVar4 >> 1 & 1) != 0) {
        uVar4 = sym.readl_relaxed(*(param_1 + 0x7d8) + *(iVar12 + 0x44));
        sym.writel_relaxed(uVar4 | 2,*(param_1 + 0x7d8) + *(iVar12 + 0x44));
    }
code_r0x080061bc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    uVar7 = auVar14._0_8_;
    *extraout_x18 = sym.sdhci_msm_init_card;
    if ((piVar8[0x74] == 2) && (uVar7 = device_init_wakeup(piVar8 + 1,1), uVar7 != 0)) {
        iVar9 = *(*piVar8 + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(*piVar8 + 8);
        }
        uVar7 = _printk(0x8001b8c,iVar9,"sdhci_msm_init_card",uVar7 & 0xffffffff);
    }
    return uVar7;
}


// ===== sym.sdhci_msm_set_timeout.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003620 (size 8) =====

void sym.sdhci_msm_set_timeout.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x48) + 0x640);
    if (uVar1 == 0) {
        uVar1 = *(param_1 + 0x30c);
    }
    *(param_1 + 0x300) = uVar1 / 4000;
    __sdhci_set_timeout(param_1,param_2);
    pcVar2 = *(*(param_1 + 0x40) + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = sym.readb(*(param_1 + 0x18) + 0x2e);
    }
    else {
        __cfi_slowpath_diag(0x68f62952c0735e6d,pcVar2,0x8000410);
        uVar1 = (*pcVar2)(param_1,0x2e);
    }
    if ((((param_2 != 0) && (*(param_2 + 0x28) != 0)) && (*(param_1 + 0x30c) - 0x61a81U < 49600000)) &&
       (*(param_1 + 0x30c) * 10 < 0x8000 << (uVar1 & 0x1f))) {
        *(param_1 + 0x500) = 22000000000;
    }
    return;
}


// ===== sym.store_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003628 (size 8) =====

int64_t sym.store_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_3c;
    iVar3 = *(param_1 + 0x98);
    uStack_3c = 0;
    iVar1 = kstrtouint(param_3,0,puVar2);
    if (iVar1 == 0) {
        puVar2 = uStack_3c;
        *(iVar3 + 0x840) = uStack_3c;
        _dev_info(param_1,"set clk scaling work delay (%u)\n");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_sdhci_msm_pm_qos;
    iVar1 = scnprintf(puVar2,0x1000,0x8000d93,*(*(iVar3 + 0x98) + 0x844));
    return iVar1;
}


// ===== sym.store_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003630 (size 8) =====

ulong sym.store_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x98);
    uStack_3c = 0;
    iVar1 = kstrtouint(param_3,0,&uStack_3c);
    if (iVar1 == 0) {
        *(iVar4 + 0x844) = uStack_3c;
        _dev_info(param_1,"set pm qos work delay (%u)\n");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.sdhci_msm_cqe_enable;
    uVar3 = sdhci_cqe_enable();
    if ((*(*(iVar4 + 0xdd8) + 0x3eb) >> 3 & 1) != 0) {
        uVar2 = sym.readl(*(iVar4 + 0xd50) + 0x1000);
        sym.writel(uVar2 | 0x7000,*(iVar4 + 0xd50) + 0x1000);
        uVar2 = sym.readl(*(iVar4 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.writel(uVar2 | 0xd807100,*(iVar4 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        uVar3 = sym.sdhci_msm_ice_wait_bist_status(iVar4 + 0xd40);
    }
    return uVar3;
}


// ===== sym.dbg_state_store.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003638 (size 8) =====

uint64_t sym.dbg_state_store.25097f443e31f63e0512f8d5d188b74c.cfi_jt
                   (int64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    ulong uVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint32_t uStack_ac;
    uint32_t auStack_a8 [8];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0x98);
    auStack_3c[0] = 0;
    puVar8 = param_3;
    uVar4 = capable(0x15);
    if ((uVar4 & 1) == 0) {
        param_4 = 0xfffffffffffffff3;
    }
    else {
        iVar2 = kstrtobool(param_3,auStack_3c);
        if (iVar2 == 0) {
            *(iVar10 + 0x8e8) = auStack_3c[0];
        }
        else {
            param_4 = 0xffffffffffffffea;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return param_4;
    }
    auVar14 = __stack_chk_fail();
    iVar7 = auVar14._0_8_;
    *extraout_x18 = sym.sdhci_msm_dt_parse_vreg_info;
    pcStack_78 = sym.sdhci_msm_dt_parse_vreg_info;
    iVar10 = sp_el0;
    iStack_88 = *(iVar10 + 0x5e0);
    uVar11 = *(iVar7 + 0x2f0);
    uStack_ac = 0;
    iVar13 = *(iVar7 + 0x98);
    auStack_a8[4] = 0;
    auStack_a8[5] = 0;
    auStack_a8[6] = 0;
    auStack_a8[7] = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    puVar6 = puVar8;
    puStack_80 = &stack0xffffffffffffffd0;
    snprintf(auStack_a8,0x20,"%s-supply");
    iVar10 = of_parse_phandle(uVar11,auStack_a8,0);
    if (iVar10 == 0) {
        _dev_info(iVar7,"No vreg data found for %s\n");
        uVar4 = 0xfffffffe;
    }
    else {
        puVar9 = 0xdc0;
        piVar5 = devm_kmalloc(iVar7,0x30);
        if (piVar5 == NULL) {
            uVar4 = 0xfffffff4;
            puVar8 = puVar9;
        }
        else {
            piVar5[2] = puVar8;
            *piVar5 = iVar13 + 0x580;
            snprintf(auStack_a8,0x20,"qcom,%s-always-on",puVar8);
            iVar10 = of_get_property(uVar11,auStack_a8,0);
            if (iVar10 != 0) {
                *(piVar5 + 0x29) = 1;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-lpm-sup",puVar8);
            iVar10 = of_get_property(uVar11,auStack_a8,0);
            if (iVar10 != 0) {
                *(piVar5 + 0x2a) = 1;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-voltage-level",puVar8);
            puVar6 = of_get_property(uVar11,auStack_a8,&uStack_ac);
            if ((puVar6 == NULL) || (uStack_ac != 8)) {
                pcVar1 = 0x800110c;
                if (puVar6 != NULL) {
                    pcVar1 = "invalid format";
                }
                _dev_warn(iVar7,"%s %s property\n",pcVar1,auStack_a8);
            }
            else {
                uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 3) = uVar3 >> 0x10 | uVar3 << 0x10;
                uVar3 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x1c) = uVar3 >> 0x10 | uVar3 << 0x10;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-current-level");
            puVar9 = &uStack_ac;
            puVar6 = of_get_property(uVar11,auStack_a8);
            if ((puVar6 == NULL) || (uStack_ac != 8)) {
                puVar9 = 0x800110c;
                if (puVar6 != NULL) {
                    puVar9 = "invalid format";
                }
                puVar6 = auStack_a8;
                _dev_warn(iVar7,"%s %s property\n");
            }
            else {
                uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
                uVar3 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x24) = uVar3 >> 0x10 | uVar3 << 0x10;
                puVar6 = puVar8;
            }
            uVar4 = 0;
            *auVar14._8_8_ = piVar5;
            puVar8 = puVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_88) {
        return uVar4;
    }
    auVar14 = __stack_chk_fail(uVar4);
    uVar11 = auVar14._8_8_;
    iVar10 = auVar14._0_8_;
    *extraout_x18_00 = sym.sdhci_msm_dt_get_array;
    uVar12 = *(iVar10 + 0x2f0);
    iVar7 = of_get_property(uVar12,uVar11,puVar6);
    if (iVar7 == 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *puVar6;
        *puVar6 = uVar3 >> 2;
        if (uVar3 < 4) {
            _dev_err(iVar10,"%s invalid size\n",uVar11);
            uVar3 = 0xffffffea;
        }
        else {
            iVar7 = (uVar3 << 0x20) >> 0x22;
            iVar13 = devm_kmalloc(iVar10,iVar7 << 2,0xdc0);
            if (iVar13 == 0) {
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = of_property_read_variable_u32_array(uVar12,uVar11,iVar13,iVar7,0);
                if (-1 < uVar3) {
                    uVar3 = 0;
                    *puVar8 = iVar13;
                    goto code_r0x0800a348;
                }
                _dev_err(iVar10,"%s failed reading array %d\n",uVar11,uVar3);
            }
        }
    }
    *puVar6 = 0;
code_r0x0800a348:
    return uVar3;
}


// ===== sym.sdhci_msm_init_card.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003640 (size 8) =====

void sym.sdhci_msm_init_card.25097f443e31f63e0512f8d5d188b74c.cfi_jt(ulong param_1,int64_t *param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2[0x74] == 2) && (iVar1 = device_init_wakeup(param_2 + 1,1), iVar1 != 0)) {
        iVar2 = *(*param_2 + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(*param_2 + 8);
        }
        _printk(0x8001b8c,iVar2,"sdhci_msm_init_card",iVar1);
    }
    return;
}


// ===== sym.dbg_state_show.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003648 (size 8) =====

int64_t sym.dbg_state_show.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001360,*(*(param_1 + 0x98) + 0x8e8));
    return iVar1;
}


// ===== sym.show_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003650 (size 8) =====

int64_t sym.show_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000d93,*(*(param_1 + 0x98) + 0x844));
    return iVar1;
}


// ===== sym.show_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003658 (size 8) =====

int64_t sym.show_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000d93,*(*(param_1 + 0x98) + 0x840));
    return iVar1;
}


// ===== sym.__typeid__ZTSFvjP10sdhci_hostjE_global_addr @ 0x08003660 (size 8) =====

void sym.__typeid__ZTSFvjP10sdhci_hostjE_global_addr(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(param_1,*(param_2 + 0x18) + param_3);
    return;
}


// ===== sym.sdhci_msm_mci_variant_writel_relaxed.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003668 (size 8) =====

void sym.sdhci_msm_mci_variant_writel_relaxed.25097f443e31f63e0512f8d5d188b74c.cfi_jt
               (int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(param_1,*(param_2 + 0x588) + param_3);
    return;
}


// ===== sym.sdhci_msm_set_sdio_pm_flag.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003670 (size 8) =====

void sym.sdhci_msm_set_sdio_pm_flag.25097f443e31f63e0512f8d5d188b74c.cfi_jt(ulong param_1,int64_t param_2)

{
    *(param_2 + 0x608) = *(param_2 + 0x608) & 0xfffffffd;
    return;
}


// ===== sym.sdhci_msm_hw_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003678 (size 8) =====

void sym.sdhci_msm_hw_reset.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x580);
    if (*(param_1 + 0x850) == 0) {
        _dev_err(iVar3 + 0x10,"%s: failed, err = %d\n","sdhci_msm_hw_reset",0xffffffa1);
    }
    else {
        *(param_1 + 0x849) = 1;
        sym.sdhci_msm_registers_save(param_1);
        iVar1 = *(param_1 + 0x48);
        if (*(iVar1 + 0x3ea) < '\0') {
            pcVar2 = *(*(iVar1 + 0x650) + 8);
            if (1 < (pcVar2 + -0x8003690 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar2,0x8000430);
                iVar1 = *(param_1 + 0x48);
            }
            (*pcVar2)(iVar1);
            *(*(param_1 + 0x48) + 0x664) = 0;
        }
        sym.sdhci_msm_gcc_reset(iVar3 + 0x10,param_1);
        sym.sdhci_msm_registers_restore(param_1);
        *(param_1 + 0x849) = 0;
        if ((*(param_1 + 0x8e0) != 0) && (*(param_1 + 0x8e8) != '\0')) {
            ipc_log_string(*(param_1 + 0x8e0),"%s: HW reset done\n","sdhci_msm_hw_reset");
        }
    }
    return;
}


// ===== sym.sdhci_msm_dump_vendor_regs.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003680 (size 8) =====

void sym.sdhci_msm_dump_vendor_regs.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int iVar10;
    int64_t *piVar11;
    code *pcVar12;
    uint64_t uVar13;
    ulong *puVar14;
    uint64_t uVar15;
    ulong *puVar16;
    int64_t iVar17;
    uint32_t uVar18;
    ulong unaff_x30;
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
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    iVar17 = *(param_1 + 0x678);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar7 = *(*(param_1 + 0x48) + 0x78);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    if (iVar7 == 0) {
        iVar7 = *(*(param_1 + 0x48) + 8);
    }
    _printk(0x80009b6,iVar7);
    piVar11 = *(param_1 + 0x630);
    if (piVar11 == NULL) goto code_r0x08007d44;
    puVar14 = *(param_1 + 0x678);
    pcVar12 = **(param_1 + 0x670);
    if (2 < (pcVar12 + -0x8003600 >> 3 | pcVar12 << 0x3d)) goto code_r0x080080e8;
    do {
        uVar3 = (*pcVar12)(param_1,*(puVar14 + 2));
        uVar9 = 0;
        if (uVar3 < 0x49) {
            uVar9 = 0x48;
        }
        if (*(piVar11 + 0x3e) != '\0') {
            uVar9 = uVar9 | 0x900;
        }
        _printk(0x80009f5);
        pcVar12 = *(*piVar11 + 0x10);
        if (pcVar12 == NULL) {
            uVar4 = sym.readl_relaxed(piVar11[1] + uVar9 + 0x150);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
            uVar4 = (*pcVar12)(piVar11,uVar9 + 0x150);
        }
        pcVar12 = *(*piVar11 + 0x10);
        if (pcVar12 == NULL) {
            uVar5 = sym.readl_relaxed(piVar11[1] + uVar9 + 0x154);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
            uVar5 = (*pcVar12)(piVar11,uVar9 + 0x154);
        }
        _printk(0x8000e84,uVar4,uVar5);
        uVar15 = uVar9 + 0x110;
        uVar13 = 0;
        do {
            pcVar12 = *(*piVar11 + 0x10);
            if (pcVar12 == NULL) {
                uVar4 = sym.readl_relaxed(piVar11[1] + uVar15);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
                uVar4 = (*pcVar12)(piVar11,uVar15 & 0xffffffff);
            }
            _printk(0x80019ef,uVar13 & 0xffffffff,uVar4);
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 + 4;
        } while (uVar13 != 0x10);
        _printk(0x80010ef);
code_r0x08007d44:
        iVar7 = *(*(param_1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 4));
        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0xc));
        uVar6 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 8));
        _printk(0x8001409,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(param_1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x40));
        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x3c));
        uVar6 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 100));
        _printk(0x8001f06,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(param_1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x68));
        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x74));
        uVar6 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x70));
        _printk(0x800100b,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(param_1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x10));
        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x48));
        uVar6 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x4c));
        _printk(0x80018ac,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(param_1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(param_1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x44));
        uVar5 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x50));
        uVar6 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x60));
        _printk(0x80019a2,iVar7,uVar4,uVar5,uVar6);
        sym.sdhci_msm_dump_pwr_ctrl_regs(param_1);
        iVar10 = 0;
        uVar9 = 0;
        do {
            if (uVar9 < 0x3c) {
                uVar2 = 0x3b - uVar9;
                uVar1 = 0;
                if (uVar9 < 0x3d) {
                    uVar1 = 0x3c - uVar9;
                }
                if (6 < uVar2) {
                    uVar2 = 7;
                }
                uVar18 = 0;
                uVar13 = uVar9 << 2;
                do {
                    sym.writel_relaxed(iVar10 << (*(iVar17 + 0x1c) & 0x1f) | uVar18 | *(iVar17 + 0x20),
                                       *(param_1 + 0x18) + *(iVar17 + 0x18));
                    uVar4 = sym.readl_relaxed(*(param_1 + 0x18) + *(iVar17 + 0x38));
                    if (uVar1 == uVar18) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8008080);
                        (*pcVar12)();
                    }
                    if (0xef < uVar13) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(1,0x8008084);
                        (*pcVar12)();
                    }
                    *(&uStack_160 + uVar13) = uVar4;
                    uVar18 = uVar18 + 1;
                    uVar13 = uVar13 + 4;
                } while (uVar2 + 1 != uVar18);
                uVar9 = uVar9 + uVar18;
            }
            iVar10 = iVar10 + 1;
        } while (iVar10 != 7);
        piVar11 = 0x8000670;
        pcVar8 = 0xfffffffffffffffc;
        puVar16 = &uStack_158;
        do {
            iVar7 = *(*(param_1 + 0x48) + 0x78);
            if (iVar7 == 0) {
                iVar7 = *(*(param_1 + 0x48) + 8);
            }
            pcVar12 = pcVar8 + 4;
            puVar14 = puVar16 + 2;
            _printk(0x8000670,iVar7,pcVar12 & 0xffffffff,pcVar8 + 7,*(puVar16 + -1),*(puVar16 + -4),*puVar16,
                    *(puVar16 + 4));
            pcVar8 = pcVar12;
            puVar16 = puVar14;
        } while (pcVar12 < 0x38);
        *(param_1 + 0x8e8) = 0;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
code_r0x080080e8:
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar12,0x8000530);
    } while( true );
}


// ===== sym.sdhci_msm_irq_affinity_release.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003688 (size 8) =====

void sym.sdhci_msm_irq_affinity_release.25097f443e31f63e0512f8d5d188b74c.cfi_jt(void)

{
    return;
}


// ===== sym.__typeid__ZTSFvP8mmc_hostE_global_addr @ 0x08003690 (size 8) =====

void sym.__typeid__ZTSFvP8mmc_hostE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sdhci_dumpregs(param_1 + 0x7c0);
    return;
}


// ===== sym.sdhci_msm_cqe_enable.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x08003698 (size 8) =====

void sym.sdhci_msm_cqe_enable.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sdhci_cqe_enable();
    if ((*(*(param_1 + 0xdd8) + 0x3eb) >> 3 & 1) != 0) {
        uVar1 = sym.readl(*(param_1 + 0xd50) + 0x1000);
        sym.writel(uVar1 | 0x7000,*(param_1 + 0xd50) + 0x1000);
        uVar1 = sym.readl(*(param_1 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.writel(uVar1 | 0xd807100,*(param_1 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.sdhci_msm_ice_wait_bist_status(param_1 + 0xd40);
    }
    return;
}


// ===== sym.sdhci_msm_remove.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036a0 (size 8) =====

ulong sym.sdhci_msm_remove.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *extraout_x8;
    uint32_t *extraout_x8_00;
    uint32_t *extraout_x8_01;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong *puVar11;
    uint32_t unaff_w24;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = param_1 + 0x10;
    iVar6 = of_find_property(*(param_1 + 0x300),"non-removable",0);
    if ((iVar6 == 0) || (_segment.ehdr == 0)) {
        iVar6 = *(param_1 + 0xa8);
        puVar13 = *(iVar6 + 0x7b0);
        iVar4 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x30);
        sdhci_remove_host(iVar6,iVar4 == -1);
        if (*(iVar6 + 0x628) != '\0') {
            dev_pm_opp_of_remove_table(iVar10);
        }
        dev_pm_opp_put_clkname(*(iVar6 + 0x620));
        __pm_runtime_resume(iVar10,4);
        if (puVar13 != NULL) {
            puVar11 = *puVar13;
            msleep(0x32);
            if (*(puVar13 + 1) != 0) {
                uVar8 = 0;
                do {
                    iVar12 = puVar11[2];
                    iVar7 = *(puVar11[4] + 0x360);
                    if ((iVar7 != 0) && (*(puVar11[4] + 0x368) != '\0')) {
                        ipc_log_string(iVar7,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints"
                                       ,*puVar11,2,0x7fffffff);
                    }
                    uVar5 = 0xffffffff;
                    do {
                        uVar5 = cpumask_next(uVar5,puVar11);
                        *extraout_x8 = unaff_w24;
                        if (unaff_w24 <= uVar5) {
                            *(puVar11 + 3) = 0;
                            *(puVar11 + 0x29) = 1;
                            goto code_r0x08004804;
                        }
                        iVar4 = dev_pm_qos_update_request(iVar12,0x7fffffff);
                        iVar12 = iVar12 + 0x58;
                    } while (-1 < iVar4);
                    *extraout_x8_00 = unaff_w24;
code_r0x08004804:
                    uVar5 = cpumask_next(0xffffffff,puVar11);
                    if (uVar5 < unaff_w24) {
                        iVar12 = puVar11[2];
                        do {
                            if (*(iVar12 + 0x50) != 0) {
                                iVar4 = dev_pm_qos_remove_request(iVar12);
                                if (iVar4 < 0) break;
                                *extraout_x8_01 = unaff_w24;
                            }
                            iVar12 = iVar12 + 0x58;
                            uVar5 = cpumask_next(uVar5,puVar11);
                        } while (uVar5 < unaff_w24);
                    }
                    uVar8 = uVar8 + 1;
                    puVar11 = puVar11 + 6;
                } while (uVar8 < *(puVar13 + 1));
            }
            destroy_workqueue(*(iVar6 + 0x7a8));
        }
        __pm_runtime_disable(iVar10,1);
        puVar1 = param_1 + 0x208;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar5 = *puVar1;
                uVar9 = uVar5;
                if (uVar5 != uVar8) goto code_r0x080048a0;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080048a0:
        } while (uVar8 != uVar5);
        clk_bulk_disable(5,iVar6 + 0x5b8);
        clk_bulk_unprepare(5,iVar6 + 0x5b8);
        uVar9 = *(iVar6 + 0x5a8);
        if (uVar9 < 0xfffffffffffff001) {
            clk_disable(uVar9);
            clk_unprepare(uVar9);
        }
        if (*(iVar6 + 0x689) == '\0') {
            sym.sdhci_msm_bus_get_and_set_vote(iVar6,0);
            iVar10 = *(iVar6 + 0x690);
            if (*(iVar10 + 0x28) != 0) {
                icc_put();
            }
            if (*(iVar10 + 0x30) != 0) {
                icc_put();
            }
        }
        sdhci_pltfm_free(param_1);
    }
    else {
        _dev_err(iVar10,"SDHCI is not boot dev.\n");
    }
    return 0;
}


// ===== sym.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036a8 (size 8) =====

uint64_t sym.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t arg2;
    uchar *puVar7;
    uint32_t *arg1;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    char *pcVar11;
    ulong *in_x18;
    code *arg1_00;
    code *arg1_01;
    ulong uVar12;
    uint32_t *unaff_x23;
    code *unaff_x24;
    code *pcVar13;
    uint *unaff_x26;
    ulong unaff_x30;
    uint *puStack_80;
    int iStack_78;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    arg1_00 = param_1 + 0x10;
    uVar12 = *(param_1 + 0x300);
    iVar6 = of_find_property(uVar12,"non-removable",0);
    arg1 = unaff_x23;
    if (iVar6 != 0) {
        uStack_70 = 0;
        arg2 = nvmem_cell_get(arg1_00,"boot_conf");
        if (arg2 < 0xfffffffffffff001) {
            arg1 = nvmem_cell_read(arg2,&uStack_70);
            if (arg1 < 0xfffffffffffff001) {
                unaff_x24 = segment.ehdr;
                _segment.ehdr = *arg1 >> 1 & 0x1f;
                _dev_info(arg1_00,"boot_config val = %x is_bootdevice_sdhci = %x\n");
                kfree(arg1);
                nvmem_cell_put(arg2);
                if (_segment.ehdr != 0) {
                    _dev_err(arg1_00,"SDHCI is not boot dev.\n");
                    pcVar13 = NULL;
                    arg1_01 = unaff_x24;
                    goto code_r0x080039d0;
                }
            }
            else {
                _dev_warn(arg1_00,"nvmem cell read failed\n");
                nvmem_cell_put(arg2);
                arg1 = unaff_x23;
            }
        }
        else {
            _dev_warn(arg1_00,"nvmem cell get failed\n");
        }
    }
    arg2 = sdhci_pltfm_init(param_1,obj.sdhci_msm_pdata,0x370);
    if (0xfffffffffffff000 < arg2) {
        pcVar13 = arg2 & 0xffffffff;
        arg1_01 = unaff_x24;
        goto code_r0x080039d0;
    }
    *(arg2 + 0x4f8) = 0;
    *(arg2 + 0x618) = *(arg2 + 0x48);
    *(arg2 + 0x580) = param_1;
    iVar4 = sysfs_create_group(arg1_00,obj.sdhci_msm_sysfs_group);
    if (iVar4 != 0) {
        _dev_err(arg1_00,"%s: Failed to create qcom sysfs group (err = %d)\n","sdhci_msm_init_sysfs",iVar4);
    }
    iVar6 = *(*(arg2 + 0x48) + 0x78);
    if (iVar6 == 0) {
        iVar6 = *(*(arg2 + 0x48) + 8);
    }
    iVar6 = ipc_log_context_create(10,iVar6,0);
    *(arg2 + 0x8e0) = iVar6;
    if (iVar6 == 0) {
        _dev_warn(arg1_00,"IPC Log init - failed\n");
    }
    iVar6 = *(arg2 + 0x48);
    if ((*(iVar6 + 0x3d0) != 0) && ((*(iVar6 + 0x3e5) & 1) == 0)) {
        wakeup_source_unregister(*(iVar6 + 0x3d0));
        *(*(arg2 + 0x48) + 0x3d0) = 0;
        iVar6 = *(arg2 + 0x48);
    }
    uVar5 = mmc_of_parse(iVar6);
    pcVar13 = uVar5;
    if (uVar5 != 0) goto code_r0x080039c8;
    arg1 = arg2 + 0x580;
    if (*(param_1 + 0x300) == 0) {
        pcVar13 = NULL;
    }
    else {
        uVar5 = of_alias_get_id(*(param_1 + 0x300),"sdhc");
        pcVar13 = uVar5;
        if (uVar5 < 1) {
            _dev_err(arg1_00,"get slot index failed %d\n",pcVar13);
        }
        else if (uVar5 < 3) {
            *(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt + (uVar5 - 1) * 8) = arg1;
        }
    }
    puVar7 = of_device_get_match_data(arg1_00);
    if (puVar7 == NULL) {
        _dev_err(arg1_00,"Compatible string not found\n");
        goto code_r0x080039c8;
    }
    *(arg2 + 0x668) = *puVar7;
    *(arg2 + 0x669) = puVar7[1];
    *(arg2 + 0x670) = *(puVar7 + 8);
    unaff_x26 = *(puVar7 + 0x10);
    *(arg2 + 0x678) = unaff_x26;
    sdhci_get_property(param_1);
    uVar10 = *(param_1 + 0x300);
    iVar4 = of_property_read_variable_u32_array(uVar10,"qcom,ddr-config",arg2 + 0x8d8,1,0);
    if (iVar4 < 0) {
        *(arg2 + 0x8d8) = 0x80040873;
    }
    of_property_read_variable_u32_array(uVar10,"qcom,dll-config",arg2 + 0x8d4,1,0);
    iStack_78 = 0;
    *(arg2 + 0x63b) = 0xff;
    unaff_x24 = *(param_1 + 0x300);
    puStack_80 = NULL;
    iVar6 = devm_kmalloc(arg1_00,0x10,0xdc0);
    *(arg2 + 0x610) = iVar6;
    if (iVar6 == 0) {
        pcVar11 = "failed to allocate memory for vreg data\n";
code_r0x08004014:
        _dev_err(arg1_00,pcVar11);
    }
    else {
        iVar4 = sym.sdhci_msm_dt_parse_vreg_info(arg1_00,iVar6,0x8000dd4);
        if (iVar4 != 0) {
            pcVar11 = "failed parsing vdd data\n";
            goto code_r0x08004014;
        }
        iVar4 = sym.sdhci_msm_dt_parse_vreg_info(arg1_00,*(arg2 + 0x610) + 8,0x80018fd);
        if (iVar4 != 0) {
            pcVar11 = "failed parsing vdd-io data\n";
            goto code_r0x08004014;
        }
        iVar6 = of_get_property(unaff_x24,"qcom,core_3_0v_support",0);
        if (iVar6 != 0) {
            *(arg2 + 0x859) = 1;
        }
        iVar6 = of_find_property(unaff_x24,"qcom,restore-after-cx-collapse",0);
        *(arg2 + 0x868) = iVar6 != 0;
        iVar6 = of_find_property(unaff_x24,"qcom,uses_level_shifter",0);
        *(arg2 + 0x8d1) = iVar6 != 0;
        iVar6 = of_find_property(unaff_x24,"qcom,dll_lock_bist_fail_wa",0);
        uStack_70 = 0;
        *(arg2 + 0x8d2) = iVar6 != 0;
        iStack_74 = 0;
        iVar4 = sym.sdhci_msm_dt_get_array(arg1_00,0x8001ca1,&uStack_70,&iStack_74);
        if (iVar4 == 0) {
            if (iStack_74 != 5) {
                _dev_err(arg1_00,"Number of HSR entries are not matching\n");
                bVar3 = false;
                iVar6 = *(arg2 + 0x860);
                goto joined_r0x080040ac;
            }
            bVar3 = true;
            *(arg2 + 0x860) = uStack_70;
            if (*(arg2 + 0x860) == 0) goto code_r0x08003dd4;
code_r0x08003be8:
            if (bVar3) {
code_r0x08003bec:
                iVar4 = sym.sdhci_msm_dt_get_array(arg1_00,0x8001073,&puStack_80,&iStack_78);
                if (((iVar4 == 0) && (puStack_80 != NULL)) && (iStack_78 != 0)) {
                    if (iStack_78 != 2) {
                        pcVar11 = "Need max and min frequencies\n";
                        goto code_r0x08004014;
                    }
                    *(arg2 + 0x8b8) = puStack_80;
                    *(arg2 + 0x8c0) = 2;
                    *(arg2 + 0x8c4) = *puStack_80;
                    *(arg2 + 0x8c8) = puStack_80[1];
                }
                iVar6 = of_find_property(unaff_x24,"qcom,vbias-skip-wa",0);
                *(arg2 + 0x84a) = iVar6 != 0;
                uVar9 = __devm_reset_control_get(arg1_00,"core_reset",0,0,0,1);
                *(arg2 + 0x850) = uVar9;
                if (0xfffffffffffff000 < uVar9) {
                    _dev_err(arg1_00,"core_reset unavailable,err = %d\n");
                    *(arg2 + 0x850) = 0;
                }
                sym.sdhci_msm_gcc_reset(arg1_00,arg2);
                iVar6 = of_find_property(*(param_1 + 0x300),"qcom,restore-after-cx-collapse",0);
                *(arg2 + 0x868) = iVar6 != 0;
                uVar9 = devm_clk_get(arg1_00,0x8001773);
                *(arg2 + 0x5a8) = uVar9;
                arg1_01 = unaff_x24;
                if (0xfffffffffffff000 < uVar9) {
code_r0x08003cd0:
                    pcVar13 = devm_clk_get(arg1_00,"iface");
                    unaff_x24 = arg1_01;
                    if (0xfffffffffffff000 < pcVar13) {
                        _dev_err(arg1_00,"Peripheral clk setup failed (%d)\n",pcVar13 & 0xffffffff);
                        goto code_r0x080045a0;
                    }
                    *(arg2 + 0x5d0) = pcVar13;
                    pcVar13 = devm_clk_get(arg1_00,"core");
                    if (0xfffffffffffff000 < pcVar13) {
                        _dev_err(arg1_00,"SDC MMC clk setup failed (%d)\n",pcVar13 & 0xffffffff);
                        goto code_r0x080045a0;
                    }
                    *(arg2 + 0x5c0) = pcVar13;
                    uVar5 = dev_pm_opp_of_find_icc_paths(arg1_00,0);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x080045a0;
                    uVar9 = dev_pm_opp_set_clkname(arg1_00,"core");
                    *(arg2 + 0x620) = uVar9;
                    if (0xfffffffffffff000 < uVar9) {
                        pcVar13 = uVar9 & 0xffffffff;
                        goto code_r0x080045a0;
                    }
                    uVar5 = dev_pm_opp_of_add_table(arg1_00);
                    if (uVar5 != 0xffffffed) {
                        pcVar13 = uVar5;
                        if (uVar5 != 0) {
                            _dev_err(arg1_00,"Invalid OPP table in Device tree\n");
                            goto code_r0x08004588;
                        }
                        *(arg2 + 0x628) = 1;
                    }
                    iVar4 = dev_pm_opp_set_rate(arg1_00,0x7fffffff);
                    if (iVar4 != 0) {
                        _dev_warn(arg1_00,"core clock boost failed\n");
                    }
                    uVar5 = sym.sdhci_msm_setup_ice_clk(arg1,param_1);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x080045a0;
                    arg1_01 = arg2 + 0x5b8;
                    uVar8 = devm_clk_get(arg1_00,0x8001a9b);
                    uVar9 = 0;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = uVar8;
                    }
                    *(arg2 + 0x5f0) = uVar9;
                    uVar8 = devm_clk_get(arg1_00,"sleep");
                    uVar9 = 0;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = uVar8;
                    }
                    *(arg2 + 0x600) = uVar9;
                    uVar5 = sym.clk_bulk_prepare_enable(arg1_01);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x08004588;
                    iVar4 = qcom_clk_set_flags(*(arg2 + 0x5c0),3);
                    if (iVar4 != 0) {
                        _dev_err(arg1_00,"Failed to set core clk NORETAIN_MEM: %d\n",iVar4);
                    }
                    iVar4 = qcom_clk_set_flags(*(arg2 + 0x5e0),2);
                    if (iVar4 != 0) {
                        _dev_err(arg1_00,"Failed to set ice clk RETAIN_MEM: %d\n",iVar4);
                    }
                    uVar9 = devm_clk_get(arg1_00,0x8000e81);
                    *(arg2 + 0x5b0) = uVar9;
                    if (0xfffffffffffff000 < uVar9) {
                        _dev_warn(arg1_00,"TCXO clk not present (%d)\n",uVar9);
                    }
                    *(arg2 + 0x720) = 0xfffffffe0;
                    *(arg2 + 0x728) = arg2 + 0x728;
                    *(arg2 + 0x730) = arg2 + 0x728;
                    *(arg2 + 0x738) = sym.sdhci_msm_clkgate_bus_delayed_work.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                    init_timer_key(arg2 + 0x750,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                    uVar5 = sym.sdhci_msm_bus_register(arg1,param_1);
                    if (uVar5 == 0) {
                        if (*(arg2 + 0x689) == '\0') {
                            sym.sdhci_msm_bus_voting(arg2);
                        }
                    }
                    else if (*(arg2 + 0x689) == '\0') {
                        pcVar13 = uVar5;
                        _dev_err(arg1_00,"Bus registration failed (%d)\n",pcVar13);
                        goto code_r0x08004580;
                    }
                    uVar5 = sym.sdhci_msm_vreg_init(arg1_00,arg1);
                    if (uVar5 == 0) {
                        if (*(arg2 + 0x668) == '\0') {
                            uVar9 = devm_platform_ioremap_resource(param_1,1);
                            *(arg2 + 0x588) = uVar9;
                            if (0xfffffffffffff000 < uVar9) {
                                pcVar13 = uVar9 & 0xffffffff;
                                goto code_r0x08004564;
                            }
                        }
                        sym.writel_relaxed(0xa9c,*(arg2 + 0x18) + unaff_x26[0x11]);
                        uVar5 = sym.readl_relaxed(*(arg2 + 0x18) + unaff_x26[0x18]);
                        sym.writel_relaxed(uVar5 & 0xfffffbff,*(arg2 + 0x18) + unaff_x26[0x18]);
                        if (*(arg2 + 0x668) == '\0') {
                            pcVar13 = *(*(arg2 + 0x670) + 8);
                            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x8000270);
                            }
                            (*pcVar13)(1,arg2,*unaff_x26);
                            pcVar13 = **(arg2 + 0x670);
                            if (2 < (pcVar13 + -0x8003600 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar13,0x8000290);
                            }
                            uVar5 = (*pcVar13)(arg2,*unaff_x26);
                            pcVar13 = *(*(arg2 + 0x670) + 8);
                            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x80002b0);
                            }
                            (*pcVar13)(uVar5 | 0x2000,arg2,*unaff_x26);
                        }
                        iVar6 = of_find_property(uVar12,"is_rumi",0);
                        if (iVar6 != 0) {
                            sym.sdhci_msm_set_rumi_bus_mode(arg2);
                        }
                        sym.readw_relaxed(*(arg2 + 0x18) + 0xfe);
                        pcVar13 = **(arg2 + 0x670);
                        if (2 < (pcVar13 + -0x8003600 >> 3 | pcVar13 << 0x3d)) goto code_r0x080045f0;
                        goto code_r0x08004220;
                    }
                    pcVar11 = "Regulator setup failed (%d)\n";
                    goto code_r0x08004558;
                }
                uVar5 = clk_set_rate(uVar9,0x7fffffff);
                pcVar13 = uVar5;
                if (uVar5 == 0) {
                    arg1_01 = *(arg2 + 0x5a8);
                    uVar5 = clk_prepare(arg1_01);
                    pcVar13 = uVar5;
                    unaff_x24 = arg1_01;
                    if (uVar5 == 0) {
                        uVar5 = clk_enable(arg1_01);
                        if (uVar5 != 0) {
                            pcVar13 = uVar5;
                            goto code_r0x080045b8;
                        }
                        goto code_r0x08003cd0;
                    }
                }
                goto code_r0x080039c8;
            }
        }
        else {
            bVar3 = true;
            iVar6 = *(arg2 + 0x860);
joined_r0x080040ac:
            if (iVar6 != 0) goto code_r0x08003be8;
code_r0x08003dd4:
            _dev_info(arg1_00,"Failed to get dll hsr settings from dt\n");
            if (bVar3) goto code_r0x08003bec;
        }
    }
    _dev_err(arg1_00,"DT parsing error\n");
    pcVar13 = 0x1;
code_r0x080039c8:
    do {
        sdhci_pltfm_free(param_1);
        arg1_01 = unaff_x24;
code_r0x080039d0:
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return pcVar13 & 0xffffffff;
            }
            __stack_chk_fail();
code_r0x080045f0:
            __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar13,0x80002d0);
code_r0x08004220:
            uVar9 = (*pcVar13)(arg2,unaff_x26[4]);
            uVar1 = uVar9 & 0xff;
            sym.sdhci_set_default_hw_caps(arg1,arg2);
            if (((uVar9 & 0xffffffff) >> 0x1c != 0) && (uVar1 - 0x13 < 0xfffffffe)) {
                uVar5 = sym.readl_relaxed(*(arg2 + 0x18) + 0x40);
                sym.writel_relaxed(uVar5 | 0x2040000,*(arg2 + 0x18) + unaff_x26[0x15]);
            }
            uVar2 = uVar9 & 0xf0000000;
            if ((uVar2 == 0x10000000) && (0x48 < uVar1)) {
                *(arg2 + 0x688) = 1;
            }
            if (uVar2 == 0x10000000 && 0x6a < uVar1) {
                *(arg2 + 0x848) = 1;
            }
            if ((uVar2 == 0x10000000) && (0x70 < uVar1)) {
                *(arg2 + 0x8d0) = 1;
            }
            uVar5 = sym.sdhci_msm_register_vreg(arg1);
            pcVar13 = uVar5;
            if (uVar5 != 0) goto code_r0x08004580;
            sym.sdhci_msm_handle_pwr_irq(arg2,0);
            DataSynchronizationBarrier(3,3,0);
            uVar5 = platform_get_irq_byname(param_1,"pwr_irq");
            *(arg2 + 0x5a0) = uVar5;
            if (uVar5 < 0) {
                pcVar13 = uVar5;
                goto code_r0x08004564;
            }
            __init_waitqueue_head(arg2 + 0x648,"&msm_host->pwr_irq_wait",obj.sdhci_msm_init_pwr_irq_wait.__key);
            pcVar13 = *(*(arg2 + 0x670) + 8);
            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x80002f0);
            }
            (*pcVar13)(0xf,arg2,unaff_x26[0xb]);
            iVar6 = *(param_1 + 0x80);
            if (iVar6 == 0) {
                iVar6 = *arg1_00;
            }
            uVar5 = devm_request_threaded_irq
                              (arg1_00,*(arg2 + 0x5a0),0,
                               sym.sdhci_msm_pwr_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt,0x2000,iVar6,arg2);
            if (uVar5 != 0) {
                pcVar11 = "Request IRQ failed (%d)\n";
code_r0x08004558:
                pcVar13 = uVar5;
                _dev_err(arg1_00,pcVar11,pcVar13);
                goto code_r0x08004564;
            }
            *(*(arg2 + 0x618) + 0x3e4) = *(*(arg2 + 0x618) + 0x3e4) | 0x80;
            *(*(arg2 + 0x618) + 0x3e4) = *(*(arg2 + 0x618) + 0x3e4) | 0x400200;
            *(*(arg2 + 0x618) + 0x666) = 1;
            sym.sdhci_msm_setup_pm(param_1,arg1);
            *(arg2 + 0xb0) = sym.sdhci_msm_execute_tuning.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            *(arg2 + 0x98) = sym.sdhci_msm_init_card.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            *(arg2 + 0xa0) = sym.sdhci_msm_start_signal_voltage_switch.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            iVar6 = alloc_workqueue(0x8000a53,0x40008,1,"sdhci_msm_generic_swq");
            *(arg2 + 0x7a8) = iVar6;
            if (iVar6 == 0) {
                _dev_err(arg1_00,"Generic swq creation failed\n");
            }
            *(arg2 + 0x840) = 0xa000000c8;
            sym.sdhci_msm_qos_init(arg1);
            sym.sdhci_msm_init_sysfs_gating_qos(arg1_00);
            iVar6 = of_find_property(uVar12,"supports-cqe",0);
            if (iVar6 == 0) {
                uVar5 = sdhci_add_host(arg2);
            }
            else {
                uVar5 = sym.sdhci_msm_cqe_add_host(arg2,param_1);
            }
            pcVar13 = uVar5;
            if (uVar5 != 0) break;
            if (uVar2 == 0x10000000 && 0x6a < uVar1) {
                *(arg2 + 0x848) = 1;
            }
            *(arg2 + 0x858) = 1;
            uVar10 = ktime_get_mono_fast_ns();
            *(param_1 + 0x228) = uVar10;
            __pm_runtime_suspend(arg1_00,0xd);
            iVar6 = *(*(arg2 + 0x618) + 0x480);
            if ((iVar6 == 0) || (*(iVar6 + 0x3a0) != 2)) {
                pcVar13 = NULL;
            }
            else {
                tracepoint_probe_register
                          (__tracepoint_android_vh_mmc_sdio_pm_flag_set,
                           sym.sdhci_msm_set_sdio_pm_flag.25097f443e31f63e0512f8d5d188b74c.cfi_jt,0);
                pcVar13 = NULL;
            }
        }
        __pm_runtime_disable(arg1_00,1);
        __pm_runtime_set_status(arg1_00,2);
        sym.pm_runtime_put_noidle(arg1_00);
code_r0x08004564:
        if (*(arg1 + 0x109) == '\0') {
            sym.sdhci_msm_bus_get_and_set_vote(arg2,0);
            sym.sdhci_msm_bus_unregister(arg1);
        }
code_r0x08004580:
        sym.clk_bulk_disable_unprepare(arg1_01);
code_r0x08004588:
        if (*(arg2 + 0x628) != '\0') {
            dev_pm_opp_of_remove_table(arg1_00);
        }
        dev_pm_opp_put_clkname(*(arg2 + 0x620));
        unaff_x24 = arg1_01;
code_r0x080045a0:
        arg1_01 = *(arg2 + 0x5a8);
        arg1_00 = arg1_01;
        if (arg1_01 < 0xfffffffffffff001) {
            clk_disable(arg1_01);
code_r0x080045b8:
            clk_unprepare(arg1_01);
        }
    } while( true );
}


// ===== sym.sdhci_msm_irq_affinity_notify.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036b0 (size 8) =====

void sym.sdhci_msm_irq_affinity_notify.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x6;
    uint uVar5;
    uint64_t uVar6;
    ulong extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(param_1 + -8);
    if (puVar10 != NULL) {
        uVar6 = *param_2;
        uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar5 = 0x20;
        if (uVar6 != 0) {
            uVar5 = LZCOUNT((uVar1 >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        iVar7 = *(param_1 + -0x238);
        *(puVar10 + 0xc) = uVar5;
        if (*(iVar7 + 0x21c) != 2) {
            if (*(puVar10 + 1) != 0) {
                uVar8 = 0;
                puVar9 = *puVar10;
                do {
                    iVar7 = puVar9[2];
                    iVar4 = *(puVar9[4] + 0x360);
                    if ((iVar4 != 0) && (*(puVar9[4] + 0x368) != '\0')) {
                        ipc_log_string(iVar4,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints"
                                       ,*puVar9,2,0x7fffffff);
                    }
                    uVar2 = 0xffffffff;
                    do {
                        uVar2 = cpumask_next(uVar2,puVar9);
                        *in_x6 = extraout_x8;
                        if (extraout_x8 <= uVar2) {
                            *(puVar9 + 3) = 0;
                            *(puVar9 + 0x29) = 1;
                            goto code_r0x0800b040;
                        }
                        iVar3 = dev_pm_qos_update_request(iVar7,0x7fffffff);
                        iVar7 = iVar7 + 0x58;
                    } while (-1 < iVar3);
                    iVar7 = *(*(param_1 + -0x1a0) + 0x78);
                    if (iVar7 == 0) {
                        iVar7 = *(*(param_1 + -0x1a0) + 8);
                    }
                    _printk(0x80016f1,iVar7,iVar3,uVar8);
code_r0x0800b040:
                    uVar8 = uVar8 + 1;
                    puVar9 = puVar9 + 6;
                } while (uVar8 < *(puVar10 + 1));
            }
            sym.sdhci_msm_vote_pmqos(*(param_1 + -0x1a0),*(*(param_1 + -8) + 0xc));
        }
    }
    return;
}


// ===== sym.sdhci_msm_get_max_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036b8 (size 8) =====

void sym.sdhci_msm_get_max_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    clk_round_rate(*(param_1 + 0x5c0),0xffffffffffffffff);
    return;
}


// ===== sym.sdhci_msm_get_max_timeout_count.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036c0 (size 8) =====

ulong sym.sdhci_msm_get_max_timeout_count.25097f443e31f63e0512f8d5d188b74c.cfi_jt(void)

{
    return 0;
}


// ===== sym.sdhci_msm_get_min_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036c8 (size 8) =====

ulong sym.sdhci_msm_get_min_clock.25097f443e31f63e0512f8d5d188b74c.cfi_jt(void)

{
    return 400000;
}


// ===== sym.sdhci_msm_start_signal_voltage_switch.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036d0 (size 8) =====

ulong sym.sdhci_msm_start_signal_voltage_switch.25097f443e31f63e0512f8d5d188b74c.cfi_jt(ulong *param_1,int64_t param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < *(param_1 + 0x157)) {
        puVar1 = param_1 + 0xf8;
        pcVar5 = *(param_1[0x100] + 8);
        if (pcVar5 == NULL) {
            uVar2 = sym.readw(param_1[0xfb] + 0x3e);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar5,0x80003f0);
            uVar2 = (*pcVar5)(puVar1,0x3e);
        }
        if (*(param_2 + 0x11) == '\x01') {
            if (-1 < *(param_1 + 0xab5)) {
                return 0xffffffea;
            }
            uVar2 = uVar2 | 8;
        }
        else {
            if ((*(param_2 + 0x11) != '\0') || ((*(param_1 + 0xab5) >> 6 & 1) == 0)) {
                return 0xffffffea;
            }
            uVar2 = uVar2 & 0xfffffff7;
        }
        pcVar5 = *(param_1[0x100] + 0x20);
        if (pcVar5 == NULL) {
            sym.writew(uVar2,param_1[0xfb] + 0x3e);
        }
        else {
            if (pcVar5 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
                __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar5,0x80003d0);
            }
            (*pcVar5)(puVar1,uVar2,0x3e);
        }
        usleep_range_state(5000,0x157c,2);
        pcVar5 = *(param_1[0x100] + 8);
        if (pcVar5 == NULL) {
            uVar3 = sym.readw(param_1[0xfb] + 0x3e);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar5,0x80003f0);
            uVar3 = (*pcVar5)(puVar1,0x3e);
        }
        if (((uVar3 ^ uVar2) >> 3 & 1) != 0) {
            iVar4 = param_1[0xf];
            if (iVar4 == 0) {
                iVar4 = param_1[1];
            }
            _dev_warn(*param_1,"%s: Regulator output did not became stable\n",iVar4);
            return 0xfffffff5;
        }
    }
    return 0;
}


// ===== sym.pm_runtime_force_resume.cfi_jt @ 0x080036d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.pm_runtime_force_suspend.cfi_jt @ 0x080036e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.pm_runtime_force_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sdhci_msm_runtime_resume.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036e8 (size 8) =====

int sym.sdhci_msm_runtime_resume.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    iVar7 = *(arg1 + 0x7b0);
    if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1 + 0x8e0),"%s: Enter\n","sdhci_msm_runtime_resume");
    }
    uVar5 = cancel_delayed_work_sync(arg1 + 0x720);
    if ((uVar5 & 1) == 0) {
        uVar5 = *(arg1 + 0x608);
        cVar1 = *(*(arg1 + 0x48) + 0x41f);
        if (cVar1 == '\0') {
            uVar5 = uVar5 >> 3;
        }
        else if (cVar1 == '\x02') {
            uVar5 = uVar5 >> 1;
        }
        sym.sdhci_msm_bus_get_and_set_vote(arg1,uVar5);
        dev_pm_opp_set_rate(param_1,*(arg1 + 0x608));
        iVar6 = arg1 + 0x5b8;
        iVar3 = clk_bulk_prepare(5,iVar6);
        if (iVar3 == 0) {
            iVar3 = clk_bulk_enable(5,iVar6);
            if (iVar3 == 0) {
                sym.sdhci_msm_registers_restore(arg1);
                iVar6 = *(arg1 + 0x678);
                if (((*(arg1 + 0x639) != '\0') || ((*(*(arg1 + 0x48) + 0x423) & 1) != 0)) &&
                   (*(*(arg1 + 0x48) + 0x420) == '\n')) {
                    uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x68));
                    sym.writel_relaxed(uVar4 | 2,*(arg1 + 0x18) + *(iVar6 + 0x68));
                    DataSynchronizationBarrier(3,2,0);
                    __const_udelay(0x218e);
                    uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x68));
                    sym.writel_relaxed(uVar4 & 0xfffffffd,*(arg1 + 0x18) + *(iVar6 + 0x68));
                }
                if ((*(arg1 + 0x669) != '\0') && (*(arg1 + 0x608) != 0)) {
                    uVar2 = *(*(arg1 + 0x48) + 0x420);
                    if ((((uVar2 == 5) && ((*(arg1 + 0x2f4) >> 4 & 1) != 0)) ||
                        ((((100000000 < *(arg1 + 0x30c) && (uVar2 < 0xb)) && ((1 << (uVar2 & 0x1f) & 0x640U) != 0)) &&
                         (*(*(arg1 + 0x48) + 0x423) == '\0')))) && (iVar3 = sym.msm_init_cm_dll(arg1,0), iVar3 == 0))
                    {
                        sym.msm_config_cm_dll_phase(arg1,*(arg1 + 0x63b));
                    }
                }
                goto code_r0x0800bc9c;
            }
            clk_bulk_unprepare(5,iVar6);
        }
        _dev_err(param_1,"Failed to enable clocks %d\n",iVar3);
        sym.sdhci_msm_bus_get_and_set_vote(arg1,0);
    }
    else {
code_r0x0800bc9c:
        if ((iVar7 == 0) ||
           (sym.sdhci_msm_vote_pmqos(*(arg1 + 0x618),*(*(arg1 + 0x7b0) + 0xc)),
           (*(*(arg1 + 0x618) + 0x3eb) >> 3 & 1) == 0)) {
            iVar3 = 0;
        }
        else {
            iVar3 = sym.sdhci_msm_ice_wait_bist_status(arg1 + 0x580);
        }
    }
    return iVar3;
}


// ===== sym.sdhci_msm_wrapper_suspend_late.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036f0 (size 8) =====

ulong sym.sdhci_msm_wrapper_suspend_late.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(param_1 + 0x2f0),"non-removable",0);
    if ((iVar1 == 0) || (_segment.ehdr == 0)) {
        iVar1 = *(param_1 + 0x98);
        if ((*(iVar1 + 0x8e0) != 0) && (*(iVar1 + 0x8e8) != '\0')) {
            ipc_log_string(*(iVar1 + 0x8e0),"%s: Enter\n","sdhci_msm_suspend_late");
        }
        flush_delayed_work(iVar1 + 0x720);
    }
    else {
        _dev_info(param_1,"SDHCI is not boot dev.\n");
    }
    return 0;
}


// ===== sym.sdhci_msm_runtime_suspend.25097f443e31f63e0512f8d5d188b74c.cfi_jt @ 0x080036f8 (size 8) =====

ulong sym.sdhci_msm_runtime_suspend.25097f443e31f63e0512f8d5d188b74c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x6;
    ulong extraout_x8;
    ulong *in_x18;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_1 + 0x98);
    iVar6 = *(iVar9 + 0x7b0);
    if ((*(iVar9 + 0x8e0) != 0) && (*(iVar9 + 0x8e8) != '\0')) {
        ipc_log_string(*(iVar9 + 0x8e0),"%s: Enter\n","sdhci_msm_runtime_suspend");
    }
    if (((iVar6 != 0) && (puVar10 = *(iVar9 + 0x7b0), puVar10 != NULL)) && (*(puVar10 + 1) != 0)) {
        uVar5 = 0;
        puVar8 = *puVar10;
        do {
            if (*(puVar8 + 5) == '\0') break;
            iVar6 = puVar8[2];
            iVar3 = *(puVar8[4] + 0x360);
            if ((iVar3 != 0) && (*(puVar8[4] + 0x368) != '\0')) {
                ipc_log_string(iVar3,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints",
                               *puVar8,2,0x7fffffff);
            }
            uVar1 = 0xffffffff;
            do {
                uVar1 = cpumask_next(uVar1,puVar8);
                *in_x6 = extraout_x8;
                if (extraout_x8 <= uVar1) {
                    *(puVar8 + 3) = 0;
                    *(puVar8 + 0x29) = 1;
                    goto code_r0x0800ba8c;
                }
                iVar2 = dev_pm_qos_update_request(iVar6,0x7fffffff);
                iVar6 = iVar6 + 0x58;
            } while (-1 < iVar2);
            _dev_err(*(iVar9 + 0x580) + 0x10,"Failed (%d) removing qos vote(%d)\n",iVar2,uVar5);
code_r0x0800ba8c:
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 6;
        } while (uVar5 < *(puVar10 + 1));
    }
    uVar7 = *(iVar9 + 0x7a8);
    uVar4 = __msecs_to_jiffies(*(iVar9 + 0x840));
    queue_delayed_work_on(0x20,uVar7,iVar9 + 0x720,uVar4);
    return 0;
}


// ===== sym.sdhci_msm_ice_disable @ 0x08003700 (size 12) =====

void sym.sdhci_msm_ice_disable(void)

{
    return;
}


// ===== sym.sdhci_msm_cqe_sdhci_dumpregs @ 0x0800370c (size 40) =====

void sym.sdhci_msm_cqe_sdhci_dumpregs(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sdhci_dumpregs(arg1 + 0x7c0);
    return;
}


// ===== sym.sdhci_msm_mci_variant_readl_relaxed @ 0x08003734 (size 44) =====

void sym.sdhci_msm_mci_variant_readl_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed(*(arg1 + 0x588) + (arg2 & 0xffffffffU));
    return;
}


// ===== sym.sdhci_msm_mci_variant_writel_relaxed @ 0x08003760 (size 44) =====

void sym.sdhci_msm_mci_variant_writel_relaxed(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(arg1,*(arg2 + 0x588) + (arg3 & 0xffffffffU));
    return;
}


// ===== sym.readl_relaxed @ 0x0800378c (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003790);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80037c4);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x080037fc (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003818);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003840);
    return;
}


// ===== sym.sdhci_msm_v5_variant_readl_relaxed @ 0x08003874 (size 44) =====

void sym.sdhci_msm_v5_variant_readl_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.readl_relaxed(*(arg1 + 0x18) + (arg2 & 0xffffffffU));
    return;
}


// ===== sym.sdhci_msm_v5_variant_writel_relaxed @ 0x080038a0 (size 44) =====

void sym.sdhci_msm_v5_variant_writel_relaxed(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(arg1,*(arg2 + 0x18) + (arg3 & 0xffffffffU));
    return;
}


// ===== sym.sdhci_msm_probe @ 0x080038cc (size 3552) =====

uint64_t sym.sdhci_msm_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t arg2;
    uchar *puVar7;
    uint32_t *arg1_00;
    uint64_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    char *pcVar11;
    ulong *in_x18;
    code *arg1_01;
    code *arg1_02;
    ulong uVar12;
    uint32_t *unaff_x23;
    code *unaff_x24;
    code *pcVar13;
    uint *unaff_x26;
    ulong unaff_x30;
    uint *puStack_80;
    int iStack_78;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    arg1_01 = arg1 + 0x10;
    uVar12 = *(arg1 + 0x300);
    iVar6 = of_find_property(uVar12,"non-removable",0);
    arg1_00 = unaff_x23;
    if (iVar6 != 0) {
        uStack_70 = 0;
        arg2 = nvmem_cell_get(arg1_01,"boot_conf");
        if (arg2 < 0xfffffffffffff001) {
            arg1_00 = nvmem_cell_read(arg2,&uStack_70);
            if (arg1_00 < 0xfffffffffffff001) {
                unaff_x24 = segment.ehdr;
                _segment.ehdr = *arg1_00 >> 1 & 0x1f;
                _dev_info(arg1_01,"boot_config val = %x is_bootdevice_sdhci = %x\n");
                kfree(arg1_00);
                nvmem_cell_put(arg2);
                if (_segment.ehdr != 0) {
                    _dev_err(arg1_01,"SDHCI is not boot dev.\n");
                    pcVar13 = NULL;
                    arg1_02 = unaff_x24;
                    goto code_r0x080039d0;
                }
            }
            else {
                _dev_warn(arg1_01,"nvmem cell read failed\n");
                nvmem_cell_put(arg2);
                arg1_00 = unaff_x23;
            }
        }
        else {
            _dev_warn(arg1_01,"nvmem cell get failed\n");
        }
    }
    arg2 = sdhci_pltfm_init(arg1,obj.sdhci_msm_pdata,0x370);
    if (0xfffffffffffff000 < arg2) {
        pcVar13 = arg2 & 0xffffffff;
        arg1_02 = unaff_x24;
        goto code_r0x080039d0;
    }
    *(arg2 + 0x4f8) = 0;
    *(arg2 + 0x618) = *(arg2 + 0x48);
    *(arg2 + 0x580) = arg1;
    iVar4 = sysfs_create_group(arg1_01,obj.sdhci_msm_sysfs_group);
    if (iVar4 != 0) {
        _dev_err(arg1_01,"%s: Failed to create qcom sysfs group (err = %d)\n","sdhci_msm_init_sysfs",iVar4);
    }
    iVar6 = *(*(arg2 + 0x48) + 0x78);
    if (iVar6 == 0) {
        iVar6 = *(*(arg2 + 0x48) + 8);
    }
    iVar6 = ipc_log_context_create(10,iVar6,0);
    *(arg2 + 0x8e0) = iVar6;
    if (iVar6 == 0) {
        _dev_warn(arg1_01,"IPC Log init - failed\n");
    }
    iVar6 = *(arg2 + 0x48);
    if ((*(iVar6 + 0x3d0) != 0) && ((*(iVar6 + 0x3e5) & 1) == 0)) {
        wakeup_source_unregister(*(iVar6 + 0x3d0));
        *(*(arg2 + 0x48) + 0x3d0) = 0;
        iVar6 = *(arg2 + 0x48);
    }
    uVar5 = mmc_of_parse(iVar6);
    pcVar13 = uVar5;
    if (uVar5 != 0) goto code_r0x080039c8;
    arg1_00 = arg2 + 0x580;
    if (*(arg1 + 0x300) == 0) {
        pcVar13 = NULL;
    }
    else {
        uVar5 = of_alias_get_id(*(arg1 + 0x300),"sdhc");
        pcVar13 = uVar5;
        if (uVar5 < 1) {
            _dev_err(arg1_01,"get slot index failed %d\n",pcVar13);
        }
        else if (uVar5 < 3) {
            *(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt + (uVar5 - 1) * 8) = arg1_00;
        }
    }
    puVar7 = of_device_get_match_data(arg1_01);
    if (puVar7 == NULL) {
        _dev_err(arg1_01,"Compatible string not found\n");
        goto code_r0x080039c8;
    }
    *(arg2 + 0x668) = *puVar7;
    *(arg2 + 0x669) = puVar7[1];
    *(arg2 + 0x670) = *(puVar7 + 8);
    unaff_x26 = *(puVar7 + 0x10);
    *(arg2 + 0x678) = unaff_x26;
    sdhci_get_property(arg1);
    uVar10 = *(arg1 + 0x300);
    iVar4 = of_property_read_variable_u32_array(uVar10,"qcom,ddr-config",arg2 + 0x8d8,1,0);
    if (iVar4 < 0) {
        *(arg2 + 0x8d8) = 0x80040873;
    }
    of_property_read_variable_u32_array(uVar10,"qcom,dll-config",arg2 + 0x8d4,1,0);
    iStack_78 = 0;
    *(arg2 + 0x63b) = 0xff;
    unaff_x24 = *(arg1 + 0x300);
    puStack_80 = NULL;
    iVar6 = devm_kmalloc(arg1_01,0x10,0xdc0);
    *(arg2 + 0x610) = iVar6;
    if (iVar6 == 0) {
        pcVar11 = "failed to allocate memory for vreg data\n";
code_r0x08004014:
        _dev_err(arg1_01,pcVar11);
    }
    else {
        iVar4 = sym.sdhci_msm_dt_parse_vreg_info(arg1_01,iVar6,0x8000dd4);
        if (iVar4 != 0) {
            pcVar11 = "failed parsing vdd data\n";
            goto code_r0x08004014;
        }
        iVar4 = sym.sdhci_msm_dt_parse_vreg_info(arg1_01,*(arg2 + 0x610) + 8,0x80018fd);
        if (iVar4 != 0) {
            pcVar11 = "failed parsing vdd-io data\n";
            goto code_r0x08004014;
        }
        iVar6 = of_get_property(unaff_x24,"qcom,core_3_0v_support",0);
        if (iVar6 != 0) {
            *(arg2 + 0x859) = 1;
        }
        iVar6 = of_find_property(unaff_x24,"qcom,restore-after-cx-collapse",0);
        *(arg2 + 0x868) = iVar6 != 0;
        iVar6 = of_find_property(unaff_x24,"qcom,uses_level_shifter",0);
        *(arg2 + 0x8d1) = iVar6 != 0;
        iVar6 = of_find_property(unaff_x24,"qcom,dll_lock_bist_fail_wa",0);
        uStack_70 = 0;
        *(arg2 + 0x8d2) = iVar6 != 0;
        iStack_74 = 0;
        iVar4 = sym.sdhci_msm_dt_get_array(arg1_01,0x8001ca1,&uStack_70,&iStack_74);
        if (iVar4 == 0) {
            if (iStack_74 != 5) {
                _dev_err(arg1_01,"Number of HSR entries are not matching\n");
                bVar3 = false;
                iVar6 = *(arg2 + 0x860);
                goto joined_r0x080040ac;
            }
            bVar3 = true;
            *(arg2 + 0x860) = uStack_70;
            if (*(arg2 + 0x860) == 0) goto code_r0x08003dd4;
code_r0x08003be8:
            if (bVar3) {
code_r0x08003bec:
                iVar4 = sym.sdhci_msm_dt_get_array(arg1_01,0x8001073,&puStack_80,&iStack_78);
                if (((iVar4 == 0) && (puStack_80 != NULL)) && (iStack_78 != 0)) {
                    if (iStack_78 != 2) {
                        pcVar11 = "Need max and min frequencies\n";
                        goto code_r0x08004014;
                    }
                    *(arg2 + 0x8b8) = puStack_80;
                    *(arg2 + 0x8c0) = 2;
                    *(arg2 + 0x8c4) = *puStack_80;
                    *(arg2 + 0x8c8) = puStack_80[1];
                }
                iVar6 = of_find_property(unaff_x24,"qcom,vbias-skip-wa",0);
                *(arg2 + 0x84a) = iVar6 != 0;
                uVar9 = __devm_reset_control_get(arg1_01,"core_reset",0,0,0,1);
                *(arg2 + 0x850) = uVar9;
                if (0xfffffffffffff000 < uVar9) {
                    _dev_err(arg1_01,"core_reset unavailable,err = %d\n");
                    *(arg2 + 0x850) = 0;
                }
                sym.sdhci_msm_gcc_reset(arg1_01,arg2);
                iVar6 = of_find_property(*(arg1 + 0x300),"qcom,restore-after-cx-collapse",0);
                *(arg2 + 0x868) = iVar6 != 0;
                uVar9 = devm_clk_get(arg1_01,0x8001773);
                *(arg2 + 0x5a8) = uVar9;
                arg1_02 = unaff_x24;
                if (0xfffffffffffff000 < uVar9) {
code_r0x08003cd0:
                    pcVar13 = devm_clk_get(arg1_01,"iface");
                    unaff_x24 = arg1_02;
                    if (0xfffffffffffff000 < pcVar13) {
                        _dev_err(arg1_01,"Peripheral clk setup failed (%d)\n",pcVar13 & 0xffffffff);
                        goto code_r0x080045a0;
                    }
                    *(arg2 + 0x5d0) = pcVar13;
                    pcVar13 = devm_clk_get(arg1_01,"core");
                    if (0xfffffffffffff000 < pcVar13) {
                        _dev_err(arg1_01,"SDC MMC clk setup failed (%d)\n",pcVar13 & 0xffffffff);
                        goto code_r0x080045a0;
                    }
                    *(arg2 + 0x5c0) = pcVar13;
                    uVar5 = dev_pm_opp_of_find_icc_paths(arg1_01,0);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x080045a0;
                    uVar9 = dev_pm_opp_set_clkname(arg1_01,"core");
                    *(arg2 + 0x620) = uVar9;
                    if (0xfffffffffffff000 < uVar9) {
                        pcVar13 = uVar9 & 0xffffffff;
                        goto code_r0x080045a0;
                    }
                    uVar5 = dev_pm_opp_of_add_table(arg1_01);
                    if (uVar5 != 0xffffffed) {
                        pcVar13 = uVar5;
                        if (uVar5 != 0) {
                            _dev_err(arg1_01,"Invalid OPP table in Device tree\n");
                            goto code_r0x08004588;
                        }
                        *(arg2 + 0x628) = 1;
                    }
                    iVar4 = dev_pm_opp_set_rate(arg1_01,0x7fffffff);
                    if (iVar4 != 0) {
                        _dev_warn(arg1_01,"core clock boost failed\n");
                    }
                    uVar5 = sym.sdhci_msm_setup_ice_clk(arg1_00,arg1);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x080045a0;
                    arg1_02 = arg2 + 0x5b8;
                    uVar8 = devm_clk_get(arg1_01,0x8001a9b);
                    uVar9 = 0;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = uVar8;
                    }
                    *(arg2 + 0x5f0) = uVar9;
                    uVar8 = devm_clk_get(arg1_01,"sleep");
                    uVar9 = 0;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar9 = uVar8;
                    }
                    *(arg2 + 0x600) = uVar9;
                    uVar5 = sym.clk_bulk_prepare_enable(arg1_02);
                    pcVar13 = uVar5;
                    if (uVar5 != 0) goto code_r0x08004588;
                    iVar4 = qcom_clk_set_flags(*(arg2 + 0x5c0),3);
                    if (iVar4 != 0) {
                        _dev_err(arg1_01,"Failed to set core clk NORETAIN_MEM: %d\n",iVar4);
                    }
                    iVar4 = qcom_clk_set_flags(*(arg2 + 0x5e0),2);
                    if (iVar4 != 0) {
                        _dev_err(arg1_01,"Failed to set ice clk RETAIN_MEM: %d\n",iVar4);
                    }
                    uVar9 = devm_clk_get(arg1_01,0x8000e81);
                    *(arg2 + 0x5b0) = uVar9;
                    if (0xfffffffffffff000 < uVar9) {
                        _dev_warn(arg1_01,"TCXO clk not present (%d)\n",uVar9);
                    }
                    *(arg2 + 0x720) = 0xfffffffe0;
                    *(arg2 + 0x728) = arg2 + 0x728;
                    *(arg2 + 0x730) = arg2 + 0x728;
                    *(arg2 + 0x738) = sym.sdhci_msm_clkgate_bus_delayed_work.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                    init_timer_key(arg2 + 0x750,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                    uVar5 = sym.sdhci_msm_bus_register(arg1_00,arg1);
                    if (uVar5 == 0) {
                        if (*(arg2 + 0x689) == '\0') {
                            sym.sdhci_msm_bus_voting(arg2);
                        }
                    }
                    else if (*(arg2 + 0x689) == '\0') {
                        pcVar13 = uVar5;
                        _dev_err(arg1_01,"Bus registration failed (%d)\n",pcVar13);
                        goto code_r0x08004580;
                    }
                    uVar5 = sym.sdhci_msm_vreg_init(arg1_01,arg1_00);
                    if (uVar5 == 0) {
                        if (*(arg2 + 0x668) == '\0') {
                            uVar9 = devm_platform_ioremap_resource(arg1,1);
                            *(arg2 + 0x588) = uVar9;
                            if (0xfffffffffffff000 < uVar9) {
                                pcVar13 = uVar9 & 0xffffffff;
                                goto code_r0x08004564;
                            }
                        }
                        sym.writel_relaxed(0xa9c,*(arg2 + 0x18) + unaff_x26[0x11]);
                        uVar5 = sym.readl_relaxed(*(arg2 + 0x18) + unaff_x26[0x18]);
                        sym.writel_relaxed(uVar5 & 0xfffffbff,*(arg2 + 0x18) + unaff_x26[0x18]);
                        if (*(arg2 + 0x668) == '\0') {
                            pcVar13 = *(*(arg2 + 0x670) + 8);
                            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x8000270);
                            }
                            (*pcVar13)(1,arg2,*unaff_x26);
                            pcVar13 = **(arg2 + 0x670);
                            if (2 < (pcVar13 + -0x8003600 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar13,0x8000290);
                            }
                            uVar5 = (*pcVar13)(arg2,*unaff_x26);
                            pcVar13 = *(*(arg2 + 0x670) + 8);
                            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x80002b0);
                            }
                            (*pcVar13)(uVar5 | 0x2000,arg2,*unaff_x26);
                        }
                        iVar6 = of_find_property(uVar12,"is_rumi",0);
                        if (iVar6 != 0) {
                            sym.sdhci_msm_set_rumi_bus_mode(arg2);
                        }
                        sym.readw_relaxed(*(arg2 + 0x18) + 0xfe);
                        pcVar13 = **(arg2 + 0x670);
                        if (2 < (pcVar13 + -0x8003600 >> 3 | pcVar13 << 0x3d)) goto code_r0x080045f0;
                        goto code_r0x08004220;
                    }
                    pcVar11 = "Regulator setup failed (%d)\n";
                    goto code_r0x08004558;
                }
                uVar5 = clk_set_rate(uVar9,0x7fffffff);
                pcVar13 = uVar5;
                if (uVar5 == 0) {
                    arg1_02 = *(arg2 + 0x5a8);
                    uVar5 = clk_prepare(arg1_02);
                    pcVar13 = uVar5;
                    unaff_x24 = arg1_02;
                    if (uVar5 == 0) {
                        uVar5 = clk_enable(arg1_02);
                        if (uVar5 != 0) {
                            pcVar13 = uVar5;
                            goto code_r0x080045b8;
                        }
                        goto code_r0x08003cd0;
                    }
                }
                goto code_r0x080039c8;
            }
        }
        else {
            bVar3 = true;
            iVar6 = *(arg2 + 0x860);
joined_r0x080040ac:
            if (iVar6 != 0) goto code_r0x08003be8;
code_r0x08003dd4:
            _dev_info(arg1_01,"Failed to get dll hsr settings from dt\n");
            if (bVar3) goto code_r0x08003bec;
        }
    }
    _dev_err(arg1_01,"DT parsing error\n");
    pcVar13 = 0x1;
code_r0x080039c8:
    do {
        sdhci_pltfm_free(arg1);
        arg1_02 = unaff_x24;
code_r0x080039d0:
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return pcVar13 & 0xffffffff;
            }
            __stack_chk_fail();
code_r0x080045f0:
            __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar13,0x80002d0);
code_r0x08004220:
            uVar9 = (*pcVar13)(arg2,unaff_x26[4]);
            uVar1 = uVar9 & 0xff;
            sym.sdhci_set_default_hw_caps(arg1_00,arg2);
            if (((uVar9 & 0xffffffff) >> 0x1c != 0) && (uVar1 - 0x13 < 0xfffffffe)) {
                uVar5 = sym.readl_relaxed(*(arg2 + 0x18) + 0x40);
                sym.writel_relaxed(uVar5 | 0x2040000,*(arg2 + 0x18) + unaff_x26[0x15]);
            }
            uVar2 = uVar9 & 0xf0000000;
            if ((uVar2 == 0x10000000) && (0x48 < uVar1)) {
                *(arg2 + 0x688) = 1;
            }
            if (uVar2 == 0x10000000 && 0x6a < uVar1) {
                *(arg2 + 0x848) = 1;
            }
            if ((uVar2 == 0x10000000) && (0x70 < uVar1)) {
                *(arg2 + 0x8d0) = 1;
            }
            uVar5 = sym.sdhci_msm_register_vreg(arg1_00);
            pcVar13 = uVar5;
            if (uVar5 != 0) goto code_r0x08004580;
            sym.sdhci_msm_handle_pwr_irq(arg2,0);
            DataSynchronizationBarrier(3,3,0);
            uVar5 = platform_get_irq_byname(arg1,"pwr_irq");
            *(arg2 + 0x5a0) = uVar5;
            if (uVar5 < 0) {
                pcVar13 = uVar5;
                goto code_r0x08004564;
            }
            __init_waitqueue_head(arg2 + 0x648,"&msm_host->pwr_irq_wait",obj.sdhci_msm_init_pwr_irq_wait.__key);
            pcVar13 = *(*(arg2 + 0x670) + 8);
            if (1 < (pcVar13 + -0x8003660 >> 3 | pcVar13 << 0x3d)) {
                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar13,0x80002f0);
            }
            (*pcVar13)(0xf,arg2,unaff_x26[0xb]);
            iVar6 = *(arg1 + 0x80);
            if (iVar6 == 0) {
                iVar6 = *arg1_01;
            }
            uVar5 = devm_request_threaded_irq
                              (arg1_01,*(arg2 + 0x5a0),0,
                               sym.sdhci_msm_pwr_irq.25097f443e31f63e0512f8d5d188b74c.cfi_jt,0x2000,iVar6,arg2);
            if (uVar5 != 0) {
                pcVar11 = "Request IRQ failed (%d)\n";
code_r0x08004558:
                pcVar13 = uVar5;
                _dev_err(arg1_01,pcVar11,pcVar13);
                goto code_r0x08004564;
            }
            *(*(arg2 + 0x618) + 0x3e4) = *(*(arg2 + 0x618) + 0x3e4) | 0x80;
            *(*(arg2 + 0x618) + 0x3e4) = *(*(arg2 + 0x618) + 0x3e4) | 0x400200;
            *(*(arg2 + 0x618) + 0x666) = 1;
            sym.sdhci_msm_setup_pm(arg1,arg1_00);
            *(arg2 + 0xb0) = sym.sdhci_msm_execute_tuning.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            *(arg2 + 0x98) = sym.sdhci_msm_init_card.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            *(arg2 + 0xa0) = sym.sdhci_msm_start_signal_voltage_switch.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
            iVar6 = alloc_workqueue(0x8000a53,0x40008,1,"sdhci_msm_generic_swq");
            *(arg2 + 0x7a8) = iVar6;
            if (iVar6 == 0) {
                _dev_err(arg1_01,"Generic swq creation failed\n");
            }
            *(arg2 + 0x840) = 0xa000000c8;
            sym.sdhci_msm_qos_init(arg1_00);
            sym.sdhci_msm_init_sysfs_gating_qos(arg1_01);
            iVar6 = of_find_property(uVar12,"supports-cqe",0);
            if (iVar6 == 0) {
                uVar5 = sdhci_add_host(arg2);
            }
            else {
                uVar5 = sym.sdhci_msm_cqe_add_host(arg2,arg1);
            }
            pcVar13 = uVar5;
            if (uVar5 != 0) break;
            if (uVar2 == 0x10000000 && 0x6a < uVar1) {
                *(arg2 + 0x848) = 1;
            }
            *(arg2 + 0x858) = 1;
            uVar10 = ktime_get_mono_fast_ns();
            *(arg1 + 0x228) = uVar10;
            __pm_runtime_suspend(arg1_01,0xd);
            iVar6 = *(*(arg2 + 0x618) + 0x480);
            if ((iVar6 == 0) || (*(iVar6 + 0x3a0) != 2)) {
                pcVar13 = NULL;
            }
            else {
                tracepoint_probe_register
                          (__tracepoint_android_vh_mmc_sdio_pm_flag_set,
                           sym.sdhci_msm_set_sdio_pm_flag.25097f443e31f63e0512f8d5d188b74c.cfi_jt,0);
                pcVar13 = NULL;
            }
        }
        __pm_runtime_disable(arg1_01,1);
        __pm_runtime_set_status(arg1_01,2);
        sym.pm_runtime_put_noidle(arg1_01);
code_r0x08004564:
        if (*(arg1_00 + 0x109) == '\0') {
            sym.sdhci_msm_bus_get_and_set_vote(arg2,0);
            sym.sdhci_msm_bus_unregister(arg1_00);
        }
code_r0x08004580:
        sym.clk_bulk_disable_unprepare(arg1_02);
code_r0x08004588:
        if (*(arg2 + 0x628) != '\0') {
            dev_pm_opp_of_remove_table(arg1_01);
        }
        dev_pm_opp_put_clkname(*(arg2 + 0x620));
        unaff_x24 = arg1_02;
code_r0x080045a0:
        arg1_02 = *(arg2 + 0x5a8);
        arg1_01 = arg1_02;
        if (arg1_02 < 0xfffffffffffff001) {
            clk_disable(arg1_02);
code_r0x080045b8:
            clk_unprepare(arg1_02);
        }
    } while( true );
}


// ===== sym.sdhci_msm_remove @ 0x080046ac (size 740) =====

ulong sym.sdhci_msm_remove(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *extraout_x8;
    uint32_t *extraout_x8_00;
    uint32_t *extraout_x8_01;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong *puVar11;
    uint32_t unaff_w24;
    int64_t iVar12;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = arg1 + 0x10;
    iVar6 = of_find_property(*(arg1 + 0x300),"non-removable",0);
    if ((iVar6 == 0) || (_segment.ehdr == 0)) {
        iVar6 = *(arg1 + 0xa8);
        puVar13 = *(iVar6 + 0x7b0);
        iVar4 = sym.readl_relaxed(*(iVar6 + 0x18) + 0x30);
        sdhci_remove_host(iVar6,iVar4 == -1);
        if (*(iVar6 + 0x628) != '\0') {
            dev_pm_opp_of_remove_table(iVar10);
        }
        dev_pm_opp_put_clkname(*(iVar6 + 0x620));
        __pm_runtime_resume(iVar10,4);
        if (puVar13 != NULL) {
            puVar11 = *puVar13;
            msleep(0x32);
            if (*(puVar13 + 1) != 0) {
                uVar8 = 0;
                do {
                    iVar12 = puVar11[2];
                    iVar7 = *(puVar11[4] + 0x360);
                    if ((iVar7 != 0) && (*(puVar11[4] + 0x368) != '\0')) {
                        ipc_log_string(iVar7,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints"
                                       ,*puVar11,2,0x7fffffff);
                    }
                    uVar5 = 0xffffffff;
                    do {
                        uVar5 = cpumask_next(uVar5,puVar11);
                        *extraout_x8 = unaff_w24;
                        if (unaff_w24 <= uVar5) {
                            *(puVar11 + 3) = 0;
                            *(puVar11 + 0x29) = 1;
                            goto code_r0x08004804;
                        }
                        iVar4 = dev_pm_qos_update_request(iVar12,0x7fffffff);
                        iVar12 = iVar12 + 0x58;
                    } while (-1 < iVar4);
                    *extraout_x8_00 = unaff_w24;
code_r0x08004804:
                    uVar5 = cpumask_next(0xffffffff,puVar11);
                    if (uVar5 < unaff_w24) {
                        iVar12 = puVar11[2];
                        do {
                            if (*(iVar12 + 0x50) != 0) {
                                iVar4 = dev_pm_qos_remove_request(iVar12);
                                if (iVar4 < 0) break;
                                *extraout_x8_01 = unaff_w24;
                            }
                            iVar12 = iVar12 + 0x58;
                            uVar5 = cpumask_next(uVar5,puVar11);
                        } while (uVar5 < unaff_w24);
                    }
                    uVar8 = uVar8 + 1;
                    puVar11 = puVar11 + 6;
                } while (uVar8 < *(puVar13 + 1));
            }
            destroy_workqueue(*(iVar6 + 0x7a8));
        }
        __pm_runtime_disable(iVar10,1);
        puVar1 = arg1 + 0x208;
        uVar9 = *puVar1;
        do {
            uVar8 = uVar9;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar5 = *puVar1;
                uVar9 = uVar5;
                if (uVar5 != uVar8) goto code_r0x080048a0;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = uVar8 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080048a0:
        } while (uVar8 != uVar5);
        clk_bulk_disable(5,iVar6 + 0x5b8);
        clk_bulk_unprepare(5,iVar6 + 0x5b8);
        uVar9 = *(iVar6 + 0x5a8);
        if (uVar9 < 0xfffffffffffff001) {
            clk_disable(uVar9);
            clk_unprepare(uVar9);
        }
        if (*(iVar6 + 0x689) == '\0') {
            sym.sdhci_msm_bus_get_and_set_vote(iVar6,0);
            iVar10 = *(iVar6 + 0x690);
            if (*(iVar10 + 0x28) != 0) {
                icc_put();
            }
            if (*(iVar10 + 0x30) != 0) {
                icc_put();
            }
        }
        sdhci_pltfm_free(arg1);
    }
    else {
        _dev_err(iVar10,"SDHCI is not boot dev.\n");
    }
    return 0;
}


// ===== sym.sdhci_msm_gcc_reset @ 0x08004990 (size 168) =====

void sym.sdhci_msm_gcc_reset(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg2 + 0x850);
    if (iVar3 == 0) {
        pcVar2 = "unable to acquire core_reset\n";
        iVar1 = -0x5f;
    }
    else {
        iVar1 = reset_control_assert(iVar3);
        if (iVar1 == 0) {
            usleep_range_state(200,0xd2,2);
            iVar1 = reset_control_deassert(iVar3);
            if (iVar1 == 0) {
                usleep_range_state(200,0xd2,2);
                return;
            }
            pcVar2 = "core_reset deassert failed\n";
        }
        else {
            pcVar2 = "core_reset assert failed\n";
        }
    }
    dev_err_probe(arg1,iVar1,pcVar2);
    return;
}


// ===== sym.sdhci_msm_setup_ice_clk @ 0x08004a38 (size 148) =====

int sym.sdhci_msm_setup_ice_clk(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x60) = 0;
    uVar2 = devm_clk_get(arg2 + 0x10,"ice_core");
    if (uVar2 < 0xfffffffffffff001) {
        *(arg1 + 0x60) = uVar2;
        iVar1 = clk_set_rate(uVar2,*(arg1 + 0x344));
        if (iVar1 == 0) {
            *(arg1 + 0x34c) = *(arg1 + 0x344);
        }
        else {
            _dev_err(arg2 + 0x10,"ICE_CLK rate set failed (%d) for %u\n",iVar1);
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.clk_bulk_prepare_enable @ 0x08004acc (size 100) =====

int sym.clk_bulk_prepare_enable(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_bulk_prepare(5,arg1);
    if (iVar1 == 0) {
        iVar1 = clk_bulk_enable(5,arg1);
        if (iVar1 != 0) {
            clk_bulk_unprepare(5,arg1);
        }
    }
    return iVar1;
}


// ===== sym.sdhci_msm_clkgate_bus_delayed_work @ 0x08004b30 (size 168) =====

void sym.sdhci_msm_clkgate_bus_delayed_work(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + -0x108) + 0x7c0;
    sym.sdhci_msm_registers_save(arg1_00);
    dev_pm_opp_set_rate(*(arg1 + -0x1a0) + 0x10,0);
    clk_bulk_disable(5,arg1 + -0x168);
    clk_bulk_unprepare(5,arg1 + -0x168);
    if ((*(arg1 + 0x1c0) != 0) && (*(arg1 + 0x1c8) != '\0')) {
        ipc_log_string(*(arg1 + 0x1c0),"%s: Clocks gated\n","sdhci_msm_clkgate_bus_delayed_work");
    }
    sym.sdhci_msm_bus_get_and_set_vote(arg1_00,0);
    return;
}


// ===== sym.sdhci_msm_bus_register @ 0x08004bd8 (size 952) =====

void sym.sdhci_msm_bus_register(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t *puVar10;
    int64_t iVar11;
    char *pcVar12;
    uint64_t uVar13;
    int iVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar20;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar11 = arg2 + 0x10;
    iStack_58 = *(iVar7 + 0x5e0);
    uVar20 = *(arg2 + 0x300);
    uStack_60 = 0;
    if (iVar11 == 0x10) {
        pcVar12 = "Null platform device!\n";
code_r0x08004ee8:
        _dev_err(iVar11,pcVar12);
    }
    else {
        iVar7 = devm_kmalloc(iVar11,0x40,0xdc0);
        if (iVar7 != 0) {
            iVar6 = sym.sdhci_msm_dt_get_array(iVar11,0x80011cd,iVar7 + 0x18,iVar7 + 0x20);
            if (iVar6 == 0) {
                iVar6 = of_property_read_string(uVar20,"qcom,msm-bus,name",iVar7);
                if (iVar6 == 0) {
                    puVar2 = iVar7 + 8;
                    iVar6 = of_property_read_variable_u32_array(uVar20,"qcom,msm-bus,num-cases",puVar2,1,0);
                    if (iVar6 < 0) {
                        pcVar12 = "num-usecases not found err:(%d)\n";
                    }
                    else {
                        iVar8 = devm_kmalloc(iVar11,*puVar2 << 4,0xdc0);
                        if (iVar8 == 0) goto code_r0x08004ef0;
                        iVar6 = of_property_read_variable_u32_array
                                          (uVar20,"qcom,msm-bus,num-paths",&uStack_60 + 4,1,0);
                        if (-1 < iVar6) {
                            iVar9 = of_get_property(uVar20,"qcom,msm-bus,vectors-KBps",&uStack_60);
                            if (iVar9 != 0) {
                                if (*puVar2 != 0) {
                                    iVar6 = 0;
                                    uVar15 = 0;
                                    uVar13 = uStack_60 >> 0x20;
                                    do {
                                        iVar14 = uVar15;
                                        *(iVar8 + (-(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4)) = uVar13;
                                        if (uVar13 >> 0x3c != 0) {
                                            *(iVar8 + iVar14 * 0x10 + 8) = 0;
                                            goto code_r0x08004ef0;
                                        }
                                        puVar10 = devm_kmalloc(iVar11,-(uVar13 >> 0x1f) & 0xfffffff000000000 |
                                                                       uVar13 << 4,0xdc0);
                                        piVar16 = iVar8 + iVar14 * 0x10 + 8;
                                        *piVar16 = puVar10;
                                        if (puVar10 == NULL) goto code_r0x08004ef0;
                                        uVar13 = uStack_60._4_4_;
                                        if (0 < uStack_60._4_4_) {
                                            iVar5 = uStack_60._4_4_ * iVar14 * 2;
                                            puVar1 = iVar9 + iVar5 * 4;
                                            uVar3 = *puVar1;
                                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                            *puVar10 = uVar3 >> 0x10 | uVar3 << 0x10;
                                            uVar3 = puVar1[1];
                                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                            puVar10[1] = uVar3 >> 0x10 | uVar3 << 0x10;
                                            if (uStack_60._4_4_ != 1) {
                                                uVar15 = -(iVar5 + 2U >> 0x1f) & 0xfffffffc00000000 | iVar5 + 2U << 2;
                                                uVar3 = *(iVar9 + uVar15);
                                                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                puVar10[2] = uVar3 >> 0x10 | uVar3 << 0x10;
                                                uVar3 = *(iVar9 + (uVar15 | 4));
                                                uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                puVar10[3] = uVar3 >> 0x10 | uVar3 << 0x10;
                                                if (uStack_60._4_4_ != 2) {
                                                    puVar1 = iVar9 + (iVar5 + 4) * 4;
                                                    uVar3 = *puVar1;
                                                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                    puVar10[4] = uVar3 >> 0x10 | uVar3 << 0x10;
                                                    uVar3 = puVar1[1];
                                                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                    *(*piVar16 + 0x28) = uVar3 >> 0x10 | uVar3 << 0x10;
                                                    if (uStack_60._4_4_ != 3) {
                                                        iVar17 = 0;
                                                        iVar18 = uVar13 - 3;
                                                        do {
                                                            iVar5 = uStack_60._4_4_ * iVar6 + iVar17;
                                                            iVar19 = iVar17 * 8;
                                                            iVar18 = iVar18 + -1;
                                                            iVar17 = iVar17 + 2;
                                                            uVar3 = *(iVar9 + (iVar5 + 6) * 4);
                                                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                            *(*piVar16 + iVar19 + 0x30) = uVar3 >> 0x10 | uVar3 << 0x10;
                                                            uVar3 = *(iVar9 + (iVar5 + 7) * 4);
                                                            uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                                                            *(*piVar16 + iVar19 + 0x38) = uVar3 >> 0x10 | uVar3 << 0x10;
                                                        } while (iVar18 != 0);
                                                    }
                                                }
                                            }
                                        }
                                        uVar15 = iVar14 + 1U;
                                        iVar6 = iVar6 + 2;
                                    } while (iVar14 + 1U < *puVar2);
                                }
                                *(iVar7 + 0x10) = iVar8;
                                *(arg1 + 0x110) = iVar7;
                                uVar13 = of_icc_get(iVar11,"sdhc-ddr");
                                *(iVar7 + 0x28) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    _dev_info(iVar11,"(%ld): failed getting %s path\n",uVar13,"sdhc-ddr");
                                    *(iVar7 + 0x28) = 0;
                                }
                                uVar13 = of_icc_get(iVar11,"cpu-sdhc");
                                *(iVar7 + 0x30) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    _dev_info(iVar11,"(%ld): failed getting %s path\n",uVar13,"cpu-sdhc");
                                    uVar20 = 0;
                                    *(iVar7 + 0x30) = 0;
                                }
                                else {
                                    uVar20 = 0;
                                }
                                goto code_r0x08004f04;
                            }
                            pcVar12 = "Vector array not found\n";
                            goto code_r0x08004ee8;
                        }
                        pcVar12 = "num_paths not found err:(%d)\n";
                    }
                }
                else {
                    pcVar12 = "Bus name missing err:(%d)\n";
                }
                _dev_err(iVar11,pcVar12,iVar6);
            }
            else if (iVar6 == -0x16) {
                *(arg1 + 0x109) = 1;
            }
        }
    }
code_r0x08004ef0:
    _dev_err(iVar11,"Failed to get bus_scale data\n");
    uVar20 = 0xffffffea;
code_r0x08004f04:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        iVar11 = __stack_chk_fail(uVar20);
        *extraout_x18 = sym.sdhci_msm_bus_voting;
        uVar13 = *(iVar11 + 0x608);
        cVar4 = *(*(iVar11 + 0x48) + 0x41f);
        if (cVar4 == '\0') {
            uVar13 = uVar13 >> 3;
        }
        else if (cVar4 == '\x02') {
            uVar13 = uVar13 >> 1;
        }
        sym.sdhci_msm_bus_get_and_set_vote(iVar11,uVar13);
        return;
    }
    return;
}


// ===== sym.sdhci_msm_bus_voting @ 0x08004f90 (size 72) =====

void sym.sdhci_msm_bus_voting(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x608);
    cVar1 = *(*(arg1 + 0x48) + 0x41f);
    if (cVar1 == '\0') {
        uVar2 = uVar2 >> 3;
    }
    else if (cVar1 == '\x02') {
        uVar2 = uVar2 >> 1;
    }
    sym.sdhci_msm_bus_get_and_set_vote(arg1,uVar2);
    return;
}


// ===== sym.sdhci_msm_vreg_init @ 0x08004fd8 (size 388) =====

uint64_t sym.sdhci_msm_vreg_init(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = *(arg2 + 0x90);
    if (piVar5 != NULL) {
        iVar1 = *piVar5;
        iVar2 = piVar5[1];
        if (iVar1 != 0) {
            if (*(iVar1 + 8) == 0) {
                puVar6 = iVar1 + 0x10;
                uVar4 = devm_regulator_get(arg1,*puVar6);
                *(iVar1 + 8) = uVar4;
                if (0xfffffffffffff000 < uVar4) {
                    _printk(0x80007e8,"sdhci_msm_vreg_init_reg",*puVar6,uVar4 & 0xffffffff);
                    if (uVar4 == 0) goto code_r0x08005060;
                    goto code_r0x08005064;
                }
                iVar3 = regulator_count_voltages(uVar4);
                if ((iVar3 < 1) || ((*(iVar1 + 0x2b) = 1, *(iVar1 + 0x1c) != 0 && (*(iVar1 + 0x24) != 0))))
                goto code_r0x08005058;
code_r0x080050e4:
                _printk(0x8000815,"sdhci_msm_vreg_init_reg",*puVar6);
                uVar4 = 0xffffffea;
            }
            else {
code_r0x08005058:
                uVar4 = 0;
code_r0x08005060:
                if (iVar2 != 0) goto code_r0x08005070;
code_r0x08005064:
                if (uVar4 == 0) goto code_r0x080050c4;
            }
            _dev_err(arg1,"vreg reset failed (%d)\n",uVar4 & 0xffffffff);
            goto code_r0x080050c4;
        }
        if (iVar2 != 0) {
code_r0x08005070:
            if (*(iVar2 + 8) == 0) {
                puVar6 = iVar2 + 0x10;
                uVar4 = devm_regulator_get(arg1,*puVar6);
                *(iVar2 + 8) = uVar4;
                if (0xfffffffffffff000 < uVar4) {
                    _printk(0x80007e8,"sdhci_msm_vreg_init_reg",*puVar6,uVar4 & 0xffffffff);
                    goto code_r0x08005064;
                }
                iVar3 = regulator_count_voltages(uVar4);
                if ((0 < iVar3) && ((*(iVar2 + 0x2b) = 1, *(iVar2 + 0x1c) == 0 || (*(iVar2 + 0x24) == 0))))
                goto code_r0x080050e4;
            }
        }
    }
    uVar4 = 0;
code_r0x080050c4:
    return uVar4 & 0xffffffff;
}


// ===== sym.sdhci_msm_set_rumi_bus_mode @ 0x0800515c (size 96) =====

void sym.sdhci_msm_set_rumi_bus_mode(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x678);
    uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar2 + 0x58));
    if ((*(*(arg1 + 0x48) + 0x3e5) & 1) == 0) {
        sym.writel_relaxed(uVar1 & 0xfffffff8,*(arg1 + 0x18) + *(iVar2 + 0x58));
    }
    return;
}


// ===== sym.readw_relaxed @ 0x080051bc (size 108) =====

ushort sym.readw_relaxed(int64_t arg1)

{
    ushort uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x10,arg1,0x80051c0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x10,arg1,0x80051f4);
    return uVar1;
}


// ===== sym.sdhci_set_default_hw_caps @ 0x0800522c (size 360) =====

void sym.sdhci_set_default_hw_caps(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg2 + 0x678);
    pcVar5 = **(arg1 + 0xf0);
    if (2 < (pcVar5 + -0x8003600 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar5,0x8000550);
    }
    uVar2 = (*pcVar5)(arg2,*(iVar6 + 0x10));
    uVar3 = sym.readl_relaxed(*(arg2 + 0x18) + 0x40);
    uVar1 = uVar2 & 0xf0000000;
    if ((uVar1 == 0x10000000) && ((uVar2 & 0xff) < 0x34)) {
        *(arg1 + 0xbc) = 1;
    }
    else if ((uVar1 == 0x10000000) && (0x41 < (uVar2 & 0xff))) {
        *(arg1 + 0xb8) = 1;
    }
    if (*(arg1 + 0x2d9) != '\0') {
        uVar3 = uVar3 | 0x2000000;
        uVar4 = sym.readl_relaxed(*(arg2 + 0x18) + 0x40);
        sym.writel_relaxed(uVar4 | uVar3,*(arg2 + 0x18) + *(iVar6 + 0x54));
    }
    sym.writel_relaxed(uVar3,*(arg2 + 0x18) + *(iVar6 + 0x54));
    *(arg1 + 0xe4) = uVar3;
    if (((uVar1 == 0x10000000) && (uVar1 = (uVar2 & 0xff) - 0x6e, uVar1 < 5)) && ((1 << (uVar1 & 0x1f) & 0x19U) != 0))
    {
        *(arg1 + 0x2da) = 1;
    }
    return;
}


// ===== sym.sdhci_msm_register_vreg @ 0x08005394 (size 324) =====

int sym.sdhci_msm_register_vreg(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = mmc_regulator_get_supply(*(arg1 + 0x98));
    if (iVar3 == 0) {
        iVar9 = *(arg1 + 0x98);
        uVar8 = *(iVar9 + 0x628);
        if (uVar8 < 0xfffffffffffff001) {
            iVar10 = *(arg1 + 0xf8);
            iVar4 = regulator_is_supported_voltage(uVar8,1700000,0x1dc130);
            iVar5 = regulator_is_supported_voltage(uVar8,2700000,3600000);
            uVar7 = (iVar4 != 0) << 0x1a;
            if (iVar5 != 0) {
                uVar7 = (iVar4 != 0) << 0x1a | 0x2000000;
            }
            if (iVar5 == 0 && iVar4 == 0) {
                iVar10 = *(iVar9 + 0x78);
                if (iVar10 == 0) {
                    iVar10 = *(iVar9 + 8);
                }
                _printk(0x8001cb3,iVar10);
                uVar7 = 0;
            }
            else {
                uVar1 = *(arg1 + 0xc4);
                uVar6 = sym.readl_relaxed(*(iVar9 + 0x7d8) + *(iVar10 + 0x44));
                if (((uVar1 >> 3 & 1) == 0) || ((uVar7 >> 0x19 & 1) == 0)) {
                    uVar2 = uVar6 | 0x8000;
                    if (iVar4 != 0 || (uVar1 & 4) != 0) {
                        uVar2 = uVar6 | 0x18000;
                    }
                }
                else {
                    uVar2 = uVar6 & 0xfffeffff | 0x8000;
                }
                sym.writel_relaxed(uVar2,*(iVar9 + 0x7d8) + *(iVar10 + 0x44));
            }
        }
        else {
            uVar7 = 0;
        }
        *(arg1 + 0xe4) = *(arg1 + 0xe4) | uVar7;
    }
    return iVar3;
}


// ===== sym.sdhci_msm_handle_pwr_irq @ 0x080054d8 (size 2024) =====

//WARNING: Type propagation algorithm not settling

void sym.sdhci_msm_handle_pwr_irq(int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    uint32_t uVar1;
    uint uVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    char *pcVar13;
    uint32_t uVar14;
    ulong *in_x18;
    code *pcVar15;
    code *pcVar16;
    int64_t *piVar17;
    code *pcVar18;
    code *pcVar19;
    ulong unaff_x30;
    code *pcStack_90;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_68 = *(iVar12 + 0x5e0);
    pcVar18 = *(arg1 + 0x48);
    pcVar19 = *(arg1 + 0x678);
    pcVar16 = **(arg1 + 0x670);
    if (2 < (pcVar16 + -0x8003600 >> 3 | pcVar16 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar16,0x8000570);
    }
    uVar6 = (*pcVar16)(arg1,*(pcVar19 + 0x28));
    uVar1 = uVar6 & 0xf;
    if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1 + 0x8e0),"%s: Received IRQ(%d), irq_status=0x%x\n","sdhci_msm_handle_pwr_irq",
                       arg2 & 0xffffffff,uVar1);
    }
    pcVar16 = *(*(arg1 + 0x670) + 8);
    if (1 < (pcVar16 + -0x8003660 >> 3 | pcVar16 << 0x3d)) {
        __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar16,0x8000590);
    }
    arg1_00 = arg1 + 0x580;
    (*pcVar16)(uVar1,arg1,*(pcVar19 + 0x30));
    piVar17 = 0xfffffff6;
    bVar3 = false;
    while( true ) {
        pcVar16 = **(arg1 + 0x670);
        if (2 < (pcVar16 + -0x8003600 >> 3 | pcVar16 << 0x3d)) {
            __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar16,0x80005b0);
            pcStack_90 = pcVar16;
        }
        uVar7 = (*pcVar16)(arg1,*(pcVar19 + 0x28));
        if ((uVar7 & uVar1) == 0) break;
        if (piVar17 == 0) {
            iVar12 = *(*(arg1 + 0x48) + 0x78);
            if (iVar12 == 0) {
                iVar12 = *(*(arg1 + 0x48) + 8);
            }
            _printk(0x80012c9,iVar12,uVar1);
            sym.sdhci_msm_dump_pwr_ctrl_regs(arg1);
    //WARNING: Does not return
            pcVar16 = SoftwareBreakpoint(0x800,0x80056b0);
            (*pcVar16)();
        }
        pcVar16 = *(*(arg1 + 0x670) + 8);
        if (1 < (pcVar16 + -0x8003660 >> 3 | pcVar16 << 0x3d)) {
            __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar16,0x80005d0);
            pcStack_90 = pcVar16;
        }
        (*pcVar16)(uVar1,arg1,*(pcVar19 + 0x30));
        __const_udelay(0xa7c6);
        piVar17 = piVar17 + 1;
    }
    if ((*(pcVar18 + 0x480) != 0) && (pcVar16 = *(*(pcVar18 + 0x3a0) + 0x30), pcVar16 != NULL)) {
        __cfi_slowpath_diag(0x5149616ef9bb8d20,pcVar16,0x80005f0);
        iVar8 = (*pcVar16)(pcVar18);
        if ((iVar8 == 0) && ((uVar6 >> 1 & 1) != 0)) {
            pcVar15 = *(*(arg1 + 0x670) + 8);
            if (1 < (pcVar15 + -0x8003660 >> 3 | pcVar15 << 0x3d)) {
                __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar15,0x8000610);
            }
            (*pcVar15)(2,arg1,*(pcVar19 + 0x34));
            goto code_r0x08005a40;
        }
    }
    if ((uVar1 >> 1 & 1) == 0) {
        iVar8 = 0;
        uVar7 = 0;
        pcVar16 = NULL;
        pcVar15 = NULL;
        uVar9 = 0;
        pcStack_90 = NULL;
        if ((uVar6 & 1) != 0) {
code_r0x08005794:
            if (((*(*(arg1 + 0x48) + 0x3e5) & 1) == 0) || (*(arg1 + 0x858) != '\0')) {
                iVar8 = sym.sdhci_msm_setup_vreg(arg1_00,0);
            }
            if (iVar8 == 0) {
                iVar8 = sym.sdhci_msm_set_vdd_io_vol(arg1_00,0);
            }
            uVar6 = 1;
            uVar9 = 1;
            if (iVar8 != 0) {
                uVar9 = 2;
            }
            pcVar15 = 0x4;
            uVar7 = uVar9 | uVar7;
            goto code_r0x080057d8;
        }
joined_r0x080058d8:
        uVar6 = uVar9;
        if ((uVar1 >> 2 & 1) == 0) goto joined_r0x08005904;
code_r0x080058ec:
        iVar8 = sym.sdhci_msm_set_vdd_io_vol(arg1_00,0);
        if (iVar8 != 0) {
            pcVar15 = 0x4;
            uVar6 = uVar9 | 8;
            goto joined_r0x08005904;
        }
        uVar6 = uVar9 | 4;
        pcVar15 = 0x4;
        if (uVar1 >> 3 == 0) goto code_r0x0800574c;
code_r0x08005918:
        iVar8 = sym.sdhci_msm_set_vdd_io_vol(arg1_00,1);
        if (iVar8 == 0) {
            uVar6 = uVar6 | 4;
        }
        else {
            uVar6 = uVar6 | 8;
        }
        pcVar15 = 0x8;
    }
    else {
        iVar8 = sym.sdhci_msm_setup_vreg(arg1_00,1);
        if (iVar8 == 0) {
            iVar8 = sym.sdhci_msm_set_vdd_io_vol(arg1_00,1);
        }
        uVar7 = 1;
        if (iVar8 != 0) {
            uVar7 = 2;
        }
        if ((uVar6 & 1) != 0) goto code_r0x08005794;
        uVar6 = 2;
        pcVar15 = 0x8;
code_r0x080057d8:
        pcStack_90 = uVar6;
        if ((*(pcVar18 + 0x620) < 0xfffffffffffff001) &&
           (iVar8 = mmc_regulator_set_ocr(pcVar18,*(pcVar18 + 0x620),*(pcVar18 + 0x414)), iVar8 != 0)) {
code_r0x080058d0:
            uVar9 = uVar7 | 2;
            pcVar16 = 0x1;
            goto joined_r0x080058d8;
        }
        uVar10 = *(pcVar18 + 0x628);
        uVar6 = uVar6 & 2;
        if ((uVar10 < 0xfffffffffffff001) && (pcVar18[0x41e] != 0x3)) {
            if ((((pcVar18[0x3e5] & 1) == 0) || (*(pcVar18 + 0x480) == 0)) || (*(*(pcVar18 + 0x480) + 0x3a0) != 0)) {
                uStack_70 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                if (*(arg1 + 0x8de) != uVar6 >> 1) {
                    if (uVar6 == 0) {
                        iVar8 = regulator_disable();
                    }
                    else {
                        uVar9 = *(arg1 + 0x664) & 0x6000000;
                        if (uVar9 != 0) {
                            if (uVar9 == 0x4000000) {
                                uStack_70 = 0x100;
                            }
                            iVar8 = mmc_regulator_set_vqmmc(pcVar18,&uStack_80);
                            if (iVar8 < 0) {
                                iVar12 = *(pcVar18 + 0x78);
                                uVar11 = *pcVar18;
                                if (iVar12 == 0) {
                                    iVar12 = *(pcVar18 + 8);
                                }
                                pcVar13 = "%s: vqmmc set volgate failed: %d\n";
                                goto code_r0x08005c24;
                            }
                            uVar10 = *(pcVar18 + 0x628);
                        }
                        iVar8 = regulator_enable(uVar10);
                    }
                    if (iVar8 != 0) {
                        iVar12 = *(pcVar18 + 0x78);
                        if (iVar12 == 0) {
                            iVar12 = *(pcVar18 + 8);
                        }
                        uVar11 = 0x80013ac;
                        if (uVar6 != 0) {
                            uVar11 = 0x8001c37;
                        }
                        _dev_err(*pcVar18,"%s: vqmm %sable failed: %d\n",iVar12,uVar11,iVar8);
                        goto code_r0x080058d0;
                    }
                    *(arg1 + 0x8de) = uVar6 >> 1;
                }
            }
            else {
                uVar2 = 0;
                if (uVar6 != 0) {
                    uVar2 = 0x4f588;
                }
                iVar8 = regulator_set_load(uVar10,uVar2);
                if (iVar8 != 0) {
                    iVar12 = *(pcVar18 + 0x78);
                    uVar11 = *pcVar18;
                    if (iVar12 == 0) {
                        iVar12 = *(pcVar18 + 8);
                    }
                    pcVar13 = "%s: vqmmc set load failed: %d\n";
code_r0x08005c24:
                    _dev_err(uVar11,pcVar13,iVar12,iVar8);
                    goto code_r0x080058d0;
                }
            }
        }
        if (uVar6 == 0) {
            iVar8 = pinctrl_pm_select_sleep_state();
        }
        else {
            iVar8 = pinctrl_pm_select_default_state(*arg1_00 + 0x10);
        }
        if (iVar8 != 0) goto code_r0x080058d0;
        uVar9 = uVar7 | 1;
        pcVar16 = 0x1;
        uVar6 = uVar9;
        if ((uVar1 >> 2 & 1) != 0) goto code_r0x080058ec;
joined_r0x08005904:
        if (uVar1 >> 3 != 0) goto code_r0x08005918;
code_r0x0800574c:
        if (pcVar15 == 0) {
            bVar3 = true;
            goto code_r0x08005960;
        }
    }
    if ((pcVar16 == 0 && *(pcVar18 + 0x628) < 0xfffffffffffff001) &&
       (iVar8 = mmc_regulator_set_vqmmc(pcVar18,pcVar18 + 0x410), iVar8 < 0)) {
        iVar12 = *(pcVar18 + 0x78);
        if (iVar12 == 0) {
            iVar12 = *(pcVar18 + 8);
        }
        _dev_err(*pcVar18,"%s: IO_level setting failed(%d). signal_voltage: %d, vdd: %d irq_status: 0x%08x\n",iVar12,
                 iVar8,pcVar18[0x421],*(pcVar18 + 0x414),uVar1);
        bVar3 = false;
        uVar6 = uVar6 | 8;
    }
    else {
        bVar3 = false;
    }
code_r0x08005960:
    pcVar18 = *(*(arg1 + 0x670) + 8);
    piVar17 = arg1_00;
    if (1 < (pcVar18 + -0x8003660 >> 3 | pcVar18 << 0x3d)) goto code_r0x08005c78;
    do {
        (*pcVar18)(uVar6,arg1,*(pcVar19 + 0x34));
        uVar7 = pcVar15;
        if ((*(arg1 + 0x667) & 6) != 0) {
            uVar9 = sym.readl_relaxed(*(arg1 + 0x18) + *(pcVar19 + 0x44));
            if ((uVar7 >> 3 & 1) == 0) {
                if ((uVar7 >> 2 & 1) == 0) {
                    uVar14 = *(piVar17 + 0xe4);
code_r0x080059c8:
                    if ((uVar14 >> 0x1a & 1) == 0) goto code_r0x080059ec;
                }
                uVar14 = uVar9 | 0x10000;
joined_r0x08005b0c:
                if (uVar9 == uVar14) goto code_r0x080059ec;
                uVar10 = uVar14;
                iVar12 = *(arg1 + 0x18) + *(pcVar19 + 0x44);
            }
            else {
                uVar14 = *(piVar17 + 0xe4);
                if (((uVar14 >> 0x19 & 1) == 0) || (*(piVar17 + 0x2d9) != '\0')) goto code_r0x080059c8;
                if (*(piVar17 + 0x2ca) == '\0') {
                    uVar14 = uVar9 & 0xfffeffff;
                    goto joined_r0x08005b0c;
                }
                pcVar18 = *(arg1 + 0x48);
                iVar12 = *(arg1 + 0x678);
                pcVar19 = *(*(pcVar18 + 0x3a0) + 0x30);
                if (pcVar19 == NULL) {
                    bVar4 = false;
                }
                else {
                    __cfi_slowpath_diag(0x5149616ef9bb8d20,pcVar19,0x8000650);
                    iVar8 = (*pcVar19)(pcVar18);
                    bVar4 = iVar8 != 0;
                }
                uVar10 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar12 + 0x44));
                uVar9 = uVar10;
                if ((*(pcVar18 + 0x480) == 0) && (bVar4)) {
                    if (pcVar18[0x41e] == 0x1) {
code_r0x08005b98:
                        uVar10 = uVar9 & 0xfffeffff;
                    }
                    else {
                        bVar5 = false;
code_r0x08005b78:
                        if (!bVar5 && !bVar4) {
                            uVar14 = uVar9 | 0x10000;
                            if (pcVar18[0x41e] != 0x0) {
                                uVar14 = uVar9;
                            }
                            uVar10 = uVar14;
                        }
                    }
                }
                else {
                    bVar5 = *(pcVar18 + 0x480) != 0;
                    if (!(bVar5 & bVar4)) goto code_r0x08005b78;
                    if (pcVar18[0x41e] == 0x1) goto code_r0x08005b98;
                    if (pcVar18[0x41e] == 0x0) {
                        uVar10 = uVar9 | 0x10000;
                    }
                }
                iVar12 = *(arg1 + 0x18) + *(iVar12 + 0x44);
                piVar17 = arg1_00;
            }
            sym.writel_relaxed(uVar10,iVar12);
        }
code_r0x080059ec:
        if (pcVar16 == 0) {
            if (bVar3) goto code_r0x08005a10;
code_r0x080059fc:
            *(piVar17 + 0xc4) = uVar7;
            iVar12 = *(arg1 + 0x8e0);
        }
        else {
            *(arg1 + 0x640) = pcStack_90._0_4_;
            if (!bVar3) goto code_r0x080059fc;
code_r0x08005a10:
            iVar12 = *(arg1 + 0x8e0);
        }
        if ((iVar12 != 0) && (*(arg1 + 0x8e8) != '\0')) {
            ipc_log_string(iVar12,"%s: Handled IRQ(%d), irq_status=0x%x, ack=0x%x\n","sdhci_msm_handle_pwr_irq",arg2
                           ,uVar1,uVar6);
        }
code_r0x08005a40:
        iVar12 = sp_el0;
        if (*(iVar12 + 0x5e0) == iStack_68) {
            return;
        }
        __stack_chk_fail();
code_r0x08005c78:
        __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar18,0x8000630);
    } while( true );
}


// ===== sym.sdhci_msm_pwr_irq @ 0x08005cc0 (size 88) =====

ulong sym.sdhci_msm_pwr_irq(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.sdhci_msm_handle_pwr_irq(arg2,arg1 & 0xffffffff);
    *(arg2 + 0x660) = 1;
    __wake_up(arg2 + 0x648,3,1,0);
    return 1;
}


// ===== sym.sdhci_msm_setup_pm @ 0x08005d18 (size 160) =====

void sym.sdhci_msm_setup_pm(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x10;
    piVar2 = arg1 + 0x208;
    Hint_Prefetch(piVar2,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    __pm_runtime_set_status(iVar1,0);
    pm_runtime_enable(iVar1);
    if ((*(*(arg2 + 0x98) + 0x3e6) >> 5 & 1) == 0) {
        pm_runtime_set_autosuspend_delay(iVar1,10);
        __pm_runtime_use_autosuspend(iVar1,1);
    }
    return;
}


// ===== sym.sdhci_msm_start_signal_voltage_switch @ 0x08005db8 (size 444) =====

ulong sym.sdhci_msm_start_signal_voltage_switch(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (1 < *(arg1 + 0xab8)) {
        iVar3 = arg1 + 0x7c0;
        pcVar4 = *(*(arg1 + 0x800) + 8);
        if (pcVar4 == NULL) {
            uVar1 = sym.readw(*(arg1 + 0x7d8) + 0x3e);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar4,0x80003f0);
            uVar1 = (*pcVar4)(iVar3,0x3e);
        }
        if (*(arg2 + 0x11) == '\x01') {
            if (-1 < *(arg1 + 0xab5)) {
                return 0xffffffea;
            }
            uVar1 = uVar1 | 8;
        }
        else {
            if ((*(arg2 + 0x11) != '\0') || ((*(arg1 + 0xab5) >> 6 & 1) == 0)) {
                return 0xffffffea;
            }
            uVar1 = uVar1 & 0xfffffff7;
        }
        pcVar4 = *(*(arg1 + 0x800) + 0x20);
        if (pcVar4 == NULL) {
            sym.writew(uVar1,*(arg1 + 0x7d8) + 0x3e);
        }
        else {
            if (pcVar4 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
                __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar4,0x80003d0);
            }
            (*pcVar4)(iVar3,uVar1,0x3e);
        }
        usleep_range_state(5000,0x157c,2);
        pcVar4 = *(*(arg1 + 0x800) + 8);
        if (pcVar4 == NULL) {
            uVar2 = sym.readw(*(arg1 + 0x7d8) + 0x3e);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar4,0x80003f0);
            uVar2 = (*pcVar4)(iVar3,0x3e);
        }
        if (((uVar2 ^ uVar1) >> 3 & 1) != 0) {
            iVar3 = *(arg1 + 0x78);
            if (iVar3 == 0) {
                iVar3 = *(arg1 + 8);
            }
            _dev_warn(*arg1,"%s: Regulator output did not became stable\n",iVar3);
            return 0xfffffff5;
        }
    }
    return 0;
}


// ===== sym.sdhci_msm_execute_tuning @ 0x08005f74 (size 844) =====

uint64_t sym.sdhci_msm_execute_tuning(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = arg1 + 0x7c0;
    iVar10 = *(arg1 + 0x808);
    uStack_78 = 0;
    uStack_70 = 0;
    iVar12 = *(arg1 + 0xe38);
    uVar1 = *(iVar10 + 0x420);
    uVar4 = *(iVar10 + 0x410);
    if ((uVar1 == 5) && ((*(arg1 + 0xab4) >> 4 & 1) != 0)) {
        *(arg1 + 0xdf9) = 0;
        *(arg1 + 0xe40) = 1;
        uVar5 = sym.readl_relaxed(*(arg1 + 0x7d8) + *(iVar12 + 0x44));
        sym.writel_relaxed(uVar5 & 0xffc00000 | uVar5 & 0x3ffff | 0x240000,*(arg1 + 0x7d8) + *(iVar12 + 0x44));
        uVar1 = *(arg1 + 0xab5);
    }
    else {
        if ((*(arg1 + 0xacc) < 0x5f5e101) ||
           (((10 < uVar1 || ((1 << (uVar1 & 0x1f) & 0x640U) == 0)) || (*(iVar10 + 0x423) != '\0')))) {
            *(arg1 + 0xe40) = 0;
            uVar3 = sym.readl_relaxed(*(arg1 + 0x7d8) + *(iVar12 + 0x3c));
            uVar5 = 0;
            uVar4 = uVar3 & 0xfffdffff | 0x80000;
            if (uVar4 != uVar3) {
                sym.writel_relaxed(uVar4,*(arg1 + 0x7d8) + *(iVar12 + 0x3c));
                uVar5 = 0;
            }
            goto code_r0x080061bc;
        }
        *(arg1 + 0xdf9) = 0;
        *(arg1 + 0xe40) = 1;
        uVar1 = *(arg1 + 0xab5);
    }
    if ((uVar1 >> 5 & 1) != 0) {
        sym.sdhci_msm_hc_select_mode(iVar9);
        sym.msm_set_clock_rate_for_bus_mode(iVar9,uVar4);
        *(arg1 + 0xab4) = *(arg1 + 0xab4) & 0xffffdfff;
    }
    uVar4 = sym.readl_relaxed(*(arg1 + 0x7d8) + *(iVar12 + 0x44));
    sym.writel_relaxed(uVar4 & 0xfffffffd,*(arg1 + 0x7d8) + *(iVar12 + 0x44));
    uVar5 = sym.msm_init_cm_dll(iVar9,0);
    if (uVar5 == 0) {
        iVar13 = 10;
        do {
            uVar7 = 0;
            uVar3 = 0;
            do {
                uVar5 = sym.msm_config_cm_dll_phase(iVar9,uVar3);
                if (uVar5 != 0) goto code_r0x08006194;
                iVar6 = mmc_send_tuning(arg1,arg2 & 0xffffffff,0);
                if (iVar6 == 0) {
                    if (0xf < (uVar7 & 0xff)) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80062bc);
                        (*pcVar2)();
                    }
                    uVar11 = uVar7 & 0xff;
                    uVar7 = uVar7 + 1;
                    *(&uStack_78 + uVar11) = uVar3;
                }
                uVar5 = uVar3 & 0xff;
                uVar3 = uVar3 + 1;
            } while (uVar5 < 0xf);
            if ((uVar7 & 0xff) == 0) {
                if (iVar13 == 1) {
                    if ((*(arg1 + 0x10a0) != 0) && (*(arg1 + 0x10a8) != '\0')) {
                        ipc_log_string(*(arg1 + 0x10a0),"%s: No tuning point found\n","sdhci_msm_execute_tuning");
                    }
                    uVar5 = 0xfffffffb;
                    break;
                }
            }
            else if (((uVar7 & 0xff) != 0x10) || (iVar13 == 1)) {
                uVar3 = sym.msm_find_most_appropriate_phase(iVar9,&uStack_78,uVar7);
                uVar5 = uVar3;
                if ((-1 < uVar3) && (uVar5 = sym.msm_config_cm_dll_phase(iVar9,uVar3), uVar5 == 0)) {
                    *(arg1 + 0xdfb) = uVar3;
                    if ((*(arg1 + 0x10a0) != 0) && (*(arg1 + 0x10a8) != '\0')) {
                        ipc_log_string(*(arg1 + 0x10a0),"%s: Setting the tuning phase to %d\n",
                                       "sdhci_msm_execute_tuning",uVar3 & 0xff);
                    }
                    *(arg1 + 0xdf9) = 1;
                    uVar5 = 0;
                }
                break;
            }
            iVar13 = iVar13 + -1;
            uVar5 = sym.msm_init_cm_dll(iVar9,0);
        } while (uVar5 == 0);
    }
code_r0x08006194:
    if ((uVar4 >> 1 & 1) != 0) {
        uVar4 = sym.readl_relaxed(*(arg1 + 0x7d8) + *(iVar12 + 0x44));
        sym.writel_relaxed(uVar4 | 2,*(arg1 + 0x7d8) + *(iVar12 + 0x44));
    }
code_r0x080061bc:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar5;
    }
    auVar14 = __stack_chk_fail();
    piVar8 = auVar14._8_8_;
    uVar7 = auVar14._0_8_;
    *extraout_x18 = sym.sdhci_msm_init_card;
    if ((piVar8[0x74] == 2) && (uVar7 = device_init_wakeup(piVar8 + 1,1), uVar7 != 0)) {
        iVar9 = *(*piVar8 + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(*piVar8 + 8);
        }
        uVar7 = _printk(0x8001b8c,iVar9,"sdhci_msm_init_card",uVar7 & 0xffffffff);
    }
    return uVar7;
}


// ===== sym.sdhci_msm_init_card @ 0x080062c0 (size 116) =====

void sym.sdhci_msm_init_card(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x3a0) == 2) && (iVar1 = device_init_wakeup(arg1 + 8,1), iVar1 != 0)) {
        iVar2 = *(*arg1 + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(*arg1 + 8);
        }
        _printk(0x8001b8c,iVar2,"sdhci_msm_init_card",iVar1);
    }
    return;
}


// ===== sym.sdhci_msm_qos_init @ 0x08006334 (size 1280) =====

void sym.sdhci_msm_qos_init(int64_t arg1)

{
    code *pcVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    ulong *puVar11;
    char *pcVar12;
    ulong *in_x7;
    uint uVar13;
    ulong extraout_x8;
    ulong extraout_x8_00;
    uint64_t uVar14;
    uint32_t extraout_w10;
    uint extraout_x10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar15;
    uint *puVar16;
    ulong *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    ulong *puVar20;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar18 = *arg1;
    iStack_6c = 0;
    iVar8 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar8 = 0x30;
    }
    uVar15 = *(iVar18 + 0x300);
    piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x10);
    if (piVar7 != NULL) {
        *(arg1 + 0x230) = piVar7;
        iVar8 = of_get_next_available_child(uVar15,0);
        if (iVar8 == 0) {
            *(piVar7 + 1) = 0;
        }
        else {
            uVar4 = 0;
            do {
                uVar4 = uVar4 + 1;
                iVar8 = of_get_next_available_child(uVar15,iVar8);
            } while (iVar8 != 0);
            *(piVar7 + 1) = uVar4;
            if (uVar4 != 0) {
                puVar9 = __kmalloc(uVar4 * 0x30,0xdc0);
                if (puVar9 == NULL) {
                    *(arg1 + 0x230) = 0;
                    kfree(piVar7);
                }
                else {
                    *piVar7 = puVar9;
                    for (iVar8 = of_get_next_available_child(uVar15,0); iVar8 != 0;
                        iVar8 = of_get_next_available_child(uVar15,iVar8)) {
                        iVar3 = of_property_read_variable_u32_array(iVar8,"mask",&iStack_6c,1,0);
                        uVar10 = _sdhci_set_bus_width;
                        if (-1 < iVar3) {
                            *in_x7 = CONCAT44(extraout_x10,extraout_w10);
                            *puVar9 = uVar10 & iStack_6c;
                            if ((uVar10 & iStack_6c & (extraout_w10 ^ 0xffffffff)) != 0) {
                                pcVar12 = "Invalid group mask\n";
                                goto code_r0x080067e8;
                            }
                            uVar4 = of_property_count_elems_of_size(iVar8,"vote",4);
                            if (uVar4 < 1) {
                                pcVar12 = "1 vote is needed, bailing out\n";
                                goto code_r0x080067e8;
                            }
                            uVar10 = __kmalloc(uVar4 * 4,0xcc0);
                            puVar9[1] = uVar10;
                            if ((uVar10 == 0) ||
                               (iVar3 = of_property_read_u32_index(iVar8,"vote",0,uVar10), iVar3 != 0))
                            goto code_r0x0800651c;
                            iVar3 = 1;
                            iVar19 = 4;
                            while (uVar4 * 4 - iVar19 != 0) {
                                iVar5 = of_property_read_u32_index(iVar8,"vote",iVar3,puVar9[1] + iVar19);
                                iVar19 = iVar19 + 4;
                                iVar3 = iVar3 + 1;
                                if (iVar5 != 0) goto code_r0x0800651c;
                            }
                            puVar9[4] = arg1;
                            puVar9 = puVar9 + 6;
                        }
                    }
                    puVar20 = *(arg1 + 0x230);
                    if (puVar20 != NULL) {
                        iVar19 = *(arg1 + 0x98);
                        puVar16 = *puVar20;
                        iVar8 = *arg1;
                        iVar3 = irq_set_affinity_hint(*(iVar19 + 2000),puVar16);
                        if (iVar3 != 0) {
    //WARNING: Does not return
                            pcVar1 = SoftwareBreakpoint(0x800,0x800682c);
                            (*pcVar1)();
                        }
                        *(arg1 + 0x270) = sym.sdhci_msm_irq_affinity_notify.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                        *(arg1 + 0x278) = sym.sdhci_msm_irq_affinity_release.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
                        irq_set_affinity_notifier(*(iVar19 + 2000),arg1 + 0x238);
                        if (*(puVar20 + 1) == 0) {
code_r0x080066b4:
                            puVar11 = *puVar20;
                            uVar4 = *puVar11[1];
                            if (uVar4 != *(puVar11 + 0x29)) {
                                iVar8 = puVar11[2];
                                iVar18 = *(puVar11[4] + 0x360);
                                if ((iVar18 != 0) && (*(puVar11[4] + 0x368) != '\0')) {
                                    ipc_log_string(iVar18,"%s: mask: 0x%08x type: %d vote: %u\n",
                                                   "sdhci_msm_update_qos_constraints",*puVar11,0,uVar4);
                                }
                                uVar6 = 0xffffffff;
                                do {
                                    uVar6 = cpumask_next(uVar6,puVar11);
                                    *in_x7 = extraout_x8_00;
                                    if (extraout_x8_00 <= uVar6) {
                                        *(puVar11 + 3) = 1;
                                        *(puVar11 + 0x29) = uVar4 != 0;
                                        break;
                                    }
                                    iVar3 = dev_pm_qos_update_request(iVar8,uVar4);
                                    iVar8 = iVar8 + 0x58;
                                } while (-1 < iVar3);
                            }
                            uVar14 = **puVar20;
                            uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                            uVar13 = 0x20;
                            if (uVar14 != 0) {
                                uVar13 = LZCOUNT((uVar10 >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10) << 0x20);
                            }
                            *(puVar20 + 0xc) = uVar13;
                        }
                        else {
                            iVar3 = 0;
                            uVar4 = 0;
                            while( true ) {
                                uVar10 = __sw_hweight64(*puVar16);
                                puVar11 = __kmalloc((uVar10 & 0xffffffff) * 0x58,0xdc0);
                                *(puVar16 + 4) = puVar11;
                                if (puVar11 == NULL) break;
                                uVar6 = 0xffffffff;
                                puVar17 = puVar11;
                                while( true ) {
                                    uVar6 = cpumask_next(uVar6,puVar16);
                                    *in_x7 = extraout_x8;
                                    if (extraout_x8 <= uVar6) break;
                                    puVar17[9] = 0;
                                    puVar17[10] = 0;
                                    puVar17[7] = 0;
                                    puVar17[8] = 0;
                                    puVar17[5] = 0;
                                    puVar17[6] = 0;
                                    puVar17[3] = 0;
                                    puVar17[4] = 0;
                                    puVar17[1] = 0;
                                    puVar17[2] = 0;
                                    *puVar17 = 0;
                                    uVar15 = get_cpu_device();
                                    iVar5 = dev_pm_qos_add_request(uVar15,puVar17,1,0x7fffffff);
                                    puVar17 = puVar17 + 0xb;
                                    if (iVar5 < 0) {
                                        _dev_err(iVar8 + 0x10,"Fail (%d) add qos-req: grp-%d\n",iVar5,uVar4);
                                        if (uVar4 != 0) goto code_r0x08006678;
                                        kfree(*(puVar16 + 4));
                                        goto code_r0x080067e0;
                                    }
                                }
                                uVar4 = uVar4 + 1;
                                iVar3 = iVar3 + -1;
                                *(puVar16 + 10) = 1;
                                puVar16 = puVar16 + 0xc;
                                if (*(puVar20 + 1) <= uVar4) goto code_r0x080066b4;
                            }
                            _dev_err(iVar8 + 0x10,"Memory allocation failed\n");
                            if (uVar4 == 0) goto code_r0x080067e0;
code_r0x08006678:
                            iVar8 = 0x10;
                            do {
                                kfree(*(puVar16 + iVar8));
                                iVar8 = iVar8 + -0x30;
                                bVar2 = iVar3 != -1;
                                iVar3 = iVar3 + 1;
                            } while (bVar2);
                            if (puVar11 != NULL) {
code_r0x080067e0:
                                pcVar12 = "Failed to setup PM QoS.\n";
code_r0x080067e8:
                                _dev_err(iVar18 + 0x10,pcVar12);
code_r0x0800651c:
                                iVar8 = *piVar7;
                                if (piVar7[1] != 0) {
                                    uVar4 = 0;
                                    puVar20 = iVar8 + 8;
                                    do {
                                        kfree(*puVar20);
                                        uVar4 = uVar4 + 1;
                                        puVar20 = puVar20 + 6;
                                    } while (uVar4 < *(piVar7 + 1));
                                    iVar8 = *piVar7;
                                }
                                kfree(iVar8);
                                kfree(piVar7);
                                *(arg1 + 0x230) = 0;
                            }
                        }
                    }
                }
                goto code_r0x08006798;
            }
        }
        _dev_err(iVar18 + 0x10,"QoS groups undefined\n");
        kfree(piVar7);
        *(arg1 + 0x230) = 0;
    }
code_r0x08006798:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.sdhci_msm_init_sysfs_gating_qos;
    iVar18 = *(iVar8 + 0x98);
    *(iVar18 + 0x810) = sym.show_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar18 + 0x818) = sym.store_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar18 + 0x808) = 0x1a4;
    *(iVar18 + 0x800) = "clk_gating";
    iVar3 = device_create_file(iVar8,iVar18 + 0x800);
    if (iVar3 != 0) {
        iVar19 = *(*(iVar18 + 0x48) + 0x78);
        if (iVar19 == 0) {
            iVar19 = *(*(iVar18 + 0x48) + 8);
        }
        _printk(0x8000cb6,iVar19,"sdhci_msm_init_sysfs_gating_qos",iVar3);
    }
    *(iVar18 + 0x828) = 0x1a4;
    *(iVar18 + 0x830) = sym.show_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar18 + 0x838) = sym.store_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar18 + 0x820) = "pm_qos";
    iVar3 = device_create_file(iVar8,iVar18 + 0x820);
    if (iVar3 != 0) {
        iVar8 = *(*(iVar18 + 0x48) + 0x78);
        if (iVar8 == 0) {
            iVar8 = *(*(iVar18 + 0x48) + 8);
        }
        _printk(0x8001d9b,iVar8,"sdhci_msm_init_sysfs_gating_qos",iVar3);
    }
    return;
}


// ===== sym.sdhci_msm_init_sysfs_gating_qos @ 0x08006834 (size 256) =====

void sym.sdhci_msm_init_sysfs_gating_qos(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    *(iVar3 + 0x810) = sym.show_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar3 + 0x818) = sym.store_sdhci_msm_clk_gating.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar3 + 0x808) = 0x1a4;
    *(iVar3 + 0x800) = "clk_gating";
    iVar1 = device_create_file(arg1,iVar3 + 0x800);
    if (iVar1 != 0) {
        iVar2 = *(*(iVar3 + 0x48) + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(*(iVar3 + 0x48) + 8);
        }
        _printk(0x8000cb6,iVar2,"sdhci_msm_init_sysfs_gating_qos",iVar1);
    }
    *(iVar3 + 0x828) = 0x1a4;
    *(iVar3 + 0x830) = sym.show_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar3 + 0x838) = sym.store_sdhci_msm_pm_qos.25097f443e31f63e0512f8d5d188b74c.cfi_jt;
    *(iVar3 + 0x820) = "pm_qos";
    iVar1 = device_create_file(arg1,iVar3 + 0x820);
    if (iVar1 != 0) {
        iVar2 = *(*(iVar3 + 0x48) + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(*(iVar3 + 0x48) + 8);
        }
        _printk(0x8001d9b,iVar2,"sdhci_msm_init_sysfs_gating_qos",iVar1);
    }
    return;
}


// ===== sym.sdhci_msm_cqe_add_host @ 0x08006934 (size 964) =====

uint64_t sym.sdhci_msm_cqe_add_host(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong uVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong uVar11;
    ulong *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x493) >> 4 & 1) != 0) {
        *(arg1 + 0x3e4) = 0x10;
    }
    uVar4 = sdhci_setup_host(arg1);
    uVar9 = uVar4 & 0xffffffff;
    if (uVar4 != 0) goto code_r0x08006a54;
    piVar5 = cqhci_pltfm_init(arg2);
    if (piVar5 < 0xfffffffffffff001) {
        *(*(arg1 + 0x618) + 1000) = *(*(arg1 + 0x618) + 1000) | 0x1800000;
        *piVar5 = reloc.sdhci_msm_cqe_sdhci_dumpregs.cfi_jt;
        *(arg1 + 0x630) = piVar5;
        *(piVar5 + 0x3e) = *(arg1 + 0x848);
        puVar12 = *(arg1 + 0x618);
        uVar3 = *(arg1 + 0x2f4);
        pcVar10 = *(*piVar5 + 0x10);
        uVar8 = *puVar12;
        if (pcVar10 == NULL) {
            uVar2 = sym.readl_relaxed(piVar5[1] + 4);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000470);
            uVar2 = (*pcVar10)(piVar5,4);
        }
        if ((uVar2 >> 0x1c & 1) != 0) {
            iVar7 = platform_get_resource_byname(*(arg1 + 0x580),0x200,"cqhci_ice");
            uVar11 = uVar8;
            if (iVar7 == 0) {
                pcVar6 = "ICE registers not found\n";
code_r0x08006bb8:
                _dev_warn(uVar11,pcVar6);
            }
            else {
                uVar4 = qcom_scm_ice_available();
                if ((uVar4 & 1) == 0) {
                    pcVar6 = "ICE SCM interface not found\n";
                    goto code_r0x08006bb8;
                }
                uVar9 = devm_ioremap_resource(uVar8,iVar7);
                *(arg1 + 0x590) = uVar9;
                if (0xfffffffffffff000 < uVar9) {
                    _dev_err(uVar8,"Failed to map ICE registers; err=%d\n",uVar9 & 0xffffffff);
code_r0x08006c00:
                    if (uVar9 != 0) goto code_r0x08006a4c;
                    goto code_r0x080069e0;
                }
                piVar5[0x1b] = uVar9;
                iVar7 = platform_get_resource_byname(*(arg1 + 0x580),0x200,"cqhci_ice_hwkm");
                if (iVar7 == 0) {
                    pcVar6 = "ICE HWKM registers not found\n";
                    goto code_r0x08006bb8;
                }
                uVar9 = devm_ioremap_resource(uVar8,iVar7);
                *(arg1 + 0x598) = uVar9;
                if (0xfffffffffffff000 < uVar9) {
                    _dev_err(uVar8,"Failed to map ICE HWKM registers; err=%d\n",uVar9 & 0xffffffff);
                    goto code_r0x08006c00;
                }
                piVar5[0x1c] = uVar9;
                uVar11 = **(arg1 + 0x618);
                uVar4 = sym.readl(*(arg1 + 0x590) + 8);
                uVar9 = uVar4 >> 0x18 & 0xff;
                if (uVar9 == 3) {
                    _dev_info(uVar11,"Found QC Inline Crypto Engine (ICE) v%d.%d.%d\n");
                    uVar4 = sym.readl(*(arg1 + 0x590) + 0x10);
                    if ((uVar4 & 7) == 0) {
                        *(puVar12 + 0x7d) = *(puVar12 + 0x7d) | 0x8000000;
                        goto code_r0x080069e0;
                    }
                    pcVar6 = "Fuses are blown; ICE is unusable!\n";
                    goto code_r0x08006bb8;
                }
                _dev_warn(uVar11,"Unsupported ICE version: v%d.%d.%d\n",uVar9,uVar4 >> 0x10 & 0xff,uVar4 & 0xffff);
            }
            _dev_warn(uVar8,"Disabling inline encryption support\n");
        }
code_r0x080069e0:
        uVar3 = cqhci_init(piVar5,*(arg1 + 0x48),uVar3 >> 0xc & 1);
        if (uVar3 == 0) {
            pcVar10 = *(*piVar5 + 0x10);
            if (pcVar10 == NULL) {
                uVar3 = sym.readl_relaxed(piVar5[1] + 0xa00);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000470);
                uVar3 = (*pcVar10)(piVar5,0xa00);
            }
            pcVar10 = *(*piVar5 + 8);
            if (pcVar10 == NULL) {
                sym.writel_relaxed(uVar3 | 0x6000,piVar5[1] + 0xa00);
                uVar1 = *(arg1 + 0x2f5);
            }
            else {
                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000510);
                (*pcVar10)(piVar5,uVar3 | 0x6000,0xa00);
                uVar1 = *(arg1 + 0x2f5);
            }
            if ((uVar1 >> 4 & 1) != 0) {
                *(arg1 + 0x3e0) = 0xc;
            }
            uVar4 = __sdhci_add_host(arg1);
            uVar9 = uVar4 & 0xffffffff;
            if (uVar4 == 0) {
                iVar7 = *(*(arg1 + 0x48) + 0x78);
                if (iVar7 == 0) {
                    iVar7 = *(*(arg1 + 0x48) + 8);
                }
                _dev_info(arg2 + 0x10,"%s: CQE init: success\n",iVar7);
                uVar9 = 0;
                goto code_r0x08006a54;
            }
        }
        else {
            uVar9 = uVar3;
            iVar7 = *(*(arg1 + 0x48) + 0x78);
            if (iVar7 == 0) {
                iVar7 = *(*(arg1 + 0x48) + 8);
            }
            _dev_err(arg2 + 0x10,"%s: CQE init: failed (%d)\n",iVar7,uVar9);
        }
    }
    else {
        _dev_err(arg2 + 0x10,"cqhci-pltfm init: failed: %d\n",piVar5 & 0xffffffff);
        uVar9 = piVar5 & 0xffffffff;
    }
code_r0x08006a4c:
    sdhci_cleanup_host(arg1);
code_r0x08006a54:
    return uVar9 & 0xffffffff;
}


// ===== sym.sdhci_msm_set_sdio_pm_flag @ 0x08006cf8 (size 24) =====

void sym.sdhci_msm_set_sdio_pm_flag(ulong noname_0,int64_t arg1)

{
    *(arg1 + 0x608) = *(arg1 + 0x608) & 0xfffffffd;
    return;
}


// ===== sym.pm_runtime_put_noidle @ 0x08006d10 (size 120) =====

void sym.pm_runtime_put_noidle(uint32_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    puVar1 = arg1 + 0x1f8;
    uVar6 = *puVar1;
    do {
        uVar5 = uVar6;
        if (uVar5 == 0) {
            return;
        }
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar6 = uVar2;
            if (uVar2 != uVar5) goto code_r0x08006d40;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar5 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006d40:
        if (uVar5 == uVar2) {
            return;
        }
    } while( true );
}


// ===== sym.sdhci_msm_bus_get_and_set_vote @ 0x08006d88 (size 284) =====

void sym.sdhci_msm_bus_get_and_set_vote(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    uint *puVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x690);
    if (iVar5 == 0) {
        return;
    }
    iVar4 = *(iVar5 + 0x28);
    if ((iVar4 == 0) && (*(iVar5 + 0x30) == 0)) {
        return;
    }
    iVar2 = *(iVar5 + 0x20);
    if (iVar2 == 0) {
        iVar6 = -1;
    }
    else {
        iVar6 = 0;
        do {
            if (arg2 <= *(*(iVar5 + 0x18) + iVar6 * 4)) goto code_r0x08006df4;
            iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
        iVar6 = iVar2 + -1;
    }
code_r0x08006df4:
    if (*(iVar5 + 0x38) != iVar6) {
        iVar7 = *(*(arg1 + 0x580) + 0xa8);
        puVar8 = *(*(iVar5 + 0x10) + iVar6 * 0x10 + 8);
        if (iVar4 == 0) {
            iVar2 = 0;
            iVar4 = *(iVar5 + 0x30);
        }
        else {
            iVar2 = icc_set_bw(iVar4,*puVar8,puVar8[2]);
            iVar4 = *(iVar5 + 0x30);
        }
        if (iVar4 == 0) {
            bVar1 = false;
        }
        else {
            iVar3 = icc_set_bw(iVar4,puVar8[4],puVar8[6]);
            bVar1 = iVar3 != 0;
        }
        if ((iVar2 != 0) || (bVar1)) {
            iVar4 = *(iVar7 + 0x48);
            iVar5 = *(iVar4 + 0x78);
            if (iVar5 == 0) {
                iVar5 = *(iVar4 + 8);
            }
            _printk(0x800182b,iVar5);
        }
        else {
            *(iVar5 + 0x38) = iVar6;
        }
        return;
    }
    return;
}


// ===== sym.sdhci_msm_bus_unregister @ 0x08006ea4 (size 68) =====

void sym.sdhci_msm_bus_unregister(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x110);
    if (*(iVar1 + 0x28) != 0) {
        icc_put();
    }
    if (*(iVar1 + 0x30) != 0) {
        icc_put();
    }
    return;
}


// ===== sym.clk_bulk_disable_unprepare @ 0x08006ee8 (size 68) =====

void sym.clk_bulk_disable_unprepare(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    clk_bulk_disable(5,arg1);
    clk_bulk_unprepare(5,arg1);
    return;
}


// ===== sym.sdhci_msm_writew @ 0x08006f2c (size 100) =====

void sym.sdhci_msm_writew(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__sdhci_msm_check_write(arg1,arg2,arg3);
    sym.writew_relaxed(arg2 & 0xffffffff,*(arg1 + 0x18) + arg3);
    if (uVar1 != 0) {
        sym.sdhci_msm_check_power_status(arg1,uVar1);
    }
    return;
}


// ===== sym.sdhci_msm_writeb @ 0x08006f90 (size 104) =====

void sym.sdhci_msm_writeb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.__sdhci_msm_check_write(arg1,arg2 & 0xff,arg3);
    sym.writeb_relaxed(arg2 & 0xffffffff,*(arg1 + 0x18) + arg3);
    if (uVar1 != 0) {
        sym.sdhci_msm_check_power_status(arg1,uVar1);
    }
    return;
}


// ===== sym.sdhci_msm_set_clock @ 0x08006ff8 (size 348) =====

void sym.sdhci_msm_set_clock(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint uVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        *(arg1 + 0x608) = 0;
        *(*(arg1 + 0x48) + 0x640) = 0;
    }
    else {
        sym.sdhci_msm_hc_select_mode(arg1);
        sym.msm_set_clock_rate_for_bus_mode(arg1,arg2 & 0xffffffff);
        if (*(arg1 + 0x689) == '\0') {
            uVar3 = *(arg1 + 0x608);
            cVar1 = *(*(arg1 + 0x48) + 0x41f);
            if (cVar1 == '\0') {
                uVar3 = uVar3 >> 3;
            }
            else if (cVar1 == '\x02') {
                uVar3 = uVar3 >> 1;
            }
            sym.sdhci_msm_bus_get_and_set_vote(arg1,uVar3);
        }
    }
    pcVar4 = *(*(arg1 + 0x40) + 0x20);
    if (pcVar4 == NULL) {
        sym.writew(0,*(arg1 + 0x18) + 0x2c);
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
            __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar4,0x80003d0);
        }
        (*pcVar4)(arg1,0,0x2c);
    }
    if (arg2 != 0) {
        pcVar4 = *(*(arg1 + 0x40) + 8);
        if (pcVar4 == NULL) {
            uVar2 = sym.readw(*(arg1 + 0x18) + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar4,0x80003f0);
            uVar2 = (*pcVar4)(arg1,0x2c);
        }
        sdhci_enable_clk(arg1,uVar2);
    }
    return;
}


// ===== sym.sdhci_msm_cqe_irq @ 0x08007154 (size 184) =====

uint64_t sym.sdhci_msm_cqe_irq(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    uVar3 = arg2 & 0xffffffff;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1 + 0x8e0),"%s: intmask: 0x%x\n","sdhci_msm_log_irq",uVar3);
    }
    uVar1 = sdhci_cqe_irq(arg1,uVar3,&uStack_30 + 4,&uStack_30);
    if ((uVar1 & 1) != 0) {
        cqhci_irq(*(arg1 + 0x48),uVar3,uStack_30._4_4_,uStack_30 & 0xffffffff);
        uVar3 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.sdhci_msm_get_max_clock;
    uVar3 = clk_round_rate(*(iVar2 + 0x5c0),0xffffffffffffffff);
    return uVar3;
}


// ===== sym.sdhci_msm_get_max_clock @ 0x0800720c (size 44) =====

void sym.sdhci_msm_get_max_clock(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    clk_round_rate(*(arg1 + 0x5c0),0xffffffffffffffff);
    return;
}


// ===== sym.sdhci_msm_get_min_clock @ 0x08007238 (size 20) =====

ulong sym.sdhci_msm_get_min_clock(void)

{
    return 400000;
}


// ===== sym.sdhci_msm_get_max_timeout_count @ 0x0800724c (size 16) =====

ulong sym.sdhci_msm_get_max_timeout_count(int64_t arg1)

{
    return 0;
}


// ===== sym.sdhci_msm_set_timeout @ 0x0800725c (size 260) =====

void sym.sdhci_msm_set_timeout(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x48) + 0x640);
    if (uVar1 == 0) {
        uVar1 = *(arg1 + 0x30c);
    }
    *(arg1 + 0x300) = uVar1 / 4000;
    __sdhci_set_timeout(arg1,arg2);
    pcVar2 = *(*(arg1 + 0x40) + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = sym.readb(*(arg1 + 0x18) + 0x2e);
    }
    else {
        __cfi_slowpath_diag(0x68f62952c0735e6d,pcVar2,0x8000410);
        uVar1 = (*pcVar2)(arg1,0x2e);
    }
    if ((((arg2 != 0) && (*(arg2 + 0x28) != 0)) && (*(arg1 + 0x30c) - 0x61a81U < 49600000)) &&
       (*(arg1 + 0x30c) * 10 < 0x8000 << (uVar1 & 0x1f))) {
        *(arg1 + 0x500) = 22000000000;
    }
    return;
}


// ===== sym.sdhci_msm_reset @ 0x08007360 (size 80) =====

void sym.sdhci_msm_reset(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 & 1U) != 0) {
        if ((*(*(arg1 + 0x48) + 1000) >> 0x17 & 1) != 0) {
            cqhci_deactivate();
        }
    }
    sdhci_reset(arg1,arg2 & 0xffffffff);
    return;
}


// ===== sym.sdhci_msm_set_uhs_signaling @ 0x080073b0 (size 1708) =====

void sym.sdhci_msm_set_uhs_signaling(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x48);
    uVar2 = arg2;
    iVar11 = *(arg1 + 0x678);
    pcVar7 = *(*(arg1 + 0x40) + 8);
    if (pcVar7 == NULL) {
        uVar1 = sym.readw(*(arg1 + 0x18) + 0x3e);
    }
    else {
        __cfi_slowpath_diag(0x2c6d0734da8f62f6,pcVar7,0x80003f0);
        uVar1 = (*pcVar7)(arg1,0x3e);
    }
    uVar1 = uVar1 & 0xfffffff8;
    uVar8 = uVar1;
    if (uVar2 - 4 < 7) {
    //switch table (7 cases) at 0x8001fc8
        switch(*((uVar2 - 4) * 4 + 0x8001fc8) + 0x800740c) {
        case 0x8007420:
            uVar8 = uVar1 | 3;
            break;
        case 0x800742c:
            uVar8 = uVar1 | 4;
            break;
        case 0x8007438:
            uVar8 = uVar1 | 1;
            break;
        case 0x8007444:
            uVar8 = uVar1 | 2;
        }
    }
    if (*(arg1 + 0x30c) < 0x5f5e101) {
        if ((uVar2 < 0xb) && ((1 << (uVar2 & 0x1f) & 0x640U) != 0)) {
            uVar8 = uVar1;
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar11 + 0x3c));
        sym.writel_relaxed(uVar2 | 0x40000000,*(arg1 + 0x18) + *(iVar11 + 0x3c));
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar11 + 0x3c));
        sym.writel_relaxed(uVar2 | 0x20000000,*(arg1 + 0x18) + *(iVar11 + 0x3c));
        *(arg1 + 0x63a) = 0;
    }
    pcVar7 = *(*(arg1 + 0x40) + 0x20);
    if (pcVar7 == NULL) {
        sym.writew(uVar8,*(arg1 + 0x18) + 0x3e);
    }
    else {
        if (pcVar7 != sym.__typeid__ZTSFvP10sdhci_hosttiE_global_addr) {
            __cfi_slowpath_diag(0xc07d8141d2ac6193,pcVar7,0x80003d0);
        }
        (*pcVar7)(arg1,uVar8,0x3e);
    }
    if (*(iVar9 + 0x420) != '\n') {
        return;
    }
    if (*(arg1 + 0x30c) < 0x5f5e101) {
        return;
    }
    if ((*(arg1 + 0x639) == '\0') && (*(iVar9 + 0x423) == '\0')) {
        return;
    }
    if (*(arg1 + 0x63a) != '\0') {
        return;
    }
    iVar11 = *(arg1 + 0x48);
    iVar9 = *(arg1 + 0x678);
    iVar3 = sym.msm_init_cm_dll(arg1,0);
    if (iVar3 != 0) goto code_r0x080079ac;
    if (*(iVar11 + 0x423) == '\0') {
        iVar3 = sym.msm_config_cm_dll_phase(arg1,*(arg1 + 0x63b));
        if (iVar3 != 0) goto code_r0x080079ac;
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar9 + 0x3c));
        sym.writel_relaxed(uVar2 | 1,*(arg1 + 0x18) + *(iVar9 + 0x3c));
    }
    if (*(arg1 + 0x63c) == '\0') {
        iVar4 = *(arg1 + 0x678);
        iVar11 = *(arg1 + 0x48);
        iVar9 = 0x6c;
        if (*(arg1 + 0x688) != '\0') {
            iVar9 = 0x70;
        }
        if ((*(arg1 + 0x860) == 0) || (uVar2 = *(*(arg1 + 0x860) + 0x10), uVar2 == 0)) {
            uVar2 = 0x80040873;
        }
        sym.writel_relaxed(uVar2,*(arg1 + 0x18) + *(iVar4 + iVar9));
        if (*(iVar11 + 0x423) != '\0') {
            uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x5c));
            sym.writel_relaxed(uVar2 | 2,*(arg1 + 0x18) + *(iVar4 + 0x5c));
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 100));
        sym.writel_relaxed(uVar2 | 1,*(arg1 + 0x18) + *(iVar4 + 100));
        iVar9 = ktime_get();
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x40));
        if ((uVar2 >> 0xb & 1) == 0) {
            do {
                iVar11 = ktime_get();
                if (iVar9 + 1000000 < iVar11) {
                    uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x40));
                    break;
                }
                usleep_range_state(3,10,2);
                uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x40));
            } while ((uVar2 >> 0xb & 1) == 0);
        }
        if ((uVar2 >> 0xb & 1) != 0) {
            if (*(arg1 + 0x638) == '\0') {
                uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x60));
                sym.writel_relaxed(uVar2 | 8,*(arg1 + 0x18) + *(iVar4 + 0x60));
            }
            DataSynchronizationBarrier(3,2,0);
code_r0x08007928:
            *(arg1 + 0x63a) = 1;
            return;
        }
        iVar9 = *(*(arg1 + 0x48) + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(*(arg1 + 0x48) + 8);
        }
        uVar5 = 0x8001b3f;
        pcVar6 = "sdhci_msm_cm_dll_sdc4_calibration";
    }
    else {
        iVar9 = *(arg1 + 0x678);
        iVar3 = sym.msm_init_cm_dll(arg1,0);
        if ((iVar3 != 0) || (iVar3 = sym.msm_config_cm_dll_phase(arg1,*(arg1 + 0x63b)), iVar3 != 0))
        goto code_r0x080079ac;
        piVar10 = arg1 + 0x18;
        uVar2 = sym.readl_relaxed(*piVar10 + *(iVar9 + 0x3c));
        sym.writel_relaxed(uVar2 | 1,*piVar10 + *(iVar9 + 0x3c));
        uVar2 = sym.readl_relaxed(*piVar10 + *(iVar9 + 0x5c));
        sym.writel_relaxed(uVar2 & 0xfffffffe,*piVar10 + *(iVar9 + 0x5c));
        uVar2 = sym.readl_relaxed(*piVar10 + 0x178);
        sym.writel_relaxed(uVar2 & 0xfffffffe,*piVar10 + 0x178);
        uVar2 = sym.readl_relaxed(*piVar10 + 0x178);
        sym.writel_relaxed(uVar2 | 2,*piVar10 + 0x178);
        uVar2 = sym.readl_relaxed(*piVar10 + *(iVar9 + 0x5c));
        sym.writel_relaxed(uVar2 & 0xffffffbf,*piVar10 + *(iVar9 + 0x5c));
        sym.writel_relaxed(0x11800ec,*piVar10 + 0x130);
        sym.writel_relaxed(0x3011111,*piVar10 + 0x134);
        sym.writel_relaxed(0x1201000,*piVar10 + 0x138);
        sym.writel_relaxed(4,*piVar10 + 0x13c);
        sym.writel_relaxed(0xcb732020,*piVar10 + 0x140);
        sym.writel_relaxed(0xb19,*piVar10 + 0x144);
        sym.writel_relaxed(0x4e2,*piVar10 + 0x150);
        sym.writel_relaxed(0,*piVar10 + 0x14c);
        sym.writel_relaxed(0x16334,*piVar10 + 0x160);
        uVar2 = sym.readl_relaxed(*piVar10 + 0x130);
        sym.writel_relaxed(uVar2 | 0x10000,*piVar10 + 0x130);
        uVar2 = sym.readl_relaxed(*piVar10 + 0x130);
        sym.writel_relaxed(uVar2 & 0xfffeffff,*piVar10 + 0x130);
        uVar2 = sym.readl_relaxed(*piVar10 + 0x130);
        sym.writel_relaxed(uVar2 | 0x20000,*piVar10 + 0x130);
        uVar2 = sym.readl_relaxed(*piVar10 + 0x138);
        sym.writel_relaxed(uVar2 | 0x10000,*piVar10 + 0x138);
        iVar11 = ktime_get();
        uVar8 = sym.readl_relaxed(*piVar10 + 0x164);
        if ((uVar8 & 1) == 0) {
            do {
                iVar4 = ktime_get();
                if (iVar11 + 50000 < iVar4) {
                    uVar8 = sym.readl_relaxed(*piVar10 + 0x164);
                    break;
                }
                usleep_range_state(1,1,2);
                uVar8 = sym.readl_relaxed(*piVar10 + 0x164);
            } while ((uVar8 & 1) == 0);
        }
        if ((uVar8 & 1) != 0) {
            uVar2 = sym.readl_relaxed(*piVar10 + 0x164);
            if ((uVar2 & 0x7000000) == 0) {
                uVar2 = sym.readl_relaxed(*piVar10 + *(iVar9 + 0x5c));
                sym.writel_relaxed(uVar2 | 0x40,*piVar10 + *(iVar9 + 0x5c));
                goto code_r0x08007928;
            }
            iVar9 = *(*(arg1 + 0x48) + 0x78);
            if (iVar9 == 0) {
                iVar9 = *(*(arg1 + 0x48) + 8);
            }
            _printk(0x800150a,iVar9,"sdhci_msm_cdclp533_calibration",uVar2 & 0x7000000);
            iVar3 = -0x16;
            goto code_r0x080079ac;
        }
        iVar9 = *(*(arg1 + 0x48) + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(*(arg1 + 0x48) + 8);
        }
        uVar5 = 0x8001ed9;
        pcVar6 = "sdhci_msm_cdclp533_calibration";
    }
    _printk(uVar5,iVar9,pcVar6);
    iVar3 = -0x6e;
code_r0x080079ac:
    iVar9 = *(*(arg1 + 0x48) + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(*(arg1 + 0x48) + 8);
    }
    _printk(0x800196f,iVar9,iVar3);
    return;
}


// ===== sym.sdhci_msm_hw_reset @ 0x08007a5c (size 272) =====

void sym.sdhci_msm_hw_reset(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x580);
    if (*(arg1 + 0x850) == 0) {
        _dev_err(iVar3 + 0x10,"%s: failed, err = %d\n","sdhci_msm_hw_reset",0xffffffa1);
    }
    else {
        *(arg1 + 0x849) = 1;
        sym.sdhci_msm_registers_save(arg1);
        iVar1 = *(arg1 + 0x48);
        if (*(iVar1 + 0x3ea) < '\0') {
            pcVar2 = *(*(iVar1 + 0x650) + 8);
            if (1 < (pcVar2 + -0x8003690 >> 3 | pcVar2 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar2,0x8000430);
                iVar1 = *(arg1 + 0x48);
            }
            (*pcVar2)(iVar1);
            *(*(arg1 + 0x48) + 0x664) = 0;
        }
        sym.sdhci_msm_gcc_reset(iVar3 + 0x10,arg1);
        sym.sdhci_msm_registers_restore(arg1);
        *(arg1 + 0x849) = 0;
        if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
            ipc_log_string(*(arg1 + 0x8e0),"%s: HW reset done\n","sdhci_msm_hw_reset");
        }
    }
    return;
}


// ===== sym.sdhci_msm_dump_vendor_regs @ 0x08007b6c (size 1440) =====

void sym.sdhci_msm_dump_vendor_regs(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int iVar10;
    int64_t *piVar11;
    code *pcVar12;
    uint64_t uVar13;
    ulong *puVar14;
    uint64_t uVar15;
    ulong *puVar16;
    int64_t iVar17;
    uint32_t uVar18;
    ulong unaff_x30;
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
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    iVar17 = *(arg1 + 0x678);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar7 = *(*(arg1 + 0x48) + 0x78);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    if (iVar7 == 0) {
        iVar7 = *(*(arg1 + 0x48) + 8);
    }
    _printk(0x80009b6,iVar7);
    piVar11 = *(arg1 + 0x630);
    if (piVar11 == NULL) goto code_r0x08007d44;
    puVar14 = *(arg1 + 0x678);
    pcVar12 = **(arg1 + 0x670);
    if (2 < (pcVar12 + -0x8003600 >> 3 | pcVar12 << 0x3d)) goto code_r0x080080e8;
    do {
        uVar3 = (*pcVar12)(arg1,*(puVar14 + 2));
        uVar9 = 0;
        if (uVar3 < 0x49) {
            uVar9 = 0x48;
        }
        if (*(piVar11 + 0x3e) != '\0') {
            uVar9 = uVar9 | 0x900;
        }
        _printk(0x80009f5);
        pcVar12 = *(*piVar11 + 0x10);
        if (pcVar12 == NULL) {
            uVar4 = sym.readl_relaxed(piVar11[1] + uVar9 + 0x150);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
            uVar4 = (*pcVar12)(piVar11,uVar9 + 0x150);
        }
        pcVar12 = *(*piVar11 + 0x10);
        if (pcVar12 == NULL) {
            uVar5 = sym.readl_relaxed(piVar11[1] + uVar9 + 0x154);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
            uVar5 = (*pcVar12)(piVar11,uVar9 + 0x154);
        }
        _printk(0x8000e84,uVar4,uVar5);
        uVar15 = uVar9 + 0x110;
        uVar13 = 0;
        do {
            pcVar12 = *(*piVar11 + 0x10);
            if (pcVar12 == NULL) {
                uVar4 = sym.readl_relaxed(piVar11[1] + uVar15);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar12,0x8000470);
                uVar4 = (*pcVar12)(piVar11,uVar15 & 0xffffffff);
            }
            _printk(0x80019ef,uVar13 & 0xffffffff,uVar4);
            uVar13 = uVar13 + 1;
            uVar15 = uVar15 + 4;
        } while (uVar13 != 0x10);
        _printk(0x80010ef);
code_r0x08007d44:
        iVar7 = *(*(arg1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(arg1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 4));
        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0xc));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 8));
        _printk(0x8001409,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(arg1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(arg1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x40));
        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x3c));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 100));
        _printk(0x8001f06,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(arg1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(arg1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x68));
        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x74));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x70));
        _printk(0x800100b,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(arg1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(arg1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x10));
        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x48));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x4c));
        _printk(0x80018ac,iVar7,uVar4,uVar5,uVar6);
        iVar7 = *(*(arg1 + 0x48) + 0x78);
        if (iVar7 == 0) {
            iVar7 = *(*(arg1 + 0x48) + 8);
        }
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x44));
        uVar5 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x50));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x60));
        _printk(0x80019a2,iVar7,uVar4,uVar5,uVar6);
        sym.sdhci_msm_dump_pwr_ctrl_regs(arg1);
        iVar10 = 0;
        uVar9 = 0;
        do {
            if (uVar9 < 0x3c) {
                uVar2 = 0x3b - uVar9;
                uVar1 = 0;
                if (uVar9 < 0x3d) {
                    uVar1 = 0x3c - uVar9;
                }
                if (6 < uVar2) {
                    uVar2 = 7;
                }
                uVar18 = 0;
                uVar13 = uVar9 << 2;
                do {
                    sym.writel_relaxed(iVar10 << (*(iVar17 + 0x1c) & 0x1f) | uVar18 | *(iVar17 + 0x20),
                                       *(arg1 + 0x18) + *(iVar17 + 0x18));
                    uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar17 + 0x38));
                    if (uVar1 == uVar18) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8008080);
                        (*pcVar12)();
                    }
                    if (0xef < uVar13) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(1,0x8008084);
                        (*pcVar12)();
                    }
                    *(&uStack_160 + uVar13) = uVar4;
                    uVar18 = uVar18 + 1;
                    uVar13 = uVar13 + 4;
                } while (uVar2 + 1 != uVar18);
                uVar9 = uVar9 + uVar18;
            }
            iVar10 = iVar10 + 1;
        } while (iVar10 != 7);
        piVar11 = 0x8000670;
        pcVar8 = 0xfffffffffffffffc;
        puVar16 = &uStack_158;
        do {
            iVar7 = *(*(arg1 + 0x48) + 0x78);
            if (iVar7 == 0) {
                iVar7 = *(*(arg1 + 0x48) + 8);
            }
            pcVar12 = pcVar8 + 4;
            puVar14 = puVar16 + 2;
            _printk(0x8000670,iVar7,pcVar12 & 0xffffffff,pcVar8 + 7,*(puVar16 + -1),*(puVar16 + -4),*puVar16,
                    *(puVar16 + 4));
            pcVar8 = pcVar12;
            puVar16 = puVar14;
        } while (pcVar12 < 0x38);
        *(arg1 + 0x8e8) = 0;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
code_r0x080080e8:
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar12,0x8000530);
    } while( true );
}


// ===== sym.__sdhci_msm_check_write @ 0x0800810c (size 368) =====

uint sym.__sdhci_msm_check_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = 0;
    uVar2 = arg2;
    if (0x23 < arg3 - 0xc) {
        if (arg3 != 0x3e) {
            return 0;
        }
        uVar3 = 8;
        if ((arg2 & 8U) != 0) {
            uVar3 = 4;
        }
        goto code_r0x08008230;
    }
    //switch table (36 cases) at 0x8001fe4
    switch(*((arg3 - 0xc) * 4 + 0x8001fe4) + 0x8008148) {
    case 0x800815c:
        uVar3 = 0;
        *(arg1 + 0x684) = uVar2 & 0xffff;
        break;
    case 0x800818c:
        if ((((uVar2 >> 3 & 1) != 0) && ((*(arg1 + 0x8dc) & 0xff) != 0)) && ((*(arg1 + 0x8dc) >> 3 & 1) == 0)) {
            __const_udelay(0x8638);
        }
        *(arg1 + 0x8dc) = arg2;
        if (*(arg1 + 0x680) != '\0') {
            if ((((*(arg1 + 0x684) >> 4 & 1) != 0) && (uVar2 = (uVar2 & 0xffff) >> 8 & 0x3f, uVar2 != 0x13)) &&
               (uVar2 != 0x15)) {
                sym.sdhci_msm_set_cdr(arg1);
                return 0;
            }
            iVar4 = *(arg1 + 0x678);
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x3c));
            uVar2 = uVar1 & 0xfffdffff | 0x80000;
            if (uVar2 != uVar1) {
                sym.writel_relaxed(uVar2,*(arg1 + 0x18) + *(iVar4 + 0x3c));
                return 0;
            }
        }
        uVar3 = 0;
        break;
    case 0x8008208:
        uVar3 = 1;
        if ((arg2 & 0xffffU) != 0) {
            uVar3 = 2;
        }
        goto code_r0x08008230;
    case 0x800821c:
        if ((arg2 & 1U) == 0) {
            return 0;
        }
        if (*(arg1 + 0x310) == '\0') {
            return 0;
        }
        uVar3 = 1;
code_r0x08008230:
        *(arg1 + 0x660) = 0;
        DataSynchronizationBarrier(3,3,0);
    }
    return uVar3;
}


// ===== sym.writew_relaxed @ 0x0800827c (size 120) =====

void sym.writew_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffU,0x10,arg2,0x800829c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffU,0x10,arg2,0x80082c0);
    return;
}


// ===== sym.sdhci_msm_check_power_status @ 0x080082f4 (size 740) =====

void sym.sdhci_msm_check_power_status(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    code *pcVar5;
    code *unaff_x22;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uVar4 = arg2 & 0xffffffff;
    iVar6 = *(arg1 + 0x678);
    pcVar5 = *(arg1 + 0x48);
    if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1 + 0x8e0),"%s: request %d curr_pwr_state %x curr_io_level %x\n",
                       "sdhci_msm_check_power_status",uVar4,*(arg1 + 0x640),*(arg1 + 0x644));
    }
    if (*(arg1 + 0x668) == '\0') {
        unaff_x22 = **(arg1 + 0x670);
        if (2 < (unaff_x22 + -0x8003600 >> 3 | unaff_x22 << 0x3d)) goto code_r0x08008590;
        goto code_r0x08008404;
    }
    do {
        uVar1 = arg2;
        if (((uVar1 >> 3 & 1) == 0) || (*(arg1 + 0x310) != '\0')) {
            if (((*(arg1 + 0x640) & uVar1) == 0) && (((*(arg1 + 0x644) & uVar1) == 0 && (*(arg1 + 0x660) == '\0')))) {
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_70 = 0;
                init_wait_entry(&uStack_70,0);
                unaff_x22 = arg1 + 0x648;
                prepare_to_wait_event(unaff_x22,&uStack_70,2);
                if (*(arg1 + 0x660) == '\0') {
                    iVar6 = 0x4e2;
                    do {
                        iVar6 = schedule_timeout(iVar6);
                        prepare_to_wait_event(unaff_x22,&uStack_70,2);
                        if (iVar6 == 0 && *(arg1 + 0x660) != '\0') {
                            iVar6 = 1;
                        }
                    } while ((*(arg1 + 0x660) == '\0') && (iVar6 != 0));
                    finish_wait(unaff_x22,&uStack_70);
                    if (iVar6 != 0) goto code_r0x0800846c;
                    iVar3 = *(*(arg1 + 0x48) + 0x78);
                    if (iVar3 == 0) {
                        iVar3 = *(*(arg1 + 0x48) + 8);
                    }
                    _dev_warn(*(arg1 + 0x580) + 0x10,"%s: pwr_irq for req: (%d) timed out\n",iVar3,uVar4);
                    sym.sdhci_msm_dump_pwr_ctrl_regs(arg1);
                    iVar3 = *(pcVar5 + 0x480);
                }
                else {
                    finish_wait(unaff_x22,&uStack_70);
                    iVar3 = *(pcVar5 + 0x480);
                }
            }
            else {
code_r0x0800846c:
                iVar3 = *(pcVar5 + 0x480);
            }
            if ((iVar3 != 0) && (unaff_x22 = *(*(pcVar5 + 0x3a0) + 0x30), unaff_x22 != NULL)) {
                __cfi_slowpath_diag(0x5149616ef9bb8d20,unaff_x22,0x8000330);
                iVar2 = (*unaff_x22)(pcVar5);
                if (((uVar1 >> 1 & 1) != 0) && (iVar2 == 0)) {
                    *(arg1 + 0x310) = 0;
                    pcVar5 = *(*(arg1 + 0x40) + 0x28);
                    if (pcVar5 == NULL) {
                        sym.writeb(*(arg1 + 0x18),*(arg1 + 0x18) + 0x29);
                    }
                    else {
                        if (pcVar5 != sym.__typeid__ZTSFvP10sdhci_hosthiE_global_addr) {
                            __cfi_slowpath_diag(0xd8eeb9de3514c675,pcVar5,0x80003b0);
                        }
                        (*pcVar5)(arg1,0,0x29);
                    }
                }
            }
            if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
                ipc_log_string(*(arg1 + 0x8e0),"%s: request %d done\n","sdhci_msm_check_power_status",uVar4);
            }
        }
        do {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_48) {
                return;
            }
            __stack_chk_fail();
code_r0x08008590:
            __cfi_slowpath_diag(0x4f528f009ba945ce,unaff_x22,0x8000310);
code_r0x08008404:
            uVar1 = (*unaff_x22)(arg1,*(iVar6 + 0x14));
        } while (((arg2 & 0xcU) != 0) && ((uVar1 >> 0x1d & 1) == 0));
    } while( true );
}


// ===== sym.sdhci_msm_set_cdr @ 0x080085d8 (size 100) =====

void sym.sdhci_msm_set_cdr(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x678);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar3 + 0x3c));
    uVar1 = uVar2 & 0xfff7ffff | 0x20000;
    if (uVar1 != uVar2) {
        sym.writel_relaxed(uVar1,*(arg1 + 0x18) + *(iVar3 + 0x3c));
    }
    return;
}


// ===== sym.sdhci_msm_dump_pwr_ctrl_regs @ 0x0800863c (size 348) =====

void sym.sdhci_msm_dump_pwr_ctrl_regs(int64_t arg1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x678);
    iVar4 = *(*(arg1 + 0x48) + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(*(arg1 + 0x48) + 8);
    }
    pcVar5 = **(arg1 + 0x670);
    if (2 < (pcVar5 + -0x8003600 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar5,0x8000350);
    }
    uVar1 = (*pcVar5)(arg1,*(iVar6 + 0x28));
    pcVar5 = **(arg1 + 0x670);
    if (2 < (pcVar5 + -0x8003600 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar5,0x8000370);
    }
    uVar2 = (*pcVar5)(arg1,*(iVar6 + 0x2c));
    pcVar5 = **(arg1 + 0x670);
    if (2 < (pcVar5 + -0x8003600 >> 3 | pcVar5 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar5,0x8000390);
    }
    uVar3 = (*pcVar5)(arg1,*(iVar6 + 0x34));
    _printk(0x8000a56,iVar4,uVar1,uVar2,uVar3);
    return;
}


// ===== sym.writeb @ 0x08008798 (size 116) =====

void sym.writeb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(0,8,arg1,0x800879c);
    DataMemoryBarrier(0,2);
    *arg1 = 0;
    log_post_write_mmio(0,8,arg1,0x80087dc);
    return;
}


// ===== sym.writeb_relaxed @ 0x0800880c (size 120) =====

void sym.writeb_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffU,8,arg2,0x800882c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffU,8,arg2,0x8008850);
    return;
}


// ===== sym.sdhci_msm_hc_select_mode @ 0x08008884 (size 520) =====

void sym.sdhci_msm_hc_select_mode(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg1 + 0x48) + 0x420) == '\n') || ((*(arg1 + 0x2f5) >> 5 & 1) != 0)) {
        iVar6 = *(arg1 + 0x678);
        uVar1 = *(*(arg1 + 0x48) + 0x423);
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x44));
        sym.writel_relaxed(uVar2 | 0x300,*(arg1 + 0x18) + *(iVar6 + 0x44));
        if (((*(arg1 + 0x639) == '\0') && ((uVar1 & 1) == 0)) || (*(arg1 + 0x63a) != '\0')) {
            iVar5 = *(arg1 + 0x608);
        }
        else {
            uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x44));
            sym.writel_relaxed(uVar2 | 0x340000,*(arg1 + 0x18) + *(iVar6 + 0x44));
            iVar5 = *(arg1 + 0x608);
        }
        if ((iVar5 == 0) && (*(arg1 + 0x63c) == '\0')) {
            iVar5 = ktime_get();
            uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x40));
            if ((uVar3 & 0x880) == 0) {
                do {
                    iVar4 = ktime_get();
                    if (iVar5 + 1000000 < iVar4) {
                        uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x40));
                        break;
                    }
                    usleep_range_state(3,10,2);
                    uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x40));
                } while ((uVar3 & 0x880) == 0);
            }
            if ((uVar3 & 0x880) == 0) {
                iVar6 = *(*(arg1 + 0x48) + 0x78);
                if (iVar6 == 0) {
                    iVar6 = *(*(arg1 + 0x48) + 8);
                }
                _printk(0x800177f,iVar6);
            }
        }
        DataSynchronizationBarrier(3,2,0);
    }
    else {
        iVar6 = *(arg1 + 0x678);
        if (*(arg1 + 0x63c) == '\0') {
            uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x60));
            sym.writel_relaxed(uVar2 & 0xfffffff7,*(arg1 + 0x18) + *(iVar6 + 0x60));
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x44));
        sym.writel_relaxed(uVar2 & 0xfffffcff | 0x200,*(arg1 + 0x18) + *(iVar6 + 0x44));
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar6 + 0x44));
        sym.writel_relaxed(uVar2 & 0xffc3ffff,*(arg1 + 0x18) + *(iVar6 + 0x44));
        DataSynchronizationBarrier(3,2,0);
    }
    return;
}


// ===== sym.msm_set_clock_rate_for_bus_mode @ 0x08008a8c (size 300) =====

void sym.msm_set_clock_rate_for_bus_mode(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint uVar2;
    int iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    uint64_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x48) + 0x84);
    uVar5 = 1;
    if (uVar1 < 0xb && (1 << (uVar1 & 0x1f) & 0x580U) != 0) {
        uVar8 = 2;
        uVar5 = arg2 << 1;
    }
    else {
        if ((*(arg1 + 0x2f5) & 0x20) != 0) {
            uVar5 = 2;
        }
        uVar8 = uVar5;
        uVar5 = uVar5 * arg2;
        if ((uVar1 == 2) && (*(arg1 + 0x8d1) != '\0')) {
            uVar5 = 37000000;
        }
    }
    uVar6 = uVar5;
    uVar7 = *(arg1 + 0x5c0);
    iVar3 = dev_pm_opp_set_rate(**(arg1 + 0x48),uVar6);
    if (iVar3 == 0) {
        uVar4 = clk_get_rate(uVar7);
        uVar2 = 0;
        if (uVar8 != 0) {
            uVar2 = uVar4 / uVar8;
        }
        *(*(arg1 + 0x48) + 0x640) = uVar2;
        iVar9 = *(arg1 + 0x8e0);
        *(arg1 + 0x608) = uVar6;
        if ((iVar9 != 0) && (*(arg1 + 0x8e8) != '\0')) {
            uVar7 = clk_get_rate(uVar7);
            ipc_log_string(iVar9,"%s: Setting clock at rate %lu at timing %d\n","msm_set_clock_rate_for_bus_mode",
                           uVar7,uVar1);
        }
    }
    else {
        iVar9 = *(*(arg1 + 0x48) + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(*(arg1 + 0x48) + 8);
        }
        _printk(0x8000da1,iVar9,uVar6,uVar1);
    }
    return;
}


// ===== sym.writew @ 0x08008bb8 (size 124) =====

void sym.writew(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffU,0x10,arg2,0x8008bd8);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffU,0x10,arg2,0x8008c00);
    return;
}


// ===== sym.readw @ 0x08008c34 (size 124) =====

ushort sym.readw(int64_t arg1)

{
    ushort uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x10,arg1,0x8008c38);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x10,arg1,0x8008c7c);
    return uVar1;
}


// ===== sym.readb @ 0x08008cb4 (size 124) =====

uchar sym.readb(int64_t arg1)

{
    uchar uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(8,arg1,0x8008cb8);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,8,arg1,0x8008cfc);
    return uVar1;
}


// ===== sym.msm_init_cm_dll @ 0x08008d34 (size 1476) =====

uint sym.msm_init_cm_dll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uchar auVar3 [16];
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    ulong *puVar12;
    ulong *in_x18;
    ulong uVar13;
    uint uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar12 = *(arg1 + 0x48);
    iVar15 = *(arg1 + 0x678);
    cVar2 = *(puVar12 + 0x84);
    if (*(arg1 + 0x30c) >> 7 < 0xc35) {
        uVar7 = 400000;
    }
    else {
        uVar13 = *(arg1 + 0x5c0);
        uVar8 = clk_get_rate(uVar13);
        uVar7 = clk_round_rate(uVar13,uVar8);
        uVar7 = uVar7 >> (*(arg1 + 0x608) != *(arg1 + 0x30c));
    }
    iVar1 = arg1 + 0x2f0;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    piVar16 = arg1 + 0x18;
    uVar5 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x44));
    sym.writel_relaxed(uVar5 & 0xfffffffd,*piVar16 + *(iVar15 + 0x44));
    if (*(arg1 + 0x638) != '\0') {
        uVar6 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x3c));
        sym.writel_relaxed(uVar6 & 0xfffbffff,*piVar16 + *(iVar15 + 0x3c));
        uVar6 = sym.readl_relaxed(*piVar16 + *(iVar15 + 100));
        sym.writel_relaxed(uVar6 | 0x200000,*piVar16 + *(iVar15 + 100));
    }
    uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar6 | 0x40000000,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar6 | 0x20000000,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    if (*(arg1 + 0x85a) != '\0') {
        if (*(arg1 + 0x860) == 0) {
            uVar6 = 0x2c010800;
            sym.writel_relaxed(0x10,*piVar16 + *(iVar15 + 0x68));
        }
        else {
            sym.writel_relaxed(*(*(arg1 + 0x860) + 8),*(arg1 + 0x18) + *(iVar15 + 0x68));
            uVar6 = *(*(arg1 + 0x860) + 0xc);
        }
        sym.writel_relaxed(uVar6,*piVar16 + *(iVar15 + 0x74));
    }
    iVar10 = 0x6c;
    if (*(arg1 + 0x688) != '\0') {
        iVar10 = 0x70;
    }
    if ((*(arg1 + 0x860) == 0) || (uVar6 = *(*(arg1 + 0x860) + 0x10), uVar6 == 0)) {
        uVar6 = 0x80040873;
    }
    sym.writel_relaxed(uVar6,*(arg1 + 0x18) + *(iVar15 + iVar10));
    if (*(arg1 + 0x638) != '\0') {
        if (arg2 == 0) {
            uVar9 = sym.readl_relaxed(*piVar16 + *(iVar15 + 100));
            iVar10 = 4;
            if ((uVar9 & 0x40000) != 0) {
                iVar10 = 8;
            }
            uVar9 = iVar10 * uVar7;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar9;
            iVar11 = SUB164(auVar3 * ZEXT816(0xdfb23b0979b4b02f),0xb);
            if (9599999 < uVar9 % 19200000) {
                iVar11 = iVar11 + 1;
            }
            if (uVar7 < 100000000) {
                iVar10 = puVar12[0xf];
                if (iVar10 == 0) {
                    iVar10 = puVar12[1];
                }
                _printk(0x8000873,iVar10,"msm_init_cm_dll",uVar7);
            }
            uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 100));
            sym.writel_relaxed(uVar7 & 0xfffc03ff | iVar11 << 10,*piVar16 + *(iVar15 + 100));
        }
        if ((*(arg1 + 0x8d2) != '\0') && ((cVar2 == '\x06' || ((*(puVar12 + 0x3e5) & 1) != 0)))) {
            uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 100));
            sym.writel_relaxed(uVar7 | 0x80000,*piVar16 + *(iVar15 + 100));
        }
        __const_udelay(0x53e3);
    }
    if (*(arg1 + 0x860) != 0) {
        uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
        sym.writel_relaxed(**(arg1 + 0x860) | uVar7,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    }
    if (*(arg1 + 0x8d0) != '\0') {
        sym.writel_relaxed(0x2c010800,*(arg1 + 0x18) + *(iVar15 + 0x74));
        uVar6 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x68));
        uVar7 = 8;
        if (149999999 < *(arg1 + 0x608)) {
            uVar7 = 0x10;
        }
        sym.writel_relaxed(uVar7 | uVar6 & 0xffffff00,*(arg1 + 0x18) + *(iVar15 + 0x68));
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    usleep_range_state(0x37,0x3c,2);
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 & 0xbfffffff,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 & 0xdfffffff,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 | 0x40000000,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    uVar7 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 & 0xbfffffff,*(arg1 + 0x18) + *(iVar15 + 0x3c));
    if (*(arg1 + 0x638) != '\0') {
        uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 100));
        sym.writel_relaxed(uVar7 & 0xffdfffff,*piVar16 + *(iVar15 + 100));
    }
    uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 | 0x10000,*piVar16 + *(iVar15 + 0x3c));
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    usleep_range_state(0x2d,0x32,2);
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x3c));
    sym.writel_relaxed(uVar7 | 0x40000,*piVar16 + *(iVar15 + 0x3c));
    uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x40));
    if ((uVar7 >> 7 & 1) == 0) {
        uVar7 = 0xffffffce;
        do {
            bVar4 = 0xfffffffe < uVar7;
            uVar7 = uVar7 + 1;
            if (bVar4) {
                iVar10 = puVar12[0xf];
                if (iVar10 == 0) {
                    iVar10 = puVar12[1];
                }
                _dev_err(*puVar12,"%s: DLL failed to LOCK\n",iVar10);
                uVar14 = 0xffffff92;
                if ((uVar5 >> 1 & 1) == 0) goto code_r0x08009268;
                goto code_r0x08009244;
            }
            __const_udelay(0x10c7);
            uVar6 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x40));
        } while ((uVar6 >> 7 & 1) == 0);
    }
    uVar14 = 0;
    if ((uVar5 >> 1 & 1) != 0) {
code_r0x08009244:
        uVar7 = sym.readl_relaxed(*piVar16 + *(iVar15 + 0x44));
        sym.writel_relaxed(uVar7 | 2,*piVar16 + *(iVar15 + 0x44));
    }
code_r0x08009268:
    _raw_spin_unlock_irqrestore(iVar1,uVar8);
    return uVar14;
}


// ===== sym.msm_config_cm_dll_phase @ 0x080092f8 (size 552) =====

uint sym.msm_config_cm_dll_phase(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong *in_x18;
    uint uVar8;
    ulong *puVar9;
    int64_t iVar10;
    ulong *puVar11;
    int iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2 & 0xff;
    if (uVar4 < 0x10) {
        puVar9 = *(arg1 + 0x48);
        iVar10 = *(arg1 + 0x678);
        uVar5 = _raw_spin_lock_irqsave(arg1 + 0x2f0);
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar2 & 0xfff00000 | uVar2 & 0xffff | 0x90000,*(arg1 + 0x18) + *(iVar10 + 0x3c));
        iVar13 = *(arg1 + 0x678);
        puVar11 = *(arg1 + 0x48);
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar13 + 0x3c));
        if ((uVar2 >> 0x12 & 1) != 0) {
            uVar2 = 0xffffffce;
            do {
                bVar1 = 0xfffffffe < uVar2;
                uVar2 = uVar2 + 1;
                if (bVar1) {
                    iVar10 = puVar11[0xf];
                    uVar6 = *puVar11;
                    if (iVar10 == 0) {
                        iVar10 = puVar11[1];
                    }
                    uVar7 = 0;
                    goto code_r0x080094f0;
                }
                __const_udelay(0x10c7);
                uVar3 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar13 + 0x3c));
            } while ((uVar3 >> 0x12 & 1) != 0);
        }
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar2 & 0xff0fffff | obj.msm_config_cm_dll_phase.grey_coded_phase_table[arg2 & 0xff] << 0x14
                           ,*(arg1 + 0x18) + *(iVar10 + 0x3c));
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar2 | 0x40000,*(arg1 + 0x18) + *(iVar10 + 0x3c));
        iVar13 = *(arg1 + 0x678);
        puVar11 = *(arg1 + 0x48);
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar13 + 0x3c));
        if ((uVar2 >> 0x12 & 1) == 0) {
            iVar12 = -0x32;
code_r0x08009438:
            bVar1 = iVar12 != -1;
            iVar12 = iVar12 + 1;
            if (bVar1) goto code_r0x08009440;
            iVar10 = puVar11[0xf];
            uVar6 = *puVar11;
            if (iVar10 == 0) {
                iVar10 = puVar11[1];
            }
            uVar7 = 1;
code_r0x080094f0:
            _dev_err(uVar6,"%s: CK_OUT_EN bit is not %d\n",iVar10,uVar7);
            iVar10 = puVar9[0xf];
            if (iVar10 == 0) {
                iVar10 = puVar9[1];
            }
            _dev_err(*puVar9,"%s: Failed to set DLL phase: %d\n",iVar10,uVar4);
            uVar8 = 0xffffff92;
            goto code_r0x08009488;
        }
code_r0x0800945c:
        uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar10 + 0x3c));
        sym.writel_relaxed(uVar4 & 0xfff7ffff | 0x20000,*(arg1 + 0x18) + *(iVar10 + 0x3c));
        uVar8 = 0;
code_r0x08009488:
        _raw_spin_unlock_irqrestore(arg1 + 0x2f0,uVar5);
    }
    else {
        uVar8 = 0xffffffea;
    }
    return uVar8;
code_r0x08009440:
    __const_udelay(0x10c7);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar13 + 0x3c));
    if ((uVar2 >> 0x12 & 1) != 0) goto code_r0x0800945c;
    goto code_r0x08009438;
}


// ===== sym.sdhci_msm_registers_save @ 0x08009520 (size 900) =====

void sym.sdhci_msm_registers_save(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x678);
    piVar2 = *(*(arg1 + 0x48) + 0x658);
    if ((*(arg1 + 0x868) != '\0') || (*(arg1 + 0x849) != '\0')) {
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x44));
        *(arg1 + 0x878) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x2c));
        *(arg1 + 0x86c) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x50));
        *(arg1 + 0x87c) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x60));
        *(arg1 + 0x880) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x2c);
        }
        *(arg1 + 0x884) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x3c);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x3c);
        }
        *(arg1 + 0x894) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x34));
        *(arg1 + 0x870) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x38);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x38);
        }
        *(arg1 + 0x890) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x34);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x34);
        }
        *(arg1 + 0x88c) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x28);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x28);
        }
        *(arg1 + 0x888) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x54));
        *(arg1 + 0x874) = uVar1;
        pcVar3 = **(arg1 + 0x40);
        if (pcVar3 == NULL) {
            uVar1 = sym.readl(*(arg1 + 0x18) + 0x44);
        }
        else {
            __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar3,0x8000450);
            uVar1 = (*pcVar3)(arg1,0x44);
        }
        *(arg1 + 0x898) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x18));
        *(arg1 + 0x89c) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x3c));
        *(arg1 + 0x8a0) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 100));
        *(arg1 + 0x8a4) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x3c));
        *(arg1 + 0x8a0) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x68));
        *(arg1 + 0x8a8) = uVar1;
        uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(iVar4 + 0x74));
        *(arg1 + 0x8ac) = uVar1;
        if (piVar2 != NULL) {
            pcVar3 = *(*piVar2 + 0x10);
            if (pcVar3 == NULL) {
                uVar1 = sym.readl_relaxed(piVar2[1] + 0xa00);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar3,0x8000470);
                uVar1 = (*pcVar3)(piVar2,0xa00);
            }
            *(arg1 + 0x8b0) = uVar1;
        }
        *(arg1 + 0x869) = 1;
        if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
            ipc_log_string(*(arg1 + 0x8e0),"%s: Registers saved\n","sdhci_msm_registers_save");
        }
    }
    return;
}


// ===== sym.sdhci_msm_registers_restore @ 0x080098a4 (size 1452) =====

void sym.sdhci_msm_registers_restore(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    code *pcVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x48);
    iVar9 = *(arg1 + 0x678);
    uVar1 = *(iVar6 + 0x410);
    uVar2 = *(iVar6 + 0x420);
    piVar7 = *(iVar6 + 0x658);
    if (((*(arg1 + 0x868) == '\0') || (*(arg1 + 0x869) == '\0')) && (*(arg1 + 0x849) == '\0')) {
        return;
    }
    sym.writel_relaxed(0,*(arg1 + 0x18) + *(iVar9 + 0x2c));
    sym.writel_relaxed(*(arg1 + 0x878),*(arg1 + 0x18) + *(iVar9 + 0x44));
    sym.writel_relaxed(*(arg1 + 0x87c),*(arg1 + 0x18) + *(iVar9 + 0x50));
    sym.writel_relaxed(*(arg1 + 0x880),*(arg1 + 0x18) + *(iVar9 + 0x60));
    uVar10 = *(arg1 + 0x884);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x2c);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x2c);
    }
    uVar10 = *(arg1 + 0x894);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x3c);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x3c);
    }
    uVar10 = *(arg1 + 0x890);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x38);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x38);
    }
    uVar10 = *(arg1 + 0x88c);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x34);
    }
    uVar10 = *(arg1 + 0x888);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x28);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x28);
    }
    sym.writel_relaxed(*(arg1 + 0x874),*(arg1 + 0x18) + *(iVar9 + 0x54));
    uVar10 = *(arg1 + 0x898);
    pcVar8 = *(*(arg1 + 0x40) + 0x18);
    if (pcVar8 == NULL) {
        sym.writel(uVar10,*(arg1 + 0x18) + 0x44);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar8,0x80004b0);
        (*pcVar8)(arg1,uVar10,0x44);
    }
    sym.writel_relaxed(*(arg1 + 0x89c),*(arg1 + 0x18) + *(iVar9 + 0x18));
    *(arg1 + 0x869) = 0;
    pcVar8 = **(arg1 + 0x670);
    if (2 < (pcVar8 + -0x8003600 >> 3 | pcVar8 << 0x3d)) {
        __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar8,0x8000490);
    }
    uVar4 = (*pcVar8)(arg1,*(iVar9 + 0x28));
    iVar6 = *(arg1 + 0x678);
    uVar10 = 0xfffffff5;
    uVar4 = uVar4 & 0xf;
    do {
        bVar3 = 0xfffffffe < uVar10;
        uVar10 = uVar10 + 1;
        if (bVar3) {
            iVar6 = *(*(arg1 + 0x48) + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(*(arg1 + 0x48) + 8);
            }
            _printk(0x80012c9,iVar6,uVar4);
            sym.sdhci_msm_dump_pwr_ctrl_regs(arg1);
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x8009b70);
            (*pcVar8)();
        }
        pcVar8 = *(*(arg1 + 0x670) + 8);
        if (1 < (pcVar8 + -0x8003660 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0xe84ca557cf2ba42f,pcVar8,0x80004d0);
        }
        (*pcVar8)(uVar4,arg1,*(iVar6 + 0x30));
        DataSynchronizationBarrier(3,3,0);
        __const_udelay(0xa7c6);
        pcVar8 = **(arg1 + 0x670);
        if (2 < (pcVar8 + -0x8003600 >> 3 | pcVar8 << 0x3d)) {
            __cfi_slowpath_diag(0x4f528f009ba945ce,pcVar8,0x80004f0);
        }
        uVar5 = (*pcVar8)(arg1,*(iVar6 + 0x28));
    } while ((uVar5 & uVar4) != 0);
    sym.writel_relaxed(*(arg1 + 0x870),*(arg1 + 0x18) + *(iVar9 + 0x34));
    sym.writel_relaxed(*(arg1 + 0x86c),*(arg1 + 0x18) + *(iVar9 + 0x2c));
    uVar10 = uVar2;
    if (piVar7 == NULL) {
code_r0x08009bc0:
        if (uVar10 != 5) goto code_r0x08009bd0;
code_r0x08009bc8:
        if ((*(arg1 + 0x2f4) >> 4 & 1) == 0) goto code_r0x08009bd0;
    }
    else {
        pcVar8 = *(*piVar7 + 8);
        uVar4 = *(arg1 + 0x8b0) & 0x7fffffff;
        if (pcVar8 == NULL) {
            sym.writel_relaxed(uVar4,piVar7[1] + 0xa00);
            goto code_r0x08009bc0;
        }
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar8,0x8000510);
        (*pcVar8)(piVar7,uVar4,0xa00);
        if (uVar10 == 5) goto code_r0x08009bc8;
code_r0x08009bd0:
        if ((uVar10 != 6 && 1 < uVar10 - 9) || (uVar1 < 0x5f5e101)) goto code_r0x08009c6c;
    }
    sym.writel_relaxed(*(arg1 + 0x8a4),*(arg1 + 0x18) + *(iVar9 + 100));
    sym.writel_relaxed(*(arg1 + 0x8a8),*(arg1 + 0x18) + *(iVar9 + 0x68));
    sym.writel_relaxed(*(arg1 + 0x8ac),*(arg1 + 0x18) + *(iVar9 + 0x74));
    sym.writel_relaxed(*(arg1 + 0x8a0) & 0x9fffffff,*(arg1 + 0x18) + *(iVar9 + 0x3c));
    sym.msm_init_cm_dll(arg1,1);
    sym.msm_config_cm_dll_phase(arg1,*(arg1 + 0x63b));
code_r0x08009c6c:
    if ((*(arg1 + 0x8e0) != 0) && (*(arg1 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1 + 0x8e0),"%s: Registers restored\n","sdhci_msm_registers_restore");
    }
    return;
}


// ===== sym.readl @ 0x08009e50 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8009e54);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8009e98);
    return uVar1;
}


// ===== sym.writel @ 0x08009ed0 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8009eec);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8009f18);
    return;
}


// ===== sym.dbg_state_show @ 0x08009f4c (size 68) =====

int64_t sym.dbg_state_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001360,*(*(arg1 + 0x98) + 0x8e8));
    return iVar1;
}


// ===== sym.dbg_state_store @ 0x08009f90 (size 164) =====

uint64_t sym.dbg_state_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    ulong uVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint32_t uStack_ac;
    uint32_t auStack_a8 [8];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0x98);
    auStack_3c[0] = 0;
    puVar8 = arg2;
    uVar4 = capable(0x15);
    if ((uVar4 & 1) == 0) {
        arg3 = 0xfffffffffffffff3;
    }
    else {
        iVar2 = kstrtobool(arg2,auStack_3c);
        if (iVar2 == 0) {
            *(iVar10 + 0x8e8) = auStack_3c[0];
        }
        else {
            arg3 = 0xffffffffffffffea;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return arg3;
    }
    auVar14 = __stack_chk_fail();
    iVar7 = auVar14._0_8_;
    *extraout_x18 = sym.sdhci_msm_dt_parse_vreg_info;
    pcStack_78 = sym.sdhci_msm_dt_parse_vreg_info;
    iVar10 = sp_el0;
    iStack_88 = *(iVar10 + 0x5e0);
    uVar11 = *(iVar7 + 0x2f0);
    uStack_ac = 0;
    iVar13 = *(iVar7 + 0x98);
    auStack_a8[4] = 0;
    auStack_a8[5] = 0;
    auStack_a8[6] = 0;
    auStack_a8[7] = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    puVar6 = puVar8;
    puStack_80 = &stack0xffffffffffffffd0;
    snprintf(auStack_a8,0x20,"%s-supply");
    iVar10 = of_parse_phandle(uVar11,auStack_a8,0);
    if (iVar10 == 0) {
        _dev_info(iVar7,"No vreg data found for %s\n");
        uVar4 = 0xfffffffe;
    }
    else {
        puVar9 = 0xdc0;
        piVar5 = devm_kmalloc(iVar7,0x30);
        if (piVar5 == NULL) {
            uVar4 = 0xfffffff4;
            puVar8 = puVar9;
        }
        else {
            piVar5[2] = puVar8;
            *piVar5 = iVar13 + 0x580;
            snprintf(auStack_a8,0x20,"qcom,%s-always-on",puVar8);
            iVar10 = of_get_property(uVar11,auStack_a8,0);
            if (iVar10 != 0) {
                *(piVar5 + 0x29) = 1;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-lpm-sup",puVar8);
            iVar10 = of_get_property(uVar11,auStack_a8,0);
            if (iVar10 != 0) {
                *(piVar5 + 0x2a) = 1;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-voltage-level",puVar8);
            puVar6 = of_get_property(uVar11,auStack_a8,&uStack_ac);
            if ((puVar6 == NULL) || (uStack_ac != 8)) {
                pcVar1 = 0x800110c;
                if (puVar6 != NULL) {
                    pcVar1 = "invalid format";
                }
                _dev_warn(iVar7,"%s %s property\n",pcVar1,auStack_a8);
            }
            else {
                uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 3) = uVar3 >> 0x10 | uVar3 << 0x10;
                uVar3 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x1c) = uVar3 >> 0x10 | uVar3 << 0x10;
            }
            snprintf(auStack_a8,0x20,"qcom,%s-current-level");
            puVar9 = &uStack_ac;
            puVar6 = of_get_property(uVar11,auStack_a8);
            if ((puVar6 == NULL) || (uStack_ac != 8)) {
                puVar9 = 0x800110c;
                if (puVar6 != NULL) {
                    puVar9 = "invalid format";
                }
                puVar6 = auStack_a8;
                _dev_warn(iVar7,"%s %s property\n");
            }
            else {
                uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
                uVar3 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x24) = uVar3 >> 0x10 | uVar3 << 0x10;
                puVar6 = puVar8;
            }
            uVar4 = 0;
            *auVar14._8_8_ = piVar5;
            puVar8 = puVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_88) {
        return uVar4;
    }
    auVar14 = __stack_chk_fail(uVar4);
    uVar11 = auVar14._8_8_;
    iVar10 = auVar14._0_8_;
    *extraout_x18_00 = sym.sdhci_msm_dt_get_array;
    uVar12 = *(iVar10 + 0x2f0);
    iVar7 = of_get_property(uVar12,uVar11,puVar6);
    if (iVar7 == 0) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *puVar6;
        *puVar6 = uVar3 >> 2;
        if (uVar3 < 4) {
            _dev_err(iVar10,"%s invalid size\n",uVar11);
            uVar3 = 0xffffffea;
        }
        else {
            iVar7 = (uVar3 << 0x20) >> 0x22;
            iVar13 = devm_kmalloc(iVar10,iVar7 << 2,0xdc0);
            if (iVar13 == 0) {
                uVar3 = 0xfffffff4;
            }
            else {
                uVar3 = of_property_read_variable_u32_array(uVar12,uVar11,iVar13,iVar7,0);
                if (-1 < uVar3) {
                    uVar3 = 0;
                    *puVar8 = iVar13;
                    goto code_r0x0800a348;
                }
                _dev_err(iVar10,"%s failed reading array %d\n",uVar11,uVar3);
            }
        }
    }
    *puVar6 = 0;
code_r0x0800a348:
    return uVar3;
}


// ===== sym.sdhci_msm_dt_parse_vreg_info @ 0x0800a034 (size 616) =====

int sym.sdhci_msm_dt_parse_vreg_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auStack_6c [4];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar9 = *(arg1 + 0x2f0);
    auStack_6c = 0x0;
    iVar11 = *(arg1 + 0x98);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar6 = arg3;
    snprintf(&uStack_68,0x20,"%s-supply");
    iVar4 = of_parse_phandle(uVar9,&uStack_68,0);
    if (iVar4 == 0) {
        _dev_info(arg1,"No vreg data found for %s\n");
        iVar3 = -2;
    }
    else {
        piVar8 = 0xdc0;
        piVar5 = devm_kmalloc(arg1,0x30);
        if (piVar5 == NULL) {
            iVar3 = -0xc;
            arg3 = piVar8;
        }
        else {
            piVar5[2] = arg3;
            *piVar5 = iVar11 + 0x580;
            snprintf(&uStack_68,0x20,"qcom,%s-always-on",arg3);
            iVar4 = of_get_property(uVar9,&uStack_68,0);
            if (iVar4 != 0) {
                *(piVar5 + 0x29) = 1;
            }
            snprintf(&uStack_68,0x20,"qcom,%s-lpm-sup",arg3);
            iVar4 = of_get_property(uVar9,&uStack_68,0);
            if (iVar4 != 0) {
                *(piVar5 + 0x2a) = 1;
            }
            snprintf(&uStack_68,0x20,"qcom,%s-voltage-level",arg3);
            puVar6 = of_get_property(uVar9,&uStack_68,auStack_6c);
            if ((puVar6 == NULL) || (auStack_6c != 0x8)) {
                pcVar1 = 0x800110c;
                if (puVar6 != NULL) {
                    pcVar1 = "invalid format";
                }
                _dev_warn(arg1,"%s %s property\n",pcVar1,&uStack_68);
            }
            else {
                uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 3) = uVar2 >> 0x10 | uVar2 << 0x10;
                uVar2 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x1c) = uVar2 >> 0x10 | uVar2 << 0x10;
            }
            snprintf(&uStack_68,0x20,"qcom,%s-current-level");
            piVar8 = auStack_6c;
            puVar6 = of_get_property(uVar9,&uStack_68);
            if ((puVar6 == NULL) || (auStack_6c != 0x8)) {
                piVar8 = 0x800110c;
                if (puVar6 != NULL) {
                    piVar8 = "invalid format";
                }
                puVar6 = &uStack_68;
                _dev_warn(arg1,"%s %s property\n");
            }
            else {
                uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
                *(piVar5 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
                uVar2 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
                *(piVar5 + 0x24) = uVar2 >> 0x10 | uVar2 << 0x10;
                puVar6 = arg3;
            }
            iVar3 = 0;
            *arg2 = piVar5;
            arg3 = piVar8;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_48) {
        auVar12 = __stack_chk_fail(iVar3);
        uVar9 = auVar12._8_8_;
        iVar4 = auVar12._0_8_;
        *extraout_x18 = sym.sdhci_msm_dt_get_array;
        uVar10 = *(iVar4 + 0x2f0);
        iVar11 = of_get_property(uVar10,uVar9,puVar6);
        if (iVar11 == 0) {
            iVar3 = -0x16;
        }
        else {
            uVar2 = *puVar6;
            *puVar6 = uVar2 >> 2;
            if (uVar2 < 4) {
                _dev_err(iVar4,"%s invalid size\n",uVar9);
                iVar3 = -0x16;
            }
            else {
                iVar11 = (uVar2 << 0x20) >> 0x22;
                iVar7 = devm_kmalloc(iVar4,iVar11 << 2,0xdc0);
                if (iVar7 == 0) {
                    iVar3 = -0xc;
                }
                else {
                    iVar3 = of_property_read_variable_u32_array(uVar10,uVar9,iVar7,iVar11,0);
                    if (-1 < iVar3) {
                        *arg3 = iVar7;
                        return 0;
                    }
                    _dev_err(iVar4,"%s failed reading array %d\n",uVar9,iVar3);
                }
            }
        }
        *puVar6 = 0;
        return iVar3;
    }
    return iVar3;
}


// ===== sym.sdhci_msm_dt_get_array @ 0x0800a29c (size 268) =====

int sym.sdhci_msm_dt_get_array(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 0x2f0);
    iVar3 = of_get_property(uVar5,arg2,arg4);
    if (iVar3 == 0) {
        iVar2 = -0x16;
    }
    else {
        uVar1 = *arg4;
        *arg4 = uVar1 >> 2;
        if (uVar1 < 4) {
            _dev_err(arg1,"%s invalid size\n",arg2);
            iVar2 = -0x16;
        }
        else {
            iVar3 = (uVar1 << 0x20) >> 0x22;
            iVar4 = devm_kmalloc(arg1,iVar3 << 2,0xdc0);
            if (iVar4 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar2 = of_property_read_variable_u32_array(uVar5,arg2,iVar4,iVar3,0);
                if (-1 < iVar2) {
                    *arg3 = iVar4;
                    return 0;
                }
                _dev_err(arg1,"%s failed reading array %d\n",arg2,iVar2);
            }
        }
    }
    *arg4 = 0;
    return iVar2;
}


// ===== sym.sdhci_msm_setup_vreg @ 0x0800a3a8 (size 1004) =====

//WARNING: Type propagation algorithm not settling

int sym.sdhci_msm_setup_vreg(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    bool bVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    char *pcVar7;
    uint uVar8;
    ulong *puVar9;
    int64_t iVar10;
    ulong *in_x18;
    uint uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x98);
    if ((*(arg1 + 0x360) != 0) && (*(arg1 + 0x368) != '\0')) {
        pcVar7 = "Enabling";
        if ((arg2 & 1U) == 0) {
            pcVar7 = "Disabling";
        }
        ipc_log_string(*(arg1 + 0x360),"%s: %s regulators\n","sdhci_msm_setup_vreg",pcVar7);
    }
    puVar9 = *(arg1 + 0x90);
    if (puVar9 != NULL) {
        piVar13 = *puVar9;
        piVar1 = puVar9[1];
        if ((((arg2 & 1U) == 0) && (*(piVar1 + 0x29) != '\0')) && (*(iVar12 + 0x480) == 0)) {
            *(piVar1 + 0x29) = 0;
            iVar10 = *(iVar12 + 0x480);
        }
        else {
            iVar10 = *(iVar12 + 0x480);
        }
        if (((iVar10 == 0) || (*(iVar10 + 0x49c) != '\0')) || ((*(iVar12 + 0x3e5) & 1) == 0)) {
            if (((arg2 & 1U) == 0) && ((*(iVar12 + 0x3e5) & 1) == 0)) {
                uVar4 = msm_spare_read(2);
                msm_spare_write(2,uVar4 & 0xffff7fff);
            }
            bVar3 = true;
code_r0x0800a4a4:
            do {
                bVar2 = bVar3;
                if (piVar13 != NULL) {
                    if ((arg2 & 1U) != 0) {
                        uVar11 = *(piVar13 + 0x24);
                        iVar10 = *(*piVar13 + 0x360);
                        if ((iVar10 != 0) && (*(*piVar13 + 0x368) != '\0')) {
                            ipc_log_string(iVar10,"%s: reg=%s uA_load=%d\n","sdhci_msm_vreg_set_optimum_mode",
                                           piVar13[2],uVar11);
                        }
                        if ((*(piVar13 + 0x2b) != '\0') && (iVar5 = regulator_set_load(piVar13[1],uVar11), iVar5 < 0))
                        {
code_r0x0800a704:
                            iVar12 = piVar13[2];
code_r0x0800a720:
                            _printk(0x800158f,"sdhci_msm_vreg_set_optimum_mode",iVar12,uVar11,iVar5);
                            return iVar5;
                        }
                        if (piVar13[5] == '\0') {
                            uVar11 = *(piVar13 + 0x1c);
                            iVar10 = *(*piVar13 + 0x360);
                            if ((iVar10 != 0) && (*(*piVar13 + 0x368) != '\0')) {
                                ipc_log_string(iVar10,"%s: reg=%s min_uV=%d max_uV=%d\n","sdhci_msm_vreg_set_voltage"
                                               ,piVar13[2],uVar11,uVar11);
                            }
                            if ((*(piVar13 + 0x2b) != '\0') &&
                               (iVar5 = regulator_set_voltage(piVar13[1],uVar11,uVar11), iVar5 != 0)) {
                                iVar12 = piVar13[2];
                                uVar8 = uVar11;
code_r0x0800a748:
                                _printk(0x8000afd,"sdhci_msm_vreg_set_voltage",iVar12,uVar8,uVar11,iVar5);
                                return iVar5;
                            }
                        }
                        iVar5 = regulator_enable(piVar13[1]);
                        if (iVar5 != 0) {
                            iVar12 = piVar13[2];
                            uVar6 = 0x80016ab;
                            pcVar7 = "sdhci_msm_vreg_enable";
code_r0x0800a6f8:
                            _printk(uVar6,pcVar7,iVar12,iVar5);
                            return iVar5;
                        }
                        *(piVar13 + 5) = 1;
                        piVar13 = piVar1;
                        bVar3 = false;
                        if (!bVar2) goto code_r0x0800a698;
                        goto code_r0x0800a4a4;
                    }
                    if (piVar13[5] != '\0') {
                        if (*(piVar13 + 0x29) == '\0') {
                            iVar5 = regulator_disable(piVar13[1]);
                            if (iVar5 != 0) {
                                iVar12 = piVar13[2];
                                uVar6 = 0x8000e0c;
                                pcVar7 = "sdhci_msm_vreg_disable";
                                goto code_r0x0800a6f8;
                            }
                            *(piVar13 + 5) = 0;
                            iVar10 = *(*piVar13 + 0x360);
                            if ((iVar10 != 0) && (*(*piVar13 + 0x368) != '\0')) {
                                ipc_log_string(iVar10,"%s: reg=%s uA_load=%d\n","sdhci_msm_vreg_set_optimum_mode",
                                               piVar13[2],0);
                            }
                            if ((*(piVar13 + 0x2b) != '\0') && (iVar5 = regulator_set_load(piVar13[1],0), iVar5 < 0))
                            {
                                iVar12 = piVar13[2];
                                uVar11 = 0;
                                goto code_r0x0800a720;
                            }
                            uVar11 = *(piVar13 + 0x1c);
                            iVar10 = *(*piVar13 + 0x360);
                            if ((iVar10 != 0) && (*(*piVar13 + 0x368) != '\0')) {
                                ipc_log_string(iVar10,"%s: reg=%s min_uV=%d max_uV=%d\n","sdhci_msm_vreg_set_voltage"
                                               ,piVar13[2],0,uVar11);
                            }
                            if ((*(piVar13 + 0x2b) != '\0') &&
                               (iVar5 = regulator_set_voltage(piVar13[1],0,uVar11), iVar5 != 0)) {
                                iVar12 = piVar13[2];
                                uVar8 = 0;
                                goto code_r0x0800a748;
                            }
                        }
                        else if (*(piVar13 + 0x2a) != '\0') {
                            uVar11 = piVar13[4];
                            iVar10 = *(*piVar13 + 0x360);
                            if ((iVar10 != 0) && (*(*piVar13 + 0x368) != '\0')) {
                                ipc_log_string(iVar10,"%s: reg=%s uA_load=%d\n","sdhci_msm_vreg_set_optimum_mode",
                                               piVar13[2],uVar11);
                            }
                            if ((*(piVar13 + 0x2b) != '\0') &&
                               (iVar5 = regulator_set_load(piVar13[1],uVar11), iVar5 < 0)) goto code_r0x0800a704;
                        }
                    }
                }
                piVar13 = piVar1;
                bVar3 = false;
            } while (bVar2);
            if ((arg2 & 1U) == 0) {
                return 0;
            }
code_r0x0800a698:
            if ((*(iVar12 + 0x3e5) & 1) == 0) {
                uVar4 = msm_spare_read(2);
                msm_spare_write(2,uVar4 | 0x8000);
            }
        }
    }
    return 0;
}


// ===== sym.sdhci_msm_set_vdd_io_vol @ 0x0800a794 (size 264) =====

int sym.sdhci_msm_set_vdd_io_vol(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x90) != 0) && (piVar5 = *(*(arg1 + 0x90) + 8), piVar5 != NULL)) && (piVar5[5] != '\0')) {
        if (arg2 == 1) {
            piVar4 = piVar5 + 0x1c;
        }
        else {
            if (arg2 != 0) {
                _printk(0x80015cb,"sdhci_msm_set_vdd_io_vol");
                return -0x16;
            }
            piVar4 = piVar5 + 3;
        }
        uVar1 = *piVar4;
        iVar3 = *(*piVar5 + 0x360);
        if ((iVar3 != 0) && (*(*piVar5 + 0x368) != '\0')) {
            ipc_log_string(iVar3,"%s: reg=%s min_uV=%d max_uV=%d\n","sdhci_msm_vreg_set_voltage",piVar5[2],uVar1,
                           uVar1);
        }
        if (*(piVar5 + 0x2b) != '\0') {
            iVar2 = regulator_set_voltage(piVar5[1],uVar1,uVar1);
            if (iVar2 == 0) {
                return 0;
            }
            _printk(0x8000afd,"sdhci_msm_vreg_set_voltage",piVar5[2],uVar1,uVar1,iVar2);
            return iVar2;
        }
    }
    return 0;
}


// ===== sym.msm_find_most_appropriate_phase @ 0x0800a89c (size 1676) =====

uint64_t sym.msm_find_most_appropriate_phase(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    uint8_t *puVar8;
    ulong *in_x6;
    uint uVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong extraout_x8;
    uint32_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    ulong uStack_138;
    ulong uStack_130;
    uint8_t auStack_128 [256];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_28 = *(iVar18 + 0x5e0);
    puVar10 = *(arg1 + 0x48);
    auStack_128[0xf0] = 0;
    auStack_128[0xf1] = 0;
    auStack_128[0xf2] = 0;
    auStack_128[0xf3] = 0;
    auStack_128[0xf4] = 0;
    auStack_128[0xf5] = 0;
    auStack_128[0xf6] = 0;
    auStack_128[0xf7] = 0;
    auStack_128[0xf8] = 0;
    auStack_128[0xf9] = 0;
    auStack_128[0xfa] = 0;
    auStack_128[0xfb] = 0;
    auStack_128[0xfc] = 0;
    auStack_128[0xfd] = 0;
    auStack_128[0xfe] = 0;
    auStack_128[0xff] = 0;
    auStack_128[0xe0] = 0;
    auStack_128[0xe1] = 0;
    auStack_128[0xe2] = 0;
    auStack_128[0xe3] = 0;
    auStack_128[0xe4] = 0;
    auStack_128[0xe5] = 0;
    auStack_128[0xe6] = 0;
    auStack_128[0xe7] = 0;
    auStack_128[0xe8] = 0;
    auStack_128[0xe9] = 0;
    auStack_128[0xea] = 0;
    auStack_128[0xeb] = 0;
    auStack_128[0xec] = 0;
    auStack_128[0xed] = 0;
    auStack_128[0xee] = 0;
    auStack_128[0xef] = 0;
    auStack_128[0xd0] = 0;
    auStack_128[0xd1] = 0;
    auStack_128[0xd2] = 0;
    auStack_128[0xd3] = 0;
    auStack_128[0xd4] = 0;
    auStack_128[0xd5] = 0;
    auStack_128[0xd6] = 0;
    auStack_128[0xd7] = 0;
    auStack_128[0xd8] = 0;
    auStack_128[0xd9] = 0;
    auStack_128[0xda] = 0;
    auStack_128[0xdb] = 0;
    auStack_128[0xdc] = 0;
    auStack_128[0xdd] = 0;
    auStack_128[0xde] = 0;
    auStack_128[0xdf] = 0;
    auStack_128[0xc0] = 0;
    auStack_128[0xc1] = 0;
    auStack_128[0xc2] = 0;
    auStack_128[0xc3] = 0;
    auStack_128[0xc4] = 0;
    auStack_128[0xc5] = 0;
    auStack_128[0xc6] = 0;
    auStack_128[199] = 0;
    auStack_128[200] = 0;
    auStack_128[0xc9] = 0;
    auStack_128[0xca] = 0;
    auStack_128[0xcb] = 0;
    auStack_128[0xcc] = 0;
    auStack_128[0xcd] = 0;
    auStack_128[0xce] = 0;
    auStack_128[0xcf] = 0;
    auStack_128[0xb0] = 0;
    auStack_128[0xb1] = 0;
    auStack_128[0xb2] = 0;
    auStack_128[0xb3] = 0;
    auStack_128[0xb4] = 0;
    auStack_128[0xb5] = 0;
    auStack_128[0xb6] = 0;
    auStack_128[0xb7] = 0;
    auStack_128[0xb8] = 0;
    auStack_128[0xb9] = 0;
    auStack_128[0xba] = 0;
    auStack_128[0xbb] = 0;
    auStack_128[0xbc] = 0;
    auStack_128[0xbd] = 0;
    auStack_128[0xbe] = 0;
    auStack_128[0xbf] = 0;
    auStack_128[0xa0] = 0;
    auStack_128[0xa1] = 0;
    auStack_128[0xa2] = 0;
    auStack_128[0xa3] = 0;
    auStack_128[0xa4] = 0;
    auStack_128[0xa5] = 0;
    auStack_128[0xa6] = 0;
    auStack_128[0xa7] = 0;
    auStack_128[0xa8] = 0;
    auStack_128[0xa9] = 0;
    auStack_128[0xaa] = 0;
    auStack_128[0xab] = 0;
    auStack_128[0xac] = 0;
    auStack_128[0xad] = 0;
    auStack_128[0xae] = 0;
    auStack_128[0xaf] = 0;
    auStack_128[0x90] = 0;
    auStack_128[0x91] = 0;
    auStack_128[0x92] = 0;
    auStack_128[0x93] = 0;
    auStack_128[0x94] = 0;
    auStack_128[0x95] = 0;
    auStack_128[0x96] = 0;
    auStack_128[0x97] = 0;
    auStack_128[0x98] = 0;
    auStack_128[0x99] = 0;
    auStack_128[0x9a] = 0;
    auStack_128[0x9b] = 0;
    auStack_128[0x9c] = 0;
    auStack_128[0x9d] = 0;
    auStack_128[0x9e] = 0;
    auStack_128[0x9f] = 0;
    auStack_128[0x80] = 0;
    auStack_128[0x81] = 0;
    auStack_128[0x82] = 0;
    auStack_128[0x83] = 0;
    auStack_128[0x84] = 0;
    auStack_128[0x85] = 0;
    auStack_128[0x86] = 0;
    auStack_128[0x87] = 0;
    auStack_128[0x88] = 0;
    auStack_128[0x89] = 0;
    auStack_128[0x8a] = 0;
    auStack_128[0x8b] = 0;
    auStack_128[0x8c] = 0;
    auStack_128[0x8d] = 0;
    auStack_128[0x8e] = 0;
    auStack_128[0x8f] = 0;
    auStack_128[0x70] = 0;
    auStack_128[0x71] = 0;
    auStack_128[0x72] = 0;
    auStack_128[0x73] = 0;
    auStack_128[0x74] = 0;
    auStack_128[0x75] = 0;
    auStack_128[0x76] = 0;
    auStack_128[0x77] = 0;
    auStack_128[0x78] = 0;
    auStack_128[0x79] = 0;
    auStack_128[0x7a] = 0;
    auStack_128[0x7b] = 0;
    auStack_128[0x7c] = 0;
    auStack_128[0x7d] = 0;
    auStack_128[0x7e] = 0;
    auStack_128[0x7f] = 0;
    auStack_128[0x60] = 0;
    auStack_128[0x61] = 0;
    auStack_128[0x62] = 0;
    auStack_128[99] = 0;
    auStack_128[100] = 0;
    auStack_128[0x65] = 0;
    auStack_128[0x66] = 0;
    auStack_128[0x67] = 0;
    auStack_128[0x68] = 0;
    auStack_128[0x69] = 0;
    auStack_128[0x6a] = 0;
    auStack_128[0x6b] = 0;
    auStack_128[0x6c] = 0;
    auStack_128[0x6d] = 0;
    auStack_128[0x6e] = 0;
    auStack_128[0x6f] = 0;
    auStack_128[0x50] = 0;
    auStack_128[0x51] = 0;
    auStack_128[0x52] = 0;
    auStack_128[0x53] = 0;
    auStack_128[0x54] = 0;
    auStack_128[0x55] = 0;
    auStack_128[0x56] = 0;
    auStack_128[0x57] = 0;
    auStack_128[0x58] = 0;
    auStack_128[0x59] = 0;
    auStack_128[0x5a] = 0;
    auStack_128[0x5b] = 0;
    auStack_128[0x5c] = 0;
    auStack_128[0x5d] = 0;
    auStack_128[0x5e] = 0;
    auStack_128[0x5f] = 0;
    auStack_128[0x40] = 0;
    auStack_128[0x41] = 0;
    auStack_128[0x42] = 0;
    auStack_128[0x43] = 0;
    auStack_128[0x44] = 0;
    auStack_128[0x45] = 0;
    auStack_128[0x46] = 0;
    auStack_128[0x47] = 0;
    auStack_128[0x48] = 0;
    auStack_128[0x49] = 0;
    auStack_128[0x4a] = 0;
    auStack_128[0x4b] = 0;
    auStack_128[0x4c] = 0;
    auStack_128[0x4d] = 0;
    auStack_128[0x4e] = 0;
    auStack_128[0x4f] = 0;
    auStack_128[0x30] = 0;
    auStack_128[0x31] = 0;
    auStack_128[0x32] = 0;
    auStack_128[0x33] = 0;
    auStack_128[0x34] = 0;
    auStack_128[0x35] = 0;
    auStack_128[0x36] = 0;
    auStack_128[0x37] = 0;
    auStack_128[0x38] = 0;
    auStack_128[0x39] = 0;
    auStack_128[0x3a] = 0;
    auStack_128[0x3b] = 0;
    auStack_128[0x3c] = 0;
    auStack_128[0x3d] = 0;
    auStack_128[0x3e] = 0;
    auStack_128[0x3f] = 0;
    auStack_128[0x20] = 0;
    auStack_128[0x21] = 0;
    auStack_128[0x22] = 0;
    auStack_128[0x23] = 0;
    auStack_128[0x24] = 0;
    auStack_128[0x25] = 0;
    auStack_128[0x26] = 0;
    auStack_128[0x27] = 0;
    auStack_128[0x28] = 0;
    auStack_128[0x29] = 0;
    auStack_128[0x2a] = 0;
    auStack_128[0x2b] = 0;
    auStack_128[0x2c] = 0;
    auStack_128[0x2d] = 0;
    auStack_128[0x2e] = 0;
    auStack_128[0x2f] = 0;
    auStack_128[0x10] = 0;
    auStack_128[0x11] = 0;
    auStack_128[0x12] = 0;
    auStack_128[0x13] = 0;
    auStack_128[0x14] = 0;
    auStack_128[0x15] = 0;
    auStack_128[0x16] = 0;
    auStack_128[0x17] = 0;
    auStack_128[0x18] = 0;
    auStack_128[0x19] = 0;
    auStack_128[0x1a] = 0;
    auStack_128[0x1b] = 0;
    auStack_128[0x1c] = 0;
    auStack_128[0x1d] = 0;
    auStack_128[0x1e] = 0;
    auStack_128[0x1f] = 0;
    auStack_128[0] = 0;
    auStack_128[1] = 0;
    auStack_128[2] = 0;
    auStack_128[3] = 0;
    auStack_128[4] = 0;
    auStack_128[5] = 0;
    auStack_128[6] = 0;
    auStack_128[7] = 0;
    auStack_128[8] = 0;
    auStack_128[9] = 0;
    auStack_128[10] = 0;
    auStack_128[0xb] = 0;
    auStack_128[0xc] = 0;
    auStack_128[0xd] = 0;
    auStack_128[0xe] = 0;
    auStack_128[0xf] = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    if (0x10 < (arg3 & 0xff)) {
        iVar18 = puVar10[0xf];
        if (iVar18 == 0) {
            iVar18 = puVar10[1];
        }
        _dev_err(*puVar10,"%s: Invalid argument: total_phases=%d\n",iVar18);
        uVar13 = 0xffffffea;
        goto code_r0x0800aec8;
    }
    if ((arg3 & 0xff) != 0) {
        uVar13 = arg3 & 0xff;
        uVar17 = 0;
        uVar12 = 0;
        puVar8 = arg2 + 1;
        uVar6 = 0;
        uVar15 = *arg2;
        do {
            uVar13 = uVar13 - 1;
            if (0xff < uVar6 + uVar17 * 0x10) goto code_r0x0800af20;
            cVar2 = *(&uStack_138 + uVar17);
            auStack_128[uVar6 + uVar17 * 0x10] = uVar15;
            *(&uStack_138 + uVar17) = cVar2 + '\x01';
            if (uVar13 == 0) {
                if (auStack_128[0] != 0) goto code_r0x0800ace8;
                if (uVar12 == 0) goto code_r0x0800ac2c;
                iVar14 = 0;
                uVar6 = 0;
                bVar5 = false;
                iVar18 = 1;
                goto code_r0x0800a9e8;
            }
            uVar16 = *puVar8;
            bVar5 = uVar15 + 1 != uVar16;
            if (bVar5) {
                uVar12 = uVar12 + 1;
            }
            uVar17 = uVar12;
            uVar1 = 0;
            if (!bVar5) {
                uVar1 = uVar6 + 1;
            }
        } while ((uVar12 < 0x10) && (puVar8 = puVar8 + 1, uVar6 = uVar1, uVar15 = uVar16, uVar1 < 0x10));
        goto code_r0x0800a994;
    }
code_r0x0800ac2c:
    uVar6 = uStack_138;
code_r0x0800ae8c:
    uVar15 = 0;
    goto code_r0x0800ae90;
code_r0x0800a9e8:
    do {
        if (iVar14 == 0xf0) goto code_r0x0800a994;
        cVar2 = *(&uStack_138 + iVar18);
        if (cVar2 != '\0') {
            if (auStack_128[iVar14 + 0x10] == 0xf) {
code_r0x0800a9d0:
                bVar5 = true;
                uVar6 = iVar18;
            }
            else if (cVar2 != '\x01') {
                if (0x100 < iVar14 + 0x11U) goto code_r0x0800af20;
                if (auStack_128[iVar14 + 0x11] == 0xf) goto code_r0x0800a9d0;
                if (cVar2 != '\x02') {
                    if (0x100 < iVar14 + 0x12U) goto code_r0x0800af20;
                    if (auStack_128[iVar14 + 0x12] == 0xf) goto code_r0x0800a9d0;
                    if (cVar2 != '\x03') {
                        if (0x100 < iVar14 + 0x13U) goto code_r0x0800af20;
                        if (auStack_128[iVar14 + 0x13] == 0xf) goto code_r0x0800a9d0;
                        if (cVar2 != '\x04') {
                            if (0x100 < iVar14 + 0x14U) goto code_r0x0800af20;
                            if (auStack_128[iVar14 + 0x14] == 0xf) goto code_r0x0800a9d0;
                            if (cVar2 != '\x05') {
                                if (0x100 < iVar14 + 0x15U) goto code_r0x0800af20;
                                if (auStack_128[iVar14 + 0x15] == 0xf) goto code_r0x0800a9d0;
                                if (cVar2 != '\x06') {
                                    if (0x100 < iVar14 + 0x16U) goto code_r0x0800af20;
                                    if (auStack_128[iVar14 + 0x16] == 0xf) goto code_r0x0800a9d0;
                                    if (cVar2 != '\a') {
                                        if (0x100 < iVar14 + 0x17U) goto code_r0x0800af20;
                                        if (auStack_128[iVar14 + 0x17] == 0xf) goto code_r0x0800a9d0;
                                        if (cVar2 != '\b') {
                                            if (0x100 < iVar14 + 0x18U) goto code_r0x0800af20;
                                            if (auStack_128[iVar14 + 0x18] == 0xf) goto code_r0x0800a9d0;
                                            if (cVar2 != '\t') {
                                                if (0x100 < iVar14 + 0x19U) goto code_r0x0800af20;
                                                if (auStack_128[iVar14 + 0x19] == 0xf) goto code_r0x0800a9d0;
                                                if (cVar2 != '\n') {
                                                    if (0x100 < iVar14 + 0x1aU) goto code_r0x0800af20;
                                                    if (auStack_128[iVar14 + 0x1a] == 0xf) goto code_r0x0800a9d0;
                                                    if (cVar2 != '\v') {
                                                        if (0x100 < iVar14 + 0x1bU) goto code_r0x0800af20;
                                                        if (auStack_128[iVar14 + 0x1b] == 0xf) goto code_r0x0800a9d0;
                                                        if (cVar2 != '\f') {
                                                            if (0x100 < iVar14 + 0x1cU) goto code_r0x0800af20;
                                                            if (auStack_128[iVar14 + 0x1c] == 0xf)
                                                            goto code_r0x0800a9d0;
                                                            if (cVar2 != '\r') {
                                                                if (0x100 < iVar14 + 0x1dU) goto code_r0x0800af20;
                                                                if (auStack_128[iVar14 + 0x1d] == 0xf)
                                                                goto code_r0x0800a9d0;
                                                                if (cVar2 != '\x0e') {
                                                                    if (0x100 < iVar14 + 0x1eU) goto code_r0x0800af20;
                                                                    if (auStack_128[iVar14 + 0x1e] == 0xf)
                                                                    goto code_r0x0800a9d0;
                                                                    if (cVar2 != '\x0f') {
                                                                        if (0x100 < iVar14 + 0x1fU)
                                                                        goto code_r0x0800af20;
                                                                        if (auStack_128[iVar14 + 0x1f] == 0xf)
                                                                        goto code_r0x0800a9d0;
                                                                        if (cVar2 != '\x10') goto code_r0x0800a994;
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
                    }
                }
            }
        }
        iVar18 = iVar18 + 1;
        iVar14 = iVar14 + 0x10;
    } while ((uVar12 + 1) * 0x10 + -0x10 != iVar14);
    if (bVar5) {
        if (0xf < uVar6) goto code_r0x0800a994;
        iVar18 = uVar6;
        uVar3 = *(&uStack_138 + iVar18);
        uVar6 = uVar3 + uStack_138;
        if (0xf < uVar6) {
            uVar13 = 0xffffffea;
            goto code_r0x0800aec8;
        }
        if (uStack_138 != 0) {
            uVar13 = 0;
            uVar17 = uVar3 + iVar18 * 0x10;
            do {
                if ((0xf < uVar13) || (uVar11 = uVar3 + uVar13, 0xf < uVar11)) goto code_r0x0800a994;
                if (0xff < uVar17) {
code_r0x0800af20:
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(1,0x800af24);
                    (*pcVar4)();
                }
                auStack_128[uVar17] = auStack_128[uVar13];
                if (uVar11 == 0xf) break;
                uVar13 = uVar13 + 1;
                uVar17 = uVar17 + 1;
            } while ((uStack_138 & 0xff) != uVar13);
        }
        uStack_138 = uStack_138 & 0xffffffffffffff00;
        *(&uStack_138 + iVar18) = uVar6;
    }
    if (0xf < uVar12) goto code_r0x0800a994;
code_r0x0800ace8:
    uVar6 = uStack_138;
    if (uVar12 == 0) goto code_r0x0800ae8c;
    if (uStack_138 <= uStack_138._1_1_) {
        uVar6 = uStack_138._1_1_;
    }
    uVar15 = uStack_138 < uStack_138._1_1_;
    if (uVar12 != 1) {
        uVar15 = 2;
        if (uStack_138._2_1_ <= uVar6) {
            uVar15 = uStack_138 < uStack_138._1_1_;
        }
        if (uVar6 <= uStack_138._2_1_) {
            uVar6 = uStack_138._2_1_;
        }
        if (uVar12 != 2) {
            uVar16 = 3;
            if (uStack_138._3_1_ <= uVar6) {
                uVar16 = uVar15;
            }
            if (uVar6 <= uStack_138._3_1_) {
                uVar6 = uStack_138._3_1_;
            }
            uVar15 = uVar16;
            if (uVar12 != 3) {
                uVar15 = 4;
                if (uStack_138._4_1_ <= uVar6) {
                    uVar15 = uVar16;
                }
                if (uVar6 <= uStack_138._4_1_) {
                    uVar6 = uStack_138._4_1_;
                }
                if (uVar12 != 4) {
                    uVar16 = 5;
                    if (uStack_138._5_1_ <= uVar6) {
                        uVar16 = uVar15;
                    }
                    if (uVar6 <= uStack_138._5_1_) {
                        uVar6 = uStack_138._5_1_;
                    }
                    uVar15 = uVar16;
                    if (uVar12 != 5) {
                        uVar15 = 6;
                        if (uStack_138._6_1_ <= uVar6) {
                            uVar15 = uVar16;
                        }
                        if (uVar6 <= uStack_138._6_1_) {
                            uVar6 = uStack_138._6_1_;
                        }
                        if (uVar12 != 6) {
                            uVar16 = 7;
                            if (uStack_138._7_1_ <= uVar6) {
                                uVar16 = uVar15;
                            }
                            if (uVar6 <= uStack_138._7_1_) {
                                uVar6 = uStack_138._7_1_;
                            }
                            uVar15 = uVar16;
                            if (uVar12 != 7) {
                                uVar15 = 8;
                                if (uStack_130 <= uVar6) {
                                    uVar15 = uVar16;
                                }
                                if (uVar6 <= uStack_130) {
                                    uVar6 = uStack_130;
                                }
                                if (uVar12 != 8) {
                                    uVar16 = 9;
                                    if (uStack_130._1_1_ <= uVar6) {
                                        uVar16 = uVar15;
                                    }
                                    if (uVar6 <= uStack_130._1_1_) {
                                        uVar6 = uStack_130._1_1_;
                                    }
                                    uVar15 = uVar16;
                                    if (uVar12 != 9) {
                                        uVar15 = 10;
                                        if (uStack_130._2_1_ <= uVar6) {
                                            uVar15 = uVar16;
                                        }
                                        if (uVar6 <= uStack_130._2_1_) {
                                            uVar6 = uStack_130._2_1_;
                                        }
                                        if (uVar12 != 10) {
                                            uVar16 = 0xb;
                                            if (uStack_130._3_1_ <= uVar6) {
                                                uVar16 = uVar15;
                                            }
                                            if (uVar6 <= uStack_130._3_1_) {
                                                uVar6 = uStack_130._3_1_;
                                            }
                                            uVar15 = uVar16;
                                            if (uVar12 != 0xb) {
                                                uVar15 = 0xc;
                                                if (uStack_130._4_1_ <= uVar6) {
                                                    uVar15 = uVar16;
                                                }
                                                if (uVar6 <= uStack_130._4_1_) {
                                                    uVar6 = uStack_130._4_1_;
                                                }
                                                if (uVar12 != 0xc) {
                                                    uVar16 = 0xd;
                                                    if (uStack_130._5_1_ <= uVar6) {
                                                        uVar16 = uVar15;
                                                    }
                                                    if (uVar6 <= uStack_130._5_1_) {
                                                        uVar6 = uStack_130._5_1_;
                                                    }
                                                    uVar15 = uVar16;
                                                    if (uVar12 != 0xd) {
                                                        uVar1 = 0xe;
                                                        if (uStack_130._6_1_ <= uVar6) {
                                                            uVar1 = uVar16;
                                                        }
                                                        if (uVar6 <= uStack_130._6_1_) {
                                                            uVar6 = uStack_130._6_1_;
                                                        }
                                                        uVar15 = uVar1;
                                                        if (uVar12 != 0xe) {
                                                            uVar15 = 0xf;
                                                            if (uStack_130._7_1_ <= uVar6) {
                                                                uVar15 = uVar1;
                                                            }
                                                            if (uVar6 <= uStack_130._7_1_) {
                                                                uVar6 = uStack_130._7_1_;
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
            }
        }
    }
code_r0x0800ae90:
    if (uVar6 * 3 < 4) {
        uVar17 = 0;
    }
    else {
        uVar12 = (uVar6 * 3 >> 2) - 1;
        uVar17 = uVar12;
        if (0xf < uVar12) {
code_r0x0800a994:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x800a998);
            (*pcVar4)();
        }
    }
    uVar13 = auStack_128[uVar17 + uVar15 * 0x10];
    if (0xf < auStack_128[uVar17 + uVar15 * 0x10]) {
        iVar18 = puVar10[0xf];
        if (iVar18 == 0) {
            iVar18 = puVar10[1];
        }
        uVar13 = 0xffffffea;
        _dev_err(*puVar10,"%s: Invalid phase selected=%d\n",iVar18,0xffffffea);
    }
code_r0x0800aec8:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_28) {
        return uVar13;
    }
    auVar20 = __stack_chk_fail();
    uVar13 = auVar20._0_8_;
    *extraout_x18 = sym.sdhci_msm_irq_affinity_notify;
    puVar10 = *(uVar13 - 8);
    if (puVar10 != NULL) {
        uVar11 = *auVar20._8_8_;
        uVar17 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar9 = 0x20;
        if (uVar11 != 0) {
            uVar9 = LZCOUNT((uVar17 >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        iVar18 = *(uVar13 - 0x238);
        *(puVar10 + 0xc) = uVar9;
        if (*(iVar18 + 0x21c) != 2) {
            if (*(puVar10 + 1) != 0) {
                uVar12 = 0;
                puVar19 = *puVar10;
                do {
                    iVar18 = puVar19[2];
                    iVar14 = *(puVar19[4] + 0x360);
                    if ((iVar14 != 0) && (*(puVar19[4] + 0x368) != '\0')) {
                        ipc_log_string(iVar14,"%s: mask: 0x%08x type: %d vote: %u\n",
                                       "sdhci_msm_update_qos_constraints",*puVar19,2,0x7fffffff);
                    }
                    uVar6 = 0xffffffff;
                    do {
                        uVar6 = cpumask_next(uVar6,puVar19);
                        *in_x6 = extraout_x8;
                        if (extraout_x8 <= uVar6) {
                            *(puVar19 + 3) = 0;
                            *(puVar19 + 0x29) = 1;
                            goto code_r0x0800b040;
                        }
                        iVar7 = dev_pm_qos_update_request(iVar18,0x7fffffff);
                        iVar18 = iVar18 + 0x58;
                    } while (-1 < iVar7);
                    iVar18 = *(*(uVar13 - 0x1a0) + 0x78);
                    if (iVar18 == 0) {
                        iVar18 = *(*(uVar13 - 0x1a0) + 8);
                    }
                    _printk(0x80016f1,iVar18,iVar7,uVar12);
code_r0x0800b040:
                    uVar12 = uVar12 + 1;
                    puVar19 = puVar19 + 6;
                } while (uVar12 < *(puVar10 + 1));
            }
            uVar13 = sym.sdhci_msm_vote_pmqos(*(uVar13 - 0x1a0),*(*(uVar13 - 8) + 0xc));
        }
    }
    return uVar13;
}


// ===== sym.sdhci_msm_irq_affinity_notify @ 0x0800af28 (size 352) =====

void sym.sdhci_msm_irq_affinity_notify(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x6;
    uint uVar5;
    uint64_t uVar6;
    ulong extraout_x8;
    int64_t iVar7;
    ulong *in_x18;
    uint32_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar10 = *(arg1 + -8);
    if (puVar10 != NULL) {
        uVar6 = *arg2;
        uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar5 = 0x20;
        if (uVar6 != 0) {
            uVar5 = LZCOUNT((uVar1 >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        iVar7 = *(arg1 + -0x238);
        *(puVar10 + 0xc) = uVar5;
        if (*(iVar7 + 0x21c) != 2) {
            if (*(puVar10 + 1) != 0) {
                uVar8 = 0;
                puVar9 = *puVar10;
                do {
                    iVar7 = puVar9[2];
                    iVar4 = *(puVar9[4] + 0x360);
                    if ((iVar4 != 0) && (*(puVar9[4] + 0x368) != '\0')) {
                        ipc_log_string(iVar4,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints"
                                       ,*puVar9,2,0x7fffffff);
                    }
                    uVar2 = 0xffffffff;
                    do {
                        uVar2 = cpumask_next(uVar2,puVar9);
                        *in_x6 = extraout_x8;
                        if (extraout_x8 <= uVar2) {
                            *(puVar9 + 3) = 0;
                            *(puVar9 + 0x29) = 1;
                            goto code_r0x0800b040;
                        }
                        iVar3 = dev_pm_qos_update_request(iVar7,0x7fffffff);
                        iVar7 = iVar7 + 0x58;
                    } while (-1 < iVar3);
                    iVar7 = *(*(arg1 + -0x1a0) + 0x78);
                    if (iVar7 == 0) {
                        iVar7 = *(*(arg1 + -0x1a0) + 8);
                    }
                    _printk(0x80016f1,iVar7,iVar3,uVar8);
code_r0x0800b040:
                    uVar8 = uVar8 + 1;
                    puVar9 = puVar9 + 6;
                } while (uVar8 < *(puVar10 + 1));
            }
            sym.sdhci_msm_vote_pmqos(*(arg1 + -0x1a0),*(*(arg1 + -8) + 0xc));
        }
    }
    return;
}


// ===== sym.sdhci_msm_irq_affinity_release @ 0x0800b088 (size 12) =====

void sym.sdhci_msm_irq_affinity_release(void)

{
    return;
}


// ===== sym.sdhci_msm_vote_pmqos @ 0x0800b094 (size 400) =====

void sym.sdhci_msm_vote_pmqos(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *in_x6;
    int64_t iVar4;
    int64_t extraout_x8;
    uint64_t *puVar5;
    ulong *in_x18;
    ulong *puVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg2;
    if (uVar3 < 0) {
        return;
    }
    piVar7 = *(arg1 + 0xf70);
    *in_x6 = arg1;
    iVar8 = *piVar7;
    uVar1 = __sw_hweight64(sdhci_set_power_noreg);
    if (uVar1 < uVar3) {
        return;
    }
    if (piVar7[1] == 0) {
        return;
    }
    iVar2 = 0;
    puVar5 = iVar8 + (uVar3 >> 6) * 8;
    while ((*puVar5 & 1L << (arg2 & 0x3fU)) == 0) {
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 6;
        if (piVar7[1] == iVar2) {
            return;
        }
    }
    iVar8 = *piVar7;
    puVar6 = iVar8 + iVar2 * 0x30;
    if (puVar6 == NULL) {
        return;
    }
    iVar4 = iVar2;
    pcVar10 = iVar8 + iVar4 * 0x30 + 0x18;
    if (*pcVar10 != '\0') {
        return;
    }
    iVar11 = iVar8 + iVar4 * 0x30;
    uVar3 = **(iVar11 + 8);
    if (uVar3 == *(iVar11 + 0x29)) {
        return;
    }
    iVar9 = *(iVar11 + 0x10);
    piVar7 = iVar8 + iVar4 * 0x30 + 0x20;
    iVar4 = *piVar7;
    iVar8 = *(iVar4 + 0x360);
    if ((iVar8 != 0) && (*(iVar4 + 0x368) != '\0')) {
        ipc_log_string(iVar8,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints",*puVar6,0,
                       uVar3);
    }
    uVar1 = 0xffffffff;
    do {
        uVar1 = cpumask_next(uVar1,puVar6);
        *in_x6 = extraout_x8;
        if (extraout_x8 <= uVar1) {
            *pcVar10 = '\x01';
            *(iVar11 + 0x29) = uVar3 != 0;
            return;
        }
        iVar2 = dev_pm_qos_update_request(iVar9,uVar3);
        iVar9 = iVar9 + 0x58;
    } while (-1 < iVar2);
    _dev_err(**piVar7 + 0x10,"%s: update qos - failed\n","sdhci_msm_vote_pmqos");
    return;
}


// ===== sym.show_sdhci_msm_clk_gating @ 0x0800b224 (size 68) =====

int64_t sym.show_sdhci_msm_clk_gating(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000d93,*(*(arg1 + 0x98) + 0x840));
    return iVar1;
}


// ===== sym.store_sdhci_msm_clk_gating @ 0x0800b268 (size 164) =====

int64_t sym.store_sdhci_msm_clk_gating(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar2 = &uStack_3c;
    iVar3 = *(arg1 + 0x98);
    uStack_3c = 0;
    iVar1 = kstrtouint(arg2,0,puVar2);
    if (iVar1 == 0) {
        puVar2 = uStack_3c;
        *(iVar3 + 0x840) = uStack_3c;
        _dev_info(arg1,"set clk scaling work delay (%u)\n");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_sdhci_msm_pm_qos;
    iVar1 = scnprintf(puVar2,0x1000,0x8000d93,*(*(iVar3 + 0x98) + 0x844));
    return iVar1;
}


// ===== sym.show_sdhci_msm_pm_qos @ 0x0800b30c (size 68) =====

int64_t sym.show_sdhci_msm_pm_qos(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000d93,*(*(arg1 + 0x98) + 0x844));
    return iVar1;
}


// ===== sym.store_sdhci_msm_pm_qos @ 0x0800b350 (size 164) =====

int64_t sym.store_sdhci_msm_pm_qos(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x98);
    uStack_3c = 0;
    iVar1 = kstrtouint(arg2,0,&uStack_3c);
    if (iVar1 == 0) {
        *(iVar4 + 0x844) = uStack_3c;
        _dev_info(arg1,"set pm qos work delay (%u)\n");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.sdhci_msm_cqe_enable;
    iVar3 = sdhci_cqe_enable();
    if ((*(*(iVar4 + 0xdd8) + 0x3eb) >> 3 & 1) != 0) {
        uVar2 = sym.readl(*(iVar4 + 0xd50) + 0x1000);
        sym.writel(uVar2 | 0x7000,*(iVar4 + 0xd50) + 0x1000);
        uVar2 = sym.readl(*(iVar4 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.writel(uVar2 | 0xd807100,*(iVar4 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        iVar3 = sym.sdhci_msm_ice_wait_bist_status(iVar4 + 0xd40);
    }
    return iVar3;
}


// ===== sym.sdhci_msm_cqe_enable @ 0x0800b3f4 (size 164) =====

void sym.sdhci_msm_cqe_enable(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sdhci_cqe_enable();
    if ((*(*(arg1 + 0xdd8) + 0x3eb) >> 3 & 1) != 0) {
        uVar1 = sym.readl(*(arg1 + 0xd50) + 0x1000);
        sym.writel(uVar1 | 0x7000,*(arg1 + 0xd50) + 0x1000);
        uVar1 = sym.readl(*(arg1 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.writel(uVar1 | 0xd807100,*(arg1 + 0xd50) + 0x1000);
        __const_udelay(0x53e3);
        sym.sdhci_msm_ice_wait_bist_status(arg1 + 0xd40);
    }
    return;
}


// ===== sym.sdhci_msm_cqe_disable @ 0x0800b498 (size 368) =====

void sym.sdhci_msm_cqe_disable(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x7c0;
    if ((*(arg1 + 0xab5) >> 4 & 1) != 0) {
        *(arg1 + 0xba0) = 0x10;
    }
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0xab0);
    pcVar4 = **(arg1 + 0x800);
    if (pcVar4 == NULL) {
        uVar2 = sym.readl(*(arg1 + 0x7d8) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0x7477ba35245aaf4,pcVar4,0x8000450);
        uVar2 = (*pcVar4)(iVar1,0x34);
    }
    pcVar4 = *(*(arg1 + 0x800) + 0x18);
    if (pcVar4 == NULL) {
        sym.writel(uVar2 | 1,*(arg1 + 0x7d8) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar4,0x80004b0);
        (*pcVar4)(iVar1,uVar2 | 1,0x34);
    }
    pcVar4 = *(*(arg1 + 0x800) + 0x18);
    if (pcVar4 == NULL) {
        sym.writel(1,*(arg1 + 0x7d8) + 0x30);
    }
    else {
        __cfi_slowpath_diag(0xcf09c858eaf1045c,pcVar4,0x80004b0);
        (*pcVar4)(iVar1,1,0x30);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xab0,uVar3);
    sdhci_cqe_disable(arg1,arg2 & 1);
    return;
}


// ===== sym.sdhci_msm_program_key @ 0x0800b608 (size 420) =====

void sym.sdhci_msm_program_key(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
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
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    if (*(arg2 + 0x43) < '\0') {
        pcVar1 = *(arg1 + 200) + *(arg2 + 0x41) * 4;
        cVar2 = *pcVar1;
        cVar3 = pcVar1[2];
        if (cVar2 == '\0' && cVar3 == '\x03') {
            uVar10 = *arg2;
            uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
            uVar7 = *arg2 >> 0x20;
            uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
            uStack_70._0_4_ = *(arg2 + 8);
            uStack_70._4_4_ = *(arg2 + 8) >> 0x20;
            uStack_78 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uStack_68._0_4_ = *(arg2 + 0x10);
            uStack_68._4_4_ = *(arg2 + 0x10) >> 0x20;
            uVar10 = (uStack_70 & 0xff00ff00) >> 8 | (uStack_70 & 0xff00ff) << 8;
            uVar7 = (uStack_70._4_4_ & 0xff00ff00) >> 8 | (uStack_70._4_4_ & 0xff00ff) << 8;
            uStack_70 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_68 & 0xff00ff00) >> 8 | (uStack_68 & 0xff00ff) << 8;
            uStack_60._0_4_ = *(arg2 + 0x18);
            uStack_60._4_4_ = *(arg2 + 0x18) >> 0x20;
            uVar7 = (uStack_68._4_4_ & 0xff00ff00) >> 8 | (uStack_68._4_4_ & 0xff00ff) << 8;
            uStack_58._0_4_ = *(arg2 + 0x20);
            uStack_58._4_4_ = *(arg2 + 0x20) >> 0x20;
            uVar4 = (uStack_60 & 0xff00ff00) >> 8 | (uStack_60 & 0xff00ff) << 8;
            uStack_68 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_60._4_4_ & 0xff00ff00) >> 8 | (uStack_60._4_4_ & 0xff00ff) << 8;
            uVar7 = (uStack_58 & 0xff00ff00) >> 8 | (uStack_58 & 0xff00ff) << 8;
            uVar5 = (uStack_58._4_4_ & 0xff00ff00) >> 8 | (uStack_58._4_4_ & 0xff00ff) << 8;
            uStack_60 = CONCAT44(uVar10 >> 0x10 | uVar10 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10);
            uStack_50._0_4_ = *(arg2 + 0x28);
            uStack_50._4_4_ = *(arg2 + 0x28) >> 0x20;
            uStack_58 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10);
            uStack_40._0_4_ = *(arg2 + 0x38);
            uStack_40._4_4_ = *(arg2 + 0x38) >> 0x20;
            uVar10 = (uStack_50 & 0xff00ff00) >> 8 | (uStack_50 & 0xff00ff) << 8;
            uVar7 = (uStack_50._4_4_ & 0xff00ff00) >> 8 | (uStack_50._4_4_ & 0xff00ff) << 8;
            uStack_48._0_4_ = *(arg2 + 0x30);
            uStack_48._4_4_ = *(arg2 + 0x30) >> 0x20;
            uStack_50 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uVar10 = (uStack_40 & 0xff00ff00) >> 8 | (uStack_40 & 0xff00ff) << 8;
            uVar7 = (uStack_40._4_4_ & 0xff00ff00) >> 8 | (uStack_40._4_4_ & 0xff00ff) << 8;
            uVar4 = (uStack_48 & 0xff00ff00) >> 8 | (uStack_48 & 0xff00ff) << 8;
            uVar5 = (uStack_48._4_4_ & 0xff00ff00) >> 8 | (uStack_48._4_4_ & 0xff00ff) << 8;
            uStack_40 = CONCAT44(uVar7 >> 0x10 | uVar7 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10);
            uStack_48 = CONCAT44(uVar5 >> 0x10 | uVar5 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10);
            uVar8 = qcom_scm_ice_set_key(arg3 & 0xffffffff,&uStack_78,0x40,3,*(arg2 + 0x40));
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
        }
        else {
            uVar8 = **(arg1 + 0x10);
            iVar6 = ___ratelimit(obj.sdhci_msm_program_key._rs,"sdhci_msm_program_key");
            if (iVar6 == 0) {
                uVar8 = 0xffffffea;
            }
            else {
                _dev_err(uVar8,"Unhandled crypto capability; algorithm_id=%d, key_size=%d\n",cVar2,cVar3);
                uVar8 = 0xffffffea;
            }
        }
    }
    else {
        uVar8 = qcom_scm_ice_invalidate_key(arg3 & 0xffffffff);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return;
    }
    auVar12 = __stack_chk_fail(uVar8);
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.sdhci_msm_enhanced_strobe_mask;
    if (*(iVar9 + 0x423) != '\0') {
        iVar11 = *(iVar9 + 0xe38);
        uVar7 = sym.readl_relaxed(*(iVar9 + 0x7d8) + *(iVar11 + 0x60));
        uVar10 = 0x2000;
        if ((auVar12._8_8_ & 1) == 0) {
            uVar10 = 0;
        }
        sym.writel_relaxed(uVar7 & 0xffffdfff | uVar10,*(iVar9 + 0x7d8) + *(iVar11 + 0x60));
    }
    return;
}


// ===== sym.sdhci_msm_enhanced_strobe_mask @ 0x0800b7ac (size 120) =====

void sym.sdhci_msm_enhanced_strobe_mask(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x423) != '\0') {
        iVar3 = *(arg1 + 0xe38);
        uVar1 = sym.readl_relaxed(*(arg1 + 0x7d8) + *(iVar3 + 0x60));
        uVar2 = 0x2000;
        if ((arg2 & 1U) == 0) {
            uVar2 = 0;
        }
        sym.writel_relaxed(uVar1 & 0xffffdfff | uVar2,*(arg1 + 0x7d8) + *(iVar3 + 0x60));
    }
    return;
}


// ===== sym.sdhci_msm_ice_wait_bist_status @ 0x0800b824 (size 184) =====

ulong sym.sdhci_msm_ice_wait_bist_status(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = sym.readl(*(arg1 + 0x10) + 0x70);
    if ((uVar2 >> 0x1c & 0xf) != 0) {
        do {
            iVar3 = ktime_get();
            if (iVar1 + 5000000 < iVar3) {
                uVar2 = sym.readl(*(arg1 + 0x10) + 0x70);
                if ((uVar2 >> 0x1c & 0xf) == 0) {
                    return 0;
                }
                _dev_err(**(arg1 + 0x98),"Timed out waiting for ICE self-test to complete\n");
                return 0xffffff92;
            }
            usleep_range_state(0xd,0x32,2);
            uVar2 = sym.readl(*(arg1 + 0x10) + 0x70);
        } while ((uVar2 >> 0x1c & 0xf) != 0);
    }
    return 0;
}


// ===== sym.sdhci_msm_wrapper_suspend_late @ 0x0800b8dc (size 152) =====

ulong sym.sdhci_msm_wrapper_suspend_late(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(arg1 + 0x2f0),"non-removable",0);
    if ((iVar1 == 0) || (_segment.ehdr == 0)) {
        iVar1 = *(arg1 + 0x98);
        if ((*(iVar1 + 0x8e0) != 0) && (*(iVar1 + 0x8e8) != '\0')) {
            ipc_log_string(*(iVar1 + 0x8e0),"%s: Enter\n","sdhci_msm_suspend_late");
        }
        flush_delayed_work(iVar1 + 0x720);
    }
    else {
        _dev_info(arg1,"SDHCI is not boot dev.\n");
    }
    return 0;
}


// ===== sym.sdhci_msm_runtime_suspend @ 0x0800b974 (size 372) =====

ulong sym.sdhci_msm_runtime_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x6;
    ulong extraout_x8;
    ulong *in_x18;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x98);
    iVar6 = *(iVar9 + 0x7b0);
    if ((*(iVar9 + 0x8e0) != 0) && (*(iVar9 + 0x8e8) != '\0')) {
        ipc_log_string(*(iVar9 + 0x8e0),"%s: Enter\n","sdhci_msm_runtime_suspend");
    }
    if (((iVar6 != 0) && (puVar10 = *(iVar9 + 0x7b0), puVar10 != NULL)) && (*(puVar10 + 1) != 0)) {
        uVar5 = 0;
        puVar8 = *puVar10;
        do {
            if (*(puVar8 + 5) == '\0') break;
            iVar6 = puVar8[2];
            iVar3 = *(puVar8[4] + 0x360);
            if ((iVar3 != 0) && (*(puVar8[4] + 0x368) != '\0')) {
                ipc_log_string(iVar3,"%s: mask: 0x%08x type: %d vote: %u\n","sdhci_msm_update_qos_constraints",
                               *puVar8,2,0x7fffffff);
            }
            uVar1 = 0xffffffff;
            do {
                uVar1 = cpumask_next(uVar1,puVar8);
                *in_x6 = extraout_x8;
                if (extraout_x8 <= uVar1) {
                    *(puVar8 + 3) = 0;
                    *(puVar8 + 0x29) = 1;
                    goto code_r0x0800ba8c;
                }
                iVar2 = dev_pm_qos_update_request(iVar6,0x7fffffff);
                iVar6 = iVar6 + 0x58;
            } while (-1 < iVar2);
            _dev_err(*(iVar9 + 0x580) + 0x10,"Failed (%d) removing qos vote(%d)\n",iVar2,uVar5);
code_r0x0800ba8c:
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 6;
        } while (uVar5 < *(puVar10 + 1));
    }
    uVar7 = *(iVar9 + 0x7a8);
    uVar4 = __msecs_to_jiffies(*(iVar9 + 0x840));
    queue_delayed_work_on(0x20,uVar7,iVar9 + 0x720,uVar4);
    return 0;
}


// ===== sym.sdhci_msm_runtime_resume @ 0x0800bae8 (size 580) =====

int sym.sdhci_msm_runtime_resume(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    iVar7 = *(arg1_00 + 0x7b0);
    if ((*(arg1_00 + 0x8e0) != 0) && (*(arg1_00 + 0x8e8) != '\0')) {
        ipc_log_string(*(arg1_00 + 0x8e0),"%s: Enter\n","sdhci_msm_runtime_resume");
    }
    uVar5 = cancel_delayed_work_sync(arg1_00 + 0x720);
    if ((uVar5 & 1) == 0) {
        uVar5 = *(arg1_00 + 0x608);
        cVar1 = *(*(arg1_00 + 0x48) + 0x41f);
        if (cVar1 == '\0') {
            uVar5 = uVar5 >> 3;
        }
        else if (cVar1 == '\x02') {
            uVar5 = uVar5 >> 1;
        }
        sym.sdhci_msm_bus_get_and_set_vote(arg1_00,uVar5);
        dev_pm_opp_set_rate(arg1,*(arg1_00 + 0x608));
        iVar6 = arg1_00 + 0x5b8;
        iVar3 = clk_bulk_prepare(5,iVar6);
        if (iVar3 == 0) {
            iVar3 = clk_bulk_enable(5,iVar6);
            if (iVar3 == 0) {
                sym.sdhci_msm_registers_restore(arg1_00);
                iVar6 = *(arg1_00 + 0x678);
                if (((*(arg1_00 + 0x639) != '\0') || ((*(*(arg1_00 + 0x48) + 0x423) & 1) != 0)) &&
                   (*(*(arg1_00 + 0x48) + 0x420) == '\n')) {
                    uVar4 = sym.readl_relaxed(*(arg1_00 + 0x18) + *(iVar6 + 0x68));
                    sym.writel_relaxed(uVar4 | 2,*(arg1_00 + 0x18) + *(iVar6 + 0x68));
                    DataSynchronizationBarrier(3,2,0);
                    __const_udelay(0x218e);
                    uVar4 = sym.readl_relaxed(*(arg1_00 + 0x18) + *(iVar6 + 0x68));
                    sym.writel_relaxed(uVar4 & 0xfffffffd,*(arg1_00 + 0x18) + *(iVar6 + 0x68));
                }
                if ((*(arg1_00 + 0x669) != '\0') && (*(arg1_00 + 0x608) != 0)) {
                    uVar2 = *(*(arg1_00 + 0x48) + 0x420);
                    if ((((uVar2 == 5) && ((*(arg1_00 + 0x2f4) >> 4 & 1) != 0)) ||
                        ((((100000000 < *(arg1_00 + 0x30c) && (uVar2 < 0xb)) && ((1 << (uVar2 & 0x1f) & 0x640U) != 0))
                         && (*(*(arg1_00 + 0x48) + 0x423) == '\0')))) &&
                       (iVar3 = sym.msm_init_cm_dll(arg1_00,0), iVar3 == 0)) {
                        sym.msm_config_cm_dll_phase(arg1_00,*(arg1_00 + 0x63b));
                    }
                }
                goto code_r0x0800bc9c;
            }
            clk_bulk_unprepare(5,iVar6);
        }
        _dev_err(arg1,"Failed to enable clocks %d\n",iVar3);
        sym.sdhci_msm_bus_get_and_set_vote(arg1_00,0);
    }
    else {
code_r0x0800bc9c:
        if ((iVar7 == 0) ||
           (sym.sdhci_msm_vote_pmqos(*(arg1_00 + 0x618),*(*(arg1_00 + 0x7b0) + 0xc)),
           (*(*(arg1_00 + 0x618) + 0x3eb) >> 3 & 1) == 0)) {
            iVar3 = 0;
        }
        else {
            iVar3 = sym.sdhci_msm_ice_wait_bist_status(arg1_00 + 0x580);
        }
    }
    return iVar3;
}


// ===== sym.__cfi_check_fail @ 0x0800bd2c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800bd70

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
    //switch table (4 cases) at 0x8002074
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800bd84);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800bd94 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x0800bdc8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdhci_msm_probe.25097f443e31f63e0512f8d5d188b74c.cfi_jt);
    return;
}

