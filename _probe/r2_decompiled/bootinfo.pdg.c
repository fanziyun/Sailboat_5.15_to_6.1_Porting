// decompiled from bootinfo by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x080015dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar2 = arg2;
    if (arg1 < 0x1b6c344e75cfc4ea) {
        if (arg1 == -0xec78b8726b9c1e8) {
            if ((pcVar2 + -0x8001100 >> 3 | pcVar2 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800159c;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x0800159c;
        pcVar1 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x1b6c344e75cfc4ea) {
            if ((arg1 == 0x7e04a0fb7ad8bcd5) && (pcVar2 == sym.cleanup_module.cfi_jt)) {
                return;
            }
            goto code_r0x0800159c;
        }
        pcVar1 = sym.powerup_reason_store.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt;
    }
    if (pcVar2 == pcVar1) {
        return;
    }
code_r0x0800159c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar2,0);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x80015f0);
    (*pcVar2)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_group);
        kobject_del(_segment.ehdr);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f0 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kobject_create_and_add("bootinfo",0);
    if (_segment.ehdr == 0) {
        _printk(0x80001de);
        iVar1 = -0xc;
    }
    else {
        iVar1 = sysfs_create_group(_segment.ehdr,obj.attr_group);
        if (iVar1 != 0) {
            _printk(0x80001de);
            kobject_del(_segment.ehdr);
        }
    }
    return iVar1;
}


// ===== sym.powerup_reason_store.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.powerup_reason_store.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sscanf(param_3,0x800018d,obj.current_pu_reason_str);
    return param_4;
}


// ===== sym.poweroff_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt @ 0x08001100 (size 8) =====

int64_t sym.poweroff_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerdown_reason == 0x0) {
        _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    if ((_segment.ehdr & 1) == 0) {
        if ((_segment.ehdr >> 1 & 1) == 0) {
            if ((_segment.ehdr >> 2 & 1) == 0) {
                if ((_segment.ehdr >> 3 & 1) == 0) {
                    if ((_segment.ehdr >> 4 & 1) == 0) {
                        if ((_segment.ehdr >> 5 & 1) == 0) {
                            if ((_segment.ehdr >> 6 & 1) == 0) {
                                if ((_segment.ehdr >> 7 & 1) == 0) {
                                    iVar1 = snprintf(param_3,0xf,"unknown reboot\n");
                                    goto code_r0x080014f8;
                                }
                                iVar2 = 7;
                            }
                            else {
                                iVar2 = 6;
                            }
                        }
                        else {
                            iVar2 = 5;
                        }
                    }
                    else {
                        iVar2 = 4;
                    }
                }
                else {
                    iVar2 = 3;
                }
            }
            else {
                iVar2 = 2;
            }
        }
        else {
            iVar2 = 1;
        }
    }
    else {
        iVar2 = 0;
    }
    uVar3 = *(obj.powerdown_reasons + iVar2 * 8);
    iVar2 = strlen(uVar3);
    iVar1 = snprintf(param_3,iVar2 + 2,0x8000339,uVar3);
code_r0x080014f8:
    return iVar1;
}


// ===== sym.poweroff_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt @ 0x08001108 (size 8) =====

int64_t sym.poweroff_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerdown_reason == 0x0) {
        _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    iVar1 = snprintf(param_3,0xb,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.powerup_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt @ 0x08001110 (size 8) =====

int64_t sym.powerup_reason_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.current_pu_reason_str != 0x0) goto code_r0x080012ec;
    if (obj.powerup_reason == 0x0) {
        _printk(0x8000289,obj.powerup_reason);
    }
    else {
        kstrtouint(obj.powerup_reason,0x10,obj.attr_group);
    }
    if (obj.powerdown_reason == 0x0) {
        _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    if ((_segment.ehdr & 1) == 0) {
        if ((_segment.ehdr >> 8 & 1) == 0) goto code_r0x08001208;
code_r0x080011d0:
        uVar4 = (_segment.ehdr >> 0x10 & 0xaaaa) >> 1 | (_segment.ehdr >> 0x10 & 0x5555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar1 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = 0x20;
        if (0xffff < _segment.ehdr) {
            uVar4 = LZCOUNT((uVar1 >> 8 | (uVar1 & 0xff00ff) << 8) << 0x10);
        }
        if (7 < uVar4) goto code_r0x08001208;
        uVar1 = 2;
        if (uVar4 != 7) {
            uVar1 = uVar4;
        }
        uVar5 = *(obj.reset_reasons + uVar1 * 8);
    }
    else {
        if ((_segment.ehdr & 2) != 0 || (_segment.ehdr & 0x100) != 0) goto code_r0x080011d0;
code_r0x08001208:
        if (obj.pd_reason < '\0') {
            iVar3 = 9;
        }
        else if ((_segment.ehdr & 1) == 0) {
            if ((_segment.ehdr >> 1 & 1) == 0) {
                if ((_segment.ehdr >> 2 & 1) == 0) {
                    if ((_segment.ehdr >> 4 & 1) == 0) {
                        if ((_segment.ehdr >> 3 & 1) == 0) {
                            if ((_segment.ehdr >> 7 & 1) == 0) {
                                if ((_segment.ehdr >> 5 & 1) == 0) {
                                    obj.current_pu_reason_str = SUB71(str.unknown_reboot._0_7_,0);
                                    *0x8000051 = SUB76(str.unknown_reboot._0_7_,1);
                                    *0x8000057 = str.unknown_reboot[7];
                                    *0x8000058 = str.unknown_reboot[8];
                                    *0x8000059 = str.unknown_reboot[9];
                                    *0x800005a = str.unknown_reboot[10];
                                    *0x800005b = str.unknown_reboot[0xb];
                                    *0x800005c = str.unknown_reboot[0xc];
                                    *0x800005d = str.unknown_reboot[0xd];
                                    *0x800005e = str.unknown_reboot[0xe];
                                    goto code_r0x080012ec;
                                }
                                iVar3 = 5;
                            }
                            else {
                                iVar3 = 7;
                            }
                        }
                        else {
                            iVar3 = 3;
                        }
                    }
                    else {
                        iVar3 = 4;
                    }
                }
                else {
                    iVar3 = 2;
                }
            }
            else {
                iVar3 = 1;
            }
        }
        else {
            iVar3 = 0;
        }
        uVar5 = *(obj.powerup_reasons + iVar3 * 8);
    }
    iVar3 = strlen(uVar5);
    snprintf(obj.current_pu_reason_str,iVar3 + 2,0x800018d,uVar5);
code_r0x080012ec:
    iVar3 = strlen(obj.current_pu_reason_str);
    iVar2 = snprintf(param_3,iVar3 + 2,0x8000339,obj.current_pu_reason_str);
    return iVar2;
}


// ===== sym.powerup_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt @ 0x08001118 (size 8) =====

int64_t sym.powerup_reason_details_show.bf9b48cf73207e6f4b34e63e29aad8e3.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerup_reason == 0x0) {
        _printk(0x8000289,obj.powerup_reason);
    }
    else {
        kstrtouint(obj.powerup_reason,0x10,obj.attr_group);
    }
    iVar1 = snprintf(param_3,0xb,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.is_abnormal_powerup @ 0x08001120 (size 24) =====

uint32_t sym.is_abnormal_powerup(void)

{
    return _segment.ehdr & 0x30000;
}


// ===== sym.powerup_reason_show @ 0x08001138 (size 500) =====

int64_t sym.powerup_reason_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.current_pu_reason_str != 0x0) goto code_r0x080012ec;
    if (obj.powerup_reason == 0x0) {
        _printk(0x8000289,obj.powerup_reason);
    }
    else {
        kstrtouint(obj.powerup_reason,0x10,obj.attr_group);
    }
    if (obj.powerdown_reason == 0x0) {
        noname_1 = _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        noname_1 = kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    if ((_segment.ehdr & 1) == 0) {
        if ((_segment.ehdr >> 8 & 1) == 0) goto code_r0x08001208;
code_r0x080011d0:
        uVar4 = (_segment.ehdr >> 0x10 & 0xaaaa) >> 1 | (_segment.ehdr >> 0x10 & 0x5555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar1 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = 0x20;
        if (0xffff < _segment.ehdr) {
            uVar4 = LZCOUNT((uVar1 >> 8 | (uVar1 & 0xff00ff) << 8) << 0x10);
        }
        if (7 < uVar4) goto code_r0x08001208;
        uVar1 = 2;
        if (uVar4 != 7) {
            uVar1 = uVar4;
        }
        uVar5 = *(obj.reset_reasons + uVar1 * 8);
    }
    else {
        if ((_segment.ehdr & 2) != 0 || (_segment.ehdr & 0x100) != 0) goto code_r0x080011d0;
code_r0x08001208:
        if (obj.pd_reason < '\0') {
            iVar3 = 9;
        }
        else if ((_segment.ehdr & 1) == 0) {
            if ((_segment.ehdr >> 1 & 1) == 0) {
                if ((_segment.ehdr >> 2 & 1) == 0) {
                    if ((_segment.ehdr >> 4 & 1) == 0) {
                        if ((_segment.ehdr >> 3 & 1) == 0) {
                            if ((_segment.ehdr >> 7 & 1) == 0) {
                                if ((_segment.ehdr >> 5 & 1) == 0) {
                                    obj.current_pu_reason_str = SUB71(str.unknown_reboot._0_7_,0);
                                    *0x8000051 = SUB76(str.unknown_reboot._0_7_,1);
                                    *0x8000057 = str.unknown_reboot[7];
                                    *0x8000058 = str.unknown_reboot[8];
                                    *0x8000059 = str.unknown_reboot[9];
                                    *0x800005a = str.unknown_reboot[10];
                                    *0x800005b = str.unknown_reboot[0xb];
                                    *0x800005c = str.unknown_reboot[0xc];
                                    *0x800005d = str.unknown_reboot[0xd];
                                    *0x800005e = str.unknown_reboot[0xe];
                                    goto code_r0x080012ec;
                                }
                                iVar3 = 5;
                            }
                            else {
                                iVar3 = 7;
                            }
                        }
                        else {
                            iVar3 = 3;
                        }
                    }
                    else {
                        iVar3 = 4;
                    }
                }
                else {
                    iVar3 = 2;
                }
            }
            else {
                iVar3 = 1;
            }
        }
        else {
            iVar3 = 0;
        }
        uVar5 = *(obj.powerup_reasons + iVar3 * 8);
    }
    iVar3 = strlen(uVar5);
    noname_1 = snprintf(obj.current_pu_reason_str,iVar3 + 2,0x800018d,uVar5);
code_r0x080012ec:
    iVar3 = strlen(noname_1,obj.current_pu_reason_str);
    iVar2 = snprintf(arg1,iVar3 + 2,0x8000339,obj.current_pu_reason_str);
    return iVar2;
}


// ===== sym.powerup_reason_store @ 0x0800132c (size 72) =====

int64_t sym.powerup_reason_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sscanf(arg1,0x800018d,obj.current_pu_reason_str);
    return arg2;
}


// ===== sym.powerup_reason_details_show @ 0x08001374 (size 136) =====

int64_t sym.powerup_reason_details_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerup_reason == 0x0) {
        _printk(0x8000289,obj.powerup_reason);
    }
    else {
        kstrtouint(obj.powerup_reason,0x10,obj.attr_group);
    }
    iVar1 = snprintf(arg1,0xb,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.poweroff_reason_show @ 0x080013fc (size 276) =====

int64_t sym.poweroff_reason_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerdown_reason == 0x0) {
        _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    if ((_segment.ehdr & 1) == 0) {
        if ((_segment.ehdr >> 1 & 1) == 0) {
            if ((_segment.ehdr >> 2 & 1) == 0) {
                if ((_segment.ehdr >> 3 & 1) == 0) {
                    if ((_segment.ehdr >> 4 & 1) == 0) {
                        if ((_segment.ehdr >> 5 & 1) == 0) {
                            if ((_segment.ehdr >> 6 & 1) == 0) {
                                if ((_segment.ehdr >> 7 & 1) == 0) {
                                    iVar1 = snprintf(arg1,0xf,"unknown reboot\n");
                                    goto code_r0x080014f8;
                                }
                                iVar2 = 7;
                            }
                            else {
                                iVar2 = 6;
                            }
                        }
                        else {
                            iVar2 = 5;
                        }
                    }
                    else {
                        iVar2 = 4;
                    }
                }
                else {
                    iVar2 = 3;
                }
            }
            else {
                iVar2 = 2;
            }
        }
        else {
            iVar2 = 1;
        }
    }
    else {
        iVar2 = 0;
    }
    uVar3 = *(obj.powerdown_reasons + iVar2 * 8);
    iVar2 = strlen(uVar3);
    iVar1 = snprintf(arg1,iVar2 + 2,0x8000339,uVar3);
code_r0x080014f8:
    return iVar1;
}


// ===== sym.poweroff_reason_details_show @ 0x08001510 (size 136) =====

int64_t sym.poweroff_reason_details_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.powerdown_reason == 0x0) {
        _printk(0x800020a,obj.powerdown_reason);
    }
    else {
        kstrtouint(obj.powerdown_reason,0x10,obj.pd_reason);
    }
    iVar1 = snprintf(arg1,0xb,"0x%x\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001598 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015dc

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
    //switch table (4 cases) at 0x8000110
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015f0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080015f4 (size 136) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = kobject_create_and_add("bootinfo",0);
    if (_segment.ehdr == 0) {
        _printk(0x80001de);
        iVar1 = -0xc;
    }
    else {
        iVar1 = sysfs_create_group(_segment.ehdr,obj.attr_group);
        if (iVar1 != 0) {
            _printk(0x80001de);
            kobject_del(_segment.ehdr);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800167c (size 72) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        sysfs_remove_group(_segment.ehdr,obj.attr_group);
        kobject_del(_segment.ehdr);
    }
    return;
}

