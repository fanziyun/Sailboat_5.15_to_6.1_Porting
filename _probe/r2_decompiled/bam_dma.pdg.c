// decompiled from bam_dma by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 924) =====

//WARNING: Switch with 1 destination removed at 0x08005254

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x146502001565ea5c) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x5a4e14bc12b05663) {
                if (arg1 == -0x5dce27ec3a32eb83) {
                    pcVar2 = sym.bam_dma_xlate.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                }
                else {
                    if (arg1 != -0x5d3743f59af00cdc) goto code_r0x08005214;
                    pcVar2 = sym.bam_dma_free_desc.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                }
            }
            else {
                if (arg1 != -0x5a4e14bc12b05663) {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08005214;
                    pcVar2 = sym.bam_dma_suspend.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                    goto code_r0x08002350;
                }
                pcVar2 = sym.bam_slave_config.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
            }
        }
        else if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 != -0x3987c0e26ee29729) {
                if (arg1 != -0x36846b4b0b5849a7) goto code_r0x08005214;
                pcVar2 = sym.vchan_tx_submit.cfi_jt;
                goto code_r0x08002328;
            }
            pcVar2 = sym.bam_dma_irq.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
code_r0x08002328:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005214;
            }
            if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08005214;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x3675599da7c39b65) {
        if (arg1 < 0x2eec8673b37c6729) {
            if (arg1 == 0x146502001565ea5c) {
                pcVar2 = sym.bam_pause.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
code_r0x08002350:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x08005214;
            }
            if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08005214;
            pcVar2 = sym.trace_event_reg.cfi_jt;
        }
        else if (arg1 == 0x2eec8673b37c6729) {
            pcVar2 = sym.__traceiter_bam_dma_info.cfi_jt;
        }
        else {
            if (arg1 != 0x339878a8b9ddc39f) {
                if ((arg1 == 0x345b8f49125c3eda) && ((pcVar1 + -0x8002480 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08005214;
            }
            pcVar2 = sym.dma_tasklet.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
        }
    }
    else if (arg1 < 0x3dd1a39e589289fe) {
        if (arg1 == 0x3675599da7c39b65) {
            pcVar2 = sym.bam_prep_slave_sg.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
        }
        else {
            if (arg1 != 0x3c61e5e5db80f04c) goto code_r0x08005214;
            pcVar2 = sym.bam_tx_status.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
        }
    }
    else if (arg1 == 0x3dd1a39e589289fe) {
        pcVar2 = sym.trace_raw_output_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
    }
    else {
        if (arg1 == 0x6d896a35912b7bb6) {
            pcVar2 = sym.bam_issue_pending.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
            goto code_r0x08002328;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005214;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005214:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005268);
    (*pcVar1)();
}


// ===== sym.trace_raw_output_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x080023a8 (size 8) =====

void sym.trace_raw_output_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"%s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.bam_prep_slave_sg.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x080023b0 (size 8) =====

int64_t sym.bam_prep_slave_sg.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt
                  (int64_t param_1,int64_t param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int iVar6;
    int64_t *piVar7;
    int *piVar8;
    int *piVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x100);
    if (*(iVar5 + 0x238) != 0) {
        ipc_log_string(*(iVar5 + 0x238),"%s DMA direction:%d\n","bam_prep_slave_sg",param_4);
    }
    sym.__ftrace_dbg(*(iVar5 + 8),0x800070b,0x800085b,param_4);
    if (param_4 - 1 < 2) {
        uVar10 = 0;
        iVar5 = param_2;
        iVar6 = param_3;
        if (param_3 != 0) {
            do {
                uVar10 = (*(iVar5 + 0x18) + 0x7ff7U) / 0x7ff8 + uVar10;
                iVar5 = sg_next();
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
        }
        iVar5 = __kmalloc(uVar10 * 8 + 0xe0,0x900);
        if (iVar5 != 0) {
            if ((param_5 >> 5 & 1) != 0) {
                *(iVar5 + 0xb0) = *(iVar5 + 0xb0) | 0x1000;
            }
            if ((param_5 & 1) != 0) {
                *(iVar5 + 0xb0) = *(iVar5 + 0xb0) | 0x4000;
            }
            piVar8 = iVar5 + 0xe0;
            *(iVar5 + 0xa8) = uVar10;
            *(iVar5 + 0xd0) = param_4;
            *(iVar5 + 0xb8) = piVar8;
            if (param_3 != 0) {
                iVar6 = 0;
                do {
                    iVar4 = 0;
                    uVar3 = *(param_2 + 0x18);
                    piVar9 = piVar8;
                    while( true ) {
                        piVar8 = piVar9 + 2;
                        if ((param_5 >> 7 & 1) != 0) {
                            *(piVar9 + 6) = *(piVar9 + 6) | 0x800;
                        }
                        *piVar9 = iVar4 + *(param_2 + 0x10);
                        if (uVar3 < 0x7ff9) break;
                        *(piVar9 + 1) = 0x7ff8;
                        iVar4 = iVar4 + 0x7ff8;
                        uVar3 = uVar3 - 0x7ff8;
                        *(iVar5 + 0xd8) = *(iVar5 + 0xd8) + 0x7ff8;
                        piVar9 = piVar8;
                    }
                    *(piVar9 + 1) = uVar3;
                    iVar6 = iVar6 + 1;
                    *(iVar5 + 0xd8) = *(iVar5 + 0xd8) + uVar3;
                    param_2 = sg_next(param_2);
                } while (iVar6 != param_3);
            }
            dma_async_tx_descriptor_init(iVar5,param_1);
            *(iVar5 + 4) = param_5;
            *(iVar5 + 0x90) = 0;
            *(iVar5 + 0x18) = sym.vchan_tx_submit.cfi_jt;
            *(iVar5 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
            uVar2 = _raw_spin_lock_irqsave(param_1 + 0xa0);
            piVar7 = *(param_1 + 0xb0);
            iVar1 = iVar5 + 0x98;
            uVar3 = __list_add_valid(iVar1,piVar7,param_1 + 0xa8);
            if ((uVar3 & 1) != 0) {
                *(param_1 + 0xb0) = iVar1;
                *(iVar5 + 0x98) = param_1 + 0xa8;
                *(iVar5 + 0xa0) = piVar7;
                *piVar7 = iVar1;
            }
            _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar2);
        }
    }
    else {
        _dev_err(*(iVar5 + 8),"invalid dma direction\n");
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080023b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080023c0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080023c8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.vchan_tx_submit.cfi_jt @ 0x080023d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.vchan_tx_submit.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.vchan_tx_desc_free.cfi_jt @ 0x080023d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.vchan_tx_desc_free.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.bam_tx_status.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x080023e0 (size 8) =====

uint sym.bam_tx_status.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1,int param_2,int *param_3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint16_t *puVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x100);
    if (*(iVar4 + 0x238) != 0) {
        ipc_log_string(*(iVar4 + 0x238),"%s chan id:%d\n","bam_tx_status",*(param_1 + 0x108));
        iVar4 = *(param_1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar4 + 8),0x800084c,0x800052c,*(param_1 + 0x108));
    iVar11 = *(param_1 + 0x10);
    iVar9 = *(param_1 + 0x14);
    if (param_3 != NULL) {
        *param_3 = iVar9;
        param_3[1] = iVar11;
        param_3[2] = 0;
        param_3[3] = 0;
    }
    if (iVar11 < iVar9) {
        if ((iVar11 < param_2) && (param_2 <= iVar9)) {
            return 0;
        }
    }
    else {
        if (iVar11 < param_2) {
            return 0;
        }
        if (param_2 <= iVar9) {
            return 0;
        }
    }
    if (param_3 != NULL) {
        uVar2 = _raw_spin_lock_irqsave(param_1 + 0xa0);
        iVar4 = vchan_find_desc(param_1,param_2);
        if (iVar4 == 0) {
            piVar5 = *(param_1 + 0x178);
            if (param_1 + 0x178 == piVar5) {
                iVar11 = 0;
            }
            else {
                iVar11 = 0;
                do {
                    if (piVar5[-0x18] == param_2) {
                        uVar1 = *(piVar5 + -3);
                        uVar6 = uVar1;
                        if (uVar1 != 0) {
                            if (uVar1 == 1) {
                                uVar8 = 0;
                            }
                            else {
                                uVar8 = uVar6 & 0xfffffffe;
                                iVar9 = 0;
                                puVar7 = piVar5[-1] + 0xc;
                                uVar10 = uVar8;
                                do {
                                    uVar10 = uVar10 - 2;
                                    iVar11 = iVar11 + puVar7[-4];
                                    iVar9 = iVar9 + *puVar7;
                                    puVar7 = puVar7 + 8;
                                } while (uVar10 != 0);
                                iVar11 = iVar9 + iVar11;
                                if (uVar8 == uVar6) goto code_r0x080044ac;
                            }
                            iVar4 = uVar6 - uVar8;
                            puVar7 = piVar5[-1] + uVar8 * 8 + 4;
                            do {
                                iVar4 = iVar4 + -1;
                                iVar11 = iVar11 + *puVar7;
                                puVar7 = puVar7 + 4;
                            } while (iVar4 != 0);
                        }
                    }
code_r0x080044ac:
                    piVar5 = *piVar5;
                } while (param_1 + 0x178 != piVar5);
            }
        }
        else {
            iVar11 = *(iVar4 + 0xd8);
        }
        _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar2);
        param_3[2] = iVar11;
    }
    uVar3 = 1;
    if (*(param_1 + 0x170) != 0) {
        uVar3 = 2;
    }
    return uVar3;
}


// ===== sym.bam_slave_config.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x080023e8 (size 8) =====

ulong sym.bam_slave_config.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1,ulong *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x100);
    if (*(iVar5 + 0x238) != 0) {
        ipc_log_string(*(iVar5 + 0x238),"%s chan id:%d\n","bam_slave_config",*(param_1 + 0x108));
        iVar5 = *(param_1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar5 + 8),0x800084c,0x8000832,*(param_1 + 0x108));
    uVar4 = _raw_spin_lock_irqsave(param_1 + 0xa0);
    *(param_1 + 0x110) = *param_2;
    uVar2 = param_2[4];
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    *(param_1 + 0x128) = param_2[3];
    *(param_1 + 0x130) = uVar2;
    *(param_1 + 0x118) = uVar1;
    *(param_1 + 0x120) = uVar3;
    uVar2 = param_2[8];
    uVar1 = param_2[5];
    uVar3 = param_2[6];
    *(param_1 + 0x148) = param_2[7];
    *(param_1 + 0x150) = uVar2;
    *(param_1 + 0x138) = uVar1;
    *(param_1 + 0x140) = uVar3;
    *(param_1 + 0x174) = 1;
    _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar4);
    return 0;
}


// ===== sym.dma_tasklet.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x080023f0 (size 8) =====

void sym.dma_tasklet.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    uint16_t *puVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x28) != 0) {
        uVar4 = 0;
        iVar5 = 0x16a;
        do {
            puVar1 = *(param_1 + -0x30) + iVar5;
            uVar3 = _raw_spin_lock_irqsave(puVar1 + -0x65);
            if (puVar1 + -0x51 != *(puVar1 + -0x51)) {
                uVar2 = 0xfff;
                if (*(param_1 + 0x44) != '\0') {
                    uVar2 = 0x1f;
                }
                if ((uVar2 & ~*puVar1 + puVar1[-1]) != 0) {
                    sym.bam_start_dma(puVar1 + -0xb5);
                }
            }
            _raw_spin_unlock_irqrestore(puVar1 + -0x65,uVar3);
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x198;
        } while (uVar4 < *(param_1 + -0x28));
    }
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080023f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.bam_dma_suspend.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002400 (size 8) =====

ulong sym.bam_dma_suspend.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    pm_runtime_force_suspend();
    clk_unprepare(*(iVar1 + 0x1e0));
    if (*(iVar1 + 0x238) != 0) {
        ipc_log_string(*(iVar1 + 0x238),"%s ret:%d\n","bam_dma_suspend",0);
    }
    sym.__ftrace_dbg(*(iVar1 + 8),0x800076a,0x80007eb,0);
    return 0;
}


// ===== sym.bam_dma_runtime_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002408 (size 8) =====

int sym.bam_dma_runtime_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_enable(*(*(param_1 + 0x98) + 0x1e0));
    if (iVar1 < 0) {
        _dev_err(param_1,"clk_enable failed: %d\n",iVar1);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.bam_dma_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002410 (size 8) =====

int sym.bam_dma_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar1 = clk_prepare(*(iVar2 + 0x1e0));
    if (iVar1 == 0) {
        pm_runtime_force_resume(param_1);
        if (*(iVar2 + 0x238) != 0) {
            ipc_log_string(*(iVar2 + 0x238),"%s ret:%d\n","bam_dma_resume",0);
        }
        sym.__ftrace_dbg(*(iVar2 + 8),0x800076a,0x8000621,0);
    }
    return iVar1;
}


// ===== sym.bam_dma_runtime_suspend.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002418 (size 8) =====

ulong sym.bam_dma_runtime_suspend.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    clk_disable(*(*(param_1 + 0x98) + 0x1e0));
    return 0;
}


// ===== sym.bam_dma_irq.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002420 (size 8) =====

ulong sym.bam_dma_irq.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(ulong param_1,int64_t *param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.process_channel_irqs(param_2);
    if ((uVar4 & 0x7fffffff) != 0) {
        puVar1 = param_2 + 0x3f;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar8 & 1) == 0) {
            __tasklet_schedule(param_2 + 0x3e);
        }
    }
    iVar5 = __pm_runtime_resume(param_2[1],4);
    if (iVar5 < 0) {
        uVar7 = 0;
    }
    else {
        if (uVar4 < 0) {
            iVar6 = sym.readl_relaxed(*param_2 + *(param_2[0x3b] + 0x70) + param_2[0x3a] * *(param_2[0x3b] + 0x7c));
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(iVar6,*param_2 + *(param_2[0x3b] + 0x80) + param_2[0x3a] * *(param_2[0x3b] + 0x8c));
        }
        iVar6 = param_2[1];
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar6 + 0x218) = uVar7;
        __pm_runtime_suspend(param_2[1],0xd);
        uVar7 = 1;
    }
    return uVar7;
}


// ===== sym.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002428 (size 8) =====

uint64_t sym.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    char *pcVar13;
    uint64_t *puVar14;
    ulong *in_x18;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar15 = param_1 + 0x10;
    puVar7 = devm_kmalloc(uVar15,0x240,0xdc0);
    if (puVar7 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x08002fbc;
    }
    puVar7[1] = uVar15;
    iVar8 = of_match_node(obj.bam_of_match,*(param_1 + 0x300));
    if (iVar8 == 0) {
        pcVar13 = "Unsupported BAM module\n";
code_r0x08002afc:
        _dev_err(uVar15,pcVar13);
        uVar9 = 0xffffffed;
        goto code_r0x08002fbc;
    }
    puVar7[0x3b] = *(iVar8 + 0xc0);
    uVar9 = ipc_log_context_create(1,"dma_bam_log",0);
    puVar7[0x47] = uVar9;
    if (uVar9 == 0) {
        _dev_err(puVar7[1],"Failed to create dma bam log\n");
        uVar9 = puVar7[0x47];
        if (uVar9 != 0) goto code_r0x08002930;
    }
    else {
code_r0x08002930:
        ipc_log_string(uVar9,"%s start %d\n","bam_dma_probe",1);
    }
    sym.__ftrace_dbg(puVar7[1],0x80007b5,0x80004c2,1);
    uVar10 = platform_get_resource(param_1,0x200,0);
    uVar9 = devm_ioremap_resource(uVar15,uVar10);
    *puVar7 = uVar9;
    if (0xfffffffffffff000 < uVar9) goto code_r0x08002fbc;
    *(puVar7 + 0x234) = 0;
    piVar11 = platform_get_resource_byname(param_1,0x200,"bam_remote_mem");
    if (piVar11 != NULL) {
        *(puVar7 + 0x234) = 1;
        *(puVar7 + 0x46) = *piVar11;
        uVar9 = devm_ioremap(uVar15,*piVar11,(piVar11[1] - *piVar11) + 1);
        puVar7[0x44] = uVar9;
        if (uVar9 == 0) {
            _dev_err(uVar15,"Remote mem ioremap failed\n");
            uVar9 = 0xfffffff4;
            goto code_r0x08002fbc;
        }
        puVar7[0x45] = uVar9;
        puVar7[0x43] = piVar11;
    }
    iVar5 = dma_set_mask(uVar15,0xffffffff);
    if (iVar5 != 0) {
        pcVar13 = "Could not set 32 bit mask\n";
        goto code_r0x08002afc;
    }
    dma_set_coherent_mask(uVar15,0xffffffff);
    uVar6 = platform_get_irq(param_1,0);
    *(puVar7 + 0x3d) = uVar6;
    if (uVar6 < 0) {
        uVar9 = uVar6;
        goto code_r0x08002fbc;
    }
    uVar6 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,ee",puVar7 + 0x3a,1,0);
    if (uVar6 < 0) {
        uVar9 = uVar6;
        _dev_err(puVar7[1],"Execution environment unspecified\n");
        goto code_r0x08002fbc;
    }
    iVar8 = of_find_property(*(param_1 + 0x300),"qcom,controlled-remotely",0);
    *(puVar7 + 0x1d4) = iVar8 != 0;
    if (iVar8 == 0) {
code_r0x08002b68:
        uVar9 = devm_clk_get(puVar7[1],"bam_clk");
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(param_1 + 0x300),"num-channels",puVar7 + 0x39,1,0);
        if (iVar5 < 0) {
            _dev_err(puVar7[1],"num-channels unspecified in dt\n");
        }
        iVar5 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,num-ees",puVar7 + 0x1cc,1,0);
        if (iVar5 < 0) {
            _dev_err(puVar7[1],"num-ees unspecified in dt\n");
            cVar3 = *(puVar7 + 0x1d4);
        }
        else {
            cVar3 = *(puVar7 + 0x1d4);
        }
        if (cVar3 == '\0') goto code_r0x08002b68;
        uVar9 = devm_clk_get_optional(puVar7[1],"bam_clk");
    }
    puVar7[0x3c] = uVar9;
    if (uVar9 < 0xfffffffffffff001) {
        uVar6 = clk_prepare(uVar9);
        if (uVar6 == 0) {
            uVar6 = clk_enable(uVar9);
            if (uVar6 == 0) {
                uVar6 = *(puVar7 + 0x1cc);
                if (uVar6 == 0) {
                    uVar6 = sym.readl_relaxed(*puVar7 + *(puVar7[0x3b] + 0x10) + puVar7[0x3a] * *(puVar7[0x3b] + 0x1c));
                    uVar6 = uVar6 >> 8 & 0xf;
                    *(puVar7 + 0x1cc) = uVar6;
                }
                uVar2 = puVar7[0x3a];
                if (uVar2 < uVar6) {
                    if (puVar7[0x39] == 0) {
                        uVar6 = sym.readl_relaxed(*puVar7 + *(puVar7[0x3b] + 0x20) + *(puVar7[0x3b] + 0x2c) * uVar2);
                        *(puVar7 + 0x39) = uVar6 & 0xff;
                    }
                    if (*(puVar7 + 0x1d4) == '\0') {
                        uVar6 = sym.readl_relaxed(*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(uVar6 | 1,*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(uVar6 & 0xfffffffe,*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3])
                        ;
                        DataSynchronizationBarrier(3,2,0);
                        sym.writel_relaxed(uVar6 & 0xfffffffe | 2,
                                           *puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(4,*puVar7 + *(puVar7[0x3b] + 0x30) + puVar7[0x3a] * *(puVar7[0x3b] + 0x3c));
                        sym.writel_relaxed(0xffff004,
                                           *puVar7 + *(puVar7[0x3b] + 0xa0) + puVar7[0x3a] * *(puVar7[0x3b] + 0xac));
                        sym.writel_relaxed(6,*puVar7 + *(puVar7[0x3b] + 0x90) + puVar7[0x3a] * *(puVar7[0x3b] + 0x9c));
                        sym.writel_relaxed(0x80000000,
                                           *puVar7 + *(puVar7[0x3b] + 0xc0) + puVar7[0x3a] * *(puVar7[0x3b] + 0xcc));
                        if (puVar7[0x47] != 0) {
                            ipc_log_string(puVar7[0x47],"%s ret:%d\n","bam_init",0);
                        }
                        sym.__ftrace_dbg(puVar7[1],0x800076a,0x8000843,0);
                    }
                    tasklet_setup(puVar7 + 0x3e,sym.dma_tasklet.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt);
                    uVar9 = devm_kmalloc(puVar7[1],puVar7[0x39] * 0x198,0xdc0);
                    puVar7[0x38] = uVar9;
                    if (uVar9 == 0) {
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        puVar1 = puVar7 + 2;
                        puVar7[4] = puVar7 + 4;
                        puVar7[5] = puVar7 + 4;
                        if (puVar7[0x39] != 0) {
                            uVar6 = 1;
                            while( true ) {
                                iVar8 = uVar9 + (uVar6 - 1) * 0x198;
                                *(iVar8 + 0x108) = uVar6 - 1;
                                *(iVar8 + 0x100) = puVar7;
                                vchan_init(iVar8,puVar1);
                                *(iVar8 + 0x98) = sym.bam_dma_free_desc.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                *(iVar8 + 0x178) = iVar8 + 0x178;
                                *(iVar8 + 0x180) = iVar8 + 0x178;
                                if (puVar7[0x39] <= uVar6) break;
                                uVar9 = puVar7[0x38];
                                uVar6 = uVar6 + 1;
                            }
                        }
                        uVar12 = devm_request_threaded_irq
                                           (puVar7[1],puVar7[0x3d],
                                            sym.bam_dma_irq.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,0,4,"bam_dma",
                                            puVar7);
                        uVar9 = uVar12 & 0xffffffff;
                        if (uVar12 == 0) {
                            uVar9 = puVar7[1];
                            puVar7[0x10] = uVar9;
                            if (*(uVar9 + 0x2c0) == NULL) {
                                _dev_err(uVar9,"cannot set maximum segment size\n");
                                uVar9 = 0xfffffffb;
                            }
                            else {
                                **(uVar9 + 0x2c0) = 0x7ff8;
                                *(param_1 + 0xa8) = puVar7;
                                puVar14 = puVar7 + 0xb;
                                *puVar14 = 0;
                                Hint_Prefetch(puVar14,2,0,1);
                                do {
                                    cVar3 = '\x01';
                                    bVar4 = ExclusiveMonitorPass(puVar14,0x10);
                                    if (bVar4) {
                                        *puVar14 = *puVar14 | 0x400;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                *(puVar7 + 0x1b) = 6;
                                *(puVar7 + 0xec) = 1;
                                puVar7[0x1a] = 0x400000004;
                                puVar7[0x1e] = sym.bam_alloc_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x20] = sym.bam_free_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x29] = sym.bam_prep_slave_sg.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x33] = sym.bam_tx_status.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x34] = sym.bam_issue_pending.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x2e] = sym.bam_slave_config.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x2f] = sym.bam_pause.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x30] = sym.bam_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x31] = sym.bam_dma_terminate_all.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x10] = puVar7[1];
                                uVar6 = dma_async_device_register(puVar1);
                                if (uVar6 == 0) {
                                    uVar6 = of_dma_controller_register
                                                      (*(param_1 + 0x300),
                                                       sym.bam_dma_xlate.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,puVar1
                                                      );
                                    if (uVar6 == 0) {
                                        pm_runtime_irq_safe(uVar15);
                                        pm_runtime_set_autosuspend_delay(uVar15,100);
                                        __pm_runtime_use_autosuspend(uVar15,1);
                                        uVar10 = ktime_get_mono_fast_ns();
                                        *(param_1 + 0x228) = uVar10;
                                        __pm_runtime_set_status(uVar15,0);
                                        pm_runtime_enable(uVar15);
                                        if (puVar7[0x47] != 0) {
                                            ipc_log_string(puVar7[0x47],"%s end ret:%d\n","bam_dma_probe",0);
                                        }
                                        sym.__ftrace_dbg(puVar7[1],0x80005b0,0x80004c2,0);
                                        uVar9 = 0;
                                        goto code_r0x08002fbc;
                                    }
                                    uVar9 = uVar6;
                                    dma_async_device_unregister(puVar1);
                                }
                                else {
                                    uVar9 = uVar6;
                                    _dev_err(puVar7[1],"failed to register dma async device\n");
                                }
                            }
                        }
                        if (puVar7[0x39] != 0) {
                            uVar6 = 0;
                            do {
                                tasklet_kill(puVar7[0x38] + uVar6 * 0x198 + 0x70);
                                uVar6 = uVar6 + 1;
                            } while (uVar6 < puVar7[0x39]);
                        }
                    }
                    tasklet_kill(puVar7 + 0x3e);
                }
                else {
                    uVar9 = 0xffffffea;
                }
                uVar15 = puVar7[0x3c];
                clk_disable(uVar15);
                clk_unprepare(uVar15);
                goto code_r0x08002fbc;
            }
            clk_unprepare(uVar9);
        }
        uVar9 = uVar6;
        _dev_err(puVar7[1],"failed to prepare/enable clock\n");
    }
    else {
        uVar9 = uVar9 & 0xffffffff;
    }
code_r0x08002fbc:
    return uVar9 & 0xffffffff;
}


// ===== sym.bam_dma_remove.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002430 (size 8) =====

ulong sym.bam_dma_remove.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0xa8);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s ret:%d\n","bam_dma_remove",0);
    }
    sym.__ftrace_dbg(piVar3[1],0x800076a,0x8000775,0);
    if (piVar3[0x47] != 0) {
        ipc_log_context_destroy();
    }
    pm_runtime_force_suspend(param_1 + 0x10);
    of_dma_controller_free(*(param_1 + 0x300));
    dma_async_device_unregister(piVar3 + 2);
    sym.writel_relaxed(0,*piVar3 + *(piVar3[0x3b] + 0xc0) + piVar3[0x3a] * *(piVar3[0x3b] + 0xcc));
    devm_free_irq(piVar3[1],piVar3[0x3d],piVar3);
    if (piVar3[0x39] != 0) {
        uVar4 = 0;
        iVar5 = 0x160;
        do {
            sym.bam_dma_terminate_all(piVar3[0x38] + iVar5 + -0x160);
            tasklet_kill(piVar3[0x38] + iVar5 + -0xf0);
            iVar2 = *(piVar3[0x38] + iVar5 + -8);
            if (iVar2 != 0) {
                uVar1 = 0x8000;
                if (*(piVar3 + 0x234) != '\0') {
                    uVar1 = 0x100;
                }
                dma_free_attrs(piVar3[1],uVar1,iVar2,*(piVar3[0x38] + iVar5),4);
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x198;
        } while (uVar4 < *(piVar3 + 0x39));
    }
    tasklet_kill(piVar3 + 0x3e);
    iVar5 = piVar3[0x3c];
    clk_disable(iVar5);
    clk_unprepare(iVar5);
    return 0;
}


// ===== sym.bam_issue_pending.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002438 (size 8) =====

void sym.bam_issue_pending.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(param_1 + 0x100);
    if (*(iVar8 + 0x238) != 0) {
        ipc_log_string(*(iVar8 + 0x238),"%s chan id:%d\n","bam_issue_pending",*(param_1 + 0x108));
    }
    sym.__ftrace_dbg(*(iVar8 + 8),0x800084c,0x800060f,*(param_1 + 0x108));
    uVar6 = _raw_spin_lock_irqsave(param_1 + 0xa0);
    piVar1 = param_1 + 0xb8;
    piVar2 = param_1 + 200;
    if (piVar1 != *piVar1) {
        iVar4 = *(param_1 + 0xb8);
        piVar5 = *(param_1 + 0xc0);
        piVar7 = *(param_1 + 0xd0);
        *(iVar4 + 8) = piVar7;
        *piVar7 = iVar4;
        *piVar5 = piVar2;
        *(param_1 + 0xd0) = piVar5;
        *(param_1 + 0xb8) = piVar1;
        *(param_1 + 0xc0) = piVar1;
    }
    if (piVar2 != *piVar2) {
        uVar3 = 0xfff;
        if (*(iVar8 + 0x234) != '\0') {
            uVar3 = 0x1f;
        }
        if ((uVar3 & ~*(param_1 + 0x16a) + *(param_1 + 0x168)) != 0) {
            sym.bam_start_dma(param_1);
        }
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar6);
    return;
}


// ===== sym.bam_free_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002440 (size 8) =====

int64_t sym.bam_free_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    int64_t *****pppppiVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint64_t in_x4;
    int64_t ******ppppppiVar8;
    int64_t iVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int iVar15;
    int *piVar16;
    int *piVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    int64_t *****pppppiStack_58;
    int64_t *****pppppiStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piVar12 = *(param_1 + 0x100);
    if (piVar12[0x47] != 0) {
        ipc_log_string(piVar12[0x47],"%s chan id:%d\n","bam_free_chan",*(param_1 + 0x108));
    }
    uVar7 = *(param_1 + 0x108);
    pcVar6 = "bam_free_chan";
    sym.__ftrace_dbg(piVar12[1],0x800084c,0x800073c,uVar7);
    iVar4 = __pm_runtime_resume(piVar12[1],4);
    if (-1 < iVar4) {
        iVar4 = param_1 + 0xa0;
        pppppiStack_58 = &pppppiStack_58;
        pppppiStack_50 = &pppppiStack_58;
        uVar5 = _raw_spin_lock_irqsave(iVar4);
        piVar13 = param_1 + 0xa8;
        if (piVar13 != *piVar13) {
            pppppiVar1 = *(param_1 + 0xa8);
            ppppppiVar8 = *(param_1 + 0xb0);
            pppppiVar1[1] = pppppiStack_50;
            *pppppiStack_50 = pppppiVar1;
            *ppppppiVar8 = &pppppiStack_58;
            *(param_1 + 0xa8) = piVar13;
            *(param_1 + 0xb0) = piVar13;
            pppppiStack_50 = ppppppiVar8;
        }
        piVar13 = param_1 + 0xb8;
        if (piVar13 != *piVar13) {
            pppppiVar1 = *(param_1 + 0xb8);
            ppppppiVar8 = *(param_1 + 0xc0);
            pppppiVar1[1] = pppppiStack_50;
            *pppppiStack_50 = pppppiVar1;
            *ppppppiVar8 = &pppppiStack_58;
            *(param_1 + 0xb8) = piVar13;
            *(param_1 + 0xc0) = piVar13;
            pppppiStack_50 = ppppppiVar8;
        }
        piVar13 = param_1 + 200;
        if (piVar13 != *piVar13) {
            pppppiVar1 = *(param_1 + 200);
            ppppppiVar8 = *(param_1 + 0xd0);
            pppppiVar1[1] = pppppiStack_50;
            *pppppiStack_50 = pppppiVar1;
            *ppppppiVar8 = &pppppiStack_58;
            *(param_1 + 200) = piVar13;
            *(param_1 + 0xd0) = piVar13;
            pppppiStack_50 = ppppppiVar8;
        }
        piVar13 = param_1 + 0xd8;
        if (piVar13 != *piVar13) {
            pppppiVar1 = *(param_1 + 0xd8);
            ppppppiVar8 = *(param_1 + 0xe0);
            pppppiVar1[1] = pppppiStack_50;
            *pppppiStack_50 = pppppiVar1;
            *ppppppiVar8 = &pppppiStack_58;
            *(param_1 + 0xd8) = piVar13;
            *(param_1 + 0xe0) = piVar13;
            pppppiStack_50 = ppppppiVar8;
        }
        piVar13 = param_1 + 0xe8;
        if (piVar13 != *piVar13) {
            pppppiVar1 = *(param_1 + 0xe8);
            ppppppiVar8 = *(param_1 + 0xf0);
            pppppiVar1[1] = pppppiStack_50;
            *pppppiStack_50 = pppppiVar1;
            *ppppppiVar8 = &pppppiStack_58;
            *(param_1 + 0xe8) = piVar13;
            *(param_1 + 0xf0) = piVar13;
            pppppiStack_50 = ppppppiVar8;
        }
        for (ppppppiVar8 = pppppiStack_58; &pppppiStack_58 != ppppppiVar8; ppppppiVar8 = *ppppppiVar8) {
            *(ppppppiVar8 + -0x94) = *(ppppppiVar8 + -0x94) & 0xffffffbf;
        }
        _raw_spin_unlock_irqrestore(iVar4,uVar5);
        vchan_dma_desc_free_list(param_1,&pppppiStack_58);
        if (*(param_1 + 0x178) == param_1 + 0x178) {
            uVar5 = _raw_spin_lock_irqsave(iVar4);
            piVar13 = *(param_1 + 0x100);
            iVar9 = piVar13[0x3b];
            sym.writel_relaxed(1,*piVar13 + *(iVar9 + 0xe0) + *(iVar9 + 0xe4) * *(param_1 + 0x108) +
                                  *(iVar9 + 0xe8) * *(param_1 + 0x108) + piVar13[0x3a] * *(iVar9 + 0xec));
            iVar9 = piVar13[0x3b];
            sym.writel_relaxed(0,*piVar13 + *(iVar9 + 0xe0) + *(iVar9 + 0xe4) * *(param_1 + 0x108) +
                                  *(iVar9 + 0xe8) * *(param_1 + 0x108) + piVar13[0x3a] * *(iVar9 + 0xec));
            DataSynchronizationBarrier(3,2,0);
            *(param_1 + 0x16c) = 0;
            _raw_spin_unlock_irqrestore(iVar4,uVar5);
            if (*(piVar12 + 0x234) == '\0') {
                pcVar6 = *(param_1 + 0x158);
                uVar7 = *(param_1 + 0x160);
                in_x4 = 4;
                dma_free_attrs(piVar12[1],0x8000);
            }
            else {
                piVar12[0x44] = piVar12[0x45];
                *piVar12[0x43] = *(piVar12 + 0x46);
            }
            *(param_1 + 0x158) = 0;
            *(param_1 + 0x160) = 0;
            uVar3 = sym.readl_relaxed(*piVar12 + *(piVar12[0x3b] + 0xc0) + piVar12[0x3a] * *(piVar12[0x3b] + 0xcc));
            sym.writel_relaxed(uVar3 & (1L << (*(param_1 + 0x108) & 0x3f) ^ 0xffffffff),
                               *piVar12 + *(piVar12[0x3b] + 0xc0) + piVar12[0x3a] * *(piVar12[0x3b] + 0xcc));
            iVar4 = piVar12[0x3b];
            sym.writel_relaxed(0,*piVar12 + *(iVar4 + 0x120) + *(iVar4 + 0x124) * *(param_1 + 0x108) +
                                  *(iVar4 + 0x128) * *(param_1 + 0x108) + piVar12[0x3a] * *(iVar4 + 300));
        }
        else {
            _dev_err(*(*(param_1 + 0x100) + 8),"Cannot free busy channel\n");
        }
        iVar4 = piVar12[1];
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar5;
        iVar4 = __pm_runtime_suspend(piVar12[1],0xd);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_48) {
        auVar19 = __stack_chk_fail();
        iVar9 = auVar19._8_8_;
        iVar4 = auVar19._0_8_;
        *extraout_x18 = 0x8003a9c;
        iVar14 = *(iVar4 + 0x100);
        iVar2 = pcVar6;
        if (*(iVar14 + 0x238) != 0) {
            ipc_log_string(*(iVar14 + 0x238),"%s DMA direction:%d\n","bam_prep_slave_sg",uVar7 & 0xffffffff);
        }
        sym.__ftrace_dbg(*(iVar14 + 8),0x800070b,0x800085b,uVar7 & 0xffffffff);
        if (uVar7 - 1U < 2) {
            uVar3 = 0;
            if (iVar2 != 0) {
                uVar18 = pcVar6 & 0xffffffff;
                iVar14 = iVar9;
                do {
                    uVar3 = (*(iVar14 + 0x18) + 0x7ff7U) / 0x7ff8 + uVar3;
                    iVar14 = sg_next();
                    uVar11 = uVar18 - 1;
                    uVar18 = uVar11;
                } while (uVar11 != 0);
            }
            iVar14 = __kmalloc(uVar3 * 8 + 0xe0,0x900);
            if (iVar14 != 0) {
                uVar11 = in_x4;
                if ((uVar11 >> 5 & 1) != 0) {
                    *(iVar14 + 0xb0) = *(iVar14 + 0xb0) | 0x1000;
                }
                if ((in_x4 & 1) != 0) {
                    *(iVar14 + 0xb0) = *(iVar14 + 0xb0) | 0x4000;
                }
                piVar16 = iVar14 + 0xe0;
                *(iVar14 + 0xa8) = uVar3;
                *(iVar14 + 0xd0) = uVar7;
                *(iVar14 + 0xb8) = piVar16;
                if (iVar2 != 0) {
                    iVar15 = 0;
                    do {
                        iVar10 = 0;
                        uVar7 = *(iVar9 + 0x18);
                        piVar17 = piVar16;
                        while( true ) {
                            piVar16 = piVar17 + 2;
                            if ((uVar11 >> 7 & 1) != 0) {
                                *(piVar17 + 6) = *(piVar17 + 6) | 0x800;
                            }
                            *piVar17 = iVar10 + *(iVar9 + 0x10);
                            if (uVar7 < 0x7ff9) break;
                            *(piVar17 + 1) = 0x7ff8;
                            iVar10 = iVar10 + 0x7ff8;
                            uVar7 = uVar7 - 0x7ff8;
                            *(iVar14 + 0xd8) = *(iVar14 + 0xd8) + 0x7ff8;
                            piVar17 = piVar16;
                        }
                        *(piVar17 + 1) = uVar7;
                        iVar15 = iVar15 + 1;
                        *(iVar14 + 0xd8) = *(iVar14 + 0xd8) + uVar7;
                        iVar9 = sg_next(iVar9);
                    } while (iVar15 != iVar2);
                }
                dma_async_tx_descriptor_init(iVar14,iVar4);
                *(iVar14 + 4) = uVar11;
                *(iVar14 + 0x90) = 0;
                *(iVar14 + 0x18) = sym.vchan_tx_submit.cfi_jt;
                *(iVar14 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
                uVar5 = _raw_spin_lock_irqsave(iVar4 + 0xa0);
                piVar12 = *(iVar4 + 0xb0);
                iVar9 = iVar14 + 0x98;
                uVar7 = __list_add_valid(iVar9,piVar12,iVar4 + 0xa8);
                if ((uVar7 & 1) != 0) {
                    *(iVar4 + 0xb0) = iVar9;
                    *(iVar14 + 0x98) = iVar4 + 0xa8;
                    *(iVar14 + 0xa0) = piVar12;
                    *piVar12 = iVar9;
                }
                _raw_spin_unlock_irqrestore(iVar4 + 0xa0,uVar5);
            }
        }
        else {
            _dev_err(*(iVar14 + 8),"invalid dma direction\n");
            iVar14 = 0;
        }
        return iVar14;
    }
    return iVar4;
}


// ===== sym.bam_dma_free_desc.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002448 (size 8) =====

void sym.bam_dma_free_desc.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.bam_dma_xlate.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002450 (size 8) =====

ulong sym.bam_dma_xlate.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 0x30);
    if (*(iVar2 + 0x228) != 0) {
        ipc_log_string(*(iVar2 + 0x228),"%s No of channels:%d\n","bam_dma_xlate",*(iVar2 + 0x1b8));
    }
    sym.__ftrace_dbg(*(iVar2 + -8),0x800086d,0x8000555,*(iVar2 + 0x1b8));
    if ((*(param_1 + 8) == 1) && (*(param_1 + 0xc) < *(iVar2 + 0x1b8))) {
        uVar1 = dma_get_slave_channel(*(iVar2 + 0x1b0) + *(param_1 + 0xc) * 0x198);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.__traceiter_bam_dma_info.cfi_jt @ 0x08002458 (size 8) =====

ulong sym.__traceiter_bam_dma_info.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8005328;
    piVar1 = *0x8005328;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.bam_pause.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002460 (size 8) =====

ulong sym.bam_pause.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x100);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s chan id:%d\n","bam_pause",*(param_1 + 0x108));
    }
    sym.__ftrace_dbg(piVar3[1],0x800084c,0x80005bf,*(param_1 + 0x108));
    uVar1 = __pm_runtime_resume(piVar3[1],4);
    if (-1 < uVar1) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0xa0);
        iVar2 = piVar3[0x3b];
        sym.writel_relaxed(1,*piVar3 + *(iVar2 + 0xf0) + *(iVar2 + 0xf4) * *(param_1 + 0x108) +
                              *(iVar2 + 0xf8) * *(param_1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xfc));
        *(param_1 + 0x170) = 1;
        _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar1);
        iVar2 = piVar3[1];
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar1;
        __pm_runtime_suspend(piVar3[1],0xd);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.bam_dma_terminate_all.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002468 (size 8) =====

ulong sym.bam_dma_terminate_all.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int64_t ****ppppiVar4;
    int64_t iVar5;
    int64_t *****pppppiVar6;
    int64_t *piVar7;
    ulong in_tmp_ldXn;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    int64_t ****ppppiStack_78;
    int64_t ****ppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    ppppiStack_78 = &ppppiStack_78;
    iVar10 = *(param_1 + 0x100);
    ppppiStack_70 = ppppiStack_78;
    if (*(iVar10 + 0x238) != 0) {
        ipc_log_string(*(iVar10 + 0x238),"%s chan id:%d\n","bam_dma_terminate_all",*(param_1 + 0x108));
        iVar10 = *(param_1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar10 + 8),0x800084c,0x8000495,*(param_1 + 0x108));
    uVar8 = _raw_spin_lock_irqsave(param_1 + 0xa0);
    piVar1 = param_1 + 0x178;
    if (*piVar1 != piVar1) {
        sym.bam_chan_init_hw(param_1,*(*(param_1 + 0x178) + 0x10));
    }
    piVar2 = param_1 + 200;
    piVar7 = *(param_1 + 0x178);
    while (piVar1 != piVar7) {
        iVar10 = *piVar2;
        piVar11 = piVar7 + -5;
        piVar13 = *piVar7;
        uVar9 = __list_add_valid(piVar11,piVar2,iVar10);
        if ((uVar9 & 1) != 0) {
            *(iVar10 + 8) = piVar11;
            piVar7[-5] = iVar10;
            piVar7[-4] = piVar2;
            *piVar2 = piVar11;
        }
        uVar9 = __list_del_entry_valid(piVar7);
        if ((uVar9 & 1) != 0) {
            iVar10 = *piVar7;
            piVar11 = piVar7[1];
            *(iVar10 + 8) = piVar11;
            *piVar11 = iVar10;
        }
        *piVar7 = -0x2152ffffffffff00;
        piVar7[1] = -0x2152fffffffffede;
        piVar7 = piVar13;
    }
    piVar1 = param_1 + 0xa8;
    if (piVar1 != *piVar1) {
        ppppiVar4 = *(param_1 + 0xa8);
        pppppiVar6 = *(param_1 + 0xb0);
        ppppiVar4[1] = ppppiStack_70;
        *ppppiStack_70 = ppppiVar4;
        *pppppiVar6 = &ppppiStack_78;
        *(param_1 + 0xa8) = piVar1;
        *(param_1 + 0xb0) = piVar1;
        ppppiStack_70 = pppppiVar6;
    }
    piVar1 = param_1 + 0xb8;
    if (piVar1 != *piVar1) {
        ppppiVar4 = *(param_1 + 0xb8);
        pppppiVar6 = *(param_1 + 0xc0);
        ppppiVar4[1] = ppppiStack_70;
        *ppppiStack_70 = ppppiVar4;
        *pppppiVar6 = &ppppiStack_78;
        *(param_1 + 0xb8) = piVar1;
        *(param_1 + 0xc0) = piVar1;
        ppppiStack_70 = pppppiVar6;
    }
    if (piVar2 != *piVar2) {
        ppppiVar4 = *(param_1 + 200);
        pppppiVar6 = *(param_1 + 0xd0);
        ppppiVar4[1] = ppppiStack_70;
        *ppppiStack_70 = ppppiVar4;
        *pppppiVar6 = &ppppiStack_78;
        *(param_1 + 200) = piVar2;
        *(param_1 + 0xd0) = piVar2;
        ppppiStack_70 = pppppiVar6;
    }
    piVar1 = param_1 + 0xd8;
    if (piVar1 != *piVar1) {
        ppppiVar4 = *(param_1 + 0xd8);
        pppppiVar6 = *(param_1 + 0xe0);
        ppppiVar4[1] = ppppiStack_70;
        *ppppiStack_70 = ppppiVar4;
        *pppppiVar6 = &ppppiStack_78;
        *(param_1 + 0xd8) = piVar1;
        *(param_1 + 0xe0) = piVar1;
        ppppiStack_70 = pppppiVar6;
    }
    piVar1 = param_1 + 0xe8;
    if (piVar1 != *piVar1) {
        ppppiVar4 = *(param_1 + 0xe8);
        pppppiVar6 = *(param_1 + 0xf0);
        ppppiVar4[1] = ppppiStack_70;
        *ppppiStack_70 = ppppiVar4;
        *pppppiVar6 = &ppppiStack_78;
        *(param_1 + 0xe8) = piVar1;
        *(param_1 + 0xf0) = piVar1;
        ppppiStack_70 = pppppiVar6;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar8);
    vchan_dma_desc_free_list(param_1,&ppppiStack_78);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return 0;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = 0x800425c;
    iVar12 = *(iVar10 + 0x100);
    if (*(iVar12 + 0x238) != 0) {
        ipc_log_string(in_tmp_ldXn,*(iVar12 + 0x238),"%s chan id:%d\n","bam_issue_pending",*(iVar10 + 0x108));
    }
    sym.__ftrace_dbg(*(iVar12 + 8),0x800084c,0x800060f,*(iVar10 + 0x108));
    uVar8 = _raw_spin_lock_irqsave(iVar10 + 0xa0);
    piVar1 = iVar10 + 0xb8;
    piVar2 = iVar10 + 200;
    if (piVar1 != *piVar1) {
        iVar5 = *(iVar10 + 0xb8);
        piVar7 = *(iVar10 + 0xc0);
        piVar11 = *(iVar10 + 0xd0);
        *(iVar5 + 8) = piVar11;
        *piVar11 = iVar5;
        *piVar7 = piVar2;
        *(iVar10 + 0xd0) = piVar7;
        *(iVar10 + 0xb8) = piVar1;
        *(iVar10 + 0xc0) = piVar1;
    }
    if (piVar2 != *piVar2) {
        uVar3 = 0xfff;
        if (*(iVar12 + 0x234) != '\0') {
            uVar3 = 0x1f;
        }
        if ((uVar3 & ~*(iVar10 + 0x16a) + *(iVar10 + 0x168)) != 0) {
            sym.bam_start_dma(iVar10);
        }
    }
    uVar8 = _raw_spin_unlock_irqrestore(iVar10 + 0xa0,uVar8);
    return uVar8;
}


// ===== sym.bam_alloc_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.bam_alloc_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    char cVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x158) == 0) {
        iVar3 = *(param_1 + 0x100);
        if (*(iVar3 + 0x234) == '\0') {
            iVar2 = dma_alloc_attrs(*(iVar3 + 8),0x8000,param_1 + 0x160,0xcc0,4);
            *(param_1 + 0x158) = iVar2;
            cVar1 = *(iVar3 + 0x234);
        }
        else {
            iVar2 = *(iVar3 + 0x220);
            *(param_1 + 0x158) = iVar2;
            *(param_1 + 0x160) = **(iVar3 + 0x218);
            cVar1 = *(iVar3 + 0x234);
        }
        if (cVar1 != '\0') {
            __memset_io(iVar2,0,0x100);
            *(iVar3 + 0x220) = *(iVar3 + 0x220) + 0x100;
            **(iVar3 + 0x218) = **(iVar3 + 0x218) + 0x100;
            if (*(iVar3 + 0x238) != 0) {
                ipc_log_string(*(iVar3 + 0x238),"dma_bam:%s: r_mem_virt_base:%x r_mem_start:%x\n","bam_alloc_chan",
                               *(iVar3 + 0x220),**(iVar3 + 0x218));
            }
            sym.__ftrace_dbg(*(iVar3 + 8),0x800066e,0x80006fc,*(iVar3 + 0x220));
            iVar2 = *(param_1 + 0x158);
        }
        if (iVar2 == 0) {
            _dev_err(*(iVar3 + 8),"Failed to allocate desc fifo\n");
            return 0xfffffff4;
        }
        if (*(iVar3 + 0x238) != 0) {
            ipc_log_string(*(iVar3 + 0x238),"%s chan id:%d\n","bam_alloc_chan",*(param_1 + 0x108));
        }
        sym.__ftrace_dbg(*(iVar3 + 8),0x800084c,0x80006fc,*(param_1 + 0x108));
    }
    return 0;
}


// ===== sym.bam_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.bam_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x100);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s chan id:%d\n","bam_resume",*(param_1 + 0x108));
    }
    sym.__ftrace_dbg(piVar3[1],0x800084c,0x8000720,*(param_1 + 0x108));
    uVar1 = __pm_runtime_resume(piVar3[1],4);
    if (-1 < uVar1) {
        uVar1 = _raw_spin_lock_irqsave(param_1 + 0xa0);
        iVar2 = piVar3[0x3b];
        sym.writel_relaxed(0,*piVar3 + *(iVar2 + 0xf0) + *(iVar2 + 0xf4) * *(param_1 + 0x108) +
                              *(iVar2 + 0xf8) * *(param_1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xfc));
        *(param_1 + 0x170) = 0;
        _raw_spin_unlock_irqrestore(param_1 + 0xa0,uVar1);
        iVar2 = piVar3[1];
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar1;
        __pm_runtime_suspend(piVar3[1],0xd);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.perf_trace_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002480 (size 8) =====

void sym.perf_trace_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_58 = *(iVar9 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar5 = (iVar8 + 0xe4U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&iStack_60,&uStack_64);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iStack_60 + 0xf8) = auStack_90;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0xc80000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar4 = param_3[1];
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),200,*param_3,&uStack_88);
            if (199 < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8002800);
                (*pcVar7)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar5,uStack_64,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x8002808;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.trace_event_raw_event_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002488 (size 8) =====

//WARNING: Removing unreachable block (ram,0x0800274c)

void sym.trace_event_raw_event_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt
               (int64_t param_1,char *param_2,int64_t *param_3)

{
    int64_t *piVar1;
    char *pcVar2;
    ulong *puVar3;
    int iVar4;
    ulong uVar5;
    code *pcVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_130 [8];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
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
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        piVar11 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            piVar11 = NULL;
            event_triggers_call(param_1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) != 0))))
        goto code_r0x0800261c;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar7 = strlen(pcVar2);
    piVar11 = iVar7 + 0xc9 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0xc80000;
        strcpy(iVar9 + 0x10,pcVar2);
        piVar11 = *param_3;
        puVar3 = param_3[1];
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),200,piVar11,&uStack_98);
        if (199 < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8002654);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800261c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_bam_dma_info;
    pcStack_e8 = sym.perf_trace_bam_dma_info;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar2 = auVar13._8_8_;
    }
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puStack_f0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar4 = (iVar7 + 0xe4U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x800265c;
            *(iStack_100 + 0x108) = 5;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0xc80000;
            strcpy(iVar9 + 0x10,pcVar2);
            puVar3 = piVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),200,*piVar11,&uStack_128);
            if (199 < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8002800);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x8002808;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt @ 0x08002490 (size 8) =====

void sym.__bpf_trace_bam_dma_info.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.__traceiter_bam_dma_info @ 0x08002498 (size 104) =====

ulong sym.__traceiter_bam_dma_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8005328;
    piVar1 = *0x8005328;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_bam_dma_info @ 0x08002508 (size 340) =====

//WARNING: Removing unreachable block (ram,0x0800274c)

void sym.trace_event_raw_event_bam_dma_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t *piVar2;
    ulong *puVar3;
    int iVar4;
    ulong uVar5;
    code *pcVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_130 [8];
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    uint uStack_104;
    int64_t iStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
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
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(arg1 + 0x48);
    if ((uVar12 >> 8 & 1) == 0) {
        puVar11 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar11 = NULL;
            event_triggers_call(arg1,0,0,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) != 0))))
        goto code_r0x0800261c;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar7 = strlen(pcVar1);
    puVar11 = iVar7 + 0xc9 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
        *(iVar9 + 0xc) = iVar7 + 0x11U | 0xc80000;
        strcpy(iVar9 + 0x10,pcVar1);
        puVar11 = *arg3;
        puVar3 = *(arg3 + 8);
        uStack_88 = puVar3[2];
        uStack_80 = puVar3[3];
        uStack_98 = *puVar3;
        uStack_90 = puVar3[1];
        iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),200,puVar11,&uStack_98);
        if (199 < iVar7) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8002654);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x0800261c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_bam_dma_info;
    pcStack_e8 = sym.perf_trace_bam_dma_info;
    iVar9 = sp_el0;
    pcVar1 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar1 = auVar13._8_8_;
    }
    iStack_f8 = *(iVar9 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puStack_f0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar2 != 0)) {
        iVar4 = (iVar7 + 0xe4U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_100,&uStack_104);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x800265c;
            *(iStack_100 + 0x108) = 5;
            *(iStack_100 + 0xf8) = auStack_130;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar7 + 0x11U | 0xc80000;
            strcpy(iVar9 + 0x10,pcVar1);
            puVar3 = puVar11[1];
            uStack_118 = puVar3[2];
            uStack_110 = puVar3[3];
            uStack_128 = *puVar3;
            uStack_120 = puVar3[1];
            iVar7 = vsnprintf(iVar9 + (iVar7 + 0x11U & 0xffff),200,*puVar11,&uStack_128);
            if (199 < iVar7) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8002800);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x8002808;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_bam_dma_info @ 0x0800265c (size 440) =====

void sym.perf_trace_bam_dma_info(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int iVar5;
    ulong uVar6;
    code *pcVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auStack_90 [8];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar2 = 0x80007ae;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_58 = *(iVar9 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = strlen(uVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar5 = (iVar8 + 0xe4U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff9c);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            *(iStack_60 + 0x100) = uVar3;
            *(iStack_60 + 0x108) = 5;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff70;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x10010;
            *(iVar9 + 0xc) = iVar8 + 0x11U | 0xc80000;
            strcpy(iVar9 + 0x10,uVar2);
            puVar4 = *(arg3 + 8);
            uStack_78 = puVar4[2];
            uStack_70 = puVar4[3];
            uStack_88 = *puVar4;
            uStack_80 = puVar4[1];
            iVar8 = vsnprintf(iVar9 + (iVar8 + 0x11U & 0xffff),200,*arg3,&stack0xffffffffffffff78);
            if (199 < iVar8) {
    //WARNING: Does not return
                pcVar7 = SoftwareBreakpoint(0x800,0x8002800);
                (*pcVar7)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar5,uStack_64,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x8002808;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_bam_dma_info @ 0x08002814 (size 36) =====

void sym.__bpf_trace_bam_dma_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.trace_raw_output_bam_dma_info @ 0x08002838 (size 120) =====

void sym.trace_raw_output_bam_dma_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: %s\n",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.bam_dma_probe @ 0x080028b0 (size 2092) =====

uint64_t sym.bam_dma_probe(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    char *pcVar13;
    uint64_t *puVar14;
    ulong *in_x18;
    uint64_t uVar15;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar15 = arg1 + 0x10;
    puVar7 = devm_kmalloc(uVar15,0x240,0xdc0);
    if (puVar7 == NULL) {
        uVar9 = 0xfffffff4;
        goto code_r0x08002fbc;
    }
    puVar7[1] = uVar15;
    iVar8 = of_match_node(obj.bam_of_match,*(arg1 + 0x300));
    if (iVar8 == 0) {
        pcVar13 = "Unsupported BAM module\n";
code_r0x08002afc:
        _dev_err(uVar15,pcVar13);
        uVar9 = 0xffffffed;
        goto code_r0x08002fbc;
    }
    puVar7[0x3b] = *(iVar8 + 0xc0);
    uVar9 = ipc_log_context_create(1,"dma_bam_log",0);
    puVar7[0x47] = uVar9;
    if (uVar9 == 0) {
        _dev_err(puVar7[1],"Failed to create dma bam log\n");
        uVar9 = puVar7[0x47];
        if (uVar9 != 0) goto code_r0x08002930;
    }
    else {
code_r0x08002930:
        ipc_log_string(uVar9,"%s start %d\n","bam_dma_probe",1);
    }
    sym.__ftrace_dbg(puVar7[1],0x80007b5,0x80004c2,1);
    uVar10 = platform_get_resource(arg1,0x200,0);
    uVar9 = devm_ioremap_resource(uVar15,uVar10);
    *puVar7 = uVar9;
    if (0xfffffffffffff000 < uVar9) goto code_r0x08002fbc;
    *(puVar7 + 0x234) = 0;
    piVar11 = platform_get_resource_byname(arg1,0x200,"bam_remote_mem");
    if (piVar11 != NULL) {
        *(puVar7 + 0x234) = 1;
        *(puVar7 + 0x46) = *piVar11;
        uVar9 = devm_ioremap(uVar15,*piVar11,(piVar11[1] - *piVar11) + 1);
        puVar7[0x44] = uVar9;
        if (uVar9 == 0) {
            _dev_err(uVar15,"Remote mem ioremap failed\n");
            uVar9 = 0xfffffff4;
            goto code_r0x08002fbc;
        }
        puVar7[0x45] = uVar9;
        puVar7[0x43] = piVar11;
    }
    iVar5 = dma_set_mask(uVar15,0xffffffff);
    if (iVar5 != 0) {
        pcVar13 = "Could not set 32 bit mask\n";
        goto code_r0x08002afc;
    }
    dma_set_coherent_mask(uVar15,0xffffffff);
    uVar6 = platform_get_irq(arg1,0);
    *(puVar7 + 0x3d) = uVar6;
    if (uVar6 < 0) {
        uVar9 = uVar6;
        goto code_r0x08002fbc;
    }
    uVar6 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,ee",puVar7 + 0x3a,1,0);
    if (uVar6 < 0) {
        uVar9 = uVar6;
        _dev_err(puVar7[1],"Execution environment unspecified\n");
        goto code_r0x08002fbc;
    }
    iVar8 = of_find_property(*(arg1 + 0x300),"qcom,controlled-remotely",0);
    *(puVar7 + 0x1d4) = iVar8 != 0;
    if (iVar8 == 0) {
code_r0x08002b68:
        uVar9 = devm_clk_get(puVar7[1],"bam_clk");
    }
    else {
        iVar5 = of_property_read_variable_u32_array(*(arg1 + 0x300),"num-channels",puVar7 + 0x39,1,0);
        if (iVar5 < 0) {
            _dev_err(puVar7[1],"num-channels unspecified in dt\n");
        }
        iVar5 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,num-ees",puVar7 + 0x1cc,1,0);
        if (iVar5 < 0) {
            _dev_err(puVar7[1],"num-ees unspecified in dt\n");
            cVar3 = *(puVar7 + 0x1d4);
        }
        else {
            cVar3 = *(puVar7 + 0x1d4);
        }
        if (cVar3 == '\0') goto code_r0x08002b68;
        uVar9 = devm_clk_get_optional(puVar7[1],"bam_clk");
    }
    puVar7[0x3c] = uVar9;
    if (uVar9 < 0xfffffffffffff001) {
        uVar6 = clk_prepare(uVar9);
        if (uVar6 == 0) {
            uVar6 = clk_enable(uVar9);
            if (uVar6 == 0) {
                uVar6 = *(puVar7 + 0x1cc);
                if (uVar6 == 0) {
                    uVar6 = sym.readl_relaxed(*puVar7 + *(puVar7[0x3b] + 0x10) + puVar7[0x3a] * *(puVar7[0x3b] + 0x1c));
                    uVar6 = uVar6 >> 8 & 0xf;
                    *(puVar7 + 0x1cc) = uVar6;
                }
                uVar2 = puVar7[0x3a];
                if (uVar2 < uVar6) {
                    if (puVar7[0x39] == 0) {
                        uVar6 = sym.readl_relaxed(*puVar7 + *(puVar7[0x3b] + 0x20) + *(puVar7[0x3b] + 0x2c) * uVar2);
                        *(puVar7 + 0x39) = uVar6 & 0xff;
                    }
                    if (*(puVar7 + 0x1d4) == '\0') {
                        uVar6 = sym.readl_relaxed(*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(uVar6 | 1,*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(uVar6 & 0xfffffffe,*puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3])
                        ;
                        DataSynchronizationBarrier(3,2,0);
                        sym.writel_relaxed(uVar6 & 0xfffffffe | 2,
                                           *puVar7 + *puVar7[0x3b] + puVar7[0x3a] * puVar7[0x3b][3]);
                        sym.writel_relaxed(4,*puVar7 + *(puVar7[0x3b] + 0x30) + puVar7[0x3a] * *(puVar7[0x3b] + 0x3c));
                        sym.writel_relaxed(0xffff004,
                                           *puVar7 + *(puVar7[0x3b] + 0xa0) + puVar7[0x3a] * *(puVar7[0x3b] + 0xac));
                        sym.writel_relaxed(6,*puVar7 + *(puVar7[0x3b] + 0x90) + puVar7[0x3a] * *(puVar7[0x3b] + 0x9c));
                        sym.writel_relaxed(0x80000000,
                                           *puVar7 + *(puVar7[0x3b] + 0xc0) + puVar7[0x3a] * *(puVar7[0x3b] + 0xcc));
                        if (puVar7[0x47] != 0) {
                            ipc_log_string(puVar7[0x47],"%s ret:%d\n","bam_init",0);
                        }
                        sym.__ftrace_dbg(puVar7[1],0x800076a,0x8000843,0);
                    }
                    tasklet_setup(puVar7 + 0x3e,sym.dma_tasklet.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt);
                    uVar9 = devm_kmalloc(puVar7[1],puVar7[0x39] * 0x198,0xdc0);
                    puVar7[0x38] = uVar9;
                    if (uVar9 == 0) {
                        uVar9 = 0xfffffff4;
                    }
                    else {
                        puVar1 = puVar7 + 2;
                        puVar7[4] = puVar7 + 4;
                        puVar7[5] = puVar7 + 4;
                        if (puVar7[0x39] != 0) {
                            uVar6 = 1;
                            while( true ) {
                                iVar8 = uVar9 + (uVar6 - 1) * 0x198;
                                *(iVar8 + 0x108) = uVar6 - 1;
                                *(iVar8 + 0x100) = puVar7;
                                vchan_init(iVar8,puVar1);
                                *(iVar8 + 0x98) = sym.bam_dma_free_desc.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                *(iVar8 + 0x178) = iVar8 + 0x178;
                                *(iVar8 + 0x180) = iVar8 + 0x178;
                                if (puVar7[0x39] <= uVar6) break;
                                uVar9 = puVar7[0x38];
                                uVar6 = uVar6 + 1;
                            }
                        }
                        uVar12 = devm_request_threaded_irq
                                           (puVar7[1],puVar7[0x3d],
                                            sym.bam_dma_irq.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,0,4,"bam_dma",
                                            puVar7);
                        uVar9 = uVar12 & 0xffffffff;
                        if (uVar12 == 0) {
                            uVar9 = puVar7[1];
                            puVar7[0x10] = uVar9;
                            if (*(uVar9 + 0x2c0) == NULL) {
                                _dev_err(uVar9,"cannot set maximum segment size\n");
                                uVar9 = 0xfffffffb;
                            }
                            else {
                                **(uVar9 + 0x2c0) = 0x7ff8;
                                *(arg1 + 0xa8) = puVar7;
                                puVar14 = puVar7 + 0xb;
                                *puVar14 = 0;
                                Hint_Prefetch(puVar14,2,0,1);
                                do {
                                    cVar3 = '\x01';
                                    bVar4 = ExclusiveMonitorPass(puVar14,0x10);
                                    if (bVar4) {
                                        *puVar14 = *puVar14 | 0x400;
                                        cVar3 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar3 != '\0');
                                *(puVar7 + 0x1b) = 6;
                                *(puVar7 + 0xec) = 1;
                                puVar7[0x1a] = 0x400000004;
                                puVar7[0x1e] = sym.bam_alloc_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x20] = sym.bam_free_chan.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x29] = sym.bam_prep_slave_sg.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x33] = sym.bam_tx_status.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x34] = sym.bam_issue_pending.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x2e] = sym.bam_slave_config.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x2f] = sym.bam_pause.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x30] = sym.bam_resume.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x31] = sym.bam_dma_terminate_all.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt;
                                puVar7[0x10] = puVar7[1];
                                uVar6 = dma_async_device_register(puVar1);
                                if (uVar6 == 0) {
                                    uVar6 = of_dma_controller_register
                                                      (*(arg1 + 0x300),
                                                       sym.bam_dma_xlate.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,puVar1
                                                      );
                                    if (uVar6 == 0) {
                                        pm_runtime_irq_safe(uVar15);
                                        pm_runtime_set_autosuspend_delay(uVar15,100);
                                        __pm_runtime_use_autosuspend(uVar15,1);
                                        uVar10 = ktime_get_mono_fast_ns();
                                        *(arg1 + 0x228) = uVar10;
                                        __pm_runtime_set_status(uVar15,0);
                                        pm_runtime_enable(uVar15);
                                        if (puVar7[0x47] != 0) {
                                            ipc_log_string(puVar7[0x47],"%s end ret:%d\n","bam_dma_probe",0);
                                        }
                                        sym.__ftrace_dbg(puVar7[1],0x80005b0,0x80004c2,0);
                                        uVar9 = 0;
                                        goto code_r0x08002fbc;
                                    }
                                    uVar9 = uVar6;
                                    dma_async_device_unregister(puVar1);
                                }
                                else {
                                    uVar9 = uVar6;
                                    _dev_err(puVar7[1],"failed to register dma async device\n");
                                }
                            }
                        }
                        if (puVar7[0x39] != 0) {
                            uVar6 = 0;
                            do {
                                tasklet_kill(puVar7[0x38] + uVar6 * 0x198 + 0x70);
                                uVar6 = uVar6 + 1;
                            } while (uVar6 < puVar7[0x39]);
                        }
                    }
                    tasklet_kill(puVar7 + 0x3e);
                }
                else {
                    uVar9 = 0xffffffea;
                }
                uVar15 = puVar7[0x3c];
                clk_disable(uVar15);
                clk_unprepare(uVar15);
                goto code_r0x08002fbc;
            }
            clk_unprepare(uVar9);
        }
        uVar9 = uVar6;
        _dev_err(puVar7[1],"failed to prepare/enable clock\n");
    }
    else {
        uVar9 = uVar9 & 0xffffffff;
    }
code_r0x08002fbc:
    return uVar9 & 0xffffffff;
}


// ===== sym.bam_dma_remove @ 0x080030dc (size 376) =====

ulong sym.bam_dma_remove(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0xa8);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s ret:%d\n","bam_dma_remove",0);
    }
    sym.__ftrace_dbg(piVar3[1],0x800076a,0x8000775,0);
    if (piVar3[0x47] != 0) {
        ipc_log_context_destroy();
    }
    pm_runtime_force_suspend(arg1 + 0x10);
    of_dma_controller_free(*(arg1 + 0x300));
    dma_async_device_unregister(piVar3 + 2);
    sym.writel_relaxed(0,*piVar3 + *(piVar3[0x3b] + 0xc0) + piVar3[0x3a] * *(piVar3[0x3b] + 0xcc));
    devm_free_irq(piVar3[1],piVar3[0x3d],piVar3);
    if (piVar3[0x39] != 0) {
        uVar4 = 0;
        iVar5 = 0x160;
        do {
            sym.bam_dma_terminate_all(piVar3[0x38] + iVar5 + -0x160);
            tasklet_kill(piVar3[0x38] + iVar5 + -0xf0);
            iVar2 = *(piVar3[0x38] + iVar5 + -8);
            if (iVar2 != 0) {
                uVar1 = 0x8000;
                if (*(piVar3 + 0x234) != '\0') {
                    uVar1 = 0x100;
                }
                dma_free_attrs(piVar3[1],uVar1,iVar2,*(piVar3[0x38] + iVar5),4);
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x198;
        } while (uVar4 < *(piVar3 + 0x39));
    }
    tasklet_kill(piVar3 + 0x3e);
    iVar5 = piVar3[0x3c];
    clk_disable(iVar5);
    clk_unprepare(iVar5);
    return 0;
}


// ===== sym.__ftrace_dbg @ 0x08003254 (size 304) =====

void sym.__ftrace_dbg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong extraout_x8;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    int64_t iStack_48;
    uchar *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puStack_40 = &stack0xffffffffffffff98;
    iStack_48 = arg2;
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar4 = *0x8005328;
            piVar3 = *0x8005328;
            while (piVar3 != NULL) {
                (**piVar4)(piVar4[1],extraout_x8,&iStack_48);
                piVar4 = piVar4 + 3;
                piVar3 = *piVar4;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.dma_tasklet @ 0x0800339c (size 216) =====

void sym.dma_tasklet(int64_t arg1)

{
    uint16_t *puVar1;
    uint16_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x28) != 0) {
        uVar4 = 0;
        iVar5 = 0x16a;
        do {
            puVar1 = *(arg1 + -0x30) + iVar5;
            uVar3 = _raw_spin_lock_irqsave(puVar1 + -0x65);
            if (puVar1 + -0x51 != *(puVar1 + -0x51)) {
                uVar2 = 0xfff;
                if (*(arg1 + 0x44) != '\0') {
                    uVar2 = 0x1f;
                }
                if ((uVar2 & ~*puVar1 + puVar1[-1]) != 0) {
                    sym.bam_start_dma(puVar1 + -0xb5);
                }
            }
            _raw_spin_unlock_irqrestore(puVar1 + -0x65,uVar3);
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x198;
        } while (uVar4 < *(arg1 + -0x28));
    }
    return;
}


// ===== sym.bam_dma_irq @ 0x08003478 (size 272) =====

ulong sym.bam_dma_irq(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sym.process_channel_irqs(arg1);
    if ((uVar4 & 0x7fffffff) != 0) {
        puVar1 = arg1 + 0x1f8;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar8 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar8 & 1) == 0) {
            __tasklet_schedule(arg1 + 0x1f0);
        }
    }
    iVar5 = __pm_runtime_resume(*(arg1 + 8),4);
    if (iVar5 < 0) {
        uVar7 = 0;
    }
    else {
        if (uVar4 < 0) {
            iVar6 = sym.readl_relaxed(*arg1 + *(*(arg1 + 0x1d8) + 0x70) + *(arg1 + 0x1d0) * *(*(arg1 + 0x1d8) + 0x7c));
            DataSynchronizationBarrier(3,3,0);
            sym.writel_relaxed(iVar6,*arg1 + *(*(arg1 + 0x1d8) + 0x80) + *(arg1 + 0x1d0) * *(*(arg1 + 0x1d8) + 0x8c));
        }
        iVar6 = *(arg1 + 8);
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar6 + 0x218) = uVar7;
        __pm_runtime_suspend(*(arg1 + 8),0xd);
        uVar7 = 1;
    }
    return uVar7;
}


// ===== sym.bam_alloc_chan @ 0x08003588 (size 344) =====

ulong sym.bam_alloc_chan(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x158) == 0) {
        iVar3 = *(arg1 + 0x100);
        if (*(iVar3 + 0x234) == '\0') {
            iVar2 = dma_alloc_attrs(*(iVar3 + 8),0x8000,arg1 + 0x160,0xcc0,4);
            *(arg1 + 0x158) = iVar2;
            cVar1 = *(iVar3 + 0x234);
        }
        else {
            iVar2 = *(iVar3 + 0x220);
            *(arg1 + 0x158) = iVar2;
            *(arg1 + 0x160) = **(iVar3 + 0x218);
            cVar1 = *(iVar3 + 0x234);
        }
        if (cVar1 != '\0') {
            __memset_io(iVar2,0,0x100);
            *(iVar3 + 0x220) = *(iVar3 + 0x220) + 0x100;
            **(iVar3 + 0x218) = **(iVar3 + 0x218) + 0x100;
            if (*(iVar3 + 0x238) != 0) {
                ipc_log_string(*(iVar3 + 0x238),"dma_bam:%s: r_mem_virt_base:%x r_mem_start:%x\n","bam_alloc_chan",
                               *(iVar3 + 0x220),**(iVar3 + 0x218));
            }
            sym.__ftrace_dbg(*(iVar3 + 8),0x800066e,0x80006fc,*(iVar3 + 0x220));
            iVar2 = *(arg1 + 0x158);
        }
        if (iVar2 == 0) {
            _dev_err(*(iVar3 + 8),"Failed to allocate desc fifo\n");
            return 0xfffffff4;
        }
        if (*(iVar3 + 0x238) != 0) {
            ipc_log_string(*(iVar3 + 0x238),"%s chan id:%d\n","bam_alloc_chan",*(arg1 + 0x108));
        }
        sym.__ftrace_dbg(*(iVar3 + 8),0x800084c,0x80006fc,*(arg1 + 0x108));
    }
    return 0;
}


// ===== sym.bam_free_chan @ 0x080036e0 (size 980) =====

int64_t sym.bam_free_chan(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint64_t in_x4;
    int64_t *piVar8;
    int64_t iVar9;
    int iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int iVar14;
    int *piVar15;
    int *piVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t *piStack_58;
    int64_t *piStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piVar12 = *(arg1 + 0x100);
    if (piVar12[0x47] != 0) {
        ipc_log_string(piVar12[0x47],"%s chan id:%d\n","bam_free_chan",*(arg1 + 0x108));
    }
    uVar7 = *(arg1 + 0x108);
    pcVar6 = "bam_free_chan";
    sym.__ftrace_dbg(piVar12[1],0x800084c,0x800073c,uVar7);
    iVar4 = __pm_runtime_resume(piVar12[1],4);
    if (-1 < iVar4) {
        iVar4 = arg1 + 0xa0;
        piStack_58 = &stack0xffffffffffffffa8;
        piStack_50 = &stack0xffffffffffffffa8;
        uVar5 = _raw_spin_lock_irqsave(iVar4);
        piVar8 = arg1 + 0xa8;
        if (piVar8 != *piVar8) {
            iVar9 = *(arg1 + 0xa8);
            piVar1 = *(arg1 + 0xb0);
            *(iVar9 + 8) = piStack_50;
            *piStack_50 = iVar9;
            *piVar1 = &stack0xffffffffffffffa8;
            *(arg1 + 0xa8) = piVar8;
            *(arg1 + 0xb0) = piVar8;
            piStack_50 = piVar1;
        }
        piVar8 = arg1 + 0xb8;
        if (piVar8 != *piVar8) {
            iVar9 = *(arg1 + 0xb8);
            piVar1 = *(arg1 + 0xc0);
            *(iVar9 + 8) = piStack_50;
            *piStack_50 = iVar9;
            *piVar1 = &stack0xffffffffffffffa8;
            *(arg1 + 0xb8) = piVar8;
            *(arg1 + 0xc0) = piVar8;
            piStack_50 = piVar1;
        }
        piVar8 = arg1 + 200;
        if (piVar8 != *piVar8) {
            iVar9 = *(arg1 + 200);
            piVar1 = *(arg1 + 0xd0);
            *(iVar9 + 8) = piStack_50;
            *piStack_50 = iVar9;
            *piVar1 = &stack0xffffffffffffffa8;
            *(arg1 + 200) = piVar8;
            *(arg1 + 0xd0) = piVar8;
            piStack_50 = piVar1;
        }
        piVar8 = arg1 + 0xd8;
        if (piVar8 != *piVar8) {
            iVar9 = *(arg1 + 0xd8);
            piVar1 = *(arg1 + 0xe0);
            *(iVar9 + 8) = piStack_50;
            *piStack_50 = iVar9;
            *piVar1 = &stack0xffffffffffffffa8;
            *(arg1 + 0xd8) = piVar8;
            *(arg1 + 0xe0) = piVar8;
            piStack_50 = piVar1;
        }
        piVar8 = arg1 + 0xe8;
        if (piVar8 != *piVar8) {
            iVar9 = *(arg1 + 0xe8);
            piVar1 = *(arg1 + 0xf0);
            *(iVar9 + 8) = piStack_50;
            *piStack_50 = iVar9;
            *piVar1 = &stack0xffffffffffffffa8;
            *(arg1 + 0xe8) = piVar8;
            *(arg1 + 0xf0) = piVar8;
            piStack_50 = piVar1;
        }
        for (piVar8 = piStack_58; &stack0xffffffffffffffa8 != piVar8; piVar8 = *piVar8) {
            *(piVar8 + -0x94) = *(piVar8 + -0x94) & 0xffffffbf;
        }
        _raw_spin_unlock_irqrestore(iVar4,uVar5);
        vchan_dma_desc_free_list(arg1,&stack0xffffffffffffffa8);
        if (*(arg1 + 0x178) == arg1 + 0x178) {
            uVar5 = _raw_spin_lock_irqsave(iVar4);
            piVar8 = *(arg1 + 0x100);
            iVar9 = piVar8[0x3b];
            sym.writel_relaxed(1,*piVar8 + *(iVar9 + 0xe0) + *(iVar9 + 0xe4) * *(arg1 + 0x108) +
                                  *(iVar9 + 0xe8) * *(arg1 + 0x108) + piVar8[0x3a] * *(iVar9 + 0xec));
            iVar9 = piVar8[0x3b];
            sym.writel_relaxed(0,*piVar8 + *(iVar9 + 0xe0) + *(iVar9 + 0xe4) * *(arg1 + 0x108) +
                                  *(iVar9 + 0xe8) * *(arg1 + 0x108) + piVar8[0x3a] * *(iVar9 + 0xec));
            DataSynchronizationBarrier(3,2,0);
            *(arg1 + 0x16c) = 0;
            _raw_spin_unlock_irqrestore(iVar4,uVar5);
            if (*(piVar12 + 0x234) == '\0') {
                pcVar6 = *(arg1 + 0x158);
                uVar7 = *(arg1 + 0x160);
                in_x4 = 4;
                dma_free_attrs(piVar12[1],0x8000);
            }
            else {
                piVar12[0x44] = piVar12[0x45];
                *piVar12[0x43] = *(piVar12 + 0x46);
            }
            *(arg1 + 0x158) = 0;
            *(arg1 + 0x160) = 0;
            uVar3 = sym.readl_relaxed(*piVar12 + *(piVar12[0x3b] + 0xc0) + piVar12[0x3a] * *(piVar12[0x3b] + 0xcc));
            sym.writel_relaxed(uVar3 & (1L << (*(arg1 + 0x108) & 0x3f) ^ 0xffffffff),
                               *piVar12 + *(piVar12[0x3b] + 0xc0) + piVar12[0x3a] * *(piVar12[0x3b] + 0xcc));
            iVar4 = piVar12[0x3b];
            sym.writel_relaxed(0,*piVar12 + *(iVar4 + 0x120) + *(iVar4 + 0x124) * *(arg1 + 0x108) +
                                  *(iVar4 + 0x128) * *(arg1 + 0x108) + piVar12[0x3a] * *(iVar4 + 300));
        }
        else {
            _dev_err(*(*(arg1 + 0x100) + 8),"Cannot free busy channel\n");
        }
        iVar4 = piVar12[1];
        uVar5 = ktime_get_mono_fast_ns();
        *(iVar4 + 0x218) = uVar5;
        iVar4 = __pm_runtime_suspend(piVar12[1],0xd);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_48) {
        auVar18 = __stack_chk_fail();
        iVar9 = auVar18._8_8_;
        iVar4 = auVar18._0_8_;
        *extraout_x18 = 0x8003a9c;
        iVar13 = *(iVar4 + 0x100);
        iVar2 = pcVar6;
        if (*(iVar13 + 0x238) != 0) {
            ipc_log_string(*(iVar13 + 0x238),"%s DMA direction:%d\n","bam_prep_slave_sg",uVar7 & 0xffffffff);
        }
        sym.__ftrace_dbg(*(iVar13 + 8),0x800070b,0x800085b,uVar7 & 0xffffffff);
        if (uVar7 - 1U < 2) {
            uVar3 = 0;
            if (iVar2 != 0) {
                uVar17 = pcVar6 & 0xffffffff;
                iVar13 = iVar9;
                do {
                    uVar3 = (*(iVar13 + 0x18) + 0x7ff7U) / 0x7ff8 + uVar3;
                    iVar13 = sg_next();
                    uVar11 = uVar17 - 1;
                    uVar17 = uVar11;
                } while (uVar11 != 0);
            }
            iVar13 = __kmalloc(uVar3 * 8 + 0xe0,0x900);
            if (iVar13 != 0) {
                uVar11 = in_x4;
                if ((uVar11 >> 5 & 1) != 0) {
                    *(iVar13 + 0xb0) = *(iVar13 + 0xb0) | 0x1000;
                }
                if ((in_x4 & 1) != 0) {
                    *(iVar13 + 0xb0) = *(iVar13 + 0xb0) | 0x4000;
                }
                piVar15 = iVar13 + 0xe0;
                *(iVar13 + 0xa8) = uVar3;
                *(iVar13 + 0xd0) = uVar7;
                *(iVar13 + 0xb8) = piVar15;
                if (iVar2 != 0) {
                    iVar14 = 0;
                    do {
                        iVar10 = 0;
                        uVar7 = *(iVar9 + 0x18);
                        piVar16 = piVar15;
                        while( true ) {
                            piVar15 = piVar16 + 2;
                            if ((uVar11 >> 7 & 1) != 0) {
                                *(piVar16 + 6) = *(piVar16 + 6) | 0x800;
                            }
                            *piVar16 = iVar10 + *(iVar9 + 0x10);
                            if (uVar7 < 0x7ff9) break;
                            *(piVar16 + 1) = 0x7ff8;
                            iVar10 = iVar10 + 0x7ff8;
                            uVar7 = uVar7 - 0x7ff8;
                            *(iVar13 + 0xd8) = *(iVar13 + 0xd8) + 0x7ff8;
                            piVar16 = piVar15;
                        }
                        *(piVar16 + 1) = uVar7;
                        iVar14 = iVar14 + 1;
                        *(iVar13 + 0xd8) = *(iVar13 + 0xd8) + uVar7;
                        iVar9 = sg_next(iVar9);
                    } while (iVar14 != iVar2);
                }
                dma_async_tx_descriptor_init(iVar13,iVar4);
                *(iVar13 + 4) = uVar11;
                *(iVar13 + 0x90) = 0;
                *(iVar13 + 0x18) = sym.vchan_tx_submit.cfi_jt;
                *(iVar13 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
                uVar5 = _raw_spin_lock_irqsave(iVar4 + 0xa0);
                piVar12 = *(iVar4 + 0xb0);
                iVar9 = iVar13 + 0x98;
                uVar7 = __list_add_valid(iVar9,piVar12,iVar4 + 0xa8);
                if ((uVar7 & 1) != 0) {
                    *(iVar4 + 0xb0) = iVar9;
                    *(iVar13 + 0x98) = iVar4 + 0xa8;
                    *(iVar13 + 0xa0) = piVar12;
                    *piVar12 = iVar9;
                }
                _raw_spin_unlock_irqrestore(iVar4 + 0xa0,uVar5);
            }
        }
        else {
            _dev_err(*(iVar13 + 8),"invalid dma direction\n");
            iVar13 = 0;
        }
        return iVar13;
    }
    return iVar4;
}


// ===== sym.bam_prep_slave_sg @ 0x08003ab4 (size 596) =====

int64_t sym.bam_prep_slave_sg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uint32_t in_w4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int iVar7;
    int64_t *piVar8;
    int *piVar9;
    int *piVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x100);
    iVar3 = arg3;
    if (*(iVar6 + 0x238) != 0) {
        ipc_log_string(*(iVar6 + 0x238),"%s DMA direction:%d\n","bam_prep_slave_sg",arg4 & 0xffffffffU);
    }
    sym.__ftrace_dbg(*(iVar6 + 8),0x800070b,0x800085b,arg4 & 0xffffffffU);
    if (arg4 - 1U < 2) {
        uVar11 = 0;
        if (iVar3 != 0) {
            uVar12 = arg3 & 0xffffffff;
            iVar6 = arg2;
            do {
                uVar11 = (*(iVar6 + 0x18) + 0x7ff7U) / 0x7ff8 + uVar11;
                iVar6 = sg_next();
                uVar2 = uVar12 - 1;
                uVar12 = uVar2;
            } while (uVar2 != 0);
        }
        iVar6 = __kmalloc(uVar11 * 8 + 0xe0,0x900);
        if (iVar6 != 0) {
            if ((in_w4 >> 5 & 1) != 0) {
                *(iVar6 + 0xb0) = *(iVar6 + 0xb0) | 0x1000;
            }
            if ((in_w4 & 1) != 0) {
                *(iVar6 + 0xb0) = *(iVar6 + 0xb0) | 0x4000;
            }
            piVar9 = iVar6 + 0xe0;
            *(iVar6 + 0xa8) = uVar11;
            *(iVar6 + 0xd0) = arg4;
            *(iVar6 + 0xb8) = piVar9;
            if (iVar3 != 0) {
                iVar7 = 0;
                do {
                    iVar5 = 0;
                    uVar12 = *(arg2 + 0x18);
                    piVar10 = piVar9;
                    while( true ) {
                        piVar9 = piVar10 + 2;
                        if ((in_w4 >> 7 & 1) != 0) {
                            *(piVar10 + 6) = *(piVar10 + 6) | 0x800;
                        }
                        *piVar10 = iVar5 + *(arg2 + 0x10);
                        if (uVar12 < 0x7ff9) break;
                        *(piVar10 + 1) = 0x7ff8;
                        iVar5 = iVar5 + 0x7ff8;
                        uVar12 = uVar12 - 0x7ff8;
                        *(iVar6 + 0xd8) = *(iVar6 + 0xd8) + 0x7ff8;
                        piVar10 = piVar9;
                    }
                    *(piVar10 + 1) = uVar12;
                    iVar7 = iVar7 + 1;
                    *(iVar6 + 0xd8) = *(iVar6 + 0xd8) + uVar12;
                    arg2 = sg_next(arg2);
                } while (iVar7 != iVar3);
            }
            dma_async_tx_descriptor_init(iVar6,arg1);
            *(iVar6 + 4) = in_w4;
            *(iVar6 + 0x90) = 0;
            *(iVar6 + 0x18) = sym.vchan_tx_submit.cfi_jt;
            *(iVar6 + 0x20) = sym.vchan_tx_desc_free.cfi_jt;
            uVar4 = _raw_spin_lock_irqsave(arg1 + 0xa0);
            piVar8 = *(arg1 + 0xb0);
            iVar1 = iVar6 + 0x98;
            uVar12 = __list_add_valid(iVar1,piVar8,arg1 + 0xa8);
            if ((uVar12 & 1) != 0) {
                *(arg1 + 0xb0) = iVar1;
                *(iVar6 + 0x98) = arg1 + 0xa8;
                *(iVar6 + 0xa0) = piVar8;
                *piVar8 = iVar1;
            }
            _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar4);
        }
    }
    else {
        _dev_err(*(iVar6 + 8),"invalid dma direction\n");
        iVar6 = 0;
    }
    return iVar6;
}


// ===== sym.bam_slave_config @ 0x08003d08 (size 200) =====

ulong sym.bam_slave_config(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x100);
    if (*(iVar5 + 0x238) != 0) {
        ipc_log_string(*(iVar5 + 0x238),"%s chan id:%d\n","bam_slave_config",*(arg1 + 0x108));
        iVar5 = *(arg1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar5 + 8),0x800084c,0x8000832,*(arg1 + 0x108));
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0xa0);
    *(arg1 + 0x110) = *arg2;
    uVar2 = *(arg2 + 0x20);
    uVar1 = *(arg2 + 8);
    uVar3 = *(arg2 + 0x10);
    *(arg1 + 0x128) = *(arg2 + 0x18);
    *(arg1 + 0x130) = uVar2;
    *(arg1 + 0x118) = uVar1;
    *(arg1 + 0x120) = uVar3;
    uVar2 = *(arg2 + 0x40);
    uVar1 = *(arg2 + 0x28);
    uVar3 = *(arg2 + 0x30);
    *(arg1 + 0x148) = *(arg2 + 0x38);
    *(arg1 + 0x150) = uVar2;
    *(arg1 + 0x138) = uVar1;
    *(arg1 + 0x140) = uVar3;
    *(arg1 + 0x174) = 1;
    _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar4);
    return 0;
}


// ===== sym.bam_pause @ 0x08003dd0 (size 264) =====

ulong sym.bam_pause(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x100);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s chan id:%d\n","bam_pause",*(arg1 + 0x108));
    }
    sym.__ftrace_dbg(piVar3[1],0x800084c,0x80005bf,*(arg1 + 0x108));
    uVar1 = __pm_runtime_resume(piVar3[1],4);
    if (-1 < uVar1) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0xa0);
        iVar2 = piVar3[0x3b];
        sym.writel_relaxed(1,*piVar3 + *(iVar2 + 0xf0) + *(iVar2 + 0xf4) * *(arg1 + 0x108) +
                              *(iVar2 + 0xf8) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xfc));
        *(arg1 + 0x170) = 1;
        _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar1);
        iVar2 = piVar3[1];
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar1;
        __pm_runtime_suspend(piVar3[1],0xd);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.bam_resume @ 0x08003ed8 (size 252) =====

ulong sym.bam_resume(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x100);
    if (piVar3[0x47] != 0) {
        ipc_log_string(piVar3[0x47],"%s chan id:%d\n","bam_resume",*(arg1 + 0x108));
    }
    sym.__ftrace_dbg(piVar3[1],0x800084c,0x8000720,*(arg1 + 0x108));
    uVar1 = __pm_runtime_resume(piVar3[1],4);
    if (-1 < uVar1) {
        uVar1 = _raw_spin_lock_irqsave(arg1 + 0xa0);
        iVar2 = piVar3[0x3b];
        sym.writel_relaxed(0,*piVar3 + *(iVar2 + 0xf0) + *(iVar2 + 0xf4) * *(arg1 + 0x108) +
                              *(iVar2 + 0xf8) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xfc));
        *(arg1 + 0x170) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar1);
        iVar2 = piVar3[1];
        uVar1 = ktime_get_mono_fast_ns();
        *(iVar2 + 0x218) = uVar1;
        __pm_runtime_suspend(piVar3[1],0xd);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.bam_dma_terminate_all @ 0x08003fd4 (size 672) =====

ulong sym.bam_dma_terminate_all(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong in_tmp_ldXn;
    ulong uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    piStack_78 = &stack0xffffffffffffff88;
    iVar8 = *(arg1 + 0x100);
    piStack_70 = piStack_78;
    if (*(iVar8 + 0x238) != 0) {
        ipc_log_string(*(iVar8 + 0x238),"%s chan id:%d\n","bam_dma_terminate_all",*(arg1 + 0x108));
        iVar8 = *(arg1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar8 + 8),0x800084c,0x8000495,*(arg1 + 0x108));
    uVar6 = _raw_spin_lock_irqsave(arg1 + 0xa0);
    piVar1 = arg1 + 0x178;
    if (*piVar1 != piVar1) {
        sym.bam_chan_init_hw(arg1,*(*(arg1 + 0x178) + 0x10));
    }
    piVar2 = arg1 + 200;
    piVar5 = *(arg1 + 0x178);
    while (piVar1 != piVar5) {
        iVar8 = *piVar2;
        piVar9 = piVar5 + -5;
        piVar11 = *piVar5;
        uVar7 = __list_add_valid(piVar9,piVar2,iVar8);
        if ((uVar7 & 1) != 0) {
            *(iVar8 + 8) = piVar9;
            piVar5[-5] = iVar8;
            piVar5[-4] = piVar2;
            *piVar2 = piVar9;
        }
        uVar7 = __list_del_entry_valid(piVar5);
        if ((uVar7 & 1) != 0) {
            iVar8 = *piVar5;
            piVar9 = piVar5[1];
            *(iVar8 + 8) = piVar9;
            *piVar9 = iVar8;
        }
        *piVar5 = -0x2152ffffffffff00;
        piVar5[1] = -0x2152fffffffffede;
        piVar5 = piVar11;
    }
    piVar1 = arg1 + 0xa8;
    if (piVar1 != *piVar1) {
        iVar8 = *(arg1 + 0xa8);
        piVar5 = *(arg1 + 0xb0);
        *(iVar8 + 8) = piStack_70;
        *piStack_70 = iVar8;
        *piVar5 = &stack0xffffffffffffff88;
        *(arg1 + 0xa8) = piVar1;
        *(arg1 + 0xb0) = piVar1;
        piStack_70 = piVar5;
    }
    piVar1 = arg1 + 0xb8;
    if (piVar1 != *piVar1) {
        iVar8 = *(arg1 + 0xb8);
        piVar5 = *(arg1 + 0xc0);
        *(iVar8 + 8) = piStack_70;
        *piStack_70 = iVar8;
        *piVar5 = &stack0xffffffffffffff88;
        *(arg1 + 0xb8) = piVar1;
        *(arg1 + 0xc0) = piVar1;
        piStack_70 = piVar5;
    }
    if (piVar2 != *piVar2) {
        iVar8 = *(arg1 + 200);
        piVar1 = *(arg1 + 0xd0);
        *(iVar8 + 8) = piStack_70;
        *piStack_70 = iVar8;
        *piVar1 = &stack0xffffffffffffff88;
        *(arg1 + 200) = piVar2;
        *(arg1 + 0xd0) = piVar2;
        piStack_70 = piVar1;
    }
    piVar1 = arg1 + 0xd8;
    if (piVar1 != *piVar1) {
        iVar8 = *(arg1 + 0xd8);
        piVar2 = *(arg1 + 0xe0);
        *(iVar8 + 8) = piStack_70;
        *piStack_70 = iVar8;
        *piVar2 = &stack0xffffffffffffff88;
        *(arg1 + 0xd8) = piVar1;
        *(arg1 + 0xe0) = piVar1;
        piStack_70 = piVar2;
    }
    piVar1 = arg1 + 0xe8;
    if (piVar1 != *piVar1) {
        iVar8 = *(arg1 + 0xe8);
        piVar2 = *(arg1 + 0xf0);
        *(iVar8 + 8) = piStack_70;
        *piStack_70 = iVar8;
        *piVar2 = &stack0xffffffffffffff88;
        *(arg1 + 0xe8) = piVar1;
        *(arg1 + 0xf0) = piVar1;
        piStack_70 = piVar2;
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar6);
    vchan_dma_desc_free_list(arg1,&stack0xffffffffffffff88);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return 0;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = 0x800425c;
    iVar10 = *(iVar8 + 0x100);
    if (*(iVar10 + 0x238) != 0) {
        ipc_log_string(in_tmp_ldXn,*(iVar10 + 0x238),"%s chan id:%d\n","bam_issue_pending",*(iVar8 + 0x108));
    }
    sym.__ftrace_dbg(*(iVar10 + 8),0x800084c,0x800060f,*(iVar8 + 0x108));
    uVar6 = _raw_spin_lock_irqsave(iVar8 + 0xa0);
    piVar1 = iVar8 + 0xb8;
    piVar2 = iVar8 + 200;
    if (piVar1 != *piVar1) {
        iVar4 = *(iVar8 + 0xb8);
        piVar5 = *(iVar8 + 0xc0);
        piVar9 = *(iVar8 + 0xd0);
        *(iVar4 + 8) = piVar9;
        *piVar9 = iVar4;
        *piVar5 = piVar2;
        *(iVar8 + 0xd0) = piVar5;
        *(iVar8 + 0xb8) = piVar1;
        *(iVar8 + 0xc0) = piVar1;
    }
    if (piVar2 != *piVar2) {
        uVar3 = 0xfff;
        if (*(iVar10 + 0x234) != '\0') {
            uVar3 = 0x1f;
        }
        if ((uVar3 & ~*(iVar8 + 0x16a) + *(iVar8 + 0x168)) != 0) {
            sym.bam_start_dma(iVar8);
        }
    }
    uVar6 = _raw_spin_unlock_irqrestore(iVar8 + 0xa0,uVar6);
    return uVar6;
}


// ===== sym.bam_issue_pending @ 0x08004274 (size 260) =====

void sym.bam_issue_pending(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x100);
    if (*(iVar8 + 0x238) != 0) {
        ipc_log_string(*(iVar8 + 0x238),"%s chan id:%d\n","bam_issue_pending",*(arg1 + 0x108));
    }
    sym.__ftrace_dbg(*(iVar8 + 8),0x800084c,0x800060f,*(arg1 + 0x108));
    uVar6 = _raw_spin_lock_irqsave(arg1 + 0xa0);
    piVar1 = arg1 + 0xb8;
    piVar2 = arg1 + 200;
    if (piVar1 != *piVar1) {
        iVar4 = *(arg1 + 0xb8);
        piVar5 = *(arg1 + 0xc0);
        piVar7 = *(arg1 + 0xd0);
        *(iVar4 + 8) = piVar7;
        *piVar7 = iVar4;
        *piVar5 = piVar2;
        *(arg1 + 0xd0) = piVar5;
        *(arg1 + 0xb8) = piVar1;
        *(arg1 + 0xc0) = piVar1;
    }
    if (piVar2 != *piVar2) {
        uVar3 = 0xfff;
        if (*(iVar8 + 0x234) != '\0') {
            uVar3 = 0x1f;
        }
        if ((uVar3 & ~*(arg1 + 0x16a) + *(arg1 + 0x168)) != 0) {
            sym.bam_start_dma(arg1);
        }
    }
    _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar6);
    return;
}


// ===== sym.bam_tx_status @ 0x08004380 (size 444) =====

uint sym.bam_tx_status(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    uint16_t *puVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int iVar11;
    int iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x100);
    if (*(iVar4 + 0x238) != 0) {
        ipc_log_string(*(iVar4 + 0x238),"%s chan id:%d\n","bam_tx_status",*(arg1 + 0x108));
        iVar4 = *(arg1 + 0x100);
    }
    sym.__ftrace_dbg(*(iVar4 + 8),0x800084c,0x800052c,*(arg1 + 0x108));
    iVar12 = *(arg1 + 0x10);
    iVar9 = *(arg1 + 0x14);
    if (arg3 != 0) {
        *arg3 = iVar9;
        *(arg3 + 4) = iVar12;
        *(arg3 + 8) = 0;
    }
    iVar11 = arg2;
    if (iVar12 < iVar9) {
        if ((iVar12 < iVar11) && (iVar11 <= iVar9)) {
            return 0;
        }
    }
    else {
        if (iVar12 < iVar11) {
            return 0;
        }
        if (iVar11 <= iVar9) {
            return 0;
        }
    }
    if (arg3 != 0) {
        uVar2 = _raw_spin_lock_irqsave(arg1 + 0xa0);
        iVar4 = vchan_find_desc(arg1,arg2 & 0xffffffff);
        if (iVar4 == 0) {
            piVar5 = *(arg1 + 0x178);
            if (arg1 + 0x178 == piVar5) {
                iVar12 = 0;
            }
            else {
                iVar12 = 0;
                do {
                    if (piVar5[-0x18] == iVar11) {
                        uVar1 = *(piVar5 + -3);
                        uVar6 = uVar1;
                        if (uVar1 != 0) {
                            if (uVar1 == 1) {
                                uVar8 = 0;
                            }
                            else {
                                uVar8 = uVar6 & 0xfffffffe;
                                iVar9 = 0;
                                puVar7 = piVar5[-1] + 0xc;
                                uVar10 = uVar8;
                                do {
                                    uVar10 = uVar10 - 2;
                                    iVar12 = iVar12 + puVar7[-4];
                                    iVar9 = iVar9 + *puVar7;
                                    puVar7 = puVar7 + 8;
                                } while (uVar10 != 0);
                                iVar12 = iVar9 + iVar12;
                                if (uVar8 == uVar6) goto code_r0x080044ac;
                            }
                            iVar4 = uVar6 - uVar8;
                            puVar7 = piVar5[-1] + uVar8 * 8 + 4;
                            do {
                                iVar4 = iVar4 + -1;
                                iVar12 = iVar12 + *puVar7;
                                puVar7 = puVar7 + 4;
                            } while (iVar4 != 0);
                        }
                    }
code_r0x080044ac:
                    piVar5 = *piVar5;
                } while (arg1 + 0x178 != piVar5);
            }
        }
        else {
            iVar12 = *(iVar4 + 0xd8);
        }
        _raw_spin_unlock_irqrestore(arg1 + 0xa0,uVar2);
        *(arg3 + 8) = iVar12;
    }
    uVar3 = 1;
    if (*(arg1 + 0x170) != 0) {
        uVar3 = 2;
    }
    return uVar3;
}


// ===== sym.bam_dma_xlate @ 0x0800453c (size 164) =====

ulong sym.bam_dma_xlate(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg2 + 0x30);
    if (*(iVar2 + 0x228) != 0) {
        ipc_log_string(*(iVar2 + 0x228),"%s No of channels:%d\n","bam_dma_xlate",*(iVar2 + 0x1b8));
    }
    sym.__ftrace_dbg(*(iVar2 + -8),0x800086d,0x8000555,*(iVar2 + 0x1b8));
    if ((*(arg1 + 8) == 1) && (*(arg1 + 0xc) < *(iVar2 + 0x1b8))) {
        uVar1 = dma_get_slave_channel(*(iVar2 + 0x1b0) + *(arg1 + 0xc) * 0x198);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.readl_relaxed @ 0x080045e0 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80045e4);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8004618);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08004650 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800466c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004694);
    return;
}


// ===== sym.bam_start_dma @ 0x080046c8 (size 904) =====

void sym.bam_start_dma(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    int16_t iVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    int64_t iVar13;
    ulong *puVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 200;
    piVar15 = *(arg1 + 0x100);
    piVar16 = NULL;
    if (piVar1 != *piVar1) {
        piVar16 = *piVar1 + -0x13;
    }
    iVar12 = *(arg1 + 0x158);
    if (piVar15[0x47] != 0) {
        ipc_log_string(piVar15[0x47],"%s chan id:%d\n","bam_start_dma",*(arg1 + 0x108));
    }
    sym.__ftrace_dbg(piVar15[1],0x800084c,0x8000570,*(arg1 + 0x108));
    if ((piVar16 != NULL) && (iVar5 = __pm_runtime_resume(piVar15[1],4), -1 < iVar5)) {
        uVar9 = iVar12 + 7U & 0xfffffffffffffff8;
        do {
            uVar3 = 0xfff;
            if (*(piVar15 + 0x234) != '\0') {
                uVar3 = 0x1f;
            }
            if ((uVar3 & ~*(arg1 + 0x16a) + *(arg1 + 0x168)) == 0) break;
            uVar6 = __list_del_entry_valid(piVar16 + 0x13);
            if ((uVar6 & 1) != 0) {
                iVar12 = piVar16[0x13];
                piVar10 = piVar16[0x14];
                *(iVar12 + 8) = piVar10;
                *piVar10 = iVar12;
            }
            piVar16[0x13] = -0x2152ffffffffff00;
            piVar16[0x14] = -0x2152fffffffffede;
            if (*(arg1 + 0x16c) == 0) {
                sym.bam_chan_init_hw(arg1,*(piVar16 + 0x1a));
                iVar5 = *(arg1 + 0x174);
            }
            else {
                iVar5 = *(arg1 + 0x174);
            }
            if (iVar5 != 0) {
                piVar10 = *(arg1 + 0x100);
                if (*(piVar10 + 0x1d4) == '\0') {
                    iVar12 = 0x130;
                    if (piVar16[0x1a] != 2) {
                        iVar12 = 0x134;
                    }
                    sym.writel_relaxed(*(arg1 + iVar12),
                                       *piVar10 + *(piVar10[0x3b] + 0x30) + piVar10[0x3a] * *(piVar10[0x3b] + 0x3c));
                }
                *(arg1 + 0x174) = 0;
            }
            uVar8 = *(piVar16 + 0x15);
            iVar12 = piVar16[0x17];
            uVar17 = 0xfff;
            uVar18 = uVar17;
            if (*(piVar15 + 0x234) != '\0') {
                uVar18 = 0x1f;
            }
            uVar18 = uVar18 & ~*(arg1 + 0x16a) + *(arg1 + 0x168);
            if (uVar18 < uVar8) {
                *(piVar16 + 0xac) = uVar18;
            }
            else {
                *(piVar16 + 0xac) = uVar8;
                iVar13 = iVar12 + (uVar8 - 1) * 8;
                *(iVar13 + 6) = *(iVar13 + 6) | *(piVar16 + 0x16);
            }
            uVar8 = *(piVar16 + 0xac);
            piVar10 = NULL;
            if (piVar1 != *piVar1) {
                piVar10 = *piVar1 + -0x13;
            }
            if (((((uVar18 <= uVar8) || (piVar10 == NULL)) || (piVar16[5] != 0)) || (piVar16[6] != 0)) &&
               ((*(piVar16 + 0x16) >> 0xe & 1) == 0)) {
                iVar13 = iVar12 + (uVar8 - 1) * 8;
                *(iVar13 + 6) = *(iVar13 + 6) | 0x8000;
                uVar8 = *(piVar16 + 0xac);
            }
            uVar11 = *(arg1 + 0x16a);
            uVar6 = 0xfff;
            if (*(piVar15 + 0x234) != '\0') {
                uVar6 = 0x1f;
            }
            if (uVar6 < uVar8 + *(arg1 + 0x16a)) {
                iVar13 = (uVar6 - uVar11 & 0xffffffff) * 8;
                memcpy(uVar9 + uVar11 * 8,iVar12,iVar13);
                iVar12 = iVar12 + iVar13;
                uVar8 = *(piVar16 + 0xac) - (uVar6 - uVar11);
                uVar6 = uVar9;
            }
            else {
                uVar6 = uVar9 + uVar11 * 8;
            }
            memcpy(uVar6,iVar12,uVar8 << 3);
            piVar2 = piVar16 + 0x18;
            puVar14 = *(arg1 + 0x180);
            uVar3 = *(arg1 + 0x16a) + *(piVar16 + 0xac);
            *(arg1 + 0x16a) = uVar3;
            if (*(piVar15 + 0x234) != '\0') {
                uVar17 = 0x1f;
            }
            iVar4 = 0;
            if (uVar17 != 0) {
                iVar4 = uVar3 / uVar17;
            }
            *(arg1 + 0x16a) = uVar3 - iVar4 * uVar17;
            uVar6 = __list_add_valid(piVar2,puVar14,arg1 + 0x178);
            if ((uVar6 & 1) != 0) {
                *(arg1 + 0x180) = piVar2;
                *piVar2 = arg1 + 0x178;
                piVar16[0x19] = puVar14;
                *puVar14 = piVar2;
            }
            piVar16 = piVar10;
        } while (piVar10 != NULL);
        DataSynchronizationBarrier(3,2,0);
        iVar12 = piVar15[0x3b];
        sym.writel_relaxed(*(arg1 + 0x16a) << 3,
                           *piVar15 + *(iVar12 + 0x140) + *(iVar12 + 0x144) * *(arg1 + 0x108) +
                           *(iVar12 + 0x148) * *(arg1 + 0x108) + piVar15[0x3a] * *(iVar12 + 0x14c));
        iVar12 = piVar15[1];
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar12 + 0x218) = uVar7;
        __pm_runtime_suspend(piVar15[1],0xd);
    }
    return;
}


// ===== sym.bam_chan_init_hw @ 0x08004a58 (size 672) =====

void sym.bam_chan_init_hw(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x100);
    iVar2 = piVar3[0x3b];
    sym.writel_relaxed(1,*piVar3 + *(iVar2 + 0xe0) + *(iVar2 + 0xe4) * *(arg1 + 0x108) +
                          *(iVar2 + 0xe8) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xec));
    iVar2 = piVar3[0x3b];
    sym.writel_relaxed(0,*piVar3 + *(iVar2 + 0xe0) + *(iVar2 + 0xe4) * *(arg1 + 0x108) +
                          *(iVar2 + 0xe8) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xec));
    DataSynchronizationBarrier(3,2,0);
    *(arg1 + 0x16c) = 0;
    iVar2 = piVar3[0x3b];
    sym.writel_relaxed(*(arg1 + 0x160) + 7U & 0xfffffff8,
                       *piVar3 + *(iVar2 + 0x170) + *(iVar2 + 0x174) * *(arg1 + 0x108) +
                       *(iVar2 + 0x178) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0x17c));
    iVar2 = piVar3[0x3b];
    uVar4 = 0x8000;
    uVar1 = uVar4;
    if (*(piVar3 + 0x234) != '\0') {
        uVar1 = 0x100;
    }
    sym.writel_relaxed(uVar1,*piVar3 + *(iVar2 + 400) + *(iVar2 + 0x194) * *(arg1 + 0x108) +
                              *(iVar2 + 0x198) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0x19c));
    iVar2 = piVar3[0x3b];
    sym.writel_relaxed(0x31,*piVar3 + *(iVar2 + 0x120) + *(iVar2 + 0x124) * *(arg1 + 0x108) +
                             *(iVar2 + 0x128) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 300));
    uVar1 = sym.readl_relaxed(*piVar3 + *(piVar3[0x3b] + 0xc0) + piVar3[0x3a] * *(piVar3[0x3b] + 0xcc));
    sym.writel_relaxed(uVar1 | 1L << (*(arg1 + 0x108) & 0x3f),
                       *piVar3 + *(piVar3[0x3b] + 0xc0) + piVar3[0x3a] * *(piVar3[0x3b] + 0xcc));
    DataSynchronizationBarrier(3,2,0);
    iVar2 = piVar3[0x3b];
    uVar1 = 0x2a;
    if (arg2 != 2) {
        uVar1 = 0x22;
    }
    sym.writel_relaxed(uVar1,*piVar3 + *(iVar2 + 0xd0) + *(iVar2 + 0xd4) * *(arg1 + 0x108) +
                              *(iVar2 + 0xd8) * *(arg1 + 0x108) + piVar3[0x3a] * *(iVar2 + 0xdc));
    *(arg1 + 0x168) = 0x100000000;
    if (piVar3[0x47] != 0) {
        if (*(piVar3 + 0x234) != '\0') {
            uVar4 = 0x100;
        }
        ipc_log_string(piVar3[0x47],"%s: bam_desc_fifo:%d\n","bam_chan_init_hw",uVar4);
    }
    uVar1 = 0x8000;
    if (*(piVar3 + 0x234) != '\0') {
        uVar1 = 0x100;
    }
    sym.__ftrace_dbg(piVar3[1],0x8000658,0x800072b,uVar1);
    return;
}


// ===== sym.bam_dma_free_desc @ 0x08004cf8 (size 36) =====

void sym.bam_dma_free_desc(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.process_channel_irqs @ 0x08004d1c (size 860) =====

uint64_t sym.process_channel_irqs(int64_t arg1)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    uint64_t *puVar3;
    char cVar4;
    bool bVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    int16_t iVar8;
    code *pcVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t uVar16;
    ulong *in_x18;
    int64_t iVar17;
    int iVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    ulong *puVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = sym.readl_relaxed(*arg1 + *(*(arg1 + 0x1d8) + 0xb0) + *(arg1 + 0x1d0) * *(*(arg1 + 0x1d8) + 0xbc));
    if ((uVar11 & 0x7fffffff) != 0) {
        uVar10 = *(arg1 + 0x1c8);
        if (uVar10 != 0) {
            uVar19 = 0;
            do {
                if (((uVar11 & 0xffffffff) >> (uVar19 & 0x3f) & 1) != 0) {
                    iVar14 = *(arg1 + 0x1d8);
                    iVar18 = uVar19;
                    iVar17 = *(arg1 + 0x1c0);
                    iVar14 = sym.readl_relaxed(*arg1 + *(iVar14 + 0x100) + *(iVar14 + 0x104) * iVar18 +
                                               *(iVar14 + 0x108) * iVar18 + *(arg1 + 0x1d0) * *(iVar14 + 0x10c));
                    iVar15 = *(arg1 + 0x1d8);
                    sym.writel_relaxed(iVar14,*arg1 + *(iVar15 + 0x110) + *(iVar15 + 0x114) * iVar18 +
                                               *(iVar15 + 0x118) * iVar18 + *(arg1 + 0x1d0) * *(iVar15 + 0x11c));
                    iVar17 = iVar17 + uVar19 * 0x198;
                    uVar12 = _raw_spin_lock_irqsave();
                    iVar14 = *(arg1 + 0x1d8);
                    uVar10 = sym.readl_relaxed(*arg1 + *(iVar14 + 0x150) + *(iVar14 + 0x154) * iVar18 +
                                               *(iVar14 + 0x158) * iVar18 + *(arg1 + 0x1d0) * *(iVar14 + 0x15c));
                    if (iVar17 + 0x178 != *(iVar17 + 0x178)) {
                        uVar7 = uVar10 >> 3 & 0x1fff;
                        puVar1 = iVar17 + 0x168;
                        uVar10 = 0xfff;
                        if (*(arg1 + 0x234) != '\0') {
                            uVar10 = 0x1f;
                        }
                        piVar2 = iVar17 + 200;
                        uVar10 = (uVar10 & uVar7 - *(iVar17 + 0x168)) - (uVar7 < *(iVar17 + 0x168));
                        piVar21 = *(iVar17 + 0x178);
                        do {
                            if (uVar10 < *(piVar21 + -0x14)) break;
                            piVar20 = *piVar21;
                            uVar7 = *puVar1 + *(piVar21 + -0x14);
                            uVar6 = uVar7;
                            *puVar1 = uVar6;
                            uVar16 = 0xfff;
                            if (*(arg1 + 0x234) != '\0') {
                                uVar16 = 0x1f;
                            }
                            iVar8 = 0;
                            if (uVar16 != 0) {
                                iVar8 = (uVar7 & 0xffff) / uVar16;
                            }
                            *puVar1 = uVar6 - iVar8 * uVar16;
                            uVar7 = *(piVar21 + -0x14);
                            iVar18 = piVar21[-3] - uVar7;
                            *(piVar21 + -3) = iVar18;
                            piVar21[-1] = piVar21[-1] + uVar7 * 8;
                            if (iVar18 == 0) {
                                if (piVar21[-0x18] < 1) {
    //WARNING: Does not return
                                    pcVar9 = SoftwareBreakpoint(0x800,0x800505c);
                                    (*pcVar9)();
                                }
                                iVar14 = piVar21[-0x16];
                                piVar22 = piVar21 + -5;
                                *(iVar14 + 0x14) = piVar21[-0x18];
                                *(piVar21 + -0x18) = 0;
                                puVar23 = *(iVar14 + 0xe0);
                                uVar13 = __list_add_valid(piVar22,puVar23,iVar14 + 0xd8);
                                if ((uVar13 & 1) != 0) {
                                    *(iVar14 + 0xe0) = piVar22;
                                    piVar21[-5] = iVar14 + 0xd8;
                                    piVar21[-4] = puVar23;
                                    *puVar23 = piVar22;
                                }
                                puVar3 = iVar14 + 0x78;
                                Hint_Prefetch(puVar3,2,0,1);
                                do {
                                    uVar13 = *puVar3;
                                    cVar4 = '\x01';
                                    bVar5 = ExclusiveMonitorPass(puVar3,0x10);
                                    if (bVar5) {
                                        *puVar3 = uVar13 | 1;
                                        cVar4 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar4 != '\0');
                                DataMemoryBarrier(2,3);
                                if ((uVar13 & 1) == 0) {
                                    uVar11 = __tasklet_schedule(iVar14 + 0x70);
                                    return uVar11;
                                }
                            }
                            else {
                                piVar22 = piVar21 + -5;
                                iVar14 = *piVar2;
                                uVar13 = __list_add_valid(piVar22,piVar2,iVar14);
                                if ((uVar13 & 1) != 0) {
                                    *(iVar14 + 8) = piVar22;
                                    piVar21[-5] = iVar14;
                                    piVar21[-4] = piVar2;
                                    *piVar2 = piVar22;
                                }
                            }
                            uVar10 = uVar10 - uVar7;
                            uVar13 = __list_del_entry_valid(piVar21);
                            if ((uVar13 & 1) != 0) {
                                iVar14 = *piVar21;
                                piVar22 = piVar21[1];
                                *(iVar14 + 8) = piVar22;
                                *piVar22 = iVar14;
                            }
                            *piVar21 = -0x2152ffffffffff00;
                            piVar21[1] = -0x2152fffffffffede;
                            piVar21 = piVar20;
                        } while (iVar17 + 0x178 != piVar20);
                    }
                    _raw_spin_unlock_irqrestore(iVar17 + 0xa0,uVar12);
                    uVar10 = *(arg1 + 0x1c8);
                }
                uVar19 = uVar19 + 1;
            } while (uVar19 < uVar10);
        }
    }
    return uVar11 & 0xffffffff;
}


// ===== sym.bam_dma_suspend @ 0x08005078 (size 120) =====

ulong sym.bam_dma_suspend(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    pm_runtime_force_suspend();
    clk_unprepare(*(iVar1 + 0x1e0));
    if (*(iVar1 + 0x238) != 0) {
        ipc_log_string(*(iVar1 + 0x238),"%s ret:%d\n","bam_dma_suspend",0);
    }
    sym.__ftrace_dbg(*(iVar1 + 8),0x800076a,0x80007eb,0);
    return 0;
}


// ===== sym.bam_dma_resume @ 0x080050f0 (size 144) =====

int sym.bam_dma_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    iVar1 = clk_prepare(*(iVar2 + 0x1e0));
    if (iVar1 == 0) {
        pm_runtime_force_resume(arg1);
        if (*(iVar2 + 0x238) != 0) {
            ipc_log_string(*(iVar2 + 0x238),"%s ret:%d\n","bam_dma_resume",0);
        }
        sym.__ftrace_dbg(*(iVar2 + 8),0x800076a,0x8000621,0);
    }
    return iVar1;
}


// ===== sym.bam_dma_runtime_suspend @ 0x08005180 (size 48) =====

ulong sym.bam_dma_runtime_suspend(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    clk_disable(*(*(arg1 + 0x98) + 0x1e0));
    return 0;
}


// ===== sym.bam_dma_runtime_resume @ 0x080051b0 (size 96) =====

int sym.bam_dma_runtime_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_enable(*(*(arg1 + 0x98) + 0x1e0));
    if (iVar1 < 0) {
        _dev_err(arg1,"clk_enable failed: %d\n",iVar1);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08005210 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005254

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
    //switch table (4 cases) at 0x8000883
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005268);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005278 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080052ac (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.bam_dma_probe.dd39b2875dcb25d55cd0db6dd6f94941.cfi_jt);
    return;
}

