// decompiled from c1dcvs_scmi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x080020a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2c1d832160b5d123) {
        if (arg1 == -0x558484723f05168) {
            pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr;
code_r0x080010e4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                return;
            }
            goto code_r0x08002060;
        }
        if (arg1 == 0x16160375c26fc5) {
            pcVar2 = sym.c1dcvs_enable.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002060;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x2c1d832160b5d123) {
            pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr;
            goto code_r0x080010e4;
        }
        if (arg1 == 0x4a7363fd219dda0c) {
            pcVar2 = sym.scmi_c1dcvs_probe.7aa76c4d89730456b0f894195dadb2c4.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002060;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002060:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020b4);
    (*pcVar1)();
}


// ===== sym.c1dcvs_enable.cfi_jt @ 0x08001120 (size 8) =====

ulong * sym.c1dcvs_enable.cfi_jt(uint32_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    if (_segment.ehdr == NULL) {
        puVar5 = 0xfffffdfb;
    }
    else {
        mutex_lock(obj.ops);
        uStack_2c = _segment.ehdr;
        _segment.ehdr = CONCAT44(*0x8000004,param_1) & 0xffffffff00000001;
        if ((param_1 & 1) <= uStack_2c) {
            uStack_2c = param_1 & 1;
        }
        if (_segment.ehdr == NULL) {
            puVar5 = 0xffffffed;
        }
        else {
            pcVar4 = *_segment.ehdr;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar4,0x80002a0);
            uVar2 = (*pcVar4)(_segment.ehdr,&uStack_2c);
            puVar5 = uVar2 & 0xffffffff;
        }
        mutex_unlock(obj.ops);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return puVar5;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_c1dcvs_probe;
    if (iVar3 == 0) {
        puVar5 = 0xffffffed;
    }
    else {
        pcVar4 = *(*(iVar3 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar4,0x80002c0);
        puVar5 = (*pcVar4)(iVar3,0x87,obj.ph);
        _segment.ehdr = puVar5;
        if (puVar5 < 0xfffffffffffff001) {
            iVar1 = kobject_init_and_add(obj.c1dcvs_kobj,obj.c1dcvs_settings_ktype,_mutex_lock,"c1dcvs");
            if (iVar1 < 0) {
                _printk(0x80005bc,iVar1);
                kobject_put(obj.c1dcvs_kobj);
            }
            puVar5 = NULL;
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
        }
    }
    return puVar5;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_c1dcvs_drv);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_c1dcvs_drv,obj.__this_module,"c1dcvs_scmi");
    return;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x08001138 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                  (ulong param_1,ulong param_2,uint *param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint *puVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar6 = -0x13;
    }
    else {
        puVar7 = &uStack_2c;
        iVar2 = kstrtouint(param_3,10);
        if (iVar2 < 0) {
            iVar6 = iVar2;
            param_3 = puVar7;
        }
        else {
            param_3 = 0x8000360;
            pcVar9 = *(_segment.ehdr + 0x10);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar2 = (*pcVar9)(_segment.ehdr,&uStack_2c);
            iVar6 = iVar2;
            if (-1 < iVar2) {
                iVar6 = param_4;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        uVar3 = __stack_chk_fail(iVar6);
        *extraout_x18 = sym.show_ipc_thresh;
        if (_segment.ehdr == 0) {
            iVar6 = -0x13;
        }
        else {
            *param_3 = uVar3;
            uVar5 = __sw_hweight64();
            iVar6 = __kmalloc((uVar5 & 0xffffffff) << 2,0xdc0);
            if (iVar6 == 0) {
                iVar6 = -0xc;
            }
            else {
                piVar8 = 0x8000380;
                pcVar9 = *(_segment.ehdr + 0x28);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
                iVar2 = (*pcVar9)(_segment.ehdr,iVar6);
                if (-1 < iVar2) {
                    uVar11 = 0;
                    iVar10 = 0;
                    while( true ) {
                        *piVar8 = iVar2;
                        uVar4 = __sw_hweight64();
                        if ((uVar4 <= uVar11) || (*(iVar6 + uVar11 * 4) == 0)) break;
                        piVar8 = "%lu\t";
                        iVar2 = scnprintf(param_3 + iVar10,0x1000 - iVar10);
                        uVar11 = uVar11 + 1;
                        iVar10 = iVar2 + iVar10;
                    }
                    iVar2 = scnprintf(param_3 + iVar10,0x1000 - iVar10,0x80005ba);
                    iVar2 = iVar2 + iVar10;
                }
                kfree(iVar6);
                iVar6 = iVar2;
            }
        }
        return iVar6;
    }
    return iVar6;
}


// ===== sym.store_efreq_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001140 (size 8) =====

void sym.store_efreq_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    char *pcVar3;
    int64_t iVar4;
    char *pcVar5;
    uchar *puVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint uStack_fc;
    int64_t iStack_f8;
    ulong ***pppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    char *pcStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar ***pppuStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    char *pcStack_a8;
    char acStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    code *pcStack_80;
    char *pcStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    code *pcStack_50;
    char *pcStack_48;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    pcVar8 = param_4;
    uStack_30 = kstrdup(param_3,0xcc0);
    pcVar10 = segment.ehdr;
    uStack_38 = 0;
    if (_segment.ehdr == 0) {
        pcVar3 = 0xffffffffffffffed;
        goto code_r0x08001c30;
    }
    iVar4 = strsep(&uStack_30,0x80004cb);
    if (iVar4 != 0) {
        param_3 = &uStack_38;
        iVar2 = kstrtouint(iVar4,10);
        if (iVar2 < 0) {
code_r0x08001cdc:
            _printk(0x80005ff,iVar2);
            pcVar3 = 0xffffffffffffffea;
            goto code_r0x08001c30;
        }
        iVar4 = strsep(&uStack_30,0x80004cb);
        if (iVar4 != 0) {
            param_3 = &uStack_38 | 4;
            iVar2 = kstrtouint(iVar4,10);
            if (iVar2 < 0) goto code_r0x08001cdc;
            strsep(&uStack_30,0x80004cb);
        }
    }
    _printk(0x8000580,uStack_38._4_4_,uStack_38 & 0xffffffff);
    param_3 = 0x80003e0;
    pcVar10 = *(_segment.ehdr + 0x30);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar10);
    iVar2 = (*pcVar10)(_segment.ehdr,&uStack_38);
    pcVar3 = iVar2;
    if (-1 < iVar2) {
        pcVar3 = param_4;
    }
code_r0x08001c30:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(pcVar3);
    *extraout_x18 = sym.show_hysteresis;
    pcStack_58 = sym.show_hysteresis;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uStack_6c = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    pcStack_50 = pcVar10;
    pcStack_48 = param_4;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
        pcVar3 = param_3;
    }
    else {
        pcVar10 = *(_segment.ehdr + 0x48);
        pcVar3 = 0x8000400;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar10);
        iVar2 = (*pcVar10)(_segment.ehdr,&uStack_6c);
        if (-1 < iVar2) {
            pcVar8 = uStack_6c;
            pcVar3 = "%lu\n";
            iVar2 = scnprintf(param_3,0x1000);
        }
        iVar4 = iVar2;
        param_4 = param_3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18_00 = sym.store_hysteresis;
    pcStack_88 = sym.store_hysteresis;
    iVar4 = sp_el0;
    pcVar11 = segment.ehdr;
    iStack_98 = *(iVar4 + 0x5e0);
    acStack_9c[0] = '\0';
    acStack_9c[1] = '\0';
    acStack_9c[2] = '\0';
    acStack_9c[3] = '\0';
    pcVar9 = pcVar8;
    ppuStack_90 = &puStack_60;
    pcStack_80 = pcVar10;
    pcStack_78 = param_4;
    if (_segment.ehdr == 0) {
        pcVar5 = 0xffffffffffffffed;
        pcVar8 = param_4;
    }
    else {
        pcVar7 = acStack_9c;
        iVar2 = kstrtouint(pcVar3,10);
        if (iVar2 < 0) {
            pcVar5 = iVar2;
            pcVar3 = pcVar7;
        }
        else {
            pcVar3 = 0x8000420;
            pcVar11 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11);
            iVar2 = (*pcVar11)(_segment.ehdr,acStack_9c);
            pcVar5 = iVar2;
            if (-1 < iVar2) {
                pcVar5 = pcVar8;
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail(pcVar5);
    *extraout_x18_01 = sym.show_c1dcvs_opt_mode;
    pcStack_b8 = sym.show_c1dcvs_opt_mode;
    iVar4 = sp_el0;
    iStack_c8 = *(iVar4 + 0x5e0);
    uStack_cc = 0;
    pppuStack_c0 = &ppuStack_90;
    pcStack_b0 = pcVar11;
    pcStack_a8 = pcVar8;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
        pcVar5 = pcVar3;
    }
    else {
        pcVar11 = *(_segment.ehdr + 0x58);
        pcVar5 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000440);
        iVar2 = (*pcVar11)(_segment.ehdr,&uStack_cc);
        if (-1 < iVar2) {
            pcVar9 = uStack_cc;
            pcVar5 = "%lu\n";
            iVar2 = scnprintf(pcVar3,0x1000,"%lu\n",pcVar9);
        }
        iVar4 = iVar2;
        pcVar8 = pcVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail(iVar4);
    *extraout_x18_02 = sym.store_c1dcvs_opt_mode;
    pcStack_e8 = sym.store_c1dcvs_opt_mode;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    uStack_fc = 0;
    pppuStack_f0 = &pppuStack_c0;
    pcStack_e0 = pcVar11;
    pcStack_d8 = pcVar8;
    if (_segment.ehdr == 0) {
        pcVar8 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar5,10,&uStack_fc);
        if (iVar2 < 0) {
            pcVar8 = iVar2;
        }
        else {
            pcVar10 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar10,0x8000460);
            iVar2 = (*pcVar10)(_segment.ehdr,&uStack_fc);
            pcVar8 = iVar2;
            if (-1 < iVar2) {
                pcVar8 = pcVar9;
            }
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_f8) {
        auVar12 = __stack_chk_fail(pcVar8);
        puVar6 = auVar12._0_8_;
        *extraout_x18_03 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar12._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar10)();
    }
    return;
}


// ===== sym.store_hysteresis.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001148 (size 8) =====

void sym.store_hysteresis.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uchar *puVar5;
    char *pcVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    char *unaff_x19;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    pcVar8 = segment.ehdr;
    iStack_28 = *(iVar3 + 0x5e0);
    acStack_2c[0] = '\0';
    acStack_2c[1] = '\0';
    acStack_2c[2] = '\0';
    acStack_2c[3] = '\0';
    pcVar7 = param_4;
    if (_segment.ehdr == 0) {
        pcVar4 = 0xffffffffffffffed;
        param_4 = unaff_x19;
    }
    else {
        pcVar6 = acStack_2c;
        iVar2 = kstrtouint(param_3,10);
        if (iVar2 < 0) {
            pcVar4 = iVar2;
            param_3 = pcVar6;
        }
        else {
            param_3 = 0x8000420;
            pcVar8 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
            iVar2 = (*pcVar8)(_segment.ehdr,acStack_2c);
            pcVar4 = iVar2;
            if (-1 < iVar2) {
                pcVar4 = param_4;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(pcVar4);
    *extraout_x18 = sym.show_c1dcvs_opt_mode;
    pcStack_48 = sym.show_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = pcVar8;
    pcStack_38 = param_4;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar4 = param_3;
    }
    else {
        pcVar8 = *(_segment.ehdr + 0x58);
        pcVar4 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar8,0x8000440);
        iVar2 = (*pcVar8)(_segment.ehdr,&uStack_5c);
        if (-1 < iVar2) {
            pcVar7 = uStack_5c;
            pcVar4 = "%lu\n";
            iVar2 = scnprintf(param_3,0x1000,"%lu\n",pcVar7);
        }
        iVar3 = iVar2;
        param_4 = param_3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.store_c1dcvs_opt_mode;
    pcStack_78 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar8;
    pcStack_68 = param_4;
    if (_segment.ehdr == 0) {
        pcVar4 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar4,10,&uStack_8c);
        if (iVar2 < 0) {
            pcVar4 = iVar2;
        }
        else {
            pcVar8 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar8,0x8000460);
            iVar2 = (*pcVar8)(_segment.ehdr,&uStack_8c);
            pcVar4 = iVar2;
            if (-1 < iVar2) {
                pcVar4 = pcVar7;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_88) {
        auVar9 = __stack_chk_fail(pcVar4);
        puVar5 = auVar9._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar8)();
    }
    return;
}


// ===== sym.attr_store.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.attr_store.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
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
        if (6 < (pcVar2 + -0x8001138 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000300);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.store_c1dcvs_opt_mode.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001158 (size 8) =====

void sym.store_c1dcvs_opt_mode.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
               (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
    }
    else {
        iVar2 = kstrtouint(param_3,10,&uStack_2c);
        if (iVar2 < 0) {
            iVar3 = iVar2;
        }
        else {
            pcVar5 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar5,0x8000460);
            iVar2 = (*pcVar5)(_segment.ehdr,&uStack_2c);
            iVar3 = iVar2;
            if (-1 < iVar2) {
                iVar3 = param_4;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail(iVar3);
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar5)();
    }
    return;
}


// ===== sym.store_enable_c1dcvs.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001160 (size 8) =====

char * sym.store_enable_c1dcvs.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
                 (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    char *pcVar9;
    char *pcVar10;
    int *piVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar13;
    int iVar14;
    ulong unaff_x30;
    char acStack_8c [4];
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    puVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar13 = segment.ehdr;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_30 = 0;
    pcVar12 = param_4;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar1 = kstrtouint(param_3,10);
        if (iVar1 < 0) {
            param_4 = iVar1;
            goto code_r0x08001654;
        }
        mutex_lock(obj.ops);
        uVar2 = _segment.ehdr;
        _segment.ehdr = uStack_30;
        uStack_2c = uStack_30;
        if (uVar2 <= uStack_30) {
            uStack_2c = uVar2;
        }
        if (CONCAT44(*0x8000004,uStack_30) != NULL) {
            pcVar13 = *CONCAT44(*0x8000004,uStack_30);
            puVar8 = 0x80002a0;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
            uVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
            pcVar13 = uVar2;
            mutex_unlock(obj.ops);
            if (uVar2 < 0) {
                param_4 = uVar2;
            }
            goto code_r0x08001654;
        }
        mutex_unlock(obj.ops);
        param_3 = puVar8;
    }
    param_4 = 0xffffffffffffffed;
    puVar8 = param_3;
code_r0x08001654:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.show_enable_trace;
    pcStack_48 = sym.show_enable_trace;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = pcVar13;
    pcStack_38 = param_4;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar5 = 0xffffffffffffffed;
        pcVar9 = puVar8;
    }
    else {
        pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        pcVar9 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
        iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_5c);
        if (-1 < iVar1) {
            pcVar12 = uStack_5c;
            pcVar9 = "%lu\n";
            iVar1 = scnprintf(puVar8,0x1000);
        }
        pcVar5 = iVar1;
        param_4 = puVar8;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        __stack_chk_fail(pcVar5);
        *extraout_x18_00 = sym.store_enable_trace;
        pcStack_78 = sym.store_enable_trace;
        iVar7 = sp_el0;
        iStack_88 = *(iVar7 + 0x5e0);
        acStack_8c[0] = '\0';
        acStack_8c[1] = '\0';
        acStack_8c[2] = '\0';
        acStack_8c[3] = '\0';
        ppuStack_80 = &puStack_50;
        pcStack_70 = pcVar13;
        pcStack_68 = param_4;
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            pcVar5 = 0xffffffffffffffed;
        }
        else {
            pcVar10 = acStack_8c;
            iVar1 = kstrtouint(pcVar9,10);
            if (iVar1 < 0) {
                pcVar5 = iVar1;
                pcVar9 = pcVar10;
            }
            else {
                pcVar9 = 0x8000360;
                pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),acStack_8c);
                pcVar5 = iVar1;
                if (-1 < iVar1) {
                    pcVar5 = pcVar12;
                }
            }
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_88) {
            uVar3 = __stack_chk_fail(pcVar5);
            *extraout_x18_01 = sym.show_ipc_thresh;
            if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                pcVar12 = 0xffffffffffffffed;
            }
            else {
                *pcVar9 = uVar3;
                uVar6 = __sw_hweight64();
                iVar7 = __kmalloc((uVar6 & 0xffffffff) << 2,0xdc0);
                if (iVar7 == 0) {
                    pcVar12 = 0xfffffffffffffff4;
                }
                else {
                    piVar11 = 0x8000380;
                    pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                    iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),iVar7);
                    if (-1 < iVar1) {
                        uVar2 = 0;
                        iVar14 = 0;
                        while( true ) {
                            *piVar11 = iVar1;
                            uVar4 = __sw_hweight64();
                            if ((uVar4 <= uVar2) || (*(iVar7 + uVar2 * 4) == 0)) break;
                            piVar11 = "%lu\t";
                            iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14);
                            uVar2 = uVar2 + 1;
                            iVar14 = iVar1 + iVar14;
                        }
                        iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14,0x80005ba);
                        iVar1 = iVar1 + iVar14;
                    }
                    kfree(iVar7);
                    pcVar12 = iVar1;
                }
            }
            return pcVar12;
        }
        return pcVar5;
    }
    return pcVar5;
}


// ===== sym.store_ipc_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001168 (size 8) =====

int64_t sym.store_ipc_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
                  (ulong param_1,ulong param_2,ulong *param_3,int64_t param_4)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    int iVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = kstrdup(param_3,0xcc0);
    uStack_38 = 0;
    if (_segment.ehdr == 0) {
        iVar6 = -0x13;
        goto code_r0x080019a4;
    }
    iVar6 = strsep(&uStack_30,0x80004cb);
    if (iVar6 != 0) {
        param_3 = &uStack_38;
        iVar3 = kstrtouint(iVar6,10);
        if (iVar3 < 0) {
code_r0x08001a50:
            _printk(0x80005ff,iVar3);
            iVar6 = -0x16;
            goto code_r0x080019a4;
        }
        iVar6 = strsep(&uStack_30,0x80004cb);
        if (iVar6 != 0) {
            param_3 = &uStack_38 | 4;
            iVar3 = kstrtouint(iVar6,10);
            if (iVar3 < 0) goto code_r0x08001a50;
            strsep(&uStack_30,0x80004cb);
        }
    }
    _printk(0x8000580,uStack_38._4_4_,uStack_38 & 0xffffffff);
    param_3 = 0x80003a0;
    pcVar8 = *(_segment.ehdr + 0x20);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
    iVar3 = (*pcVar8)(_segment.ehdr,&uStack_38);
    iVar6 = iVar3;
    if (-1 < iVar3) {
        iVar6 = param_4;
    }
code_r0x080019a4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        uVar2 = __stack_chk_fail(iVar6);
        *extraout_x18 = sym.show_efreq_thresh;
        if (_segment.ehdr == 0) {
            iVar6 = -0x13;
        }
        else {
            *param_3 = uVar2;
            uVar5 = __sw_hweight64();
            iVar6 = __kmalloc((uVar5 & 0xffffffff) << 2,0xdc0);
            if (iVar6 == 0) {
                iVar6 = -0xc;
            }
            else {
                piVar7 = 0x80003c0;
                pcVar8 = *(_segment.ehdr + 0x38);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
                iVar3 = (*pcVar8)(_segment.ehdr,iVar6);
                if (-1 < iVar3) {
                    uVar10 = 0;
                    iVar9 = 0;
                    while( true ) {
                        *piVar7 = iVar3;
                        uVar4 = __sw_hweight64();
                        if ((uVar4 <= uVar10) || (*(iVar6 + uVar10 * 4) == 0)) break;
                        piVar7 = "%lu\t";
                        iVar3 = scnprintf(param_3 + iVar9,0x1000 - iVar9);
                        uVar10 = uVar10 + 1;
                        iVar9 = iVar3 + iVar9;
                    }
                    iVar3 = scnprintf(param_3 + iVar9,0x1000 - iVar9,0x80005ba);
                    iVar3 = iVar3 + iVar9;
                }
                kfree(iVar6);
                iVar6 = iVar3;
            }
        }
        return iVar6;
    }
    return iVar6;
}


// ===== sym.scmi_c1dcvs_probe.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.scmi_c1dcvs_probe.7aa76c4d89730456b0f894195dadb2c4.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar2 = 0xffffffed;
    }
    else {
        pcVar3 = *(*(param_1 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar3,0x80002c0);
        uVar2 = (*pcVar3)(param_1,0x87,obj.ph);
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            iVar1 = kobject_init_and_add(obj.c1dcvs_kobj,obj.c1dcvs_settings_ktype,_mutex_lock,"c1dcvs");
            if (iVar1 < 0) {
                _printk(0x80005bc,iVar1);
                kobject_put(obj.c1dcvs_kobj);
            }
            uVar2 = 0;
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
        }
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x08001178 (size 8) =====

char * sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr
                 (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    uint32_t *puVar10;
    char *pcVar11;
    int *piVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    char *unaff_x19;
    code *unaff_x20;
    code *pcVar13;
    int iVar14;
    ulong unaff_x30;
    char acStack_bc [4];
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar5 = 0xffffffffffffffed;
        pcVar9 = param_3;
    }
    else {
        unaff_x20 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        pcVar9 = 0x8000320;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar1 = (*unaff_x20)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
        if (-1 < iVar1) {
            param_4 = uStack_2c;
            pcVar9 = "%lu\n";
            iVar1 = scnprintf(param_3,0x1000);
        }
        pcVar5 = iVar1;
        unaff_x19 = param_3;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return pcVar5;
    }
    __stack_chk_fail(pcVar5);
    puVar10 = &uStack_60;
    *extraout_x18 = sym.store_enable_c1dcvs;
    pcStack_48 = sym.store_enable_c1dcvs;
    iVar8 = sp_el0;
    pcVar13 = segment.ehdr;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_60 = 0;
    pcVar5 = param_4;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    pcStack_38 = unaff_x19;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar1 = kstrtouint(pcVar9,10);
        if (iVar1 < 0) {
            param_4 = iVar1;
            goto code_r0x08001654;
        }
        mutex_lock(obj.ops);
        uVar2 = _segment.ehdr;
        _segment.ehdr = uStack_60;
        uStack_5c = uStack_60;
        if (uVar2 <= uStack_60) {
            uStack_5c = uVar2;
        }
        if (CONCAT44(*0x8000004,uStack_60) != NULL) {
            pcVar13 = *CONCAT44(*0x8000004,uStack_60);
            puVar10 = 0x80002a0;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
            uVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_5c);
            pcVar13 = uVar2;
            mutex_unlock(obj.ops);
            if (uVar2 < 0) {
                param_4 = uVar2;
            }
            goto code_r0x08001654;
        }
        mutex_unlock(obj.ops);
        pcVar9 = puVar10;
    }
    param_4 = 0xffffffffffffffed;
    puVar10 = pcVar9;
code_r0x08001654:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.show_enable_trace;
    pcStack_78 = sym.show_enable_trace;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar13;
    pcStack_68 = param_4;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar6 = 0xffffffffffffffed;
        pcVar9 = puVar10;
    }
    else {
        pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        pcVar9 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
        iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_8c);
        if (-1 < iVar1) {
            pcVar5 = uStack_8c;
            pcVar9 = "%lu\n";
            iVar1 = scnprintf(puVar10,0x1000);
        }
        pcVar6 = iVar1;
        param_4 = puVar10;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_88) {
        __stack_chk_fail(pcVar6);
        *extraout_x18_01 = sym.store_enable_trace;
        pcStack_a8 = sym.store_enable_trace;
        iVar8 = sp_el0;
        iStack_b8 = *(iVar8 + 0x5e0);
        acStack_bc[0] = '\0';
        acStack_bc[1] = '\0';
        acStack_bc[2] = '\0';
        acStack_bc[3] = '\0';
        pppuStack_b0 = &ppuStack_80;
        pcStack_a0 = pcVar13;
        pcStack_98 = param_4;
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            pcVar6 = 0xffffffffffffffed;
        }
        else {
            pcVar11 = acStack_bc;
            iVar1 = kstrtouint(pcVar9,10);
            if (iVar1 < 0) {
                pcVar6 = iVar1;
                pcVar9 = pcVar11;
            }
            else {
                pcVar9 = 0x8000360;
                pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),acStack_bc);
                pcVar6 = iVar1;
                if (-1 < iVar1) {
                    pcVar6 = pcVar5;
                }
            }
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) != iStack_b8) {
            uVar3 = __stack_chk_fail(pcVar6);
            *extraout_x18_02 = sym.show_ipc_thresh;
            if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                pcVar9 = 0xffffffffffffffed;
            }
            else {
                *pcVar9 = uVar3;
                uVar7 = __sw_hweight64();
                iVar8 = __kmalloc((uVar7 & 0xffffffff) << 2,0xdc0);
                if (iVar8 == 0) {
                    pcVar9 = 0xfffffffffffffff4;
                }
                else {
                    piVar12 = 0x8000380;
                    pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                    iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),iVar8);
                    if (-1 < iVar1) {
                        uVar2 = 0;
                        iVar14 = 0;
                        while( true ) {
                            *piVar12 = iVar1;
                            uVar4 = __sw_hweight64();
                            if ((uVar4 <= uVar2) || (*(iVar8 + uVar2 * 4) == 0)) break;
                            piVar12 = "%lu\t";
                            iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14);
                            uVar2 = uVar2 + 1;
                            iVar14 = iVar1 + iVar14;
                        }
                        iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14,0x80005ba);
                        iVar1 = iVar1 + iVar14;
                    }
                    kfree(iVar8);
                    pcVar9 = iVar1;
                }
            }
            return pcVar9;
        }
        return pcVar6;
    }
    return pcVar6;
}


// ===== sym.show_efreq_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001180 (size 8) =====

int64_t sym.show_efreq_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt(uint param_1,ulong param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong *in_x18;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
    }
    else {
        *param_3 = param_1;
        uVar3 = __sw_hweight64();
        iVar4 = __kmalloc((uVar3 & 0xffffffff) << 2,0xdc0);
        if (iVar4 == 0) {
            iVar4 = -0xc;
        }
        else {
            piVar5 = 0x80003c0;
            pcVar6 = *(_segment.ehdr + 0x38);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar6);
            iVar1 = (*pcVar6)(_segment.ehdr,iVar4);
            if (-1 < iVar1) {
                uVar8 = 0;
                iVar7 = 0;
                while( true ) {
                    *piVar5 = iVar1;
                    uVar2 = __sw_hweight64();
                    if ((uVar2 <= uVar8) || (*(iVar4 + uVar8 * 4) == 0)) break;
                    piVar5 = "%lu\t";
                    iVar1 = scnprintf(param_3 + iVar7,0x1000 - iVar7);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar1 + iVar7;
                }
                iVar1 = scnprintf(param_3 + iVar7,0x1000 - iVar7,0x80005ba);
                iVar1 = iVar1 + iVar7;
            }
            kfree(iVar4);
            iVar4 = iVar1;
        }
    }
    return iVar4;
}


// ===== sym.show_hysteresis.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001188 (size 8) =====

void sym.show_hysteresis.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,char *param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uchar *puVar6;
    char *pcVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    char *unaff_x19;
    code *unaff_x20;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    uint uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    char acStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar5 = param_3;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x48);
        pcVar5 = 0x8000400;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar2 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        if (-1 < iVar2) {
            param_4 = uStack_2c;
            pcVar5 = "%lu\n";
            iVar2 = scnprintf(param_3,0x1000);
        }
        iVar3 = iVar2;
        unaff_x19 = param_3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18 = sym.store_hysteresis;
    pcStack_48 = sym.store_hysteresis;
    iVar3 = sp_el0;
    pcVar9 = segment.ehdr;
    iStack_58 = *(iVar3 + 0x5e0);
    acStack_5c[0] = '\0';
    acStack_5c[1] = '\0';
    acStack_5c[2] = '\0';
    acStack_5c[3] = '\0';
    pcVar8 = param_4;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    pcStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        pcVar4 = 0xffffffffffffffed;
        param_4 = unaff_x19;
    }
    else {
        pcVar7 = acStack_5c;
        iVar2 = kstrtouint(pcVar5,10);
        if (iVar2 < 0) {
            pcVar4 = iVar2;
            pcVar5 = pcVar7;
        }
        else {
            pcVar5 = 0x8000420;
            pcVar9 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar2 = (*pcVar9)(_segment.ehdr,acStack_5c);
            pcVar4 = iVar2;
            if (-1 < iVar2) {
                pcVar4 = param_4;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(pcVar4);
    *extraout_x18_00 = sym.show_c1dcvs_opt_mode;
    pcStack_78 = sym.show_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar9;
    pcStack_68 = param_4;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar4 = pcVar5;
    }
    else {
        pcVar9 = *(_segment.ehdr + 0x58);
        pcVar4 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar9,0x8000440);
        iVar2 = (*pcVar9)(_segment.ehdr,&uStack_8c);
        if (-1 < iVar2) {
            pcVar8 = uStack_8c;
            pcVar4 = "%lu\n";
            iVar2 = scnprintf(pcVar5,0x1000,"%lu\n",pcVar8);
        }
        iVar3 = iVar2;
        param_4 = pcVar5;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_88) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.store_c1dcvs_opt_mode;
    pcStack_a8 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_bc = 0;
    pppuStack_b0 = &ppuStack_80;
    pcStack_a0 = pcVar9;
    pcStack_98 = param_4;
    if (_segment.ehdr == 0) {
        pcVar5 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar4,10,&uStack_bc);
        if (iVar2 < 0) {
            pcVar5 = iVar2;
        }
        else {
            pcVar9 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9,0x8000460);
            iVar2 = (*pcVar9)(_segment.ehdr,&uStack_bc);
            pcVar5 = iVar2;
            if (-1 < iVar2) {
                pcVar5 = pcVar8;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_b8) {
        auVar10 = __stack_chk_fail(pcVar5);
        puVar6 = auVar10._0_8_;
        *extraout_x18_02 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar10._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar9)();
    }
    return;
}


// ===== sym.attr_show.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.attr_show.7aa76c4d89730456b0f894195dadb2c4.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

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
        if (6 < (pcVar2 + -0x8001178 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80002e0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.show_enable_trace.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.show_enable_trace.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
                   (ulong param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    char *unaff_x19;
    code *unaff_x20;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    char acStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
        pcVar6 = param_3;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x18);
        pcVar6 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar1 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        if (-1 < iVar1) {
            param_4 = uStack_2c;
            pcVar6 = "%lu\n";
            iVar1 = scnprintf(param_3,0x1000);
        }
        uVar4 = iVar1;
        unaff_x19 = param_3;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.store_enable_trace;
    pcStack_48 = sym.store_enable_trace;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    acStack_5c[0] = '\0';
    acStack_5c[1] = '\0';
    acStack_5c[2] = '\0';
    acStack_5c[3] = '\0';
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    pcStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
    }
    else {
        pcVar7 = acStack_5c;
        iVar1 = kstrtouint(pcVar6,10);
        if (iVar1 < 0) {
            uVar4 = iVar1;
            pcVar6 = pcVar7;
        }
        else {
            pcVar6 = 0x8000360;
            pcVar9 = *(_segment.ehdr + 0x10);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar1 = (*pcVar9)(_segment.ehdr,acStack_5c);
            uVar4 = iVar1;
            if (-1 < iVar1) {
                uVar4 = param_4;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        uVar2 = __stack_chk_fail(uVar4);
        *extraout_x18_00 = sym.show_ipc_thresh;
        if (_segment.ehdr == 0) {
            uVar4 = 0xffffffffffffffed;
        }
        else {
            *pcVar6 = uVar2;
            uVar4 = __sw_hweight64();
            iVar5 = __kmalloc((uVar4 & 0xffffffff) << 2,0xdc0);
            if (iVar5 == 0) {
                uVar4 = 0xfffffffffffffff4;
            }
            else {
                piVar8 = 0x8000380;
                pcVar9 = *(_segment.ehdr + 0x28);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
                iVar1 = (*pcVar9)(_segment.ehdr,iVar5);
                if (-1 < iVar1) {
                    uVar11 = 0;
                    iVar10 = 0;
                    while( true ) {
                        *piVar8 = iVar1;
                        uVar3 = __sw_hweight64();
                        if ((uVar3 <= uVar11) || (*(iVar5 + uVar11 * 4) == 0)) break;
                        piVar8 = "%lu\t";
                        iVar1 = scnprintf(pcVar6 + iVar10,0x1000 - iVar10);
                        uVar11 = uVar11 + 1;
                        iVar10 = iVar1 + iVar10;
                    }
                    iVar1 = scnprintf(pcVar6 + iVar10,0x1000 - iVar10,0x80005ba);
                    iVar1 = iVar1 + iVar10;
                }
                kfree(iVar5);
                uVar4 = iVar1;
            }
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.show_ipc_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x080011a0 (size 8) =====

int64_t sym.show_ipc_thresh.7aa76c4d89730456b0f894195dadb2c4.cfi_jt(uint param_1,ulong param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong *in_x18;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
    }
    else {
        *param_3 = param_1;
        uVar3 = __sw_hweight64();
        iVar4 = __kmalloc((uVar3 & 0xffffffff) << 2,0xdc0);
        if (iVar4 == 0) {
            iVar4 = -0xc;
        }
        else {
            piVar5 = 0x8000380;
            pcVar6 = *(_segment.ehdr + 0x28);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar6);
            iVar1 = (*pcVar6)(_segment.ehdr,iVar4);
            if (-1 < iVar1) {
                uVar8 = 0;
                iVar7 = 0;
                while( true ) {
                    *piVar5 = iVar1;
                    uVar2 = __sw_hweight64();
                    if ((uVar2 <= uVar8) || (*(iVar4 + uVar8 * 4) == 0)) break;
                    piVar5 = "%lu\t";
                    iVar1 = scnprintf(param_3 + iVar7,0x1000 - iVar7);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar1 + iVar7;
                }
                iVar1 = scnprintf(param_3 + iVar7,0x1000 - iVar7,0x80005ba);
                iVar1 = iVar1 + iVar7;
            }
            kfree(iVar4);
            iVar4 = iVar1;
        }
    }
    return iVar4;
}


// ===== sym.show_c1dcvs_opt_mode.7aa76c4d89730456b0f894195dadb2c4.cfi_jt @ 0x080011a8 (size 8) =====

void sym.show_c1dcvs_opt_mode.7aa76c4d89730456b0f894195dadb2c4.cfi_jt
               (ulong param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    char *unaff_x19;
    code *unaff_x20;
    code *pcVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar6 = param_3;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x58);
        pcVar6 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20,0x8000440);
        iVar2 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        if (-1 < iVar2) {
            param_4 = uStack_2c;
            pcVar6 = "%lu\n";
            iVar2 = scnprintf(param_3,0x1000,"%lu\n",param_4);
        }
        iVar3 = iVar2;
        unaff_x19 = param_3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18 = sym.store_c1dcvs_opt_mode;
    pcStack_48 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    pcStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar6,10,&uStack_5c);
        if (iVar2 < 0) {
            uVar4 = iVar2;
        }
        else {
            pcVar7 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar7,0x8000460);
            iVar2 = (*pcVar7)(_segment.ehdr,&uStack_5c);
            uVar4 = iVar2;
            if (-1 < iVar2) {
                uVar4 = param_4;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        auVar8 = __stack_chk_fail(uVar4);
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar7)();
    }
    return;
}


// ===== sym.c1dcvs_enable @ 0x080011b0 (size 236) =====

ulong * sym.c1dcvs_enable(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar5;
    ulong *puVar6;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    if (_segment.ehdr == NULL) {
        puVar6 = 0xfffffdfb;
    }
    else {
        uVar1 = arg1 & 1;
        mutex_lock(obj.ops);
        uStack_2c = _segment.ehdr;
        _segment.ehdr = CONCAT44(*0x8000004,arg1) & 0xffffffff00000001;
        if (uVar1 <= uStack_2c) {
            uStack_2c = uVar1;
        }
        if (_segment.ehdr == NULL) {
            puVar6 = 0xffffffed;
        }
        else {
            pcVar5 = *_segment.ehdr;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar5,0x80002a0);
            uVar3 = (*pcVar5)(_segment.ehdr,&uStack_2c);
            puVar6 = uVar3 & 0xffffffff;
        }
        mutex_unlock(obj.ops);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return puVar6;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.scmi_c1dcvs_probe;
    if (iVar4 == 0) {
        puVar6 = 0xffffffed;
    }
    else {
        pcVar5 = *(*(iVar4 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar5,0x80002c0);
        puVar6 = (*pcVar5)(iVar4,0x87,obj.ph);
        _segment.ehdr = puVar6;
        if (puVar6 < 0xfffffffffffff001) {
            iVar2 = kobject_init_and_add(obj.c1dcvs_kobj,obj.c1dcvs_settings_ktype,_mutex_lock,"c1dcvs");
            if (iVar2 < 0) {
                _printk(0x80005bc,iVar2);
                kobject_put(obj.c1dcvs_kobj);
            }
            puVar6 = NULL;
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
        }
    }
    return puVar6;
}


// ===== sym.scmi_c1dcvs_probe @ 0x0800129c (size 228) =====

uint64_t sym.scmi_c1dcvs_probe(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar2 = 0xffffffed;
    }
    else {
        pcVar3 = *(*(arg1 + 0x3a0) + 0x10);
        __cfi_slowpath_diag(0x25d5be01bcd057e5,pcVar3,0x80002c0);
        uVar2 = (*pcVar3)(arg1,0x87,obj.ph);
        _segment.ehdr = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            iVar1 = kobject_init_and_add(obj.c1dcvs_kobj,obj.c1dcvs_settings_ktype,_mutex_lock,"c1dcvs");
            if (iVar1 < 0) {
                _printk(0x80005bc,iVar1);
                kobject_put(obj.c1dcvs_kobj);
            }
            uVar2 = 0;
            _segment.ehdr = CONCAT44(_segment.ehdr >> 0x20,1);
        }
    }
    return uVar2;
}


// ===== sym.attr_show @ 0x08001380 (size 148) =====

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
        if (6 < (pcVar2 + -0x8001178 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80002e0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x08001414 (size 148) =====

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
        if (6 < (pcVar2 + -0x8001138 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000300);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.show_enable_c1dcvs @ 0x080014a8 (size 196) =====

char * sym.show_enable_c1dcvs(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    uint32_t *puVar10;
    char *pcVar11;
    int *piVar12;
    char *in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t unaff_x19;
    code *unaff_x20;
    code *pcVar13;
    int iVar14;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    char acStack_bc [4];
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = 0;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar5 = 0xffffffffffffffed;
        pcVar9 = arg2;
    }
    else {
        unaff_x20 = *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        pcVar9 = 0x8000320;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar1 = (*unaff_x20)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
        noname_1 = extraout_q0;
        if (-1 < iVar1) {
            in_x3 = uStack_2c;
            pcVar9 = "%lu\n";
            iVar1 = scnprintf(arg2,0x1000);
            noname_1 = extraout_q0_00;
        }
        pcVar5 = iVar1;
        unaff_x19 = arg2;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return pcVar5;
    }
    __stack_chk_fail(noname_1,pcVar5);
    puVar10 = &uStack_60;
    *extraout_x18 = sym.store_enable_c1dcvs;
    pcStack_48 = sym.store_enable_c1dcvs;
    iVar8 = sp_el0;
    pcVar13 = segment.ehdr;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_60 = 0;
    pcVar5 = in_x3;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    iStack_38 = unaff_x19;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        iVar1 = kstrtouint(pcVar9,10);
        if (iVar1 < 0) {
            in_x3 = iVar1;
            goto code_r0x08001654;
        }
        mutex_lock(obj.ops);
        uVar2 = _segment.ehdr;
        _segment.ehdr = uStack_60;
        uStack_5c = uStack_60;
        if (uVar2 <= uStack_60) {
            uStack_5c = uVar2;
        }
        if (CONCAT44(*0x8000004,uStack_60) != NULL) {
            pcVar13 = *CONCAT44(*0x8000004,uStack_60);
            puVar10 = 0x80002a0;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
            uVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_5c);
            pcVar13 = uVar2;
            mutex_unlock(obj.ops);
            if (uVar2 < 0) {
                in_x3 = uVar2;
            }
            goto code_r0x08001654;
        }
        mutex_unlock(obj.ops);
        pcVar9 = puVar10;
    }
    in_x3 = 0xffffffffffffffed;
    puVar10 = pcVar9;
code_r0x08001654:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return in_x3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.show_enable_trace;
    pcStack_78 = sym.show_enable_trace;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar13;
    pcStack_68 = in_x3;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar6 = 0xffffffffffffffed;
        pcVar9 = puVar10;
    }
    else {
        pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        pcVar9 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
        iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_8c);
        if (-1 < iVar1) {
            pcVar5 = uStack_8c;
            pcVar9 = "%lu\n";
            iVar1 = scnprintf(puVar10,0x1000);
        }
        pcVar6 = iVar1;
        in_x3 = puVar10;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_88) {
        __stack_chk_fail(pcVar6);
        *extraout_x18_01 = sym.store_enable_trace;
        pcStack_a8 = sym.store_enable_trace;
        iVar8 = sp_el0;
        iStack_b8 = *(iVar8 + 0x5e0);
        acStack_bc[0] = '\0';
        acStack_bc[1] = '\0';
        acStack_bc[2] = '\0';
        acStack_bc[3] = '\0';
        pppuStack_b0 = &ppuStack_80;
        pcStack_a0 = pcVar13;
        pcStack_98 = in_x3;
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            pcVar6 = 0xffffffffffffffed;
        }
        else {
            pcVar11 = acStack_bc;
            iVar1 = kstrtouint(pcVar9,10);
            if (iVar1 < 0) {
                pcVar6 = iVar1;
                pcVar9 = pcVar11;
            }
            else {
                pcVar9 = 0x8000360;
                pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),acStack_bc);
                pcVar6 = iVar1;
                if (-1 < iVar1) {
                    pcVar6 = pcVar5;
                }
            }
        }
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) != iStack_b8) {
            uVar3 = __stack_chk_fail(pcVar6);
            *extraout_x18_02 = sym.show_ipc_thresh;
            if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                pcVar9 = 0xffffffffffffffed;
            }
            else {
                *pcVar9 = uVar3;
                uVar7 = __sw_hweight64();
                iVar8 = __kmalloc((uVar7 & 0xffffffff) << 2,0xdc0);
                if (iVar8 == 0) {
                    pcVar9 = 0xfffffffffffffff4;
                }
                else {
                    piVar12 = 0x8000380;
                    pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                    iVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),iVar8);
                    if (-1 < iVar1) {
                        uVar2 = 0;
                        iVar14 = 0;
                        while( true ) {
                            *piVar12 = iVar1;
                            uVar4 = __sw_hweight64();
                            if ((uVar4 <= uVar2) || (*(iVar8 + uVar2 * 4) == 0)) break;
                            piVar12 = "%lu\t";
                            iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14);
                            uVar2 = uVar2 + 1;
                            iVar14 = iVar1 + iVar14;
                        }
                        iVar1 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14,0x80005ba);
                        iVar1 = iVar1 + iVar14;
                    }
                    kfree(iVar8);
                    pcVar9 = iVar1;
                }
            }
            return pcVar9;
        }
        return pcVar6;
    }
    return pcVar6;
}


// ===== sym.store_enable_c1dcvs @ 0x0800156c (size 284) =====

char * sym.store_enable_c1dcvs(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    char *pcVar9;
    char *pcVar10;
    int *piVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    code *pcVar13;
    int iVar14;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    char acStack_8c [4];
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    puVar8 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar13 = segment.ehdr;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_30 = 0;
    pcVar12 = arg3;
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        arg1 = kstrtouint(arg2,10);
        if (arg1 < 0) {
            arg3 = arg1;
            noname_1 = extraout_q0;
            goto code_r0x08001654;
        }
        mutex_lock(obj.ops);
        uVar1 = _segment.ehdr;
        _segment.ehdr = uStack_30;
        uStack_2c = uStack_30;
        if (uVar1 <= uStack_30) {
            uStack_2c = uVar1;
        }
        if (CONCAT44(*0x8000004,uStack_30) != NULL) {
            pcVar13 = *CONCAT44(*0x8000004,uStack_30);
            puVar8 = 0x80002a0;
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
            uVar1 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_2c);
            pcVar13 = uVar1;
            arg1 = mutex_unlock(obj.ops);
            noname_1 = extraout_q0_00;
            if (uVar1 < 0) {
                arg3 = uVar1;
            }
            goto code_r0x08001654;
        }
        arg1 = mutex_unlock(obj.ops);
        arg2 = puVar8;
        noname_1 = extraout_q0_01;
    }
    arg3 = -0x13;
    puVar8 = arg2;
code_r0x08001654:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail(noname_1,arg1);
    *extraout_x18 = sym.show_enable_trace;
    pcStack_48 = sym.show_enable_trace;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = pcVar13;
    pcStack_38 = arg3;
    if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
        pcVar5 = 0xffffffffffffffed;
        pcVar9 = puVar8;
    }
    else {
        pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18);
        pcVar9 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
        iVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),&uStack_5c);
        if (-1 < iVar2) {
            pcVar12 = uStack_5c;
            pcVar9 = "%lu\n";
            iVar2 = scnprintf(puVar8,0x1000);
        }
        pcVar5 = iVar2;
        arg3 = puVar8;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_58) {
        __stack_chk_fail(pcVar5);
        *extraout_x18_00 = sym.store_enable_trace;
        pcStack_78 = sym.store_enable_trace;
        iVar7 = sp_el0;
        iStack_88 = *(iVar7 + 0x5e0);
        acStack_8c[0] = '\0';
        acStack_8c[1] = '\0';
        acStack_8c[2] = '\0';
        acStack_8c[3] = '\0';
        ppuStack_80 = &puStack_50;
        pcStack_70 = pcVar13;
        pcStack_68 = arg3;
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            pcVar5 = 0xffffffffffffffed;
        }
        else {
            pcVar10 = acStack_8c;
            iVar2 = kstrtouint(pcVar9,10);
            if (iVar2 < 0) {
                pcVar5 = iVar2;
                pcVar9 = pcVar10;
            }
            else {
                pcVar9 = 0x8000360;
                pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                iVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),acStack_8c);
                pcVar5 = iVar2;
                if (-1 < iVar2) {
                    pcVar5 = pcVar12;
                }
            }
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_88) {
            uVar3 = __stack_chk_fail(pcVar5);
            *extraout_x18_01 = sym.show_ipc_thresh;
            if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
                pcVar12 = 0xffffffffffffffed;
            }
            else {
                *pcVar9 = uVar3;
                uVar6 = __sw_hweight64();
                iVar7 = __kmalloc((uVar6 & 0xffffffff) << 2,0xdc0);
                if (iVar7 == 0) {
                    pcVar12 = 0xfffffffffffffff4;
                }
                else {
                    piVar11 = 0x8000380;
                    pcVar13 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28);
                    __cfi_slowpath_diag(0x376863d1de02459b,pcVar13);
                    iVar2 = (*pcVar13)(CONCAT44(*0x8000004,_segment.ehdr),iVar7);
                    if (-1 < iVar2) {
                        uVar1 = 0;
                        iVar14 = 0;
                        while( true ) {
                            *piVar11 = iVar2;
                            uVar4 = __sw_hweight64();
                            if ((uVar4 <= uVar1) || (*(iVar7 + uVar1 * 4) == 0)) break;
                            piVar11 = "%lu\t";
                            iVar2 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14);
                            uVar1 = uVar1 + 1;
                            iVar14 = iVar2 + iVar14;
                        }
                        iVar2 = scnprintf(pcVar9 + iVar14,0x1000 - iVar14,0x80005ba);
                        iVar2 = iVar2 + iVar14;
                    }
                    kfree(iVar7);
                    pcVar12 = iVar2;
                }
            }
            return pcVar12;
        }
        return pcVar5;
    }
    return pcVar5;
}


// ===== sym.show_enable_trace @ 0x08001688 (size 196) =====

uint64_t sym.show_enable_trace(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    int *piVar8;
    uint64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    code *unaff_x20;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    char acStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
        pcVar6 = arg2;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x18);
        pcVar6 = 0x8000340;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar1 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        noname_1 = extraout_q0;
        if (-1 < iVar1) {
            in_x3 = uStack_2c;
            pcVar6 = "%lu\n";
            iVar1 = scnprintf(arg2,0x1000);
            noname_1 = extraout_q0_00;
        }
        uVar4 = iVar1;
        unaff_x19 = arg2;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail(noname_1,uVar4);
    *extraout_x18 = sym.store_enable_trace;
    pcStack_48 = sym.store_enable_trace;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    acStack_5c[0] = '\0';
    acStack_5c[1] = '\0';
    acStack_5c[2] = '\0';
    acStack_5c[3] = '\0';
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    iStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
    }
    else {
        pcVar7 = acStack_5c;
        iVar1 = kstrtouint(pcVar6,10);
        if (iVar1 < 0) {
            uVar4 = iVar1;
            pcVar6 = pcVar7;
        }
        else {
            pcVar6 = 0x8000360;
            pcVar9 = *(_segment.ehdr + 0x10);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar1 = (*pcVar9)(_segment.ehdr,acStack_5c);
            uVar4 = iVar1;
            if (-1 < iVar1) {
                uVar4 = in_x3;
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_58) {
        uVar2 = __stack_chk_fail(uVar4);
        *extraout_x18_00 = sym.show_ipc_thresh;
        if (_segment.ehdr == 0) {
            uVar4 = 0xffffffffffffffed;
        }
        else {
            *pcVar6 = uVar2;
            uVar4 = __sw_hweight64();
            iVar5 = __kmalloc((uVar4 & 0xffffffff) << 2,0xdc0);
            if (iVar5 == 0) {
                uVar4 = 0xfffffffffffffff4;
            }
            else {
                piVar8 = 0x8000380;
                pcVar9 = *(_segment.ehdr + 0x28);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
                iVar1 = (*pcVar9)(_segment.ehdr,iVar5);
                if (-1 < iVar1) {
                    uVar11 = 0;
                    iVar10 = 0;
                    while( true ) {
                        *piVar8 = iVar1;
                        uVar3 = __sw_hweight64();
                        if ((uVar3 <= uVar11) || (*(iVar5 + uVar11 * 4) == 0)) break;
                        piVar8 = "%lu\t";
                        iVar1 = scnprintf(pcVar6 + iVar10,0x1000 - iVar10);
                        uVar11 = uVar11 + 1;
                        iVar10 = iVar1 + iVar10;
                    }
                    iVar1 = scnprintf(pcVar6 + iVar10,0x1000 - iVar10,0x80005ba);
                    iVar1 = iVar1 + iVar10;
                }
                kfree(iVar5);
                uVar4 = iVar1;
            }
        }
        return uVar4;
    }
    return uVar4;
}


// ===== sym.store_enable_trace @ 0x0800174c (size 208) =====

int64_t sym.store_enable_trace(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint *puVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    int iVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar6 = -0x13;
    }
    else {
        puVar7 = &uStack_2c;
        iVar2 = kstrtouint(arg2,10);
        if (iVar2 < 0) {
            iVar6 = iVar2;
            arg2 = puVar7;
            noname_1 = extraout_q0;
        }
        else {
            arg2 = 0x8000360;
            pcVar9 = *(_segment.ehdr + 0x10);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar2 = (*pcVar9)(_segment.ehdr,&uStack_2c);
            iVar6 = iVar2;
            noname_1 = extraout_q0_00;
            if (-1 < iVar2) {
                iVar6 = arg3;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        uVar3 = __stack_chk_fail(noname_1,iVar6);
        *extraout_x18 = sym.show_ipc_thresh;
        if (_segment.ehdr == 0) {
            iVar6 = -0x13;
        }
        else {
            *arg2 = uVar3;
            uVar5 = __sw_hweight64();
            iVar6 = __kmalloc((uVar5 & 0xffffffff) << 2,0xdc0);
            if (iVar6 == 0) {
                iVar6 = -0xc;
            }
            else {
                piVar8 = 0x8000380;
                pcVar9 = *(_segment.ehdr + 0x28);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
                iVar2 = (*pcVar9)(_segment.ehdr,iVar6);
                if (-1 < iVar2) {
                    uVar11 = 0;
                    iVar10 = 0;
                    while( true ) {
                        *piVar8 = iVar2;
                        uVar4 = __sw_hweight64();
                        if ((uVar4 <= uVar11) || (*(iVar6 + uVar11 * 4) == 0)) break;
                        piVar8 = "%lu\t";
                        iVar2 = scnprintf(arg2 + iVar10,0x1000 - iVar10);
                        uVar11 = uVar11 + 1;
                        iVar10 = iVar2 + iVar10;
                    }
                    iVar2 = scnprintf(arg2 + iVar10,0x1000 - iVar10,0x80005ba);
                    iVar2 = iVar2 + iVar10;
                }
                kfree(iVar6);
                iVar6 = iVar2;
            }
        }
        return iVar6;
    }
    return iVar6;
}


// ===== sym.show_ipc_thresh @ 0x0800181c (size 320) =====

int64_t sym.show_ipc_thresh(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint in_w0;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong *in_x18;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
    }
    else {
        *arg1 = in_w0;
        uVar3 = __sw_hweight64();
        iVar4 = __kmalloc((uVar3 & 0xffffffff) << 2,0xdc0);
        if (iVar4 == 0) {
            iVar4 = -0xc;
        }
        else {
            piVar5 = 0x8000380;
            pcVar6 = *(_segment.ehdr + 0x28);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar6);
            iVar1 = (*pcVar6)(_segment.ehdr,iVar4);
            if (-1 < iVar1) {
                uVar8 = 0;
                iVar7 = 0;
                while( true ) {
                    *piVar5 = iVar1;
                    uVar2 = __sw_hweight64();
                    if ((uVar2 <= uVar8) || (*(iVar4 + uVar8 * 4) == 0)) break;
                    piVar5 = "%lu\t";
                    iVar1 = scnprintf(arg1 + iVar7,0x1000 - iVar7);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar1 + iVar7;
                }
                iVar1 = scnprintf(arg1 + iVar7,0x1000 - iVar7,0x80005ba);
                iVar1 = iVar1 + iVar7;
            }
            kfree(iVar4);
            iVar4 = iVar1;
        }
    }
    return iVar4;
}


// ===== sym.store_ipc_thresh @ 0x0800195c (size 332) =====

int64_t sym.store_ipc_thresh(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar8;
    int iVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_30 = kstrdup(arg1,0xcc0);
    uStack_38 = 0;
    if (_segment.ehdr == 0) {
        iVar6 = -0x13;
        goto code_r0x080019a4;
    }
    iVar6 = strsep(&uStack_30,0x80004cb);
    if (iVar6 != 0) {
        arg1 = &uStack_38;
        iVar3 = kstrtouint(iVar6,10);
        if (iVar3 < 0) {
code_r0x08001a50:
            _printk(0x80005ff,iVar3);
            iVar6 = -0x16;
            goto code_r0x080019a4;
        }
        iVar6 = strsep(&uStack_30,0x80004cb);
        if (iVar6 != 0) {
            arg1 = &uStack_38 | 4;
            iVar3 = kstrtouint(iVar6,10);
            if (iVar3 < 0) goto code_r0x08001a50;
            strsep(&uStack_30,0x80004cb);
        }
    }
    _printk(0x8000580,uStack_38._4_4_,uStack_38 & 0xffffffff);
    arg1 = 0x80003a0;
    pcVar8 = *(_segment.ehdr + 0x20);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
    iVar3 = (*pcVar8)(_segment.ehdr,&uStack_38);
    iVar6 = iVar3;
    if (-1 < iVar3) {
        iVar6 = arg2;
    }
code_r0x080019a4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        uVar2 = __stack_chk_fail(iVar6);
        *extraout_x18 = sym.show_efreq_thresh;
        if (_segment.ehdr == 0) {
            iVar6 = -0x13;
        }
        else {
            *arg1 = uVar2;
            uVar5 = __sw_hweight64();
            iVar6 = __kmalloc((uVar5 & 0xffffffff) << 2,0xdc0);
            if (iVar6 == 0) {
                iVar6 = -0xc;
            }
            else {
                piVar7 = 0x80003c0;
                pcVar8 = *(_segment.ehdr + 0x38);
                __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
                iVar3 = (*pcVar8)(_segment.ehdr,iVar6);
                if (-1 < iVar3) {
                    uVar10 = 0;
                    iVar9 = 0;
                    while( true ) {
                        *piVar7 = iVar3;
                        uVar4 = __sw_hweight64();
                        if ((uVar4 <= uVar10) || (*(iVar6 + uVar10 * 4) == 0)) break;
                        piVar7 = "%lu\t";
                        iVar3 = scnprintf(arg1 + iVar9,0x1000 - iVar9);
                        uVar10 = uVar10 + 1;
                        iVar9 = iVar3 + iVar9;
                    }
                    iVar3 = scnprintf(arg1 + iVar9,0x1000 - iVar9,0x80005ba);
                    iVar3 = iVar3 + iVar9;
                }
                kfree(iVar6);
                iVar6 = iVar3;
            }
        }
        return iVar6;
    }
    return iVar6;
}


// ===== sym.show_efreq_thresh @ 0x08001aa8 (size 320) =====

int64_t sym.show_efreq_thresh(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint in_w0;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int *piVar5;
    ulong *in_x18;
    code *pcVar6;
    int iVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
    }
    else {
        *arg1 = in_w0;
        uVar3 = __sw_hweight64();
        iVar4 = __kmalloc((uVar3 & 0xffffffff) << 2,0xdc0);
        if (iVar4 == 0) {
            iVar4 = -0xc;
        }
        else {
            piVar5 = 0x80003c0;
            pcVar6 = *(_segment.ehdr + 0x38);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar6);
            iVar1 = (*pcVar6)(_segment.ehdr,iVar4);
            if (-1 < iVar1) {
                uVar8 = 0;
                iVar7 = 0;
                while( true ) {
                    *piVar5 = iVar1;
                    uVar2 = __sw_hweight64();
                    if ((uVar2 <= uVar8) || (*(iVar4 + uVar8 * 4) == 0)) break;
                    piVar5 = "%lu\t";
                    iVar1 = scnprintf(arg1 + iVar7,0x1000 - iVar7);
                    uVar8 = uVar8 + 1;
                    iVar7 = iVar1 + iVar7;
                }
                iVar1 = scnprintf(arg1 + iVar7,0x1000 - iVar7,0x80005ba);
                iVar1 = iVar1 + iVar7;
            }
            kfree(iVar4);
            iVar4 = iVar1;
        }
    }
    return iVar4;
}


// ===== sym.store_efreq_thresh @ 0x08001be8 (size 332) =====

void sym.store_efreq_thresh(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    uchar *puVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *pcVar10;
    code *pcVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint uStack_fc;
    int64_t iStack_f8;
    ulong ***pppuStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    char *pcStack_d8;
    uint32_t uStack_cc;
    int64_t iStack_c8;
    uchar ***pppuStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    char *pcStack_a8;
    char acStack_9c [4];
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    code *pcStack_80;
    char *pcStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    code *pcStack_50;
    int64_t iStack_48;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    pcVar8 = arg2;
    uStack_30 = kstrdup(arg1,0xcc0);
    pcVar10 = segment.ehdr;
    uStack_38 = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        goto code_r0x08001c30;
    }
    iVar3 = strsep(&uStack_30,0x80004cb);
    if (iVar3 != 0) {
        arg1 = &uStack_38;
        iVar2 = kstrtouint(iVar3,10);
        if (iVar2 < 0) {
code_r0x08001cdc:
            _printk(0x80005ff,iVar2);
            iVar3 = -0x16;
            goto code_r0x08001c30;
        }
        iVar3 = strsep(&uStack_30,0x80004cb);
        if (iVar3 != 0) {
            arg1 = &uStack_38 | 4;
            iVar2 = kstrtouint(iVar3,10);
            if (iVar2 < 0) goto code_r0x08001cdc;
            strsep(&uStack_30,0x80004cb);
        }
    }
    _printk(0x8000580,uStack_38._4_4_,uStack_38 & 0xffffffff);
    arg1 = 0x80003e0;
    pcVar10 = *(_segment.ehdr + 0x30);
    __cfi_slowpath_diag(0x376863d1de02459b,pcVar10);
    iVar2 = (*pcVar10)(_segment.ehdr,&uStack_38);
    iVar3 = iVar2;
    if (-1 < iVar2) {
        iVar3 = arg2;
    }
code_r0x08001c30:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18 = sym.show_hysteresis;
    pcStack_58 = sym.show_hysteresis;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_6c = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    pcStack_50 = pcVar10;
    iStack_48 = arg2;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar6 = arg1;
        arg1 = arg2;
    }
    else {
        pcVar10 = *(_segment.ehdr + 0x48);
        pcVar6 = 0x8000400;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar10);
        iVar2 = (*pcVar10)(_segment.ehdr,&uStack_6c);
        if (-1 < iVar2) {
            pcVar8 = uStack_6c;
            pcVar6 = "%lu\n";
            iVar2 = scnprintf(arg1,0x1000);
        }
        iVar3 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.store_hysteresis;
    pcStack_88 = sym.store_hysteresis;
    iVar3 = sp_el0;
    pcVar11 = segment.ehdr;
    iStack_98 = *(iVar3 + 0x5e0);
    acStack_9c[0] = '\0';
    acStack_9c[1] = '\0';
    acStack_9c[2] = '\0';
    acStack_9c[3] = '\0';
    pcVar9 = pcVar8;
    ppuStack_90 = &puStack_60;
    pcStack_80 = pcVar10;
    pcStack_78 = arg1;
    if (_segment.ehdr == 0) {
        pcVar4 = 0xffffffffffffffed;
        pcVar8 = arg1;
    }
    else {
        pcVar7 = acStack_9c;
        iVar2 = kstrtouint(pcVar6,10);
        if (iVar2 < 0) {
            pcVar4 = iVar2;
            pcVar6 = pcVar7;
        }
        else {
            pcVar6 = 0x8000420;
            pcVar11 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar11);
            iVar2 = (*pcVar11)(_segment.ehdr,acStack_9c);
            pcVar4 = iVar2;
            if (-1 < iVar2) {
                pcVar4 = pcVar8;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_98) {
        return;
    }
    __stack_chk_fail(pcVar4);
    *extraout_x18_01 = sym.show_c1dcvs_opt_mode;
    pcStack_b8 = sym.show_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_c8 = *(iVar3 + 0x5e0);
    uStack_cc = 0;
    pppuStack_c0 = &ppuStack_90;
    pcStack_b0 = pcVar11;
    pcStack_a8 = pcVar8;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar4 = pcVar6;
    }
    else {
        pcVar11 = *(_segment.ehdr + 0x58);
        pcVar4 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar11,0x8000440);
        iVar2 = (*pcVar11)(_segment.ehdr,&uStack_cc);
        if (-1 < iVar2) {
            pcVar9 = uStack_cc;
            pcVar4 = "%lu\n";
            iVar2 = scnprintf(pcVar6,0x1000,"%lu\n",pcVar9);
        }
        iVar3 = iVar2;
        pcVar8 = pcVar6;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_02 = sym.store_c1dcvs_opt_mode;
    pcStack_e8 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_f8 = *(iVar3 + 0x5e0);
    uStack_fc = 0;
    pppuStack_f0 = &pppuStack_c0;
    pcStack_e0 = pcVar11;
    pcStack_d8 = pcVar8;
    if (_segment.ehdr == 0) {
        pcVar8 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar4,10,&uStack_fc);
        if (iVar2 < 0) {
            pcVar8 = iVar2;
        }
        else {
            pcVar10 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar10,0x8000460);
            iVar2 = (*pcVar10)(_segment.ehdr,&uStack_fc);
            pcVar8 = iVar2;
            if (-1 < iVar2) {
                pcVar8 = pcVar9;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_f8) {
        auVar12 = __stack_chk_fail(pcVar8);
        puVar5 = auVar12._0_8_;
        *extraout_x18_03 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar12._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar10)();
    }
    return;
}


// ===== sym.show_hysteresis @ 0x08001d34 (size 196) =====

void sym.show_hysteresis(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uchar *puVar6;
    char *pcVar7;
    char *in_x3;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    char *unaff_x19;
    code *unaff_x20;
    code *pcVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar10 [16];
    uint uStack_bc;
    int64_t iStack_b8;
    uchar ***pppuStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    char acStack_5c [4];
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar5 = arg2;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x48);
        pcVar5 = 0x8000400;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20);
        iVar2 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        noname_1 = extraout_q0;
        if (-1 < iVar2) {
            in_x3 = uStack_2c;
            pcVar5 = "%lu\n";
            iVar2 = scnprintf(arg2,0x1000);
            noname_1 = extraout_q0_00;
        }
        iVar3 = iVar2;
        unaff_x19 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
    *extraout_x18 = sym.store_hysteresis;
    pcStack_48 = sym.store_hysteresis;
    iVar3 = sp_el0;
    pcVar9 = segment.ehdr;
    iStack_58 = *(iVar3 + 0x5e0);
    acStack_5c[0] = '\0';
    acStack_5c[1] = '\0';
    acStack_5c[2] = '\0';
    acStack_5c[3] = '\0';
    pcVar8 = in_x3;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    pcStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        pcVar4 = 0xffffffffffffffed;
        in_x3 = unaff_x19;
    }
    else {
        pcVar7 = acStack_5c;
        iVar2 = kstrtouint(pcVar5,10);
        if (iVar2 < 0) {
            pcVar4 = iVar2;
            pcVar5 = pcVar7;
        }
        else {
            pcVar5 = 0x8000420;
            pcVar9 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9);
            iVar2 = (*pcVar9)(_segment.ehdr,acStack_5c);
            pcVar4 = iVar2;
            if (-1 < iVar2) {
                pcVar4 = in_x3;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(pcVar4);
    *extraout_x18_00 = sym.show_c1dcvs_opt_mode;
    pcStack_78 = sym.show_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar9;
    pcStack_68 = in_x3;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar4 = pcVar5;
    }
    else {
        pcVar9 = *(_segment.ehdr + 0x58);
        pcVar4 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar9,0x8000440);
        iVar2 = (*pcVar9)(_segment.ehdr,&uStack_8c);
        if (-1 < iVar2) {
            pcVar8 = uStack_8c;
            pcVar4 = "%lu\n";
            iVar2 = scnprintf(pcVar5,0x1000,"%lu\n",pcVar8);
        }
        iVar3 = iVar2;
        in_x3 = pcVar5;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_88) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_01 = sym.store_c1dcvs_opt_mode;
    pcStack_a8 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    uStack_bc = 0;
    pppuStack_b0 = &ppuStack_80;
    pcStack_a0 = pcVar9;
    pcStack_98 = in_x3;
    if (_segment.ehdr == 0) {
        pcVar5 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar4,10,&uStack_bc);
        if (iVar2 < 0) {
            pcVar5 = iVar2;
        }
        else {
            pcVar9 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar9,0x8000460);
            iVar2 = (*pcVar9)(_segment.ehdr,&uStack_bc);
            pcVar5 = iVar2;
            if (-1 < iVar2) {
                pcVar5 = pcVar8;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_b8) {
        auVar10 = __stack_chk_fail(pcVar5);
        puVar6 = auVar10._0_8_;
        *extraout_x18_02 = sym.__cfi_check_fail;
        if (puVar6 != NULL) {
            switch(*puVar6) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar6,auVar10._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar9 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar9)();
    }
    return;
}


// ===== sym.store_hysteresis @ 0x08001df8 (size 208) =====

void sym.store_hysteresis(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    char *pcVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    char *unaff_x19;
    code *pcVar8;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar9 [16];
    uint uStack_8c;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    code *pcStack_70;
    char *pcStack_68;
    uint32_t uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    char *pcStack_38;
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    pcVar8 = segment.ehdr;
    iStack_28 = *(iVar3 + 0x5e0);
    acStack_2c[0] = '\0';
    acStack_2c[1] = '\0';
    acStack_2c[2] = '\0';
    acStack_2c[3] = '\0';
    uVar7 = arg3;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        arg3 = unaff_x19;
    }
    else {
        pcVar6 = acStack_2c;
        iVar2 = kstrtouint(arg2,10);
        if (iVar2 < 0) {
            iVar3 = iVar2;
            arg2 = pcVar6;
            noname_1 = extraout_q0;
        }
        else {
            arg2 = 0x8000420;
            pcVar8 = *(_segment.ehdr + 0x40);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar8);
            iVar2 = (*pcVar8)(_segment.ehdr,acStack_2c);
            iVar3 = iVar2;
            noname_1 = extraout_q0_00;
            if (-1 < iVar2) {
                iVar3 = arg3;
            }
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
    *extraout_x18 = sym.show_c1dcvs_opt_mode;
    pcStack_48 = sym.show_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = pcVar8;
    pcStack_38 = arg3;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar6 = arg2;
    }
    else {
        pcVar8 = *(_segment.ehdr + 0x58);
        pcVar6 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,pcVar8,0x8000440);
        iVar2 = (*pcVar8)(_segment.ehdr,&uStack_5c);
        if (-1 < iVar2) {
            uVar7 = uStack_5c;
            pcVar6 = "%lu\n";
            iVar2 = scnprintf(arg2,0x1000,"%lu\n",uVar7);
        }
        iVar3 = iVar2;
        arg3 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail(iVar3);
    *extraout_x18_00 = sym.store_c1dcvs_opt_mode;
    pcStack_78 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_88 = *(iVar3 + 0x5e0);
    uStack_8c = 0;
    ppuStack_80 = &puStack_50;
    pcStack_70 = pcVar8;
    pcStack_68 = arg3;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar6,10,&uStack_8c);
        if (iVar2 < 0) {
            uVar4 = iVar2;
        }
        else {
            pcVar8 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar8,0x8000460);
            iVar2 = (*pcVar8)(_segment.ehdr,&uStack_8c);
            uVar4 = iVar2;
            if (-1 < iVar2) {
                uVar4 = uVar7;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_88) {
        auVar9 = __stack_chk_fail(uVar4);
        puVar5 = auVar9._0_8_;
        *extraout_x18_01 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar8 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar8)();
    }
    return;
}


// ===== sym.show_c1dcvs_opt_mode @ 0x08001ec8 (size 196) =====

void sym.show_c1dcvs_opt_mode(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uchar *puVar5;
    char *pcVar6;
    uint64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    code *unaff_x20;
    code *pcVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar8 [16];
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    code *pcStack_40;
    int64_t iStack_38;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar3 = -0x13;
        pcVar6 = arg2;
    }
    else {
        unaff_x20 = *(_segment.ehdr + 0x58);
        pcVar6 = 0x8000440;
        __cfi_slowpath_diag(0x376863d1de02459b,unaff_x20,0x8000440);
        iVar2 = (*unaff_x20)(_segment.ehdr,&uStack_2c);
        noname_1 = extraout_q0;
        if (-1 < iVar2) {
            in_x3 = uStack_2c;
            pcVar6 = "%lu\n";
            iVar2 = scnprintf(arg2,0x1000,"%lu\n",in_x3);
            noname_1 = extraout_q0_00;
        }
        iVar3 = iVar2;
        unaff_x19 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(noname_1,iVar3);
    *extraout_x18 = sym.store_c1dcvs_opt_mode;
    pcStack_48 = sym.store_c1dcvs_opt_mode;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    uStack_5c = 0;
    puStack_50 = &stack0xffffffffffffffe0;
    pcStack_40 = unaff_x20;
    iStack_38 = unaff_x19;
    if (_segment.ehdr == 0) {
        uVar4 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(pcVar6,10,&uStack_5c);
        if (iVar2 < 0) {
            uVar4 = iVar2;
        }
        else {
            pcVar7 = *(_segment.ehdr + 0x50);
            __cfi_slowpath_diag(0x376863d1de02459b,pcVar7,0x8000460);
            iVar2 = (*pcVar7)(_segment.ehdr,&uStack_5c);
            uVar4 = iVar2;
            if (-1 < iVar2) {
                uVar4 = in_x3;
            }
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        auVar8 = __stack_chk_fail(uVar4);
        puVar5 = auVar8._0_8_;
        *extraout_x18_00 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar7)();
    }
    return;
}


// ===== sym.store_c1dcvs_opt_mode @ 0x08001f8c (size 208) =====

void sym.store_c1dcvs_opt_mode(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar6 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uStack_2c = 0;
    if (_segment.ehdr == 0) {
        iVar4 = -0x13;
    }
    else {
        iVar3 = kstrtouint(arg2,10,&uStack_2c);
        if (-1 < iVar3) {
            __cfi_slowpath_diag(0x376863d1de02459b,*(_segment.ehdr + 0x50),0x8000460);
            return;
        }
        iVar4 = iVar3;
        noname_1 = extraout_q0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar6 = __stack_chk_fail(noname_1,iVar4);
        puVar5 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar5 != NULL) {
            switch(*puVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80020b4);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800205c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080020a0

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
    //switch table (4 cases) at 0x8000480
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80020b4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080020d4 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_register(obj.scmi_c1dcvs_drv,obj.__this_module,"c1dcvs_scmi");
    return;
}


// ===== sym.cleanup_module @ 0x08002110 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    scmi_driver_unregister(obj.scmi_c1dcvs_drv);
    return;
}

