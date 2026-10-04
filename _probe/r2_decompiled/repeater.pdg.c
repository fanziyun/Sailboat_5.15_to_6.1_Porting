// decompiled from repeater by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 248) =====

//WARNING: Switch with 1 destination removed at 0x080014b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x48ef54602b463a27) {
        if (arg1 == -0x7b6df15cf80fe848) {
            pcVar2 = sym.devm_usb_get_repeater_by_phandle.cfi_jt;
        }
        else {
            if (arg1 != -0x4a4edb3068ada5c2) goto code_r0x08001474;
            pcVar2 = sym.devm_usb_get_repeater_by_node.cfi_jt;
        }
    }
    else if (arg1 == -0x48ef54602b463a27) {
        pcVar2 = sym.devm_usb_repeater_release_by_node.63287fd6efd1f87b08ab7ad9a91b17c2.cfi_jt;
    }
    else {
        if (arg1 != -0x1604c64a8725f30a) {
            if ((arg1 == -0x13925a579d879705) && ((pcVar1 + -0x8001108 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001474;
        }
        pcVar2 = sym.usb_add_repeater_dev.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001474:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014c8);
    (*pcVar1)();
}


// ===== sym.devm_usb_repeater_release_by_node.63287fd6efd1f87b08ab7ad9a91b17c2.cfi_jt @ 0x08001100 (size 8) =====

void sym.devm_usb_repeater_release_by_node.63287fd6efd1f87b08ab7ad9a91b17c2.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        put_device(*param_2);
        if ((*(*param_2 + 0x88) != 0) && (*(*(*param_2 + 0x88) + 0x10) != 0)) {
            module_put();
        }
    }
    return;
}


// ===== sym.usb_remove_repeater_dev.cfi_jt @ 0x08001108 (size 8) =====

void sym.usb_remove_repeater_dev.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.repeater_lock);
    if (param_1 != 0) {
        uVar4 = __list_del_entry_valid(param_1 + 0x18);
        if ((uVar4 & 1) != 0) {
            iVar1 = *(param_1 + 0x18);
            piVar2 = *(param_1 + 0x20);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(param_1 + 0x18) = 0xdead000000000100;
        *(param_1 + 0x20) = 0xdead000000000122;
    }
    _raw_spin_unlock_irqrestore(obj.repeater_lock,uVar3);
    return;
}


// ===== sym.usb_put_repeater.cfi_jt @ 0x08001110 (size 8) =====

void sym.usb_put_repeater.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != NULL) {
        put_device(*param_1);
        if ((*(*param_1 + 0x88) != 0) && (*(*(*param_1 + 0x88) + 0x10) != 0)) {
            module_put();
        }
    }
    return;
}


// ===== sym.devm_usb_get_repeater_by_node.cfi_jt @ 0x08001118 (size 8) =====

code * sym.devm_usb_get_repeater_by_node.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = __devres_alloc_node(sym.devm_usb_repeater_release_by_node.63287fd6efd1f87b08ab7ad9a91b17c2.cfi_jt,0x50,
                                0xcc0,0xffffffff,"devm_usb_repeater_release_by_node");
    if (iVar2 == 0) {
        pcVar5 = 0xfffffffffffffff4;
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(obj.repeater_lock);
        uVar4 = of_device_is_available(param_2);
        pcVar1 = _obj.repeater_lock;
        if ((uVar4 & 1) == 0) {
            pcVar5 = 0xffffffffffffffed;
        }
        else {
            for (; pcVar1 != obj.repeater_lock; pcVar1 = *pcVar1) {
                pcVar5 = pcVar1 + -0x18;
                if (*(*pcVar5 + 0x2f0) == param_2) {
                    if (0xfffffffffffff000 < pcVar5) goto code_r0x08001230;
                    uVar4 = try_module_get(*(*(*pcVar5 + 0x88) + 0x10));
                    if ((uVar4 & 1) == 0) {
                        devres_free(iVar2);
                        pcVar5 = 0xffffffffffffffed;
                    }
                    else {
                        devres_add(param_1,iVar2);
                        get_device(*pcVar5);
                    }
                    goto code_r0x08001238;
                }
            }
            pcVar5 = 0xfffffffffffffdfb;
        }
code_r0x08001230:
        devres_free(iVar2);
code_r0x08001238:
        _raw_spin_unlock_irqrestore(obj.repeater_lock,uVar3);
    }
    return pcVar5;
}


// ===== sym.usb_add_repeater_dev.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.usb_add_repeater_dev.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (*param_1 == 0)) {
        _printk(0x80000c7);
        uVar4 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.repeater_lock);
        piVar2 = *0x8000098;
        piVar1 = param_1 + 3;
        uVar3 = __list_add_valid(piVar1,*0x8000098,obj.repeater_lock);
        if ((uVar3 & 1) != 0) {
            *0x8000098 = piVar1;
            param_1[3] = obj.repeater_lock;
            param_1[4] = piVar2;
            *piVar2 = piVar1;
        }
        _raw_spin_unlock(obj.repeater_lock);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.devm_usb_get_repeater_by_phandle.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.devm_usb_get_repeater_by_phandle.cfi_jt(int64_t param_1,ulong param_2,uchar param_3)

{
    int64_t arg2;
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x2f0) == 0) {
        uVar1 = 0xffffffffffffffea;
    }
    else {
        arg2 = of_parse_phandle(*(param_1 + 0x2f0),param_2,param_3);
        if (arg2 == 0) {
            uVar1 = 0xffffffffffffffed;
        }
        else {
            uVar1 = sym.devm_usb_get_repeater_by_node(param_1,arg2);
        }
    }
    return uVar1;
}


// ===== sym.usb_put_repeater @ 0x08001130 (size 80) =====

void sym.usb_put_repeater(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        put_device(*arg1);
        if ((*(*arg1 + 0x88) != 0) && (*(*(*arg1 + 0x88) + 0x10) != 0)) {
            module_put();
        }
    }
    return;
}


// ===== sym.devm_usb_get_repeater_by_node @ 0x08001180 (size 296) =====

code * sym.devm_usb_get_repeater_by_node(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = __devres_alloc_node(sym.devm_usb_repeater_release_by_node.63287fd6efd1f87b08ab7ad9a91b17c2.cfi_jt,0x50,
                                0xcc0,0xffffffff,"devm_usb_repeater_release_by_node");
    if (iVar2 == 0) {
        pcVar5 = 0xfffffffffffffff4;
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(obj.repeater_lock);
        uVar4 = of_device_is_available(arg2);
        pcVar1 = _obj.repeater_lock;
        if ((uVar4 & 1) == 0) {
            pcVar5 = 0xffffffffffffffed;
        }
        else {
            for (; pcVar1 != obj.repeater_lock; pcVar1 = *pcVar1) {
                pcVar5 = pcVar1 + -0x18;
                if (*(*pcVar5 + 0x2f0) == arg2) {
                    if (0xfffffffffffff000 < pcVar5) goto code_r0x08001230;
                    uVar4 = try_module_get(*(*(*pcVar5 + 0x88) + 0x10));
                    if ((uVar4 & 1) == 0) {
                        devres_free(iVar2);
                        pcVar5 = 0xffffffffffffffed;
                    }
                    else {
                        devres_add(arg1,iVar2);
                        get_device(*pcVar5);
                    }
                    goto code_r0x08001238;
                }
            }
            pcVar5 = 0xfffffffffffffdfb;
        }
code_r0x08001230:
        devres_free(iVar2);
code_r0x08001238:
        _raw_spin_unlock_irqrestore(obj.repeater_lock,uVar3);
    }
    return pcVar5;
}


// ===== sym.devm_usb_repeater_release_by_node @ 0x080012a8 (size 80) =====

void sym.devm_usb_repeater_release_by_node(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        put_device(*arg1);
        if ((*(*arg1 + 0x88) != 0) && (*(*(*arg1 + 0x88) + 0x10) != 0)) {
            module_put();
        }
    }
    return;
}


// ===== sym.devm_usb_get_repeater_by_phandle @ 0x080012f8 (size 92) =====

ulong sym.devm_usb_get_repeater_by_phandle(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t arg2_00;
    ulong uVar1;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2f0) == 0) {
        uVar1 = 0xffffffffffffffea;
    }
    else {
        arg2_00 = of_parse_phandle(*(arg1 + 0x2f0),in_x1,arg2 & 0xff);
        if (arg2_00 == 0) {
            uVar1 = 0xffffffffffffffed;
        }
        else {
            uVar1 = sym.devm_usb_get_repeater_by_node(arg1,arg2_00);
        }
    }
    return uVar1;
}


// ===== sym.usb_add_repeater_dev @ 0x08001354 (size 160) =====

ulong sym.usb_add_repeater_dev(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        _printk(0x80000c7);
        uVar4 = 0xffffffea;
    }
    else {
        _raw_spin_lock(obj.repeater_lock);
        piVar2 = *0x8000098;
        piVar1 = arg1 + 0x18;
        uVar3 = __list_add_valid(piVar1,*0x8000098,obj.repeater_lock);
        if ((uVar3 & 1) != 0) {
            *0x8000098 = piVar1;
            *(arg1 + 0x18) = obj.repeater_lock;
            *(arg1 + 0x20) = piVar2;
            *piVar2 = piVar1;
        }
        _raw_spin_unlock(obj.repeater_lock);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.usb_remove_repeater_dev @ 0x080013f4 (size 124) =====

void sym.usb_remove_repeater_dev(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.repeater_lock);
    if (arg1 != 0) {
        uVar4 = __list_del_entry_valid(arg1 + 0x18);
        if ((uVar4 & 1) != 0) {
            iVar1 = *(arg1 + 0x18);
            piVar2 = *(arg1 + 0x20);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg1 + 0x18) = 0xdead000000000100;
        *(arg1 + 0x20) = 0xdead000000000122;
    }
    _raw_spin_unlock_irqrestore(obj.repeater_lock,uVar3);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001470 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080014b4

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
    //switch table (4 cases) at 0x80000a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80014c8);
    (*pcVar1)();
}

