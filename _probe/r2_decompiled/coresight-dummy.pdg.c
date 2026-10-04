// decompiled from coresight-dummy by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x0800153c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7a682b931f8f094) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x57be845bca9148ef) {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x080014fc;
                pcVar2 = sym.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
code_r0x08001174:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080014fc;
            }
            pcVar2 = sym.dummy_source_freeze.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.dummy_init.cfi_jt;
        }
        else {
            if (arg1 != 0x4b596879dd0fbb8) goto code_r0x080014fc;
            pcVar2 = sym.dummy_source_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
        }
    }
    else if (arg1 < 0x76439dfb02cc8756) {
        if (arg1 == 0x7a682b931f8f094) {
            pcVar2 = sym.dummy_source_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
        }
        else {
            if (arg1 != 0x37c4900363bd9ece) goto code_r0x080014fc;
            pcVar2 = sym.dummy_sink_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x76439dfb02cc8756) {
            pcVar2 = sym.dummy_sink_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt;
            goto code_r0x08001174;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080014fc;
        pcVar2 = sym.dummy_exit.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080014fc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001550);
    (*pcVar1)();
}


// ===== sym.dummy_source_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.dummy_source_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(param_1 + 0x98) + 0x98),"Dummy source enabled\n");
    return 0;
}


// ===== sym.dummy_exit.cfi_jt @ 0x080011a0 (size 8) =====

void sym.dummy_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt);
    return;
}


// ===== sym.dummy_sink_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011a8 (size 8) =====

ulong sym.dummy_sink_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(param_1 + 0x98) + 0x98),"Dummy sink disabled\n");
    return 0;
}


// ===== sym.dummy_trace_id.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011b0 (size 8) =====

uint sym.dummy_trace_id.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    return *(*(*(param_1 + 0x98) + 0x98) + 0x10);
}


// ===== sym.dummy_sink_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011b8 (size 8) =====

ulong sym.dummy_sink_enable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(param_1 + 0x98) + 0x98),"Dummy sink enabled\n");
    return 0;
}


// ===== sym.dummy_source_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011c0 (size 8) =====

void sym.dummy_source_disable.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(param_1 + 0x98) + 0x98),"Dummy source disabled\n");
    return;
}


// ===== sym.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011c8 (size 8) =====

uint64_t sym.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar5 = param_1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_58 = coresight_alloc_device_name(obj.dummy_devs,iVar5);
    if (iStack_58 != 0) {
        uVar1 = coresight_get_platform_data(iVar5);
        if (0xfffffffffffff000 < uVar1) goto code_r0x08001304;
        *(param_1 + 0xa0) = uVar1;
        piVar2 = devm_kmalloc(iVar5,0x18,0xdc0);
        if (piVar2 != NULL) {
            *piVar2 = iVar5;
            *(param_1 + 0xa8) = piVar2;
            uVar3 = *(param_1 + 0x300);
            *(piVar2 + 2) = _segment.ehdr;
            _segment.ehdr = _segment.ehdr + 1;
            iVar4 = of_find_property(uVar3,"qcom,dummy-source",0);
            if (iVar4 == 0) {
                iVar4 = of_find_property(*(param_1 + 0x300),"qcom,dummy-sink",0);
                if (iVar4 == 0) {
                    _dev_info(iVar5,"Device type not set\n");
                    uVar1 = 0xffffffea;
                    goto code_r0x08001304;
                }
                uVar7 = 1;
                uVar6 = 2;
            }
            else {
                uVar7 = 4;
                uVar6 = 1;
            }
            uStack_88 = CONCAT44(uVar6,uVar7);
            uStack_70 = *(param_1 + 0xa0);
            pcStack_78 = obj.dummy_cs_ops;
            iStack_68 = iVar5;
            uVar1 = coresight_register(&uStack_88);
            piVar2[1] = uVar1;
            if (uVar1 < 0xfffffffffffff001) {
                pm_runtime_enable(iVar5);
                _dev_info(iVar5,"Dummy device initialized\n");
                uVar1 = 0;
            }
            goto code_r0x08001304;
        }
    }
    uVar1 = 0xfffffff4;
code_r0x08001304:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar5 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.dummy_remove;
    iVar4 = *(iVar5 + 0xa8);
    __pm_runtime_disable(iVar5 + 0x10,1);
    coresight_unregister(*(iVar4 + 8));
    return 0;
}


// ===== sym.dummy_remove.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.dummy_remove.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    __pm_runtime_disable(param_1 + 0x10,1);
    coresight_unregister(*(iVar1 + 8));
    return 0;
}


// ===== sym.dummy_source_freeze.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.dummy_source_freeze.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(*(param_1 + 0x98) + 8) + 8) == 4) {
        coresight_disable();
    }
    return 0;
}


// ===== sym.dummy_init.cfi_jt @ 0x080011e0 (size 8) =====

void sym.dummy_init.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dummy_probe @ 0x080011e8 (size 392) =====

uint64_t sym.dummy_probe(int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar5 = arg1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    pcStack_78 = NULL;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_58 = coresight_alloc_device_name(obj.dummy_devs,iVar5);
    if (iStack_58 != 0) {
        uVar1 = coresight_get_platform_data(iVar5);
        if (0xfffffffffffff000 < uVar1) goto code_r0x08001304;
        *(arg1 + 0xa0) = uVar1;
        piVar2 = devm_kmalloc(iVar5,0x18,0xdc0);
        if (piVar2 != NULL) {
            *piVar2 = iVar5;
            *(arg1 + 0xa8) = piVar2;
            uVar3 = *(arg1 + 0x300);
            *(piVar2 + 2) = _segment.ehdr;
            _segment.ehdr = _segment.ehdr + 1;
            iVar4 = of_find_property(uVar3,"qcom,dummy-source",0);
            if (iVar4 == 0) {
                iVar4 = of_find_property(*(arg1 + 0x300),"qcom,dummy-sink",0);
                if (iVar4 == 0) {
                    _dev_info(iVar5,"Device type not set\n");
                    uVar1 = 0xffffffea;
                    goto code_r0x08001304;
                }
                uVar7 = 1;
                uVar6 = 2;
            }
            else {
                uVar7 = 4;
                uVar6 = 1;
            }
            uStack_88 = CONCAT44(uVar6,uVar7);
            uStack_70 = *(arg1 + 0xa0);
            pcStack_78 = obj.dummy_cs_ops;
            iStack_68 = iVar5;
            uVar1 = coresight_register(&uStack_88);
            piVar2[1] = uVar1;
            if (uVar1 < 0xfffffffffffff001) {
                pm_runtime_enable(iVar5);
                _dev_info(iVar5,"Dummy device initialized\n");
                uVar1 = 0;
            }
            goto code_r0x08001304;
        }
    }
    uVar1 = 0xfffffff4;
code_r0x08001304:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar5 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.dummy_remove;
    iVar4 = *(iVar5 + 0xa8);
    __pm_runtime_disable(iVar5 + 0x10,1);
    coresight_unregister(*(iVar4 + 8));
    return 0;
}


// ===== sym.dummy_remove @ 0x08001370 (size 72) =====

ulong sym.dummy_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    __pm_runtime_disable(arg1 + 0x10,1);
    coresight_unregister(*(iVar1 + 8));
    return 0;
}


// ===== sym.dummy_sink_enable @ 0x080013b8 (size 60) =====

ulong sym.dummy_sink_enable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(arg1 + 0x98) + 0x98),"Dummy sink enabled\n");
    return 0;
}


// ===== sym.dummy_sink_disable @ 0x080013f4 (size 60) =====

ulong sym.dummy_sink_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(arg1 + 0x98) + 0x98),"Dummy sink disabled\n");
    return 0;
}


// ===== sym.dummy_trace_id @ 0x08001430 (size 24) =====

uint sym.dummy_trace_id(int64_t arg1)

{
    return *(*(*(arg1 + 0x98) + 0x98) + 0x10);
}


// ===== sym.dummy_source_enable @ 0x08001448 (size 60) =====

ulong sym.dummy_source_enable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(arg1 + 0x98) + 0x98),"Dummy source enabled\n");
    return 0;
}


// ===== sym.dummy_source_disable @ 0x08001484 (size 56) =====

void sym.dummy_source_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _dev_info(**(*(arg1 + 0x98) + 0x98),"Dummy source disabled\n");
    return;
}


// ===== sym.dummy_source_freeze @ 0x080014bc (size 60) =====

ulong sym.dummy_source_freeze(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(*(arg1 + 0x98) + 8) + 8) == 4) {
        coresight_disable();
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080014f8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800153c

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
    //switch table (4 cases) at 0x8000150
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001550);
    (*pcVar1)();
}


// ===== sym.dummy_init @ 0x08001554 (size 52) =====

void sym.dummy_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dummy_exit @ 0x08001588 (size 44) =====

void sym.dummy_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dummy_probe.35b6c4f254e40dbbf11d7d8aaac859a9.cfi_jt);
    return;
}

