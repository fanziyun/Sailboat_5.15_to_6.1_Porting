// decompiled from reboot-mode by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 284) =====

//WARNING: Switch with 1 destination removed at 0x080015d8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x37828798b82cf44d) {
        if (arg1 == -0x58c4a7feef7ff60d) {
            pcVar2 = sym.devm_reboot_mode_match.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt;
        }
        else {
            if (arg1 != -0x48ef54602b463a27) {
                if ((arg1 == -0x38d52994aad8cf23) && ((pcVar1 + -0x8001130 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001598;
            }
            pcVar2 = sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt;
        }
    }
    else if (arg1 == 0x37828798b82cf44d) {
        pcVar2 = sym.devm_reboot_mode_register.cfi_jt;
    }
    else if (arg1 == 0x4d457eb71e3493cd) {
        pcVar2 = sym.devm_reboot_mode_unregister.cfi_jt;
    }
    else {
        if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08001598;
        pcVar2 = sym.reboot_mode_notify.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001598:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015ec);
    (*pcVar1)();
}


// ===== sym.devm_reboot_mode_unregister.cfi_jt @ 0x08001128 (size 8) =====

void sym.devm_reboot_mode_unregister.cfi_jt(uint param_1,ulong param_2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = devres_release(param_1,sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,
                           sym.devm_reboot_mode_match.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,param_2);
    if (iVar2 == 0) {
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001560);
    (*pcVar1)();
}


// ===== sym.reboot_mode_register.cfi_jt @ 0x08001130 (size 8) =====

uint sym.reboot_mode_register.cfi_jt(int64_t *param_1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 1;
    iVar8 = *(*param_1 + 0x2f0);
    param_1[1] = piVar1;
    param_1[2] = piVar1;
    piVar10 = *(iVar8 + 0x60);
    do {
        if (piVar10 == NULL) {
            param_1[4] = sym.reboot_mode_notify.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt;
            register_reboot_notifier(param_1 + 4);
            return 0;
        }
        iVar3 = strncmp(*piVar10,"mode-",5);
        if (iVar3 == 0) {
            puVar4 = devm_kmalloc(*param_1,0x20,0xdc0);
            if (puVar4 == NULL) {
code_r0x0800128c:
                uVar7 = 0xfffffff4;
code_r0x08001290:
                for (piVar10 = *piVar1; piVar1 != piVar10; piVar10 = *piVar10) {
                    kfree_const(piVar10[-2]);
                }
                return uVar7;
            }
            iVar3 = of_property_read_variable_u32_array(iVar8,*piVar10,puVar4 + 1,1,0);
            if (iVar3 < 0) {
                _dev_err(*param_1,"reboot mode %s without magic number\n",*puVar4);
                devm_kfree(*param_1,puVar4);
            }
            else {
                pcVar5 = kstrdup_const(*piVar10 + 5,0xcc0);
                *puVar4 = pcVar5;
                if (pcVar5 == NULL) goto code_r0x0800128c;
                if (*pcVar5 == '\0') {
                    kfree_const();
                    _dev_err(*param_1,"invalid mode name(%s): too short!\n",*piVar10);
                    uVar7 = 0xffffffea;
                    goto code_r0x08001290;
                }
                piVar9 = param_1[2];
                puVar2 = puVar4 + 2;
                uVar6 = __list_add_valid(puVar2,piVar9,piVar1);
                if ((uVar6 & 1) != 0) {
                    param_1[2] = puVar2;
                    puVar4[2] = piVar1;
                    puVar4[3] = piVar9;
                    *piVar9 = puVar2;
                }
            }
        }
        piVar10 = piVar10[3];
    } while( true );
}


// ===== sym.reboot_mode_unregister.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.reboot_mode_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_reboot_notifier(param_1 + 0x20);
    for (piVar1 = *(param_1 + 8); param_1 + 8 != piVar1; piVar1 = *piVar1) {
        kfree_const(piVar1[-2]);
    }
    return 0;
}


// ===== sym.devm_reboot_mode_match.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt @ 0x08001140 (size 8) =====

bool sym.devm_reboot_mode_match.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3)

{
    code *pcVar1;
    
    if ((param_2 != NULL) && (*param_2 != 0)) {
        return *param_2 == param_3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001590);
    (*pcVar1)();
}


// ===== sym.devm_reboot_mode_register.cfi_jt @ 0x08001148 (size 8) =====

int sym.devm_reboot_mode_register.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = __devres_alloc_node(sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_reboot_mode_release");
    if (piVar2 == NULL) {
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.reboot_mode_register(param_2);
        if (iVar1 == 0) {
            *piVar2 = param_2;
            devres_add(param_1,piVar2);
        }
        else {
            devres_free(piVar2);
        }
    }
    return iVar1;
}


// ===== sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt @ 0x08001150 (size 8) =====

void sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt(ulong param_1,int64_t *param_2)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *param_2;
    unregister_reboot_notifier(iVar1 + 0x20);
    piVar2 = iVar1 + 8;
    for (piVar3 = *piVar2; piVar2 != piVar3; piVar3 = *piVar3) {
        kfree_const(piVar3[-2]);
    }
    return;
}


// ===== sym.reboot_mode_notify.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt @ 0x08001158 (size 8) =====

ulong sym.reboot_mode_notify.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt(int64_t param_1,ulong param_2,char *param_3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    code *pcVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_3 == NULL) {
        param_3 = "normal";
    }
    else {
        uVar2 = strlen(param_3);
        iVar3 = strnstr(param_3,0x80000c0,uVar2);
        if (iVar3 != 0) {
            strreplace(param_3,0x20,0x2d);
        }
    }
    piVar4 = param_1 + -0x18;
    piVar6 = *piVar4;
    if (piVar4 != piVar6) {
        do {
            iVar1 = strcmp(piVar6[-2],param_3);
            if (iVar1 == 0) {
                iVar3 = piVar6[-1];
                if (iVar3 == 0) {
                    return 0;
                }
                pcVar5 = *(param_1 + -8);
                __cfi_slowpath_diag(0xbacab34fff902253,pcVar5,0x80000a0);
                (*pcVar5)(param_1 + -0x20,iVar3);
                return 0;
            }
            piVar6 = *piVar6;
        } while (piVar4 != piVar6);
    }
    return 0;
}


// ===== sym.reboot_mode_register @ 0x08001160 (size 408) =====

uint sym.reboot_mode_register(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int iVar3;
    ulong *puVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 8;
    iVar8 = *(*arg1 + 0x2f0);
    *(arg1 + 8) = piVar1;
    *(arg1 + 0x10) = piVar1;
    piVar10 = *(iVar8 + 0x60);
    do {
        if (piVar10 == NULL) {
            *(arg1 + 0x20) = sym.reboot_mode_notify.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt;
            register_reboot_notifier(arg1 + 0x20);
            return 0;
        }
        iVar3 = strncmp(*piVar10,"mode-",5);
        if (iVar3 == 0) {
            puVar4 = devm_kmalloc(*arg1,0x20,0xdc0);
            if (puVar4 == NULL) {
code_r0x0800128c:
                uVar7 = 0xfffffff4;
code_r0x08001290:
                for (piVar10 = *piVar1; piVar1 != piVar10; piVar10 = *piVar10) {
                    kfree_const(piVar10[-2]);
                }
                return uVar7;
            }
            iVar3 = of_property_read_variable_u32_array(iVar8,*piVar10,puVar4 + 1,1,0);
            if (iVar3 < 0) {
                _dev_err(*arg1,"reboot mode %s without magic number\n",*puVar4);
                devm_kfree(*arg1,puVar4);
            }
            else {
                pcVar5 = kstrdup_const(*piVar10 + 5,0xcc0);
                *puVar4 = pcVar5;
                if (pcVar5 == NULL) goto code_r0x0800128c;
                if (*pcVar5 == '\0') {
                    kfree_const();
                    _dev_err(*arg1,"invalid mode name(%s): too short!\n",*piVar10);
                    uVar7 = 0xffffffea;
                    goto code_r0x08001290;
                }
                piVar9 = *(arg1 + 0x10);
                puVar2 = puVar4 + 2;
                uVar6 = __list_add_valid(puVar2,piVar9,piVar1);
                if ((uVar6 & 1) != 0) {
                    *(arg1 + 0x10) = puVar2;
                    puVar4[2] = piVar1;
                    puVar4[3] = piVar9;
                    *piVar9 = puVar2;
                }
            }
        }
        piVar10 = piVar10[3];
    } while( true );
}


// ===== sym.reboot_mode_notify @ 0x080012f8 (size 228) =====

ulong sym.reboot_mode_notify(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    code *pcVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        arg2 = "normal";
    }
    else {
        uVar2 = strlen(arg2);
        iVar3 = strnstr(arg2,0x80000c0,uVar2);
        noname_1 = extraout_q0;
        if (iVar3 != 0) {
            noname_1 = strreplace(arg2,0x20,0x2d);
        }
    }
    piVar4 = arg1 + -0x18;
    piVar6 = *piVar4;
    if (piVar4 != piVar6) {
        do {
            iVar1 = strcmp(noname_1,piVar6[-2],arg2);
            if (iVar1 == 0) {
                iVar3 = piVar6[-1];
                if (iVar3 == 0) {
                    return 0;
                }
                pcVar5 = *(arg1 + -8);
                __cfi_slowpath_diag(0xbacab34fff902253,pcVar5,0x80000a0);
                (*pcVar5)(arg1 + -0x20,iVar3);
                return 0;
            }
            piVar6 = *piVar6;
            noname_1 = extraout_q0_00;
        } while (piVar4 != piVar6);
    }
    return 0;
}


// ===== sym.reboot_mode_unregister @ 0x080013dc (size 88) =====

ulong sym.reboot_mode_unregister(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_reboot_notifier(arg1 + 0x20);
    for (piVar1 = *(arg1 + 8); arg1 + 8 != piVar1; piVar1 = *piVar1) {
        kfree_const(piVar1[-2]);
    }
    return 0;
}


// ===== sym.devm_reboot_mode_register @ 0x08001434 (size 152) =====

int sym.devm_reboot_mode_register(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = __devres_alloc_node(sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_reboot_mode_release");
    if (piVar2 == NULL) {
        iVar1 = -0xc;
    }
    else {
        iVar1 = sym.reboot_mode_register(arg2);
        if (iVar1 == 0) {
            *piVar2 = arg2;
            devres_add(arg1,piVar2);
        }
        else {
            devres_free(piVar2);
        }
    }
    return iVar1;
}


// ===== sym.devm_reboot_mode_release @ 0x080014cc (size 84) =====

void sym.devm_reboot_mode_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *arg1;
    unregister_reboot_notifier(arg1 + 0x20);
    piVar1 = arg1 + 8;
    for (piVar2 = *piVar1; piVar1 != piVar2; piVar2 = *piVar2) {
        kfree_const(piVar2[-2]);
    }
    return;
}


// ===== sym.devm_reboot_mode_unregister @ 0x08001520 (size 64) =====

void sym.devm_reboot_mode_unregister(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    uint in_w0;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = devres_release(in_w0,sym.devm_reboot_mode_release.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,
                           sym.devm_reboot_mode_match.1d7b38c0869418e4d78fb0c5f37de81d.cfi_jt,arg1);
    if (iVar2 == 0) {
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001560);
    (*pcVar1)();
}


// ===== sym.devm_reboot_mode_match @ 0x08001564 (size 44) =====

bool sym.devm_reboot_mode_match(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    
    if ((arg2 != 0) && (*arg2 != 0)) {
        return *arg2 == arg3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001590);
    (*pcVar1)();
}


// ===== sym.__cfi_check_fail @ 0x08001594 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015d8

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
    //switch table (4 cases) at 0x80001c4
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015ec);
    (*pcVar1)();
}

