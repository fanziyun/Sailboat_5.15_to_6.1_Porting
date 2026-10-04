// decompiled from msm_geni_serial by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08004000 (size 1224) =====

//WARNING: Switch with 1 destination removed at 0x0800e5b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (0x1c2b0952efa24c79 < arg1) {
        if (arg1 < 0x345b8f49125c3eda) {
            if (arg1 < 0x1e3d0ffe3d0499e9) {
                if (arg1 == 0x1c2b0952efa24c7a) {
                    pcVar2 = sym.trace_event_reg.cfi_jt;
                }
                else if (arg1 == 0x1d30918f7dba8dbe) {
                    pcVar2 = sym.msm_geni_serial_startup.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                }
                else {
                    if (arg1 != 0x1de042d10251ac13) goto code_r0x0800e574;
                    pcVar2 = sym.msm_geni_serial_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                }
            }
            else {
                if (arg1 == 0x1e3d0ffe3d0499e9) {
                    pcVar2 = sym.xfer_mode_store.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                    goto code_r0x0800449c;
                }
                if (arg1 == 0x22dafa125a47585b) {
                    pcVar2 = sym.msm_geni_serial_set_termios.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                }
                else {
                    if (arg1 != 0x2eec8673b37c6729) goto code_r0x0800e574;
                    pcVar2 = sym.__traceiter_serial_info.cfi_jt;
                }
            }
        }
        else if (arg1 < 0x5d7e5e3785540c6e) {
            if (arg1 == 0x345b8f49125c3eda) {
                pcVar2 = sym.__bpf_trace_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                goto code_r0x0800442c;
            }
            if (arg1 != 0x3dd1a39e589289fe) {
                if (arg1 != 0x4c550309df1cf4c1) goto code_r0x0800e574;
                pcVar2 = sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                goto code_r0x0800449c;
            }
            pcVar2 = sym.trace_raw_output_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        }
        else if (arg1 < 0x751c7cba60b25fe1) {
            if (arg1 != 0x5d7e5e3785540c6e) {
                if (arg1 != 0x5f126d679599c911) goto code_r0x0800e574;
                pcVar2 = sym.msm_geni_cons_get_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                goto code_r0x0800442c;
            }
            pcVar2 = sym.msm_geni_uart_ev_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        }
        else if (arg1 == 0x751c7cba60b25fe1) {
            pcVar2 = sym.msm_geni_serial_get_type.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800e574;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080044b8:
        if (pcVar1 == pcVar2) {
            return;
        }
        goto code_r0x0800e574;
    }
    if (-0x3557318fb8d07b72 < arg1) {
        if (arg1 < -0x1ce30b19251dc38) {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.msm_geni_serial_remove.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            }
            else {
                if (arg1 != -0x240b32463195575a) {
                    if (arg1 != -0x218c0108fde83420) goto code_r0x0800e574;
                    pcVar2 = sym.trace_event_raw_init.cfi_jt;
                    goto code_r0x080044b8;
                }
                pcVar2 = sym.msm_geni_serial_set_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x907e34fa8aa958a) {
                if (arg1 == -0x1ce30b19251dc38) {
                    pcVar2 = sym.msm_geni_uart_tty_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                }
                else {
                    if (arg1 != 0x2b3a43e29242445) goto code_r0x0800e574;
                    pcVar2 = sym.init_module.cfi_jt;
                }
                goto code_r0x080044b8;
            }
            if (arg1 == 0x907e34fa8aa958a) {
                pcVar2 = sym.msm_geni_serial_cons_pm.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            }
            else {
                if (arg1 != 0x1c03dfb3fb040011) goto code_r0x0800e574;
                pcVar2 = sym.msm_geni_serial_config_port.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            }
        }
code_r0x0800449c:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
        goto code_r0x0800e574;
    }
    if (arg1 < -0x51322a85036b7b32) {
        if (arg1 == -0x66d421a09845f9f8) {
            pcVar2 = sym.loopback_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        }
        else {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.msm_geni_serial_sys_hib_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                goto code_r0x0800445c;
            }
            if (arg1 != -0x550b9e52359ac614) goto code_r0x0800e574;
            pcVar2 = sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        }
code_r0x0800442c:
        if (2 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) {
code_r0x0800e574:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x800e5c8);
            (*pcVar1)();
        }
    }
    else {
        if (arg1 != -0x51322a85036b7b32) {
            if (arg1 == -0x4ec8618249f489d5) {
                pcVar2 = sym.__typeid__ZTSFiP9uart_portjjjbE_global_addr;
            }
            else {
                if (arg1 != -0x3987c0e26ee29729) goto code_r0x0800e574;
                pcVar2 = sym.msm_geni_serial_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            }
            goto code_r0x0800449c;
        }
        pcVar2 = sym.msm_geni_serial_start_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
code_r0x0800445c:
        if (4 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x0800e574;
    }
    return;
}


// ===== sym.msm_geni_uart_tty_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080044d0 (size 8) =====

ulong sym.msm_geni_uart_tty_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                (int64_t param_1,ulong param_2,uint32_t param_3)

{
    int64_t arg1;
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x2c0) == 0) {
        _printk(0x8002187,"");
    }
    else {
        arg1 = *(*(param_1 + 0x2c0) + 0x1e0);
        if (arg1 != 0) {
            uVar1 = sym.msm_geni_serial_ioctl(arg1,param_3);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_geni_serial_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080044d8 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x0800695c

ulong sym.msm_geni_serial_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    ipc_log_string(*(param_1 + 0x380),"","",iVar1 + 0x7a8,param_2);
    sym.__ftrace_dbg(*(param_1 + 0x148),0x8002726,0x8001d82,iVar1 + 0x7a8);
    if ((*(param_1 + 0x520) == '\0') && (param_2 - 0x54ecU < 4)) {
        do {
    //WARNING: Do nothing block with infinite loop
        } while( true );
    }
    return 0xfffffdfd;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080044e0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080044e8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    puVar3 = 0x8000abc;
    do {
        *(puVar3 + -0x72) = 2;
        *puVar3 = iVar2;
        iVar2 = iVar2 + 1;
        *(puVar3 + -3) = obj.msm_geni_serial_pops;
        puVar3[-9] = 0x10000000;
        puVar3 = puVar3 + 0x14e;
    } while (iVar2 != 6);
    *0x8002a0c = 0;
    *0x8002a00 = reloc.msm_geni_serial_tx_empty.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
    *0x800299a = 2;
    *0x80029e8 = 0x10000000;
    iVar1 = uart_register_driver(obj.msm_geni_serial_hs_driver);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            uart_unregister_driver(obj.msm_geni_serial_hs_driver);
        }
    }
    return iVar1;
}


// ===== sym.msm_geni_serial_set_termios.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080044f0 (size 8) =====

void sym.msm_geni_serial_set_termios.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,int64_t param_2,ulong param_3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg4;
    ulong *in_x18;
    uint64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (iVar1 = sym.msm_geni_serial_power_on(param_1), iVar1 != 0)) {
        ipc_log_string(*(param_1 + 0x380),"","",iVar1);
    }
    else {
        if (*(param_1 + 0x4c8) != 0) {
            flush_workqueue();
        }
        if (*(param_1 + 0x4d0) != 0) {
            flush_workqueue();
        }
        *(param_1 + 0x4d8) = 0;
        sym.msm_geni_serial_stop_rx(param_1);
        if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
           (iVar3 = wait_for_completion_timeout(param_1 + 0x4d8,0x19), iVar3 == 0)) {
            ipc_log_string(*(param_1 + 0x380),"","");
        }
        arg4 = 300;
        uVar2 = uart_get_baud_rate(param_1,param_2,param_3,300,4000000);
        arg3 = uVar2;
        *(param_1 + 0x3a0) = uVar2;
        iVar1 = sym.msm_geni_serial_config_baud_rate(param_1,param_2,arg3);
        if (iVar1 == 0) {
            if ((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) {
                *(param_1 + 0x528) = param_2;
            }
            ipc_log_string(*(param_1 + 0x380),"","");
            arg4 = arg3;
        }
        sym.msm_geni_serial_start_rx(param_1);
        if ((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) {
            if (*(*(param_1 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(param_1 + 0x378),"","");
                sym.__ftrace_dbg(*(param_1 + 0x148),0x8000db8,0x800202b,arg4);
            }
            else {
                iVar3 = *(param_1 + 0x148);
                if ((*(iVar3 + 0x200) & 7) == 0) {
                    uVar4 = ktime_get_mono_fast_ns();
                    *(iVar3 + 0x218) = uVar4;
                    __pm_runtime_suspend(*(param_1 + 0x148),0xd);
                }
            }
        }
    }
    return;
}


// ===== sym.msm_geni_serial_cons_pm.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080044f8 (size 8) =====

void sym.msm_geni_serial_cons_pm.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 0) && (param_3 == 3)) {
        sym.msm_geni_serial_resources_on(param_1);
        ipc_log_string(*(param_1 + 0x380),"","",1,*(param_1 + 0x420));
        sym.__ftrace_dbg(*(param_1 + 0x148),0x8000fb4,0x80013af,1);
        *(*(param_1 + 0x10) + 0x48) = *(param_1 + 0x420);
        *(*(param_1 + 0x10) + 0x4c) = *(param_1 + 0x420);
        *(param_1 + 0x414) = 0;
    }
    else if ((param_2 == 3) && (param_3 == 0)) {
        *(param_1 + 0x414) = 1;
        ipc_log_string(*(param_1 + 0x380),"","",0,*(param_1 + 0x420));
        sym.__ftrace_dbg(*(param_1 + 0x148),0x8000fb4,0x80013af,0);
        *(*(param_1 + 0x10) + 0x48) = 1;
        *(*(param_1 + 0x10) + 0x4c) = 1;
        sym.msm_geni_serial_resources_off(param_1);
    }
    return;
}


// ===== sym.msm_geni_serial_hs_pm.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004500 (size 8) =====

void sym.msm_geni_serial_hs_pm.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(param_1 + 0x148) + 0x200) & 7) != 0) {
        iVar1 = 3;
        if (param_3 != 4) {
            iVar1 = param_3;
        }
        if ((param_2 == 0) && (iVar1 == 3)) {
            sym.msm_geni_serial_resources_on(param_1);
            ipc_log_string(*(param_1 + 0x380),"","",1,*(param_1 + 0x420));
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8000fb4,0x80013af,1);
            *(*(param_1 + 0x10) + 0x48) = *(param_1 + 0x420);
            *(*(param_1 + 0x10) + 0x4c) = *(param_1 + 0x420);
            *(param_1 + 0x414) = 0;
        }
        else if ((param_2 == 3) && (iVar1 == 0)) {
            *(param_1 + 0x414) = 1;
            ipc_log_string(*(param_1 + 0x380),"","",0,*(param_1 + 0x420));
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8000fb4,0x80013af,0);
            *(*(param_1 + 0x10) + 0x48) = 1;
            *(*(param_1 + 0x10) + 0x4c) = 1;
            sym.msm_geni_serial_resources_off(param_1);
        }
    }
    return;
}


// ===== sym.loopback_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004508 (size 8) =====

int64_t sym.loopback_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,4,0x8001da9,*(*(param_1 + 0x98) + 0x350));
    return iVar1;
}


// ===== sym.xfer_mode_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004510 (size 8) =====

int64_t sym.xfer_mode_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(param_1 + 0x98) + 0x208);
    if (iVar1 == 2) {
        pcVar3 = "";
        uVar2 = 8;
    }
    else {
        if (iVar1 != 1) {
            return 0;
        }
        pcVar3 = "";
        uVar2 = 6;
    }
    iVar1 = scnprintf(param_3,uVar2,pcVar3);
    return iVar1;
}


// ===== sym.ver_info_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004518 (size 8) =====

int64_t sym.ver_info_show.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    iVar1 = scnprintf(param_3,0x28,"",*(iVar2 + 0x3bc),*(iVar2 + 0x3bc),*(iVar2 + 0x3b0),*(iVar2 + 0x3b4),
                      *(iVar2 + 0x3b8));
    return iVar1;
}


// ===== sym.msm_geni_serial_get_type.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004520 (size 8) =====

ulong sym.msm_geni_serial_get_type.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(void)

{
    return 0x8001913;
}


// ===== sym.msm_geni_serial_startup.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004528 (size 8) =====

//WARNING: Type propagation algorithm not settling

uint32_t sym.msm_geni_serial_startup.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(param_1 + 0x380),"","",1);
    arg4 = 1;
    sym.__ftrace_dbg(*(param_1 + 0x148),0x8002045,0x80029b1,1);
    *(param_1 + 0x3c8) = 1;
    if ((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) {
        *(param_1 + 0x530) = 0;
        uVar2 = sym.msm_geni_serial_power_on(param_1);
        if (uVar2 != 0) {
            _dev_err(*(param_1 + 0x148),"","",uVar2);
            return uVar2;
        }
    }
    if (param_1 == 0) {
code_r0x08005d7c:
        cVar1 = *(param_1 + 0x218);
    }
    else {
        uVar3 = geni_se_get_qup_hw_version(param_1 + 0x288);
        uVar2 = 0xff0000;
        if (((uVar3 & 0xffe0000) < 0x90001 || uVar3 >> 0x1c != 3) && uVar3 >> 0x1e == 0) {
            uVar2 = 0x3f0000;
        }
        uVar2 = uVar2 & *(*(param_1 + 0x288) + 0xe24);
        *(param_1 + 0x1f0) = uVar2 >> 0x10;
        if (uVar2 == 0) {
            uVar4 = *(param_1 + 0x148);
            pcVar5 = "";
        }
        else {
            uVar2 = *(*(param_1 + 0x288) + 0xe24) >> 0x18 & 0x3f;
            *(param_1 + 500) = uVar2;
            if (uVar2 == 0) {
                uVar4 = *(param_1 + 0x148);
                pcVar5 = "";
            }
            else {
                uVar3 = geni_se_get_qup_hw_version(param_1 + 0x288);
                uVar2 = 0xff0000;
                if (((uVar3 & 0xffe0000) < 0x90001 || uVar3 >> 0x1c != 3) && uVar3 >> 0x1e == 0) {
                    uVar2 = 0x3f0000;
                }
                uVar2 = uVar2 & *(*(param_1 + 0x288) + 0xe28);
                *(param_1 + 0x1f8) = uVar2 >> 0x10;
                if (uVar2 != 0) {
                    *(param_1 + 0xb4) = *(param_1 + 500) * *(param_1 + 0x1f0) >> 3;
                    goto code_r0x08005d7c;
                }
                uVar4 = *(param_1 + 0x148);
                pcVar5 = "";
            }
        }
        _dev_err(uVar4,pcVar5,"");
        cVar1 = *(param_1 + 0x218);
    }
    if ((cVar1 == '\0') && (uVar2 = sym.msm_geni_serial_port_setup(param_1), uVar2 != 0)) {
        ipc_log_string(*(param_1 + 0x380),"","",uVar2);
        arg4 = uVar2;
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80019a5,0x80029b1,arg4);
        iVar6 = *(param_1 + 0x100);
    }
    else {
        DataSynchronizationBarrier(3,3,0);
        if (((*(param_1 + 0x100) != 0) && (*(param_1 + 300) == *(*(param_1 + 0x100) + 0x4a))) ||
           (*(param_1 + 0x520) != '\0')) {
            enable_irq(*(param_1 + 0xa0));
        }
        if ((*(param_1 + 0x354) < 1) || (uVar2 = irq_set_irq_wake(*(param_1 + 0x354),1), uVar2 == 0)) {
            if ((*(param_1 + 0x532) == '\0') ||
               ((iVar6 = *(*(param_1 + 200) + 0xa8), iVar6 == 0 || (*(**(iVar6 + 0x58) + 0x40) != 0)))) {
                uVar2 = 0;
                iVar6 = *(param_1 + 0x100);
            }
            else {
                ipc_log_string(*(param_1 + 0x380),"","");
                sym.__ftrace_dbg(*(param_1 + 0x148),0x8001e81,0x80029b1,arg4);
                uVar2 = 0;
                *(**(iVar6 + 0x58) + 0x40) = sym.msm_geni_uart_tty_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                iVar6 = *(param_1 + 0x100);
            }
        }
        else {
            arg4 = uVar2;
            _dev_err(*(param_1 + 0x148),"","");
            iVar6 = *(param_1 + 0x100);
        }
    }
    if ((iVar6 == 0) || (*(param_1 + 300) != *(iVar6 + 0x4a))) {
        if (*(*(param_1 + 0x148) + 0x1f8) == 0) {
            ipc_log_string(*(param_1 + 0x378),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8000db8,0x800202b,arg4);
        }
        else {
            iVar6 = *(param_1 + 0x148);
            if ((*(iVar6 + 0x200) & 7) == 0) {
                uVar4 = ktime_get_mono_fast_ns();
                *(iVar6 + 0x218) = uVar4;
                __pm_runtime_suspend(*(param_1 + 0x148),0xd);
            }
        }
    }
    *(param_1 + 0x3c8) = 0;
    ipc_log_string(*(param_1 + 0x380),"","",uVar2);
    sym.__ftrace_dbg(*(param_1 + 0x148),0x80029e3,0x80029b1,uVar2);
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP9uart_portjjjbE_global_addr @ 0x08004530 (size 8) =====

ulong sym.__typeid__ZTSFiP9uart_portjjjbE_global_addr(void)

{
    return 0xffffffff;
}


// ===== sym.handle_rx_hs.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004538 (size 8) =====

uint64_t sym.handle_rx_hs.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                   (int64_t param_1,int param_2,uint32_t param_3,int param_4,uint64_t param_5)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    uint *puVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    unkbyte7 Stack_128;
    uint uStack_121;
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uVar2 = *(param_1 + 500);
    uVar9 = *(param_1 + 200);
    if (param_4 == 0 || param_3 == 0) {
        param_3 = uVar2 >> 3;
    }
    if (param_2 != 0) {
        iVar5 = *(param_1 + 0x10);
        puVar6 = *(param_1 + 0x220);
        iVar7 = param_2;
        do {
            iVar7 = iVar7 + -1;
            *puVar6 = *(iVar5 + 0x780);
            puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
    }
    if ((param_5 & 1) == 0) {
        param_3 = param_3 + (uVar2 * (param_2 + -1) >> 3);
        uVar2 = tty_insert_flip_string_fixed_flag(uVar9,*(param_1 + 0x220),0,param_3);
        uVar8 = uVar2;
        if (uVar2 != param_3) {
            _dev_err(*(param_1 + 0x148),"","",uVar8,param_3);
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800cad4);
            (*pcVar1)();
        }
        *(param_1 + 0xe0) = *(param_1 + 0xe0) + uVar2;
        tty_flip_buffer_push(uVar9);
        uVar2 = param_3;
        if (0x1f < param_3) {
            uVar2 = 0x20;
        }
        uVar9 = *(param_1 + 0x370);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        hex_dump_to_buffer(*(param_1 + 0x220),uVar2,0x20,1,&uStack_88,0x40,0);
        scnprintf(&uStack_e8,0x60,"",0x80013e8,0,param_3,&uStack_88);
        ipc_log_string(uVar9,"","",&uStack_e8);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80015f4,0x80027b9,&uStack_e8);
    }
    else {
        uVar8 = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    auVar10 = __stack_chk_fail();
    iVar3 = auVar10._0_8_;
    *extraout_x18 = 0x800cadc;
    uStack_108 = 0x800cadc;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    uStack_130 = 0;
    Stack_128 = 0;
    uStack_121 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    iVar5 = (*(iVar3 + 0x148))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar3 + 0x148);
    }
    puStack_110 = &stack0xffffffffffffffc0;
    uStack_100 = uVar8;
    iStack_f8 = param_1;
    uVar8 = debugfs_create_dir(iVar5,0);
    *(iVar3 + 0x210) = uVar8;
    if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
        uVar8 = _dev_err(*(iVar3 + 0x148),"");
    }
    uStack_130 = 0;
    Stack_128 = 0;
    uStack_121 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    if ((auVar10._8_8_ & 1) == 0) {
        if (*(iVar3 + 0x370) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,0x80021c3);
            uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
            *(iVar3 + 0x370) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar3 + 0x368) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,0x800137d);
            uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
            *(iVar3 + 0x368) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar3 + 0x378) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,"");
            uVar8 = ipc_log_context_create(10,&uStack_140,0);
            *(iVar3 + 0x378) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar3 + 0x380) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,"");
            uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
            *(iVar3 + 0x380) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar3 + 0x398) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,"");
            uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
            *(iVar3 + 0x398) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar3 + 0x388) == 0) {
            iVar5 = (*(iVar3 + 0x148))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x148);
            }
            scnprintf(&uStack_140,0x23,"",iVar5,"");
            uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
            *(iVar3 + 0x388) = uVar8;
            if (uVar8 == 0) {
                pcVar4 = "";
                goto code_r0x0800ce58;
            }
        }
    }
    else if (*(iVar3 + 0x390) == 0) {
        iVar5 = (*(iVar3 + 0x148))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar3 + 0x148);
        }
        scnprintf(&uStack_140,0x23,"",iVar5,"");
        uVar8 = ipc_log_context_create(0x1e,&uStack_140,0);
        *(iVar3 + 0x390) = uVar8;
        if (uVar8 == 0) {
            pcVar4 = "";
code_r0x0800ce58:
            uVar8 = _dev_info(*(iVar3 + 0x148),pcVar4);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return uVar8;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_geni_serial_init_gsi;
    iVar5 = iVar3 + 0x288;
    uVar2 = geni_icc_enable(iVar5);
    if (uVar2 == 0) {
        uVar2 = geni_icc_set_bw(iVar5);
        if (uVar2 == 0) {
            *(iVar3 + 0x428) = *(*(iVar3 + 0x10) + 100) & 1;
            uVar2 = geni_icc_disable(iVar5);
            if (uVar2 == 0) {
                uVar8 = _dev_info(*(iVar3 + 0x148),"",*(iVar3 + 0x428));
                if (*(iVar3 + 0x428) == '\0') {
                    return uVar8;
                }
                uVar9 = devm_kmalloc(*(iVar3 + 0x148),0x2b0,0xdc0);
                *(iVar3 + 0x430) = uVar9;
                *(iVar3 + 0x208) = 3;
                iVar5 = (*(iVar3 + 0x148))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar3 + 0x148);
                }
                uVar9 = alloc_workqueue(0x800129a,0x10,1,iVar5);
                *(iVar3 + 0x4c8) = uVar9;
                iVar5 = (*(iVar3 + 0x148))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar3 + 0x148);
                }
                uVar8 = alloc_workqueue(0x800129a,0x10,1,iVar5);
                *(iVar3 + 0x4d0) = uVar8;
                *(iVar3 + 0x438) = 0xfffffffe0;
                *(iVar3 + 0x440) = iVar3 + 0x440;
                *(iVar3 + 0x448) = iVar3 + 0x440;
                *(iVar3 + 0x450) = sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar3 + 0x468) = 0xfffffffe0;
                *(iVar3 + 0x470) = iVar3 + 0x470;
                *(iVar3 + 0x478) = iVar3 + 0x470;
                *(iVar3 + 0x498) = 0xfffffffe0;
                *(iVar3 + 0x480) = sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar3 + 0x4a0) = iVar3 + 0x4a0;
                *(iVar3 + 0x4a8) = iVar3 + 0x4a0;
                *(iVar3 + 0x4b0) = sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                return uVar8;
            }
            uVar8 = uVar2;
            pcVar4 = "";
            ipc_log_string(*(iVar3 + 0x380),"","",uVar8);
            iVar5 = *(iVar3 + 0x148);
            goto code_r0x0800ceec;
        }
        uVar9 = *(iVar3 + 0x380);
        pcVar4 = "";
    }
    else {
        uVar9 = *(iVar3 + 0x380);
        pcVar4 = "";
    }
    uVar8 = uVar2;
    ipc_log_string(uVar9,pcVar4,"",uVar8);
    iVar5 = *(iVar3 + 0x148);
code_r0x0800ceec:
    uVar8 = sym.__ftrace_dbg(iVar5,pcVar4,0x8000ff1,uVar8);
    return uVar8;
}


// ===== sym.msm_geni_serial_set_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004540 (size 8) =====

void sym.msm_geni_serial_set_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0) {
        iVar2 = sp_el0;
        ipc_log_string(*(param_1 + 0x380),"","",iVar2 + 0x7a8,param_2);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x8001fae,0x8001123,iVar2 + 0x7a8);
        return;
    }
    uVar1 = 0x80000002;
    if ((param_2 & 4) != 0) {
        uVar1 = 0;
    }
    *(param_1 + 0x3ac) = (param_2 & 4) >> 2 ^ 1;
    *(*(param_1 + 0x10) + 0x2ac) = uVar1;
    DataSynchronizationBarrier(3,3,0);
    if (*(param_1 + 0x3ac) == '\0') {
        if ((*(param_1 + 0x418) != 0x15) || (*(param_1 + 0x3c9) != '\0')) goto code_r0x08005348;
        uVar3 = 0;
        *(param_1 + 0x418) = 0;
    }
    else {
        if (*(param_1 + 0x3c9) != '\0') goto code_r0x08005348;
        uVar3 = 0x15;
        *(param_1 + 0x418) = 0x15;
    }
    ipc_log_string(*(param_1 + 0x380),"","",uVar3);
    sym.__ftrace_dbg(*(param_1 + 0x148),0x80025cb,0x8002ae0,*(param_1 + 0x418));
code_r0x08005348:
    iVar2 = sp_el0;
    uVar3 = 0x8001fd6;
    if (*(param_1 + 0x3ac) != '\0') {
        uVar3 = 0x80019e5;
    }
    ipc_log_string(*(param_1 + 0x380),"","",iVar2 + 0x7a8,param_2,uVar1,uVar3);
    sym.__ftrace_dbg(*(param_1 + 0x148),0x80026c4,0x8001123,iVar2 + 0x7a8);
    return;
}


// ===== sym.msm_geni_cons_set_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004548 (size 8) =====

void sym.msm_geni_cons_set_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(void)

{
    return;
}


// ===== sym.xfer_mode_store.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004550 (size 8) =====

int64_t sym.xfer_mode_store.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    int iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        iVar4 = param_4;
        iVar1 = strnstr(param_3,"",4);
        if (iVar1 == 0) {
            iVar1 = strnstr(param_3,"",6);
            if (iVar1 == 0) {
                _dev_err(param_1,"","",param_3);
                return -0x16;
            }
            iVar3 = 2;
        }
        else {
            iVar3 = 1;
        }
        if (iVar3 != *(arg1 + 0x208)) {
            sym.msm_geni_serial_power_on(arg1);
            sym.msm_geni_serial_stop_tx(arg1);
            sym.msm_geni_serial_stop_rx(arg1);
            uVar2 = _raw_spin_lock_irqsave(arg1);
            *(arg1 + 0x208) = iVar3;
            geni_se_select_mode(arg1 + 0x288,iVar3);
            _raw_spin_unlock_irqrestore(arg1,uVar2);
            sym.msm_geni_serial_start_rx(arg1);
            if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(arg1 + 0x378),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,iVar4);
            }
            else {
                iVar4 = *(arg1 + 0x148);
                if ((*(iVar4 + 0x200) & 7) == 0) {
                    uVar2 = ktime_get_mono_fast_ns();
                    *(iVar4 + 0x218) = uVar2;
                    __pm_runtime_suspend(*(arg1 + 0x148),0xd);
                }
            }
        }
    }
    else {
        param_4 = -0x5f;
    }
    return param_4;
}


// ===== sym.loopback_store.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004558 (size 8) =====

ulong sym.loopback_store.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kstrtoint(param_3,0,*(param_1 + 0x98) + 0x350);
    if (iVar1 != 0) {
        _dev_err(param_1,"");
        param_4 = 0xffffffffffffffea;
    }
    return param_4;
}


// ===== sym.msm_geni_cons_get_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004560 (size 8) =====

ulong sym.msm_geni_cons_get_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(void)

{
    return 0x160;
}


// ===== sym.msm_geni_serial_get_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004568 (size 8) =====

uint32_t sym.msm_geni_serial_get_mctrl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0)) {
        iVar2 = sp_el0;
        ipc_log_string(*(param_1 + 0x380),"","",iVar2 + 0x7a8);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80019e9,0x800106f,iVar2 + 0x7a8);
        uVar4 = 0x160;
    }
    else {
        uVar1 = *(*(param_1 + 0x10) + 0x908);
        if ((uVar1 >> 1 & 1) == 0) {
            uVar3 = 0x160;
        }
        else {
            if (*(param_1 + 0x3c9) == '\0') {
                *(param_1 + 0x418) = 0x14;
                ipc_log_string(*(param_1 + 0x380),"","",0x14);
                sym.__ftrace_dbg(*(param_1 + 0x148),0x80025cb,0x8002ae0,*(param_1 + 0x418));
            }
            uVar3 = 0x140;
        }
        uVar4 = uVar3 | 4;
        if (*(param_1 + 0x3ac) != '\0') {
            uVar4 = uVar3;
        }
        ipc_log_string(*(param_1 + 0x380),"","",uVar1,uVar4);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80015d5,0x800106f,uVar1);
    }
    return uVar4;
}


// ===== sym.msm_geni_serial_tx_empty.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004570 (size 8) =====

bool sym.msm_geni_serial_tx_empty.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0)) {
        return true;
    }
    if (*(param_1 + 0x208) == 2) {
        uVar1 = *(param_1 + 0x2e8) != 0;
    }
    else {
        uVar1 = *(*(param_1 + 0x10) + 0x800);
    }
    return uVar1 == 0;
}


// ===== sym.__traceiter_serial_info.cfi_jt @ 0x08004578 (size 8) =====

ulong sym.__traceiter_serial_info.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800e728;
    piVar1 = *0x800e728;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__bpf_trace_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004580 (size 8) =====

void sym.__bpf_trace_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.trace_event_raw_event_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004588 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08004914)

void sym.trace_event_raw_event_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
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
        goto code_r0x080047e4;
    }
    pcVar2 = "";
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
            pcVar6 = SoftwareBreakpoint(0x800,0x800481c);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080047e4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_serial_info;
    pcStack_e8 = sym.perf_trace_serial_info;
    iVar9 = sp_el0;
    pcVar2 = "";
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8004824;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x80049c8);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80049d0;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004590 (size 8) =====

void sym.perf_trace_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,char *param_2,ulong *param_3)

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
    pcVar2 = "";
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
                pcVar7 = SoftwareBreakpoint(0x800,0x80049c8);
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
    *extraout_x18 = 0x80049d0;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08004598 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt);
    uart_unregister_driver(obj.msm_geni_serial_hs_driver);
    return;
}


// ===== sym.msm_geni_serial_sys_hib_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045a0 (size 8) =====

ulong sym.msm_geni_serial_sys_hib_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(void)

{
    return 0;
}


// ===== sym.msm_geni_serial_runtime_suspend.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045a8 (size 8) =====

int sym.msm_geni_serial_runtime_suspend.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t arg4;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 0x98);
    uVar1 = *(*(arg2 + 0x10) + 0x40);
    ipc_log_string(*(arg2 + 0x378),"","",uVar1);
    arg4 = uVar1;
    sym.__ftrace_dbg(param_1,0x8002562,0x80026a4,arg4);
    if ((*(arg2 + 0x358) != '\0') && (*(arg2 + 0x354) != 0)) {
        sym.msm_geni_serial_set_manual_flow(0,arg2);
    }
    if ((*(arg2 + 0x531) == '\0') && (uVar1 = sym.wait_for_transfers_inflight(arg2), uVar1 != 0)) {
        ipc_log_string(*(arg2 + 0x380),"","",uVar1);
        sym.__ftrace_dbg(param_1,0x8002580,0x80026a4,uVar1);
        if (*(arg2 + 0x358) == '\0') {
            return -0x10;
        }
        if (*(arg2 + 0x354) == 0) {
            return -0x10;
        }
        *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg2 + 0x10) + 0x2ac);
    }
    else {
        uVar1 = sym.stop_rx_sequencer(arg2);
        if (uVar1 == 0) {
            if ((*(*(arg2 + 0x10) + 0x40) & 1) != 0) {
                sym.stop_tx_sequencer(arg2);
            }
            disable_irq(*(arg2 + 0xa0));
            if (((*(arg2 + 0x358) != '\0') && (*(arg2 + 0x354) != 0)) && (*(arg2 + 0x531) == '\0')) {
                *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*(arg2 + 0x10) + 0x2ac);
                ipc_log_string(*(arg2 + 0x380),"","",uVar1);
                arg4 = uVar1;
                sym.__ftrace_dbg(*(arg2 + 0x148),0x8002b00,0x8001614,arg4);
                sym.msm_geni_serial_set_manual_flow(1,arg2);
            }
            uVar1 = 0;
            while (*(arg2 + 0x51c) != 0) {
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                uVar1 = uVar1 + 1;
                if (uVar1 == 0xb) {
                    ipc_log_string(*(arg2 + 0x378),"","");
                    sym.__ftrace_dbg(param_1,0x8002776,0x80026a4,arg4);
                    enable_irq(*(arg2 + 0xa0));
                    return -0x10;
                }
            }
            if (uVar1 != 0) {
                ipc_log_string(*(arg2 + 0x378),"","",uVar1);
                sym.__ftrace_dbg(param_1,0x80016f6,0x80026a4,uVar1);
            }
            ipc_log_string(*(arg2 + 0x380),"","",0,*(arg2 + 0x420));
            sym.__ftrace_dbg(*(arg2 + 0x148),0x8000fb4,0x80013af,0);
            *(*(arg2 + 0x10) + 0x48) = 1;
            *(*(arg2 + 0x10) + 0x4c) = 1;
            iVar2 = sym.msm_geni_serial_resources_off(arg2);
            if (iVar2 != 0) {
                _dev_err(param_1,"","",iVar2);
                sym.msm_geni_update_uart_error_code(arg2,6);
                return iVar2;
            }
            if ((0 < *(arg2 + 0x354)) && (*(*(arg2 + 200) + 0xa8) != 0)) {
                *(arg2 + 0x3a8) = 0;
                enable_irq();
                *(arg2 + 0x3cf) = 1;
            }
            ipc_log_string(*(arg2 + 0x378),"","",0);
            sym.__ftrace_dbg(param_1,0x8002708,0x80026a4,0);
            __pm_relax(*(arg2 + 0x360));
            return 0;
        }
        ipc_log_string(*(arg2 + 0x378),"","",uVar1);
        sym.__ftrace_dbg(param_1,0x8001175,0x80026a4,uVar1);
        if (*(arg2 + 0x358) == '\0') {
            return -0x10;
        }
        if (*(arg2 + 0x354) == 0) {
            return -0x10;
        }
        *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg2 + 0x10) + 0x2ac);
    }
    ipc_log_string(*(arg2 + 0x380),"","",uVar1);
    sym.__ftrace_dbg(*(arg2 + 0x148),0x8002b00,0x8001614,uVar1);
    sym.msm_geni_serial_set_manual_flow(1,arg2);
    return -0x10;
}


// ===== sym.msm_geni_serial_runtime_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045b0 (size 8) =====

int sym.msm_geni_serial_runtime_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t arg4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    ipc_log_string(*(arg1 + 0x378),"","",1);
    iVar6 = 1;
    sym.__ftrace_dbg(param_1,0x8002045,0x800261a,1);
    __pm_relax(*(arg1 + 0x360));
    __pm_stay_awake(*(arg1 + 0x360));
    if ((0 < *(arg1 + 0x354)) && (*(arg1 + 0x3cf) != '\0')) {
        disable_irq();
        *(arg1 + 0x3cf) = 0;
    }
    ipc_log_string(*(arg1 + 0x378),"","");
    sym.__ftrace_dbg(param_1,0x8002053,0x800261a,iVar6);
    iVar1 = sym.msm_geni_serial_resources_on(arg1);
    if (iVar1 == 0) {
        ipc_log_string(*(arg1 + 0x380),"","",1,*(arg1 + 0x420));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,1);
        *(*(arg1 + 0x10) + 0x48) = *(arg1 + 0x420);
        *(*(arg1 + 0x10) + 0x4c) = *(arg1 + 0x420);
        if (*(arg1 + 0x530) != '\0') {
            sym.msm_geni_serial_port_setup(arg1);
        }
        if (*(arg1 + 0x531) == '\0') {
            sym.start_rx_sequencer(arg1);
        }
        DataSynchronizationBarrier(3,3,0);
        enable_irq(*(arg1 + 0xa0));
        ipc_log_string(*(arg1 + 0x378),"","",0);
        sym.__ftrace_dbg(param_1,0x8002708,0x800261a,0);
        if (*(arg1 + 0x530) != '\0') {
            iVar6 = *(arg1 + 0x528);
            if (iVar6 != 0) {
                ipc_log_string(*(arg1 + 0x380),"","",1);
                arg4 = 1;
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001719,0x80014bd,1);
                if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
                   (uVar2 = sym.msm_geni_serial_power_on(arg1), uVar2 != 0)) {
                    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002bf0,0x80014bd,uVar2);
                }
                else {
                    if (*(arg1 + 0x4c8) != 0) {
                        flush_workqueue();
                    }
                    if (*(arg1 + 0x4d0) != 0) {
                        flush_workqueue();
                    }
                    *(arg1 + 0x4d8) = 0;
                    sym.msm_geni_serial_stop_rx(arg1);
                    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
                       (iVar4 = wait_for_completion_timeout(arg1 + 0x4d8,0x19), iVar4 == 0)) {
                        ipc_log_string(*(arg1 + 0x380),"","");
                    }
                    iVar3 = sym.msm_geni_serial_config_baud_rate(arg1,iVar6,*(arg1 + 0x3a0));
                    if (iVar3 == 0) {
                        arg4 = *(arg1 + 0x3a0);
                        ipc_log_string(*(arg1 + 0x380),"","");
                    }
                    sym.msm_geni_serial_start_rx(arg1);
                    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
                        if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
                            ipc_log_string(*(arg1 + 0x378),"","");
                            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,arg4);
                        }
                        else {
                            iVar6 = *(arg1 + 0x148);
                            if ((*(iVar6 + 0x200) & 7) == 0) {
                                uVar5 = ktime_get_mono_fast_ns();
                                *(iVar6 + 0x218) = uVar5;
                                __pm_runtime_suspend(*(arg1 + 0x148),0xd);
                            }
                        }
                    }
                }
            }
            *(arg1 + 0x530) = 0;
        }
    }
    else {
        _dev_err(param_1,"","",iVar1);
        if (*(arg1 + 0x3c9) == '\0') {
            *(arg1 + 0x418) = 5;
            ipc_log_string(*(arg1 + 0x380),"","",5);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
        }
        __pm_relax(*(arg1 + 0x360));
    }
    return iVar1;
}


// ===== sym.msm_geni_serial_sys_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045b8 (size 8) =====

ulong sym.msm_geni_serial_sys_resume.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if ((*(iVar1 + 0x3c9) == '\0') &&
       ((((*(iVar1 + 0x100) != 0 && (*(iVar1 + 300) == *(*(iVar1 + 0x100) + 0x4a) && console_suspend_enabled != 0x0)) &&
         (*(iVar1 + 0x15f) != '\0')) || (*(iVar1 + 0x520) != '\0')))) {
        ipc_log_string(*(iVar1 + 0x390),"","",1);
        uart_resume_port(*(iVar1 + 0x1d0),iVar1);
        ipc_log_string(*(iVar1 + 0x390),"","",1);
    }
    return 0;
}


// ===== sym.msm_geni_serial_sys_suspend.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045c0 (size 8) =====

ulong sym.msm_geni_serial_sys_suspend.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(iVar2 + 0x3c9) == '\0') {
        if (((*(iVar2 + 0x100) == 0) || (*(iVar2 + 300) != *(*(iVar2 + 0x100) + 0x4a))) && (*(iVar2 + 0x520) == '\0')) {
            iVar1 = *(iVar2 + 200) + 0x120;
            mutex_lock(iVar1);
            if (*(param_1 + 0x20c) != 2) {
                _dev_err(param_1,"","",*(iVar2 + 0x3a4));
                ipc_log_string(*(iVar2 + 0x378),"","",*(iVar2 + 0x3a4));
                sym.__ftrace_dbg(param_1,0x8001047,0x800157f,*(iVar2 + 0x3a4));
                mutex_unlock(iVar1);
                return 0xfffffff0;
            }
            ipc_log_string(*(iVar2 + 0x378),"","",1);
            sym.__ftrace_dbg(param_1,0x800276b,0x800157f,1);
            mutex_unlock(iVar1);
        }
        else {
            ipc_log_string(*(iVar2 + 0x390),"","",1);
            uart_suspend_port(*(iVar2 + 0x1d0),iVar2);
            ipc_log_string(*(iVar2 + 0x390),"","",1);
        }
    }
    return 0;
}


// ===== sym.msm_geni_uart_ev_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045c8 (size 8) =====

void sym.msm_geni_uart_ev_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (ulong param_1,int *param_2,int64_t param_3,uint64_t param_4)

{
    code *pcVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 2);
    ipc_log_string(*(param_3 + 0x380),"","");
    sym.__ftrace_dbg(*(param_3 + 0x148),0x8001afb,0x8002bdc,param_4);
    if (*param_2 == 0) {
        if ((uVar2 >> 2 & 1) != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800b310);
            (*pcVar1)();
        }
    }
    else {
        ipc_log_string(*(param_3 + 0x380),"",param_2[10],uVar2 & 0xffffffff);
        param_4 = uVar2 & 0xffffffff;
        sym.__ftrace_dbg(*(param_3 + 0x148),0x8001c0b,param_2[10],param_4);
    }
    ipc_log_string(*(param_3 + 0x380),"","");
    sym.__ftrace_dbg(*(param_3 + 0x148),0x8001839,0x8002bdc,param_4);
    return;
}


// ===== sym.msm_geni_serial_remove.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045d0 (size 8) =====

ulong sym.msm_geni_serial_remove.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (*(iVar1 + 0x3c9) == '\0') {
        uVar2 = *(iVar1 + 0x1d0);
        if ((*(iVar1 + 0x100) == 0) || (*(iVar1 + 300) != *(*(iVar1 + 0x100) + 0x4a))) {
            wakeup_source_unregister(*(iVar1 + 0x360));
            *(iVar1 + 0x360) = 0;
        }
        if (*(iVar1 + 0x520) != '\0') {
            pm_runtime_allow(param_1 + 0x10);
        }
        uart_remove_one_port(uVar2,iVar1);
        if (*(iVar1 + 0x428) != '\0') {
            destroy_workqueue(*(iVar1 + 0x4c8));
            destroy_workqueue(*(iVar1 + 0x4d0));
        }
        if (*(iVar1 + 0x328) != 0) {
            if (((iVar1 + 0x328 != NULL) && (*(iVar1 + 0x230) != 0)) && (*(iVar1 + 0x2f8) != 0)) {
                dma_free_attrs(*(iVar1 + 0x230),0x800,*(iVar1 + 0x2f8),*(iVar1 + 0x328),0);
            }
            *(iVar1 + 0x328) = 0;
        }
    }
    return 0;
}


// ===== sym.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045d8 (size 8) =====

uint64_t sym.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    int64_t *arg1;
    code cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg1_00;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint32_t uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    arg1 = param_1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    iVar6 = of_match_device(obj.msm_geni_device_tbl,arg1);
    if (iVar6 == 0) {
        _dev_err(arg1,"","");
        uVar13 = 0xffffffed;
        goto code_r0x0800bc1c;
    }
    iVar7 = *(param_1 + 0x300);
    iVar6 = *(iVar6 + 0xc0);
    if (iVar7 == 0) {
        uVar2 = *(param_1 + 8);
        iVar7 = *(iVar6 + 0x28);
joined_r0x0800bb54:
        uVar11 = uVar2;
        if (iVar7 != 0) goto code_r0x0800bba8;
code_r0x0800bb88:
        snprintf(&uStack_90,0x28,"",uVar11);
        if (*(iVar6 + 0x28) != 0) goto code_r0x0800bba8;
        if (uVar11 < 6) {
            uVar2 = 0;
            arg1_00 = reloc.__traceiter_serial_info.cfi_jt + uVar11 * 0x538;
            *(uVar11 * 0x538 + 0x8000d59) = 0;
            goto joined_r0x0800bbc4;
        }
        arg1_00 = 0xfffffffffffffffa;
        *0x3c3 = 0;
code_r0x0800c040:
        _dev_err(arg1,"",uVar11,arg1_00 & 0xffffffff);
        uVar13 = arg1_00 & 0xffffffff;
    }
    else {
        if (*(iVar6 + 0x28) == 0) {
            uVar3 = of_alias_get_id(iVar7,"");
            uVar2 = *0x8002000;
            if (-1 < uVar3) {
                uVar2 = uVar3;
            }
            iVar7 = *(iVar6 + 0x28);
            *0x8002000 = *0x8002000 + 1;
            goto joined_r0x0800bb54;
        }
        uVar2 = of_alias_get_id(iVar7,"serial");
        uVar11 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
        if (*(iVar6 + 0x28) == 0) goto code_r0x0800bb88;
code_r0x0800bba8:
        arg1_00 = obj.msm_geni_console_port;
        if (uVar11 != 0) {
            arg1_00 = 0xfffffffffffffffa;
        }
        uVar2 = 1;
        arg1_00[0x3c9] = 0x1;
joined_r0x0800bbc4:
        if ((arg1_00 == NULL) || (0xfffffffffffff000 < arg1_00)) goto code_r0x0800c040;
        if (*(iVar6 + 0x28) != 0) {
            _dev_err(arg1,"","");
            iVar4 = pinctrl_pm_select_sleep_state(arg1);
            if (iVar4 != 0) {
                _dev_err(arg1,"",iVar4);
            }
            uVar13 = 0;
            *(param_1 + 0xa8) = arg1_00;
            goto code_r0x0800bc1c;
        }
        if (*(arg1_00 + 0x1d0) == 0) {
            *(arg1_00 + 0x148) = arg1;
            uStack_94 = 0;
            *(arg1_00 + 0x230) = *(param_1 + 0x70);
            uVar12 = *(param_1 + 0x70);
            *(arg1_00 + 0x238) = arg1;
            *(arg1_00 + 0x290) = arg1;
            *(arg1_00 + 0x240) = uVar12;
            iVar7 = *(*(param_1 + 0x70) + 0x98);
            *(arg1_00 + 0x298) = iVar7;
            if (iVar7 == 0) {
                _dev_err(arg1,"");
                uVar13 = 0xfffffdfb;
            }
            else {
                uVar13 = devm_clk_get(arg1,"");
                *(arg1_00 + 0x2a0) = uVar13;
                if (uVar13 < 0xfffffffffffff001) {
                    uVar3 = geni_icc_get(arg1_00 + 0x288,"");
                    if (uVar3 != 0) {
                        uVar13 = uVar3;
                        if (arg1_00[0x3c9] == 0x0) {
                            *(arg1_00 + 0x418) = 4;
                            ipc_log_string(*(arg1_00 + 0x380),"","",4);
                            sym.__ftrace_dbg(*(arg1_00 + 0x148),0x80025cb,0x8002ae0,*(arg1_00 + 0x418));
                        }
                        goto code_r0x0800bbe4;
                    }
                    *(arg1_00 + 0x2c0) = 1;
                    *(arg1_00 + 0x2d0) = 1;
                    *(arg1_00 + 0x2e0) = 1;
                    iVar7 = of_find_property(*(param_1 + 0x300),"",0);
                    arg1_00[0x3ca] = iVar7 != 0;
                    iVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"",&uStack_94,1,0);
                    if (-1 < iVar4) {
                        arg1_00[0x358] = SUB41(uStack_94,0);
                        _dev_info(arg1,"",uStack_94 & 0xff);
                    }
                    uVar13 = devm_clk_get(arg1,"");
                    *(arg1_00 + 0x248) = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        uVar13 = devm_clk_get(*(param_1 + 0x70),"");
                        *(arg1_00 + 0x250) = uVar13;
                        if (0xfffffffffffff000 < uVar13) {
                            pcVar10 = "";
code_r0x0800c0d8:
                            _dev_err(arg1,pcVar10,uVar13 & 0xffffffff);
                            cVar1 = arg1_00[0x3c9];
                            goto joined_r0x0800c09c;
                        }
                        uVar13 = devm_clk_get(*(param_1 + 0x70),"");
                        *(arg1_00 + 600) = uVar13;
                        if (0xfffffffffffff000 < uVar13) {
                            pcVar10 = "";
                            goto code_r0x0800c0d8;
                        }
                    }
                    else {
                        _dev_err(arg1,"",uVar13 & 0xffffffff);
                        cVar1 = arg1_00[0x3c9];
joined_r0x0800c09c:
                        if (cVar1 == 0x0) {
                            *(arg1_00 + 0x418) = 2;
                            ipc_log_string(*(arg1_00 + 0x380),"","",2);
                            sym.__ftrace_dbg(*(arg1_00 + 0x148),0x80025cb,0x8002ae0,*(arg1_00 + 0x418));
                        }
                        if (uVar13 != 0) goto code_r0x0800bbe4;
                    }
                    piVar8 = platform_get_resource_byname(param_1,0x200,"");
                    if (piVar8 == NULL) {
                        _dev_err(arg1,"");
                        uVar13 = 0xfffffffa;
                    }
                    else {
                        *(arg1_00 + 0x138) = *piVar8;
                        iVar7 = devm_ioremap(arg1,*piVar8,(piVar8[1] - *piVar8) + 1);
                        *(arg1_00 + 0x10) = iVar7;
                        if (iVar7 == 0) {
                            pcVar10 = "";
                        }
                        else {
                            *(arg1_00 + 0x288) = iVar7;
                            iVar4 = platform_get_irq(param_1,1);
                            *(arg1_00 + 0x354) = iVar4;
                            if ((iVar4 < 0) && (arg1_00[0x3c9] == 0x0)) {
                                _dev_info(arg1,"");
                            }
                            uVar13 = devm_pinctrl_get(arg1);
                            *(arg1_00 + 0x260) = uVar13;
                            if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                _dev_err(arg1,"");
                                uVar13 = *(arg1_00 + 0x260);
                            }
                            else {
                                if (arg1_00[0x3c9] == 0x0) {
                                    uVar13 = pinctrl_lookup_state(uVar13,"");
                                    if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                        _dev_info(arg1,"");
                                    }
                                    else {
                                        uVar12 = pinctrl_lookup_state(*(arg1_00 + 0x260),"");
                                        *(arg1_00 + 0x268) = uVar12;
                                    }
                                }
                                uVar13 = pinctrl_lookup_state(*(arg1_00 + 0x260),"");
                                *(arg1_00 + 0x270) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    uVar13 = pinctrl_lookup_state(*(arg1_00 + 0x260),"");
                                    *(arg1_00 + 0x270) = uVar13;
                                    if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                        _dev_err(arg1,"");
                                        uVar13 = *(arg1_00 + 0x270);
                                        goto code_r0x0800bfe4;
                                    }
                                }
                                uVar13 = pinctrl_lookup_state(*(arg1_00 + 0x260),"");
                                *(arg1_00 + 0x278) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    _dev_err(arg1,"");
                                    uVar13 = *(arg1_00 + 0x278);
                                }
                                else {
                                    uVar5 = platform_get_irq(param_1,0);
                                    *(arg1_00 + 0xa0) = uVar5;
                                    uVar12 = devm_kasprintf(*(arg1_00 + 0x148),0xcc0,"",*(arg1_00 + 300));
                                    *(arg1_00 + 0x1e8) = uVar12;
                                    irq_modify_status(*(arg1_00 + 0xa0),0,0x1000);
                                    uVar3 = devm_request_threaded_irq
                                                      (*(arg1_00 + 0x148),*(arg1_00 + 0xa0),
                                                       sym.msm_geni_serial_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt,
                                                       0,4,*(arg1_00 + 0x1e8),arg1_00);
                                    if (uVar3 != 0) {
                                        uVar13 = uVar3;
                                        uVar12 = *(arg1_00 + 0x148);
                                        pcVar10 = "";
code_r0x0800c2ac:
                                        _dev_err(uVar12,pcVar10,"",uVar13);
                                        goto code_r0x0800bbe4;
                                    }
                                    if (*(arg1_00 + 0x354) < 1) {
                                        uVar13 = 0;
                                    }
                                    else {
                                        uVar9 = devm_request_threaded_irq
                                                          (*(arg1_00 + 0x148),*(arg1_00 + 0x354),
                                                           sym.msm_geni_wakeup_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                                                           ,0,0x2002,"",arg1_00);
                                        uVar13 = uVar9 & 0xffffffff;
                                        if (uVar9 != 0) {
                                            uVar12 = *(arg1_00 + 0x148);
                                            pcVar10 = "";
                                            goto code_r0x0800c2ac;
                                        }
                                        arg1_00[0x3cf] = 0x1;
                                    }
                                }
                            }
code_r0x0800bfe4:
                            iVar4 = uVar13;
                            if (uVar2 != 0 || iVar4 != 0) goto joined_r0x0800c02c;
                            iVar7 = *(param_1 + 0x80);
                            if (iVar7 == 0) {
                                iVar7 = *arg1;
                            }
                            iVar7 = wakeup_source_register(*(arg1_00 + 0x148),iVar7);
                            *(arg1_00 + 0x360) = iVar7;
                            if (iVar7 != 0) goto code_r0x0800c18c;
                            pcVar10 = "";
                        }
                        _dev_err(arg1,pcVar10);
                        uVar13 = 0xfffffff4;
                    }
                }
                else {
                    _dev_err(arg1,"",uVar13 & 0xffffffff);
                    iVar4 = uVar13;
joined_r0x0800c02c:
                    if (iVar4 == 0) {
code_r0x0800c18c:
                        *(arg1_00 + 0x1f0) = 0x2000000010;
                        *(arg1_00 + 0x1f8) = 0x10;
                        *(arg1_00 + 0xb4) = 0x40;
                        *(arg1_00 + 0x3d0) = 0;
                        __init_swait_queue_head(arg1_00 + 0x3d8,"",obj.init_completion.__key);
                        *(arg1_00 + 0x3f0) = 0;
                        __init_swait_queue_head(arg1_00 + 0x3f8,"",obj.init_completion.__key);
                        *(arg1_00 + 0x4d8) = 0;
                        __init_swait_queue_head(arg1_00 + 0x4e0,"",obj.init_completion.__key);
                        *(arg1_00 + 0x4f8) = 0;
                        __init_swait_queue_head(arg1_00 + 0x500,"",obj.init_completion.__key);
                        *(arg1_00 + 0x1d0) = iVar6;
                        *(param_1 + 0xa8) = arg1_00;
                        uVar3 = sym.msm_geni_serial_get_ver_info(arg1_00);
                        if (uVar3 == 0) {
                            iVar7 = of_find_property(*(param_1 + 0x300),"",0);
                            arg1_00[0x520] = iVar7 != 0;
                            iVar7 = of_find_property(*(param_1 + 0x300),"",0);
                            arg1_00[0x532] = iVar7 != 0;
                            if (uVar2 == 0) {
                                *(arg1_00 + 0x228) = sym.handle_rx_hs.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                                uVar12 = devm_kmalloc(*(arg1_00 + 0x148),8,0xdc0);
                                *(arg1_00 + 0x220) = uVar12;
                                if (arg1_00[0x520] == 0x0) {
                                    __pm_runtime_set_status(arg1,2);
                                    pm_runtime_set_autosuspend_delay(arg1,0x96);
                                    __pm_runtime_use_autosuspend(arg1,1);
                                    pm_runtime_enable(arg1);
                                }
                                else {
                                    __pm_runtime_set_status(arg1,0);
                                    pm_runtime_forbid(arg1);
                                }
                            }
                            else {
                                *(arg1_00 + 0x228) = sym.__typeid__ZTSFiP9uart_portjjjbE_global_addr;
                                uVar12 = devm_kmalloc(*(arg1_00 + 0x148),4,0xdc0);
                                *(arg1_00 + 0x220) = uVar12;
                            }
                            _dev_info(arg1,"",uVar11,*(arg1_00 + 0xb4),uVar2);
                            device_create_file(*(arg1_00 + 0x148),obj.dev_attr_loopback);
                            device_create_file(*(arg1_00 + 0x148),obj.dev_attr_xfer_mode);
                            device_create_file(*(arg1_00 + 0x148),obj.dev_attr_ver_info);
                            sym.msm_geni_serial_debug_init(arg1_00,uVar2);
                            arg1_00[0x218] = 0x0;
                            *(arg1_00 + 0x418) = 0;
                            sym.msm_geni_serial_init_gsi(arg1_00);
                            if (arg1_00[0x3c9] == 0x0) {
                                *(arg1_00 + 0x410) = 0;
                            }
                            uVar9 = uart_add_one_port(iVar6,arg1_00);
                            uVar13 = uVar9 & 0xffffffff;
                            if (uVar9 != 0) {
                                _dev_err(arg1,"",uVar13);
                            }
                            if (uVar2 == 0) {
                                snprintf(&uStack_90,0x28,"",uVar11);
                            }
                        }
                        else {
                            uVar13 = uVar3;
                            _dev_err(arg1,"",uVar13);
                        }
                    }
                }
            }
        }
        else {
            uVar13 = 0xffffffed;
        }
    }
code_r0x0800bbe4:
    ipc_log_string(*(arg1_00 + 0x380),"","",uVar13 & 0xffffffff);
    sym.__ftrace_dbg(arg1,0x80029e3,0x8002b4a,uVar13 & 0xffffffff);
code_r0x0800bc1c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.msm_geni_serial_remove;
        iVar7 = *(iVar6 + 0xa8);
        if (*(iVar7 + 0x3c9) == '\0') {
            uVar12 = *(iVar7 + 0x1d0);
            if ((*(iVar7 + 0x100) == 0) || (*(iVar7 + 300) != *(*(iVar7 + 0x100) + 0x4a))) {
                wakeup_source_unregister(*(iVar7 + 0x360));
                *(iVar7 + 0x360) = 0;
            }
            if (*(iVar7 + 0x520) != '\0') {
                pm_runtime_allow(iVar6 + 0x10);
            }
            uart_remove_one_port(uVar12,iVar7);
            if (*(iVar7 + 0x428) != '\0') {
                destroy_workqueue(*(iVar7 + 0x4c8));
                destroy_workqueue(*(iVar7 + 0x4d0));
            }
            if (*(iVar7 + 0x328) != 0) {
                if (((iVar7 + 0x328 != NULL) && (*(iVar7 + 0x230) != 0)) && (*(iVar7 + 0x2f8) != 0)) {
                    dma_free_attrs(*(iVar7 + 0x230),0x800,*(iVar7 + 0x2f8),*(iVar7 + 0x328),0);
                }
                *(iVar7 + 0x328) = 0;
            }
        }
        return 0;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.msm_geni_serial_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045e0 (size 8) =====

ulong sym.msm_geni_serial_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(ulong param_1,int64_t param_2)

{
    char cVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t extraout_x1;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = _raw_spin_lock_irqsave(param_2);
    sym.msm_geni_serial_handle_isr(param_2,&uStack_30,0);
    _raw_spin_unlock_irqrestore(param_2,uStack_30);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_geni_wakeup_isr;
    uVar3 = _raw_spin_lock_irqsave(extraout_x1);
    ipc_log_string(*(extraout_x1 + 0x370),"","",*(extraout_x1 + 0x3a8));
    sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x800136a,0x80016e2,*(extraout_x1 + 0x3a8));
    cVar1 = *(extraout_x1 + 0x358);
    iVar5 = *(extraout_x1 + 0x3a8);
    if ((cVar1 == '\0') || (iVar5 != 2)) {
        if (iVar5 < 2) {
            *(extraout_x1 + 0x3a8) = iVar5 + 1;
        }
    }
    else {
        iVar6 = *(*(extraout_x1 + 200) + 0xa8);
        if (iVar6 == 0) {
            ipc_log_string(*(extraout_x1 + 0x370),"","",2);
            sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x8002521,0x80016e2,*(extraout_x1 + 0x3a8));
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d1ec);
            (*pcVar2)();
        }
        iVar4 = *(*(iVar6 + 0x328) + 0xa0);
        iVar5 = *(iVar4 + 8);
        if (iVar5 < *(iVar4 + 0xc)) {
            if ((*(iVar4 + 0x18) & 1) == 0) {
                *(iVar4 + iVar5 + *(iVar4 + 0xc) + 0x20) = 0;
                iVar5 = *(iVar4 + 8);
            }
            *(iVar4 + 8) = iVar5 + 1;
            *(iVar4 + iVar5 + 0x20) = cVar1;
        }
        else {
            __tty_insert_flip_char(*(iVar6 + 0x328),cVar1,0);
        }
        ipc_log_string(*(extraout_x1 + 0x370),"","",*(extraout_x1 + 0x358));
        sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x8001e2d,0x80016e2,*(extraout_x1 + 0x358));
        *(extraout_x1 + 0x3a8) = 0;
        tty_flip_buffer_push(*(iVar6 + 0x328));
        pm_wakeup_ws_event(*(extraout_x1 + 0x360),2000,0);
    }
    _raw_spin_unlock_irqrestore(extraout_x1,uVar3);
    return 1;
}


// ===== sym.msm_geni_wakeup_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045e8 (size 8) =====

ulong sym.msm_geni_wakeup_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(ulong param_1,int64_t param_2)

{
    char cVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(param_2);
    ipc_log_string(*(param_2 + 0x370),"","",*(param_2 + 0x3a8));
    sym.__ftrace_dbg(*(param_2 + 0x148),0x800136a,0x80016e2,*(param_2 + 0x3a8));
    cVar1 = *(param_2 + 0x358);
    iVar5 = *(param_2 + 0x3a8);
    if ((cVar1 == '\0') || (iVar5 != 2)) {
        if (iVar5 < 2) {
            *(param_2 + 0x3a8) = iVar5 + 1;
        }
    }
    else {
        iVar6 = *(*(param_2 + 200) + 0xa8);
        if (iVar6 == 0) {
            ipc_log_string(*(param_2 + 0x370),"","",2);
            sym.__ftrace_dbg(*(param_2 + 0x148),0x8002521,0x80016e2,*(param_2 + 0x3a8));
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d1ec);
            (*pcVar2)();
        }
        iVar4 = *(*(iVar6 + 0x328) + 0xa0);
        iVar5 = *(iVar4 + 8);
        if (iVar5 < *(iVar4 + 0xc)) {
            if ((*(iVar4 + 0x18) & 1) == 0) {
                *(iVar4 + iVar5 + *(iVar4 + 0xc) + 0x20) = 0;
                iVar5 = *(iVar4 + 8);
            }
            *(iVar4 + 8) = iVar5 + 1;
            *(iVar4 + iVar5 + 0x20) = cVar1;
        }
        else {
            __tty_insert_flip_char(*(iVar6 + 0x328),cVar1,0);
        }
        ipc_log_string(*(param_2 + 0x370),"","",*(param_2 + 0x358));
        sym.__ftrace_dbg(*(param_2 + 0x148),0x8001e2d,0x80016e2,*(param_2 + 0x358));
        *(param_2 + 0x3a8) = 0;
        tty_flip_buffer_push(*(iVar6 + 0x328));
        pm_wakeup_ws_event(*(param_2 + 0x360),2000,0);
    }
    _raw_spin_unlock_irqrestore(param_2,uVar3);
    return 1;
}


// ===== sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045f0 (size 8) =====

void sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (uint32_t *param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int *extraout_x1;
    char *pcVar4;
    uint64_t *arg4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong uVar8;
    code *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint64_t uStack_e8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 8);
    uVar1 = *param_1;
    uVar8 = *(iVar11 + 200);
    ipc_log_string(*(iVar11 + 0x370),"","");
    sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001afb,0x8001dd7,param_4);
    if (*(iVar11 + 0x518) < 5) {
        uVar2 = tty_insert_flip_string_fixed_flag(uVar8,*(iVar11 + *(iVar11 + 0x518) * 8 + 0x300),0,uVar1);
        if (uVar2 != uVar1) {
            ipc_log_string(*(iVar11 + 0x370),"","",uVar2,uVar1);
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001bf3,0x8001dd7,uVar2);
        }
        *(iVar11 + 0xe0) = *(iVar11 + 0xe0) + uVar2;
        tty_flip_buffer_push(uVar8);
        if (*(iVar11 + 0x518) < 5) {
            uVar2 = uVar1;
            if (0x1f < uVar1) {
                uVar2 = 0x20;
            }
            uVar8 = *(iVar11 + 0x370);
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            hex_dump_to_buffer(*(iVar11 + *(iVar11 + 0x518) * 8 + 0x300),uVar2,0x20,1,&uStack_88,0x40,0);
            scnprintf(&uStack_e8,0x60,"","",0,uVar1,&uStack_88);
            ipc_log_string(uVar8,"","",&uStack_e8);
            arg4 = &uStack_e8;
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x80015f4,0x80027b9,arg4);
            uVar1 = *(iVar11 + 0x518);
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            ipc_log_string(*(iVar11 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001afb,0x80018f4,arg4);
            sg_init_table(&uStack_e8,1);
            if (uVar1 < 6) {
                iVar5 = *(iVar11 + 0x430);
                iVar6 = iVar5 + uVar1 * 0x10 + 0x60;
                uStack_e0 = CONCAT44(0x10,iVar6 & 0xfff);
                piVar7 = *(iVar5 + 8);
                uStack_e8 = ((iVar6 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | uStack_e8 & 3) -
                            0x200000000;
                if (((piVar7 == NULL) || (*piVar7 == 0)) || (pcVar9 = *(*piVar7 + 0x138), pcVar9 == NULL)) {
                    uVar8 = 0;
                }
                else {
                    __cfi_slowpath_diag(0x3675599da7c39b65,pcVar9,0x8000cc0);
                    arg4 = 0x2;
                    uVar8 = (*pcVar9)(piVar7,&uStack_e8,1,2,3,0);
                    iVar5 = *(iVar11 + 0x430);
                }
                *(iVar5 + 600) = uVar8;
                iVar6 = *(*(iVar11 + 0x430) + 600);
                if (iVar6 == 0) {
                    _dev_err(*(iVar11 + 0x148),"","");
                }
                else {
                    *(iVar6 + 0x28) = sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                    *(*(*(iVar11 + 0x430) + 600) + 0x38) = *(iVar11 + 0x430) + 0x288;
                    iVar6 = *(*(iVar11 + 0x430) + 600);
                    pcVar9 = *(iVar6 + 0x18);
                    __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar9,0x8000ce0);
                    iVar3 = (*pcVar9)(iVar6);
                    if (iVar3 < 0) {
                        _printk(0x8002163,"",iVar3);
                        piVar7 = *(*(iVar11 + 0x430) + 8);
                        pcVar9 = *(*piVar7 + 0x178);
                        if (pcVar9 != NULL) {
                            __cfi_slowpath_diag(0x146502001565ea5c,pcVar9,0x8000d00);
                            (*pcVar9)(piVar7);
                        }
                    }
                    else {
                        piVar7 = *(*(iVar11 + 0x430) + 8);
                        pcVar9 = *(*piVar7 + 400);
                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar9,0x8000d20);
                        (*pcVar9)(piVar7);
                        ipc_log_string(*(iVar11 + 0x380),"","");
                        sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001839,0x80018f4,arg4);
                    }
                }
                pcVar4 = "";
                *(iVar11 + 0x518) = *(iVar11 + 0x518) + 1U & 3;
                ipc_log_string(*(iVar11 + 0x370),"","");
                sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001839,0x8001dd7,arg4);
                iVar11 = sp_el0;
                if (*(iVar11 + 0x5e0) == iStack_48) {
                    return;
                }
                __stack_chk_fail();
                *extraout_x18 = sym.msm_geni_uart_ev_cb;
                uVar10 = *(extraout_x1 + 2);
                ipc_log_string(*(pcVar4 + 0x380),"","");
                sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001afb,0x8002bdc,arg4);
                if (*extraout_x1 == 0) {
                    if ((uVar10 >> 2 & 1) != 0) {
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(0x800,0x800b310);
                        (*pcVar9)();
                    }
                }
                else {
                    ipc_log_string(*(pcVar4 + 0x380),"",extraout_x1[10],uVar10 & 0xffffffff);
                    arg4 = uVar10 & 0xffffffff;
                    sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001c0b,extraout_x1[10],arg4);
                }
                ipc_log_string(*(pcVar4 + 0x380),"","");
                sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001839,0x8002bdc,arg4);
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800b26c);
    (*pcVar9)();
}


// ===== sym.msm_geni_uart_gsi_tx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x080045f8 (size 8) =====

void sym.msm_geni_uart_gsi_tx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    iVar4 = *(iVar3 + 200);
    ipc_log_string(*(iVar3 + 0x380),"","");
    sym.__ftrace_dbg(*(iVar3 + 0x148),0x8001afb,0x800102f,param_4);
    *(iVar4 + 0x1bc) = *(iVar3 + 0x2f0) + *(iVar4 + 0x1bc) & 0xfff;
    geni_se_tx_dma_unprep(iVar3 + 0x288,*(iVar3 + 0x2e8),*(iVar3 + 0x2f0));
    iVar1 = *(iVar3 + 0x2f0);
    *(iVar3 + 0x2e8) = 0;
    *(iVar3 + 0x2f0) = 0;
    *(iVar3 + 0xe4) = *(iVar3 + 0xe4) + iVar1;
    complete(iVar3 + 0x4f8);
    if (*(iVar4 + 0x1b8) == *(iVar4 + 0x1bc)) {
        if ((*(iVar3 + 0x100) == 0) || (*(iVar3 + 300) != *(*(iVar3 + 0x100) + 0x4a))) {
            ipc_log_string(*(iVar3 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar3 + 0x148),0x800249f,0x800102f,param_4);
            if (*(*(iVar3 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(iVar3 + 0x378),"","");
                sym.__ftrace_dbg(*(iVar3 + 0x148),0x8000db8,0x800202b,param_4);
            }
            else {
                iVar4 = *(iVar3 + 0x148);
                if ((*(iVar4 + 0x200) & 7) == 0) {
                    uVar2 = ktime_get_mono_fast_ns();
                    *(iVar4 + 0x218) = uVar2;
                    __pm_runtime_suspend(*(iVar3 + 0x148),0xd);
                }
            }
        }
        uart_write_wakeup(iVar3);
    }
    else {
        queue_work_on(0x20,*(iVar3 + 0x4c8),iVar3 + 0x438);
        ipc_log_string(*(iVar3 + 0x380),"","");
        sym.__ftrace_dbg(*(iVar3 + 0x148),0x8001839,0x800102f,param_4);
    }
    ipc_log_string(*(iVar3 + 0x380),"","");
    sym.__ftrace_dbg(*(iVar3 + 0x148),0x800268f,0x800102f,param_4);
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08004600 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.trace_raw_output_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004608 (size 8) =====

void sym.trace_raw_output_serial_info.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
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
        trace_event_printf(param_1,"",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.msm_geni_serial_config_port.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004610 (size 8) =====

void sym.msm_geni_serial_config_port.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,uint32_t param_2)

{
    if ((param_2 & 1) != 0) {
        *(param_1 + 0x11c) = 0x58;
    }
    return;
}


// ===== sym.msm_geni_serial_break_ctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004618 (size 8) =====

void sym.msm_geni_serial_break_ctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0)) {
        iVar1 = sp_el0;
        ipc_log_string(*(param_1 + 0x380),"","",iVar1 + 0x7a8);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80019e9,0x8001ae1,iVar1 + 0x7a8);
    }
    else {
        if (param_2 == 0) {
            DataMemoryBarrier(0,2);
            *(*(param_1 + 0x288) + 0x600) = 0x28000000;
        }
        else {
            uVar2 = sym.wait_for_transfers_inflight(param_1);
            if (uVar2 != 0) {
                ipc_log_string(*(param_1 + 0x380),"","",uVar2);
                sym.__ftrace_dbg(*(param_1 + 0x148),0x8001381,0x8001ae1,uVar2);
            }
            DataMemoryBarrier(0,2);
            *(*(param_1 + 0x288) + 0x600) = 0x20000000;
        }
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.msm_geni_serial_start_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004620 (size 8) =====

void sym.msm_geni_serial_start_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int16_t iVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x100) == 0) {
code_r0x08005698:
        iVar5 = *(param_1 + 0x148);
        if ((*(iVar5 + 0x20c) != 0) && ((*(iVar5 + 0x200) & 7) == 0)) {
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x800212b,0x8001499,param_4);
            __pm_runtime_resume(*(param_1 + 0x148),5);
            iVar5 = *(param_1 + 0x100);
            goto joined_r0x080057f0;
        }
        if ((*(iVar5 + 0x200) & 7) == 0) {
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x800114f,0x8001499,param_4);
            __pm_runtime_resume(*(param_1 + 0x148),5);
        }
    }
    else {
        iVar1 = *(*(param_1 + 0x100) + 0x4a);
        iVar2 = *(param_1 + 300);
        if (iVar2 == iVar1) {
            if ((*(param_1 + 0x15f) != '\0') || (*(param_1 + 0x414) != 0)) {
                ipc_log_string(*(param_1 + 0x390),"","");
                return;
            }
            if (*(param_1 + 0x100) == 0) goto code_r0x08005698;
            iVar1 = *(*(param_1 + 0x100) + 0x4a);
            iVar2 = *(param_1 + 300);
        }
        if (iVar2 != iVar1) goto code_r0x08005698;
    }
    if (*(param_1 + 0x524) != 0) {
        *(param_1 + 0x524) = 0;
    }
    iVar2 = *(param_1 + 0x208);
    if (iVar2 == 3) {
        if (*(param_1 + 0x2e8) == 0) {
            queue_work_on(0x20,*(param_1 + 0x4c8),param_1 + 0x438);
            return;
        }
    }
    else if (iVar2 == 2) {
        if (*(param_1 + 0x2e8) == 0) {
            iVar2 = sym.msm_geni_serial_prep_dma_tx(param_1);
            if (iVar2 != -1) {
                return;
            }
            ipc_log_string(*(param_1 + 0x368),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8001997,0x8001499,param_4);
            iVar5 = *(param_1 + 0x100);
            goto joined_r0x080057f0;
        }
    }
    else {
        if (iVar2 != 1) {
            return;
        }
        if ((*(*(param_1 + 0x10) + 0x40) & 1) == 0) {
            if ((((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
                (*(*(param_1 + 0x148) + 0x20c) == 2)) && (*(*(param_1 + 0x148) + 0x1f8) == 0)) {
code_r0x0800599c:
                uVar4 = *(*(param_1 + 0x10) + 0x614);
                *(*(param_1 + 0x10) + 0x80c) = *(param_1 + 0x1fc);
                *(*(param_1 + 0x10) + 0x614) = uVar4 | 0x40000001;
                DataSynchronizationBarrier(3,3,0);
                return;
            }
            if (*(param_1 + 0x208) == 2) {
                uVar4 = *(param_1 + 0x2e8) != 0;
            }
            else {
                uVar4 = *(*(param_1 + 0x10) + 0x800);
            }
            if (uVar4 == 0) goto code_r0x0800599c;
        }
    }
    uVar4 = *(*(param_1 + 0x10) + 0x908);
    if (((uVar4 >> 1 & 1) != 0) && (*(param_1 + 0x3c9) == '\0')) {
        *(param_1 + 0x418) = 0x14;
        ipc_log_string(*(param_1 + 0x380),"","",0x14);
        param_4 = *(param_1 + 0x418);
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80025cb,0x8002ae0,param_4);
    }
    *0x8002000 = *0x8002000 + 1;
    if (*0x8002000 * -0x33333333 < 0x33333334) {
        ipc_log_string(*(param_1 + 0x380),"","",uVar4);
        param_4 = uVar4;
        sym.__ftrace_dbg(*(param_1 + 0x148),0x800260b,0x8001499,param_4);
        *0x8002000 = 0;
        iVar5 = *(param_1 + 0x100);
    }
    else {
        iVar5 = *(param_1 + 0x100);
    }
joined_r0x080057f0:
    if ((iVar5 == 0) || (*(param_1 + 300) != *(iVar5 + 0x4a))) {
        if (*(*(param_1 + 0x148) + 0x1f8) == 0) {
            ipc_log_string(*(param_1 + 0x378),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8000db8,0x800202b,param_4);
        }
        else {
            iVar5 = *(param_1 + 0x148);
            if ((*(iVar5 + 0x200) & 7) == 0) {
                uVar3 = ktime_get_mono_fast_ns();
                *(iVar5 + 0x218) = uVar3;
                __pm_runtime_suspend(*(param_1 + 0x148),0xd);
            }
        }
    }
    return;
}


// ===== sym.msm_geni_serial_stop_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004628 (size 8) =====

void sym.msm_geni_serial_stop_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0)) {
        _dev_err(*(param_1 + 0x148),"","");
        ipc_log_string(*(param_1 + 0x380),"","");
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80017e5,0x800142b,param_4);
    }
    else {
        sym.stop_tx_sequencer(param_1);
    }
    return;
}


// ===== sym.msm_geni_serial_stop_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004630 (size 8) =====

void sym.msm_geni_serial_stop_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) &&
       (*(*(param_1 + 0x148) + 0x20c) == 2 && *(*(param_1 + 0x148) + 0x1f8) == 0)) {
        ipc_log_string(*(param_1 + 0x380),"","");
        sym.__ftrace_dbg(*(param_1 + 0x148),0x80017e5,0x800115d,param_4);
        complete(param_1 + 0x4d8);
    }
    else {
        uVar1 = sym.stop_rx_sequencer(param_1);
        if (uVar1 != 0) {
            ipc_log_string(*(param_1 + 0x380),"","",uVar1);
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8001175,0x800115d,uVar1);
        }
    }
    return;
}


// ===== sym.msm_geni_serial_flush.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004638 (size 8) =====

void sym.msm_geni_serial_flush.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x524) = 1;
    sym.stop_tx_sequencer(param_1);
    return;
}


// ===== sym.msm_geni_serial_shutdown.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004640 (size 8) =====

void sym.msm_geni_serial_shutdown.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t arg4;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(param_1 + 0x230);
    ipc_log_string(*(param_1 + 0x380),"","",1);
    arg4 = 1;
    sym.__ftrace_dbg(*(param_1 + 0x148),0x800206b,0x8001a2a,1);
    *(param_1 + 0x531) = 1;
    if ((*(param_1 + 0x100) != 0) && (*(param_1 + 300) == *(*(param_1 + 0x100) + 0x4a))) {
        console_stop();
        disable_irq(*(param_1 + 0xa0));
        cVar1 = *(param_1 + 0x520);
        goto joined_r0x0800630c;
    }
    sym.msm_geni_serial_power_on(param_1);
    if ((0 < *(param_1 + 0x354)) && (*(param_1 + 0x3cf) != '\0')) {
        irq_set_irq_wake(*(param_1 + 0x354),0);
        disable_irq(*(param_1 + 0x354));
        *(param_1 + 0x3cf) = 0;
    }
    if (*(param_1 + 0x208) == 3) {
        ipc_log_string(*(param_1 + 0x380),"","");
        sym.__ftrace_dbg(*(param_1 + 0x148),0x8001d6e,0x8001a2a,arg4);
        iVar2 = wait_for_completion_timeout(param_1 + 0x4d8,0x19);
        if (iVar2 == 0) {
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x80013ce,0x8001a2a,arg4);
        }
        piVar6 = *(param_1 + 0x430);
        if (piVar6[1] != 0) {
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8001a43,0x8001a2a,arg4);
            if (((param_1 + 0x330 != NULL) && (iVar7 != 0)) && (*(param_1 + 0x300) != 0)) {
                arg4 = *(param_1 + 0x330);
                dma_free_attrs(iVar7,0x800,*(param_1 + 0x300),arg4,0);
            }
            if (((param_1 + 0x338 != NULL) && (iVar7 != 0)) && (*(param_1 + 0x308) != 0)) {
                arg4 = *(param_1 + 0x338);
                dma_free_attrs(iVar7,0x800,*(param_1 + 0x308),arg4,0);
            }
            if (((param_1 + 0x340 != NULL) && (iVar7 != 0)) && (*(param_1 + 0x310) != 0)) {
                arg4 = *(param_1 + 0x340);
                dma_free_attrs(iVar7,0x800,*(param_1 + 0x310),arg4,0);
            }
            if (((param_1 + 0x348 != NULL) && (iVar7 != 0)) && (*(param_1 + 0x318) != 0)) {
                arg4 = *(param_1 + 0x348);
                dma_free_attrs(iVar7,0x800,*(param_1 + 0x318),arg4,0);
            }
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x80014e3,0x8001a2a,arg4);
            piVar6 = *(param_1 + 0x430);
        }
        if (*piVar6 != 0) {
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x8002714,0x8001a2a,arg4);
            sym.msm_geni_serial_stop_tx(param_1);
            iVar5 = *(param_1 + 0x2e8);
            if (iVar5 != -1) {
                if (iVar5 == 0) goto code_r0x08006304;
                arg4 = 1;
                dma_unmap_page_attrs(iVar7,iVar5,*(param_1 + 0x2f0),1,0);
            }
            ipc_log_string(*(param_1 + 0x380),"","");
            sym.__ftrace_dbg(*(param_1 + 0x148),0x80014e3,0x8001a2a,arg4);
        }
    }
    else {
        sym.msm_geni_serial_stop_tx(param_1);
    }
code_r0x08006304:
    *(param_1 + 0x518) = 0;
    cVar1 = *(param_1 + 0x520);
joined_r0x0800630c:
    if (cVar1 != '\0') {
        disable_irq(*(param_1 + 0xa0));
    }
    if ((*(param_1 + 0x100) == 0) || (*(param_1 + 300) != *(*(param_1 + 0x100) + 0x4a))) {
        if (*(param_1 + 0x3a4) != 0) {
            if (0 < *(param_1 + 0x3a4)) {
                iVar2 = 0;
                do {
                    ipc_log_string(*(param_1 + 0x378),"","");
                    sym.__ftrace_dbg(*(param_1 + 0x148),0x8000e64,0x8001a2a,arg4);
                    if (*(*(param_1 + 0x148) + 0x1f8) == 0) {
                        ipc_log_string(*(param_1 + 0x378),"","");
                        sym.__ftrace_dbg(*(param_1 + 0x148),0x8000db8,0x800202b,arg4);
                    }
                    else {
                        iVar7 = *(param_1 + 0x148);
                        if ((*(iVar7 + 0x200) & 7) == 0) {
                            uVar4 = ktime_get_mono_fast_ns();
                            *(iVar7 + 0x218) = uVar4;
                            __pm_runtime_suspend(*(param_1 + 0x148),0xd);
                        }
                    }
                    iVar2 = iVar2 + 1;
                } while (iVar2 < *(param_1 + 0x3a4));
            }
            *(param_1 + 0x3a4) = 0;
        }
        if ((*(*(param_1 + 0x148) + 0x200) & 7) == 0) {
            uVar3 = __pm_runtime_suspend(*(param_1 + 0x148),4);
            if (uVar3 != 0) {
                ipc_log_string(*(param_1 + 0x378),"","",uVar3);
                sym.__ftrace_dbg(*(param_1 + 0x148),0x8001746,0x8001a2a,uVar3);
            }
        }
        else {
            uVar3 = 0;
        }
        if (((*(param_1 + 0x268) != 0) && (*(param_1 + 0x268) < 0xfffffffffffff001)) &&
           (uVar3 = pinctrl_select_state(*(param_1 + 0x260)), uVar3 != 0)) {
            ipc_log_string(*(param_1 + 0x380),"","",uVar3);
        }
        *(param_1 + 0x418) = 0;
        *(param_1 + 0x528) = 0;
        *(param_1 + 0x524) = 0;
    }
    else {
        uVar3 = 0;
    }
    *(param_1 + 0x531) = 0;
    ipc_log_string(*(param_1 + 0x380),"","",uVar3);
    sym.__ftrace_dbg(*(param_1 + 0x148),0x8002708,0x8001a2a,uVar3);
    return;
}


// ===== sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004648 (size 8) =====

void sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar15 = *(param_1 + -8);
    iVar7 = param_1 + -0x438;
    iVar14 = *(param_1 + -0x370);
    piVar9 = *(param_1 + -0x208);
    ipc_log_string(*(param_1 + -0xb8),"","");
    sym.__ftrace_dbg(*(param_1 + -0x2f0),0x8001afb,0x800154c,param_4);
    iVar3 = *(iVar14 + 0x1bc);
    uVar2 = *(iVar14 + 0x1b8) - iVar3 & 0xfff;
    if (uVar2 < 0x100) {
        uart_write_wakeup(iVar7);
        iVar3 = *(iVar14 + 0x1bc);
    }
    uVar6 = 0x1000 - iVar3;
    uVar1 = uVar6;
    if (uVar2 <= uVar6) {
        uVar1 = uVar2;
    }
    puVar10 = uVar1;
    if ((uVar1 != 0) && (*(param_1 + -0x150) == 0)) {
        uVar2 = uVar1;
        if (0x1f < uVar1) {
            uVar2 = 0x20;
        }
        uVar11 = *(param_1 + -0xd0);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        hex_dump_to_buffer(*(iVar14 + 0x1b0) + iVar3,uVar2,0x20,1,&uStack_98,0x40,0);
        scnprintf(&uStack_f8,0x60,"","",0,uVar1,&uStack_98);
        ipc_log_string(uVar11,"","",&uStack_f8);
        param_4 = &uStack_f8;
        sym.__ftrace_dbg(*(param_1 + -0x2f0),0x80015f4,0x80027b9,param_4);
        uVar2 = sym.msm_geni_allocate_chan(iVar7);
        if (uVar2 == 0) {
            sg_init_table(*(param_1 + -8) + 0xf0,3);
            iVar5 = *(param_1 + -8);
            *(iVar5 + 0xf8) = iVar5 + 0x10 & 0xfff;
            *(iVar5 + 0xfc) = 0x10;
            *(iVar5 + 0xf0) =
                 (((iVar5 + 0x10) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar5 + 0xf0) & 3) -
                 0x200000000;
            *(iVar15 + 0x30) = 1;
            *(iVar15 + 0x38) = 0x20000100000000;
            iVar5 = *(param_1 + -8);
            *(iVar5 + 0x118) = iVar15 + 0x30 & 0xfff;
            *(iVar5 + 0x11c) = 0x10;
            *(iVar5 + 0x110) =
                 (((iVar15 + 0x30) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar5 + 0x110) & 3) -
                 0x200000000;
            if (piVar9 != NULL) {
                uVar6 = *(iVar14 + 0x1b0) + *(iVar14 + 0x1bc);
                uVar4 = is_vmalloc_addr(uVar6);
                if (((uVar4 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar11 = dev_driver_string(piVar9);
                    iVar7 = piVar9[0xe];
                    if (iVar7 == 0) {
                        iVar7 = *piVar9;
                    }
                    __warn_printk("",uVar11,iVar7);
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x800dae0);
                    (*pcVar13)();
                }
                if ((uVar4 & 1) == 0) {
                    iVar14 = dma_map_page_attrs(piVar9,((uVar6 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0)
                                                        - 0x200000000,uVar6 & 0xfff,puVar10,1,0);
                    *(param_1 + -0x150) = iVar14;
                    param_4 = puVar10;
                    if (iVar14 != -1) {
                        *(param_1 + -0x148) = uVar1;
                        *(*(param_1 + -8) + 0x50) = iVar14;
                        *(*(param_1 + -8) + 0x54) = *(param_1 + -0x14c);
                        *(*(param_1 + -8) + 0x58) = uVar1 & 0xffffff;
                        *(*(param_1 + -8) + 0x5c) = 0x100200;
                        iVar14 = *(param_1 + -8);
                        *(iVar14 + 0x138) = iVar14 + 0x50 & 0xfff;
                        *(iVar14 + 0x13c) = 0x10;
                        *(iVar14 + 0x130) =
                             (((iVar14 + 0x50) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 |
                             *(iVar14 + 0x130) & 3) - 0x200000000;
                        puVar10 = *(param_1 + -8);
                        piVar12 = *puVar10;
                        if (((piVar12 == NULL) || (*piVar12 == 0)) || (pcVar13 = *(*piVar12 + 0x138), pcVar13 == NULL))
                        {
                            uVar11 = 0;
                        }
                        else {
                            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar13,0x8000cc0);
                            param_4 = 0x1;
                            uVar11 = (*pcVar13)(piVar12,puVar10 + 0x1e,3,1,3,0);
                            puVar10 = *(param_1 + -8);
                        }
                        puVar10[0x4a] = uVar11;
                        iVar14 = *(*(param_1 + -8) + 0x250);
                        if (iVar14 == 0) {
                            _dev_err(*(param_1 + -0x2f0),"","");
                            if (*(param_1 + -0x150) != -1) {
                                param_4 = 0x1;
                                dma_unmap_page_attrs(piVar9,*(param_1 + -0x150),*(param_1 + -0x148),1,0);
                            }
                            sym.msm_geni_deallocate_chan(iVar7);
                            uVar11 = *(param_1 + -0xb8);
                            pcVar8 = "";
                        }
                        else {
                            *(iVar14 + 0x28) = sym.msm_geni_uart_gsi_tx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                            *(*(*(param_1 + -8) + 0x250) + 0x38) = *(param_1 + -8) + 0x260;
                            iVar7 = *(*(param_1 + -8) + 0x250);
                            pcVar13 = *(iVar7 + 0x18);
                            __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar13,0x8000ce0);
                            iVar3 = (*pcVar13)(iVar7);
                            if (iVar3 < 0) {
                                _printk(0x8002163,"",iVar3);
                                piVar9 = **(param_1 + -8);
                                pcVar13 = *(*piVar9 + 0x178);
                                if (pcVar13 != NULL) {
                                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar13,0x8000d00);
                                    (*pcVar13)(piVar9);
                                }
                                goto code_r0x0800d9a8;
                            }
                            *(param_1 + 0xc0) = 0;
                            piVar9 = **(param_1 + -8);
                            pcVar13 = *(*piVar9 + 400);
                            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar13,0x8000d20);
                            (*pcVar13)(piVar9);
                            wait_for_completion_timeout(param_1 + 0xc0,0x19);
                            uVar11 = *(param_1 + -0xb8);
                            pcVar8 = "";
                        }
                        ipc_log_string(uVar11,pcVar8,"");
                        sym.__ftrace_dbg(*(param_1 + -0x2f0),pcVar8,0x800154c,param_4);
                        goto code_r0x0800d9a8;
                    }
                }
                else {
                    *(param_1 + -0x150) = 0xffffffffffffffff;
                }
            }
            _dev_err(*(param_1 + -0x2f0),"","");
            dma_release_channel(*(*(param_1 + -8) + 8));
            dma_release_channel(**(param_1 + -8));
            *(*(param_1 + -8) + 8) = 0;
            **(param_1 + -8) = 0;
        }
        else {
            param_4 = uVar2;
            _dev_err(*(param_1 + -0x2f0),"","");
        }
    }
code_r0x0800d9a8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.msm_geni_uart_gsi_cancel_rx;
    ipc_log_string(*(iVar7 + -0xe8),"","");
    sym.__ftrace_dbg(*(iVar7 + -800),0x8001afb,0x80013eb,param_4);
    if (*(iVar7 + 0xb9) == '\0') {
        pcVar8 = "";
    }
    else {
        piVar9 = *(*(iVar7 + -0x38) + 8);
        if (piVar9 != NULL) {
            pcVar13 = *(*piVar9 + 0x178);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar13,0x8000d00);
                (*pcVar13)(piVar9);
            }
        }
        complete(iVar7 + 0x70);
        *(iVar7 + 0xb9) = 0;
        pcVar8 = "";
        *(iVar7 + 0xb4) = 0;
    }
    ipc_log_string(*(iVar7 + -0xe8),pcVar8,"");
    sym.__ftrace_dbg(*(iVar7 + -800),pcVar8,0x80013eb,param_4);
    return;
}


// ===== sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004650 (size 8) =====

void sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = **(param_1 + -0x68);
    pcVar2 = *(*piVar1 + 0x178);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar2,0x8000d00);
        (*pcVar2)(piVar1);
    }
    return;
}


// ===== sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt @ 0x08004658 (size 8) =====

void sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong *in_x18;
    int64_t *piVar1;
    char *arg2;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(param_1 + -0xe8),"","");
    sym.__ftrace_dbg(*(param_1 + -800),0x8001afb,0x80013eb,param_4);
    if (*(param_1 + 0xb9) == '\0') {
        arg2 = "";
    }
    else {
        piVar1 = *(*(param_1 + -0x38) + 8);
        if (piVar1 != NULL) {
            pcVar2 = *(*piVar1 + 0x178);
            if (pcVar2 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar2,0x8000d00);
                (*pcVar2)(piVar1);
            }
        }
        complete(param_1 + 0x70);
        *(param_1 + 0xb9) = 0;
        arg2 = "";
        *(param_1 + 0xb4) = 0;
    }
    ipc_log_string(*(param_1 + -0xe8),arg2,"");
    sym.__ftrace_dbg(*(param_1 + -800),arg2,0x80013eb,param_4);
    return;
}


// ===== sym.__traceiter_serial_info @ 0x08004660 (size 104) =====

ulong sym.__traceiter_serial_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x800e728;
    piVar1 = *0x800e728;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_serial_info @ 0x080046d0 (size 340) =====

//WARNING: Removing unreachable block (ram,0x08004914)

void sym.trace_event_raw_event_serial_info(int64_t arg1,int64_t arg2,int64_t arg3)

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
        goto code_r0x080047e4;
    }
    pcVar1 = "";
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
            pcVar6 = SoftwareBreakpoint(0x800,0x800481c);
            (*pcVar6)();
        }
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x080047e4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar10 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_serial_info;
    pcStack_e8 = sym.perf_trace_serial_info;
    iVar9 = sp_el0;
    pcVar1 = "";
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
            *(iStack_100 + 0x100) = ~(-1L << uVar8) & 0x8004824;
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
                pcVar6 = SoftwareBreakpoint(0x800,0x80049c8);
                (*pcVar6)();
            }
            perf_trace_run_bpf_submit(iVar9,iVar4,uStack_104,iVar10,1,iStack_100,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_f8) {
        __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_00 = 0x80049d0;
        bpf_trace_run2(in_tmp_ldXn);
        return;
    }
    return;
}


// ===== sym.perf_trace_serial_info @ 0x08004824 (size 440) =====

void sym.perf_trace_serial_info(int64_t arg1,uint32_t arg2,int64_t arg3)

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
    uVar2 = 0x8002498;
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
                pcVar7 = SoftwareBreakpoint(0x800,0x80049c8);
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
    *extraout_x18 = 0x80049d0;
    bpf_trace_run2(in_tmp_ldXn);
    return;
}


// ===== sym.__bpf_trace_serial_info @ 0x080049dc (size 36) =====

void sym.__bpf_trace_serial_info(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2();
    return;
}


// ===== sym.geni_se_dump_dbg_regs @ 0x08004a00 (size 712) =====

void sym.geni_se_dump_dbg_regs(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint uVar9;
    uint uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint uVar13;
    uint uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t in_x2;
    int64_t in_x3;
    int64_t iVar17;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar17 = *(arg1 + 0x10);
    if (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0) {
        ipc_log_string(*(arg1 + 0x380),"");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002251,in_x2,in_x3);
    }
    else {
        uVar1 = *(iVar17 + 0x600);
        uVar2 = *(iVar17 + 0x640);
        uVar3 = *(iVar17 + 0xc40);
        uVar4 = *(iVar17 + 0xd40);
        uVar5 = *(iVar17 + 0x804);
        uVar6 = *(iVar17 + 0x800);
        uVar7 = *(iVar17 + 0xe40);
        uVar8 = *(iVar17 + 0x604);
        uVar9 = *(iVar17 + 0xd3c);
        uVar10 = *(iVar17 + 0xd54);
        uVar11 = *(iVar17 + 0xc3c);
        uVar12 = *(iVar17 + 0xc54);
        uVar13 = *(iVar17 + 0x614);
        uVar14 = *(iVar17 + 0x644);
        uVar15 = *(iVar17 + 0xc48);
        uVar16 = *(iVar17 + 0xd48);
        ipc_log_string(*(arg1 + 0x380),"","",uVar1,*(iVar17 + 0x610),*(iVar17 + 0x40),*(iVar17 + 0x908));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x800243d,0x8002482,uVar1);
        ipc_log_string(*(arg1 + 0x380),"",uVar4,uVar3,uVar5,uVar6);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000f2c,uVar4,uVar3);
        ipc_log_string(*(arg1 + 0x380),"",uVar7,uVar8,uVar9,uVar10);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x800179b,uVar7,uVar8);
        ipc_log_string(*(arg1 + 0x380),"",uVar11,uVar12,uVar2);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001a75,uVar11,uVar12);
        ipc_log_string(*(arg1 + 0x380),"",uVar15,uVar16,uVar13,uVar14);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000d40,uVar15,uVar16);
    }
    return;
}


// ===== sym.__ftrace_dbg @ 0x08004d1c (size 304) =====

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
            piVar4 = *0x800e728;
            piVar3 = *0x800e728;
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


// ===== sym.msm_geni_serial_resources_on @ 0x08004e64 (size 256) =====

uint64_t sym.msm_geni_serial_resources_on(uint32_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t arg4;
    char *arg2;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (uVar2 == 0xfffffffffffffdc8) {
        arg4 = 0xffffffea;
    }
    else {
        uVar1 = pinctrl_select_state(*(uVar2 + 0x260),*(uVar2 + 0x270));
        if (uVar1 == 0) {
            uVar1 = geni_icc_enable(uVar2 + 0x288);
            if (uVar1 == 0) {
                uVar1 = geni_icc_set_bw(uVar2 + 0x288);
                if (uVar1 == 0) {
                    uVar1 = sym.geni_se_common_clks_on(*(uVar2 + 0x248),*(uVar2 + 0x250),*(uVar2 + 600));
                    arg4 = uVar1;
                    if (uVar1 == 0) {
                        return 0;
                    }
                    uVar3 = *(uVar2 + 0x380);
                    arg2 = "";
                }
                else {
                    arg4 = uVar1;
                    uVar3 = *(uVar2 + 0x380);
                    arg2 = "";
                }
            }
            else {
                arg4 = uVar1;
                uVar3 = *(uVar2 + 0x380);
                arg2 = "";
            }
        }
        else {
            arg4 = uVar1;
            uVar3 = *(uVar2 + 0x380);
            arg2 = "";
        }
        ipc_log_string(uVar3,arg2,"",arg4);
        sym.__ftrace_dbg(*(uVar2 + 0x148),arg2,0x80025ae,arg4);
    }
    return arg4;
}


// ===== sym.geni_se_common_clks_on @ 0x08004f64 (size 200) =====

int sym.geni_se_common_clks_on(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = clk_prepare(arg2);
    if (iVar1 == 0) {
        iVar1 = clk_enable(arg2);
        if (iVar1 == 0) {
            iVar1 = clk_prepare(arg3);
            if (iVar1 == 0) {
                iVar1 = clk_enable(arg3);
                if (iVar1 == 0) {
                    iVar1 = clk_prepare(arg1);
                    if (iVar1 == 0) {
                        iVar1 = clk_enable(arg1);
                        if (iVar1 == 0) {
                            return 0;
                        }
                        clk_unprepare(arg1);
                    }
                    clk_disable(arg3);
                }
                clk_unprepare(arg3);
            }
            clk_disable(arg2);
        }
        clk_unprepare(arg2);
    }
    return iVar1;
}


// ===== sym.msm_geni_serial_resources_off @ 0x0800502c (size 240) =====

uint64_t sym.msm_geni_serial_resources_off(uint32_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    uint64_t arg4;
    ulong uVar4;
    char *arg2;
    ulong uVar5;
    ulong unaff_x30;
    
    uVar2 = arg1;
    *in_x18 = unaff_x30;
    if (uVar2 == 0xfffffffffffffdc8) {
        arg4 = 0xffffffea;
    }
    else {
        uVar3 = *(uVar2 + 0x248);
        uVar4 = *(uVar2 + 0x250);
        uVar5 = *(uVar2 + 600);
        clk_disable(uVar3);
        clk_unprepare(uVar3);
        clk_disable(uVar4);
        clk_unprepare(uVar4);
        clk_disable(uVar5);
        clk_unprepare(uVar5);
        uVar1 = geni_icc_disable(uVar2 + 0x288);
        if (uVar1 == 0) {
            uVar1 = pinctrl_select_state(*(uVar2 + 0x260),*(uVar2 + 0x278));
            if (uVar1 == 0) {
                return 0;
            }
            uVar3 = *(uVar2 + 0x380);
            arg2 = "";
        }
        else {
            uVar3 = *(uVar2 + 0x380);
            arg2 = "";
        }
        arg4 = uVar1;
        ipc_log_string(uVar3,arg2,"",arg4);
        sym.__ftrace_dbg(*(uVar2 + 0x148),arg2,0x80015b7,arg4);
    }
    return arg4;
}


// ===== sym.trace_raw_output_serial_info @ 0x0800511c (size 120) =====

void sym.trace_raw_output_serial_info(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"",iVar2 + *(iVar2 + 8),iVar2 + *(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.msm_geni_serial_tx_empty @ 0x08005194 (size 128) =====

bool sym.msm_geni_serial_tx_empty(int64_t arg1)

{
    uint32_t uVar1;
    
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        return true;
    }
    if (*(arg1 + 0x208) == 2) {
        uVar1 = *(arg1 + 0x2e8) != 0;
    }
    else {
        uVar1 = *(*(arg1 + 0x10) + 0x800);
    }
    return uVar1 == 0;
}


// ===== sym.msm_geni_serial_set_mctrl @ 0x0800521c (size 452) =====

void sym.msm_geni_serial_set_mctrl(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0) {
        iVar2 = sp_el0;
        ipc_log_string(*(arg1 + 0x380),"","",iVar2 + 0x7a8,arg2 & 0xffffffffU);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001fae,0x8001123,iVar2 + 0x7a8);
        return;
    }
    uVar1 = 0x80000002;
    if ((arg2 & 4U) != 0) {
        uVar1 = 0;
    }
    *(arg1 + 0x3ac) = (arg2 & 4) >> 2 ^ 1;
    *(*(arg1 + 0x10) + 0x2ac) = uVar1;
    DataSynchronizationBarrier(3,3,0);
    if (*(arg1 + 0x3ac) == '\0') {
        if ((*(arg1 + 0x418) != 0x15) || (*(arg1 + 0x3c9) != '\0')) goto code_r0x08005348;
        uVar3 = 0;
        *(arg1 + 0x418) = 0;
    }
    else {
        if (*(arg1 + 0x3c9) != '\0') goto code_r0x08005348;
        uVar3 = 0x15;
        *(arg1 + 0x418) = 0x15;
    }
    ipc_log_string(*(arg1 + 0x380),"","",uVar3);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
code_r0x08005348:
    iVar2 = sp_el0;
    uVar3 = 0x8001fd6;
    if (*(arg1 + 0x3ac) != '\0') {
        uVar3 = 0x80019e5;
    }
    ipc_log_string(*(arg1 + 0x380),"","",iVar2 + 0x7a8,arg2 & 0xffffffffU,uVar1,uVar3);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x80026c4,0x8001123,iVar2 + 0x7a8);
    return;
}


// ===== sym.msm_geni_serial_get_mctrl @ 0x080053e4 (size 372) =====

uint32_t sym.msm_geni_serial_get_mctrl(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        iVar2 = sp_el0;
        ipc_log_string(*(arg1 + 0x380),"","",iVar2 + 0x7a8);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80019e9,0x800106f,iVar2 + 0x7a8);
        uVar4 = 0x160;
    }
    else {
        uVar1 = *(*(arg1 + 0x10) + 0x908);
        if ((uVar1 >> 1 & 1) == 0) {
            uVar3 = 0x160;
        }
        else {
            if (*(arg1 + 0x3c9) == '\0') {
                *(arg1 + 0x418) = 0x14;
                ipc_log_string(*(arg1 + 0x380),"","",0x14);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
            }
            uVar3 = 0x140;
        }
        uVar4 = uVar3 | 4;
        if (*(arg1 + 0x3ac) != '\0') {
            uVar4 = uVar3;
        }
        ipc_log_string(*(arg1 + 0x380),"","",uVar1,uVar4);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80015d5,0x800106f,uVar1);
    }
    return uVar4;
}


// ===== sym.msm_geni_serial_stop_tx @ 0x08005560 (size 180) =====

void sym.msm_geni_serial_stop_tx(int64_t arg1)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        _dev_err(*(arg1 + 0x148),"","");
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80017e5,0x800142b,in_x3);
    }
    else {
        sym.stop_tx_sequencer(arg1);
    }
    return;
}


// ===== sym.msm_geni_serial_start_tx @ 0x08005618 (size 984) =====

void sym.msm_geni_serial_start_tx(int64_t arg1)

{
    int16_t iVar1;
    int iVar2;
    ulong uVar3;
    uint64_t in_x3;
    uint32_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x100) == 0) {
code_r0x08005698:
        iVar5 = *(arg1 + 0x148);
        if ((*(iVar5 + 0x20c) != 0) && ((*(iVar5 + 0x200) & 7) == 0)) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x800212b,0x8001499,in_x3);
            __pm_runtime_resume(*(arg1 + 0x148),5);
            iVar5 = *(arg1 + 0x100);
            goto joined_r0x080057f0;
        }
        if ((*(iVar5 + 0x200) & 7) == 0) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x800114f,0x8001499,in_x3);
            __pm_runtime_resume(*(arg1 + 0x148),5);
        }
    }
    else {
        iVar1 = *(*(arg1 + 0x100) + 0x4a);
        iVar2 = *(arg1 + 300);
        if (iVar2 == iVar1) {
            if ((*(arg1 + 0x15f) != '\0') || (*(arg1 + 0x414) != 0)) {
                ipc_log_string(*(arg1 + 0x390),"","");
                return;
            }
            if (*(arg1 + 0x100) == 0) goto code_r0x08005698;
            iVar1 = *(*(arg1 + 0x100) + 0x4a);
            iVar2 = *(arg1 + 300);
        }
        if (iVar2 != iVar1) goto code_r0x08005698;
    }
    if (*(arg1 + 0x524) != 0) {
        *(arg1 + 0x524) = 0;
    }
    iVar2 = *(arg1 + 0x208);
    if (iVar2 == 3) {
        if (*(arg1 + 0x2e8) == 0) {
            queue_work_on(0x20,*(arg1 + 0x4c8),arg1 + 0x438);
            return;
        }
    }
    else if (iVar2 == 2) {
        if (*(arg1 + 0x2e8) == 0) {
            iVar2 = sym.msm_geni_serial_prep_dma_tx(arg1);
            if (iVar2 != -1) {
                return;
            }
            ipc_log_string(*(arg1 + 0x368),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001997,0x8001499,in_x3);
            iVar5 = *(arg1 + 0x100);
            goto joined_r0x080057f0;
        }
    }
    else {
        if (iVar2 != 1) {
            return;
        }
        if ((*(*(arg1 + 0x10) + 0x40) & 1) == 0) {
            if ((((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
                (*(*(arg1 + 0x148) + 0x20c) == 2)) && (*(*(arg1 + 0x148) + 0x1f8) == 0)) {
code_r0x0800599c:
                uVar4 = *(*(arg1 + 0x10) + 0x614);
                *(*(arg1 + 0x10) + 0x80c) = *(arg1 + 0x1fc);
                *(*(arg1 + 0x10) + 0x614) = uVar4 | 0x40000001;
                DataSynchronizationBarrier(3,3,0);
                return;
            }
            if (*(arg1 + 0x208) == 2) {
                uVar4 = *(arg1 + 0x2e8) != 0;
            }
            else {
                uVar4 = *(*(arg1 + 0x10) + 0x800);
            }
            if (uVar4 == 0) goto code_r0x0800599c;
        }
    }
    uVar4 = *(*(arg1 + 0x10) + 0x908);
    if (((uVar4 >> 1 & 1) != 0) && (*(arg1 + 0x3c9) == '\0')) {
        *(arg1 + 0x418) = 0x14;
        ipc_log_string(*(arg1 + 0x380),"","",0x14);
        in_x3 = *(arg1 + 0x418);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,in_x3);
    }
    *0x8002000 = *0x8002000 + 1;
    if (*0x8002000 * -0x33333333 < 0x33333334) {
        ipc_log_string(*(arg1 + 0x380),"","",uVar4);
        in_x3 = uVar4;
        sym.__ftrace_dbg(*(arg1 + 0x148),0x800260b,0x8001499,in_x3);
        *0x8002000 = 0;
        iVar5 = *(arg1 + 0x100);
    }
    else {
        iVar5 = *(arg1 + 0x100);
    }
joined_r0x080057f0:
    if ((iVar5 == 0) || (*(arg1 + 300) != *(iVar5 + 0x4a))) {
        if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
            ipc_log_string(*(arg1 + 0x378),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,in_x3);
        }
        else {
            iVar5 = *(arg1 + 0x148);
            if ((*(iVar5 + 0x200) & 7) == 0) {
                uVar3 = ktime_get_mono_fast_ns();
                *(iVar5 + 0x218) = uVar3;
                __pm_runtime_suspend(*(arg1 + 0x148),0xd);
            }
        }
    }
    return;
}


// ===== sym.msm_geni_serial_stop_rx @ 0x08005a10 (size 240) =====

void sym.msm_geni_serial_stop_rx(int64_t arg1)

{
    uint32_t uVar1;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80017e5,0x800115d,in_x3);
        complete(arg1 + 0x4d8);
    }
    else {
        uVar1 = sym.stop_rx_sequencer(arg1);
        if (uVar1 != 0) {
            ipc_log_string(*(arg1 + 0x380),"","",uVar1);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001175,0x800115d,uVar1);
        }
    }
    return;
}


// ===== sym.msm_geni_serial_break_ctl @ 0x08005b04 (size 300) =====

void sym.msm_geni_serial_break_ctl(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int in_w1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        iVar1 = sp_el0;
        ipc_log_string(*(arg1 + 0x380),"","",iVar1 + 0x7a8);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80019e9,0x8001ae1,iVar1 + 0x7a8);
    }
    else {
        if (in_w1 == 0) {
            DataMemoryBarrier(0,2);
            *(*(arg1 + 0x288) + 0x600) = 0x28000000;
        }
        else {
            uVar2 = sym.wait_for_transfers_inflight(arg1);
            if (uVar2 != 0) {
                ipc_log_string(*(arg1 + 0x380),"","",uVar2);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001381,0x8001ae1,uVar2);
            }
            DataMemoryBarrier(0,2);
            *(*(arg1 + 0x288) + 0x600) = 0x20000000;
        }
        DataSynchronizationBarrier(3,3,0);
    }
    return;
}


// ===== sym.msm_geni_serial_startup @ 0x08005c34 (size 972) =====

//WARNING: Type propagation algorithm not settling

uint32_t sym.msm_geni_serial_startup(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t arg4;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(arg1 + 0x380),"","",1);
    arg4 = 1;
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002045,0x80029b1,1);
    *(arg1 + 0x3c8) = 1;
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        *(arg1 + 0x530) = 0;
        uVar2 = sym.msm_geni_serial_power_on(arg1);
        if (uVar2 != 0) {
            _dev_err(*(arg1 + 0x148),"","",uVar2);
            return uVar2;
        }
    }
    if (arg1 == 0) {
code_r0x08005d7c:
        cVar1 = *(arg1 + 0x218);
    }
    else {
        uVar3 = geni_se_get_qup_hw_version(arg1 + 0x288);
        uVar2 = 0xff0000;
        if (((uVar3 & 0xffe0000) < 0x90001 || uVar3 >> 0x1c != 3) && uVar3 >> 0x1e == 0) {
            uVar2 = 0x3f0000;
        }
        uVar2 = uVar2 & *(*(arg1 + 0x288) + 0xe24);
        *(arg1 + 0x1f0) = uVar2 >> 0x10;
        if (uVar2 == 0) {
            uVar4 = *(arg1 + 0x148);
            pcVar5 = "";
        }
        else {
            uVar2 = *(*(arg1 + 0x288) + 0xe24) >> 0x18 & 0x3f;
            *(arg1 + 500) = uVar2;
            if (uVar2 == 0) {
                uVar4 = *(arg1 + 0x148);
                pcVar5 = "";
            }
            else {
                uVar3 = geni_se_get_qup_hw_version(arg1 + 0x288);
                uVar2 = 0xff0000;
                if (((uVar3 & 0xffe0000) < 0x90001 || uVar3 >> 0x1c != 3) && uVar3 >> 0x1e == 0) {
                    uVar2 = 0x3f0000;
                }
                uVar2 = uVar2 & *(*(arg1 + 0x288) + 0xe28);
                *(arg1 + 0x1f8) = uVar2 >> 0x10;
                if (uVar2 != 0) {
                    *(arg1 + 0xb4) = *(arg1 + 500) * *(arg1 + 0x1f0) >> 3;
                    goto code_r0x08005d7c;
                }
                uVar4 = *(arg1 + 0x148);
                pcVar5 = "";
            }
        }
        _dev_err(uVar4,pcVar5,"");
        cVar1 = *(arg1 + 0x218);
    }
    if ((cVar1 == '\0') && (uVar2 = sym.msm_geni_serial_port_setup(arg1), uVar2 != 0)) {
        ipc_log_string(*(arg1 + 0x380),"","",uVar2);
        arg4 = uVar2;
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80019a5,0x80029b1,arg4);
        iVar6 = *(arg1 + 0x100);
    }
    else {
        DataSynchronizationBarrier(3,3,0);
        if (((*(arg1 + 0x100) != 0) && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))) || (*(arg1 + 0x520) != '\0')) {
            enable_irq(*(arg1 + 0xa0));
        }
        if ((*(arg1 + 0x354) < 1) || (uVar2 = irq_set_irq_wake(*(arg1 + 0x354),1), uVar2 == 0)) {
            if ((*(arg1 + 0x532) == '\0') ||
               ((iVar6 = *(*(arg1 + 200) + 0xa8), iVar6 == 0 || (*(**(iVar6 + 0x58) + 0x40) != 0)))) {
                uVar2 = 0;
                iVar6 = *(arg1 + 0x100);
            }
            else {
                ipc_log_string(*(arg1 + 0x380),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001e81,0x80029b1,arg4);
                uVar2 = 0;
                *(**(iVar6 + 0x58) + 0x40) = sym.msm_geni_uart_tty_ioctl.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                iVar6 = *(arg1 + 0x100);
            }
        }
        else {
            arg4 = uVar2;
            _dev_err(*(arg1 + 0x148),"","");
            iVar6 = *(arg1 + 0x100);
        }
    }
    if ((iVar6 == 0) || (*(arg1 + 300) != *(iVar6 + 0x4a))) {
        if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
            ipc_log_string(*(arg1 + 0x378),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,arg4);
        }
        else {
            iVar6 = *(arg1 + 0x148);
            if ((*(iVar6 + 0x200) & 7) == 0) {
                uVar4 = ktime_get_mono_fast_ns();
                *(iVar6 + 0x218) = uVar4;
                __pm_runtime_suspend(*(arg1 + 0x148),0xd);
            }
        }
    }
    *(arg1 + 0x3c8) = 0;
    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x80029e3,0x80029b1,uVar2);
    return uVar2;
}


// ===== sym.msm_geni_serial_shutdown @ 0x08006010 (size 1264) =====

void sym.msm_geni_serial_shutdown(int64_t arg1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t arg4;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x230);
    ipc_log_string(*(arg1 + 0x380),"","",1);
    arg4 = 1;
    sym.__ftrace_dbg(*(arg1 + 0x148),0x800206b,0x8001a2a,1);
    *(arg1 + 0x531) = 1;
    if ((*(arg1 + 0x100) != 0) && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))) {
        console_stop();
        disable_irq(*(arg1 + 0xa0));
        cVar1 = *(arg1 + 0x520);
        goto joined_r0x0800630c;
    }
    sym.msm_geni_serial_power_on(arg1);
    if ((0 < *(arg1 + 0x354)) && (*(arg1 + 0x3cf) != '\0')) {
        irq_set_irq_wake(*(arg1 + 0x354),0);
        disable_irq(*(arg1 + 0x354));
        *(arg1 + 0x3cf) = 0;
    }
    if (*(arg1 + 0x208) == 3) {
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001d6e,0x8001a2a,arg4);
        iVar2 = wait_for_completion_timeout(arg1 + 0x4d8,0x19);
        if (iVar2 == 0) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80013ce,0x8001a2a,arg4);
        }
        piVar6 = *(arg1 + 0x430);
        if (piVar6[1] != 0) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001a43,0x8001a2a,arg4);
            if (((arg1 + 0x330 != NULL) && (iVar7 != 0)) && (*(arg1 + 0x300) != 0)) {
                arg4 = *(arg1 + 0x330);
                dma_free_attrs(iVar7,0x800,*(arg1 + 0x300),arg4,0);
            }
            if (((arg1 + 0x338 != NULL) && (iVar7 != 0)) && (*(arg1 + 0x308) != 0)) {
                arg4 = *(arg1 + 0x338);
                dma_free_attrs(iVar7,0x800,*(arg1 + 0x308),arg4,0);
            }
            if (((arg1 + 0x340 != NULL) && (iVar7 != 0)) && (*(arg1 + 0x310) != 0)) {
                arg4 = *(arg1 + 0x340);
                dma_free_attrs(iVar7,0x800,*(arg1 + 0x310),arg4,0);
            }
            if (((arg1 + 0x348 != NULL) && (iVar7 != 0)) && (*(arg1 + 0x318) != 0)) {
                arg4 = *(arg1 + 0x348);
                dma_free_attrs(iVar7,0x800,*(arg1 + 0x318),arg4,0);
            }
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80014e3,0x8001a2a,arg4);
            piVar6 = *(arg1 + 0x430);
        }
        if (*piVar6 != 0) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8002714,0x8001a2a,arg4);
            sym.msm_geni_serial_stop_tx(arg1);
            iVar5 = *(arg1 + 0x2e8);
            if (iVar5 != -1) {
                if (iVar5 == 0) goto code_r0x08006304;
                arg4 = 1;
                dma_unmap_page_attrs(iVar7,iVar5,*(arg1 + 0x2f0),1,0);
            }
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80014e3,0x8001a2a,arg4);
        }
    }
    else {
        sym.msm_geni_serial_stop_tx(arg1);
    }
code_r0x08006304:
    *(arg1 + 0x518) = 0;
    cVar1 = *(arg1 + 0x520);
joined_r0x0800630c:
    if (cVar1 != '\0') {
        disable_irq(*(arg1 + 0xa0));
    }
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        if (*(arg1 + 0x3a4) != 0) {
            if (0 < *(arg1 + 0x3a4)) {
                iVar2 = 0;
                do {
                    ipc_log_string(*(arg1 + 0x378),"","");
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x8000e64,0x8001a2a,arg4);
                    if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
                        ipc_log_string(*(arg1 + 0x378),"","");
                        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,arg4);
                    }
                    else {
                        iVar7 = *(arg1 + 0x148);
                        if ((*(iVar7 + 0x200) & 7) == 0) {
                            uVar4 = ktime_get_mono_fast_ns();
                            *(iVar7 + 0x218) = uVar4;
                            __pm_runtime_suspend(*(arg1 + 0x148),0xd);
                        }
                    }
                    iVar2 = iVar2 + 1;
                } while (iVar2 < *(arg1 + 0x3a4));
            }
            *(arg1 + 0x3a4) = 0;
        }
        if ((*(*(arg1 + 0x148) + 0x200) & 7) == 0) {
            uVar3 = __pm_runtime_suspend(*(arg1 + 0x148),4);
            if (uVar3 != 0) {
                ipc_log_string(*(arg1 + 0x378),"","",uVar3);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001746,0x8001a2a,uVar3);
            }
        }
        else {
            uVar3 = 0;
        }
        if (((*(arg1 + 0x268) != 0) && (*(arg1 + 0x268) < 0xfffffffffffff001)) &&
           (uVar3 = pinctrl_select_state(*(arg1 + 0x260)), uVar3 != 0)) {
            ipc_log_string(*(arg1 + 0x380),"","",uVar3);
        }
        *(arg1 + 0x418) = 0;
        *(arg1 + 0x528) = 0;
        *(arg1 + 0x524) = 0;
    }
    else {
        uVar3 = 0;
    }
    *(arg1 + 0x531) = 0;
    ipc_log_string(*(arg1 + 0x380),"","",uVar3);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002708,0x8001a2a,uVar3);
    return;
}


// ===== sym.msm_geni_serial_flush @ 0x08006504 (size 44) =====

void sym.msm_geni_serial_flush(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x524) = 1;
    sym.stop_tx_sequencer(arg1);
    return;
}


// ===== sym.msm_geni_serial_set_termios @ 0x08006530 (size 476) =====

void sym.msm_geni_serial_set_termios(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg4;
    ulong *in_x18;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (iVar1 = sym.msm_geni_serial_power_on(arg1), iVar1 != 0)) {
        ipc_log_string(*(arg1 + 0x380),"","",iVar1);
    }
    else {
        if (*(arg1 + 0x4c8) != 0) {
            flush_workqueue();
        }
        if (*(arg1 + 0x4d0) != 0) {
            flush_workqueue();
        }
        *(arg1 + 0x4d8) = 0;
        sym.msm_geni_serial_stop_rx(arg1);
        if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
           (iVar3 = wait_for_completion_timeout(arg1 + 0x4d8,0x19), iVar3 == 0)) {
            ipc_log_string(*(arg1 + 0x380),"","");
        }
        arg4 = 300;
        uVar2 = uart_get_baud_rate(arg1,arg2,arg3,300,4000000);
        arg3_00 = uVar2;
        *(arg1 + 0x3a0) = uVar2;
        iVar1 = sym.msm_geni_serial_config_baud_rate(arg1,arg2,arg3_00);
        if (iVar1 == 0) {
            if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
                *(arg1 + 0x528) = arg2;
            }
            ipc_log_string(*(arg1 + 0x380),"","");
            arg4 = arg3_00;
        }
        sym.msm_geni_serial_start_rx(arg1);
        if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
            if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(arg1 + 0x378),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,arg4);
            }
            else {
                iVar3 = *(arg1 + 0x148);
                if ((*(iVar3 + 0x200) & 7) == 0) {
                    uVar4 = ktime_get_mono_fast_ns();
                    *(iVar3 + 0x218) = uVar4;
                    __pm_runtime_suspend(*(arg1 + 0x148),0xd);
                }
            }
        }
    }
    return;
}


// ===== sym.msm_geni_serial_hs_pm @ 0x08006710 (size 344) =====

void sym.msm_geni_serial_hs_pm(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg1 + 0x148) + 0x200) & 7) != 0) {
        uVar1 = 3;
        if (arg3 != 4) {
            uVar1 = arg3;
        }
        if ((arg2 == 0) && (uVar1 == 3)) {
            sym.msm_geni_serial_resources_on(arg1);
            ipc_log_string(*(arg1 + 0x380),"","",1,*(arg1 + 0x420));
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,1);
            *(*(arg1 + 0x10) + 0x48) = *(arg1 + 0x420);
            *(*(arg1 + 0x10) + 0x4c) = *(arg1 + 0x420);
            *(arg1 + 0x414) = 0;
        }
        else if ((arg2 == 3) && (uVar1 == 0)) {
            *(arg1 + 0x414) = 1;
            ipc_log_string(*(arg1 + 0x380),"","",0,*(arg1 + 0x420));
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,0);
            *(*(arg1 + 0x10) + 0x48) = 1;
            *(*(arg1 + 0x10) + 0x4c) = 1;
            sym.msm_geni_serial_resources_off(arg1);
        }
    }
    return;
}


// ===== sym.msm_geni_serial_get_type @ 0x08006870 (size 20) =====

ulong sym.msm_geni_serial_get_type(void)

{
    return 0x8001913;
}


// ===== sym.msm_geni_serial_config_port @ 0x08006884 (size 28) =====

void sym.msm_geni_serial_config_port(int64_t arg1)

{
    uint32_t in_w1;
    
    if ((in_w1 & 1) != 0) {
        *(arg1 + 0x11c) = 0x58;
    }
    return;
}


// ===== sym.msm_geni_serial_ioctl @ 0x080068a0 (size 288) =====

//WARNING: Switch with 1 destination removed at 0x0800695c

ulong sym.msm_geni_serial_ioctl(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    ipc_log_string(*(arg1 + 0x380),"","",iVar1 + 0x7a8,arg2 & 0xffffffff);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002726,0x8001d82,iVar1 + 0x7a8);
    if ((*(arg1 + 0x520) == '\0') && (arg2 - 0x54ecU < 4)) {
        do {
    //WARNING: Do nothing block with infinite loop
    //switch table (4 cases) at 0x8002c40
        } while( true );
    }
    return 0xfffffdfd;
}


// ===== sym.msm_geni_update_uart_error_code @ 0x08006c6c (size 120) =====

void sym.msm_geni_update_uart_error_code(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3c9) == '\0') {
        *(arg1 + 0x418) = arg2;
        ipc_log_string(*(arg1 + 0x380),"","",arg2 & 0xffffffff);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
    }
    return;
}


// ===== sym.stop_tx_sequencer @ 0x08006ce4 (size 1228) =====

void sym.stop_tx_sequencer(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t arg4;
    ulong uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x208) == 3) {
        queue_work_on(0x20,*(arg1 + 0x4c8),arg1 + 0x498);
        return;
    }
    uVar2 = *(*(arg1 + 0x10) + 0x40);
    if ((uVar2 & 1) == 0) {
        return;
    }
    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
    arg4 = uVar2;
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8000ec8,0x8001e51,arg4);
    *(arg1 + 0x3cb) = 0;
    *(arg1 + 0x3d0) = 0;
    *(arg1 + 0x3cd) = 1;
    uVar2 = sym.msm_serial_try_disable_interrupts(arg1);
    *(*(arg1 + 0x288) + 0x604) = 4;
    uVar3 = sym.geni_wait_for_cmd_done(arg1,uVar2 & 1);
    if ((uVar3 & 1) != 0) {
        ipc_log_string(*(arg1 + 0x390),"","",*(*(arg1 + 0x10) + 0x40));
        ipc_log_string(*(arg1 + 0x380),"","",*(*(arg1 + 0x10) + 0x40));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001089,0x8001e51,*(*(arg1 + 0x10) + 0x40));
        if (*(arg1 + 0x3c9) == '\0') {
            *(arg1 + 0x418) = 8;
            ipc_log_string(*(arg1 + 0x380),"","",8);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
        }
        sym.geni_se_dump_dbg_regs(arg1);
        *(arg1 + 0x3cb) = 0;
        *(arg1 + 0x3d0) = 0;
        *(*(arg1 + 0x288) + 0x604) = 2;
        uVar3 = sym.geni_wait_for_cmd_done(arg1,uVar2 & 1);
        if ((uVar3 & 1) != 0) {
            ipc_log_string(*(arg1 + 0x390),"","",*(*(arg1 + 0x10) + 0x40));
            ipc_log_string(*(arg1 + 0x380),"","",*(*(arg1 + 0x10) + 0x40));
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80021c7,0x8001e51,*(*(arg1 + 0x10) + 0x40));
            if (*(arg1 + 0x3c9) == '\0') {
                *(arg1 + 0x418) = 9;
                ipc_log_string(*(arg1 + 0x380),"","",9);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
            }
            sym.geni_se_dump_dbg_regs(arg1);
        }
        *(*(arg1 + 0x10) + 0x2ac) = 0x80000001;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg1 + 0x10) + 0x2ac);
        ipc_log_string(*(arg1 + 0x380),"","",uVar1);
        arg4 = uVar1;
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002b00,0x8001614,arg4);
        sym.msm_geni_serial_set_manual_flow(1,arg1);
        *(*(arg1 + 0x10) + 0x20) = 1;
    }
    if (*(arg1 + 0x208) != 2) goto code_r0x08007090;
    if ((*(*(arg1 + 0x10) + 0xe40) & 1) != 0) {
        *(arg1 + 0x3cb) = 0;
        *(arg1 + 0x3d0) = 0;
        *(*(arg1 + 0x10) + 0xc58) = 1;
        uVar3 = sym.geni_wait_for_cmd_done(arg1,uVar2 & 1);
        if ((uVar3 & 1) == 0) {
            if (*(arg1 + 0x3c9) == '\0') {
                uVar4 = 0;
                *(arg1 + 0x418) = 0;
                goto code_r0x08007044;
            }
        }
        else {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000f76,0x8001e51,arg4);
            if (*(arg1 + 0x3c9) == '\0') {
                uVar4 = 10;
                *(arg1 + 0x418) = 10;
code_r0x08007044:
                ipc_log_string(*(arg1 + 0x380),"","",uVar4);
                arg4 = *(arg1 + 0x418);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,arg4);
            }
        }
    }
    if (*(arg1 + 0x2e8) != 0) {
        geni_se_tx_dma_unprep(arg1 + 0x288,*(arg1 + 0x2e8),*(arg1 + 0x2f0));
        *(arg1 + 0x2e8) = 0;
    }
code_r0x08007090:
    sym.msm_geni_serial_enable_interrupts(arg1);
    *(arg1 + 0x3cd) = 0;
    *(arg1 + 0x2f0) = 0;
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x800113d,0x8001e51,arg4);
        if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
            ipc_log_string(*(arg1 + 0x378),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,arg4);
        }
        else {
            iVar5 = *(arg1 + 0x148);
            if ((*(iVar5 + 0x200) & 7) == 0) {
                uVar4 = ktime_get_mono_fast_ns();
                *(iVar5 + 0x218) = uVar4;
                __pm_runtime_suspend(*(arg1 + 0x148),0xd);
            }
        }
    }
    uVar2 = *(*(arg1 + 0x10) + 0x40);
    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002930,0x8001e51,uVar2);
    return;
}


// ===== sym.msm_serial_try_disable_interrupts @ 0x080071dc (size 400) =====

bool sym.msm_serial_try_disable_interrupts(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = daif;
    uVar4 = uVar1 & 0x80;
    if ((uVar1 & 0x80) == 0) {
        uVar4 = 0x60;
        uVar2 = daif;
        daif = uVar2 | 0xc0;
    }
    iVar3 = _raw_spin_trylock(uVar4,arg1);
    if (iVar3 == 0) {
        daif = uVar1;
        uVar4 = *(*(arg1 + 0x10) + 0x644);
        *(*(arg1 + 0x10) + 0x614) = *(*(arg1 + 0x10) + 0x614) & 0xf33fffcf;
        *(*(arg1 + 0x10) + 0x644) = uVar4 & 0xf3ffffcf;
        if (*(arg1 + 0x208) == 2) {
            *(*(arg1 + 0x10) + 0xc50) = 0x400f;
            *(*(arg1 + 0x10) + 0xd50) = 0x9ef;
        }
        if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
            uVar4 = *(*(arg1 + 0x10) + 0x614);
            ipc_log_string(*(arg1 + 0x398),"","",uVar4,*(*(arg1 + 0x10) + 0x644),*(*(arg1 + 0x10) + 0xc48),
                           *(*(arg1 + 0x10) + 0xd48));
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8002323,0x80018bf,uVar4);
        }
    }
    else {
        _raw_spin_unlock_irqrestore(arg1,uVar1);
    }
    return iVar3 == 0;
}


// ===== sym.geni_wait_for_cmd_done @ 0x080073a0 (size 404) =====

void sym.geni_wait_for_cmd_done(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    uint64_t arg4;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_50 = 0;
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        arg4 = arg2 & 1;
        ipc_log_string(*(arg1 + 0x380),"","",arg4);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x800195a,0x8001969,arg4);
    }
    if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x3cd) == '\0') {
            if (*(arg1 + 0x3ce) == '\0') goto code_r0x080074f0;
            arg1 = arg1 + 0x3f0;
        }
        else {
            arg1 = arg1 + 0x3d0;
        }
        iVar5 = wait_for_completion_timeout(arg1,0x19);
    }
    else {
        if (*(arg1 + 0x3cd) == '\0') {
            if ((*(arg1 + 0x3ce) != '\0') && (*(arg1 + 0x3cc) == '\0')) {
                iVar6 = 1000;
                do {
                    sym.msm_geni_serial_handle_isr(arg1,&uStack_50,1);
                    iVar5 = iVar6 + -1;
                    __const_udelay(0x68dbc);
                    if (*(arg1 + 0x3cc) != '\0') break;
                    bVar4 = iVar6 != 1;
                    iVar6 = iVar5;
                } while (bVar4);
                goto code_r0x080074f4;
            }
        }
        else if (*(arg1 + 0x3cb) == '\0') {
            iVar6 = 1000;
            do {
                sym.msm_geni_serial_handle_isr(arg1,&uStack_50,1);
                iVar5 = iVar6 + -1;
                __const_udelay(0x68dbc);
                if (*(arg1 + 0x3cb) != '\0') break;
                bVar4 = iVar6 != 1;
                iVar6 = iVar5;
            } while (bVar4);
            goto code_r0x080074f4;
        }
code_r0x080074f0:
        iVar5 = 1000;
    }
code_r0x080074f4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        iVar5 = __stack_chk_fail(iVar5 == 0);
        *extraout_x18 = sym.msm_geni_serial_enable_interrupts;
        uVar1 = *(*(iVar5 + 0x10) + 0x614);
        uVar3 = *(*(iVar5 + 0x10) + 0x644) | 0xc000030;
        bVar4 = *(iVar5 + 0x428) != '\0';
        uVar2 = uVar1 | 0xcc00030;
        if (bVar4) {
            uVar2 = (uVar1 | 0xc000030) & 0xfbffffff | 0xc00000;
        }
        *(*(iVar5 + 0x10) + 0x614) = uVar2;
        if (bVar4) {
            uVar3 = uVar3 & 0xfbffffff;
        }
        *(*(iVar5 + 0x10) + 0x644) = uVar3;
        if (*(iVar5 + 0x208) == 2) {
            *(*(iVar5 + 0x10) + 0xc4c) = 0x400f;
            *(*(iVar5 + 0x10) + 0xd4c) = 0x9ef;
        }
        if ((*(iVar5 + 0x100) == 0) || (*(iVar5 + 300) != *(*(iVar5 + 0x100) + 0x4a))) {
            uVar2 = *(*(iVar5 + 0x10) + 0x614);
            ipc_log_string(*(iVar5 + 0x398),"","",uVar2,*(*(iVar5 + 0x10) + 0x644),*(*(iVar5 + 0x10) + 0xc48),
                           *(*(iVar5 + 0x10) + 0xd48),in_x7,&stack0xffffffffffffffc0,
                           sym.msm_geni_serial_enable_interrupts);
            sym.__ftrace_dbg(*(iVar5 + 0x148),0x8002323,0x80027f3,uVar2);
        }
        return;
    }
    return;
}


// ===== sym.msm_geni_serial_enable_interrupts @ 0x08007534 (size 356) =====

void sym.msm_geni_serial_enable_interrupts(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x10) + 0x614);
    uVar3 = *(*(arg1 + 0x10) + 0x644) | 0xc000030;
    bVar4 = *(arg1 + 0x428) != '\0';
    uVar2 = uVar1 | 0xcc00030;
    if (bVar4) {
        uVar2 = (uVar1 | 0xc000030) & 0xfbffffff | 0xc00000;
    }
    *(*(arg1 + 0x10) + 0x614) = uVar2;
    if (bVar4) {
        uVar3 = uVar3 & 0xfbffffff;
    }
    *(*(arg1 + 0x10) + 0x644) = uVar3;
    if (*(arg1 + 0x208) == 2) {
        *(*(arg1 + 0x10) + 0xc4c) = 0x400f;
        *(*(arg1 + 0x10) + 0xd4c) = 0x9ef;
    }
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        uVar2 = *(*(arg1 + 0x10) + 0x614);
        ipc_log_string(*(arg1 + 0x398),"","",uVar2,*(*(arg1 + 0x10) + 0x644),*(*(arg1 + 0x10) + 0xc48),
                       *(*(arg1 + 0x10) + 0xd48));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002323,0x80027f3,uVar2);
    }
    return;
}


// ===== sym.msm_geni_serial_handle_isr @ 0x080076b0 (size 1920) =====

void sym.msm_geni_serial_handle_isr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    char *arg3_00;
    uint64_t in_x3;
    uint8_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    ulong *in_x18;
    ulong uVar19;
    int64_t iVar20;
    code *pcVar21;
    int64_t iVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar20 = *(arg1 + 200);
    iVar22 = *(iVar20 + 0xa8);
    if (((*(arg1 + 0x100) != 0) && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))) && (*(arg1 + 0x414) != 0)) {
        ipc_log_string(*(arg1 + 0x390),"","");
        return;
    }
    uVar2 = *(*(arg1 + 0x10) + 0x610);
    uVar3 = *(*(arg1 + 0x10) + 0x640);
    arg3_00 = arg3;
    if ((*(arg1 + 0x100) != 0) && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))) {
        arg3_00 = "";
        in_x3 = uVar3;
        ipc_log_string(*(arg1 + 0x390),"","",in_x3,uVar2);
    }
    *(*(arg1 + 0x10) + 0x618) = uVar2;
    *(*(arg1 + 0x10) + 0x648) = uVar3;
    if ((uVar2 >> 2 & 1) != 0) {
        if ((*(arg1 + 0x100) != 0) && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))) {
            ipc_log_string(*(arg1 + 0x390),"","",uVar3,uVar2);
            return;
        }
        if (*(arg1 + 0x3c9) == '\0') {
            *(arg1 + 0x418) = 0xf;
            ipc_log_string(*(arg1 + 0x380),"","",0xf);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
        }
    //WARNING: Does not return
        pcVar21 = SoftwareBreakpoint(0x800,0x8007880);
        (*pcVar21)();
    }
    if ((uVar2 & 0xc00000) != 0) {
        *(arg1 + 0xd0) = *(arg1 + 0xd0) + 1;
    }
    if ((uVar3 >> 0x19 & 1) != 0) {
        *(arg1 + 0xec) = *(arg1 + 0xec) + 1;
        iVar13 = *(iVar20 + 0xa0);
        if ((*(iVar13 + 0x18) & 1) == 0) {
            if (*(iVar13 + 0x10) <= *(iVar13 + 8)) goto code_r0x08007884;
            *(iVar13 + 0x20 + *(iVar13 + 8) + *(iVar13 + 0x10)) = 4;
            iVar6 = *(iVar13 + 8);
            *(iVar13 + 8) = iVar6 + 1;
            *(iVar13 + 0x20 + iVar6) = 0;
        }
        else {
code_r0x08007884:
            __tty_insert_flip_char(iVar20,0,4);
        }
        arg3_00 = "";
        ipc_log_string(*(arg1 + 0x380),"","",uVar3,*(arg1 + 0xf8));
        in_x3 = uVar3;
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80021ff,0x8002362,in_x3);
        if (*(arg1 + 0x3c9) == '\0') {
            arg3_00 = "";
            *(arg1 + 0x418) = 0x10;
            ipc_log_string(*(arg1 + 0x380),"","",0x10);
            in_x3 = *(arg1 + 0x418);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,in_x3);
        }
    }
    if (*(*(arg1 + 0x10) + 600) == 0) {
        if ((uVar2 & *(*(arg1 + 0x10) + 0x614) & 0x40000001) != 0) {
            iVar20 = *(arg1 + 200);
            if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
                uVar14 = *(arg1 + 500) >> 3;
            }
            else {
                uVar14 = 1;
            }
            uVar5 = *(*(arg1 + 0x10) + 0x800);
            if ((*(*(arg1 + 0x10) + 0x40) & 1) == 0) {
                uVar16 = *(iVar20 + 0x1b8) - *(iVar20 + 0x1bc) & 0xfff;
                if ((uVar2 & 1) == 0) goto code_r0x08007abc;
code_r0x08007ab4:
                if ((uVar16 != 0) || (uVar5 != 0)) goto code_r0x08007abc;
            }
            else {
                uVar16 = *(arg1 + 0x3c4);
                if ((uVar2 & 1) != 0) goto code_r0x08007ab4;
code_r0x08007abc:
                uVar5 = (*(arg1 + 0x1f0) - (uVar5 & 0xfffffff)) * uVar14;
                uVar5 = uVar5 & (uVar5 >> 0x1f ^ 0xffffffffU);
                if (uVar16 <= uVar5) {
                    uVar5 = uVar16;
                }
                if (uVar5 != 0) {
                    uVar15 = *(iVar20 + 0x1bc);
                    if (*(arg1 + 0x3c4) == 0) {
                        *(*(arg1 + 0x10) + 0x270) = uVar16;
                        *(*(arg1 + 0x10) + 0x600) = 0x8000000;
                        DataSynchronizationBarrier(3,3,0);
                        *(arg1 + 0x3c4) = uVar16;
                        uVar16 = *(*(arg1 + 0x10) + 0x614);
                        if ((uVar16 >> 0x1e & 1) == 0) {
                            *(*(arg1 + 0x10) + 0x614) = uVar16 | 0x40000000;
                        }
                    }
                    uVar16 = 0;
                    uVar8 = uVar5;
                    do {
                        uVar1 = uVar8;
                        if (uVar14 <= uVar8) {
                            uVar1 = uVar14;
                        }
                        if (uVar1 == 0) {
                            uVar17 = 0;
                        }
                        else {
                            uVar18 = 0;
                            uVar17 = 0;
                            uVar10 = uVar1;
                            do {
                                iVar22 = uVar15;
                                uVar15 = uVar15 + 1 & 0xfff;
                                uVar10 = uVar10 - 1;
                                uVar7 = uVar18 & 0x1f;
                                uVar18 = uVar18 + 8;
                                uVar17 = *(*(iVar20 + 0x1b0) + iVar22) << uVar7 | uVar17;
                            } while (uVar10 != 0);
                        }
                        uVar16 = uVar1 + uVar16;
                        uVar8 = uVar8 - uVar1;
                        *(*(arg1 + 0x10) + 0x700) = uVar17;
                        *(arg1 + 0xe4) = *(arg1 + 0xe4) + uVar1;
                        *(arg1 + 0x3c4) = *(arg1 + 0x3c4) - uVar1;
                        DataSynchronizationBarrier(3,2,0);
                    } while (uVar16 < uVar5);
                    *(iVar20 + 0x1bc) = uVar15;
                    *(*(arg1 + 0x10) + 0x618) = 0x40000000;
                }
            }
            if (*(arg1 + 0x3c4) == 0) {
                *(*(arg1 + 0x10) + 0x614) = *(*(arg1 + 0x10) + 0x614) & 0xbfffffff;
            }
            if ((*(iVar20 + 0x1b8) - *(iVar20 + 0x1bc) & 0xf00U) == 0) {
                uart_write_wakeup(arg1);
            }
        }
        uVar19 = *(arg1 + 200);
        if ((uVar3 & 0x600) == 0) {
            if ((uVar3 & 0x1800) != 0) {
                *(arg1 + 0xf4) = *(arg1 + 0xf4) + 1;
                ipc_log_string(*(arg1 + 0x380),"","",uVar3);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001980,0x80025e1,uVar3);
            }
            uVar12 = 0;
        }
        else {
            if ((uVar3 >> 9 & 1) != 0) {
                *(arg1 + 0xf0) = *(arg1 + 0xf0) + 1;
            }
            ipc_log_string(*(arg1 + 0x380),"","",uVar3);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000e1c,0x80025e1,uVar3);
            uVar12 = 1;
        }
        uVar9 = (uVar3 & 0x30) != 0;
        if ((uVar3 & 0xc000000) != 0) {
            uVar12 = uVar9 | uVar12;
            uVar3 = *(*(arg1 + 0x10) + 0x804);
            if ((uVar3 & 0x1ffffff) != 0) {
                pcVar21 = *(arg1 + 0x228);
                if (1 < (pcVar21 + -0x8004530 >> 3 | pcVar21 << 0x3d)) {
                    __cfi_slowpath_diag(0xb1379e7db60b762b,pcVar21,0x8000c80,uVar3 & 0x80000000);
                }
                (*pcVar21)(arg1,uVar3 & 0x1ffffff,uVar3 >> 0x1c & 7,uVar3 & 0x80000000,uVar12);
            }
            if (uVar12 == 0 && (arg3 & 1U) == 0) {
                _raw_spin_unlock_irqrestore(arg1,*arg2);
                tty_flip_buffer_push(uVar19);
                uVar19 = _raw_spin_lock_irqsave(arg1);
                *arg2 = uVar19;
            }
            else {
                if (uVar12 != 0) goto joined_r0x08007d88;
                tty_flip_buffer_push(uVar19);
            }
            if ((uVar2 & 0x30) == 0) {
                return;
            }
            iVar20 = arg1 + 0x3d0;
            *(arg1 + 0x3cb) = 1;
            goto code_r0x08007dd0;
        }
joined_r0x08007d88:
        if ((uVar2 & 0x30) != 0) {
            *(arg1 + 0x3cb) = 1;
            complete(arg1 + 0x3d0);
        }
        if ((uVar9 & 1) == 0) {
            return;
        }
    }
    else {
        iVar6 = *(*(arg1 + 0x10) + 0xc40);
        iVar4 = *(*(arg1 + 0x10) + 0xd40);
        if ((((uVar2 != 0) || (uVar3 != 0)) || (iVar6 != 0)) || (iVar4 != 0)) {
            arg3_00 = "";
            ipc_log_string(*(arg1 + 0x398),"","",uVar3,uVar2,iVar6,iVar4,arg3 & 1);
            in_x3 = uVar3;
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001c81,0x8002362,in_x3);
        }
        if (iVar22 == 0) {
            ipc_log_string(*(arg1 + 0x398),"");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001cc9,arg3_00,in_x3);
            return;
        }
        uVar14 = *(*(arg1 + 0x10) + 0xc40);
        if (uVar14 == 0) {
code_r0x08007bd8:
            uVar9 = sym.handle_rx_dma_xfer(uVar3,arg1);
            goto joined_r0x08007d88;
        }
        *(*(arg1 + 0x10) + 0xc44) = uVar14;
        if ((uVar14 & 0x4008) == 0) {
            if (((uVar14 & 1) != 0) && (sym.msm_geni_serial_handle_dma_tx(arg1), *(arg1 + 0x418) == 0x14)) {
                sym.msm_geni_update_uart_error_code(arg1,0);
            }
            goto code_r0x08007bd8;
        }
        uVar11 = sym.handle_rx_dma_xfer(uVar3,arg1);
        *(arg1 + 0x3cb) = 1;
        complete(arg1 + 0x3d0);
        if ((uVar11 & 1) == 0) {
            return;
        }
    }
    iVar20 = arg1 + 0x3f0;
    *(arg1 + 0x3cc) = 1;
code_r0x08007dd0:
    complete(iVar20);
    return;
}


// ===== sym.handle_rx_dma_xfer @ 0x08007e64 (size 1812) =====

uint64_t sym.handle_rx_dma_xfer(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    uchar *in_x3;
    int iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint32_t uVar9;
    ulong uVar10;
    ulong unaff_x30;
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
    uVar4 = _raw_spin_lock_irqsave(arg2 + 0x410);
    uVar9 = *(*(arg2 + 0x10) + 0xd40);
    if (uVar9 == 0) {
        uVar9 = 0;
        goto code_r0x080084a4;
    }
    *(*(arg2 + 0x10) + 0xd44) = uVar9;
    if ((uVar9 >> 3 & 1) == 0) {
        if ((uVar9 >> 5 & 1) == 0) goto code_r0x08007ed8;
code_r0x08007f30:
        iVar6 = *(arg2 + 0xf0) + 1;
        *(arg2 + 0xf0) = iVar6;
        if (*(arg2 + 0x3c9) == '\0') {
            *(arg2 + 0x418) = 0x11;
            ipc_log_string(*(arg2 + 0x380),"","",0x11);
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,*(arg2 + 0x418));
            iVar6 = *(arg2 + 0xf0);
        }
        ipc_log_string(*(arg2 + 0x380),"","",uVar9,iVar6);
        in_x3 = uVar9;
        sym.__ftrace_dbg(*(arg2 + 0x148),0x80024d6,0x8000f8f,in_x3);
        if ((uVar9 >> 6 & 1) != 0) goto code_r0x08007fc8;
code_r0x08007edc:
        uVar3 = uVar9 >> 5 & 1;
    }
    else {
        ipc_log_string(*(arg2 + 0x380),"","",uVar9);
        in_x3 = uVar9;
        sym.__ftrace_dbg(*(arg2 + 0x148),0x8001443,0x8000f8f,in_x3);
        if ((uVar9 >> 5 & 1) != 0) goto code_r0x08007f30;
code_r0x08007ed8:
        if ((uVar9 >> 6 & 1) == 0) goto code_r0x08007edc;
code_r0x08007fc8:
        iVar6 = *(arg2 + 0xe8) + 1;
        *(arg2 + 0xe8) = iVar6;
        if (*(arg2 + 0x3c9) == '\0') {
            *(arg2 + 0x418) = 0x16;
            ipc_log_string(*(arg2 + 0x380),"","",0x16);
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,*(arg2 + 0x418));
            iVar6 = *(arg2 + 0xe8);
        }
        ipc_log_string(*(arg2 + 0x380),"","",uVar9,iVar6);
        in_x3 = uVar9;
        sym.__ftrace_dbg(*(arg2 + 0x148),0x8002a4d,0x8000f8f,in_x3);
        uVar3 = 1;
    }
    if ((uVar9 & 0x180) != 0) {
        *(arg2 + 0xf4) = *(arg2 + 0xf4) + 1;
        ipc_log_string(*(arg2 + 0x380),"","",uVar9);
        in_x3 = uVar9;
        sym.__ftrace_dbg(*(arg2 + 0x148),0x8001bca,0x8000f8f,in_x3);
        if (*(arg2 + 0x3c9) == '\0') {
            *(arg2 + 0x418) = 0x12;
            ipc_log_string(*(arg2 + 0x380),"","",0x12);
            in_x3 = *(arg2 + 0x418);
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,in_x3);
        }
    }
    if ((uVar9 & 3) != 0) {
        uVar1 = *(*(arg2 + 0x10) + 0x40);
        if ((uVar1 >> 0xc & 1) == 0) {
            ipc_log_string(*(arg2 + 0x380),"","",uVar1);
            in_x3 = uVar1;
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80026f8,0x800210d,in_x3);
        }
        else if (*(arg2 + 0x2f8) == 0) {
            ipc_log_string(*(arg2 + 0x370),"","");
            sym.__ftrace_dbg(*(arg2 + 0x148),0x800129d,0x800210d,in_x3);
        }
        else {
            uVar1 = *(*(arg2 + 0x10) + 0xd54);
            if (uVar1 == 0) {
                ipc_log_string(*(arg2 + 0x370),"","",0);
                in_x3 = NULL;
                sym.__ftrace_dbg(*(arg2 + 0x148),0x8002b98,0x800210d,0);
            }
            else {
                if ((**(arg2 + 0x2f8) == 0) && ((uVar1 < 5 || (*(*(arg2 + 0x2f8) + (uVar1 - 4)) == 0)))) {
                    ipc_log_string(*(arg2 + 0x370),"","");
                    sym.__ftrace_dbg(*(arg2 + 0x148),0x80025f5,0x8001a1d,in_x3);
                    sym.geni_se_dump_dbg_regs(arg2);
                    __const_udelay(0x8312b0);
                }
                if (uVar3 == 0) {
                    uVar10 = *(arg2 + 200);
                    uVar3 = tty_insert_flip_string_fixed_flag(uVar10,*(arg2 + 0x2f8),0);
                    if (uVar3 != uVar1) {
                        ipc_log_string(*(arg2 + 0x370),"","",uVar3,uVar1);
                        sym.__ftrace_dbg(*(arg2 + 0x148),0x8001bf3,0x800210d,uVar3);
                        if (*(arg2 + 0x3c9) == '\0') {
                            *(arg2 + 0x418) = 0xe;
                            ipc_log_string(*(arg2 + 0x380),"","",0xe);
                            sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,*(arg2 + 0x418));
                        }
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8008280);
                        (*pcVar2)();
                    }
                    *(arg2 + 0xe0) = *(arg2 + 0xe0) + uVar3;
                    tty_flip_buffer_push(uVar10);
                    uVar3 = uVar1;
                    if (0x1f < uVar1) {
                        uVar3 = 0x20;
                    }
                    uVar10 = *(arg2 + 0x370);
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
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
                    hex_dump_to_buffer(*(arg2 + 0x2f8),uVar3,0x20,1,&stack0xffffffffffffff50,0x40,0);
                    scnprintf(&stack0xfffffffffffffef0,0x60,"","",0,uVar1,&stack0xffffffffffffff50);
                    ipc_log_string(uVar10,"","",&stack0xfffffffffffffef0);
                    in_x3 = &stack0xfffffffffffffef0;
                    sym.__ftrace_dbg(*(arg2 + 0x148),0x80015f4,0x80027b9,in_x3);
                    memset(*(arg2 + 0x2f8),0,uVar1);
                }
            }
        }
        if ((uVar9 >> 0xb & 1) == 0) {
            ipc_log_string(*(arg2 + 0x380),"","");
            sym.__ftrace_dbg(*(arg2 + 0x148),0x8001aaa,0x8000f8f,in_x3);
            iVar7 = *(arg2 + 0x10);
            if ((iVar7 != 0) && (*(arg2 + 0x328) != 0)) {
                *(iVar7 + 0xd4c) = 7;
                *(iVar7 + 0xd30) = *(arg2 + 0x328);
                *(iVar7 + 0xd34) = *(arg2 + 0x32c);
                *(iVar7 + 0xd38) = 0;
                DataSynchronizationBarrier(3,3,0);
                *(iVar7 + 0xd3c) = 0x800;
            }
        }
        else {
            ipc_log_string(*(arg2 + 0x380),"","");
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80015fd,0x8000f8f,in_x3);
        }
    }
    if ((uVar9 >> 2 & 1) != 0) {
        ipc_log_string(*(arg2 + 0x380),"","",uVar9);
        sym.__ftrace_dbg(*(arg2 + 0x148),0x80017fe,0x8000f8f,uVar9);
        if (*(arg2 + 0x3c9) == '\0') {
            *(arg2 + 0x418) = 0x13;
            ipc_log_string(*(arg2 + 0x380),"","",0x13);
            sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,*(arg2 + 0x418));
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x800,0x8008498);
        (*pcVar2)();
    }
    uVar9 = (uVar9 & 0x80b) != 0;
code_r0x080084a4:
    _raw_spin_unlock_irqrestore(arg2 + 0x410,uVar4);
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_70) {
        return (arg1 & 0x30U) != 0 | uVar9;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = 0x800856c;
    iVar8 = *(iVar7 + 200);
    *(iVar8 + 0x1bc) = *(iVar7 + 0x2f0) + *(iVar8 + 0x1bc) & 0xfff;
    if (*(iVar7 + 0x2e8) != 0) {
        geni_se_tx_dma_unprep(iVar7 + 0x288,*(iVar7 + 0x2e8),*(iVar7 + 0x2f0));
    }
    iVar6 = *(iVar7 + 0x2f0);
    *(iVar7 + 0x2e8) = 0;
    *(iVar7 + 0x2f0) = 0;
    *(iVar7 + 0xe4) = *(iVar7 + 0xe4) + iVar6;
    if (*(iVar8 + 0x1b8) == *(iVar8 + 0x1bc)) {
        if ((*(iVar7 + 0x100) == 0) || (*(iVar7 + 300) != *(*(iVar7 + 0x100) + 0x4a))) {
            ipc_log_string(*(iVar7 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar7 + 0x148),0x800249f,0x8001fd9,in_x3);
            if (*(*(iVar7 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(iVar7 + 0x378),"","");
                sym.__ftrace_dbg(*(iVar7 + 0x148),0x8000db8,0x800202b,in_x3);
            }
            else {
                iVar8 = *(iVar7 + 0x148);
                if ((*(iVar8 + 0x200) & 7) == 0) {
                    uVar4 = ktime_get_mono_fast_ns();
                    *(iVar8 + 0x218) = uVar4;
                    __pm_runtime_suspend(*(iVar7 + 0x148),0xd);
                }
            }
        }
        uVar5 = uart_write_wakeup(iVar7);
    }
    else {
        uVar5 = sym.msm_geni_serial_prep_dma_tx(iVar7);
    }
    return uVar5;
}


// ===== sym.msm_geni_serial_handle_dma_tx @ 0x08008578 (size 332) =====

void sym.msm_geni_serial_handle_dma_tx(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 200);
    *(iVar3 + 0x1bc) = *(arg1 + 0x2f0) + *(iVar3 + 0x1bc) & 0xfff;
    if (*(arg1 + 0x2e8) != 0) {
        geni_se_tx_dma_unprep(arg1 + 0x288,*(arg1 + 0x2e8),*(arg1 + 0x2f0));
    }
    iVar1 = *(arg1 + 0x2f0);
    *(arg1 + 0x2e8) = 0;
    *(arg1 + 0x2f0) = 0;
    *(arg1 + 0xe4) = *(arg1 + 0xe4) + iVar1;
    if (*(iVar3 + 0x1b8) == *(iVar3 + 0x1bc)) {
        if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x800249f,0x8001fd9,in_x3);
            if (*(*(arg1 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(arg1 + 0x378),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8000db8,0x800202b,in_x3);
            }
            else {
                iVar3 = *(arg1 + 0x148);
                if ((*(iVar3 + 0x200) & 7) == 0) {
                    uVar2 = ktime_get_mono_fast_ns();
                    *(iVar3 + 0x218) = uVar2;
                    __pm_runtime_suspend(*(arg1 + 0x148),0xd);
                }
            }
        }
        uart_write_wakeup(arg1);
    }
    else {
        sym.msm_geni_serial_prep_dma_tx(arg1);
    }
    return;
}


// ===== sym.msm_geni_serial_prep_dma_tx @ 0x080086c8 (size 1620) =====

uint64_t sym.msm_geni_serial_prep_dma_tx(int64_t arg1)

{
    uint *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 200);
    if (*(arg1 + 0x524) == 0) {
        iVar7 = *(iVar9 + 0x1bc);
        uVar3 = *(iVar9 + 0x1b8) - iVar7 & 0xfff;
        if (uVar3 < 0x100) {
            uart_write_wakeup(arg1);
            iVar7 = *(iVar9 + 0x1bc);
        }
        uVar8 = 0x1000 - iVar7;
        uVar2 = uVar8;
        if (uVar3 <= uVar8) {
            uVar2 = uVar3;
        }
        if (uVar2 == 0) {
            uVar8 = 0xffffffff;
        }
        else {
            uVar3 = uVar2;
            if (0x1f < uVar2) {
                uVar3 = 0x20;
            }
            uVar6 = *(arg1 + 0x368);
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            hex_dump_to_buffer(*(iVar9 + 0x1b0) + iVar7,uVar3,0x20,1,&stack0xffffffffffffff68,0x40,0);
            scnprintf(&stack0xffffffffffffff08,0x60,"","",0,uVar2,&stack0xffffffffffffff68);
            ipc_log_string(uVar6,"","",&stack0xffffffffffffff08);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80015f4,0x80027b9,&stack0xffffffffffffff08);
            *(*(arg1 + 0x10) + 0x270) = uVar2;
            *(*(arg1 + 0x10) + 0x600) = 0x8000000;
            DataSynchronizationBarrier(3,3,0);
            uVar3 = geni_se_tx_dma_prep(arg1 + 0x288,*(iVar9 + 0x1b0) + *(iVar9 + 0x1bc),uVar2,arg1 + 0x2e8);
            uVar8 = uVar3;
            if (uVar3 == 0) {
                *(arg1 + 0x2f0) = uVar2;
            }
            else {
                ipc_log_string(*(arg1 + 0x380),"","",uVar8);
                uVar5 = uVar8;
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001a05,0x80024ba,uVar8);
                if (*(arg1 + 0x3c9) == '\0') {
                    *(arg1 + 0x418) = 7;
                    ipc_log_string(*(arg1 + 0x380),"","",7);
                    uVar5 = *(arg1 + 0x418);
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,uVar5);
                }
                *(*(arg1 + 0x10) + 0x270) = 0;
                *(arg1 + 0x3cb) = 0;
                *(arg1 + 0x3cd) = 1;
                *(arg1 + 0x3d0) = 0;
                uVar3 = sym.msm_serial_try_disable_interrupts(arg1);
                *(*(arg1 + 0x288) + 0x604) = 4;
                uVar4 = sym.geni_wait_for_cmd_done(arg1,uVar3 & 1);
                if ((uVar4 & 1) != 0) {
                    ipc_log_string(*(arg1 + 0x390),"","",*(*(arg1 + 0x10) + 0x40));
                    ipc_log_string(*(arg1 + 0x380),"","",*(*(arg1 + 0x10) + 0x40));
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x8001089,0x80024ba,*(*(arg1 + 0x10) + 0x40));
                    if (*(arg1 + 0x3c9) == '\0') {
                        *(arg1 + 0x418) = 8;
                        ipc_log_string(*(arg1 + 0x380),"","",8);
                        sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
                    }
                    sym.geni_se_dump_dbg_regs(arg1);
                    *(arg1 + 0x3cb) = 0;
                    *(arg1 + 0x3d0) = 0;
                    *(*(arg1 + 0x288) + 0x604) = 2;
                    uVar5 = sym.geni_wait_for_cmd_done(arg1,uVar3 & 1);
                    if ((uVar5 & 1) == 0) {
                        if (*(arg1 + 0x3c9) == '\0') {
                            *(arg1 + 0x418) = 0;
                            ipc_log_string(*(arg1 + 0x380),"","",0);
                            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
                        }
                    }
                    else {
                        ipc_log_string(*(arg1 + 0x390),"","",*(*(arg1 + 0x10) + 0x40));
                        ipc_log_string(*(arg1 + 0x380),"","",*(*(arg1 + 0x10) + 0x40));
                        sym.__ftrace_dbg(*(arg1 + 0x148),0x80021c7,0x80024ba,*(*(arg1 + 0x10) + 0x40));
                        if (*(arg1 + 0x3c9) == '\0') {
                            *(arg1 + 0x418) = 9;
                            ipc_log_string(*(arg1 + 0x380),"","",9);
                            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
                        }
                        sym.geni_se_dump_dbg_regs(arg1);
                    }
                    *(*(arg1 + 0x10) + 0x2ac) = 0x80000001;
                    DataSynchronizationBarrier(3,3,0);
                    uVar2 = *(*(arg1 + 0x10) + 0x2ac);
                    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
                    uVar5 = uVar2;
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002b00,0x8001614,uVar5);
                    sym.msm_geni_serial_set_manual_flow(1,arg1);
                    *(*(arg1 + 0x10) + 0x20) = 1;
                }
                if (*(arg1 + 0x208) == 2) {
                    if ((*(*(arg1 + 0x10) + 0xe40) & 1) != 0) {
                        *(arg1 + 0x3cb) = 0;
                        *(arg1 + 0x3d0) = 0;
                        *(*(arg1 + 0x10) + 0xc58) = 1;
                        uVar4 = sym.geni_wait_for_cmd_done(arg1,uVar3 & 1);
                        if ((uVar4 & 1) == 0) {
                            if (*(arg1 + 0x3c9) == '\0') {
                                *(arg1 + 0x418) = 0;
                                ipc_log_string(*(arg1 + 0x380),"","",0);
                                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
                            }
                        }
                        else {
                            ipc_log_string(*(arg1 + 0x380),"","");
                            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000f76,0x80024ba,uVar5);
                            if (*(arg1 + 0x3c9) == '\0') {
                                *(arg1 + 0x418) = 10;
                                ipc_log_string(*(arg1 + 0x380),"","",10);
                                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
                            }
                            sym.geni_se_dump_dbg_regs(arg1);
                        }
                    }
                    iVar9 = *(arg1 + 0x2e8);
                    if (iVar9 != 0) {
                        geni_se_tx_dma_unprep(arg1 + 0x288,iVar9,*(arg1 + 0x2f0));
                        *(arg1 + 0x2e8) = 0;
                    }
                }
                *(arg1 + 0x2f0) = 0;
                sym.msm_geni_serial_enable_interrupts(arg1);
                *(arg1 + 0x3cd) = 0;
            }
        }
    }
    else {
        uVar8 = 0xfffffffb;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    auVar10 = __stack_chk_fail();
    iVar9 = auVar10._8_8_;
    *extraout_x18 = 0x8008cf8;
    puVar1 = *(iVar9 + 0x10) + 0x2ac;
    if ((auVar10._0_8_ & 1) == 0) {
        *puVar1 = 0x80000000;
        __const_udelay(0xa7c6);
        *(*(iVar9 + 0x10) + 0x2ac) = 0x80000002;
        DataSynchronizationBarrier(3,3,0);
        ipc_log_string(*(iVar9 + 0x380),"","",0x80000002);
        uVar8 = sym.__ftrace_dbg(*(iVar9 + 0x148),0x80027c2,0x800200b,0x80000002);
        if (*(iVar9 + 0x3c9) != '\0') {
            return uVar8;
        }
        uVar6 = 0x15;
        *(iVar9 + 0x418) = 0x15;
    }
    else {
        *puVar1 = 0;
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*(iVar9 + 0x10) + 0x2ac);
        ipc_log_string(*(iVar9 + 0x380),"","",uVar3);
        uVar8 = sym.__ftrace_dbg(*(iVar9 + 0x148),0x8001468,0x800200b,uVar3);
        if (*(iVar9 + 0x418) != 0x15) {
            return uVar8;
        }
        if (*(iVar9 + 0x3c9) != '\0') {
            return uVar8;
        }
        uVar6 = 0;
        *(iVar9 + 0x418) = 0;
    }
    ipc_log_string(*(iVar9 + 0x380),"","",uVar6);
    uVar8 = sym.__ftrace_dbg(*(iVar9 + 0x148),0x80025cb,0x8002ae0,*(iVar9 + 0x418));
    return uVar8;
}


// ===== sym.msm_geni_serial_set_manual_flow @ 0x08008d1c (size 372) =====

void sym.msm_geni_serial_set_manual_flow(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = *(arg2 + 0x10) + 0x2ac;
    if ((arg1 & 1U) == 0) {
        *puVar1 = 0x80000000;
        __const_udelay(0xa7c6);
        *(*(arg2 + 0x10) + 0x2ac) = 0x80000002;
        DataSynchronizationBarrier(3,3,0);
        ipc_log_string(*(arg2 + 0x380),"","",0x80000002);
        sym.__ftrace_dbg(*(arg2 + 0x148),0x80027c2,0x800200b,0x80000002);
        if (*(arg2 + 0x3c9) != '\0') {
            return;
        }
        uVar3 = 0x15;
        *(arg2 + 0x418) = 0x15;
    }
    else {
        *puVar1 = 0;
        DataSynchronizationBarrier(3,3,0);
        uVar2 = *(*(arg2 + 0x10) + 0x2ac);
        ipc_log_string(*(arg2 + 0x380),"","",uVar2);
        sym.__ftrace_dbg(*(arg2 + 0x148),0x8001468,0x800200b,uVar2);
        if (*(arg2 + 0x418) != 0x15) {
            return;
        }
        if (*(arg2 + 0x3c9) != '\0') {
            return;
        }
        uVar3 = 0;
        *(arg2 + 0x418) = 0;
    }
    ipc_log_string(*(arg2 + 0x380),"","",uVar3);
    sym.__ftrace_dbg(*(arg2 + 0x148),0x80025cb,0x8002ae0,*(arg2 + 0x418));
    return;
}


// ===== sym.stop_rx_sequencer @ 0x08008e94 (size 1924) =====

//WARNING: Type propagation algorithm not settling

uint32_t sym.stop_rx_sequencer(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    bool bVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    uStack_60 = 0;
    ipc_log_string(*(arg1 + 0x380),"","",1);
    iVar10 = 1;
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002500,0x8002815,1);
    if (*(arg1 + 0x51c) != 0) {
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002827,0x8002815,iVar10);
        uVar7 = 0xfffffff0;
        goto code_r0x080095a4;
    }
    *(arg1 + 0x51c) = 1;
    uVar7 = *(*(arg1 + 0x10) + 0x40);
    if ((uVar7 >> 0xc & 1) == 0) {
        ipc_log_string(*(arg1 + 0x380),"","",uVar7);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80012ae,0x8002815,uVar7);
        *(arg1 + 0x51c) = 0;
        complete(arg1 + 0x4d8);
        uVar7 = 0;
        goto code_r0x080095a4;
    }
    if (*(arg1 + 0x428) == '\0') {
        if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
            uVar6 = 0;
            if (*(arg1 + 0x3a0) != 0) {
                uVar6 = 160000000 / *(arg1 + 0x3a0);
            }
            iVar3 = uVar6 << 1;
            if (0x946 < uVar6 >> 1) {
                iVar3 = 0x251c;
            }
            uVar11 = iVar3 + 500;
            ipc_log_string(*(arg1 + 0x380),"",uVar11);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x800162d,uVar11,iVar10);
            __udelay(uVar11);
            if (*(*(arg1 + 0x10) + 0xd40) != 0) {
                uVar6 = *(*(arg1 + 0x10) + 0x640);
                *(*(arg1 + 0x10) + 0x648) = uVar6;
                sym.geni_se_dump_dbg_regs(arg1);
                ipc_log_string(*(arg1 + 0x380),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8001dad,0x8002815,iVar10);
                sym.handle_rx_dma_xfer(uVar6,arg1);
                if (*(arg1 + 0x3a4) == 0) {
                    uVar11 = *(*(arg1 + 0x148) + 0x1f8);
                    ipc_log_string(*(arg1 + 0x380),"","",uVar11 & 0xffffffff);
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x800237d,0x8002815,uVar11 & 0xffffffff);
                    iVar10 = *(arg1 + 0x148);
                    uVar8 = ktime_get_mono_fast_ns();
                    uVar7 = 0xfffffff0;
                    *(iVar10 + 0x218) = uVar8;
                    goto code_r0x080095a0;
                }
            }
        }
        ipc_log_string(*(arg1 + 0x380),"","",uVar7);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80012d2,0x8002815,uVar7);
        uVar5 = sym.msm_serial_try_disable_interrupts(arg1);
        *(arg1 + 0x3cc) = 0;
        *(arg1 + 0x3f0) = 0;
        *(arg1 + 0x3ce) = 1;
        *(*(arg1 + 0x288) + 0x634) = 4;
        DataSynchronizationBarrier(3,3,0);
        uVar6 = sym.geni_wait_for_cmd_done(arg1,uVar5 & 1);
        uVar1 = *(*(arg1 + 0x10) + 0x40);
        uVar7 = uVar1 & 0x1000;
        ipc_log_string(*(arg1 + 0x380),"","",uVar1,*(*(arg1 + 0x10) + 0xe40));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001abd,0x8002815,uVar1);
        if (((uVar6 & 1) == 0) && (uVar7 == 0)) {
code_r0x08009528:
            sym.msm_geni_serial_enable_interrupts(arg1);
            *(arg1 + 0x3ce) = 0;
        }
        else {
            uVar6 = uVar6 & 1;
            ipc_log_string(*(arg1 + 0x380),"","",uVar6,uVar7 >> 0xc,uVar1);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80023b5,0x8002815,uVar6);
            ipc_log_string(*(arg1 + 0x390),"","",uVar6,uVar7 >> 0xc,uVar1);
            if (*(arg1 + 0x3c9) == '\0') {
                *(arg1 + 0x418) = 0xb;
                ipc_log_string(*(arg1 + 0x380),"","",0xb);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,*(arg1 + 0x418));
            }
            sym.geni_se_dump_dbg_regs(arg1);
            if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) || (uVar7 != 0)) {
                *(arg1 + 0x3cc) = 0;
                *(arg1 + 0x3f0) = 0;
                *(*(arg1 + 0x288) + 0x634) = 2;
                DataSynchronizationBarrier(3,3,0);
                uVar6 = sym.geni_wait_for_cmd_done(arg1,uVar5 & 1);
                uVar7 = *(*(arg1 + 0x10) + 0x40) & 0x1000;
                if (((uVar6 & 1) == 0) && (uVar7 == 0)) {
                    sym.msm_geni_update_uart_error_code(arg1,0);
                }
                else {
                    uVar6 = uVar6 & 1;
                    uVar7 = uVar7 >> 0xc;
                    uVar2 = *(*(arg1 + 0x10) + 0x40);
                    ipc_log_string(*(arg1 + 0x380),"","",uVar6,uVar7,uVar2);
                    sym.__ftrace_dbg(*(arg1 + 0x148),0x8001cf7,0x8002815,uVar6);
                    ipc_log_string(*(arg1 + 0x390),"","",uVar6,uVar7,uVar2);
                    sym.msm_geni_update_uart_error_code(arg1,0xc);
                    sym.geni_se_dump_dbg_regs(arg1);
                }
                *(*(arg1 + 0x10) + 0x2ac) = 0x80000001;
                DataSynchronizationBarrier(3,3,0);
                uVar7 = *(*(arg1 + 0x10) + 0x2ac);
                ipc_log_string(*(arg1 + 0x380),"","",uVar7);
                uVar11 = uVar7;
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8002b00,0x8001614,uVar11);
                sym.msm_geni_serial_set_manual_flow(1,arg1);
                *(*(arg1 + 0x10) + 0x20) = 1;
                if (*(arg1 + 0x208) == 2) {
                    *(arg1 + 0x3cc) = 0;
                    *(arg1 + 0x3f0) = 0;
                    *(*(arg1 + 0x10) + 0xd58) = 1;
                    uVar9 = sym.geni_wait_for_cmd_done(arg1,uVar5 & 1);
                    if ((uVar9 & 1) == 0) {
                        sym.msm_geni_update_uart_error_code(arg1,0);
                    }
                    else {
                        ipc_log_string(*(arg1 + 0x380),"","");
                        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002b12,0x8002815,uVar11);
                        sym.msm_geni_update_uart_error_code(arg1,0xd);
                        sym.geni_se_dump_dbg_regs(arg1);
                    }
                }
                goto code_r0x08009528;
            }
            sym.msm_geni_serial_handle_isr(arg1,&stack0xffffffffffffffa0,1);
        }
        uVar7 = *(*(arg1 + 0x10) + 0x40);
        ipc_log_string(*(arg1 + 0x380),"","",uVar7,*(*(arg1 + 0x10) + 0xe40));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8002988,0x8002815,uVar7);
        complete(arg1 + 0x4d8);
        uVar7 = -(uVar7 >> 0xc & 1) & 0xfffffff0;
    }
    else {
        if ((*(arg1 + 0x218) != '\0') || (*(arg1 + 0x521) != '\0')) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8002975,0x8002815,iVar10);
            *(arg1 + 0x4d8) = 0;
            queue_work_on(0x20,*(arg1 + 0x4d0),arg1 + 0x468);
            uVar7 = 0;
            goto code_r0x080095a4;
        }
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001cda,0x8002815,iVar10);
        uVar7 = 0;
    }
code_r0x080095a0:
    *(arg1 + 0x51c) = 0;
code_r0x080095a4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    iVar10 = __stack_chk_fail(uVar7);
    *extraout_x18 = 0x80095e0;
    if ((*(*(iVar10 + 0x10) + 0x40) >> 0xc & 1) != 0) {
        if (*(iVar10 + 0x208) == 2) {
            bVar4 = *(iVar10 + 0x2e8) != 0;
            iVar3 = *(*(iVar10 + 0x10) + 0xd54);
        }
        else {
            bVar4 = *(*(iVar10 + 0x10) + 0x800) != 0;
            iVar3 = *(*(iVar10 + 0x10) + 0x804);
        }
        if (((iVar3 != 0) || ((*(*(iVar10 + 0x10) + 0x40) & 1) != 0 || bVar4)) ||
           (*(*(iVar10 + 200) + 0x1b8) != *(*(iVar10 + 200) + 0x1bc))) {
            usleep_range_state(100,0x96,2);
            if (*(iVar10 + 0x208) == 2) {
                bVar4 = *(iVar10 + 0x2e8) != 0;
                iVar3 = *(*(iVar10 + 0x10) + 0xd54);
            }
            else {
                bVar4 = *(*(iVar10 + 0x10) + 0x800) != 0;
                iVar3 = *(*(iVar10 + 0x10) + 0x804);
            }
            if (((iVar3 != 0) || ((*(*(iVar10 + 0x10) + 0x40) & 1) != 0 || bVar4)) ||
               (*(*(iVar10 + 200) + 0x1b8) != *(*(iVar10 + 200) + 0x1bc))) {
                usleep_range_state(100,0x96,2);
            }
        }
        if (*(iVar10 + 0x208) == 2) {
            bVar4 = *(iVar10 + 0x2e8) != 0;
            iVar3 = *(*(iVar10 + 0x10) + 0xd54);
        }
        else {
            bVar4 = *(*(iVar10 + 0x10) + 0x800) != 0;
            iVar3 = *(*(iVar10 + 0x10) + 0x804);
        }
        if (((iVar3 != 0) || ((*(*(iVar10 + 0x10) + 0x40) & 1) != 0 || bVar4)) ||
           (*(*(iVar10 + 200) + 0x1b8) != *(*(iVar10 + 200) + 0x1bc))) {
            uVar7 = *(*(iVar10 + 0x10) + 0xd54);
            if (uVar7 != 0) {
                ipc_log_string(*(iVar10 + 0x380),"","",uVar7);
                sym.__ftrace_dbg(*(iVar10 + 0x148),0x80010bd,0x8000ef7,uVar7);
                return 0xfffffff0;
            }
            sym.geni_se_dump_dbg_regs(iVar10);
        }
        return 0;
    }
    return 0;
}


// ===== sym.wait_for_transfers_inflight @ 0x08009618 (size 552) =====

//WARNING: Type propagation algorithm not settling

ulong sym.wait_for_transfers_inflight(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg1 + 0x10) + 0x40) >> 0xc & 1) == 0) {
        return 0;
    }
    if (*(arg1 + 0x208) == 2) {
        bVar3 = *(arg1 + 0x2e8) != 0;
        iVar1 = *(*(arg1 + 0x10) + 0xd54);
    }
    else {
        bVar3 = *(*(arg1 + 0x10) + 0x800) != 0;
        iVar1 = *(*(arg1 + 0x10) + 0x804);
    }
    if (((iVar1 != 0) || ((*(*(arg1 + 0x10) + 0x40) & 1) != 0 || bVar3)) ||
       (*(*(arg1 + 200) + 0x1b8) != *(*(arg1 + 200) + 0x1bc))) {
        usleep_range_state(100,0x96,2);
        if (*(arg1 + 0x208) == 2) {
            bVar3 = *(arg1 + 0x2e8) != 0;
            iVar1 = *(*(arg1 + 0x10) + 0xd54);
        }
        else {
            bVar3 = *(*(arg1 + 0x10) + 0x800) != 0;
            iVar1 = *(*(arg1 + 0x10) + 0x804);
        }
        if (((iVar1 != 0) || ((*(*(arg1 + 0x10) + 0x40) & 1) != 0 || bVar3)) ||
           (*(*(arg1 + 200) + 0x1b8) != *(*(arg1 + 200) + 0x1bc))) {
            usleep_range_state(100,0x96,2);
        }
    }
    if (*(arg1 + 0x208) == 2) {
        bVar3 = *(arg1 + 0x2e8) != 0;
        iVar1 = *(*(arg1 + 0x10) + 0xd54);
    }
    else {
        bVar3 = *(*(arg1 + 0x10) + 0x800) != 0;
        iVar1 = *(*(arg1 + 0x10) + 0x804);
    }
    if (((iVar1 != 0) || ((*(*(arg1 + 0x10) + 0x40) & 1) != 0 || bVar3)) ||
       (*(*(arg1 + 200) + 0x1b8) != *(*(arg1 + 200) + 0x1bc))) {
        uVar2 = *(*(arg1 + 0x10) + 0xd54);
        if (uVar2 != 0) {
            ipc_log_string(*(arg1 + 0x380),"","",uVar2);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80010bd,0x8000ef7,uVar2);
            return 0xfffffff0;
        }
        sym.geni_se_dump_dbg_regs(arg1);
    }
    return 0;
}


// ===== sym.msm_geni_serial_power_on @ 0x08009878 (size 540) =====

ulong sym.msm_geni_serial_power_on(int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x148);
    if ((*(iVar7 + 0x200) & 7) == 0) {
        iVar5 = __pm_runtime_resume(iVar7,4);
        if (iVar5 < 0) {
            ipc_log_string(*(arg1 + 0x378),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80014b2,0x800118c,in_x3);
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x800,0x8009994);
            (*pcVar4)();
        }
    }
    else if (*(iVar7 + 0x20c) == 2) {
        iVar7 = *(arg1 + 200) + 0x120;
        iVar5 = mutex_trylock(iVar7);
        ipc_log_string(*(arg1 + 0x378),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001d26,0x800118c,in_x3);
        __pm_runtime_disable(*(arg1 + 0x148),1);
        uVar6 = sym.msm_geni_serial_runtime_resume(*(arg1 + 0x148));
        if (uVar6 == 0) {
            piVar1 = *(arg1 + 0x148) + 0x1f8;
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            __pm_runtime_set_status(*(arg1 + 0x148),0);
        }
        else {
            ipc_log_string(*(arg1 + 0x378),"","",uVar6);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8002848,0x800118c,uVar6);
        }
        pm_runtime_enable(*(arg1 + 0x148));
        if (iVar5 != 0) {
            mutex_unlock(iVar7);
        }
    }
    return 0;
}


// ===== sym.msm_geni_serial_port_setup @ 0x08009a94 (size 1060) =====

ulong sym.msm_geni_serial_port_setup(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uchar *puVar4;
    uchar *puVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    int iVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    puVar5 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    *(arg1 + 0x204) = *(arg1 + 0x1f8) - 2;
    if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
        uVar6 = *(arg1 + 0x1f8) >> 1;
    }
    else {
        uVar6 = 2;
    }
    *(arg1 + 0x200) = uVar6;
    *(arg1 + 0x1fc) = 2;
    *(*(arg1 + 0x10) + 0x294) = 0xa0;
    if (*(arg1 + 0x428) == '\0') {
        if ((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) {
            *(arg1 + 0x208) = 2;
            geni_se_config_packing(arg1 + 0x288,8,4,0,1,0);
            puVar4 = 0x4;
            geni_se_config_packing(arg1 + 0x288,8,4,0,0,1);
            *(*(arg1 + 0x10) + 0x240) = 0x431c;
            if (*(arg1 + 0x220) == 0) {
code_r0x08009c6c:
                uVar2 = 0xfffffff4;
                goto code_r0x08009b50;
            }
            if (*(arg1 + 0x2f8) == 0) {
                if (*(arg1 + 0x230) == 0) {
                    *(arg1 + 0x328) = 0;
                    *(arg1 + 0x2f8) = 0xffffffffffffffea;
                }
                else {
                    uStack_40 = 0xffffffffffffffff;
                    iVar3 = dma_alloc_attrs(*(arg1 + 0x230),0x800,&stack0xffffffffffffffc0,0xcc0,0);
                    *(arg1 + 0x2f8) = iVar3;
                    puVar4 = puVar5;
                    if (iVar3 == 0) goto code_r0x08009c6c;
                    *(arg1 + 0x328) = uStack_40;
                }
            }
        }
        else {
            *(arg1 + 0x208) = 1;
            sym.msm_serial_try_disable_interrupts(arg1);
            if ((*(arg1 + 0x1d0) == 0) || ((*(arg1 + 0x100) != 0 && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))))) {
                uVar7 = 1000;
            }
            else {
                uVar6 = 0x1c200;
                if (*(arg1 + 0x3a0) != 0) {
                    uVar6 = *(arg1 + 0x3a0);
                }
                uVar7 = 0;
                if (uVar6 != 0) {
                    uVar7 = (*(arg1 + 500) * *(arg1 + 0x1f0) * 1000000) / uVar6;
                }
                uVar7 = uVar7 / 10 + 0x32;
            }
            iVar8 = 1;
            do {
                if ((*(*(arg1 + 0x10) + 0x610) & 1) != 0) goto code_r0x08009e44;
                __const_udelay(0xa7c6);
                uVar1 = iVar8;
                iVar8 = iVar8 + 1;
            } while (uVar1 < uVar7);
            *(*(arg1 + 0x10) + 0x604) = 4;
            if ((*(arg1 + 0x1d0) == 0) || ((*(arg1 + 0x100) != 0 && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))))) {
                uVar7 = 1000;
            }
            else {
                uVar6 = 0x1c200;
                if (*(arg1 + 0x3a0) != 0) {
                    uVar6 = *(arg1 + 0x3a0);
                }
                uVar7 = 0;
                if (uVar6 != 0) {
                    uVar7 = (*(arg1 + 500) * *(arg1 + 0x1f0) * 1000000) / uVar6;
                }
                uVar7 = uVar7 / 10 + 0x32;
            }
            iVar8 = 1;
            do {
                if ((*(*(arg1 + 0x10) + 0x610) >> 4 & 1) != 0) goto code_r0x08009e44;
                __const_udelay(0xa7c6);
                uVar1 = iVar8;
                iVar8 = iVar8 + 1;
            } while (uVar1 < uVar7);
            *(*(arg1 + 0x10) + 0x604) = 2;
            if ((*(arg1 + 0x1d0) == 0) || ((*(arg1 + 0x100) != 0 && (*(arg1 + 300) == *(*(arg1 + 0x100) + 0x4a))))) {
                uVar7 = 1000;
            }
            else {
                uVar6 = 0x1c200;
                if (*(arg1 + 0x3a0) != 0) {
                    uVar6 = *(arg1 + 0x3a0);
                }
                uVar7 = 0;
                if (uVar6 != 0) {
                    uVar7 = (*(arg1 + 500) * *(arg1 + 0x1f0) * 1000000) / uVar6;
                }
                uVar7 = uVar7 / 10 + 0x32;
            }
            iVar8 = 1;
            do {
                if ((*(*(arg1 + 0x10) + 0x610) >> 5 & 1) != 0) break;
                __const_udelay(0xa7c6);
                uVar1 = iVar8;
                iVar8 = iVar8 + 1;
            } while (uVar1 < uVar7);
code_r0x08009e44:
            *(*(arg1 + 0x10) + 0x618) = *(*(arg1 + 0x10) + 0x610);
            sym.msm_geni_serial_enable_interrupts(arg1);
            geni_se_config_packing(arg1 + 0x288,8,1,0,1,0);
            geni_se_config_packing(arg1 + 0x288,8,4,0,0,1);
        }
    }
    else {
        *(arg1 + 0x208) = 3;
    }
    puVar4 = *(arg1 + 0x204);
    geni_se_init(arg1 + 0x288,*(arg1 + 0x200));
    geni_se_select_mode(arg1 + 0x288,*(arg1 + 0x208));
    uVar2 = 0;
    *(arg1 + 0x218) = 1;
    DataSynchronizationBarrier(3,3,0);
code_r0x08009b50:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = 0x8009ea8;
    if (*(iVar3 + 0x2c0) == 0) {
        _printk(0x8002187,"");
    }
    else {
        iVar3 = *(*(iVar3 + 0x2c0) + 0x1e0);
        if (iVar3 != 0) {
            uVar2 = sym.msm_geni_serial_ioctl(iVar3,puVar4 & 0xffffffff);
            return uVar2;
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_geni_uart_tty_ioctl @ 0x08009eb8 (size 84) =====

ulong sym.msm_geni_uart_tty_ioctl(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c0) == 0) {
        _printk(0x8002187,"");
    }
    else {
        arg1_00 = *(*(arg1 + 0x2c0) + 0x1e0);
        if (arg1_00 != 0) {
            uVar1 = sym.msm_geni_serial_ioctl(arg1_00,arg2 & 0xffffffff);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym.msm_geni_serial_runtime_resume @ 0x08009f0c (size 1012) =====

int sym.msm_geni_serial_runtime_resume(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t arg4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    ipc_log_string(*(arg1_00 + 0x378),"","",1);
    iVar6 = 1;
    sym.__ftrace_dbg(arg1,0x8002045,0x800261a,1);
    __pm_relax(*(arg1_00 + 0x360));
    __pm_stay_awake(*(arg1_00 + 0x360));
    if ((0 < *(arg1_00 + 0x354)) && (*(arg1_00 + 0x3cf) != '\0')) {
        disable_irq();
        *(arg1_00 + 0x3cf) = 0;
    }
    ipc_log_string(*(arg1_00 + 0x378),"","");
    sym.__ftrace_dbg(arg1,0x8002053,0x800261a,iVar6);
    iVar1 = sym.msm_geni_serial_resources_on(arg1_00);
    if (iVar1 == 0) {
        ipc_log_string(*(arg1_00 + 0x380),"","",1,*(arg1_00 + 0x420));
        sym.__ftrace_dbg(*(arg1_00 + 0x148),0x8000fb4,0x80013af,1);
        *(*(arg1_00 + 0x10) + 0x48) = *(arg1_00 + 0x420);
        *(*(arg1_00 + 0x10) + 0x4c) = *(arg1_00 + 0x420);
        if (*(arg1_00 + 0x530) != '\0') {
            sym.msm_geni_serial_port_setup(arg1_00);
        }
        if (*(arg1_00 + 0x531) == '\0') {
            sym.start_rx_sequencer(arg1_00);
        }
        DataSynchronizationBarrier(3,3,0);
        enable_irq(*(arg1_00 + 0xa0));
        ipc_log_string(*(arg1_00 + 0x378),"","",0);
        sym.__ftrace_dbg(arg1,0x8002708,0x800261a,0);
        if (*(arg1_00 + 0x530) != '\0') {
            iVar6 = *(arg1_00 + 0x528);
            if (iVar6 != 0) {
                ipc_log_string(*(arg1_00 + 0x380),"","",1);
                arg4 = 1;
                sym.__ftrace_dbg(*(arg1_00 + 0x148),0x8001719,0x80014bd,1);
                if (((*(arg1_00 + 0x100) == 0) || (*(arg1_00 + 300) != *(*(arg1_00 + 0x100) + 0x4a))) &&
                   (uVar2 = sym.msm_geni_serial_power_on(arg1_00), uVar2 != 0)) {
                    ipc_log_string(*(arg1_00 + 0x380),"","",uVar2);
                    sym.__ftrace_dbg(*(arg1_00 + 0x148),0x8002bf0,0x80014bd,uVar2);
                }
                else {
                    if (*(arg1_00 + 0x4c8) != 0) {
                        flush_workqueue();
                    }
                    if (*(arg1_00 + 0x4d0) != 0) {
                        flush_workqueue();
                    }
                    *(arg1_00 + 0x4d8) = 0;
                    sym.msm_geni_serial_stop_rx(arg1_00);
                    if (((*(arg1_00 + 0x100) == 0) || (*(arg1_00 + 300) != *(*(arg1_00 + 0x100) + 0x4a))) &&
                       (iVar4 = wait_for_completion_timeout(arg1_00 + 0x4d8,0x19), iVar4 == 0)) {
                        ipc_log_string(*(arg1_00 + 0x380),"","");
                    }
                    iVar3 = sym.msm_geni_serial_config_baud_rate(arg1_00,iVar6,*(arg1_00 + 0x3a0));
                    if (iVar3 == 0) {
                        arg4 = *(arg1_00 + 0x3a0);
                        ipc_log_string(*(arg1_00 + 0x380),"","");
                    }
                    sym.msm_geni_serial_start_rx(arg1_00);
                    if ((*(arg1_00 + 0x100) == 0) || (*(arg1_00 + 300) != *(*(arg1_00 + 0x100) + 0x4a))) {
                        if (*(*(arg1_00 + 0x148) + 0x1f8) == 0) {
                            ipc_log_string(*(arg1_00 + 0x378),"","");
                            sym.__ftrace_dbg(*(arg1_00 + 0x148),0x8000db8,0x800202b,arg4);
                        }
                        else {
                            iVar6 = *(arg1_00 + 0x148);
                            if ((*(iVar6 + 0x200) & 7) == 0) {
                                uVar5 = ktime_get_mono_fast_ns();
                                *(iVar6 + 0x218) = uVar5;
                                __pm_runtime_suspend(*(arg1_00 + 0x148),0xd);
                            }
                        }
                    }
                }
            }
            *(arg1_00 + 0x530) = 0;
        }
    }
    else {
        _dev_err(arg1,"","",iVar1);
        if (*(arg1_00 + 0x3c9) == '\0') {
            *(arg1_00 + 0x418) = 5;
            ipc_log_string(*(arg1_00 + 0x380),"","",5);
            sym.__ftrace_dbg(*(arg1_00 + 0x148),0x80025cb,0x8002ae0,*(arg1_00 + 0x418));
        }
        __pm_relax(*(arg1_00 + 0x360));
    }
    return iVar1;
}


// ===== sym.start_rx_sequencer @ 0x0800a308 (size 2012) =====

void sym.start_rx_sequencer(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    int64_t iVar12;
    int64_t *piVar13;
    int64_t iVar14;
    code *pcVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3c8) != '\0') {
        return;
    }
    uVar2 = *(*(arg1 + 0x10) + 0x40);
    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
    uVar7 = uVar2;
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8002ba5,0x80010de,uVar7);
    iVar3 = *(arg1 + 0x208);
    if ((uVar2 >> 0xc & 1) != 0) {
        if (iVar3 == 3) {
            return;
        }
        if (iVar3 == 2) {
            ipc_log_string(*(arg1 + 0x380),"","",uVar2);
            uVar7 = uVar2;
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000dd6,0x80010de,uVar7);
            iVar11 = *(arg1 + 0x10);
            if ((iVar11 != 0) && (*(arg1 + 0x328) != 0)) {
                *(iVar11 + 0xd4c) = 7;
                *(iVar11 + 0xd30) = *(arg1 + 0x328);
                *(iVar11 + 0xd34) = *(arg1 + 0x32c);
                *(iVar11 + 0xd38) = 0;
                DataSynchronizationBarrier(3,3,0);
                *(iVar11 + 0xd3c) = 0x800;
            }
        }
        sym.msm_geni_serial_stop_rx(arg1);
        iVar3 = *(arg1 + 0x208);
code_r0x0800a670:
        if (iVar3 == 2) {
            ipc_log_string(*(arg1 + 0x380),"","");
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001645,0x80010de,uVar7);
            iVar11 = *(arg1 + 0x10);
            if ((iVar11 != 0) && (*(arg1 + 0x328) != 0)) {
                *(iVar11 + 0xd4c) = 7;
                *(iVar11 + 0xd30) = *(arg1 + 0x328);
                *(iVar11 + 0xd34) = *(arg1 + 0x32c);
                *(iVar11 + 0xd38) = 0;
                DataSynchronizationBarrier(3,3,0);
                *(iVar11 + 0xd3c) = 0x800;
            }
        }
        DataMemoryBarrier(0,2);
        *(*(arg1 + 0x288) + 0x630) = 0x8000080;
        sym.msm_geni_serial_enable_interrupts(arg1);
        DataSynchronizationBarrier(3,3,0);
        uVar2 = *(*(arg1 + 0x10) + 0x40);
        ipc_log_string(*(arg1 + 0x380),"","",uVar2,*(*(arg1 + 0x10) + 0xe40));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001abd,0x80010de,uVar2);
        return;
    }
    if (iVar3 != 3) goto code_r0x0800a670;
    ipc_log_string(*(arg1 + 0x380),"","");
    sym.__ftrace_dbg(*(arg1 + 0x148),0x80018e1,0x80010de,uVar7);
    if (*(arg1 + 0x218) == '\0') {
        uVar5 = *(arg1 + 0x148);
        pcVar6 = "";
code_r0x0800a99c:
        _dev_err(uVar5,pcVar6,"");
    }
    else {
        iVar12 = *(arg1 + 0x430);
        iVar11 = *(arg1 + 0x230);
        iVar3 = sym.msm_geni_allocate_chan(arg1);
        if (iVar3 != 0) {
            uVar5 = *(arg1 + 0x148);
            pcVar6 = "";
            goto code_r0x0800a99c;
        }
        sg_init_table(*(arg1 + 0x430) + 400,6);
        iVar8 = *(arg1 + 0x430);
        iVar14 = 0;
        uVar7 = 0;
        iVar16 = 0x1d0;
        *(iVar8 + 0x19c) = 0x10;
        *(iVar8 + 0x198) = iVar8 + 0x20 & 0xfff;
        *(iVar8 + 400) =
             (((iVar8 + 0x20) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar8 + 400) & 3) - 0x200000000
        ;
        *(iVar12 + 0x40) = 1;
        *(iVar12 + 0x48) = 0x20000100000000;
        iVar9 = *(arg1 + 0x430);
        iVar8 = 0x60;
        *(iVar9 + 0x1bc) = 0x10;
        *(iVar9 + 0x1b8) = iVar12 + 0x40 & 0xfff;
        *(iVar9 + 0x1b0) =
             (((iVar12 + 0x40) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar9 + 0x1b0) & 3) -
             0x200000000;
        do {
            iVar12 = arg1 + iVar14;
            if ((iVar11 == 0) || (puVar1 = iVar12 + 0x330, puVar1 == NULL)) {
                *(iVar12 + 0x300) = 0xffffffffffffffea;
code_r0x0800a790:
                if (iVar14 != 0) {
                    iVar12 = arg1 + iVar14;
                    if (((*(iVar12 + 0x2f8) != 0) && (iVar11 != 0)) && (iVar12 != -0x328)) {
                        dma_free_attrs(iVar11,0x800,*(iVar12 + 0x2f8),*(iVar12 + 0x328),0);
                    }
                    if (1 < uVar7) {
                        iVar12 = arg1 + iVar14;
                        if (((*(iVar12 + 0x2f0) != 0) && (iVar11 != 0)) && (iVar12 != -800)) {
                            dma_free_attrs(iVar11,0x800,*(iVar12 + 0x2f0),*(iVar12 + 800),0);
                        }
                        if (2 < uVar7) {
                            iVar14 = arg1 + iVar14;
                            if (((*(iVar14 + 0x2e8) != 0) && (iVar11 != 0)) && (iVar14 != -0x318)) {
                                dma_free_attrs(iVar11,0x800,*(iVar14 + 0x2e8),*(iVar14 + 0x318),0);
                            }
                        }
                    }
                }
                dma_release_channel(*(*(arg1 + 0x430) + 8));
                dma_release_channel(**(arg1 + 0x430));
                *(*(arg1 + 0x430) + 8) = 0;
                **(arg1 + 0x430) = 0;
                goto code_r0x0800a850;
            }
            *puVar1 = 0xffffffffffffffff;
            uVar4 = dma_alloc_attrs(iVar11,0x800,puVar1,0xcc0,0);
            *(arg1 + iVar14 + 0x300) = uVar4;
            if ((uVar4 == 0) || (0xfffffffffffff000 < uVar4)) goto code_r0x0800a790;
            uVar7 = uVar7 + 1;
            *(*(arg1 + 0x430) + iVar8) = *puVar1;
            *(*(arg1 + 0x430) + iVar8 + 4) = *(iVar12 + 0x334);
            *(*(arg1 + 0x430) + iVar8 + 8) = 0x800;
            *(*(arg1 + 0x430) + iVar8 + 0xc) = 0x100301;
            iVar10 = *(arg1 + 0x430);
            iVar12 = iVar8 + iVar10;
            iVar8 = iVar8 + 0x10;
            iVar9 = iVar10 + iVar14 * 4;
            iVar14 = iVar14 + 8;
            *(iVar10 + iVar16) =
                 ((iVar12 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar10 + iVar16) & 3) - 0x200000000
            ;
            iVar16 = iVar16 + 0x20;
            *(iVar9 + 0x1d8) = iVar12 & 0xfff;
            *(iVar9 + 0x1dc) = 0x10;
        } while (iVar14 != 0x20);
        iVar12 = *(arg1 + 0x430);
        piVar13 = *(iVar12 + 8);
        if (((piVar13 == NULL) || (*piVar13 == 0)) || (pcVar15 = *(*piVar13 + 0x138), pcVar15 == NULL)) {
            uVar5 = 0;
        }
        else {
            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar15,0x8000cc0);
            uVar5 = (*pcVar15)(piVar13,iVar12 + 400,6,2,3,0);
            iVar12 = *(arg1 + 0x430);
        }
        *(iVar12 + 600) = uVar5;
        iVar12 = *(*(arg1 + 0x430) + 600);
        if (iVar12 == 0) {
            _dev_err(*(arg1 + 0x148),"","");
            if (*(arg1 + 0x300) != 0) {
                dma_free_attrs(iVar11,0x800,*(arg1 + 0x300),*(arg1 + 0x330),0);
            }
            if ((arg1 + 0x338 != NULL) && (*(arg1 + 0x308) != 0)) {
                dma_free_attrs(iVar11,0x800,*(arg1 + 0x308),*(arg1 + 0x338),0);
            }
            if ((arg1 + 0x340 != NULL) && (*(arg1 + 0x310) != 0)) {
                dma_free_attrs(iVar11,0x800,*(arg1 + 0x310),*(arg1 + 0x340),0);
            }
            if ((arg1 + 0x348 != NULL) && (*(arg1 + 0x318) != 0)) {
                dma_free_attrs(iVar11,0x800,*(arg1 + 0x318),*(arg1 + 0x348),0);
            }
            dma_release_channel(*(*(arg1 + 0x430) + 8));
            dma_release_channel(**(arg1 + 0x430));
            *(*(arg1 + 0x430) + 8) = 0;
            **(arg1 + 0x430) = 0;
            *(arg1 + 0x521) = 0;
        }
        else {
            *(iVar12 + 0x28) = sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
            *(*(*(arg1 + 0x430) + 600) + 0x38) = *(arg1 + 0x430) + 0x288;
            iVar11 = *(*(arg1 + 0x430) + 600);
            pcVar15 = *(iVar11 + 0x18);
            __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar15,0x8000ce0);
            iVar3 = (*pcVar15)(iVar11);
            if (-1 < iVar3) {
                piVar13 = *(*(arg1 + 0x430) + 8);
                pcVar15 = *(*piVar13 + 400);
                __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar15,0x8000d20);
                (*pcVar15)(piVar13);
                *(arg1 + 0x521) = 1;
                goto code_r0x0800a914;
            }
            _printk(0x8002163,"",iVar3);
            piVar13 = *(*(arg1 + 0x430) + 8);
            pcVar15 = *(*piVar13 + 0x178);
            if (pcVar15 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar15,0x8000d00);
                (*pcVar15)(piVar13);
            }
        }
    }
code_r0x0800a850:
    ipc_log_string(*(arg1 + 0x380),"","");
code_r0x0800a914:
    uVar2 = *(*(arg1 + 0x10) + 0x40);
    ipc_log_string(*(arg1 + 0x380),"","",uVar2);
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8001815,0x80010de,uVar2);
    return;
}


// ===== sym.msm_geni_allocate_chan @ 0x0800aafc (size 704) =====

int sym.msm_geni_allocate_chan(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t in_x3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t *piVar5;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(arg1 + 0x380),"","");
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8001afb,0x80011a5,in_x3);
    if ((*(arg1 + 0x430))[1] == 0) {
        uVar3 = dma_request_chan(*(arg1 + 0x148),0x80014ba);
        uVar1 = 0;
        if (uVar3 < 0xfffffffffffff001) {
            uVar1 = uVar3;
        }
        *(*(arg1 + 0x430) + 8) = uVar1;
        if (*(*(arg1 + 0x430) + 8) == 0) {
            _dev_err(*(arg1 + 0x148),"","");
            iVar2 = -5;
            goto code_r0x0800acb0;
        }
        *(*(arg1 + 0x430) + 0xe0) = sym.msm_geni_uart_ev_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
        *(*(arg1 + 0x430) + 0xe8) = arg1;
        *(*(arg1 + 0x430) + 0xd8) = 1;
        *(*(*(arg1 + 0x430) + 8) + 0x68) = *(arg1 + 0x430) + 0xd8;
        piVar5 = *(*(arg1 + 0x430) + 8);
        pcVar6 = *(*piVar5 + 0x160);
        if (pcVar6 == NULL) {
            iVar2 = -0x26;
        }
        else {
            __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar6,0x8000ca0);
            iVar2 = (*pcVar6)(piVar5,0);
            if (iVar2 == 0) {
                iVar4 = **(arg1 + 0x430);
                goto joined_r0x0800ac0c;
            }
        }
        _dev_err(*(arg1 + 0x148),"");
        dma_release_channel(*(*(arg1 + 0x430) + 8));
    }
    else {
        iVar4 = **(arg1 + 0x430);
joined_r0x0800ac0c:
        if (iVar4 == 0) {
            uVar3 = dma_request_chan(*(arg1 + 0x148),0x8001d38);
            uVar1 = 0;
            if (uVar3 < 0xfffffffffffff001) {
                uVar1 = uVar3;
            }
            **(arg1 + 0x430) = uVar1;
            if (**(arg1 + 0x430) == 0) {
                _dev_err(*(arg1 + 0x148),"","");
                dma_release_channel(*(*(arg1 + 0x430) + 8));
                iVar2 = -5;
                *(*(arg1 + 0x430) + 8) = 0;
            }
            else {
                (*(arg1 + 0x430))[0x19] = sym.msm_geni_uart_ev_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(*(arg1 + 0x430) + 0xd0) = arg1;
                *(*(arg1 + 0x430) + 0xc0) = 1;
                *(**(arg1 + 0x430) + 0x68) = *(arg1 + 0x430) + 0x18;
                piVar5 = **(arg1 + 0x430);
                pcVar6 = *(*piVar5 + 0x160);
                if (pcVar6 == NULL) {
                    iVar2 = -0x26;
                }
                else {
                    __cfi_slowpath_diag(0xa5b1eb43ed4fa99d,pcVar6,0x8000ca0);
                    iVar2 = (*pcVar6)(piVar5,0);
                    if (iVar2 == 0) goto code_r0x0800acb0;
                }
                _dev_err(*(arg1 + 0x148),"");
                dma_release_channel(*(*(arg1 + 0x430) + 8));
                dma_release_channel(**(arg1 + 0x430));
                *(*(arg1 + 0x430) + 8) = 0;
                **(arg1 + 0x430) = 0;
            }
        }
        else {
            iVar2 = 0;
        }
    }
code_r0x0800acb0:
    ipc_log_string(*(arg1 + 0x380),"","");
    sym.__ftrace_dbg(*(arg1 + 0x148),0x8001839,0x80011a5,in_x3);
    return iVar2;
}


// ===== sym.msm_geni_deallocate_chan @ 0x0800adbc (size 84) =====

void sym.msm_geni_deallocate_chan(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    dma_release_channel(*(*(arg1 + 0x430) + 8));
    dma_release_channel(**(arg1 + 0x430));
    *(*(arg1 + 0x430) + 8) = 0;
    **(arg1 + 0x430) = 0;
    return;
}


// ===== sym.msm_geni_uart_gsi_rx_cb @ 0x0800ae10 (size 1120) =====

void sym.msm_geni_uart_gsi_rx_cb(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int *extraout_x1;
    char *pcVar4;
    int64_t in_x3;
    uint64_t *arg4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    ulong uVar8;
    code *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uint64_t uStack_e8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x20);
    uVar1 = *arg1;
    uVar8 = *(iVar11 + 200);
    ipc_log_string(*(iVar11 + 0x370),"","");
    sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001afb,0x8001dd7,in_x3);
    if (*(iVar11 + 0x518) < 5) {
        uVar2 = tty_insert_flip_string_fixed_flag(uVar8,*(iVar11 + *(iVar11 + 0x518) * 8 + 0x300),0,uVar1);
        if (uVar2 != uVar1) {
            ipc_log_string(*(iVar11 + 0x370),"","",uVar2,uVar1);
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001bf3,0x8001dd7,uVar2);
        }
        *(iVar11 + 0xe0) = *(iVar11 + 0xe0) + uVar2;
        tty_flip_buffer_push(uVar8);
        if (*(iVar11 + 0x518) < 5) {
            uVar2 = uVar1;
            if (0x1f < uVar1) {
                uVar2 = 0x20;
            }
            uVar8 = *(iVar11 + 0x370);
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            hex_dump_to_buffer(*(iVar11 + *(iVar11 + 0x518) * 8 + 0x300),uVar2,0x20,1,&uStack_88,0x40,0);
            scnprintf(&uStack_e8,0x60,"","",0,uVar1,&uStack_88);
            ipc_log_string(uVar8,"","",&uStack_e8);
            arg4 = &uStack_e8;
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x80015f4,0x80027b9,arg4);
            uVar1 = *(iVar11 + 0x518);
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            ipc_log_string(*(iVar11 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001afb,0x80018f4,arg4);
            sg_init_table(&uStack_e8,1);
            if (uVar1 < 6) {
                iVar5 = *(iVar11 + 0x430);
                iVar6 = iVar5 + uVar1 * 0x10 + 0x60;
                uStack_e0 = CONCAT44(0x10,iVar6 & 0xfff);
                piVar7 = *(iVar5 + 8);
                uStack_e8 = ((iVar6 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | uStack_e8 & 3) -
                            0x200000000;
                if (((piVar7 == NULL) || (*piVar7 == 0)) || (pcVar9 = *(*piVar7 + 0x138), pcVar9 == NULL)) {
                    uVar8 = 0;
                }
                else {
                    __cfi_slowpath_diag(0x3675599da7c39b65,pcVar9,0x8000cc0);
                    arg4 = 0x2;
                    uVar8 = (*pcVar9)(piVar7,&uStack_e8,1,2,3,0);
                    iVar5 = *(iVar11 + 0x430);
                }
                *(iVar5 + 600) = uVar8;
                iVar6 = *(*(iVar11 + 0x430) + 600);
                if (iVar6 == 0) {
                    _dev_err(*(iVar11 + 0x148),"","");
                }
                else {
                    *(iVar6 + 0x28) = sym.msm_geni_uart_gsi_rx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                    *(*(*(iVar11 + 0x430) + 600) + 0x38) = *(iVar11 + 0x430) + 0x288;
                    iVar6 = *(*(iVar11 + 0x430) + 600);
                    pcVar9 = *(iVar6 + 0x18);
                    __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar9,0x8000ce0);
                    iVar3 = (*pcVar9)(iVar6);
                    if (iVar3 < 0) {
                        _printk(0x8002163,"",iVar3);
                        piVar7 = *(*(iVar11 + 0x430) + 8);
                        pcVar9 = *(*piVar7 + 0x178);
                        if (pcVar9 != NULL) {
                            __cfi_slowpath_diag(0x146502001565ea5c,pcVar9,0x8000d00);
                            (*pcVar9)(piVar7);
                        }
                    }
                    else {
                        piVar7 = *(*(iVar11 + 0x430) + 8);
                        pcVar9 = *(*piVar7 + 400);
                        __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar9,0x8000d20);
                        (*pcVar9)(piVar7);
                        ipc_log_string(*(iVar11 + 0x380),"","");
                        sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001839,0x80018f4,arg4);
                    }
                }
                pcVar4 = "";
                *(iVar11 + 0x518) = *(iVar11 + 0x518) + 1U & 3;
                ipc_log_string(*(iVar11 + 0x370),"","");
                sym.__ftrace_dbg(*(iVar11 + 0x148),0x8001839,0x8001dd7,arg4);
                iVar11 = sp_el0;
                if (*(iVar11 + 0x5e0) == iStack_48) {
                    return;
                }
                __stack_chk_fail();
                *extraout_x18 = sym.msm_geni_uart_ev_cb;
                uVar10 = *(extraout_x1 + 2);
                ipc_log_string(*(pcVar4 + 0x380),"","");
                sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001afb,0x8002bdc,arg4);
                if (*extraout_x1 == 0) {
                    if ((uVar10 >> 2 & 1) != 0) {
    //WARNING: Does not return
                        pcVar9 = SoftwareBreakpoint(0x800,0x800b310);
                        (*pcVar9)();
                    }
                }
                else {
                    ipc_log_string(*(pcVar4 + 0x380),"",extraout_x1[10],uVar10 & 0xffffffff);
                    arg4 = uVar10 & 0xffffffff;
                    sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001c0b,extraout_x1[10],arg4);
                }
                ipc_log_string(*(pcVar4 + 0x380),"","");
                sym.__ftrace_dbg(*(pcVar4 + 0x148),0x8001839,0x8002bdc,arg4);
                return;
            }
        }
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800b26c);
    (*pcVar9)();
}


// ===== sym.msm_geni_uart_ev_cb @ 0x0800b270 (size 236) =====

void sym.msm_geni_uart_ev_cb(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    uint64_t in_x3;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 8);
    ipc_log_string(*(arg2 + 0x380),"","");
    sym.__ftrace_dbg(*(arg2 + 0x148),0x8001afb,0x8002bdc,in_x3);
    if (*arg1 == 0) {
        if ((uVar2 >> 2 & 1) != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800b310);
            (*pcVar1)();
        }
    }
    else {
        ipc_log_string(*(arg2 + 0x380),"",*(arg1 + 0x28),uVar2 & 0xffffffff);
        in_x3 = uVar2 & 0xffffffff;
        sym.__ftrace_dbg(*(arg2 + 0x148),0x8001c0b,*(arg1 + 0x28),in_x3);
    }
    ipc_log_string(*(arg2 + 0x380),"","");
    sym.__ftrace_dbg(*(arg2 + 0x148),0x8001839,0x8002bdc,in_x3);
    return;
}


// ===== sym.msm_geni_serial_config_baud_rate @ 0x0800b35c (size 1352) =====

void sym.msm_geni_serial_config_baud_rate(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    code *pcVar6;
    uint32_t uVar7;
    int iVar8;
    ulong uVar9;
    uchar *arg4;
    uint32_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    ulong unaff_x30;
    uint uStack_74;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_70 = 0;
    uStack_74 = 0;
    if ((*(arg1 + 0x3b0) < 3) && ((*(arg1 + 0x3b0) != 2 || (*(arg1 + 0x3b4) < 5)))) {
        iVar12 = 0x20;
    }
    else {
        iVar12 = 0x10;
    }
    uVar13 = iVar12 * arg3;
    uVar15 = uVar13;
    iVar11 = arg1 + 0x288;
    arg4 = &stack0xffffffffffffff90;
    uVar7 = geni_se_clk_freq_match(iVar11,uVar15,&stack0xffffffffffffff8c,arg4,0);
    if (uVar7 == 0) {
        uVar5 = 0;
        if (uVar15 != 0) {
            uVar5 = ((uVar15 + uStack_70) - 1) / uVar15;
        }
        iVar12 = uVar5;
        if (0 < iVar12) {
            iVar8 = 0;
            if (iVar12 != 0) {
                iVar8 = uStack_70 / iVar12;
            }
            uVar13 = uVar13 - iVar8;
            if (uVar13 != 0) {
                ipc_log_string(*(arg1 + 0x380),"","",uVar13,arg3 & 0xffffffff,uStack_70,uVar5 & 0xffffffff);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80023e7,0x8002885,uVar13);
            }
            *(arg1 + 0xb0) = uStack_70;
            iVar8 = clk_set_rate(*(arg1 + 0x248),uStack_70);
            if (iVar8 != 0) {
                _dev_err(*(arg1 + 0x148),"");
                ipc_log_string(*(arg1 + 0x380),"","",iVar8);
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x800b840);
                (*pcVar6)();
            }
            iVar16 = iVar12 << 4 | 1;
            if (arg3 != 0) {
                uart_update_timeout(arg1,*(arg2 + 8),arg3 & 0xffffffff);
            }
            *(arg1 + 0x420) = iVar16;
            ipc_log_string(*(arg1 + 0x380),"","",1,iVar16);
            iVar16 = 1;
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,1);
            *(*(arg1 + 0x10) + 0x48) = *(arg1 + 0x420);
            *(*(arg1 + 0x10) + 0x4c) = *(arg1 + 0x420);
            uVar10 = *(*(arg1 + 0x10) + 0x25c);
            uVar7 = *(*(arg1 + 0x10) + 0x2a4);
            uVar13 = *(*(arg1 + 0x10) + 0x280);
            uVar14 = *(*(arg1 + 0x10) + 0x2a8);
            uVar2 = *(arg2 + 8);
            if ((uVar2 >> 8 & 1) == 0) {
                uVar10 = uVar10 & 0xfffffffe;
                uVar13 = uVar13 & 0xfffffff7;
                uVar7 = uVar7 & 0xfffffffe;
                uVar14 = uVar14 & 0xfffffffe;
            }
            else {
                uVar10 = uVar10 | 1;
                uVar13 = uVar13 | 8;
                if ((uVar2 >> 9 & 1) == 0) {
                    if ((uVar2 >> 0x1e & 1) == 0) {
                        uVar14 = uVar14 | 1;
                        uVar7 = uVar7 | 1;
                    }
                    else {
                        uVar7 = uVar7 | 5;
                        uVar14 = uVar14 | 5;
                    }
                }
                else {
                    uVar7 = uVar7 | 3;
                    uVar14 = uVar14 | 3;
                }
            }
            uVar3 = *(arg1 + 0x10c);
            uVar4 = uVar2 >> 4 & 3;
            uVar2 = uVar4 + 5;
            *(arg1 + 0x10c) = uVar3 & 0xfffffff7;
            uVar1 = *(arg2 + 8) >> 5 & 2;
            if (*(arg2 + 8) < 0) {
                uVar10 = uVar10 & 0xfffffffd;
                *(arg1 + 0x10c) = uVar3 | 8;
            }
            else {
                uVar10 = uVar10 | 2;
            }
            if (*(arg1 + 0x428) == '\0') {
                *(*(arg1 + 0x10) + 0x22c) = *(arg1 + 0x350);
                *(*(arg1 + 0x10) + 0x25c) = uVar10;
                *(*(arg1 + 0x10) + 0x2a4) = uVar7;
                *(*(arg1 + 0x10) + 0x280) = uVar13;
                *(*(arg1 + 0x10) + 0x2a8) = uVar14;
                *(*(arg1 + 0x10) + 0x268) = uVar2;
                *(*(arg1 + 0x10) + 0x28c) = uVar2;
                *(*(arg1 + 0x10) + 0x26c) = uVar1;
                geni_se_config_packing(iVar11,uVar2,4,0,1,0);
                iVar16 = 0;
                geni_se_config_packing(iVar11,uVar2,4,0,0,1);
                iVar12 = *(arg2 + 8);
            }
            else {
                uVar3 = uVar4 | uVar1 << 3 | (*(arg1 + 0x350) & 1) << 8 | 0x1000480;
                iVar8 = *(arg1 + 0x1f8);
                iVar11 = *(arg1 + 0x430);
                *(iVar11 + 0x10) = uVar3;
                *(iVar11 + 0x14) = 0;
                *(iVar11 + 0x18) = iVar12;
                *(iVar11 + 0x1c) = 0x220001;
                *(iVar11 + 0x20) = uVar3;
                *(iVar11 + 0x24) = iVar8 * 0x1000000 + -0x1ffff60;
                *(iVar11 + 0x28) = iVar12;
                *(iVar11 + 0x2c) = 0x220001;
                *(*(arg1 + 0x430) + 0x280) = arg1;
                *(*(arg1 + 0x430) + 0x2a8) = arg1;
                iVar12 = *(arg2 + 8);
            }
            if (iVar12 < 0) {
                *(*(arg1 + 0x10) + 0x2ac) = 0;
                ipc_log_string(*(arg1 + 0x380),"","");
                sym.__ftrace_dbg(*(arg1 + 0x148),0x80011bc,0x8002650,iVar16);
            }
            ipc_log_string(*(arg1 + 0x380),"",uVar10,uVar7);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001d3b,uVar10,uVar7);
            ipc_log_string(*(arg1 + 0x380),"",uVar13,uVar14);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x800266c,uVar13,uVar14);
            ipc_log_string(*(arg1 + 0x380),"",uVar2,uVar1);
            arg4 = uVar1;
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000e34,uVar2,arg4);
            uVar9 = 0;
            goto code_r0x0800b7d0;
        }
    }
    else {
        arg4 = uVar7;
        _dev_err(*(arg1 + 0x148),"","",arg4,arg3 & 0xffffffff);
        if (*(arg1 + 0x3c9) == '\0') {
            *(arg1 + 0x418) = 3;
            ipc_log_string(*(arg1 + 0x380),"","",3);
            arg4 = *(arg1 + 0x418);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x80025cb,0x8002ae0,arg4);
            uVar9 = 0xffffffea;
            goto code_r0x0800b7d0;
        }
    }
    uVar9 = 0xffffffea;
code_r0x0800b7d0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        iVar11 = __stack_chk_fail(uVar9);
        *extraout_x18 = 0x800b890;
        if (((*(iVar11 + 0x100) == 0) || (*(iVar11 + 300) != *(*(iVar11 + 0x100) + 0x4a))) &&
           (*(*(iVar11 + 0x148) + 0x20c) == 2 && *(*(iVar11 + 0x148) + 0x1f8) == 0)) {
            _dev_err(*(iVar11 + 0x148),"","");
            ipc_log_string(*(iVar11 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar11 + 0x148),0x80017e5,0x8000e4b,arg4);
        }
        else {
            sym.start_rx_sequencer(iVar11);
        }
        return;
    }
    return;
}


// ===== sym.msm_geni_serial_start_rx @ 0x0800b8a4 (size 180) =====

void sym.msm_geni_serial_start_rx(int64_t arg1)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x100) == 0) || (*(arg1 + 300) != *(*(arg1 + 0x100) + 0x4a))) &&
       (*(*(arg1 + 0x148) + 0x20c) == 2 && *(*(arg1 + 0x148) + 0x1f8) == 0)) {
        _dev_err(*(arg1 + 0x148),"","");
        ipc_log_string(*(arg1 + 0x380),"","");
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80017e5,0x8000e4b,in_x3);
    }
    else {
        sym.start_rx_sequencer(arg1);
    }
    return;
}


// ===== sym.msm_geni_cons_set_mctrl @ 0x0800b95c (size 12) =====

void sym.msm_geni_cons_set_mctrl(void)

{
    return;
}


// ===== sym.msm_geni_cons_get_mctrl @ 0x0800b968 (size 16) =====

ulong sym.msm_geni_cons_get_mctrl(void)

{
    return 0x160;
}


// ===== sym.msm_geni_serial_cons_pm @ 0x0800b978 (size 316) =====

void sym.msm_geni_serial_cons_pm(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) && (arg3 == 3)) {
        sym.msm_geni_serial_resources_on(arg1);
        ipc_log_string(*(arg1 + 0x380),"","",1,*(arg1 + 0x420));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,1);
        *(*(arg1 + 0x10) + 0x48) = *(arg1 + 0x420);
        *(*(arg1 + 0x10) + 0x4c) = *(arg1 + 0x420);
        *(arg1 + 0x414) = 0;
    }
    else if ((arg2 == 3) && (arg3 == 0)) {
        *(arg1 + 0x414) = 1;
        ipc_log_string(*(arg1 + 0x380),"","",0,*(arg1 + 0x420));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,0);
        *(*(arg1 + 0x10) + 0x48) = 1;
        *(*(arg1 + 0x10) + 0x4c) = 1;
        sym.msm_geni_serial_resources_off(arg1);
    }
    return;
}


// ===== sym.msm_geni_serial_probe @ 0x0800babc (size 2488) =====

uint64_t sym.msm_geni_serial_probe(int64_t arg1)

{
    int64_t *arg1_00;
    code cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    char *pcVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *arg1_01;
    uint64_t uVar11;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint32_t uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    arg1_00 = arg1 + 0x10;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    iVar6 = of_match_device(obj.msm_geni_device_tbl,arg1_00);
    if (iVar6 == 0) {
        _dev_err(arg1_00,"","");
        uVar13 = 0xffffffed;
        goto code_r0x0800bc1c;
    }
    iVar7 = *(arg1 + 0x300);
    iVar6 = *(iVar6 + 0xc0);
    if (iVar7 == 0) {
        uVar2 = *(arg1 + 8);
        iVar7 = *(iVar6 + 0x28);
joined_r0x0800bb54:
        uVar11 = uVar2;
        if (iVar7 != 0) goto code_r0x0800bba8;
code_r0x0800bb88:
        snprintf(&uStack_90,0x28,"",uVar11);
        if (*(iVar6 + 0x28) != 0) goto code_r0x0800bba8;
        if (uVar11 < 6) {
            uVar2 = 0;
            arg1_01 = reloc.__traceiter_serial_info.cfi_jt + uVar11 * 0x538;
            *(uVar11 * 0x538 + 0x8000d59) = 0;
            goto joined_r0x0800bbc4;
        }
        arg1_01 = 0xfffffffffffffffa;
        *0x3c3 = 0;
code_r0x0800c040:
        _dev_err(arg1_00,"",uVar11,arg1_01 & 0xffffffff);
        uVar13 = arg1_01 & 0xffffffff;
    }
    else {
        if (*(iVar6 + 0x28) == 0) {
            uVar3 = of_alias_get_id(iVar7,"");
            uVar2 = *0x8002000;
            if (-1 < uVar3) {
                uVar2 = uVar3;
            }
            iVar7 = *(iVar6 + 0x28);
            *0x8002000 = *0x8002000 + 1;
            goto joined_r0x0800bb54;
        }
        uVar2 = of_alias_get_id(iVar7,"serial");
        uVar11 = uVar2 & (uVar2 >> 0x1f ^ 0xffffffffU);
        if (*(iVar6 + 0x28) == 0) goto code_r0x0800bb88;
code_r0x0800bba8:
        arg1_01 = obj.msm_geni_console_port;
        if (uVar11 != 0) {
            arg1_01 = 0xfffffffffffffffa;
        }
        uVar2 = 1;
        arg1_01[0x3c9] = 0x1;
joined_r0x0800bbc4:
        if ((arg1_01 == NULL) || (0xfffffffffffff000 < arg1_01)) goto code_r0x0800c040;
        if (*(iVar6 + 0x28) != 0) {
            _dev_err(arg1_00,"","");
            iVar4 = pinctrl_pm_select_sleep_state(arg1_00);
            if (iVar4 != 0) {
                _dev_err(arg1_00,"",iVar4);
            }
            uVar13 = 0;
            *(arg1 + 0xa8) = arg1_01;
            goto code_r0x0800bc1c;
        }
        if (*(arg1_01 + 0x1d0) == 0) {
            *(arg1_01 + 0x148) = arg1_00;
            uStack_94 = 0;
            *(arg1_01 + 0x230) = *(arg1 + 0x70);
            uVar12 = *(arg1 + 0x70);
            *(arg1_01 + 0x238) = arg1_00;
            *(arg1_01 + 0x290) = arg1_00;
            *(arg1_01 + 0x240) = uVar12;
            iVar7 = *(*(arg1 + 0x70) + 0x98);
            *(arg1_01 + 0x298) = iVar7;
            if (iVar7 == 0) {
                _dev_err(arg1_00,"");
                uVar13 = 0xfffffdfb;
            }
            else {
                uVar13 = devm_clk_get(arg1_00,"");
                *(arg1_01 + 0x2a0) = uVar13;
                if (uVar13 < 0xfffffffffffff001) {
                    uVar3 = geni_icc_get(arg1_01 + 0x288,"");
                    if (uVar3 != 0) {
                        uVar13 = uVar3;
                        if (arg1_01[0x3c9] == 0x0) {
                            *(arg1_01 + 0x418) = 4;
                            ipc_log_string(*(arg1_01 + 0x380),"","",4);
                            sym.__ftrace_dbg(*(arg1_01 + 0x148),0x80025cb,0x8002ae0,*(arg1_01 + 0x418));
                        }
                        goto code_r0x0800bbe4;
                    }
                    *(arg1_01 + 0x2c0) = 1;
                    *(arg1_01 + 0x2d0) = 1;
                    *(arg1_01 + 0x2e0) = 1;
                    iVar7 = of_find_property(*(arg1 + 0x300),"",0);
                    arg1_01[0x3ca] = iVar7 != 0;
                    iVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"",&uStack_94,1,0);
                    if (-1 < iVar4) {
                        arg1_01[0x358] = SUB41(uStack_94,0);
                        _dev_info(arg1_00,"",uStack_94 & 0xff);
                    }
                    uVar13 = devm_clk_get(arg1_00,"");
                    *(arg1_01 + 0x248) = uVar13;
                    if (uVar13 < 0xfffffffffffff001) {
                        uVar13 = devm_clk_get(*(arg1 + 0x70),"");
                        *(arg1_01 + 0x250) = uVar13;
                        if (0xfffffffffffff000 < uVar13) {
                            pcVar10 = "";
code_r0x0800c0d8:
                            _dev_err(arg1_00,pcVar10,uVar13 & 0xffffffff);
                            cVar1 = arg1_01[0x3c9];
                            goto joined_r0x0800c09c;
                        }
                        uVar13 = devm_clk_get(*(arg1 + 0x70),"");
                        *(arg1_01 + 600) = uVar13;
                        if (0xfffffffffffff000 < uVar13) {
                            pcVar10 = "";
                            goto code_r0x0800c0d8;
                        }
                    }
                    else {
                        _dev_err(arg1_00,"",uVar13 & 0xffffffff);
                        cVar1 = arg1_01[0x3c9];
joined_r0x0800c09c:
                        if (cVar1 == 0x0) {
                            *(arg1_01 + 0x418) = 2;
                            ipc_log_string(*(arg1_01 + 0x380),"","",2);
                            sym.__ftrace_dbg(*(arg1_01 + 0x148),0x80025cb,0x8002ae0,*(arg1_01 + 0x418));
                        }
                        if (uVar13 != 0) goto code_r0x0800bbe4;
                    }
                    piVar8 = platform_get_resource_byname(arg1,0x200,"");
                    if (piVar8 == NULL) {
                        _dev_err(arg1_00,"");
                        uVar13 = 0xfffffffa;
                    }
                    else {
                        *(arg1_01 + 0x138) = *piVar8;
                        iVar7 = devm_ioremap(arg1_00,*piVar8,(piVar8[1] - *piVar8) + 1);
                        *(arg1_01 + 0x10) = iVar7;
                        if (iVar7 == 0) {
                            pcVar10 = "";
                        }
                        else {
                            *(arg1_01 + 0x288) = iVar7;
                            iVar4 = platform_get_irq(arg1,1);
                            *(arg1_01 + 0x354) = iVar4;
                            if ((iVar4 < 0) && (arg1_01[0x3c9] == 0x0)) {
                                _dev_info(arg1_00,"");
                            }
                            uVar13 = devm_pinctrl_get(arg1_00);
                            *(arg1_01 + 0x260) = uVar13;
                            if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                _dev_err(arg1_00,"");
                                uVar13 = *(arg1_01 + 0x260);
                            }
                            else {
                                if (arg1_01[0x3c9] == 0x0) {
                                    uVar13 = pinctrl_lookup_state(uVar13,"");
                                    if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                        _dev_info(arg1_00,"");
                                    }
                                    else {
                                        uVar12 = pinctrl_lookup_state(*(arg1_01 + 0x260),"");
                                        *(arg1_01 + 0x268) = uVar12;
                                    }
                                }
                                uVar13 = pinctrl_lookup_state(*(arg1_01 + 0x260),"");
                                *(arg1_01 + 0x270) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    uVar13 = pinctrl_lookup_state(*(arg1_01 + 0x260),"");
                                    *(arg1_01 + 0x270) = uVar13;
                                    if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                        _dev_err(arg1_00,"");
                                        uVar13 = *(arg1_01 + 0x270);
                                        goto code_r0x0800bfe4;
                                    }
                                }
                                uVar13 = pinctrl_lookup_state(*(arg1_01 + 0x260),"");
                                *(arg1_01 + 0x278) = uVar13;
                                if ((uVar13 == 0) || (0xfffffffffffff000 < uVar13)) {
                                    _dev_err(arg1_00,"");
                                    uVar13 = *(arg1_01 + 0x278);
                                }
                                else {
                                    uVar5 = platform_get_irq(arg1,0);
                                    *(arg1_01 + 0xa0) = uVar5;
                                    uVar12 = devm_kasprintf(*(arg1_01 + 0x148),0xcc0,"",*(arg1_01 + 300));
                                    *(arg1_01 + 0x1e8) = uVar12;
                                    irq_modify_status(*(arg1_01 + 0xa0),0,0x1000);
                                    uVar3 = devm_request_threaded_irq
                                                      (*(arg1_01 + 0x148),*(arg1_01 + 0xa0),
                                                       sym.msm_geni_serial_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt,
                                                       0,4,*(arg1_01 + 0x1e8),arg1_01);
                                    if (uVar3 != 0) {
                                        uVar13 = uVar3;
                                        uVar12 = *(arg1_01 + 0x148);
                                        pcVar10 = "";
code_r0x0800c2ac:
                                        _dev_err(uVar12,pcVar10,"",uVar13);
                                        goto code_r0x0800bbe4;
                                    }
                                    if (*(arg1_01 + 0x354) < 1) {
                                        uVar13 = 0;
                                    }
                                    else {
                                        uVar9 = devm_request_threaded_irq
                                                          (*(arg1_01 + 0x148),*(arg1_01 + 0x354),
                                                           sym.msm_geni_wakeup_isr.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt
                                                           ,0,0x2002,"",arg1_01);
                                        uVar13 = uVar9 & 0xffffffff;
                                        if (uVar9 != 0) {
                                            uVar12 = *(arg1_01 + 0x148);
                                            pcVar10 = "";
                                            goto code_r0x0800c2ac;
                                        }
                                        arg1_01[0x3cf] = 0x1;
                                    }
                                }
                            }
code_r0x0800bfe4:
                            iVar4 = uVar13;
                            if (uVar2 != 0 || iVar4 != 0) goto joined_r0x0800c02c;
                            iVar7 = *(arg1 + 0x80);
                            if (iVar7 == 0) {
                                iVar7 = *arg1_00;
                            }
                            iVar7 = wakeup_source_register(*(arg1_01 + 0x148),iVar7);
                            *(arg1_01 + 0x360) = iVar7;
                            if (iVar7 != 0) goto code_r0x0800c18c;
                            pcVar10 = "";
                        }
                        _dev_err(arg1_00,pcVar10);
                        uVar13 = 0xfffffff4;
                    }
                }
                else {
                    _dev_err(arg1_00,"",uVar13 & 0xffffffff);
                    iVar4 = uVar13;
joined_r0x0800c02c:
                    if (iVar4 == 0) {
code_r0x0800c18c:
                        *(arg1_01 + 0x1f0) = 0x2000000010;
                        *(arg1_01 + 0x1f8) = 0x10;
                        *(arg1_01 + 0xb4) = 0x40;
                        *(arg1_01 + 0x3d0) = 0;
                        __init_swait_queue_head(arg1_01 + 0x3d8,"",obj.init_completion.__key);
                        *(arg1_01 + 0x3f0) = 0;
                        __init_swait_queue_head(arg1_01 + 0x3f8,"",obj.init_completion.__key);
                        *(arg1_01 + 0x4d8) = 0;
                        __init_swait_queue_head(arg1_01 + 0x4e0,"",obj.init_completion.__key);
                        *(arg1_01 + 0x4f8) = 0;
                        __init_swait_queue_head(arg1_01 + 0x500,"",obj.init_completion.__key);
                        *(arg1_01 + 0x1d0) = iVar6;
                        *(arg1 + 0xa8) = arg1_01;
                        uVar3 = sym.msm_geni_serial_get_ver_info(arg1_01);
                        if (uVar3 == 0) {
                            iVar7 = of_find_property(*(arg1 + 0x300),"",0);
                            arg1_01[0x520] = iVar7 != 0;
                            iVar7 = of_find_property(*(arg1 + 0x300),"",0);
                            arg1_01[0x532] = iVar7 != 0;
                            if (uVar2 == 0) {
                                *(arg1_01 + 0x228) = sym.handle_rx_hs.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                                uVar12 = devm_kmalloc(*(arg1_01 + 0x148),8,0xdc0);
                                *(arg1_01 + 0x220) = uVar12;
                                if (arg1_01[0x520] == 0x0) {
                                    __pm_runtime_set_status(arg1_00,2);
                                    pm_runtime_set_autosuspend_delay(arg1_00,0x96);
                                    __pm_runtime_use_autosuspend(arg1_00,1);
                                    pm_runtime_enable(arg1_00);
                                }
                                else {
                                    __pm_runtime_set_status(arg1_00,0);
                                    pm_runtime_forbid(arg1_00);
                                }
                            }
                            else {
                                *(arg1_01 + 0x228) = sym.__typeid__ZTSFiP9uart_portjjjbE_global_addr;
                                uVar12 = devm_kmalloc(*(arg1_01 + 0x148),4,0xdc0);
                                *(arg1_01 + 0x220) = uVar12;
                            }
                            _dev_info(arg1_00,"",uVar11,*(arg1_01 + 0xb4),uVar2);
                            device_create_file(*(arg1_01 + 0x148),obj.dev_attr_loopback);
                            device_create_file(*(arg1_01 + 0x148),obj.dev_attr_xfer_mode);
                            device_create_file(*(arg1_01 + 0x148),obj.dev_attr_ver_info);
                            sym.msm_geni_serial_debug_init(arg1_01,uVar2);
                            arg1_01[0x218] = 0x0;
                            *(arg1_01 + 0x418) = 0;
                            sym.msm_geni_serial_init_gsi(arg1_01);
                            if (arg1_01[0x3c9] == 0x0) {
                                *(arg1_01 + 0x410) = 0;
                            }
                            uVar9 = uart_add_one_port(iVar6,arg1_01);
                            uVar13 = uVar9 & 0xffffffff;
                            if (uVar9 != 0) {
                                _dev_err(arg1_00,"",uVar13);
                            }
                            if (uVar2 == 0) {
                                snprintf(&uStack_90,0x28,"",uVar11);
                            }
                        }
                        else {
                            uVar13 = uVar3;
                            _dev_err(arg1_00,"",uVar13);
                        }
                    }
                }
            }
        }
        else {
            uVar13 = 0xffffffed;
        }
    }
code_r0x0800bbe4:
    ipc_log_string(*(arg1_01 + 0x380),"","",uVar13 & 0xffffffff);
    sym.__ftrace_dbg(arg1_00,0x80029e3,0x8002b4a,uVar13 & 0xffffffff);
code_r0x0800bc1c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_68) {
        iVar6 = __stack_chk_fail();
        *extraout_x18 = sym.msm_geni_serial_remove;
        iVar7 = *(iVar6 + 0xa8);
        if (*(iVar7 + 0x3c9) == '\0') {
            uVar12 = *(iVar7 + 0x1d0);
            if ((*(iVar7 + 0x100) == 0) || (*(iVar7 + 300) != *(*(iVar7 + 0x100) + 0x4a))) {
                wakeup_source_unregister(*(iVar7 + 0x360));
                *(iVar7 + 0x360) = 0;
            }
            if (*(iVar7 + 0x520) != '\0') {
                pm_runtime_allow(iVar6 + 0x10);
            }
            uart_remove_one_port(uVar12,iVar7);
            if (*(iVar7 + 0x428) != '\0') {
                destroy_workqueue(*(iVar7 + 0x4c8));
                destroy_workqueue(*(iVar7 + 0x4d0));
            }
            if (*(iVar7 + 0x328) != 0) {
                if (((iVar7 + 0x328 != NULL) && (*(iVar7 + 0x230) != 0)) && (*(iVar7 + 0x2f8) != 0)) {
                    dma_free_attrs(*(iVar7 + 0x230),0x800,*(iVar7 + 0x2f8),*(iVar7 + 0x328),0);
                }
                *(iVar7 + 0x328) = 0;
            }
        }
        return 0;
    }
    return uVar13 & 0xffffffff;
}


// ===== sym.msm_geni_serial_remove @ 0x0800c474 (size 208) =====

ulong sym.msm_geni_serial_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (*(iVar1 + 0x3c9) == '\0') {
        uVar2 = *(iVar1 + 0x1d0);
        if ((*(iVar1 + 0x100) == 0) || (*(iVar1 + 300) != *(*(iVar1 + 0x100) + 0x4a))) {
            wakeup_source_unregister(*(iVar1 + 0x360));
            *(iVar1 + 0x360) = 0;
        }
        if (*(iVar1 + 0x520) != '\0') {
            pm_runtime_allow(arg1 + 0x10);
        }
        uart_remove_one_port(uVar2,iVar1);
        if (*(iVar1 + 0x428) != '\0') {
            destroy_workqueue(*(iVar1 + 0x4c8));
            destroy_workqueue(*(iVar1 + 0x4d0));
        }
        if (*(iVar1 + 0x328) != 0) {
            if (((iVar1 + 0x328 != NULL) && (*(iVar1 + 0x230) != 0)) && (*(iVar1 + 0x2f8) != 0)) {
                dma_free_attrs(*(iVar1 + 0x230),0x800,*(iVar1 + 0x2f8),*(iVar1 + 0x328),0);
            }
            *(iVar1 + 0x328) = 0;
        }
    }
    return 0;
}


// ===== sym.msm_geni_serial_get_ver_info @ 0x0800c544 (size 948) =====

uint32_t sym.msm_geni_serial_get_ver_info(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong uVar5;
    char *arg2;
    ulong uVar6;
    ulong uVar7;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    if (*(arg1 + 0x3c9) == '\0') {
        *(arg1 + 0x420) = 0x21;
        uVar3 = geni_icc_enable(arg1 + 0x288);
        if (uVar3 == 0) {
            uVar3 = geni_icc_set_bw(arg1 + 0x288);
            if (uVar3 == 0) {
                sym.geni_se_common_clks_on(*(arg1 + 0x248),*(arg1 + 0x250),*(arg1 + 600));
                ipc_log_string(*(arg1 + 0x380),"","",1,*(arg1 + 0x420));
                sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,1);
                *(*(arg1 + 0x10) + 0x48) = *(arg1 + 0x420);
                *(*(arg1 + 0x10) + 0x4c) = *(arg1 + 0x420);
                goto code_r0x0800c584;
            }
            uVar5 = *(arg1 + 0x380);
            arg2 = "";
        }
        else {
            uVar5 = *(arg1 + 0x380);
            arg2 = "";
        }
        ipc_log_string(uVar5,arg2,"",uVar3);
        sym.__ftrace_dbg(*(arg1 + 0x148),arg2,0x80028c8,uVar3);
    }
    else {
code_r0x0800c584:
        if ((*(*(arg1 + 0x10) + 0x68) & 0xff00) == 0x200) {
            *(arg1 + 0x280) = 2;
            *(arg1 + 0x3bc) = *(*(arg1 + 0x10) + 0x68) & 0xff;
            *(arg1 + 0x3c0) = *(*(arg1 + 0x10) + 0x6c) & 0xff;
            scnprintf(&uStack_60,0x28,"",*(arg1 + 0x3bc));
            ipc_log_string(*(arg1 + 0x380),"","",&uStack_60);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001278,0x80028c8,&uStack_60);
            uVar3 = geni_se_get_qup_hw_version(arg1 + 0x288);
            ipc_log_string(*(arg1 + 0x380),"","",uVar3);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8001288,0x80028c8,uVar3);
            *(arg1 + 0x3b0) = uVar3 >> 0x1c;
            *(arg1 + 0x3b4) = uVar3 >> 0x10 & 0xfff;
            *(arg1 + 0x3b8) = uVar3 & 0xffff;
            sym.msm_geni_serial_enable_interrupts(arg1);
            uVar3 = 0;
            cVar1 = *(arg1 + 0x3c9);
        }
        else {
            _dev_err(*(arg1 + 0x148),"","",*(*(arg1 + 0x10) + 0x68) >> 8 & 0xff);
            uVar3 = 0xfffffffa;
            cVar1 = *(arg1 + 0x3c9);
        }
        if (cVar1 == '\0') {
            ipc_log_string(*(arg1 + 0x380),"","",0,*(arg1 + 0x420));
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8000fb4,0x80013af,0);
            *(*(arg1 + 0x10) + 0x48) = 1;
            *(*(arg1 + 0x10) + 0x4c) = 1;
            uVar5 = *(arg1 + 0x248);
            uVar6 = *(arg1 + 0x250);
            uVar7 = *(arg1 + 600);
            clk_disable(*(*(arg1 + 0x10) + 0x48),uVar5);
            clk_unprepare(uVar5);
            clk_disable(uVar6);
            clk_unprepare(uVar6);
            clk_disable(uVar7);
            clk_unprepare(uVar7);
            uVar4 = geni_icc_disable(arg1 + 0x288);
            if (uVar4 != 0) {
                ipc_log_string(*(arg1 + 0x380),"","",uVar4);
                sym.__ftrace_dbg(*(arg1 + 0x148),0x800290a,0x80028c8,uVar4);
                uVar3 = uVar4;
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    __stack_chk_fail();
    return 0xffffffff;
}


// ===== sym.handle_rx_console @ 0x0800c8f8 (size 16) =====

ulong sym.handle_rx_console(void)

{
    return 0xffffffff;
}


// ===== sym.handle_rx_hs @ 0x0800c908 (size 472) =====

uint64_t sym.handle_rx_hs(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t in_x4;
    int64_t iVar6;
    uint *puVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    unkbyte7 Stack_128;
    uint uStack_121;
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    int64_t iStack_f8;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uVar3 = *(arg1 + 500);
    uVar9 = *(arg1 + 200);
    if (arg4 == 0 || arg3 == 0) {
        arg3 = uVar3 >> 3;
    }
    if (arg2 != 0) {
        iVar6 = *(arg1 + 0x10);
        uVar8 = arg2 & 0xffffffff;
        puVar7 = *(arg1 + 0x220);
        do {
            uVar1 = uVar8 - 1;
            uVar8 = uVar1;
            *puVar7 = *(iVar6 + 0x780);
            puVar7 = puVar7 + 1;
        } while (uVar1 != 0);
    }
    if ((in_x4 & 1) == 0) {
        arg3 = arg3 + (uVar3 * (arg2 + -1) >> 3);
        uVar3 = tty_insert_flip_string_fixed_flag(uVar9,*(arg1 + 0x220),0,arg3);
        uVar8 = uVar3;
        if (uVar3 != arg3) {
            _dev_err(*(arg1 + 0x148),"","",uVar8,arg3);
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800cad4);
            (*pcVar2)();
        }
        *(arg1 + 0xe0) = *(arg1 + 0xe0) + uVar3;
        tty_flip_buffer_push(uVar9);
        uVar3 = arg3;
        if (0x1f < arg3) {
            uVar3 = 0x20;
        }
        uVar9 = *(arg1 + 0x370);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        hex_dump_to_buffer(*(arg1 + 0x220),uVar3,0x20,1,&stack0xffffffffffffff78,0x40,0);
        scnprintf(&stack0xffffffffffffff18,0x60,"",0x80013e8,0,arg3,&stack0xffffffffffffff78);
        ipc_log_string(uVar9,"","",&stack0xffffffffffffff18);
        sym.__ftrace_dbg(*(arg1 + 0x148),0x80015f4,0x80027b9,&stack0xffffffffffffff18);
    }
    else {
        uVar8 = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    auVar10 = __stack_chk_fail();
    iVar4 = auVar10._0_8_;
    *extraout_x18 = 0x800cadc;
    uStack_108 = 0x800cadc;
    iVar6 = sp_el0;
    iStack_118 = *(iVar6 + 0x5e0);
    uStack_130 = 0;
    Stack_128 = 0;
    uStack_121 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    iVar6 = (*(iVar4 + 0x148))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar4 + 0x148);
    }
    puStack_110 = &stack0xffffffffffffffc0;
    uStack_100 = uVar8;
    iStack_f8 = arg1;
    uVar8 = debugfs_create_dir(iVar6,0);
    *(iVar4 + 0x210) = uVar8;
    if ((uVar8 == 0) || (0xfffffffffffff000 < uVar8)) {
        uVar8 = _dev_err(*(iVar4 + 0x148),"");
    }
    uStack_130 = 0;
    Stack_128 = 0;
    uStack_121 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    if ((auVar10._8_8_ & 1) == 0) {
        if (*(iVar4 + 0x370) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,0x80021c3);
            uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x370) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar4 + 0x368) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,0x800137d);
            uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x368) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar4 + 0x378) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,"");
            uVar8 = ipc_log_context_create(10,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x378) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar4 + 0x380) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,"");
            uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x380) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar4 + 0x398) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,"");
            uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x398) = uVar8;
            if (uVar8 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"");
            }
        }
        uStack_130 = 0;
        Stack_128 = 0;
        uStack_121 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        if (*(iVar4 + 0x388) == 0) {
            iVar6 = (*(iVar4 + 0x148))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + 0x148);
            }
            scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,"");
            uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
            *(iVar4 + 0x388) = uVar8;
            if (uVar8 == 0) {
                pcVar5 = "";
                goto code_r0x0800ce58;
            }
        }
    }
    else if (*(iVar4 + 0x390) == 0) {
        iVar6 = (*(iVar4 + 0x148))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar4 + 0x148);
        }
        scnprintf(&stack0xfffffffffffffec0,0x23,"",iVar6,"");
        uVar8 = ipc_log_context_create(0x1e,&stack0xfffffffffffffec0,0);
        *(iVar4 + 0x390) = uVar8;
        if (uVar8 == 0) {
            pcVar5 = "";
code_r0x0800ce58:
            uVar8 = _dev_info(*(iVar4 + 0x148),pcVar5);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_118) {
        return uVar8;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_geni_serial_init_gsi;
    iVar6 = iVar4 + 0x288;
    uVar3 = geni_icc_enable(iVar6);
    if (uVar3 == 0) {
        uVar3 = geni_icc_set_bw(iVar6);
        if (uVar3 == 0) {
            *(iVar4 + 0x428) = *(*(iVar4 + 0x10) + 100) & 1;
            uVar3 = geni_icc_disable(iVar6);
            if (uVar3 == 0) {
                uVar8 = _dev_info(*(iVar4 + 0x148),"",*(iVar4 + 0x428));
                if (*(iVar4 + 0x428) == '\0') {
                    return uVar8;
                }
                uVar9 = devm_kmalloc(*(iVar4 + 0x148),0x2b0,0xdc0);
                *(iVar4 + 0x430) = uVar9;
                *(iVar4 + 0x208) = 3;
                iVar6 = (*(iVar4 + 0x148))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar4 + 0x148);
                }
                uVar9 = alloc_workqueue(0x800129a,0x10,1,iVar6);
                *(iVar4 + 0x4c8) = uVar9;
                iVar6 = (*(iVar4 + 0x148))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar4 + 0x148);
                }
                uVar8 = alloc_workqueue(0x800129a,0x10,1,iVar6);
                *(iVar4 + 0x4d0) = uVar8;
                *(iVar4 + 0x438) = 0xfffffffe0;
                *(iVar4 + 0x440) = iVar4 + 0x440;
                *(iVar4 + 0x448) = iVar4 + 0x440;
                *(iVar4 + 0x450) = sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar4 + 0x468) = 0xfffffffe0;
                *(iVar4 + 0x470) = iVar4 + 0x470;
                *(iVar4 + 0x478) = iVar4 + 0x470;
                *(iVar4 + 0x498) = 0xfffffffe0;
                *(iVar4 + 0x480) = sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar4 + 0x4a0) = iVar4 + 0x4a0;
                *(iVar4 + 0x4a8) = iVar4 + 0x4a0;
                *(iVar4 + 0x4b0) = sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                return uVar8;
            }
            uVar8 = uVar3;
            pcVar5 = "";
            ipc_log_string(*(iVar4 + 0x380),"","",uVar8);
            iVar6 = *(iVar4 + 0x148);
            goto code_r0x0800ceec;
        }
        uVar9 = *(iVar4 + 0x380);
        pcVar5 = "";
    }
    else {
        uVar9 = *(iVar4 + 0x380);
        pcVar5 = "";
    }
    uVar8 = uVar3;
    ipc_log_string(uVar9,pcVar5,"",uVar8);
    iVar6 = *(iVar4 + 0x148);
code_r0x0800ceec:
    uVar8 = sym.__ftrace_dbg(iVar6,pcVar5,0x8000ff1,uVar8);
    return uVar8;
}


// ===== sym.msm_geni_serial_debug_init @ 0x0800cae0 (size 904) =====

void sym.msm_geni_serial_debug_init(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    unkbyte7 Stack_38;
    uint uStack_31;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    Stack_38 = 0;
    uStack_31 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    iVar2 = (*(arg1 + 0x148))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x148);
    }
    uVar3 = debugfs_create_dir(iVar2,0);
    *(arg1 + 0x210) = uVar3;
    if ((uVar3 == 0) || (0xfffffffffffff000 < uVar3)) {
        _dev_err(*(arg1 + 0x148),"");
    }
    uStack_40 = 0;
    Stack_38 = 0;
    uStack_31 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x370) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,0x80021c3);
            iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
            *(arg1 + 0x370) = iVar2;
            if (iVar2 == 0) {
                _dev_info(*(arg1 + 0x148),"");
            }
        }
        uStack_40 = 0;
        Stack_38 = 0;
        uStack_31 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(arg1 + 0x368) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,0x800137d);
            iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
            *(arg1 + 0x368) = iVar2;
            if (iVar2 == 0) {
                _dev_info(*(arg1 + 0x148),"");
            }
        }
        uStack_40 = 0;
        Stack_38 = 0;
        uStack_31 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(arg1 + 0x378) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,"");
            iVar2 = ipc_log_context_create(10,&uStack_50,0);
            *(arg1 + 0x378) = iVar2;
            if (iVar2 == 0) {
                _dev_info(*(arg1 + 0x148),"");
            }
        }
        uStack_40 = 0;
        Stack_38 = 0;
        uStack_31 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(arg1 + 0x380) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,"");
            iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
            *(arg1 + 0x380) = iVar2;
            if (iVar2 == 0) {
                _dev_info(*(arg1 + 0x148),"");
            }
        }
        uStack_40 = 0;
        Stack_38 = 0;
        uStack_31 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(arg1 + 0x398) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,"");
            iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
            *(arg1 + 0x398) = iVar2;
            if (iVar2 == 0) {
                _dev_info(*(arg1 + 0x148),"");
            }
        }
        uStack_40 = 0;
        Stack_38 = 0;
        uStack_31 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        if (*(arg1 + 0x388) == 0) {
            iVar2 = (*(arg1 + 0x148))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x148);
            }
            scnprintf(&uStack_50,0x23,"",iVar2,"");
            iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
            *(arg1 + 0x388) = iVar2;
            if (iVar2 == 0) {
                pcVar6 = "";
                goto code_r0x0800ce58;
            }
        }
    }
    else if (*(arg1 + 0x390) == 0) {
        iVar2 = (*(arg1 + 0x148))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x148);
        }
        scnprintf(&uStack_50,0x23,"",iVar2,"");
        iVar2 = ipc_log_context_create(0x1e,&uStack_50,0);
        *(arg1 + 0x390) = iVar2;
        if (iVar2 == 0) {
            pcVar6 = "";
code_r0x0800ce58:
            _dev_info(*(arg1 + 0x148),pcVar6);
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.msm_geni_serial_init_gsi;
    iVar2 = iVar4 + 0x288;
    uVar1 = geni_icc_enable(iVar2);
    if (uVar1 == 0) {
        uVar1 = geni_icc_set_bw(iVar2);
        if (uVar1 == 0) {
            *(iVar4 + 0x428) = *(*(iVar4 + 0x10) + 100) & 1;
            uVar1 = geni_icc_disable(iVar2);
            if (uVar1 == 0) {
                _dev_info(*(iVar4 + 0x148),"",*(iVar4 + 0x428));
                if (*(iVar4 + 0x428) == '\0') {
                    return;
                }
                uVar5 = devm_kmalloc(*(iVar4 + 0x148),0x2b0,0xdc0);
                *(iVar4 + 0x430) = uVar5;
                *(iVar4 + 0x208) = 3;
                iVar2 = (*(iVar4 + 0x148))[0xe];
                if (iVar2 == 0) {
                    iVar2 = **(iVar4 + 0x148);
                }
                uVar5 = alloc_workqueue(0x800129a,0x10,1,iVar2);
                *(iVar4 + 0x4c8) = uVar5;
                iVar2 = (*(iVar4 + 0x148))[0xe];
                if (iVar2 == 0) {
                    iVar2 = **(iVar4 + 0x148);
                }
                uVar5 = alloc_workqueue(0x800129a,0x10,1,iVar2);
                *(iVar4 + 0x4d0) = uVar5;
                *(iVar4 + 0x438) = 0xfffffffe0;
                *(iVar4 + 0x440) = iVar4 + 0x440;
                *(iVar4 + 0x448) = iVar4 + 0x440;
                *(iVar4 + 0x450) = sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar4 + 0x468) = 0xfffffffe0;
                *(iVar4 + 0x470) = iVar4 + 0x470;
                *(iVar4 + 0x478) = iVar4 + 0x470;
                *(iVar4 + 0x498) = 0xfffffffe0;
                *(iVar4 + 0x480) = sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(iVar4 + 0x4a0) = iVar4 + 0x4a0;
                *(iVar4 + 0x4a8) = iVar4 + 0x4a0;
                *(iVar4 + 0x4b0) = sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                return;
            }
            uVar3 = uVar1;
            pcVar6 = "";
            ipc_log_string(*(iVar4 + 0x380),"","",uVar3);
            iVar2 = *(iVar4 + 0x148);
            goto code_r0x0800ceec;
        }
        uVar5 = *(iVar4 + 0x380);
        pcVar6 = "";
    }
    else {
        uVar5 = *(iVar4 + 0x380);
        pcVar6 = "";
    }
    uVar3 = uVar1;
    ipc_log_string(uVar5,pcVar6,"",uVar3);
    iVar2 = *(iVar4 + 0x148);
code_r0x0800ceec:
    sym.__ftrace_dbg(iVar2,pcVar6,0x8000ff1,uVar3);
    return;
}


// ===== sym.msm_geni_serial_init_gsi @ 0x0800ce68 (size 480) =====

void sym.msm_geni_serial_init_gsi(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    char *arg2;
    ulong *in_x18;
    uint64_t arg4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1 + 0x288;
    uVar1 = geni_icc_enable(iVar3);
    if (uVar1 == 0) {
        uVar1 = geni_icc_set_bw(iVar3);
        if (uVar1 == 0) {
            *(arg1 + 0x428) = *(*(arg1 + 0x10) + 100) & 1;
            uVar1 = geni_icc_disable(iVar3);
            if (uVar1 == 0) {
                _dev_info(*(arg1 + 0x148),"",*(arg1 + 0x428));
                if (*(arg1 + 0x428) == '\0') {
                    return;
                }
                uVar2 = devm_kmalloc(*(arg1 + 0x148),0x2b0,0xdc0);
                *(arg1 + 0x430) = uVar2;
                *(arg1 + 0x208) = 3;
                iVar3 = (*(arg1 + 0x148))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x148);
                }
                uVar2 = alloc_workqueue(0x800129a,0x10,1,iVar3);
                *(arg1 + 0x4c8) = uVar2;
                iVar3 = (*(arg1 + 0x148))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x148);
                }
                uVar2 = alloc_workqueue(0x800129a,0x10,1,iVar3);
                *(arg1 + 0x4d0) = uVar2;
                *(arg1 + 0x438) = 0xfffffffe0;
                *(arg1 + 0x440) = arg1 + 0x440;
                *(arg1 + 0x448) = arg1 + 0x440;
                *(arg1 + 0x450) = sym.msm_geni_uart_gsi_xfer_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(arg1 + 0x468) = 0xfffffffe0;
                *(arg1 + 0x470) = arg1 + 0x470;
                *(arg1 + 0x478) = arg1 + 0x470;
                *(arg1 + 0x498) = 0xfffffffe0;
                *(arg1 + 0x480) = sym.msm_geni_uart_gsi_cancel_rx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                *(arg1 + 0x4a0) = arg1 + 0x4a0;
                *(arg1 + 0x4a8) = arg1 + 0x4a0;
                *(arg1 + 0x4b0) = sym.msm_geni_uart_gsi_cancel_tx.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                return;
            }
            arg4 = uVar1;
            arg2 = "";
            ipc_log_string(*(arg1 + 0x380),"","",arg4);
            iVar3 = *(arg1 + 0x148);
            goto code_r0x0800ceec;
        }
        uVar2 = *(arg1 + 0x380);
        arg2 = "";
    }
    else {
        uVar2 = *(arg1 + 0x380);
        arg2 = "";
    }
    arg4 = uVar1;
    ipc_log_string(uVar2,arg2,"",arg4);
    iVar3 = *(arg1 + 0x148);
code_r0x0800ceec:
    sym.__ftrace_dbg(iVar3,arg2,0x8000ff1,arg4);
    return;
}


// ===== sym.msm_geni_serial_isr @ 0x0800d04c (size 132) =====

ulong sym.msm_geni_serial_isr(ulong noname_0,int64_t arg1)

{
    char cVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t extraout_x1;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = _raw_spin_lock_irqsave(arg1);
    sym.msm_geni_serial_handle_isr(arg1,&uStack_30,0);
    _raw_spin_unlock_irqrestore(arg1,uStack_30);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return 1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.msm_geni_wakeup_isr;
    uVar3 = _raw_spin_lock_irqsave(extraout_x1);
    ipc_log_string(*(extraout_x1 + 0x370),"","",*(extraout_x1 + 0x3a8));
    sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x800136a,0x80016e2,*(extraout_x1 + 0x3a8));
    cVar1 = *(extraout_x1 + 0x358);
    iVar5 = *(extraout_x1 + 0x3a8);
    if ((cVar1 == '\0') || (iVar5 != 2)) {
        if (iVar5 < 2) {
            *(extraout_x1 + 0x3a8) = iVar5 + 1;
        }
    }
    else {
        iVar6 = *(*(extraout_x1 + 200) + 0xa8);
        if (iVar6 == 0) {
            ipc_log_string(*(extraout_x1 + 0x370),"","",2);
            sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x8002521,0x80016e2,*(extraout_x1 + 0x3a8));
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d1ec);
            (*pcVar2)();
        }
        iVar4 = *(*(iVar6 + 0x328) + 0xa0);
        iVar5 = *(iVar4 + 8);
        if (iVar5 < *(iVar4 + 0xc)) {
            if ((*(iVar4 + 0x18) & 1) == 0) {
                *(iVar4 + iVar5 + *(iVar4 + 0xc) + 0x20) = 0;
                iVar5 = *(iVar4 + 8);
            }
            *(iVar4 + 8) = iVar5 + 1;
            *(iVar4 + iVar5 + 0x20) = cVar1;
        }
        else {
            __tty_insert_flip_char(*(iVar6 + 0x328),cVar1,0);
        }
        ipc_log_string(*(extraout_x1 + 0x370),"","",*(extraout_x1 + 0x358));
        sym.__ftrace_dbg(*(extraout_x1 + 0x148),0x8001e2d,0x80016e2,*(extraout_x1 + 0x358));
        *(extraout_x1 + 0x3a8) = 0;
        tty_flip_buffer_push(*(iVar6 + 0x328));
        pm_wakeup_ws_event(*(extraout_x1 + 0x360),2000,0);
    }
    _raw_spin_unlock_irqrestore(extraout_x1,uVar3);
    return 1;
}


// ===== sym.msm_geni_wakeup_isr @ 0x0800d0d0 (size 424) =====

ulong sym.msm_geni_wakeup_isr(ulong noname_0,int64_t arg1)

{
    char cVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(arg1);
    ipc_log_string(*(arg1 + 0x370),"","",*(arg1 + 0x3a8));
    sym.__ftrace_dbg(*(arg1 + 0x148),0x800136a,0x80016e2,*(arg1 + 0x3a8));
    cVar1 = *(arg1 + 0x358);
    iVar5 = *(arg1 + 0x3a8);
    if ((cVar1 == '\0') || (iVar5 != 2)) {
        if (iVar5 < 2) {
            *(arg1 + 0x3a8) = iVar5 + 1;
        }
    }
    else {
        iVar6 = *(*(arg1 + 200) + 0xa8);
        if (iVar6 == 0) {
            ipc_log_string(*(arg1 + 0x370),"","",2);
            sym.__ftrace_dbg(*(arg1 + 0x148),0x8002521,0x80016e2,*(arg1 + 0x3a8));
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x800d1ec);
            (*pcVar2)();
        }
        iVar4 = *(*(iVar6 + 0x328) + 0xa0);
        iVar5 = *(iVar4 + 8);
        if (iVar5 < *(iVar4 + 0xc)) {
            if ((*(iVar4 + 0x18) & 1) == 0) {
                *(iVar4 + iVar5 + *(iVar4 + 0xc) + 0x20) = 0;
                iVar5 = *(iVar4 + 8);
            }
            *(iVar4 + 8) = iVar5 + 1;
            *(iVar4 + iVar5 + 0x20) = cVar1;
        }
        else {
            __tty_insert_flip_char(*(iVar6 + 0x328),cVar1,0);
        }
        ipc_log_string(*(arg1 + 0x370),"","",*(arg1 + 0x358));
        sym.__ftrace_dbg(*(arg1 + 0x148),0x8001e2d,0x80016e2,*(arg1 + 0x358));
        *(arg1 + 0x3a8) = 0;
        tty_flip_buffer_push(*(iVar6 + 0x328));
        pm_wakeup_ws_event(*(arg1 + 0x360),2000,0);
    }
    _raw_spin_unlock_irqrestore(arg1,uVar3);
    return 1;
}


// ===== sym.loopback_show @ 0x0800d278 (size 68) =====

int64_t sym.loopback_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,4,0x8001da9,*(*(arg1 + 0x98) + 0x350));
    return iVar1;
}


// ===== sym.loopback_store @ 0x0800d2bc (size 104) =====

int64_t sym.loopback_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kstrtoint(arg2,0,*(arg1 + 0x98) + 0x350);
    if (iVar1 != 0) {
        _dev_err(arg1,"");
        arg3 = -0x16;
    }
    return arg3;
}


// ===== sym.xfer_mode_show @ 0x0800d324 (size 112) =====

int64_t sym.xfer_mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x98) + 0x208);
    if (iVar1 == 2) {
        pcVar3 = "";
        uVar2 = 8;
    }
    else {
        if (iVar1 != 1) {
            return 0;
        }
        pcVar3 = "";
        uVar2 = 6;
    }
    iVar1 = scnprintf(arg2,uVar2,pcVar3);
    return iVar1;
}


// ===== sym.xfer_mode_store @ 0x0800d394 (size 384) =====

int64_t sym.xfer_mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    int iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if ((*(arg1_00 + 0x100) == 0) || (*(arg1_00 + 300) != *(*(arg1_00 + 0x100) + 0x4a))) {
        iVar4 = arg3;
        iVar1 = strnstr(arg2,"",4);
        if (iVar1 == 0) {
            iVar1 = strnstr(arg2,"",6);
            if (iVar1 == 0) {
                _dev_err(arg1,"","",arg2);
                return -0x16;
            }
            iVar3 = 2;
        }
        else {
            iVar3 = 1;
        }
        if (iVar3 != *(arg1_00 + 0x208)) {
            sym.msm_geni_serial_power_on(arg1_00);
            sym.msm_geni_serial_stop_tx(arg1_00);
            sym.msm_geni_serial_stop_rx(arg1_00);
            uVar2 = _raw_spin_lock_irqsave(arg1_00);
            *(arg1_00 + 0x208) = iVar3;
            geni_se_select_mode(arg1_00 + 0x288,iVar3);
            _raw_spin_unlock_irqrestore(arg1_00,uVar2);
            sym.msm_geni_serial_start_rx(arg1_00);
            if (*(*(arg1_00 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(arg1_00 + 0x378),"","");
                sym.__ftrace_dbg(*(arg1_00 + 0x148),0x8000db8,0x800202b,iVar4);
            }
            else {
                iVar4 = *(arg1_00 + 0x148);
                if ((*(iVar4 + 0x200) & 7) == 0) {
                    uVar2 = ktime_get_mono_fast_ns();
                    *(iVar4 + 0x218) = uVar2;
                    __pm_runtime_suspend(*(arg1_00 + 0x148),0xd);
                }
            }
        }
    }
    else {
        arg3 = -0x5f;
    }
    return arg3;
}


// ===== sym.ver_info_show @ 0x0800d518 (size 84) =====

int64_t sym.ver_info_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    iVar1 = scnprintf(arg2,0x28,"",*(iVar2 + 0x3bc),*(iVar2 + 0x3bc),*(iVar2 + 0x3b0),*(iVar2 + 0x3b4),
                      *(iVar2 + 0x3b8));
    return iVar1;
}


// ===== sym.msm_geni_uart_gsi_xfer_tx @ 0x0800d56c (size 1480) =====

void sym.msm_geni_uart_gsi_xfer_tx(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x3;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    code *pcVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong unaff_x30;
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
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar15 = *(arg1 + -8);
    iVar7 = arg1 + -0x438;
    iVar14 = *(arg1 + -0x370);
    piVar9 = *(arg1 + -0x208);
    ipc_log_string(*(arg1 + -0xb8),"","");
    sym.__ftrace_dbg(*(arg1 + -0x2f0),0x8001afb,0x800154c,in_x3);
    iVar3 = *(iVar14 + 0x1bc);
    uVar2 = *(iVar14 + 0x1b8) - iVar3 & 0xfff;
    if (uVar2 < 0x100) {
        uart_write_wakeup(iVar7);
        iVar3 = *(iVar14 + 0x1bc);
    }
    uVar6 = 0x1000 - iVar3;
    uVar1 = uVar6;
    if (uVar2 <= uVar6) {
        uVar1 = uVar2;
    }
    puVar10 = uVar1;
    if ((uVar1 != 0) && (*(arg1 + -0x150) == 0)) {
        uVar2 = uVar1;
        if (0x1f < uVar1) {
            uVar2 = 0x20;
        }
        uVar11 = *(arg1 + -0xd0);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        hex_dump_to_buffer(*(iVar14 + 0x1b0) + iVar3,uVar2,0x20,1,&uStack_98,0x40,0);
        scnprintf(&uStack_f8,0x60,"","",0,uVar1,&uStack_98);
        ipc_log_string(uVar11,"","",&uStack_f8);
        in_x3 = &uStack_f8;
        sym.__ftrace_dbg(*(arg1 + -0x2f0),0x80015f4,0x80027b9,in_x3);
        uVar2 = sym.msm_geni_allocate_chan(iVar7);
        if (uVar2 == 0) {
            sg_init_table(*(arg1 + -8) + 0xf0,3);
            iVar5 = *(arg1 + -8);
            *(iVar5 + 0xf8) = iVar5 + 0x10 & 0xfff;
            *(iVar5 + 0xfc) = 0x10;
            *(iVar5 + 0xf0) =
                 (((iVar5 + 0x10) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar5 + 0xf0) & 3) -
                 0x200000000;
            *(iVar15 + 0x30) = 1;
            *(iVar15 + 0x38) = 0x20000100000000;
            iVar5 = *(arg1 + -8);
            *(iVar5 + 0x118) = iVar15 + 0x30 & 0xfff;
            *(iVar5 + 0x11c) = 0x10;
            *(iVar5 + 0x110) =
                 (((iVar15 + 0x30) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 | *(iVar5 + 0x110) & 3) -
                 0x200000000;
            if (piVar9 != NULL) {
                uVar6 = *(iVar14 + 0x1b0) + *(iVar14 + 0x1bc);
                uVar4 = is_vmalloc_addr(uVar6);
                if (((uVar4 & 1) != 0) && (obj.dma_map_single_attrs.__already_done == 0x0)) {
                    obj.dma_map_single_attrs.__already_done = 0x1;
                    uVar11 = dev_driver_string(piVar9);
                    iVar7 = piVar9[0xe];
                    if (iVar7 == 0) {
                        iVar7 = *piVar9;
                    }
                    __warn_printk("",uVar11,iVar7);
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x800dae0);
                    (*pcVar13)();
                }
                if ((uVar4 & 1) == 0) {
                    iVar14 = dma_map_page_attrs(piVar9,((uVar6 * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0)
                                                        - 0x200000000,uVar6 & 0xfff,puVar10,1,0);
                    *(arg1 + -0x150) = iVar14;
                    in_x3 = puVar10;
                    if (iVar14 != -1) {
                        *(arg1 + -0x148) = uVar1;
                        *(*(arg1 + -8) + 0x50) = iVar14;
                        *(*(arg1 + -8) + 0x54) = *(arg1 + -0x14c);
                        *(*(arg1 + -8) + 0x58) = uVar1 & 0xffffff;
                        *(*(arg1 + -8) + 0x5c) = 0x100200;
                        iVar14 = *(arg1 + -8);
                        *(iVar14 + 0x138) = iVar14 + 0x50 & 0xfff;
                        *(iVar14 + 0x13c) = 0x10;
                        *(iVar14 + 0x130) =
                             (((iVar14 + 0x50) * 0x100 >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0 |
                             *(iVar14 + 0x130) & 3) - 0x200000000;
                        puVar10 = *(arg1 + -8);
                        piVar12 = *puVar10;
                        if (((piVar12 == NULL) || (*piVar12 == 0)) || (pcVar13 = *(*piVar12 + 0x138), pcVar13 == NULL))
                        {
                            uVar11 = 0;
                        }
                        else {
                            __cfi_slowpath_diag(0x3675599da7c39b65,pcVar13,0x8000cc0);
                            in_x3 = 0x1;
                            uVar11 = (*pcVar13)(piVar12,puVar10 + 0x1e,3,1,3,0);
                            puVar10 = *(arg1 + -8);
                        }
                        puVar10[0x4a] = uVar11;
                        iVar14 = *(*(arg1 + -8) + 0x250);
                        if (iVar14 == 0) {
                            _dev_err(*(arg1 + -0x2f0),"","");
                            if (*(arg1 + -0x150) != -1) {
                                in_x3 = 0x1;
                                dma_unmap_page_attrs(piVar9,*(arg1 + -0x150),*(arg1 + -0x148),1,0);
                            }
                            sym.msm_geni_deallocate_chan(iVar7);
                            uVar11 = *(arg1 + -0xb8);
                            pcVar8 = "";
                        }
                        else {
                            *(iVar14 + 0x28) = sym.msm_geni_uart_gsi_tx_cb.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
                            *(*(*(arg1 + -8) + 0x250) + 0x38) = *(arg1 + -8) + 0x260;
                            iVar7 = *(*(arg1 + -8) + 0x250);
                            pcVar13 = *(iVar7 + 0x18);
                            __cfi_slowpath_diag(0xc97b94b4f4a7b659,pcVar13,0x8000ce0);
                            iVar3 = (*pcVar13)(iVar7);
                            if (iVar3 < 0) {
                                _printk(0x8002163,"",iVar3);
                                piVar9 = **(arg1 + -8);
                                pcVar13 = *(*piVar9 + 0x178);
                                if (pcVar13 != NULL) {
                                    __cfi_slowpath_diag(0x146502001565ea5c,pcVar13,0x8000d00);
                                    (*pcVar13)(piVar9);
                                }
                                goto code_r0x0800d9a8;
                            }
                            *(arg1 + 0xc0) = 0;
                            piVar9 = **(arg1 + -8);
                            pcVar13 = *(*piVar9 + 400);
                            __cfi_slowpath_diag(0x6d896a35912b7bb6,pcVar13,0x8000d20);
                            (*pcVar13)(piVar9);
                            wait_for_completion_timeout(arg1 + 0xc0,0x19);
                            uVar11 = *(arg1 + -0xb8);
                            pcVar8 = "";
                        }
                        ipc_log_string(uVar11,pcVar8,"");
                        sym.__ftrace_dbg(*(arg1 + -0x2f0),pcVar8,0x800154c,in_x3);
                        goto code_r0x0800d9a8;
                    }
                }
                else {
                    *(arg1 + -0x150) = 0xffffffffffffffff;
                }
            }
            _dev_err(*(arg1 + -0x2f0),"","");
            dma_release_channel(*(*(arg1 + -8) + 8));
            dma_release_channel(**(arg1 + -8));
            *(*(arg1 + -8) + 8) = 0;
            **(arg1 + -8) = 0;
        }
        else {
            in_x3 = uVar2;
            _dev_err(*(arg1 + -0x2f0),"","");
        }
    }
code_r0x0800d9a8:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.msm_geni_uart_gsi_cancel_rx;
    ipc_log_string(*(iVar7 + -0xe8),"","");
    sym.__ftrace_dbg(*(iVar7 + -800),0x8001afb,0x80013eb,in_x3);
    if (*(iVar7 + 0xb9) == '\0') {
        pcVar8 = "";
    }
    else {
        piVar9 = *(*(iVar7 + -0x38) + 8);
        if (piVar9 != NULL) {
            pcVar13 = *(*piVar9 + 0x178);
            if (pcVar13 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar13,0x8000d00);
                (*pcVar13)(piVar9);
            }
        }
        complete(iVar7 + 0x70);
        *(iVar7 + 0xb9) = 0;
        pcVar8 = "";
        *(iVar7 + 0xb4) = 0;
    }
    ipc_log_string(*(iVar7 + -0xe8),pcVar8,"");
    sym.__ftrace_dbg(*(iVar7 + -800),pcVar8,0x80013eb,in_x3);
    return;
}


// ===== sym.msm_geni_uart_gsi_cancel_rx @ 0x0800db34 (size 256) =====

void sym.msm_geni_uart_gsi_cancel_rx(int64_t arg1)

{
    int64_t in_x3;
    ulong *in_x18;
    int64_t *piVar1;
    char *arg2;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    ipc_log_string(*(arg1 + -0xe8),"","");
    sym.__ftrace_dbg(*(arg1 + -800),0x8001afb,0x80013eb,in_x3);
    if (*(arg1 + 0xb9) == '\0') {
        arg2 = "";
    }
    else {
        piVar1 = *(*(arg1 + -0x38) + 8);
        if (piVar1 != NULL) {
            pcVar2 = *(*piVar1 + 0x178);
            if (pcVar2 != NULL) {
                __cfi_slowpath_diag(0x146502001565ea5c,pcVar2,0x8000d00);
                (*pcVar2)(piVar1);
            }
        }
        complete(arg1 + 0x70);
        *(arg1 + 0xb9) = 0;
        arg2 = "";
        *(arg1 + 0xb4) = 0;
    }
    ipc_log_string(*(arg1 + -0xe8),arg2,"");
    sym.__ftrace_dbg(*(arg1 + -800),arg2,0x80013eb,in_x3);
    return;
}


// ===== sym.msm_geni_uart_gsi_cancel_tx @ 0x0800dc34 (size 100) =====

void sym.msm_geni_uart_gsi_cancel_tx(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = **(arg1 + -0x68);
    pcVar2 = *(*piVar1 + 0x178);
    if (pcVar2 != NULL) {
        __cfi_slowpath_diag(0x146502001565ea5c,pcVar2,0x8000d00);
        (*pcVar2)(piVar1);
    }
    return;
}


// ===== sym.msm_geni_uart_gsi_tx_cb @ 0x0800dc98 (size 488) =====

void sym.msm_geni_uart_gsi_tx_cb(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t in_x3;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    iVar4 = *(iVar3 + 200);
    ipc_log_string(*(iVar3 + 0x380),"","");
    sym.__ftrace_dbg(*(iVar3 + 0x148),0x8001afb,0x800102f,in_x3);
    *(iVar4 + 0x1bc) = *(iVar3 + 0x2f0) + *(iVar4 + 0x1bc) & 0xfff;
    geni_se_tx_dma_unprep(iVar3 + 0x288,*(iVar3 + 0x2e8),*(iVar3 + 0x2f0));
    iVar1 = *(iVar3 + 0x2f0);
    *(iVar3 + 0x2e8) = 0;
    *(iVar3 + 0x2f0) = 0;
    *(iVar3 + 0xe4) = *(iVar3 + 0xe4) + iVar1;
    complete(iVar3 + 0x4f8);
    if (*(iVar4 + 0x1b8) == *(iVar4 + 0x1bc)) {
        if ((*(iVar3 + 0x100) == 0) || (*(iVar3 + 300) != *(*(iVar3 + 0x100) + 0x4a))) {
            ipc_log_string(*(iVar3 + 0x380),"","");
            sym.__ftrace_dbg(*(iVar3 + 0x148),0x800249f,0x800102f,in_x3);
            if (*(*(iVar3 + 0x148) + 0x1f8) == 0) {
                ipc_log_string(*(iVar3 + 0x378),"","");
                sym.__ftrace_dbg(*(iVar3 + 0x148),0x8000db8,0x800202b,in_x3);
            }
            else {
                iVar4 = *(iVar3 + 0x148);
                if ((*(iVar4 + 0x200) & 7) == 0) {
                    uVar2 = ktime_get_mono_fast_ns();
                    *(iVar4 + 0x218) = uVar2;
                    __pm_runtime_suspend(*(iVar3 + 0x148),0xd);
                }
            }
        }
        uart_write_wakeup(iVar3);
    }
    else {
        queue_work_on(0x20,*(iVar3 + 0x4c8),iVar3 + 0x438);
        ipc_log_string(*(iVar3 + 0x380),"","");
        sym.__ftrace_dbg(*(iVar3 + 0x148),0x8001839,0x800102f,in_x3);
    }
    ipc_log_string(*(iVar3 + 0x380),"","");
    sym.__ftrace_dbg(*(iVar3 + 0x148),0x800268f,0x800102f,in_x3);
    return;
}


// ===== sym.msm_geni_serial_sys_suspend @ 0x0800de84 (size 364) =====

ulong sym.msm_geni_serial_sys_suspend(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(iVar2 + 0x3c9) == '\0') {
        if (((*(iVar2 + 0x100) == 0) || (*(iVar2 + 300) != *(*(iVar2 + 0x100) + 0x4a))) && (*(iVar2 + 0x520) == '\0')) {
            iVar1 = *(iVar2 + 200) + 0x120;
            mutex_lock(iVar1);
            if (*(arg1 + 0x20c) != 2) {
                _dev_err(arg1,"","",*(iVar2 + 0x3a4));
                ipc_log_string(*(iVar2 + 0x378),"","",*(iVar2 + 0x3a4));
                sym.__ftrace_dbg(arg1,0x8001047,0x800157f,*(iVar2 + 0x3a4));
                mutex_unlock(iVar1);
                return 0xfffffff0;
            }
            ipc_log_string(*(iVar2 + 0x378),"","",1);
            sym.__ftrace_dbg(arg1,0x800276b,0x800157f,1);
            mutex_unlock(iVar1);
        }
        else {
            ipc_log_string(*(iVar2 + 0x390),"","",1);
            uart_suspend_port(*(iVar2 + 0x1d0),iVar2);
            ipc_log_string(*(iVar2 + 0x390),"","",1);
        }
    }
    return 0;
}


// ===== sym.msm_geni_serial_sys_resume @ 0x0800dff0 (size 176) =====

ulong sym.msm_geni_serial_sys_resume(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if ((*(iVar1 + 0x3c9) == '\0') &&
       ((((*(iVar1 + 0x100) != 0 && (*(iVar1 + 300) == *(*(iVar1 + 0x100) + 0x4a) && console_suspend_enabled != 0x0)) &&
         (*(iVar1 + 0x15f) != '\0')) || (*(iVar1 + 0x520) != '\0')))) {
        ipc_log_string(*(iVar1 + 0x390),"","",1);
        uart_resume_port(*(iVar1 + 0x1d0),iVar1);
        ipc_log_string(*(iVar1 + 0x390),"","",1);
    }
    return 0;
}


// ===== sym.msm_geni_serial_sys_hib_resume @ 0x0800e0a0 (size 16) =====

ulong sym.msm_geni_serial_sys_hib_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.msm_geni_serial_runtime_suspend @ 0x0800e0b0 (size 1188) =====

int sym.msm_geni_serial_runtime_suspend(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t arg4;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(arg1 + 0x98);
    uVar1 = *(*(arg2 + 0x10) + 0x40);
    ipc_log_string(*(arg2 + 0x378),"","",uVar1);
    arg4 = uVar1;
    sym.__ftrace_dbg(arg1,0x8002562,0x80026a4,arg4);
    if ((*(arg2 + 0x358) != '\0') && (*(arg2 + 0x354) != 0)) {
        sym.msm_geni_serial_set_manual_flow(0,arg2);
    }
    if ((*(arg2 + 0x531) == '\0') && (uVar1 = sym.wait_for_transfers_inflight(arg2), uVar1 != 0)) {
        ipc_log_string(*(arg2 + 0x380),"","",uVar1);
        sym.__ftrace_dbg(arg1,0x8002580,0x80026a4,uVar1);
        if (*(arg2 + 0x358) == '\0') {
            return -0x10;
        }
        if (*(arg2 + 0x354) == 0) {
            return -0x10;
        }
        *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg2 + 0x10) + 0x2ac);
    }
    else {
        uVar1 = sym.stop_rx_sequencer(arg2);
        if (uVar1 == 0) {
            if ((*(*(arg2 + 0x10) + 0x40) & 1) != 0) {
                sym.stop_tx_sequencer(arg2);
            }
            disable_irq(*(arg2 + 0xa0));
            if (((*(arg2 + 0x358) != '\0') && (*(arg2 + 0x354) != 0)) && (*(arg2 + 0x531) == '\0')) {
                *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
                DataSynchronizationBarrier(3,3,0);
                uVar1 = *(*(arg2 + 0x10) + 0x2ac);
                ipc_log_string(*(arg2 + 0x380),"","",uVar1);
                arg4 = uVar1;
                sym.__ftrace_dbg(*(arg2 + 0x148),0x8002b00,0x8001614,arg4);
                sym.msm_geni_serial_set_manual_flow(1,arg2);
            }
            uVar1 = 0;
            while (*(arg2 + 0x51c) != 0) {
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                __const_udelay(0x418958);
                uVar1 = uVar1 + 1;
                if (uVar1 == 0xb) {
                    ipc_log_string(*(arg2 + 0x378),"","");
                    sym.__ftrace_dbg(arg1,0x8002776,0x80026a4,arg4);
                    enable_irq(*(arg2 + 0xa0));
                    return -0x10;
                }
            }
            if (uVar1 != 0) {
                ipc_log_string(*(arg2 + 0x378),"","",uVar1);
                sym.__ftrace_dbg(arg1,0x80016f6,0x80026a4,uVar1);
            }
            ipc_log_string(*(arg2 + 0x380),"","",0,*(arg2 + 0x420));
            sym.__ftrace_dbg(*(arg2 + 0x148),0x8000fb4,0x80013af,0);
            *(*(arg2 + 0x10) + 0x48) = 1;
            *(*(arg2 + 0x10) + 0x4c) = 1;
            iVar2 = sym.msm_geni_serial_resources_off(arg2);
            if (iVar2 != 0) {
                _dev_err(arg1,"","",iVar2);
                sym.msm_geni_update_uart_error_code(arg2,6);
                return iVar2;
            }
            if ((0 < *(arg2 + 0x354)) && (*(*(arg2 + 200) + 0xa8) != 0)) {
                *(arg2 + 0x3a8) = 0;
                enable_irq();
                *(arg2 + 0x3cf) = 1;
            }
            ipc_log_string(*(arg2 + 0x378),"","",0);
            sym.__ftrace_dbg(arg1,0x8002708,0x80026a4,0);
            __pm_relax(*(arg2 + 0x360));
            return 0;
        }
        ipc_log_string(*(arg2 + 0x378),"","",uVar1);
        sym.__ftrace_dbg(arg1,0x8001175,0x80026a4,uVar1);
        if (*(arg2 + 0x358) == '\0') {
            return -0x10;
        }
        if (*(arg2 + 0x354) == 0) {
            return -0x10;
        }
        *(*(arg2 + 0x10) + 0x2ac) = 0x80000001;
        DataSynchronizationBarrier(3,3,0);
        uVar1 = *(*(arg2 + 0x10) + 0x2ac);
    }
    ipc_log_string(*(arg2 + 0x380),"","",uVar1);
    sym.__ftrace_dbg(*(arg2 + 0x148),0x8002b00,0x8001614,uVar1);
    sym.msm_geni_serial_set_manual_flow(1,arg2);
    return -0x10;
}


// ===== sym.__cfi_check_fail @ 0x0800e570 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800e5b4

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
    //switch table (4 cases) at 0x8002c50
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e5c8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800e5d8 (size 204) =====

int sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    puVar3 = 0x8000abc;
    do {
        *(puVar3 + -0x72) = 2;
        *puVar3 = iVar2;
        iVar2 = iVar2 + 1;
        *(puVar3 + -3) = obj.msm_geni_serial_pops;
        puVar3[-9] = 0x10000000;
        puVar3 = puVar3 + 0x14e;
    } while (iVar2 != 6);
    *0x8002a0c = 0;
    *0x8002a00 = reloc.msm_geni_serial_tx_empty.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt;
    *0x800299a = 2;
    *0x80029e8 = 0x10000000;
    iVar1 = uart_register_driver(obj.msm_geni_serial_hs_driver);
    if (iVar1 == 0) {
        iVar1 = __platform_driver_register
                          (reloc.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt,obj.__this_module);
        if (iVar1 != 0) {
            uart_unregister_driver(obj.msm_geni_serial_hs_driver);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800e6a4 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_geni_serial_probe.e45e81ab1cf40f3efd6c840ad36c51ab.cfi_jt);
    uart_unregister_driver(obj.msm_geni_serial_hs_driver);
    return;
}

