// decompiled from heap_mem_ext_v01 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 8) =====

void sym.__cfi_check(void)

{
    code *pcVar1;
    
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x8001008);
    (*pcVar1)();
}


// ===== sym.__cfi_check_fail @ 0x08001008 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800104c

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
    //switch table (4 cases) at 0x8000530
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001060);
    (*pcVar1)();
}

