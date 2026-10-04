// decompiled from qcom_cpuss_sleep_stats by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 416) =====

//WARNING: Switch with 1 destination removed at 0x08002094

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x3557318fb8d07b71) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x80011c8 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08002054;
            }
            pcVar2 = sym.qcom_cpuss_sleep_stats_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001184:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002054;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08002054;
            pcVar2 = sym.seq_read.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.qcom_cpuss_stats_reset_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08002054;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.qcom_cpuss_all_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x08001184;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002054;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002054:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020a8);
    (*pcVar1)();
}


// ===== sym.seq_lseek.cfi_jt @ 0x080011a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011b8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x080011c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.single_release.cfi_jt @ 0x080011c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_cpuss_all_stats_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d0 (size 8) =====

void sym.qcom_cpuss_all_stats_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_cpuss_all_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_cpuss_sleep_stats_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

void sym.qcom_cpuss_sleep_stats_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.qcom_cpuss_sleep_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.qcom_cpuss_all_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.qcom_cpuss_all_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(param_1 + 0x80);
    for (piVar3 = *piVar2; piVar2 != piVar3; piVar3 = *piVar3) {
        uVar1 = sym.readq_relaxed(piVar3[-1]);
        seq_printf(param_1,"%s: %ld\n",piVar3 + -4,uVar1);
    }
    return 0;
}


// ===== sym.qcom_cpuss_sleep_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.qcom_cpuss_sleep_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readq_relaxed(*(param_1 + 0x80));
    seq_printf(param_1,"%ld\n",uVar1);
    return 0;
}


// ===== sym.qcom_cpuss_sleep_stats_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.qcom_cpuss_sleep_stats_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(param_1 + 0xa8));
    return 0;
}


// ===== sym.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011f8 (size 8) =====

//WARNING: Type propagation algorithm not settling

ulong sym.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    int64_t *arg1;
    int64_t iVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int *piVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x21;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    char *pcVar20;
    int64_t *piVar21;
    ulong unaff_x30;
    uint32_t uStack_94;
    uint32_t uStack_90;
    ushort uStack_8c;
    ulong uStack_88;
    unkbyte6 Stack_80;
    ushort uStack_7a;
    unkbyte6 Stack_78;
    ushort uStack_72;
    uchar uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    arg1 = devm_kmalloc(param_1 + 0x10,0x150,0xdc0);
    if (arg1 == NULL) {
code_r0x0800192c:
        uVar11 = 0xfffffff4;
        goto code_r0x08001930;
    }
    piVar1 = arg1 + 0x18;
    arg1[0x18] = piVar1;
    arg1[0x19] = piVar1;
    iVar9 = debugfs_create_dir(0x80001b7,0);
    uVar17 = 0;
    *arg1 = param_1;
    arg1[0x1a] = iVar9;
    do {
        Stack_78 = 0;
        uStack_88 = 0;
        Stack_80 = 0;
        uStack_7a = 0;
        snprintf(&uStack_88,0x16,"seq_lpm_cntr_cfg_cpu%u",uVar17 & 0xffffffff);
        piVar10 = platform_get_resource_byname(param_1,0x200,&uStack_88);
        if (piVar10 != NULL) {
            arg1[uVar17 + 2] = *piVar10;
            *(arg1 + uVar17 * 4 + 0x50) = (piVar10[1] - *piVar10) + 1;
        }
        uVar17 = uVar17 + 1;
    } while (uVar17 != 8);
    piVar10 = platform_get_resource_byname(param_1,0x200,"apss_seq_mem_base");
    if (piVar10 != NULL) {
        arg1[0xf] = *piVar10;
        *(arg1 + 0x10) = (piVar10[1] - *piVar10) + 1;
        piVar10 = platform_get_resource_byname(param_1,0x200,"l3_seq_lpm_cntr_cfg");
        if (piVar10 != NULL) {
            piVar2 = arg1 + 1;
            arg1[0x11] = *piVar10;
            uVar11 = *(param_1 + 0x300);
            *(arg1 + 0x12) = (piVar10[1] - *piVar10) + 1;
            of_property_read_variable_u32_array(uVar11,"num-cpus",piVar2,1,0);
            if (0xfffffff7 < arg1[1] - 9U) {
                iVar12 = device_get_match_data(param_1 + 0x10);
                arg1[0x13] = iVar12;
                if (iVar12 == 0) goto code_r0x08001804;
                ___cpu_possible_mask = unaff_x21;
                uVar17 = cpumask_next(seq_lseek,0xffffffff);
                uVar6 = uVar17;
                while (uVar6 < unaff_x21) {
                    if (7 < uVar17) goto code_r0x08001a18;
                    *(arg1 + (uVar17 & 0xffffffff) + 0x70) = 1;
                    uVar17 = cpumask_next(uVar17,__cpu_possible_mask);
                    uVar6 = uVar17;
                }
                iVar7 = *piVar2;
                uStack_94 = 0;
                if (0 < iVar7) {
                    uVar17 = 0;
                    do {
                        if (uVar17 == 8) {
code_r0x08001a18:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x8001a1c);
                            (*pcVar4)();
                        }
                        if (*(arg1 + uVar17 + 0x70) != '\0') {
                            iVar7 = qcom_scm_io_readl(arg1[uVar17 + 2],&uStack_94);
                            if (iVar7 != 0) goto code_r0x08001390;
                            uVar16 = uStack_94;
                            uStack_8c = 0;
                            iVar18 = *arg1;
                            uStack_90 = 0;
                            uStack_70 = 0;
                            Stack_80 = 0;
                            uStack_7a = 0;
                            Stack_78 = 0;
                            uStack_72 = 0;
                            uStack_88 = 0;
                            snprintf(&uStack_90,6,"pcpu%u",uVar17 & 0xffffffff);
                            iVar12 = debugfs_create_dir(&uStack_90,arg1[0x1a]);
                            piVar10 = arg1 + uVar17 + 0x1b;
                            *piVar10 = iVar12;
                            iVar12 = devm_ioremap(iVar18 + 0x10,arg1[0xf],arg1[0x10]);
                            if (iVar12 == 0) goto code_r0x0800192c;
                            uVar19 = 0;
                            iVar7 = uVar17 * 8;
                            do {
                                uVar14 = 1L << (uVar19 & 0x3f);
                                if ((uVar14 & uVar16) != 0) {
                                    uVar6 = uVar14 & 0xff;
                                    if (7 < uVar6 - 1) goto code_r0x08001a04;
                                    piVar15 = arg1[0x13];
                                    switch(uVar6) {
                                    case 1:
                                        break;
                                    case 2:
                                        piVar15 = piVar15 + 1;
                                        break;
                                    default:
                                        goto code_r0x08001a04;
                                    case 4:
                                        piVar15 = piVar15 + 2;
                                        break;
                                    case 8:
                                        piVar15 = piVar15 + 3;
                                    }
                                    uVar6 = *piVar15 + iVar7;
                                    if (uVar6 == 0xffffffea) goto code_r0x08001390;
                                    uVar3 = (1 << (uVar19 & 0x1f)) - 1;
                                    if (((uVar3 & 0xff) < 8) && ((0x8bU >> (uVar3 & 0x1f) & 1) != 0)) {
                                        uVar11 = *(uVar3 * 8 + 0x80008d0);
                                        iVar18 = iVar12 + uVar6;
                                        debugfs_create_file(uVar11,0x124,*piVar10,iVar18,
                                                            obj.qcom_cpuss_sleep_stats_fops);
                                        snprintf(&uStack_88,0x19,"pcpu%u: %s",uVar17,uVar11);
                                        iVar13 = devm_kmalloc(*arg1 + 0x10,0x30,0xdc0);
                                        if (iVar13 == 0) goto code_r0x0800192c;
                                        *(iVar13 + 0x18) = iVar18;
                                        strscpy(iVar13,&uStack_88,0x14);
                                        piVar21 = arg1[0x19];
                                        iVar18 = iVar13 + 0x20;
                                        uVar14 = __list_add_valid(iVar18,piVar21,piVar1);
                                        if ((uVar14 & 1) != 0) {
                                            arg1[0x19] = iVar18;
                                            *(iVar13 + 0x20) = piVar1;
                                            *(iVar13 + 0x28) = piVar21;
                                            *piVar21 = iVar18;
                                        }
                                    }
                                }
                                uVar19 = uVar19 + 1;
                            } while (uVar19 != 4);
                            iVar8 = qcom_scm_io_readl(arg1[0xf] + *(arg1[0x13] + 0x10) + uVar17 * 4,&uStack_94);
                            if (iVar8 != 0) goto code_r0x08001390;
                            uStack_70 = 0;
                            Stack_80 = 0;
                            uStack_7a = 0;
                            Stack_78 = 0;
                            uStack_72 = 0;
                            uStack_88 = 0;
                            uVar16 = uStack_94;
                            iVar12 = devm_ioremap(*arg1 + 0x10,arg1[0xf],arg1[0x10]);
                            if (iVar12 == 0) goto code_r0x0800192c;
                            uVar19 = 0;
                            do {
                                uVar14 = 1L << (uVar19 & 0x3f);
                                if ((uVar14 & uVar16) != 0) {
                                    uVar6 = uVar14 & 0xff;
                                    if (uVar6 == 1) {
                                        iVar18 = 6;
                                    }
                                    else if (uVar6 == 0x10) {
                                        iVar18 = 8;
                                    }
                                    else {
                                        if (uVar6 != 4) goto code_r0x08001a04;
                                        iVar18 = 7;
                                    }
                                    uVar6 = *(arg1[0x13] + iVar18 * 4) + iVar7;
                                    if (uVar6 == 0xffffffea) goto code_r0x08001390;
                                    iVar8 = 1 << (uVar19 & 0x1f);
                                    if (iVar8 == 1) {
                                        pcVar20 = "C2_residency";
                                    }
                                    else if (iVar8 == 0x10) {
                                        pcVar20 = "C4_residency";
                                    }
                                    else {
                                        if (iVar8 != 4) goto code_r0x08001648;
                                        pcVar20 = "C3_residency";
                                    }
                                    iVar18 = iVar12 + uVar6;
                                    debugfs_create_file(pcVar20,0x124,*piVar10,iVar18,
                                                        obj.qcom_cpuss_sleep_stats_fops);
                                    snprintf(&uStack_88,0x19,"pcpu%u: %s",uVar17,pcVar20);
                                    iVar13 = devm_kmalloc(*arg1 + 0x10,0x30,0xdc0);
                                    if (iVar13 == 0) goto code_r0x0800192c;
                                    *(iVar13 + 0x18) = iVar18;
                                    strscpy(iVar13,&uStack_88,0x14);
                                    piVar21 = arg1[0x19];
                                    iVar18 = iVar13 + 0x20;
                                    uVar14 = __list_add_valid(iVar18,piVar21,piVar1);
                                    if ((uVar14 & 1) != 0) {
                                        arg1[0x19] = iVar18;
                                        *(iVar13 + 0x20) = piVar1;
                                        *(iVar13 + 0x28) = piVar21;
                                        *piVar21 = iVar18;
                                    }
                                }
code_r0x08001648:
                                bVar5 = uVar19 < 3;
                                uVar19 = uVar19 + 2;
                            } while (bVar5);
                            iVar7 = *piVar2;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar17 < iVar7);
                }
                iVar7 = qcom_scm_io_readl(arg1[0x11],&uStack_94);
                if (iVar7 == 0) {
                    uVar17 = uStack_94;
                    iVar18 = *arg1;
                    iVar12 = debugfs_create_dir(0x8000211,arg1[0x1a]);
                    arg1[0x23] = iVar12;
                    if ((iVar12 == 0) || (iVar12 = devm_ioremap(iVar18 + 0x10,arg1[0xf],arg1[0x10]), iVar12 == 0))
                    goto code_r0x0800192c;
                    uVar16 = 0;
                    do {
                        uVar19 = 1L << (uVar16 & 0x3f);
                        if ((uVar19 & uVar17) != 0) {
                            uVar6 = uVar19 & 0xff;
                            if (7 < uVar6 - 1) goto code_r0x08001a04;
                            piVar15 = arg1[0x13];
                            switch(uVar6) {
                            case 1:
                                break;
                            case 2:
                                piVar15 = piVar15 + 1;
                                break;
                            default:
                                goto code_r0x08001a04;
                            case 4:
                                piVar15 = piVar15 + 2;
                                break;
                            case 8:
                                piVar15 = piVar15 + 3;
                            }
                            uVar6 = *piVar15 + arg1[1] * 8;
                            if (uVar6 == 0xffffffea) goto code_r0x08001390;
                            uVar3 = (1 << (uVar16 & 0x1f)) - 1;
                            if (((uVar3 & 0xff) < 8) && ((0x8bU >> (uVar3 & 0x1f) & 1) != 0)) {
                                uVar11 = *(uVar3 * 8 + 0x8000910);
                                iVar18 = iVar12 + uVar6;
                                debugfs_create_file(uVar11,0x124,arg1[0x23],iVar18,obj.qcom_cpuss_sleep_stats_fops);
                                iVar13 = devm_kmalloc(*arg1 + 0x10,0x30,0xdc0);
                                if (iVar13 == 0) goto code_r0x0800192c;
                                *(iVar13 + 0x18) = iVar18;
                                strscpy(iVar13,uVar11,0x14);
                                piVar10 = arg1[0x19];
                                iVar18 = iVar13 + 0x20;
                                uVar19 = __list_add_valid(iVar18,piVar10,piVar1);
                                if ((uVar19 & 1) != 0) {
                                    arg1[0x19] = iVar18;
                                    *(iVar13 + 0x20) = piVar1;
                                    *(iVar13 + 0x28) = piVar10;
                                    *piVar10 = iVar18;
                                }
                            }
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 != 4);
                    iVar7 = qcom_scm_io_readl(arg1[0xf] + *(arg1[0x13] + 0x14),&uStack_94);
                    if (iVar7 == 0) {
                        uVar11 = sym.qcom_cpuss_sleep_stats_create_cl_residency_debugfs(arg1,uStack_94);
                        if (uVar11 == 0) {
                            debugfs_create_file("stats",0x124,iVar9,piVar1,obj.qcom_cpuss_all_stats_fops);
                            __mutex_init(arg1 + 0x24,"&t_info->stats_reset_lock",
                                         obj.qcom_cpuss_sleep_stats_probe.__key);
                            debugfs_create_file("reset",0x90,iVar9,arg1,obj.qcom_cpuss_stats_reset_fops);
                            uVar11 = 0;
                            *(param_1 + 0xa8) = iVar9;
                        }
                        goto code_r0x08001930;
                    }
                }
            }
code_r0x08001390:
            uVar11 = 0xffffffea;
            goto code_r0x08001930;
        }
    }
code_r0x08001804:
    uVar11 = 0xffffffed;
code_r0x08001930:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    iVar9 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.qcom_cpuss_sleep_stats_remove;
    debugfs_remove(*(iVar9 + 0xa8));
    return 0;
code_r0x08001a04:
    _printk(0x80002a6);
    uVar11 = 0xffffffea;
    goto code_r0x08001930;
}


// ===== sym.qcom_cpuss_stats_reset_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001200 (size 8) =====

uchar * sym.qcom_cpuss_stats_reset_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int16_t aiStack_74 [2];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    aiStack_74[0] = 0;
    iVar8 = *(*(param_1 + 0x20) + 0x2d8);
    uVar3 = *(iVar8 + 8);
    iVar5 = simple_write_to_buffer(aiStack_74,1,&uStack_70,param_2,param_3 + -1);
    if ((0 < iVar5) && (aiStack_74[0] == 0x31)) {
        iVar1 = iVar8 + 0x120;
        mutex_lock(iVar1);
        if (0 < uVar3) {
            uVar9 = 0;
            iVar10 = -0x20;
            do {
                if (iVar10 == 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x800204c);
                    (*pcVar4)();
                }
                if (*(iVar8 + 0x70 + uVar9) != '\0') {
                    uVar7 = *(iVar8 + 0x70 + uVar9 * 8 + -0x60);
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar5 = qcom_scm_io_readl(uVar7,&uStack_70);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 | 0xf0;
                    iVar5 = qcom_scm_io_writel(uVar7);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffffffffff0f;
                    iVar5 = qcom_scm_io_writel(uVar7);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar2 = iVar10 + *(iVar8 + 0x78) + *(*(iVar8 + 0x98) + 0x10) + 0x20;
                    iVar5 = qcom_scm_io_readl(iVar2,&uStack_70);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 | 0x2a;
                    iVar5 = qcom_scm_io_writel(iVar2);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffffffffffd5;
                    iVar5 = qcom_scm_io_writel(iVar2);
                    if (iVar5 != 0) goto code_r0x08002030;
                }
                uVar9 = uVar9 + 1;
                iVar10 = iVar10 + 4;
            } while (uVar3 != uVar9);
        }
        uVar7 = *(iVar8 + 0x88);
        uStack_70 = uStack_70 & 0xffffffff00000000;
        iVar5 = qcom_scm_io_readl(uVar7,&uStack_70);
        if (iVar5 == 0) {
            uStack_70 = uStack_70 | 0xf0;
            iVar5 = qcom_scm_io_writel(uVar7);
            if (iVar5 == 0) {
                uStack_70 = uStack_70 & 0xffffffffffffff0f;
                iVar5 = qcom_scm_io_writel(uVar7);
                if (iVar5 == 0) {
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar8 = *(iVar8 + 0x78) + *(*(iVar8 + 0x98) + 0x14);
                    iVar5 = qcom_scm_io_readl(iVar8,&uStack_70);
                    if (iVar5 == 0) {
                        uStack_70 = uStack_70 | 10;
                        iVar5 = qcom_scm_io_writel(iVar8);
                        if (iVar5 == 0) {
                            uStack_70 = uStack_70 & 0xfffffffffffffff5;
                            iVar5 = qcom_scm_io_writel(iVar8);
                            if (iVar5 == 0) {
                                mutex_unlock(iVar1);
                                goto code_r0x08001e4c;
                            }
                        }
                    }
                }
            }
        }
code_r0x08002030:
        _printk(0x80002b6);
        mutex_unlock(iVar1);
    }
    param_3 = 0xffffffffffffffea;
code_r0x08001e4c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        puVar6 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar11._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x80020a8);
        (*pcVar4)();
    }
    return param_3;
}


// ===== sym.qcom_cpuss_sleep_stats_probe @ 0x08001208 (size 2072) =====

//WARNING: Type propagation algorithm not settling

ulong sym.qcom_cpuss_sleep_stats_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    int64_t *arg1_00;
    int64_t iVar9;
    int64_t *piVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    int *piVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x21;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    char *pcVar20;
    int64_t *piVar21;
    ulong unaff_x30;
    uint32_t uStack_94;
    uint32_t uStack_90;
    ushort uStack_8c;
    ulong uStack_88;
    unkbyte6 Stack_80;
    ushort uStack_7a;
    unkbyte6 Stack_78;
    ushort uStack_72;
    uchar uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    arg1_00 = devm_kmalloc(arg1 + 0x10,0x150,0xdc0);
    if (arg1_00 == NULL) {
code_r0x0800192c:
        uVar11 = 0xfffffff4;
        goto code_r0x08001930;
    }
    piVar1 = arg1_00 + 0x18;
    arg1_00[0x18] = piVar1;
    arg1_00[0x19] = piVar1;
    iVar9 = debugfs_create_dir(0x80001b7,0);
    uVar17 = 0;
    *arg1_00 = arg1;
    arg1_00[0x1a] = iVar9;
    do {
        Stack_78 = 0;
        uStack_88 = 0;
        Stack_80 = 0;
        uStack_7a = 0;
        snprintf(&uStack_88,0x16,"seq_lpm_cntr_cfg_cpu%u",uVar17 & 0xffffffff);
        piVar10 = platform_get_resource_byname(arg1,0x200,&uStack_88);
        if (piVar10 != NULL) {
            arg1_00[uVar17 + 2] = *piVar10;
            *(arg1_00 + uVar17 * 4 + 0x50) = (piVar10[1] - *piVar10) + 1;
        }
        uVar17 = uVar17 + 1;
    } while (uVar17 != 8);
    piVar10 = platform_get_resource_byname(arg1,0x200,"apss_seq_mem_base");
    if (piVar10 != NULL) {
        arg1_00[0xf] = *piVar10;
        *(arg1_00 + 0x10) = (piVar10[1] - *piVar10) + 1;
        piVar10 = platform_get_resource_byname(arg1,0x200,"l3_seq_lpm_cntr_cfg");
        if (piVar10 != NULL) {
            piVar2 = arg1_00 + 1;
            arg1_00[0x11] = *piVar10;
            uVar11 = *(arg1 + 0x300);
            *(arg1_00 + 0x12) = (piVar10[1] - *piVar10) + 1;
            of_property_read_variable_u32_array(uVar11,"num-cpus",piVar2,1,0);
            if (0xfffffff7 < arg1_00[1] - 9U) {
                iVar12 = device_get_match_data(arg1 + 0x10);
                arg1_00[0x13] = iVar12;
                if (iVar12 == 0) goto code_r0x08001804;
                ___cpu_possible_mask = unaff_x21;
                uVar17 = cpumask_next(seq_lseek,0xffffffff);
                uVar6 = uVar17;
                while (uVar6 < unaff_x21) {
                    if (7 < uVar17) goto code_r0x08001a18;
                    *(arg1_00 + (uVar17 & 0xffffffff) + 0x70) = 1;
                    uVar17 = cpumask_next(uVar17,__cpu_possible_mask);
                    uVar6 = uVar17;
                }
                iVar7 = *piVar2;
                uStack_94 = 0;
                if (0 < iVar7) {
                    uVar17 = 0;
                    do {
                        if (uVar17 == 8) {
code_r0x08001a18:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x8001a1c);
                            (*pcVar4)();
                        }
                        if (*(arg1_00 + uVar17 + 0x70) != '\0') {
                            iVar7 = qcom_scm_io_readl(arg1_00[uVar17 + 2],&uStack_94);
                            if (iVar7 != 0) goto code_r0x08001390;
                            uVar16 = uStack_94;
                            uStack_8c = 0;
                            iVar18 = *arg1_00;
                            uStack_90 = 0;
                            uStack_70 = 0;
                            Stack_80 = 0;
                            uStack_7a = 0;
                            Stack_78 = 0;
                            uStack_72 = 0;
                            uStack_88 = 0;
                            snprintf(&uStack_90,6,"pcpu%u",uVar17 & 0xffffffff);
                            iVar12 = debugfs_create_dir(&uStack_90,arg1_00[0x1a]);
                            piVar10 = arg1_00 + uVar17 + 0x1b;
                            *piVar10 = iVar12;
                            iVar12 = devm_ioremap(iVar18 + 0x10,arg1_00[0xf],arg1_00[0x10]);
                            if (iVar12 == 0) goto code_r0x0800192c;
                            uVar19 = 0;
                            iVar7 = uVar17 * 8;
                            do {
                                uVar14 = 1L << (uVar19 & 0x3f);
                                if ((uVar14 & uVar16) != 0) {
                                    uVar6 = uVar14 & 0xff;
                                    if (7 < uVar6 - 1) goto code_r0x08001a04;
                                    piVar15 = arg1_00[0x13];
    //switch table (7 cases) at 0x8000188
                                    switch(uVar6) {
                                    case 1:
                                        break;
                                    case 2:
                                        piVar15 = piVar15 + 1;
                                        break;
                                    default:
                                        goto code_r0x08001a04;
                                    case 4:
                                        piVar15 = piVar15 + 2;
                                        break;
                                    case 8:
                                        piVar15 = piVar15 + 3;
                                    }
                                    uVar6 = *piVar15 + iVar7;
                                    if (uVar6 == 0xffffffea) goto code_r0x08001390;
                                    uVar3 = (1 << (uVar19 & 0x1f)) - 1;
                                    if (((uVar3 & 0xff) < 8) && ((0x8bU >> (uVar3 & 0x1f) & 1) != 0)) {
                                        uVar11 = *(uVar3 * 8 + 0x80008d0);
                                        iVar18 = iVar12 + uVar6;
                                        debugfs_create_file(uVar11,0x124,*piVar10,iVar18,
                                                            obj.qcom_cpuss_sleep_stats_fops);
                                        snprintf(&uStack_88,0x19,"pcpu%u: %s",uVar17,uVar11);
                                        iVar13 = devm_kmalloc(*arg1_00 + 0x10,0x30,0xdc0);
                                        if (iVar13 == 0) goto code_r0x0800192c;
                                        *(iVar13 + 0x18) = iVar18;
                                        strscpy(iVar13,&uStack_88,0x14);
                                        piVar21 = arg1_00[0x19];
                                        iVar18 = iVar13 + 0x20;
                                        uVar14 = __list_add_valid(iVar18,piVar21,piVar1);
                                        if ((uVar14 & 1) != 0) {
                                            arg1_00[0x19] = iVar18;
                                            *(iVar13 + 0x20) = piVar1;
                                            *(iVar13 + 0x28) = piVar21;
                                            *piVar21 = iVar18;
                                        }
                                    }
                                }
                                uVar19 = uVar19 + 1;
                            } while (uVar19 != 4);
                            iVar8 = qcom_scm_io_readl(arg1_00[0xf] + *(arg1_00[0x13] + 0x10) + uVar17 * 4,&uStack_94);
                            if (iVar8 != 0) goto code_r0x08001390;
                            uStack_70 = 0;
                            Stack_80 = 0;
                            uStack_7a = 0;
                            Stack_78 = 0;
                            uStack_72 = 0;
                            uStack_88 = 0;
                            uVar16 = uStack_94;
                            iVar12 = devm_ioremap(*arg1_00 + 0x10,arg1_00[0xf],arg1_00[0x10]);
                            if (iVar12 == 0) goto code_r0x0800192c;
                            uVar19 = 0;
                            do {
                                uVar14 = 1L << (uVar19 & 0x3f);
                                if ((uVar14 & uVar16) != 0) {
                                    uVar6 = uVar14 & 0xff;
                                    if (uVar6 == 1) {
                                        iVar18 = 6;
                                    }
                                    else if (uVar6 == 0x10) {
                                        iVar18 = 8;
                                    }
                                    else {
                                        if (uVar6 != 4) goto code_r0x08001a04;
                                        iVar18 = 7;
                                    }
                                    uVar6 = *(arg1_00[0x13] + iVar18 * 4) + iVar7;
                                    if (uVar6 == 0xffffffea) goto code_r0x08001390;
                                    iVar8 = 1 << (uVar19 & 0x1f);
                                    if (iVar8 == 1) {
                                        pcVar20 = "C2_residency";
                                    }
                                    else if (iVar8 == 0x10) {
                                        pcVar20 = "C4_residency";
                                    }
                                    else {
                                        if (iVar8 != 4) goto code_r0x08001648;
                                        pcVar20 = "C3_residency";
                                    }
                                    iVar18 = iVar12 + uVar6;
                                    debugfs_create_file(pcVar20,0x124,*piVar10,iVar18,
                                                        obj.qcom_cpuss_sleep_stats_fops);
                                    snprintf(&uStack_88,0x19,"pcpu%u: %s",uVar17,pcVar20);
                                    iVar13 = devm_kmalloc(*arg1_00 + 0x10,0x30,0xdc0);
                                    if (iVar13 == 0) goto code_r0x0800192c;
                                    *(iVar13 + 0x18) = iVar18;
                                    strscpy(iVar13,&uStack_88,0x14);
                                    piVar21 = arg1_00[0x19];
                                    iVar18 = iVar13 + 0x20;
                                    uVar14 = __list_add_valid(iVar18,piVar21,piVar1);
                                    if ((uVar14 & 1) != 0) {
                                        arg1_00[0x19] = iVar18;
                                        *(iVar13 + 0x20) = piVar1;
                                        *(iVar13 + 0x28) = piVar21;
                                        *piVar21 = iVar18;
                                    }
                                }
code_r0x08001648:
                                bVar5 = uVar19 < 3;
                                uVar19 = uVar19 + 2;
                            } while (bVar5);
                            iVar7 = *piVar2;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar17 < iVar7);
                }
                iVar7 = qcom_scm_io_readl(arg1_00[0x11],&uStack_94);
                if (iVar7 == 0) {
                    uVar17 = uStack_94;
                    iVar18 = *arg1_00;
                    iVar12 = debugfs_create_dir(0x8000211,arg1_00[0x1a]);
                    arg1_00[0x23] = iVar12;
                    if ((iVar12 == 0) ||
                       (iVar12 = devm_ioremap(iVar18 + 0x10,arg1_00[0xf],arg1_00[0x10]), iVar12 == 0))
                    goto code_r0x0800192c;
                    uVar16 = 0;
                    do {
                        uVar19 = 1L << (uVar16 & 0x3f);
                        if ((uVar19 & uVar17) != 0) {
                            uVar6 = uVar19 & 0xff;
                            if (7 < uVar6 - 1) goto code_r0x08001a04;
                            piVar15 = arg1_00[0x13];
    //switch table (7 cases) at 0x8000198
                            switch(uVar6) {
                            case 1:
                                break;
                            case 2:
                                piVar15 = piVar15 + 1;
                                break;
                            default:
                                goto code_r0x08001a04;
                            case 4:
                                piVar15 = piVar15 + 2;
                                break;
                            case 8:
                                piVar15 = piVar15 + 3;
                            }
                            uVar6 = *piVar15 + arg1_00[1] * 8;
                            if (uVar6 == 0xffffffea) goto code_r0x08001390;
                            uVar3 = (1 << (uVar16 & 0x1f)) - 1;
                            if (((uVar3 & 0xff) < 8) && ((0x8bU >> (uVar3 & 0x1f) & 1) != 0)) {
                                uVar11 = *(uVar3 * 8 + 0x8000910);
                                iVar18 = iVar12 + uVar6;
                                debugfs_create_file(uVar11,0x124,arg1_00[0x23],iVar18,
                                                    obj.qcom_cpuss_sleep_stats_fops);
                                iVar13 = devm_kmalloc(*arg1_00 + 0x10,0x30,0xdc0);
                                if (iVar13 == 0) goto code_r0x0800192c;
                                *(iVar13 + 0x18) = iVar18;
                                strscpy(iVar13,uVar11,0x14);
                                piVar10 = arg1_00[0x19];
                                iVar18 = iVar13 + 0x20;
                                uVar19 = __list_add_valid(iVar18,piVar10,piVar1);
                                if ((uVar19 & 1) != 0) {
                                    arg1_00[0x19] = iVar18;
                                    *(iVar13 + 0x20) = piVar1;
                                    *(iVar13 + 0x28) = piVar10;
                                    *piVar10 = iVar18;
                                }
                            }
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 != 4);
                    iVar7 = qcom_scm_io_readl(arg1_00[0xf] + *(arg1_00[0x13] + 0x14),&uStack_94);
                    if (iVar7 == 0) {
                        uVar11 = sym.qcom_cpuss_sleep_stats_create_cl_residency_debugfs(arg1_00,uStack_94);
                        if (uVar11 == 0) {
                            debugfs_create_file("stats",0x124,iVar9,piVar1,obj.qcom_cpuss_all_stats_fops);
                            __mutex_init(arg1_00 + 0x24,"&t_info->stats_reset_lock",
                                         obj.qcom_cpuss_sleep_stats_probe.__key);
                            debugfs_create_file("reset",0x90,iVar9,arg1_00,obj.qcom_cpuss_stats_reset_fops);
                            uVar11 = 0;
                            *(arg1 + 0xa8) = iVar9;
                        }
                        goto code_r0x08001930;
                    }
                }
            }
code_r0x08001390:
            uVar11 = 0xffffffea;
            goto code_r0x08001930;
        }
    }
code_r0x08001804:
    uVar11 = 0xffffffed;
code_r0x08001930:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return uVar11;
    }
    iVar9 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.qcom_cpuss_sleep_stats_remove;
    debugfs_remove(*(iVar9 + 0xa8));
    return 0;
code_r0x08001a04:
    _printk(0x80002a6);
    uVar11 = 0xffffffea;
    goto code_r0x08001930;
}


// ===== sym.qcom_cpuss_sleep_stats_remove @ 0x08001a20 (size 44) =====

ulong sym.qcom_cpuss_sleep_stats_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(*(arg1 + 0xa8));
    return 0;
}


// ===== sym.qcom_cpuss_sleep_stats_create_cl_residency_debugfs @ 0x08001a4c (size 468) =====

ulong sym.qcom_cpuss_sleep_stats_create_cl_residency_debugfs(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg1 + 0xc0;
    iVar5 = *arg1;
    if ((arg2 & 1U) != 0) {
        uVar1 = *(*(arg1 + 0x98) + 0x18) + *(arg1 + 8) * 8;
        if (uVar1 == 0xffffffea) {
            return 0xffffffea;
        }
        iVar3 = devm_ioremap(iVar5 + 0x10,*(arg1 + 0x78) + uVar1,4);
        if (iVar3 == 0) {
            return 0xfffffff4;
        }
        debugfs_create_file("D2_residency",0x124,*(arg1 + 0x118),iVar3,obj.qcom_cpuss_sleep_stats_fops);
        iVar2 = devm_kmalloc(*arg1 + 0x10,0x30,0xdc0);
        if (iVar2 == 0) {
            return 0xfffffff4;
        }
        *(iVar2 + 0x18) = iVar3;
        strscpy(iVar2,"D2_residency",0x14);
        piVar7 = *(arg1 + 200);
        iVar3 = iVar2 + 0x20;
        uVar4 = __list_add_valid(iVar3,piVar7,iVar6);
        if ((uVar4 & 1) != 0) {
            *(arg1 + 200) = iVar3;
            *(iVar2 + 0x20) = iVar6;
            *(iVar2 + 0x28) = piVar7;
            *piVar7 = iVar3;
        }
    }
    if ((arg2 >> 2 & 1) == 0) {
        return 0;
    }
    uVar1 = *(*(arg1 + 0x98) + 0x20) + *(arg1 + 8) * 8;
    if (uVar1 != 0xffffffea) {
        iVar5 = devm_ioremap(iVar5 + 0x10,*(arg1 + 0x78) + uVar1,4);
        if (iVar5 != 0) {
            debugfs_create_file("D4_residency",0x124,*(arg1 + 0x118),iVar5,obj.qcom_cpuss_sleep_stats_fops);
            iVar3 = devm_kmalloc(*arg1 + 0x10,0x30,0xdc0);
            if (iVar3 != 0) {
                *(iVar3 + 0x18) = iVar5;
                strscpy(iVar3,"D4_residency",0x14);
                piVar7 = *(arg1 + 200);
                iVar5 = iVar3 + 0x20;
                uVar4 = __list_add_valid(iVar5,piVar7,iVar6);
                if ((uVar4 & 1) == 0) {
                    return 0;
                }
                *(arg1 + 200) = iVar5;
                *(iVar3 + 0x20) = iVar6;
                *(iVar3 + 0x28) = piVar7;
                *piVar7 = iVar5;
                return 0;
            }
        }
        return 0xfffffff4;
    }
    return 0xffffffea;
}


// ===== sym.qcom_cpuss_sleep_stats_open @ 0x08001c20 (size 56) =====

void sym.qcom_cpuss_sleep_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_cpuss_sleep_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_cpuss_sleep_stats_show @ 0x08001c58 (size 76) =====

ulong sym.qcom_cpuss_sleep_stats_show(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.readq_relaxed(*(arg1 + 0x80));
    seq_printf(arg1,"%ld\n",uVar1);
    return 0;
}


// ===== sym.readq_relaxed @ 0x08001ca4 (size 108) =====

ulong sym.readq_relaxed(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x40,arg1,0x8001ca8);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x40,arg1,0x8001cdc);
    return uVar1;
}


// ===== sym.qcom_cpuss_all_stats_open @ 0x08001d14 (size 56) =====

void sym.qcom_cpuss_all_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.qcom_cpuss_all_stats_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.qcom_cpuss_all_stats_show @ 0x08001d4c (size 132) =====

ulong sym.qcom_cpuss_all_stats_show(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *(arg1 + 0x80);
    for (piVar3 = *piVar2; piVar2 != piVar3; piVar3 = *piVar3) {
        uVar1 = sym.readq_relaxed(piVar3[-1]);
        seq_printf(arg1,"%s: %ld\n",piVar3 + -4,uVar1);
    }
    return 0;
}


// ===== sym.qcom_cpuss_stats_reset_write @ 0x08001dd0 (size 640) =====

uchar * sym.qcom_cpuss_stats_reset_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    uchar *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int16_t aiStack_74 [2];
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uStack_70 = 0;
    aiStack_74[0] = 0;
    iVar8 = *(*(arg1 + 0x20) + 0x2d8);
    uVar3 = *(iVar8 + 8);
    iVar5 = simple_write_to_buffer(aiStack_74,1,&uStack_70,arg2,arg3 + -1);
    if ((0 < iVar5) && (aiStack_74[0] == 0x31)) {
        iVar1 = iVar8 + 0x120;
        mutex_lock(iVar1);
        if (0 < uVar3) {
            uVar9 = 0;
            iVar10 = -0x20;
            do {
                if (iVar10 == 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x5512,0x800204c);
                    (*pcVar4)();
                }
                if (*(iVar8 + 0x70 + uVar9) != '\0') {
                    uVar7 = *(iVar8 + 0x70 + uVar9 * 8 + -0x60);
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar5 = qcom_scm_io_readl(uVar7,&uStack_70);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 | 0xf0;
                    iVar5 = qcom_scm_io_writel(uVar7);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffffffffff0f;
                    iVar5 = qcom_scm_io_writel(uVar7);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar2 = iVar10 + *(iVar8 + 0x78) + *(*(iVar8 + 0x98) + 0x10) + 0x20;
                    iVar5 = qcom_scm_io_readl(iVar2,&uStack_70);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 | 0x2a;
                    iVar5 = qcom_scm_io_writel(iVar2);
                    if (iVar5 != 0) goto code_r0x08002030;
                    uStack_70 = uStack_70 & 0xffffffffffffffd5;
                    iVar5 = qcom_scm_io_writel(iVar2);
                    if (iVar5 != 0) goto code_r0x08002030;
                }
                uVar9 = uVar9 + 1;
                iVar10 = iVar10 + 4;
            } while (uVar3 != uVar9);
        }
        uVar7 = *(iVar8 + 0x88);
        uStack_70 = uStack_70 & 0xffffffff00000000;
        iVar5 = qcom_scm_io_readl(uVar7,&uStack_70);
        if (iVar5 == 0) {
            uStack_70 = uStack_70 | 0xf0;
            iVar5 = qcom_scm_io_writel(uVar7);
            if (iVar5 == 0) {
                uStack_70 = uStack_70 & 0xffffffffffffff0f;
                iVar5 = qcom_scm_io_writel(uVar7);
                if (iVar5 == 0) {
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    iVar8 = *(iVar8 + 0x78) + *(*(iVar8 + 0x98) + 0x14);
                    iVar5 = qcom_scm_io_readl(iVar8,&uStack_70);
                    if (iVar5 == 0) {
                        uStack_70 = uStack_70 | 10;
                        iVar5 = qcom_scm_io_writel(iVar8);
                        if (iVar5 == 0) {
                            uStack_70 = uStack_70 & 0xfffffffffffffff5;
                            iVar5 = qcom_scm_io_writel(iVar8);
                            if (iVar5 == 0) {
                                mutex_unlock(iVar1);
                                goto code_r0x08001e4c;
                            }
                        }
                    }
                }
            }
        }
code_r0x08002030:
        _printk(0x80002b6);
        mutex_unlock(iVar1);
    }
    arg3 = -0x16;
code_r0x08001e4c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        puVar6 = auVar11._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar11._8_8_,0);
                break;
            default:
                return puVar6;
            }
        }
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5502,0x80020a8);
        (*pcVar4)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08002050 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002094

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080020b4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register
              (reloc.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080020e8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_cpuss_sleep_stats_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

