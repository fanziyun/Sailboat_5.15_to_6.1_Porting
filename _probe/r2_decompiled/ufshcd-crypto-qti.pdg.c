// decompiled from ufshcd-crypto-qti by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 148) =====

//WARNING: Switch with 1 destination removed at 0x080016c8

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint64_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    uVar2 = arg1;
    if (uVar2 == 0x9357f0206f2daaf3) {
        if (1 < (pcVar1 + -0x80010b0 >> 3 | pcVar1 << 0x3d)) goto code_r0x08001688;
    }
    else {
        if (uVar2 == 0x286146b392d56a77) {
            pcVar3 = sym.ufshcd_crypto_qti_derive_raw_secret.37146d40067c11e25804cfabc52641f6.cfi_jt;
        }
        else {
            if (uVar2 != 0x6f4440314e2cf33c) goto code_r0x08001688;
            pcVar3 = sym.ufshcd_qti_hba_init_crypto_capabilities.cfi_jt;
        }
        if (pcVar1 != pcVar3) {
code_r0x08001688:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80016dc);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.ufshcd_qti_hba_init_crypto_capabilities.cfi_jt @ 0x080010a0 (size 8) =====

ulong sym.ufshcd_qti_hba_init_crypto_capabilities.cfi_jt(int64_t *param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = sym.readl(*param_1);
    if (((uVar3 >> 0x1c & 1) == 0) || ((*(param_1 + 0xc99) & 1) == 0)) {
        uVar5 = 0;
    }
    else {
        uVar5 = sym.readl(*param_1 + 0x100);
        *(param_1 + 0x253) = uVar5;
        *(param_1 + 0x255) = uVar5 >> 0x10 & 0xff00;
        iVar6 = devm_kmalloc(param_1[8],(uVar5 & 0xff) << 2,0xdc0);
        param_1[0x254] = iVar6;
        if (iVar6 == 0) {
            uVar5 = 0xfffffff4;
        }
        else {
            uVar5 = devm_blk_ksm_init(param_1[8],param_1 + 0x256,*(param_1 + 0x1299) + 1);
            iVar1 = _reloc.ufshcd_crypto_qti_keyslot_evict.37146d40067c11e25804cfabc52641f6.cfi_jt;
            iVar6 = _reloc.ufshcd_crypto_qti_keyslot_program.37146d40067c11e25804cfabc52641f6.cfi_jt;
            if (uVar5 == 0) {
                param_1[0x259] = 0x200000008;
                iVar2 = _reloc.ufshcd_crypto_qti_derive_raw_secret.37146d40067c11e25804cfabc52641f6.cfi_jt;
                param_1[0x25c] = param_1[8];
                param_1[0x256] = iVar6;
                param_1[599] = iVar1;
                param_1[600] = iVar2;
                if (*(param_1 + 0x253) != 0) {
                    uVar7 = 0;
                    do {
                        iVar6 = uVar7 * 4;
                        uVar4 = sym.readl(iVar6 + *param_1 + 0x104);
                        *(param_1[0x254] + iVar6) = uVar4;
                        if ((*(param_1[0x254] + iVar6) & 0xff00ff) == 0x30000) {
                            *(param_1 + 0x12d4) = *(param_1 + 0x12d4) | (*(param_1[0x254] + iVar6) & 0xff00) << 1;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(param_1 + 0x253));
                }
                return 0;
            }
        }
    }
    *(param_1 + 0x193) = *(param_1 + 0x193) & 0xfffffeff;
    return uVar5;
}


// ===== sym.ufshcd_crypto_qti_derive_raw_secret.37146d40067c11e25804cfabc52641f6.cfi_jt @ 0x080010a8 (size 8) =====

int sym.ufshcd_crypto_qti_derive_raw_secret.37146d40067c11e25804cfabc52641f6.cfi_jt
              (int64_t param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + -0x12b0;
    if (iVar1 != 0) {
        if (*(*(param_1 + -0x11b0) + 0x110) == '\0') {
            iVar3 = ufshcd_hold(iVar1,0);
            if (iVar3 == 0) {
                iVar3 = crypto_qti_derive_raw_secret(param_2,param_3,param_4,param_5);
                if (iVar3 != 0) {
                    _printk(0x8000123,"ufshcd_crypto_qti_derive_raw_secret",iVar3);
                }
                ufshcd_release(iVar1);
            }
            else {
                _printk(0x8000090,"ufshcd_crypto_qti_derive_raw_secret",iVar3);
            }
        }
        else {
            _printk(0x800013f,*(param_1 + -0x1010));
            iVar3 = -0x16;
        }
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8001684);
    (*pcVar2)();
}


// ===== sym.ufshcd_crypto_qti_keyslot_evict.37146d40067c11e25804cfabc52641f6.cfi_jt @ 0x080010b0 (size 8) =====

int sym.ufshcd_crypto_qti_keyslot_evict.37146d40067c11e25804cfabc52641f6.cfi_jt
              (int64_t param_1,ulong param_2,uint param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = param_1 + -0x12b0;
    if (iVar1 != 0) {
        iVar4 = *(param_1 + -0x11b0);
        if (*(iVar4 + 0x110) == '\0') {
            iVar3 = ufshcd_hold(iVar1,0);
            if (iVar3 == 0) {
                uStack_48 = *(iVar4 + 0x100);
                uStack_40 = *(iVar4 + 0x108);
                iVar3 = crypto_qti_keyslot_evict(&uStack_48,param_3);
                if (iVar3 != 0) {
                    _printk(0x8000123,"ufshcd_crypto_qti_keyslot_evict",iVar3);
                }
                ufshcd_release(iVar1);
            }
            else {
                _printk(0x8000090,"ufshcd_crypto_qti_keyslot_evict",iVar3);
            }
        }
        else {
            _printk(0x800013f,*(param_1 + -0x1010));
            iVar3 = -0x16;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return iVar3;
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8001594);
    (*pcVar2)();
}


// ===== sym.ufshcd_crypto_qti_keyslot_program.37146d40067c11e25804cfabc52641f6.cfi_jt @ 0x080010b8 (size 8) =====

int sym.ufshcd_crypto_qti_keyslot_program.37146d40067c11e25804cfabc52641f6.cfi_jt
              (int64_t param_1,uint32_t *param_2,uint param_3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = param_1 + -0x12b0;
    if (iVar1 == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800148c);
        (*pcVar3)();
    }
    if (param_2 == NULL) {
        _printk(0x800016b);
        iVar4 = -0x16;
code_r0x080013d8:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_58) {
            return iVar4;
        }
        __stack_chk_fail();
    }
    else {
        uVar2 = *param_2;
        uVar5 = uVar2;
        if (uVar2 < 5) {
            if (*(param_1 + -0x18) != 0) {
                if (3 < uVar2) {
code_r0x0800147c:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8001480);
                    (*pcVar3)();
                }
                uVar2 = param_2[1];
                uVar7 = 0;
                iVar8 = *(param_1 + -0x11b0);
                puVar6 = *(param_1 + -0x10) + 2;
                do {
                    if (*(obj.ufs_crypto_algs + uVar5 * 8) == puVar6[-2]) {
                        if (0x20 < (uVar5 << 3 | 4)) goto code_r0x0800147c;
                        if ((*(uVar5 * 8 + 0x80001ec) == *puVar6) && ((uVar2 >> 9 & puVar6[-1]) != 0)) {
                            if (-1 < uVar7) {
                                if (*(iVar8 + 0x110) == '\0') {
                                    iVar4 = ufshcd_hold(iVar1,0);
                                    if (iVar4 == 0) {
                                        uStack_68 = *(iVar8 + 0x100);
                                        uStack_60 = *(iVar8 + 0x108);
                                        iVar4 = crypto_qti_keyslot_program
                                                          (&uStack_68,param_2,param_3,uVar2 >> 9,uVar7 & 0xffffffff)
                                        ;
                                        if (iVar4 != 0) {
                                            _printk(0x8000123,"ufshcd_crypto_qti_keyslot_program",iVar4);
                                        }
                                        ufshcd_release(iVar1);
                                    }
                                    else {
                                        _printk(0x8000090,"ufshcd_crypto_qti_keyslot_program",iVar4);
                                    }
                                }
                                else {
                                    _printk(0x800013f,*(param_1 + -0x1010));
                                    iVar4 = -0x16;
                                }
                                goto code_r0x080013d8;
                            }
                            break;
                        }
                    }
                    uVar7 = uVar7 + 1;
                    puVar6 = puVar6 + 4;
                } while (*(param_1 + -0x18) != uVar7);
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80013d8);
            (*pcVar3)();
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001488);
    (*pcVar3)();
}


// ===== sym.ufshcd_qti_hba_init_crypto_capabilities @ 0x080010c0 (size 348) =====

ulong sym.ufshcd_qti_hba_init_crypto_capabilities(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = sym.readl(*arg1);
    if (((uVar3 >> 0x1c & 1) == 0) || ((*(arg1 + 0xc99) & 1) == 0)) {
        uVar5 = 0;
    }
    else {
        uVar5 = sym.readl(*arg1 + 0x100);
        *(arg1 + 0x1298) = uVar5;
        *(arg1 + 0x12a8) = uVar5 >> 0x10 & 0xff00;
        iVar6 = devm_kmalloc(*(arg1 + 0x40),(uVar5 & 0xff) << 2,0xdc0);
        *(arg1 + 0x12a0) = iVar6;
        if (iVar6 == 0) {
            uVar5 = 0xfffffff4;
        }
        else {
            uVar5 = devm_blk_ksm_init(*(arg1 + 0x40),arg1 + 0x12b0,*(arg1 + 0x1299) + 1);
            uVar2 = _reloc.ufshcd_crypto_qti_keyslot_evict.37146d40067c11e25804cfabc52641f6.cfi_jt;
            uVar1 = _reloc.ufshcd_crypto_qti_keyslot_program.37146d40067c11e25804cfabc52641f6.cfi_jt;
            if (uVar5 == 0) {
                *(arg1 + 0x12c8) = 0x200000008;
                uVar5 = _reloc.ufshcd_crypto_qti_derive_raw_secret.37146d40067c11e25804cfabc52641f6.cfi_jt;
                *(arg1 + 0x12e0) = *(arg1 + 0x40);
                *(arg1 + 0x12b0) = uVar1;
                *(arg1 + 0x12b8) = uVar2;
                *(arg1 + 0x12c0) = uVar5;
                if (*(arg1 + 0x1298) != 0) {
                    uVar7 = 0;
                    do {
                        iVar6 = uVar7 * 4;
                        uVar4 = sym.readl(iVar6 + *arg1 + 0x104);
                        *(*(arg1 + 0x12a0) + iVar6) = uVar4;
                        uVar3 = *(*(arg1 + 0x12a0) + iVar6);
                        if ((uVar3 & 0xff00ff) == 0x30000) {
                            *(arg1 + 0x12d4) = *(arg1 + 0x12d4) | (uVar3 & 0xff00) << 1;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(arg1 + 0x1298));
                }
                return 0;
            }
        }
    }
    *(arg1 + 0xc98) = *(arg1 + 0xc98) & 0xfffffeff;
    return uVar5;
}


// ===== sym.readl @ 0x0800121c (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001220);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8001264);
    return uVar1;
}


// ===== sym.ufshcd_crypto_qti_keyslot_program @ 0x0800129c (size 496) =====

int sym.ufshcd_crypto_qti_keyslot_program(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    uint8_t *puVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + -0x12b0;
    if (iVar1 == 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x800148c);
        (*pcVar3)();
    }
    if (arg2 == 0) {
        _printk(0x800016b);
        iVar4 = -0x16;
code_r0x080013d8:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_58) {
            return iVar4;
        }
        __stack_chk_fail();
    }
    else {
        uVar2 = *arg2;
        uVar5 = uVar2;
        if (uVar2 < 5) {
            if (*(arg1 + -0x18) != 0) {
                if (3 < uVar2) {
code_r0x0800147c:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(1,0x8001480);
                    (*pcVar3)();
                }
                uVar2 = *(arg2 + 4) >> 9;
                uVar7 = 0;
                iVar8 = *(arg1 + -0x11b0);
                puVar6 = *(arg1 + -0x10) + 2;
                do {
                    if (*(obj.ufs_crypto_algs + uVar5 * 8) == puVar6[-2]) {
                        if (0x20 < (uVar5 << 3 | 4)) goto code_r0x0800147c;
                        if ((*(uVar5 * 8 + 0x80001ec) == *puVar6) && ((uVar2 & puVar6[-1]) != 0)) {
                            if (-1 < uVar7) {
                                if (*(iVar8 + 0x110) == '\0') {
                                    iVar4 = ufshcd_hold(iVar1,0);
                                    if (iVar4 == 0) {
                                        uStack_68 = *(iVar8 + 0x100);
                                        uStack_60 = *(iVar8 + 0x108);
                                        iVar4 = crypto_qti_keyslot_program
                                                          (&uStack_68,arg2,arg3 & 0xffffffff,uVar2,
                                                           uVar7 & 0xffffffff);
                                        if (iVar4 != 0) {
                                            _printk(0x8000123,"ufshcd_crypto_qti_keyslot_program",iVar4);
                                        }
                                        ufshcd_release(iVar1);
                                    }
                                    else {
                                        _printk(0x8000090,"ufshcd_crypto_qti_keyslot_program",iVar4);
                                    }
                                }
                                else {
                                    _printk(0x800013f,*(arg1 + -0x1010));
                                    iVar4 = -0x16;
                                }
                                goto code_r0x080013d8;
                            }
                            break;
                        }
                    }
                    uVar7 = uVar7 + 1;
                    puVar6 = puVar6 + 4;
                } while (*(arg1 + -0x18) != uVar7);
            }
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80013d8);
            (*pcVar3)();
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001488);
    (*pcVar3)();
}


// ===== sym.ufshcd_crypto_qti_keyslot_evict @ 0x0800148c (size 264) =====

int sym.ufshcd_crypto_qti_keyslot_evict(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    iVar1 = arg1 + -0x12b0;
    if (iVar1 != 0) {
        iVar4 = *(arg1 + -0x11b0);
        if (*(iVar4 + 0x110) == '\0') {
            iVar3 = ufshcd_hold(iVar1,0);
            if (iVar3 == 0) {
                uStack_48 = *(iVar4 + 0x100);
                uStack_40 = *(iVar4 + 0x108);
                iVar3 = crypto_qti_keyslot_evict(&uStack_48,arg2 & 0xffffffff);
                if (iVar3 != 0) {
                    _printk(0x8000123,"ufshcd_crypto_qti_keyslot_evict",iVar3);
                }
                ufshcd_release(iVar1);
            }
            else {
                _printk(0x8000090,"ufshcd_crypto_qti_keyslot_evict",iVar3);
            }
        }
        else {
            _printk(0x800013f,*(arg1 + -0x1010));
            iVar3 = -0x16;
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) {
            return iVar3;
        }
        __stack_chk_fail();
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8001594);
    (*pcVar2)();
}


// ===== sym.ufshcd_crypto_qti_derive_raw_secret @ 0x08001594 (size 240) =====

int sym.ufshcd_crypto_qti_derive_raw_secret(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + -0x12b0;
    if (iVar1 != 0) {
        if (*(*(arg1 + -0x11b0) + 0x110) == '\0') {
            iVar3 = ufshcd_hold(iVar1,0);
            if (iVar3 == 0) {
                iVar3 = crypto_qti_derive_raw_secret(arg2,arg3 & 0xffffffff,arg4,in_w4);
                if (iVar3 != 0) {
                    _printk(0x8000123,"ufshcd_crypto_qti_derive_raw_secret",iVar3);
                }
                ufshcd_release(iVar1);
            }
            else {
                _printk(0x8000090,"ufshcd_crypto_qti_derive_raw_secret",iVar3);
            }
        }
        else {
            _printk(0x800013f,*(arg1 + -0x1010));
            iVar3 = -0x16;
        }
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x8001684);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x08001684 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016c8

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
    //switch table (4 cases) at 0x80001cb
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016dc);
    (*pcVar1)();
}

