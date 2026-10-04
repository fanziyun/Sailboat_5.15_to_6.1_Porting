// decompiled from gh_arm_drv by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 284) =====

//WARNING: Switch with 1 destination removed at 0x080011a4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x51000cc5ad9b1e76) {
        if (arg1 == -0x79bf8d9b7807d577) {
            pcVar2 = sym.gh_get_irq.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x47ce015a85343a42) && ((pcVar1 + -0x8001150 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001164;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x51000cc5ad9b1e76) {
        pcVar2 = sym.gh_arch_validate_vm_exited_notif.cfi_jt;
    }
    else if (arg1 == 0x6cf58e448911dfd5) {
        pcVar2 = sym.gh_get_virq.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001164;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001164:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80011b8);
    (*pcVar1)();
}


// ===== sym.gh_arch_validate_vm_exited_notif.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.gh_arch_validate_vm_exited_notif.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    int16_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_2 + 2);
    if ((iVar2 == 1) || (iVar2 == 2)) {
code_r0x080013d8:
        uVar1 = 0;
        *(param_2 + 2) = iVar2;
    }
    else {
        if (iVar2 == 3) {
            if (param_1 == 0xc) {
                iVar2 = 2;
                goto code_r0x080013d8;
            }
            _printk(0x800010d,"gh_arch_validate_vm_exited_notif",param_1);
        }
        uVar1 = 0xffffffea;
    }
    return uVar1;
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


// ===== sym.gh_get_irq.cfi_jt @ 0x08001140 (size 8) =====

uint64_t sym.gh_get_irq.cfi_jt(int param_1,uint param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (param_1 - 0x3fbU < 0xfffffc25) {
        _printk(0x80000b8,"gh_get_irq",param_1);
    }
    iStack_78 = param_1 + -0x20;
    uStack_80 = 3;
    uStack_88 = param_3;
    uStack_74 = param_2;
    uVar4 = irq_create_fwspec_mapping(&uStack_88);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.gh_get_virq;
    uVar3 = idr_alloc(obj.gh_rm_free_virq_idr,obj.gh_rm_free_virq_idr,iVar2 + -0x20,0x3fb,0xcc0);
    if (-1 < uVar3) {
        uVar3 = uVar3 + 0x20;
    }
    return uVar3;
}


// ===== sym.gh_get_virq.cfi_jt @ 0x08001148 (size 8) =====

int sym.gh_get_virq.cfi_jt(int param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = idr_alloc(obj.gh_rm_free_virq_idr,obj.gh_rm_free_virq_idr,param_1 + -0x20,0x3fb,0xcc0);
    if (-1 < iVar1) {
        iVar1 = iVar1 + 0x20;
    }
    return iVar1;
}


// ===== sym.gh_put_virq.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.gh_put_virq.cfi_jt(int param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = idr_find(obj.gh_rm_free_virq_idr,param_1 + -0x20);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        idr_remove(obj.gh_rm_free_virq_idr,param_1 + -0x20);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.gh_put_irq.cfi_jt @ 0x08001158 (size 8) =====

ulong sym.gh_put_irq.cfi_jt(int param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((0 < param_1) && (iVar1 = irq_get_irq_data(), iVar1 != 0)) {
        irq_dispose_mapping(param_1);
        iVar2 = *(iVar1 + 8) + -0x20;
        iVar1 = idr_find(obj.gh_rm_free_virq_idr,iVar2);
        if (iVar1 != 0) {
            idr_remove(obj.gh_rm_free_virq_idr,iVar2);
            return 0;
        }
    }
    return 0xffffffea;
}


// ===== sym.__cfi_check_fail @ 0x08001160 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080011a4

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
    //switch table (4 cases) at 0x80000a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80011b8);
    (*pcVar1)();
}


// ===== sym.gh_get_irq @ 0x080011b8 (size 184) =====

uint64_t sym.gh_get_irq(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t aiStack_88 [2];
    int iStack_78;
    uint uStack_74;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    if (arg1 - 0x3fbU < 0xfffffc25) {
        _printk(0x80000b8,"gh_get_irq",arg1 & 0xffffffff);
    }
    iStack_78 = arg1 + -0x20;
    aiStack_88[1] = 3;
    aiStack_88[0] = arg3;
    uStack_74 = arg2;
    uVar4 = irq_create_fwspec_mapping(aiStack_88);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.gh_get_virq;
    uVar3 = idr_alloc(obj.gh_rm_free_virq_idr,obj.gh_rm_free_virq_idr,iVar2 + -0x20,0x3fb,0xcc0);
    if (-1 < uVar3) {
        uVar3 = uVar3 + 0x20;
    }
    return uVar3;
}


// ===== sym.gh_get_virq @ 0x08001270 (size 72) =====

int sym.gh_get_virq(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = idr_alloc(obj.gh_rm_free_virq_idr,obj.gh_rm_free_virq_idr,arg1 + -0x20,0x3fb,0xcc0);
    if (-1 < iVar1) {
        iVar1 = iVar1 + 0x20;
    }
    return iVar1;
}


// ===== sym.gh_put_virq @ 0x080012b8 (size 96) =====

ulong sym.gh_put_virq(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1 + -0x20;
    iVar1 = idr_find(obj.gh_rm_free_virq_idr,iVar3);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        idr_remove(obj.gh_rm_free_virq_idr,iVar3);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.gh_put_irq @ 0x08001318 (size 132) =====

ulong sym.gh_put_irq(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < arg1) {
        iVar1 = irq_get_irq_data();
        if (iVar1 != 0) {
            irq_dispose_mapping(arg1 & 0xffffffff);
            iVar2 = *(iVar1 + 8) + -0x20;
            iVar1 = idr_find(obj.gh_rm_free_virq_idr,iVar2);
            if (iVar1 != 0) {
                idr_remove(obj.gh_rm_free_virq_idr,iVar2);
                return 0;
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.gh_arch_validate_vm_exited_notif @ 0x0800139c (size 112) =====

ulong sym.gh_arch_validate_vm_exited_notif(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    int16_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg2 + 2);
    if ((iVar2 == 1) || (iVar2 == 2)) {
code_r0x080013d8:
        uVar1 = 0;
        *(arg2 + 2) = iVar2;
    }
    else {
        if (iVar2 == 3) {
            if (arg1 == 0xc) {
                iVar2 = 2;
                goto code_r0x080013d8;
            }
            _printk(0x800010d,"gh_arch_validate_vm_exited_notif",arg1);
        }
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.init_module @ 0x08001414 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x08001424 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

