// decompiled from snd_event_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001e4c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x538c10d96f530b9a) {
        if (arg1 == -0x57be845bca9148ef) {
            if ((pcVar1 + -0x8001108 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001e0c;
        }
        if (arg1 != -0x53c79c4c57037930) goto code_r0x08001e0c;
        pcVar2 = sym.snd_event_mstr_add_client.cfi_jt;
    }
    else if (arg1 == -0x538c10d96f530b9a) {
        pcVar2 = sym.snd_event_client_register.cfi_jt;
    }
    else if (arg1 == 0x13491d883f2a8740) {
        pcVar2 = sym.snd_event_master_register.cfi_jt;
    }
    else {
        if (arg1 != 0x7b6f320e89e216aa) goto code_r0x08001e0c;
        pcVar2 = sym.snd_event_notify.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001e0c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e60);
    (*pcVar1)();
}


// ===== sym.snd_event_master_register.cfi_jt @ 0x08001100 (size 8) =====

uint sym.snd_event_master_register.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *arg1;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_master_register._rs,"snd_event_master_register");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _printk(0x800053b,"snd_event_master_register");
        return 0xffffffea;
    }
    mutex_lock(obj.snd_event_mutex);
    if (_segment.ehdr == NULL) {
        mutex_unlock(obj.snd_event_mutex);
        if ((param_3 == 0) || (0xfffffffffffff000 < param_3)) {
            _dev_err(param_1,"%s: Invalid clients ptr\n","snd_event_master_register");
            return 0xffffffea;
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
        if (arg1 == NULL) {
            return 0xfffffff4;
        }
        *arg1 = param_1;
        arg1[1] = param_2;
        arg1[2] = param_4;
        arg1[4] = param_3;
        mutex_lock(obj.snd_event_mutex);
        _segment.ehdr = arg1;
        iVar2 = sym.snd_event_find_clients(arg1);
        if (iVar2 == 0) {
            uVar3 = 0;
            *(_segment.ehdr + 0x1a) = 1;
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        _dev_err(param_1,"%s: master already allocated with %pK\n","snd_event_master_register",*_segment.ehdr);
        uVar3 = 0xffffff8e;
    }
    mutex_unlock(obj.snd_event_mutex);
    return uVar3;
}


// ===== sym.snd_event_client_deregister.cfi_jt @ 0x08001108 (size 8) =====

uint sym.snd_event_client_deregister.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_client_deregister._rs,"snd_event_client_deregister");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _printk(0x800053b,"snd_event_client_deregister");
        return 0xffffffea;
    }
    iVar4 = mutex_lock(obj.snd_event_mutex);
    uVar3 = 0xffffffed;
    if ((_obj.snd_event_client_list != obj.snd_event_client_list) &&
       (pcVar7 = _obj.snd_event_client_list, _obj.snd_event_client_list != obj.snd_event_client_list)) {
        do {
            if ((*(pcVar7 + 0x10) == param_1) && (*(pcVar7 + 0x18) != 0)) {
                if (pcVar7 != NULL) {
                    pcVar7[0x29] = 0x0;
                    if (_segment.ehdr == 0) goto code_r0x08001478;
                    uVar6 = **(_segment.ehdr + 0x20);
                    if (uVar6 == 0) goto code_r0x08001478;
                    uVar8 = 0;
                    uVar5 = (*(_segment.ehdr + 0x20))[1];
                    goto code_r0x08001454;
                }
                break;
            }
            pcVar7 = *pcVar7;
        } while (pcVar7 != obj.snd_event_client_list);
        uVar3 = 0xffffffed;
    }
    goto code_r0x080014d8;
    while (uVar8 = uVar8 + 1, uVar8 < uVar6) {
code_r0x08001454:
        if (*(*(uVar5 + uVar8 * 0x20 + 8) + 0x10) == param_1) {
            if (*(_segment.ehdr + 0x1a) == '\0') {
                uVar3 = 0;
            }
            else {
                uVar3 = sym.check_and_update_fwk_state(iVar4);
                piVar1 = _segment.ehdr + 0x20;
                *(_segment.ehdr + 0x1a) = 0;
                uVar5 = *(*piVar1 + 8);
            }
            *(uVar5 + uVar8 * 0x20) = 0;
            goto code_r0x0800147c;
        }
    }
code_r0x08001478:
    uVar3 = 0;
code_r0x0800147c:
    uVar6 = __list_del_entry_valid(pcVar7);
    if ((uVar6 & 1) != 0) {
        iVar4 = *pcVar7;
        piVar1 = *(pcVar7 + 8);
        *(iVar4 + 8) = piVar1;
        *piVar1 = iVar4;
    }
    *pcVar7 = -0x2152ffffffffff00;
    *(pcVar7 + 8) = -0x2152fffffffffede;
    kfree(pcVar7);
code_r0x080014d8:
    mutex_unlock(obj.snd_event_mutex);
    return uVar3;
}


// ===== sym.snd_event_master_deregister.cfi_jt @ 0x08001110 (size 8) =====

uint sym.snd_event_master_deregister.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_master_deregister._rs,"snd_event_master_deregister");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _printk(0x800053b,"snd_event_master_deregister");
            uVar3 = 0xffffffea;
        }
    }
    else {
        arg1 = mutex_lock(obj.snd_event_mutex);
        piVar4 = _segment.ehdr;
        if (_segment.ehdr == NULL) {
            uVar3 = 0xffffffed;
        }
        else if (*_segment.ehdr == param_1) {
            pcVar1 = _segment.ehdr + 0x1a;
            *(_segment.ehdr + 3) = 0;
            if (*pcVar1 == '\0') {
                uVar3 = 0;
            }
            else {
                uVar3 = sym.check_and_update_fwk_state(arg1);
                piVar4 = _segment.ehdr;
            }
            kfree(*(piVar4[4] + 8));
            kfree(_segment.ehdr[4]);
            kfree(_segment.ehdr);
            _segment.ehdr = NULL;
        }
        else {
            uVar3 = 0xfffffffa;
        }
        mutex_unlock(obj.snd_event_mutex);
    }
    return uVar3;
}


// ===== sym.snd_event_mstr_add_client.cfi_jt @ 0x08001118 (size 8) =====

void sym.snd_event_mstr_add_client.cfi_jt(ulong *param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *param_1;
    if (0xfffffffffffff000 < piVar3) {
        iVar1 = ___ratelimit(obj.snd_event_mstr_add_client._rs,"snd_event_mstr_add_client");
        if (iVar1 == 0) {
            return;
        }
        _printk(0x8000405,"snd_event_mstr_add_client");
        return;
    }
    if (piVar3 == NULL) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x10);
        if (piVar3 == NULL) goto code_r0x080019b8;
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x20);
        piVar3[1] = iVar2;
        if (iVar2 == 0) {
            *param_1 = 0xfffffffffffffff4;
            kfree(piVar3);
            return;
        }
        *param_1 = piVar3;
    }
    else {
        iVar2 = krealloc(piVar3[1],*piVar3 * 0x20 + 0x20,0xdc0);
        if (iVar2 == 0) {
code_r0x080019b8:
            *param_1 = 0xfffffffffffffff4;
            return;
        }
        piVar3[1] = iVar2;
    }
    *(iVar2 + *piVar3 * 0x20) = 0;
    *(piVar3[1] + *piVar3 * 0x20 + 0x10) = param_3;
    *(piVar3[1] + *piVar3 * 0x20 + 0x18) = param_2;
    *piVar3 = *piVar3 + 1;
    return;
}


// ===== sym.snd_event_notify.cfi_jt @ 0x08001120 (size 8) =====

uint sym.snd_event_notify.cfi_jt(int64_t param_1,int param_2)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_notify._rs,"snd_event_notify");
        if (iVar2 != 0) {
            _printk(0x800053b,"snd_event_notify");
        }
        uVar3 = 0xffffffea;
    }
    else {
        arg1 = mutex_lock(obj.snd_event_mutex);
        piVar1 = _segment.ehdr;
        pcVar4 = _obj.snd_event_client_list;
        if ((_obj.snd_event_client_list == obj.snd_event_client_list) && (_segment.ehdr == NULL)) {
            iVar2 = ___ratelimit(obj.snd_event_notify._rs.4,"snd_event_notify");
            if (iVar2 != 0) {
                _dev_err(param_1,"%s: No device registered\n","snd_event_notify");
            }
            uVar3 = 0xffffffed;
        }
        else {
            for (; pcVar4 != obj.snd_event_client_list; pcVar4 = *pcVar4) {
                if ((*(pcVar4 + 0x10) == param_1) && (*(pcVar4 + 0x18) != 0)) {
                    if (pcVar4 != NULL) {
                        pcVar4[0x29] = param_2 != 0;
                        if (piVar1 == NULL) goto code_r0x08001d8c;
                        goto code_r0x08001d78;
                    }
                    break;
                }
            }
            if ((_segment.ehdr == NULL) || (*_segment.ehdr != param_1)) {
                iVar2 = ___ratelimit(obj.snd_event_notify._rs.6,"snd_event_notify");
                if (iVar2 != 0) {
                    _dev_err(param_1,"%s: No snd dev entry found\n","snd_event_notify");
                }
                uVar3 = 0xfffffffa;
            }
            else {
                *(_segment.ehdr + 3) = param_2 != 0;
code_r0x08001d78:
                if (*(piVar1 + 0x1a) == '\0') {
code_r0x08001d8c:
                    uVar3 = 0;
                }
                else {
                    uVar3 = sym.check_and_update_fwk_state(arg1);
                }
            }
        }
        mutex_unlock(obj.snd_event_mutex);
    }
    return uVar3;
}


// ===== sym.snd_event_client_register.cfi_jt @ 0x08001128 (size 8) =====

ulong sym.snd_event_client_register.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar3 = ___ratelimit(obj.snd_event_client_register._rs,"snd_event_client_register");
        if (iVar3 == 0) {
            uVar6 = 0xffffffea;
        }
        else {
            _printk(0x800053b,"snd_event_client_register");
            uVar6 = 0xffffffea;
        }
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
        if (puVar4 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            puVar4[2] = param_1;
            puVar4[3] = param_2;
            puVar4[4] = param_3;
            mutex_lock(obj.snd_event_mutex);
            puVar2 = *0x8000120;
            uVar5 = __list_add_valid(puVar4,*0x8000120,obj.snd_event_client_list);
            if ((uVar5 & 1) != 0) {
                *0x8000120 = puVar4;
                *puVar4 = obj.snd_event_client_list;
                puVar4[1] = puVar2;
                *puVar2 = puVar4;
            }
            if (((_segment.ehdr != 0) && (*(_segment.ehdr + 0x1a) == '\0')) &&
               (iVar3 = sym.snd_event_find_clients(_segment.ehdr), iVar3 == 0)) {
                *(_segment.ehdr + 0x1a) = 1;
            }
            mutex_unlock(obj.snd_event_mutex);
            uVar6 = 0;
        }
    }
    return uVar6;
}


// ===== sym.snd_event_client_register @ 0x08001130 (size 308) =====

ulong sym.snd_event_client_register(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar3 = ___ratelimit(obj.snd_event_client_register._rs,"snd_event_client_register");
        if (iVar3 == 0) {
            uVar6 = 0xffffffea;
        }
        else {
            _printk(0x800053b,"snd_event_client_register");
            uVar6 = 0xffffffea;
        }
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
        if (puVar4 == NULL) {
            uVar6 = 0xfffffff4;
        }
        else {
            puVar4[2] = arg1;
            puVar4[3] = arg2;
            puVar4[4] = arg3;
            mutex_lock(obj.snd_event_mutex);
            puVar2 = *0x8000120;
            uVar5 = __list_add_valid(puVar4,*0x8000120,obj.snd_event_client_list);
            if ((uVar5 & 1) != 0) {
                *0x8000120 = puVar4;
                *puVar4 = obj.snd_event_client_list;
                puVar4[1] = puVar2;
                *puVar2 = puVar4;
            }
            if (((_segment.ehdr != 0) && (*(_segment.ehdr + 0x1a) == '\0')) &&
               (iVar3 = sym.snd_event_find_clients(_segment.ehdr), iVar3 == 0)) {
                *(_segment.ehdr + 0x1a) = 1;
            }
            mutex_unlock(obj.snd_event_mutex);
            uVar6 = 0;
        }
    }
    return uVar6;
}


// ===== sym.snd_event_find_clients @ 0x08001264 (size 336) =====

ulong sym.snd_event_find_clients(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    ulong *in_x18;
    uint64_t uVar3;
    code *pcVar4;
    uint64_t *puVar5;
    code *pcVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = *(arg1 + 0x20);
    if (*puVar5 != 0) {
        uVar7 = 0;
        do {
            uVar3 = puVar5[1];
            piVar1 = uVar3 + uVar7 * 0x20;
            if (*piVar1 == 0) {
                if (_obj.snd_event_client_list != obj.snd_event_client_list) {
                    pcVar6 = _obj.snd_event_client_list;
                    do {
                        if (pcVar6[0x28] == 0x0) {
                            pcVar4 = piVar1[3];
                            __cfi_slowpath_diag(0xd2e10b27ab65761b,pcVar4,0x80002c0);
                            iVar2 = (*pcVar4)(*(pcVar6 + 0x10),piVar1[2]);
                            if (iVar2 != 0) {
                                *piVar1 = *(pcVar6 + 0x10);
                                *(uVar3 + uVar7 * 0x20 + 8) = pcVar6;
                                pcVar6[0x28] = 0x1;
                                break;
                            }
                        }
                        pcVar6 = *pcVar6;
                    } while (pcVar6 != obj.snd_event_client_list);
                }
                if (*piVar1 == 0) {
                    return 0xfffffffa;
                }
            }
            else {
                iVar2 = ___ratelimit(obj.snd_event_find_clients._rs,"snd_event_find_clients");
                if (iVar2 != 0) {
                    _printk(0x8000592,"snd_event_find_clients",*piVar1);
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *puVar5);
    }
    return 0;
}


// ===== sym.snd_event_client_deregister @ 0x080013b4 (size 416) =====

uint sym.snd_event_client_deregister(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    code *pcVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_client_deregister._rs,"snd_event_client_deregister");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _printk(0x800053b,"snd_event_client_deregister");
        return 0xffffffea;
    }
    iVar4 = mutex_lock(obj.snd_event_mutex);
    uVar3 = 0xffffffed;
    if ((_obj.snd_event_client_list != obj.snd_event_client_list) &&
       (pcVar7 = _obj.snd_event_client_list, _obj.snd_event_client_list != obj.snd_event_client_list)) {
        do {
            if ((*(pcVar7 + 0x10) == arg1) && (*(pcVar7 + 0x18) != 0)) {
                if (pcVar7 != NULL) {
                    pcVar7[0x29] = 0x0;
                    if (_segment.ehdr == 0) goto code_r0x08001478;
                    uVar6 = **(_segment.ehdr + 0x20);
                    if (uVar6 == 0) goto code_r0x08001478;
                    uVar8 = 0;
                    uVar5 = (*(_segment.ehdr + 0x20))[1];
                    goto code_r0x08001454;
                }
                break;
            }
            pcVar7 = *pcVar7;
        } while (pcVar7 != obj.snd_event_client_list);
        uVar3 = 0xffffffed;
    }
    goto code_r0x080014d8;
    while (uVar8 = uVar8 + 1, uVar8 < uVar6) {
code_r0x08001454:
        if (*(*(uVar5 + uVar8 * 0x20 + 8) + 0x10) == arg1) {
            if (*(_segment.ehdr + 0x1a) == '\0') {
                uVar3 = 0;
            }
            else {
                uVar3 = sym.check_and_update_fwk_state(iVar4);
                piVar1 = _segment.ehdr + 0x20;
                *(_segment.ehdr + 0x1a) = 0;
                uVar5 = *(*piVar1 + 8);
            }
            *(uVar5 + uVar8 * 0x20) = 0;
            goto code_r0x0800147c;
        }
    }
code_r0x08001478:
    uVar3 = 0;
code_r0x0800147c:
    uVar6 = __list_del_entry_valid(pcVar7);
    if ((uVar6 & 1) != 0) {
        iVar4 = *pcVar7;
        piVar1 = *(pcVar7 + 8);
        *(iVar4 + 8) = piVar1;
        *piVar1 = iVar4;
    }
    *pcVar7 = -0x2152ffffffffff00;
    *(pcVar7 + 8) = -0x2152fffffffffede;
    kfree(pcVar7);
code_r0x080014d8:
    mutex_unlock(obj.snd_event_mutex);
    return uVar3;
}


// ===== sym.check_and_update_fwk_state @ 0x08001558 (size 828) =====

int sym.check_and_update_fwk_state(int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    code *pcVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = _segment.ehdr[4];
    uVar5 = *puVar4;
    if (uVar5 == 0) {
        uVar6 = 1;
    }
    else {
        uVar7 = 0;
        iVar1 = 1;
        uVar6 = 1;
        do {
            iVar10 = uVar7 * 0x20;
            uVar7 = iVar1;
            iVar1 = iVar1 + 1;
            uVar6 = uVar6 & *(*(puVar4[1] + iVar10 + 8) + 0x29);
        } while (uVar7 < uVar5);
    }
    uVar6 = uVar6 & *(_segment.ehdr + 3);
    if (uVar6 != *(_segment.ehdr + 0x19)) {
        if (uVar6 == 0) {
            pcVar8 = *(_segment.ehdr[1] + 8);
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xb710ab9fd4b9c5d9,pcVar8,0x8000320);
                (*pcVar8)(*_segment.ehdr,_segment.ehdr[2]);
                puVar4 = _segment.ehdr[4];
                uVar5 = *puVar4;
            }
            puVar3 = _segment.ehdr;
            if (uVar5 != 0) {
                uVar5 = 0;
                do {
                    iVar10 = *(puVar4[1] + uVar5 * 0x20 + 8);
                    pcVar8 = *(*(iVar10 + 0x18) + 8);
                    if (pcVar8 != NULL) {
                        __cfi_slowpath_diag(0xb710ab9fd4b9c5d9,pcVar8,0x8000340);
                        (*pcVar8)(*(iVar10 + 0x10),*(iVar10 + 0x20));
                        puVar3 = _segment.ehdr;
                    }
                    puVar4 = puVar3[4];
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *puVar4);
            }
        }
        else {
            puVar3 = _segment.ehdr;
            if (uVar5 != 0) {
                uVar5 = 0;
                do {
                    iVar10 = *(puVar4[1] + uVar5 * 0x20 + 8);
                    pcVar8 = **(iVar10 + 0x18);
                    uVar9 = uVar5;
                    if (pcVar8 != NULL) {
                        __cfi_slowpath_diag(0xd2e10b27ab65761b,pcVar8,0x80002e0);
                        iVar1 = (*pcVar8)(*(iVar10 + 0x10),*(iVar10 + 0x20));
                        puVar3 = _segment.ehdr;
                        if (iVar1 != 0) {
                            iVar2 = ___ratelimit(obj.check_and_update_fwk_state._rs,"check_and_update_fwk_state");
                            puVar3 = _segment.ehdr;
                            if (iVar2 != 0) {
                                _dev_err(*(iVar10 + 0x10),"%s: enable failed\n","check_and_update_fwk_state");
                                puVar3 = _segment.ehdr;
                            }
                            goto joined_r0x080017ac;
                        }
                    }
                    puVar4 = puVar3[4];
                    uVar5 = uVar9 + 1;
                } while (uVar5 < *puVar4);
            }
            pcVar8 = *puVar3[1];
            if (pcVar8 != NULL) {
                __cfi_slowpath_diag(0xd2e10b27ab65761b,pcVar8,0x8000300);
                iVar1 = (*pcVar8)(*_segment.ehdr,_segment.ehdr[2]);
                puVar3 = _segment.ehdr;
                if (iVar1 != 0) {
                    iVar2 = ___ratelimit(obj.check_and_update_fwk_state._rs.11,"check_and_update_fwk_state");
                    if (iVar2 != 0) {
                        _dev_err(*_segment.ehdr,"%s: enable failed\n","check_and_update_fwk_state");
                    }
                    uVar9 = *_segment.ehdr[4];
                    uVar5 = uVar9;
                    puVar3 = _segment.ehdr;
joined_r0x080017ac:
                    if (0 < uVar9) {
                        uVar5 = (uVar5 & 0xffffffff) + 1;
                        _segment.ehdr = puVar3;
                        do {
                            iVar10 = *(*(puVar3[4] + 8) + (uVar5 - 2) * 0x20 + 8);
                            pcVar8 = *(*(iVar10 + 0x18) + 8);
                            if (pcVar8 != NULL) {
                                __cfi_slowpath_diag(0xb710ab9fd4b9c5d9,pcVar8,0x8000360);
                                (*pcVar8)(*(iVar10 + 0x10),*(iVar10 + 0x20));
                                puVar3 = _segment.ehdr;
                            }
                            uVar5 = uVar5 - 1;
                        } while (1 < uVar5);
                        return iVar1;
                    }
                    _segment.ehdr = puVar3;
                    return iVar1;
                }
            }
        }
        *(puVar3 + 0x19) = uVar6;
    }
    return 0;
}


// ===== sym.snd_event_mstr_add_client @ 0x08001894 (size 348) =====

void sym.snd_event_mstr_add_client(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *arg1;
    if (0xfffffffffffff000 < piVar3) {
        iVar1 = ___ratelimit(obj.snd_event_mstr_add_client._rs,"snd_event_mstr_add_client");
        if (iVar1 == 0) {
            return;
        }
        _printk(0x8000405,"snd_event_mstr_add_client");
        return;
    }
    if (piVar3 == NULL) {
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x10);
        if (piVar3 == NULL) goto code_r0x080019b8;
        iVar2 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar2 = 0x30;
        }
        iVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x20);
        piVar3[1] = iVar2;
        if (iVar2 == 0) {
            *arg1 = 0xfffffffffffffff4;
            kfree(piVar3);
            return;
        }
        *arg1 = piVar3;
    }
    else {
        iVar2 = krealloc(piVar3[1],*piVar3 * 0x20 + 0x20,0xdc0);
        if (iVar2 == 0) {
code_r0x080019b8:
            *arg1 = 0xfffffffffffffff4;
            return;
        }
        piVar3[1] = iVar2;
    }
    *(iVar2 + *piVar3 * 0x20) = 0;
    *(piVar3[1] + *piVar3 * 0x20 + 0x10) = arg3;
    *(piVar3[1] + *piVar3 * 0x20 + 0x18) = arg2;
    *piVar3 = *piVar3 + 1;
    return;
}


// ===== sym.snd_event_master_register @ 0x080019f0 (size 396) =====

uint sym.snd_event_master_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *arg1_00;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_master_register._rs,"snd_event_master_register");
        if (iVar2 == 0) {
            return 0xffffffea;
        }
        _printk(0x800053b,"snd_event_master_register");
        return 0xffffffea;
    }
    mutex_lock(obj.snd_event_mutex);
    if (_segment.ehdr == NULL) {
        mutex_unlock(obj.snd_event_mutex);
        if ((arg3 == 0) || (0xfffffffffffff000 < arg3)) {
            _dev_err(arg1,"%s: Invalid clients ptr\n","snd_event_master_register");
            return 0xffffffea;
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
        if (arg1_00 == NULL) {
            return 0xfffffff4;
        }
        *arg1_00 = arg1;
        arg1_00[1] = arg2;
        arg1_00[2] = arg4;
        arg1_00[4] = arg3;
        mutex_lock(obj.snd_event_mutex);
        _segment.ehdr = arg1_00;
        iVar2 = sym.snd_event_find_clients(arg1_00);
        if (iVar2 == 0) {
            uVar3 = 0;
            *(_segment.ehdr + 0x1a) = 1;
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        _dev_err(arg1,"%s: master already allocated with %pK\n","snd_event_master_register",*_segment.ehdr);
        uVar3 = 0xffffff8e;
    }
    mutex_unlock(obj.snd_event_mutex);
    return uVar3;
}


// ===== sym.snd_event_master_deregister @ 0x08001b7c (size 244) =====

uint sym.snd_event_master_deregister(int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_master_deregister._rs,"snd_event_master_deregister");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _printk(0x800053b,"snd_event_master_deregister");
            uVar3 = 0xffffffea;
        }
    }
    else {
        arg1_00 = mutex_lock(obj.snd_event_mutex);
        piVar4 = _segment.ehdr;
        if (_segment.ehdr == NULL) {
            uVar3 = 0xffffffed;
        }
        else if (*_segment.ehdr == arg1) {
            pcVar1 = _segment.ehdr + 0x1a;
            *(_segment.ehdr + 3) = 0;
            if (*pcVar1 == '\0') {
                uVar3 = 0;
            }
            else {
                uVar3 = sym.check_and_update_fwk_state(arg1_00);
                piVar4 = _segment.ehdr;
            }
            kfree(*(piVar4[4] + 8));
            kfree(_segment.ehdr[4]);
            kfree(_segment.ehdr);
            _segment.ehdr = NULL;
        }
        else {
            uVar3 = 0xfffffffa;
        }
        mutex_unlock(obj.snd_event_mutex);
    }
    return uVar3;
}


// ===== sym.snd_event_notify @ 0x08001c70 (size 404) =====

uint sym.snd_event_notify(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t arg1_00;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = ___ratelimit(obj.snd_event_notify._rs,"snd_event_notify");
        if (iVar2 != 0) {
            _printk(0x800053b,"snd_event_notify");
        }
        uVar3 = 0xffffffea;
    }
    else {
        arg1_00 = mutex_lock(obj.snd_event_mutex);
        piVar1 = _segment.ehdr;
        pcVar4 = _obj.snd_event_client_list;
        if ((_obj.snd_event_client_list == obj.snd_event_client_list) && (_segment.ehdr == NULL)) {
            iVar2 = ___ratelimit(obj.snd_event_notify._rs.4,"snd_event_notify");
            if (iVar2 != 0) {
                _dev_err(arg1,"%s: No device registered\n","snd_event_notify");
            }
            uVar3 = 0xffffffed;
        }
        else {
            for (; pcVar4 != obj.snd_event_client_list; pcVar4 = *pcVar4) {
                if ((*(pcVar4 + 0x10) == arg1) && (*(pcVar4 + 0x18) != 0)) {
                    if (pcVar4 != NULL) {
                        pcVar4[0x29] = arg2 != 0;
                        if (piVar1 == NULL) goto code_r0x08001d8c;
                        goto code_r0x08001d78;
                    }
                    break;
                }
            }
            if ((_segment.ehdr == NULL) || (*_segment.ehdr != arg1)) {
                iVar2 = ___ratelimit(obj.snd_event_notify._rs.6,"snd_event_notify");
                if (iVar2 != 0) {
                    _dev_err(arg1,"%s: No snd dev entry found\n","snd_event_notify");
                }
                uVar3 = 0xfffffffa;
            }
            else {
                *(_segment.ehdr + 3) = arg2 != 0;
code_r0x08001d78:
                if (*(piVar1 + 0x1a) == '\0') {
code_r0x08001d8c:
                    uVar3 = 0;
                }
                else {
                    uVar3 = sym.check_and_update_fwk_state(arg1_00);
                }
            }
        }
        mutex_unlock(obj.snd_event_mutex);
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x08001e08 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001e4c

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
    //switch table (4 cases) at 0x8000380
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e60);
    (*pcVar1)();
}

