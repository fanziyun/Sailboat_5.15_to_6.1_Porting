// decompiled from qcom-dload-mode by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 416) =====

//WARNING: Switch with 1 destination removed at 0x08001c68

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2c1d832160b5d123) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != -0x558484723f05168) goto code_r0x08001c28;
                pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr;
                goto code_r0x08001158;
            }
            pcVar2 = sym.qcom_dload_remove.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x199c66976d43c92e) goto code_r0x08001c28;
                pcVar2 = sym.param_set_download_mode.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
code_r0x080010fc:
                if (pcVar1 == pcVar2) {
                    return;
                }
                goto code_r0x08001c28;
            }
            pcVar2 = sym.get_dump_mode.cfi_jt;
        }
    }
    else {
        if (arg1 < 0x7d57972cd3914fb1) {
            if (arg1 != 0x2c1d832160b5d123) {
                if (arg1 != 0x4a220a35dbe7fc62) goto code_r0x08001c28;
                pcVar2 = sym.param_get_int.cfi_jt;
                goto code_r0x080010fc;
            }
            pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr;
code_r0x08001158:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001c28;
        }
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.qcom_dload_panic.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001c28;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x08001c28:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001c7c);
    (*pcVar1)();
}


// ===== sym.get_dump_mode.cfi_jt @ 0x080011a8 (size 8) =====

uint sym.get_dump_mode.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.init_module.cfi_jt @ 0x080011b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011b8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt);
    return;
}


// ===== sym.qcom_dload_syscore_resume.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011c0 (size 8) =====

void sym.qcom_dload_syscore_resume.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(void)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _segment.ehdr;
    if (obj.enable_dump == 0x0) {
        uVar2 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar1 = msm_minidump_enabled(), (uVar1 & 1) == 0)) {
        uVar2 = uVar2 & 0xffffffdf;
        _printk(0x80004ca);
        if (uVar2 == 0) {
            return;
        }
    }
    _segment.ehdr = uVar2;
    qcom_scm_set_download_mode(uVar2,0);
    return;
}


// ===== sym.param_get_int.cfi_jt @ 0x080011c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.param_get_int.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_dload_remove.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011d0 (size 8) =====

ulong sym.qcom_dload_remove.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar1);
    unregister_reboot_notifier(iVar1 + 0x18);
    if (*(iVar1 + 0x98) != 0) {
        iounmap();
    }
    return 0;
}


// ===== sym.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011d8 (size 8) =====

int sym.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_3c = 0;
    puVar4 = devm_kmalloc(param_1 + 0x10,0xa0,0xdc0);
    if (puVar4 == NULL) {
        iVar3 = -0xc;
    }
    else {
        puVar1 = puVar4 + 6;
        iVar3 = kobject_init_and_add(puVar1,obj.qcom_dload_kobj_type,_param_get_int,"dload");
        if (iVar3 == 0) {
            iVar3 = sysfs_create_group(puVar1,obj.qcom_dload_attr_group);
            if (iVar3 == 0) {
                uVar5 = sym.map_prop_mem();
                puVar4[0x13] = uVar5;
                sym.msm_enable_dump_mode(obj.enable_dump);
                iVar3 = qcom_scm_get_download_mode(&uStack_3c,0);
                pcVar2 = &uStack_3c;
                if (iVar3 != 0) {
                    pcVar2 = obj.dump_mode;
                }
                _obj.dump_mode = *pcVar2;
                _printk(0x80004e7,"qcom_dload_probe");
                if (obj.enable_dump == 0x0) {
                    qcom_scm_disable_sdi();
                }
                *puVar4 = sym.qcom_dload_panic.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
                *(puVar4 + 2) = 0x7fffffff;
                atomic_notifier_chain_register(panic_notifier_list,puVar4);
                puVar4[3] = sym.qcom_dload_reboot.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
                *(puVar4 + 5) = 0xff;
                register_reboot_notifier();
                register_syscore_ops(obj.qcom_dload_syscore_ops);
                iVar3 = 0;
                *(param_1 + 0xa8) = puVar4;
            }
            else {
                _printk(0x8000629,"qcom_dload_probe");
                kobject_del(puVar1);
            }
        }
        else {
            _printk(0x80005d0,"qcom_dload_probe");
            kobject_put(puVar1);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_dload_remove;
    iVar6 = *(iVar6 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar6);
    unregister_reboot_notifier(iVar6 + 0x18);
    if (*(iVar6 + 0x98) != 0) {
        iounmap();
    }
    return 0;
}


// ===== sym.param_set_download_mode.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011e0 (size 8) =====

int sym.param_set_download_mode.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_set_bool();
    uVar3 = _segment.ehdr;
    if (iVar1 != 0) {
        return iVar1;
    }
    if (obj.enable_dump == 0x0) {
        uVar3 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
        uVar3 = uVar3 & 0xffffffdf;
        _printk(0x80004ca);
        if (uVar3 == 0) goto code_r0x080012b0;
    }
    _segment.ehdr = uVar3;
    qcom_scm_set_download_mode(uVar3,0);
code_r0x080012b0:
    if (obj.enable_dump == 0x0) {
        qcom_scm_disable_sdi();
    }
    return 0;
}


// ===== sym.qcom_dload_panic.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.qcom_dload_panic.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(int64_t param_1)

{
    code cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = obj.enable_dump;
    *(param_1 + 0x90) = 1;
    uVar3 = _segment.ehdr;
    if (cVar1 != 0x0) {
        if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
            uVar3 = uVar3 & 0xffffffdf;
            _printk(0x80004ca);
            if (uVar3 == 0) {
                return 1;
            }
        }
        _segment.ehdr = uVar3;
        qcom_scm_set_download_mode(uVar3,0);
    }
    return 1;
}


// ===== sym.qcom_dload_reboot.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x080011f0 (size 8) =====

ulong sym.qcom_dload_reboot.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(int64_t param_1,ulong *param_2,int64_t param_3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong *extraout_x1_02;
    ulong *extraout_x1_03;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x78) == '\0') {
        _segment.ehdr = 0;
        qcom_scm_set_download_mode(0,0);
        param_2 = extraout_x1;
    }
    if (param_3 != 0) {
        iVar1 = strcmp(param_3,"qcom_dload");
        uVar3 = _segment.ehdr;
        if (iVar1 == 0) {
            if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
                uVar3 = uVar3 & 0xffffffdf;
                _printk(0x80004ca);
                param_2 = extraout_x1_03;
                if (uVar3 == 0) goto code_r0x0800170c;
            }
            _segment.ehdr = uVar3;
            qcom_scm_set_download_mode(uVar3,0);
            param_2 = extraout_x1_02;
        }
        else {
            iVar1 = strcmp(param_3,0x800068d);
            if (iVar1 == 0) {
                *extraout_x1_00 = 0x80000005;
                param_2 = extraout_x1_00;
            }
            else {
                iVar1 = strcmp(param_3,0x80004e3);
                param_2 = extraout_x1_01;
                if (iVar1 == 0) {
                    *extraout_x1_01 = 0x80000006;
                }
            }
        }
    }
code_r0x0800170c:
    if (_segment.ehdr != 0) {
        *param_2 = 1;
    }
    return 1;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x080011f8 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x68) == NULL) {
        iVar2 = -0x13;
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,0x80004a1,**(param_1 + 0x68) == 2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.attr_show.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.attr_show.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80011f8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000260);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.dload_mode_show.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.dload_mode_show.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0x10) {
        pcVar2 = "full";
    }
    else if (_segment.ehdr == 0x30) {
        pcVar2 = "both";
    }
    else if (_segment.ehdr == 0x20) {
        pcVar2 = "mini";
    }
    else {
        pcVar2 = "unknown";
    }
    iVar1 = scnprintf(param_3,0x1000,"DLOAD dump type: %s\n",pcVar2);
    return iVar1;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x08001210 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    acStack_2c[0] = '\0';
    if (*(param_1 + 0x68) == 0) {
        param_4 = -0x13;
    }
    else {
        iVar2 = kstrtobool(param_3,acStack_2c);
        if (iVar2 < 0) {
            param_4 = iVar2;
        }
        else {
            puVar4 = *(param_1 + 0x68);
            if (acStack_2c[0] == '\0') {
                if (puVar4 != NULL) {
                    *puVar4 = 0;
                }
            }
            else if (puVar4 != NULL) {
                *puVar4 = 2;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.dload_mode_show;
    if (_segment.ehdr == 0x10) {
        pcVar3 = "full";
    }
    else if (_segment.ehdr == 0x30) {
        pcVar3 = "both";
    }
    else if (_segment.ehdr == 0x20) {
        pcVar3 = "mini";
    }
    else {
        pcVar3 = "unknown";
    }
    iVar2 = scnprintf(param_3,0x1000,"DLOAD dump type: %s\n",pcVar3);
    return iVar2;
}


// ===== sym.attr_store.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.attr_store.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x8001210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000280);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.dload_mode_store.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.dload_mode_store.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int64_t iVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    ulong uVar8;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar6 = sysfs_streq(param_3,"full");
    if ((uVar6 & 1) == 0) {
        uVar6 = sysfs_streq(param_3,"mini");
        if ((uVar6 & 1) == 0) {
            uVar6 = sysfs_streq(param_3,"both");
            if ((uVar6 & 1) == 0) {
                _printk(0x80004a5);
                _printk(0x8000468);
                uVar8 = 0xffffffffffffffea;
                goto code_r0x08001b10;
            }
            uVar7 = 0x30;
        }
        else {
            uVar7 = 0x20;
        }
    }
    else {
        uVar7 = 0x10;
    }
    uStack_3c = 0;
    if (obj.enable_dump != 0x0) {
        uVar4 = uVar7;
        if ((uVar7 >> 5 == 0) || (uVar6 = msm_minidump_enabled(), (uVar6 & 1) != 0)) {
code_r0x08001ab4:
            _segment.ehdr = uVar4;
            qcom_scm_set_download_mode(_segment.ehdr,0);
            iVar5 = qcom_scm_get_download_mode(&uStack_3c,0);
            uVar8 = 0;
            pcVar1 = &uStack_3c;
            if (iVar5 != 0) {
                pcVar1 = obj.dump_mode;
            }
            bVar3 = true;
            _obj.dump_mode = *pcVar1;
            uVar4 = _obj.dump_mode;
        }
        else {
            _printk(0x80004ca);
            if ((uVar7 >> 4 & 1) != 0) {
                uVar4 = uVar7 & 0x10;
                goto code_r0x08001ab4;
            }
            bVar3 = false;
            uVar8 = 0xffffffffffffffed;
            uVar4 = _segment.ehdr;
        }
        if (uVar4 != uVar7) {
            _printk(0x800069c);
        }
        uVar7 = _segment.ehdr;
        if (!bVar3) goto code_r0x08001b10;
    }
    _segment.ehdr = uVar7;
    uVar8 = param_4;
code_r0x08001b10:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_dload_syscore_resume;
    uVar7 = _segment.ehdr;
    if (obj.enable_dump == 0x0) {
        uVar7 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar6 = msm_minidump_enabled(), (uVar6 & 1) == 0)) {
        uVar7 = uVar7 & 0xffffffdf;
        uVar8 = _printk(0x80004ca);
        if (uVar7 == 0) {
            return uVar8;
        }
    }
    _segment.ehdr = uVar7;
    uVar8 = qcom_scm_set_download_mode(uVar7,0);
    return uVar8;
}


// ===== sym.get_dump_mode @ 0x08001228 (size 20) =====

uint sym.get_dump_mode(void)

{
    return _segment.ehdr;
}


// ===== sym.param_set_download_mode @ 0x0800123c (size 156) =====

int sym.param_set_download_mode(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_set_bool();
    uVar3 = _segment.ehdr;
    if (iVar1 != 0) {
        return iVar1;
    }
    if (obj.enable_dump == 0x0) {
        uVar3 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
        uVar3 = uVar3 & 0xffffffdf;
        _printk(0x80004ca);
        if (uVar3 == 0) goto code_r0x080012b0;
    }
    _segment.ehdr = uVar3;
    qcom_scm_set_download_mode(uVar3,0);
code_r0x080012b0:
    if (obj.enable_dump == 0x0) {
        qcom_scm_disable_sdi();
    }
    return 0;
}


// ===== sym.msm_enable_dump_mode @ 0x080012d8 (size 112) =====

void sym.msm_enable_dump_mode(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _segment.ehdr;
    if ((arg1 & 1U) == 0) {
        uVar2 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar1 = msm_minidump_enabled(), (uVar1 & 1) == 0)) {
        uVar2 = uVar2 & 0xffffffdf;
        _printk(0x80004ca);
        if (uVar2 == 0) {
            return;
        }
    }
    _segment.ehdr = uVar2;
    qcom_scm_set_download_mode(uVar2,0);
    return;
}


// ===== sym.qcom_dload_probe @ 0x08001348 (size 448) =====

int sym.qcom_dload_probe(int64_t arg1)

{
    ulong *puVar1;
    code *pcVar2;
    int iVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_3c = 0;
    puVar4 = devm_kmalloc(arg1 + 0x10,0xa0,0xdc0);
    if (puVar4 == NULL) {
        iVar3 = -0xc;
    }
    else {
        puVar1 = puVar4 + 6;
        iVar3 = kobject_init_and_add(puVar1,obj.qcom_dload_kobj_type,_param_get_int,"dload");
        if (iVar3 == 0) {
            iVar3 = sysfs_create_group(puVar1,obj.qcom_dload_attr_group);
            if (iVar3 == 0) {
                uVar5 = sym.map_prop_mem();
                puVar4[0x13] = uVar5;
                sym.msm_enable_dump_mode(obj.enable_dump);
                iVar3 = qcom_scm_get_download_mode(&uStack_3c,0);
                pcVar2 = &uStack_3c;
                if (iVar3 != 0) {
                    pcVar2 = obj.dump_mode;
                }
                _obj.dump_mode = *pcVar2;
                _printk(0x80004e7,"qcom_dload_probe");
                if (obj.enable_dump == 0x0) {
                    qcom_scm_disable_sdi();
                }
                *puVar4 = sym.qcom_dload_panic.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
                *(puVar4 + 2) = 0x7fffffff;
                atomic_notifier_chain_register(panic_notifier_list,puVar4);
                puVar4[3] = sym.qcom_dload_reboot.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt;
                *(puVar4 + 5) = 0xff;
                register_reboot_notifier();
                register_syscore_ops(obj.qcom_dload_syscore_ops);
                iVar3 = 0;
                *(arg1 + 0xa8) = puVar4;
            }
            else {
                _printk(0x8000629,"qcom_dload_probe");
                kobject_del(puVar1);
            }
        }
        else {
            _printk(0x80005d0,"qcom_dload_probe");
            kobject_put(puVar1);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_dload_remove;
    iVar6 = *(iVar6 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar6);
    unregister_reboot_notifier(iVar6 + 0x18);
    if (*(iVar6 + 0x98) != 0) {
        iounmap();
    }
    return 0;
}


// ===== sym.qcom_dload_remove @ 0x08001508 (size 84) =====

ulong sym.qcom_dload_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    atomic_notifier_chain_unregister(panic_notifier_list,iVar1);
    unregister_reboot_notifier(iVar1 + 0x18);
    if (*(iVar1 + 0x98) != 0) {
        iounmap();
    }
    return 0;
}


// ===== sym.map_prop_mem @ 0x0800155c (size 108) =====

int64_t sym.map_prop_mem(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_compatible_node(0,0,"qcom,msm-imem-dload-type");
    if (iVar1 == 0) {
        uVar2 = 0x8000655;
    }
    else {
        iVar1 = of_iomap(iVar1,0);
        if (iVar1 != 0) {
            return iVar1;
        }
        uVar2 = 0x80005a4;
    }
    _printk(uVar2,"qcom,msm-imem-dload-type");
    return 0;
}


// ===== sym.qcom_dload_panic @ 0x080015c8 (size 128) =====

ulong sym.qcom_dload_panic(int64_t arg1)

{
    code cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = obj.enable_dump;
    *(arg1 + 0x90) = 1;
    uVar3 = _segment.ehdr;
    if (cVar1 != 0x0) {
        if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
            uVar3 = uVar3 & 0xffffffdf;
            _printk(0x80004ca);
            if (uVar3 == 0) {
                return 1;
            }
        }
        _segment.ehdr = uVar3;
        qcom_scm_set_download_mode(uVar3,0);
    }
    return 1;
}


// ===== sym.qcom_dload_reboot @ 0x08001648 (size 264) =====

ulong sym.qcom_dload_reboot(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    ulong *extraout_x1_01;
    ulong *extraout_x1_02;
    ulong *extraout_x1_03;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x78) == '\0') {
        _segment.ehdr = 0;
        qcom_scm_set_download_mode(0,0);
        arg2 = extraout_x1;
    }
    if (arg3 != 0) {
        iVar1 = strcmp(arg3,"qcom_dload");
        uVar3 = _segment.ehdr;
        if (iVar1 == 0) {
            if (((_segment.ehdr >> 5 & 1) != 0) && (uVar2 = msm_minidump_enabled(), (uVar2 & 1) == 0)) {
                uVar3 = uVar3 & 0xffffffdf;
                _printk(0x80004ca);
                arg2 = extraout_x1_03;
                if (uVar3 == 0) goto code_r0x0800170c;
            }
            _segment.ehdr = uVar3;
            qcom_scm_set_download_mode(uVar3,0);
            arg2 = extraout_x1_02;
        }
        else {
            iVar1 = strcmp(arg3,0x800068d);
            if (iVar1 == 0) {
                *extraout_x1_00 = 0x80000005;
                arg2 = extraout_x1_00;
            }
            else {
                iVar1 = strcmp(arg3,0x80004e3);
                arg2 = extraout_x1_01;
                if (iVar1 == 0) {
                    *extraout_x1_01 = 0x80000006;
                }
            }
        }
    }
code_r0x0800170c:
    if (_segment.ehdr != 0) {
        *arg2 = 1;
    }
    return 1;
}


// ===== sym.attr_show @ 0x08001750 (size 148) =====

ulong sym.attr_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x80011f8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000260);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x080017e4 (size 148) =====

ulong sym.attr_store(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (2 < (pcVar2 + -0x8001210 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000280);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.emmc_dload_show @ 0x08001878 (size 88) =====

int64_t sym.emmc_dload_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x68) == NULL) {
        iVar2 = -0x13;
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,0x80004a1,**(arg1 + 0x68) == 2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.emmc_dload_store @ 0x080018d4 (size 180) =====

int64_t sym.emmc_dload_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    acStack_2c[0] = '\0';
    if (*(arg1 + 0x68) == 0) {
        arg3 = -0x13;
    }
    else {
        iVar2 = kstrtobool(arg2,acStack_2c);
        noname_1 = extraout_q0;
        if (iVar2 < 0) {
            arg3 = iVar2;
        }
        else {
            puVar4 = *(arg1 + 0x68);
            if (acStack_2c[0] == '\0') {
                if (puVar4 != NULL) {
                    *puVar4 = 0;
                }
            }
            else if (puVar4 != NULL) {
                *puVar4 = 2;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail(noname_1);
    *extraout_x18 = sym.dload_mode_show;
    if (_segment.ehdr == 0x10) {
        pcVar3 = "full";
    }
    else if (_segment.ehdr == 0x30) {
        pcVar3 = "both";
    }
    else if (_segment.ehdr == 0x20) {
        pcVar3 = "mini";
    }
    else {
        pcVar3 = "unknown";
    }
    iVar2 = scnprintf(arg2,0x1000,"DLOAD dump type: %s\n",pcVar3);
    return iVar2;
}


// ===== sym.dload_mode_show @ 0x08001988 (size 132) =====

int64_t sym.dload_mode_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0x10) {
        pcVar2 = "full";
    }
    else if (_segment.ehdr == 0x30) {
        pcVar2 = "both";
    }
    else if (_segment.ehdr == 0x20) {
        pcVar2 = "mini";
    }
    else {
        pcVar2 = "unknown";
    }
    iVar1 = scnprintf(arg1,0x1000,"DLOAD dump type: %s\n",pcVar2);
    return iVar1;
}


// ===== sym.dload_mode_store @ 0x08001a0c (size 416) =====

int64_t sym.dload_mode_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uVar6 = sysfs_streq(arg1,"full");
    if ((uVar6 & 1) == 0) {
        uVar6 = sysfs_streq(arg1,"mini");
        if ((uVar6 & 1) == 0) {
            uVar6 = sysfs_streq(arg1,"both");
            if ((uVar6 & 1) == 0) {
                _printk(0x80004a5);
                _printk(0x8000468);
                iVar8 = -0x16;
                goto code_r0x08001b10;
            }
            uVar7 = 0x30;
        }
        else {
            uVar7 = 0x20;
        }
    }
    else {
        uVar7 = 0x10;
    }
    uStack_3c = 0;
    if (obj.enable_dump != 0x0) {
        uVar4 = uVar7;
        if ((uVar7 >> 5 == 0) || (uVar6 = msm_minidump_enabled(), (uVar6 & 1) != 0)) {
code_r0x08001ab4:
            _segment.ehdr = uVar4;
            qcom_scm_set_download_mode(_segment.ehdr,0);
            iVar5 = qcom_scm_get_download_mode(&uStack_3c,0);
            iVar8 = 0;
            pcVar1 = &uStack_3c;
            if (iVar5 != 0) {
                pcVar1 = obj.dump_mode;
            }
            bVar3 = true;
            _obj.dump_mode = *pcVar1;
            uVar4 = _obj.dump_mode;
        }
        else {
            _printk(0x80004ca);
            if ((uVar7 >> 4 & 1) != 0) {
                uVar4 = uVar7 & 0x10;
                goto code_r0x08001ab4;
            }
            bVar3 = false;
            iVar8 = -0x13;
            uVar4 = _segment.ehdr;
        }
        if (uVar4 != uVar7) {
            _printk(0x800069c);
        }
        uVar7 = _segment.ehdr;
        if (!bVar3) goto code_r0x08001b10;
    }
    _segment.ehdr = uVar7;
    iVar8 = arg2;
code_r0x08001b10:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_dload_syscore_resume;
    uVar7 = _segment.ehdr;
    if (obj.enable_dump == 0x0) {
        uVar7 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar6 = msm_minidump_enabled(), (uVar6 & 1) == 0)) {
        uVar7 = uVar7 & 0xffffffdf;
        iVar8 = _printk(0x80004ca);
        if (uVar7 == 0) {
            return iVar8;
        }
    }
    _segment.ehdr = uVar7;
    iVar8 = qcom_scm_set_download_mode(uVar7,0);
    return iVar8;
}


// ===== sym.qcom_dload_syscore_resume @ 0x08001bac (size 120) =====

void sym.qcom_dload_syscore_resume(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _segment.ehdr;
    if (obj.enable_dump == 0x0) {
        uVar2 = 0;
    }
    else if (((_segment.ehdr >> 5 & 1) != 0) && (uVar1 = msm_minidump_enabled(), (uVar1 & 1) == 0)) {
        uVar2 = uVar2 & 0xffffffdf;
        _printk(0x80004ca);
        if (uVar2 == 0) {
            return;
        }
    }
    _segment.ehdr = uVar2;
    qcom_scm_set_download_mode(uVar2,0);
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001c24 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001c68

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
    //switch table (4 cases) at 0x80002a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001c7c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001c94 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001cc8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dload_probe.01ecb9ea3a6e1cadd4bceadc6ca821f2.cfi_jt);
    return;
}

