// decompiled from ipanetm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 100) =====

//WARNING: Switch with 1 destination removed at 0x080010c4

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001078;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001084;
        uVar2 = 0x8001070;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001084:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80010d8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001070 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (___ubsan_handle_cfi_check_fail_abort != 0) {
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),"ipa %s:%d IPA late exit\n",
                           "ipa_late_exit",0x2c);
        }
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),"ipa %s:%d IPA late exit\n",
                           "ipa_late_exit",0x2c);
        }
    }
    ipa3_wwan_cleanup();
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001078 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (___ubsan_handle_cfi_check_fail_abort != 0) {
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),"ipa %s:%d IPA late init\n",
                           "ipa_late_init",0x1d);
        }
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),"ipa %s:%d IPA late init\n",
                           "ipa_late_init",0x1d);
        }
    }
    iVar1 = ipa3_wwan_platform_driver_register();
    if (iVar1 != 0) {
        _printk(0x8000097,"ipa_late_init",0x22,iVar1);
        if (___ubsan_handle_cfi_check_fail_abort != 0) {
            if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
                ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),
                               "ipa %s:%d ipa3_wwan_platform_driver_register failed: %d\n","ipa_late_init",0x22,iVar1
                              );
            }
            if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
                ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),
                               "ipa %s:%d ipa3_wwan_platform_driver_register failed: %d\n","ipa_late_init",0x22,iVar1
                              );
            }
        }
        ipa3_wwan_cleanup();
    }
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001080 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080010c4

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
    //switch table (4 cases) at 0x8000040
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80010d8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080010e4 (size 272) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (___ubsan_handle_cfi_check_fail_abort != 0) {
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),"ipa %s:%d IPA late init\n",
                           "ipa_late_init",0x1d);
        }
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),"ipa %s:%d IPA late init\n",
                           "ipa_late_init",0x1d);
        }
    }
    iVar1 = ipa3_wwan_platform_driver_register();
    if (iVar1 != 0) {
        _printk(0x8000097,"ipa_late_init",0x22,iVar1);
        if (___ubsan_handle_cfi_check_fail_abort != 0) {
            if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
                ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),
                               "ipa %s:%d ipa3_wwan_platform_driver_register failed: %d\n","ipa_late_init",0x22,iVar1
                              );
            }
            if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
                ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),
                               "ipa %s:%d ipa3_wwan_platform_driver_register failed: %d\n","ipa_late_init",0x22,iVar1
                              );
            }
        }
        ipa3_wwan_cleanup();
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080011f4 (size 132) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (___ubsan_handle_cfi_check_fail_abort != 0) {
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8418) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8418),"ipa %s:%d IPA late exit\n",
                           "ipa_late_exit",0x2c);
        }
        if (*(___ubsan_handle_cfi_check_fail_abort + 0x8420) != 0) {
            ipc_log_string(*(___ubsan_handle_cfi_check_fail_abort + 0x8420),"ipa %s:%d IPA late exit\n",
                           "ipa_late_exit",0x2c);
        }
    }
    ipa3_wwan_cleanup();
    return;
}

