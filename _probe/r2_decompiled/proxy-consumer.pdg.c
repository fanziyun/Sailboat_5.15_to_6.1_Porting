// decompiled from proxy-consumer by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x080019a4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x5b83a3fd302a5421) {
        if (arg1 == -0x58c4a7feef7ff60d) {
            if (pcVar1 == sym.devm_regulator_proxy_consumer_match.000102539b0f6a0e4ed079450249a254.cfi_jt) {
                return;
            }
            goto code_r0x08001964;
        }
        if (arg1 != -0x48ef54602b463a27) goto code_r0x08001964;
        pcVar2 = sym._devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt;
    }
    else {
        if (arg1 == 0x5b83a3fd302a5421) {
            if ((pcVar1 + -0x8001100 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001964;
        }
        if (arg1 != 0x7f5a0d74a2fb30fe) goto code_r0x08001964;
        pcVar2 = sym.regulator_proxy_consumer_register.cfi_jt;
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x08001964:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019b8);
    (*pcVar1)();
}


// ===== sym.devm_regulator_proxy_consumer_match.000102539b0f6a0e4ed079450249a254.cfi_jt @ 0x080010e8 (size 8) =====

bool sym.devm_regulator_proxy_consumer_match.000102539b0f6a0e4ed079450249a254.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3)

{
    code *pcVar1;
    
    if ((param_2 != NULL) && (*param_2 != 0)) {
        return *param_2 == param_3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80018b4);
    (*pcVar1)();
}


// ===== sym.regulator_proxy_consumer_register.cfi_jt @ 0x080010f0 (size 8) =====

uint sym.regulator_proxy_consumer_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regulator_proxy_consumer_add(param_1,param_2);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.devm_regulator_proxy_consumer_register.cfi_jt @ 0x080010f8 (size 8) =====

uint64_t sym.devm_regulator_proxy_consumer_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt,8,
                                 0xcc0,0xffffffff,"devm_regulator_proxy_consumer_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regulator_proxy_consumer_add(param_1,param_2);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            devres_free(puVar1);
        }
        else {
            *puVar1 = uVar2;
            devres_add(param_1,puVar1);
            uVar2 = 0;
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.devm_regulator_proxy_consumer_unregister.cfi_jt @ 0x08001100 (size 8) =====

void sym.devm_regulator_proxy_consumer_unregister.cfi_jt(uint64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar1 = _obj.proxy_consumer_list;
        if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
            do {
                pcVar2 = *pcVar1;
                if (*(pcVar1 + 0x18) == param_1) {
                    devres_release(param_1,
                                   sym._devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt,
                                   sym.devm_regulator_proxy_consumer_match.000102539b0f6a0e4ed079450249a254.cfi_jt);
                }
                pcVar1 = pcVar2;
            } while (pcVar2 != obj.proxy_consumer_list);
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym.regulator_proxy_consumer_unregister.cfi_jt @ 0x08001108 (size 8) =====

void sym.regulator_proxy_consumer_unregister.cfi_jt(uint64_t param_1)

{
    code *arg1;
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x8000101,"regulator_proxy_consumer_unregister");
    }
    else {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar1 = _obj.proxy_consumer_list;
        while (arg1 = pcVar1, arg1 != obj.proxy_consumer_list) {
            pcVar1 = *arg1;
            if (*(arg1 + 0x18) == param_1) {
                sym.regulator_proxy_consumer_remove(arg1);
            }
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym.regulator_proxy_consumer_sync_state.cfi_jt @ 0x08001110 (size 8) =====

void sym.regulator_proxy_consumer_sync_state.cfi_jt(uint64_t param_1)

{
    code *arg1;
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x8000101,"regulator_proxy_consumer_unregister");
    }
    else {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar1 = _obj.proxy_consumer_list;
        while (arg1 = pcVar1, arg1 != obj.proxy_consumer_list) {
            pcVar1 = *arg1;
            if (*(arg1 + 0x18) == param_1) {
                sym.regulator_proxy_consumer_remove(arg1);
            }
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym._devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt @ 0x08001118 (size 8) =====

void sym._devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt(ulong param_1,ulong *param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
        pcVar1 = _obj.proxy_consumer_list;
        do {
            if (pcVar1 == *param_2) {
                sym.regulator_proxy_consumer_remove(*param_2);
                return;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.proxy_consumer_list);
    }
    return;
}


// ===== sym.devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt @ 0x08001120 (size 8) =====

void sym.devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt(ulong param_1,ulong *param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.proxy_consumer_list_lock);
    if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
        pcVar1 = _obj.proxy_consumer_list;
        do {
            if (pcVar1 == *param_2) {
                sym.regulator_proxy_consumer_remove(*param_2);
                break;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.proxy_consumer_list);
    }
    mutex_unlock(obj.proxy_consumer_list_lock);
    return;
}


// ===== sym.regulator_proxy_consumer_register @ 0x08001128 (size 44) =====

uint sym.regulator_proxy_consumer_register(int64_t arg2,int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regulator_proxy_consumer_add(arg2,arg1);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.regulator_proxy_consumer_add @ 0x08001154 (size 836) =====

code * sym.regulator_proxy_consumer_add(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    char *pcStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    pcStack_50 = NULL;
    if ((arg1 == 0) || (arg2 == 0)) {
        _printk(0x80000e0,"regulator_proxy_consumer_add");
        pcVar5 = 0xffffffffffffffea;
    }
    else {
        iVar4 = of_find_property(arg2,"qcom,proxy-consumer-enable",0);
        if (((iVar4 == 0) && (iVar4 = of_find_property(arg2,"qcom,proxy-consumer-voltage",0), iVar4 == 0)) &&
           (iVar4 = of_find_property(arg2,"qcom,proxy-consumer-current",0), iVar4 == 0)) {
            pcVar5 = NULL;
        }
        else {
            mutex_lock(obj.proxy_consumer_list_lock);
            iVar4 = 0x80002b0;
            if (*arg2 != 0) {
                iVar4 = *arg2;
            }
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            pcVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x30);
            if (pcVar5 == NULL) {
                iVar2 = -0xc;
            }
            else {
                *(pcVar5 + 0x18) = arg1;
                iVar6 = of_find_property(arg2,"qcom,proxy-consumer-enable",0);
                pcVar5[0x20] = iVar6 != 0;
                of_property_read_variable_u32_array(arg2,"qcom,proxy-consumer-current",pcVar5 + 0x2c,1,0);
                iVar2 = of_property_read_variable_u32_array(arg2,"qcom,proxy-consumer-voltage",&uStack_58,2,0);
                if (-1 < iVar2) {
                    *(pcVar5 + 0x24) = uStack_58;
                    *(pcVar5 + 0x28) = uStack_58._4_4_;
                }
                pcStack_50 = "proxy";
                of_property_read_string(arg2,"qcom,proxy-consumer-name",&pcStack_50);
                uVar7 = regulator_get(arg1,pcStack_50);
                *(pcVar5 + 0x10) = uVar7;
                if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
                    _printk(0x80001f0,"regulator_proxy_consumer_add",pcStack_50,iVar4,uVar7 & 0xffffffff);
                }
                else {
                    if (((*(pcVar5 + 0x28) < 1) || (*(pcVar5 + 0x28) < *(pcVar5 + 0x24))) ||
                       (uVar3 = regulator_set_voltage(uVar7), uVar3 == 0)) {
                        if ((*(pcVar5 + 0x2c) == 0) || (uVar3 = regulator_set_load(*(pcVar5 + 0x10)), -1 < uVar3)) {
                            if ((pcVar5[0x20] == 0x0) || (uVar3 = regulator_enable(*(pcVar5 + 0x10)), uVar3 == 0)) {
                                pcVar1 = _obj.proxy_consumer_list;
                                uVar7 = __list_add_valid(pcVar5,obj.proxy_consumer_list,_obj.proxy_consumer_list);
                                if ((uVar7 & 1) != 0) {
                                    *(pcVar1 + 8) = pcVar5;
                                    *pcVar5 = pcVar1;
                                    *(pcVar5 + 8) = obj.proxy_consumer_list;
                                    _obj.proxy_consumer_list = pcVar5;
                                }
                                mutex_unlock(obj.proxy_consumer_list_lock);
                                goto code_r0x0800137c;
                            }
                            uVar7 = uVar3;
                            _printk(0x8000197,"regulator_proxy_consumer_add",iVar4,uVar7);
                            regulator_set_load(*(pcVar5 + 0x10),0);
                        }
                        else {
                            uVar7 = uVar3;
                            _printk(0x800023b,"regulator_proxy_consumer_add",iVar4,uVar7);
                        }
                        regulator_set_voltage(*(pcVar5 + 0x10),0,0x7fffffff);
                    }
                    else {
                        uVar7 = uVar3;
                        _printk(0x80001c1,"regulator_proxy_consumer_add",iVar4,uVar7);
                    }
                    regulator_put(*(pcVar5 + 0x10));
                }
                iVar2 = uVar7;
                kfree(pcVar5);
            }
            mutex_unlock(obj.proxy_consumer_list_lock);
            pcVar5 = iVar2;
        }
    }
code_r0x0800137c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return pcVar5;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym.regulator_proxy_consumer_unregister;
    if ((uVar7 == 0) || (0xfffffffffffff000 < uVar7)) {
        pcVar5 = _printk(0x8000101,"regulator_proxy_consumer_unregister");
    }
    else {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar5 = _obj.proxy_consumer_list;
        while (pcVar1 = pcVar5, pcVar1 != obj.proxy_consumer_list) {
            pcVar5 = *pcVar1;
            if (*(pcVar1 + 0x18) == uVar7) {
                sym.regulator_proxy_consumer_remove(pcVar1);
            }
        }
        pcVar5 = mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return pcVar5;
}


// ===== sym.regulator_proxy_consumer_unregister @ 0x08001498 (size 168) =====

void sym.regulator_proxy_consumer_unregister(uint32_t arg1)

{
    code *arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x8000101,"regulator_proxy_consumer_unregister");
    }
    else {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar2 = _obj.proxy_consumer_list;
        while (arg1_00 = pcVar2, arg1_00 != obj.proxy_consumer_list) {
            pcVar2 = *arg1_00;
            if (*(arg1_00 + 0x18) == uVar1) {
                sym.regulator_proxy_consumer_remove(arg1_00);
            }
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym.regulator_proxy_consumer_remove @ 0x08001540 (size 284) =====

void sym.regulator_proxy_consumer_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x20) == '\0') || (iVar3 = regulator_disable(*(arg1 + 0x10)), iVar3 == 0)) {
        iVar3 = *(arg1 + 0x2c);
    }
    else {
        _printk(0x800016f,"regulator_proxy_consumer_remove",iVar3);
        iVar3 = *(arg1 + 0x2c);
    }
    if ((iVar3 != 0) && (iVar3 = regulator_set_load(*(arg1 + 0x10),0), iVar3 < 0)) {
        _printk(0x8000287,"regulator_proxy_consumer_remove",iVar3);
    }
    if (((0 < *(arg1 + 0x28)) && (*(arg1 + 0x24) <= *(arg1 + 0x28))) &&
       (iVar3 = regulator_set_voltage(*(arg1 + 0x10),0,0x7fffffff), iVar3 != 0)) {
        _printk(0x800033b,"regulator_proxy_consumer_remove",iVar3);
    }
    regulator_put(*(arg1 + 0x10));
    uVar4 = __list_del_entry_valid(arg1);
    if ((uVar4 & 1) != 0) {
        iVar1 = *arg1;
        piVar2 = *(arg1 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *arg1 = 0xdead000000000100;
    *(arg1 + 8) = 0xdead000000000122;
    kfree(arg1);
    return;
}


// ===== sym.devm_regulator_proxy_consumer_register @ 0x0800165c (size 168) =====

uint64_t sym.devm_regulator_proxy_consumer_register(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt,8,
                                 0xcc0,0xffffffff,"devm_regulator_proxy_consumer_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regulator_proxy_consumer_add(arg1,arg2);
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            devres_free(puVar1);
        }
        else {
            *puVar1 = uVar2;
            devres_add(arg1,puVar1);
            uVar2 = 0;
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.devm_regulator_proxy_consumer_release @ 0x08001704 (size 120) =====

void sym.devm_regulator_proxy_consumer_release(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.proxy_consumer_list_lock);
    if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
        pcVar1 = _obj.proxy_consumer_list;
        do {
            if (pcVar1 == *arg1) {
                sym.regulator_proxy_consumer_remove(*arg1);
                break;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.proxy_consumer_list);
    }
    mutex_unlock(obj.proxy_consumer_list_lock);
    return;
}


// ===== sym.devm_regulator_proxy_consumer_unregister @ 0x0800177c (size 184) =====

void sym.devm_regulator_proxy_consumer_unregister(uint32_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar2 = _obj.proxy_consumer_list;
        if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
            do {
                pcVar3 = *pcVar2;
                if (*(pcVar2 + 0x18) == uVar1) {
                    devres_release(uVar1,
                                   sym._devm_regulator_proxy_consumer_release.000102539b0f6a0e4ed079450249a254.cfi_jt,
                                   sym.devm_regulator_proxy_consumer_match.000102539b0f6a0e4ed079450249a254.cfi_jt);
                }
                pcVar2 = pcVar3;
            } while (pcVar3 != obj.proxy_consumer_list);
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym._devm_regulator_proxy_consumer_release @ 0x08001834 (size 84) =====

void sym._devm_regulator_proxy_consumer_release(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.proxy_consumer_list != obj.proxy_consumer_list) {
        pcVar1 = _obj.proxy_consumer_list;
        do {
            if (pcVar1 == *arg1) {
                sym.regulator_proxy_consumer_remove(*arg1);
                return;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.proxy_consumer_list);
    }
    return;
}


// ===== sym.devm_regulator_proxy_consumer_match @ 0x08001888 (size 44) =====

bool sym.devm_regulator_proxy_consumer_match(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    
    if ((arg2 != 0) && (*arg2 != 0)) {
        return *arg2 == arg3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80018b4);
    (*pcVar1)();
}


// ===== sym.regulator_proxy_consumer_sync_state @ 0x080018b8 (size 168) =====

void sym.regulator_proxy_consumer_sync_state(uint32_t arg1)

{
    code *arg1_00;
    uint64_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x8000101,"regulator_proxy_consumer_unregister");
    }
    else {
        mutex_lock(obj.proxy_consumer_list_lock);
        pcVar2 = _obj.proxy_consumer_list;
        while (arg1_00 = pcVar2, arg1_00 != obj.proxy_consumer_list) {
            pcVar2 = *arg1_00;
            if (*(arg1_00 + 0x18) == uVar1) {
                sym.regulator_proxy_consumer_remove(arg1_00);
            }
        }
        mutex_unlock(obj.proxy_consumer_list_lock);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001960 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080019a4

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
    //switch table (4 cases) at 0x8000367
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80019b8);
    (*pcVar1)();
}

