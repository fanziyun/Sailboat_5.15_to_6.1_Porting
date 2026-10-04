// decompiled from qseecom_proxy by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x08001424

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0xabc6cc16c0f47bc) {
        if (arg1 == -0x689458b2f2b06e1e) {
            uVar2 = 0x80010d0;
        }
        else {
            if (arg1 != -0x5eb3aee020d17c9a) goto code_r0x080013e4;
            uVar2 = 0x80010d8;
        }
    }
    else if (arg1 == -0xabc6cc16c0f47bc) {
        uVar2 = 0x80010e8;
    }
    else {
        if (arg1 != 0x5fa1526f6a405ee9) goto code_r0x080013e4;
        uVar2 = 0x80010e0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080013e4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001438);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiPP14qseecom_handleE_global_addr @ 0x080010d0 (size 8) =====

int sym.__typeid__ZTSFiPP14qseecom_handleE_global_addr(ulong param_1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_shutdown_app._rs,"qseecom_shutdown_app");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiPP14qseecom_handleE_global_addr) {
            __cfi_slowpath_diag(0x976ba74d0d4f91e2,_segment.ehdr,0x8000120);
        }
        iVar2 = (*pcVar1)(param_1);
        if (iVar2 != 0) {
            _printk(0x80001af,"qseecom_shutdown_app",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.provide_qseecom_kernel_fun_ops.cfi_jt @ 0x080010d8 (size 8) =====

ulong sym.provide_qseecom_kernel_fun_ops.cfi_jt(ulong *param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x80001e0);
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        _obj.qseecom_fun_ops = *param_1;
        *0x8000088 = param_1[1];
        *0x8000090 = param_1[2];
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFiP14qseecom_handlePvjS1_jE_global_addr @ 0x080010e0 (size 8) =====

int sym.__typeid__ZTSFiP14qseecom_handlePvjS1_jE_global_addr
              (ulong param_1,ulong param_2,uint64_t param_3,ulong param_4,uint64_t param_5)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_send_command._rs,"qseecom_send_command");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiP14qseecom_handlePvjS1_jE_global_addr) {
            __cfi_slowpath_diag(0x5fa1526f6a405ee9,_segment.ehdr,0x8000140);
            param_5 = param_5 & 0xffffffff;
            param_3 = param_3 & 0xffffffff;
        }
        iVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
        if (iVar2 != 0) {
            _printk(0x800028a,"qseecom_send_command",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.__typeid__ZTSFiPP14qseecom_handlePcjE_global_addr @ 0x080010e8 (size 8) =====

int sym.__typeid__ZTSFiPP14qseecom_handlePcjE_global_addr(ulong param_1,ulong param_2,uint64_t param_3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_fun_ops,"qseecom_start_app");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiPP14qseecom_handlePcjE_global_addr) {
            __cfi_slowpath_diag(0xf543933e93f0b844,_segment.ehdr,0x8000100);
            param_3 = param_3 & 0xffffffff;
        }
        iVar2 = (*pcVar1)(param_1,param_2,param_3);
        if (iVar2 != 0) {
            _printk(0x8000201,"qseecom_start_app",param_2);
        }
    }
    return iVar2;
}


// ===== sym.provide_qseecom_kernel_fun_ops @ 0x080010f0 (size 88) =====

ulong sym.provide_qseecom_kernel_fun_ops(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80001e0);
        uVar1 = 0xffffffff;
    }
    else {
        uVar1 = 0;
        _obj.qseecom_fun_ops = *arg1;
        *0x8000088 = *(arg1 + 8);
        *0x8000090 = *(arg1 + 0x10);
    }
    return uVar1;
}


// ===== sym.qseecom_start_app @ 0x08001148 (size 228) =====

int sym.qseecom_start_app(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_fun_ops,"qseecom_start_app");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiPP14qseecom_handlePcjE_global_addr) {
            __cfi_slowpath_diag(0xf543933e93f0b844,_segment.ehdr,0x8000100);
            arg3 = arg3 & 0xffffffff;
        }
        iVar2 = (*pcVar1)(arg1,arg2,arg3);
        if (iVar2 != 0) {
            _printk(0x8000201,"qseecom_start_app",arg2);
        }
    }
    return iVar2;
}


// ===== sym.qseecom_shutdown_app @ 0x0800122c (size 200) =====

int sym.qseecom_shutdown_app(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_shutdown_app._rs,"qseecom_shutdown_app");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiPP14qseecom_handleE_global_addr) {
            __cfi_slowpath_diag(0x976ba74d0d4f91e2,_segment.ehdr,0x8000120);
        }
        iVar2 = (*pcVar1)(arg1);
        if (iVar2 != 0) {
            _printk(0x80001af,"qseecom_shutdown_app",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.qseecom_send_command @ 0x080012f4 (size 236) =====

int sym.qseecom_send_command(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        iVar2 = ___ratelimit(obj.qseecom_send_command._rs,"qseecom_send_command");
        if (iVar2 != 0) {
            _printk(0x8000165);
        }
        iVar2 = -0xb;
    }
    else {
        if (_segment.ehdr != sym.__typeid__ZTSFiP14qseecom_handlePvjS1_jE_global_addr) {
            __cfi_slowpath_diag(0x5fa1526f6a405ee9,_segment.ehdr,0x8000140);
            arg3 = arg3 & 0xffffffff;
        }
        iVar2 = (*pcVar1)(arg1,arg2,arg3,arg4);
        if (iVar2 != 0) {
            _printk(0x800028a,"qseecom_send_command",iVar2);
        }
    }
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x080013e0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001424

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001438);
    (*pcVar1)();
}

