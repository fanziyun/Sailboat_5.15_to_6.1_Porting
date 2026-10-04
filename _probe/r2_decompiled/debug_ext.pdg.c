// decompiled from debug_ext by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x080012c4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x3dc5ded41c889c15) {
        if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == -0x708761f88da6c7f3) {
                pcVar2 = sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt;
                goto code_r0x080011bc;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001284;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.reboot_panic_procs_read.a5ba448d462d36861e6435ea35c651eb.cfi_jt;
code_r0x080011bc:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08001284;
            }
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.reboot_panic_procs_write.a5ba448d462d36861e6435ea35c651eb.cfi_jt;
                goto code_r0x08001180;
            }
            if (arg1 != 0x321969b888d4949e) goto code_r0x08001284;
            pcVar2 = sym.default_llseek.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 != 0x3dc5ded41c889c15) {
            if (arg1 != 0x3e48e028d83f0c1a) goto code_r0x08001284;
            pcVar2 = sym.get_dma_info_sort.c485c78501ba98569696bc707d47051f.cfi_jt;
code_r0x08001180:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001284;
        }
        pcVar2 = sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt;
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.ko_memory_stat_show.cfi_jt;
            goto code_r0x080011bc;
        }
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.panic_trigger_notify.a5ba448d462d36861e6435ea35c651eb.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001284;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001284:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012d8);
    (*pcVar1)();
}


// ===== sym.get_dma_info_sort.c485c78501ba98569696bc707d47051f.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.get_dma_info_sort.c485c78501ba98569696bc707d47051f.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = is_dma_buf_file(param_2);
    if (uVar5 != 0) {
        piVar10 = param_1 + 0x20;
        piVar8 = *piVar10;
        if (piVar8 != piVar10) {
            do {
                if (piVar8[-1] == *(param_2 + 0xd8)) goto code_r0x080017d4;
                piVar8 = *piVar8;
            } while (piVar8 != piVar10);
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x18);
        if (puVar6 == NULL) {
            uVar5 = 0xfffffff4;
        }
        else {
            piVar8 = param_2 + 0x38;
            Hint_Prefetch(piVar8,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar8,0x10);
                if (bVar4) {
                    *piVar8 = *piVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            puVar9 = *(param_2 + 0xd8);
            iVar1 = *(param_1 + 0x18);
            iVar2 = *(param_1 + 0x20);
            puVar11 = puVar6 + 1;
            *puVar6 = puVar9;
            *(param_1 + 0x18) = iVar1 + (*puVar9 >> 10);
            uVar7 = __list_add_valid(puVar11,piVar10,iVar2);
            if ((uVar7 & 1) == 0) {
code_r0x080017d4:
                uVar5 = 0;
            }
            else {
                uVar5 = 0;
                *(iVar2 + 8) = puVar11;
                puVar6[1] = iVar2;
                puVar6[2] = piVar10;
                *piVar10 = puVar11;
            }
        }
    }
    return uVar5;
}


// ===== sym.get_dma_info.c485c78501ba98569696bc707d47051f.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.get_dma_info.c485c78501ba98569696bc707d47051f.cfi_jt(ulong *param_1,int64_t param_2,uint param_3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    ulong in_stack_ffffffffffffffb0;
    uint uVar16;
    
    uVar16 = in_stack_ffffffffffffffb0 >> 0x20;
    *in_x18 = unaff_x30;
    uVar6 = is_dma_buf_file(param_2);
    if (uVar6 == 0) {
        return uVar6;
    }
    piVar15 = *param_1;
    if (*(param_1 + 2) == 0) {
        iVar5 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"\n%s (PID %d)\nDMA Buffers:\n",
                          param_1[1] + 0x7a8,*(param_1[1] + 0x5dc));
        iVar9 = piVar15[2];
        piVar15[2] = iVar9 + iVar5;
        if (iVar9 + iVar5 == piVar15[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar14 = *(param_2 + 0xd8);
    uVar13 = 0x75f572ab;
    uVar7 = 0x130;
    uVar12 = 0x75f572ab;
    iVar5 = 0x75f572ab;
    piVar10 = piVar14;
    do {
        uVar7 = uVar7 - 0xc;
        uVar13 = piVar10[1] + uVar13;
        iVar1 = *(piVar10 + 4) + uVar12;
        uVar12 = (*piVar10 + iVar5) - uVar13 ^ (uVar13 >> 0x1c | uVar13 * 0x10);
        iVar5 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x1a | uVar12 << 6);
        iVar1 = uVar12 + iVar5;
        uVar12 = iVar5 - uVar13 ^ (uVar13 >> 0x18 | uVar13 << 8);
        iVar5 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
        iVar1 = uVar12 + iVar5;
        uVar3 = iVar5 - uVar13 ^ (uVar13 >> 0xd | uVar13 << 0x13);
        iVar5 = uVar13 + iVar1;
        uVar12 = uVar3 + iVar5;
        uVar13 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
        piVar10 = piVar10 + 0xc;
    } while (0xc < uVar7);
    uVar13 = (uVar13 ^ uVar12) - (uVar12 >> 0x12 | uVar12 * 0x4000);
    uVar7 = (iVar5 + *(piVar14 + 0x12f) * 0x1000000 + *(piVar14 + 0x12e) * 0x10000 + *(piVar14 + 0x12d) * 0x100 +
             *(piVar14 + 300) ^ uVar13) - (uVar13 >> 0x15 | uVar13 * 0x800);
    uVar12 = (uVar7 ^ uVar12) - (uVar7 >> 7 | uVar7 * 0x2000000);
    uVar13 = (uVar12 ^ uVar13) - (uVar12 >> 0x10 | uVar12 * 0x10000);
    uVar7 = (uVar13 ^ uVar7) - (uVar13 >> 0x1c | uVar13 * 0x10);
    uVar12 = (uVar7 ^ uVar12) - (uVar7 >> 0x12 | uVar7 * 0x4000);
    uVar8 = (uVar12 ^ uVar13) - (uVar12 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar8] != 0x0) {
        return 0;
    }
    obj.dma_buf_hash[uVar8] = 0x1;
    iVar5 = *(param_1 + 2);
    *(param_1 + 2) = iVar5 + 1;
    if (iVar5 == 0) {
        uVar16 = 0;
        iVar5 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"%-8s\t%-8s\t%-8s\t%-8s\t%-12s\t%-4s\t%-8s\n"
                          ,"size","flags","mode","count","exp_name",0x800035d,0x8000772);
        iVar11 = piVar15[1];
        iVar9 = piVar15[2] + iVar5;
        piVar15[2] = iVar9;
        if (iVar9 == iVar11 + -1) {
            return 0xffffffea;
        }
    }
    else {
        iVar11 = piVar15[1];
        iVar9 = piVar15[2];
    }
    iVar4 = piVar14[1];
    iVar2 = 0x80007f6;
    if (piVar14[0xf] != 0) {
        iVar2 = piVar14[0xf];
    }
    iVar5 = scnprintf(*piVar15 + iVar9,iVar11 - iVar9,"%08zu\t%08x\t%08x\t%08ld\t%-12s\t%-4u\t%-8lu\t%s\n",*piVar14,
                      *(iVar4 + 0x40),*(iVar4 + 0x44),*(iVar4 + 0x38),piVar14[0xe],CONCAT44(uVar16,param_3),
                      *(*(piVar14[1] + 0x20) + 0x40),iVar2);
    iVar9 = piVar15[2];
    piVar15[2] = iVar9 + iVar5;
    if (iVar9 + iVar5 == piVar15[1] + -1) {
        return 0xffffffea;
    }
    param_1[3] = param_1[3] + *piVar14;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001200 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dma_buf_debug_clean(_segment.ehdr);
    sym.mem_statis_exit(_segment.ehdr);
    sym.panic_trigger_exit(_segment.ehdr);
    remove_proc_entry("debug_ext",0);
    _segment.ehdr = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001208 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = proc_mkdir("debug_ext",0);
    if (_segment.ehdr == 0) {
        _printk(0x800078d,"debug_ext_init");
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.init_dma_buf_debug(_segment.ehdr);
        if (iVar1 == 0) {
            iVar1 = sym.mem_statis_init(_segment.ehdr);
            if (iVar1 == 0) {
                iVar1 = sym.panic_trigger_init(_segment.ehdr);
                if (iVar1 == 0) {
                    _printk(0x800057b,"debug_ext_init");
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
        _printk(uVar2,"debug_ext_init",uVar3);
    }
    return iVar1;
}


// ===== sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt @ 0x08001210 (size 8) =====

ulong sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt(int64_t param_1,ulong param_2,int64_t *param_3)

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
        uVar2 = *(param_1 + 0x174);
        *piVar6 = param_1;
        iVar3 = *(param_1 + 0x178);
        iVar4 = *(param_1 + 0x17c);
        uVar5 = *(param_1 + 0x170);
        piVar1 = piVar6 + 4;
        iVar9 = *param_3;
        *(piVar6 + 2) = iVar3 - uVar2 >> 10;
        *(piVar6 + 0x14) = iVar4 - iVar3 >> 10;
        *(piVar6 + 3) = uVar5 - iVar4 >> 10;
        *(piVar6 + 1) = uVar5 >> 10;
        *(piVar6 + 0xc) = uVar2 >> 10;
        uVar7 = __list_add_valid(piVar1,param_3,iVar9);
        if ((uVar7 & 1) == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = 0;
            *(iVar9 + 8) = piVar1;
            piVar6[4] = iVar9;
            piVar6[5] = param_3;
            *param_3 = piVar1;
        }
    }
    return uVar8;
}


// ===== sym.default_llseek.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.reboot_panic_procs_read.a5ba448d462d36861e6435ea35c651eb.cfi_jt @ 0x08001220 (size 8) =====

int * sym.reboot_panic_procs_read.a5ba448d462d36861e6435ea35c651eb.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,int *param_4)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    code *pcVar4;
    bool bVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t arg2;
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
    ulong uStack_60;
    int *piStack_58;
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
    piVar12 = param_4;
    iVar6 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_48,uVar7);
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
    uStack_60 = param_3;
    piStack_58 = param_4;
    if (piVar12 >> 0x1f == 0) {
        __check_object_size(&uStack_88,piVar12,0);
        piVar10 = piVar12;
        iVar8 = sym._copy_from_user(&uStack_88,arg2,piVar12);
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


// ===== sym.dma_buf_procs_read.c485c78501ba98569696bc707d47051f.cfi_jt @ 0x08001228 (size 8) =====

void sym.dma_buf_procs_read.c485c78501ba98569696bc707d47051f.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        memset(_segment.ehdr,0,_segment.ehdr);
    }
    sym.get_dma_buf_procs(_segment.ehdr,_segment.ehdr);
    simple_read_from_buffer(param_2,param_3,param_4,_segment.ehdr,_segment.ehdr);
    return;
}


// ===== sym.shutdown_panic_procs_read.a5ba448d462d36861e6435ea35c651eb.cfi_jt @ 0x08001230 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.shutdown_panic_procs_read.a5ba448d462d36861e6435ea35c651eb.cfi_jt
                   (ulong param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2;
    int64_t extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t arg3;
    ulong unaff_x30;
    int iStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
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
    arg3 = param_4;
    iVar2 = simple_read_from_buffer(param_2,param_3,param_4,&uStack_48,uVar3);
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
    uStack_60 = param_3;
    uStack_58 = param_4;
    if (arg3 >> 0x1f == 0) {
        __check_object_size(&uStack_88,arg3,0);
        iVar4 = sym._copy_from_user(&uStack_88,arg2,arg3);
        if (iVar4 == 0) {
            sscanf(&uStack_88,0x8000228,&iStack_8c);
            *0x8002000 = 0 < iStack_8c;
        }
        else {
            arg3 = 0xfffffffffffffff2;
        }
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_78) {
            return arg3;
        }
        __stack_chk_fail();
        *extraout_x18_00 = sym.panic_trigger_notify;
        if ((extraout_x1 == 1) && (*0x8002000 != 0)) {
            panic("Panic trigger come from SYS_RESTART\n");
        }
        else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
            return 0;
        }
        panic("Panic trigger come from SYS_POWER_OFF\n");
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8002af4);
    (*pcVar1)();
}


// ===== sym.panic_trigger_notify.a5ba448d462d36861e6435ea35c651eb.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.panic_trigger_notify.a5ba448d462d36861e6435ea35c651eb.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == 1) && (*0x8002000 != 0)) {
        panic("Panic trigger come from SYS_RESTART\n");
    }
    else if ((param_2 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("Panic trigger come from SYS_POWER_OFF\n");
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ko_memory_stat_show.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.ko_memory_stat_show.cfi_jt(ulong param_1)

{
    ulong *****pppppuVar1;
    ulong *****pppppuVar2;
    ulong *****pppppuVar3;
    ulong ***pppuVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong uVar15;
    ulong ****ppppuVar16;
    ulong *****pppppuVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *****pppppuVar18;
    ulong ***pppuVar19;
    ulong unaff_x30;
    ulong ****ppppuStack_58;
    ulong ****ppppuStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    ppppuStack_58 = &ppppuStack_58;
    ppppuStack_50 = &ppppuStack_58;
    android_debug_for_each_module(sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt,&ppppuStack_58);
    list_sort(0,&ppppuStack_58,sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt);
    if (&ppppuStack_58 == ppppuStack_58) {
        ppppuVar16 = NULL;
    }
    else {
        ppppuVar16 = NULL;
        pppppuVar17 = ppppuStack_58;
        do {
            pppppuVar1 = pppppuVar17 + -3;
            pppppuVar17 = *pppppuVar17;
            ppppuVar16 = *pppppuVar1 + ppppuVar16;
        } while (&ppppuStack_58 != pppppuVar17);
    }
    seq_printf(param_1,"[KernelModuleTotal] size %u KB\n\n");
    if (&ppppuStack_58 != ppppuStack_58) {
        pppppuVar17 = ppppuStack_58;
        do {
            pppppuVar1 = pppppuVar17 + -1;
            pppppuVar2 = pppppuVar17 + -3;
            puVar6 = pppppuVar17 + -0x14;
            pppppuVar3 = pppppuVar17 + -2;
            puVar7 = pppppuVar17 + -0xc;
            pppppuVar18 = pppppuVar17 + -4;
            ppppuVar16 = *pppppuVar18;
            pppppuVar17 = *pppppuVar17;
            seq_printf(param_1,
                       "[KernelModule] %s: size %u KB | text %u KB, rodata %u KB, ro_after_init %u KB, rwdata %u KB\n",
                       ppppuVar16,*pppppuVar2,*puVar6,*pppppuVar3,*puVar7,*pppppuVar1);
            kfree(pppppuVar18);
        } while (&ppppuStack_58 != pppppuVar17);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.get_module_size;
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xa20,0x30);
        if (piVar13 == NULL) {
            uVar15 = 0xfffffff4;
        }
        else {
            uVar8 = *(iVar12 + 0x174);
            *piVar13 = iVar12;
            iVar9 = *(iVar12 + 0x178);
            iVar10 = *(iVar12 + 0x17c);
            uVar11 = *(iVar12 + 0x170);
            pppuVar4 = piVar13 + 4;
            pppuVar19 = *ppppuVar16;
            *(piVar13 + 2) = iVar9 - uVar8 >> 10;
            *(piVar13 + 0x14) = iVar10 - iVar9 >> 10;
            *(piVar13 + 3) = uVar11 - iVar10 >> 10;
            *(piVar13 + 1) = uVar11 >> 10;
            *(piVar13 + 0xc) = uVar8 >> 10;
            uVar14 = __list_add_valid(pppuVar4,ppppuVar16,pppuVar19);
            if ((uVar14 & 1) == 0) {
                uVar15 = 0;
            }
            else {
                uVar15 = 0;
                pppuVar19[1] = pppuVar4;
                piVar13[4] = pppuVar19;
                piVar13[5] = ppppuVar16;
                *ppppuVar16 = pppuVar4;
            }
        }
        return uVar15;
    }
    return 0;
}


// ===== sym.reserved_memory_stat_show.cfi_jt @ 0x08001248 (size 8) =====

ulong sym.reserved_memory_stat_show.cfi_jt(ulong param_1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    int iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = of_find_all_nodes(0);
    uVar9 = __totalram_pages >> 0x12;
    if (uVar9 < 6) {
        iVar10 = 0x600000;
    }
    else if (uVar9 < 8) {
        iVar10 = 0x800000;
    }
    else if (uVar9 < 10) {
        iVar10 = 0xa00000;
    }
    else if (uVar9 < 0xc) {
        iVar10 = 0xc00000;
    }
    else {
        iVar10 = 0xe00000;
        if (0xd < uVar9) {
            iVar10 = 0x1000000;
        }
    }
    seq_printf(param_1,"[ReservedMemoryTotal] size %ld KB\n\n",iVar10 + __totalram_pages * -4);
    if (iVar3 == 0) {
        iVar12 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iStack_68 = 0;
        iVar13 = 0;
    }
    else {
        iVar13 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar12 = 0;
        iStack_68 = 0;
        do {
            puVar4 = of_reserved_mem_lookup(iVar3);
            if ((puVar4 != NULL) && (puVar4[5] != 0)) {
                iVar5 = of_find_property(iVar3,"no-map",0);
                iVar2 = of_device_is_compatible(iVar3,"shared-dma-pool");
                if (iVar2 == 0) {
                    bVar1 = false;
                    pcVar7 = "fdt_reserved_other";
                }
                else {
                    iVar6 = of_find_property(iVar3,"reusable",0);
                    bVar1 = iVar6 != 0;
                    pcVar7 = "fdt_reserved_cma";
                    if (!bVar1) {
                        pcVar7 = "fdt_reserved_other";
                    }
                }
                if (iVar5 != 0) {
                    pcVar7 = "fdt_no-map";
                }
                seq_printf(param_1,"[%s] %s: addr 0x%llx, size %lld KB\n",pcVar7,*puVar4,puVar4[4],puVar4[5] >> 10)
                ;
                uVar8 = puVar4[5] >> 10;
                if (iVar5 == 0) {
                    if (bVar1) {
                        iVar11 = uVar8 + iVar11;
                    }
                    else {
                        iStack_68 = uVar8 + iStack_68;
                    }
                }
                else {
                    iVar10 = uVar8 + iVar10;
                }
                iVar12 = iVar12 + 1;
                iVar13 = uVar8 + iVar13;
            }
            iVar3 = of_find_all_nodes(iVar3);
        } while (iVar3 != 0);
    }
    seq_printf(param_1,"[MemblockReserved] initrd: size %ld KB\n",*0x8002000);
    seq_printf(param_1,
               "\nSummary:\nfdt total count %d, total size %ld KB:\nfdt_no-map total size %ld KB\nfdt_reserved_cma total size %ld KB\nfdt_reserved_other total size %ld KB\n"
               ,iVar12,iVar13,iVar10,iVar11,iStack_68);
    return 0;
}


// ===== sym.dma_buf_procs_sort_show.cfi_jt @ 0x08001250 (size 8) =====

ulong sym.dma_buf_procs_sort_show.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *****pppppiVar3;
    char cVar4;
    bool bVar5;
    int64_t ******ppppppiVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *****pppppiVar10;
    int64_t *piVar11;
    uint64_t *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar13;
    int64_t *piVar14;
    code *pcVar15;
    int64_t ******ppppppiVar16;
    int64_t ******ppppppiVar17;
    ulong *puVar18;
    ulong *puVar19;
    int64_t *piVar20;
    int64_t ******ppppppiVar21;
    int64_t iVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    int64_t *****pppppiStack_78;
    int64_t *****pppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    pppppiStack_78 = &pppppiStack_78;
    pppppiStack_70 = pppppiStack_78;
    _raw_read_lock(tasklist_lock);
    pcVar15 = *0x800a4e0 + -0x4d0;
    if (pcVar15 != init_task) {
        iVar7 = 0;
        iVar22 = *0x800a4e0;
        do {
            iVar8 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar8 = 0x30;
            }
            iVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x40);
            if (iVar8 == 0) {
                _raw_read_unlock(tasklist_lock);
                uVar13 = 0xfffffff4;
                goto code_r0x080015e0;
            }
            piVar11 = iVar8 + 0x20;
            *(iVar8 + 0x20) = piVar11;
            *(iVar8 + 0x28) = piVar11;
            for (puVar19 = *(*(iVar22 + 800) + 0x10); *(iVar22 + 800) + 0x10 != puVar19; puVar19 = *puVar19) {
                _raw_spin_lock(puVar19 + 0x3d);
                if (puVar19[0x28] != 0) {
                    iVar7 = iterate_fd(puVar19[0x28],0,sym.get_dma_info_sort.c485c78501ba98569696bc707d47051f.cfi_jt,
                                       iVar8);
                }
                _raw_spin_unlock(puVar19 + 0x3d);
            }
            if ((iVar7 == 0) && (*piVar11 != piVar11)) {
                list_sort(0,piVar11,sym.dmacmp.c485c78501ba98569696bc707d47051f.cfi_jt);
                __get_task_comm(iVar8,0x10,pcVar15);
                pppppiVar10 = pppppiStack_78;
                ppppppiVar16 = iVar8 + 0x30;
                *(iVar8 + 0x10) = *(iVar22 + 0x10c);
                uVar9 = __list_add_valid(ppppppiVar16,&pppppiStack_78,pppppiStack_78);
                if ((uVar9 & 1) != 0) {
                    pppppiVar10[1] = ppppppiVar16;
                    *(iVar8 + 0x30) = pppppiVar10;
                    *(iVar8 + 0x38) = &pppppiStack_78;
                    pppppiStack_78 = ppppppiVar16;
                }
            }
            else {
                piVar14 = *piVar11;
                while (piVar11 != piVar14) {
                    piVar20 = *piVar14;
                    iVar22 = piVar14[-1];
                    if ((iVar22 != 0) && (*(iVar22 + 8) != 0)) {
                        fput();
                    }
                    uVar9 = __list_del_entry_valid(piVar14);
                    if ((uVar9 & 1) != 0) {
                        iVar22 = *piVar14;
                        piVar2 = piVar14[1];
                        *(iVar22 + 8) = piVar2;
                        *piVar2 = iVar22;
                    }
                    *piVar14 = -0x2152ffffffffff00;
                    piVar14[1] = -0x2152fffffffffede;
                    kfree(piVar14 + -1);
                    piVar14 = piVar20;
                }
                kfree(iVar8);
            }
            iVar22 = *(pcVar15 + 0x4d0);
            pcVar15 = iVar22 + -0x4d0;
        } while (pcVar15 != init_task);
    }
    _raw_read_unlock(tasklist_lock);
    list_sort(0,&pppppiStack_78,sym.proccmp.c485c78501ba98569696bc707d47051f.cfi_jt);
    if (&pppppiStack_78 != pppppiStack_78) {
        ppppppiVar16 = pppppiStack_78;
        do {
            seq_printf(param_1,"\n%s (PID %ld) size(KB): %ld\nDMA Buffers:\n",ppppppiVar16 + -6,*(ppppppiVar16 + -4)
                       ,ppppppiVar16[-3]);
            seq_printf(param_1,"%-12s\t%-10s\t%-8s\n","exp_name","Size (KB)","inode");
            for (ppppppiVar17 = ppppppiVar16[-2]; ppppppiVar16 + -2 != ppppppiVar17; ppppppiVar17 = *ppppppiVar17) {
                pppppiVar10 = ppppppiVar17[-1];
                seq_printf(param_1,"%-12s\t%-10ld\t%-8lu\n",pppppiVar10[0xe],*pppppiVar10 >> 10,pppppiVar10[1][4][8]
                          );
            }
            ppppppiVar16 = *ppppppiVar16;
        } while (&pppppiStack_78 != ppppppiVar16);
    }
    uVar13 = 0;
code_r0x080015e0:
    ppppppiVar16 = pppppiStack_78;
    while (&pppppiStack_78 != ppppppiVar16) {
        ppppppiVar17 = *ppppppiVar16;
        uVar9 = __list_del_entry_valid(ppppppiVar16);
        if ((uVar9 & 1) != 0) {
            pppppiVar10 = *ppppppiVar16;
            pppppiVar3 = ppppppiVar16[1];
            pppppiVar10[1] = pppppiVar3;
            *pppppiVar3 = pppppiVar10;
        }
        *ppppppiVar16 = 0xdead000000000100;
        ppppppiVar16[1] = 0xdead000000000122;
        ppppppiVar6 = ppppppiVar16[-2];
        while (ppppppiVar16 + -2 != ppppppiVar6) {
            ppppppiVar21 = *ppppppiVar6;
            pppppiVar10 = ppppppiVar6[-1];
            if ((pppppiVar10 != NULL) && (pppppiVar10[1] != NULL)) {
                fput();
            }
            uVar9 = __list_del_entry_valid(ppppppiVar6);
            if ((uVar9 & 1) != 0) {
                pppppiVar10 = *ppppppiVar6;
                pppppiVar3 = ppppppiVar6[1];
                pppppiVar10[1] = pppppiVar3;
                *pppppiVar3 = pppppiVar10;
            }
            *ppppppiVar6 = 0xdead000000000100;
            ppppppiVar6[1] = 0xdead000000000122;
            kfree(ppppppiVar6 + -1);
            ppppppiVar6 = ppppppiVar21;
        }
        kfree(ppppppiVar16 + -6);
        ppppppiVar16 = ppppppiVar17;
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar13;
    }
    auVar23 = __stack_chk_fail();
    iVar8 = auVar23._8_8_;
    iVar22 = auVar23._0_8_;
    *extraout_x18 = 0x80016d4;
    uVar13 = is_dma_buf_file(in_tmp_ldXn,iVar8);
    if (uVar13 != 0) {
        piVar14 = iVar22 + 0x20;
        piVar11 = *piVar14;
        if (piVar11 != piVar14) {
            do {
                if (piVar11[-1] == *(iVar8 + 0xd8)) goto code_r0x080017d4;
                piVar11 = *piVar11;
            } while (piVar11 != piVar14);
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x18);
        if (puVar19 == NULL) {
            uVar13 = 0xfffffff4;
        }
        else {
            piVar11 = iVar8 + 0x38;
            Hint_Prefetch(piVar11,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                    *piVar11 = *piVar11 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            puVar12 = *(iVar8 + 0xd8);
            iVar8 = *(iVar22 + 0x18);
            iVar1 = *(iVar22 + 0x20);
            puVar18 = puVar19 + 1;
            *puVar19 = puVar12;
            *(iVar22 + 0x18) = iVar8 + (*puVar12 >> 10);
            uVar9 = __list_add_valid(puVar18,piVar14,iVar1);
            if ((uVar9 & 1) == 0) {
code_r0x080017d4:
                uVar13 = 0;
            }
            else {
                uVar13 = 0;
                *(iVar1 + 8) = puVar18;
                puVar19[1] = iVar1;
                puVar19[2] = piVar14;
                *piVar14 = puVar18;
            }
        }
    }
    return uVar13;
}


// ===== sym.reboot_panic_procs_write.a5ba448d462d36861e6435ea35c651eb.cfi_jt @ 0x08001258 (size 8) =====

int * sym.reboot_panic_procs_write.a5ba448d462d36861e6435ea35c651eb.cfi_jt(ulong param_1,int64_t param_2,int *param_3)

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
    if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x800,0x80027c8);
        (*pcVar4)();
    }
    __check_object_size(&uStack_38,param_3,0);
    piVar9 = param_3;
    iVar6 = sym._copy_from_user(&uStack_38,param_2,param_3);
    if (iVar6 == 0) {
        piVar9 = &iStack_3c;
        sscanf(&uStack_38,0x8000228);
        *0x8002000 = 0 < iStack_3c;
    }
    else {
        param_3 = 0xfffffffffffffff2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return param_3;
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


// ===== sym.shutdown_panic_procs_write.a5ba448d462d36861e6435ea35c651eb.cfi_jt @ 0x08001260 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.shutdown_panic_procs_write.a5ba448d462d36861e6435ea35c651eb.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

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
    if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8002af4);
        (*pcVar1)();
    }
    __check_object_size(&uStack_38,param_3,0);
    iVar2 = sym._copy_from_user(&uStack_38,param_2,param_3);
    if (iVar2 == 0) {
        sscanf(&uStack_38,0x8000228,&iStack_3c);
        *0x8002000 = 0 < iStack_3c;
    }
    else {
        param_3 = 0xfffffffffffffff2;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.panic_trigger_notify;
    if ((extraout_x1 == 1) && (*0x8002000 != 0)) {
        panic("Panic trigger come from SYS_RESTART\n");
    }
    else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("Panic trigger come from SYS_POWER_OFF\n");
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt @ 0x08001268 (size 8) =====

int sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return *(param_3 + -0x18) - *(param_2 + -0x18);
}


// ===== sym.proccmp.c485c78501ba98569696bc707d47051f.cfi_jt @ 0x08001270 (size 8) =====

int sym.proccmp.c485c78501ba98569696bc707d47051f.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return *(param_3 + -0x18) - *(param_2 + -0x18);
}


// ===== sym.dmacmp.c485c78501ba98569696bc707d47051f.cfi_jt @ 0x08001278 (size 8) =====

int sym.dmacmp.c485c78501ba98569696bc707d47051f.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    return **(param_3 + -8) - **(param_2 + -8);
}


// ===== sym.__cfi_check_fail @ 0x08001280 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080012c4

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
    //switch table (4 cases) at 0x80001e8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80012d8);
    (*pcVar1)();
}


// ===== sym.dma_buf_procs_sort_show @ 0x080012d8 (size 1040) =====

ulong sym.dma_buf_procs_sort_show(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    ulong in_tmp_ldXn;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    code *pcVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong *puVar13;
    ulong *puVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    piStack_78 = &stack0xffffffffffffff88;
    piStack_70 = piStack_78;
    _raw_read_lock(tasklist_lock);
    pcVar10 = *0x800a4e0 + -0x4d0;
    if (pcVar10 != init_task) {
        iVar5 = 0;
        iVar17 = *0x800a4e0;
        do {
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xb20,0x40);
            if (iVar6 == 0) {
                _raw_read_unlock(tasklist_lock);
                uVar9 = 0xfffffff4;
                goto code_r0x080015e0;
            }
            piVar11 = iVar6 + 0x20;
            *(iVar6 + 0x20) = piVar11;
            *(iVar6 + 0x28) = piVar11;
            for (puVar14 = *(*(iVar17 + 800) + 0x10); *(iVar17 + 800) + 0x10 != puVar14; puVar14 = *puVar14) {
                _raw_spin_lock(puVar14 + 0x3d);
                if (puVar14[0x28] != 0) {
                    iVar5 = iterate_fd(puVar14[0x28],0,sym.get_dma_info_sort.c485c78501ba98569696bc707d47051f.cfi_jt,
                                       iVar6);
                }
                _raw_spin_unlock(puVar14 + 0x3d);
            }
            if ((iVar5 == 0) && (*piVar11 != piVar11)) {
                list_sort(0,piVar11,sym.dmacmp.c485c78501ba98569696bc707d47051f.cfi_jt);
                __get_task_comm(iVar6,0x10,pcVar10);
                piVar12 = piStack_78;
                piVar11 = iVar6 + 0x30;
                *(iVar6 + 0x10) = *(iVar17 + 0x10c);
                uVar7 = __list_add_valid(piVar11,&stack0xffffffffffffff88,piStack_78);
                if ((uVar7 & 1) != 0) {
                    piVar12[1] = piVar11;
                    *(iVar6 + 0x30) = piVar12;
                    *(iVar6 + 0x38) = &stack0xffffffffffffff88;
                    piStack_78 = piVar11;
                }
            }
            else {
                piVar12 = *piVar11;
                while (piVar11 != piVar12) {
                    piVar15 = *piVar12;
                    iVar17 = piVar12[-1];
                    if ((iVar17 != 0) && (*(iVar17 + 8) != 0)) {
                        fput();
                    }
                    uVar7 = __list_del_entry_valid(piVar12);
                    if ((uVar7 & 1) != 0) {
                        iVar17 = *piVar12;
                        piVar16 = piVar12[1];
                        *(iVar17 + 8) = piVar16;
                        *piVar16 = iVar17;
                    }
                    *piVar12 = -0x2152ffffffffff00;
                    piVar12[1] = -0x2152fffffffffede;
                    kfree(piVar12 + -1);
                    piVar12 = piVar15;
                }
                kfree(iVar6);
            }
            iVar17 = *(pcVar10 + 0x4d0);
            pcVar10 = iVar17 + -0x4d0;
        } while (pcVar10 != init_task);
    }
    _raw_read_unlock(tasklist_lock);
    list_sort(0,&stack0xffffffffffffff88,sym.proccmp.c485c78501ba98569696bc707d47051f.cfi_jt);
    if (&stack0xffffffffffffff88 != piStack_78) {
        piVar11 = piStack_78;
        do {
            seq_printf(arg1,"\n%s (PID %ld) size(KB): %ld\nDMA Buffers:\n",piVar11 + -6,piVar11[-4],piVar11[-3]);
            seq_printf(arg1,"%-12s\t%-10s\t%-8s\n","exp_name","Size (KB)","inode");
            for (piVar12 = piVar11[-2]; piVar11 + -2 != piVar12; piVar12 = *piVar12) {
                puVar8 = piVar12[-1];
                seq_printf(arg1,"%-12s\t%-10ld\t%-8lu\n",puVar8[0xe],*puVar8 >> 10,*(*(puVar8[1] + 0x20) + 0x40));
            }
            piVar11 = *piVar11;
        } while (&stack0xffffffffffffff88 != piVar11);
    }
    uVar9 = 0;
code_r0x080015e0:
    piVar11 = piStack_78;
    while (&stack0xffffffffffffff88 != piVar11) {
        piVar12 = *piVar11;
        uVar7 = __list_del_entry_valid(piVar11);
        if ((uVar7 & 1) != 0) {
            iVar17 = *piVar11;
            piVar15 = piVar11[1];
            *(iVar17 + 8) = piVar15;
            *piVar15 = iVar17;
        }
        *piVar11 = -0x2152ffffffffff00;
        piVar11[1] = -0x2152fffffffffede;
        piVar15 = piVar11[-2];
        while (piVar11 + -2 != piVar15) {
            piVar16 = *piVar15;
            iVar17 = piVar15[-1];
            if ((iVar17 != 0) && (*(iVar17 + 8) != 0)) {
                fput();
            }
            uVar7 = __list_del_entry_valid(piVar15);
            if ((uVar7 & 1) != 0) {
                iVar17 = *piVar15;
                piVar2 = piVar15[1];
                *(iVar17 + 8) = piVar2;
                *piVar2 = iVar17;
            }
            *piVar15 = -0x2152ffffffffff00;
            piVar15[1] = -0x2152fffffffffede;
            kfree(piVar15 + -1);
            piVar15 = piVar16;
        }
        kfree(piVar11 + -6);
        piVar11 = piVar12;
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    auVar18 = __stack_chk_fail();
    iVar6 = auVar18._8_8_;
    iVar17 = auVar18._0_8_;
    *extraout_x18 = 0x80016d4;
    uVar9 = is_dma_buf_file(in_tmp_ldXn,iVar6);
    if (uVar9 != 0) {
        piVar12 = iVar17 + 0x20;
        piVar11 = *piVar12;
        if (piVar11 != piVar12) {
            do {
                if (piVar11[-1] == *(iVar6 + 0xd8)) goto code_r0x080017d4;
                piVar11 = *piVar11;
            } while (piVar11 != piVar12);
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x18);
        if (puVar14 == NULL) {
            uVar9 = 0xfffffff4;
        }
        else {
            piVar11 = iVar6 + 0x38;
            Hint_Prefetch(piVar11,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar11,0x10);
                if (bVar4) {
                    *piVar11 = *piVar11 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            puVar8 = *(iVar6 + 0xd8);
            iVar6 = *(iVar17 + 0x18);
            iVar1 = *(iVar17 + 0x20);
            puVar13 = puVar14 + 1;
            *puVar14 = puVar8;
            *(iVar17 + 0x18) = iVar6 + (*puVar8 >> 10);
            uVar7 = __list_add_valid(puVar13,piVar12,iVar1);
            if ((uVar7 & 1) == 0) {
code_r0x080017d4:
                uVar9 = 0;
            }
            else {
                uVar9 = 0;
                *(iVar1 + 8) = puVar13;
                puVar14[1] = iVar1;
                puVar14[2] = piVar12;
                *piVar12 = puVar13;
            }
        }
    }
    return uVar9;
}


// ===== sym.get_dma_info_sort @ 0x080016e8 (size 312) =====

ulong sym.get_dma_info_sort(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    bool bVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint64_t *puVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong *puVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = is_dma_buf_file(arg2);
    if (uVar5 != 0) {
        piVar10 = arg1 + 0x20;
        piVar8 = *piVar10;
        if (piVar8 != piVar10) {
            do {
                if (piVar8[-1] == *(arg2 + 0xd8)) goto code_r0x080017d4;
                piVar8 = *piVar8;
            } while (piVar8 != piVar10);
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xb20,0x18);
        if (puVar6 == NULL) {
            uVar5 = 0xfffffff4;
        }
        else {
            piVar8 = arg2 + 0x38;
            Hint_Prefetch(piVar8,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar8,0x10);
                if (bVar4) {
                    *piVar8 = *piVar8 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            puVar9 = *(arg2 + 0xd8);
            iVar1 = *(arg1 + 0x18);
            iVar2 = *(arg1 + 0x20);
            puVar11 = puVar6 + 1;
            *puVar6 = puVar9;
            *(arg1 + 0x18) = iVar1 + (*puVar9 >> 10);
            uVar7 = __list_add_valid(puVar11,piVar10,iVar2);
            if ((uVar7 & 1) == 0) {
code_r0x080017d4:
                uVar5 = 0;
            }
            else {
                uVar5 = 0;
                *(iVar2 + 8) = puVar11;
                puVar6[1] = iVar2;
                puVar6[2] = piVar10;
                *piVar10 = puVar11;
            }
        }
    }
    return uVar5;
}


// ===== sym.dmacmp @ 0x08001820 (size 32) =====

int sym.dmacmp(ulong noname_0,int64_t arg1,int64_t arg2)

{
    return **(arg2 + -8) - **(arg1 + -8);
}


// ===== sym.proccmp @ 0x08001840 (size 24) =====

int sym.proccmp(ulong noname_0,int64_t arg1,int64_t arg2)

{
    return *(arg2 + -0x18) - *(arg1 + -0x18);
}


// ===== sym.get_dma_buf_procs @ 0x08001858 (size 520) =====

ulong sym.get_dma_buf_procs(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *puVar7;
    uint uVar8;
    code *in_x2;
    uint32_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    code *pcVar15;
    int64_t iVar16;
    int64_t *piVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong in_stack_ffffffffffffff10;
    uint uVar20;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_68 = *(iVar16 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffff80;
    iStack_70 = 0;
    pcStack_98 = NULL;
    uStack_90 = 0;
    uStack_88 = 0;
    iStack_80 = arg1;
    iStack_78 = arg2;
    __rcu_read_lock();
    uVar20 = in_stack_ffffffffffffff10 >> 0x20;
    uVar8 = SUB84(in_x2,0);
    pcVar15 = *0x800a4e0 + -0x4d0;
    if (pcVar15 != init_task) {
        iVar4 = 0;
        iVar16 = *0x800a4e0;
        do {
            piVar17 = *(*(iVar16 + 800) + 0x10);
            pcStack_98 = pcVar15;
            iVar1 = iVar4;
            if (*(iVar16 + 800) + 0x10 != piVar17) {
                iVar18 = 0;
                do {
                    _raw_spin_lock(piVar17 + 0x3d);
                    if (iVar18 == 0) {
                        iVar18 = *(*(iVar16 + 0x148) + 0x7d8);
                        iVar5 = piVar17[0x28];
                    }
                    else {
                        iVar5 = piVar17[0x28];
                    }
                    if ((iVar5 != 0) && ((iVar18 != iVar5 || (*(iVar16 + 0x148) == piVar17 + -0xd3)))) {
                        in_x2 = sym.get_dma_info.c485c78501ba98569696bc707d47051f.cfi_jt;
                        iVar4 = iterate_fd(iVar5,0,sym.get_dma_info.c485c78501ba98569696bc707d47051f.cfi_jt,
                                           &stack0xffffffffffffff60);
                    }
                    _raw_spin_unlock(piVar17 + 0x3d);
                    uVar20 = in_stack_ffffffffffffff10 >> 0x20;
                    uVar8 = SUB84(in_x2,0);
                    if (iVar4 != 0) goto code_r0x080019f8;
                    piVar17 = *piVar17;
                    iVar1 = 0;
                } while (*(iVar16 + 800) + 0x10 != piVar17);
            }
            iVar4 = iVar1;
            if (uStack_90 != 0) {
                uVar8 = 0x80002f5;
                iVar4 = scnprintf(iStack_80 + iStack_70,iStack_78 - iStack_70,"Total %d objects, %zu bytes\n",
                                  uStack_90 & 0xffffffff,uStack_88);
                uVar20 = in_stack_ffffffffffffff10 >> 0x20;
                iStack_70 = iStack_70 + iVar4;
                if (iStack_70 == iStack_78 + -1) {
code_r0x080019f8:
                    __rcu_read_unlock();
                    uVar6 = _printk(0x800045f);
                    goto code_r0x08001a10;
                }
                in_x2 = 0x2000;
                uStack_90 = uStack_90 & 0xffffffff00000000;
                uStack_88 = 0;
                memset(obj.dma_buf_hash,0);
            }
            uVar20 = in_stack_ffffffffffffff10 >> 0x20;
            uVar8 = SUB84(in_x2,0);
            iVar16 = *(pcVar15 + 0x4d0);
            pcVar15 = iVar16 + -0x4d0;
        } while (pcVar15 != init_task);
    }
    uVar6 = __rcu_read_unlock();
code_r0x08001a10:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar19 = __stack_chk_fail();
    puVar7 = auVar19._0_8_;
    *extraout_x18 = 0x8001a50;
    uVar6 = is_dma_buf_file(auVar19._8_8_);
    if (uVar6 == 0) {
        return uVar6;
    }
    piVar17 = *puVar7;
    if (*(puVar7 + 2) == 0) {
        iVar4 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],"\n%s (PID %d)\nDMA Buffers:\n",
                          puVar7[1] + 0x7a8,*(puVar7[1] + 0x5dc));
        iVar16 = piVar17[2];
        piVar17[2] = iVar16 + iVar4;
        if (iVar16 + iVar4 == piVar17[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar14 = *(auVar19._8_8_ + 0xd8);
    uVar13 = 0x75f572ab;
    uVar9 = 0x130;
    uVar12 = 0x75f572ab;
    iVar4 = 0x75f572ab;
    piVar11 = piVar14;
    do {
        uVar9 = uVar9 - 0xc;
        uVar13 = piVar11[1] + uVar13;
        iVar1 = *(piVar11 + 4) + uVar12;
        uVar12 = (*piVar11 + iVar4) - uVar13 ^ (uVar13 >> 0x1c | uVar13 * 0x10);
        iVar4 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x1a | uVar12 << 6);
        iVar1 = uVar12 + iVar4;
        uVar12 = iVar4 - uVar13 ^ (uVar13 >> 0x18 | uVar13 << 8);
        iVar4 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
        iVar1 = uVar12 + iVar4;
        uVar2 = iVar4 - uVar13 ^ (uVar13 >> 0xd | uVar13 << 0x13);
        iVar4 = uVar13 + iVar1;
        uVar12 = uVar2 + iVar4;
        uVar13 = iVar1 - uVar2 ^ (uVar2 >> 0x1c | uVar2 << 4);
        piVar11 = piVar11 + 0xc;
    } while (0xc < uVar9);
    uVar13 = (uVar13 ^ uVar12) - (uVar12 >> 0x12 | uVar12 * 0x4000);
    uVar9 = (iVar4 + *(piVar14 + 0x12f) * 0x1000000 + *(piVar14 + 0x12e) * 0x10000 + *(piVar14 + 0x12d) * 0x100 +
             *(piVar14 + 300) ^ uVar13) - (uVar13 >> 0x15 | uVar13 * 0x800);
    uVar12 = (uVar9 ^ uVar12) - (uVar9 >> 7 | uVar9 * 0x2000000);
    uVar13 = (uVar12 ^ uVar13) - (uVar12 >> 0x10 | uVar12 * 0x10000);
    uVar9 = (uVar13 ^ uVar9) - (uVar13 >> 0x1c | uVar13 * 0x10);
    uVar12 = (uVar9 ^ uVar12) - (uVar9 >> 0x12 | uVar9 * 0x4000);
    uVar10 = (uVar12 ^ uVar13) - (uVar12 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar10] == 0x0) {
        obj.dma_buf_hash[uVar10] = 0x1;
        iVar4 = *(puVar7 + 2);
        *(puVar7 + 2) = iVar4 + 1;
        if (iVar4 == 0) {
            uVar20 = 0;
            iVar4 = scnprintf(*piVar17 + piVar17[2],piVar17[1] - piVar17[2],
                              "%-8s\t%-8s\t%-8s\t%-8s\t%-12s\t%-4s\t%-8s\n","size","flags","mode","count",
                              "exp_name",0x800035d,0x8000772);
            iVar18 = piVar17[1];
            iVar16 = piVar17[2] + iVar4;
            piVar17[2] = iVar16;
            if (iVar16 == iVar18 + -1) {
                return 0xffffffea;
            }
        }
        else {
            iVar18 = piVar17[1];
            iVar16 = piVar17[2];
        }
        iVar3 = piVar14[1];
        iVar5 = 0x80007f6;
        if (piVar14[0xf] != 0) {
            iVar5 = piVar14[0xf];
        }
        iVar4 = scnprintf(*piVar17 + iVar16,iVar18 - iVar16,"%08zu\t%08x\t%08x\t%08ld\t%-12s\t%-4u\t%-8lu\t%s\n",
                          *piVar14,*(iVar3 + 0x40),*(iVar3 + 0x44),*(iVar3 + 0x38),piVar14[0xe],
                          CONCAT44(uVar20,uVar8),*(*(piVar14[1] + 0x20) + 0x40),iVar5);
        iVar16 = piVar17[2];
        piVar17[2] = iVar16 + iVar4;
        if (iVar16 + iVar4 == piVar17[1] + -1) {
            return 0xffffffea;
        }
        puVar7[3] = puVar7[3] + *piVar14;
        return 0;
    }
    return 0;
}


// ===== sym.get_dma_info @ 0x08001a60 (size 712) =====

ulong sym.get_dma_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int64_t *piVar15;
    ulong unaff_x30;
    ulong in_stack_ffffffffffffffb0;
    uint uVar16;
    
    uVar16 = in_stack_ffffffffffffffb0 >> 0x20;
    *in_x18 = unaff_x30;
    uVar6 = is_dma_buf_file(arg2);
    if (uVar6 == 0) {
        return uVar6;
    }
    piVar15 = *arg1;
    if (*(arg1 + 0x10) == 0) {
        iVar5 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"\n%s (PID %d)\nDMA Buffers:\n",
                          *(arg1 + 8) + 0x7a8,*(*(arg1 + 8) + 0x5dc));
        iVar9 = piVar15[2];
        piVar15[2] = iVar9 + iVar5;
        if (iVar9 + iVar5 == piVar15[1] + -1) {
            return 0xffffffea;
        }
    }
    piVar14 = *(arg2 + 0xd8);
    uVar13 = 0x75f572ab;
    uVar7 = 0x130;
    uVar12 = 0x75f572ab;
    iVar5 = 0x75f572ab;
    piVar10 = piVar14;
    do {
        uVar7 = uVar7 - 0xc;
        uVar13 = piVar10[1] + uVar13;
        iVar1 = *(piVar10 + 4) + uVar12;
        uVar12 = (*piVar10 + iVar5) - uVar13 ^ (uVar13 >> 0x1c | uVar13 * 0x10);
        iVar5 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x1a | uVar12 << 6);
        iVar1 = uVar12 + iVar5;
        uVar12 = iVar5 - uVar13 ^ (uVar13 >> 0x18 | uVar13 << 8);
        iVar5 = uVar13 + iVar1;
        uVar13 = iVar1 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
        iVar1 = uVar12 + iVar5;
        uVar3 = iVar5 - uVar13 ^ (uVar13 >> 0xd | uVar13 << 0x13);
        iVar5 = uVar13 + iVar1;
        uVar12 = uVar3 + iVar5;
        uVar13 = iVar1 - uVar3 ^ (uVar3 >> 0x1c | uVar3 << 4);
        piVar10 = piVar10 + 0xc;
    } while (0xc < uVar7);
    uVar13 = (uVar13 ^ uVar12) - (uVar12 >> 0x12 | uVar12 * 0x4000);
    uVar7 = (iVar5 + *(piVar14 + 0x12f) * 0x1000000 + *(piVar14 + 0x12e) * 0x10000 + *(piVar14 + 0x12d) * 0x100 +
             *(piVar14 + 300) ^ uVar13) - (uVar13 >> 0x15 | uVar13 * 0x800);
    uVar12 = (uVar7 ^ uVar12) - (uVar7 >> 7 | uVar7 * 0x2000000);
    uVar13 = (uVar12 ^ uVar13) - (uVar12 >> 0x10 | uVar12 * 0x10000);
    uVar7 = (uVar13 ^ uVar7) - (uVar13 >> 0x1c | uVar13 * 0x10);
    uVar12 = (uVar7 ^ uVar12) - (uVar7 >> 0x12 | uVar7 * 0x4000);
    uVar8 = (uVar12 ^ uVar13) - (uVar12 >> 8) & 0x1fff;
    if (obj.dma_buf_hash[uVar8] != 0x0) {
        return 0;
    }
    obj.dma_buf_hash[uVar8] = 0x1;
    iVar5 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar5 + 1;
    if (iVar5 == 0) {
        uVar16 = 0;
        iVar5 = scnprintf(*piVar15 + piVar15[2],piVar15[1] - piVar15[2],"%-8s\t%-8s\t%-8s\t%-8s\t%-12s\t%-4s\t%-8s\n"
                          ,"size","flags","mode","count","exp_name",0x800035d,0x8000772);
        iVar11 = piVar15[1];
        iVar9 = piVar15[2] + iVar5;
        piVar15[2] = iVar9;
        if (iVar9 == iVar11 + -1) {
            return 0xffffffea;
        }
    }
    else {
        iVar11 = piVar15[1];
        iVar9 = piVar15[2];
    }
    iVar4 = piVar14[1];
    iVar2 = 0x80007f6;
    if (piVar14[0xf] != 0) {
        iVar2 = piVar14[0xf];
    }
    iVar5 = scnprintf(*piVar15 + iVar9,iVar11 - iVar9,"%08zu\t%08x\t%08x\t%08ld\t%-12s\t%-4u\t%-8lu\t%s\n",*piVar14,
                      *(iVar4 + 0x40),*(iVar4 + 0x44),*(iVar4 + 0x38),piVar14[0xe],CONCAT44(uVar16,arg3),
                      *(*(piVar14[1] + 0x20) + 0x40),iVar2);
    iVar9 = piVar15[2];
    piVar15[2] = iVar9 + iVar5;
    if (iVar9 + iVar5 == piVar15[1] + -1) {
        return 0xffffffea;
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) + *piVar14;
    return 0;
}


// ===== sym.init_dma_buf_debug @ 0x08001d2c (size 256) =====

ulong sym.init_dma_buf_debug(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = proc_mkdir("dma_buf",arg1);
    if (_segment.ehdr == 0) {
        _printk(0x80001ed,"init_dma_buf_debug");
    }
    else {
        iVar1 = proc_create("dma_buf_procs",0x8124,_segment.ehdr,obj.dma_buf_procs_proc_ops);
        if (iVar1 == 0) {
            uVar2 = 0x80002a2;
            uVar3 = 0x11f;
        }
        else {
            proc_set_size(iVar1,_segment.ehdr);
            _segment.ehdr = __kmalloc(_segment.ehdr,0xdc0);
            if (_segment.ehdr != 0) {
                proc_create_single_data("dma_buf_procs_sort",0,_segment.ehdr,sym.dma_buf_procs_sort_show.cfi_jt,0);
                return 0;
            }
            uVar2 = 0x800065f;
            uVar3 = 0x127;
            _segment.ehdr = 0;
        }
        _printk(uVar2,"init_dma_buf_debug",uVar3);
    }
    return 0xfffffff4;
}


// ===== sym.dma_buf_debug_clean @ 0x08001e2c (size 112) =====

void sym.dma_buf_debug_clean(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("dma_buf_procs_sort",_segment.ehdr);
    remove_proc_entry("dma_buf_procs",_segment.ehdr);
    remove_proc_entry("dma_buf",arg1);
    if (_segment.ehdr != 0) {
        kfree();
    }
    return;
}


// ===== sym.dma_buf_procs_read @ 0x08001e9c (size 132) =====

void sym.dma_buf_procs_read(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        memset(_segment.ehdr,0,_segment.ehdr);
    }
    sym.get_dma_buf_procs(_segment.ehdr,_segment.ehdr);
    simple_read_from_buffer(arg1,arg2,arg3,_segment.ehdr,_segment.ehdr);
    return;
}


// ===== sym.estimate_ddr_size @ 0x08001f20 (size 112) =====

ulong sym.estimate_ddr_size(int64_t arg1)

{
    ulong uVar1;
    uint32_t uVar2;
    
    uVar2 = arg1 >> 0x14;
    if (uVar2 < 6) {
        return 0x600000;
    }
    if (uVar2 < 8) {
        return 0x800000;
    }
    if (uVar2 < 10) {
        return 0xa00000;
    }
    if (uVar2 < 0xc) {
        return 0xc00000;
    }
    uVar1 = 0xe00000;
    if (0xd < uVar2) {
        uVar1 = 0x1000000;
    }
    return uVar1;
}


// ===== sym.reserved_memory_stat_show @ 0x08001f90 (size 576) =====

ulong sym.reserved_memory_stat_show(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    int iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = of_find_all_nodes(0);
    uVar9 = __totalram_pages >> 0x12;
    if (uVar9 < 6) {
        iVar10 = 0x600000;
    }
    else if (uVar9 < 8) {
        iVar10 = 0x800000;
    }
    else if (uVar9 < 10) {
        iVar10 = 0xa00000;
    }
    else if (uVar9 < 0xc) {
        iVar10 = 0xc00000;
    }
    else {
        iVar10 = 0xe00000;
        if (0xd < uVar9) {
            iVar10 = 0x1000000;
        }
    }
    seq_printf(arg1,"[ReservedMemoryTotal] size %ld KB\n\n",iVar10 + __totalram_pages * -4);
    if (iVar3 == 0) {
        iVar12 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iStack_68 = 0;
        iVar13 = 0;
    }
    else {
        iVar13 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar12 = 0;
        iStack_68 = 0;
        do {
            puVar4 = of_reserved_mem_lookup(iVar3);
            if ((puVar4 != NULL) && (puVar4[5] != 0)) {
                iVar5 = of_find_property(iVar3,"no-map",0);
                iVar2 = of_device_is_compatible(iVar3,"shared-dma-pool");
                if (iVar2 == 0) {
                    bVar1 = false;
                    pcVar7 = "fdt_reserved_other";
                }
                else {
                    iVar6 = of_find_property(iVar3,"reusable",0);
                    bVar1 = iVar6 != 0;
                    pcVar7 = "fdt_reserved_cma";
                    if (!bVar1) {
                        pcVar7 = "fdt_reserved_other";
                    }
                }
                if (iVar5 != 0) {
                    pcVar7 = "fdt_no-map";
                }
                seq_printf(arg1,"[%s] %s: addr 0x%llx, size %lld KB\n",pcVar7,*puVar4,puVar4[4],puVar4[5] >> 10);
                uVar8 = puVar4[5] >> 10;
                if (iVar5 == 0) {
                    if (bVar1) {
                        iVar11 = uVar8 + iVar11;
                    }
                    else {
                        iStack_68 = uVar8 + iStack_68;
                    }
                }
                else {
                    iVar10 = uVar8 + iVar10;
                }
                iVar12 = iVar12 + 1;
                iVar13 = uVar8 + iVar13;
            }
            iVar3 = of_find_all_nodes(iVar3);
        } while (iVar3 != 0);
    }
    seq_printf(arg1,"[MemblockReserved] initrd: size %ld KB\n",*0x8002000);
    seq_printf(arg1,
               "\nSummary:\nfdt total count %d, total size %ld KB:\nfdt_no-map total size %ld KB\nfdt_reserved_cma total size %ld KB\nfdt_reserved_other total size %ld KB\n"
               ,iVar12,iVar13,iVar10,iVar11,iStack_68);
    return 0;
}


// ===== sym.ko_memory_stat_show @ 0x080021d4 (size 12) =====

ulong sym.ko_memory_stat_show(int64_t arg1)

{
    ulong *****pppppuVar1;
    ulong *****pppppuVar2;
    ulong *****pppppuVar3;
    ulong ***pppuVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong uVar15;
    ulong ****ppppuVar16;
    ulong *****pppppuVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *****pppppuVar18;
    ulong ***pppuVar19;
    ulong unaff_x30;
    ulong ****ppppuStack_58;
    ulong ****ppppuStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    ppppuStack_58 = &ppppuStack_58;
    ppppuStack_50 = &ppppuStack_58;
    android_debug_for_each_module(sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt,&ppppuStack_58);
    list_sort(0,&ppppuStack_58,sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt);
    if (&ppppuStack_58 == ppppuStack_58) {
        ppppuVar16 = NULL;
    }
    else {
        ppppuVar16 = NULL;
        pppppuVar17 = ppppuStack_58;
        do {
            pppppuVar1 = pppppuVar17 + -3;
            pppppuVar17 = *pppppuVar17;
            ppppuVar16 = *pppppuVar1 + ppppuVar16;
        } while (&ppppuStack_58 != pppppuVar17);
    }
    seq_printf(arg1,"[KernelModuleTotal] size %u KB\n\n");
    if (&ppppuStack_58 != ppppuStack_58) {
        pppppuVar17 = ppppuStack_58;
        do {
            pppppuVar1 = pppppuVar17 + -1;
            pppppuVar2 = pppppuVar17 + -3;
            puVar6 = pppppuVar17 + -0x14;
            pppppuVar3 = pppppuVar17 + -2;
            puVar7 = pppppuVar17 + -0xc;
            pppppuVar18 = pppppuVar17 + -4;
            ppppuVar16 = *pppppuVar18;
            pppppuVar17 = *pppppuVar17;
            seq_printf(arg1,
                       "[KernelModule] %s: size %u KB | text %u KB, rodata %u KB, ro_after_init %u KB, rwdata %u KB\n",
                       ppppuVar16,*pppppuVar2,*puVar6,*pppppuVar3,*puVar7,*pppppuVar1);
            kfree(pppppuVar18);
        } while (&ppppuStack_58 != pppppuVar17);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_48) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.get_module_size;
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xa20,0x30);
        if (piVar13 == NULL) {
            uVar15 = 0xfffffff4;
        }
        else {
            uVar8 = *(iVar12 + 0x174);
            *piVar13 = iVar12;
            iVar9 = *(iVar12 + 0x178);
            iVar10 = *(iVar12 + 0x17c);
            uVar11 = *(iVar12 + 0x170);
            pppuVar4 = piVar13 + 4;
            pppuVar19 = *ppppuVar16;
            *(piVar13 + 2) = iVar9 - uVar8 >> 10;
            *(piVar13 + 0x14) = iVar10 - iVar9 >> 10;
            *(piVar13 + 3) = uVar11 - iVar10 >> 10;
            *(piVar13 + 1) = uVar11 >> 10;
            *(piVar13 + 0xc) = uVar8 >> 10;
            uVar14 = __list_add_valid(pppuVar4,ppppuVar16,pppuVar19);
            if ((uVar14 & 1) == 0) {
                uVar15 = 0;
            }
            else {
                uVar15 = 0;
                pppuVar19[1] = pppuVar4;
                piVar13[4] = pppuVar19;
                piVar13[5] = ppppuVar16;
                *ppppuVar16 = pppuVar4;
            }
        }
        return uVar15;
    }
    return 0;
}


// ===== obj.entry_mem_statis @ 0x080021e0 (size 16) =====

ulong obj.entry_mem_statis(int64_t arg1)

{
    int *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t *piVar5;
    uint *puVar6;
    uint *puVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong uVar15;
    int64_t *piVar16;
    ulong *puVar17;
    ulong *extraout_x18;
    ulong *puVar18;
    int64_t iVar19;
    ulong *puStack0000000000000008;
    ulong *puStack0000000000000010;
    int64_t iStack0000000000000018;
    
    iVar19 = sp_el0;
    iStack0000000000000018 = *(iVar19 + 0x5e0);
    puStack0000000000000008 = &stack0x00000008;
    puStack0000000000000010 = &stack0x00000008;
    android_debug_for_each_module(sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt,&stack0x00000008);
    list_sort(0,&stack0x00000008,sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt);
    if (&stack0x00000008 == puStack0000000000000008) {
        piVar16 = NULL;
    }
    else {
        piVar16 = NULL;
        puVar17 = puStack0000000000000008;
        do {
            piVar1 = puVar17 + -3;
            puVar17 = *puVar17;
            piVar16 = *piVar1 + piVar16;
        } while (&stack0x00000008 != puVar17);
    }
    seq_printf(arg1,"[KernelModuleTotal] size %u KB\n\n");
    if (&stack0x00000008 != puStack0000000000000008) {
        puVar17 = puStack0000000000000008;
        do {
            puVar2 = puVar17 + -1;
            puVar3 = puVar17 + -3;
            puVar6 = puVar17 + -0x14;
            puVar4 = puVar17 + -2;
            puVar7 = puVar17 + -0xc;
            puVar18 = puVar17 + -4;
            piVar16 = *puVar18;
            puVar17 = *puVar17;
            seq_printf(arg1,
                       "[KernelModule] %s: size %u KB | text %u KB, rodata %u KB, ro_after_init %u KB, rwdata %u KB\n",
                       piVar16,*puVar3,*puVar6,*puVar4,*puVar7,*puVar2);
            kfree(puVar18);
        } while (&stack0x00000008 != puVar17);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != iStack0000000000000018) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.get_module_size;
        iVar19 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar19 = 0x30;
        }
        piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xa20,0x30);
        if (piVar13 == NULL) {
            uVar15 = 0xfffffff4;
        }
        else {
            uVar8 = *(iVar12 + 0x174);
            *piVar13 = iVar12;
            iVar9 = *(iVar12 + 0x178);
            iVar10 = *(iVar12 + 0x17c);
            uVar11 = *(iVar12 + 0x170);
            piVar5 = piVar13 + 4;
            iVar19 = *piVar16;
            *(piVar13 + 2) = iVar9 - uVar8 >> 10;
            *(piVar13 + 0x14) = iVar10 - iVar9 >> 10;
            *(piVar13 + 3) = uVar11 - iVar10 >> 10;
            *(piVar13 + 1) = uVar11 >> 10;
            *(piVar13 + 0xc) = uVar8 >> 10;
            uVar14 = __list_add_valid(piVar5,piVar16,iVar19);
            if ((uVar14 & 1) == 0) {
                uVar15 = 0;
            }
            else {
                uVar15 = 0;
                *(iVar19 + 8) = piVar5;
                piVar13[4] = iVar19;
                piVar13[5] = piVar16;
                *piVar16 = piVar5;
            }
        }
        return uVar15;
    }
    return 0;
}


// ===== obj.entry_set_panic @ 0x080021f0 (size 264) =====

ulong obj.entry_set_panic(int64_t arg1)

{
    int *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t *piVar5;
    uint *puVar6;
    uint *puVar7;
    uint32_t uVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong uVar15;
    int64_t *piVar16;
    ulong *puVar17;
    ulong *extraout_x18;
    ulong *puVar18;
    int64_t iVar19;
    int64_t unaff_x29;
    ulong *puStack0000000000000008;
    ulong *puStack0000000000000010;
    
    iVar19 = sp_el0;
    *(unaff_x29 + -8) = *(iVar19 + 0x5e0);
    puStack0000000000000008 = &stack0x00000008;
    puStack0000000000000010 = &stack0x00000008;
    android_debug_for_each_module(sym.get_module_size.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt,&stack0x00000008);
    list_sort(0,&stack0x00000008,sym.sizecmp.1f6fc36f3bb8e8380455f234b458b8ba.cfi_jt);
    if (&stack0x00000008 == puStack0000000000000008) {
        piVar16 = NULL;
    }
    else {
        piVar16 = NULL;
        puVar17 = puStack0000000000000008;
        do {
            piVar1 = puVar17 + -3;
            puVar17 = *puVar17;
            piVar16 = *piVar1 + piVar16;
        } while (&stack0x00000008 != puVar17);
    }
    seq_printf(arg1,"[KernelModuleTotal] size %u KB\n\n");
    if (&stack0x00000008 != puStack0000000000000008) {
        puVar17 = puStack0000000000000008;
        do {
            puVar2 = puVar17 + -1;
            puVar3 = puVar17 + -3;
            puVar6 = puVar17 + -0x14;
            puVar4 = puVar17 + -2;
            puVar7 = puVar17 + -0xc;
            puVar18 = puVar17 + -4;
            piVar16 = *puVar18;
            puVar17 = *puVar17;
            seq_printf(arg1,
                       "[KernelModule] %s: size %u KB | text %u KB, rodata %u KB, ro_after_init %u KB, rwdata %u KB\n",
                       piVar16,*puVar3,*puVar6,*puVar4,*puVar7,*puVar2);
            kfree(puVar18);
        } while (&stack0x00000008 != puVar17);
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) != *(unaff_x29 + -8)) {
        iVar12 = __stack_chk_fail();
        *extraout_x18 = sym.get_module_size;
        iVar19 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar19 = 0x30;
        }
        piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar19),0xa20,0x30);
        if (piVar13 == NULL) {
            uVar15 = 0xfffffff4;
        }
        else {
            uVar8 = *(iVar12 + 0x174);
            *piVar13 = iVar12;
            iVar9 = *(iVar12 + 0x178);
            iVar10 = *(iVar12 + 0x17c);
            uVar11 = *(iVar12 + 0x170);
            piVar5 = piVar13 + 4;
            iVar19 = *piVar16;
            *(piVar13 + 2) = iVar9 - uVar8 >> 10;
            *(piVar13 + 0x14) = iVar10 - iVar9 >> 10;
            *(piVar13 + 3) = uVar11 - iVar10 >> 10;
            *(piVar13 + 1) = uVar11 >> 10;
            *(piVar13 + 0xc) = uVar8 >> 10;
            uVar14 = __list_add_valid(piVar5,piVar16,iVar19);
            if ((uVar14 & 1) == 0) {
                uVar15 = 0;
            }
            else {
                uVar15 = 0;
                *(iVar19 + 8) = piVar5;
                piVar13[4] = iVar19;
                piVar13[5] = piVar16;
                *piVar16 = piVar5;
            }
        }
        return uVar15;
    }
    return 0;
}


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
    *0x8002000 = proc_mkdir("mem_statis",arg1);
    if (*0x8002000 == 0) {
        _printk(0x80006a7,"mem_statis_init");
        uVar1 = 0xfffffff4;
    }
    else {
        proc_create_single_data("reserved_memory_stat",0,*0x8002000,sym.reserved_memory_stat_show.cfi_jt,0);
        proc_create_single_data("ko_memory_stat",0,*0x8002000,sym.ko_memory_stat_show.cfi_jt,0);
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
        remove_proc_entry("reserved_memory_stat");
    }
    if (arg1 != 0) {
        remove_proc_entry("mem_statis",arg1);
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
    *0x8002000 = proc_mkdir("panic_trigger",arg1);
    if (*0x8002000 == 0) {
        _printk(0x80007b6,"panic_trigger_init");
    }
    else {
        iVar1 = proc_create("panic_on_reboot",0x666,*0x8002000,obj.reboot_panic_ops);
        if (iVar1 == 0) {
            uVar2 = 0x8000604;
            uVar3 = 0x6c;
        }
        else {
            iVar1 = proc_create("panic_on_shutdown",0x666,*0x8002000,obj.shutdown_panic_ops);
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
        _printk(uVar2,"panic_trigger_init",uVar3);
    }
    return 0xfffffff4;
}


// ===== sym.panic_trigger_exit @ 0x080025ec (size 108) =====

void sym.panic_trigger_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    remove_proc_entry("panic_on_shutdown",*0x8002000);
    remove_proc_entry("panic_on_reboot",*0x8002000);
    remove_proc_entry("panic_trigger",arg1);
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
            panic("Panic trigger come from SYS_RESTART\n");
        }
        else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
            return 0;
        }
        panic("Panic trigger come from SYS_POWER_OFF\n");
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
        panic("Panic trigger come from SYS_RESTART\n");
    }
    else if ((extraout_x1 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("Panic trigger come from SYS_POWER_OFF\n");
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
        panic("Panic trigger come from SYS_RESTART\n");
    }
    else if ((arg2 != 3) || (*0x8002000 == 0)) {
        return 0;
    }
    panic("Panic trigger come from SYS_POWER_OFF\n");
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
    _segment.ehdr = proc_mkdir("debug_ext",0);
    if (_segment.ehdr == 0) {
        _printk(0x800078d,"debug_ext_init");
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.init_dma_buf_debug(_segment.ehdr);
        if (iVar1 == 0) {
            iVar1 = sym.mem_statis_init(_segment.ehdr);
            if (iVar1 == 0) {
                iVar1 = sym.panic_trigger_init(_segment.ehdr);
                if (iVar1 == 0) {
                    _printk(0x800057b,"debug_ext_init");
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
        _printk(uVar2,"debug_ext_init",uVar3);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08002c54 (size 88) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.dma_buf_debug_clean(_segment.ehdr);
    sym.mem_statis_exit(_segment.ehdr);
    sym.panic_trigger_exit(_segment.ehdr);
    remove_proc_entry("debug_ext",0);
    _segment.ehdr = 0;
    return;
}

