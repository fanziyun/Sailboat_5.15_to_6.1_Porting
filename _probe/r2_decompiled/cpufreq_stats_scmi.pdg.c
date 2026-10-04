// decompiled from cpufreq_stats_scmi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x08001a14

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x321969b888d4949e) {
        if (arg1 == -0x8dc801903aca538) {
            uVar2 = 0x8001140;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x8001128;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080019d4;
            uVar2 = 0x8001138;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        uVar2 = 0x8001130;
    }
    else if (arg1 == 0x4a7363fd219dda0c) {
        uVar2 = 0x8001118;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080019d4;
        uVar2 = 0x8001120;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080019d4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a28);
    (*pcVar1)();
}


// ===== sym.scmi_cpufreq_stats_probe.5b3787544e7efe510c5a8fa02f70b282.cfi_jt @ 0x08001118 (size 8) =====

uint64_t sym.scmi_cpufreq_stats_probe.5b3787544e7efe510c5a8fa02f70b282.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint *puVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar15;
    ulong uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if (param_1 == 0) {
        puVar8 = 0xffffffed;
        goto code_r0x08001694;
    }
    pcVar15 = *(*(param_1 + 0x3a0) + 0x10);
    __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar15,0x8000120);
    puVar8 = (*pcVar15)(param_1,0x84,reloc.scmi_cpufreq_stats_probe.5b3787544e7efe510c5a8fa02f70b282.cfi_jt);
    _segment.ehdr = puVar8;
    if (0xfffffffffffff000 < puVar8) goto code_r0x08001694;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    iStack_74 = 0;
    pcVar15 = *puVar8;
    puVar8 = *(param_1 + 0x3a0);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar15,0x8000140);
    uVar3 = (*pcVar15)(_segment.ehdr,&uStack_80);
    if (uVar3 != 0) {
        puVar8 = uVar3;
        _printk(0x80002b4,puVar8);
        goto code_r0x08001694;
    }
    if (iStack_74 == 0) {
        _printk(0x8000188);
code_r0x08001654:
        puVar8 = 0xffffffff;
    }
    else {
        iVar14 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar14 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x28);
        if (_segment.ehdr != NULL) {
            uVar9 = devm_ioremap(*puVar8,CONCAT44(uStack_78,uStack_7c),iStack_74);
            puVar12 = _segment.ehdr;
            _segment.ehdr[1] = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                iVar4 = sym.readl_relaxed(uVar9);
                cVar1 = sym.readl_relaxed(_segment.ehdr[1] + 4);
                uVar3 = sym.readl_relaxed(_segment.ehdr[1] + 8);
                if (iVar4 == 0x50455246) {
                    if (cVar1 == '\x01') {
                        uVar3 = uVar3 & 0xff;
                        if (uVar3 != 0) {
                            *(_segment.ehdr + 2) = uVar3;
                            puVar10 = __kmalloc(uVar3 << 4,0xdc0);
                            puVar12 = _segment.ehdr;
                            _segment.ehdr[3] = puVar10;
                            if (puVar10 != NULL) {
                                *puVar10 = 0;
                                *(puVar12[3] + 4) = 0;
                                *(_segment.ehdr[3] + 8) = 1;
                                *(_segment.ehdr[3] + 0xc) = 0;
                                if (uVar3 != 1) {
                                    iVar14 = 0;
                                    uVar9 = 1;
                                    do {
                                        *(_segment.ehdr[3] + iVar14 + 0x10) = 0;
                                        *(_segment.ehdr[3] + iVar14 + 0x14) = uVar9;
                                        *(_segment.ehdr[3] + iVar14 + 0x18) = 1;
                                        iVar11 = _segment.ehdr[3] + iVar14;
                                        iVar14 = iVar14 + 0x10;
                                        *(iVar11 + 0x1c) = uVar9;
                                        uVar9 = uVar9 + 1;
                                    } while (uVar3 != uVar9);
                                }
                                uVar16 = *puVar8;
                                uStack_70 = 0;
                                _segment.ehdr = debugfs_create_dir("cpufreq_stats",0);
                                if (_segment.ehdr == NULL) {
                                    _dev_err(uVar16,"Debugfs directory creation failed\n");
code_r0x080016e8:
                                    _printk(0x8000244);
                                    kfree(_segment.ehdr[3]);
                                    kfree(_segment.ehdr);
                                    puVar8 = 0xfffffffe;
                                    goto code_r0x08001694;
                                }
                                if (*(_segment.ehdr + 2) != 0) {
                                    uVar9 = 0;
                                    iVar14 = 8;
                                    do {
                                        snprintf(&uStack_70,8,"clkdom%d",uVar9 & 0xffffffff);
                                        iVar11 = debugfs_create_dir(&uStack_70,_segment.ehdr);
                                        if (iVar11 == 0) {
                                            _dev_err(uVar16,"Debugfs directory creation for %s failed\n",&uStack_70);
                                            goto code_r0x080016e8;
                                        }
                                        debugfs_create_file("usage",0x100,iVar11,_segment.ehdr[3] + iVar14 + -8,
                                                            obj.stats_ops);
                                        debugfs_create_file("time_in_state",0x100,iVar11,_segment.ehdr[3] + iVar14,
                                                            obj.stats_ops);
                                        uVar9 = uVar9 + 1;
                                        iVar14 = iVar14 + 0x10;
                                    } while (uVar9 < *(_segment.ehdr + 2));
                                }
                                uVar6 = uVar3;
                                if (uVar3 < 2) {
                                    uVar6 = 1;
                                }
                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + 0x10);
                                uVar5 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                uVar5 = uVar5 & 0xff;
                                if (1 < uVar3) {
                                    iVar11 = uVar6 - 1;
                                    iVar14 = 0x14;
                                    do {
                                        iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar14);
                                        uVar6 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                        iVar14 = iVar14 + 4;
                                        uVar5 = uVar5 + (uVar6 & 0xff) & 0xffff;
                                        iVar11 = iVar11 + -1;
                                    } while (iVar11 != 0);
                                }
                                iVar14 = __kmalloc((uVar5 + uVar3) * 4,0xdc0);
                                _segment.ehdr[4] = iVar14;
                                if (iVar14 != 0) {
                                    uVar9 = 0;
                                    while( true ) {
                                        iVar11 = uVar9 * 4;
                                        *(iVar14 + uVar9 * 4) = uVar3;
                                        if (uVar9 != 0) {
                                            iVar14 = 0x10;
                                            uVar17 = uVar9;
                                            do {
                                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar14);
                                                uVar6 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                                uVar17 = uVar17 - 1;
                                                iVar14 = iVar14 + 4;
                                                *(_segment.ehdr[4] + iVar11) =
                                                     *(_segment.ehdr[4] + iVar11) + (uVar6 & 0xff);
                                            } while (uVar17 != 0);
                                        }
                                        iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar11 + 0x10);
                                        uVar2 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                        if (uVar2 != 0) {
                                            uVar17 = 0;
                                            iVar14 = 0x10;
                                            do {
                                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar11 + 0x10);
                                                uVar7 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2) + iVar14);
                                                iVar14 = iVar14 + 0x18;
                                                iVar4 = uVar17;
                                                uVar17 = uVar17 + 1;
                                                *(_segment.ehdr[4] + (iVar4 + *(_segment.ehdr[4] + uVar9 * 4)) * 4) =
                                                     uVar7;
                                            } while (uVar2 != uVar17);
                                        }
                                        uVar9 = uVar9 + 1;
                                        if (uVar9 == uVar3) break;
                                        iVar14 = _segment.ehdr[4];
                                    }
                                    puVar8 = NULL;
                                    goto code_r0x08001694;
                                }
                                _printk(0x8000308);
                                kfree(_segment.ehdr[3]);
                                puVar12 = _segment.ehdr;
                            }
                            goto code_r0x0800168c;
                        }
                        uVar16 = 0x800036e;
                    }
                    else {
                        uVar16 = 0x8000349;
                    }
                    _printk(uVar16);
                }
                else {
                    _dev_err(*puVar8,"SCMI stats mem signature check failed\n");
                }
                kfree(_segment.ehdr);
                goto code_r0x08001654;
            }
code_r0x0800168c:
            kfree(puVar12);
        }
        puVar8 = 0xfffffff4;
    }
code_r0x08001694:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_68) {
        puVar13 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,puVar13,0x8001718);
        uVar3 = *puVar13;
        log_post_read_mmio(uVar3,0x20,puVar13,0x800174c);
        return uVar3;
    }
    return puVar8 & 0xffffffff;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_cpufreq_stats_drv);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_cpufreq_stats_drv,obj.__this_module,"cpufreq_stats_scmi");
    return;
}


// ===== sym.default_llseek.cfi_jt @ 0x08001130 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.stats_get.5b3787544e7efe510c5a8fa02f70b282.cfi_jt @ 0x08001138 (size 8) =====

int64_t sym.stats_get.5b3787544e7efe510c5a8fa02f70b282.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    int *piVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t *puVar17;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = *(param_1 + 0x18);
    piVar14 = *(param_1 + 0xd8);
    iVar3 = debugfs_file_get(uVar13);
    if (iVar3 == 0) {
        if (piVar14 == NULL) {
            iVar11 = -2;
        }
        else {
            uVar1 = *(piVar14 + 1);
            iVar11 = uVar1 * 4;
            iVar16 = *(_segment.ehdr + 8);
            iVar3 = sym.readl_relaxed(iVar16 + iVar11 + 0x10);
            iVar4 = sym.readl_relaxed(*(_segment.ehdr + 8) + iVar11 + 0x10);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + 8) + (iVar4 << 2));
            uVar12 = uVar2;
            if (uVar2 == 0) {
                iVar11 = 0;
            }
            else {
                puVar7 = __kmalloc(uVar12 << 3,0xdc0);
                if ((puVar7 == NULL) || (iVar8 = kmem_cache_alloc_trace(_default_llseek,0xdc0,0x1000), iVar8 == 0)) {
                    iVar11 = -0xc;
                }
                else {
                    uVar6 = 0;
                    iVar11 = 8;
                    if (*piVar14 != 0) {
                        iVar11 = (*piVar14 == 1) << 4;
                    }
                    do {
                        uVar5 = sym.readl_relaxed(*(_segment.ehdr + 8) + 0xc);
                        uVar15 = uVar12;
                        puVar17 = puVar7;
                        arg1 = iVar11 + (iVar3 << 2) + iVar16 + 0x14;
                        if ((uVar5 & 1) == 0) {
                            do {
                                uVar9 = sym.readl_relaxed(arg1 + -4);
                                iVar10 = sym.readl_relaxed(arg1);
                                uVar15 = uVar15 - 1;
                                *puVar17 = uVar9 & 0xffffffff | iVar10 << 0x20;
                                puVar17 = puVar17 + 1;
                                arg1 = arg1 + 0x18;
                            } while (uVar15 != 0);
                            uVar6 = sym.readl_relaxed(*(_segment.ehdr + 8) + 0xc);
                        }
                    } while (uVar5 != uVar6);
                    uVar15 = 0;
                    iVar11 = 0;
                    do {
                        iVar3 = scnprintf(iVar8 + iVar11,0x1000 - iVar11,"%u %llu\n",
                                          *(*(_segment.ehdr + 0x20) +
                                           (uVar15 + *(*(_segment.ehdr + 0x20) + uVar1 * 4)) * 4),puVar7[uVar15]);
                        uVar15 = uVar15 + 1;
                        iVar11 = iVar11 + iVar3;
                    } while (uVar12 != uVar15);
                    iVar11 = simple_read_from_buffer(param_2,param_3,param_4,iVar8,iVar11);
                    debugfs_file_put(uVar13);
                    kfree(puVar7);
                    kfree(iVar8);
                }
            }
        }
    }
    else {
        iVar11 = iVar3;
    }
    return iVar11;
}


// ===== sym.simple_open.cfi_jt @ 0x08001140 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.scmi_cpufreq_stats_probe @ 0x08001148 (size 1484) =====

uint64_t sym.scmi_cpufreq_stats_probe(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint *puVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar15;
    ulong uVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    if (arg1 == 0) {
        puVar8 = 0xffffffed;
        goto code_r0x08001694;
    }
    pcVar15 = *(*(arg1 + 0x3a0) + 0x10);
    __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar15,0x8000120);
    puVar8 = (*pcVar15)(arg1,0x84,reloc.scmi_cpufreq_stats_probe.5b3787544e7efe510c5a8fa02f70b282.cfi_jt);
    _segment.ehdr = puVar8;
    if (0xfffffffffffff000 < puVar8) goto code_r0x08001694;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    iStack_74 = 0;
    pcVar15 = *puVar8;
    puVar8 = *(arg1 + 0x3a0);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar15,0x8000140);
    uVar3 = (*pcVar15)(_segment.ehdr,&uStack_80);
    if (uVar3 != 0) {
        puVar8 = uVar3;
        _printk(0x80002b4,puVar8);
        goto code_r0x08001694;
    }
    if (iStack_74 == 0) {
        _printk(0x8000188);
code_r0x08001654:
        puVar8 = 0xffffffff;
    }
    else {
        iVar14 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar14 = 0x30;
        }
        _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x28);
        if (_segment.ehdr != NULL) {
            uVar9 = devm_ioremap(*puVar8,CONCAT44(uStack_78,uStack_7c),iStack_74);
            puVar12 = _segment.ehdr;
            _segment.ehdr[1] = uVar9;
            if (uVar9 < 0xfffffffffffff001) {
                iVar4 = sym.readl_relaxed(uVar9);
                cVar1 = sym.readl_relaxed(_segment.ehdr[1] + 4);
                uVar3 = sym.readl_relaxed(_segment.ehdr[1] + 8);
                if (iVar4 == 0x50455246) {
                    if (cVar1 == '\x01') {
                        uVar3 = uVar3 & 0xff;
                        if (uVar3 != 0) {
                            *(_segment.ehdr + 2) = uVar3;
                            puVar10 = __kmalloc(uVar3 << 4,0xdc0);
                            puVar12 = _segment.ehdr;
                            _segment.ehdr[3] = puVar10;
                            if (puVar10 != NULL) {
                                *puVar10 = 0;
                                *(puVar12[3] + 4) = 0;
                                *(_segment.ehdr[3] + 8) = 1;
                                *(_segment.ehdr[3] + 0xc) = 0;
                                if (uVar3 != 1) {
                                    iVar14 = 0;
                                    uVar9 = 1;
                                    do {
                                        *(_segment.ehdr[3] + iVar14 + 0x10) = 0;
                                        *(_segment.ehdr[3] + iVar14 + 0x14) = uVar9;
                                        *(_segment.ehdr[3] + iVar14 + 0x18) = 1;
                                        iVar11 = _segment.ehdr[3] + iVar14;
                                        iVar14 = iVar14 + 0x10;
                                        *(iVar11 + 0x1c) = uVar9;
                                        uVar9 = uVar9 + 1;
                                    } while (uVar3 != uVar9);
                                }
                                uVar16 = *puVar8;
                                uStack_70 = 0;
                                _segment.ehdr = debugfs_create_dir("cpufreq_stats",0);
                                if (_segment.ehdr == NULL) {
                                    _dev_err(uVar16,"Debugfs directory creation failed\n");
code_r0x080016e8:
                                    _printk(0x8000244);
                                    kfree(_segment.ehdr[3]);
                                    kfree(_segment.ehdr);
                                    puVar8 = 0xfffffffe;
                                    goto code_r0x08001694;
                                }
                                if (*(_segment.ehdr + 2) != 0) {
                                    uVar9 = 0;
                                    iVar14 = 8;
                                    do {
                                        snprintf(&uStack_70,8,"clkdom%d",uVar9 & 0xffffffff);
                                        iVar11 = debugfs_create_dir(&uStack_70,_segment.ehdr);
                                        if (iVar11 == 0) {
                                            _dev_err(uVar16,"Debugfs directory creation for %s failed\n",&uStack_70);
                                            goto code_r0x080016e8;
                                        }
                                        debugfs_create_file("usage",0x100,iVar11,_segment.ehdr[3] + iVar14 + -8,
                                                            obj.stats_ops);
                                        debugfs_create_file("time_in_state",0x100,iVar11,_segment.ehdr[3] + iVar14,
                                                            obj.stats_ops);
                                        uVar9 = uVar9 + 1;
                                        iVar14 = iVar14 + 0x10;
                                    } while (uVar9 < *(_segment.ehdr + 2));
                                }
                                uVar6 = uVar3;
                                if (uVar3 < 2) {
                                    uVar6 = 1;
                                }
                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + 0x10);
                                uVar5 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                uVar5 = uVar5 & 0xff;
                                if (1 < uVar3) {
                                    iVar11 = uVar6 - 1;
                                    iVar14 = 0x14;
                                    do {
                                        iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar14);
                                        uVar6 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                        iVar14 = iVar14 + 4;
                                        uVar5 = uVar5 + (uVar6 & 0xff) & 0xffff;
                                        iVar11 = iVar11 + -1;
                                    } while (iVar11 != 0);
                                }
                                iVar14 = __kmalloc((uVar5 + uVar3) * 4,0xdc0);
                                _segment.ehdr[4] = iVar14;
                                if (iVar14 != 0) {
                                    uVar9 = 0;
                                    while( true ) {
                                        iVar11 = uVar9 * 4;
                                        *(iVar14 + uVar9 * 4) = uVar3;
                                        if (uVar9 != 0) {
                                            iVar14 = 0x10;
                                            uVar17 = uVar9;
                                            do {
                                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar14);
                                                uVar6 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                                uVar17 = uVar17 - 1;
                                                iVar14 = iVar14 + 4;
                                                *(_segment.ehdr[4] + iVar11) =
                                                     *(_segment.ehdr[4] + iVar11) + (uVar6 & 0xff);
                                            } while (uVar17 != 0);
                                        }
                                        iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar11 + 0x10);
                                        uVar2 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2));
                                        if (uVar2 != 0) {
                                            uVar17 = 0;
                                            iVar14 = 0x10;
                                            do {
                                                iVar4 = sym.readl_relaxed(_segment.ehdr[1] + iVar11 + 0x10);
                                                uVar7 = sym.readl_relaxed(_segment.ehdr[1] + (iVar4 << 2) + iVar14);
                                                iVar14 = iVar14 + 0x18;
                                                iVar4 = uVar17;
                                                uVar17 = uVar17 + 1;
                                                *(_segment.ehdr[4] + (iVar4 + *(_segment.ehdr[4] + uVar9 * 4)) * 4) =
                                                     uVar7;
                                            } while (uVar2 != uVar17);
                                        }
                                        uVar9 = uVar9 + 1;
                                        if (uVar9 == uVar3) break;
                                        iVar14 = _segment.ehdr[4];
                                    }
                                    puVar8 = NULL;
                                    goto code_r0x08001694;
                                }
                                _printk(0x8000308);
                                kfree(_segment.ehdr[3]);
                                puVar12 = _segment.ehdr;
                            }
                            goto code_r0x0800168c;
                        }
                        uVar16 = 0x800036e;
                    }
                    else {
                        uVar16 = 0x8000349;
                    }
                    _printk(uVar16);
                }
                else {
                    _dev_err(*puVar8,"SCMI stats mem signature check failed\n");
                }
                kfree(_segment.ehdr);
                goto code_r0x08001654;
            }
code_r0x0800168c:
            kfree(puVar12);
        }
        puVar8 = 0xfffffff4;
    }
code_r0x08001694:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_68) {
        puVar13 = __stack_chk_fail();
        *extraout_x18 = sym.readl_relaxed;
        log_read_mmio(0x20,puVar13,0x8001718);
        uVar3 = *puVar13;
        log_post_read_mmio(uVar3,0x20,puVar13,0x800174c);
        return uVar3;
    }
    return puVar8 & 0xffffffff;
}


// ===== sym.readl_relaxed @ 0x08001714 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001718);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800174c);
    return uVar1;
}


// ===== sym.stats_get @ 0x08001784 (size 588) =====

int64_t sym.stats_get(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t *puVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    int *piVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint64_t *puVar17;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar13 = *(arg1 + 0x18);
    piVar14 = *(arg1 + 0xd8);
    iVar3 = debugfs_file_get(uVar13);
    if (iVar3 == 0) {
        if (piVar14 == NULL) {
            iVar11 = -2;
        }
        else {
            uVar1 = *(piVar14 + 1);
            iVar11 = uVar1 * 4;
            iVar16 = *(_segment.ehdr + 8);
            iVar3 = sym.readl_relaxed(iVar16 + iVar11 + 0x10);
            iVar4 = sym.readl_relaxed(*(_segment.ehdr + 8) + iVar11 + 0x10);
            uVar2 = sym.readl_relaxed(*(_segment.ehdr + 8) + (iVar4 << 2));
            uVar12 = uVar2;
            if (uVar2 == 0) {
                iVar11 = 0;
            }
            else {
                puVar7 = __kmalloc(uVar12 << 3,0xdc0);
                if ((puVar7 == NULL) || (iVar8 = kmem_cache_alloc_trace(_default_llseek,0xdc0,0x1000), iVar8 == 0)) {
                    iVar11 = -0xc;
                }
                else {
                    uVar6 = 0;
                    iVar11 = 8;
                    if (*piVar14 != 0) {
                        iVar11 = (*piVar14 == 1) << 4;
                    }
                    do {
                        uVar5 = sym.readl_relaxed(*(_segment.ehdr + 8) + 0xc);
                        uVar15 = uVar12;
                        puVar17 = puVar7;
                        arg1_00 = iVar11 + (iVar3 << 2) + iVar16 + 0x14;
                        if ((uVar5 & 1) == 0) {
                            do {
                                uVar9 = sym.readl_relaxed(arg1_00 + -4);
                                iVar10 = sym.readl_relaxed(arg1_00);
                                uVar15 = uVar15 - 1;
                                *puVar17 = uVar9 & 0xffffffff | iVar10 << 0x20;
                                puVar17 = puVar17 + 1;
                                arg1_00 = arg1_00 + 0x18;
                            } while (uVar15 != 0);
                            uVar6 = sym.readl_relaxed(*(_segment.ehdr + 8) + 0xc);
                        }
                    } while (uVar5 != uVar6);
                    uVar15 = 0;
                    iVar11 = 0;
                    do {
                        iVar3 = scnprintf(iVar8 + iVar11,0x1000 - iVar11,"%u %llu\n",
                                          *(*(_segment.ehdr + 0x20) +
                                           (uVar15 + *(*(_segment.ehdr + 0x20) + uVar1 * 4)) * 4),puVar7[uVar15]);
                        uVar15 = uVar15 + 1;
                        iVar11 = iVar11 + iVar3;
                    } while (uVar12 != uVar15);
                    iVar11 = simple_read_from_buffer(arg2,arg3,arg4,iVar8,iVar11);
                    debugfs_file_put(uVar13);
                    kfree(puVar7);
                    kfree(iVar8);
                }
            }
        }
    }
    else {
        iVar11 = iVar3;
    }
    return iVar11;
}


// ===== sym.__cfi_check_fail @ 0x080019d0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001a14

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001a28);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001a34 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_cpufreq_stats_drv,obj.__this_module,"cpufreq_stats_scmi");
    return;
}


// ===== sym.cleanup_module @ 0x08001a70 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_cpufreq_stats_drv);
    return;
}

