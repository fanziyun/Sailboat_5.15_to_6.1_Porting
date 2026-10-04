// decompiled from wlan_firmware_service by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08006000 (size 64) =====

//WARNING: Switch with 1 destination removed at 0x08006094

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((arg1 == 0x2b3a43e29242445) && (arg2 == 0x8006048)) {
        return;
    }
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80060a8);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08006048 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08006050 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006094

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
    //switch table (4 cases) at 0x80051f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80060a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08006d00 (size 116) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_node_with_property(0,"qcom,wlan");
    while( true ) {
        if (iVar1 == 0) {
            return 0xffffffed;
        }
        uVar2 = of_device_is_available(iVar1);
        if ((uVar2 & 1) != 0) break;
        iVar1 = of_find_node_with_property(iVar1,"qcom,wlan");
    }
    return 0;
}

