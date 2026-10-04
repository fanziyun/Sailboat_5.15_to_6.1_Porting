// decompiled from qcom_cpu_vendor_hooks by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080018b8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xb579047acdb45c) {
        if (arg1 != -0x38743edc75d9bbd0) {
            if (arg1 == -0x3665993bd9dc93a6) {
                pcVar2 = sym.print_undefinstr.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001878;
                pcVar2 = sym.cpu_vendor_hooks_driver_remove.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001878;
        }
        pcVar2 = sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
    }
    else if (arg1 < 0x3c2fd997352d5ed0) {
        if (arg1 == 0xb579047acdb45c) {
            pcVar2 = sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001878;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x3c2fd997352d5ed0) {
        pcVar2 = sym.print_ptrauth_fault.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001878;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001878:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018cc);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001170 (size 8) =====

void sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt(ulong param_1,uint *param_2)

{
    *param_2 = 1;
    return;
}


// ===== sym.print_ptrauth_fault.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001178 (size 8) =====

void sym.print_ptrauth_fault.82688eb1227f778a4a0c351e8a08f987.cfi_jt(ulong param_1,int64_t param_2,uint param_3)

{
    uint64_t arg2;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + 0x108) & 0xf) != 0) {
        sym.dump_instr(0x8000184,*(param_2 + 0x100));
        uVar2 = *(param_2 + 0xf0);
        uVar1 = -1L << (_of_iomap & 0x3f);
        arg2 = uVar2 & (~uVar1 | 0xff80000000000000);
        if ((uVar2 & 0x80000000000000) != 0) {
            arg2 = uVar1 | uVar2;
        }
        sym.dump_instr(0x8000145,arg2);
        _printk(0x800034d,param_3);
        sym.show_regs_min(param_2);
    }
    return;
}


// ===== sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001180 (size 8) =====

void sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt(ulong param_1,ulong param_2,int64_t *param_3)

{
    *param_3 = *param_3 + -1;
    return;
}


// ===== sym.cpu_vendor_hooks_driver_remove.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.cpu_vendor_hooks_driver_remove.82688eb1227f778a4a0c351e8a08f987.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_printk_hotplug,sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_timer_calc_index,sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt
               ,0);
    return 0;
}


// ===== sym.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001190 (size 8) =====

int sym.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_compatible_node(0,0,"qcom,msm-imem-kaslr_offset");
    if (iVar2 == 0) {
        uVar4 = 0x800031e;
code_r0x080013a4:
        _printk(uVar4,"qcom,msm-imem-kaslr_offset");
    }
    else {
        auVar8 = of_iomap(iVar2,0);
        puVar3 = auVar8._0_8_;
        if (puVar3 == NULL) {
            uVar4 = 0x80002b5;
            goto code_r0x080013a4;
        }
        *puVar3 = 0xdead4ead;
        *auVar8._8_8_ = 0xdead4ead;
        puVar3[1] = 0xd6ad4ead;
        puVar3[2] = __printk + 0x3ff8000000 >> 0x20;
        iounmap();
    }
    iVar1 = tracepoint_probe_register
                      (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    if (iVar1 == 0) {
        iVar1 = tracepoint_probe_register
                          (__tracepoint_android_vh_printk_hotplug,
                           sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_android_vh_timer_calc_index,
                               sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_do_undefinstr,
                                   sym.print_undefinstr.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
                if (iVar1 != 0) {
                    _dev_err(param_1 + 0x10,"Failed to android_rvh_do_undefinstr hook\n");
                }
                iVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_do_ptrauth_fault,
                                   sym.print_ptrauth_fault.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
                if (iVar1 == 0) {
                    return 0;
                }
                pcVar7 = "Failed to android_rvh_do_ptrauth_fault hook\n";
                goto code_r0x08001458;
            }
            _dev_err(param_1 + 0x10,"Failed to android_vh_timer_calc_index hook\n");
            tracepoint_probe_unregister
                      (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
            pcVar5 = __tracepoint_android_vh_printk_hotplug;
            pcVar6 = sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
        }
        else {
            _dev_err(param_1 + 0x10,"Failed to android_vh_printk_hotplug hook\n");
            pcVar5 = __tracepoint_android_vh_ipi_stop;
            pcVar6 = sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
        }
        tracepoint_probe_unregister(pcVar5,pcVar6,0);
    }
    else {
        pcVar7 = "Failed to register android_vh_ipi_stop hook\n";
code_r0x08001458:
        _dev_err(param_1 + 0x10,pcVar7);
    }
    return iVar1;
}


// ===== sym.print_undefinstr.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x08001198 (size 8) =====

void sym.print_undefinstr.82688eb1227f778a4a0c351e8a08f987.cfi_jt(ulong param_1,int64_t param_2)

{
    uint64_t arg2;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_2 + 0x108) & 0xf) != 0) {
        sym.dump_instr(0x8000184,*(param_2 + 0x100));
        uVar2 = *(param_2 + 0xf0);
        uVar1 = -1L << (_of_iomap & 0x3f);
        arg2 = uVar2 & (~uVar1 | 0xff80000000000000);
        if ((uVar2 & 0x80000000000000) != 0) {
            arg2 = uVar1 | uVar2;
        }
        sym.dump_instr(0x8000145,arg2);
        sym.show_regs_min(param_2);
    }
    return;
}


// ===== sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt @ 0x080011a0 (size 8) =====

void sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt(ulong param_1,ulong param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = tpidr_el1;
    uVar1 = *(cpu_number + iVar2);
    if (uVar1 < 0x20) {
        memcpy(obj.regs_before_stop + *(__per_cpu_offset + uVar1 * 8),param_2,0x150);
        uVar4 = _raw_spin_lock_irqsave(obj.stop_lock);
        _printk(0x80001da,uVar1);
        show_regs(param_2);
        _raw_spin_unlock_irqrestore(obj.stop_lock,uVar4);
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001574);
    (*pcVar3)();
}


// ===== sym.show_regs_min @ 0x080011a8 (size 196) =====

void sym.show_regs_min(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001ca,*(arg1 + 0x100));
    _printk(0x80002a1,*(arg1 + 0xf0));
    _printk(0x8000361,*(arg1 + 0xf8));
    uVar1 = 0x1d;
    do {
        _printk(0x8000236,uVar1,*(arg1 + uVar1 * 8));
        uVar2 = uVar1 - 1;
        if ((uVar2 & 1) == 0) {
            _printk(0x8000148,uVar2,*(arg1 + uVar2 * 8));
            uVar2 = uVar1 - 2;
        }
        _printk(0x80002b1);
        uVar1 = uVar2;
    } while (-1 < uVar2);
    return;
}


// ===== sym.cpu_vendor_hooks_driver_probe @ 0x0800126c (size 500) =====

int sym.cpu_vendor_hooks_driver_probe(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint *puVar3;
    ulong uVar4;
    code *pcVar5;
    code *pcVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_compatible_node(0,0,"qcom,msm-imem-kaslr_offset");
    if (iVar2 == 0) {
        uVar4 = 0x800031e;
code_r0x080013a4:
        _printk(uVar4,"qcom,msm-imem-kaslr_offset");
    }
    else {
        auVar8 = of_iomap(iVar2,0);
        puVar3 = auVar8._0_8_;
        if (puVar3 == NULL) {
            uVar4 = 0x80002b5;
            goto code_r0x080013a4;
        }
        *puVar3 = 0xdead4ead;
        *auVar8._8_8_ = 0xdead4ead;
        puVar3[1] = 0xd6ad4ead;
        puVar3[2] = __printk + 0x3ff8000000 >> 0x20;
        iounmap();
    }
    iVar1 = tracepoint_probe_register
                      (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    if (iVar1 == 0) {
        iVar1 = tracepoint_probe_register
                          (__tracepoint_android_vh_printk_hotplug,
                           sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
        if (iVar1 == 0) {
            iVar1 = tracepoint_probe_register
                              (__tracepoint_android_vh_timer_calc_index,
                               sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
            if (iVar1 == 0) {
                iVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_do_undefinstr,
                                   sym.print_undefinstr.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
                if (iVar1 != 0) {
                    _dev_err(arg1 + 0x10,"Failed to android_rvh_do_undefinstr hook\n");
                }
                iVar1 = android_rvh_probe_register
                                  (__tracepoint_android_rvh_do_ptrauth_fault,
                                   sym.print_ptrauth_fault.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
                if (iVar1 == 0) {
                    return 0;
                }
                pcVar7 = "Failed to android_rvh_do_ptrauth_fault hook\n";
                goto code_r0x08001458;
            }
            _dev_err(arg1 + 0x10,"Failed to android_vh_timer_calc_index hook\n");
            tracepoint_probe_unregister
                      (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
            pcVar5 = __tracepoint_android_vh_printk_hotplug;
            pcVar6 = sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
        }
        else {
            _dev_err(arg1 + 0x10,"Failed to android_vh_printk_hotplug hook\n");
            pcVar5 = __tracepoint_android_vh_ipi_stop;
            pcVar6 = sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt;
        }
        tracepoint_probe_unregister(pcVar5,pcVar6,0);
    }
    else {
        pcVar7 = "Failed to register android_vh_ipi_stop hook\n";
code_r0x08001458:
        _dev_err(arg1 + 0x10,pcVar7);
    }
    return iVar1;
}


// ===== sym.cpu_vendor_hooks_driver_remove @ 0x08001460 (size 108) =====

ulong sym.cpu_vendor_hooks_driver_remove(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_ipi_stop,sym.trace_ipi_stop.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_printk_hotplug,sym.printk_hotplug.82688eb1227f778a4a0c351e8a08f987.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_timer_calc_index,sym.timer_recalc_index.82688eb1227f778a4a0c351e8a08f987.cfi_jt
               ,0);
    return 0;
}


// ===== sym.trace_ipi_stop @ 0x080014cc (size 168) =====

void sym.trace_ipi_stop(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = tpidr_el1;
    uVar1 = *(cpu_number + iVar2);
    if (uVar1 < 0x20) {
        memcpy(obj.regs_before_stop + *(__per_cpu_offset + uVar1 * 8),arg1,0x150);
        uVar4 = _raw_spin_lock_irqsave(obj.stop_lock);
        _printk(0x80001da,uVar1);
        show_regs(arg1);
        _raw_spin_unlock_irqrestore(obj.stop_lock,uVar4);
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001574);
    (*pcVar3)();
}


// ===== sym.printk_hotplug @ 0x08001578 (size 20) =====

void sym.printk_hotplug(ulong noname_0,int64_t arg1)

{
    *arg1 = 1;
    return;
}


// ===== sym.timer_recalc_index @ 0x0800158c (size 24) =====

void sym.timer_recalc_index(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    *arg1 = *arg1 + -1;
    return;
}


// ===== sym.print_undefinstr @ 0x080015a4 (size 136) =====

void sym.print_undefinstr(ulong noname_0,int64_t arg1)

{
    uint64_t arg2;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x108) & 0xf) != 0) {
        sym.dump_instr(0x8000184,*(arg1 + 0x100));
        uVar2 = *(arg1 + 0xf0);
        uVar1 = -1L << (_of_iomap & 0x3f);
        arg2 = uVar2 & (~uVar1 | 0xff80000000000000);
        if ((uVar2 & 0x80000000000000) != 0) {
            arg2 = uVar1 | uVar2;
        }
        sym.dump_instr(0x8000145,arg2);
        sym.show_regs_min(arg1);
    }
    return;
}


// ===== sym.print_ptrauth_fault @ 0x0800162c (size 160) =====

void sym.print_ptrauth_fault(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t arg2_00;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x108) & 0xf) != 0) {
        sym.dump_instr(0x8000184,*(arg1 + 0x100));
        uVar2 = *(arg1 + 0xf0);
        uVar1 = -1L << (_of_iomap & 0x3f);
        arg2_00 = uVar2 & (~uVar1 | 0xff80000000000000);
        if ((uVar2 & 0x80000000000000) != 0) {
            arg2_00 = uVar1 | uVar2;
        }
        sym.dump_instr(0x8000145,arg2_00);
        _printk(0x800034d,arg2 & 0xffffffff);
        sym.show_regs_min(arg1);
    }
    return;
}


// ===== sym.dump_instr @ 0x080016cc (size 424) =====

void sym.dump_instr(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    unkbyte5 *pVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_74;
    unkbyte5 aStack_70 [5];
    unkbyte5 Stack_48;
    unkbyte3 Stack_43;
    unkbyte5 Stack_40;
    uchar auStack_3b [3];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    pVar5 = aStack_70;
    Stack_40 = 0;
    aStack_70[4]._0_8_ = 0;
    Stack_48 = 0;
    Stack_43 = 0;
    aStack_70[2]._0_8_ = 0;
    aStack_70[3]._0_8_ = 0;
    aStack_70[0]._0_8_ = 0;
    aStack_70[1]._0_8_ = 0;
    uStack_74 = 0;
    iVar3 = copy_from_kernel_nofault(&uStack_74,arg2 + -0x10,4);
    if (iVar3 == 0) {
        iVar3 = scnprintf(aStack_70,0x35,"%08x ",uStack_74);
        pVar5 = pVar5 + iVar3;
        uStack_74 = 0;
        iVar3 = copy_from_kernel_nofault(&uStack_74,arg2 + -0xc,4);
        if (iVar3 == 0) {
            iVar3 = scnprintf(pVar5,auStack_3b + -pVar5,"%08x ",uStack_74);
            pVar5 = pVar5 + iVar3;
            uStack_74 = 0;
            iVar3 = copy_from_kernel_nofault(&uStack_74,arg2 + -8,4);
            if (iVar3 == 0) {
                iVar3 = scnprintf(pVar5,auStack_3b + -pVar5,"%08x ",uStack_74);
                pVar5 = pVar5 + iVar3;
                uStack_74 = 0;
                iVar3 = copy_from_kernel_nofault(&uStack_74,arg2 + -4,4);
                if (iVar3 == 0) {
                    iVar3 = scnprintf(pVar5,auStack_3b + -pVar5,"%08x ",uStack_74);
                    pVar5 = pVar5 + iVar3;
                    uStack_74 = 0;
                    iVar3 = copy_from_kernel_nofault(&uStack_74,arg2,4);
                    if (iVar3 == 0) {
                        scnprintf(pVar5,auStack_3b + -pVar5,"(%08x) ",uStack_74);
                        goto code_r0x0800182c;
                    }
                }
            }
        }
    }
    scnprintf(pVar5,auStack_3b + -pVar5,"bad value");
code_r0x0800182c:
    _printk(0x80001fa,arg1,aStack_70);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80018cc);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001874 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018b8

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018cc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080018d4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001908 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.cpu_vendor_hooks_driver_probe.82688eb1227f778a4a0c351e8a08f987.cfi_jt);
    return;
}

