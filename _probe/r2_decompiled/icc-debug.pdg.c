// decompiled from icc-debug by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x0800167c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x29bbde323c1d7b3c) {
            if (arg1 != -0x76e7814a8afd6df4) {
                if (arg1 != -0x67dea5c2c3eb6ff9) goto code_r0x0800163c;
                pcVar2 = sym.qcom_icc_debug_register.cfi_jt;
code_r0x08001180:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800163c;
            }
            pcVar2 = sym.icc_debug_suspend_get.7a9f7f669ad86622336e73d96f70481e.cfi_jt;
        }
        else if (arg1 == -0x29bbde323c1d7b3c) {
            pcVar2 = sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.icc_debug_suspend_fops_open.7a9f7f669ad86622336e73d96f70481e.cfi_jt;
                goto code_r0x08001180;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800163c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x321969b888d4949e) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.debugfs_attr_read.cfi_jt;
        }
        else {
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x0800163c;
            pcVar2 = sym.debugfs_attr_write.cfi_jt;
        }
    }
    else if (arg1 == 0x321969b888d4949e) {
        pcVar2 = sym.no_llseek.cfi_jt;
    }
    else if (arg1 == 0x6b141b54612cf75f) {
        pcVar2 = sym.icc_debug_suspend_set.7a9f7f669ad86622336e73d96f70481e.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800163c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800163c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001690);
    (*pcVar1)();
}


// ===== sym.icc_debug_suspend_get.7a9f7f669ad86622336e73d96f70481e.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.icc_debug_suspend_get.7a9f7f669ad86622336e73d96f70481e.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = obj.debug_suspend;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    if (obj.debug_suspend != 0x0) {
        tracepoint_probe_unregister
                  (__tracepoint_suspend_resume,
                   sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_lookup("interconnect",0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x80001c1,"qcom_icc_debug_init");
    }
    else {
        _segment.ehdr = debugfs_create_file_unsafe("debug_suspend",0x1a4,_segment.ehdr,0,reloc.__this_module);
    }
    return 0;
}


// ===== sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt @ 0x080011f8 (size 8) =====

void sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt
               (ulong param_1,ulong param_2,int param_3,uint64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((0 < param_3) && ((param_4 & 1) != 0)) && (iVar1 = strcmp("machine_suspend"), iVar1 == 0)) {
        _printk(0x8000162);
        _printk(0x8000215);
        _printk(0x80000df);
        pcVar4 = _obj.icc_providers;
        if (_obj.icc_providers != obj.icc_providers) {
            do {
                iVar5 = *(pcVar4 + 0x10);
                for (puVar6 = *(iVar5 + 0x10); iVar5 + 0x10 != puVar6; puVar6 = *puVar6) {
                    if (*(puVar6 + 7) != 0 || *(puVar6 + 0x3c) != 0) {
                        _printk(0x8000181,puVar6[-4]);
                        for (piVar7 = puVar6[6]; piVar7 != NULL; piVar7 = *piVar7) {
                            while (((piVar3 = piVar7[3], piVar3 != NULL && (piVar7[4] != '\0')) &&
                                   (piVar7[5] != 0 || *(piVar7 + 0x2c) != 0))) {
                                iVar2 = piVar3[0xe];
                                if (iVar2 == 0) {
                                    iVar2 = *piVar3;
                                }
                                _printk(0x800019a,iVar2,*(piVar7 + 0x24));
                                piVar7 = *piVar7;
                                if (piVar7 == NULL) goto code_r0x080015a8;
                            }
                        }
                    }
code_r0x080015a8:
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.icc_providers);
        }
    }
    return;
}


// ===== sym.icc_debug_suspend_fops_open.7a9f7f669ad86622336e73d96f70481e.cfi_jt @ 0x08001200 (size 8) =====

void sym.icc_debug_suspend_fops_open.7a9f7f669ad86622336e73d96f70481e.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.icc_debug_suspend_get.7a9f7f669ad86622336e73d96f70481e.cfi_jt,
                     sym.icc_debug_suspend_set.7a9f7f669ad86622336e73d96f70481e.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08001208 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.icc_debug_suspend_set.7a9f7f669ad86622336e73d96f70481e.cfi_jt @ 0x08001210 (size 8) =====

int sym.icc_debug_suspend_set.7a9f7f669ad86622336e73d96f70481e.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    code cVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.debug_suspend == (param_2 != 0)) {
        iVar3 = 0;
        cVar2 = obj.debug_suspend;
    }
    else {
        if (param_2 == 0) {
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
        }
        else {
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
        }
        cVar2 = param_2 != 0;
        if (iVar3 != 0) {
            uVar1 = 0x8000211;
            if (param_2 == 0) {
                uVar1 = 0x8000212;
            }
            _printk(0x8000127,"icc_debug_suspend_set",uVar1,iVar3);
            cVar2 = obj.debug_suspend;
        }
    }
    obj.debug_suspend = cVar2;
    return iVar3;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08001218 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_icc_debug_register.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.qcom_icc_debug_register.cfi_jt(ulong param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    if (puVar3 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        puVar3[2] = param_1;
        mutex_lock(obj.debug_lock);
        puVar2 = *0x8000098;
        uVar4 = __list_add_valid(puVar3,*0x8000098,obj.icc_providers);
        if ((uVar4 & 1) != 0) {
            *0x8000098 = puVar3;
            *puVar3 = obj.icc_providers;
            puVar3[1] = puVar2;
            *puVar2 = puVar3;
        }
        mutex_unlock(obj.debug_lock);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.qcom_icc_debug_unregister.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.qcom_icc_debug_unregister.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.debug_lock);
    pcVar4 = _obj.icc_providers;
    if (_obj.icc_providers != obj.icc_providers) {
        do {
            pcVar5 = *pcVar4;
            if (*(pcVar4 + 0x10) == param_1) {
                uVar3 = __list_del_entry_valid(pcVar4);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar4;
                    piVar2 = *(pcVar4 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar4 = -0x2152ffffffffff00;
                *(pcVar4 + 8) = -0x2152fffffffffede;
                kfree(pcVar4);
            }
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.icc_providers);
    }
    mutex_unlock(obj.debug_lock);
    return 0;
}


// ===== sym.no_llseek.cfi_jt @ 0x08001230 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_icc_debug_register @ 0x08001240 (size 196) =====

ulong sym.qcom_icc_debug_register(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    puVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
    if (puVar3 == NULL) {
        uVar5 = 0xfffffff4;
    }
    else {
        puVar3[2] = arg1;
        mutex_lock(obj.debug_lock);
        puVar2 = *0x8000098;
        uVar4 = __list_add_valid(puVar3,*0x8000098,obj.icc_providers);
        if ((uVar4 & 1) != 0) {
            *0x8000098 = puVar3;
            *puVar3 = obj.icc_providers;
            puVar3[1] = puVar2;
            *puVar2 = puVar3;
        }
        mutex_unlock(obj.debug_lock);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.qcom_icc_debug_unregister @ 0x08001304 (size 192) =====

ulong sym.qcom_icc_debug_unregister(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.debug_lock);
    pcVar4 = _obj.icc_providers;
    if (_obj.icc_providers != obj.icc_providers) {
        do {
            pcVar5 = *pcVar4;
            if (*(pcVar4 + 0x10) == arg1) {
                uVar3 = __list_del_entry_valid(pcVar4);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar4;
                    piVar2 = *(pcVar4 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar4 = -0x2152ffffffffff00;
                *(pcVar4 + 8) = -0x2152fffffffffede;
                kfree(pcVar4);
            }
            pcVar4 = pcVar5;
        } while (pcVar5 != obj.icc_providers);
    }
    mutex_unlock(obj.debug_lock);
    return 0;
}


// ===== sym.icc_debug_suspend_fops_open @ 0x080013c4 (size 60) =====

void sym.icc_debug_suspend_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.icc_debug_suspend_get.7a9f7f669ad86622336e73d96f70481e.cfi_jt,
                     sym.icc_debug_suspend_set.7a9f7f669ad86622336e73d96f70481e.cfi_jt,"%llu\n");
    return;
}


// ===== sym.icc_debug_suspend_get @ 0x08001400 (size 28) =====

ulong sym.icc_debug_suspend_get(int64_t arg1,int64_t arg2)

{
    *arg2 = obj.debug_suspend;
    return 0;
}


// ===== sym.icc_debug_suspend_set @ 0x0800141c (size 204) =====

int sym.icc_debug_suspend_set(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    code cVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.debug_suspend == (arg2 != 0)) {
        iVar3 = 0;
        cVar2 = obj.debug_suspend;
    }
    else {
        if (arg2 == 0) {
            iVar3 = tracepoint_probe_unregister
                              (__tracepoint_suspend_resume,
                               sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
        }
        else {
            iVar3 = tracepoint_probe_register
                              (__tracepoint_suspend_resume,
                               sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
        }
        cVar2 = arg2 != 0;
        if (iVar3 != 0) {
            uVar1 = 0x8000211;
            if (arg2 == 0) {
                uVar1 = 0x8000212;
            }
            _printk(0x8000127,"icc_debug_suspend_set",uVar1,iVar3);
            cVar2 = obj.debug_suspend;
        }
    }
    obj.debug_suspend = cVar2;
    return iVar3;
}


// ===== sym.icc_debug_suspend_trace_probe @ 0x080014e8 (size 336) =====

uchar  [16] sym.icc_debug_suspend_trace_probe(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t in_x3;
    int64_t *piVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if (((0 < arg1) && ((in_x3 & 1) != 0)) && (iVar1 = strcmp("machine_suspend"), noname_1 = extraout_q0, iVar1 == 0))
    {
        _printk(0x8000162);
        _printk(0x8000215);
        noname_1 = _printk(0x80000df);
        pcVar4 = _obj.icc_providers;
        if (_obj.icc_providers != obj.icc_providers) {
            do {
                iVar5 = *(pcVar4 + 0x10);
                for (puVar6 = *(iVar5 + 0x10); iVar5 + 0x10 != puVar6; puVar6 = *puVar6) {
                    if (*(puVar6 + 7) != 0 || *(puVar6 + 0x3c) != 0) {
                        noname_1 = _printk(0x8000181,puVar6[-4]);
                        for (piVar7 = puVar6[6]; piVar7 != NULL; piVar7 = *piVar7) {
                            while (((piVar3 = piVar7[3], piVar3 != NULL && (piVar7[4] != '\0')) &&
                                   (piVar7[5] != 0 || *(piVar7 + 0x2c) != 0))) {
                                iVar2 = piVar3[0xe];
                                if (iVar2 == 0) {
                                    iVar2 = *piVar3;
                                }
                                noname_1 = _printk(0x800019a,iVar2,*(piVar7 + 0x24));
                                piVar7 = *piVar7;
                                if (piVar7 == NULL) goto code_r0x080015a8;
                            }
                        }
                    }
code_r0x080015a8:
                }
                pcVar4 = *pcVar4;
            } while (pcVar4 != obj.icc_providers);
        }
    }
    return noname_1;
}


// ===== sym.__cfi_check_fail @ 0x08001638 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800167c

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
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001690);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080016c8 (size 136) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = debugfs_lookup("interconnect",0);
    if ((_segment.ehdr == 0) || (0xfffffffffffff000 < _segment.ehdr)) {
        _printk(0x80001c1,"qcom_icc_debug_init");
    }
    else {
        _segment.ehdr = debugfs_create_file_unsafe("debug_suspend",0x1a4,_segment.ehdr,0,reloc.__this_module);
    }
    return 0;
}


// ===== sym.cleanup_module @ 0x08001750 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    if (obj.debug_suspend != 0x0) {
        tracepoint_probe_unregister
                  (__tracepoint_suspend_resume,
                   sym.icc_debug_suspend_trace_probe.7a9f7f669ad86622336e73d96f70481e.cfi_jt,0);
    }
    return;
}

