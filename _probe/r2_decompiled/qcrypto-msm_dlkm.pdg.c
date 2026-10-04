// decompiled from qcrypto-msm_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08005000 (size 1588) =====

//WARNING: Switch with 1 destination removed at 0x0800e3c8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x8dc801903aca538) {
        if (arg1 < -0x368f2028cc7a6395) {
            if (arg1 < -0x5237c0a278e2a328) {
                if (arg1 == -0x627fee6a7ed87340) {
                    pcVar2 = sym._qcrypto_aes_skcipher_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x0800559c;
                }
                if (arg1 != -0x55395113c22127bf) {
                    if (arg1 != -0x550b9e52359ac614) goto code_r0x0800e388;
                    pcVar2 = sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x080055c4;
                }
                pcVar2 = sym.qcrypto_get_engine_list.cfi_jt;
            }
            else if (arg1 < -0x49b18a6b443cfd46) {
                if (arg1 != -0x5237c0a278e2a328) {
                    if ((arg1 == -0x49c7f5cdaae16d8d) && ((pcVar1 + -0x80057c8 >> 3 | pcVar1 << 0x3d) < 5)) {
                        return;
                    }
                    goto code_r0x0800e388;
                }
                pcVar2 = sym._qcrypto_ahash_cra_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            else {
                if (arg1 != -0x49b18a6b443cfd46) {
                    if (arg1 != -0x3c754d275428e5d1) goto code_r0x0800e388;
                    pcVar2 = sym._qce_aead_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x080055c4;
                }
                pcVar2 = sym.qcrypto_cipher_set_device_hw.cfi_jt;
            }
            goto code_r0x080055ec;
        }
        if (arg1 < -0x241b14bf7c899102) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 == -0x368f2028cc7a6395) {
                    pcVar2 = sym.qcrypto_ahash_clear_flag.cfi_jt;
                }
                else {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x0800e388;
                    pcVar2 = sym._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x2ee0710dce68437c) {
                    pcVar2 = sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x080055ec;
                }
                if (arg1 != -0x272955e907f4a516) goto code_r0x0800e388;
                pcVar2 = sym.qcrypto_cipher_set_flag.cfi_jt;
            }
code_r0x080055c4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
        }
        else {
            if (arg1 < -0x1d4f2fdb304abda6) {
                if (arg1 == -0x241b14bf7c899102) {
                    if ((pcVar1 + -0x8005820 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x0800e388;
                }
                if (arg1 != -0x1e9ea19bd165e9af) goto code_r0x0800e388;
                pcVar2 = sym._sha256_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            else {
                if (arg1 != -0x1d4f2fdb304abda6) {
                    if (arg1 != -0x174660c29007f2fb) goto code_r0x0800e388;
                    pcVar2 = sym.qcrypto_aead_set_flag.cfi_jt;
                    goto code_r0x080055c4;
                }
                pcVar2 = sym._qcrypto_setkey_aes.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
code_r0x08005604:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
        }
        goto code_r0x0800e388;
    }
    if (arg1 < 0x435c076a7523f9dd) {
        if (0x7ff5a213d37b1a5 < arg1) {
            if (arg1 < 0x1d7ed092cb04d3f1) {
                if (arg1 != 0x7ff5a213d37b1a6) {
                    if (arg1 != 0x1c0795ec4632a09d) goto code_r0x0800e388;
                    pcVar2 = sym._qcrypto_ahash_cra_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x0800559c;
                }
                pcVar2 = sym._debug_stats_read.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) {
                    if (arg1 != 0x32b078e977545aae) goto code_r0x0800e388;
                    pcVar2 = sym._sha256_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x08005604;
                }
                pcVar2 = sym._debug_stats_write.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
code_r0x080055ec:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x0800e388;
        }
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.simple_open.cfi_jt;
                goto code_r0x080055ec;
            }
            if (arg1 != -0x530a0633b5b525c) goto code_r0x0800e388;
            pcVar2 = sym._qcrypto_skcipher_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x62c5501f29a3026) goto code_r0x0800e388;
                pcVar2 = sym._qcrypto_enc_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
code_r0x08005620:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 0x10) {
                    return;
                }
                goto code_r0x0800e388;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (0x4f91ecf76a97dd3e < arg1) {
            if (arg1 < 0x7965662ba37c4f5c) {
                if (arg1 == 0x4f91ecf76a97dd3f) {
                    pcVar2 = sym._sha256_hmac_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x0800559c;
                }
                if (arg1 != 0x573dbb8879fb8f65) goto code_r0x0800e388;
                pcVar2 = sym._qcrypto_suspend.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            else {
                if (arg1 == 0x7965662ba37c4f5c) {
                    pcVar2 = sym._sha1_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    goto code_r0x08005620;
                }
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800e388;
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
            goto code_r0x080055ec;
        }
        if (0x4bc5b692eb31b0f6 < arg1) {
            if (arg1 == 0x4bc5b692eb31b0f7) {
                pcVar2 = sym._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            else {
                if (arg1 != 0x4d2a0db1eca8ba5f) goto code_r0x0800e388;
                pcVar2 = sym._qcrypto_aead_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            }
            goto code_r0x080055c4;
        }
        if (arg1 != 0x435c076a7523f9dd) {
            if ((arg1 == 0x4a2de83b2b18b9f5) && ((pcVar1 + -0x8005778 >> 3 | pcVar1 << 0x3d) < 10)) {
                return;
            }
            goto code_r0x0800e388;
        }
        pcVar2 = sym._qcrypto_cra_aead_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    }
code_r0x0800559c:
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x0800e388:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e3dc);
    (*pcVar1)();
}


// ===== sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005640 (size 8) =====

void sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,___cfi_slowpath_diag,param_1 + 0x38);
    return;
}


// ===== sym.qcrypto_get_engine_list.cfi_jt @ 0x08005648 (size 8) =====

void sym.qcrypto_get_engine_list.cfi_jt(uint64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    uint *puVar2;
    
    if (*0x8000530 != 0x8000530) {
        puVar2 = param_2 + 4;
        piVar1 = *0x8000530;
        if (param_1 < 2) {
            param_1 = 1;
        }
        do {
            param_1 = param_1 - 1;
            *puVar2 = *(piVar1 + 100);
            puVar2[-1] = piVar1[0xd];
            if (param_1 == 0) {
                return;
            }
            piVar1 = *piVar1;
            puVar2 = puVar2 + 3;
        } while (piVar1 != 0x8000530);
    }
    return;
}


// ===== sym._qcrypto_suspend.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005650 (size 8) =====

ulong sym._qcrypto_suspend.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 == 0) {
        return 0xffffffea;
    }
    if (*(*(arg1 + 0x20) + 0x23) != '\0') {
        iVar1 = *(arg1 + 0x20) + 0x34;
        uVar3 = _raw_spin_lock_irqsave(iVar1);
        if (*(arg1 + 0x70) == 1) {
            if (((0 < *(arg1 + 0x128)) || (*(arg1 + 0x48) != 0)) || (*(*(arg1 + 0x20) + 0xe8) != 0))
            goto code_r0x080092c4;
            *(arg1 + 0x70) = 5;
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            del_timer_sync(arg1 + 0x78);
            sym.qcrypto_ce_set_bus(arg1,0);
            uVar3 = _raw_spin_lock_irqsave(iVar1);
        }
        else if ((*(arg1 + 0x70) != 0) || (*(arg1 + 0x74) != '\0')) {
code_r0x080092c4:
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            return 0xfffffff0;
        }
        *(arg1 + 0x70) = 4;
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        if (__raw_spin_unlock_irqrestore != NULL) {
            sym.qcrypto_ce_set_bus(arg1,1);
            pcVar2 = __raw_spin_unlock_irqrestore;
            __cfi_slowpath_diag(0x641d19c7be126e92,__raw_spin_unlock_irqrestore,0x8000620);
            (*pcVar2)(*(arg1 + 0x10));
            sym.qcrypto_ce_set_bus(arg1,0);
        }
    }
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08005658 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt);
    return;
}


// ===== sym._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005660 (size 8) =====

uint sym._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar5 = *(arg1 + 0x20);
        if (*(iVar5 + 0x23) == '\0') {
            uVar4 = 0;
        }
        else {
            iVar1 = iVar5 + 0x34;
            uVar3 = _raw_spin_lock_irqsave(iVar1);
            if (*(arg1 + 0x70) == 4) {
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                if (__raw_spin_unlock_irqrestore != NULL) {
                    sym.qcrypto_ce_set_bus(arg1,1);
                    pcVar2 = __raw_spin_unlock_irqrestore;
                    __cfi_slowpath_diag(0x641d19c7be126e92,__raw_spin_unlock_irqrestore,0x8000640);
                    (*pcVar2)(*(arg1 + 0x10));
                    sym.qcrypto_ce_set_bus(arg1,0);
                }
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                *(arg1 + 0x70) = 0;
                *(arg1 + 0x118) = 0;
                *(arg1 + 0x110) = *(arg1 + 0x110) + 1;
                if (((*(iVar5 + 0xe8) == 0) && (*(arg1 + 0x48) == 0)) || (*(arg1 + 0x74) != '\0')) {
                    uVar4 = 0;
                }
                else {
                    queue_work_on(0x20,___cfi_slowpath_diag,arg1 + 0xe0);
                    uVar4 = 0;
                    *(arg1 + 0x74) = 1;
                }
            }
            else {
                uVar4 = 0xfffffff0;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
        }
    }
    return uVar4;
}


// ===== sym._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005668 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    char *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int *piVar9;
    char *pcVar10;
    code *arg1;
    char cVar11;
    uint32_t *puVar12;
    int iVar13;
    int *piVar14;
    ulong *in_x18;
    char *unaff_x19;
    int64_t iVar15;
    char *unaff_x24;
    code *unaff_x25;
    char *unaff_x27;
    ulong unaff_x30;
    int *piStack_100;
    int64_t iStack_f8;
    int aiStack_ec [33];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    aiStack_ec[0] = 0;
    pcVar5 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x138);
    if (pcVar5 == NULL) {
        iVar4 = -0xc;
        goto code_r0x08008a9c;
    }
    iVar15 = param_1 + 0x10;
    uVar6 = of_icc_get(iVar15,"");
    *(pcVar5 + 0x28) = uVar6;
    unaff_x19 = pcVar5;
    if (0xfffffffffffff000 < uVar6) {
        _dev_err(iVar15,"");
        aiStack_ec[0] = *(pcVar5 + 0x28);
        goto code_r0x08008a78;
    }
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    aiStack_ec[0] = icc_set_bw(uVar6,0x180,0x180);
    if (aiStack_ec[0] != 0) {
        _dev_err(iVar15,"");
        goto code_r0x08008a78;
    }
    iVar7 = qce_open(param_1,aiStack_ec);
    if (iVar7 == 0) {
        aiStack_ec[0] = -0x13;
        goto code_r0x08008a64;
    }
    aiStack_ec[0] = icc_set_bw(*(pcVar5 + 0x28),0,0);
    if (aiStack_ec[0] != 0) {
        _dev_err(iVar15,"");
        goto code_r0x08008a58;
    }
    unaff_x25 = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(param_1 + 0xa8) = pcVar5;
    *(pcVar5 + 0x18) = param_1;
    *(pcVar5 + 0x20) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar5 + 0x10) = iVar7;
    pcVar5[0x6c] = -0x11;
    pcVar5[0x6d] = -0x42;
    pcVar5[0x6e] = -0x53;
    pcVar5[0x6f] = -0x22;
    init_timer_key(pcVar5 + 0x78,sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0,0,0)
    ;
    pcVar5[0xb0] = -0x20;
    pcVar5[0xb1] = -1;
    pcVar5[0xb2] = -1;
    pcVar5[0xb3] = -1;
    pcVar5[0xb4] = '\x0f';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    *(pcVar5 + 0xb8) = pcVar5 + 0xb8;
    *(pcVar5 + 0xc0) = pcVar5 + 0xb8;
    pcVar5[0xe0] = -0x20;
    pcVar5[0xe1] = -1;
    pcVar5[0xe2] = -1;
    pcVar5[0xe3] = -1;
    pcVar5[0xe4] = '\x0f';
    pcVar5[0xe5] = '\0';
    pcVar5[0xe6] = '\0';
    pcVar5[0xe7] = '\0';
    *(pcVar5 + 200) = sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar5 + 0xe8) = pcVar5 + 0xe8;
    *(pcVar5 + 0xf0) = pcVar5 + 0xe8;
    *(pcVar5 + 0xf8) = sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    pcVar5[0x74] = '\0';
    pcVar5[0x134] = '\0';
    pcVar5[0x135] = '\0';
    pcVar5[0x136] = '\0';
    pcVar5[0x137] = '\0';
    pcVar5[300] = '\0';
    pcVar5[0x110] = '\0';
    pcVar5[0x111] = '\0';
    pcVar5[0x112] = '\0';
    pcVar5[0x113] = '\0';
    pcVar5[0x114] = '\0';
    pcVar5[0x115] = '\0';
    pcVar5[0x116] = '\0';
    pcVar5[0x117] = '\0';
    pcVar5[0x118] = '\0';
    crypto_init_queue(pcVar5 + 0x30,0x300);
    mutex_lock(0x8000548);
    *0x8000540 = *0x8000540 + 1;
    *(pcVar5 + 0x60) = *0x8000540;
    uVar8 = _raw_spin_lock_irqsave(0x80004e4);
    bVar2 = *0x8000530 == 0x8000530;
    pcVar5[0x12d] = bVar2;
    pcVar10 = *0x8000538;
    if (bVar2) {
        _segment.ehdr = pcVar5;
    }
    uVar6 = __list_add_valid(pcVar5,*0x8000538,0x8000530);
    if ((uVar6 & 1) != 0) {
        *0x8000538 = pcVar5;
        pcVar5[0] = '0';
        pcVar5[1] = '\x05';
        pcVar5[2] = '\0';
        pcVar5[3] = '\b';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        *(pcVar5 + 8) = pcVar10;
        *pcVar10 = pcVar5;
    }
    unaff_x24 = 0x80004c0;
    *0x8000578 = pcVar5;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar8);
    qce_hw_support(*(pcVar5 + 0x10),0x80004c0);
    uVar3 = *0x80004e0;
    uVar6 = *0x80004e0;
    *(pcVar5 + 0x68) = *0x80004dc;
    *(pcVar5 + 0x11c) = uVar3;
    piVar9 = __kmalloc(uVar6 * 0x28,0xdc0);
    if (piVar9 == NULL) {
        aiStack_ec[0] = -0xc;
        goto code_r0x08008a4c;
    }
    *(pcVar5 + 0x120) = piVar9;
    pcVar5[0x128] = '\0';
    pcVar5[0x129] = '\0';
    pcVar5[0x12a] = '\0';
    pcVar5[299] = '\0';
    iVar4 = *(pcVar5 + 0x11c);
    if (iVar4 != 0) {
        iVar13 = 0;
        piVar14 = piVar9;
        do {
            *piVar14 = iVar13;
            iVar13 = iVar13 + 1;
            *(piVar14 + 1) = 0;
            *(piVar14 + 2) = pcVar5;
            piVar14 = piVar14 + 10;
        } while (iVar4 != iVar13);
    }
    if (*0x80004ca == '\0') {
        puVar12 = *(param_1 + 0xa0);
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *puVar12;
        *0x80004b4 = puVar12[1];
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = puVar12[2];
        *0x80004bc = puVar12[3];
    }
    else {
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cb;
        *0x80004b4 = 0;
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cc;
        *0x80004bc = 1;
        *(pcVar5 + 100) = *0x80004d8;
    }
    if (_segment.ehdr != 1) goto code_r0x08008a4c;
    iVar7 = 0;
    do {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        piStack_100 = piVar9;
        iStack_f8 = iVar15;
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\0';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x80,obj._qcrypto_sk_cipher_algos + iVar7,0x200);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (0xfffffffffffff000 < unaff_x27) goto code_r0x08008a38;
        if (*0x80004cd != '\0') {
            pcVar10 = unaff_x27 + 0x138;
            uVar3 = strlen(pcVar10);
            aiStack_ec[0x20] = 0;
            aiStack_ec[0x1c] = 0;
            aiStack_ec[0x1d] = 0;
            aiStack_ec[0x1e] = 0;
            aiStack_ec[0x1f] = 0;
            aiStack_ec[0x18] = 0;
            aiStack_ec[0x19] = 0;
            aiStack_ec[0x1a] = 0;
            aiStack_ec[0x1b] = 0;
            aiStack_ec[1] = 0x6d6f6371;
            aiStack_ec[0x14] = 0;
            aiStack_ec[0x15] = 0;
            aiStack_ec[0x16] = 0;
            aiStack_ec[0x17] = 0;
            aiStack_ec[0x10] = 0;
            aiStack_ec[0x11] = 0;
            aiStack_ec[0x12] = 0;
            aiStack_ec[0x13] = 0;
            aiStack_ec[0xc] = 0;
            aiStack_ec[0xd] = 0;
            aiStack_ec[0xe] = 0;
            aiStack_ec[0xf] = 0;
            aiStack_ec[8] = 0;
            aiStack_ec[9] = 0;
            aiStack_ec[10] = 0;
            aiStack_ec[0xb] = 0;
            aiStack_ec[4] = 0;
            aiStack_ec[5] = 0;
            aiStack_ec[6] = 0;
            aiStack_ec[7] = 0;
            aiStack_ec[2] = 0x2d;
            aiStack_ec[3] = 0;
            if (0x7a < uVar3) {
                aiStack_ec[0] = -0x16;
                goto code_r0x08008844;
            }
            strlcat(aiStack_ec + 1,pcVar10,0x80);
            strlcpy(pcVar10,aiStack_ec + 1,0x80);
            aiStack_ec[0] = 0;
        }
        aiStack_ec[0] = crypto_register_skcipher(unaff_x27 + 0x80);
        pcVar10 = *0x80004f0;
        if (aiStack_ec[0] == 0) {
            uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
            if ((uVar6 & 1) != 0) {
                *0x80004f0 = unaff_x27;
                unaff_x27[0] = -0x18;
                unaff_x27[1] = '\x04';
                unaff_x27[2] = '\0';
                unaff_x27[3] = '\b';
                unaff_x27[4] = '\0';
                unaff_x27[5] = '\0';
                unaff_x27[6] = '\0';
                unaff_x27[7] = '\0';
                *(unaff_x27 + 8) = pcVar10;
                *pcVar10 = unaff_x27;
            }
            _dev_info(iVar15,0x80013d8,unaff_x27 + 0x1b8);
        }
        else {
            _dev_err(iVar15,"",unaff_x27 + 0x1b8);
            kfree_sensitive(unaff_x27);
        }
        iVar7 = iVar7 + 0x200;
    } while (iVar7 != 0xe00);
    if (*0x80004c6 == '\0') {
code_r0x08008874:
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\x01';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x280,reloc._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (unaff_x27 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != 0x0) {
                pcVar10 = unaff_x27 + 0x3b8;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08008844;
            }
            aiStack_ec[0] = crypto_register_ahash(unaff_x27 + 0x280);
            pcVar10 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x27;
                    unaff_x27[0] = -0x18;
                    unaff_x27[1] = '\x04';
                    unaff_x27[2] = '\0';
                    unaff_x27[3] = '\b';
                    unaff_x27[4] = '\0';
                    unaff_x27[5] = '\0';
                    unaff_x27[6] = '\0';
                    unaff_x27[7] = '\0';
                    *(unaff_x27 + 8) = pcVar10;
                    *pcVar10 = unaff_x27;
                }
                _dev_info(iVar15,0x80013d8,unaff_x27 + 0x438);
            }
            else {
                _dev_err(iVar15,"",unaff_x27 + 0x438);
                kfree_sensitive(unaff_x27);
            }
            unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x27 == NULL) goto code_r0x08008a34;
            unaff_x27[0x700] = '\x01';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x280,reloc._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt == 0x0) {
code_r0x080089dc:
                    aiStack_ec[0] = crypto_register_ahash(unaff_x27 + 0x280);
                    pcVar5 = *0x80004f0;
                    if (aiStack_ec[0] != 0) goto code_r0x08008adc;
                    uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = unaff_x27;
                        unaff_x27[0] = -0x18;
                        unaff_x27[1] = '\x04';
                        unaff_x27[2] = '\0';
                        unaff_x27[3] = '\b';
                        unaff_x27[4] = '\0';
                        unaff_x27[5] = '\0';
                        unaff_x27[6] = '\0';
                        unaff_x27[7] = '\0';
                        *(unaff_x27 + 8) = pcVar5;
                        *pcVar5 = unaff_x27;
                    }
                    _dev_info(iVar15,0x80013d8,unaff_x27 + 0x438);
                    goto code_r0x08008af8;
                }
                pcVar10 = unaff_x27 + 0x3b8;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] == 0) goto code_r0x080089dc;
                goto code_r0x08008844;
            }
        }
    }
    else {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 != NULL) {
            unaff_x27[0x700] = '\0';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x80,reloc._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (*0x80004cf == '\0') {
code_r0x08008790:
                    aiStack_ec[0] = crypto_register_skcipher(unaff_x27 + 0x80);
                    pcVar10 = *0x80004f0;
                    if (aiStack_ec[0] == 0) {
                        uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                        if ((uVar6 & 1) != 0) {
                            *0x80004f0 = unaff_x27;
                            unaff_x27[0] = -0x18;
                            unaff_x27[1] = '\x04';
                            unaff_x27[2] = '\0';
                            unaff_x27[3] = '\b';
                            unaff_x27[4] = '\0';
                            unaff_x27[5] = '\0';
                            unaff_x27[6] = '\0';
                            unaff_x27[7] = '\0';
                            *(unaff_x27 + 8) = pcVar10;
                            *pcVar10 = unaff_x27;
                        }
                        _dev_info(iVar15,0x80013d8,unaff_x27 + 0x1b8);
                    }
                    else {
                        _dev_err(iVar15,"",unaff_x27 + 0x1b8);
                        kfree_sensitive(unaff_x27);
                    }
                    goto code_r0x08008874;
                }
                pcVar10 = unaff_x27 + 0x138;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] == 0) goto code_r0x08008790;
code_r0x08008844:
                _dev_err(iVar15,"",pcVar10);
                kfree(unaff_x27);
                goto code_r0x08008a3c;
            }
            goto code_r0x08008a38;
        }
code_r0x08008a34:
        unaff_x27 = 0xfffffffffffffff4;
    }
code_r0x08008a38:
    aiStack_ec[0] = unaff_x27;
code_r0x08008a3c:
    sym._qcrypto_remove_engine(pcVar5);
    kfree_sensitive(piStack_100);
code_r0x08008a4c:
    mutex_unlock(0x8000548);
code_r0x08008a58:
    if (*(pcVar5 + 0x10) != 0) {
        qce_close();
    }
code_r0x08008a64:
    icc_set_bw(*(pcVar5 + 0x28),0,0);
    *(param_1 + 0xa8) = 0;
    unaff_x19 = pcVar5;
code_r0x08008a78:
    uVar8 = ksize(unaff_x19);
    memset(unaff_x19,0,uVar8);
    kfree(unaff_x19);
    iVar4 = aiStack_ec[0];
code_r0x08008a9c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08008adc:
    _dev_err(iStack_f8,"",unaff_x27 + 0x438);
    kfree_sensitive(unaff_x27);
code_r0x08008af8:
    pcVar5 = unaff_x19;
    if (((*unaff_x24 != '\0') || (unaff_x24[1] != '\0')) || (cVar11 = '\0', unaff_x24[3] != '\0')) {
        iVar15 = 0;
        unaff_x24 = 0x2;
        do {
            pcVar10 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (pcVar10 == NULL) goto code_r0x08008e58;
            pcVar10[0x700] = '\x02';
            pcVar10[0x701] = '\0';
            pcVar10[0x702] = '\0';
            pcVar10[0x703] = '\0';
            memcpy(pcVar10 + 0x500,obj._qcrypto_aead_sha1_hmac_algos + iVar15,0x200);
            *(pcVar10 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < pcVar10) goto code_r0x08008e5c;
            if (*0x80004ce != '\0') {
                unaff_x27 = pcVar10 + 0x5b8;
                uVar3 = strlen(unaff_x27);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08008e64;
            }
            aiStack_ec[0] = crypto_register_aead(pcVar10 + 0x500);
            pcVar1 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(pcVar10,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = pcVar10;
                    pcVar10[0] = -0x18;
                    pcVar10[1] = '\x04';
                    pcVar10[2] = '\0';
                    pcVar10[3] = '\b';
                    pcVar10[4] = '\0';
                    pcVar10[5] = '\0';
                    pcVar10[6] = '\0';
                    pcVar10[7] = '\0';
                    *(pcVar10 + 8) = pcVar1;
                    *pcVar1 = pcVar10;
                }
                _dev_info(iStack_f8,0x80013d8,pcVar10 + 0x638);
            }
            else {
                _dev_err(iStack_f8,"",pcVar10 + 0x638);
                kfree(pcVar10);
            }
            iVar15 = iVar15 + 0x200;
        } while (iVar15 != 0x600);
        cVar11 = '\0';
        if (*0x80004c3 != '\0') {
            iVar15 = 0;
            unaff_x24 = 0x2;
            do {
                pcVar10 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
                if (pcVar10 == NULL) goto code_r0x08008e58;
                pcVar10[0x700] = '\x02';
                pcVar10[0x701] = '\0';
                pcVar10[0x702] = '\0';
                pcVar10[0x703] = '\0';
                memcpy(pcVar10 + 0x500,obj._qcrypto_aead_sha256_hmac_algos + iVar15,0x200);
                *(pcVar10 + 0x708) = unaff_x25;
                if (0xfffffffffffff000 < pcVar10) goto code_r0x08008e5c;
                if (*0x80004ce != '\0') {
                    unaff_x27 = pcVar10 + 0x5b8;
                    uVar3 = strlen(unaff_x27);
                    aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar3);
                    if (aiStack_ec[0] != 0) goto code_r0x08008e64;
                }
                aiStack_ec[0] = crypto_register_aead(pcVar10 + 0x500);
                pcVar1 = *0x80004f0;
                if (aiStack_ec[0] == 0) {
                    uVar6 = __list_add_valid(pcVar10,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = pcVar10;
                        pcVar10[0] = -0x18;
                        pcVar10[1] = '\x04';
                        pcVar10[2] = '\0';
                        pcVar10[3] = '\b';
                        pcVar10[4] = '\0';
                        pcVar10[5] = '\0';
                        pcVar10[6] = '\0';
                        pcVar10[7] = '\0';
                        *(pcVar10 + 8) = pcVar1;
                        *pcVar1 = pcVar10;
                    }
                    _dev_info(iStack_f8,0x80013d8,pcVar10 + 0x638);
                }
                else {
                    _dev_err(iStack_f8,"",pcVar10 + 0x638);
                    kfree(pcVar10);
                }
                iVar15 = iVar15 + 0x200;
                cVar11 = *0x80004c3;
            } while (iVar15 != 0x600);
        }
    }
    if (cVar11 == '\0' && _segment.ehdr == 0) {
code_r0x08008b20:
        arg1 = unaff_x25;
        if (*0x80004c7 == '\0') {
code_r0x0800914c:
            mutex_unlock(0x8000548);
            unaff_x25 = arg1;
            iVar4 = 0;
            goto code_r0x08008a9c;
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (0xfffffffffffff000 < unaff_x24) goto code_r0x08008e50;
        if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
            arg1 = unaff_x24 + 0x5b8;
            uVar3 = strlen(arg1);
            aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1,uVar3);
            if (aiStack_ec[0] != 0) goto code_r0x08009100;
        }
        aiStack_ec[0] = crypto_register_aead(unaff_x24 + 0x500);
        pcVar10 = *0x80004f0;
        if (aiStack_ec[0] == 0) {
            uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
            if ((uVar6 & 1) != 0) {
                *0x80004f0 = unaff_x24;
                unaff_x24[0] = -0x18;
                unaff_x24[1] = '\x04';
                unaff_x24[2] = '\0';
                unaff_x24[3] = '\b';
                unaff_x24[4] = '\0';
                unaff_x24[5] = '\0';
                unaff_x24[6] = '\0';
                unaff_x24[7] = '\0';
                *(unaff_x24 + 8) = pcVar10;
                *pcVar10 = unaff_x24;
            }
            _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x638);
        }
        else {
            _dev_err(iStack_f8,"",unaff_x24 + 0x638);
            kfree_sensitive(unaff_x24);
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200)
        ;
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            arg1 = unaff_x25;
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1 = unaff_x24 + 0x5b8;
                uVar3 = strlen(arg1);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1,uVar3);
                unaff_x25 = arg1;
                if (aiStack_ec[0] != 0) goto code_r0x08009100;
            }
            aiStack_ec[0] = crypto_register_aead(unaff_x24 + 0x500);
            pcVar5 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar5;
                    *pcVar5 = unaff_x24;
                }
                _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x638);
                unaff_x19 = pcVar5;
            }
            else {
                _dev_err(iStack_f8,"",unaff_x24 + 0x638);
                kfree(unaff_x24);
            }
            goto code_r0x0800914c;
        }
    }
    else {
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) {
code_r0x080090e4:
            unaff_x24 = 0xfffffffffffffff4;
            aiStack_ec[0] = -0xc;
            goto code_r0x08008a3c;
        }
        unaff_x24[0x700] = '\x01';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x280,reloc._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1 = unaff_x24 + 0x3b8;
                uVar3 = strlen(arg1);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08009100;
            }
            aiStack_ec[0] = crypto_register_ahash(unaff_x24 + 0x280);
            pcVar10 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar10;
                    *pcVar10 = unaff_x24;
                }
                _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x438);
            }
            else {
                _dev_err(iStack_f8,"",unaff_x24 + 0x438);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x01';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x280,reloc._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (unaff_x24 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                    arg1 = unaff_x24 + 0x3b8;
                    uVar3 = strlen(arg1);
                    aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1,uVar3);
                    if (aiStack_ec[0] != 0) goto code_r0x08009100;
                }
                aiStack_ec[0] = crypto_register_ahash(unaff_x24 + 0x280);
                pcVar10 = *0x80004f0;
                if (aiStack_ec[0] == 0) {
                    uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = unaff_x24;
                        unaff_x24[0] = -0x18;
                        unaff_x24[1] = '\x04';
                        unaff_x24[2] = '\0';
                        unaff_x24[3] = '\b';
                        unaff_x24[4] = '\0';
                        unaff_x24[5] = '\0';
                        unaff_x24[6] = '\0';
                        unaff_x24[7] = '\0';
                        *(unaff_x24 + 8) = pcVar10;
                        *pcVar10 = unaff_x24;
                    }
                    _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x438);
                }
                else {
                    _dev_err(iStack_f8,"",unaff_x24 + 0x438);
                    kfree_sensitive(unaff_x24);
                }
                goto code_r0x08008b20;
            }
        }
    }
code_r0x08008e50:
    aiStack_ec[0] = unaff_x24;
    goto code_r0x08008a3c;
code_r0x08008e58:
    pcVar10 = 0xfffffffffffffff4;
code_r0x08008e5c:
    unaff_x24 = 0x2;
    aiStack_ec[0] = pcVar10;
    goto code_r0x08008a3c;
code_r0x08008e64:
    unaff_x24 = 0x2;
    _dev_err(iStack_f8,"",unaff_x27);
    kfree(pcVar10);
    goto code_r0x08008a3c;
code_r0x08009100:
    _dev_err(iStack_f8,"",arg1);
    kfree(unaff_x24);
    goto code_r0x08008a3c;
}


// ===== sym._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005670 (size 8) =====

ulong sym._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        iVar1 = *(arg1 + 0x20) + 0x98;
        mutex_lock(iVar1);
        sym._qcrypto_remove_engine(arg1);
        mutex_unlock(iVar1);
        if (*(arg1 + 0x10) != 0) {
            qce_close();
        }
        kfree_sensitive(arg1);
    }
    return 0;
}


// ===== sym._qcrypto_ahash_cra_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005678 (size 8) =====

ulong sym._qcrypto_ahash_cra_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    
    *(param_1 + -0x40) = 0x1d8;
    uVar1 = *(*(param_1 + 0x10) + 0x388);
    *(param_1 + 0xa0) = 0;
    *(param_1 + 0xf0) = 0;
    *(param_1 + 0x90) = 0;
    *(param_1 + 0x98) = uVar1;
    *(param_1 + 0x80) = param_1 + 0x80;
    *(param_1 + 0x88) = param_1 + 0x80;
    return 0;
}


// ===== sym._qcrypto_ahash_hmac_cra_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005680 (size 8) =====

ulong sym._qcrypto_ahash_hmac_cra_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0x20;
    param_1[-0x10] = 0x1d8;
    uVar3 = *(*(param_1 + 4) + 0x388);
    param_1[0x28] = 0;
    *(param_1 + 0x3c) = 0;
    *(param_1 + 0x24) = 0;
    *(param_1 + 0x26) = uVar3;
    *(param_1 + 0x20) = puVar1;
    *(param_1 + 0x22) = puVar1;
    iVar2 = kmem_cache_alloc_trace(_simple_open,0xcc0,600);
    if (iVar2 == 0) {
        *(param_1 + 0x3c) = 0;
        if (*puVar1 == puVar1) {
            iVar2 = *(param_1 + 0x3c);
        }
        else {
            _printk(0x8001281,"");
            iVar2 = *(param_1 + 0x3c);
        }
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            kfree_sensitive();
            uVar3 = 0xfffffff4;
            *(param_1 + 0x3c) = 0;
        }
    }
    else {
        *(iVar2 + 0x20) = param_1;
        *(param_1 + 0x3c) = iVar2;
        param_1[0x3e] = 0;
        __init_swait_queue_head(param_1 + 0x40,"",obj.init_completion.__key);
        uVar3 = 0;
        iVar2 = *(param_1 + 0x3c);
        *(iVar2 + 0x10) = sym._crypto_sha_hmac_ahash_req_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        *(iVar2 + 0x18) = param_1 + 0x3e;
        *(iVar2 + 0x28) = 0x400;
        *param_1 = 0;
    }
    return uVar3;
}


// ===== sym._qcrypto_aes_skcipher_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005688 (size 8) =====

uint sym._qcrypto_aes_skcipher_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    uint uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x24);
    if (*0x80004cd == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
        *(param_1 + 0x72) = uVar2;
        if (0xfffffffffffff000 < uVar2) {
            _printk(0x800086d,iVar3 + 0x38);
            uVar1 = param_1[0x72];
            *(param_1 + 0x72) = 0;
            return uVar1;
        }
        iVar3 = *(param_1 + 0x24);
    }
    else {
        *(param_1 + 0x72) = 0;
    }
    *param_1 = 0x1c8;
    if (iVar3 == 0x100) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        param_1[0x48] = 0;
        *(param_1 + 0x46) = *(iVar3 + 0x608);
        get_random_bytes(param_1 + 0x5a,0x10);
        uVar1 = 0;
        *(param_1 + 0x44) = 0;
        *(param_1 + 0x40) = param_1 + 0x40;
        *(param_1 + 0x42) = param_1 + 0x40;
        param_1[0x49] = 5;
    }
    return uVar1;
}


// ===== sym._qcrypto_skcipher_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005690 (size 8) =====

ulong sym._qcrypto_skcipher_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    uint *puVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = param_1 + 0x40;
    *param_1 = 0x1c8;
    if ((puVar1 == NULL) || (*(param_1 + 0x24) == 0x100)) {
        _printk(0x80008d5);
        uVar2 = 0xffffffea;
    }
    else {
        param_1[0x48] = 0;
        *(param_1 + 0x46) = *(*(param_1 + 0x24) + 0x608);
        get_random_bytes(param_1 + 0x5a,0x10);
        uVar2 = 0;
        *(param_1 + 0x44) = 0;
        *(param_1 + 0x40) = puVar1;
        *(param_1 + 0x42) = puVar1;
        param_1[0x49] = 5;
    }
    return uVar2;
}


// ===== sym._debug_stats_write.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005698 (size 8) =====

ulong sym._debug_stats_write.efdd1d0348837140a5be4140d40c9b69.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    memset(obj._qcrypto_stat,0,0x108);
    uVar1 = _raw_spin_lock_irqsave(0x80004e4);
    for (piVar2 = *0x8000530; piVar2 != 0x8000530; piVar2 = *piVar2) {
        piVar2[10] = 0;
        piVar2[0xb] = 0;
        qce_clear_driver_stats(piVar2[2]);
        *(piVar2 + 0x134) = 0;
    }
    *0x8000648 = 0;
    *0x8000640 = 0;
    *0x8000638 = 0;
    *0x8000630 = 0;
    *0x8000628 = 0;
    *0x8000620 = 0;
    *0x8000618 = 0;
    *0x8000610 = 0;
    *0x8000608 = 0;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar1);
    return param_3;
}


// ===== sym._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056a0 (size 8) =====

ulong sym._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt
                (int64_t param_1,int64_t param_2,uint32_t param_3)

{
    ushort uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_3 - 3;
    uVar4 = uVar2;
    if (param_3 < 3) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar1 = *(param_2 + uVar4);
        *(param_1 + 0x1c6) = *(param_2 + uVar4 + 1);
        *(param_1 + 0x1c4) = uVar1;
        if (((param_3 == 0x13) || (param_3 == 0x23)) || ((param_3 == 0x1b && (*(*(param_1 + 0x118) + 0x15) != '\0')))) {
            *(param_1 + 0x1b8) = uVar2;
            memcpy(param_1 + 0x178,param_2,uVar4);
            *(param_1 + 0x1c0) = uVar2;
            memcpy(param_1 + 0x128,param_2,uVar4);
            uVar3 = 0;
        }
        else {
            uVar3 = 0xffffffea;
            *(param_1 + 0x1b8) = 0;
        }
    }
    return uVar3;
}


// ===== sym._qcrypto_aead_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056a8 (size 8) =====

ulong sym._qcrypto_aead_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt
                (int64_t param_1,uint16_t *param_2,uint32_t param_3)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < param_3) {
        uVar2 = *param_2;
        if ((((3 < uVar2) && (uVar2 < param_3 || uVar2 == param_3)) && (param_2[1] == 1)) && ((uVar2 & 0xfffc) != 4)) {
            uVar3 = (*(param_2 + 2) & 0xff00ff00) >> 8 | (*(param_2 + 2) & 0xff00ff) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            *(param_1 + 0x1b8) = uVar3;
            uVar7 = *param_2 + 3 & 0x1fffc;
            param_3 = param_3 - uVar7;
            uVar4 = param_3 - uVar3;
            if (((uVar3 <= param_3) && (*(param_1 + 0x1c0) = uVar4, uVar3 < 0x40)) && (uVar4 < 0x40)) {
                iVar1 = param_2 + uVar7;
                *(param_1 + 0x158) = 0;
                *(param_1 + 0x160) = 0;
                *(param_1 + 0x148) = 0;
                *(param_1 + 0x150) = 0;
                *(param_1 + 0x138) = 0;
                *(param_1 + 0x140) = 0;
                *(param_1 + 0x128) = 0;
                *(param_1 + 0x130) = 0;
                memcpy(param_1 + 0x178,iVar1 + uVar4);
                memcpy(param_1 + 0x128,iVar1,*(param_1 + 0x1c0));
                if (((*(param_1 + 0x1b8) != 0x18) || (*(param_1 + 0x1c8) == 0)) || (*(param_1 + 0x1d0) == 0)) {
                    return 0;
                }
                *(*(param_1 + 0x1d0) + 0x80) = 0;
                iVar5 = crypto_ahash_setkey(*(param_1 + 0x1d0),param_1 + 0x128,*(param_1 + 0x1c0));
                if (iVar5 == 0) {
                    *(*(param_1 + 0x1c8) + 0x80) = 0;
                    uVar6 = crypto_skcipher_setkey(*(param_1 + 0x1c8),param_1 + 0x178,*(param_1 + 0x1b8));
                    if (uVar6 == 0) {
                        return uVar6;
                    }
                }
            }
        }
    }
    *(param_1 + 0x1b8) = 0;
    return 0xffffffea;
}


// ===== sym._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056b0 (size 8) =====

ulong sym._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_3 == 0x10) || (param_3 == 0x20)) || ((param_3 == 0x18 && (*(*(param_1 + 0x118) + 0x15) != '\0')))) {
        *(param_1 + 0x1b8) = param_3;
        memcpy(param_1 + 0x178,param_2,param_3);
        *(param_1 + 0x1c0) = param_3;
        memcpy(param_1 + 0x128,param_2,param_3);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
        *(param_1 + 0x1b8) = 0;
    }
    return uVar1;
}


// ===== sym.simple_open.cfi_jt @ 0x080056b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym._sha256_hmac_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056c0 (size 8) =====

int sym._sha256_hmac_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x160) = 0;
    *(param_1 + 0x168) = 0;
    *(param_1 + 0x150) = 0;
    *(param_1 + 0x158) = 0;
    *(param_1 + 0x140) = 0;
    *(param_1 + 0x148) = 0;
    *(param_1 + 0x130) = 0;
    *(param_1 + 0x138) = 0;
    if (param_3 < 0x41) {
        memcpy(param_1 + 0x130,param_2,param_3);
        iVar1 = 0;
    }
    else {
        *(param_1 + 0x124) = 0x2000000001;
        iVar1 = sym._sha_hmac_setkey(param_1,param_2,param_3);
        if (iVar1 != 0) {
            _printk(0x8000b4e);
        }
        param_3 = 0x40;
    }
    *(param_1 + 300) = param_3;
    return iVar1;
}


// ===== sym._sha1_hmac_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056c8 (size 8) =====

int sym._sha1_hmac_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int64_t param_2,uint32_t param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0x160) = 0;
    *(param_1 + 0x168) = 0;
    *(param_1 + 0x150) = 0;
    *(param_1 + 0x158) = 0;
    *(param_1 + 0x140) = 0;
    *(param_1 + 0x148) = 0;
    *(param_1 + 0x130) = 0;
    *(param_1 + 0x138) = 0;
    if (param_3 < 0x41) {
        memcpy(param_1 + 0x130,param_2,param_3);
        iVar1 = 0;
    }
    else {
        *(param_1 + 0x124) = 0x1400000000;
        iVar1 = sym._sha_hmac_setkey(param_1,param_2,param_3);
        if (iVar1 != 0) {
            _printk(0x8001031);
        }
        param_3 = 0x40;
    }
    *(param_1 + 300) = param_3;
    return iVar1;
}


// ===== sym._qcrypto_aead_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056d0 (size 8) =====

ulong sym._qcrypto_aead_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint param_2)

{
    *(param_1 + 0x1bc) = param_2;
    return 0;
}


// ===== sym._qcrypto_aead_ccm_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056d8 (size 8) =====

ulong sym._qcrypto_aead_ccm_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((param_2 < 0x11) && ((1 << (param_2 & 0x1f) & 0x15550U) != 0)) {
        uVar1 = 0;
        *(param_1 + 0x1bc) = param_2;
    }
    return uVar1;
}


// ===== sym._qcrypto_aead_rfc4309_ccm_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056e0 (size 8) =====

ulong sym._qcrypto_aead_rfc4309_ccm_setauthsize.efdd1d0348837140a5be4140d40c9b69.cfi_jt
                (int64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((param_2 < 0x11) && ((1 << (param_2 & 0x1f) & 0x11100U) != 0)) {
        uVar1 = 0;
        *(param_1 + 0x1bc) = param_2;
    }
    return uVar1;
}


// ===== sym._qcrypto_cra_aead_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056e8 (size 8) =====

void sym._qcrypto_cra_aead_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x100) != param_1 + 0x100) {
        _printk(0x8000fb4);
    }
    return;
}


// ===== sym._qcrypto_cra_aead_aes_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056f0 (size 8) =====

void sym._qcrypto_cra_aead_aes_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x100) == param_1 + 0x100) {
        iVar1 = *(param_1 + 0x1c8);
    }
    else {
        _printk(0x8000fb4);
        iVar1 = *(param_1 + 0x1c8);
    }
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    iVar1 = *(param_1 + 0x1d0);
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    *(param_1 + 0x1c8) = 0;
    *(param_1 + 0x1d0) = 0;
    return;
}


// ===== sym._qcrypto_ahash_cra_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080056f8 (size 8) =====

void sym._qcrypto_ahash_cra_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x80) == param_1 + 0x80) {
        iVar1 = *(param_1 + 0xf0);
    }
    else {
        _printk(0x8001281,"");
        iVar1 = *(param_1 + 0xf0);
    }
    if (iVar1 != 0) {
        kfree_sensitive();
        *(param_1 + 0xf0) = 0;
    }
    return;
}


// ===== sym.qcrypto_cipher_set_device_hw.cfi_jt @ 0x08005700 (size 8) =====

ulong sym.qcrypto_cipher_set_device_hw.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x40);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    puVar6 = iVar5 + 0x80;
    for (puVar4 = *puVar6; (puVar4 != puVar6 && ((*(puVar4 + 100) != param_2 || (*(puVar4 + 0xd) != param_3))));
        puVar4 = *puVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if (((puVar4 == NULL) || (*(puVar4 + 100) != param_2)) || (*(puVar4 + 0xd) != param_3)) {
        _printk(0x8000721,param_2);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = puVar4;
    }
    return uVar2;
}


// ===== sym._qcrypto_skcipher_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005708 (size 8) =====

void sym._qcrypto_skcipher_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x100) != param_1 + 0x100) {
        _printk(0x8000da4);
    }
    return;
}


// ===== sym._qcrypto_aes_skcipher_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005710 (size 8) =====

void sym._qcrypto_aes_skcipher_exit.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x100) == param_1 + 0x100) {
        iVar1 = *(param_1 + 0x1c8);
    }
    else {
        _printk(0x8000da4);
        iVar1 = *(param_1 + 0x1c8);
    }
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    *(param_1 + 0x1c8) = 0;
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08005718 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    _segment.ehdr = debugfs_create_dir("",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        snprintf(&uStack_38,0xf,"",1);
        _obj._debug_qcrypto = 0;
        iVar1 = debugfs_create_file(&uStack_38,0x1a4,_segment.ehdr,obj._debug_qcrypto,obj._debug_stats_ops);
        if (iVar1 == 0) {
            debugfs_remove(_segment.ehdr);
        }
    }
    *0x80004e8 = 0x80004e8;
    *0x80004f0 = 0x80004e8;
    *0x8000530 = 0x8000530;
    *0x8000538 = 0x8000530;
    *0x80005a0 = 0;
    *0x80004e4 = 0;
    __mutex_init(0x8000548,"",obj._debug_dent);
    *0x80005b0 = alloc_workqueue("",0x38,1);
    if (*0x80005b0 == 0) {
        _printk(0x80012c4);
        uVar2 = 0xfffffff4;
    }
    else {
        *0x80005b8 = 0xfffffffe0;
        *0x80005c0 = 0x80005c0;
        *0x80005c8 = 0x80005c0;
        *0x8000540 = 0;
        *0x80005d0 = sym.seq_response.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        *0x8000578 = 0;
        *0x8000600 = 0;
        *0x80005ec = 1;
        crypto_init_queue(0x8000580,0x300);
        uVar2 = __platform_driver_register
                          (reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt,obj.__this_module);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.cleanup_module;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt);
    return;
}


// ===== sym.qcrypto_get_num_engines.cfi_jt @ 0x08005720 (size 8) =====

int sym.qcrypto_get_num_engines.cfi_jt(void)

{
    int iVar1;
    int64_t *piVar2;
    
    if (*0x8000530 != 0x8000530) {
        iVar1 = 0;
        piVar2 = *0x8000530;
        do {
            piVar2 = *piVar2;
            iVar1 = iVar1 + 1;
        } while (piVar2 != 0x8000530);
        return iVar1;
    }
    return 0;
}


// ===== sym._qce_aead_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005728 (size 8) =====

void sym._qce_aead_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt
               (int64_t param_1,ulong param_2,int64_t param_3,int param_4)

{
    uint uVar1;
    char *pcVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    int *piVar11;
    char *pcVar12;
    code *arg1;
    char cVar13;
    uint32_t *puVar14;
    int iVar15;
    int *piVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    char *unaff_x19;
    int64_t iVar17;
    char *unaff_x24;
    code *unaff_x25;
    char *unaff_x27;
    ulong unaff_x30;
    int *piStack_170;
    int64_t iStack_168;
    int iStack_15c;
    uint uStack_158;
    ulong uStack_154;
    ulong uStack_14c;
    ulong uStack_144;
    ulong uStack_13c;
    ulong uStack_134;
    ulong uStack_12c;
    ulong uStack_124;
    ulong uStack_11c;
    ulong uStack_114;
    ulong uStack_10c;
    ulong uStack_104;
    ulong uStack_fc;
    ulong uStack_f4;
    ulong uStack_ec;
    ulong uStack_e4;
    uint uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    iVar4 = *(*(param_1 + 0xa8) + 0x11c);
    if (iVar4 != 0) {
        unaff_x24 = *(param_1 + 0x20);
        unaff_x19 = *(*(param_1 + 0xa8) + 0x120);
        do {
            if (*(unaff_x19 + 0x10) == param_1) {
                if (unaff_x19 != NULL) {
                    if (*(param_1 + 0x108) == 4) {
                        kfree_sensitive(*(param_1 + 0xf8));
                    }
                    else {
                        uVar1 = *(*(unaff_x24 + 0x10) + -0x50);
                        if (param_4 == 0) {
                            if (*(param_1 + 0x104) == 0) {
                                scatterwalk_map_and_copy
                                          (param_2,*(param_1 + 0x48),*(param_1 + 0x30) + *(param_1 + 0x34),
                                           *(unaff_x24 + 0x13c),1);
                                param_4 = 0;
                            }
                            else {
                                uStack_58 = 0;
                                uStack_50 = 0;
                                uStack_68 = 0;
                                uStack_60 = 0;
                                scatterwalk_map_and_copy
                                          (&uStack_68,*(param_1 + 0x40),
                                           (*(param_1 + 0x34) + *(param_1 + 0x30)) - *(unaff_x24 + 0x13c),
                                           *(unaff_x24 + 0x13c),0);
                                iVar4 = bcmp(param_2,&uStack_68,*(unaff_x24 + 0x13c));
                                param_4 = 0;
                                if (iVar4 != 0) {
                                    param_4 = -0x4a;
                                }
                            }
                        }
                        else {
                            param_4 = -6;
                        }
                        if (param_3 != 0) {
                            memcpy(unaff_x24 + 0xe8,param_3,uVar1);
                        }
                    }
                    iVar17 = 0x80;
                    if (param_4 != 0) {
                        iVar17 = 0x88;
                    }
                    iVar6 = 0x90;
                    if (param_4 != -0x4a) {
                        iVar6 = iVar17;
                    }
                    *(obj._qcrypto_stat + iVar6) = *(obj._qcrypto_stat + iVar6) + 1;
                    *(unaff_x19 + 0x20) = param_4;
                    sym.req_done(unaff_x19);
                    goto code_r0x080082a8;
                }
                break;
            }
            unaff_x19 = unaff_x19 + 0x28;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    _printk(0x80011dc);
code_r0x080082a8:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_48) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_probe;
    pcStack_c8 = sym._qcrypto_probe;
    iVar17 = sp_el0;
    iStack_d8 = *(iVar17 + 0x5e0);
    iStack_15c = 0;
    puStack_d0 = &stack0xffffffffffffffc0;
    pcVar7 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x138);
    if (pcVar7 == NULL) {
        iVar4 = -0xc;
        goto code_r0x08008a9c;
    }
    iVar17 = iVar6 + 0x10;
    uVar8 = of_icc_get(iVar17,"");
    *(pcVar7 + 0x28) = uVar8;
    unaff_x19 = pcVar7;
    if (0xfffffffffffff000 < uVar8) {
        _dev_err(iVar17,"");
        iStack_15c = *(pcVar7 + 0x28);
        goto code_r0x08008a78;
    }
    pcVar7[0x70] = '\0';
    pcVar7[0x71] = '\0';
    pcVar7[0x72] = '\0';
    pcVar7[0x73] = '\0';
    iStack_15c = icc_set_bw(uVar8,0x180,0x180);
    if (iStack_15c != 0) {
        _dev_err(iVar17,"");
        goto code_r0x08008a78;
    }
    iVar9 = qce_open(iVar6,&iStack_15c);
    if (iVar9 == 0) {
        iStack_15c = -0x13;
        goto code_r0x08008a64;
    }
    iStack_15c = icc_set_bw(*(pcVar7 + 0x28),0,0);
    if (iStack_15c != 0) {
        _dev_err(iVar17,"");
        goto code_r0x08008a58;
    }
    unaff_x25 = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(iVar6 + 0xa8) = pcVar7;
    *(pcVar7 + 0x18) = iVar6;
    *(pcVar7 + 0x20) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar7 + 0x10) = iVar9;
    pcVar7[0x6c] = -0x11;
    pcVar7[0x6d] = -0x42;
    pcVar7[0x6e] = -0x53;
    pcVar7[0x6f] = -0x22;
    init_timer_key(pcVar7 + 0x78,sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0,0,0)
    ;
    pcVar7[0xb0] = -0x20;
    pcVar7[0xb1] = -1;
    pcVar7[0xb2] = -1;
    pcVar7[0xb3] = -1;
    pcVar7[0xb4] = '\x0f';
    pcVar7[0xb5] = '\0';
    pcVar7[0xb6] = '\0';
    pcVar7[0xb7] = '\0';
    *(pcVar7 + 0xb8) = pcVar7 + 0xb8;
    *(pcVar7 + 0xc0) = pcVar7 + 0xb8;
    pcVar7[0xe0] = -0x20;
    pcVar7[0xe1] = -1;
    pcVar7[0xe2] = -1;
    pcVar7[0xe3] = -1;
    pcVar7[0xe4] = '\x0f';
    pcVar7[0xe5] = '\0';
    pcVar7[0xe6] = '\0';
    pcVar7[0xe7] = '\0';
    *(pcVar7 + 200) = sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar7 + 0xe8) = pcVar7 + 0xe8;
    *(pcVar7 + 0xf0) = pcVar7 + 0xe8;
    *(pcVar7 + 0xf8) = sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    pcVar7[0x74] = '\0';
    pcVar7[0x134] = '\0';
    pcVar7[0x135] = '\0';
    pcVar7[0x136] = '\0';
    pcVar7[0x137] = '\0';
    pcVar7[300] = '\0';
    pcVar7[0x110] = '\0';
    pcVar7[0x111] = '\0';
    pcVar7[0x112] = '\0';
    pcVar7[0x113] = '\0';
    pcVar7[0x114] = '\0';
    pcVar7[0x115] = '\0';
    pcVar7[0x116] = '\0';
    pcVar7[0x117] = '\0';
    pcVar7[0x118] = '\0';
    crypto_init_queue(pcVar7 + 0x30,0x300);
    mutex_lock(0x8000548);
    *0x8000540 = *0x8000540 + 1;
    *(pcVar7 + 0x60) = *0x8000540;
    uVar10 = _raw_spin_lock_irqsave(0x80004e4);
    bVar3 = *0x8000530 == 0x8000530;
    pcVar7[0x12d] = bVar3;
    pcVar12 = *0x8000538;
    if (bVar3) {
        _segment.ehdr = pcVar7;
    }
    uVar8 = __list_add_valid(pcVar7,*0x8000538,0x8000530);
    if ((uVar8 & 1) != 0) {
        *0x8000538 = pcVar7;
        pcVar7[0] = '0';
        pcVar7[1] = '\x05';
        pcVar7[2] = '\0';
        pcVar7[3] = '\b';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        *(pcVar7 + 8) = pcVar12;
        *pcVar12 = pcVar7;
    }
    unaff_x24 = 0x80004c0;
    *0x8000578 = pcVar7;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar10);
    qce_hw_support(*(pcVar7 + 0x10),0x80004c0);
    uVar5 = *0x80004e0;
    uVar8 = *0x80004e0;
    *(pcVar7 + 0x68) = *0x80004dc;
    *(pcVar7 + 0x11c) = uVar5;
    piVar11 = __kmalloc(uVar8 * 0x28,0xdc0);
    if (piVar11 == NULL) {
        iStack_15c = -0xc;
        goto code_r0x08008a4c;
    }
    *(pcVar7 + 0x120) = piVar11;
    pcVar7[0x128] = '\0';
    pcVar7[0x129] = '\0';
    pcVar7[0x12a] = '\0';
    pcVar7[299] = '\0';
    iVar4 = *(pcVar7 + 0x11c);
    if (iVar4 != 0) {
        iVar15 = 0;
        piVar16 = piVar11;
        do {
            *piVar16 = iVar15;
            iVar15 = iVar15 + 1;
            *(piVar16 + 1) = 0;
            *(piVar16 + 2) = pcVar7;
            piVar16 = piVar16 + 10;
        } while (iVar4 != iVar15);
    }
    if (*0x80004ca == '\0') {
        puVar14 = *(iVar6 + 0xa0);
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *puVar14;
        *0x80004b4 = puVar14[1];
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = puVar14[2];
        *0x80004bc = puVar14[3];
    }
    else {
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cb;
        *0x80004b4 = 0;
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cc;
        *0x80004bc = 1;
        *(pcVar7 + 100) = *0x80004d8;
    }
    if (_segment.ehdr != 1) goto code_r0x08008a4c;
    iVar9 = 0;
    do {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        piStack_170 = piVar11;
        iStack_168 = iVar17;
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\0';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x80,obj._qcrypto_sk_cipher_algos + iVar9,0x200);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (0xfffffffffffff000 < unaff_x27) goto code_r0x08008a38;
        if (*0x80004cd != '\0') {
            pcVar12 = unaff_x27 + 0x138;
            uVar5 = strlen(pcVar12);
            uStack_dc = 0;
            uStack_ec = 0;
            uStack_e4 = 0;
            uStack_fc = 0;
            uStack_f4 = 0;
            uStack_158 = 0x6d6f6371;
            uStack_10c = 0;
            uStack_104 = 0;
            uStack_11c = 0;
            uStack_114 = 0;
            uStack_12c = 0;
            uStack_124 = 0;
            uStack_13c = 0;
            uStack_134 = 0;
            uStack_14c = 0;
            uStack_144 = 0;
            uStack_154 = 0x2d;
            if (0x7a < uVar5) {
                iStack_15c = -0x16;
                goto code_r0x08008844;
            }
            strlcat(&uStack_158,pcVar12,0x80);
            strlcpy(pcVar12,&uStack_158,0x80);
            iStack_15c = 0;
        }
        iStack_15c = crypto_register_skcipher(unaff_x27 + 0x80);
        pcVar12 = *0x80004f0;
        if (iStack_15c == 0) {
            uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
            if ((uVar8 & 1) != 0) {
                *0x80004f0 = unaff_x27;
                unaff_x27[0] = -0x18;
                unaff_x27[1] = '\x04';
                unaff_x27[2] = '\0';
                unaff_x27[3] = '\b';
                unaff_x27[4] = '\0';
                unaff_x27[5] = '\0';
                unaff_x27[6] = '\0';
                unaff_x27[7] = '\0';
                *(unaff_x27 + 8) = pcVar12;
                *pcVar12 = unaff_x27;
            }
            _dev_info(iVar17,0x80013d8,unaff_x27 + 0x1b8);
        }
        else {
            _dev_err(iVar17,"",unaff_x27 + 0x1b8);
            kfree_sensitive(unaff_x27);
        }
        iVar9 = iVar9 + 0x200;
    } while (iVar9 != 0xe00);
    if (*0x80004c6 == '\0') {
code_r0x08008874:
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\x01';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x280,reloc._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (unaff_x27 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != 0x0) {
                pcVar12 = unaff_x27 + 0x3b8;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c != 0) goto code_r0x08008844;
            }
            iStack_15c = crypto_register_ahash(unaff_x27 + 0x280);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x27;
                    unaff_x27[0] = -0x18;
                    unaff_x27[1] = '\x04';
                    unaff_x27[2] = '\0';
                    unaff_x27[3] = '\b';
                    unaff_x27[4] = '\0';
                    unaff_x27[5] = '\0';
                    unaff_x27[6] = '\0';
                    unaff_x27[7] = '\0';
                    *(unaff_x27 + 8) = pcVar12;
                    *pcVar12 = unaff_x27;
                }
                _dev_info(iVar17,0x80013d8,unaff_x27 + 0x438);
            }
            else {
                _dev_err(iVar17,"",unaff_x27 + 0x438);
                kfree_sensitive(unaff_x27);
            }
            unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x27 == NULL) goto code_r0x08008a34;
            unaff_x27[0x700] = '\x01';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x280,reloc._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt == 0x0) {
code_r0x080089dc:
                    iStack_15c = crypto_register_ahash(unaff_x27 + 0x280);
                    pcVar7 = *0x80004f0;
                    if (iStack_15c != 0) goto code_r0x08008adc;
                    uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = unaff_x27;
                        unaff_x27[0] = -0x18;
                        unaff_x27[1] = '\x04';
                        unaff_x27[2] = '\0';
                        unaff_x27[3] = '\b';
                        unaff_x27[4] = '\0';
                        unaff_x27[5] = '\0';
                        unaff_x27[6] = '\0';
                        unaff_x27[7] = '\0';
                        *(unaff_x27 + 8) = pcVar7;
                        *pcVar7 = unaff_x27;
                    }
                    _dev_info(iVar17,0x80013d8,unaff_x27 + 0x438);
                    goto code_r0x08008af8;
                }
                pcVar12 = unaff_x27 + 0x3b8;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c == 0) goto code_r0x080089dc;
                goto code_r0x08008844;
            }
        }
    }
    else {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 != NULL) {
            unaff_x27[0x700] = '\0';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x80,reloc._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (*0x80004cf == '\0') {
code_r0x08008790:
                    iStack_15c = crypto_register_skcipher(unaff_x27 + 0x80);
                    pcVar12 = *0x80004f0;
                    if (iStack_15c == 0) {
                        uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                        if ((uVar8 & 1) != 0) {
                            *0x80004f0 = unaff_x27;
                            unaff_x27[0] = -0x18;
                            unaff_x27[1] = '\x04';
                            unaff_x27[2] = '\0';
                            unaff_x27[3] = '\b';
                            unaff_x27[4] = '\0';
                            unaff_x27[5] = '\0';
                            unaff_x27[6] = '\0';
                            unaff_x27[7] = '\0';
                            *(unaff_x27 + 8) = pcVar12;
                            *pcVar12 = unaff_x27;
                        }
                        _dev_info(iVar17,0x80013d8,unaff_x27 + 0x1b8);
                    }
                    else {
                        _dev_err(iVar17,"",unaff_x27 + 0x1b8);
                        kfree_sensitive(unaff_x27);
                    }
                    goto code_r0x08008874;
                }
                pcVar12 = unaff_x27 + 0x138;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c == 0) goto code_r0x08008790;
code_r0x08008844:
                _dev_err(iVar17,"",pcVar12);
                kfree(unaff_x27);
                goto code_r0x08008a3c;
            }
            goto code_r0x08008a38;
        }
code_r0x08008a34:
        unaff_x27 = 0xfffffffffffffff4;
    }
code_r0x08008a38:
    iStack_15c = unaff_x27;
code_r0x08008a3c:
    sym._qcrypto_remove_engine(pcVar7);
    kfree_sensitive(piStack_170);
code_r0x08008a4c:
    mutex_unlock(0x8000548);
code_r0x08008a58:
    if (*(pcVar7 + 0x10) != 0) {
        qce_close();
    }
code_r0x08008a64:
    icc_set_bw(*(pcVar7 + 0x28),0,0);
    *(iVar6 + 0xa8) = 0;
    unaff_x19 = pcVar7;
code_r0x08008a78:
    uVar10 = ksize(unaff_x19);
    memset(unaff_x19,0,uVar10);
    kfree(unaff_x19);
    iVar4 = iStack_15c;
code_r0x08008a9c:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_d8) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08008adc:
    _dev_err(iStack_168,"",unaff_x27 + 0x438);
    kfree_sensitive(unaff_x27);
code_r0x08008af8:
    pcVar7 = unaff_x19;
    if (((*unaff_x24 != '\0') || (unaff_x24[1] != '\0')) || (cVar13 = '\0', unaff_x24[3] != '\0')) {
        iVar17 = 0;
        unaff_x24 = 0x2;
        do {
            pcVar12 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (pcVar12 == NULL) goto code_r0x08008e58;
            pcVar12[0x700] = '\x02';
            pcVar12[0x701] = '\0';
            pcVar12[0x702] = '\0';
            pcVar12[0x703] = '\0';
            memcpy(pcVar12 + 0x500,obj._qcrypto_aead_sha1_hmac_algos + iVar17,0x200);
            *(pcVar12 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < pcVar12) goto code_r0x08008e5c;
            if (*0x80004ce != '\0') {
                unaff_x27 = pcVar12 + 0x5b8;
                uVar5 = strlen(unaff_x27);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar5);
                if (iStack_15c != 0) goto code_r0x08008e64;
            }
            iStack_15c = crypto_register_aead(pcVar12 + 0x500);
            pcVar2 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(pcVar12,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = pcVar12;
                    pcVar12[0] = -0x18;
                    pcVar12[1] = '\x04';
                    pcVar12[2] = '\0';
                    pcVar12[3] = '\b';
                    pcVar12[4] = '\0';
                    pcVar12[5] = '\0';
                    pcVar12[6] = '\0';
                    pcVar12[7] = '\0';
                    *(pcVar12 + 8) = pcVar2;
                    *pcVar2 = pcVar12;
                }
                _dev_info(iStack_168,0x80013d8,pcVar12 + 0x638);
            }
            else {
                _dev_err(iStack_168,"",pcVar12 + 0x638);
                kfree(pcVar12);
            }
            iVar17 = iVar17 + 0x200;
        } while (iVar17 != 0x600);
        cVar13 = '\0';
        if (*0x80004c3 != '\0') {
            iVar17 = 0;
            unaff_x24 = 0x2;
            do {
                pcVar12 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
                if (pcVar12 == NULL) goto code_r0x08008e58;
                pcVar12[0x700] = '\x02';
                pcVar12[0x701] = '\0';
                pcVar12[0x702] = '\0';
                pcVar12[0x703] = '\0';
                memcpy(pcVar12 + 0x500,obj._qcrypto_aead_sha256_hmac_algos + iVar17,0x200);
                *(pcVar12 + 0x708) = unaff_x25;
                if (0xfffffffffffff000 < pcVar12) goto code_r0x08008e5c;
                if (*0x80004ce != '\0') {
                    unaff_x27 = pcVar12 + 0x5b8;
                    uVar5 = strlen(unaff_x27);
                    iStack_15c = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar5);
                    if (iStack_15c != 0) goto code_r0x08008e64;
                }
                iStack_15c = crypto_register_aead(pcVar12 + 0x500);
                pcVar2 = *0x80004f0;
                if (iStack_15c == 0) {
                    uVar8 = __list_add_valid(pcVar12,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = pcVar12;
                        pcVar12[0] = -0x18;
                        pcVar12[1] = '\x04';
                        pcVar12[2] = '\0';
                        pcVar12[3] = '\b';
                        pcVar12[4] = '\0';
                        pcVar12[5] = '\0';
                        pcVar12[6] = '\0';
                        pcVar12[7] = '\0';
                        *(pcVar12 + 8) = pcVar2;
                        *pcVar2 = pcVar12;
                    }
                    _dev_info(iStack_168,0x80013d8,pcVar12 + 0x638);
                }
                else {
                    _dev_err(iStack_168,"",pcVar12 + 0x638);
                    kfree(pcVar12);
                }
                iVar17 = iVar17 + 0x200;
                cVar13 = *0x80004c3;
            } while (iVar17 != 0x600);
        }
    }
    if (cVar13 == '\0' && _segment.ehdr == 0) {
code_r0x08008b20:
        arg1 = unaff_x25;
        if (*0x80004c7 == '\0') {
code_r0x0800914c:
            mutex_unlock(0x8000548);
            unaff_x25 = arg1;
            iVar4 = 0;
            goto code_r0x08008a9c;
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1 = unaff_x24 + 0x5b8;
                uVar5 = strlen(arg1);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1,uVar5);
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_aead(unaff_x24 + 0x500);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar12;
                    *pcVar12 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x638);
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x638);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x02';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,
                   0x200);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < unaff_x24) goto code_r0x08008e50;
            arg1 = unaff_x25;
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1 = unaff_x24 + 0x5b8;
                uVar5 = strlen(arg1);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1,uVar5);
                unaff_x25 = arg1;
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_aead(unaff_x24 + 0x500);
            pcVar7 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar7;
                    *pcVar7 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x638);
                unaff_x19 = pcVar7;
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x638);
                kfree(unaff_x24);
            }
            goto code_r0x0800914c;
        }
    }
    else {
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) {
code_r0x080090e4:
            unaff_x24 = 0xfffffffffffffff4;
            iStack_15c = -0xc;
            goto code_r0x08008a3c;
        }
        unaff_x24[0x700] = '\x01';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x280,reloc._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1 = unaff_x24 + 0x3b8;
                uVar5 = strlen(arg1);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1,uVar5);
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_ahash(unaff_x24 + 0x280);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar12;
                    *pcVar12 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x438);
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x438);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x01';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x280,reloc._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (unaff_x24 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                    arg1 = unaff_x24 + 0x3b8;
                    uVar5 = strlen(arg1);
                    iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1,uVar5);
                    if (iStack_15c != 0) goto code_r0x08009100;
                }
                iStack_15c = crypto_register_ahash(unaff_x24 + 0x280);
                pcVar12 = *0x80004f0;
                if (iStack_15c == 0) {
                    uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = unaff_x24;
                        unaff_x24[0] = -0x18;
                        unaff_x24[1] = '\x04';
                        unaff_x24[2] = '\0';
                        unaff_x24[3] = '\b';
                        unaff_x24[4] = '\0';
                        unaff_x24[5] = '\0';
                        unaff_x24[6] = '\0';
                        unaff_x24[7] = '\0';
                        *(unaff_x24 + 8) = pcVar12;
                        *pcVar12 = unaff_x24;
                    }
                    _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x438);
                }
                else {
                    _dev_err(iStack_168,"",unaff_x24 + 0x438);
                    kfree_sensitive(unaff_x24);
                }
                goto code_r0x08008b20;
            }
        }
    }
code_r0x08008e50:
    iStack_15c = unaff_x24;
    goto code_r0x08008a3c;
code_r0x08008e58:
    pcVar12 = 0xfffffffffffffff4;
code_r0x08008e5c:
    unaff_x24 = 0x2;
    iStack_15c = pcVar12;
    goto code_r0x08008a3c;
code_r0x08008e64:
    unaff_x24 = 0x2;
    _dev_err(iStack_168,"",unaff_x27);
    kfree(pcVar12);
    goto code_r0x08008a3c;
code_r0x08009100:
    _dev_err(iStack_168,"",arg1);
    kfree(unaff_x24);
    goto code_r0x08008a3c;
}


// ===== sym._qce_sk_cipher_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005730 (size 8) =====

void sym._qce_sk_cipher_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt
               (uint32_t *param_1,ulong param_2,int64_t param_3,int param_4)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(*(param_1 + 0x2a) + 0x11c);
    if (iVar4 != 0) {
        iVar3 = *(param_1 + 0x10);
        arg1 = *(*(param_1 + 0x2a) + 0x120);
        iVar6 = *(iVar3 + 0x98);
        do {
            if (*(arg1 + 0x10) == param_1 + 8) {
                if (arg1 != 0) {
                    if (param_3 != 0) {
                        memcpy(iVar3 + 0xe8,param_3,*(*(iVar3 + 0x10) + -0x50));
                    }
                    uVar2 = 0;
                    if (param_4 != 0) {
                        uVar2 = 0xfffffffa;
                    }
                    iVar3 = 200;
                    if (param_4 != 0) {
                        iVar3 = 0xd0;
                    }
                    *(arg1 + 0x20) = uVar2;
                    *(obj._qcrypto_stat + iVar3) = *(obj._qcrypto_stat + iVar3) + 1;
                    if (*(iVar6 + 0x19) == '\0') goto code_r0x08007e50;
                    iVar3 = *(param_1 + 0x46);
                    uVar1 = *param_1;
                    uVar5 = uVar1;
                    *(param_1 + 4) = *(param_1 + 0x44);
                    *(param_1 + 6) = iVar3;
                    if ((iVar3 == 0) || (uVar1 < 1)) goto joined_r0x08007e90;
                    iVar4 = 0;
                    do {
                        iVar4 = iVar4 + 1;
                        uVar1 = uVar5 - *(iVar3 + 0xc);
                        uVar5 = uVar1;
                        iVar3 = sg_next();
                    } while (0 < uVar1 && iVar3 != 0);
                    uVar1 = *param_1;
                    uVar5 = uVar1;
                    if (iVar4 == 0) {
joined_r0x08007e90:
                        uVar7 = 0;
                        if (uVar1 != 0) {
code_r0x08007e94:
                            _printk(0x800135b,uVar7 & 0xffffffff,uVar5);
                        }
                    }
                    else {
                        uVar7 = 0;
                        iVar3 = *(param_1 + 0x58);
                        uVar8 = *(param_1 + 6);
                        do {
                            iVar6 = sg_copy_from_buffer(uVar8,1,iVar3,uVar5);
                            iVar3 = iVar3 + iVar6;
                            uVar5 = uVar5 - iVar6;
                            uVar7 = iVar6 + uVar7;
                            uVar8 = sg_next(uVar8);
                            iVar4 = iVar4 + -1;
                        } while (iVar4 != 0);
                        uVar5 = *param_1;
                        if (*param_1 != uVar7) goto code_r0x08007e94;
                    }
                    kfree_sensitive(*(param_1 + 0x58));
code_r0x08007e50:
                    sym.req_done(arg1);
                    return;
                }
                break;
            }
            arg1 = arg1 + 0x28;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    _printk(0x80011dc);
    return;
}


// ===== sym._qce_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005738 (size 8) =====

void sym._qce_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt
               (int64_t param_1,int64_t param_2,uint *param_3,int param_4)

{
    int64_t iVar1;
    int iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(param_1 + 0xa8) + 0x11c);
    if (iVar2 != 0) {
        arg1 = *(*(param_1 + 0xa8) + 0x120);
        iVar4 = *(*(param_1 + 0x20) + 0x98);
        uVar3 = *(*(*(param_1 + 0x20) + 0x10) + -0x80);
        do {
            if (*(arg1 + 0x10) == param_1) {
                if (arg1 != 0) {
                    if ((param_2 != 0) && (memcpy(param_1 + 0x1f8,param_2,uVar3), *(param_1 + 0x111) != '\0')) {
                        memcpy(*(param_1 + 0x40),param_2,uVar3);
                    }
                    if (param_3 != NULL) {
                        *(param_1 + 0xf8) = *param_3;
                        *(param_1 + 0xfc) = param_3[1];
                        *(param_1 + 0x100) = param_3[2];
                        *(param_1 + 0x104) = param_3[3];
                    }
                    uVar3 = 0;
                    if (param_4 != 0) {
                        uVar3 = 0xfffffffa;
                    }
                    *(param_1 + 0x110) = 0;
                    *(param_1 + 0x38) = *(param_1 + 0xb0);
                    *(param_1 + 0x30) = *(param_1 + 0xb8);
                    iVar1 = 0xf8;
                    if (param_4 != 0) {
                        iVar1 = 0x100;
                    }
                    *(arg1 + 0x20) = uVar3;
                    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
                    if (*(iVar4 + 0x19) != '\0') {
                        *(param_1 + 0x38) = *(param_1 + 0xc0);
                        kfree(*(param_1 + 0xe8));
                    }
                    sym.req_done(arg1);
                    return;
                }
                break;
            }
            arg1 = arg1 + 0x28;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
    }
    _printk(0x80011dc);
    return;
}


// ===== sym._qcrypto_setkey_aes.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005740 (size 8) =====

ulong sym._qcrypto_setkey_aes.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int64_t param_2,int param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x120) & 1) == 0) {
        if ((param_3 != 0x10) && (param_3 != 0x20)) {
            if (param_3 != 0x18) {
                return 0xffffffea;
            }
            if (*(*(param_1 + 0x118) + 0x15) == '\0') {
                iVar2 = *(param_1 + 0x1c8);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                *(param_1 + 0x1b8) = 0x18;
                *(iVar2 + 0x80) = *(iVar2 + 0x80) & 0xfff000ff;
                *(*(param_1 + 0x1c8) + 0x80) = *(*(param_1 + 0x1c8) + 0x80) | *(param_1 + 0x80) & 0xfff00;
                uVar1 = crypto_skcipher_setkey(*(param_1 + 0x1c8),param_2,0x18);
                return uVar1;
            }
        }
        *(param_1 + 0x1b8) = param_3;
        if ((*(param_1 + 0x120) >> 1 & 1) == 0) {
            if (param_2 == 0) {
                _printk(0x8001252,"");
                return 0xffffffea;
            }
            memcpy(param_1 + 0x178,param_2,param_3);
        }
    }
    return 0;
}


// ===== sym._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005748 (size 8) =====

ulong sym._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt
                (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x120) & 1) == 0) {
        uVar1 = param_3 >> 1 & 0x7fffffff;
        if (((uVar1 != 0x10) && (uVar1 != 0x20)) && ((uVar1 != 0x18 || (*(*(param_1 + 0x118) + 0x15) == '\0')))) {
            return 0xffffffea;
        }
        *(param_1 + 0x1b8) = param_3;
        if ((*(param_1 + 0x120) >> 1 & 1) == 0) {
            if (param_2 == 0) {
                _printk(0x8001252,"");
                return 0xffffffea;
            }
            memcpy(param_1 + 0x178,param_2,param_3 & 0xffffffff);
        }
    }
    return 0;
}


// ===== sym._qcrypto_setkey_des.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005750 (size 8) =====

uint sym._qcrypto_setkey_des.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,ulong *param_2,int param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == NULL) {
        _printk(0x8001252,"");
        return 0xffffffea;
    }
    if ((*(param_1 + 0x120) & 1) == 0) {
        if (param_3 != 8) {
            return 0xffffffea;
        }
        *(param_1 + 0x1b8) = 8;
        if ((*(param_1 + 0x120) >> 1 & 1) == 0) {
            *(param_1 + 0x178) = *param_2;
            return 0;
        }
    }
    else {
        _printk(0x800140b,"");
    }
    return 0;
}


// ===== sym._qcrypto_setkey_3des.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005758 (size 8) =====

ulong sym._qcrypto_setkey_3des.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,ulong *param_2,int param_3)

{
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x120) & 1) != 0) {
        _printk(0x8000ccd,"");
        return 0;
    }
    if (param_3 == 0x18) {
        *(param_1 + 0x1b8) = 0x18;
        if ((*(param_1 + 0x120) >> 1 & 1) != 0) {
            return 0;
        }
        if (param_2 != NULL) {
            uVar1 = param_2[2];
            uVar2 = *param_2;
            *(param_1 + 0x180) = param_2[1];
            *(param_1 + 0x188) = uVar1;
            *(param_1 + 0x178) = uVar2;
            return 0;
        }
        _printk(0x8001252,"");
    }
    return 0xffffffea;
}


// ===== sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005760 (size 8) =====

void sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + -0xc0);
    iVar1 = arg1 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(param_1 + -0x70) = 3;
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    sym.qcrypto_ce_set_bus(param_1 + -0xe0,1);
    *(param_1 + -0x58) = _qce_get_driver_stats + 0xfa;
    mod_timer(param_1 + -0x68);
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(param_1 + -0x70) = 1;
    *(param_1 + -0x6c) = 0;
    *(param_1 + 0x38) = 1;
    *(param_1 + 0x30) = *(param_1 + 0x30) + 1;
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    sym._start_qcrypto_process(arg1,param_1 + -0xe0);
    return;
}


// ===== sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005768 (size 8) =====

void sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(param_1 + -0x90);
    arg1 = param_1 + -0xb0;
    iVar1 = arg1_00 + 0x34;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    iVar2 = *(param_1 + 0x60);
    if ((*(param_1 + -0x40) == 1) && (iVar2 == *(param_1 + 100))) {
        if (*(param_1 + 0x78) < 1) {
            *(param_1 + -0x40) = 2;
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            sym.qcrypto_ce_set_bus(arg1,0);
            uVar3 = _raw_spin_lock_irqsave(iVar1);
            if (*(param_1 + -0x3c) != '\0') {
                *(param_1 + -0x40) = 3;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                sym.qcrypto_ce_set_bus(arg1,1);
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                *(param_1 + -0x40) = 1;
                *(param_1 + -0x3c) = 0;
                *(param_1 + 100) = iVar2;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                sym._start_qcrypto_process(arg1_00,arg1);
                iVar2 = *(param_1 + -0x40);
                goto joined_r0x08009518;
            }
            *(param_1 + -0x40) = 0;
        }
        else {
            if (*(param_1 + 0x68) != '\0') {
                _dev_warn(*(param_1 + -0x98) + 0x10,"",iVar2);
            }
            *(param_1 + 0x68) = 0;
        }
    }
    *(param_1 + 100) = iVar2;
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    iVar2 = *(param_1 + -0x40);
joined_r0x08009518:
    if (iVar2 != 0) {
        *(param_1 + -0x28) = _qce_get_driver_stats + 0xfa;
        mod_timer(param_1 + -0x38);
    }
    return;
}


// ===== sym.seq_response.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005770 (size 8) =====

void sym.seq_response.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    code *pcVar9;
    ulong *puVar10;
    int iVar11;
    ulong *in_x18;
    int iVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *arg2;
    ulong *puVar16;
    int *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar17 = param_1 + -0x10;
    piVar1 = param_1 + 0x34;
    iVar7 = param_1 + -0xd4;
    puVar16 = param_1 + -0x88;
    piVar2 = param_1 + 0x30;
    iVar5 = sp_el0;
code_r0x08005f34:
    piVar14 = param_1 + -0x18;
    Hint_Prefetch(piVar14,2,0,1);
    do {
        piVar8 = *piVar14;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
            *piVar14 = 0;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (piVar8 != NULL) {
        piVar14 = NULL;
        do {
            piVar13 = piVar14;
            piVar14 = piVar8;
            piVar8 = *piVar14;
            *piVar14 = piVar13;
        } while (piVar8 != NULL);
        if (piVar14 != NULL) {
            while( true ) {
                piVar8 = piVar13;
                iVar15 = piVar14[1];
                *(iVar5 + 0x10) = *(iVar5 + 0x10) + 0x200;
                pcVar9 = *(iVar15 + 0x10);
                if (4 < (pcVar9 + -0x80057c8 >> 3 | pcVar9 << 0x3d)) {
                    __cfi_slowpath_diag(0xb6380a32551e9273,pcVar9,0x80005a0);
                }
                (*pcVar9)(iVar15,piVar14[2]);
                sym.local_bh_enable();
                Hint_Prefetch(piVar17,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar17,0x10);
                    if (bVar4) {
                        *piVar17 = *piVar17 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (piVar8 == NULL) break;
                piVar13 = *piVar8;
                piVar14 = piVar8;
            }
        }
        if (*piVar17 < 200) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar12 = *piVar1;
                if (iVar12 != 0) goto code_r0x080061d0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080061d0:
            if (iVar12 == 0) {
                *(param_1 + 0x58) = *(param_1 + 0x58) + 1;
                iVar12 = *(param_1 + -0x78);
                if (0 < *(param_1 + -0x78)) {
                    while( true ) {
                        uVar6 = _raw_spin_lock_irqsave(iVar7);
                        if (puVar16 == *(param_1 + -0x88)) break;
                        if ((*(param_1 + 0x48) == NULL) || (puVar10 = **(param_1 + 0x48), puVar10 == puVar16)) {
                            puVar10 = *puVar16;
                        }
                        iVar11 = *(param_1 + -0x78) + 1;
                        arg2 = puVar10;
code_r0x080060a8:
                        iVar11 = iVar11 + -1;
                        if (iVar11 < 1) goto code_r0x08006110;
                        if ((*(arg2 + 300) != '\0') || (*(arg2 + 0x11c) <= arg2[0x25])) goto code_r0x080060d0;
                        *(param_1 + 0x48) = arg2;
                        _raw_spin_unlock_irqrestore(iVar7,uVar6);
                        if ((arg2 == NULL) ||
                           (sym._start_qcrypto_process(param_1 + -0x108,arg2), bVar4 = iVar12 < 2,
                           iVar12 = iVar12 + -1, bVar4)) goto code_r0x0800623c;
                    }
                    _printk(0x80011f7,"");
code_r0x08006114:
                    _raw_spin_unlock_irqrestore(iVar7,uVar6);
                }
            }
        }
    }
code_r0x0800623c:
    do {
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar12 = *piVar2;
            if (iVar12 != 2) goto code_r0x0800617c;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800617c:
        if (iVar12 == 2) goto code_r0x08005f34;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar12 = *piVar2;
            if (iVar12 != 1) goto code_r0x08006194;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006194:
        if (iVar12 != 2) {
            return;
        }
    } while( true );
code_r0x080060d0:
    if ((arg2 == NULL) || (arg2 = *arg2, arg2 == puVar16)) {
        arg2 = *puVar16;
    }
    if (puVar10 == arg2) {
code_r0x08006110:
        *(param_1 + 0x48) = 0;
        goto code_r0x08006114;
    }
    goto code_r0x080060a8;
}


// ===== sym._qcrypto_aead_decrypt_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005778 (size 8) =====

void sym._qcrypto_aead_decrypt_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 0x100000000;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    iVar1 = 0x18;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x48;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    return;
}


// ===== sym._qcrypto_aead_rfc4309_enc_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005780 (size 8) =====

ulong sym._qcrypto_aead_rfc4309_enc_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ushort uVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x30) | 4) == 0x14) {
        iVar2 = *(param_1 + 0x20);
        arg1 = *(iVar2 + 0x98);
        *(param_1 + 0xc0) = 0;
        *(param_1 + 0x100) = 2;
        *(param_1 + 0xcc) = 1;
        *(param_1 + 0x108) = 4;
        puVar4 = param_1 + 0xb8;
        *puVar4 = 0;
        *puVar4 = 3;
        uVar1 = *(iVar2 + 0x144);
        *(param_1 + 0xbb) = *(iVar2 + 0x146);
        *(param_1 + 0xb9) = uVar1;
        uVar3 = **(param_1 + 0x38);
        *(param_1 + 0xd0) = 1;
        *(param_1 + 0xb0) = puVar4;
        *(param_1 + 0xbc) = uVar3;
        *0x8001000 = *0x8001000 + 1;
        uVar3 = sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym._qcrypto_aead_encrypt_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005788 (size 8) =====

void sym._qcrypto_aead_encrypt_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 2;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    *(param_1 + 0x168) = param_1;
    iVar1 = 0;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x30;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    if (((*(iVar2 + 0x138) == 0x18) && (*(iVar2 + 0x148) != 0)) && (*(iVar2 + 0x150) != 0)) {
        sym._qcrypto_aead_aes_192_fallback(param_1,1);
    }
    else {
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    }
    return;
}


// ===== sym._qcrypto_aead_rfc4309_dec_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005790 (size 8) =====

ulong sym._qcrypto_aead_rfc4309_dec_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ushort uVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x30) | 4) == 0x14) {
        iVar2 = *(param_1 + 0x20);
        arg1 = *(iVar2 + 0x98);
        *(param_1 + 0x100) = 0x100000002;
        *(param_1 + 0xcc) = 1;
        *(param_1 + 0x108) = 4;
        *(param_1 + 0xc0) = 0;
        puVar4 = param_1 + 0xb8;
        *puVar4 = 0;
        *puVar4 = 3;
        uVar1 = *(iVar2 + 0x144);
        *(param_1 + 0xbb) = *(iVar2 + 0x146);
        *(param_1 + 0xb9) = uVar1;
        uVar3 = **(param_1 + 0x38);
        *(param_1 + 0xd0) = 1;
        *(param_1 + 0xb0) = puVar4;
        *(param_1 + 0xbc) = uVar3;
        *0x8001000 = *0x8001000 + 1;
        uVar3 = sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym._qcrypto_aead_decrypt_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005798 (size 8) =====

void sym._qcrypto_aead_decrypt_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 0x100000002;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    *(param_1 + 0x168) = param_1;
    iVar1 = 8;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x38;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    if (((*(iVar2 + 0x138) == 0x18) && (*(iVar2 + 0x148) != 0)) && (*(iVar2 + 0x150) != 0)) {
        sym._qcrypto_aead_aes_192_fallback(param_1,0);
    }
    else {
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    }
    return;
}


// ===== sym._qcrypto_aead_decrypt_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057a0 (size 8) =====

ulong sym._qcrypto_aead_decrypt_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (*(iVar2 + 0x13c) - 4 < 0xd && (*(iVar2 + 0x13c) & 1) == 0) {
        arg1 = *(iVar2 + 0x98);
        if ((*(iVar2 + 0x140) == 0x20) || (*(iVar2 + 0x140) == 0x10)) {
            *(param_1 + 0xcc) = 1;
            *(param_1 + 0x108) = 4;
            *(param_1 + 0x100) = 0x100000002;
            *(param_1 + 0xb0) = *(param_1 + 0x38);
            *0x8001000 = *0x8001000 + 1;
            uVar1 = sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym._qcrypto_aead_decrypt_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057a8 (size 8) =====

void sym._qcrypto_aead_decrypt_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 0x100000001;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    iVar1 = 0x28;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x58;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    return;
}


// ===== sym._qcrypto_aead_encrypt_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057b0 (size 8) =====

ulong sym._qcrypto_aead_encrypt_aes_ccm.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (*(iVar2 + 0x13c) - 4 < 0xd && (*(iVar2 + 0x13c) & 1) == 0) {
        arg1 = *(iVar2 + 0x98);
        if ((*(iVar2 + 0x140) == 0x20) || (*(iVar2 + 0x140) == 0x10)) {
            *(param_1 + 0xcc) = 1;
            *(param_1 + 0x100) = 2;
            *(param_1 + 0x108) = 4;
            *(param_1 + 0xb0) = *(param_1 + 0x38);
            *0x8001000 = *0x8001000 + 1;
            uVar1 = sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym._qcrypto_aead_encrypt_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057b8 (size 8) =====

void sym._qcrypto_aead_encrypt_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 0;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    iVar1 = 0x10;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x40;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    return;
}


// ===== sym._qcrypto_aead_encrypt_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057c0 (size 8) =====

void sym._qcrypto_aead_encrypt_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    arg1 = *(iVar2 + 0x98);
    *(param_1 + 0xcc) = 1;
    *(param_1 + 0x100) = 1;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xb0) = *(param_1 + 0x38);
    iVar1 = 0x20;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x50;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1);
    return;
}


// ===== sym.__typeid__ZTSFvP20crypto_async_requestiE_global_addr @ 0x080057c8 (size 8) =====

void sym.__typeid__ZTSFvP20crypto_async_requestiE_global_addr(int64_t param_1,int param_2)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x18);
    iVar2 = *(iVar3 + 0xe8);
    if (param_2 == 0) {
        scatterwalk_map_and_copy(iVar3 + 0xf8,*(iVar3 + 0x1b8),*(iVar2 + 0x34),*(*(iVar2 + 0x20) + 0x13c),1);
        iVar2 = *(iVar3 + 0xe8);
    }
    if (*(iVar3 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar3 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar3 + 0x1a8) = 0;
    *(iVar3 + 0xf0) = 0;
    kfree(*(iVar3 + 0x198));
    pcVar1 = *(iVar2 + 0x10);
    if (4 < (pcVar1 + -0x80057c8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar1,0x8000600);
    }
    (*pcVar1)(iVar2,param_2);
    return;
}


// ===== sym._aead_aes_fb_stage2_decrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057d0 (size 8) =====

void sym._aead_aes_fb_stage2_decrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint param_2)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x18);
    iVar2 = *(iVar3 + 0xe8);
    if (*(iVar3 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar3 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar3 + 0x1a8) = 0;
    *(iVar3 + 0xf0) = 0;
    kfree(*(iVar3 + 0x198));
    pcVar1 = *(iVar2 + 0x10);
    if (4 < (pcVar1 + -0x80057c8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar1,0x8000600);
    }
    (*pcVar1)(iVar2,param_2);
    return;
}


// ===== sym._crypto_sha_hmac_ahash_req_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057d8 (size 8) =====

void sym._crypto_sha_hmac_ahash_req_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_2 != -0x73) {
        *in_x18 = unaff_x30;
        complete(*(param_1 + 0x18));
    }
    return;
}


// ===== sym._aead_aes_fb_stage1_encrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057e0 (size 8) =====

void sym._aead_aes_fb_stage1_encrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x18);
    iVar3 = *(iVar4 + 0xe8);
    iVar5 = *(iVar3 + 0x20);
    memcpy(iVar5 + 0xe8,*(iVar4 + 0x198),*(iVar4 + 0x48));
    if (param_2 == 0) {
        iVar1 = *(iVar4 + 0xf0);
        *(iVar1 + 0x10) = sym.__typeid__ZTSFvP20crypto_async_requestiE_global_addr;
        *(iVar1 + 0x18) = iVar4;
        *(iVar1 + 0x28) = 0x400;
        param_2 = crypto_ahash_digest();
        if (param_2 == -0x73) {
            return;
        }
        if (param_2 == -0x10) {
            return;
        }
        if (param_2 == 0) {
            scatterwalk_map_and_copy(iVar4 + 0xf8,*(iVar4 + 0x1b8),*(iVar3 + 0x34),*(iVar5 + 0x13c),1);
        }
    }
    iVar3 = *(iVar4 + 0xe8);
    if (*(iVar4 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar4 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar4 + 0x1a8) = 0;
    *(iVar4 + 0xf0) = 0;
    kfree(*(iVar4 + 0x198));
    pcVar2 = *(iVar3 + 0x10);
    if (4 < (pcVar2 + -0x80057c8 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar2,0x8000600);
    }
    (*pcVar2)(iVar3,param_2);
    return;
}


// ===== sym._aead_aes_fb_stage1_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080057e8 (size 8) =====

void sym._aead_aes_fb_stage1_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int param_2)

{
    int iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x18);
    if (param_2 == 0) {
        iVar6 = *(iVar5 + 0xe8);
        iVar4 = *(iVar6 + 0x20);
        iVar3 = __kmalloc(*(iVar4 + 0x13c),0xcc0);
        if (iVar3 == 0) {
            param_2 = -0xc;
        }
        else {
            scatterwalk_map_and_copy(iVar3,*(iVar5 + 0x1b0),*(iVar6 + 0x34) - *(iVar4 + 0x13c),*(iVar4 + 0x13c),0);
            iVar1 = bcmp(iVar5 + 0xf8,iVar3,*(iVar4 + 0x13c));
            kfree(iVar3);
            if (iVar1 == 0) {
                iVar3 = *(iVar5 + 0x1a8);
                *(iVar3 + 0x30) = sym._aead_aes_fb_stage2_decrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                *(iVar3 + 0x38) = iVar5;
                *(iVar3 + 0x48) = 0x400;
                param_2 = crypto_skcipher_decrypt();
                if (param_2 == -0x73) {
                    return;
                }
                if (param_2 == -0x10) {
                    return;
                }
            }
            else {
                param_2 = -0x4a;
            }
        }
    }
    iVar3 = *(iVar5 + 0xe8);
    if (*(iVar5 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar5 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar5 + 0x1a8) = 0;
    *(iVar5 + 0xf0) = 0;
    kfree(*(iVar5 + 0x198));
    pcVar2 = *(iVar3 + 0x10);
    if (4 < (pcVar2 + -0x80057c8 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar2,0x8000600);
    }
    (*pcVar2)(iVar3,param_2);
    return;
}


// ===== sym.qcrypto_cipher_set_flag.cfi_jt @ 0x080057f0 (size 8) =====

ulong sym.qcrypto_cipher_set_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    if (((param_2 & 1) == 0) || (*(*(iVar2 + 0x98) + 8) != 0)) {
        param_2 = *(iVar2 + 0xa0) | param_2;
        if ((~param_2 & 0xff) != 0) {
            *(iVar2 + 0xa0) = param_2;
            return 0;
        }
        uVar1 = 0x8000ed9;
    }
    else {
        uVar1 = 0x8000acf;
    }
    _printk(uVar1,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_cipher_clear_flag.cfi_jt @ 0x080057f8 (size 8) =====

ulong sym.qcrypto_cipher_clear_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    *(*(param_1 + 0x40) + 0xa0) = *(*(param_1 + 0x40) + 0xa0) & (param_2 ^ 0xffffffff);
    return 0;
}


// ===== sym.qcrypto_cipher_set_device.cfi_jt @ 0x08005800 (size 8) =====

ulong sym.qcrypto_cipher_set_device.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x40);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != param_2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != param_2)) {
        _printk(0x8000721,param_2);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_aead_set_flag.cfi_jt @ 0x08005808 (size 8) =====

ulong sym.qcrypto_aead_set_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (((param_2 & 1) == 0) || (*(*(iVar2 + 0x98) + 8) != 0)) {
        param_2 = *(iVar2 + 0xa0) | param_2;
        if ((~param_2 & 0xff) != 0) {
            *(iVar2 + 0xa0) = param_2;
            return 0;
        }
        uVar1 = 0x8000ed9;
    }
    else {
        uVar1 = 0x8000acf;
    }
    _printk(uVar1,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_aead_clear_flag.cfi_jt @ 0x08005810 (size 8) =====

ulong sym.qcrypto_aead_clear_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    *(*(param_1 + 0x20) + 0xa0) = *(*(param_1 + 0x20) + 0xa0) & (param_2 ^ 0xffffffff);
    return 0;
}


// ===== sym.qcrypto_aead_set_device.cfi_jt @ 0x08005818 (size 8) =====

ulong sym.qcrypto_aead_set_device.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != param_2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != param_2)) {
        _printk(0x8000721,param_2);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym._qcrypto_cra_aead_sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005820 (size 8) =====

ulong sym._qcrypto_cra_aead_sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(param_1 + 0x120) = 0;
        *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
        get_random_bytes(param_1 + 0x168,0x10);
        uVar1 = 0;
        *(param_1 + 0x110) = 0;
        *(param_1 + 0x100) = param_1 + 0x100;
        *(param_1 + 0x108) = param_1 + 0x100;
    }
    *(param_1 + 0x124) = 3;
    return uVar1;
}


// ===== sym._qcrypto_cra_aead_rfc4309_ccm_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005828 (size 8) =====

ulong sym._qcrypto_cra_aead_rfc4309_ccm_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(param_1 + 0x120) = 0;
        *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
        get_random_bytes(param_1 + 0x168,0x10);
        uVar1 = 0;
        *(param_1 + 0x110) = 0;
        *(param_1 + 0x100) = param_1 + 0x100;
        *(param_1 + 0x108) = param_1 + 0x100;
    }
    *(param_1 + 0x124) = 4;
    return uVar1;
}


// ===== sym._qcrypto_cra_aead_ccm_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005830 (size 8) =====

ulong sym._qcrypto_cra_aead_ccm_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(param_1 + 0x120) = 0;
        *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
        get_random_bytes(param_1 + 0x168,0x10);
        uVar1 = 0;
        *(param_1 + 0x110) = 0;
        *(param_1 + 0x100) = param_1 + 0x100;
        *(param_1 + 0x108) = param_1 + 0x100;
    }
    *(param_1 + 0x124) = 4;
    return uVar1;
}


// ===== sym._qcrypto_cra_aead_aes_sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005838 (size 8) =====

ulong sym._qcrypto_cra_aead_aes_sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        return 0xffffffea;
    }
    *(param_1 + 0x120) = 0;
    *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
    get_random_bytes(param_1 + 0x168,0x10);
    *(param_1 + 0x110) = 0;
    *(param_1 + 0x100) = param_1 + 0x100;
    *(param_1 + 0x108) = param_1 + 0x100;
    cVar1 = *0x80004c5;
    *(param_1 + 0x1c8) = 0;
    *(param_1 + 0x1d0) = 0;
    *(param_1 + 0x124) = 5;
    if (cVar1 == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(0x80012bb,0,0);
        *(param_1 + 0x1c8) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar2 = crypto_alloc_ahash(0x800091c,0,0);
            *(param_1 + 0x1d0) = uVar2;
            if (uVar2 < 0xfffffffffffff001) goto code_r0x0800c074;
            *(param_1 + 0x1d0) = 0;
            crypto_destroy_tfm(*(param_1 + 0x1c8),*(param_1 + 0x1c8) + 0x80);
        }
        *(param_1 + 0x1c8) = 0;
    }
code_r0x0800c074:
    *(param_1 + 0x124) = 2;
    return 0;
}


// ===== sym._qcrypto_cra_aead_aes_sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005840 (size 8) =====

ulong sym._qcrypto_cra_aead_aes_sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    char cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        return 0xffffffea;
    }
    *(param_1 + 0x120) = 0;
    *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
    get_random_bytes(param_1 + 0x168,0x10);
    *(param_1 + 0x110) = 0;
    *(param_1 + 0x100) = param_1 + 0x100;
    *(param_1 + 0x108) = param_1 + 0x100;
    cVar1 = *0x80004c5;
    *(param_1 + 0x1c8) = 0;
    *(param_1 + 0x1d0) = 0;
    *(param_1 + 0x124) = 5;
    if (cVar1 == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(0x80012bb,0,0);
        *(param_1 + 0x1c8) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar2 = crypto_alloc_ahash(0x800143e,0,0);
            *(param_1 + 0x1d0) = uVar2;
            if (uVar2 < 0xfffffffffffff001) goto code_r0x0800cb64;
            *(param_1 + 0x1d0) = 0;
            crypto_destroy_tfm(*(param_1 + 0x1c8),*(param_1 + 0x1c8) + 0x80);
        }
        *(param_1 + 0x1c8) = 0;
    }
code_r0x0800cb64:
    *(param_1 + 0x124) = 3;
    return 0;
}


// ===== sym._qcrypto_cra_aead_sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005848 (size 8) =====

ulong sym._qcrypto_cra_aead_sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = 0x1c8;
    if (*(param_1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(param_1 + 0x120) = 0;
        *(param_1 + 0x118) = *(*(param_1 + 0x90) + 0x188);
        get_random_bytes(param_1 + 0x168,0x10);
        uVar1 = 0;
        *(param_1 + 0x110) = 0;
        *(param_1 + 0x100) = param_1 + 0x100;
        *(param_1 + 0x108) = param_1 + 0x100;
    }
    *(param_1 + 0x124) = 2;
    return uVar1;
}


// ===== sym._sha256_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005850 (size 8) =====

ulong sym._sha256_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    
    uVar8 = *(param_2 + 8);
    *(param_1 + 0x108) = uVar8;
    uVar2 = *(param_2 + 0x18);
    uVar1 = *(param_2 + 0x12);
    uVar3 = *(param_2 + 0x14);
    *(param_1 + 0x142) = *(param_2 + 0x16);
    *(param_1 + 0x14a) = uVar2;
    *(param_1 + 0x13a) = uVar3;
    *(param_1 + 0x132) = uVar1;
    uVar2 = *(param_2 + 0x10);
    uVar1 = *(param_2 + 10);
    uVar3 = *(param_2 + 0xc);
    *(param_1 + 0x122) = *(param_2 + 0xe);
    *(param_1 + 0x12a) = uVar2;
    *(param_1 + 0x11a) = uVar3;
    *(param_1 + 0x112) = uVar1;
    uVar5 = *(param_2 + 8);
    *(param_1 + 0xf8) = uVar8 & 0xffffffc0;
    *(param_1 + 0xfc) = uVar8 >> 0x20;
    *(param_1 + 0x110) = uVar5 < 0x41;
    puVar7 = param_1 + 0x1f8;
    uVar4 = *(*(param_1 + 0x20) + 0xa8);
    puVar10 = param_2;
    if (3 < uVar4) {
        uVar11 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar9 = param_2;
        do {
            uVar11 = uVar11 - 1;
            *puVar6 = *(puVar9 + 3);
            puVar6[1] = *(puVar9 + 2);
            puVar6[2] = *puVar9 >> 8;
            puVar7 = puVar6 + 4;
            puVar10 = puVar9 + 1;
            puVar6[3] = *puVar9;
            puVar6 = puVar7;
            puVar9 = puVar10;
        } while (uVar11 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar12 = 0x18;
    iVar13 = iVar12;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar13 = 0x10;
            iVar14 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800b898;
            iVar13 = 8;
            iVar12 = 0x10;
            iVar14 = 2;
            *puVar7 = *(puVar10 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar14;
        *puVar6 = *puVar10 >> iVar12;
    }
    *puVar7 = *puVar10 >> iVar13;
code_r0x0800b898:
    *(param_1 + 0x154) = param_2[8] & 0x3f;
    return 0;
}


// ===== sym._sha1_hmac_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005858 (size 8) =====

ulong sym._sha1_hmac_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    
    iVar5 = *(param_2 + 6);
    *(param_1 + 0x108) = iVar5;
    uVar2 = *(param_2 + 0x16);
    uVar1 = *(param_2 + 0x10);
    uVar3 = *(param_2 + 0x12);
    *(param_1 + 0x142) = *(param_2 + 0x14);
    *(param_1 + 0x14a) = uVar2;
    *(param_1 + 0x13a) = uVar3;
    *(param_1 + 0x132) = uVar1;
    uVar2 = *(param_2 + 0xe);
    uVar1 = *(param_2 + 8);
    uVar3 = *(param_2 + 10);
    *(param_1 + 0x122) = *(param_2 + 0xc);
    *(param_1 + 0x12a) = uVar2;
    *(param_1 + 0x11a) = uVar3;
    *(param_1 + 0x112) = uVar1;
    if (*(param_2 + 6) < 0x41) {
        *(param_1 + 0x110) = 1;
    }
    else {
        iVar5 = iVar5 + 0x40;
        *(param_1 + 0x110) = 0;
    }
    *(param_1 + 0xf8) = iVar5 & 0xffffffc0;
    *(param_1 + 0xfc) = iVar5 >> 0x20;
    puVar7 = param_1 + 0x1f8;
    uVar4 = *(*(param_1 + 0x20) + 0xa8);
    puVar9 = param_2;
    if (3 < uVar4) {
        uVar10 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar8 = param_2;
        do {
            uVar10 = uVar10 - 1;
            *puVar6 = *(puVar8 + 3);
            puVar6[1] = *(puVar8 + 2);
            puVar6[2] = *puVar8 >> 8;
            puVar7 = puVar6 + 4;
            puVar9 = puVar8 + 1;
            puVar6[3] = *puVar8;
            puVar6 = puVar7;
            puVar8 = puVar9;
        } while (uVar10 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar11 = 0x18;
    iVar5 = iVar11;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar5 = 0x10;
            iVar12 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800d2bc;
            iVar5 = 8;
            iVar11 = 0x10;
            iVar12 = 2;
            *puVar7 = *(puVar9 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar12;
        *puVar6 = *puVar9 >> iVar11;
    }
    *puVar7 = *puVar9 >> iVar5;
code_r0x0800d2bc:
    *(param_1 + 0x154) = param_2[6] & 0x3f;
    return 0;
}


// ===== sym._sha1_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005860 (size 8) =====

ulong sym._sha1_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    
    uVar8 = *(param_2 + 6);
    *(param_1 + 0x108) = uVar8;
    uVar2 = *(param_2 + 0x16);
    uVar1 = *(param_2 + 0x10);
    uVar3 = *(param_2 + 0x12);
    *(param_1 + 0x142) = *(param_2 + 0x14);
    *(param_1 + 0x14a) = uVar2;
    *(param_1 + 0x13a) = uVar3;
    *(param_1 + 0x132) = uVar1;
    uVar2 = *(param_2 + 0xe);
    uVar1 = *(param_2 + 8);
    uVar3 = *(param_2 + 10);
    *(param_1 + 0x122) = *(param_2 + 0xc);
    *(param_1 + 0x12a) = uVar2;
    *(param_1 + 0x11a) = uVar3;
    *(param_1 + 0x112) = uVar1;
    uVar5 = *(param_2 + 6);
    *(param_1 + 0xf8) = uVar8 & 0xffffffc0;
    *(param_1 + 0xfc) = uVar8 >> 0x20;
    *(param_1 + 0x110) = uVar5 < 0x41;
    puVar7 = param_1 + 0x1f8;
    uVar4 = *(*(param_1 + 0x20) + 0xa8);
    puVar10 = param_2;
    if (3 < uVar4) {
        uVar11 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar9 = param_2;
        do {
            uVar11 = uVar11 - 1;
            *puVar6 = *(puVar9 + 3);
            puVar6[1] = *(puVar9 + 2);
            puVar6[2] = *puVar9 >> 8;
            puVar7 = puVar6 + 4;
            puVar10 = puVar9 + 1;
            puVar6[3] = *puVar9;
            puVar6 = puVar7;
            puVar9 = puVar10;
        } while (uVar11 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar12 = 0x18;
    iVar13 = iVar12;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar13 = 0x10;
            iVar14 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800b2cc;
            iVar13 = 8;
            iVar12 = 0x10;
            iVar14 = 2;
            *puVar7 = *(puVar10 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar14;
        *puVar6 = *puVar10 >> iVar12;
    }
    *puVar7 = *puVar10 >> iVar13;
code_r0x0800b2cc:
    *(param_1 + 0x154) = param_2[6] & 0x3f;
    return 0;
}


// ===== sym._sha256_hmac_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005868 (size 8) =====

ulong sym._sha256_hmac_import.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    
    iVar5 = *(param_2 + 8);
    *(param_1 + 0x108) = iVar5;
    uVar2 = *(param_2 + 0x18);
    uVar1 = *(param_2 + 0x12);
    uVar3 = *(param_2 + 0x14);
    *(param_1 + 0x142) = *(param_2 + 0x16);
    *(param_1 + 0x14a) = uVar2;
    *(param_1 + 0x13a) = uVar3;
    *(param_1 + 0x132) = uVar1;
    uVar2 = *(param_2 + 0x10);
    uVar1 = *(param_2 + 10);
    uVar3 = *(param_2 + 0xc);
    *(param_1 + 0x122) = *(param_2 + 0xe);
    *(param_1 + 0x12a) = uVar2;
    *(param_1 + 0x11a) = uVar3;
    *(param_1 + 0x112) = uVar1;
    if (*(param_2 + 8) < 0x41) {
        *(param_1 + 0x110) = 1;
    }
    else {
        iVar5 = iVar5 + 0x40;
        *(param_1 + 0x110) = 0;
    }
    *(param_1 + 0xf8) = iVar5 & 0xffffffc0;
    *(param_1 + 0xfc) = iVar5 >> 0x20;
    puVar7 = param_1 + 0x1f8;
    uVar4 = *(*(param_1 + 0x20) + 0xa8);
    puVar9 = param_2;
    if (3 < uVar4) {
        uVar10 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar8 = param_2;
        do {
            uVar10 = uVar10 - 1;
            *puVar6 = *(puVar8 + 3);
            puVar6[1] = *(puVar8 + 2);
            puVar6[2] = *puVar8 >> 8;
            puVar7 = puVar6 + 4;
            puVar9 = puVar8 + 1;
            puVar6[3] = *puVar8;
            puVar6 = puVar7;
            puVar8 = puVar9;
        } while (uVar10 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar11 = 0x18;
    iVar5 = iVar11;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar5 = 0x10;
            iVar12 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800da98;
            iVar5 = 8;
            iVar11 = 0x10;
            iVar12 = 2;
            *puVar7 = *(puVar9 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar12;
        *puVar6 = *puVar9 >> iVar11;
    }
    *puVar7 = *puVar9 >> iVar5;
code_r0x0800da98:
    *(param_1 + 0x154) = param_2[8] & 0x3f;
    return 0;
}


// ===== sym._debug_stats_read.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005870 (size 8) =====

int64_t sym._debug_stats_read.efdd1d0348837140a5be4140d40c9b69.cfi_jt
                  (int64_t param_1,ulong param_2,uint64_t param_3,ulong param_4)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = scnprintf(obj._debug_read_buf,0xfff,"",**(param_1 + 0xd8) + 1);
    if (uVar2 < 0x1001) {
        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
        uVar2 = iVar3 + uVar2;
        if (uVar2 < 0x1001) {
            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
            uVar2 = iVar3 + uVar2;
            if (uVar2 < 0x1001) {
                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                uVar2 = iVar3 + uVar2;
                if (uVar2 < 0x1001) {
                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                    uVar2 = iVar3 + uVar2;
                    if (uVar2 < 0x1001) {
                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                        uVar2 = iVar3 + uVar2;
                        if (uVar2 < 0x1001) {
                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                            uVar2 = iVar3 + uVar2;
                            if (uVar2 < 0x1001) {
                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                uVar2 = iVar3 + uVar2;
                                if (uVar2 < 0x1001) {
                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                    uVar2 = iVar3 + uVar2;
                                    if (uVar2 < 0x1001) {
                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,0x80010e2);
                                        uVar2 = iVar3 + uVar2;
                                        if (uVar2 < 0x1001) {
                                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000
                                                             );
                                            uVar2 = iVar3 + uVar2;
                                            if (uVar2 < 0x1001) {
                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",
                                                                  *0x8001000);
                                                uVar2 = iVar3 + uVar2;
                                                if (uVar2 < 0x1001) {
                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,
                                                                      0x8000694,*0x8001000);
                                                    uVar2 = iVar3 + uVar2;
                                                    if (uVar2 < 0x1001) {
                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,""
                                                                          ,*0x8001000);
                                                        uVar2 = iVar3 + uVar2;
                                                        if (uVar2 < 0x1001) {
                                                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2
                                                                              ,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,0x80010e2);
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8000610,*0x800060c,
                                                                                              *0x8000624,*0x8000628);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8000614,
                                                                                                  *0x8000608);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8000618,
                                                            *0x800061c,*0x8000620);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,0x80010e2);
                                                                uVar2 = iVar3 + uVar2;
                                                                uVar4 = _raw_spin_lock_irqsave(0x80004e4);
                                                                for (piVar7 = *0x8000530; piVar7 != 0x8000530;
                                                                    piVar7 = *piVar7) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*(piVar7 + 0xc)
                                                                                      ,*(piVar7 + 0x134),piVar7[10]);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*(piVar7 + 0xc)
                                                                                      ,piVar7[0xb]);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    qce_get_driver_stats(piVar7[2]);
                                                                }
                                                                _raw_spin_unlock_irqrestore(0x80004e4,uVar4);
                                                                if (*0x800062c != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",0);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",1);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",2);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",3);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",4);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",5);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",6);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",7);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",8);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                uVar6 = uVar2;
                                                                if (param_3 < uVar6) {
                                                                    iVar5 = -0x16;
                                                                }
                                                                else {
                                                                    iVar3 = simple_read_from_buffer
                                                                                      (param_2,uVar6,param_4,
                                                                                       obj._debug_read_buf,uVar6);
                                                                    iVar5 = iVar3;
                                                                }
                                                                return iVar5;
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08006cfc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006d00);
    (*pcVar1)();
}


// ===== sym._sha256_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005878 (size 8) =====

ulong sym._sha256_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(param_2 + 8) = *(param_1 + 0x108);
    uVar1 = (*(param_1 + 0x1f8) & 0xff00ff00) >> 8 | (*(param_1 + 0x1f8) & 0xff00ff) << 8;
    *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x1fc) & 0xff00ff00) >> 8 | (*(param_1 + 0x1fc) & 0xff00ff) << 8;
    param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x200) & 0xff00ff00) >> 8 | (*(param_1 + 0x200) & 0xff00ff) << 8;
    param_2[2] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x204) & 0xff00ff00) >> 8 | (*(param_1 + 0x204) & 0xff00ff) << 8;
    param_2[3] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x208) & 0xff00ff00) >> 8 | (*(param_1 + 0x208) & 0xff00ff) << 8;
    param_2[4] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x20c) & 0xff00ff00) >> 8 | (*(param_1 + 0x20c) & 0xff00ff) << 8;
    param_2[5] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x210) & 0xff00ff00) >> 8 | (*(param_1 + 0x210) & 0xff00ff) << 8;
    param_2[6] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x214) & 0xff00ff00) >> 8 | (*(param_1 + 0x214) & 0xff00ff) << 8;
    param_2[7] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(param_1 + 0x12a);
    uVar4 = *(param_1 + 0x11a);
    uVar2 = *(param_1 + 0x112);
    *(param_2 + 0xe) = *(param_1 + 0x122);
    *(param_2 + 0x10) = uVar3;
    *(param_2 + 10) = uVar2;
    *(param_2 + 0xc) = uVar4;
    uVar4 = *(param_1 + 0x14a);
    uVar3 = *(param_1 + 0x13a);
    uVar2 = *(param_1 + 0x132);
    *(param_2 + 0x16) = *(param_1 + 0x142);
    *(param_2 + 0x18) = uVar4;
    *(param_2 + 0x12) = uVar2;
    *(param_2 + 0x14) = uVar3;
    return 0;
}


// ===== sym._sha256_hmac_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005880 (size 8) =====

ulong sym._sha256_hmac_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym._sha256_export(param_1,param_2);
    return 0;
}


// ===== sym._sha1_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005888 (size 8) =====

ulong sym._sha1_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(param_2 + 6) = *(param_1 + 0x108);
    uVar1 = (*(param_1 + 0x1f8) & 0xff00ff00) >> 8 | (*(param_1 + 0x1f8) & 0xff00ff) << 8;
    *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x1fc) & 0xff00ff00) >> 8 | (*(param_1 + 0x1fc) & 0xff00ff) << 8;
    param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x200) & 0xff00ff00) >> 8 | (*(param_1 + 0x200) & 0xff00ff) << 8;
    param_2[2] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x204) & 0xff00ff00) >> 8 | (*(param_1 + 0x204) & 0xff00ff) << 8;
    param_2[3] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x208) & 0xff00ff00) >> 8 | (*(param_1 + 0x208) & 0xff00ff) << 8;
    param_2[4] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(param_1 + 0x12a);
    uVar4 = *(param_1 + 0x11a);
    uVar2 = *(param_1 + 0x112);
    *(param_2 + 0xc) = *(param_1 + 0x122);
    *(param_2 + 0xe) = uVar3;
    *(param_2 + 8) = uVar2;
    *(param_2 + 10) = uVar4;
    uVar4 = *(param_1 + 0x14a);
    uVar3 = *(param_1 + 0x13a);
    uVar2 = *(param_1 + 0x132);
    *(param_2 + 0x14) = *(param_1 + 0x142);
    *(param_2 + 0x16) = uVar4;
    *(param_2 + 0x10) = uVar2;
    *(param_2 + 0x12) = uVar3;
    return 0;
}


// ===== sym._sha1_hmac_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005890 (size 8) =====

ulong sym._sha1_hmac_export.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(param_2 + 6) = *(param_1 + 0x108);
    uVar1 = (*(param_1 + 0x1f8) & 0xff00ff00) >> 8 | (*(param_1 + 0x1f8) & 0xff00ff) << 8;
    *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x1fc) & 0xff00ff00) >> 8 | (*(param_1 + 0x1fc) & 0xff00ff) << 8;
    param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x200) & 0xff00ff00) >> 8 | (*(param_1 + 0x200) & 0xff00ff) << 8;
    param_2[2] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x204) & 0xff00ff00) >> 8 | (*(param_1 + 0x204) & 0xff00ff) << 8;
    param_2[3] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(param_1 + 0x208) & 0xff00ff00) >> 8 | (*(param_1 + 0x208) & 0xff00ff) << 8;
    param_2[4] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(param_1 + 0x12a);
    uVar4 = *(param_1 + 0x11a);
    uVar2 = *(param_1 + 0x112);
    *(param_2 + 0xc) = *(param_1 + 0x122);
    *(param_2 + 0xe) = uVar3;
    *(param_2 + 8) = uVar2;
    *(param_2 + 10) = uVar4;
    uVar4 = *(param_1 + 0x14a);
    uVar3 = *(param_1 + 0x13a);
    uVar2 = *(param_1 + 0x132);
    *(param_2 + 0x14) = *(param_1 + 0x142);
    *(param_2 + 0x16) = uVar4;
    *(param_2 + 0x10) = uVar2;
    *(param_2 + 0x12) = uVar3;
    return 0;
}


// ===== sym._qcrypto_enc_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005898 (size 8) =====

void sym._qcrypto_enc_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 0;
        *(param_1 + 0x108) = 0;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a7bc);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058a0 (size 8) =====

void sym._qcrypto_enc_des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 0;
        *(param_1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a604);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058a8 (size 8) =====

void sym._qcrypto_dec_des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 0x100000000;
        *(param_1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a67c);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058b0 (size 8) =====

void sym._qcrypto_enc_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 2;
        *(param_1 + 0x108) = 3;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800ad68);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_aes_ctr.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058b8 (size 8) =====

uint sym._qcrypto_enc_aes_ctr.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        param_1[0x33] = 0;
        *(param_1 + 0x40) = 2;
        param_1[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),param_1 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_ctr;
    pcStack_2a8 = sym._qcrypto_dec_aes_ctr;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        iVar5 = *(iStack_4c0 + -0x80) + 0x80;
        memset(auStack_500,0);
    }
    else {
        puVar4[0x33] = 0;
        arg3 = puVar4 + 8;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
        iVar5 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_00 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_ctr.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058c0 (size 8) =====

uint sym._qcrypto_dec_aes_ctr.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    int iVar4;
    uint *arg3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar5 = *(param_1 + 0x10);
    iVar3 = *(iVar5 + 0x98);
    if ((*(*(iVar5 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        (*pcVar1)();
    }
    if (((*(iVar5 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar5 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        iVar4 = *(iStack_240 + -0x80) + 0x80;
        memset(auStack_280,0);
    }
    else {
        param_1[0x33] = 0;
        arg3 = param_1 + 8;
        *(param_1 + 0x40) = 2;
        param_1[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar5 + 0x90),arg3);
        iVar4 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail();
    iVar3 = auVar6._0_8_;
    *extraout_x18 = sym._qcrypto_setkey_des;
    if (auVar6._8_8_ == NULL) {
        _printk(0x8001252,"");
        return 0xffffffea;
    }
    if ((*(iVar3 + 0x120) & 1) == 0) {
        if (iVar4 != 8) {
            return 0xffffffea;
        }
        *(iVar3 + 0x1b8) = 8;
        if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
            *(iVar3 + 0x178) = *auVar6._8_8_;
            return 0;
        }
    }
    else {
        _printk(0x800140b,"");
    }
    return 0;
}


// ===== sym._qcrypto_enc_aes_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058c8 (size 8) =====

uint sym._qcrypto_enc_aes_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009d34);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        param_1[0x33] = 0;
        *(param_1 + 0x40) = 2;
        param_1[0x42] = 1;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),param_1 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_ecb;
    pcStack_2a8 = sym._qcrypto_dec_aes_ecb;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009e84);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 0x100000002;
        puVar4[0x42] = 1;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        puVar4 = __stack_chk_fail();
        *extraout_x18_00 = sym._qcrypto_aes_skcipher_init;
        iVar3 = *(puVar4 + 0x24);
        if (*0x80004cd == '\0') {
            uVar5 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
            *(puVar4 + 0x72) = uVar5;
            if (0xfffffffffffff000 < uVar5) {
                _printk(0x800086d,iVar3 + 0x38);
                uVar2 = puVar4[0x72];
                *(puVar4 + 0x72) = 0;
                return uVar2;
            }
            iVar3 = *(puVar4 + 0x24);
        }
        else {
            *(puVar4 + 0x72) = 0;
        }
        *puVar4 = 0x1c8;
        if (iVar3 == 0x100) {
            _printk(0x80008d5);
            uVar2 = 0xffffffea;
        }
        else {
            puVar4[0x48] = 0;
            *(puVar4 + 0x46) = *(iVar3 + 0x608);
            get_random_bytes(puVar4 + 0x5a,0x10);
            uVar2 = 0;
            *(puVar4 + 0x44) = 0;
            *(puVar4 + 0x40) = puVar4 + 0x40;
            *(puVar4 + 0x42) = puVar4 + 0x40;
            puVar4[0x49] = 5;
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym._qcrypto_enc_3des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058d0 (size 8) =====

void sym._qcrypto_enc_3des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 1;
        *(param_1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a93c);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058d8 (size 8) =====

void sym._qcrypto_dec_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x108) = 0;
        *(param_1 + 0x100) = 0x100000001;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800aa9c);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058e0 (size 8) =====

uint sym._qcrypto_dec_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_780 [2];
    ulong uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    ulong uStack_750;
    ulong uStack_748;
    int64_t iStack_740;
    uint uStack_738;
    int64_t iStack_538;
    uchar *puStack_530;
    code *pcStack_528;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a26c);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        param_1[0x33] = 0;
        param_1[0x42] = 0;
        *(param_1 + 0x40) = 0x100000002;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),param_1 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_enc_aes_ctr;
    pcStack_2a8 = sym._qcrypto_enc_aes_ctr;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        puVar4 = __stack_chk_fail();
        *extraout_x18_00 = sym._qcrypto_dec_aes_ctr;
        pcStack_528 = sym._qcrypto_dec_aes_ctr;
        iVar3 = sp_el0;
        iStack_538 = *(iVar3 + 0x5e0);
        iVar6 = *(puVar4 + 0x10);
        iVar3 = *(iVar6 + 0x98);
        if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
            puStack_530 = &puStack_2b0;
            (*pcVar1)();
        }
        if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
            iVar3 = *(puVar4 + 0x10);
            puStack_530 = &puStack_2b0;
            memset(auStack_780,0,0x200);
            uStack_738 = puVar4[0x12];
            uStack_750 = 0;
            uStack_748 = 0;
            uStack_768 = *(puVar4 + 6);
            auStack_780[0] = *puVar4;
            iStack_740 = *(iVar3 + 0x148) + 0x80;
            uStack_778 = *(puVar4 + 2);
            uStack_770 = *(puVar4 + 4);
            uVar2 = crypto_skcipher_decrypt(auStack_780);
            iVar5 = *(iStack_740 + -0x80) + 0x80;
            memset(auStack_780,0);
        }
        else {
            puVar4[0x33] = 0;
            arg3 = puVar4 + 8;
            *(puVar4 + 0x40) = 2;
            puVar4[0x42] = 2;
            *0x8001000 = *0x8001000 + 1;
            puStack_530 = &puStack_2b0;
            uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
            iVar5 = arg3;
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_538) {
            return uVar2;
        }
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_01 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058e8 (size 8) =====

void sym._qcrypto_dec_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 0x100000002;
        *(param_1 + 0x108) = 3;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800ade4);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058f0 (size 8) =====

uint sym._qcrypto_enc_aes_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_a00 [2];
    ulong uStack_9f8;
    ulong uStack_9f0;
    ulong uStack_9e8;
    ulong uStack_9d0;
    ulong uStack_9c8;
    int64_t iStack_9c0;
    uint uStack_9b8;
    int64_t iStack_7b8;
    uchar *puStack_7b0;
    code *pcStack_7a8;
    uint auStack_780 [2];
    ulong uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    ulong uStack_750;
    ulong uStack_748;
    int64_t iStack_740;
    uint uStack_738;
    int64_t iStack_538;
    uchar *puStack_530;
    code *pcStack_528;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a120);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        param_1[0x33] = 0;
        param_1[0x42] = 0;
        *(param_1 + 0x40) = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),param_1 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_cbc;
    pcStack_2a8 = sym._qcrypto_dec_aes_cbc;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a26c);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        puVar4[0x42] = 0;
        *(puVar4 + 0x40) = 0x100000002;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_2b8) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym._qcrypto_enc_aes_ctr;
    pcStack_528 = sym._qcrypto_enc_aes_ctr;
    iVar3 = sp_el0;
    iStack_538 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        puStack_530 = &puStack_2b0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_530 = &puStack_2b0;
        memset(auStack_780,0,0x200);
        uStack_738 = puVar4[0x12];
        uStack_750 = 0;
        uStack_748 = 0;
        uStack_768 = *(puVar4 + 6);
        auStack_780[0] = *puVar4;
        iStack_740 = *(iVar3 + 0x148) + 0x80;
        uStack_778 = *(puVar4 + 2);
        uStack_770 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_780);
        memset(auStack_780,0,*(iStack_740 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_530 = &puStack_2b0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_538) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym._qcrypto_dec_aes_ctr;
    pcStack_7a8 = sym._qcrypto_dec_aes_ctr;
    iVar3 = sp_el0;
    iStack_7b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        puStack_7b0 = &puStack_530;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_7b0 = &puStack_530;
        memset(auStack_a00,0,0x200);
        uStack_9b8 = puVar4[0x12];
        uStack_9d0 = 0;
        uStack_9c8 = 0;
        uStack_9e8 = *(puVar4 + 6);
        auStack_a00[0] = *puVar4;
        iStack_9c0 = *(iVar3 + 0x148) + 0x80;
        uStack_9f8 = *(puVar4 + 2);
        uStack_9f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_a00);
        iVar5 = *(iStack_9c0 + -0x80) + 0x80;
        memset(auStack_a00,0);
    }
    else {
        puVar4[0x33] = 0;
        arg3 = puVar4 + 8;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_7b0 = &puStack_530;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
        iVar5 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_7b8) {
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_02 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x080058f8 (size 8) =====

uint sym._qcrypto_dec_aes_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(uint *param_1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(param_1 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009e84);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(param_1 + 0x10);
        memset(auStack_280,0,0x200);
        uStack_238 = param_1[0x12];
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(param_1 + 6);
        auStack_280[0] = *param_1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(param_1 + 2);
        uStack_270 = *(param_1 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        param_1[0x33] = 0;
        *(param_1 + 0x40) = 0x100000002;
        param_1[0x42] = 1;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),param_1 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        puVar4 = __stack_chk_fail();
        *extraout_x18 = sym._qcrypto_aes_skcipher_init;
        iVar3 = *(puVar4 + 0x24);
        if (*0x80004cd == '\0') {
            uVar5 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
            *(puVar4 + 0x72) = uVar5;
            if (0xfffffffffffff000 < uVar5) {
                _printk(0x800086d,iVar3 + 0x38);
                uVar2 = puVar4[0x72];
                *(puVar4 + 0x72) = 0;
                return uVar2;
            }
            iVar3 = *(puVar4 + 0x24);
        }
        else {
            *(puVar4 + 0x72) = 0;
        }
        *puVar4 = 0x1c8;
        if (iVar3 == 0x100) {
            _printk(0x80008d5);
            uVar2 = 0xffffffea;
        }
        else {
            puVar4[0x48] = 0;
            *(puVar4 + 0x46) = *(iVar3 + 0x608);
            get_random_bytes(puVar4 + 0x5a,0x10);
            uVar2 = 0;
            *(puVar4 + 0x44) = 0;
            *(puVar4 + 0x40) = puVar4 + 0x40;
            *(puVar4 + 0x42) = puVar4 + 0x40;
            puVar4[0x49] = 5;
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_3des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005900 (size 8) =====

void sym._qcrypto_dec_3des_ecb.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x100) = 0x100000001;
        *(param_1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a9b4);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005908 (size 8) =====

void sym._qcrypto_enc_3des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x108) = 0;
        *(param_1 + 0x100) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800aa28);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005910 (size 8) =====

void sym._qcrypto_dec_des_cbc.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    int64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x40);
    arg1 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(param_1 + 0xcc) = 0;
        *(param_1 + 0x108) = 0;
        *(param_1 + 0x100) = 0x100000000;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1,*(iVar2 + 0x90),param_1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a830);
    (*pcVar1)();
}


// ===== sym._sha1_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005918 (size 8) =====

ulong sym._sha1_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x100) = 0;
    *(param_1 + 0x110) = 1;
    iVar4 = *(param_1 + 0x20);
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x108) = 0;
    *(iVar4 + 0xa4) = 0;
    *(param_1 + 0x14a) = 0;
    *(param_1 + 0x142) = 0;
    *(param_1 + 0x132) = 0;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x12a) = 0;
    *(param_1 + 0x122) = 0;
    *(param_1 + 0x112) = 0;
    *(param_1 + 0x11a) = 0;
    uVar1 = *0x8004108;
    uVar3 = _obj._std_init_vector_sha1_uint8;
    *(param_1 + 0x208) = 0xf0e1d2c3;
    *(param_1 + 0x1f8) = uVar3;
    *(param_1 + 0x200) = uVar1;
    *(iVar4 + 0xa8) = 0x14;
    *0x8001000 = *0x8001000 + 1;
    iVar5 = *(param_1 + 0x20);
    iVar4 = *(iVar5 + 0x98);
    if ((*(iVar4 + 0x19) == '\0') || (iVar2 = sym._copy_source(param_1), iVar2 == 0)) {
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(iVar4,*(iVar5 + 0x90),param_1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym._sha1_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005920 (size 8) =====

ulong sym._sha1_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(param_1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        *(param_1 + 0x108) = *(param_1 + 0x108) + *(param_1 + 0x30);
        uVar2 = sym._sha_update(param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha1_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005928 (size 8) =====

ulong sym._sha1_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x20);
    arg1 = *(iVar4 + 0x98);
    if ((*(arg1 + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        uVar3 = param_1 + 0x197U & 0xffffffffffffffc0;
        *(param_1 + 0x111) = 1;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        memcpy(uVar3,param_1 + 0x112,*(param_1 + 0x154));
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x220) = param_1 + 0x197U & 0xfc0;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x218) = (((uVar3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(param_1 + 0x30) = *(param_1 + 0x154);
        uVar2 = sym._qcrypto_queue_req(arg1,*(iVar4 + 0x90),param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005930 (size 8) =====

ulong sym._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar5 = *(param_1 + 0x20);
    iVar6 = *(iVar5 + 0x98);
    *(param_1 + 0x122) = 0;
    *(param_1 + 0x11a) = 0;
    *0x8001000 = *0x8001000 + 1;
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x12a) = 0;
    *(param_1 + 0x132) = 0;
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x14a) = 0;
    *(param_1 + 0x142) = 0;
    uVar4 = *0x800412c;
    uVar3 = *0x8004124;
    *(param_1 + 0x154) = 0;
    uVar2 = *0x800411c;
    uVar1 = _obj._std_init_vector_sha256_uint8;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xfc) = 0;
    *(param_1 + 0x210) = uVar4;
    *(param_1 + 0x104) = 0;
    *(param_1 + 0x112) = 0;
    *(param_1 + 0x208) = uVar3;
    *(param_1 + 0x1f8) = uVar1;
    *(param_1 + 0x200) = uVar2;
    *(iVar5 + 0xa8) = 0x20;
    if (*(iVar6 + 0x13) == '\0') {
        *(iVar5 + 0xa4) = 1;
        iVar5 = 0;
        iVar6 = *(param_1 + 0x20);
        do {
            *(param_1 + 0x112 + iVar5) = *(iVar6 + 0xb0 + iVar5) ^ 0x36;
            iVar5 = iVar5 + 1;
        } while (iVar5 != 0x40);
        *(param_1 + 0x154) = 0x40;
    }
    else {
        *(iVar5 + 0xa4) = 3;
    }
    return 0;
}


// ===== sym._sha256_hmac_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005938 (size 8) =====

ulong sym._sha256_hmac_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x108) = 0;
    uVar1 = *0x800411c;
    uVar3 = _obj._std_init_vector_sha256_uint8;
    *0x8001000 = *0x8001000 + 1;
    *(param_1 + 0xfc) = 0;
    *(param_1 + 0x104) = 0;
    *(param_1 + 0x1f8) = uVar3;
    *(param_1 + 0x200) = uVar1;
    uVar3 = *0x800412c;
    *(param_1 + 0x208) = *0x8004124;
    *(param_1 + 0x210) = uVar3;
    *(*(param_1 + 0x20) + 0xa4) = 0x2000000003;
    iVar4 = *(param_1 + 0x20);
    arg1 = *(iVar4 + 0x98);
    if ((*(arg1 + 0x19) == '\0') || (iVar2 = sym._copy_source(param_1), iVar2 == 0)) {
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(arg1,*(iVar4 + 0x90),param_1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym._sha256_hmac_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005940 (size 8) =====

ulong sym._sha256_hmac_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(param_1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        *(param_1 + 0x108) = *(param_1 + 0x108) + *(param_1 + 0x30);
        uVar2 = sym._sha_update(param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005948 (size 8) =====

ulong sym._sha256_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0x20);
    arg1 = *(iVar4 + 0x98);
    if ((*(arg1 + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        uVar3 = param_1 + 0x197U & 0xffffffffffffffc0;
        *(param_1 + 0x111) = 1;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        memcpy(uVar3,param_1 + 0x112,*(param_1 + 0x154));
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x220) = param_1 + 0x197U & 0xfc0;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x218) = (((uVar3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(param_1 + 0x30) = *(param_1 + 0x154);
        uVar2 = sym._qcrypto_queue_req(arg1,*(iVar4 + 0x90),param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_hmac_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005950 (size 8) =====

ulong sym._sha256_hmac_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong uVar9;
    uint uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t arg1;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(param_1 + 0x20);
    arg1 = *(iVar13 + 0x98);
    if (*(arg1 + 0x13) == '\0') {
        uVar11 = param_1 + 0x197U & 0xffffffffffffffc0;
        iVar12 = *(iVar13 + 0xf0);
        memcpy(uVar11,param_1 + 0x112,*(param_1 + 0x154));
        uVar3 = param_1 + 0x197U & 0xfc0;
        iVar2 = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        puVar1 = param_1 + 0x1f8;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x220) = uVar3;
        *(param_1 + 0x218) = iVar2;
        *(iVar12 + 0x30) = *(param_1 + 0x154);
        *(iVar12 + 0x38) = param_1 + 0x218;
        *(iVar12 + 0x40) = puVar1;
        *(param_1 + 0x111) = 1;
        uVar9 = sym._qcrypto_queue_req(arg1,*(iVar13 + 0x90),iVar12);
        if ((uVar9 == -0x10) || (uVar9 == -0x73)) {
            uVar9 = wait_for_completion_interruptible(iVar13 + 0xf8);
            *(iVar13 + 0xf8) = 0;
        }
        if (uVar9 != 0) {
            return uVar9;
        }
        iVar12 = *(param_1 + 0x20);
        iVar13 = 0;
        arg1 = *(iVar12 + 0x98);
        do {
            *(uVar11 + iVar13) = *(iVar12 + 0xb0 + iVar13) ^ 0x5c;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 0x40);
        uVar4 = *(param_1 + 0x210);
        uVar9 = *puVar1;
        uVar5 = *(param_1 + 0x200);
        *(uVar11 + 0x50) = *(param_1 + 0x208);
        *(uVar11 + 0x58) = uVar4;
        *(uVar11 + 0x40) = uVar9;
        *(uVar11 + 0x48) = uVar5;
        *(param_1 + 0x220) = uVar3;
        *(param_1 + 0x224) = 0x60;
        *(param_1 + 0x218) = iVar2;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x30) = 0x60;
        *(param_1 + 0x110) = 1;
        *(param_1 + 0xf8) = 0;
        *(param_1 + 0x100) = 0;
        *(param_1 + 0x154) = 0;
        *(param_1 + 0x108) = 0;
        uVar7 = *0x800412c;
        uVar6 = *0x8004124;
        uVar5 = *0x800411c;
        uVar4 = *0x8004108;
        uVar9 = _obj._std_init_vector_sha1_uint8;
        if (*(iVar12 + 0xa4) == 0) {
            uVar10 = 0x14;
            *(param_1 + 0x208) = 0xf0e1d2c3;
            *puVar1 = uVar9;
            *(param_1 + 0x200) = uVar4;
        }
        else {
            uVar10 = 0x20;
            *puVar1 = _obj._std_init_vector_sha256_uint8;
            *(param_1 + 0x200) = uVar5;
            *(param_1 + 0x208) = uVar6;
            *(param_1 + 0x210) = uVar7;
        }
        *(iVar12 + 0xa8) = uVar10;
        *(param_1 + 0x111) = 1;
        iVar13 = *(iVar12 + 0x90);
    }
    else {
        if ((*(arg1 + 0x19) != '\0') && (iVar8 = sym._copy_source(param_1), iVar8 != 0)) {
            return 0xfffffff4;
        }
        uVar11 = param_1 + 0x197U & 0xffffffffffffffc0;
        *(param_1 + 0x111) = 1;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        memcpy(uVar11,param_1 + 0x112,*(param_1 + 0x154));
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x220) = param_1 + 0x197U & 0xfc0;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x218) = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(param_1 + 0x30) = *(param_1 + 0x154);
        iVar13 = *(iVar13 + 0x90);
    }
    uVar9 = sym._qcrypto_queue_req(arg1,iVar13,param_1);
    return uVar9;
}


// ===== sym._sha1_hmac_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005958 (size 8) =====

ulong sym._sha1_hmac_final.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong uVar9;
    uint uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t arg1;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(param_1 + 0x20);
    arg1 = *(iVar13 + 0x98);
    if (*(arg1 + 0x13) == '\0') {
        uVar11 = param_1 + 0x197U & 0xffffffffffffffc0;
        iVar12 = *(iVar13 + 0xf0);
        memcpy(uVar11,param_1 + 0x112,*(param_1 + 0x154));
        uVar3 = param_1 + 0x197U & 0xfc0;
        iVar2 = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        puVar1 = param_1 + 0x1f8;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x220) = uVar3;
        *(param_1 + 0x218) = iVar2;
        *(iVar12 + 0x30) = *(param_1 + 0x154);
        *(iVar12 + 0x38) = param_1 + 0x218;
        *(iVar12 + 0x40) = puVar1;
        *(param_1 + 0x111) = 1;
        uVar9 = sym._qcrypto_queue_req(arg1,*(iVar13 + 0x90),iVar12);
        if ((uVar9 == -0x10) || (uVar9 == -0x73)) {
            uVar9 = wait_for_completion_interruptible(iVar13 + 0xf8);
            *(iVar13 + 0xf8) = 0;
        }
        if (uVar9 != 0) {
            return uVar9;
        }
        iVar12 = *(param_1 + 0x20);
        iVar13 = 0;
        arg1 = *(iVar12 + 0x98);
        do {
            *(uVar11 + iVar13) = *(iVar12 + 0xb0 + iVar13) ^ 0x5c;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 0x40);
        uVar9 = *puVar1;
        uVar4 = *(param_1 + 0x200);
        *(uVar11 + 0x50) = *(param_1 + 0x208);
        *(uVar11 + 0x40) = uVar9;
        *(uVar11 + 0x48) = uVar4;
        *(param_1 + 0x220) = uVar3;
        *(param_1 + 0x224) = 0x54;
        *(param_1 + 0x218) = iVar2;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x30) = 0x54;
        *(param_1 + 0x110) = 1;
        *(param_1 + 0xf8) = 0;
        *(param_1 + 0x100) = 0;
        *(param_1 + 0x154) = 0;
        *(param_1 + 0x108) = 0;
        uVar7 = *0x800412c;
        uVar6 = *0x8004124;
        uVar5 = *0x800411c;
        uVar4 = *0x8004108;
        uVar9 = _obj._std_init_vector_sha1_uint8;
        if (*(iVar12 + 0xa4) == 0) {
            uVar10 = 0x14;
            *(param_1 + 0x208) = 0xf0e1d2c3;
            *puVar1 = uVar9;
            *(param_1 + 0x200) = uVar4;
        }
        else {
            uVar10 = 0x20;
            *puVar1 = _obj._std_init_vector_sha256_uint8;
            *(param_1 + 0x200) = uVar5;
            *(param_1 + 0x208) = uVar6;
            *(param_1 + 0x210) = uVar7;
        }
        *(iVar12 + 0xa8) = uVar10;
        *(param_1 + 0x111) = 1;
        iVar13 = *(iVar12 + 0x90);
    }
    else {
        if ((*(arg1 + 0x19) != '\0') && (iVar8 = sym._copy_source(param_1), iVar8 != 0)) {
            return 0xfffffff4;
        }
        uVar11 = param_1 + 0x197U & 0xffffffffffffffc0;
        *(param_1 + 0x111) = 1;
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        memcpy(uVar11,param_1 + 0x112,*(param_1 + 0x154));
        *(param_1 + 0x38) = param_1 + 0x218;
        *(param_1 + 0x220) = param_1 + 0x197U & 0xfc0;
        *(param_1 + 0x224) = *(param_1 + 0x154);
        *(param_1 + 0x218) = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(param_1 + 0x30) = *(param_1 + 0x154);
        iVar13 = *(iVar13 + 0x90);
    }
    uVar9 = sym._qcrypto_queue_req(arg1,iVar13,param_1);
    return uVar9;
}


// ===== sym._sha256_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005960 (size 8) =====

ulong sym._sha256_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x20);
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x100) = 0;
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x108) = 0;
    *(iVar6 + 0xa4) = 1;
    *(param_1 + 0x14a) = 0;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x132) = 0;
    *(param_1 + 0x12a) = 0;
    *(param_1 + 0x142) = 0;
    *(param_1 + 0x122) = 0;
    *(param_1 + 0x11a) = 0;
    uVar1 = *0x800411c;
    uVar5 = _obj._std_init_vector_sha256_uint8;
    *(param_1 + 0x112) = 0;
    uVar3 = *0x800412c;
    uVar2 = *0x8004124;
    *(param_1 + 0x1f8) = uVar5;
    *(param_1 + 0x200) = uVar1;
    *(param_1 + 0x208) = uVar2;
    *(param_1 + 0x210) = uVar3;
    *(iVar6 + 0xa8) = 0x20;
    *0x8001000 = *0x8001000 + 1;
    iVar7 = *(param_1 + 0x20);
    iVar6 = *(iVar7 + 0x98);
    if ((*(iVar6 + 0x19) == '\0') || (iVar4 = sym._copy_source(param_1), iVar4 == 0)) {
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x110) = 0x101;
        uVar5 = sym._qcrypto_queue_req(iVar6,*(iVar7 + 0x90),param_1);
    }
    else {
        uVar5 = 0xfffffff4;
    }
    return uVar5;
}


// ===== sym._sha256_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005968 (size 8) =====

ulong sym._sha256_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(param_1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        *(param_1 + 0x108) = *(param_1 + 0x108) + *(param_1 + 0x30);
        uVar2 = sym._sha_update(param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005970 (size 8) =====

ulong sym._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    
    iVar5 = *(param_1 + 0x20);
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x100) = 0;
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x108) = 0;
    *(iVar5 + 0xa4) = 1;
    *(param_1 + 0x142) = 0;
    *(param_1 + 0x14a) = 0;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x132) = 0;
    uVar2 = *0x800411c;
    uVar1 = _obj._std_init_vector_sha256_uint8;
    *(param_1 + 0x12a) = 0;
    uVar4 = *0x800412c;
    uVar3 = *0x8004124;
    *(param_1 + 0x1f8) = uVar1;
    *(param_1 + 0x200) = uVar2;
    *(param_1 + 0x208) = uVar3;
    *(param_1 + 0x210) = uVar4;
    *(param_1 + 0x122) = 0;
    *(param_1 + 0x11a) = 0;
    *(param_1 + 0x112) = 0;
    *(iVar5 + 0xa8) = 0x20;
    *0x8001000 = *0x8001000 + 1;
    return 0;
}


// ===== sym._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005978 (size 8) =====

ulong sym._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = *(param_1 + 0x20);
    iVar4 = *(iVar3 + 0x98);
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x122) = 0;
    *0x8001000 = *0x8001000 + 1;
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x11a) = 0;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x12a) = 0;
    *(param_1 + 0x132) = 0;
    *(param_1 + 0x142) = 0;
    *(param_1 + 0x14a) = 0;
    uVar2 = *0x8004108;
    uVar1 = _obj._std_init_vector_sha1_uint8;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x208) = 0xf0e1d2c3;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0xfc) = 0;
    *(param_1 + 0x104) = 0;
    *(param_1 + 0x112) = 0;
    *(param_1 + 0x1f8) = uVar1;
    *(param_1 + 0x200) = uVar2;
    *(iVar3 + 0xa8) = 0x14;
    if (*(iVar4 + 0x13) == '\0') {
        *(iVar3 + 0xa4) = 0;
        iVar3 = 0;
        iVar4 = *(param_1 + 0x20);
        do {
            *(param_1 + 0x112 + iVar3) = *(iVar4 + 0xb0 + iVar3) ^ 0x36;
            iVar3 = iVar3 + 1;
        } while (iVar3 != 0x40);
        *(param_1 + 0x154) = 0x40;
    }
    else {
        *(iVar3 + 0xa4) = 2;
    }
    return 0;
}


// ===== sym._sha1_hmac_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005980 (size 8) =====

ulong sym._sha1_hmac_update.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(param_1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(param_1), iVar1 == 0)) {
        *(param_1 + 0x108) = *(param_1 + 0x108) + *(param_1 + 0x30);
        uVar2 = sym._sha_update(param_1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005988 (size 8) =====

ulong sym._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x100) = 0;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x110) = 1;
    iVar3 = *(param_1 + 0x20);
    *(param_1 + 0x108) = 0;
    *(iVar3 + 0xa4) = 0;
    *(param_1 + 0x13a) = 0;
    *(param_1 + 0x14a) = 0;
    *(param_1 + 0x142) = 0;
    *(param_1 + 0x132) = 0;
    *(param_1 + 0x12a) = 0;
    uVar2 = *0x8004108;
    uVar1 = _obj._std_init_vector_sha1_uint8;
    *(param_1 + 0x208) = 0xf0e1d2c3;
    *(param_1 + 0x122) = 0;
    *(param_1 + 0x1f8) = uVar1;
    *(param_1 + 0x200) = uVar2;
    *(param_1 + 0x11a) = 0;
    *(param_1 + 0x112) = 0;
    *(iVar3 + 0xa8) = 0x14;
    *0x8001000 = *0x8001000 + 1;
    return 0;
}


// ===== sym._sha1_hmac_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt @ 0x08005990 (size 8) =====

ulong sym._sha1_hmac_digest.efdd1d0348837140a5be4140d40c9b69.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xf8) = 0;
    *(param_1 + 0x154) = 0;
    *(param_1 + 0x110) = 1;
    *(param_1 + 0x108) = 0;
    *(param_1 + 0x208) = 0xf0e1d2c3;
    uVar1 = *0x8004108;
    uVar3 = _obj._std_init_vector_sha1_uint8;
    *0x8001000 = *0x8001000 + 1;
    *(param_1 + 0xfc) = 0;
    *(param_1 + 0x104) = 0;
    *(param_1 + 0x1f8) = uVar3;
    *(param_1 + 0x200) = uVar1;
    *(*(param_1 + 0x20) + 0xa4) = 0x1400000002;
    iVar4 = *(param_1 + 0x20);
    arg1 = *(iVar4 + 0x98);
    if ((*(arg1 + 0x19) == '\0') || (iVar2 = sym._copy_source(param_1), iVar2 == 0)) {
        *(param_1 + 0xb0) = *(param_1 + 0x38);
        *(param_1 + 0xb8) = *(param_1 + 0x30);
        *(param_1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(arg1,*(iVar4 + 0x90),param_1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym.qcrypto_ahash_clear_flag.cfi_jt @ 0x08005998 (size 8) =====

ulong sym.qcrypto_ahash_clear_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    *(*(param_1 + 0x20) + 0xa0) = *(*(param_1 + 0x20) + 0xa0) & (param_2 ^ 0xffffffff);
    return 0;
}


// ===== sym.qcrypto_ahash_set_device.cfi_jt @ 0x080059a0 (size 8) =====

ulong sym.qcrypto_ahash_set_device.cfi_jt(int64_t param_1,int param_2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x20);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != param_2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != param_2)) {
        _printk(0x8000721,param_2);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_ahash_set_flag.cfi_jt @ 0x080059a8 (size 8) =====

ulong sym.qcrypto_ahash_set_flag.cfi_jt(int64_t param_1,uint32_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20);
    if (((param_2 & 1) == 0) || (*(*(iVar2 + 0x98) + 8) != 0)) {
        param_2 = *(iVar2 + 0xa0) | param_2;
        if ((~param_2 & 0xff) != 0) {
            *(iVar2 + 0xa0) = param_2;
            return 0;
        }
        uVar1 = 0x8000ed9;
    }
    else {
        uVar1 = 0x8000acf;
    }
    _printk(uVar1,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_get_num_engines @ 0x080059b0 (size 64) =====

int sym.qcrypto_get_num_engines(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    
    if (*0x8000530 != 0x8000530) {
        iVar1 = 0;
        piVar2 = *0x8000530;
        do {
            piVar2 = *piVar2;
            iVar1 = iVar1 + 1;
        } while (piVar2 != 0x8000530);
        return iVar1;
    }
    return 0;
}


// ===== sym.qcrypto_get_engine_list @ 0x080059f0 (size 84) =====

void sym.qcrypto_get_engine_list(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint *puVar3;
    
    uVar1 = arg1;
    if (*0x8000530 != 0x8000530) {
        puVar3 = arg2 + 4;
        piVar2 = *0x8000530;
        if (uVar1 < 2) {
            uVar1 = 1;
        }
        do {
            uVar1 = uVar1 - 1;
            *puVar3 = *(piVar2 + 100);
            puVar3[-1] = piVar2[0xd];
            if (uVar1 == 0) {
                return;
            }
            piVar2 = *piVar2;
            puVar3 = puVar3 + 3;
        } while (piVar2 != 0x8000530);
    }
    return;
}


// ===== sym.qcrypto_cipher_set_device @ 0x08005a44 (size 176) =====

ulong sym.qcrypto_cipher_set_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x40);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != arg2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != arg2)) {
        _printk(0x8000721,arg2 & 0xffffffff);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_cipher_set_device_hw @ 0x08005af4 (size 200) =====

ulong sym.qcrypto_cipher_set_device_hw(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x40);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    puVar6 = iVar5 + 0x80;
    for (puVar4 = *puVar6; (puVar4 != puVar6 && ((*(puVar4 + 100) != arg2 || (*(puVar4 + 0xd) != arg3))));
        puVar4 = *puVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if (((puVar4 == NULL) || (*(puVar4 + 100) != arg2)) || (*(puVar4 + 0xd) != arg3)) {
        _printk(0x8000721,arg2 & 0xffffffff);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = puVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_aead_set_device @ 0x08005bbc (size 176) =====

ulong sym.qcrypto_aead_set_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != arg2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != arg2)) {
        _printk(0x8000721,arg2 & 0xffffffff);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_ahash_set_device @ 0x08005c6c (size 176) =====

ulong sym.qcrypto_ahash_set_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    iVar5 = *(iVar3 + 0x98);
    iVar1 = iVar5 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = iVar5 + 0x80;
    for (piVar4 = *piVar6; (piVar4 != piVar6 && (*(piVar4 + 100) != arg2)); piVar4 = *piVar4) {
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    if ((piVar4 == NULL) || (*(piVar4 + 100) != arg2)) {
        _printk(0x8000721,arg2 & 0xffffffff);
        uVar2 = 0xffffffed;
    }
    else {
        uVar2 = 0;
        *(iVar3 + 0x90) = piVar4;
    }
    return uVar2;
}


// ===== sym.qcrypto_cipher_set_flag @ 0x08005d1c (size 120) =====

ulong sym.qcrypto_cipher_set_flag(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x40);
    if (((arg2 & 1U) == 0) || (*(*(iVar3 + 0x98) + 8) != 0)) {
        uVar1 = *(iVar3 + 0xa0) | arg2;
        if ((~uVar1 & 0xff) != 0) {
            *(iVar3 + 0xa0) = uVar1;
            return 0;
        }
        uVar2 = 0x8000ed9;
    }
    else {
        uVar2 = 0x8000acf;
    }
    _printk(uVar2,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_aead_set_flag @ 0x08005d94 (size 120) =====

ulong sym.qcrypto_aead_set_flag(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    if (((arg2 & 1U) == 0) || (*(*(iVar3 + 0x98) + 8) != 0)) {
        uVar1 = *(iVar3 + 0xa0) | arg2;
        if ((~uVar1 & 0xff) != 0) {
            *(iVar3 + 0xa0) = uVar1;
            return 0;
        }
        uVar2 = 0x8000ed9;
    }
    else {
        uVar2 = 0x8000acf;
    }
    _printk(uVar2,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_ahash_set_flag @ 0x08005e0c (size 120) =====

ulong sym.qcrypto_ahash_set_flag(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x20);
    if (((arg2 & 1U) == 0) || (*(*(iVar3 + 0x98) + 8) != 0)) {
        uVar1 = *(iVar3 + 0xa0) | arg2;
        if ((~uVar1 & 0xff) != 0) {
            *(iVar3 + 0xa0) = uVar1;
            return 0;
        }
        uVar2 = 0x8000ed9;
    }
    else {
        uVar2 = 0x8000acf;
    }
    _printk(uVar2,"");
    return 0xffffffea;
}


// ===== sym.qcrypto_cipher_clear_flag @ 0x08005e84 (size 32) =====

ulong sym.qcrypto_cipher_clear_flag(int64_t arg1,int64_t arg2)

{
    *(*(arg1 + 0x40) + 0xa0) = *(*(arg1 + 0x40) + 0xa0) & (arg2 ^ 0xffffffff);
    return 0;
}


// ===== sym.qcrypto_aead_clear_flag @ 0x08005ea4 (size 32) =====

ulong sym.qcrypto_aead_clear_flag(int64_t arg1,int64_t arg2)

{
    *(*(arg1 + 0x20) + 0xa0) = *(*(arg1 + 0x20) + 0xa0) & (arg2 ^ 0xffffffff);
    return 0;
}


// ===== sym.qcrypto_ahash_clear_flag @ 0x08005ec4 (size 32) =====

ulong sym.qcrypto_ahash_clear_flag(int64_t arg1,int64_t arg2)

{
    *(*(arg1 + 0x20) + 0xa0) = *(*(arg1 + 0x20) + 0xa0) & (arg2 ^ 0xffffffff);
    return 0;
}


// ===== sym.seq_response @ 0x08005ee4 (size 952) =====

void sym.seq_response(uint32_t arg1)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t *piVar9;
    code *pcVar10;
    ulong *puVar11;
    int iVar12;
    ulong *in_x18;
    int iVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t iVar16;
    ulong *arg2;
    ulong *puVar17;
    int *piVar18;
    ulong unaff_x30;
    
    uVar6 = arg1;
    *in_x18 = unaff_x30;
    piVar18 = uVar6 - 0x10;
    piVar1 = uVar6 + 0x34;
    iVar8 = uVar6 - 0xd4;
    puVar17 = uVar6 - 0x88;
    piVar2 = uVar6 + 0x30;
    iVar5 = sp_el0;
code_r0x08005f34:
    piVar15 = uVar6 - 0x18;
    Hint_Prefetch(piVar15,2,0,1);
    do {
        piVar9 = *piVar15;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
            *piVar15 = 0;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (piVar9 != NULL) {
        piVar15 = NULL;
        do {
            piVar14 = piVar15;
            piVar15 = piVar9;
            piVar9 = *piVar15;
            *piVar15 = piVar14;
        } while (piVar9 != NULL);
        if (piVar15 != NULL) {
            while( true ) {
                piVar9 = piVar14;
                iVar16 = piVar15[1];
                *(iVar5 + 0x10) = *(iVar5 + 0x10) + 0x200;
                pcVar10 = *(iVar16 + 0x10);
                if (4 < (pcVar10 + -0x80057c8 >> 3 | pcVar10 << 0x3d)) {
                    __cfi_slowpath_diag(0xb6380a32551e9273,pcVar10,0x80005a0);
                }
                (*pcVar10)(iVar16,piVar15[2]);
                sym.local_bh_enable();
                Hint_Prefetch(piVar18,2,0,1);
                do {
                    cVar3 = '\x01';
                    bVar4 = ExclusiveMonitorPass(piVar18,0x10);
                    if (bVar4) {
                        *piVar18 = *piVar18 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                    }
                } while (cVar3 != '\0');
                if (piVar9 == NULL) break;
                piVar14 = *piVar9;
                piVar15 = piVar9;
            }
        }
        if (*piVar18 < 200) {
            Hint_Prefetch(piVar1,2,0,1);
            do {
                iVar13 = *piVar1;
                if (iVar13 != 0) goto code_r0x080061d0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                    *piVar1 = 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080061d0:
            if (iVar13 == 0) {
                iVar13 = *(uVar6 - 0x78);
                *(uVar6 + 0x58) = *(uVar6 + 0x58) + 1;
                if (0 < iVar13) {
                    while( true ) {
                        uVar7 = _raw_spin_lock_irqsave(iVar8);
                        if (puVar17 == *(uVar6 - 0x88)) break;
                        if ((*(uVar6 + 0x48) == NULL) || (puVar11 = **(uVar6 + 0x48), puVar11 == puVar17)) {
                            puVar11 = *puVar17;
                        }
                        iVar12 = *(uVar6 - 0x78) + 1;
                        arg2 = puVar11;
code_r0x080060a8:
                        iVar12 = iVar12 + -1;
                        if (iVar12 < 1) goto code_r0x08006110;
                        if ((*(arg2 + 300) != '\0') || (*(arg2 + 0x11c) <= arg2[0x25])) goto code_r0x080060d0;
                        *(uVar6 + 0x48) = arg2;
                        _raw_spin_unlock_irqrestore(iVar8,uVar7);
                        if ((arg2 == NULL) ||
                           (sym._start_qcrypto_process(uVar6 - 0x108,arg2), bVar4 = iVar13 < 2, iVar13 = iVar13 + -1
                           , bVar4)) goto code_r0x0800623c;
                    }
                    _printk(0x80011f7,"");
code_r0x08006114:
                    _raw_spin_unlock_irqrestore(iVar8,uVar7);
                }
            }
        }
    }
code_r0x0800623c:
    do {
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar13 = *piVar2;
            if (iVar13 != 2) goto code_r0x0800617c;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800617c:
        if (iVar13 == 2) goto code_r0x08005f34;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            iVar13 = *piVar2;
            if (iVar13 != 1) goto code_r0x08006194;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08006194:
        if (iVar13 != 2) {
            return;
        }
    } while( true );
code_r0x080060d0:
    if ((arg2 == NULL) || (arg2 = *arg2, arg2 == puVar17)) {
        arg2 = *puVar17;
    }
    if (puVar11 == arg2) {
code_r0x08006110:
        *(uVar6 + 0x48) = 0;
        goto code_r0x08006114;
    }
    goto code_r0x080060a8;
}


// ===== sym._debug_stats_read @ 0x0800629c (size 2660) =====

int64_t sym._debug_stats_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = scnprintf(obj._debug_read_buf,0xfff,"",**(arg1 + 0xd8) + 1);
    if (uVar2 < 0x1001) {
        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
        uVar2 = iVar3 + uVar2;
        if (uVar2 < 0x1001) {
            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
            uVar2 = iVar3 + uVar2;
            if (uVar2 < 0x1001) {
                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                uVar2 = iVar3 + uVar2;
                if (uVar2 < 0x1001) {
                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                    uVar2 = iVar3 + uVar2;
                    if (uVar2 < 0x1001) {
                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                        uVar2 = iVar3 + uVar2;
                        if (uVar2 < 0x1001) {
                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                            uVar2 = iVar3 + uVar2;
                            if (uVar2 < 0x1001) {
                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                uVar2 = iVar3 + uVar2;
                                if (uVar2 < 0x1001) {
                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                    uVar2 = iVar3 + uVar2;
                                    if (uVar2 < 0x1001) {
                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,0x80010e2);
                                        uVar2 = iVar3 + uVar2;
                                        if (uVar2 < 0x1001) {
                                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000
                                                             );
                                            uVar2 = iVar3 + uVar2;
                                            if (uVar2 < 0x1001) {
                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,"",
                                                                  *0x8001000);
                                                uVar2 = iVar3 + uVar2;
                                                if (uVar2 < 0x1001) {
                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,
                                                                      0x8000694,*0x8001000);
                                                    uVar2 = iVar3 + uVar2;
                                                    if (uVar2 < 0x1001) {
                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2,""
                                                                          ,*0x8001000);
                                                        uVar2 = iVar3 + uVar2;
                                                        if (uVar2 < 0x1001) {
                                                            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0xfff - uVar2
                                                                              ,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,0x80010e2);
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8001000);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8001000);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8001000);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,"",*0x8001000);
                                                                uVar2 = iVar3 + uVar2;
                                                                if (uVar2 < 0x1001) {
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*0x8001000);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (uVar2 < 0x1001) {
                                                                        iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                          0xfff - uVar2,"",*0x8001000)
                                                                        ;
                                                                        uVar2 = iVar3 + uVar2;
                                                                        if (uVar2 < 0x1001) {
                                                                            iVar3 = scnprintf(obj._debug_read_buf +
                                                                                              uVar2,0xfff - uVar2,"",
                                                                                              *0x8000610,*0x800060c,
                                                                                              *0x8000624,*0x8000628);
                                                                            uVar2 = iVar3 + uVar2;
                                                                            if (uVar2 < 0x1001) {
                                                                                iVar3 = scnprintf(obj._debug_read_buf +
                                                                                                  uVar2,0xfff - uVar2,
                                                                                                  "",*0x8000614,
                                                                                                  *0x8000608);
                                                                                uVar2 = iVar3 + uVar2;
                                                                                if (uVar2 < 0x1001) {
                                                                                    iVar3 = scnprintf(
                                                            obj._debug_read_buf + uVar2,0xfff - uVar2,"",*0x8000618,
                                                            *0x800061c,*0x8000620);
                                                            uVar2 = iVar3 + uVar2;
                                                            if (uVar2 < 0x1001) {
                                                                iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                  0xfff - uVar2,0x80010e2);
                                                                uVar2 = iVar3 + uVar2;
                                                                uVar4 = _raw_spin_lock_irqsave(0x80004e4);
                                                                for (piVar7 = *0x8000530; piVar7 != 0x8000530;
                                                                    piVar7 = *piVar7) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*(piVar7 + 0xc)
                                                                                      ,*(piVar7 + 0x134),piVar7[10]);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",*(piVar7 + 0xc)
                                                                                      ,piVar7[0xb]);
                                                                    uVar2 = iVar3 + uVar2;
                                                                    qce_get_driver_stats(piVar7[2]);
                                                                }
                                                                _raw_spin_unlock_irqrestore(0x80004e4,uVar4);
                                                                if (*0x800062c != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",0);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",1);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",2);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",3);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",4);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",5);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",6);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",7);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                if (_segment.ehdr != 0) {
                                                                    if (0x1000 < uVar2) goto code_r0x08006cfc;
                                                                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,
                                                                                      0xfff - uVar2,"",8);
                                                                    uVar2 = iVar3 + uVar2;
                                                                }
                                                                uVar6 = uVar2;
                                                                if (arg3 < uVar6) {
                                                                    iVar5 = -0x16;
                                                                }
                                                                else {
                                                                    iVar3 = simple_read_from_buffer
                                                                                      (arg2,uVar6,arg4,
                                                                                       obj._debug_read_buf,uVar6);
                                                                    iVar5 = iVar3;
                                                                }
                                                                return iVar5;
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08006cfc:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006d00);
    (*pcVar1)();
}


// ===== sym._debug_stats_write @ 0x08006d00 (size 240) =====

int64_t sym._debug_stats_write(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    memset(obj._qcrypto_stat,0,0x108);
    uVar1 = _raw_spin_lock_irqsave(0x80004e4);
    for (piVar2 = *0x8000530; piVar2 != 0x8000530; piVar2 = *piVar2) {
        piVar2[10] = 0;
        piVar2[0xb] = 0;
        qce_clear_driver_stats(piVar2[2]);
        *(piVar2 + 0x134) = 0;
    }
    *0x8000648 = 0;
    *0x8000640 = 0;
    *0x8000638 = 0;
    *0x8000630 = 0;
    *0x8000628 = 0;
    *0x8000620 = 0;
    *0x8000618 = 0;
    *0x8000610 = 0;
    *0x8000608 = 0;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar1);
    return arg1;
}


// ===== sym.local_bh_enable @ 0x08006df0 (size 56) =====

void sym.local_bh_enable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __local_bh_enable_ip(0x8006df4,0x200);
    return;
}


// ===== sym._start_qcrypto_process @ 0x08006e28 (size 3004) =====

//WARNING: Switch with 1 destination removed at 0x080072fc

void sym._start_qcrypto_process(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    int64_t iVar2;
    char *pcVar3;
    int iVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    char cVar7;
    bool bVar8;
    char cVar9;
    uint *puVar10;
    uint uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint16_t *puVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint extraout_x8;
    uint32_t uVar17;
    uint *extraout_x9;
    uint8_t *puVar18;
    uint extraout_x10;
    ulong *in_x18;
    uint32_t uVar19;
    uint64_t unaff_x19;
    code *pcVar20;
    uint64_t uVar21;
    int64_t unaff_x20;
    int iVar22;
    uint32_t uVar23;
    ulong *puVar24;
    uint64_t unaff_x22;
    uint64_t uVar25;
    int unaff_w23;
    uint64_t unaff_x24;
    ulong uVar26;
    int64_t unaff_x25;
    int64_t iVar27;
    uint32_t *puVar28;
    int iVar29;
    int64_t unaff_x26;
    int64_t *arg3;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    uchar extraout_q0_03 [16];
    uchar extraout_q0_04 [16];
    uchar extraout_q0_05 [16];
    code **ppcStack_188;
    int64_t *piStack_180;
    int64_t *piStack_178;
    int64_t iStack_170;
    uint64_t uStack_168;
    int *piStack_160;
    int64_t iStack_158;
    int64_t iStack_150;
    uint32_t *puStack_138;
    code *pcStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    uint64_t *puStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint8_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    uint64_t uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_70 = *(iVar2 + 0x5e0);
    if (*(arg1 + 0x13c) == 0) goto code_r0x08006ee4;
    iVar2 = sp_el0;
    puVar1 = iVar2 + 0x10;
    if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
        unaff_x19 = 8;
    }
    else {
        iVar2 = tpidr_el1;
        uVar17 = *(cpu_number + iVar2);
        if (6 < uVar17) {
            uVar17 = 7;
        }
        unaff_x19 = uVar17;
    }
    unaff_x25 = arg1 + 0x34;
    unaff_x24 = _raw_spin_lock_irqsave(unaff_x25);
    unaff_x26 = arg1;
    if (*(arg2 + 300) == '\0') {
        puStack_138 = arg2 + 0x128;
        uStack_168 = arg2 + 0x30;
        iStack_170 = arg1 + 0xd0;
        unaff_w23 = 1;
        iStack_150 = 0;
        piStack_160 = arg1 + unaff_x19 * 4 + 0x17c;
        piStack_178 = &iStack_e8;
        piStack_180 = &iStack_d8;
        ppcStack_188 = &pcStack_120;
        iStack_158 = unaff_x25;
        goto code_r0x08006f60;
    }
code_r0x08006ed8:
    _raw_spin_unlock_irqrestore(unaff_x25,unaff_x24);
    unaff_x20 = arg2;
code_r0x08006ee4:
    arg2 = unaff_x20;
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
    puVar18 = CONCAT44(extraout_x9 >> 0x20,*CONCAT44(extraout_x8,*extraout_x9));
    puVar10 = tpidr_el2;
    uVar11 = *puVar10;
    LOAcquire();
    uVar5 = *puVar18;
    *puVar18 = unaff_w23;
    puVar28 = CONCAT44(extraout_x10,uVar5);
    LORelease();
    LOAcquire();
    *puVar28 = uVar11;
    LORelease();
    uVar21 = unaff_x19;
    uVar25 = unaff_x22;
    do {
        Hint_Prefetch(puVar28,2,0,1);
        do {
            uVar17 = *puVar28 + 1;
            cVar7 = '\x01';
            bVar8 = ExclusiveMonitorPass(puVar28,0x10);
            if (bVar8) {
                *puVar28 = uVar17;
                cVar7 = ExclusiveMonitorsStatus();
            }
        } while (cVar7 != '\0');
        DataMemoryBarrier(2,3);
        if (*(arg2 + 0x134) < uVar17) {
            *(arg2 + 0x134) = uVar17;
        }
        unaff_x19 = uVar21;
        unaff_x22 = uVar25;
        if (unaff_x28 == 0) {
code_r0x0800795c:
            _printk(0x8000d39);
            goto code_r0x08006ed8;
        }
        iVar27 = *(uVar21 + 0x20);
        iVar2 = iVar27 + 0x80;
        uVar17 = *(*(iVar27 + 0x10) + 0x20) & 0xf;
        if (uVar17 == 5) {
            puVar24 = *(iVar27 + 0x88);
            arg3 = uVar21 + 0x60;
            uVar12 = __list_add_valid(arg3,puVar24);
            if ((uVar12 & 1) != 0) {
                *(iVar27 + 0x88) = arg3;
                *(uVar21 + 0x60) = iVar2;
                *(uVar21 + 0x68) = puVar24;
                goto code_r0x080070ac;
            }
        }
        else {
            puVar24 = *(iVar27 + 0x88);
            arg3 = uVar21 + 0x80;
            uVar12 = __list_add_valid(arg3,puVar24);
            if ((uVar12 & 1) != 0) {
                *(iVar27 + 0x88) = arg3;
                *arg3 = iVar2;
                *(uVar21 + 0x88) = puVar24;
code_r0x080070ac:
                *puVar24 = arg3;
            }
        }
        arg3[3] = uVar21;
        *(arg3 + 4) = 0xffffff8d;
        *(unaff_x28 + 8) = arg2;
        *(unaff_x28 + 0x10) = uVar21;
        *(unaff_x28 + 0x18) = arg3;
        *(arg2 + 0x118) = unaff_w23;
        *(arg2 + 300) = unaff_w23;
        *(arg2 + 0x110) = *(arg2 + 0x110) + 1;
        *piStack_160 = *piStack_160 + 1;
        DataMemoryBarrier(2,3);
        auVar30 = _raw_spin_unlock_irqrestore(iStack_158,unaff_x24);
        if (uVar25 != 0) {
            pcVar20 = *(uVar25 + 0x10);
            if (4 < (pcVar20 + -0x80057c8 >> 3 | pcVar20 << 0x3d)) {
                __cfi_slowpath_diag(0xb6380a32551e9273,pcVar20,0x80005c0);
            }
            auVar30 = (*pcVar20)(uVar25,0xffffff8d);
        }
        if (iStack_150 != 0) {
            pcVar20 = *(iStack_150 + 0x10);
            if (4 < (pcVar20 + -0x80057c8 >> 3 | pcVar20 << 0x3d)) {
                __cfi_slowpath_diag(0xb6380a32551e9273,pcVar20,0x80005e0);
            }
            auVar30 = (*pcVar20)(iStack_150,0xffffff8d);
        }
        if (uVar17 == 3) {
            uStack_d0 = 0;
            puStack_c8 = NULL;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_e0 = 0;
            iStack_d8 = 0;
            iStack_e8 = 0;
            puVar28 = *(unaff_x28 + 0x10);
            pcStack_120 = 0x2;
            iVar27 = *(puVar28 + 8);
            *(puVar28 + 0x2a) = arg2;
            pcStack_118 = sym._qce_aead_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            uStack_108 = *(puVar28 + 0x40);
            iStack_c0 = iVar27 + 0xf8;
            puStack_b0 = *(puVar28 + 0x2c);
            iStack_f8 = iVar27 + 0xa8;
            uStack_b8 = *(iVar27 + 0x138);
            iVar22 = *(iVar27 + -0x80);
            uStack_100 = CONCAT44(*(iVar27 + 0xa4),puVar28[0x42]);
            uStack_f0 = CONCAT44(iVar22,*(iVar27 + 0x140));
            puStack_110 = puVar28;
            if (puVar28[0x42] == 4) {
                iVar4 = 0;
                if (puVar28[0x41] != 0) {
                    iVar4 = iVar22;
                }
                uStack_a8 = 0x10;
                uVar23 = puVar28[0x34];
                uStack_90 = *(iVar27 + 0xa0);
                uVar16 = puVar28[0xd] - iVar4;
                unaff_x22 = uVar16;
                uStack_a0 = uVar16;
                iVar27 = *(puStack_b0 + 8);
                uVar5 = *puStack_b0;
                unaff_x24 = uVar5;
                uVar19 = puVar28[0xc];
                *piStack_178 = *puStack_b0;
                piStack_178[1] = iVar27;
                if (uVar23 != 0) {
                    uVar19 = uVar19 - 8;
                }
                uVar25 = uVar19;
                uVar6 = iStack_e8 | iVar22 * '\x04' - 8U & 0xf8;
                if (uVar19 != 0) {
                    uVar6 = uVar6 | 0x40;
                }
                iStack_e8 = CONCAT71(iStack_e8._1_7_,uVar6);
                if (0xf < uVar5) {
                    unaff_x19 = 0xffffffea;
                    goto code_r0x080077f4;
                }
                iVar27 = unaff_x24 + 1;
                auVar30 = memset(piStack_180 - iVar27,0,iVar27);
                if (uVar5 < 3) {
                    if (unaff_w23 << ((iVar27 & 3) << 3) < uVar16) {
                        unaff_x19 = 0xffffffb5;
                        goto code_r0x080077f4;
                    }
                }
                else {
                    iVar27 = 4;
                }
                memcpy(piStack_180 - iVar27,ppcStack_188 - iVar27);
                if (uVar19 == 0) {
                    uStack_d0 = uStack_d0 & 0xffffffff00000000;
                    puVar28[0x3e] = 0;
                    puVar28[0x3f] = 0;
                }
                else {
                    puVar14 = __kmalloc(uVar19 + 100,0xb20);
                    *(puVar28 + 0x3e) = puVar14;
                    if (puVar14 == NULL) {
                        unaff_x19 = 0xfffffff4;
                        unaff_x22 = uVar25;
                        auVar30 = extraout_q0_02;
                        goto code_r0x080077f4;
                    }
                    iVar27 = *(puVar28 + 0x10);
                    if (uVar19 >> 8 < 0xff) {
                        uVar16 = 2;
                        *puVar14 = uVar19 >> 8 & 0xff | (uVar19 & 0xff00ff) << 8;
                    }
                    else {
                        uVar23 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
                        uVar16 = 6;
                        *(puVar14 + 1) = uVar23 >> 0x10 | uVar23 << 0x10;
                        *puVar14 = 0xfeff;
                    }
                    uVar23 = 0;
                    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar19 + uVar16 + 0xf) & 0xfffffffffffffff0;
                    if ((0 < uVar19) && (iVar27 != 0)) {
                        unaff_x24 = puVar14 + uVar16;
                        iVar22 = 1;
                        iVar13 = iVar27;
                        uVar21 = uVar25;
                        iVar4 = 1;
                        do {
                            iVar29 = iVar4;
                            uVar23 = uVar21 - *(iVar13 + 0xc);
                            uVar21 = uVar23;
                            iVar13 = sg_next();
                            iVar22 = iVar22 + -1;
                            if (uVar23 < 1) break;
                            iVar4 = iVar29 + 1;
                        } while (iVar13 != 0);
                        if (iVar22 == 1) {
                            uVar23 = 0;
                            uVar25 = uVar21;
                        }
                        else {
                            iVar13 = 0;
                            do {
                                iVar15 = sg_copy_to_buffer(iVar27,1,unaff_x24,uVar25);
                                unaff_x24 = unaff_x24 + iVar15;
                                uVar25 = uVar25 - iVar15;
                                iVar13 = iVar15 + iVar13;
                                uVar23 = iVar13;
                                iVar27 = sg_next(iVar27);
                                iVar29 = iVar29 + -1;
                            } while (iVar29 != 0);
                        }
                    }
                    if (uVar23 != uVar19) {
                        _printk(0x800135b,uVar23);
                    }
                }
                puStack_c8 = puVar28 + 0x36;
                iVar27 = *(puVar28 + 0x3e);
                if (iVar27 == 0) {
                    uVar21 = *puStack_c8;
                }
                else {
                    uVar21 = (((iVar27 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
                    puVar28[0x38] = iVar27 & 0xfff;
                    puVar28[0x39] = uStack_d0;
                }
                *puStack_c8 = uVar21 & 0xfffffffffffffffc | 2;
            }
            else {
                uStack_90 = *(iVar27 + 0xa0);
                uStack_a8 = *(*(iVar27 + 0x10) + -0x50);
            }
            uVar21 = qce_aead_req(*(arg2 + 0x10),&pcStack_120);
            auVar30 = extraout_q0_05;
code_r0x080077f0:
            unaff_x19 = uVar21 & 0xffffffff;
            unaff_x22 = uVar25;
        }
        else {
            if (uVar17 == 0xf) {
                uStack_f0 = 0;
                pcStack_118 = NULL;
                iStack_d8 = *(unaff_x28 + 0x10);
                pcStack_120 = sym._qce_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                puStack_110 = iStack_d8 + 0x1f8;
                uStack_108 = *(iStack_d8 + 0x38);
                *(iStack_d8 + 0xa8) = arg2;
                uStack_100 = CONCAT44(*(iStack_d8 + 0xfc),*(iStack_d8 + 0xf8));
                iStack_f8 = *(iStack_d8 + 0x100);
                iStack_e8 = CONCAT11(*(iStack_d8 + 0x111) != '\0',*(iStack_d8 + 0x110) != '\0') << 0x20;
                uStack_d0 = *(*(iStack_d8 + 0x20) + 0xa0);
                uStack_e0 = *(iStack_d8 + 0x30);
                if (*(*(iStack_d8 + 0x20) + 0xa4) < 4) {
                    do {
    //WARNING: Do nothing block with infinite loop
    //switch table (3 cases) at 0x8000680
                    } while( true );
                }
                _printk(0x8001384);
                uVar21 = qce_process_sha_req(*(arg2 + 0x10),&pcStack_120);
                auVar30 = extraout_q0_01;
                goto code_r0x080077f0;
            }
            if (uVar17 == 5) {
                puStack_b0 = NULL;
                uStack_a8 = 0;
                iStack_c0 = 0;
                uStack_b8 = 0;
                uStack_d0 = 0;
                puStack_c8 = NULL;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_e0 = 0;
                iStack_d8 = 0;
                uStack_f0 = 0;
                iStack_e8 = 0;
                uStack_100 = 0;
                iStack_f8 = 0;
                puStack_110 = NULL;
                uStack_108 = 0;
                pcStack_120 = NULL;
                pcStack_118 = NULL;
                iVar27 = *(unaff_x28 + 0x10);
                *(iVar27 + 0x88) = arg2;
                puVar28 = iVar27 + -0x20;
                unaff_x24 = *(iVar27 + 0x20);
                if (*(*(arg2 + 0x20) + 0x19) != '\0') {
                    *(iVar27 + 0xf0) = *(iVar27 + -0x10);
                    *(iVar27 + 0xf8) = *(iVar27 + -8);
                    iVar13 = __kmalloc(*puVar28 + 0x40,0xb20);
                    *(iVar27 + 0x140) = iVar13;
                    auVar30 = extraout_q0;
                    if (iVar13 == 0) {
                        unaff_x19 = 0xfffffff4;
                        goto code_r0x080077f4;
                    }
                    uVar25 = 0;
                    iVar13 = *(iVar27 + -0x10);
                    uVar21 = *puVar28;
                    if ((iVar13 != 0) && (0 < *puVar28)) {
                        iVar22 = 1;
                        iVar4 = 1;
                        do {
                            iVar29 = iVar4;
                            uVar19 = uVar21 - *(iVar13 + 0xc);
                            uVar21 = uVar19;
                            iVar13 = sg_next();
                            iVar22 = iVar22 + -1;
                            if (uVar19 < 1) break;
                            iVar4 = iVar29 + 1;
                        } while (iVar13 != 0);
                        uVar21 = *puVar28;
                        if (iVar22 == 1) {
                            uVar25 = 0;
                            auVar30 = extraout_q0_00;
                        }
                        else {
                            uVar25 = 0;
                            iVar13 = *(iVar27 + 0x140);
                            uVar26 = *(iVar27 + -0x10);
                            do {
                                iVar15 = sg_copy_to_buffer(uVar26,1,iVar13,uVar21);
                                iVar13 = iVar13 + iVar15;
                                uVar21 = uVar21 - iVar15;
                                uVar25 = iVar15 + uVar25;
                                uVar26 = sg_next(uVar26);
                                iVar29 = iVar29 + -1;
                            } while (iVar29 != 0);
                            uVar21 = *puVar28;
                            auVar30 = extraout_q0_03;
                        }
                    }
                    uVar19 = uVar21;
                    if (uVar19 != uVar25) {
                        auVar30 = _printk(0x800135b,uVar25 & 0xffffffff,uVar21);
                        uVar19 = *puVar28;
                    }
                    *(iVar27 + 0x10c) = uVar19;
                    *(iVar27 + 0x108) = *(iVar27 + 0x140) & 0xfff;
                    *(iVar27 + -0x10) = iVar27 + 0x100;
                    *(iVar27 + -8) = iVar27 + 0x100;
                    *(iVar27 + 0x90) = *(iVar27 + -0x18);
                    *(iVar27 + 0x100) =
                         (((*(iVar27 + 0x140) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
                }
                pcStack_120 = pcStack_120 & 0xffffffff00000000;
                iStack_c0 = unaff_x24 + 0xf8;
                pcStack_118 = sym._qce_sk_cipher_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                uStack_108 = *(iVar27 + 0xe0);
                uStack_b8 = CONCAT44(uStack_b8._4_4_,*(unaff_x24 + 0x138));
                uStack_100 = CONCAT44(uStack_100._4_4_,*(iVar27 + 0xe8));
                puStack_b0 = *(iVar27 + -0x18);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,*(*(unaff_x24 + 0x10) + -0x50));
                uStack_90 = CONCAT44(uStack_90._4_4_,*(unaff_x24 + 0xa0));
                uStack_a0 = *puVar28;
                puStack_110 = puVar28;
                if ((*(unaff_x24 + 0x138) != 0) || (*(*(arg2 + 0x20) + 8) != 0)) {
                    uVar21 = qce_ablk_cipher_req(*(arg2 + 0x10),&pcStack_120);
                    auVar30 = extraout_q0_04;
                    goto code_r0x080077f0;
                }
                unaff_x19 = 0xffffffea;
                unaff_x22 = uVar25;
            }
            else {
                unaff_x19 = 0xffffffea;
            }
        }
code_r0x080077f4:
        *(arg2 + 300) = 0;
        DataMemoryBarrier(2,3);
        *(arg2 + 0x50) = *(arg2 + 0x50) + 1;
        unaff_x20 = arg2;
        unaff_x25 = iStack_158;
        if (unaff_x19 == 0) goto code_r0x08006ee4;
        pcVar3 = unaff_x28 + 4;
        *(arg2 + 0x58) = *(arg2 + 0x58) + 1;
        *(unaff_x28 + 0x10) = 0;
        *(unaff_x28 + 0x18) = 0;
        Hint_Prefetch(pcVar3,2,0,1);
        do {
            cVar7 = *pcVar3;
            cVar9 = '\x01';
            bVar8 = ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar8) {
                *pcVar3 = '\0';
                cVar9 = ExclusiveMonitorsStatus();
            }
        } while (cVar9 != '\0');
        DataMemoryBarrier(2,3);
        if (cVar7 == '\0') {
            auVar30 = _printk(0x8001216,unaff_x28);
        }
        else {
            Hint_Prefetch(puStack_138,2,0,1);
            do {
                cVar7 = '\x01';
                bVar8 = ExclusiveMonitorPass(puStack_138,0x10);
                if (bVar8) {
                    *puStack_138 = *puStack_138 - unaff_w23;
                    cVar7 = ExclusiveMonitorsStatus();
                }
            } while (cVar7 != '\0');
        }
        iVar27 = 0x100;
        if (uVar17 != 0xf) {
            iVar27 = 0x88;
        }
        iVar13 = 0xd0;
        if (uVar17 != 5) {
            iVar13 = iVar27;
        }
        *(obj._qcrypto_stat + iVar13) = *(obj._qcrypto_stat + iVar13) + 1;
        sym._qcrypto_tfm_complete(arg2,auVar30,iVar2,arg3);
        unaff_x24 = _raw_spin_lock_irqsave(iStack_158);
        if (*(arg2 + 300) != '\0') goto code_r0x08006ed8;
code_r0x08006f60:
        unaff_x25 = iStack_158;
        if (*(arg2 + 0x11c) <= *(arg2 + 0x128)) goto code_r0x08006ed8;
        unaff_x22 = 0;
        if (*(arg2 + 0x40) != uStack_168) {
            unaff_x22 = *(arg2 + 0x40);
        }
        if (*(arg2 + 0x70) != 1) goto code_r0x08006ed8;
        unaff_x19 = crypto_dequeue_request(uStack_168);
        uVar21 = unaff_x19;
        if (unaff_x19 == 0) {
            iStack_150 = 0;
            if (*(unaff_x26 + 0xe0) != iStack_170) {
                iStack_150 = *(unaff_x26 + 0xe0);
            }
            uVar21 = crypto_dequeue_request();
            if (uVar21 == 0) goto code_r0x08006ed8;
        }
        unaff_x19 = uVar21;
        if (*(arg2 + 0x11c) == 0) goto code_r0x0800795c;
        uVar17 = 0;
        unaff_x28 = *(arg2 + 0x120);
        while( true ) {
            pcVar3 = unaff_x28 + 4;
            Hint_Prefetch(pcVar3,2,0,1);
            do {
                cVar7 = *pcVar3;
                cVar9 = '\x01';
                bVar8 = ExclusiveMonitorPass(pcVar3,0x10);
                if (bVar8) {
                    *pcVar3 = unaff_w23;
                    cVar9 = ExclusiveMonitorsStatus();
                }
            } while (cVar9 != '\0');
            DataMemoryBarrier(2,3);
            puVar28 = puStack_138;
            uVar25 = unaff_x22;
            if (cVar7 == '\0') break;
            unaff_x28 = unaff_x28 + 0x28;
            uVar17 = uVar17 + 1;
            if (*(arg2 + 0x11c) <= uVar17) goto code_r0x0800795c;
        }
    } while( true );
}


// ===== sym._qcrypto_tfm_complete @ 0x080079e4 (size 776) =====

void sym._qcrypto_tfm_complete(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint in_w4;
    uint uVar9;
    int *piVar10;
    ulong *in_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(arg1 + 0x20);
    uVar7 = _raw_spin_lock_irqsave(iVar13 + 0x34);
    piVar1 = iVar13 + 0xf8;
    *(arg3 + 0x20) = in_w4;
    if (*arg2 == arg2) {
        uVar14 = 0;
    }
    else {
        uVar14 = 0;
        do {
            piVar12 = *arg2;
            if (piVar12[4] == -0x73) break;
            uVar8 = __list_del_entry_valid(piVar12);
            if ((uVar8 & 1) != 0) {
                iVar2 = *piVar12;
                piVar3 = piVar12[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar12 = -0x2152ffffffffff00;
            piVar12[1] = -0x2152fffffffffede;
            llist_add_batch(piVar12 + 2,piVar12 + 2,iVar13 + 0xf0);
            Hint_Prefetch(piVar1,2,0,1);
            do {
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            uVar14 = uVar14 + 1;
        } while (*arg2 != arg2);
    }
    uVar11 = *piVar1;
    if (*(iVar13 + 0x174) < uVar11) {
        *(iVar13 + 0x174) = uVar11;
    }
    if (*(iVar13 + 0x178) < uVar14) {
        *(iVar13 + 0x178) = uVar14;
    }
    if (399 < uVar11) {
        piVar1 = iVar13 + 0x13c;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            if (iVar4 != 1) goto code_r0x08007c54;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 0;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08007c54:
        if (iVar4 == 1) {
            *(iVar13 + 0x15c) = *(iVar13 + 0x15c) + 1;
        }
    }
    _raw_spin_unlock_irqrestore(iVar13 + 0x34,uVar7);
    piVar1 = iVar13 + 0x138;
    do {
        if (*(iVar13 + 0xf0) == 0) {
            return;
        }
        if (*(arg1 + 0x12d) == '\0') {
            uVar9 = *(iVar13 + 0x140);
            *(iVar13 + 0x16c) = *(iVar13 + 0x16c) + 1;
            if ((*(iVar13 + 0x148) != 0) && (*(*(iVar13 + 0x148) + 0x128) != 0)) {
                piVar10 = iVar13 + 0x170;
                if (uVar11 < 0x40) {
                    return;
                }
                goto code_r0x08007b64;
            }
        }
        else {
            uVar9 = 0x20;
            piVar10 = iVar13 + 0x168;
code_r0x08007b64:
            *piVar10 = *piVar10 + 1;
        }
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            if (iVar4 != 0) goto code_r0x08007bfc;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08007bfc:
        if (iVar4 == 0) {
            queue_work_on(uVar9,*(iVar13 + 0x100),iVar13 + 0x108);
            return;
        }
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar4 = *piVar1;
            if (iVar4 != 1) goto code_r0x08007c0c;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
                *piVar1 = 2;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08007c0c:
        if (iVar4 != 0) {
            return;
        }
    } while( true );
}


// ===== sym._qce_sk_cipher_complete @ 0x08007cec (size 448) =====

void sym._qce_sk_cipher_complete(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    bool bVar2;
    uint uVar3;
    int64_t iVar4;
    int iVar5;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong uVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0xa8) + 0x11c);
    if (iVar5 != 0) {
        iVar4 = *(arg1 + 0x40);
        arg1_00 = *(*(arg1 + 0xa8) + 0x120);
        iVar7 = *(iVar4 + 0x98);
        do {
            if (*(arg1_00 + 0x10) == arg1 + 0x20) {
                if (arg1_00 != 0) {
                    if (arg2 != 0) {
                        noname_1 = memcpy(iVar4 + 0xe8,arg2,*(*(iVar4 + 0x10) + -0x50));
                    }
                    bVar2 = arg3 != 0;
                    uVar3 = 0;
                    if (bVar2) {
                        uVar3 = 0xfffffffa;
                    }
                    iVar4 = 200;
                    if (bVar2) {
                        iVar4 = 0xd0;
                    }
                    *(arg1_00 + 0x20) = uVar3;
                    *(obj._qcrypto_stat + iVar4) = *(obj._qcrypto_stat + iVar4) + 1;
                    if (*(iVar7 + 0x19) == '\0') goto code_r0x08007e50;
                    iVar4 = *(arg1 + 0x118);
                    uVar1 = *arg1;
                    uVar6 = uVar1;
                    *(arg1 + 0x10) = *(arg1 + 0x110);
                    *(arg1 + 0x18) = iVar4;
                    if ((iVar4 == 0) || (uVar1 < 1)) goto joined_r0x08007e90;
                    iVar5 = 0;
                    do {
                        iVar5 = iVar5 + 1;
                        uVar1 = uVar6 - *(iVar4 + 0xc);
                        uVar6 = uVar1;
                        iVar4 = sg_next(noname_1);
                        noname_1 = extraout_q0;
                    } while (0 < uVar1 && iVar4 != 0);
                    uVar1 = *arg1;
                    uVar6 = uVar1;
                    if (iVar5 == 0) {
joined_r0x08007e90:
                        uVar8 = 0;
                        if (uVar1 != 0) {
code_r0x08007e94:
                            _printk(0x800135b,uVar8 & 0xffffffff,uVar6);
                        }
                    }
                    else {
                        uVar8 = 0;
                        iVar4 = *(arg1 + 0x160);
                        uVar9 = *(arg1 + 0x18);
                        do {
                            iVar7 = sg_copy_from_buffer(uVar9,1,iVar4,uVar6);
                            iVar4 = iVar4 + iVar7;
                            uVar6 = uVar6 - iVar7;
                            uVar8 = iVar7 + uVar8;
                            uVar9 = sg_next(uVar9);
                            iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                        uVar6 = *arg1;
                        if (*arg1 != uVar8) goto code_r0x08007e94;
                    }
                    kfree_sensitive(*(arg1 + 0x160));
code_r0x08007e50:
                    sym.req_done(arg1_00);
                    return;
                }
                break;
            }
            arg1_00 = arg1_00 + 0x28;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    _printk(0x80011dc);
    return;
}


// ===== sym.req_done @ 0x08007eac (size 352) =====

void sym.req_done(int64_t arg1)

{
    char *pcVar1;
    int *piVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int iVar4;
    char cVar5;
    char cVar6;
    bool bVar7;
    int64_t iVar8;
    int64_t arg2;
    ulong *in_x18;
    int64_t arg1_01;
    int64_t arg3;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 8);
    iVar3 = *(arg1 + 0x10);
    pcVar1 = arg1 + 4;
    arg3 = *(arg1 + 0x18);
    arg1_01 = *(arg1_00 + 0x20);
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x18) = 0;
    Hint_Prefetch(pcVar1,2,0,1);
    do {
        cVar5 = *pcVar1;
        cVar6 = '\x01';
        bVar7 = ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar7) {
            *pcVar1 = '\0';
            cVar6 = ExclusiveMonitorsStatus();
        }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (cVar5 == '\0') {
        in_q0 = _printk(0x8001216,arg1);
    }
    else {
        piVar2 = arg1_00 + 0x128;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
                *piVar2 = *piVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
    }
    if (iVar3 == 0) {
        arg2 = 0;
    }
    else {
        arg2 = *(iVar3 + 0x20) + 0x80;
    }
    iVar8 = tpidr_el1;
    iVar4 = *(cpu_number + iVar8);
    *(arg1_00 + 0x130) = iVar4;
    if ((*(arg1_00 + 0x12d) != '\0') && (iVar4 != *(arg1_01 + 0x140))) {
        *(arg1_01 + 0x140) = iVar4;
    }
    if (iVar3 != 0) {
        sym._qcrypto_tfm_complete(arg1_00,in_q0,arg2,arg3);
    }
    if (*(arg1_01 + 0x13c) == 1) {
        sym._start_qcrypto_process(arg1_01,arg1_00);
    }
    return;
}


// ===== sym._qce_ahash_complete @ 0x0800800c (size 340) =====

void sym._qce_ahash_complete(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0xa8) + 0x11c);
    if (iVar3 != 0) {
        arg1_00 = *(*(arg1 + 0xa8) + 0x120);
        iVar5 = *(*(arg1 + 0x20) + 0x98);
        uVar4 = *(*(*(arg1 + 0x20) + 0x10) + -0x80);
        do {
            if (*(arg1_00 + 0x10) == arg1) {
                if (arg1_00 != 0) {
                    if ((arg2 != 0) && (memcpy(arg1 + 0x1f8,arg2,uVar4), *(arg1 + 0x111) != '\0')) {
                        memcpy(*(arg1 + 0x40),arg2,uVar4);
                    }
                    if (arg3 != 0) {
                        *(arg1 + 0xf8) = *arg3;
                        *(arg1 + 0xfc) = *(arg3 + 4);
                        *(arg1 + 0x100) = *(arg3 + 8);
                        *(arg1 + 0x104) = *(arg3 + 0xc);
                    }
                    bVar2 = arg4 != 0;
                    uVar4 = 0;
                    if (bVar2) {
                        uVar4 = 0xfffffffa;
                    }
                    *(arg1 + 0x110) = 0;
                    *(arg1 + 0x38) = *(arg1 + 0xb0);
                    *(arg1 + 0x30) = *(arg1 + 0xb8);
                    iVar1 = 0xf8;
                    if (bVar2) {
                        iVar1 = 0x100;
                    }
                    *(arg1_00 + 0x20) = uVar4;
                    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
                    if (*(iVar5 + 0x19) != '\0') {
                        *(arg1 + 0x38) = *(arg1 + 0xc0);
                        kfree(*(arg1 + 0xe8));
                    }
                    sym.req_done(arg1_00);
                    return;
                }
                break;
            }
            arg1_00 = arg1_00 + 0x28;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    _printk(0x80011dc);
    return;
}


// ===== sym._qce_aead_complete @ 0x08008160 (size 424) =====

void sym._qce_aead_complete(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    char *pcVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    int *piVar11;
    char *pcVar12;
    code *arg1_00;
    char cVar13;
    int iVar14;
    uint32_t *puVar15;
    int *piVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    char *unaff_x19;
    int64_t iVar17;
    char *unaff_x24;
    code *unaff_x25;
    char *unaff_x27;
    ulong unaff_x30;
    int *piStack_170;
    int64_t iStack_168;
    int iStack_15c;
    uint uStack_158;
    ulong uStack_154;
    ulong uStack_14c;
    ulong uStack_144;
    ulong uStack_13c;
    ulong uStack_134;
    ulong uStack_12c;
    ulong uStack_124;
    ulong uStack_11c;
    ulong uStack_114;
    ulong uStack_10c;
    ulong uStack_104;
    ulong uStack_fc;
    ulong uStack_f4;
    ulong uStack_ec;
    ulong uStack_e4;
    uint uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_48 = *(iVar17 + 0x5e0);
    iVar4 = *(*(arg1 + 0xa8) + 0x11c);
    if (iVar4 != 0) {
        iVar14 = arg4;
        unaff_x24 = *(arg1 + 0x20);
        unaff_x19 = *(*(arg1 + 0xa8) + 0x120);
        do {
            if (*(unaff_x19 + 0x10) == arg1) {
                if (unaff_x19 != NULL) {
                    if (*(arg1 + 0x108) == 4) {
                        kfree_sensitive(*(arg1 + 0xf8));
                    }
                    else {
                        uVar1 = *(*(unaff_x24 + 0x10) + -0x50);
                        if (iVar14 == 0) {
                            if (*(arg1 + 0x104) == 0) {
                                scatterwalk_map_and_copy
                                          (arg2,*(arg1 + 0x48),*(arg1 + 0x30) + *(arg1 + 0x34),*(unaff_x24 + 0x13c),
                                           1);
                                iVar14 = 0;
                            }
                            else {
                                uStack_58 = 0;
                                uStack_50 = 0;
                                uStack_68 = 0;
                                uStack_60 = 0;
                                scatterwalk_map_and_copy
                                          (&uStack_68,*(arg1 + 0x40),
                                           (*(arg1 + 0x34) + *(arg1 + 0x30)) - *(unaff_x24 + 0x13c),
                                           *(unaff_x24 + 0x13c),0);
                                iVar4 = bcmp(arg2,&uStack_68,*(unaff_x24 + 0x13c));
                                iVar14 = 0;
                                if (iVar4 != 0) {
                                    iVar14 = -0x4a;
                                }
                            }
                        }
                        else {
                            iVar14 = -6;
                        }
                        if (arg3 != 0) {
                            memcpy(unaff_x24 + 0xe8,arg3,uVar1);
                        }
                    }
                    iVar17 = 0x80;
                    if (iVar14 != 0) {
                        iVar17 = 0x88;
                    }
                    iVar6 = 0x90;
                    if (iVar14 != -0x4a) {
                        iVar6 = iVar17;
                    }
                    *(obj._qcrypto_stat + iVar6) = *(obj._qcrypto_stat + iVar6) + 1;
                    *(unaff_x19 + 0x20) = iVar14;
                    sym.req_done(unaff_x19);
                    goto code_r0x080082a8;
                }
                break;
            }
            unaff_x19 = unaff_x19 + 0x28;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    _printk(0x80011dc);
code_r0x080082a8:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_48) {
        return;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_probe;
    pcStack_c8 = sym._qcrypto_probe;
    iVar17 = sp_el0;
    iStack_d8 = *(iVar17 + 0x5e0);
    iStack_15c = 0;
    puStack_d0 = &stack0xffffffffffffffc0;
    pcVar7 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x138);
    if (pcVar7 == NULL) {
        iVar4 = -0xc;
        goto code_r0x08008a9c;
    }
    iVar17 = iVar6 + 0x10;
    uVar8 = of_icc_get(iVar17,"");
    *(pcVar7 + 0x28) = uVar8;
    unaff_x19 = pcVar7;
    if (0xfffffffffffff000 < uVar8) {
        _dev_err(iVar17,"");
        iStack_15c = *(pcVar7 + 0x28);
        goto code_r0x08008a78;
    }
    pcVar7[0x70] = '\0';
    pcVar7[0x71] = '\0';
    pcVar7[0x72] = '\0';
    pcVar7[0x73] = '\0';
    iStack_15c = icc_set_bw(uVar8,0x180,0x180);
    if (iStack_15c != 0) {
        _dev_err(iVar17,"");
        goto code_r0x08008a78;
    }
    iVar9 = qce_open(iVar6,&iStack_15c);
    if (iVar9 == 0) {
        iStack_15c = -0x13;
        goto code_r0x08008a64;
    }
    iStack_15c = icc_set_bw(*(pcVar7 + 0x28),0,0);
    if (iStack_15c != 0) {
        _dev_err(iVar17,"");
        goto code_r0x08008a58;
    }
    unaff_x25 = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(iVar6 + 0xa8) = pcVar7;
    *(pcVar7 + 0x18) = iVar6;
    *(pcVar7 + 0x20) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar7 + 0x10) = iVar9;
    pcVar7[0x6c] = -0x11;
    pcVar7[0x6d] = -0x42;
    pcVar7[0x6e] = -0x53;
    pcVar7[0x6f] = -0x22;
    init_timer_key(pcVar7 + 0x78,sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0,0,0)
    ;
    pcVar7[0xb0] = -0x20;
    pcVar7[0xb1] = -1;
    pcVar7[0xb2] = -1;
    pcVar7[0xb3] = -1;
    pcVar7[0xb4] = '\x0f';
    pcVar7[0xb5] = '\0';
    pcVar7[0xb6] = '\0';
    pcVar7[0xb7] = '\0';
    *(pcVar7 + 0xb8) = pcVar7 + 0xb8;
    *(pcVar7 + 0xc0) = pcVar7 + 0xb8;
    pcVar7[0xe0] = -0x20;
    pcVar7[0xe1] = -1;
    pcVar7[0xe2] = -1;
    pcVar7[0xe3] = -1;
    pcVar7[0xe4] = '\x0f';
    pcVar7[0xe5] = '\0';
    pcVar7[0xe6] = '\0';
    pcVar7[0xe7] = '\0';
    *(pcVar7 + 200) = sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar7 + 0xe8) = pcVar7 + 0xe8;
    *(pcVar7 + 0xf0) = pcVar7 + 0xe8;
    *(pcVar7 + 0xf8) = sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    pcVar7[0x74] = '\0';
    pcVar7[0x134] = '\0';
    pcVar7[0x135] = '\0';
    pcVar7[0x136] = '\0';
    pcVar7[0x137] = '\0';
    pcVar7[300] = '\0';
    pcVar7[0x110] = '\0';
    pcVar7[0x111] = '\0';
    pcVar7[0x112] = '\0';
    pcVar7[0x113] = '\0';
    pcVar7[0x114] = '\0';
    pcVar7[0x115] = '\0';
    pcVar7[0x116] = '\0';
    pcVar7[0x117] = '\0';
    pcVar7[0x118] = '\0';
    crypto_init_queue(pcVar7 + 0x30,0x300);
    mutex_lock(0x8000548);
    *0x8000540 = *0x8000540 + 1;
    *(pcVar7 + 0x60) = *0x8000540;
    uVar10 = _raw_spin_lock_irqsave(0x80004e4);
    bVar3 = *0x8000530 == 0x8000530;
    pcVar7[0x12d] = bVar3;
    pcVar12 = *0x8000538;
    if (bVar3) {
        _segment.ehdr = pcVar7;
    }
    uVar8 = __list_add_valid(pcVar7,*0x8000538,0x8000530);
    if ((uVar8 & 1) != 0) {
        *0x8000538 = pcVar7;
        pcVar7[0] = '0';
        pcVar7[1] = '\x05';
        pcVar7[2] = '\0';
        pcVar7[3] = '\b';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        *(pcVar7 + 8) = pcVar12;
        *pcVar12 = pcVar7;
    }
    unaff_x24 = 0x80004c0;
    *0x8000578 = pcVar7;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar10);
    qce_hw_support(*(pcVar7 + 0x10),0x80004c0);
    uVar5 = *0x80004e0;
    uVar8 = *0x80004e0;
    *(pcVar7 + 0x68) = *0x80004dc;
    *(pcVar7 + 0x11c) = uVar5;
    piVar11 = __kmalloc(uVar8 * 0x28,0xdc0);
    if (piVar11 == NULL) {
        iStack_15c = -0xc;
        goto code_r0x08008a4c;
    }
    *(pcVar7 + 0x120) = piVar11;
    pcVar7[0x128] = '\0';
    pcVar7[0x129] = '\0';
    pcVar7[0x12a] = '\0';
    pcVar7[299] = '\0';
    iVar4 = *(pcVar7 + 0x11c);
    if (iVar4 != 0) {
        iVar14 = 0;
        piVar16 = piVar11;
        do {
            *piVar16 = iVar14;
            iVar14 = iVar14 + 1;
            *(piVar16 + 1) = 0;
            *(piVar16 + 2) = pcVar7;
            piVar16 = piVar16 + 10;
        } while (iVar4 != iVar14);
    }
    if (*0x80004ca == '\0') {
        puVar15 = *(iVar6 + 0xa0);
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *puVar15;
        *0x80004b4 = puVar15[1];
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = puVar15[2];
        *0x80004bc = puVar15[3];
    }
    else {
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cb;
        *0x80004b4 = 0;
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cc;
        *0x80004bc = 1;
        *(pcVar7 + 100) = *0x80004d8;
    }
    if (_segment.ehdr != 1) goto code_r0x08008a4c;
    iVar9 = 0;
    do {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        piStack_170 = piVar11;
        iStack_168 = iVar17;
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\0';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x80,obj._qcrypto_sk_cipher_algos + iVar9,0x200);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (0xfffffffffffff000 < unaff_x27) goto code_r0x08008a38;
        if (*0x80004cd != '\0') {
            pcVar12 = unaff_x27 + 0x138;
            uVar5 = strlen(pcVar12);
            uStack_dc = 0;
            uStack_ec = 0;
            uStack_e4 = 0;
            uStack_fc = 0;
            uStack_f4 = 0;
            uStack_158 = 0x6d6f6371;
            uStack_10c = 0;
            uStack_104 = 0;
            uStack_11c = 0;
            uStack_114 = 0;
            uStack_12c = 0;
            uStack_124 = 0;
            uStack_13c = 0;
            uStack_134 = 0;
            uStack_14c = 0;
            uStack_144 = 0;
            uStack_154 = 0x2d;
            if (0x7a < uVar5) {
                iStack_15c = -0x16;
                goto code_r0x08008844;
            }
            strlcat(&uStack_158,pcVar12,0x80);
            strlcpy(pcVar12,&uStack_158,0x80);
            iStack_15c = 0;
        }
        iStack_15c = crypto_register_skcipher(unaff_x27 + 0x80);
        pcVar12 = *0x80004f0;
        if (iStack_15c == 0) {
            uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
            if ((uVar8 & 1) != 0) {
                *0x80004f0 = unaff_x27;
                unaff_x27[0] = -0x18;
                unaff_x27[1] = '\x04';
                unaff_x27[2] = '\0';
                unaff_x27[3] = '\b';
                unaff_x27[4] = '\0';
                unaff_x27[5] = '\0';
                unaff_x27[6] = '\0';
                unaff_x27[7] = '\0';
                *(unaff_x27 + 8) = pcVar12;
                *pcVar12 = unaff_x27;
            }
            _dev_info(iVar17,0x80013d8,unaff_x27 + 0x1b8);
        }
        else {
            _dev_err(iVar17,"",unaff_x27 + 0x1b8);
            kfree_sensitive(unaff_x27);
        }
        iVar9 = iVar9 + 0x200;
    } while (iVar9 != 0xe00);
    if (*0x80004c6 == '\0') {
code_r0x08008874:
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\x01';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x280,reloc._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (unaff_x27 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != 0x0) {
                pcVar12 = unaff_x27 + 0x3b8;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c != 0) goto code_r0x08008844;
            }
            iStack_15c = crypto_register_ahash(unaff_x27 + 0x280);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x27;
                    unaff_x27[0] = -0x18;
                    unaff_x27[1] = '\x04';
                    unaff_x27[2] = '\0';
                    unaff_x27[3] = '\b';
                    unaff_x27[4] = '\0';
                    unaff_x27[5] = '\0';
                    unaff_x27[6] = '\0';
                    unaff_x27[7] = '\0';
                    *(unaff_x27 + 8) = pcVar12;
                    *pcVar12 = unaff_x27;
                }
                _dev_info(iVar17,0x80013d8,unaff_x27 + 0x438);
            }
            else {
                _dev_err(iVar17,"",unaff_x27 + 0x438);
                kfree_sensitive(unaff_x27);
            }
            unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x27 == NULL) goto code_r0x08008a34;
            unaff_x27[0x700] = '\x01';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x280,reloc._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt == 0x0) {
code_r0x080089dc:
                    iStack_15c = crypto_register_ahash(unaff_x27 + 0x280);
                    pcVar7 = *0x80004f0;
                    if (iStack_15c != 0) goto code_r0x08008adc;
                    uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = unaff_x27;
                        unaff_x27[0] = -0x18;
                        unaff_x27[1] = '\x04';
                        unaff_x27[2] = '\0';
                        unaff_x27[3] = '\b';
                        unaff_x27[4] = '\0';
                        unaff_x27[5] = '\0';
                        unaff_x27[6] = '\0';
                        unaff_x27[7] = '\0';
                        *(unaff_x27 + 8) = pcVar7;
                        *pcVar7 = unaff_x27;
                    }
                    _dev_info(iVar17,0x80013d8,unaff_x27 + 0x438);
                    goto code_r0x08008af8;
                }
                pcVar12 = unaff_x27 + 0x3b8;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c == 0) goto code_r0x080089dc;
                goto code_r0x08008844;
            }
        }
    }
    else {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 != NULL) {
            unaff_x27[0x700] = '\0';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x80,reloc._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (*0x80004cf == '\0') {
code_r0x08008790:
                    iStack_15c = crypto_register_skcipher(unaff_x27 + 0x80);
                    pcVar12 = *0x80004f0;
                    if (iStack_15c == 0) {
                        uVar8 = __list_add_valid(unaff_x27,*0x80004f0);
                        if ((uVar8 & 1) != 0) {
                            *0x80004f0 = unaff_x27;
                            unaff_x27[0] = -0x18;
                            unaff_x27[1] = '\x04';
                            unaff_x27[2] = '\0';
                            unaff_x27[3] = '\b';
                            unaff_x27[4] = '\0';
                            unaff_x27[5] = '\0';
                            unaff_x27[6] = '\0';
                            unaff_x27[7] = '\0';
                            *(unaff_x27 + 8) = pcVar12;
                            *pcVar12 = unaff_x27;
                        }
                        _dev_info(iVar17,0x80013d8,unaff_x27 + 0x1b8);
                    }
                    else {
                        _dev_err(iVar17,"",unaff_x27 + 0x1b8);
                        kfree_sensitive(unaff_x27);
                    }
                    goto code_r0x08008874;
                }
                pcVar12 = unaff_x27 + 0x138;
                uVar5 = strlen(pcVar12);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(pcVar12,uVar5);
                if (iStack_15c == 0) goto code_r0x08008790;
code_r0x08008844:
                _dev_err(iVar17,"",pcVar12);
                kfree(unaff_x27);
                goto code_r0x08008a3c;
            }
            goto code_r0x08008a38;
        }
code_r0x08008a34:
        unaff_x27 = 0xfffffffffffffff4;
    }
code_r0x08008a38:
    iStack_15c = unaff_x27;
code_r0x08008a3c:
    sym._qcrypto_remove_engine(pcVar7);
    kfree_sensitive(piStack_170);
code_r0x08008a4c:
    mutex_unlock(0x8000548);
code_r0x08008a58:
    if (*(pcVar7 + 0x10) != 0) {
        qce_close();
    }
code_r0x08008a64:
    icc_set_bw(*(pcVar7 + 0x28),0,0);
    *(iVar6 + 0xa8) = 0;
    unaff_x19 = pcVar7;
code_r0x08008a78:
    uVar10 = ksize(unaff_x19);
    memset(unaff_x19,0,uVar10);
    kfree(unaff_x19);
    iVar4 = iStack_15c;
code_r0x08008a9c:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_d8) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08008adc:
    _dev_err(iStack_168,"",unaff_x27 + 0x438);
    kfree_sensitive(unaff_x27);
code_r0x08008af8:
    pcVar7 = unaff_x19;
    if (((*unaff_x24 != '\0') || (unaff_x24[1] != '\0')) || (cVar13 = '\0', unaff_x24[3] != '\0')) {
        iVar17 = 0;
        unaff_x24 = 0x2;
        do {
            pcVar12 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (pcVar12 == NULL) goto code_r0x08008e58;
            pcVar12[0x700] = '\x02';
            pcVar12[0x701] = '\0';
            pcVar12[0x702] = '\0';
            pcVar12[0x703] = '\0';
            memcpy(pcVar12 + 0x500,obj._qcrypto_aead_sha1_hmac_algos + iVar17,0x200);
            *(pcVar12 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < pcVar12) goto code_r0x08008e5c;
            if (*0x80004ce != '\0') {
                unaff_x27 = pcVar12 + 0x5b8;
                uVar5 = strlen(unaff_x27);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar5);
                if (iStack_15c != 0) goto code_r0x08008e64;
            }
            iStack_15c = crypto_register_aead(pcVar12 + 0x500);
            pcVar2 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(pcVar12,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = pcVar12;
                    pcVar12[0] = -0x18;
                    pcVar12[1] = '\x04';
                    pcVar12[2] = '\0';
                    pcVar12[3] = '\b';
                    pcVar12[4] = '\0';
                    pcVar12[5] = '\0';
                    pcVar12[6] = '\0';
                    pcVar12[7] = '\0';
                    *(pcVar12 + 8) = pcVar2;
                    *pcVar2 = pcVar12;
                }
                _dev_info(iStack_168,0x80013d8,pcVar12 + 0x638);
            }
            else {
                _dev_err(iStack_168,"",pcVar12 + 0x638);
                kfree(pcVar12);
            }
            iVar17 = iVar17 + 0x200;
        } while (iVar17 != 0x600);
        cVar13 = '\0';
        if (*0x80004c3 != '\0') {
            iVar17 = 0;
            unaff_x24 = 0x2;
            do {
                pcVar12 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
                if (pcVar12 == NULL) goto code_r0x08008e58;
                pcVar12[0x700] = '\x02';
                pcVar12[0x701] = '\0';
                pcVar12[0x702] = '\0';
                pcVar12[0x703] = '\0';
                memcpy(pcVar12 + 0x500,obj._qcrypto_aead_sha256_hmac_algos + iVar17,0x200);
                *(pcVar12 + 0x708) = unaff_x25;
                if (0xfffffffffffff000 < pcVar12) goto code_r0x08008e5c;
                if (*0x80004ce != '\0') {
                    unaff_x27 = pcVar12 + 0x5b8;
                    uVar5 = strlen(unaff_x27);
                    iStack_15c = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar5);
                    if (iStack_15c != 0) goto code_r0x08008e64;
                }
                iStack_15c = crypto_register_aead(pcVar12 + 0x500);
                pcVar2 = *0x80004f0;
                if (iStack_15c == 0) {
                    uVar8 = __list_add_valid(pcVar12,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = pcVar12;
                        pcVar12[0] = -0x18;
                        pcVar12[1] = '\x04';
                        pcVar12[2] = '\0';
                        pcVar12[3] = '\b';
                        pcVar12[4] = '\0';
                        pcVar12[5] = '\0';
                        pcVar12[6] = '\0';
                        pcVar12[7] = '\0';
                        *(pcVar12 + 8) = pcVar2;
                        *pcVar2 = pcVar12;
                    }
                    _dev_info(iStack_168,0x80013d8,pcVar12 + 0x638);
                }
                else {
                    _dev_err(iStack_168,"",pcVar12 + 0x638);
                    kfree(pcVar12);
                }
                iVar17 = iVar17 + 0x200;
                cVar13 = *0x80004c3;
            } while (iVar17 != 0x600);
        }
    }
    if (cVar13 == '\0' && _segment.ehdr == 0) {
code_r0x08008b20:
        arg1_00 = unaff_x25;
        if (*0x80004c7 == '\0') {
code_r0x0800914c:
            mutex_unlock(0x8000548);
            unaff_x25 = arg1_00;
            iVar4 = 0;
            goto code_r0x08008a9c;
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1_00 = unaff_x24 + 0x5b8;
                uVar5 = strlen(arg1_00);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar5);
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_aead(unaff_x24 + 0x500);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar12;
                    *pcVar12 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x638);
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x638);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x02';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,
                   0x200);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < unaff_x24) goto code_r0x08008e50;
            arg1_00 = unaff_x25;
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1_00 = unaff_x24 + 0x5b8;
                uVar5 = strlen(arg1_00);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar5);
                unaff_x25 = arg1_00;
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_aead(unaff_x24 + 0x500);
            pcVar7 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar7;
                    *pcVar7 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x638);
                unaff_x19 = pcVar7;
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x638);
                kfree(unaff_x24);
            }
            goto code_r0x0800914c;
        }
    }
    else {
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) {
code_r0x080090e4:
            unaff_x24 = 0xfffffffffffffff4;
            iStack_15c = -0xc;
            goto code_r0x08008a3c;
        }
        unaff_x24[0x700] = '\x01';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x280,reloc._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1_00 = unaff_x24 + 0x3b8;
                uVar5 = strlen(arg1_00);
                iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar5);
                if (iStack_15c != 0) goto code_r0x08009100;
            }
            iStack_15c = crypto_register_ahash(unaff_x24 + 0x280);
            pcVar12 = *0x80004f0;
            if (iStack_15c == 0) {
                uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar8 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar12;
                    *pcVar12 = unaff_x24;
                }
                _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x438);
            }
            else {
                _dev_err(iStack_168,"",unaff_x24 + 0x438);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x01';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x280,reloc._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (unaff_x24 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                    arg1_00 = unaff_x24 + 0x3b8;
                    uVar5 = strlen(arg1_00);
                    iStack_15c = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar5);
                    if (iStack_15c != 0) goto code_r0x08009100;
                }
                iStack_15c = crypto_register_ahash(unaff_x24 + 0x280);
                pcVar12 = *0x80004f0;
                if (iStack_15c == 0) {
                    uVar8 = __list_add_valid(unaff_x24,*0x80004f0);
                    if ((uVar8 & 1) != 0) {
                        *0x80004f0 = unaff_x24;
                        unaff_x24[0] = -0x18;
                        unaff_x24[1] = '\x04';
                        unaff_x24[2] = '\0';
                        unaff_x24[3] = '\b';
                        unaff_x24[4] = '\0';
                        unaff_x24[5] = '\0';
                        unaff_x24[6] = '\0';
                        unaff_x24[7] = '\0';
                        *(unaff_x24 + 8) = pcVar12;
                        *pcVar12 = unaff_x24;
                    }
                    _dev_info(iStack_168,0x80013d8,unaff_x24 + 0x438);
                }
                else {
                    _dev_err(iStack_168,"",unaff_x24 + 0x438);
                    kfree_sensitive(unaff_x24);
                }
                goto code_r0x08008b20;
            }
        }
    }
code_r0x08008e50:
    iStack_15c = unaff_x24;
    goto code_r0x08008a3c;
code_r0x08008e58:
    pcVar12 = 0xfffffffffffffff4;
code_r0x08008e5c:
    unaff_x24 = 0x2;
    iStack_15c = pcVar12;
    goto code_r0x08008a3c;
code_r0x08008e64:
    unaff_x24 = 0x2;
    _dev_err(iStack_168,"",unaff_x27);
    kfree(pcVar12);
    goto code_r0x08008a3c;
code_r0x08009100:
    _dev_err(iStack_168,"",arg1_00);
    kfree(unaff_x24);
    goto code_r0x08008a3c;
}


// ===== sym._qcrypto_probe @ 0x08008308 (size 3692) =====

//WARNING: Type propagation algorithm not settling

void sym._qcrypto_probe(int64_t arg1)

{
    char *pcVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    char *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int *piVar9;
    char *pcVar10;
    code *arg1_00;
    char cVar11;
    uint32_t *puVar12;
    int iVar13;
    int *piVar14;
    ulong *in_x18;
    char *unaff_x19;
    int64_t iVar15;
    char *unaff_x24;
    code *unaff_x25;
    char *unaff_x27;
    ulong unaff_x30;
    int *piStack_100;
    int64_t iStack_f8;
    int aiStack_ec [33];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    aiStack_ec[0] = 0;
    pcVar5 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x138);
    if (pcVar5 == NULL) {
        iVar4 = -0xc;
        goto code_r0x08008a9c;
    }
    iVar15 = arg1 + 0x10;
    uVar6 = of_icc_get(iVar15,"");
    *(pcVar5 + 0x28) = uVar6;
    unaff_x19 = pcVar5;
    if (0xfffffffffffff000 < uVar6) {
        _dev_err(iVar15,"");
        aiStack_ec[0] = *(pcVar5 + 0x28);
        goto code_r0x08008a78;
    }
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    aiStack_ec[0] = icc_set_bw(uVar6,0x180,0x180);
    if (aiStack_ec[0] != 0) {
        _dev_err(iVar15,"");
        goto code_r0x08008a78;
    }
    iVar7 = qce_open(arg1,aiStack_ec);
    if (iVar7 == 0) {
        aiStack_ec[0] = -0x13;
        goto code_r0x08008a64;
    }
    aiStack_ec[0] = icc_set_bw(*(pcVar5 + 0x28),0,0);
    if (aiStack_ec[0] != 0) {
        _dev_err(iVar15,"");
        goto code_r0x08008a58;
    }
    unaff_x25 = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(arg1 + 0xa8) = pcVar5;
    *(pcVar5 + 0x18) = arg1;
    *(pcVar5 + 0x20) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar5 + 0x10) = iVar7;
    pcVar5[0x6c] = -0x11;
    pcVar5[0x6d] = -0x42;
    pcVar5[0x6e] = -0x53;
    pcVar5[0x6f] = -0x22;
    init_timer_key(pcVar5 + 0x78,sym.qcrypto_bw_reaper_timer_callback.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0,0,0)
    ;
    pcVar5[0xb0] = -0x20;
    pcVar5[0xb1] = -1;
    pcVar5[0xb2] = -1;
    pcVar5[0xb3] = -1;
    pcVar5[0xb4] = '\x0f';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    *(pcVar5 + 0xb8) = pcVar5 + 0xb8;
    *(pcVar5 + 0xc0) = pcVar5 + 0xb8;
    pcVar5[0xe0] = -0x20;
    pcVar5[0xe1] = -1;
    pcVar5[0xe2] = -1;
    pcVar5[0xe3] = -1;
    pcVar5[0xe4] = '\x0f';
    pcVar5[0xe5] = '\0';
    pcVar5[0xe6] = '\0';
    pcVar5[0xe7] = '\0';
    *(pcVar5 + 200) = sym.qcrypto_bw_reaper_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    *(pcVar5 + 0xe8) = pcVar5 + 0xe8;
    *(pcVar5 + 0xf0) = pcVar5 + 0xe8;
    *(pcVar5 + 0xf8) = sym.qcrypto_bw_allocate_work.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
    pcVar5[0x74] = '\0';
    pcVar5[0x134] = '\0';
    pcVar5[0x135] = '\0';
    pcVar5[0x136] = '\0';
    pcVar5[0x137] = '\0';
    pcVar5[300] = '\0';
    pcVar5[0x110] = '\0';
    pcVar5[0x111] = '\0';
    pcVar5[0x112] = '\0';
    pcVar5[0x113] = '\0';
    pcVar5[0x114] = '\0';
    pcVar5[0x115] = '\0';
    pcVar5[0x116] = '\0';
    pcVar5[0x117] = '\0';
    pcVar5[0x118] = '\0';
    crypto_init_queue(pcVar5 + 0x30,0x300);
    mutex_lock(0x8000548);
    *0x8000540 = *0x8000540 + 1;
    *(pcVar5 + 0x60) = *0x8000540;
    uVar8 = _raw_spin_lock_irqsave(0x80004e4);
    bVar2 = *0x8000530 == 0x8000530;
    pcVar5[0x12d] = bVar2;
    pcVar10 = *0x8000538;
    if (bVar2) {
        _segment.ehdr = pcVar5;
    }
    uVar6 = __list_add_valid(pcVar5,*0x8000538,0x8000530);
    if ((uVar6 & 1) != 0) {
        *0x8000538 = pcVar5;
        pcVar5[0] = '0';
        pcVar5[1] = '\x05';
        pcVar5[2] = '\0';
        pcVar5[3] = '\b';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        *(pcVar5 + 8) = pcVar10;
        *pcVar10 = pcVar5;
    }
    unaff_x24 = 0x80004c0;
    *0x8000578 = pcVar5;
    _raw_spin_unlock_irqrestore(0x80004e4,uVar8);
    qce_hw_support(*(pcVar5 + 0x10),0x80004c0);
    uVar3 = *0x80004e0;
    uVar6 = *0x80004e0;
    *(pcVar5 + 0x68) = *0x80004dc;
    *(pcVar5 + 0x11c) = uVar3;
    piVar9 = __kmalloc(uVar6 * 0x28,0xdc0);
    if (piVar9 == NULL) {
        aiStack_ec[0] = -0xc;
        goto code_r0x08008a4c;
    }
    *(pcVar5 + 0x120) = piVar9;
    pcVar5[0x128] = '\0';
    pcVar5[0x129] = '\0';
    pcVar5[0x12a] = '\0';
    pcVar5[299] = '\0';
    iVar4 = *(pcVar5 + 0x11c);
    if (iVar4 != 0) {
        iVar13 = 0;
        piVar14 = piVar9;
        do {
            *piVar14 = iVar13;
            iVar13 = iVar13 + 1;
            *(piVar14 + 1) = 0;
            *(piVar14 + 2) = pcVar5;
            piVar14 = piVar14 + 10;
        } while (iVar4 != iVar13);
    }
    if (*0x80004ca == '\0') {
        puVar12 = *(arg1 + 0xa0);
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *puVar12;
        *0x80004b4 = puVar12[1];
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = puVar12[2];
        *0x80004bc = puVar12[3];
    }
    else {
        _reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cb;
        *0x80004b4 = 0;
        _reloc._qcrypto_remove.efdd1d0348837140a5be4140d40c9b69.cfi_jt = *0x80004cc;
        *0x80004bc = 1;
        *(pcVar5 + 100) = *0x80004d8;
    }
    if (_segment.ehdr != 1) goto code_r0x08008a4c;
    iVar7 = 0;
    do {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        piStack_100 = piVar9;
        iStack_f8 = iVar15;
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\0';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x80,obj._qcrypto_sk_cipher_algos + iVar7,0x200);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (0xfffffffffffff000 < unaff_x27) goto code_r0x08008a38;
        if (*0x80004cd != '\0') {
            pcVar10 = unaff_x27 + 0x138;
            uVar3 = strlen(pcVar10);
            aiStack_ec[0x20] = 0;
            aiStack_ec[0x1c] = 0;
            aiStack_ec[0x1d] = 0;
            aiStack_ec[0x1e] = 0;
            aiStack_ec[0x1f] = 0;
            aiStack_ec[0x18] = 0;
            aiStack_ec[0x19] = 0;
            aiStack_ec[0x1a] = 0;
            aiStack_ec[0x1b] = 0;
            aiStack_ec[1] = 0x6d6f6371;
            aiStack_ec[0x14] = 0;
            aiStack_ec[0x15] = 0;
            aiStack_ec[0x16] = 0;
            aiStack_ec[0x17] = 0;
            aiStack_ec[0x10] = 0;
            aiStack_ec[0x11] = 0;
            aiStack_ec[0x12] = 0;
            aiStack_ec[0x13] = 0;
            aiStack_ec[0xc] = 0;
            aiStack_ec[0xd] = 0;
            aiStack_ec[0xe] = 0;
            aiStack_ec[0xf] = 0;
            aiStack_ec[8] = 0;
            aiStack_ec[9] = 0;
            aiStack_ec[10] = 0;
            aiStack_ec[0xb] = 0;
            aiStack_ec[4] = 0;
            aiStack_ec[5] = 0;
            aiStack_ec[6] = 0;
            aiStack_ec[7] = 0;
            aiStack_ec[2] = 0x2d;
            aiStack_ec[3] = 0;
            if (0x7a < uVar3) {
                aiStack_ec[0] = -0x16;
                goto code_r0x08008844;
            }
            strlcat(aiStack_ec + 1,pcVar10,0x80);
            strlcpy(pcVar10,aiStack_ec + 1,0x80);
            aiStack_ec[0] = 0;
        }
        aiStack_ec[0] = crypto_register_skcipher(unaff_x27 + 0x80);
        pcVar10 = *0x80004f0;
        if (aiStack_ec[0] == 0) {
            uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
            if ((uVar6 & 1) != 0) {
                *0x80004f0 = unaff_x27;
                unaff_x27[0] = -0x18;
                unaff_x27[1] = '\x04';
                unaff_x27[2] = '\0';
                unaff_x27[3] = '\b';
                unaff_x27[4] = '\0';
                unaff_x27[5] = '\0';
                unaff_x27[6] = '\0';
                unaff_x27[7] = '\0';
                *(unaff_x27 + 8) = pcVar10;
                *pcVar10 = unaff_x27;
            }
            _dev_info(iVar15,0x80013d8,unaff_x27 + 0x1b8);
        }
        else {
            _dev_err(iVar15,"",unaff_x27 + 0x1b8);
            kfree_sensitive(unaff_x27);
        }
        iVar7 = iVar7 + 0x200;
    } while (iVar7 != 0xe00);
    if (*0x80004c6 == '\0') {
code_r0x08008874:
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 == NULL) goto code_r0x08008a34;
        unaff_x27[0x700] = '\x01';
        unaff_x27[0x701] = '\0';
        unaff_x27[0x702] = '\0';
        unaff_x27[0x703] = '\0';
        memcpy(unaff_x27 + 0x280,reloc._sha1_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        if (unaff_x27 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != 0x0) {
                pcVar10 = unaff_x27 + 0x3b8;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08008844;
            }
            aiStack_ec[0] = crypto_register_ahash(unaff_x27 + 0x280);
            pcVar10 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x27;
                    unaff_x27[0] = -0x18;
                    unaff_x27[1] = '\x04';
                    unaff_x27[2] = '\0';
                    unaff_x27[3] = '\b';
                    unaff_x27[4] = '\0';
                    unaff_x27[5] = '\0';
                    unaff_x27[6] = '\0';
                    unaff_x27[7] = '\0';
                    *(unaff_x27 + 8) = pcVar10;
                    *pcVar10 = unaff_x27;
                }
                _dev_info(iVar15,0x80013d8,unaff_x27 + 0x438);
            }
            else {
                _dev_err(iVar15,"",unaff_x27 + 0x438);
                kfree_sensitive(unaff_x27);
            }
            unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x27 == NULL) goto code_r0x08008a34;
            unaff_x27[0x700] = '\x01';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x280,reloc._sha256_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt == 0x0) {
code_r0x080089dc:
                    aiStack_ec[0] = crypto_register_ahash(unaff_x27 + 0x280);
                    pcVar5 = *0x80004f0;
                    if (aiStack_ec[0] != 0) goto code_r0x08008adc;
                    uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = unaff_x27;
                        unaff_x27[0] = -0x18;
                        unaff_x27[1] = '\x04';
                        unaff_x27[2] = '\0';
                        unaff_x27[3] = '\b';
                        unaff_x27[4] = '\0';
                        unaff_x27[5] = '\0';
                        unaff_x27[6] = '\0';
                        unaff_x27[7] = '\0';
                        *(unaff_x27 + 8) = pcVar5;
                        *pcVar5 = unaff_x27;
                    }
                    _dev_info(iVar15,0x80013d8,unaff_x27 + 0x438);
                    goto code_r0x08008af8;
                }
                pcVar10 = unaff_x27 + 0x3b8;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] == 0) goto code_r0x080089dc;
                goto code_r0x08008844;
            }
        }
    }
    else {
        unaff_x27 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x27 != NULL) {
            unaff_x27[0x700] = '\0';
            unaff_x27[0x701] = '\0';
            unaff_x27[0x702] = '\0';
            unaff_x27[0x703] = '\0';
            memcpy(unaff_x27 + 0x80,reloc._qcrypto_setkey_aes_xts.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
            *(unaff_x27 + 0x708) = reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            if (unaff_x27 < 0xfffffffffffff001) {
                if (*0x80004cf == '\0') {
code_r0x08008790:
                    aiStack_ec[0] = crypto_register_skcipher(unaff_x27 + 0x80);
                    pcVar10 = *0x80004f0;
                    if (aiStack_ec[0] == 0) {
                        uVar6 = __list_add_valid(unaff_x27,*0x80004f0);
                        if ((uVar6 & 1) != 0) {
                            *0x80004f0 = unaff_x27;
                            unaff_x27[0] = -0x18;
                            unaff_x27[1] = '\x04';
                            unaff_x27[2] = '\0';
                            unaff_x27[3] = '\b';
                            unaff_x27[4] = '\0';
                            unaff_x27[5] = '\0';
                            unaff_x27[6] = '\0';
                            unaff_x27[7] = '\0';
                            *(unaff_x27 + 8) = pcVar10;
                            *pcVar10 = unaff_x27;
                        }
                        _dev_info(iVar15,0x80013d8,unaff_x27 + 0x1b8);
                    }
                    else {
                        _dev_err(iVar15,"",unaff_x27 + 0x1b8);
                        kfree_sensitive(unaff_x27);
                    }
                    goto code_r0x08008874;
                }
                pcVar10 = unaff_x27 + 0x138;
                uVar3 = strlen(pcVar10);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(pcVar10,uVar3);
                if (aiStack_ec[0] == 0) goto code_r0x08008790;
code_r0x08008844:
                _dev_err(iVar15,"",pcVar10);
                kfree(unaff_x27);
                goto code_r0x08008a3c;
            }
            goto code_r0x08008a38;
        }
code_r0x08008a34:
        unaff_x27 = 0xfffffffffffffff4;
    }
code_r0x08008a38:
    aiStack_ec[0] = unaff_x27;
code_r0x08008a3c:
    sym._qcrypto_remove_engine(pcVar5);
    kfree_sensitive(piStack_100);
code_r0x08008a4c:
    mutex_unlock(0x8000548);
code_r0x08008a58:
    if (*(pcVar5 + 0x10) != 0) {
        qce_close();
    }
code_r0x08008a64:
    icc_set_bw(*(pcVar5 + 0x28),0,0);
    *(arg1 + 0xa8) = 0;
    unaff_x19 = pcVar5;
code_r0x08008a78:
    uVar8 = ksize(unaff_x19);
    memset(unaff_x19,0,uVar8);
    kfree(unaff_x19);
    iVar4 = aiStack_ec[0];
code_r0x08008a9c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08008adc:
    _dev_err(iStack_f8,"",unaff_x27 + 0x438);
    kfree_sensitive(unaff_x27);
code_r0x08008af8:
    pcVar5 = unaff_x19;
    if (((*unaff_x24 != '\0') || (unaff_x24[1] != '\0')) || (cVar11 = '\0', unaff_x24[3] != '\0')) {
        iVar15 = 0;
        unaff_x24 = 0x2;
        do {
            pcVar10 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (pcVar10 == NULL) goto code_r0x08008e58;
            pcVar10[0x700] = '\x02';
            pcVar10[0x701] = '\0';
            pcVar10[0x702] = '\0';
            pcVar10[0x703] = '\0';
            memcpy(pcVar10 + 0x500,obj._qcrypto_aead_sha1_hmac_algos + iVar15,0x200);
            *(pcVar10 + 0x708) = unaff_x25;
            if (0xfffffffffffff000 < pcVar10) goto code_r0x08008e5c;
            if (*0x80004ce != '\0') {
                unaff_x27 = pcVar10 + 0x5b8;
                uVar3 = strlen(unaff_x27);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08008e64;
            }
            aiStack_ec[0] = crypto_register_aead(pcVar10 + 0x500);
            pcVar1 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(pcVar10,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = pcVar10;
                    pcVar10[0] = -0x18;
                    pcVar10[1] = '\x04';
                    pcVar10[2] = '\0';
                    pcVar10[3] = '\b';
                    pcVar10[4] = '\0';
                    pcVar10[5] = '\0';
                    pcVar10[6] = '\0';
                    pcVar10[7] = '\0';
                    *(pcVar10 + 8) = pcVar1;
                    *pcVar1 = pcVar10;
                }
                _dev_info(iStack_f8,0x80013d8,pcVar10 + 0x638);
            }
            else {
                _dev_err(iStack_f8,"",pcVar10 + 0x638);
                kfree(pcVar10);
            }
            iVar15 = iVar15 + 0x200;
        } while (iVar15 != 0x600);
        cVar11 = '\0';
        if (*0x80004c3 != '\0') {
            iVar15 = 0;
            unaff_x24 = 0x2;
            do {
                pcVar10 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
                if (pcVar10 == NULL) goto code_r0x08008e58;
                pcVar10[0x700] = '\x02';
                pcVar10[0x701] = '\0';
                pcVar10[0x702] = '\0';
                pcVar10[0x703] = '\0';
                memcpy(pcVar10 + 0x500,obj._qcrypto_aead_sha256_hmac_algos + iVar15,0x200);
                *(pcVar10 + 0x708) = unaff_x25;
                if (0xfffffffffffff000 < pcVar10) goto code_r0x08008e5c;
                if (*0x80004ce != '\0') {
                    unaff_x27 = pcVar10 + 0x5b8;
                    uVar3 = strlen(unaff_x27);
                    aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(unaff_x27,uVar3);
                    if (aiStack_ec[0] != 0) goto code_r0x08008e64;
                }
                aiStack_ec[0] = crypto_register_aead(pcVar10 + 0x500);
                pcVar1 = *0x80004f0;
                if (aiStack_ec[0] == 0) {
                    uVar6 = __list_add_valid(pcVar10,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = pcVar10;
                        pcVar10[0] = -0x18;
                        pcVar10[1] = '\x04';
                        pcVar10[2] = '\0';
                        pcVar10[3] = '\b';
                        pcVar10[4] = '\0';
                        pcVar10[5] = '\0';
                        pcVar10[6] = '\0';
                        pcVar10[7] = '\0';
                        *(pcVar10 + 8) = pcVar1;
                        *pcVar1 = pcVar10;
                    }
                    _dev_info(iStack_f8,0x80013d8,pcVar10 + 0x638);
                }
                else {
                    _dev_err(iStack_f8,"",pcVar10 + 0x638);
                    kfree(pcVar10);
                }
                iVar15 = iVar15 + 0x200;
                cVar11 = *0x80004c3;
            } while (iVar15 != 0x600);
        }
    }
    if (cVar11 == '\0' && _segment.ehdr == 0) {
code_r0x08008b20:
        arg1_00 = unaff_x25;
        if (*0x80004c7 == '\0') {
code_r0x0800914c:
            mutex_unlock(0x8000548);
            unaff_x25 = arg1_00;
            iVar4 = 0;
            goto code_r0x08008a9c;
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (0xfffffffffffff000 < unaff_x24) goto code_r0x08008e50;
        if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
            arg1_00 = unaff_x24 + 0x5b8;
            uVar3 = strlen(arg1_00);
            aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar3);
            if (aiStack_ec[0] != 0) goto code_r0x08009100;
        }
        aiStack_ec[0] = crypto_register_aead(unaff_x24 + 0x500);
        pcVar10 = *0x80004f0;
        if (aiStack_ec[0] == 0) {
            uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
            if ((uVar6 & 1) != 0) {
                *0x80004f0 = unaff_x24;
                unaff_x24[0] = -0x18;
                unaff_x24[1] = '\x04';
                unaff_x24[2] = '\0';
                unaff_x24[3] = '\b';
                unaff_x24[4] = '\0';
                unaff_x24[5] = '\0';
                unaff_x24[6] = '\0';
                unaff_x24[7] = '\0';
                *(unaff_x24 + 8) = pcVar10;
                *pcVar10 = unaff_x24;
            }
            _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x638);
        }
        else {
            _dev_err(iStack_f8,"",unaff_x24 + 0x638);
            kfree_sensitive(unaff_x24);
        }
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) goto code_r0x080090e4;
        unaff_x24[0x700] = '\x02';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x500,reloc._qcrypto_aead_rfc4309_ccm_setkey.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x200)
        ;
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            arg1_00 = unaff_x25;
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1_00 = unaff_x24 + 0x5b8;
                uVar3 = strlen(arg1_00);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar3);
                unaff_x25 = arg1_00;
                if (aiStack_ec[0] != 0) goto code_r0x08009100;
            }
            aiStack_ec[0] = crypto_register_aead(unaff_x24 + 0x500);
            pcVar5 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar5;
                    *pcVar5 = unaff_x24;
                }
                _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x638);
                unaff_x19 = pcVar5;
            }
            else {
                _dev_err(iStack_f8,"",unaff_x24 + 0x638);
                kfree(unaff_x24);
            }
            goto code_r0x0800914c;
        }
    }
    else {
        unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
        if (unaff_x24 == NULL) {
code_r0x080090e4:
            unaff_x24 = 0xfffffffffffffff4;
            aiStack_ec[0] = -0xc;
            goto code_r0x08008a3c;
        }
        unaff_x24[0x700] = '\x01';
        unaff_x24[0x701] = '\0';
        unaff_x24[0x702] = '\0';
        unaff_x24[0x703] = '\0';
        memcpy(unaff_x24 + 0x280,reloc._sha1_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
        *(unaff_x24 + 0x708) = unaff_x25;
        if (unaff_x24 < 0xfffffffffffff001) {
            if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                arg1_00 = unaff_x24 + 0x3b8;
                uVar3 = strlen(arg1_00);
                aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar3);
                if (aiStack_ec[0] != 0) goto code_r0x08009100;
            }
            aiStack_ec[0] = crypto_register_ahash(unaff_x24 + 0x280);
            pcVar10 = *0x80004f0;
            if (aiStack_ec[0] == 0) {
                uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                if ((uVar6 & 1) != 0) {
                    *0x80004f0 = unaff_x24;
                    unaff_x24[0] = -0x18;
                    unaff_x24[1] = '\x04';
                    unaff_x24[2] = '\0';
                    unaff_x24[3] = '\b';
                    unaff_x24[4] = '\0';
                    unaff_x24[5] = '\0';
                    unaff_x24[6] = '\0';
                    unaff_x24[7] = '\0';
                    *(unaff_x24 + 8) = pcVar10;
                    *pcVar10 = unaff_x24;
                }
                _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x438);
            }
            else {
                _dev_err(iStack_f8,"",unaff_x24 + 0x438);
                kfree_sensitive(unaff_x24);
            }
            unaff_x24 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x780);
            if (unaff_x24 == NULL) goto code_r0x080090e4;
            unaff_x24[0x700] = '\x01';
            unaff_x24[0x701] = '\0';
            unaff_x24[0x702] = '\0';
            unaff_x24[0x703] = '\0';
            memcpy(unaff_x24 + 0x280,reloc._sha256_hmac_init.efdd1d0348837140a5be4140d40c9b69.cfi_jt,0x280);
            *(unaff_x24 + 0x708) = unaff_x25;
            if (unaff_x24 < 0xfffffffffffff001) {
                if (reloc._qcrypto_resume.efdd1d0348837140a5be4140d40c9b69.cfi_jt != '\0') {
                    arg1_00 = unaff_x24 + 0x3b8;
                    uVar3 = strlen(arg1_00);
                    aiStack_ec[0] = sym._qcrypto_prefix_alg_cra_name(arg1_00,uVar3);
                    if (aiStack_ec[0] != 0) goto code_r0x08009100;
                }
                aiStack_ec[0] = crypto_register_ahash(unaff_x24 + 0x280);
                pcVar10 = *0x80004f0;
                if (aiStack_ec[0] == 0) {
                    uVar6 = __list_add_valid(unaff_x24,*0x80004f0);
                    if ((uVar6 & 1) != 0) {
                        *0x80004f0 = unaff_x24;
                        unaff_x24[0] = -0x18;
                        unaff_x24[1] = '\x04';
                        unaff_x24[2] = '\0';
                        unaff_x24[3] = '\b';
                        unaff_x24[4] = '\0';
                        unaff_x24[5] = '\0';
                        unaff_x24[6] = '\0';
                        unaff_x24[7] = '\0';
                        *(unaff_x24 + 8) = pcVar10;
                        *pcVar10 = unaff_x24;
                    }
                    _dev_info(iStack_f8,0x80013d8,unaff_x24 + 0x438);
                }
                else {
                    _dev_err(iStack_f8,"",unaff_x24 + 0x438);
                    kfree_sensitive(unaff_x24);
                }
                goto code_r0x08008b20;
            }
        }
    }
code_r0x08008e50:
    aiStack_ec[0] = unaff_x24;
    goto code_r0x08008a3c;
code_r0x08008e58:
    pcVar10 = 0xfffffffffffffff4;
code_r0x08008e5c:
    unaff_x24 = 0x2;
    aiStack_ec[0] = pcVar10;
    goto code_r0x08008a3c;
code_r0x08008e64:
    unaff_x24 = 0x2;
    _dev_err(iStack_f8,"",unaff_x27);
    kfree(pcVar10);
    goto code_r0x08008a3c;
code_r0x08009100:
    _dev_err(iStack_f8,"",arg1_00);
    kfree(unaff_x24);
    goto code_r0x08008a3c;
}


// ===== sym._qcrypto_remove @ 0x08009178 (size 104) =====

ulong sym._qcrypto_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        iVar1 = *(arg1_00 + 0x20) + 0x98;
        mutex_lock(iVar1);
        sym._qcrypto_remove_engine(arg1_00);
        mutex_unlock(iVar1);
        if (*(arg1_00 + 0x10) != 0) {
            qce_close();
        }
        kfree_sensitive(arg1_00);
    }
    return 0;
}


// ===== sym._qcrypto_suspend @ 0x080091e0 (size 312) =====

ulong sym._qcrypto_suspend(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 == 0) {
        return 0xffffffea;
    }
    if (*(*(arg1_00 + 0x20) + 0x23) != '\0') {
        iVar1 = *(arg1_00 + 0x20) + 0x34;
        uVar3 = _raw_spin_lock_irqsave(iVar1);
        if (*(arg1_00 + 0x70) == 1) {
            if (((0 < *(arg1_00 + 0x128)) || (*(arg1_00 + 0x48) != 0)) || (*(*(arg1_00 + 0x20) + 0xe8) != 0))
            goto code_r0x080092c4;
            *(arg1_00 + 0x70) = 5;
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            del_timer_sync(arg1_00 + 0x78);
            sym.qcrypto_ce_set_bus(arg1_00,0);
            uVar3 = _raw_spin_lock_irqsave(iVar1);
        }
        else if ((*(arg1_00 + 0x70) != 0) || (*(arg1_00 + 0x74) != '\0')) {
code_r0x080092c4:
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            return 0xfffffff0;
        }
        *(arg1_00 + 0x70) = 4;
        _raw_spin_unlock_irqrestore(iVar1,uVar3);
        if (__raw_spin_unlock_irqrestore != NULL) {
            sym.qcrypto_ce_set_bus(arg1_00,1);
            pcVar2 = __raw_spin_unlock_irqrestore;
            __cfi_slowpath_diag(0x641d19c7be126e92,__raw_spin_unlock_irqrestore,0x8000620);
            (*pcVar2)(*(arg1_00 + 0x10));
            sym.qcrypto_ce_set_bus(arg1_00,0);
        }
    }
    return 0;
}


// ===== sym._qcrypto_resume @ 0x0800931c (size 324) =====

uint sym._qcrypto_resume(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        iVar5 = *(arg1_00 + 0x20);
        if (*(iVar5 + 0x23) == '\0') {
            uVar4 = 0;
        }
        else {
            iVar1 = iVar5 + 0x34;
            uVar3 = _raw_spin_lock_irqsave(iVar1);
            if (*(arg1_00 + 0x70) == 4) {
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                if (__raw_spin_unlock_irqrestore != NULL) {
                    sym.qcrypto_ce_set_bus(arg1_00,1);
                    pcVar2 = __raw_spin_unlock_irqrestore;
                    __cfi_slowpath_diag(0x641d19c7be126e92,__raw_spin_unlock_irqrestore,0x8000640);
                    (*pcVar2)(*(arg1_00 + 0x10));
                    sym.qcrypto_ce_set_bus(arg1_00,0);
                }
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                *(arg1_00 + 0x70) = 0;
                *(arg1_00 + 0x118) = 0;
                *(arg1_00 + 0x110) = *(arg1_00 + 0x110) + 1;
                if (((*(iVar5 + 0xe8) == 0) && (*(arg1_00 + 0x48) == 0)) || (*(arg1_00 + 0x74) != '\0')) {
                    uVar4 = 0;
                }
                else {
                    queue_work_on(0x20,___cfi_slowpath_diag,arg1_00 + 0xe0);
                    uVar4 = 0;
                    *(arg1_00 + 0x74) = 1;
                }
            }
            else {
                uVar4 = 0xfffffff0;
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
        }
    }
    return uVar4;
}


// ===== sym.qcrypto_bw_reaper_timer_callback @ 0x08009460 (size 52) =====

void sym.qcrypto_bw_reaper_timer_callback(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_work_on(0x20,___cfi_slowpath_diag,arg1 + 0x38);
    return;
}


// ===== sym.qcrypto_bw_reaper_work @ 0x08009494 (size 368) =====

void sym.qcrypto_bw_reaper_work(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_01 = *(arg1 + -0x90);
    arg1_00 = arg1 + -0xb0;
    iVar1 = arg1_01 + 0x34;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    iVar2 = *(arg1 + 0x60);
    if ((*(arg1 + -0x40) == 1) && (iVar2 == *(arg1 + 100))) {
        if (*(arg1 + 0x78) < 1) {
            *(arg1 + -0x40) = 2;
            _raw_spin_unlock_irqrestore(iVar1,uVar3);
            sym.qcrypto_ce_set_bus(arg1_00,0);
            uVar3 = _raw_spin_lock_irqsave(iVar1);
            if (*(arg1 + -0x3c) != '\0') {
                *(arg1 + -0x40) = 3;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                sym.qcrypto_ce_set_bus(arg1_00,1);
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                *(arg1 + -0x40) = 1;
                *(arg1 + -0x3c) = 0;
                *(arg1 + 100) = iVar2;
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                sym._start_qcrypto_process(arg1_01,arg1_00);
                iVar2 = *(arg1 + -0x40);
                goto joined_r0x08009518;
            }
            *(arg1 + -0x40) = 0;
        }
        else {
            if (*(arg1 + 0x68) != '\0') {
                _dev_warn(*(arg1 + -0x98) + 0x10,"",iVar2);
            }
            *(arg1 + 0x68) = 0;
        }
    }
    *(arg1 + 100) = iVar2;
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
    iVar2 = *(arg1 + -0x40);
joined_r0x08009518:
    if (iVar2 != 0) {
        *(arg1 + -0x28) = _qce_get_driver_stats + 0xfa;
        mod_timer(arg1 + -0x38);
    }
    return;
}


// ===== sym.qcrypto_bw_allocate_work @ 0x08009608 (size 196) =====

void sym.qcrypto_bw_allocate_work(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + -0xc0);
    iVar1 = arg1_00 + 0x34;
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(arg1 + -0x70) = 3;
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    sym.qcrypto_ce_set_bus(arg1 + -0xe0,1);
    *(arg1 + -0x58) = _qce_get_driver_stats + 0xfa;
    mod_timer(arg1 + -0x68);
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    *(arg1 + -0x70) = 1;
    *(arg1 + -0x6c) = 0;
    *(arg1 + 0x38) = 1;
    *(arg1 + 0x30) = *(arg1 + 0x30) + 1;
    _raw_spin_unlock_irqrestore(iVar1,uVar2);
    sym._start_qcrypto_process(arg1_00,arg1 + -0xe0);
    return;
}


// ===== sym._qcrypto_prefix_alg_cra_name @ 0x080096cc (size 224) =====

void sym._qcrypto_prefix_alg_cra_name(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_a8;
    ulong uStack_a4;
    ulong uStack_9c;
    ulong uStack_94;
    ulong uStack_8c;
    ulong uStack_84;
    ulong uStack_7c;
    ulong uStack_74;
    ulong uStack_6c;
    ulong uStack_64;
    ulong uStack_5c;
    ulong uStack_54;
    ulong uStack_4c;
    ulong uStack_44;
    ulong uStack_3c;
    ulong uStack_34;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_a8 = 0x6d6f6371;
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_6c = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_a4 = 0x2d;
    if (arg2 < 0x7b) {
        strlcat(&uStack_a8,arg1,0x80);
        strlcpy(arg1,&uStack_a8,0x80);
        uVar3 = 0;
    }
    else {
        uVar3 = 0xffffffea;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return;
    }
    piVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym._qcrypto_remove_engine;
    iVar8 = piVar4[4];
    uVar3 = _raw_spin_lock_irqsave(iVar8 + 0x34);
    uVar5 = __list_del_entry_valid(piVar4);
    if ((uVar5 & 1) != 0) {
        iVar6 = *piVar4;
        piVar7 = piVar4[1];
        *(iVar6 + 8) = piVar7;
        *piVar7 = iVar6;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    if (*(piVar4 + 0x12d) != '\0') {
        iVar6 = *(iVar8 + 0x80);
        *(iVar8 + 0x148) = 0;
        if (iVar6 != 0) {
            *(iVar6 + 0x12d) = 1;
            *(iVar8 + 0x148) = iVar6;
        }
    }
    if (*(iVar8 + 200) == piVar4) {
        *(iVar8 + 200) = 0;
    }
    if (*(iVar8 + 0x150) == piVar4) {
        *(iVar8 + 0x150) = 0;
    }
    _raw_spin_unlock_irqrestore(iVar8 + 0x34,uVar3);
    *(iVar8 + 0x90) = *(iVar8 + 0x90) + -1;
    cancel_work_sync(piVar4 + 0x16);
    cancel_work_sync(piVar4 + 0x1c);
    del_timer_sync(piVar4 + 0xf);
    if (piVar4[5] != 0) {
        icc_put();
    }
    piVar4[5] = 0;
    kfree_sensitive(piVar4[0x24]);
    if (*(iVar8 + 0x90) == 0) {
        piVar4 = *(iVar8 + 0x38);
        while (piVar4 != iVar8 + 0x38) {
            iVar2 = piVar4[0xe0];
            piVar7 = *piVar4;
            if (iVar2 == 0) {
                crypto_unregister_skcipher(piVar4 + 0x10);
                iVar2 = piVar4[0xe0];
            }
            if (iVar2 == 1) {
                crypto_unregister_ahash(piVar4 + 0x50);
                iVar2 = piVar4[0xe0];
            }
            if (iVar2 == 2) {
                crypto_unregister_aead(piVar4 + 0xa0);
            }
            uVar5 = __list_del_entry_valid(piVar4);
            if ((uVar5 & 1) != 0) {
                iVar6 = *piVar4;
                piVar1 = piVar4[1];
                *(iVar6 + 8) = piVar1;
                *piVar1 = iVar6;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree_sensitive(piVar4);
            piVar4 = piVar7;
        }
    }
    return;
}


// ===== sym._qcrypto_remove_engine @ 0x080097ac (size 416) =====

void sym._qcrypto_remove_engine(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = *(arg1 + 0x20);
    uVar4 = _raw_spin_lock_irqsave(iVar8 + 0x34);
    uVar5 = __list_del_entry_valid(arg1);
    if ((uVar5 & 1) != 0) {
        iVar6 = *arg1;
        piVar1 = *(arg1 + 8);
        *(iVar6 + 8) = piVar1;
        *piVar1 = iVar6;
    }
    *arg1 = 0xdead000000000100;
    *(arg1 + 8) = 0xdead000000000122;
    if (*(arg1 + 0x12d) != '\0') {
        iVar6 = *(iVar8 + 0x80);
        *(iVar8 + 0x148) = 0;
        if (iVar6 != 0) {
            *(iVar6 + 0x12d) = 1;
            *(iVar8 + 0x148) = iVar6;
        }
    }
    if (*(iVar8 + 200) == arg1) {
        *(iVar8 + 200) = 0;
    }
    if (*(iVar8 + 0x150) == arg1) {
        *(iVar8 + 0x150) = 0;
    }
    _raw_spin_unlock_irqrestore(iVar8 + 0x34,uVar4);
    *(iVar8 + 0x90) = *(iVar8 + 0x90) + -1;
    cancel_work_sync(arg1 + 0xb0);
    cancel_work_sync(arg1 + 0xe0);
    del_timer_sync(arg1 + 0x78);
    if (*(arg1 + 0x28) != 0) {
        icc_put();
    }
    *(arg1 + 0x28) = 0;
    kfree_sensitive(*(arg1 + 0x120));
    if (*(iVar8 + 0x90) == 0) {
        piVar1 = *(iVar8 + 0x38);
        while (piVar1 != iVar8 + 0x38) {
            iVar3 = piVar1[0xe0];
            piVar7 = *piVar1;
            if (iVar3 == 0) {
                crypto_unregister_skcipher(piVar1 + 0x10);
                iVar3 = piVar1[0xe0];
            }
            if (iVar3 == 1) {
                crypto_unregister_ahash(piVar1 + 0x50);
                iVar3 = piVar1[0xe0];
            }
            if (iVar3 == 2) {
                crypto_unregister_aead(piVar1 + 0xa0);
            }
            uVar5 = __list_del_entry_valid(piVar1);
            if ((uVar5 & 1) != 0) {
                iVar6 = *piVar1;
                piVar2 = piVar1[1];
                *(iVar6 + 8) = piVar2;
                *piVar2 = iVar6;
            }
            *piVar1 = -0x2152ffffffffff00;
            piVar1[1] = -0x2152fffffffffede;
            kfree_sensitive(piVar1);
            piVar1 = piVar7;
        }
    }
    return;
}


// ===== sym.qcrypto_ce_set_bus @ 0x0800994c (size 476) =====

void sym.qcrypto_ce_set_bus(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    int iVar2;
    ulong uVar3;
    uint uVar4;
    uint uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bVar1 = (arg2 & 1) == 0;
    uVar4 = 2;
    if (bVar1) {
        uVar4 = 3;
    }
    uVar5 = 4;
    if (!bVar1) {
        uVar5 = 1;
    }
    if (*(*(arg1 + 0x20) + 0x24) != '\0') {
        uVar5 = uVar4;
    }
    //switch table (4 cases) at 0x8000690
    switch(uVar5) {
    case 1:
    case 2:
    case 3:
    case 4:
        iVar2 = qce_enable_clk(*(arg1 + 0x10));
        if (iVar2 == 0) {
            iVar2 = icc_set_bw(*(arg1 + 0x28),0x180,0x180);
            if (iVar2 == 0) {
                return;
            }
            _printk(0x8000851,"");
            iVar2 = qce_disable_clk(*(arg1 + 0x10));
            if (iVar2 == 0) {
                return;
            }
            uVar3 = 0x800119c;
        }
        else {
            uVar3 = 0x8000d8c;
        }
        _printk(uVar3,"");
    }
    return;
}


// ===== sym._qcrypto_setkey_aes @ 0x08009b28 (size 200) =====

ulong sym._qcrypto_setkey_aes(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    ulong uVar1;
    int64_t in_x1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x120) & 1) == 0) {
        if ((arg2 != 0x10) && (arg2 != 0x20)) {
            if (arg2 != 0x18) {
                return 0xffffffea;
            }
            if (*(*(arg1 + 0x118) + 0x15) == '\0') {
                iVar2 = *(arg1 + 0x1c8);
                if (iVar2 == 0) {
                    return 0xffffffea;
                }
                *(arg1 + 0x1b8) = 0x18;
                *(iVar2 + 0x80) = *(iVar2 + 0x80) & 0xfff000ff;
                *(*(arg1 + 0x1c8) + 0x80) = *(*(arg1 + 0x1c8) + 0x80) | *(arg1 + 0x80) & 0xfff00;
                uVar1 = crypto_skcipher_setkey(*(arg1 + 0x1c8),in_x1,0x18);
                return uVar1;
            }
        }
        *(arg1 + 0x1b8) = arg2;
        if ((*(arg1 + 0x120) >> 1 & 1) == 0) {
            if (in_x1 == 0) {
                _printk(0x8001252,"");
                return 0xffffffea;
            }
            memcpy(arg1 + 0x178,in_x1,arg2);
        }
    }
    return 0;
}


// ===== sym._qcrypto_enc_aes_ecb @ 0x08009bf0 (size 332) =====

uint sym._qcrypto_enc_aes_ecb(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x40);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009d34);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 2;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg1 + 0x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_ecb;
    pcStack_2a8 = sym._qcrypto_dec_aes_ecb;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009e84);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 0x100000002;
        puVar4[0x42] = 1;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        puVar4 = __stack_chk_fail();
        *extraout_x18_00 = sym._qcrypto_aes_skcipher_init;
        iVar3 = *(puVar4 + 0x24);
        if (*0x80004cd == '\0') {
            uVar5 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
            *(puVar4 + 0x72) = uVar5;
            if (0xfffffffffffff000 < uVar5) {
                _printk(0x800086d,iVar3 + 0x38);
                uVar2 = puVar4[0x72];
                *(puVar4 + 0x72) = 0;
                return uVar2;
            }
            iVar3 = *(puVar4 + 0x24);
        }
        else {
            *(puVar4 + 0x72) = 0;
        }
        *puVar4 = 0x1c8;
        if (iVar3 == 0x100) {
            _printk(0x80008d5);
            uVar2 = 0xffffffea;
        }
        else {
            puVar4[0x48] = 0;
            *(puVar4 + 0x46) = *(iVar3 + 0x608);
            get_random_bytes(puVar4 + 0x5a,0x10);
            uVar2 = 0;
            *(puVar4 + 0x44) = 0;
            *(puVar4 + 0x40) = puVar4 + 0x40;
            *(puVar4 + 0x42) = puVar4 + 0x40;
            puVar4[0x49] = 5;
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_ecb @ 0x08009d3c (size 336) =====

uint sym._qcrypto_dec_aes_ecb(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x40);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x8009e84);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0x100000002;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg1 + 0x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        puVar4 = __stack_chk_fail();
        *extraout_x18 = sym._qcrypto_aes_skcipher_init;
        iVar3 = *(puVar4 + 0x24);
        if (*0x80004cd == '\0') {
            uVar5 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
            *(puVar4 + 0x72) = uVar5;
            if (0xfffffffffffff000 < uVar5) {
                _printk(0x800086d,iVar3 + 0x38);
                uVar2 = puVar4[0x72];
                *(puVar4 + 0x72) = 0;
                return uVar2;
            }
            iVar3 = *(puVar4 + 0x24);
        }
        else {
            *(puVar4 + 0x72) = 0;
        }
        *puVar4 = 0x1c8;
        if (iVar3 == 0x100) {
            _printk(0x80008d5);
            uVar2 = 0xffffffea;
        }
        else {
            puVar4[0x48] = 0;
            *(puVar4 + 0x46) = *(iVar3 + 0x608);
            get_random_bytes(puVar4 + 0x5a,0x10);
            uVar2 = 0;
            *(puVar4 + 0x44) = 0;
            *(puVar4 + 0x40) = puVar4 + 0x40;
            *(puVar4 + 0x42) = puVar4 + 0x40;
            puVar4[0x49] = 5;
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym._qcrypto_aes_skcipher_init @ 0x08009e8c (size 232) =====

uint sym._qcrypto_aes_skcipher_init(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x90);
    if (*0x80004cd == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(iVar3 + 0x38,0,0x180);
        *(arg1 + 0x1c8) = uVar2;
        if (0xfffffffffffff000 < uVar2) {
            _printk(0x800086d,iVar3 + 0x38);
            uVar1 = *(arg1 + 0x1c8);
            *(arg1 + 0x1c8) = 0;
            return uVar1;
        }
        iVar3 = *(arg1 + 0x90);
    }
    else {
        *(arg1 + 0x1c8) = 0;
    }
    *arg1 = 0x1c8;
    if (iVar3 == 0x100) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(iVar3 + 0x608);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar1 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = arg1 + 0x100;
        *(arg1 + 0x108) = arg1 + 0x100;
        *(arg1 + 0x124) = 5;
    }
    return uVar1;
}


// ===== sym._qcrypto_aes_skcipher_exit @ 0x08009f74 (size 104) =====

void sym._qcrypto_aes_skcipher_exit(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x100) == arg1 + 0x100) {
        iVar1 = *(arg1 + 0x1c8);
    }
    else {
        _printk(0x8000da4);
        iVar1 = *(arg1 + 0x1c8);
    }
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    *(arg1 + 0x1c8) = 0;
    return;
}


// ===== sym._qcrypto_enc_aes_cbc @ 0x08009fe0 (size 328) =====

uint sym._qcrypto_enc_aes_cbc(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_a00 [2];
    ulong uStack_9f8;
    ulong uStack_9f0;
    ulong uStack_9e8;
    ulong uStack_9d0;
    ulong uStack_9c8;
    int64_t iStack_9c0;
    uint uStack_9b8;
    int64_t iStack_7b8;
    uchar *puStack_7b0;
    code *pcStack_7a8;
    uint auStack_780 [2];
    ulong uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    ulong uStack_750;
    ulong uStack_748;
    int64_t iStack_740;
    uint uStack_738;
    int64_t iStack_538;
    uchar *puStack_530;
    code *pcStack_528;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x40);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a120);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x100) = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg1 + 0x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_cbc;
    pcStack_2a8 = sym._qcrypto_dec_aes_cbc;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a26c);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        puVar4[0x42] = 0;
        *(puVar4 + 0x40) = 0x100000002;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_2b8) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_00 = sym._qcrypto_enc_aes_ctr;
    pcStack_528 = sym._qcrypto_enc_aes_ctr;
    iVar3 = sp_el0;
    iStack_538 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        puStack_530 = &puStack_2b0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_530 = &puStack_2b0;
        memset(auStack_780,0,0x200);
        uStack_738 = puVar4[0x12];
        uStack_750 = 0;
        uStack_748 = 0;
        uStack_768 = *(puVar4 + 6);
        auStack_780[0] = *puVar4;
        iStack_740 = *(iVar3 + 0x148) + 0x80;
        uStack_778 = *(puVar4 + 2);
        uStack_770 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_780);
        memset(auStack_780,0,*(iStack_740 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_530 = &puStack_2b0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_538) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18_01 = sym._qcrypto_dec_aes_ctr;
    pcStack_7a8 = sym._qcrypto_dec_aes_ctr;
    iVar3 = sp_el0;
    iStack_7b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        puStack_7b0 = &puStack_530;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_7b0 = &puStack_530;
        memset(auStack_a00,0,0x200);
        uStack_9b8 = puVar4[0x12];
        uStack_9d0 = 0;
        uStack_9c8 = 0;
        uStack_9e8 = *(puVar4 + 6);
        auStack_a00[0] = *puVar4;
        iStack_9c0 = *(iVar3 + 0x148) + 0x80;
        uStack_9f8 = *(puVar4 + 2);
        uStack_9f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_a00);
        iVar5 = *(iStack_9c0 + -0x80) + 0x80;
        memset(auStack_a00,0);
    }
    else {
        puVar4[0x33] = 0;
        arg3 = puVar4 + 8;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_7b0 = &puStack_530;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
        iVar5 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_7b8) {
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_02 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_cbc @ 0x0800a128 (size 332) =====

uint sym._qcrypto_dec_aes_cbc(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_780 [2];
    ulong uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    ulong uStack_750;
    ulong uStack_748;
    int64_t iStack_740;
    uint uStack_738;
    int64_t iStack_538;
    uchar *puStack_530;
    code *pcStack_528;
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x40);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a26c);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x100) = 0x100000002;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg1 + 0x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_enc_aes_ctr;
    pcStack_2a8 = sym._qcrypto_enc_aes_ctr;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_encrypt(auStack_500);
        memset(auStack_500,0,*(iStack_4c0 + -0x80) + 0x80);
    }
    else {
        puVar4[0x33] = 0;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),puVar4 + 8);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        puVar4 = __stack_chk_fail();
        *extraout_x18_00 = sym._qcrypto_dec_aes_ctr;
        pcStack_528 = sym._qcrypto_dec_aes_ctr;
        iVar3 = sp_el0;
        iStack_538 = *(iVar3 + 0x5e0);
        iVar6 = *(puVar4 + 0x10);
        iVar3 = *(iVar6 + 0x98);
        if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
            puStack_530 = &puStack_2b0;
            (*pcVar1)();
        }
        if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
            iVar3 = *(puVar4 + 0x10);
            puStack_530 = &puStack_2b0;
            memset(auStack_780,0,0x200);
            uStack_738 = puVar4[0x12];
            uStack_750 = 0;
            uStack_748 = 0;
            uStack_768 = *(puVar4 + 6);
            auStack_780[0] = *puVar4;
            iStack_740 = *(iVar3 + 0x148) + 0x80;
            uStack_778 = *(puVar4 + 2);
            uStack_770 = *(puVar4 + 4);
            uVar2 = crypto_skcipher_decrypt(auStack_780);
            iVar5 = *(iStack_740 + -0x80) + 0x80;
            memset(auStack_780,0);
        }
        else {
            puVar4[0x33] = 0;
            arg3 = puVar4 + 8;
            *(puVar4 + 0x40) = 2;
            puVar4[0x42] = 2;
            *0x8001000 = *0x8001000 + 1;
            puStack_530 = &puStack_2b0;
            uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
            iVar5 = arg3;
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_538) {
            return uVar2;
        }
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_01 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_enc_aes_ctr @ 0x0800a274 (size 328) =====

uint sym._qcrypto_enc_aes_ctr(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    uint *puVar4;
    int iVar5;
    uint *arg3;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint auStack_500 [2];
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    int64_t iStack_4c0;
    uint uStack_4b8;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    code *pcStack_2a8;
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar6 = *(arg1 + 0x40);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a3b4);
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_encrypt(auStack_280);
        memset(auStack_280,0,*(iStack_240 + -0x80) + 0x80);
    }
    else {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 2;
        *(arg1 + 0x108) = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg1 + 0x20);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    puVar4 = __stack_chk_fail();
    *extraout_x18 = sym._qcrypto_dec_aes_ctr;
    pcStack_2a8 = sym._qcrypto_dec_aes_ctr;
    iVar3 = sp_el0;
    iStack_2b8 = *(iVar3 + 0x5e0);
    iVar6 = *(puVar4 + 0x10);
    iVar3 = *(iVar6 + 0x98);
    if ((*(*(iVar6 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        puStack_2b0 = &stack0xffffffffffffffd0;
        (*pcVar1)();
    }
    if (((*(iVar6 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar6 + 0x148) != 0)) {
        iVar3 = *(puVar4 + 0x10);
        puStack_2b0 = &stack0xffffffffffffffd0;
        memset(auStack_500,0,0x200);
        uStack_4b8 = puVar4[0x12];
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4e8 = *(puVar4 + 6);
        auStack_500[0] = *puVar4;
        iStack_4c0 = *(iVar3 + 0x148) + 0x80;
        uStack_4f8 = *(puVar4 + 2);
        uStack_4f0 = *(puVar4 + 4);
        uVar2 = crypto_skcipher_decrypt(auStack_500);
        iVar5 = *(iStack_4c0 + -0x80) + 0x80;
        memset(auStack_500,0);
    }
    else {
        puVar4[0x33] = 0;
        arg3 = puVar4 + 8;
        *(puVar4 + 0x40) = 2;
        puVar4[0x42] = 2;
        *0x8001000 = *0x8001000 + 1;
        puStack_2b0 = &stack0xffffffffffffffd0;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar6 + 0x90),arg3);
        iVar5 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_2b8) {
        auVar7 = __stack_chk_fail();
        iVar3 = auVar7._0_8_;
        *extraout_x18_00 = sym._qcrypto_setkey_des;
        if (auVar7._8_8_ == NULL) {
            _printk(0x8001252,"");
            return 0xffffffea;
        }
        if ((*(iVar3 + 0x120) & 1) == 0) {
            if (iVar5 != 8) {
                return 0xffffffea;
            }
            *(iVar3 + 0x1b8) = 8;
            if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
                *(iVar3 + 0x178) = *auVar7._8_8_;
                return 0;
            }
        }
        else {
            _printk(0x800140b,"");
        }
        return 0;
    }
    return uVar2;
}


// ===== sym._qcrypto_dec_aes_ctr @ 0x0800a3bc (size 328) =====

uint sym._qcrypto_dec_aes_ctr(int64_t arg1)

{
    code *pcVar1;
    uint uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t arg3;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint auStack_280 [2];
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_250;
    ulong uStack_248;
    int64_t iStack_240;
    uint uStack_238;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar5 = *(arg1 + 0x40);
    iVar3 = *(iVar5 + 0x98);
    if ((*(*(iVar5 + 0x10) + 0x20) & 0xf) != 5) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x800a4fc);
        (*pcVar1)();
    }
    if (((*(iVar5 + 0x138) == 0x18) && (*(iVar3 + 0x15) == '\0')) && (*(iVar5 + 0x148) != 0)) {
        iVar3 = *(arg1 + 0x40);
        memset(auStack_280,0,0x200);
        uStack_238 = *(arg1 + 0x48);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_268 = *(arg1 + 0x18);
        auStack_280[0] = *arg1;
        iStack_240 = *(iVar3 + 0x148) + 0x80;
        uStack_278 = *(arg1 + 8);
        uStack_270 = *(arg1 + 0x10);
        uVar2 = crypto_skcipher_decrypt(auStack_280);
        iVar4 = *(iStack_240 + -0x80) + 0x80;
        memset(auStack_280,0);
    }
    else {
        *(arg1 + 0xcc) = 0;
        arg3 = arg1 + 0x20;
        *(arg1 + 0x100) = 2;
        *(arg1 + 0x108) = 2;
        *0x8001000 = *0x8001000 + 1;
        uVar2 = sym._qcrypto_queue_req(iVar3,*(iVar5 + 0x90),arg3);
        iVar4 = arg3;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar6 = __stack_chk_fail();
    iVar3 = auVar6._0_8_;
    *extraout_x18 = sym._qcrypto_setkey_des;
    if (auVar6._8_8_ == NULL) {
        _printk(0x8001252,"");
        return 0xffffffea;
    }
    if ((*(iVar3 + 0x120) & 1) == 0) {
        if (iVar4 != 8) {
            return 0xffffffea;
        }
        *(iVar3 + 0x1b8) = 8;
        if ((*(iVar3 + 0x120) >> 1 & 1) == 0) {
            *(iVar3 + 0x178) = *auVar6._8_8_;
            return 0;
        }
    }
    else {
        _printk(0x800140b,"");
    }
    return 0;
}


// ===== sym._qcrypto_setkey_des @ 0x0800a504 (size 144) =====

uint sym._qcrypto_setkey_des(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        _printk(0x8001252,"");
        return 0xffffffea;
    }
    if ((*(arg1 + 0x120) & 1) == 0) {
        if (arg3 != 8) {
            return 0xffffffea;
        }
        *(arg1 + 0x1b8) = 8;
        if ((*(arg1 + 0x120) >> 1 & 1) == 0) {
            *(arg1 + 0x178) = *arg2;
            return 0;
        }
    }
    else {
        _printk(0x800140b,"");
    }
    return 0;
}


// ===== sym._qcrypto_enc_des_ecb @ 0x0800a594 (size 112) =====

void sym._qcrypto_enc_des_ecb(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a604);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_des_ecb @ 0x0800a608 (size 116) =====

void sym._qcrypto_dec_des_ecb(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0x100000000;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a67c);
    (*pcVar1)();
}


// ===== sym._qcrypto_skcipher_init @ 0x0800a680 (size 140) =====

ulong sym._qcrypto_skcipher_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x100;
    *arg1 = 0x1c8;
    if ((iVar1 == 0) || (*(arg1 + 0x90) == 0x100)) {
        _printk(0x80008d5);
        uVar2 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x608);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar2 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = iVar1;
        *(arg1 + 0x108) = iVar1;
        *(arg1 + 0x124) = 5;
    }
    return uVar2;
}


// ===== sym._qcrypto_skcipher_exit @ 0x0800a70c (size 64) =====

void sym._qcrypto_skcipher_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x100) != arg1 + 0x100) {
        _printk(0x8000da4);
    }
    return;
}


// ===== sym._qcrypto_enc_des_cbc @ 0x0800a750 (size 108) =====

void sym._qcrypto_enc_des_cbc(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0;
        *(arg1 + 0x108) = 0;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a7bc);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_des_cbc @ 0x0800a7c0 (size 112) =====

void sym._qcrypto_dec_des_cbc(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x100) = 0x100000000;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a830);
    (*pcVar1)();
}


// ===== sym._qcrypto_setkey_3des @ 0x0800a834 (size 152) =====

ulong sym._qcrypto_setkey_3des(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x120) & 1) != 0) {
        _printk(0x8000ccd,"");
        return 0;
    }
    if (arg3 == 0x18) {
        *(arg1 + 0x1b8) = 0x18;
        if ((*(arg1 + 0x120) >> 1 & 1) != 0) {
            return 0;
        }
        if (arg2 != 0) {
            uVar1 = *(arg2 + 0x10);
            uVar2 = *arg2;
            *(arg1 + 0x180) = *(arg2 + 8);
            *(arg1 + 0x188) = uVar1;
            *(arg1 + 0x178) = uVar2;
            return 0;
        }
        _printk(0x8001252,"");
    }
    return 0xffffffea;
}


// ===== sym._qcrypto_enc_3des_ecb @ 0x0800a8cc (size 112) =====

void sym._qcrypto_enc_3des_ecb(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 1;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a93c);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_3des_ecb @ 0x0800a940 (size 116) =====

void sym._qcrypto_dec_3des_ecb(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0x100000001;
        *(arg1 + 0x108) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800a9b4);
    (*pcVar1)();
}


// ===== sym._qcrypto_enc_3des_cbc @ 0x0800a9b8 (size 112) =====

void sym._qcrypto_enc_3des_cbc(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x100) = 1;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800aa28);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_3des_cbc @ 0x0800aa2c (size 112) =====

void sym._qcrypto_dec_3des_cbc(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x108) = 0;
        *(arg1 + 0x100) = 0x100000001;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800aa9c);
    (*pcVar1)();
}


// ===== sym._qcrypto_queue_req @ 0x0800aaa0 (size 448) =====

uint sym._qcrypto_queue_req(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x34;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (arg2 == 0) {
        uVar3 = crypto_enqueue_request(arg1 + 0xd0,arg3);
        piVar2 = arg1 + 0x80;
        if (piVar2 == *piVar2) {
            _printk(0x80011f7,"");
            arg2 = 0;
        }
        else {
            if ((*(arg1 + 0x150) == NULL) || (piVar5 = **(arg1 + 0x150), piVar5 == piVar2)) {
                piVar5 = *(arg1 + 0x80);
            }
            iVar6 = *(arg1 + 0x90) + 1;
            arg2 = piVar5;
            do {
                iVar6 = iVar6 + -1;
                if (iVar6 < 1) break;
                if ((*(arg2 + 300) == '\0') && (*(arg2 + 0x128) < *(arg2 + 0x11c))) goto code_r0x0800ab84;
                if ((arg2 == NULL) || (arg2 = *arg2, arg2 == piVar2)) {
                    arg2 = *(arg1 + 0x80);
                }
            } while (piVar5 != arg2);
            arg2 = 0;
code_r0x0800ab84:
            *(arg1 + 0x150) = arg2;
        }
        if (*(arg1 + 0x164) < *(arg1 + 0xe8)) {
            *(arg1 + 0x164) = *(arg1 + 0xe8);
        }
        if (arg2 == NULL) {
            *(arg1 + 0x158) = *(arg1 + 0x158) + 1;
            goto code_r0x0800ac18;
        }
    }
    else {
        uVar3 = crypto_enqueue_request(arg2 + 0x30,arg3);
    }
    iVar6 = *(arg2 + 0x70);
    if (iVar6 != 2) {
        if (iVar6 == 1) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            if (*(arg1 + 0x13c) != 1) {
                return uVar3;
            }
            sym._start_qcrypto_process(arg1,arg2);
            return uVar3;
        }
        if ((iVar6 != 0) || (*(arg2 + 0x74) != '\0')) goto code_r0x0800ac18;
        queue_work_on(0x20,___cfi_slowpath_diag,arg2 + 0xe0);
    }
    *(arg2 + 0x74) = 1;
code_r0x0800ac18:
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return uVar3;
}


// ===== sym._qcrypto_setkey_aes_xts @ 0x0800ac6c (size 136) =====

ulong sym._qcrypto_setkey_aes_xts(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x1;
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x120) & 1) == 0) {
        uVar1 = arg2 >> 1 & 0x7fffffff;
        if (((uVar1 != 0x10) && (uVar1 != 0x20)) && ((uVar1 != 0x18 || (*(*(arg1 + 0x118) + 0x15) == '\0')))) {
            return 0xffffffea;
        }
        *(arg1 + 0x1b8) = arg2;
        if ((*(arg1 + 0x120) >> 1 & 1) == 0) {
            if (in_x1 == 0) {
                _printk(0x8001252,"");
                return 0xffffffea;
            }
            memcpy(arg1 + 0x178,in_x1,arg2 & 0xffffffff);
        }
    }
    return 0;
}


// ===== sym._qcrypto_enc_aes_xts @ 0x0800acf4 (size 116) =====

void sym._qcrypto_enc_aes_xts(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 2;
        *(arg1 + 0x108) = 3;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800ad68);
    (*pcVar1)();
}


// ===== sym._qcrypto_dec_aes_xts @ 0x0800ad6c (size 120) =====

void sym._qcrypto_dec_aes_xts(int64_t arg1)

{
    code *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x40);
    arg1_00 = *(iVar2 + 0x98);
    if ((*(*(iVar2 + 0x10) + 0x20) & 0xf) == 5) {
        *(arg1 + 0xcc) = 0;
        *(arg1 + 0x100) = 0x100000002;
        *(arg1 + 0x108) = 3;
        *0x8001000 = *0x8001000 + 1;
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1 + 0x20);
        return;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x800ade4);
    (*pcVar1)();
}


// ===== sym._sha1_init @ 0x0800ade8 (size 160) =====

ulong sym._sha1_init(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x110) = 1;
    iVar3 = *(arg1 + 0x20);
    *(arg1 + 0x108) = 0;
    *(iVar3 + 0xa4) = 0;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x14a) = 0;
    *(arg1 + 0x142) = 0;
    *(arg1 + 0x132) = 0;
    *(arg1 + 0x12a) = 0;
    uVar2 = *0x8004108;
    uVar1 = _obj._std_init_vector_sha1_uint8;
    *(arg1 + 0x208) = 0xf0e1d2c3;
    *(arg1 + 0x122) = 0;
    *(arg1 + 0x1f8) = uVar1;
    *(arg1 + 0x200) = uVar2;
    *(arg1 + 0x11a) = 0;
    *(arg1 + 0x112) = 0;
    *(iVar3 + 0xa8) = 0x14;
    *0x8001000 = *0x8001000 + 1;
    return 0;
}


// ===== sym._sha1_update @ 0x0800ae88 (size 104) =====

ulong sym._sha1_update(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(arg1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        *(arg1 + 0x108) = *(arg1 + 0x108) + *(arg1 + 0x30);
        uVar2 = sym._sha_update(arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha1_final @ 0x0800aef0 (size 228) =====

ulong sym._sha1_final(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x20);
    arg1_00 = *(iVar4 + 0x98);
    if ((*(arg1_00 + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        uVar3 = arg1 + 0x197U & 0xffffffffffffffc0;
        *(arg1 + 0x111) = 1;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        memcpy(uVar3,arg1 + 0x112,*(arg1 + 0x154));
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x220) = arg1 + 0x197U & 0xfc0;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x218) = (((uVar3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(arg1 + 0x30) = *(arg1 + 0x154);
        uVar2 = sym._qcrypto_queue_req(arg1_00,*(iVar4 + 0x90),arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha1_digest @ 0x0800afd4 (size 272) =====

ulong sym._sha1_digest(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x110) = 1;
    iVar4 = *(arg1 + 0x20);
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x108) = 0;
    *(iVar4 + 0xa4) = 0;
    *(arg1 + 0x14a) = 0;
    *(arg1 + 0x142) = 0;
    *(arg1 + 0x132) = 0;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x12a) = 0;
    *(arg1 + 0x122) = 0;
    *(arg1 + 0x112) = 0;
    *(arg1 + 0x11a) = 0;
    uVar1 = *0x8004108;
    uVar3 = _obj._std_init_vector_sha1_uint8;
    *(arg1 + 0x208) = 0xf0e1d2c3;
    *(arg1 + 0x1f8) = uVar3;
    *(arg1 + 0x200) = uVar1;
    *(iVar4 + 0xa8) = 0x14;
    *0x8001000 = *0x8001000 + 1;
    iVar5 = *(arg1 + 0x20);
    iVar4 = *(iVar5 + 0x98);
    if ((*(iVar4 + 0x19) == '\0') || (iVar2 = sym._copy_source(arg1), iVar2 == 0)) {
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(iVar4,*(iVar5 + 0x90),arg1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym._sha1_export @ 0x0800b0e4 (size 168) =====

ulong sym._sha1_export(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(arg2 + 0x18) = *(arg1 + 0x108);
    uVar1 = (*(arg1 + 0x1f8) & 0xff00ff00) >> 8 | (*(arg1 + 0x1f8) & 0xff00ff) << 8;
    *arg2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x1fc) & 0xff00ff00) >> 8 | (*(arg1 + 0x1fc) & 0xff00ff) << 8;
    *(arg2 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x200) & 0xff00ff00) >> 8 | (*(arg1 + 0x200) & 0xff00ff) << 8;
    *(arg2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x204) & 0xff00ff00) >> 8 | (*(arg1 + 0x204) & 0xff00ff) << 8;
    *(arg2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x208) & 0xff00ff00) >> 8 | (*(arg1 + 0x208) & 0xff00ff) << 8;
    *(arg2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(arg1 + 0x12a);
    uVar4 = *(arg1 + 0x11a);
    uVar2 = *(arg1 + 0x112);
    *(arg2 + 0x30) = *(arg1 + 0x122);
    *(arg2 + 0x38) = uVar3;
    *(arg2 + 0x20) = uVar2;
    *(arg2 + 0x28) = uVar4;
    uVar4 = *(arg1 + 0x14a);
    uVar3 = *(arg1 + 0x13a);
    uVar2 = *(arg1 + 0x132);
    *(arg2 + 0x50) = *(arg1 + 0x142);
    *(arg2 + 0x58) = uVar4;
    *(arg2 + 0x40) = uVar2;
    *(arg2 + 0x48) = uVar3;
    return 0;
}


// ===== sym._sha1_import @ 0x0800b18c (size 344) =====

ulong sym._sha1_import(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    
    uVar8 = *(arg2 + 0x18);
    *(arg1 + 0x108) = uVar8;
    uVar2 = *(arg2 + 0x58);
    uVar1 = *(arg2 + 0x40);
    uVar3 = *(arg2 + 0x48);
    *(arg1 + 0x142) = *(arg2 + 0x50);
    *(arg1 + 0x14a) = uVar2;
    *(arg1 + 0x13a) = uVar3;
    *(arg1 + 0x132) = uVar1;
    uVar2 = *(arg2 + 0x38);
    uVar1 = *(arg2 + 0x20);
    uVar3 = *(arg2 + 0x28);
    *(arg1 + 0x122) = *(arg2 + 0x30);
    *(arg1 + 0x12a) = uVar2;
    *(arg1 + 0x11a) = uVar3;
    *(arg1 + 0x112) = uVar1;
    uVar5 = *(arg2 + 0x18);
    *(arg1 + 0xf8) = uVar8 & 0xffffffc0;
    *(arg1 + 0xfc) = uVar8 >> 0x20;
    *(arg1 + 0x110) = uVar5 < 0x41;
    puVar7 = arg1 + 0x1f8;
    uVar4 = *(*(arg1 + 0x20) + 0xa8);
    puVar10 = arg2;
    if (3 < uVar4) {
        uVar11 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar9 = arg2;
        do {
            uVar11 = uVar11 - 1;
            *puVar6 = *(puVar9 + 3);
            puVar6[1] = *(puVar9 + 2);
            puVar6[2] = *puVar9 >> 8;
            puVar7 = puVar6 + 4;
            puVar10 = puVar9 + 1;
            puVar6[3] = *puVar9;
            puVar6 = puVar7;
            puVar9 = puVar10;
        } while (uVar11 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar12 = 0x18;
    iVar13 = iVar12;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar13 = 0x10;
            iVar14 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800b2cc;
            iVar13 = 8;
            iVar12 = 0x10;
            iVar14 = 2;
            *puVar7 = *(puVar10 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar14;
        *puVar6 = *puVar10 >> iVar12;
    }
    *puVar7 = *puVar10 >> iVar13;
code_r0x0800b2cc:
    *(arg1 + 0x154) = *(arg2 + 0x18) & 0x3f;
    return 0;
}


// ===== sym._qcrypto_ahash_cra_init @ 0x0800b2e4 (size 60) =====

ulong sym._qcrypto_ahash_cra_init(int64_t arg1)

{
    ulong uVar1;
    
    *(arg1 + -0x40) = 0x1d8;
    uVar1 = *(*(arg1 + 0x10) + 0x388);
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x98) = uVar1;
    *(arg1 + 0x80) = arg1 + 0x80;
    *(arg1 + 0x88) = arg1 + 0x80;
    return 0;
}


// ===== sym._qcrypto_ahash_cra_exit @ 0x0800b320 (size 108) =====

void sym._qcrypto_ahash_cra_exit(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x80) == arg1 + 0x80) {
        iVar1 = *(arg1 + 0xf0);
    }
    else {
        _printk(0x8001281,"");
        iVar1 = *(arg1 + 0xf0);
    }
    if (iVar1 != 0) {
        kfree_sensitive();
        *(arg1 + 0xf0) = 0;
    }
    return;
}


// ===== sym._sha256_init @ 0x0800b390 (size 160) =====

ulong sym._sha256_init(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    
    iVar5 = *(arg1 + 0x20);
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x108) = 0;
    *(iVar5 + 0xa4) = 1;
    *(arg1 + 0x142) = 0;
    *(arg1 + 0x14a) = 0;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x132) = 0;
    uVar2 = *0x800411c;
    uVar1 = _obj._std_init_vector_sha256_uint8;
    *(arg1 + 0x12a) = 0;
    uVar4 = *0x800412c;
    uVar3 = *0x8004124;
    *(arg1 + 0x1f8) = uVar1;
    *(arg1 + 0x200) = uVar2;
    *(arg1 + 0x208) = uVar3;
    *(arg1 + 0x210) = uVar4;
    *(arg1 + 0x122) = 0;
    *(arg1 + 0x11a) = 0;
    *(arg1 + 0x112) = 0;
    *(iVar5 + 0xa8) = 0x20;
    *0x8001000 = *0x8001000 + 1;
    return 0;
}


// ===== sym._sha256_update @ 0x0800b430 (size 104) =====

ulong sym._sha256_update(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(arg1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        *(arg1 + 0x108) = *(arg1 + 0x108) + *(arg1 + 0x30);
        uVar2 = sym._sha_update(arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_final @ 0x0800b498 (size 228) =====

ulong sym._sha256_final(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x20);
    arg1_00 = *(iVar4 + 0x98);
    if ((*(arg1_00 + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        uVar3 = arg1 + 0x197U & 0xffffffffffffffc0;
        *(arg1 + 0x111) = 1;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        memcpy(uVar3,arg1 + 0x112,*(arg1 + 0x154));
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x220) = arg1 + 0x197U & 0xfc0;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x218) = (((uVar3 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(arg1 + 0x30) = *(arg1 + 0x154);
        uVar2 = sym._qcrypto_queue_req(arg1_00,*(iVar4 + 0x90),arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_digest @ 0x0800b57c (size 272) =====

ulong sym._sha256_digest(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x20);
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x108) = 0;
    *(iVar6 + 0xa4) = 1;
    *(arg1 + 0x14a) = 0;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x132) = 0;
    *(arg1 + 0x12a) = 0;
    *(arg1 + 0x142) = 0;
    *(arg1 + 0x122) = 0;
    *(arg1 + 0x11a) = 0;
    uVar1 = *0x800411c;
    uVar5 = _obj._std_init_vector_sha256_uint8;
    *(arg1 + 0x112) = 0;
    uVar3 = *0x800412c;
    uVar2 = *0x8004124;
    *(arg1 + 0x1f8) = uVar5;
    *(arg1 + 0x200) = uVar1;
    *(arg1 + 0x208) = uVar2;
    *(arg1 + 0x210) = uVar3;
    *(iVar6 + 0xa8) = 0x20;
    *0x8001000 = *0x8001000 + 1;
    iVar7 = *(arg1 + 0x20);
    iVar6 = *(iVar7 + 0x98);
    if ((*(iVar6 + 0x19) == '\0') || (iVar4 = sym._copy_source(arg1), iVar4 == 0)) {
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x110) = 0x101;
        uVar5 = sym._qcrypto_queue_req(iVar6,*(iVar7 + 0x90),arg1);
    }
    else {
        uVar5 = 0xfffffff4;
    }
    return uVar5;
}


// ===== sym._sha256_export @ 0x0800b68c (size 204) =====

ulong sym._sha256_export(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(arg2 + 0x20) = *(arg1 + 0x108);
    uVar1 = (*(arg1 + 0x1f8) & 0xff00ff00) >> 8 | (*(arg1 + 0x1f8) & 0xff00ff) << 8;
    *arg2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x1fc) & 0xff00ff00) >> 8 | (*(arg1 + 0x1fc) & 0xff00ff) << 8;
    *(arg2 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x200) & 0xff00ff00) >> 8 | (*(arg1 + 0x200) & 0xff00ff) << 8;
    *(arg2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x204) & 0xff00ff00) >> 8 | (*(arg1 + 0x204) & 0xff00ff) << 8;
    *(arg2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x208) & 0xff00ff00) >> 8 | (*(arg1 + 0x208) & 0xff00ff) << 8;
    *(arg2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x20c) & 0xff00ff00) >> 8 | (*(arg1 + 0x20c) & 0xff00ff) << 8;
    *(arg2 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x210) & 0xff00ff00) >> 8 | (*(arg1 + 0x210) & 0xff00ff) << 8;
    *(arg2 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x214) & 0xff00ff00) >> 8 | (*(arg1 + 0x214) & 0xff00ff) << 8;
    *(arg2 + 0x1c) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(arg1 + 0x12a);
    uVar4 = *(arg1 + 0x11a);
    uVar2 = *(arg1 + 0x112);
    *(arg2 + 0x38) = *(arg1 + 0x122);
    *(arg2 + 0x40) = uVar3;
    *(arg2 + 0x28) = uVar2;
    *(arg2 + 0x30) = uVar4;
    uVar4 = *(arg1 + 0x14a);
    uVar3 = *(arg1 + 0x13a);
    uVar2 = *(arg1 + 0x132);
    *(arg2 + 0x58) = *(arg1 + 0x142);
    *(arg2 + 0x60) = uVar4;
    *(arg2 + 0x48) = uVar2;
    *(arg2 + 0x50) = uVar3;
    return 0;
}


// ===== sym._sha256_import @ 0x0800b758 (size 344) =====

ulong sym._sha256_import(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar *puVar7;
    ulong uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    
    uVar8 = *(arg2 + 0x20);
    *(arg1 + 0x108) = uVar8;
    uVar2 = *(arg2 + 0x60);
    uVar1 = *(arg2 + 0x48);
    uVar3 = *(arg2 + 0x50);
    *(arg1 + 0x142) = *(arg2 + 0x58);
    *(arg1 + 0x14a) = uVar2;
    *(arg1 + 0x13a) = uVar3;
    *(arg1 + 0x132) = uVar1;
    uVar2 = *(arg2 + 0x40);
    uVar1 = *(arg2 + 0x28);
    uVar3 = *(arg2 + 0x30);
    *(arg1 + 0x122) = *(arg2 + 0x38);
    *(arg1 + 0x12a) = uVar2;
    *(arg1 + 0x11a) = uVar3;
    *(arg1 + 0x112) = uVar1;
    uVar5 = *(arg2 + 0x20);
    *(arg1 + 0xf8) = uVar8 & 0xffffffc0;
    *(arg1 + 0xfc) = uVar8 >> 0x20;
    *(arg1 + 0x110) = uVar5 < 0x41;
    puVar7 = arg1 + 0x1f8;
    uVar4 = *(*(arg1 + 0x20) + 0xa8);
    puVar10 = arg2;
    if (3 < uVar4) {
        uVar11 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar9 = arg2;
        do {
            uVar11 = uVar11 - 1;
            *puVar6 = *(puVar9 + 3);
            puVar6[1] = *(puVar9 + 2);
            puVar6[2] = *puVar9 >> 8;
            puVar7 = puVar6 + 4;
            puVar10 = puVar9 + 1;
            puVar6[3] = *puVar9;
            puVar6 = puVar7;
            puVar9 = puVar10;
        } while (uVar11 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar12 = 0x18;
    iVar13 = iVar12;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar13 = 0x10;
            iVar14 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800b898;
            iVar13 = 8;
            iVar12 = 0x10;
            iVar14 = 2;
            *puVar7 = *(puVar10 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar14;
        *puVar6 = *puVar10 >> iVar12;
    }
    *puVar7 = *puVar10 >> iVar13;
code_r0x0800b898:
    *(arg1 + 0x154) = *(arg2 + 0x20) & 0x3f;
    return 0;
}


// ===== sym._copy_source @ 0x0800b8b0 (size 360) =====

ulong sym._copy_source(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xc0) = *(arg1 + 0x38);
    iVar2 = __kmalloc(*(arg1 + 0x30) + 0x40,0xb20);
    *(arg1 + 0xe8) = iVar2;
    if (iVar2 == 0) {
        _printk(0x80008ed,0,*(arg1 + 0x30) + 0x40);
        return 0xfffffff4;
    }
    uVar6 = 0;
    iVar2 = *(arg1 + 0x38);
    uVar5 = *(arg1 + 0x30);
    if ((iVar2 == 0) || (*(arg1 + 0x30) < 1)) {
code_r0x0800b974:
        iVar4 = uVar5;
        if (iVar4 == uVar6) goto code_r0x0800b97c;
    }
    else {
        iVar4 = 0;
        do {
            iVar4 = iVar4 + 1;
            uVar1 = uVar5 - *(iVar2 + 0xc);
            uVar5 = uVar1;
            iVar2 = sg_next();
        } while (0 < uVar1 && iVar2 != 0);
        uVar5 = *(arg1 + 0x30);
        if (iVar4 != 0) {
            uVar6 = 0;
            iVar2 = *(arg1 + 0xe8);
            uVar7 = *(arg1 + 0x38);
            do {
                iVar3 = sg_copy_to_buffer(uVar7,1,iVar2,uVar5);
                iVar2 = iVar2 + iVar3;
                uVar5 = uVar5 - iVar3;
                uVar6 = iVar3 + uVar6;
                uVar7 = sg_next(uVar7);
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            uVar5 = *(arg1 + 0x30);
            goto code_r0x0800b974;
        }
        uVar6 = 0;
        iVar4 = 0;
        if (*(arg1 + 0x30) == 0) goto code_r0x0800b97c;
    }
    _printk(0x800135b,uVar6 & 0xffffffff,uVar5);
    iVar4 = *(arg1 + 0x30);
code_r0x0800b97c:
    *(arg1 + 200) = (((*(arg1 + 0xe8) << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
    *(arg1 + 0xd0) = *(arg1 + 0xe8) & 0xfff;
    *(arg1 + 0xd4) = iVar4;
    *(arg1 + 0x38) = arg1 + 200;
    return 0;
}


// ===== sym._sha_update @ 0x0800ba18 (size 752) =====

ulong sym._sha_update(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong uVar7;
    uint64_t uVar8;
    int iVar9;
    uint32_t uVar10;
    int iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = *(arg1 + 0x30);
    uVar8 = uVar10;
    uVar2 = *(arg1 + 0x154);
    uVar1 = uVar2 + uVar10;
    if (uVar1 < 0x41) {
        if (0x40 < uVar2) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x800bd08);
            (*pcVar3)();
        }
        if ((0 < uVar10) && (iVar4 = *(arg1 + 0x38), iVar4 != 0)) {
            iVar9 = 0;
            iVar12 = arg1 + uVar2 + 0x112;
            do {
                iVar9 = iVar9 + 1;
                uVar10 = uVar10 - *(iVar4 + 0xc);
                iVar4 = sg_next();
            } while (0 < uVar10 && iVar4 != 0);
            if (iVar9 != 0) {
                uVar7 = *(arg1 + 0x38);
                do {
                    iVar4 = sg_copy_to_buffer(uVar7,1,iVar12,uVar8);
                    iVar12 = iVar12 + iVar4;
                    uVar8 = uVar8 - iVar4;
                    uVar7 = sg_next(uVar7);
                    iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
            }
        }
        uVar7 = 0;
        *(arg1 + 0x154) = uVar1;
    }
    else {
        iVar12 = *(arg1 + 0x20);
        uVar8 = arg1 + 0x197U & 0xffffffffffffffc0;
        iVar4 = *(iVar12 + 0x98);
        *(arg1 + 0xb8) = uVar10;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        memcpy(uVar8,arg1 + 0x112);
        iVar9 = (uVar1 - (uVar1 + 0x3f & 0xffffffc0)) + 0x40;
        if (iVar9 != 0) {
            scatterwalk_map_and_copy(arg1 + 0x112,*(arg1 + 0x38),*(arg1 + 0x30) - iVar9,iVar9,0);
        }
        puVar5 = *(arg1 + 0x38);
        uVar1 = uVar1 - iVar9;
        if ((puVar5 != NULL) && (iVar11 = *(arg1 + 0x30), 0 < iVar11)) {
            do {
                iVar11 = iVar11 - *(puVar5 + 0xc);
                puVar5 = sg_next();
            } while (0 < iVar11 && puVar5 != NULL);
            puVar5 = *(arg1 + 0x38);
        }
        uVar10 = *(arg1 + 0x154);
        if (uVar10 < uVar1) {
            do {
                uVar10 = *(puVar5 + 0xc) + uVar10;
                if (uVar1 < uVar10) break;
                puVar5 = sg_next();
            } while (uVar10 < uVar1);
            uVar10 = *(arg1 + 0x154);
        }
        if (uVar10 == 0) {
            *puVar5 = *puVar5 & 0xfffffffffffffffc | 2;
        }
        else if (*(iVar4 + 0x19) == '\0') {
            *puVar5 = *puVar5 & 0xfffffffffffffffc | 2;
            *(arg1 + 0x250) = 0;
            *(arg1 + 0x248) = 0;
            *(arg1 + 0x240) = 0;
            *(arg1 + 0x230) = 0;
            *(arg1 + 0x228) = 0;
            *(arg1 + 0x220) = arg1 + 0x197U & 0xfc0;
            *(arg1 + 0x218) = (((uVar8 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x200000000;
            *(arg1 + 0x224) = *(arg1 + 0x154);
            *(arg1 + 0x238) = *(arg1 + 0x38) & 0xfffffffffffffffc | 1;
            *(arg1 + 0x38) = arg1 + 0x218;
        }
        else {
            iVar6 = __kmalloc(*(arg1 + 0x30) + 0x40,0xb20);
            *(arg1 + 0xf0) = iVar6;
            if (iVar6 == 0) {
                return 0xfffffff4;
            }
            uVar10 = *(arg1 + 0x154);
            memcpy(iVar6,uVar8,uVar10);
            memcpy(*(arg1 + 0xf0) + uVar10,*(arg1 + 0xe8),*(*(arg1 + 0x38) + 0xc));
            kfree_sensitive(*(arg1 + 0xe8));
            iVar6 = *(arg1 + 0xf0);
            *(arg1 + 0xe8) = iVar6;
            iVar11 = *(*(arg1 + 0x38) + 0xc);
            *(arg1 + 0x220) = iVar6 & 0xfff;
            *(arg1 + 0x224) = iVar11 + *(arg1 + 0x154);
            *(arg1 + 0x38) = arg1 + 0x218;
            *(arg1 + 0x218) = (((iVar6 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        }
        *(arg1 + 0x30) = uVar1;
        *(arg1 + 0x154) = iVar9;
        uVar7 = sym._qcrypto_queue_req(iVar4,*(iVar12 + 0x90),arg1);
    }
    return uVar7;
}


// ===== sym._qcrypto_aead_setkey @ 0x0800bd08 (size 316) =====

ulong sym._qcrypto_aead_setkey(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < arg3) {
        uVar1 = *arg2;
        if ((((3 < uVar1) && (uVar1 < arg3 || uVar1 == arg3)) && (*(arg2 + 2) == 1)) && ((uVar1 & 0xfffc) != 4)) {
            uVar2 = (*(arg2 + 4) & 0xff00ff00) >> 8 | (*(arg2 + 4) & 0xff00ff) << 8;
            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
            *(arg1 + 0x1b8) = uVar2;
            uVar6 = *arg2 + 3 & 0x1fffc;
            arg3 = arg3 - uVar6;
            uVar3 = arg3 - uVar2;
            if (((uVar2 <= arg3) && (*(arg1 + 0x1c0) = uVar3, uVar2 < 0x40)) && (uVar3 < 0x40)) {
                arg2 = arg2 + uVar6;
                *(arg1 + 0x158) = 0;
                *(arg1 + 0x160) = 0;
                *(arg1 + 0x148) = 0;
                *(arg1 + 0x150) = 0;
                *(arg1 + 0x138) = 0;
                *(arg1 + 0x140) = 0;
                *(arg1 + 0x128) = 0;
                *(arg1 + 0x130) = 0;
                memcpy(arg1 + 0x178,arg2 + uVar3);
                memcpy(arg1 + 0x128,arg2,*(arg1 + 0x1c0));
                if (((*(arg1 + 0x1b8) != 0x18) || (*(arg1 + 0x1c8) == 0)) || (*(arg1 + 0x1d0) == 0)) {
                    return 0;
                }
                *(*(arg1 + 0x1d0) + 0x80) = 0;
                iVar4 = crypto_ahash_setkey(*(arg1 + 0x1d0),arg1 + 0x128,*(arg1 + 0x1c0));
                if (iVar4 == 0) {
                    *(*(arg1 + 0x1c8) + 0x80) = 0;
                    uVar5 = crypto_skcipher_setkey(*(arg1 + 0x1c8),arg1 + 0x178,*(arg1 + 0x1b8));
                    if (uVar5 == 0) {
                        return uVar5;
                    }
                }
            }
        }
    }
    *(arg1 + 0x1b8) = 0;
    return 0xffffffea;
}


// ===== sym._qcrypto_aead_setauthsize @ 0x0800be44 (size 24) =====

ulong sym._qcrypto_aead_setauthsize(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x1bc) = arg2;
    return 0;
}


// ===== sym._qcrypto_aead_encrypt_aes_cbc @ 0x0800be5c (size 164) =====

void sym._qcrypto_aead_encrypt_aes_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 2;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    *(arg1 + 0x168) = arg1;
    iVar1 = 0;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x30;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    if (((*(iVar2 + 0x138) == 0x18) && (*(iVar2 + 0x148) != 0)) && (*(iVar2 + 0x150) != 0)) {
        sym._qcrypto_aead_aes_192_fallback(arg1,1);
    }
    else {
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    }
    return;
}


// ===== sym._qcrypto_aead_decrypt_aes_cbc @ 0x0800bf00 (size 172) =====

void sym._qcrypto_aead_decrypt_aes_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 0x100000002;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    *(arg1 + 0x168) = arg1;
    iVar1 = 8;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x38;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    if (((*(iVar2 + 0x138) == 0x18) && (*(iVar2 + 0x148) != 0)) && (*(iVar2 + 0x150) != 0)) {
        sym._qcrypto_aead_aes_192_fallback(arg1,0);
    }
    else {
        sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    }
    return;
}


// ===== sym._qcrypto_cra_aead_aes_sha1_init @ 0x0800bfac (size 256) =====

ulong sym._qcrypto_cra_aead_aes_sha1_init(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        return 0xffffffea;
    }
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
    get_random_bytes(arg1 + 0x168,0x10);
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x100) = arg1 + 0x100;
    *(arg1 + 0x108) = arg1 + 0x100;
    cVar1 = *0x80004c5;
    *(arg1 + 0x1c8) = 0;
    *(arg1 + 0x1d0) = 0;
    *(arg1 + 0x124) = 5;
    if (cVar1 == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(0x80012bb,0,0);
        *(arg1 + 0x1c8) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar2 = crypto_alloc_ahash(0x800091c,0,0);
            *(arg1 + 0x1d0) = uVar2;
            if (uVar2 < 0xfffffffffffff001) goto code_r0x0800c074;
            *(arg1 + 0x1d0) = 0;
            crypto_destroy_tfm(*(arg1 + 0x1c8),*(arg1 + 0x1c8) + 0x80);
        }
        *(arg1 + 0x1c8) = 0;
    }
code_r0x0800c074:
    *(arg1 + 0x124) = 2;
    return 0;
}


// ===== sym._qcrypto_cra_aead_aes_exit @ 0x0800c0ac (size 124) =====

void sym._qcrypto_cra_aead_aes_exit(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x100) == arg1 + 0x100) {
        iVar1 = *(arg1 + 0x1c8);
    }
    else {
        _printk(0x8000fb4);
        iVar1 = *(arg1 + 0x1c8);
    }
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    iVar1 = *(arg1 + 0x1d0);
    if (iVar1 != 0) {
        crypto_destroy_tfm(iVar1,iVar1 + 0x80);
    }
    *(arg1 + 0x1c8) = 0;
    *(arg1 + 0x1d0) = 0;
    return;
}


// ===== sym._qcrypto_aead_encrypt_des_cbc @ 0x0800c12c (size 116) =====

void sym._qcrypto_aead_encrypt_des_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    iVar1 = 0x10;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x40;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    return;
}


// ===== sym._qcrypto_aead_decrypt_des_cbc @ 0x0800c1a0 (size 120) =====

void sym._qcrypto_aead_decrypt_des_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 0x100000000;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    iVar1 = 0x18;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x48;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    return;
}


// ===== sym._qcrypto_cra_aead_sha1_init @ 0x0800c218 (size 136) =====

ulong sym._qcrypto_cra_aead_sha1_init(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar1 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = arg1 + 0x100;
        *(arg1 + 0x108) = arg1 + 0x100;
    }
    *(arg1 + 0x124) = 2;
    return uVar1;
}


// ===== sym._qcrypto_cra_aead_exit @ 0x0800c2a0 (size 64) =====

void sym._qcrypto_cra_aead_exit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x100) != arg1 + 0x100) {
        _printk(0x8000fb4);
    }
    return;
}


// ===== sym._qcrypto_aead_encrypt_3des_cbc @ 0x0800c2e4 (size 116) =====

void sym._qcrypto_aead_encrypt_3des_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 1;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    iVar1 = 0x20;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x50;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    return;
}


// ===== sym._qcrypto_aead_decrypt_3des_cbc @ 0x0800c358 (size 120) =====

void sym._qcrypto_aead_decrypt_3des_cbc(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    arg1_00 = *(iVar2 + 0x98);
    *(arg1 + 0xcc) = 1;
    *(arg1 + 0x100) = 0x100000001;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xb0) = *(arg1 + 0x38);
    iVar1 = 0x28;
    if (*(iVar2 + 0xa4) != 2) {
        iVar1 = 0x58;
    }
    *(obj._qcrypto_stat + iVar1) = *(obj._qcrypto_stat + iVar1) + 1;
    sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    return;
}


// ===== sym._qcrypto_aead_aes_192_fallback @ 0x0800c3d0 (size 704) =====

int sym._qcrypto_aead_aes_192_fallback(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    int iVar3;
    uint *puVar4;
    uint *puVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    ulong uVar9;
    ulong *in_x18;
    uint32_t *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x20);
    *(arg1 + 0x218) = 0;
    puVar10 = *(iVar12 + 0x148);
    puVar4 = __kmalloc(*puVar10 + 0x80,0xcc0);
    if (puVar4 == NULL) {
        return -0xc;
    }
    *(puVar4 + 0x10) = puVar10 + 0x20;
    iVar11 = *(iVar12 + 0x150);
    puVar5 = __kmalloc(*(iVar11 + 0x40) + 0x80,0xcc0);
    if (puVar5 == NULL) {
        iVar3 = -0x16;
        goto code_r0x0800c5c0;
    }
    uVar7 = *(arg1 + 0x40);
    uVar2 = *(arg1 + 0x30);
    *(arg1 + 0x228) = puVar4;
    *(puVar5 + 8) = iVar11 + 0x80;
    *(arg1 + 0x168) = arg1;
    *(arg1 + 0x170) = puVar5;
    uVar7 = scatterwalk_ffwd(arg1 + 0x198,uVar7,uVar2);
    uVar6 = scatterwalk_ffwd(arg1 + 0x1d8,*(arg1 + 0x48),*(arg1 + 0x30));
    iVar3 = *(arg1 + 0x34);
    if ((arg2 & 1U) == 0) {
        iVar3 = iVar3 - *(iVar12 + 0x13c);
    }
    *(arg1 + 0x230) = uVar7;
    *(arg1 + 0x238) = uVar6;
    *(arg1 + 0x240) = iVar3;
    *(arg1 + 0x220) = *(arg1 + 0x30) + iVar3;
    uVar2 = *(*(iVar12 + 0x10) + -0x50);
    *(arg1 + 200) = uVar2;
    iVar11 = kmemdup(*(arg1 + 0x38),uVar2,0xa20);
    *(arg1 + 0x218) = iVar11;
    if (iVar11 == 0) {
        iVar3 = -0x16;
    }
    else {
        uVar8 = *(arg1 + 0x238);
        iVar1 = arg1 + 0x80;
        uVar2 = *(arg1 + 0x240);
        *(puVar4 + 2) = iVar11;
        uVar9 = *(arg1 + 0x230);
        *puVar4 = uVar2;
        *(puVar4 + 4) = uVar9;
        *(puVar4 + 6) = uVar8;
        if ((arg2 & 1U) == 0) {
            uVar6 = *(arg1 + 0x40);
            puVar5[0xc] = *(arg1 + 0x220);
            *(puVar5 + 0xe) = uVar6;
            *(puVar5 + 0x10) = arg1 + 0x178;
            *(puVar5 + 4) = sym._aead_aes_fb_stage1_ahash_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            *(puVar5 + 6) = iVar1;
            puVar5[10] = 0x400;
            iVar3 = crypto_ahash_digest(puVar5);
            if (iVar3 == 0) {
                iVar11 = __kmalloc(*(iVar12 + 0x13c),0xcc0);
                if (iVar11 == 0) {
                    iVar3 = -0xc;
                    goto code_r0x0800c5b8;
                }
                scatterwalk_map_and_copy(iVar11,uVar7,*(arg1 + 0x34) - *(iVar12 + 0x13c),*(iVar12 + 0x13c),0);
                iVar3 = bcmp(arg1 + 0x178,iVar11,*(iVar12 + 0x13c));
                if (iVar3 == 0) {
                    iVar12 = *(arg1 + 0x228);
                    *(iVar12 + 0x30) = sym._aead_aes_fb_stage2_decrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                    *(iVar12 + 0x38) = iVar1;
                    *(iVar12 + 0x48) = 0x400;
                    iVar3 = crypto_skcipher_decrypt();
                }
                else {
                    iVar3 = -0x4a;
                }
                kfree(iVar11);
            }
        }
        else {
            uVar7 = *(arg1 + 0x48);
            puVar5[0xc] = *(arg1 + 0x220);
            *(puVar5 + 0xe) = uVar7;
            *(puVar5 + 0x10) = arg1 + 0x178;
            *(puVar4 + 0xc) = sym._aead_aes_fb_stage1_encrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
            *(puVar4 + 0xe) = iVar1;
            puVar4[0x12] = 0x400;
            iVar3 = crypto_skcipher_encrypt(puVar4);
            if (iVar3 == 0) {
                memcpy(iVar12 + 0xe8,*(arg1 + 0x218),*(arg1 + 200));
                iVar11 = *(arg1 + 0x170);
                *(iVar11 + 0x28) = 0x400;
                *(iVar11 + 0x10) = sym.__typeid__ZTSFvP20crypto_async_requestiE_global_addr;
                *(iVar11 + 0x18) = iVar1;
                iVar3 = crypto_ahash_digest();
                if (iVar3 == 0) {
                    scatterwalk_map_and_copy(arg1 + 0x178,uVar6,*(arg1 + 0x34),*(iVar12 + 0x13c),1);
                    goto code_r0x0800c5b8;
                }
            }
        }
        if (iVar3 == -0x73) {
            return -0x73;
        }
        if (iVar3 == -0x10) {
            return -0x10;
        }
    }
code_r0x0800c5b8:
    kfree_sensitive(puVar4);
    puVar4 = puVar5;
code_r0x0800c5c0:
    kfree_sensitive(puVar4);
    kfree(*(arg1 + 0x218));
    return iVar3;
}


// ===== sym._aead_aes_fb_stage1_encrypt_complete @ 0x0800c690 (size 292) =====

void sym._aead_aes_fb_stage1_encrypt_complete(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x18);
    uVar4 = arg2 & 0xffffffff;
    iVar5 = *(iVar6 + 0xe8);
    iVar7 = *(iVar5 + 0x20);
    memcpy(iVar7 + 0xe8,*(iVar6 + 0x198),*(iVar6 + 0x48));
    if (arg2 == 0) {
        iVar2 = *(iVar6 + 0xf0);
        *(iVar2 + 0x10) = sym.__typeid__ZTSFvP20crypto_async_requestiE_global_addr;
        *(iVar2 + 0x18) = iVar6;
        *(iVar2 + 0x28) = 0x400;
        uVar1 = crypto_ahash_digest();
        if (uVar1 == 0xffffff8d) {
            return;
        }
        uVar4 = uVar1;
        if (uVar1 == 0xfffffff0) {
            return;
        }
        if (uVar1 == 0) {
            scatterwalk_map_and_copy(iVar6 + 0xf8,*(iVar6 + 0x1b8),*(iVar5 + 0x34),*(iVar7 + 0x13c),1);
        }
    }
    iVar5 = *(iVar6 + 0xe8);
    if (*(iVar6 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar6 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar6 + 0x1a8) = 0;
    *(iVar6 + 0xf0) = 0;
    kfree(*(iVar6 + 0x198));
    pcVar3 = *(iVar5 + 0x10);
    if (4 < (pcVar3 + -0x80057c8 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar3,0x8000600);
    }
    (*pcVar3)(iVar5,uVar4);
    return;
}


// ===== sym._aead_aes_fb_stage1_ahash_complete @ 0x0800c7b4 (size 340) =====

void sym._aead_aes_fb_stage1_ahash_complete(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong *in_x18;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2 & 0xffffffff;
    iVar7 = *(arg1 + 0x18);
    if (arg2 == 0) {
        iVar8 = *(iVar7 + 0xe8);
        iVar6 = *(iVar8 + 0x20);
        iVar5 = __kmalloc(*(iVar6 + 0x13c),0xcc0);
        if (iVar5 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            scatterwalk_map_and_copy(iVar5,*(iVar7 + 0x1b0),*(iVar8 + 0x34) - *(iVar6 + 0x13c),*(iVar6 + 0x13c),0);
            iVar1 = bcmp(iVar7 + 0xf8,iVar5,*(iVar6 + 0x13c));
            kfree(iVar5);
            if (iVar1 == 0) {
                iVar5 = *(iVar7 + 0x1a8);
                *(iVar5 + 0x30) = sym._aead_aes_fb_stage2_decrypt_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
                *(iVar5 + 0x38) = iVar7;
                *(iVar5 + 0x48) = 0x400;
                uVar2 = crypto_skcipher_decrypt();
                if (uVar2 == 0xffffff8d) {
                    return;
                }
                uVar4 = uVar2;
                if (uVar2 == 0xfffffff0) {
                    return;
                }
            }
            else {
                uVar4 = 0xffffffb6;
            }
        }
    }
    iVar5 = *(iVar7 + 0xe8);
    if (*(iVar7 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar7 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar7 + 0x1a8) = 0;
    *(iVar7 + 0xf0) = 0;
    kfree(*(iVar7 + 0x198));
    pcVar3 = *(iVar5 + 0x10);
    if (4 < (pcVar3 + -0x80057c8 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar3,0x8000600);
    }
    (*pcVar3)(iVar5,uVar4);
    return;
}


// ===== sym._aead_aes_fb_stage2_ahash_complete @ 0x0800c908 (size 220) =====

void sym._aead_aes_fb_stage2_ahash_complete(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x18);
    iVar2 = *(iVar3 + 0xe8);
    if (arg2 == 0) {
        scatterwalk_map_and_copy(iVar3 + 0xf8,*(iVar3 + 0x1b8),*(iVar2 + 0x34),*(*(iVar2 + 0x20) + 0x13c),1);
        iVar2 = *(iVar3 + 0xe8);
    }
    if (*(iVar3 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar3 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar3 + 0x1a8) = 0;
    *(iVar3 + 0xf0) = 0;
    kfree(*(iVar3 + 0x198));
    pcVar1 = *(iVar2 + 0x10);
    if (4 < (pcVar1 + -0x80057c8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar1,0x8000600);
    }
    (*pcVar1)(iVar2,arg2 & 0xffffffff);
    return;
}


// ===== sym._aead_aes_fb_stage2_decrypt_complete @ 0x0800c9e4 (size 184) =====

void sym._aead_aes_fb_stage2_decrypt_complete(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x18);
    iVar2 = *(iVar3 + 0xe8);
    if (*(iVar3 + 0x1a8) != 0) {
        kfree_sensitive();
    }
    if (*(iVar3 + 0xf0) != 0) {
        kfree_sensitive();
    }
    *(iVar3 + 0x1a8) = 0;
    *(iVar3 + 0xf0) = 0;
    kfree(*(iVar3 + 0x198));
    pcVar1 = *(iVar2 + 0x10);
    if (4 < (pcVar1 + -0x80057c8 >> 3 | pcVar1 << 0x3d)) {
        __cfi_slowpath_diag(0xb6380a32551e9273,pcVar1,0x8000600);
    }
    (*pcVar1)(iVar2,arg2 & 0xffffffff);
    return;
}


// ===== sym._qcrypto_cra_aead_aes_sha256_init @ 0x0800ca9c (size 256) =====

ulong sym._qcrypto_cra_aead_aes_sha256_init(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        return 0xffffffea;
    }
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
    get_random_bytes(arg1 + 0x168,0x10);
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x100) = arg1 + 0x100;
    *(arg1 + 0x108) = arg1 + 0x100;
    cVar1 = *0x80004c5;
    *(arg1 + 0x1c8) = 0;
    *(arg1 + 0x1d0) = 0;
    *(arg1 + 0x124) = 5;
    if (cVar1 == '\0') {
        uVar2 = crypto_alloc_sync_skcipher(0x80012bb,0,0);
        *(arg1 + 0x1c8) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            uVar2 = crypto_alloc_ahash(0x800143e,0,0);
            *(arg1 + 0x1d0) = uVar2;
            if (uVar2 < 0xfffffffffffff001) goto code_r0x0800cb64;
            *(arg1 + 0x1d0) = 0;
            crypto_destroy_tfm(*(arg1 + 0x1c8),*(arg1 + 0x1c8) + 0x80);
        }
        *(arg1 + 0x1c8) = 0;
    }
code_r0x0800cb64:
    *(arg1 + 0x124) = 3;
    return 0;
}


// ===== sym._qcrypto_cra_aead_sha256_init @ 0x0800cb9c (size 136) =====

ulong sym._qcrypto_cra_aead_sha256_init(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar1 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = arg1 + 0x100;
        *(arg1 + 0x108) = arg1 + 0x100;
    }
    *(arg1 + 0x124) = 3;
    return uVar1;
}


// ===== sym._sha1_hmac_init @ 0x0800cc24 (size 244) =====

ulong sym._sha1_hmac_init(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = *(arg1 + 0x20);
    iVar4 = *(iVar3 + 0x98);
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x122) = 0;
    *0x8001000 = *0x8001000 + 1;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x11a) = 0;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x12a) = 0;
    *(arg1 + 0x132) = 0;
    *(arg1 + 0x142) = 0;
    *(arg1 + 0x14a) = 0;
    uVar2 = *0x8004108;
    uVar1 = _obj._std_init_vector_sha1_uint8;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x208) = 0xf0e1d2c3;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0x104) = 0;
    *(arg1 + 0x112) = 0;
    *(arg1 + 0x1f8) = uVar1;
    *(arg1 + 0x200) = uVar2;
    *(iVar3 + 0xa8) = 0x14;
    if (*(iVar4 + 0x13) == '\0') {
        *(iVar3 + 0xa4) = 0;
        iVar3 = 0;
        iVar4 = *(arg1 + 0x20);
        do {
            *(arg1 + 0x112 + iVar3) = *(iVar4 + 0xb0 + iVar3) ^ 0x36;
            iVar3 = iVar3 + 1;
        } while (iVar3 != 0x40);
        *(arg1 + 0x154) = 0x40;
    }
    else {
        *(iVar3 + 0xa4) = 2;
    }
    return 0;
}


// ===== sym._sha1_hmac_update @ 0x0800cd18 (size 104) =====

ulong sym._sha1_hmac_update(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(arg1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        *(arg1 + 0x108) = *(arg1 + 0x108) + *(arg1 + 0x30);
        uVar2 = sym._sha_update(arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha1_hmac_final @ 0x0800cd80 (size 620) =====

ulong sym._sha1_hmac_final(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong uVar9;
    uint uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t arg1_00;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(arg1 + 0x20);
    arg1_00 = *(iVar13 + 0x98);
    if (*(arg1_00 + 0x13) == '\0') {
        uVar11 = arg1 + 0x197U & 0xffffffffffffffc0;
        iVar12 = *(iVar13 + 0xf0);
        memcpy(uVar11,arg1 + 0x112,*(arg1 + 0x154));
        uVar3 = arg1 + 0x197U & 0xfc0;
        iVar2 = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        puVar1 = arg1 + 0x1f8;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x220) = uVar3;
        *(arg1 + 0x218) = iVar2;
        *(iVar12 + 0x30) = *(arg1 + 0x154);
        *(iVar12 + 0x38) = arg1 + 0x218;
        *(iVar12 + 0x40) = puVar1;
        *(arg1 + 0x111) = 1;
        uVar9 = sym._qcrypto_queue_req(arg1_00,*(iVar13 + 0x90),iVar12);
        if ((uVar9 == -0x10) || (uVar9 == -0x73)) {
            uVar9 = wait_for_completion_interruptible(iVar13 + 0xf8);
            *(iVar13 + 0xf8) = 0;
        }
        if (uVar9 != 0) {
            return uVar9;
        }
        iVar12 = *(arg1 + 0x20);
        iVar13 = 0;
        arg1_00 = *(iVar12 + 0x98);
        do {
            *(uVar11 + iVar13) = *(iVar12 + 0xb0 + iVar13) ^ 0x5c;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 0x40);
        uVar9 = *puVar1;
        uVar4 = *(arg1 + 0x200);
        *(uVar11 + 0x50) = *(arg1 + 0x208);
        *(uVar11 + 0x40) = uVar9;
        *(uVar11 + 0x48) = uVar4;
        *(arg1 + 0x220) = uVar3;
        *(arg1 + 0x224) = 0x54;
        *(arg1 + 0x218) = iVar2;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x30) = 0x54;
        *(arg1 + 0x110) = 1;
        *(arg1 + 0xf8) = 0;
        *(arg1 + 0x100) = 0;
        *(arg1 + 0x154) = 0;
        *(arg1 + 0x108) = 0;
        uVar7 = *0x800412c;
        uVar6 = *0x8004124;
        uVar5 = *0x800411c;
        uVar4 = *0x8004108;
        uVar9 = _obj._std_init_vector_sha1_uint8;
        if (*(iVar12 + 0xa4) == 0) {
            uVar10 = 0x14;
            *(arg1 + 0x208) = 0xf0e1d2c3;
            *puVar1 = uVar9;
            *(arg1 + 0x200) = uVar4;
        }
        else {
            uVar10 = 0x20;
            *puVar1 = _obj._std_init_vector_sha256_uint8;
            *(arg1 + 0x200) = uVar5;
            *(arg1 + 0x208) = uVar6;
            *(arg1 + 0x210) = uVar7;
        }
        *(iVar12 + 0xa8) = uVar10;
        *(arg1 + 0x111) = 1;
        iVar13 = *(iVar12 + 0x90);
    }
    else {
        if ((*(arg1_00 + 0x19) != '\0') && (iVar8 = sym._copy_source(arg1), iVar8 != 0)) {
            return 0xfffffff4;
        }
        uVar11 = arg1 + 0x197U & 0xffffffffffffffc0;
        *(arg1 + 0x111) = 1;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        memcpy(uVar11,arg1 + 0x112,*(arg1 + 0x154));
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x220) = arg1 + 0x197U & 0xfc0;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x218) = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(arg1 + 0x30) = *(arg1 + 0x154);
        iVar13 = *(iVar13 + 0x90);
    }
    uVar9 = sym._qcrypto_queue_req(arg1_00,iVar13,arg1);
    return uVar9;
}


// ===== sym._sha1_hmac_digest @ 0x0800cfec (size 216) =====

ulong sym._sha1_hmac_digest(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0x208) = 0xf0e1d2c3;
    uVar1 = *0x8004108;
    uVar3 = _obj._std_init_vector_sha1_uint8;
    *0x8001000 = *0x8001000 + 1;
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0x104) = 0;
    *(arg1 + 0x1f8) = uVar3;
    *(arg1 + 0x200) = uVar1;
    *(*(arg1 + 0x20) + 0xa4) = 0x1400000002;
    iVar4 = *(arg1 + 0x20);
    arg1_00 = *(iVar4 + 0x98);
    if ((*(arg1_00 + 0x19) == '\0') || (iVar2 = sym._copy_source(arg1), iVar2 == 0)) {
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(arg1_00,*(iVar4 + 0x90),arg1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym._sha1_hmac_export @ 0x0800d0c4 (size 168) =====

ulong sym._sha1_hmac_export(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    
    *(arg2 + 0x18) = *(arg1 + 0x108);
    uVar1 = (*(arg1 + 0x1f8) & 0xff00ff00) >> 8 | (*(arg1 + 0x1f8) & 0xff00ff) << 8;
    *arg2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x1fc) & 0xff00ff00) >> 8 | (*(arg1 + 0x1fc) & 0xff00ff) << 8;
    *(arg2 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x200) & 0xff00ff00) >> 8 | (*(arg1 + 0x200) & 0xff00ff) << 8;
    *(arg2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x204) & 0xff00ff00) >> 8 | (*(arg1 + 0x204) & 0xff00ff) << 8;
    *(arg2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(arg1 + 0x208) & 0xff00ff00) >> 8 | (*(arg1 + 0x208) & 0xff00ff) << 8;
    *(arg2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = *(arg1 + 0x12a);
    uVar4 = *(arg1 + 0x11a);
    uVar2 = *(arg1 + 0x112);
    *(arg2 + 0x30) = *(arg1 + 0x122);
    *(arg2 + 0x38) = uVar3;
    *(arg2 + 0x20) = uVar2;
    *(arg2 + 0x28) = uVar4;
    uVar4 = *(arg1 + 0x14a);
    uVar3 = *(arg1 + 0x13a);
    uVar2 = *(arg1 + 0x132);
    *(arg2 + 0x50) = *(arg1 + 0x142);
    *(arg2 + 0x58) = uVar4;
    *(arg2 + 0x40) = uVar2;
    *(arg2 + 0x48) = uVar3;
    return 0;
}


// ===== sym._sha1_hmac_import @ 0x0800d16c (size 360) =====

ulong sym._sha1_hmac_import(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    
    iVar5 = *(arg2 + 0x18);
    *(arg1 + 0x108) = iVar5;
    uVar2 = *(arg2 + 0x58);
    uVar1 = *(arg2 + 0x40);
    uVar3 = *(arg2 + 0x48);
    *(arg1 + 0x142) = *(arg2 + 0x50);
    *(arg1 + 0x14a) = uVar2;
    *(arg1 + 0x13a) = uVar3;
    *(arg1 + 0x132) = uVar1;
    uVar2 = *(arg2 + 0x38);
    uVar1 = *(arg2 + 0x20);
    uVar3 = *(arg2 + 0x28);
    *(arg1 + 0x122) = *(arg2 + 0x30);
    *(arg1 + 0x12a) = uVar2;
    *(arg1 + 0x11a) = uVar3;
    *(arg1 + 0x112) = uVar1;
    if (*(arg2 + 0x18) < 0x41) {
        *(arg1 + 0x110) = 1;
    }
    else {
        iVar5 = iVar5 + 0x40;
        *(arg1 + 0x110) = 0;
    }
    *(arg1 + 0xf8) = iVar5 & 0xffffffc0;
    *(arg1 + 0xfc) = iVar5 >> 0x20;
    puVar7 = arg1 + 0x1f8;
    uVar4 = *(*(arg1 + 0x20) + 0xa8);
    puVar9 = arg2;
    if (3 < uVar4) {
        uVar10 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar8 = arg2;
        do {
            uVar10 = uVar10 - 1;
            *puVar6 = *(puVar8 + 3);
            puVar6[1] = *(puVar8 + 2);
            puVar6[2] = *puVar8 >> 8;
            puVar7 = puVar6 + 4;
            puVar9 = puVar8 + 1;
            puVar6[3] = *puVar8;
            puVar6 = puVar7;
            puVar8 = puVar9;
        } while (uVar10 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar11 = 0x18;
    iVar5 = iVar11;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar5 = 0x10;
            iVar12 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800d2bc;
            iVar5 = 8;
            iVar11 = 0x10;
            iVar12 = 2;
            *puVar7 = *(puVar9 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar12;
        *puVar6 = *puVar9 >> iVar11;
    }
    *puVar7 = *puVar9 >> iVar5;
code_r0x0800d2bc:
    *(arg1 + 0x154) = *(arg2 + 0x18) & 0x3f;
    return 0;
}


// ===== sym._sha1_hmac_setkey @ 0x0800d2d4 (size 160) =====

int sym._sha1_hmac_setkey(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x160) = 0;
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x158) = 0;
    *(arg1 + 0x140) = 0;
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x130) = 0;
    *(arg1 + 0x138) = 0;
    if (arg3 < 0x41) {
        memcpy(arg1 + 0x130,arg2,arg3);
        iVar1 = 0;
    }
    else {
        *(arg1 + 0x124) = 0x1400000000;
        iVar1 = sym._sha_hmac_setkey(arg1,arg2,arg3);
        if (iVar1 != 0) {
            _printk(0x8001031);
        }
        arg3 = 0x40;
    }
    *(arg1 + 300) = arg3;
    return iVar1;
}


// ===== sym._qcrypto_ahash_hmac_cra_init @ 0x0800d374 (size 260) =====

ulong sym._qcrypto_ahash_hmac_cra_init(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x80;
    *(arg1 + -0x40) = 0x1d8;
    uVar3 = *(*(arg1 + 0x10) + 0x388);
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x98) = uVar3;
    *(arg1 + 0x80) = piVar1;
    *(arg1 + 0x88) = piVar1;
    iVar2 = kmem_cache_alloc_trace(_simple_open,0xcc0,600);
    if (iVar2 == 0) {
        *(arg1 + 0xf0) = 0;
        if (*piVar1 == piVar1) {
            iVar2 = *(arg1 + 0xf0);
        }
        else {
            _printk(0x8001281,"");
            iVar2 = *(arg1 + 0xf0);
        }
        if (iVar2 == 0) {
            uVar3 = 0xfffffff4;
        }
        else {
            kfree_sensitive();
            uVar3 = 0xfffffff4;
            *(arg1 + 0xf0) = 0;
        }
    }
    else {
        *(iVar2 + 0x20) = arg1;
        *(arg1 + 0xf0) = iVar2;
        *(arg1 + 0xf8) = 0;
        __init_swait_queue_head(arg1 + 0x100,"",obj.init_completion.__key);
        uVar3 = 0;
        iVar2 = *(arg1 + 0xf0);
        *(iVar2 + 0x10) = sym._crypto_sha_hmac_ahash_req_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        *(iVar2 + 0x18) = arg1 + 0xf8;
        *(iVar2 + 0x28) = 0x400;
        *arg1 = 0;
    }
    return uVar3;
}


// ===== sym._sha256_hmac_init @ 0x0800d47c (size 244) =====

ulong sym._sha256_hmac_init(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar5 = *(arg1 + 0x20);
    iVar6 = *(iVar5 + 0x98);
    *(arg1 + 0x122) = 0;
    *(arg1 + 0x11a) = 0;
    *0x8001000 = *0x8001000 + 1;
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x13a) = 0;
    *(arg1 + 0x12a) = 0;
    *(arg1 + 0x132) = 0;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x14a) = 0;
    *(arg1 + 0x142) = 0;
    uVar4 = *0x800412c;
    uVar3 = *0x8004124;
    *(arg1 + 0x154) = 0;
    uVar2 = *0x800411c;
    uVar1 = _obj._std_init_vector_sha256_uint8;
    *(arg1 + 0x108) = 0;
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0x210) = uVar4;
    *(arg1 + 0x104) = 0;
    *(arg1 + 0x112) = 0;
    *(arg1 + 0x208) = uVar3;
    *(arg1 + 0x1f8) = uVar1;
    *(arg1 + 0x200) = uVar2;
    *(iVar5 + 0xa8) = 0x20;
    if (*(iVar6 + 0x13) == '\0') {
        *(iVar5 + 0xa4) = 1;
        iVar5 = 0;
        iVar6 = *(arg1 + 0x20);
        do {
            *(arg1 + 0x112 + iVar5) = *(iVar6 + 0xb0 + iVar5) ^ 0x36;
            iVar5 = iVar5 + 1;
        } while (iVar5 != 0x40);
        *(arg1 + 0x154) = 0x40;
    }
    else {
        *(iVar5 + 0xa4) = 3;
    }
    return 0;
}


// ===== sym._sha256_hmac_update @ 0x0800d570 (size 104) =====

ulong sym._sha256_hmac_update(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(*(arg1 + 0x20) + 0x98) + 0x19) == '\0') || (iVar1 = sym._copy_source(arg1), iVar1 == 0)) {
        *(arg1 + 0x108) = *(arg1 + 0x108) + *(arg1 + 0x30);
        uVar2 = sym._sha_update(arg1);
    }
    else {
        uVar2 = 0xfffffff4;
    }
    return uVar2;
}


// ===== sym._sha256_hmac_final @ 0x0800d5d8 (size 620) =====

ulong sym._sha256_hmac_final(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    ulong uVar9;
    uint uVar10;
    ulong *in_x18;
    uint64_t uVar11;
    int64_t arg1_00;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = *(arg1 + 0x20);
    arg1_00 = *(iVar13 + 0x98);
    if (*(arg1_00 + 0x13) == '\0') {
        uVar11 = arg1 + 0x197U & 0xffffffffffffffc0;
        iVar12 = *(iVar13 + 0xf0);
        memcpy(uVar11,arg1 + 0x112,*(arg1 + 0x154));
        uVar3 = arg1 + 0x197U & 0xfc0;
        iVar2 = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        puVar1 = arg1 + 0x1f8;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x220) = uVar3;
        *(arg1 + 0x218) = iVar2;
        *(iVar12 + 0x30) = *(arg1 + 0x154);
        *(iVar12 + 0x38) = arg1 + 0x218;
        *(iVar12 + 0x40) = puVar1;
        *(arg1 + 0x111) = 1;
        uVar9 = sym._qcrypto_queue_req(arg1_00,*(iVar13 + 0x90),iVar12);
        if ((uVar9 == -0x10) || (uVar9 == -0x73)) {
            uVar9 = wait_for_completion_interruptible(iVar13 + 0xf8);
            *(iVar13 + 0xf8) = 0;
        }
        if (uVar9 != 0) {
            return uVar9;
        }
        iVar12 = *(arg1 + 0x20);
        iVar13 = 0;
        arg1_00 = *(iVar12 + 0x98);
        do {
            *(uVar11 + iVar13) = *(iVar12 + 0xb0 + iVar13) ^ 0x5c;
            iVar13 = iVar13 + 1;
        } while (iVar13 != 0x40);
        uVar4 = *(arg1 + 0x210);
        uVar9 = *puVar1;
        uVar5 = *(arg1 + 0x200);
        *(uVar11 + 0x50) = *(arg1 + 0x208);
        *(uVar11 + 0x58) = uVar4;
        *(uVar11 + 0x40) = uVar9;
        *(uVar11 + 0x48) = uVar5;
        *(arg1 + 0x220) = uVar3;
        *(arg1 + 0x224) = 0x60;
        *(arg1 + 0x218) = iVar2;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x30) = 0x60;
        *(arg1 + 0x110) = 1;
        *(arg1 + 0xf8) = 0;
        *(arg1 + 0x100) = 0;
        *(arg1 + 0x154) = 0;
        *(arg1 + 0x108) = 0;
        uVar7 = *0x800412c;
        uVar6 = *0x8004124;
        uVar5 = *0x800411c;
        uVar4 = *0x8004108;
        uVar9 = _obj._std_init_vector_sha1_uint8;
        if (*(iVar12 + 0xa4) == 0) {
            uVar10 = 0x14;
            *(arg1 + 0x208) = 0xf0e1d2c3;
            *puVar1 = uVar9;
            *(arg1 + 0x200) = uVar4;
        }
        else {
            uVar10 = 0x20;
            *puVar1 = _obj._std_init_vector_sha256_uint8;
            *(arg1 + 0x200) = uVar5;
            *(arg1 + 0x208) = uVar6;
            *(arg1 + 0x210) = uVar7;
        }
        *(iVar12 + 0xa8) = uVar10;
        *(arg1 + 0x111) = 1;
        iVar13 = *(iVar12 + 0x90);
    }
    else {
        if ((*(arg1_00 + 0x19) != '\0') && (iVar8 = sym._copy_source(arg1), iVar8 != 0)) {
            return 0xfffffff4;
        }
        uVar11 = arg1 + 0x197U & 0xffffffffffffffc0;
        *(arg1 + 0x111) = 1;
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        memcpy(uVar11,arg1 + 0x112,*(arg1 + 0x154));
        *(arg1 + 0x38) = arg1 + 0x218;
        *(arg1 + 0x220) = arg1 + 0x197U & 0xfc0;
        *(arg1 + 0x224) = *(arg1 + 0x154);
        *(arg1 + 0x218) = (((uVar11 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
        *(arg1 + 0x30) = *(arg1 + 0x154);
        iVar13 = *(iVar13 + 0x90);
    }
    uVar9 = sym._qcrypto_queue_req(arg1_00,iVar13,arg1);
    return uVar9;
}


// ===== sym._sha256_hmac_digest @ 0x0800d844 (size 220) =====

ulong sym._sha256_hmac_digest(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x154) = 0;
    *(arg1 + 0x110) = 1;
    *(arg1 + 0x108) = 0;
    uVar1 = *0x800411c;
    uVar3 = _obj._std_init_vector_sha256_uint8;
    *0x8001000 = *0x8001000 + 1;
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0x104) = 0;
    *(arg1 + 0x1f8) = uVar3;
    *(arg1 + 0x200) = uVar1;
    uVar3 = *0x800412c;
    *(arg1 + 0x208) = *0x8004124;
    *(arg1 + 0x210) = uVar3;
    *(*(arg1 + 0x20) + 0xa4) = 0x2000000003;
    iVar4 = *(arg1 + 0x20);
    arg1_00 = *(iVar4 + 0x98);
    if ((*(arg1_00 + 0x19) == '\0') || (iVar2 = sym._copy_source(arg1), iVar2 == 0)) {
        *(arg1 + 0xb0) = *(arg1 + 0x38);
        *(arg1 + 0xb8) = *(arg1 + 0x30);
        *(arg1 + 0x110) = 0x101;
        uVar3 = sym._qcrypto_queue_req(arg1_00,*(iVar4 + 0x90),arg1);
    }
    else {
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym._sha256_hmac_export @ 0x0800d920 (size 40) =====

ulong sym._sha256_hmac_export(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym._sha256_export(arg1,arg2);
    return 0;
}


// ===== sym._sha256_hmac_import @ 0x0800d948 (size 360) =====

ulong sym._sha256_hmac_import(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uchar *puVar6;
    uchar *puVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    
    iVar5 = *(arg2 + 0x20);
    *(arg1 + 0x108) = iVar5;
    uVar2 = *(arg2 + 0x60);
    uVar1 = *(arg2 + 0x48);
    uVar3 = *(arg2 + 0x50);
    *(arg1 + 0x142) = *(arg2 + 0x58);
    *(arg1 + 0x14a) = uVar2;
    *(arg1 + 0x13a) = uVar3;
    *(arg1 + 0x132) = uVar1;
    uVar2 = *(arg2 + 0x40);
    uVar1 = *(arg2 + 0x28);
    uVar3 = *(arg2 + 0x30);
    *(arg1 + 0x122) = *(arg2 + 0x38);
    *(arg1 + 0x12a) = uVar2;
    *(arg1 + 0x11a) = uVar3;
    *(arg1 + 0x112) = uVar1;
    if (*(arg2 + 0x20) < 0x41) {
        *(arg1 + 0x110) = 1;
    }
    else {
        iVar5 = iVar5 + 0x40;
        *(arg1 + 0x110) = 0;
    }
    *(arg1 + 0xf8) = iVar5 & 0xffffffc0;
    *(arg1 + 0xfc) = iVar5 >> 0x20;
    puVar7 = arg1 + 0x1f8;
    uVar4 = *(*(arg1 + 0x20) + 0xa8);
    puVar9 = arg2;
    if (3 < uVar4) {
        uVar10 = uVar4 >> 2;
        puVar6 = puVar7;
        puVar8 = arg2;
        do {
            uVar10 = uVar10 - 1;
            *puVar6 = *(puVar8 + 3);
            puVar6[1] = *(puVar8 + 2);
            puVar6[2] = *puVar8 >> 8;
            puVar7 = puVar6 + 4;
            puVar9 = puVar8 + 1;
            puVar6[3] = *puVar8;
            puVar6 = puVar7;
            puVar8 = puVar9;
        } while (uVar10 != 0);
    }
    uVar4 = uVar4 & 3;
    iVar11 = 0x18;
    iVar5 = iVar11;
    if (uVar4 != 1) {
        if (uVar4 == 2) {
            iVar5 = 0x10;
            iVar12 = 1;
            puVar6 = puVar7;
        }
        else {
            if (uVar4 != 3) goto code_r0x0800da98;
            iVar5 = 8;
            iVar11 = 0x10;
            iVar12 = 2;
            *puVar7 = *(puVar9 + 3);
            puVar6 = puVar7 + 1;
        }
        puVar7 = puVar7 + iVar12;
        *puVar6 = *puVar9 >> iVar11;
    }
    *puVar7 = *puVar9 >> iVar5;
code_r0x0800da98:
    *(arg1 + 0x154) = *(arg2 + 0x20) & 0x3f;
    return 0;
}


// ===== sym._sha256_hmac_setkey @ 0x0800dab0 (size 164) =====

int sym._sha256_hmac_setkey(int64_t arg1,uchar noname_1 [16],uint32_t arg2)

{
    int iVar1;
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x160) = 0;
    *(arg1 + 0x168) = 0;
    *(arg1 + 0x150) = 0;
    *(arg1 + 0x158) = 0;
    *(arg1 + 0x140) = 0;
    *(arg1 + 0x148) = 0;
    *(arg1 + 0x130) = 0;
    *(arg1 + 0x138) = 0;
    if (arg2 < 0x41) {
        memcpy(arg1 + 0x130,in_x1,arg2);
        iVar1 = 0;
    }
    else {
        *(arg1 + 0x124) = 0x2000000001;
        iVar1 = sym._sha_hmac_setkey(arg1,in_x1,arg2);
        if (iVar1 != 0) {
            _printk(0x8000b4e);
        }
        arg2 = 0x40;
    }
    *(arg1 + 300) = arg2;
    return iVar1;
}


// ===== sym._sha_hmac_setkey @ 0x0800db54 (size 648) =====

//WARNING: Type propagation algorithm not settling

uint64_t sym._sha_hmac_setkey(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uint64_t auStack_88 [5];
    uint64_t uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    iVar5 = arg3;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    auStack_88[2] = 0;
    auStack_88[3] = 0;
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    iVar7 = __kmalloc(*(arg1 + 0x40) + 0x80,0xcc0);
    if (iVar7 == 0) {
        uVar10 = 0xfffffff4;
    }
    else {
        auStack_88[0] = auStack_88[0] & 0xffffffff00000000;
        *(iVar7 + 0x20) = arg1 + 0x80;
        __init_swait_queue_head(auStack_88 + 1,"",obj.init_completion.__key);
        *(arg1 + 0x80) = 0;
        *(iVar7 + 0x28) = 0x400;
        *(iVar7 + 0x10) = sym._crypto_sha_hmac_ahash_req_complete.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        *(iVar7 + 0x18) = auStack_88;
        iVar8 = __kmalloc(iVar5 + 0x40,0xdc0);
        if (iVar8 == 0) {
            uVar10 = 0xfffffff4;
        }
        else {
            memcpy(iVar8,arg2,arg3 & 0xffffffff);
            auStack_88[4] = (((iVar8 << 8) >> 8) + 0x8000000000U >> 6 & 0x3ffffffffffffc0) - 0x1fffffffe;
            uStack_60 = CONCAT44(iVar5,iVar8) & 0xffffffff00000f80;
            *(iVar7 + 0x30) = iVar5;
            *(iVar7 + 0x38) = auStack_88 + 4;
            *(iVar7 + 0x40) = arg1 + 0x130;
            iVar5 = *(arg1 + 0x124);
            iVar9 = *(iVar7 + 0x20);
            *(iVar7 + 0x110) = 1;
            *(iVar7 + 0x154) = 0;
            *(iVar7 + 0xf8) = 0;
            *(iVar7 + 0x100) = 0;
            *(iVar7 + 0x108) = 0;
            if (iVar5 == 0) {
                *(iVar9 + 0xa4) = 0;
                *(iVar7 + 0x142) = 0;
                *(iVar7 + 0x14a) = 0;
                uVar2 = *0x8004108;
                uVar1 = _obj._std_init_vector_sha1_uint8;
                *(iVar7 + 0x132) = 0;
                *(iVar7 + 0x13a) = 0;
                *(iVar7 + 0x122) = 0;
                *(iVar7 + 0x12a) = 0;
                *(iVar7 + 0x112) = 0;
                *(iVar7 + 0x11a) = 0;
                *(iVar7 + 0x208) = 0xf0e1d2c3;
                *(iVar7 + 0x1f8) = uVar1;
                *(iVar7 + 0x200) = uVar2;
                *(iVar9 + 0xa8) = 0x14;
                iVar9 = *(iVar7 + 0x20);
            }
            else {
                *(iVar9 + 0xa4) = 1;
                uVar2 = *0x800411c;
                uVar1 = _obj._std_init_vector_sha256_uint8;
                *(iVar7 + 0x142) = 0;
                *(iVar7 + 0x14a) = 0;
                *(iVar7 + 0x132) = 0;
                *(iVar7 + 0x13a) = 0;
                *(iVar7 + 0x122) = 0;
                *(iVar7 + 0x12a) = 0;
                *(iVar7 + 0x112) = 0;
                *(iVar7 + 0x11a) = 0;
                uVar4 = *0x800412c;
                uVar3 = *0x8004124;
                *(iVar7 + 0x1f8) = uVar1;
                *(iVar7 + 0x200) = uVar2;
                *(iVar7 + 0x208) = uVar3;
                *(iVar7 + 0x210) = uVar4;
                *(iVar9 + 0xa8) = 0x20;
                iVar9 = *(iVar7 + 0x20);
            }
            *0x8001000 = *0x8001000 + 1;
            arg1_00 = *(iVar9 + 0x98);
            if ((*(arg1_00 + 0x19) == '\0') || (iVar5 = sym._copy_source(iVar7), iVar5 == 0)) {
                *(iVar7 + 0xb0) = *(iVar7 + 0x38);
                *(iVar7 + 0xb8) = *(iVar7 + 0x30);
                *(iVar7 + 0x110) = 0x101;
                uVar6 = sym._qcrypto_queue_req(arg1_00,*(iVar9 + 0x90),iVar7);
                uVar10 = uVar6;
                if ((uVar6 == 0xfffffff0) || (uVar6 == 0xffffff8d)) {
                    uVar10 = wait_for_completion_interruptible(auStack_88);
                    uVar10 = uVar10 & 0xffffffff;
                    *(arg1 + 0x178) = 0;
                }
            }
            else {
                uVar10 = 0xfffffff4;
            }
            kfree_sensitive(iVar8);
        }
        kfree_sensitive(iVar7);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar10;
    }
    auVar11 = __stack_chk_fail();
    uVar10 = auVar11._0_8_;
    if (auVar11._8_4_ != -0x73) {
        *extraout_x18 = sym._crypto_sha_hmac_ahash_req_complete;
        uVar10 = complete(*(uVar10 + 0x18));
    }
    return uVar10;
}


// ===== sym._crypto_sha_hmac_ahash_req_complete @ 0x0800dddc (size 52) =====

void sym._crypto_sha_hmac_ahash_req_complete(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg2 != 0xffffff8d) {
        *in_x18 = unaff_x30;
        complete(*(arg1 + 0x18));
    }
    return;
}


// ===== sym._qcrypto_aead_ccm_setkey @ 0x0800de10 (size 156) =====

ulong sym._qcrypto_aead_ccm_setkey(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg3 == 0x10) || (arg3 == 0x20)) || ((arg3 == 0x18 && (*(*(arg1 + 0x118) + 0x15) != '\0')))) {
        *(arg1 + 0x1b8) = arg3;
        memcpy(arg1 + 0x178,arg2,arg3);
        *(arg1 + 0x1c0) = arg3;
        memcpy(arg1 + 0x128,arg2,arg3);
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffea;
        *(arg1 + 0x1b8) = 0;
    }
    return uVar1;
}


// ===== sym._qcrypto_aead_ccm_setauthsize @ 0x0800deac (size 64) =====

ulong sym._qcrypto_aead_ccm_setauthsize(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((arg2 < 0x11) && ((1 << (arg2 & 0x1f) & 0x15550U) != 0)) {
        uVar1 = 0;
        *(arg1 + 0x1bc) = arg2;
    }
    return uVar1;
}


// ===== sym._qcrypto_aead_encrypt_aes_ccm @ 0x0800deec (size 152) =====

ulong sym._qcrypto_aead_encrypt_aes_ccm(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    if (*(iVar2 + 0x13c) - 4 < 0xd && (*(iVar2 + 0x13c) & 1) == 0) {
        arg1_00 = *(iVar2 + 0x98);
        if ((*(iVar2 + 0x140) == 0x20) || (*(iVar2 + 0x140) == 0x10)) {
            *(arg1 + 0xcc) = 1;
            *(arg1 + 0x100) = 2;
            *(arg1 + 0x108) = 4;
            *(arg1 + 0xb0) = *(arg1 + 0x38);
            *0x8001000 = *0x8001000 + 1;
            uVar1 = sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym._qcrypto_aead_decrypt_aes_ccm @ 0x0800df84 (size 156) =====

ulong sym._qcrypto_aead_decrypt_aes_ccm(int64_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20);
    if (*(iVar2 + 0x13c) - 4 < 0xd && (*(iVar2 + 0x13c) & 1) == 0) {
        arg1_00 = *(iVar2 + 0x98);
        if ((*(iVar2 + 0x140) == 0x20) || (*(iVar2 + 0x140) == 0x10)) {
            *(arg1 + 0xcc) = 1;
            *(arg1 + 0x108) = 4;
            *(arg1 + 0x100) = 0x100000002;
            *(arg1 + 0xb0) = *(arg1 + 0x38);
            *0x8001000 = *0x8001000 + 1;
            uVar1 = sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
            return uVar1;
        }
    }
    return 0xffffffea;
}


// ===== sym._qcrypto_cra_aead_ccm_init @ 0x0800e020 (size 136) =====

ulong sym._qcrypto_cra_aead_ccm_init(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar1 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = arg1 + 0x100;
        *(arg1 + 0x108) = arg1 + 0x100;
    }
    *(arg1 + 0x124) = 4;
    return uVar1;
}


// ===== sym._qcrypto_aead_rfc4309_ccm_setkey @ 0x0800e0a8 (size 184) =====

ulong sym._qcrypto_aead_rfc4309_ccm_setkey(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ushort uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg3 - 3;
    uVar4 = uVar2;
    if (arg3 < 3) {
        uVar3 = 0xffffffea;
    }
    else {
        uVar1 = *(arg2 + uVar4);
        *(arg1 + 0x1c6) = *(arg2 + uVar4 + 1);
        *(arg1 + 0x1c4) = uVar1;
        if (((arg3 == 0x13) || (arg3 == 0x23)) || ((arg3 == 0x1b && (*(*(arg1 + 0x118) + 0x15) != '\0')))) {
            *(arg1 + 0x1b8) = uVar2;
            memcpy(arg1 + 0x178,arg2,uVar4);
            *(arg1 + 0x1c0) = uVar2;
            memcpy(arg1 + 0x128,arg2,uVar4);
            uVar3 = 0;
        }
        else {
            uVar3 = 0xffffffea;
            *(arg1 + 0x1b8) = 0;
        }
    }
    return uVar3;
}


// ===== sym._qcrypto_aead_rfc4309_ccm_setauthsize @ 0x0800e160 (size 64) =====

ulong sym._qcrypto_aead_rfc4309_ccm_setauthsize(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    
    uVar1 = 0xffffffea;
    if ((arg2 < 0x11) && ((1 << (arg2 & 0x1f) & 0x11100U) != 0)) {
        uVar1 = 0;
        *(arg1 + 0x1bc) = arg2;
    }
    return uVar1;
}


// ===== sym._qcrypto_aead_rfc4309_enc_aes_ccm @ 0x0800e1a0 (size 172) =====

ulong sym._qcrypto_aead_rfc4309_enc_aes_ccm(int64_t arg1)

{
    ushort uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x30) | 4) == 0x14) {
        iVar2 = *(arg1 + 0x20);
        arg1_00 = *(iVar2 + 0x98);
        *(arg1 + 0xc0) = 0;
        *(arg1 + 0x100) = 2;
        *(arg1 + 0xcc) = 1;
        *(arg1 + 0x108) = 4;
        puVar4 = arg1 + 0xb8;
        *puVar4 = 0;
        *puVar4 = 3;
        uVar1 = *(iVar2 + 0x144);
        *(arg1 + 0xbb) = *(iVar2 + 0x146);
        *(arg1 + 0xb9) = uVar1;
        uVar3 = **(arg1 + 0x38);
        *(arg1 + 0xd0) = 1;
        *(arg1 + 0xb0) = puVar4;
        *(arg1 + 0xbc) = uVar3;
        *0x8001000 = *0x8001000 + 1;
        uVar3 = sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym._qcrypto_aead_rfc4309_dec_aes_ccm @ 0x0800e24c (size 176) =====

ulong sym._qcrypto_aead_rfc4309_dec_aes_ccm(int64_t arg1)

{
    ushort uVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x30) | 4) == 0x14) {
        iVar2 = *(arg1 + 0x20);
        arg1_00 = *(iVar2 + 0x98);
        *(arg1 + 0x100) = 0x100000002;
        *(arg1 + 0xcc) = 1;
        *(arg1 + 0x108) = 4;
        *(arg1 + 0xc0) = 0;
        puVar4 = arg1 + 0xb8;
        *puVar4 = 0;
        *puVar4 = 3;
        uVar1 = *(iVar2 + 0x144);
        *(arg1 + 0xbb) = *(iVar2 + 0x146);
        *(arg1 + 0xb9) = uVar1;
        uVar3 = **(arg1 + 0x38);
        *(arg1 + 0xd0) = 1;
        *(arg1 + 0xb0) = puVar4;
        *(arg1 + 0xbc) = uVar3;
        *0x8001000 = *0x8001000 + 1;
        uVar3 = sym._qcrypto_queue_req(arg1_00,*(iVar2 + 0x90),arg1);
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym._qcrypto_cra_aead_rfc4309_ccm_init @ 0x0800e2fc (size 136) =====

ulong sym._qcrypto_cra_aead_rfc4309_ccm_init(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 4) = 0x1c8;
    if (*(arg1 + 0x90) == 0x580) {
        _printk(0x80008d5);
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x118) = *(*(arg1 + 0x90) + 0x188);
        get_random_bytes(arg1 + 0x168,0x10);
        uVar1 = 0;
        *(arg1 + 0x110) = 0;
        *(arg1 + 0x100) = arg1 + 0x100;
        *(arg1 + 0x108) = arg1 + 0x100;
    }
    *(arg1 + 0x124) = 4;
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x0800e384 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800e3c8

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
    //switch table (4 cases) at 0x800144b
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800e3dc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x0800e50c (size 396) =====

void sym.init_module(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    _segment.ehdr = debugfs_create_dir("",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        snprintf(&uStack_38,0xf,"",1);
        _obj._debug_qcrypto = 0;
        iVar1 = debugfs_create_file(&uStack_38,0x1a4,_segment.ehdr,obj._debug_qcrypto,obj._debug_stats_ops);
        if (iVar1 == 0) {
            debugfs_remove(_segment.ehdr);
        }
    }
    *0x80004e8 = 0x80004e8;
    *0x80004f0 = 0x80004e8;
    *0x8000530 = 0x8000530;
    *0x8000538 = 0x8000530;
    *0x80005a0 = 0;
    *0x80004e4 = 0;
    __mutex_init(0x8000548,"",obj._debug_dent);
    *0x80005b0 = alloc_workqueue("",0x38,1);
    if (*0x80005b0 == 0) {
        _printk(0x80012c4);
        uVar2 = 0xfffffff4;
    }
    else {
        *0x80005b8 = 0xfffffffe0;
        *0x80005c0 = 0x80005c0;
        *0x80005c8 = 0x80005c0;
        *0x8000540 = 0;
        *0x80005d0 = sym.seq_response.efdd1d0348837140a5be4140d40c9b69.cfi_jt;
        *0x8000578 = 0;
        *0x8000600 = 0;
        *0x80005ec = 1;
        crypto_init_queue(0x8000580,0x300);
        uVar2 = __platform_driver_register
                          (reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt,obj.__this_module);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.cleanup_module;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x0800e698 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc._qcrypto_probe.efdd1d0348837140a5be4140d40c9b69.cfi_jt);
    return;
}

