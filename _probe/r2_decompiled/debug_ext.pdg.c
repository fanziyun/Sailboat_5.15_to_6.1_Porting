// decompiled from debug_ext by radare2+r2ghidra (pdg)

// ===== sym.get_module_size @ 0x080022f8 (size 240) =====

ulong sym.get_module_size(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar9 = 0x30;
    }
    piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xa20,0x30);
    if (piVar6 == NULL) {
        uVar8 = 0xfffffff4;
    }
    else {
        uVar2 = *(arg1 + 0x174);
        *piVar6 = arg1;
        iVar3 = *(arg1 + 0x178);
        iVar4 = *(arg1 + 0x17c);
        uVar5 = *(arg1 + 0x170);
        piVar1 = piVar6 + 4;
        iVar9 = *arg2;
        *(piVar6 + 2) = iVar3 - uVar2 >> 10;
        *(piVar6 + 0x14) = iVar4 - iVar3 >> 10;
        *(piVar6 + 3) = uVar5 - iVar4 >> 10;
        *(piVar6 + 1) = uVar5 >> 10;
        *(piVar6 + 0xc) = uVar2 >> 10;
        uVar7 = __list_add_valid(piVar1,arg2,iVar9);
        if ((uVar7 & 1) == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = 0;
            *(iVar9 + 8) = piVar1;
            piVar6[4] = iVar9;
            piVar6[5] = arg2;
            *arg2 = piVar1;
        }
    }
    return uVar8;
}


// ===== sym.sizecmp @ 0x080023e8 (size 24) =====

int sym.sizecmp(ulong noname_0,int64_t arg1,int64_t arg2)

{
    return *(arg2 + -0x18) - *(arg1 + -0x18);
}


// ===== sym.mem_statis_init @ 0x08002400 (size 164) =====

ulong sym.mem_statis_init(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8002000 = proc_mkdir("",arg1);
    if (*0x8002000 == 0) {
        _printk(0x80006a7,"");
        uVar1 = 0xfffffff4;
    }
    else {
        proc_create_single_data("",0,*0x8002000,sym.reserved_memory_stat_show.cfi_jt,0);
        proc_create_single_data("",0,*0x8002000,sym.ko_memory_stat_show.cfi_jt,0);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.mem_statis_exit @ 0x080024a4 (size 88) =====

void sym.mem_statis_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8002000 != 0) {
        remove_proc_entry("");
    }
    if (arg1 != 0) {
        remove_proc_entry("",arg1);
    }
    return;
}


// ===== sym.panic_trigger_init @ 0x080024fc (size 240) =====

ulong sym.panic_trigger_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8002000 = proc_mkdir("",arg1);
    if (*0x8002000 == 0) {
        _printk(0x80007b6,"");
    }
    else {
        iVar1 = proc_create("",0x666,*0x8002000,obj.reboot_panic_ops);
        if (iVar1 == 0) {
            uVar2 = 0x8000604;
            uVar3 = 0x6c;
        }
        else {
            iVar1 = proc_create("",0x666,*0x8002000,obj.shutdown_panic_ops);
            if (iVar1 != 0) {
                uVar2 = register_reboot_notifier(reloc.panic_trigger_notify.a5ba448d462d36861e6435ea35c651eb.cfi_jt);
                if (uVar2 != 0) {
                    _printk(0x8000724);
                    return 0xfffffff4;
                }
                return uVar2;
            }
            uVar2 = 0x80003c9;
            uVar3 = 0x74;
        }
        _printk(uVar2,"",uVar3);
    }
    return 0xfffffff4;
}


// ===== sym.panic_trigger_exit @ 0x080025ec (size 108) =====

void sym.panic_trigger_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("",*0x8002000);
    remove_proc_entry("",*0x8002000);
    remove_proc_entry("",arg1);
    unregister_reboot_notifier(reloc.panic_trigger_notify.a5ba448d462d36861e6435ea35c651eb.cfi_jt);
    return;
}


// ===== sym.reboot_panic_procs_read @ 0x08002658 (size 168) =====

int * sym.reboot_panic_procs_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t arg2_00;
    uint64_t uVar9;
    int *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int *piVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    sprintf(&uStack_48,0x80006d0,*0x8002000);
    uVar7 = strlen(&uStack_48);
    piVar12 = arg3;
    iVar6 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_48,uVar7);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.reboot_panic_procs_write;
    pcStack_68 = sym.reboot_panic_procs_write;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    iStack_8c = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = arg2;
    iStack_58 = arg3;
    if (piVar12 >> 0x1f == 0) {
        __check_object_size(&uStack_88,piVar12,0);
        piVar10 = piVar12;
        iVar8 = sym._copy_from_user(&uStack_88,arg2_00,piVar12);
        if (iVar8 == 0) {
            piVar10 = &iStack_8c;
            sscanf(&uStack_88,0x8000228);
            *0x8002000 = 0 < iStack_8c;
        }
        else {
            piVar12 = 0xfffffffffffffff2;
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_78) {
            return piVar12;
        }
        auVar13 = __stack_chk_fail();
        uVar9 = auVar13._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar2 = sp_el0;
        uVar3 = (uVar9 << 8) >> 8;
        if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
            uVar11 = uVar9 & uVar3;
        }
        bVar5 = CARRY8(uVar11,piVar10);
        uVar11 = uVar11 + piVar10;
        uVar1 = 0;
        if (!bVar5 || uVar11 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar5) {
            uVar11 = 0xffffffffffffffff;
        }
        piVar12 = piVar10;
        if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar5) || uVar11 == uVar1 + !bVar5) {
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar11 = daif;
                if ((uVar11 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar2[1];
                InstructionSynchronizationBarrier();
                daif = uVar11;
            }
            if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            piVar12 = __arch_copy_from_user(auVar13._0_8_,uVar9,piVar10);
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (piVar12 != NULL) {
            memset(piVar10 + (auVar13._0_8_ - piVar12),0,piVar12);
        }
        return piVar12;
    }
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x80027c8);
    (*pcVar4)();
}


// ===== sym.reboot_panic_procs_write @ 0x08002700 (size 208) =====

int * sym.reboot_panic_procs_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    int64_t iVar6;
    int *piVar7;
    uint64_t uVar8;
    int *piVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80027c8);
        (*pcVar4)();
    }
    __check_object_size(&uStack_38,arg3,0);
    piVar9 = arg3;
    iVar6 = sym._copy_from_user(&uStack_38,arg2,arg3);
    if (iVar6 == 0) {
        piVar9 = &iStack_3c;
        sscanf(&uStack_38,0x8000228);
        *0x8002000 = 0 < iStack_3c;
    }
    else {
        arg3 = -0xe;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar11 = __stack_chk_fail();
    uVar8 = auVar11._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar3 = (uVar8 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar10 = uVar8 & uVar3;
    }
    bVar5 = CARRY8(uVar10,piVar9);
    uVar10 = uVar10 + piVar9;
    uVar1 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    piVar7 = piVar9;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar5) || uVar10 == uVar1 + !bVar5) {
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar8 & uVar3 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        piVar7 = __arch_copy_from_user(auVar11._0_8_,uVar8,piVar9);
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (piVar7 != NULL) {
        memset(piVar9 + (auVar11._0_8_ - piVar7),0,piVar7);
    }
    return piVar7;
}


// ===== sym._copy_from_user @ 0x080027d0 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.shutdown_panic_procs_read @ 0x08002984 (size 168) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.shutdown_panic_procs_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t arg3_00;
    ulong unaff_x30;
    int iStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    sprintf(&uStack_48,0x80006d0,*0x8002000);
    uVar3 = strlen(&uStack_48);
    arg3_00 = arg3;
    iVar2 = simple_read_from_buffer(arg1,arg2,arg3,&uStack_48,uVar3);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.shutdown_panic_procs_write;
    pcStack_68 = sym.shutdown_panic_procs_write;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    iStack_8c = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = arg2;
    iStack_58 = arg3;
    if (arg3_00 >> 0x1f == 0) {
        __check_object_size(&uStack_88,arg3_00,0);
        iVar4 = sym._copy_from_user(&uStack_88,arg2_00,arg3_00);
        if (iVar4 == 0) {
            sscanf(&uStack_88,0x8000228,&iStack_8c);
            *0x8002000 = 0 < iStack_8c;
        }
        else {
            arg3_00 = 0xfffffffffffffff2;
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_78) {
            return arg3_00;
        }
        __stack_chk_fail();
        *extraout_x18_00 = sym.panic_trigger_notify;
        if ((extraout_x1 == 1) && (*0x8002000 != 0)) {
            panic("");
        }
        else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
            return 0;
        }
        panic("");
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002af4);
    (*pcVar1)();
}


// ===== sym.shutdown_panic_procs_write @ 0x08002a2c (size 208) =====

//WARNING: Control flow encountered bad instruction data

int64_t sym.shutdown_panic_procs_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_3c;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8002af4);
        (*pcVar1)();
    }
    __check_object_size(&uStack_38,arg3,0);
    iVar2 = sym._copy_from_user(&uStack_38,arg2,arg3);
    if (iVar2 == 0) {
        sscanf(&uStack_38,0x8000228,&iStack_3c);
        *0x8002000 = 0 < iStack_3c;
    }
    else {
        arg3 = -0xe;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.panic_trigger_notify;
    if ((extraout_x1 == 1) && (*0x8002000 != 0)) {
        panic("");
    }
    else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("");
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.panic_trigger_notify @ 0x08002afc (size 104) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.panic_trigger_notify(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 1) && (*0x8002000 != 0)) {
        panic("");
    }
    else if ((arg2 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("");
    //WARNING: Bad instruction - Truncating control flow here
    //[08] -r-x section size 1 named .plt
    halt_baddata();
}


// ===== sym.init_module @ 0x08002b64 (size 240) =====

int sym.init_module(void)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = proc_mkdir("",0);
    if (_segment.ehdr == 0) {
        _printk(0x800078d,"");
        iVar1 = -0xc;
    }
    else {
        iVar1 = func_0x08001d2c();
        if (iVar1 == 0) {
            iVar1 = sym.mem_statis_init(_segment.ehdr);
            if (iVar1 == 0) {
                iVar1 = sym.panic_trigger_init(_segment.ehdr);
                if (iVar1 == 0) {
                    _printk(0x800057b,"");
                    return 0;
                }
                uVar2 = 0x8000434;
                uVar3 = 0x36;
            }
            else {
                uVar2 = 0x800024c;
                uVar3 = 0x2f;
            }
        }
        else {
            uVar2 = 0x80005ac;
            uVar3 = 0x21;
        }
        _printk(uVar2,"",uVar3);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002c54 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    func_0x08001e2c(_segment.ehdr);
    sym.mem_statis_exit(_segment.ehdr);
    sym.panic_trigger_exit(_segment.ehdr);
    remove_proc_entry("",0);
    _segment.ehdr = 0;
    return;
}

