// decompiled from msm_qmp by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 604) =====

//WARNING: Switch with 1 destination removed at 0x0800358c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x2ee0710dce68437c) {
        if (arg1 < -0x3ac64e6681b1b5a7) {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.qmp_mbox_freeze.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
            }
            else if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
            }
            else {
                if (arg1 != -0x3e637c87541bd604) goto code_r0x0800354c;
                pcVar2 = sym.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3ac64e6681b1b5a7) {
                pcVar2 = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                goto code_r0x08001248;
            }
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800354c;
                pcVar2 = sym.qmp_mbox_remove.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
            }
        }
code_r0x08001228:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < -0x8962c8020a87446) {
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x2b7a5ce0ffc74ab2) {
                    if (arg1 != -0x12a3df807d8d4a26) goto code_r0x0800354c;
                    pcVar2 = sym.qmp_shim_startup.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                    goto code_r0x08001228;
                }
                pcVar2 = sym.qmp_rx_callback.cfi_jt;
            }
        }
        else if (arg1 < 0x2c014fa75ba27deb) {
            if (arg1 == -0x8962c8020a87446) {
                pcVar2 = sym.qmp_shutdown.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                goto code_r0x08001228;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800354c;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x2c014fa75ba27deb) {
            pcVar2 = sym.qmp_last_tx_done.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800354c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001248:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x0800354c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80035a0);
    (*pcVar1)();
}


// ===== sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x08001268 (size 8) =====

ulong sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    int64_t *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (arg1 = *(param_2 + 0x10); arg1 != param_2 + 0x10; arg1 = *arg1) {
        sym.__qmp_rx_worker(arg1);
    }
    return 1;
}


// ===== sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x08001270 (size 8) =====

ulong sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x30) != 0) {
        sym.writel_relaxed(*(param_2 + 0x38),*(param_2 + 0x30));
    }
    *(param_2 + 0x44) = *(param_2 + 0x44) + 1;
    return 2;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08001278 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001280 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001288 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x08001290 (size 8) =====

ulong sym.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if ((param_1 != 0) && (param_2 != NULL)) {
        iVar8 = *(param_1 + 0xf0);
        if ((iVar8 == 0) || ((iVar7 = *(iVar8 + 0x218), iVar7 == 0 || (0x1000 < *param_2)))) {
            uVar6 = 0xffffffea;
        }
        else {
            uVar3 = _raw_spin_lock_irqsave(iVar8 + 0x148);
            iVar2 = *(iVar8 + 0x28);
            if (0 < iVar2) {
                iVar4 = 0;
                iVar5 = 0;
                do {
                    if (*(iVar8 + 0x20) + iVar5 * 0xf8 == param_1) {
                        uVar6 = 0xffffffea;
                        if ((-1 < iVar5) && (iVar5 < iVar2)) {
                            if (*(*(iVar8 + 0xd0) + iVar4) == 0) {
                                puVar1 = *(iVar8 + 0xd0) + iVar4;
                                *puVar1 = *param_2;
                                memcpy(*(puVar1 + 2),*(param_2 + 2),*param_2);
                                iVar4 = sp_el0;
                                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: scheduling worker to send msg:%s\n",
                                               *(iVar4 + 0x5d8),"qmp_shim_send_data",*(param_2 + 2));
                                queue_work_on(0x20,_delayed_work_timer_fn,iVar8 + 0xd8);
                                uVar6 = 0;
                            }
                            else {
                                iVar2 = ___ratelimit(obj.qmp_shim_send_data._rs,"qmp_shim_send_data");
                                if (iVar2 != 0) {
                                    iVar4 = sp_el0;
                                    _printk("%s[%d]: %s: dropping msg:%s\n",0x80008a3,*(iVar4 + 0x5d8),
                                            "qmp_shim_send_data",*(param_2 + 2));
                                }
                                iVar4 = sp_el0;
                                ipc_log_string(*(iVar7 + 0x90),"%s[%d]: %s: dropping msg:%s\n",0x8000903,
                                               *(iVar4 + 0x5d8),"qmp_shim_send_data",*(param_2 + 2));
                                uVar6 = 0xffffffea;
                            }
                        }
                        goto code_r0x08002a40;
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 0x10;
                } while (iVar2 != iVar5);
            }
            uVar6 = 0xffffffea;
code_r0x08002a40:
            _raw_spin_unlock_irqrestore(iVar8 + 0x148,uVar3);
        }
    }
    return uVar6;
}


// ===== sym.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x08001298 (size 8) =====

uint sym.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t arg2;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        return 0xffffffea;
    }
    iVar10 = *(param_1 + 0xf0);
    if (iVar10 == 0) {
        return 0xffffffea;
    }
    uVar5 = completion_done(iVar10 + 0x170);
    if ((uVar5 & 1) == 0) {
        return 0xffffffea;
    }
    iVar11 = *(iVar10 + 0x218);
    uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x148);
    if (*(iVar10 + 0xb1) != '\0') {
        uVar4 = 0xfffffff5;
        goto code_r0x08002ee4;
    }
    uVar1 = *param_2;
    if (*(iVar10 + 0xbc) < uVar1 + 4) {
        uVar4 = 0xffffffea;
        goto code_r0x08002ee4;
    }
    iVar8 = *(iVar10 + 0xa8) + *(iVar10 + 0xb8);
    if ((uVar1 & 3) != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002f1c);
        (*pcVar3)();
    }
    if (3 < uVar1) {
        uVar5 = uVar1 >> 2;
        puVar12 = *(param_2 + 2);
        arg2 = iVar8;
        do {
            arg2 = arg2 + 4;
            uVar5 = uVar5 - 1;
            sym.writel(*puVar12,arg2);
            puVar12 = puVar12 + 1;
        } while (uVar5 != 0);
    }
    sym.writel(*param_2,iVar8);
    uVar4 = sym.readl(iVar8);
    uVar1 = *(iVar10 + 0x28);
    uVar5 = uVar1;
    *(iVar10 + 0xb1) = 1;
    if (0 < uVar1) {
        if (uVar1 == 1) {
            uVar7 = 0;
        }
        else {
            uVar9 = 0;
            uVar7 = uVar5 & 0xfffffffe;
            iVar8 = *(iVar10 + 0x20);
            do {
                if ((iVar8 == param_1) || (iVar8 + 0xf8 == param_1)) {
                    *(iVar10 + 0xb4) = uVar9 | iVar8 + 0xf8 == param_1;
                }
                uVar9 = uVar9 + 2;
                iVar8 = iVar8 + 0x1f0;
            } while (uVar7 != uVar9);
            if (uVar7 == uVar5) goto code_r0x08002e3c;
        }
        iVar8 = *(iVar10 + 0x20) + uVar7 * 0xf8;
        do {
            if (iVar8 == param_1) {
                *(iVar10 + 0xb4) = uVar7;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 0xf8;
        } while (uVar5 != uVar7);
    }
code_r0x08002e3c:
    iVar8 = sp_el0;
    ipc_log_string(*(iVar11 + 0x90),"[%d]: %s: Copied buffer to msgram sz:%d i:%d\n",*(iVar8 + 0x5d8),"qmp_send_data"
                   ,uVar4,*(iVar10 + 0xb4));
    DataSynchronizationBarrier(3,2,0);
    if (*(iVar11 + 0x80) == 0) {
        sym.writel_relaxed(*(iVar11 + 0x38),*(iVar11 + 0x28));
    }
    else {
        mbox_send_message(*(iVar11 + 0x80),0);
        mbox_client_txdone(*(iVar11 + 0x80),0);
    }
    uVar2 = _delayed_work_timer_fn;
    *(iVar11 + 0x40) = *(iVar11 + 0x40) + 1;
    queue_delayed_work_on(0x20,uVar2,iVar10 + 400,0xfa);
    uVar4 = 0;
code_r0x08002ee4:
    _raw_spin_unlock_irqrestore(iVar10 + 0x148,uVar6);
    return uVar4;
}


// ===== sym.qmp_rx_callback.cfi_jt @ 0x080012a0 (size 8) =====

uint64_t sym.qmp_rx_callback.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong *puVar16;
    ulong uVar17;
    int64_t iVar18;
    ulong uVar19;
    uint32_t uVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint64_t uStack_c0;
    uint uStack_b4;
    uint32_t uStack_b0;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    uStack_38 = 0;
    if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
        uVar5 = _printk(0x8000851);
    }
    else {
        iVar11 = sp_el0;
        uStack_38 = param_3;
        iStack_30 = param_1;
        ipc_log_string(*(*(param_2 + 0x218) + 0x90),"[%d]: %s: rx_buf = %s\n",*(iVar11 + 0x5d8),"qmp_rx_callback");
        uVar5 = mbox_chan_received_data(*(param_2 + 0x20) + *(param_2 + 0xb4) * 0xf8,&uStack_38);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qmp_mbox_probe;
    pcStack_98 = sym.qmp_mbox_probe;
    iVar8 = sp_el0;
    iVar11 = iVar6 + 0x10;
    iStack_a8 = *(iVar8 + 0x5e0);
    puVar14 = *(iVar6 + 0x300);
    puStack_a0 = &stack0xffffffffffffffe0;
    piVar7 = devm_kmalloc(iVar11,0xa0,0xdc0);
    if (piVar7 == NULL) goto code_r0x080017e8;
    *(iVar6 + 0xa8) = piVar7;
    iVar8 = of_parse_phandle(puVar14,"qcom,qmp",0);
    if (iVar8 == 0) {
        uVar17 = *(iVar6 + 0x300);
        piVar13 = *(iVar6 + 0xa8);
        iVar8 = of_get_property(uVar17,"label",0);
        piVar13[1] = iVar8;
        if (iVar8 != 0) {
            piVar13[2] = piVar13 + 2;
            piVar13[3] = piVar13 + 2;
            *piVar13 = iVar11;
            piVar9 = platform_get_resource_byname(iVar6,0x200,"msgram");
            if (piVar9 == NULL) {
                uStack_ac = 0;
                uStack_c0 = 0;
                uVar2 = of_property_read_variable_u32_array(uVar17,"qcom,remote-pid",&uStack_ac,1,0);
                if (uVar2 < 0) {
                    uVar5 = uVar2;
                    _printk(0x8000426,uVar5);
                    goto code_r0x080017ec;
                }
                uVar5 = qcom_smem_get(uStack_ac,0x275,&uStack_c0);
                if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                    if (uVar5 != 0) goto code_r0x080017ec;
                }
                else {
                    piVar13[4] = uVar5;
                }
            }
            else {
                iVar8 = devm_ioremap(iVar11,*piVar9,(piVar9[1] - *piVar9) + 1);
                piVar13[4] = iVar8;
                if (iVar8 == 0) {
                    uVar5 = 0xfffffffb;
                    goto code_r0x080017ec;
                }
            }
            piVar13[9] = iVar11;
            *(piVar13 + 0xc) = 1;
            uVar10 = mbox_request_channel(piVar13 + 9,0);
            piVar13[0x10] = uVar10;
            if (uVar10 < 0xfffffffffffff001) {
code_r0x080016bc:
                iVar3 = irq_of_parse_and_map(uVar17,0);
                *(piVar13 + 0x3c) = iVar3;
                if (iVar3 == 0) {
                    uVar17 = 0x80003e9;
                    goto code_r0x08001c90;
                }
            }
            else {
                if (uVar10 == 0xffffffffffffffed) {
                    piVar13[0x10] = 0;
                    iVar8 = *(iVar6 + 0xa8);
                    uVar19 = *(iVar6 + 0x300);
                    piVar9 = platform_get_resource_byname(iVar6,0x200,"irq-reg-base");
                    if (piVar9 == NULL) {
                        uVar5 = 0xffffffed;
                        uVar17 = 0x80006a5;
                    }
                    else {
                        iVar3 = of_property_read_variable_u32_array(uVar19,"qcom,irq-mask",iVar8 + 0x38,1,0);
                        if (iVar3 < 0) {
                            uVar5 = 0xffffffed;
                            uVar17 = 0x8000733;
                        }
                        else {
                            iVar18 = devm_ioremap(iVar11,*piVar9,(piVar9[1] - *piVar9) + 1);
                            *(iVar8 + 0x28) = iVar18;
                            if (iVar18 != 0) goto code_r0x080016bc;
                            uVar5 = 0xfffffffb;
                            uVar17 = 0x80003bb;
                        }
                    }
                    _printk(uVar17,"qmp_parse_ipc");
                    goto code_r0x080017ec;
                }
                uVar5 = uVar10 & 0xffffffff;
                if (uVar10 != 0) goto code_r0x080017ec;
            }
            uStack_c0 = uStack_c0 & 0xffffffff00000000;
            uStack_ac = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-desc-offset",&uStack_b0,1,0);
            if (iVar3 < 0) {
                pcVar12 = "mbox-desc-offset";
code_r0x08001b38:
                _printk(0x80004b0,"qmp_mbox_init",pcVar12);
            }
            else {
                iVar3 = of_property_read_variable_u32_array(puVar14,"priority",&uStack_b4,1,0);
                if (iVar3 < 0) {
                    pcVar12 = "priority";
                    goto code_r0x08001b38;
                }
                puVar16 = devm_kmalloc(*piVar7,0x228,0xdc0);
                if (puVar16 == NULL) {
code_r0x080017e8:
                    uVar5 = 0xfffffff4;
                    goto code_r0x080017ec;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-offset",&uStack_c0,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0x17) = uStack_c0;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-size",&uStack_ac,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0xbc) = uStack_ac;
                }
                iVar8 = piVar7[4];
                puVar16[0x43] = piVar7;
                *(puVar16 + 0x13) = uStack_b4;
                puVar16[0x15] = iVar8 + uStack_b0;
                uVar2 = sym.get_mbox_num_chans(puVar14);
                iVar8 = *piVar7;
                *(puVar16 + 0x16) = 1 < uVar2;
                iVar8 = devm_kmalloc(iVar8,uVar2 * 0xf8,0xdc0);
                if (iVar8 == 0) goto code_r0x080017e8;
                if (0x80000000 < uVar2 + 0x7fffffff) {
                    uVar20 = uVar2 & 0xfffffffe;
                    puVar21 = iVar8 + 0x1e8;
                    uVar1 = uVar20;
                    do {
                        puVar21[-0x1f] = puVar16;
                        uVar1 = uVar1 - 2;
                        *puVar21 = puVar16;
                        puVar21 = puVar21 + 0x3e;
                        if (uVar1 == 0) goto joined_r0x08001850;
                    } while( true );
                }
                uVar20 = 0;
                do {
                    iVar18 = uVar20;
                    uVar20 = uVar20 + 1;
                    *(iVar8 + iVar18 * 0xf8 + 0xf0) = puVar16;
joined_r0x08001850:
                } while (uVar2 != uVar20);
                puVar16[2] = *piVar7;
                puVar16[3] = reloc.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                puVar16[4] = iVar8;
                *(puVar16 + 5) = uVar2;
                *(puVar16 + 0x2c) = 1;
                puVar16[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                uVar2 = mbox_controller_register(puVar16 + 2);
                if (uVar2 != 0) {
                    uVar17 = 0x80007c5;
                    pcVar12 = "qmp_mbox_init";
code_r0x08001d54:
                    uVar5 = uVar2;
                    _printk(uVar17,pcVar12,uVar5);
                    goto code_r0x080017ec;
                }
                *(puVar16 + 0x29) = 0;
                __mutex_init(puVar16 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x22) = 0;
                *(puVar16 + 0x2a) = 0;
                __init_swait_queue_head(puVar16 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x2e) = 0;
                __init_swait_queue_head(puVar16 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
                puVar16[0x32] = 0xfffffffe0;
                *(puVar16 + 0xb1) = 0;
                *(puVar16 + 0x9c) = 0;
                puVar16[0x33] = puVar16 + 0x33;
                puVar16[0x34] = puVar16 + 0x33;
                puVar16[0x35] = sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                init_timer_key(puVar16 + 0x38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                *(puVar16 + 0x44) = 0;
                piVar13 = piVar7 + 2;
                piVar9 = *piVar13;
                if (piVar9 != piVar13) {
                    do {
                        if (piVar9[0x13] <= *(puVar16 + 0x13)) {
                            piVar15 = piVar9 + 1;
                            puVar21 = *piVar15;
                            uVar5 = __list_add_valid(puVar16,puVar21,piVar9);
                            piVar13 = piVar9;
                            goto joined_r0x080019b0;
                        }
                        piVar9 = *piVar9;
                    } while (piVar9 != piVar13);
                }
                piVar15 = piVar7 + 3;
                puVar21 = *piVar15;
                uVar5 = __list_add_valid(puVar16,puVar21,piVar13);
joined_r0x080019b0:
                if ((uVar5 & 1) != 0) {
                    *piVar15 = puVar16;
                    *puVar16 = piVar13;
                    puVar16[1] = puVar21;
                    *puVar21 = puVar16;
                }
            }
            iVar8 = piVar7[1];
            *(iVar6 + 0xa8) = piVar7;
            iVar8 = ipc_log_context_create(2,iVar8,0);
            piVar7[0x12] = iVar8;
            uVar2 = devm_request_threaded_irq
                              (iVar11,*(piVar7 + 0x3c),sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,
                               sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,1,*puVar14,piVar7);
            if (uVar2 < 0) {
                uVar5 = uVar2;
                sym.qmp_mbox_remove(iVar6);
                iVar3 = ___ratelimit(obj.qmp_mbox_probe._rs,"qmp_mbox_probe");
                if (iVar3 != 0) {
                    iVar11 = sp_el0;
                    _printk("%s[%d]: %s: request threaded irq on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                            "qmp_mbox_probe",*(piVar7 + 0x3c),uVar5);
                }
                iVar11 = sp_el0;
                ipc_log_string(piVar7[0x12],"%s[%d]: %s: request threaded irq on %d failed: %d\n",0x8000903,
                               *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar7 + 0x3c),uVar5);
            }
            else {
                iVar3 = irq_set_irq_wake(*(piVar7 + 0x3c),1);
                if (iVar3 < 0) {
                    iVar4 = ___ratelimit(obj.qmp_mbox_probe._rs.7,"qmp_mbox_probe");
                    if (iVar4 != 0) {
                        iVar11 = sp_el0;
                        _printk("%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                                "qmp_mbox_probe",*(piVar7 + 0x3c),iVar3);
                    }
                    iVar11 = sp_el0;
                    ipc_log_string(piVar7[0x12],"%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x8000903,
                                   *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar7 + 0x3c),iVar3);
                }
                iVar11 = of_find_property(puVar14,"qcom,early-boot",0);
                if (iVar11 == 0) {
                    uVar5 = 0;
                }
                else {
                    for (piVar13 = piVar7[2]; piVar13 != piVar7 + 2; piVar13 = *piVar13) {
                        sym.__qmp_rx_worker(piVar13);
                    }
                    uVar5 = 0;
                    *(piVar7 + 0x13) = 1;
                }
            }
            goto code_r0x080017ec;
        }
        uVar17 = 0x80006d1;
code_r0x08001c90:
        pcVar12 = "qmp_edge_init";
    }
    else {
        uVar5 = qmp_get(iVar11);
        piVar7[0x11] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            uVar5 = uVar5 & 0xffffffff;
            goto code_r0x080017ec;
        }
        iVar8 = of_get_property(*(iVar6 + 0x300),"label",0);
        piVar7[1] = iVar8;
        if (iVar8 != 0) {
            piVar13 = piVar7 + 2;
            piVar7[2] = piVar13;
            piVar9 = piVar7 + 3;
            *piVar9 = piVar13;
            *piVar7 = iVar11;
            puVar14 = devm_kmalloc(iVar11,0x228,0xdc0);
            if (puVar14 != NULL) {
                uVar2 = sym.get_mbox_num_chans(*(iVar6 + 0x300));
                iVar11 = *piVar7;
                *(puVar14 + 0x16) = 1 < uVar2;
                iVar11 = devm_kmalloc(iVar11,uVar2 * 0xf8,0xdc0);
                if (iVar11 != 0) {
                    iVar8 = devm_kmalloc(*piVar7,uVar2 << 4,0xdc0);
                    puVar14[0x1a] = iVar8;
                    if (iVar8 != 0) {
                        iVar6 = *piVar7;
                        *(iVar11 + 0xf0) = puVar14;
                        iVar6 = devm_kmalloc(iVar6,0x1000,0xdc0);
                        *(iVar8 + 8) = iVar6;
                        if (iVar6 != 0) {
                            uVar20 = 1;
                            do {
                                if (uVar2 == uVar20) {
                                    puVar14[2] = *piVar7;
                                    puVar14[3] = reloc.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    puVar14[4] = iVar11;
                                    *(puVar14 + 5) = uVar2;
                                    *(puVar14 + 0x2c) = 1;
                                    puVar14[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    *(puVar14 + 0x29) = 0;
                                    __mutex_init(puVar14 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                                    *(puVar14 + 0x9c) = 0;
                                    puVar14[0x43] = piVar7;
                                    puVar14[0x1b] = 0xfffffffe0;
                                    puVar14[0x1c] = puVar14 + 0x1c;
                                    puVar14[0x1d] = puVar14 + 0x1c;
                                    puVar14[0x1e] = sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    uVar2 = mbox_controller_register(puVar14 + 2);
                                    if (uVar2 != 0) {
                                        uVar17 = 0x800035c;
                                        pcVar12 = "qmp_shim_init";
                                        goto code_r0x08001d54;
                                    }
                                    piVar15 = *piVar13;
                                    if (piVar15 == piVar13) goto code_r0x08001a6c;
                                    goto code_r0x08001a54;
                                }
                                iVar8 = *piVar7;
                                iVar18 = puVar14[0x1a];
                                *(iVar11 + uVar20 * 0xf8 + 0xf0) = puVar14;
                                iVar6 = devm_kmalloc(iVar8,0x1000,0xdc0);
                                iVar8 = uVar20;
                                uVar20 = uVar20 + 1;
                                uVar5 = 0xfffffff4;
                                *(iVar18 + iVar8 * 0x10 + 8) = iVar6;
                            } while (iVar6 != 0);
                            goto code_r0x080017ec;
                        }
                    }
                }
            }
            goto code_r0x080017e8;
        }
        uVar17 = 0x80006d1;
        pcVar12 = "qmp_shim_init";
    }
    _printk(uVar17,pcVar12);
    uVar5 = 0xffffffed;
code_r0x080017ec:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_a8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_00 = sym.qmp_mbox_remove;
        iVar11 = *(iVar11 + 0xa8);
        disable_irq(*(iVar11 + 0x3c));
        piVar13 = iVar11 + 0x10;
        for (piVar7 = *piVar13; piVar7 != piVar13; piVar7 = *piVar7) {
            mbox_controller_unregister(piVar7 + 2);
            kfree(piVar7[0x19]);
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
    while (piVar15 = *piVar15, piVar15 != piVar13) {
code_r0x08001a54:
        if (piVar15[0x13] <= *(puVar14 + 0x13)) {
            piVar9 = piVar15 + 1;
            puVar16 = *piVar9;
            uVar5 = __list_add_valid(puVar14,puVar16,piVar15);
            piVar13 = piVar15;
            goto joined_r0x08001ac4;
        }
    }
code_r0x08001a6c:
    puVar16 = *piVar9;
    uVar5 = __list_add_valid(puVar14,puVar16,piVar13);
joined_r0x08001ac4:
    if ((uVar5 & 1) != 0) {
        *piVar9 = puVar14;
        *puVar14 = piVar13;
        puVar14[1] = puVar16;
        *puVar16 = puVar14;
    }
    qmp_register_rx_cb(piVar7[0x11],puVar14,sym.qmp_rx_callback.cfi_jt);
    iVar11 = ipc_log_context_create(2,piVar7[1],0);
    uVar5 = 0;
    piVar7[0x12] = iVar11;
    goto code_r0x080017ec;
}


// ===== sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012a8 (size 8) =====

int64_t sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x8c) < *(param_1 + 0x18)) && (*(param_1 + 0x10) != 0)) {
        mutex_lock(param_1 + 0x108);
        iVar1 = *(param_1 + 0x10) + *(param_1 + 0x8c) * 0xf8;
        *(param_1 + 0x8c) = *(param_1 + 0x8c) + 1;
        mutex_unlock(param_1 + 0x108);
    }
    else {
        _printk(0x8000638,"qmp_mbox_of_xlate");
        iVar1 = -0xc;
    }
    return iVar1;
}


// ===== sym.qmp_shim_startup.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012b0 (size 8) =====

uint sym.qmp_shim_startup.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int64_t iVar2;
    
    if ((*(param_1 + 0xf0) != 0) && (iVar2 = *(*(param_1 + 0xf0) + 0x218), iVar2 != 0)) {
        uVar1 = 0xfffffff5;
        if (*(iVar2 + 0x88) != 0) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.qmp_startup.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012b8 (size 8) =====

uint sym.qmp_startup.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0xf0);
    if (iVar3 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = wait_for_completion_timeout(iVar3 + 0x150,0x4e2);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff5;
        }
        else {
            mutex_lock(iVar3 + 0x118);
            if (*(iVar3 + 0x110) == 2) {
                sym.writel(0xffff,*(iVar3 + 0xa8) + 0x2c);
                iVar1 = *(iVar3 + 0x218);
                *(iVar3 + 0x110) = 3;
                DataSynchronizationBarrier(3,2,0);
                if (*(iVar1 + 0x80) == 0) {
                    sym.writel_relaxed(*(iVar1 + 0x38),*(iVar1 + 0x28));
                }
                else {
                    mbox_send_message(*(iVar1 + 0x80),0);
                    mbox_client_txdone(*(iVar1 + 0x80),0);
                }
                *(iVar1 + 0x40) = *(iVar1 + 0x40) + 1;
            }
            mutex_unlock(iVar3 + 0x118);
            iVar3 = wait_for_completion_timeout(iVar3 + 0x170,0x4e2);
            uVar2 = 0xffffffc2;
            if (iVar3 != 0) {
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym.qmp_shutdown.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012c0 (size 8) =====

void sym.qmp_shutdown.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xf0);
    mutex_lock(iVar2 + 0x118);
    if (*(iVar2 + 0x110) < 3) {
        *(iVar2 + 0x9c) = *(iVar2 + 0x9c) + -1;
    }
    else if (*(iVar2 + 0x110) == 3) {
        *(iVar2 + 0x110) = 2;
        *(iVar2 + 0x9c) = *(iVar2 + 0x9c) + -1;
    }
    else {
        uVar1 = *(iVar2 + 0xa0) + 1;
        *(iVar2 + 0xa0) = uVar1;
        if (*(iVar2 + 0x9c) <= uVar1) {
            *(iVar2 + 0x110) = 6;
            sym.writel(0xffff0000,*(iVar2 + 0xa8) + 0x2c);
            iVar3 = *(iVar2 + 0x218);
            DataSynchronizationBarrier(3,2,0);
            if (*(iVar3 + 0x80) == 0) {
                sym.writel_relaxed(*(iVar3 + 0x38),*(iVar3 + 0x28));
            }
            else {
                mbox_send_message(*(iVar3 + 0x80),0);
                mbox_client_txdone(*(iVar3 + 0x80),0);
            }
            *(iVar3 + 0x40) = *(iVar3 + 0x40) + 1;
            *(iVar2 + 0x9c) = 0;
        }
    }
    mutex_unlock(iVar2 + 0x118);
    return;
}


// ===== sym.qmp_shim_shutdown.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012c8 (size 8) =====

void sym.qmp_shim_shutdown.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(void)

{
    return;
}


// ===== sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012d0 (size 8) =====

void sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_1 + -0x48;
    uVar1 = *(param_1 + -0xdc);
    iVar6 = *(param_1 + -0x170);
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    if (*(param_1 + -0xdf) == '\0') {
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
    }
    else {
        iVar3 = ___ratelimit(obj.qmp_notify_timeout._rs,"qmp_notify_timeout");
        if (iVar3 != 0) {
            iVar2 = sp_el0;
            _printk("%s[%d]: %s: tx timeout for %d\n",0x80008a3,*(iVar2 + 0x5d8),"qmp_notify_timeout",
                    *(param_1 + -0xdc));
        }
        iVar2 = sp_el0;
        ipc_log_string(*(*(param_1 + 0x88) + 0x90),"%s[%d]: %s: tx timeout for %d\n",0x8000903,*(iVar2 + 0x5d8),
                       "qmp_notify_timeout",*(param_1 + -0xdc));
        sym.writel(0,*(param_1 + -0xe8) + *(param_1 + -0xd8));
        *(param_1 + -0xdf) = 0;
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        mbox_chan_txdone(iVar6 + uVar1 * 0xf8,0xffffffc2);
    }
    return;
}


// ===== sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012d8 (size 8) =====

void sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint *puVar2;
    int iVar3;
    int64_t iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(param_1 + -0xb0)) {
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar7 = *(param_1 + 0x140);
        iVar1 = param_1 + 0x70;
        iVar4 = sp_el0;
        do {
            iVar8 = *(param_1 + -8);
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            iVar3 = *(iVar8 + iVar9);
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            if (iVar3 != 0) {
                puVar2 = iVar8 + iVar9;
                *(param_1 + -0x24) = iVar11;
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Calling qmp_send msg:%s\n",*(iVar4 + 0x5d8),
                               "qmp_shim_worker",*(puVar2 + 2));
                uVar5 = qmp_send(*(*(param_1 + 0x140) + 0x88),*(puVar2 + 2),*puVar2);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                *puVar2 = 0;
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Calling txdone rc:%d\n",*(iVar4 + 0x5d8),"qmp_shim_worker"
                               ,uVar5);
                mbox_chan_txdone(*(param_1 + -0xb8) + iVar10,uVar5);
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Exiting txdone\n",*(iVar4 + 0x5d8),"qmp_shim_worker");
            }
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0xf8;
            iVar9 = iVar9 + 0x10;
        } while (iVar11 < *(param_1 + -0xb0));
    }
    return;
}


// ===== sym.qmp_mbox_freeze.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012e0 (size 8) =====

ulong sym.qmp_mbox_freeze.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(void)

{
    return 0;
}


// ===== sym.qmp_mbox_restore.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012e8 (size 8) =====

ulong sym.qmp_mbox_restore.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *arg1;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    piVar2 = iVar1 + 0x10;
    for (arg1 = *piVar2; arg1 != piVar2; arg1 = *arg1) {
        *(arg1 + 0x22) = 0;
        *(arg1 + 0x2a) = 0;
        __init_swait_queue_head(arg1 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
        *(arg1 + 0x2e) = 0;
        __init_swait_queue_head(arg1 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
        *(arg1 + 0xb1) = 0;
        *(arg1 + 0x44) = 1;
        kfree(arg1[0x19]);
        arg1[0x19] = 0;
        if (*(iVar1 + 0x98) != '\0') {
            sym.__qmp_rx_worker(arg1);
        }
    }
    return 0;
}


// ===== sym.qmp_last_tx_done.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012f0 (size 8) =====

ulong sym.qmp_last_tx_done.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000560,"qmp_last_tx_done");
    return 1;
}


// ===== sym.qmp_mbox_remove.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x080012f8 (size 8) =====

ulong sym.qmp_mbox_remove.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    disable_irq(*(iVar1 + 0x3c));
    piVar2 = iVar1 + 0x10;
    for (piVar3 = *piVar2; piVar3 != piVar2; piVar3 = *piVar3) {
        mbox_controller_unregister(piVar3 + 2);
        kfree(piVar3[0x19]);
    }
    return 0;
}


// ===== sym.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt @ 0x08001300 (size 8) =====

uint64_t sym.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong *puVar16;
    ulong uVar17;
    int64_t iVar18;
    ulong uVar19;
    uint32_t uVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint uStack_74;
    uint32_t uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar11 = param_1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar14 = *(param_1 + 0x300);
    piVar5 = devm_kmalloc(iVar11,0xa0,0xdc0);
    if (piVar5 == NULL) goto code_r0x080017e8;
    *(param_1 + 0xa8) = piVar5;
    iVar6 = of_parse_phandle(puVar14,"qcom,qmp",0);
    if (iVar6 == 0) {
        uVar17 = *(param_1 + 0x300);
        piVar13 = *(param_1 + 0xa8);
        iVar6 = of_get_property(uVar17,"label",0);
        piVar13[1] = iVar6;
        if (iVar6 != 0) {
            piVar13[2] = piVar13 + 2;
            piVar13[3] = piVar13 + 2;
            *piVar13 = iVar11;
            piVar8 = platform_get_resource_byname(param_1,0x200,"msgram");
            if (piVar8 == NULL) {
                uStack_6c = 0;
                uStack_80 = 0;
                uVar2 = of_property_read_variable_u32_array(uVar17,"qcom,remote-pid",&uStack_6c,1,0);
                if (uVar2 < 0) {
                    uVar7 = uVar2;
                    _printk(0x8000426,uVar7);
                    goto code_r0x080017ec;
                }
                uVar7 = qcom_smem_get(uStack_6c,0x275,&uStack_80);
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    if (uVar7 != 0) goto code_r0x080017ec;
                }
                else {
                    piVar13[4] = uVar7;
                }
            }
            else {
                iVar6 = devm_ioremap(iVar11,*piVar8,(piVar8[1] - *piVar8) + 1);
                piVar13[4] = iVar6;
                if (iVar6 == 0) {
                    uVar7 = 0xfffffffb;
                    goto code_r0x080017ec;
                }
            }
            piVar13[9] = iVar11;
            *(piVar13 + 0xc) = 1;
            uVar10 = mbox_request_channel(piVar13 + 9,0);
            piVar13[0x10] = uVar10;
            if (uVar10 < 0xfffffffffffff001) {
code_r0x080016bc:
                iVar3 = irq_of_parse_and_map(uVar17,0);
                *(piVar13 + 0x3c) = iVar3;
                if (iVar3 == 0) {
                    uVar17 = 0x80003e9;
                    goto code_r0x08001c90;
                }
            }
            else {
                if (uVar10 == 0xffffffffffffffed) {
                    piVar13[0x10] = 0;
                    iVar6 = *(param_1 + 0xa8);
                    uVar19 = *(param_1 + 0x300);
                    piVar8 = platform_get_resource_byname(param_1,0x200,"irq-reg-base");
                    if (piVar8 == NULL) {
                        uVar7 = 0xffffffed;
                        uVar17 = 0x80006a5;
                    }
                    else {
                        iVar3 = of_property_read_variable_u32_array(uVar19,"qcom,irq-mask",iVar6 + 0x38,1,0);
                        if (iVar3 < 0) {
                            uVar7 = 0xffffffed;
                            uVar17 = 0x8000733;
                        }
                        else {
                            iVar9 = devm_ioremap(iVar11,*piVar8,(piVar8[1] - *piVar8) + 1);
                            *(iVar6 + 0x28) = iVar9;
                            if (iVar9 != 0) goto code_r0x080016bc;
                            uVar7 = 0xfffffffb;
                            uVar17 = 0x80003bb;
                        }
                    }
                    _printk(uVar17,"qmp_parse_ipc");
                    goto code_r0x080017ec;
                }
                uVar7 = uVar10 & 0xffffffff;
                if (uVar10 != 0) goto code_r0x080017ec;
            }
            uStack_80 = uStack_80 & 0xffffffff00000000;
            uStack_6c = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-desc-offset",&uStack_70,1,0);
            if (iVar3 < 0) {
                pcVar12 = "mbox-desc-offset";
code_r0x08001b38:
                _printk(0x80004b0,"qmp_mbox_init",pcVar12);
            }
            else {
                iVar3 = of_property_read_variable_u32_array(puVar14,"priority",&uStack_74,1,0);
                if (iVar3 < 0) {
                    pcVar12 = "priority";
                    goto code_r0x08001b38;
                }
                puVar16 = devm_kmalloc(*piVar5,0x228,0xdc0);
                if (puVar16 == NULL) {
code_r0x080017e8:
                    uVar7 = 0xfffffff4;
                    goto code_r0x080017ec;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-offset",&uStack_80,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0x17) = uStack_80;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-size",&uStack_6c,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0xbc) = uStack_6c;
                }
                iVar6 = piVar5[4];
                puVar16[0x43] = piVar5;
                *(puVar16 + 0x13) = uStack_74;
                puVar16[0x15] = iVar6 + uStack_70;
                uVar2 = sym.get_mbox_num_chans(puVar14);
                iVar6 = *piVar5;
                *(puVar16 + 0x16) = 1 < uVar2;
                iVar6 = devm_kmalloc(iVar6,uVar2 * 0xf8,0xdc0);
                if (iVar6 == 0) goto code_r0x080017e8;
                if (0x80000000 < uVar2 + 0x7fffffff) {
                    uVar20 = uVar2 & 0xfffffffe;
                    puVar21 = iVar6 + 0x1e8;
                    uVar1 = uVar20;
                    do {
                        puVar21[-0x1f] = puVar16;
                        uVar1 = uVar1 - 2;
                        *puVar21 = puVar16;
                        puVar21 = puVar21 + 0x3e;
                        if (uVar1 == 0) goto joined_r0x08001850;
                    } while( true );
                }
                uVar20 = 0;
                do {
                    iVar9 = uVar20;
                    uVar20 = uVar20 + 1;
                    *(iVar6 + iVar9 * 0xf8 + 0xf0) = puVar16;
joined_r0x08001850:
                } while (uVar2 != uVar20);
                puVar16[2] = *piVar5;
                puVar16[3] = reloc.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                puVar16[4] = iVar6;
                *(puVar16 + 5) = uVar2;
                *(puVar16 + 0x2c) = 1;
                puVar16[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                uVar2 = mbox_controller_register(puVar16 + 2);
                if (uVar2 != 0) {
                    uVar17 = 0x80007c5;
                    pcVar12 = "qmp_mbox_init";
code_r0x08001d54:
                    uVar7 = uVar2;
                    _printk(uVar17,pcVar12,uVar7);
                    goto code_r0x080017ec;
                }
                *(puVar16 + 0x29) = 0;
                __mutex_init(puVar16 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x22) = 0;
                *(puVar16 + 0x2a) = 0;
                __init_swait_queue_head(puVar16 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x2e) = 0;
                __init_swait_queue_head(puVar16 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
                puVar16[0x32] = 0xfffffffe0;
                *(puVar16 + 0xb1) = 0;
                *(puVar16 + 0x9c) = 0;
                puVar16[0x33] = puVar16 + 0x33;
                puVar16[0x34] = puVar16 + 0x33;
                puVar16[0x35] = sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                init_timer_key(puVar16 + 0x38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                *(puVar16 + 0x44) = 0;
                piVar13 = piVar5 + 2;
                piVar8 = *piVar13;
                if (piVar8 != piVar13) {
                    do {
                        if (piVar8[0x13] <= *(puVar16 + 0x13)) {
                            piVar15 = piVar8 + 1;
                            puVar21 = *piVar15;
                            uVar7 = __list_add_valid(puVar16,puVar21,piVar8);
                            piVar13 = piVar8;
                            goto joined_r0x080019b0;
                        }
                        piVar8 = *piVar8;
                    } while (piVar8 != piVar13);
                }
                piVar15 = piVar5 + 3;
                puVar21 = *piVar15;
                uVar7 = __list_add_valid(puVar16,puVar21,piVar13);
joined_r0x080019b0:
                if ((uVar7 & 1) != 0) {
                    *piVar15 = puVar16;
                    *puVar16 = piVar13;
                    puVar16[1] = puVar21;
                    *puVar21 = puVar16;
                }
            }
            iVar6 = piVar5[1];
            *(param_1 + 0xa8) = piVar5;
            iVar6 = ipc_log_context_create(2,iVar6,0);
            piVar5[0x12] = iVar6;
            uVar2 = devm_request_threaded_irq
                              (iVar11,*(piVar5 + 0x3c),sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,
                               sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,1,*puVar14,piVar5);
            if (uVar2 < 0) {
                uVar7 = uVar2;
                sym.qmp_mbox_remove(param_1);
                iVar3 = ___ratelimit(obj.qmp_mbox_probe._rs,"qmp_mbox_probe");
                if (iVar3 != 0) {
                    iVar11 = sp_el0;
                    _printk("%s[%d]: %s: request threaded irq on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                            "qmp_mbox_probe",*(piVar5 + 0x3c),uVar7);
                }
                iVar11 = sp_el0;
                ipc_log_string(piVar5[0x12],"%s[%d]: %s: request threaded irq on %d failed: %d\n",0x8000903,
                               *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar5 + 0x3c),uVar7);
            }
            else {
                iVar3 = irq_set_irq_wake(*(piVar5 + 0x3c),1);
                if (iVar3 < 0) {
                    iVar4 = ___ratelimit(obj.qmp_mbox_probe._rs.7,"qmp_mbox_probe");
                    if (iVar4 != 0) {
                        iVar11 = sp_el0;
                        _printk("%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                                "qmp_mbox_probe",*(piVar5 + 0x3c),iVar3);
                    }
                    iVar11 = sp_el0;
                    ipc_log_string(piVar5[0x12],"%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x8000903,
                                   *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar5 + 0x3c),iVar3);
                }
                iVar11 = of_find_property(puVar14,"qcom,early-boot",0);
                if (iVar11 == 0) {
                    uVar7 = 0;
                }
                else {
                    for (piVar13 = piVar5[2]; piVar13 != piVar5 + 2; piVar13 = *piVar13) {
                        sym.__qmp_rx_worker(piVar13);
                    }
                    uVar7 = 0;
                    *(piVar5 + 0x13) = 1;
                }
            }
            goto code_r0x080017ec;
        }
        uVar17 = 0x80006d1;
code_r0x08001c90:
        pcVar12 = "qmp_edge_init";
    }
    else {
        uVar7 = qmp_get(iVar11);
        piVar5[0x11] = uVar7;
        if (0xfffffffffffff000 < uVar7) {
            uVar7 = uVar7 & 0xffffffff;
            goto code_r0x080017ec;
        }
        iVar6 = of_get_property(*(param_1 + 0x300),"label",0);
        piVar5[1] = iVar6;
        if (iVar6 != 0) {
            piVar13 = piVar5 + 2;
            piVar5[2] = piVar13;
            piVar8 = piVar5 + 3;
            *piVar8 = piVar13;
            *piVar5 = iVar11;
            puVar14 = devm_kmalloc(iVar11,0x228,0xdc0);
            if (puVar14 != NULL) {
                uVar2 = sym.get_mbox_num_chans(*(param_1 + 0x300));
                iVar11 = *piVar5;
                *(puVar14 + 0x16) = 1 < uVar2;
                iVar11 = devm_kmalloc(iVar11,uVar2 * 0xf8,0xdc0);
                if (iVar11 != 0) {
                    iVar6 = devm_kmalloc(*piVar5,uVar2 << 4,0xdc0);
                    puVar14[0x1a] = iVar6;
                    if (iVar6 != 0) {
                        iVar9 = *piVar5;
                        *(iVar11 + 0xf0) = puVar14;
                        iVar9 = devm_kmalloc(iVar9,0x1000,0xdc0);
                        *(iVar6 + 8) = iVar9;
                        if (iVar9 != 0) {
                            uVar20 = 1;
                            do {
                                if (uVar2 == uVar20) {
                                    puVar14[2] = *piVar5;
                                    puVar14[3] = reloc.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    puVar14[4] = iVar11;
                                    *(puVar14 + 5) = uVar2;
                                    *(puVar14 + 0x2c) = 1;
                                    puVar14[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    *(puVar14 + 0x29) = 0;
                                    __mutex_init(puVar14 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                                    *(puVar14 + 0x9c) = 0;
                                    puVar14[0x43] = piVar5;
                                    puVar14[0x1b] = 0xfffffffe0;
                                    puVar14[0x1c] = puVar14 + 0x1c;
                                    puVar14[0x1d] = puVar14 + 0x1c;
                                    puVar14[0x1e] = sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    uVar2 = mbox_controller_register(puVar14 + 2);
                                    if (uVar2 != 0) {
                                        uVar17 = 0x800035c;
                                        pcVar12 = "qmp_shim_init";
                                        goto code_r0x08001d54;
                                    }
                                    piVar15 = *piVar13;
                                    if (piVar15 == piVar13) goto code_r0x08001a6c;
                                    goto code_r0x08001a54;
                                }
                                iVar6 = *piVar5;
                                iVar18 = puVar14[0x1a];
                                *(iVar11 + uVar20 * 0xf8 + 0xf0) = puVar14;
                                iVar9 = devm_kmalloc(iVar6,0x1000,0xdc0);
                                iVar6 = uVar20;
                                uVar20 = uVar20 + 1;
                                uVar7 = 0xfffffff4;
                                *(iVar18 + iVar6 * 0x10 + 8) = iVar9;
                            } while (iVar9 != 0);
                            goto code_r0x080017ec;
                        }
                    }
                }
            }
            goto code_r0x080017e8;
        }
        uVar17 = 0x80006d1;
        pcVar12 = "qmp_shim_init";
    }
    _printk(uVar17,pcVar12);
    uVar7 = 0xffffffed;
code_r0x080017ec:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        iVar11 = __stack_chk_fail();
        *extraout_x18 = sym.qmp_mbox_remove;
        iVar11 = *(iVar11 + 0xa8);
        disable_irq(*(iVar11 + 0x3c));
        piVar13 = iVar11 + 0x10;
        for (piVar5 = *piVar13; piVar5 != piVar13; piVar5 = *piVar5) {
            mbox_controller_unregister(piVar5 + 2);
            kfree(piVar5[0x19]);
        }
        return 0;
    }
    return uVar7 & 0xffffffff;
    while (piVar15 = *piVar15, piVar15 != piVar13) {
code_r0x08001a54:
        if (piVar15[0x13] <= *(puVar14 + 0x13)) {
            piVar8 = piVar15 + 1;
            puVar16 = *piVar8;
            uVar7 = __list_add_valid(puVar14,puVar16,piVar15);
            piVar13 = piVar15;
            goto joined_r0x08001ac4;
        }
    }
code_r0x08001a6c:
    puVar16 = *piVar8;
    uVar7 = __list_add_valid(puVar14,puVar16,piVar13);
joined_r0x08001ac4:
    if ((uVar7 & 1) != 0) {
        *piVar8 = puVar14;
        *puVar14 = piVar13;
        puVar14[1] = puVar16;
        *puVar16 = puVar14;
    }
    qmp_register_rx_cb(piVar5[0x11],puVar14,sym.qmp_rx_callback.cfi_jt);
    iVar11 = ipc_log_context_create(2,piVar5[1],0);
    uVar7 = 0;
    piVar5[0x12] = iVar11;
    goto code_r0x080017ec;
}


// ===== sym.qmp_rx_callback @ 0x08001308 (size 196) =====

uint64_t sym.qmp_rx_callback(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong *puVar16;
    ulong uVar17;
    int64_t iVar18;
    ulong uVar19;
    uint32_t uVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint64_t uStack_c0;
    uint uStack_b4;
    uint32_t uStack_b0;
    uint uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    uStack_38 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar5 = _printk(0x8000851);
    }
    else {
        iVar11 = sp_el0;
        uStack_38 = arg3 & 0xffffffff;
        iStack_30 = arg1;
        ipc_log_string(*(*(arg2 + 0x218) + 0x90),"[%d]: %s: rx_buf = %s\n",*(iVar11 + 0x5d8),"qmp_rx_callback");
        uVar5 = mbox_chan_received_data(*(arg2 + 0x20) + *(arg2 + 0xb4) * 0xf8,&uStack_38);
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qmp_mbox_probe;
    pcStack_98 = sym.qmp_mbox_probe;
    iVar8 = sp_el0;
    iVar11 = iVar6 + 0x10;
    iStack_a8 = *(iVar8 + 0x5e0);
    puVar14 = *(iVar6 + 0x300);
    puStack_a0 = &stack0xffffffffffffffe0;
    piVar7 = devm_kmalloc(iVar11,0xa0,0xdc0);
    if (piVar7 == NULL) goto code_r0x080017e8;
    *(iVar6 + 0xa8) = piVar7;
    iVar8 = of_parse_phandle(puVar14,"qcom,qmp",0);
    if (iVar8 == 0) {
        uVar17 = *(iVar6 + 0x300);
        piVar13 = *(iVar6 + 0xa8);
        iVar8 = of_get_property(uVar17,"label",0);
        piVar13[1] = iVar8;
        if (iVar8 != 0) {
            piVar13[2] = piVar13 + 2;
            piVar13[3] = piVar13 + 2;
            *piVar13 = iVar11;
            piVar9 = platform_get_resource_byname(iVar6,0x200,"msgram");
            if (piVar9 == NULL) {
                uStack_ac = 0;
                uStack_c0 = 0;
                uVar2 = of_property_read_variable_u32_array(uVar17,"qcom,remote-pid",&uStack_ac,1,0);
                if (uVar2 < 0) {
                    uVar5 = uVar2;
                    _printk(0x8000426,uVar5);
                    goto code_r0x080017ec;
                }
                uVar5 = qcom_smem_get(uStack_ac,0x275,&uStack_c0);
                if ((uVar5 == 0) || (0xfffffffffffff000 < uVar5)) {
                    if (uVar5 != 0) goto code_r0x080017ec;
                }
                else {
                    piVar13[4] = uVar5;
                }
            }
            else {
                iVar8 = devm_ioremap(iVar11,*piVar9,(piVar9[1] - *piVar9) + 1);
                piVar13[4] = iVar8;
                if (iVar8 == 0) {
                    uVar5 = 0xfffffffb;
                    goto code_r0x080017ec;
                }
            }
            piVar13[9] = iVar11;
            *(piVar13 + 0xc) = 1;
            uVar10 = mbox_request_channel(piVar13 + 9,0);
            piVar13[0x10] = uVar10;
            if (uVar10 < 0xfffffffffffff001) {
code_r0x080016bc:
                iVar3 = irq_of_parse_and_map(uVar17,0);
                *(piVar13 + 0x3c) = iVar3;
                if (iVar3 == 0) {
                    uVar17 = 0x80003e9;
                    goto code_r0x08001c90;
                }
            }
            else {
                if (uVar10 == 0xffffffffffffffed) {
                    piVar13[0x10] = 0;
                    iVar8 = *(iVar6 + 0xa8);
                    uVar19 = *(iVar6 + 0x300);
                    piVar9 = platform_get_resource_byname(iVar6,0x200,"irq-reg-base");
                    if (piVar9 == NULL) {
                        uVar5 = 0xffffffed;
                        uVar17 = 0x80006a5;
                    }
                    else {
                        iVar3 = of_property_read_variable_u32_array(uVar19,"qcom,irq-mask",iVar8 + 0x38,1,0);
                        if (iVar3 < 0) {
                            uVar5 = 0xffffffed;
                            uVar17 = 0x8000733;
                        }
                        else {
                            iVar18 = devm_ioremap(iVar11,*piVar9,(piVar9[1] - *piVar9) + 1);
                            *(iVar8 + 0x28) = iVar18;
                            if (iVar18 != 0) goto code_r0x080016bc;
                            uVar5 = 0xfffffffb;
                            uVar17 = 0x80003bb;
                        }
                    }
                    _printk(uVar17,"qmp_parse_ipc");
                    goto code_r0x080017ec;
                }
                uVar5 = uVar10 & 0xffffffff;
                if (uVar10 != 0) goto code_r0x080017ec;
            }
            uStack_c0 = uStack_c0 & 0xffffffff00000000;
            uStack_ac = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-desc-offset",&uStack_b0,1,0);
            if (iVar3 < 0) {
                pcVar12 = "mbox-desc-offset";
code_r0x08001b38:
                _printk(0x80004b0,"qmp_mbox_init",pcVar12);
            }
            else {
                iVar3 = of_property_read_variable_u32_array(puVar14,"priority",&uStack_b4,1,0);
                if (iVar3 < 0) {
                    pcVar12 = "priority";
                    goto code_r0x08001b38;
                }
                puVar16 = devm_kmalloc(*piVar7,0x228,0xdc0);
                if (puVar16 == NULL) {
code_r0x080017e8:
                    uVar5 = 0xfffffff4;
                    goto code_r0x080017ec;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-offset",&uStack_c0,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0x17) = uStack_c0;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-size",&uStack_ac,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0xbc) = uStack_ac;
                }
                iVar8 = piVar7[4];
                puVar16[0x43] = piVar7;
                *(puVar16 + 0x13) = uStack_b4;
                puVar16[0x15] = iVar8 + uStack_b0;
                uVar2 = sym.get_mbox_num_chans(puVar14);
                iVar8 = *piVar7;
                *(puVar16 + 0x16) = 1 < uVar2;
                iVar8 = devm_kmalloc(iVar8,uVar2 * 0xf8,0xdc0);
                if (iVar8 == 0) goto code_r0x080017e8;
                if (0x80000000 < uVar2 + 0x7fffffff) {
                    uVar20 = uVar2 & 0xfffffffe;
                    puVar21 = iVar8 + 0x1e8;
                    uVar1 = uVar20;
                    do {
                        puVar21[-0x1f] = puVar16;
                        uVar1 = uVar1 - 2;
                        *puVar21 = puVar16;
                        puVar21 = puVar21 + 0x3e;
                        if (uVar1 == 0) goto joined_r0x08001850;
                    } while( true );
                }
                uVar20 = 0;
                do {
                    iVar18 = uVar20;
                    uVar20 = uVar20 + 1;
                    *(iVar8 + iVar18 * 0xf8 + 0xf0) = puVar16;
joined_r0x08001850:
                } while (uVar2 != uVar20);
                puVar16[2] = *piVar7;
                puVar16[3] = reloc.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                puVar16[4] = iVar8;
                *(puVar16 + 5) = uVar2;
                *(puVar16 + 0x2c) = 1;
                puVar16[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                uVar2 = mbox_controller_register(puVar16 + 2);
                if (uVar2 != 0) {
                    uVar17 = 0x80007c5;
                    pcVar12 = "qmp_mbox_init";
code_r0x08001d54:
                    uVar5 = uVar2;
                    _printk(uVar17,pcVar12,uVar5);
                    goto code_r0x080017ec;
                }
                *(puVar16 + 0x29) = 0;
                __mutex_init(puVar16 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x22) = 0;
                *(puVar16 + 0x2a) = 0;
                __init_swait_queue_head(puVar16 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x2e) = 0;
                __init_swait_queue_head(puVar16 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
                puVar16[0x32] = 0xfffffffe0;
                *(puVar16 + 0xb1) = 0;
                *(puVar16 + 0x9c) = 0;
                puVar16[0x33] = puVar16 + 0x33;
                puVar16[0x34] = puVar16 + 0x33;
                puVar16[0x35] = sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                init_timer_key(puVar16 + 0x38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                *(puVar16 + 0x44) = 0;
                piVar13 = piVar7 + 2;
                piVar9 = *piVar13;
                if (piVar9 != piVar13) {
                    do {
                        if (piVar9[0x13] <= *(puVar16 + 0x13)) {
                            piVar15 = piVar9 + 1;
                            puVar21 = *piVar15;
                            uVar5 = __list_add_valid(puVar16,puVar21,piVar9);
                            piVar13 = piVar9;
                            goto joined_r0x080019b0;
                        }
                        piVar9 = *piVar9;
                    } while (piVar9 != piVar13);
                }
                piVar15 = piVar7 + 3;
                puVar21 = *piVar15;
                uVar5 = __list_add_valid(puVar16,puVar21,piVar13);
joined_r0x080019b0:
                if ((uVar5 & 1) != 0) {
                    *piVar15 = puVar16;
                    *puVar16 = piVar13;
                    puVar16[1] = puVar21;
                    *puVar21 = puVar16;
                }
            }
            iVar8 = piVar7[1];
            *(iVar6 + 0xa8) = piVar7;
            iVar8 = ipc_log_context_create(2,iVar8,0);
            piVar7[0x12] = iVar8;
            uVar2 = devm_request_threaded_irq
                              (iVar11,*(piVar7 + 0x3c),sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,
                               sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,1,*puVar14,piVar7);
            if (uVar2 < 0) {
                uVar5 = uVar2;
                sym.qmp_mbox_remove(iVar6);
                iVar3 = ___ratelimit(obj.qmp_mbox_probe._rs,"qmp_mbox_probe");
                if (iVar3 != 0) {
                    iVar11 = sp_el0;
                    _printk("%s[%d]: %s: request threaded irq on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                            "qmp_mbox_probe",*(piVar7 + 0x3c),uVar5);
                }
                iVar11 = sp_el0;
                ipc_log_string(piVar7[0x12],"%s[%d]: %s: request threaded irq on %d failed: %d\n",0x8000903,
                               *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar7 + 0x3c),uVar5);
            }
            else {
                iVar3 = irq_set_irq_wake(*(piVar7 + 0x3c),1);
                if (iVar3 < 0) {
                    iVar4 = ___ratelimit(obj.qmp_mbox_probe._rs.7,"qmp_mbox_probe");
                    if (iVar4 != 0) {
                        iVar11 = sp_el0;
                        _printk("%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                                "qmp_mbox_probe",*(piVar7 + 0x3c),iVar3);
                    }
                    iVar11 = sp_el0;
                    ipc_log_string(piVar7[0x12],"%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x8000903,
                                   *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar7 + 0x3c),iVar3);
                }
                iVar11 = of_find_property(puVar14,"qcom,early-boot",0);
                if (iVar11 == 0) {
                    uVar5 = 0;
                }
                else {
                    for (piVar13 = piVar7[2]; piVar13 != piVar7 + 2; piVar13 = *piVar13) {
                        sym.__qmp_rx_worker(piVar13);
                    }
                    uVar5 = 0;
                    *(piVar7 + 0x13) = 1;
                }
            }
            goto code_r0x080017ec;
        }
        uVar17 = 0x80006d1;
code_r0x08001c90:
        pcVar12 = "qmp_edge_init";
    }
    else {
        uVar5 = qmp_get(iVar11);
        piVar7[0x11] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            uVar5 = uVar5 & 0xffffffff;
            goto code_r0x080017ec;
        }
        iVar8 = of_get_property(*(iVar6 + 0x300),"label",0);
        piVar7[1] = iVar8;
        if (iVar8 != 0) {
            piVar13 = piVar7 + 2;
            piVar7[2] = piVar13;
            piVar9 = piVar7 + 3;
            *piVar9 = piVar13;
            *piVar7 = iVar11;
            puVar14 = devm_kmalloc(iVar11,0x228,0xdc0);
            if (puVar14 != NULL) {
                uVar2 = sym.get_mbox_num_chans(*(iVar6 + 0x300));
                iVar11 = *piVar7;
                *(puVar14 + 0x16) = 1 < uVar2;
                iVar11 = devm_kmalloc(iVar11,uVar2 * 0xf8,0xdc0);
                if (iVar11 != 0) {
                    iVar8 = devm_kmalloc(*piVar7,uVar2 << 4,0xdc0);
                    puVar14[0x1a] = iVar8;
                    if (iVar8 != 0) {
                        iVar6 = *piVar7;
                        *(iVar11 + 0xf0) = puVar14;
                        iVar6 = devm_kmalloc(iVar6,0x1000,0xdc0);
                        *(iVar8 + 8) = iVar6;
                        if (iVar6 != 0) {
                            uVar20 = 1;
                            do {
                                if (uVar2 == uVar20) {
                                    puVar14[2] = *piVar7;
                                    puVar14[3] = reloc.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    puVar14[4] = iVar11;
                                    *(puVar14 + 5) = uVar2;
                                    *(puVar14 + 0x2c) = 1;
                                    puVar14[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    *(puVar14 + 0x29) = 0;
                                    __mutex_init(puVar14 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                                    *(puVar14 + 0x9c) = 0;
                                    puVar14[0x43] = piVar7;
                                    puVar14[0x1b] = 0xfffffffe0;
                                    puVar14[0x1c] = puVar14 + 0x1c;
                                    puVar14[0x1d] = puVar14 + 0x1c;
                                    puVar14[0x1e] = sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    uVar2 = mbox_controller_register(puVar14 + 2);
                                    if (uVar2 != 0) {
                                        uVar17 = 0x800035c;
                                        pcVar12 = "qmp_shim_init";
                                        goto code_r0x08001d54;
                                    }
                                    piVar15 = *piVar13;
                                    if (piVar15 == piVar13) goto code_r0x08001a6c;
                                    goto code_r0x08001a54;
                                }
                                iVar8 = *piVar7;
                                iVar18 = puVar14[0x1a];
                                *(iVar11 + uVar20 * 0xf8 + 0xf0) = puVar14;
                                iVar6 = devm_kmalloc(iVar8,0x1000,0xdc0);
                                iVar8 = uVar20;
                                uVar20 = uVar20 + 1;
                                uVar5 = 0xfffffff4;
                                *(iVar18 + iVar8 * 0x10 + 8) = iVar6;
                            } while (iVar6 != 0);
                            goto code_r0x080017ec;
                        }
                    }
                }
            }
            goto code_r0x080017e8;
        }
        uVar17 = 0x80006d1;
        pcVar12 = "qmp_shim_init";
    }
    _printk(uVar17,pcVar12);
    uVar5 = 0xffffffed;
code_r0x080017ec:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_a8) {
        iVar11 = __stack_chk_fail();
        *extraout_x18_00 = sym.qmp_mbox_remove;
        iVar11 = *(iVar11 + 0xa8);
        disable_irq(*(iVar11 + 0x3c));
        piVar13 = iVar11 + 0x10;
        for (piVar7 = *piVar13; piVar7 != piVar13; piVar7 = *piVar7) {
            mbox_controller_unregister(piVar7 + 2);
            kfree(piVar7[0x19]);
        }
        return 0;
    }
    return uVar5 & 0xffffffff;
    while (piVar15 = *piVar15, piVar15 != piVar13) {
code_r0x08001a54:
        if (piVar15[0x13] <= *(puVar14 + 0x13)) {
            piVar9 = piVar15 + 1;
            puVar16 = *piVar9;
            uVar5 = __list_add_valid(puVar14,puVar16,piVar15);
            piVar13 = piVar15;
            goto joined_r0x08001ac4;
        }
    }
code_r0x08001a6c:
    puVar16 = *piVar9;
    uVar5 = __list_add_valid(puVar14,puVar16,piVar13);
joined_r0x08001ac4:
    if ((uVar5 & 1) != 0) {
        *piVar9 = puVar14;
        *puVar14 = piVar13;
        puVar14[1] = puVar16;
        *puVar16 = puVar14;
    }
    qmp_register_rx_cb(piVar7[0x11],puVar14,sym.qmp_rx_callback.cfi_jt);
    iVar11 = ipc_log_context_create(2,piVar7[1],0);
    uVar5 = 0;
    piVar7[0x12] = iVar11;
    goto code_r0x080017ec;
}


// ===== sym.qmp_mbox_probe @ 0x080013cc (size 2504) =====

uint64_t sym.qmp_mbox_probe(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    ulong *puVar14;
    int64_t *piVar15;
    ulong *puVar16;
    ulong uVar17;
    int64_t iVar18;
    ulong uVar19;
    uint32_t uVar20;
    ulong *puVar21;
    ulong unaff_x30;
    uint64_t uStack_80;
    uint uStack_74;
    uint32_t uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar11 = arg1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    puVar14 = *(arg1 + 0x300);
    piVar5 = devm_kmalloc(iVar11,0xa0,0xdc0);
    if (piVar5 == NULL) goto code_r0x080017e8;
    *(arg1 + 0xa8) = piVar5;
    iVar6 = of_parse_phandle(puVar14,"qcom,qmp",0);
    if (iVar6 == 0) {
        uVar17 = *(arg1 + 0x300);
        piVar13 = *(arg1 + 0xa8);
        iVar6 = of_get_property(uVar17,"label",0);
        piVar13[1] = iVar6;
        if (iVar6 != 0) {
            piVar13[2] = piVar13 + 2;
            piVar13[3] = piVar13 + 2;
            *piVar13 = iVar11;
            piVar8 = platform_get_resource_byname(arg1,0x200,"msgram");
            if (piVar8 == NULL) {
                uStack_6c = 0;
                uStack_80 = 0;
                uVar2 = of_property_read_variable_u32_array(uVar17,"qcom,remote-pid",&uStack_6c,1,0);
                if (uVar2 < 0) {
                    uVar7 = uVar2;
                    _printk(0x8000426,uVar7);
                    goto code_r0x080017ec;
                }
                uVar7 = qcom_smem_get(uStack_6c,0x275,&uStack_80);
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    if (uVar7 != 0) goto code_r0x080017ec;
                }
                else {
                    piVar13[4] = uVar7;
                }
            }
            else {
                iVar6 = devm_ioremap(iVar11,*piVar8,(piVar8[1] - *piVar8) + 1);
                piVar13[4] = iVar6;
                if (iVar6 == 0) {
                    uVar7 = 0xfffffffb;
                    goto code_r0x080017ec;
                }
            }
            piVar13[9] = iVar11;
            *(piVar13 + 0xc) = 1;
            uVar10 = mbox_request_channel(piVar13 + 9,0);
            piVar13[0x10] = uVar10;
            if (uVar10 < 0xfffffffffffff001) {
code_r0x080016bc:
                iVar3 = irq_of_parse_and_map(uVar17,0);
                *(piVar13 + 0x3c) = iVar3;
                if (iVar3 == 0) {
                    uVar17 = 0x80003e9;
                    goto code_r0x08001c90;
                }
            }
            else {
                if (uVar10 == 0xffffffffffffffed) {
                    piVar13[0x10] = 0;
                    iVar6 = *(arg1 + 0xa8);
                    uVar19 = *(arg1 + 0x300);
                    piVar8 = platform_get_resource_byname(arg1,0x200,"irq-reg-base");
                    if (piVar8 == NULL) {
                        uVar7 = 0xffffffed;
                        uVar17 = 0x80006a5;
                    }
                    else {
                        iVar3 = of_property_read_variable_u32_array(uVar19,"qcom,irq-mask",iVar6 + 0x38,1,0);
                        if (iVar3 < 0) {
                            uVar7 = 0xffffffed;
                            uVar17 = 0x8000733;
                        }
                        else {
                            iVar9 = devm_ioremap(iVar11,*piVar8,(piVar8[1] - *piVar8) + 1);
                            *(iVar6 + 0x28) = iVar9;
                            if (iVar9 != 0) goto code_r0x080016bc;
                            uVar7 = 0xfffffffb;
                            uVar17 = 0x80003bb;
                        }
                    }
                    _printk(uVar17,"qmp_parse_ipc");
                    goto code_r0x080017ec;
                }
                uVar7 = uVar10 & 0xffffffff;
                if (uVar10 != 0) goto code_r0x080017ec;
            }
            uStack_80 = uStack_80 & 0xffffffff00000000;
            uStack_6c = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-desc-offset",&uStack_70,1,0);
            if (iVar3 < 0) {
                pcVar12 = "mbox-desc-offset";
code_r0x08001b38:
                _printk(0x80004b0,"qmp_mbox_init",pcVar12);
            }
            else {
                iVar3 = of_property_read_variable_u32_array(puVar14,"priority",&uStack_74,1,0);
                if (iVar3 < 0) {
                    pcVar12 = "priority";
                    goto code_r0x08001b38;
                }
                puVar16 = devm_kmalloc(*piVar5,0x228,0xdc0);
                if (puVar16 == NULL) {
code_r0x080017e8:
                    uVar7 = 0xfffffff4;
                    goto code_r0x080017ec;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-offset",&uStack_80,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0x17) = uStack_80;
                }
                iVar3 = of_property_read_variable_u32_array(puVar14,"mbox-size",&uStack_6c,1,0);
                if (-1 < iVar3) {
                    *(puVar16 + 0xbc) = uStack_6c;
                }
                iVar6 = piVar5[4];
                puVar16[0x43] = piVar5;
                *(puVar16 + 0x13) = uStack_74;
                puVar16[0x15] = iVar6 + uStack_70;
                uVar2 = sym.get_mbox_num_chans(puVar14);
                iVar6 = *piVar5;
                *(puVar16 + 0x16) = 1 < uVar2;
                iVar6 = devm_kmalloc(iVar6,uVar2 * 0xf8,0xdc0);
                if (iVar6 == 0) goto code_r0x080017e8;
                if (0x80000000 < uVar2 + 0x7fffffff) {
                    uVar20 = uVar2 & 0xfffffffe;
                    puVar21 = iVar6 + 0x1e8;
                    uVar1 = uVar20;
                    do {
                        puVar21[-0x1f] = puVar16;
                        uVar1 = uVar1 - 2;
                        *puVar21 = puVar16;
                        puVar21 = puVar21 + 0x3e;
                        if (uVar1 == 0) goto joined_r0x08001850;
                    } while( true );
                }
                uVar20 = 0;
                do {
                    iVar9 = uVar20;
                    uVar20 = uVar20 + 1;
                    *(iVar6 + iVar9 * 0xf8 + 0xf0) = puVar16;
joined_r0x08001850:
                } while (uVar2 != uVar20);
                puVar16[2] = *piVar5;
                puVar16[3] = reloc.qmp_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                puVar16[4] = iVar6;
                *(puVar16 + 5) = uVar2;
                *(puVar16 + 0x2c) = 1;
                puVar16[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                uVar2 = mbox_controller_register(puVar16 + 2);
                if (uVar2 != 0) {
                    uVar17 = 0x80007c5;
                    pcVar12 = "qmp_mbox_init";
code_r0x08001d54:
                    uVar7 = uVar2;
                    _printk(uVar17,pcVar12,uVar7);
                    goto code_r0x080017ec;
                }
                *(puVar16 + 0x29) = 0;
                __mutex_init(puVar16 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x22) = 0;
                *(puVar16 + 0x2a) = 0;
                __init_swait_queue_head(puVar16 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
                *(puVar16 + 0x2e) = 0;
                __init_swait_queue_head(puVar16 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
                puVar16[0x32] = 0xfffffffe0;
                *(puVar16 + 0xb1) = 0;
                *(puVar16 + 0x9c) = 0;
                puVar16[0x33] = puVar16 + 0x33;
                puVar16[0x34] = puVar16 + 0x33;
                puVar16[0x35] = sym.qmp_notify_timeout.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                init_timer_key(puVar16 + 0x38,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                *(puVar16 + 0x44) = 0;
                piVar13 = piVar5 + 2;
                piVar8 = *piVar13;
                if (piVar8 != piVar13) {
                    do {
                        if (piVar8[0x13] <= *(puVar16 + 0x13)) {
                            piVar15 = piVar8 + 1;
                            puVar21 = *piVar15;
                            uVar7 = __list_add_valid(puVar16,puVar21,piVar8);
                            piVar13 = piVar8;
                            goto joined_r0x080019b0;
                        }
                        piVar8 = *piVar8;
                    } while (piVar8 != piVar13);
                }
                piVar15 = piVar5 + 3;
                puVar21 = *piVar15;
                uVar7 = __list_add_valid(puVar16,puVar21,piVar13);
joined_r0x080019b0:
                if ((uVar7 & 1) != 0) {
                    *piVar15 = puVar16;
                    *puVar16 = piVar13;
                    puVar16[1] = puVar21;
                    *puVar21 = puVar16;
                }
            }
            iVar6 = piVar5[1];
            *(arg1 + 0xa8) = piVar5;
            iVar6 = ipc_log_context_create(2,iVar6,0);
            piVar5[0x12] = iVar6;
            uVar2 = devm_request_threaded_irq
                              (iVar11,*(piVar5 + 0x3c),sym.qmp_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,
                               sym.qmp_thread_irq_handler.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,1,*puVar14,piVar5);
            if (uVar2 < 0) {
                uVar7 = uVar2;
                sym.qmp_mbox_remove(arg1);
                iVar3 = ___ratelimit(obj.qmp_mbox_probe._rs,"qmp_mbox_probe");
                if (iVar3 != 0) {
                    iVar11 = sp_el0;
                    _printk("%s[%d]: %s: request threaded irq on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                            "qmp_mbox_probe",*(piVar5 + 0x3c),uVar7);
                }
                iVar11 = sp_el0;
                ipc_log_string(piVar5[0x12],"%s[%d]: %s: request threaded irq on %d failed: %d\n",0x8000903,
                               *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar5 + 0x3c),uVar7);
            }
            else {
                iVar3 = irq_set_irq_wake(*(piVar5 + 0x3c),1);
                if (iVar3 < 0) {
                    iVar4 = ___ratelimit(obj.qmp_mbox_probe._rs.7,"qmp_mbox_probe");
                    if (iVar4 != 0) {
                        iVar11 = sp_el0;
                        _printk("%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x80008a3,*(iVar11 + 0x5d8),
                                "qmp_mbox_probe",*(piVar5 + 0x3c),iVar3);
                    }
                    iVar11 = sp_el0;
                    ipc_log_string(piVar5[0x12],"%s[%d]: %s: enable_irq_wake on %d failed: %d\n",0x8000903,
                                   *(iVar11 + 0x5d8),"qmp_mbox_probe",*(piVar5 + 0x3c),iVar3);
                }
                iVar11 = of_find_property(puVar14,"qcom,early-boot",0);
                if (iVar11 == 0) {
                    uVar7 = 0;
                }
                else {
                    for (piVar13 = piVar5[2]; piVar13 != piVar5 + 2; piVar13 = *piVar13) {
                        sym.__qmp_rx_worker(piVar13);
                    }
                    uVar7 = 0;
                    *(piVar5 + 0x13) = 1;
                }
            }
            goto code_r0x080017ec;
        }
        uVar17 = 0x80006d1;
code_r0x08001c90:
        pcVar12 = "qmp_edge_init";
    }
    else {
        uVar7 = qmp_get(iVar11);
        piVar5[0x11] = uVar7;
        if (0xfffffffffffff000 < uVar7) {
            uVar7 = uVar7 & 0xffffffff;
            goto code_r0x080017ec;
        }
        iVar6 = of_get_property(*(arg1 + 0x300),"label",0);
        piVar5[1] = iVar6;
        if (iVar6 != 0) {
            piVar13 = piVar5 + 2;
            piVar5[2] = piVar13;
            piVar8 = piVar5 + 3;
            *piVar8 = piVar13;
            *piVar5 = iVar11;
            puVar14 = devm_kmalloc(iVar11,0x228,0xdc0);
            if (puVar14 != NULL) {
                uVar2 = sym.get_mbox_num_chans(*(arg1 + 0x300));
                iVar11 = *piVar5;
                *(puVar14 + 0x16) = 1 < uVar2;
                iVar11 = devm_kmalloc(iVar11,uVar2 * 0xf8,0xdc0);
                if (iVar11 != 0) {
                    iVar6 = devm_kmalloc(*piVar5,uVar2 << 4,0xdc0);
                    puVar14[0x1a] = iVar6;
                    if (iVar6 != 0) {
                        iVar9 = *piVar5;
                        *(iVar11 + 0xf0) = puVar14;
                        iVar9 = devm_kmalloc(iVar9,0x1000,0xdc0);
                        *(iVar6 + 8) = iVar9;
                        if (iVar9 != 0) {
                            uVar20 = 1;
                            do {
                                if (uVar2 == uVar20) {
                                    puVar14[2] = *piVar5;
                                    puVar14[3] = reloc.qmp_shim_send_data.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    puVar14[4] = iVar11;
                                    *(puVar14 + 5) = uVar2;
                                    *(puVar14 + 0x2c) = 1;
                                    puVar14[7] = sym.qmp_mbox_of_xlate.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    *(puVar14 + 0x29) = 0;
                                    __mutex_init(puVar14 + 0x23,"&mbox->state_lock",obj.qmp_mbox_init.__key);
                                    *(puVar14 + 0x9c) = 0;
                                    puVar14[0x43] = piVar5;
                                    puVar14[0x1b] = 0xfffffffe0;
                                    puVar14[0x1c] = puVar14 + 0x1c;
                                    puVar14[0x1d] = puVar14 + 0x1c;
                                    puVar14[0x1e] = sym.qmp_shim_worker.c8a7d85254d006100950f0b25ea9a35d.cfi_jt;
                                    uVar2 = mbox_controller_register(puVar14 + 2);
                                    if (uVar2 != 0) {
                                        uVar17 = 0x800035c;
                                        pcVar12 = "qmp_shim_init";
                                        goto code_r0x08001d54;
                                    }
                                    piVar15 = *piVar13;
                                    if (piVar15 == piVar13) goto code_r0x08001a6c;
                                    goto code_r0x08001a54;
                                }
                                iVar6 = *piVar5;
                                iVar18 = puVar14[0x1a];
                                *(iVar11 + uVar20 * 0xf8 + 0xf0) = puVar14;
                                iVar9 = devm_kmalloc(iVar6,0x1000,0xdc0);
                                iVar6 = uVar20;
                                uVar20 = uVar20 + 1;
                                uVar7 = 0xfffffff4;
                                *(iVar18 + iVar6 * 0x10 + 8) = iVar9;
                            } while (iVar9 != 0);
                            goto code_r0x080017ec;
                        }
                    }
                }
            }
            goto code_r0x080017e8;
        }
        uVar17 = 0x80006d1;
        pcVar12 = "qmp_shim_init";
    }
    _printk(uVar17,pcVar12);
    uVar7 = 0xffffffed;
code_r0x080017ec:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        iVar11 = __stack_chk_fail();
        *extraout_x18 = sym.qmp_mbox_remove;
        iVar11 = *(iVar11 + 0xa8);
        disable_irq(*(iVar11 + 0x3c));
        piVar13 = iVar11 + 0x10;
        for (piVar5 = *piVar13; piVar5 != piVar13; piVar5 = *piVar5) {
            mbox_controller_unregister(piVar5 + 2);
            kfree(piVar5[0x19]);
        }
        return 0;
    }
    return uVar7 & 0xffffffff;
    while (piVar15 = *piVar15, piVar15 != piVar13) {
code_r0x08001a54:
        if (piVar15[0x13] <= *(puVar14 + 0x13)) {
            piVar8 = piVar15 + 1;
            puVar16 = *piVar8;
            uVar7 = __list_add_valid(puVar14,puVar16,piVar15);
            piVar13 = piVar15;
            goto joined_r0x08001ac4;
        }
    }
code_r0x08001a6c:
    puVar16 = *piVar8;
    uVar7 = __list_add_valid(puVar14,puVar16,piVar13);
joined_r0x08001ac4:
    if ((uVar7 & 1) != 0) {
        *piVar8 = puVar14;
        *puVar14 = piVar13;
        puVar14[1] = puVar16;
        *puVar16 = puVar14;
    }
    qmp_register_rx_cb(piVar5[0x11],puVar14,sym.qmp_rx_callback.cfi_jt);
    iVar11 = ipc_log_context_create(2,piVar5[1],0);
    uVar7 = 0;
    piVar5[0x12] = iVar11;
    goto code_r0x080017ec;
}


// ===== sym.qmp_mbox_remove @ 0x08001d94 (size 96) =====

ulong sym.qmp_mbox_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    disable_irq(*(iVar1 + 0x3c));
    piVar2 = iVar1 + 0x10;
    for (piVar3 = *piVar2; piVar3 != piVar2; piVar3 = *piVar3) {
        mbox_controller_unregister(piVar3 + 2);
        kfree(piVar3[0x19]);
    }
    return 0;
}


// ===== sym.qmp_irq_handler @ 0x08001df4 (size 76) =====

ulong sym.qmp_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x30) != 0) {
        sym.writel_relaxed(*(arg1 + 0x38),*(arg1 + 0x30));
    }
    *(arg1 + 0x44) = *(arg1 + 0x44) + 1;
    return 2;
}


// ===== sym.qmp_thread_irq_handler @ 0x08001e40 (size 80) =====

ulong sym.qmp_thread_irq_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (arg1_00 = *(arg1 + 0x10); arg1_00 != arg1 + 0x10; arg1_00 = *arg1_00) {
        sym.__qmp_rx_worker(arg1_00);
    }
    return 1;
}


// ===== sym.__qmp_rx_worker @ 0x08001e90 (size 1988) =====

uint64_t sym.__qmp_rx_worker(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t unaff_x21;
    uint64_t unaff_x22;
    uint64_t unaff_x23;
    int64_t unaff_x24;
    int iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    int64_t aiStack_148 [11];
    uchar *puStack_f0;
    code *pcStack_e8;
    int64_t iStack_e0;
    int64_t iStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int aiStack_98 [2];
    uint64_t uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_58 = *(iVar12 + 0x5e0);
    iVar12 = *(arg1 + 0x218);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    aiStack_98[0] = 0;
    aiStack_98[1] = 0;
    uStack_90 = 0;
    uVar5 = __memcpy_fromio(&stack0xffffffffffffff68,*(arg1 + 0xa8),0x40);
    if (aiStack_98[0] == 0x4d41494c) {
        unaff_x19 = arg1 + 0x118;
        mutex_lock(unaff_x19);
        if (*(arg1 + 0x110) < 7) {
    //switch table (7 cases) at 0x8000340
            switch(*(*(arg1 + 0x110) * 4 + 0x8000340) + 0x8001f1c) {
            case 0x8001f30:
                *(arg1 + 0x108) = aiStack_98[1];
                *(arg1 + 0x10c) = uStack_90;
                sym.writel(uStack_90 >> 0x20,*(arg1 + 0xa8) + 0x10);
                if (uStack_68._4_4_ == 0) {
                    uVar1 = *(arg1 + 0xb8);
                    uVar2 = *(arg1 + 0xbc);
                }
                else {
                    *(arg1 + 0xb8) = uStack_60;
                    *(arg1 + 0xbc) = uStack_68._4_4_;
                    uVar2 = uStack_68._4_4_;
                    uVar1 = uStack_60;
                }
                unaff_x22 = uVar1;
                unaff_x21 = uVar2;
                iVar13 = *(arg1 + 0xa8);
                sym.writel(0xffff,iVar13 + 0x24);
                sym.writel(0xffff0000,iVar13 + 0x28);
                sym.writel(0xffff0000,iVar13 + 0x2c);
                unaff_x24 = iVar13 + 0x34;
                sym.writel(0xffff0000,iVar13 + 0x30);
                unaff_x23 = iVar13 + 0x38;
                sym.writel(unaff_x21,unaff_x24);
                sym.writel(unaff_x22,unaff_x23);
                *(arg1 + 0x110) = 1;
                iVar13 = __kmalloc(uStack_80._4_4_,0xdc0);
                *(arg1 + 200) = iVar13;
                if (iVar13 == 0) {
                    iVar3 = ___ratelimit(obj.__qmp_rx_worker._rs,"__qmp_rx_worker");
                    if (iVar3 != 0) {
                        iVar13 = sp_el0;
                        _printk("%s[%d]: %s: Failed to allocate rx pkt\n",0x80008a3,*(iVar13 + 0x5d8),
                                "__qmp_rx_worker");
                    }
                    uVar6 = *(iVar12 + 0x90);
                    iVar13 = sp_el0;
                    uVar10 = *(iVar13 + 0x5d8);
                    pcVar9 = "%s[%d]: %s: Failed to allocate rx pkt\n";
                    goto code_r0x08002350;
                }
                iVar13 = sp_el0;
                ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: Set to link negotiation\n",*(iVar13 + 0x5d8),
                               "__qmp_rx_worker");
                DataSynchronizationBarrier(3,2,0);
                if (*(iVar12 + 0x80) == 0) {
                    sym.writel_relaxed(*(iVar12 + 0x38),*(iVar12 + 0x28));
                }
                else {
                    mbox_send_message(*(iVar12 + 0x80),0);
                    mbox_client_txdone(*(iVar12 + 0x80),0);
                }
                *(iVar12 + 0x40) = *(iVar12 + 0x40) + 1;
                break;
            case 0x8001f94:
                if (uStack_88._4_4_ == uStack_80) {
                    iVar3 = ___ratelimit(obj.__qmp_rx_worker._rs.46,"__qmp_rx_worker");
                    if (iVar3 != 0) {
                        iVar13 = sp_el0;
                        _printk("%s[%d]: %s: RX int without ch open\n",0x80008a3,*(iVar13 + 0x5d8),"__qmp_rx_worker")
                        ;
                    }
                    uVar6 = *(iVar12 + 0x90);
                    iVar13 = sp_el0;
                    uVar10 = *(iVar13 + 0x5d8);
                    pcVar9 = "%s[%d]: %s: RX int without ch open\n";
                    goto code_r0x08002350;
                }
                sym.writel(uStack_88._4_4_,*(arg1 + 0xa8) + 0x18);
                DataSynchronizationBarrier(3,2,0);
                if (*(iVar12 + 0x80) == 0) {
                    sym.writel_relaxed(*(iVar12 + 0x38),*(iVar12 + 0x28));
                }
                else {
                    mbox_send_message(*(iVar12 + 0x80),0);
                    mbox_client_txdone(*(iVar12 + 0x80),0);
                }
                uVar6 = *(iVar12 + 0x90);
                pcVar9 = "[%d]: %s: Received remote ch open\n";
                *(iVar12 + 0x40) = *(iVar12 + 0x40) + 1;
                iVar13 = sp_el0;
                uVar10 = *(iVar13 + 0x5d8);
code_r0x08002464:
                ipc_log_string(uVar6,pcVar9,uVar10,"__qmp_rx_worker");
                break;
            case 0x8001fd4:
                if ((uStack_68 == 0xffff) && (uStack_70._4_4_ == 0xffff)) {
                    *(arg1 + 0x110) = 4;
                    iVar13 = sp_el0;
                    ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: Received local ch open ack\n",*(iVar13 + 0x5d8),
                                   "__qmp_rx_worker");
                }
                if (uStack_88._4_4_ != uStack_80) {
                    sym.writel(uStack_88._4_4_,*(arg1 + 0xa8) + 0x18);
                    DataSynchronizationBarrier(3,2,0);
                    if (*(iVar12 + 0x80) == 0) {
                        sym.writel_relaxed(*(iVar12 + 0x38),*(iVar12 + 0x28));
                    }
                    else {
                        mbox_send_message(*(iVar12 + 0x80),0);
                        mbox_client_txdone(*(iVar12 + 0x80),0);
                    }
                    *(iVar12 + 0x40) = *(iVar12 + 0x40) + 1;
                    iVar13 = sp_el0;
                    ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: Received remote channel open\n",*(iVar13 + 0x5d8),
                                   "__qmp_rx_worker");
                }
                if (((*(arg1 + 0x110) == 4) && (uStack_70._4_4_ == 0xffff)) && (uStack_88._4_4_ == 0xffff)) {
                    *(arg1 + 0x110) = 5;
                    complete_all(arg1 + 0x170);
                    uVar6 = *(iVar12 + 0x90);
                    iVar13 = sp_el0;
code_r0x08002458:
                    uVar10 = *(iVar13 + 0x5d8);
                    pcVar9 = "[%d]: %s: Set to channel connected\n";
                    goto code_r0x08002464;
                }
                break;
            case 0x8002058:
                if (uStack_88._4_4_ != uStack_80) {
                    sym.writel(uStack_88._4_4_,*(arg1 + 0xa8) + 0x18);
                    *(arg1 + 0x110) = 5;
                    DataSynchronizationBarrier(3,2,0);
                    if (*(iVar12 + 0x80) == 0) {
                        sym.writel_relaxed(*(iVar12 + 0x38),*(iVar12 + 0x28));
                    }
                    else {
                        mbox_send_message(*(iVar12 + 0x80),0);
                        mbox_client_txdone(*(iVar12 + 0x80),0);
                    }
                    *(iVar12 + 0x40) = *(iVar12 + 0x40) + 1;
                    complete_all(arg1 + 0x170);
                    uVar6 = *(iVar12 + 0x90);
                    iVar13 = sp_el0;
                    goto code_r0x08002458;
                }
                iVar3 = ___ratelimit(obj.__qmp_rx_worker._rs.52,"__qmp_rx_worker");
                if (iVar3 != 0) {
                    iVar13 = sp_el0;
                    _printk("%s[%d]: %s: RX int without remote ch open\n",0x80008a3,*(iVar13 + 0x5d8),
                            "__qmp_rx_worker");
                }
                uVar6 = *(iVar12 + 0x90);
                iVar13 = sp_el0;
                uVar10 = *(iVar13 + 0x5d8);
                pcVar9 = "%s[%d]: %s: RX int without remote ch open\n";
                goto code_r0x08002350;
            case 0x8002098:
                if ((uStack_70 != 0xffff) || (uStack_78._4_4_ != 0xffff)) {
                    iVar3 = ___ratelimit(obj.__qmp_rx_worker._rs.43,"__qmp_rx_worker");
                    if (iVar3 != 0) {
                        iVar13 = sp_el0;
                        _printk("%s[%d]: %s: RX int without negotiation ack\n",0x80008a3,*(iVar13 + 0x5d8),
                                "__qmp_rx_worker");
                    }
                    uVar6 = *(iVar12 + 0x90);
                    iVar13 = sp_el0;
                    uVar10 = *(iVar13 + 0x5d8);
                    pcVar9 = "%s[%d]: %s: RX int without negotiation ack\n";
                    goto code_r0x08002350;
                }
                *(arg1 + 0x110) = 2;
                complete_all(arg1 + 0x150);
                iVar13 = sp_el0;
                ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: Set to link connected\n",*(iVar13 + 0x5d8),
                               "__qmp_rx_worker");
                if (*(arg1 + 0x220) != '\0') {
                    sym.writel(0xffff,*(arg1 + 0xa8) + 0x2c);
                    *(arg1 + 0x110) = 3;
                    sym.send_irq(*(arg1 + 0x218));
                }
                break;
            case 0x8002114:
                if (uStack_88._4_4_ == 0xffff0000) {
                    sym.writel(0xffff0000,*(arg1 + 0xa8) + 0x18);
                    *(arg1 + 0x110) = 4;
                    iVar13 = sp_el0;
                    ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: REMOTE DISCONNECT\n",*(iVar13 + 0x5d8),
                                   "__qmp_rx_worker");
                    DataSynchronizationBarrier(3,2,0);
                    if (*(iVar12 + 0x80) == 0) {
                        sym.writel_relaxed(*(iVar12 + 0x38),*(iVar12 + 0x28));
                    }
                    else {
                        mbox_send_message(*(iVar12 + 0x80),0);
                        mbox_client_txdone(*(iVar12 + 0x80),0);
                    }
                    *(iVar12 + 0x40) = *(iVar12 + 0x40) + 1;
                }
                iVar3 = sym.readl(*(arg1 + 0xa8) + (uStack_78 & 0xffffffff));
                if ((iVar3 != 0) && (*(arg1 + 0xb0) == '\0')) {
                    sym.qmp_recv_data(arg1,uStack_78 & 0xffffffff);
                }
                unaff_x21 = arg1 + 0x148;
                unaff_x22 = _raw_spin_lock_irqsave(unaff_x21);
                if (*(arg1 + 0xb1) != '\0') {
                    unaff_x23 = *(arg1 + 0xb4);
                    iVar3 = sym.readl(*(arg1 + 0xa8) + *(arg1 + 0xb8));
                    if (iVar3 == 0) {
                        *(arg1 + 0xb1) = 0;
                        cancel_delayed_work(arg1 + 400);
                        iVar13 = sp_el0;
                        ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: TX flag cleared, idx%d\n",*(iVar13 + 0x5d8),
                                       "__qmp_rx_worker",unaff_x23);
                        _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
                        mbox_chan_txdone(*(arg1 + 0x20) + unaff_x23 * 0xf8,0);
                        unaff_x22 = _raw_spin_lock_irqsave(unaff_x21);
                    }
                }
                _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
                break;
            case 0x8002180:
                if ((uStack_68 == -0x10000) && (uStack_70._4_4_ == -0x10000)) {
                    *(arg1 + 0x110) = 2;
                    iVar13 = sp_el0;
                    ipc_log_string(*(iVar12 + 0x90),"[%d]: %s: Channel closed\n",*(iVar13 + 0x5d8),"__qmp_rx_worker")
                    ;
                    *(arg1 + 0x170) = 0;
                }
            }
        }
        else {
            iVar3 = ___ratelimit(obj.__qmp_rx_worker._rs.57,"__qmp_rx_worker");
            if (iVar3 != 0) {
                iVar13 = sp_el0;
                _printk("%s[%d]: %s: Local Channel State corrupted\n",0x80008a3,*(iVar13 + 0x5d8),"__qmp_rx_worker");
            }
            uVar6 = *(iVar12 + 0x90);
            iVar13 = sp_el0;
            uVar10 = *(iVar13 + 0x5d8);
            pcVar9 = "%s[%d]: %s: Local Channel State corrupted\n";
code_r0x08002350:
            ipc_log_string(uVar6,pcVar9,0x8000903,uVar10,"__qmp_rx_worker");
        }
        uVar5 = mutex_unlock(unaff_x19);
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.get_mbox_num_chans;
    pcStack_e8 = sym.get_mbox_num_chans;
    iVar13 = sp_el0;
    aiStack_148[10] = *(iVar13 + 0x5e0);
    aiStack_148[8] = 0;
    aiStack_148[9] = 0;
    aiStack_148[6] = 0;
    aiStack_148[7] = 0;
    aiStack_148[4] = 0;
    aiStack_148[5] = 0;
    aiStack_148[2] = 0;
    aiStack_148[3] = 0;
    aiStack_148[0] = 0;
    aiStack_148[1] = 0;
    puStack_f0 = &stack0xffffffffffffffb0;
    iStack_e0 = iVar12;
    iStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    uStack_c0 = unaff_x22;
    uStack_b8 = unaff_x21;
    iStack_b0 = arg1;
    iStack_a8 = unaff_x19;
    iVar12 = of_find_node_with_property(0,"mboxes");
    if (iVar12 != 0) {
        uVar5 = 0;
        do {
            uVar8 = of_device_is_available(iVar12);
            if (((uVar8 & 1) != 0) && (iVar3 = of_count_phandle_with_args(iVar12,"mboxes","#mbox-cells"), 0 < iVar3))
            {
                iVar11 = 0;
                do {
                    iVar4 = of_parse_phandle_with_args
                                      (iVar12,"mboxes","#mbox-cells",iVar11,&stack0xfffffffffffffeb8);
                    if ((iVar4 == 0) && (aiStack_148[0] == iVar7)) {
                        uVar5 = uVar5 + 1;
                        break;
                    }
                    iVar11 = iVar11 + 1;
                } while (iVar3 != iVar11);
            }
            iVar12 = of_find_node_with_property(iVar12,"mboxes");
        } while (iVar12 != 0);
        if (uVar5 != 0) goto code_r0x08002754;
    }
    uVar5 = 1;
code_r0x08002754:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == aiStack_148[10]) {
        return uVar5;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.qmp_mbox_of_xlate;
    if ((*(iVar12 + 0x8c) < *(iVar12 + 0x18)) && (*(iVar12 + 0x10) != 0)) {
        mutex_lock(iVar12 + 0x108);
        uVar5 = *(iVar12 + 0x10) + *(iVar12 + 0x8c) * 0xf8;
        *(iVar12 + 0x8c) = *(iVar12 + 0x8c) + 1;
        mutex_unlock(iVar12 + 0x108);
    }
    else {
        _printk(0x8000638,"qmp_mbox_of_xlate");
        uVar5 = 0xfffffffffffffff4;
    }
    return uVar5;
}


// ===== sym.get_mbox_num_chans @ 0x08002654 (size 320) =====

uint64_t sym.get_mbox_num_chans(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar5;
    int iVar6;
    ulong unaff_x30;
    int64_t aiStack_a8 [11];
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    aiStack_a8[10] = *(iVar3 + 0x5e0);
    aiStack_a8[8] = 0;
    aiStack_a8[9] = 0;
    aiStack_a8[6] = 0;
    aiStack_a8[7] = 0;
    aiStack_a8[4] = 0;
    aiStack_a8[5] = 0;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    iVar3 = of_find_node_with_property(0,"mboxes");
    if (iVar3 != 0) {
        uVar5 = 0;
        do {
            uVar4 = of_device_is_available(iVar3);
            if (((uVar4 & 1) != 0) && (iVar1 = of_count_phandle_with_args(iVar3,"mboxes","#mbox-cells"), 0 < iVar1))
            {
                iVar6 = 0;
                do {
                    iVar2 = of_parse_phandle_with_args(iVar3,"mboxes","#mbox-cells",iVar6,aiStack_a8);
                    if ((iVar2 == 0) && (aiStack_a8[0] == arg1)) {
                        uVar5 = uVar5 + 1;
                        break;
                    }
                    iVar6 = iVar6 + 1;
                } while (iVar1 != iVar6);
            }
            iVar3 = of_find_node_with_property(iVar3,"mboxes");
        } while (iVar3 != 0);
        if (uVar5 != 0) goto code_r0x08002754;
    }
    uVar5 = 1;
code_r0x08002754:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == aiStack_a8[10]) {
        return uVar5;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.qmp_mbox_of_xlate;
    if ((*(iVar3 + 0x8c) < *(iVar3 + 0x18)) && (*(iVar3 + 0x10) != 0)) {
        mutex_lock(iVar3 + 0x108);
        uVar5 = *(iVar3 + 0x10) + *(iVar3 + 0x8c) * 0xf8;
        *(iVar3 + 0x8c) = *(iVar3 + 0x8c) + 1;
        mutex_unlock(iVar3 + 0x108);
    }
    else {
        _printk(0x8000638,"qmp_mbox_of_xlate");
        uVar5 = 0xfffffffffffffff4;
    }
    return uVar5;
}


// ===== sym.qmp_mbox_of_xlate @ 0x08002794 (size 152) =====

int64_t sym.qmp_mbox_of_xlate(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x8c) < *(arg1 + 0x18)) && (*(arg1 + 0x10) != 0)) {
        mutex_lock(arg1 + 0x108);
        iVar1 = *(arg1 + 0x10) + *(arg1 + 0x8c) * 0xf8;
        *(arg1 + 0x8c) = *(arg1 + 0x8c) + 1;
        mutex_unlock(arg1 + 0x108);
    }
    else {
        _printk(0x8000638,"qmp_mbox_of_xlate");
        iVar1 = -0xc;
    }
    return iVar1;
}


// ===== sym.qmp_shim_worker @ 0x0800282c (size 336) =====

void sym.qmp_shim_worker(int64_t arg1)

{
    int64_t iVar1;
    uint *puVar2;
    int iVar3;
    int64_t iVar4;
    uint uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < *(arg1 + -0xb0)) {
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar7 = *(arg1 + 0x140);
        iVar1 = arg1 + 0x70;
        iVar4 = sp_el0;
        do {
            iVar8 = *(arg1 + -8);
            uVar6 = _raw_spin_lock_irqsave(iVar1);
            iVar3 = *(iVar8 + iVar9);
            _raw_spin_unlock_irqrestore(iVar1,uVar6);
            if (iVar3 != 0) {
                puVar2 = iVar8 + iVar9;
                *(arg1 + -0x24) = iVar11;
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Calling qmp_send msg:%s\n",*(iVar4 + 0x5d8),
                               "qmp_shim_worker",*(puVar2 + 2));
                uVar5 = qmp_send(*(*(arg1 + 0x140) + 0x88),*(puVar2 + 2),*puVar2);
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                *puVar2 = 0;
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Calling txdone rc:%d\n",*(iVar4 + 0x5d8),"qmp_shim_worker"
                               ,uVar5);
                mbox_chan_txdone(*(arg1 + -0xb8) + iVar10,uVar5);
                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: Exiting txdone\n",*(iVar4 + 0x5d8),"qmp_shim_worker");
            }
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0xf8;
            iVar9 = iVar9 + 0x10;
        } while (iVar11 < *(arg1 + -0xb0));
    }
    return;
}


// ===== sym.qmp_shim_send_data @ 0x0800297c (size 452) =====

ulong sym.qmp_shim_send_data(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if ((arg1 != 0) && (arg2 != 0)) {
        iVar8 = *(arg1 + 0xf0);
        if ((iVar8 == 0) || ((iVar7 = *(iVar8 + 0x218), iVar7 == 0 || (0x1000 < *arg2)))) {
            uVar6 = 0xffffffea;
        }
        else {
            uVar3 = _raw_spin_lock_irqsave(iVar8 + 0x148);
            iVar2 = *(iVar8 + 0x28);
            if (0 < iVar2) {
                iVar4 = 0;
                iVar5 = 0;
                do {
                    if (*(iVar8 + 0x20) + iVar5 * 0xf8 == arg1) {
                        uVar6 = 0xffffffea;
                        if ((-1 < iVar5) && (iVar5 < iVar2)) {
                            if (*(*(iVar8 + 0xd0) + iVar4) == 0) {
                                puVar1 = *(iVar8 + 0xd0) + iVar4;
                                *puVar1 = *arg2;
                                memcpy(*(puVar1 + 2),*(arg2 + 8),*arg2);
                                iVar4 = sp_el0;
                                ipc_log_string(*(iVar7 + 0x90),"[%d]: %s: scheduling worker to send msg:%s\n",
                                               *(iVar4 + 0x5d8),"qmp_shim_send_data",*(arg2 + 8));
                                queue_work_on(0x20,_delayed_work_timer_fn,iVar8 + 0xd8);
                                uVar6 = 0;
                            }
                            else {
                                iVar2 = ___ratelimit(obj.qmp_shim_send_data._rs,"qmp_shim_send_data");
                                if (iVar2 != 0) {
                                    iVar4 = sp_el0;
                                    _printk("%s[%d]: %s: dropping msg:%s\n",0x80008a3,*(iVar4 + 0x5d8),
                                            "qmp_shim_send_data",*(arg2 + 8));
                                }
                                iVar4 = sp_el0;
                                ipc_log_string(*(iVar7 + 0x90),"%s[%d]: %s: dropping msg:%s\n",0x8000903,
                                               *(iVar4 + 0x5d8),"qmp_shim_send_data",*(arg2 + 8));
                                uVar6 = 0xffffffea;
                            }
                        }
                        goto code_r0x08002a40;
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 0x10;
                } while (iVar2 != iVar5);
            }
            uVar6 = 0xffffffea;
code_r0x08002a40:
            _raw_spin_unlock_irqrestore(iVar8 + 0x148,uVar3);
        }
    }
    return uVar6;
}


// ===== sym.qmp_shim_startup @ 0x08002b40 (size 56) =====

uint sym.qmp_shim_startup(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    
    if ((*(arg1 + 0xf0) != 0) && (iVar2 = *(*(arg1 + 0xf0) + 0x218), iVar2 != 0)) {
        uVar1 = 0xfffffff5;
        if (*(iVar2 + 0x88) != 0) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 0xffffffea;
}


// ===== sym.qmp_shim_shutdown @ 0x08002b78 (size 12) =====

void sym.qmp_shim_shutdown(void)

{
    return;
}


// ===== sym.qmp_last_tx_done @ 0x08002b84 (size 56) =====

ulong sym.qmp_last_tx_done(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000560,"qmp_last_tx_done");
    return 1;
}


// ===== sym.qmp_notify_timeout @ 0x08002bbc (size 288) =====

void sym.qmp_notify_timeout(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -0x48;
    uVar1 = *(arg1 + -0xdc);
    iVar6 = *(arg1 + -0x170);
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    if (*(arg1 + -0xdf) == '\0') {
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
    }
    else {
        iVar3 = ___ratelimit(obj.qmp_notify_timeout._rs,"qmp_notify_timeout");
        if (iVar3 != 0) {
            iVar2 = sp_el0;
            _printk("%s[%d]: %s: tx timeout for %d\n",0x80008a3,*(iVar2 + 0x5d8),"qmp_notify_timeout",
                    *(arg1 + -0xdc));
        }
        iVar2 = sp_el0;
        ipc_log_string(*(*(arg1 + 0x88) + 0x90),"%s[%d]: %s: tx timeout for %d\n",0x8000903,*(iVar2 + 0x5d8),
                       "qmp_notify_timeout",*(arg1 + -0xdc));
        sym.writel(0,*(arg1 + -0xe8) + *(arg1 + -0xd8));
        *(arg1 + -0xdf) = 0;
        _raw_spin_unlock_irqrestore(iVar5,uVar4);
        mbox_chan_txdone(iVar6 + uVar1 * 0xf8,0xffffffc2);
    }
    return;
}


// ===== sym.qmp_send_data @ 0x08002cdc (size 576) =====

uint sym.qmp_send_data(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    uint uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t arg2_00;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return 0xffffffea;
    }
    iVar10 = *(arg1 + 0xf0);
    if (iVar10 == 0) {
        return 0xffffffea;
    }
    uVar5 = completion_done(iVar10 + 0x170);
    if ((uVar5 & 1) == 0) {
        return 0xffffffea;
    }
    iVar11 = *(iVar10 + 0x218);
    uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x148);
    if (*(iVar10 + 0xb1) != '\0') {
        uVar4 = 0xfffffff5;
        goto code_r0x08002ee4;
    }
    uVar1 = *arg2;
    if (*(iVar10 + 0xbc) < uVar1 + 4) {
        uVar4 = 0xffffffea;
        goto code_r0x08002ee4;
    }
    iVar8 = *(iVar10 + 0xa8) + *(iVar10 + 0xb8);
    if ((uVar1 & 3) != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002f1c);
        (*pcVar3)();
    }
    if (3 < uVar1) {
        uVar5 = uVar1 >> 2;
        puVar12 = *(arg2 + 8);
        arg2_00 = iVar8;
        do {
            arg2_00 = arg2_00 + 4;
            uVar5 = uVar5 - 1;
            sym.writel(*puVar12,arg2_00);
            puVar12 = puVar12 + 1;
        } while (uVar5 != 0);
    }
    sym.writel(*arg2,iVar8);
    uVar4 = sym.readl(iVar8);
    uVar1 = *(iVar10 + 0x28);
    uVar5 = uVar1;
    *(iVar10 + 0xb1) = 1;
    if (0 < uVar1) {
        if (uVar1 == 1) {
            uVar7 = 0;
        }
        else {
            uVar9 = 0;
            uVar7 = uVar5 & 0xfffffffe;
            iVar8 = *(iVar10 + 0x20);
            do {
                if ((iVar8 == arg1) || (iVar8 + 0xf8 == arg1)) {
                    *(iVar10 + 0xb4) = uVar9 | iVar8 + 0xf8 == arg1;
                }
                uVar9 = uVar9 + 2;
                iVar8 = iVar8 + 0x1f0;
            } while (uVar7 != uVar9);
            if (uVar7 == uVar5) goto code_r0x08002e3c;
        }
        iVar8 = *(iVar10 + 0x20) + uVar7 * 0xf8;
        do {
            if (iVar8 == arg1) {
                *(iVar10 + 0xb4) = uVar7;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 0xf8;
        } while (uVar5 != uVar7);
    }
code_r0x08002e3c:
    iVar8 = sp_el0;
    ipc_log_string(*(iVar11 + 0x90),"[%d]: %s: Copied buffer to msgram sz:%d i:%d\n",*(iVar8 + 0x5d8),"qmp_send_data"
                   ,uVar4,*(iVar10 + 0xb4));
    DataSynchronizationBarrier(3,2,0);
    if (*(iVar11 + 0x80) == 0) {
        sym.writel_relaxed(*(iVar11 + 0x38),*(iVar11 + 0x28));
    }
    else {
        mbox_send_message(*(iVar11 + 0x80),0);
        mbox_client_txdone(*(iVar11 + 0x80),0);
    }
    uVar2 = _delayed_work_timer_fn;
    *(iVar11 + 0x40) = *(iVar11 + 0x40) + 1;
    queue_delayed_work_on(0x20,uVar2,iVar10 + 400,0xfa);
    uVar4 = 0;
code_r0x08002ee4:
    _raw_spin_unlock_irqrestore(iVar10 + 0x148,uVar6);
    return uVar4;
}


// ===== sym.qmp_startup @ 0x08002f28 (size 232) =====

uint sym.qmp_startup(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xf0);
    if (iVar3 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        iVar1 = wait_for_completion_timeout(iVar3 + 0x150,0x4e2);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff5;
        }
        else {
            mutex_lock(iVar3 + 0x118);
            if (*(iVar3 + 0x110) == 2) {
                sym.writel(0xffff,*(iVar3 + 0xa8) + 0x2c);
                iVar1 = *(iVar3 + 0x218);
                *(iVar3 + 0x110) = 3;
                DataSynchronizationBarrier(3,2,0);
                if (*(iVar1 + 0x80) == 0) {
                    sym.writel_relaxed(*(iVar1 + 0x38),*(iVar1 + 0x28));
                }
                else {
                    mbox_send_message(*(iVar1 + 0x80),0);
                    mbox_client_txdone(*(iVar1 + 0x80),0);
                }
                *(iVar1 + 0x40) = *(iVar1 + 0x40) + 1;
            }
            mutex_unlock(iVar3 + 0x118);
            iVar3 = wait_for_completion_timeout(iVar3 + 0x170,0x4e2);
            uVar2 = 0xffffffc2;
            if (iVar3 != 0) {
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}


// ===== sym.qmp_shutdown @ 0x08003010 (size 244) =====

void sym.qmp_shutdown(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xf0);
    mutex_lock(iVar2 + 0x118);
    if (*(iVar2 + 0x110) < 3) {
        *(iVar2 + 0x9c) = *(iVar2 + 0x9c) + -1;
    }
    else if (*(iVar2 + 0x110) == 3) {
        *(iVar2 + 0x110) = 2;
        *(iVar2 + 0x9c) = *(iVar2 + 0x9c) + -1;
    }
    else {
        uVar1 = *(iVar2 + 0xa0) + 1;
        *(iVar2 + 0xa0) = uVar1;
        if (*(iVar2 + 0x9c) <= uVar1) {
            *(iVar2 + 0x110) = 6;
            sym.writel(0xffff0000,*(iVar2 + 0xa8) + 0x2c);
            iVar3 = *(iVar2 + 0x218);
            DataSynchronizationBarrier(3,2,0);
            if (*(iVar3 + 0x80) == 0) {
                sym.writel_relaxed(*(iVar3 + 0x38),*(iVar3 + 0x28));
            }
            else {
                mbox_send_message(*(iVar3 + 0x80),0);
                mbox_client_txdone(*(iVar3 + 0x80),0);
            }
            *(iVar3 + 0x40) = *(iVar3 + 0x40) + 1;
            *(iVar2 + 0x9c) = 0;
        }
    }
    mutex_unlock(iVar2 + 0x118);
    return;
}


// ===== sym.send_irq @ 0x08003104 (size 104) =====

void sym.send_irq(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    DataSynchronizationBarrier(3,2,0);
    if (*(arg1 + 0x80) == 0) {
        sym.writel_relaxed(*(arg1 + 0x38),*(arg1 + 0x28));
    }
    else {
        mbox_send_message(*(arg1 + 0x80),0);
        mbox_client_txdone(*(arg1 + 0x80),0);
    }
    *(arg1 + 0x40) = *(arg1 + 0x40) + 1;
    return;
}


// ===== sym.writel @ 0x0800316c (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003188);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80031b4);
    return;
}


// ===== sym.readl @ 0x080031e8 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80031ec);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8003230);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08003268 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8003284);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80032ac);
    return;
}


// ===== sym.qmp_recv_data @ 0x080032e0 (size 400) =====

void sym.qmp_recv_data(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint *puVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xa8) + (arg2 & 0xffffffffU);
    iVar2 = sym.readl(iVar5);
    uVar1 = iVar2 + 3U & 0xfffffffc;
    *(arg1 + 0xc0) = iVar2;
    if (*(arg1 + 0xbc) < uVar1) {
        iVar2 = ___ratelimit(obj.qmp_recv_data._rs,"qmp_recv_data");
        if (iVar2 != 0) {
            iVar4 = sp_el0;
            _printk("%s[%d]: %s: Invalid mailbox packet\n",0x80008a3,*(iVar4 + 0x5d8),"qmp_recv_data");
        }
        iVar4 = sp_el0;
        ipc_log_string(*(*(arg1 + 0x218) + 0x90),"%s[%d]: %s: Invalid mailbox packet\n",0x8000903,*(iVar4 + 0x5d8),
                       "qmp_recv_data");
    }
    else {
        if (uVar1 != 0) {
            uVar7 = iVar2 + 3U >> 2;
            puVar6 = *(arg1 + 200);
            iVar4 = iVar5;
            do {
                iVar4 = iVar4 + 4;
                uVar7 = uVar7 - 1;
                uVar3 = sym.readl(iVar4);
                *puVar6 = uVar3;
                puVar6 = puVar6 + 1;
            } while (uVar7 != 0);
        }
        mbox_chan_received_data(*(arg1 + 0x20) + *(arg1 + 0xb4) * 0xf8,arg1 + 0xc0);
    }
    sym.writel(0,iVar5);
    iVar5 = sp_el0;
    ipc_log_string(*(*(arg1 + 0x218) + 0x90),"[%d]: %s: recv sz:%d\n",*(iVar5 + 0x5d8),"qmp_recv_data",
                   *(arg1 + 0xc0));
    iVar5 = *(arg1 + 0x218);
    DataSynchronizationBarrier(3,2,0);
    if (*(iVar5 + 0x80) == 0) {
        sym.writel_relaxed(*(iVar5 + 0x38),*(iVar5 + 0x28));
    }
    else {
        mbox_send_message(*(iVar5 + 0x80),0);
        mbox_client_txdone(*(iVar5 + 0x80),0);
    }
    *(iVar5 + 0x40) = *(iVar5 + 0x40) + 1;
    return;
}


// ===== sym.qmp_mbox_freeze @ 0x08003470 (size 16) =====

ulong sym.qmp_mbox_freeze(int64_t arg1)

{
    return 0;
}


// ===== sym.qmp_mbox_restore @ 0x08003480 (size 200) =====

ulong sym.qmp_mbox_restore(int64_t arg1)

{
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t iVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    piVar2 = iVar1 + 0x10;
    for (arg1_00 = *piVar2; arg1_00 != piVar2; arg1_00 = *arg1_00) {
        *(arg1_00 + 0x22) = 0;
        *(arg1_00 + 0x2a) = 0;
        __init_swait_queue_head(arg1_00 + 0x2b,"&x->wait",obj.qmp_mbox_init.__key);
        *(arg1_00 + 0x2e) = 0;
        __init_swait_queue_head(arg1_00 + 0x2f,"&x->wait",obj.qmp_mbox_init.__key);
        *(arg1_00 + 0xb1) = 0;
        *(arg1_00 + 0x44) = 1;
        kfree(arg1_00[0x19]);
        arg1_00[0x19] = 0;
        if (*(iVar1 + 0x98) != '\0') {
            sym.__qmp_rx_worker(arg1_00);
        }
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08003548 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800358c

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
    //switch table (4 cases) at 0x8000a2a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80035a0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080035a4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080035d8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qmp_mbox_probe.c8a7d85254d006100950f0b25ea9a35d.cfi_jt);
    return;
}

