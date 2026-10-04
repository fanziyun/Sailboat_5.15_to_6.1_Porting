// decompiled from gh_virt_wdt by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 296) =====

//WARNING: Switch with 1 destination removed at 0x08001728

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xe6e993d2e1f9204) {
        if (arg1 == -0x57be845bca9148ef) {
            pcVar2 = sym.qcom_wdt_pet_resume.cfi_jt;
        }
        else {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x080016e8;
                pcVar2 = sym.init_module.cfi_jt;
code_r0x080010c0:
                if (pcVar1 == pcVar2) {
                    return;
                }
                goto code_r0x080016e8;
            }
            pcVar2 = sym.qcom_wdt_remove.cfi_jt;
        }
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 == 0xe6e993d2e1f9204) {
            pcVar2 = sym.gh_set_wdt_bark.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x30111ff2ee80e047) {
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016e8;
                pcVar2 = sym.cleanup_module.cfi_jt;
                goto code_r0x080010c0;
            }
            pcVar2 = sym.gh_disable_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
            return;
        }
    }
code_r0x080016e8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800173c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001138 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.qcom_wdt_remove.cfi_jt @ 0x08001140 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_wdt_remove.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(param_1 + 0x10,0x10a8,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 0x10) = reloc.gh_set_wdt_bark.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        uVar2 = qcom_wdt_register(param_1,iVar1,"gh-watchdog");
    }
    return uVar2;
}


// ===== sym.qcom_wdt_pet_resume.cfi_jt @ 0x08001150 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_wdt_pet_resume.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_wdt_pet_suspend.cfi_jt @ 0x08001158 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.qcom_wdt_pet_suspend.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.gh_set_wdt_bark.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001160 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001238)

ulong sym.gh_set_wdt_bark.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(param_2 + 8),"failed to set bark time for vDOG, hret = %d ret = %d\n",0x86000008,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_enable_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001168 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001484)

uint sym.gh_enable_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0xd0) == '\0') {
        CallSecureMonitor(0);
        _dev_err(*(param_2 + 8),"failed enabling vWDOG, hret = %d ret = %d\n",0x86000005,0xffffffea);
        uVar1 = 0xffffffea;
    }
    else {
        _dev_err(*(param_2 + 8),"vWDT already enabled\n");
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.gh_set_wdt_bite.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001170 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080012fc)

ulong sym.gh_set_wdt_bite.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(param_2 + 8),"failed to set bite time for vWDOG, hret = %d ret = %d\n",0x86000008,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_disable_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001178 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001564)

uint sym.gh_disable_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xd0) == '\0') {
        _dev_err(*(param_1 + 8),"vWDT already disabled\n");
        uVar1 = 0;
    }
    else {
        CallSecureMonitor(0);
        _dev_err(*(param_1 + 8),"failed disabling VDOG, hret = %d ret = %d\n",0x86000005,0xffffffea);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_show_wdt_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001180 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08001640)

ulong sym.gh_show_wdt_status.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(param_1 + 8),"failed to get vWDOG status, hret = %d ret = %d\n",0x86000006,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_reset_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001188 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080013bc)

ulong sym.gh_reset_wdt.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(param_1 + 8),"failed to reset vWDOG, hret = %d ret = %d\n",0x86000007,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_wdt_probe @ 0x08001190 (size 104) =====

ulong sym.gh_wdt_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = devm_kmalloc(arg1 + 0x10,0x10a8,0xdc0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(iVar1 + 0x10) = reloc.gh_set_wdt_bark.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        uVar2 = qcom_wdt_register(arg1,iVar1,"gh-watchdog");
    }
    return uVar2;
}


// ===== sym.gh_set_wdt_bark @ 0x080011f8 (size 196) =====

//WARNING: Removing unreachable block (ram,0x08001238)

ulong sym.gh_set_wdt_bark(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(arg2 + 8),"failed to set bark time for vDOG, hret = %d ret = %d\n",0x86000008,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_set_wdt_bite @ 0x080012c0 (size 192) =====

//WARNING: Removing unreachable block (ram,0x080012fc)

ulong sym.gh_set_wdt_bite(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(arg2 + 8),"failed to set bite time for vWDOG, hret = %d ret = %d\n",0x86000008,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_reset_wdt @ 0x08001384 (size 188) =====

//WARNING: Removing unreachable block (ram,0x080013bc)

ulong sym.gh_reset_wdt(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(arg1 + 8),"failed to reset vWDOG, hret = %d ret = %d\n",0x86000007,0xffffffea);
    return 0xffffffea;
}


// ===== sym.gh_enable_wdt @ 0x08001444 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001484)

uint sym.gh_enable_wdt(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd0) == '\0') {
        CallSecureMonitor(0);
        _dev_err(*(arg1 + 8),"failed enabling vWDOG, hret = %d ret = %d\n",0x86000005,0xffffffea);
        uVar1 = 0xffffffea;
    }
    else {
        _dev_err(*(arg1 + 8),"vWDT already enabled\n");
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.gh_disable_wdt @ 0x08001524 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001564)

uint sym.gh_disable_wdt(int64_t arg1)

{
    ulong *in_x18;
    uint uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xd0) == '\0') {
        _dev_err(*(arg1 + 8),"vWDT already disabled\n");
        uVar1 = 0;
    }
    else {
        CallSecureMonitor(0);
        _dev_err(*(arg1 + 8),"failed disabling VDOG, hret = %d ret = %d\n",0x86000005,0xffffffea);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.gh_show_wdt_status @ 0x08001604 (size 220) =====

//WARNING: Removing unreachable block (ram,0x08001640)

ulong sym.gh_show_wdt_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    CallSecureMonitor(0);
    _dev_err(*(arg1 + 8),"failed to get vWDOG status, hret = %d ret = %d\n",0x86000006,0xffffffea);
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x080016e4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001728

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
    //switch table (4 cases) at 0x8000778
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800173c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001744 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001778 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.gh_wdt_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

