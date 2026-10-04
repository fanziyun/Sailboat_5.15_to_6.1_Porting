// decompiled from redriver by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 296) =====

//WARNING: Switch with 1 destination removed at 0x080018b0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x553a8afe151c1532) {
            pcVar2 = sym.__typeid__ZTSFvP12usb_redriverE_global_addr;
code_r0x0800110c:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001870;
        }
        if (arg1 != -0x3eb8646985ab8cf0) {
            if ((arg1 == -0x3a7478fdfb50f5c7) && ((pcVar1 + -0x8001178 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x08001870;
        }
        pcVar2 = sym.usb_get_redriver_by_phandle.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x1d262e36d41a9d21) {
            pcVar2 = sym.__typeid__ZTSFiP12usb_redriverE_global_addr;
            goto code_r0x0800110c;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001870;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001870:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018c4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.__typeid__ZTSFvP12usb_redriverE_global_addr @ 0x08001140 (size 8) =====

void sym.__typeid__ZTSFvP12usb_redriverE_global_addr(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        _raw_spin_lock(obj.usb_rediver_lock);
        *(param_1 + 0x5a) = 0;
        _raw_spin_unlock(obj.usb_rediver_lock);
        pcVar1 = *(param_1 + 0x50);
        if (pcVar1 != NULL) {
            if (2 < (pcVar1 + -0x8001140 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xaac57501eae3eace,pcVar1,0x8000100);
            }
            (*pcVar1)(param_1);
        }
    }
    return;
}


// ===== sym.usb_redriver_notify_disconnect.cfi_jt @ 0x08001148 (size 8) =====

void sym.usb_redriver_notify_disconnect.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x800029b);
    }
    else if (*(param_1 + 0x28) == 0) {
        _printk(0x8000205);
    }
    else {
        _printk(0x8000240);
        pcVar1 = *(param_1 + 0x28);
        if (2 < (pcVar1 + -0x8001158 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar1,0x8000160);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.usb_redriver_host_powercycle.cfi_jt @ 0x08001150 (size 8) =====

void sym.usb_redriver_host_powercycle.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (pcVar1 = *(param_1 + 0x48), pcVar1 != NULL)) {
        if (2 < (pcVar1 + -0x8001158 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar1,0x80001e0);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.__typeid__ZTSFiP12usb_redriverE_global_addr @ 0x08001158 (size 8) =====

ulong sym.__typeid__ZTSFiP12usb_redriverE_global_addr(code *param_1)

{
    uint64_t uVar1;
    char *pcVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(param_1 + 0x10) == 0) || (param_1[0x5a] != 0x0)) || ((param_1[0x59] != 0x0 && (*(param_1 + 0x30) == 0)))) {
        uVar4 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.usb_rediver_lock);
        for (pcVar3 = _obj.usb_rediver_lock; pcVar3 != obj.usb_rediver_lock; pcVar3 = *pcVar3) {
            if (pcVar3 == param_1) {
                uVar4 = 0xffffffef;
                goto code_r0x08001240;
            }
        }
        if (*(param_1 + 0x10) == 0) {
            pcVar2 = "<no-node>";
        }
        else {
            pcVar2 = *(*(param_1 + 0x10) + 0x10);
        }
        _printk(0x800035c,pcVar2);
        pcVar3 = *0x80000f8;
        uVar1 = __list_add_valid(param_1,*0x80000f8,obj.usb_rediver_lock);
        uVar4 = 0;
        if ((uVar1 & 1) != 0) {
            *0x80000f8 = param_1;
            *param_1 = obj.usb_rediver_lock;
            *(param_1 + 8) = pcVar3;
            *pcVar3 = param_1;
        }
code_r0x08001240:
        _raw_spin_unlock(obj.usb_rediver_lock);
    }
    return uVar4;
}


// ===== sym.usb_redriver_get_orientation.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.usb_redriver_get_orientation.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (*(param_1 + 0x59) == '\0')) {
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(param_1 + 0x30);
        if (2 < (pcVar2 + -0x8001158 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar2,0x8000180);
        }
        uVar1 = (*pcVar2)(param_1);
    }
    return uVar1;
}


// ===== sym.usb_remove_redriver.cfi_jt @ 0x08001168 (size 8) =====

uint sym.usb_remove_redriver.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.usb_rediver_lock);
    if (*(param_1 + 0x5a) == '\0') {
        uVar3 = __list_del_entry_valid(param_1);
        if ((uVar3 & 1) != 0) {
            iVar1 = *param_1;
            piVar2 = param_1[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        uVar4 = 0;
        *param_1 = -0x2152ffffffffff00;
        param_1[1] = -0x2152fffffffffede;
    }
    else {
        uVar4 = 0xffffffea;
    }
    _raw_spin_unlock(obj.usb_rediver_lock);
    return uVar4;
}


// ===== sym.usb_get_redriver_by_phandle.cfi_jt @ 0x08001170 (size 8) =====

code * sym.usb_get_redriver_by_phandle.cfi_jt(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_parse_phandle();
    uVar2 = of_device_is_available();
    if ((uVar2 & 1) != 0) {
        _raw_spin_lock(obj.usb_rediver_lock);
        for (pcVar4 = _obj.usb_rediver_lock; pcVar4 != obj.usb_rediver_lock; pcVar4 = *pcVar4) {
            if (*(pcVar4 + 0x10) == iVar1) {
                if (iVar1 == 0) {
                    pcVar3 = "<no-node>";
                }
                else {
                    pcVar3 = *(iVar1 + 0x10);
                }
                _printk(0x8000388,pcVar3);
                pcVar4[0x5a] = 0x1;
                _raw_spin_unlock(obj.usb_rediver_lock);
                return pcVar4;
            }
        }
        _raw_spin_unlock(obj.usb_rediver_lock);
        if (_segment.ehdr < 5) {
            _printk(0x80003aa);
            _segment.ehdr = _segment.ehdr + 1;
            msleep(1000);
            return 0xfffffffffffffdfb;
        }
        _segment.ehdr = 0;
        _printk(0x8000333);
    }
    return NULL;
}


// ===== sym.usb_redriver_notify_connect.cfi_jt @ 0x08001178 (size 8) =====

void sym.usb_redriver_notify_connect.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x800029b);
    }
    else if (*(param_1 + 0x20) == 0) {
        _printk(0x80003d8);
    }
    else {
        _printk(0x800026f);
        pcVar1 = *(param_1 + 0x20);
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x8000140);
        (*pcVar1)(param_1,param_2);
    }
    return;
}


// ===== sym.usb_redriver_release_lanes.cfi_jt @ 0x08001180 (size 8) =====

void sym.usb_redriver_release_lanes.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (pcVar1 = *(param_1 + 0x18), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x8000120);
        (*pcVar1)(param_1,param_2);
    }
    return;
}


// ===== sym.usb_redriver_gadget_pullup_enter.cfi_jt @ 0x08001188 (size 8) =====

void sym.usb_redriver_gadget_pullup_enter.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (pcVar1 = *(param_1 + 0x38), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x80001a0);
        (*pcVar1)(param_1,param_2);
    }
    return;
}


// ===== sym.usb_redriver_gadget_pullup_exit.cfi_jt @ 0x08001190 (size 8) =====

void sym.usb_redriver_gadget_pullup_exit.cfi_jt(int64_t param_1,uint param_2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (pcVar1 = *(param_1 + 0x40), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x80001c0);
        (*pcVar1)(param_1,param_2);
    }
    return;
}


// ===== sym.usb_add_redriver @ 0x08001198 (size 244) =====

ulong sym.usb_add_redriver(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    char *pcVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x10) == 0) || (*(arg1 + 0x5a) != '\0')) || ((*(arg1 + 0x59) != '\0' && (*(arg1 + 0x30) == 0)))) {
        uVar5 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.usb_rediver_lock);
        for (pcVar4 = _obj.usb_rediver_lock; pcVar4 != obj.usb_rediver_lock; pcVar4 = *pcVar4) {
            if (pcVar4 == arg1) {
                uVar5 = 0xffffffef;
                goto code_r0x08001240;
            }
        }
        if (*(arg1 + 0x10) == 0) {
            pcVar3 = "<no-node>";
        }
        else {
            pcVar3 = *(*(arg1 + 0x10) + 0x10);
        }
        _printk(0x800035c,pcVar3);
        piVar1 = *0x80000f8;
        uVar2 = __list_add_valid(arg1,*0x80000f8,obj.usb_rediver_lock);
        uVar5 = 0;
        if ((uVar2 & 1) != 0) {
            *0x80000f8 = arg1;
            *arg1 = obj.usb_rediver_lock;
            *(arg1 + 8) = piVar1;
            *piVar1 = arg1;
        }
code_r0x08001240:
        _raw_spin_unlock(obj.usb_rediver_lock);
    }
    return uVar5;
}


// ===== sym.usb_remove_redriver @ 0x0800128c (size 136) =====

uint sym.usb_remove_redriver(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(obj.usb_rediver_lock);
    if (*(arg1 + 0x5a) == '\0') {
        uVar3 = __list_del_entry_valid(arg1);
        if ((uVar3 & 1) != 0) {
            iVar1 = *arg1;
            piVar2 = *(arg1 + 8);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        uVar4 = 0;
        *arg1 = 0xdead000000000100;
        *(arg1 + 8) = 0xdead000000000122;
    }
    else {
        uVar4 = 0xffffffea;
    }
    _raw_spin_unlock(obj.usb_rediver_lock);
    return uVar4;
}


// ===== sym.usb_get_redriver_by_phandle @ 0x08001314 (size 264) =====

code * sym.usb_get_redriver_by_phandle(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_parse_phandle();
    uVar2 = of_device_is_available();
    if ((uVar2 & 1) != 0) {
        _raw_spin_lock(obj.usb_rediver_lock);
        for (pcVar4 = _obj.usb_rediver_lock; pcVar4 != obj.usb_rediver_lock; pcVar4 = *pcVar4) {
            if (*(pcVar4 + 0x10) == iVar1) {
                if (iVar1 == 0) {
                    pcVar3 = "<no-node>";
                }
                else {
                    pcVar3 = *(iVar1 + 0x10);
                }
                _printk(0x8000388,pcVar3);
                pcVar4[0x5a] = 0x1;
                _raw_spin_unlock(obj.usb_rediver_lock);
                return pcVar4;
            }
        }
        _raw_spin_unlock(obj.usb_rediver_lock);
        if (_segment.ehdr < 5) {
            _printk(0x80003aa);
            _segment.ehdr = _segment.ehdr + 1;
            msleep(1000);
            return 0xfffffffffffffdfb;
        }
        _segment.ehdr = 0;
        _printk(0x8000333);
    }
    return NULL;
}


// ===== sym.usb_put_redriver @ 0x0800141c (size 168) =====

void sym.usb_put_redriver(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        _raw_spin_lock(obj.usb_rediver_lock);
        *(arg1 + 0x5a) = 0;
        _raw_spin_unlock(obj.usb_rediver_lock);
        pcVar1 = *(arg1 + 0x50);
        if (pcVar1 != NULL) {
            if (2 < (pcVar1 + -0x8001140 >> 3 | pcVar1 << 0x3d)) {
                __cfi_slowpath_diag(0xaac57501eae3eace,pcVar1,0x8000100);
            }
            (*pcVar1)(arg1);
        }
    }
    return;
}


// ===== sym.usb_redriver_release_lanes @ 0x080014c4 (size 112) =====

void sym.usb_redriver_release_lanes(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (pcVar1 = *(arg1 + 0x18), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x8000120);
        (*pcVar1)(arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.usb_redriver_notify_connect @ 0x08001534 (size 160) =====

void sym.usb_redriver_notify_connect(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800029b);
    }
    else if (*(arg1 + 0x20) == 0) {
        _printk(0x80003d8);
    }
    else {
        _printk(0x800026f);
        pcVar1 = *(arg1 + 0x20);
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x8000140);
        (*pcVar1)(arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.usb_redriver_notify_disconnect @ 0x080015d4 (size 180) =====

void sym.usb_redriver_notify_disconnect(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800029b);
    }
    else if (*(arg1 + 0x28) == 0) {
        _printk(0x8000205);
    }
    else {
        _printk(0x8000240);
        pcVar1 = *(arg1 + 0x28);
        if (2 < (pcVar1 + -0x8001158 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar1,0x8000160);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.usb_redriver_get_orientation @ 0x08001688 (size 136) =====

ulong sym.usb_redriver_get_orientation(int64_t arg1)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x59) == '\0')) {
        uVar1 = 0xffffffff;
    }
    else {
        pcVar2 = *(arg1 + 0x30);
        if (2 < (pcVar2 + -0x8001158 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar2,0x8000180);
        }
        uVar1 = (*pcVar2)(arg1);
    }
    return uVar1;
}


// ===== sym.usb_redriver_gadget_pullup_enter @ 0x08001710 (size 112) =====

void sym.usb_redriver_gadget_pullup_enter(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (pcVar1 = *(arg1 + 0x38), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x80001a0);
        (*pcVar1)(arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.usb_redriver_gadget_pullup_exit @ 0x08001780 (size 112) =====

void sym.usb_redriver_gadget_pullup_exit(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (pcVar1 = *(arg1 + 0x40), pcVar1 != NULL)) {
        __cfi_slowpath_diag(0xc607c5a8da4126b2,pcVar1,0x80001c0);
        (*pcVar1)(arg1,arg2 & 0xffffffff);
    }
    return;
}


// ===== sym.usb_redriver_host_powercycle @ 0x080017f0 (size 124) =====

void sym.usb_redriver_host_powercycle(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (pcVar1 = *(arg1 + 0x48), pcVar1 != NULL)) {
        if (2 < (pcVar1 + -0x8001158 >> 3 | pcVar1 << 0x3d)) {
            __cfi_slowpath_diag(0x1d262e36d41a9d21,pcVar1,0x80001e0);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800186c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080018b0

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
    //switch table (4 cases) at 0x8000200
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80018c4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080019f8 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x08001a08 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

