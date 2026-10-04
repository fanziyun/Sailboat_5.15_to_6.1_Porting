// decompiled from qdss_bridge by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 524) =====

//WARNING: Switch with 1 destination removed at 0x08002fb0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x2648401b1c1d210c) {
            if (arg1 != -0x66d421a09845f9f8) {
                if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x8001260 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x08002f70;
            }
            pcVar2 = sym.mode_show.1230218ac825476707fa02a509da176f.cfi_jt;
code_r0x080011f8:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08002f70;
        }
        if (arg1 == -0x2648401b1c1d210c) {
            pcVar2 = sym.qdss_mhi_probe.1230218ac825476707fa02a509da176f.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.mhi_uci_release.1230218ac825476707fa02a509da176f.cfi_jt;
                goto code_r0x080011f8;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08002f70;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x6e9fb1c868c44dc4) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.mhi_uci_read.1230218ac825476707fa02a509da176f.cfi_jt;
        }
        else if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.mode_store.1230218ac825476707fa02a509da176f.cfi_jt;
        }
        else {
            if (arg1 != 0x3663961c71c6fd25) goto code_r0x08002f70;
            pcVar2 = sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt;
        }
    }
    else if (arg1 == 0x6e9fb1c868c44dc4) {
        pcVar2 = sym.qdss_mhi_remove.1230218ac825476707fa02a509da176f.cfi_jt;
    }
    else {
        if (arg1 == 0x791a5468d96d0f95) {
            pcVar2 = sym.qdss_mhi_read_cb.1230218ac825476707fa02a509da176f.cfi_jt;
            goto code_r0x080011f8;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002f70;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08002f70:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002fc4);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001218 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.qdss_mhi_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001220 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"qdss_bridge",obj.qdss_mhi_init.__key);
    if (_segment.ehdr < 0xfffffffffffff001) {
        *(_segment.ehdr + 0x18) = obj.qdss_bridge_groups;
        iVar1 = __mhi_driver_register(obj.qdss_mhi_driver,obj.__this_module);
        if (iVar1 != 0) {
            class_destroy(_segment.ehdr);
        }
    }
    else {
        iVar1 = -0x13;
    }
    return iVar1;
}


// ===== sym.mhi_uci_read.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001228 (size 8) =====

uint64_t sym.mhi_uci_read.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t extraout_x1;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    if (param_2 == 0) {
        param_3 = 0xffffffffffffffea;
        goto code_r0x08002954;
    }
    iVar9 = *(param_1 + 0xd8);
    iVar6 = iVar9 + 0x3c;
    uVar11 = *(iVar9 + 0x50);
    _raw_spin_lock_bh(iVar6);
    if ((*(iVar9 + 8) == 1) && (*(iVar9 + 0x38) == 1)) {
        piVar13 = *(iVar9 + 0x168);
        if (piVar13 == NULL) {
            piVar12 = iVar9 + 0x150;
            if (piVar12 == *piVar12) {
                _raw_spin_unlock_bh(iVar6);
                if ((*(iVar9 + 8) == 1) && (piVar12 == *piVar12)) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    while ((iVar5 = prepare_to_wait_event(iVar9 + 0x170,&uStack_80,1), *(iVar9 + 8) == 1 &&
                           (piVar12 == *piVar12))) {
                        if (iVar5 != 0) {
                            if (iVar5 != -0x200) goto code_r0x08002890;
                            goto code_r0x08002950;
                        }
                        schedule();
                    }
                    finish_wait(iVar9 + 0x170,&uStack_80);
                }
code_r0x08002890:
                _raw_spin_lock_bh(iVar6);
                if (*(iVar9 + 8) != 1) goto code_r0x08002948;
            }
            piVar13 = *(iVar9 + 0x168);
            if (piVar13 == NULL) {
                piVar13 = *piVar12;
                if ((piVar13 == NULL) || (piVar12 == piVar13)) {
                    _raw_spin_unlock_bh(iVar6);
                    param_3 = 0xfffffffffffffffb;
                    goto code_r0x08002954;
                }
                uVar7 = __list_del_entry_valid(piVar13);
                if ((uVar7 & 1) != 0) {
                    iVar5 = *piVar13;
                    piVar12 = piVar13[1];
                    *(iVar5 + 8) = piVar12;
                    *piVar12 = iVar5;
                }
                *piVar13 = -0x2152ffffffffff00;
                piVar13[1] = -0x2152fffffffffede;
                *(iVar9 + 0x168) = piVar13;
                *(iVar9 + 0x188) = piVar13[3];
            }
        }
        _raw_spin_unlock_bh(iVar6);
        uVar7 = *(iVar9 + 0x188);
        if (uVar7 <= param_3) {
            param_3 = uVar7;
        }
        if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80029a4);
            (*pcVar2)();
        }
        noname_1 = __check_object_size(piVar13[2] + (piVar13[3] - uVar7),param_3,1);
        iVar3 = sym._copy_to_user(param_2,noname_1,param_3);
        if (iVar3 == 0) {
            iVar5 = *(iVar9 + 0x188) - param_3;
            *(iVar9 + 0x188) = iVar5;
            if (iVar5 == 0) {
                _raw_spin_lock_bh(iVar6);
                *(iVar9 + 0x168) = 0;
                if (*(iVar9 + 8) == 1) {
                    iVar3 = mhi_queue_buf(uVar11,2,piVar13[2],*(iVar9 + 0x30),2);
                    _raw_spin_unlock_bh(iVar6);
                    if (iVar3 == 0) {
                        kfree(piVar13);
                        goto code_r0x08002954;
                    }
                }
                else {
                    _raw_spin_unlock_bh(iVar6);
                    iVar3 = -0x200;
                }
                _printk(0x8000730,iVar3);
                sym.qdss_del_buf_tbl_entry(iVar9,piVar13[2]);
                piVar13[2] = 0;
                kfree(piVar13);
                param_3 = iVar3;
            }
        }
        else {
            param_3 = iVar3;
        }
    }
    else {
code_r0x08002948:
        _raw_spin_unlock_bh(iVar6);
code_r0x08002950:
        param_3 = 0xfffffffffffffe00;
    }
code_r0x08002954:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return param_3;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8002a54;
    iVar9 = _segment.ehdr;
    iVar6 = _segment.ehdr + 0x3c;
    _raw_spin_lock_bh(iVar6);
    if (*(iVar9 + 8) == 0) {
        _raw_spin_unlock_bh(iVar6);
        uVar4 = mhi_prepare_for_transfer(*(iVar9 + 0x50),0);
        if (uVar4 == 0) {
            if (*(iVar9 + 4) < 1) {
                uVar4 = 0xfffffffb;
code_r0x08002b9c:
                mhi_unprepare_from_transfer(*(iVar9 + 0x50));
                piVar13 = *(iVar9 + 0x150);
                while (piVar13 != iVar9 + 0x150) {
                    piVar12 = *piVar13;
                    uVar7 = __list_del_entry_valid(piVar13);
                    if ((uVar7 & 1) != 0) {
                        iVar6 = *piVar13;
                        piVar1 = piVar13[1];
                        *(iVar6 + 8) = piVar1;
                        *piVar1 = iVar6;
                    }
                    *piVar13 = -0x2152ffffffffff00;
                    piVar13[1] = -0x2152fffffffffede;
                    kfree(piVar13[2]);
                    kfree(piVar13);
                    piVar13 = piVar12;
                }
            }
            else {
                iVar3 = 0;
                uVar11 = *(iVar9 + 0x50);
                do {
                    iVar6 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar6 = 0x30;
                    }
                    piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x20);
                    if (piVar13 == NULL) {
code_r0x08002b98:
                        uVar4 = 0xfffffff4;
                        goto code_r0x08002b9c;
                    }
                    iVar6 = __kmalloc(*(iVar9 + 0x30),0xdc0);
                    if (iVar6 == 0) {
                        kfree(piVar13);
                        goto code_r0x08002b98;
                    }
                    uVar8 = *(iVar9 + 0x30);
                    piVar13[2] = iVar6;
                    uVar4 = mhi_queue_buf(uVar11,2,iVar6,uVar8,2);
                    if (uVar4 != 0) {
                        kfree(iVar6);
                        kfree(piVar13);
                        _printk(0x80006c2,iVar3);
                        goto code_r0x08002b9c;
                    }
                    puVar10 = *(iVar9 + 0x148);
                    uVar7 = __list_add_valid(piVar13,puVar10,iVar9 + 0x140);
                    if ((uVar7 & 1) != 0) {
                        *(iVar9 + 0x148) = piVar13;
                        *piVar13 = iVar9 + 0x140;
                        piVar13[1] = puVar10;
                        *puVar10 = piVar13;
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < *(iVar9 + 4));
                uVar4 = 0;
                *(extraout_x1 + 0xd8) = iVar9;
                *(iVar9 + 8) = 1;
            }
        }
        else {
            _printk(0x80004cc);
        }
    }
    else {
        _printk(0x800062d);
        _raw_spin_unlock_bh(iVar6);
        uVar4 = 0xfffffffb;
    }
    return uVar4;
}


// ===== sym.qdss_mhi_read_cb.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001230 (size 8) =====

void sym.qdss_mhi_read_cb.1230218ac825476707fa02a509da176f.cfi_jt(ulong param_1,int64_t *param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        iVar1 = _segment.ehdr + 0x3c;
        iVar8 = *param_2;
        _raw_spin_lock_bh(iVar1);
        if ((*(iVar2 + 8) == 1) && (*(param_2 + 0x14) != -0x6b)) {
            _raw_spin_unlock_bh(iVar1);
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xa20,0x20);
            if (piVar5 != NULL) {
                iVar6 = param_2[1];
                piVar5[2] = iVar8;
                piVar5[3] = iVar6;
                _raw_spin_lock_bh(iVar1);
                puVar7 = *(iVar2 + 0x158);
                uVar4 = __list_add_valid(piVar5,puVar7,iVar2 + 0x150);
                if ((uVar4 & 1) != 0) {
                    *(iVar2 + 0x158) = piVar5;
                    *piVar5 = iVar2 + 0x150;
                    piVar5[1] = puVar7;
                    *puVar7 = piVar5;
                }
                _raw_spin_unlock_bh(iVar1);
                if (*(iVar2 + 0x38) == 0) {
                    queue_work_on(0x20,*(iVar2 + 0x118),iVar2 + 0x88);
                }
                else {
                    __wake_up(iVar2 + 0x170,3,1,0);
                }
            }
        }
        else {
            iVar3 = *(iVar2 + 0x38);
            _raw_spin_unlock_bh(iVar1);
            if (iVar3 == 0) {
                _raw_spin_lock_bh(iVar1);
                for (piVar5 = *(iVar2 + 0x130); piVar5 != iVar2 + 0x130; piVar5 = *piVar5) {
                    if (piVar5[2] == iVar8) {
                        *(piVar5 + 4) = 1;
                        *(piVar5 + 0x24) = 0;
                        _raw_spin_unlock_bh(iVar1);
                        return;
                    }
                }
                _raw_spin_unlock_bh(iVar1);
                iVar3 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
                if (iVar3 != 0) {
                    _printk(0x8000673);
                }
            }
        }
    }
    return;
}


// ===== sym.qdss_mhi_write_cb.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001238 (size 8) =====

void sym.qdss_mhi_write_cb.1230218ac825476707fa02a509da176f.cfi_jt(void)

{
    return;
}


// ===== sym.mode_store.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001240 (size 8) =====

int64_t sym.mode_store.1230218ac825476707fa02a509da176f.cfi_jt
                  (int64_t param_1,ulong param_2,ulong *param_3,int param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(param_1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar5 = param_3;
    uVar3 = strlen(param_3);
    if (uVar3 < 10) {
        puVar5 = &uStack_48;
        iVar2 = sscanf(param_3,0x80003f5,puVar5);
        if (iVar2 == 1) {
            iVar1 = iVar6 + 0x3c;
            _raw_spin_lock_bh(iVar1);
            if (uStack_48 == 0x696375) {
                if (*(iVar6 + 0x38) == 0) {
                    if (*(iVar6 + 8) != 0) {
                        if (*(iVar6 + 8) == 1) {
                            *(iVar6 + 8) = 0;
                            _raw_spin_unlock_bh(iVar1);
                            usb_qdss_close(*(iVar6 + 0x160));
                            mhi_unprepare_from_transfer(*(iVar6 + 0x50));
                            flush_workqueue(*(iVar6 + 0x118));
                            sym.mhi_ch_close(iVar6);
                            *(iVar6 + 0x38) = 1;
                            goto code_r0x08002150;
                        }
code_r0x08002138:
                        iVar6 = -0x200;
                        goto code_r0x08002040;
                    }
                    *(iVar6 + 0x38) = 1;
                }
code_r0x08002148:
                _raw_spin_unlock_bh(iVar1);
            }
            else {
                if (uStack_48 != 0x627375) {
                    iVar6 = -0x16;
code_r0x08002040:
                    _raw_spin_unlock_bh(iVar1);
                    goto code_r0x08002050;
                }
                if (*(iVar6 + 0x38) != 1) goto code_r0x08002148;
                if (*(iVar6 + 8) == 0) {
                    *(iVar6 + 0x38) = 0;
                    _raw_spin_unlock_bh(iVar1);
                    uVar4 = *(iVar6 + 0x118);
                }
                else {
                    if (*(iVar6 + 8) != 1) goto code_r0x08002138;
                    *(iVar6 + 8) = 0;
                    _raw_spin_unlock_bh(iVar1);
                    __wake_up(iVar6 + 0x170,3,1,0);
                    mhi_unprepare_from_transfer(*(iVar6 + 0x50));
                    flush_workqueue(*(iVar6 + 0x118));
                    sym.mhi_ch_close(iVar6);
                    uVar4 = *(iVar6 + 0x118);
                    *(iVar6 + 0x38) = 0;
                }
                puVar5 = iVar6 + 0xb8;
                queue_work_on(0x20,uVar4,puVar5);
            }
code_r0x08002150:
            iVar6 = param_4;
            goto code_r0x08002050;
        }
    }
    iVar6 = -0x16;
code_r0x08002050:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.curr_chan_show;
    iVar2 = scnprintf(puVar5,0x1000,0x8000768,*(obj.str_mhi_curr_chan + _segment.ehdr * 8));
    return iVar2;
}


// ===== sym.mode_show.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001248 (size 8) =====

int64_t sym.mode_show.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(param_1 + 0x98) + 0x38);
    if (uVar1 < 2) {
        iVar3 = scnprintf(param_3,0x1000,0x8000768,*(obj.str_mhi_transfer_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001fa4);
    (*pcVar2)();
}


// ===== sym.curr_chan_show.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001250 (size 8) =====

int64_t sym.curr_chan_show.1230218ac825476707fa02a509da176f.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000768,*(obj.str_mhi_curr_chan + _segment.ehdr * 8));
    return iVar1;
}


// ===== sym.qdss_mhi_remove.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001258 (size 8) =====

void sym.qdss_mhi_remove.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t arg1;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (arg1 = CONCAT44(*0x8000004,_segment.ehdr), arg1 != 0)) {
        _segment.ehdr = *(*(param_1 + 0x10) + 0x188);
        if (_segment.ehdr != 0) {
            _segment.ehdr = 2;
        }
        iVar1 = arg1 + 0x3c;
        _raw_spin_lock_bh(iVar1);
        if (*(arg1 + 8) == 1) {
            iVar3 = *(arg1 + 0x38);
            *(arg1 + 8) = 2;
            _raw_spin_unlock_bh(iVar1);
            if (iVar3 == 1) {
                __wake_up(arg1 + 0x170,3,1,0);
                wait_for_completion(arg1 + 0x10);
            }
            else {
                if (*(arg1 + 0x160) != 0) {
                    usb_qdss_close();
                }
                piVar2 = arg1 + 0x130;
                msleep(0x14);
                piVar4 = *(arg1 + 0x130);
                while (piVar4 != piVar2) {
                    while ((piVar4[4] != 0 || (*(piVar4 + 0x24) != 1))) {
                        piVar4 = *piVar4;
                        if (piVar4 == piVar2) goto code_r0x08002508;
                    }
                    msleep(0x14);
                    piVar4 = *piVar2;
                }
            }
code_r0x08002508:
            flush_workqueue(*(arg1 + 0x118));
            sym.mhi_ch_close(arg1);
        }
        else {
            _raw_spin_unlock_bh(iVar1);
        }
        device_destroy(CONCAT44(*0x8000004,_segment.ehdr),*(*(arg1 + 0x48) + 0x80));
        unregister_chrdev_region(*(*(arg1 + 0x48) + 0x80),1);
        cdev_del(*(arg1 + 0x48));
    }
    return;
}


// ===== sym.mhi_read_work_fn.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001260 (size 8) =====

void sym.mhi_read_work_fn.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = param_1 + -0x1c;
    _raw_spin_lock_bh(iVar7);
    if (*(param_1 + -0x50) != 1) {
code_r0x080015ac:
        _raw_spin_unlock_bh(iVar7);
        return;
    }
    piVar1 = param_1 + 0xd8;
code_r0x08001514:
    piVar9 = *piVar1;
    if (piVar9 != piVar1) {
        do {
            piVar2 = piVar9 + 4;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar8 = *piVar2;
                if (iVar8 != 1) goto code_r0x08001568;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = 0;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001568:
            if (iVar8 == 1) goto code_r0x08001570;
            piVar9 = *piVar9;
            if (piVar9 == piVar1) break;
        } while( true );
    }
    goto code_r0x080015ac;
code_r0x08001570:
    if (piVar9 == NULL) goto code_r0x080015ac;
    iVar5 = mhi_queue_buf(*(param_1 + -8),2,piVar9[2],*(param_1 + -0x28),2);
    if (iVar5 != 0) {
        iVar6 = ___ratelimit(obj.qdss_mhi_init.__key,"mhi_read_work_fn");
        if (iVar6 != 0) {
            _printk(0x800051e,iVar5);
        }
        _raw_spin_unlock_bh(iVar7);
        iVar8 = piVar9[2];
        _raw_spin_lock_bh(iVar7);
        piVar9 = *piVar1;
        goto joined_r0x08001608;
    }
    _raw_spin_unlock_bh(iVar7);
    _raw_spin_lock_bh(iVar7);
    if (*(param_1 + -0x50) != 1) goto code_r0x080015ac;
    goto code_r0x08001514;
joined_r0x08001608:
    if (piVar9 == piVar1) {
        _raw_spin_unlock_bh(iVar7);
        iVar5 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
        if (iVar5 != 0) {
            _printk(0x8000673);
        }
code_r0x08001668:
        queue_work_on(0x20,*(param_1 + 0xc0),param_1);
        return;
    }
    if (piVar9[2] == iVar8) {
        *(piVar9 + 4) = 1;
        *(piVar9 + 0x24) = 0;
        _raw_spin_unlock_bh(iVar7);
        goto code_r0x08001668;
    }
    piVar9 = *piVar9;
    goto joined_r0x08001608;
}


// ===== sym.qdss_bridge_open_work_fn.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001268 (size 8) =====

void sym.qdss_bridge_open_work_fn.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_1 + -0x7c;
    arg1 = param_1 + -0xb8;
    _raw_spin_lock_bh(iVar5);
    if (*(param_1 + -0xb0) == 1) {
        _raw_spin_unlock_bh(iVar5);
    }
    else {
        if (*(param_1 + -0xb0) == 2) {
            _raw_spin_unlock_bh(iVar5);
            uVar6 = 0xfffffe00;
            goto code_r0x08001b74;
        }
        _raw_spin_unlock_bh(iVar5);
        uVar1 = mhi_prepare_for_transfer(*(param_1 + -0x68),0);
        if (uVar1 != 0) {
            uVar6 = uVar1;
            _printk(0x8000449);
            goto code_r0x08001b74;
        }
    }
    iVar2 = mhi_get_free_desc_count(*(param_1 + -0x68),2);
    *(param_1 + -0xb4) = iVar2;
    if (0 < iVar2) {
        iVar2 = 0;
        do {
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x28);
            if (piVar3 == NULL) {
code_r0x08001b4c:
                sym.qdss_destroy_buf_tbl(arg1);
                uVar6 = 0xfffffff4;
                goto code_r0x08001b58;
            }
            iVar4 = __kmalloc(*(param_1 + -0x88),0xdc0);
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
            piVar3[2] = iVar4;
            piVar3[3] = iVar5;
            *(piVar3 + 4) = 1;
            puVar7 = *(param_1 + 0x80);
            uVar6 = __list_add_valid(piVar3,puVar7,param_1 + 0x78);
            if ((uVar6 & 1) != 0) {
                *(param_1 + 0x80) = piVar3;
                *piVar3 = param_1 + 0x78;
                piVar3[1] = puVar7;
                *puVar7 = piVar3;
            }
            if ((iVar4 == 0) || (iVar5 == 0)) goto code_r0x08001b4c;
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(param_1 + -0xb4));
    }
    uVar6 = usb_qdss_open("qdss_mdm",arg1,sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt);
    *(param_1 + 0xa8) = uVar6;
    if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
        *(param_1 + -0xb0) = 1;
        return;
    }
code_r0x08001b58:
    mhi_unprepare_from_transfer(*(param_1 + -0x68));
    sym.mhi_ch_close(arg1);
code_r0x08001b74:
    _printk(0x80005b0,uVar6 & 0xffffffff);
    return;
}


// ===== sym.mhi_read_done_work_fn.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001270 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.mhi_read_done_work_fn.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t ******ppppppiVar2;
    uint uVar3;
    uint *in_tmp_ldXn;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int64_t iVar9;
    int64_t ******ppppppiVar10;
    int64_t iVar11;
    int64_t *******pppppppiVar12;
    int64_t *******pppppppiVar13;
    int64_t *piVar14;
    ulong *puVar15;
    ulong unaff_x30;
    int64_t *******pppppppiStack_78;
    int64_t *******pppppppiStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    ppppppiVar10 = NULL;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = param_1 + -0x4c;
    piVar7 = param_1 + 200;
    piVar1 = param_1 + 0xa8;
    do {
        pppppppiStack_78 = &pppppppiStack_78;
        pppppppiStack_70 = &pppppppiStack_78;
        _raw_spin_lock_bh(iVar9);
        if (((*(param_1 + -0x80) != 1) || (*(param_1 + -0x50) != 0)) || (piVar7 == *piVar7)) {
            _raw_spin_unlock_bh(iVar9);
            break;
        }
        if (piVar7 != *piVar7) {
            ppppppiVar2 = *(param_1 + 200);
            pppppppiVar12 = *(param_1 + 0xd0);
            ppppppiVar2[1] = pppppppiStack_70;
            *pppppppiStack_70 = ppppppiVar2;
            *pppppppiVar12 = &pppppppiStack_78;
            *(param_1 + 200) = piVar7;
            *(param_1 + 0xd0) = piVar7;
            pppppppiStack_70 = pppppppiVar12;
        }
        _raw_spin_unlock_bh(iVar9);
        pppppppiVar12 = pppppppiStack_78;
        if (pppppppiStack_78 != &pppppppiStack_78) {
code_r0x080017b0:
            pppppppiVar13 = *pppppppiVar12;
            uVar6 = __list_del_entry_valid(pppppppiVar12);
            if ((uVar6 & 1) != 0) {
                ppppppiVar10 = *pppppppiVar12;
                ppppppiVar2 = pppppppiVar12[1];
                ppppppiVar10[1] = ppppppiVar2;
                *ppppppiVar2 = ppppppiVar10;
            }
            ppppppiVar10 = pppppppiVar12[2];
            ppppppiVar2 = pppppppiVar12[3];
            *pppppppiVar12 = 0xdead000000000100;
            pppppppiVar12[1] = 0xdead000000000122;
            kfree(pppppppiVar12);
            if (ppppppiVar10 != NULL) {
                _raw_spin_lock_bh(iVar9);
                if (*(param_1 + -0x50) != 0) goto code_r0x0800179c;
                if (*(param_1 + -0x80) == 0) {
                    _raw_spin_unlock_bh(iVar9);
                    _raw_spin_lock_bh(iVar9);
                    for (piVar14 = *piVar1; piVar14 != piVar1; piVar14 = *piVar14) {
                        if (piVar14[2] == ppppppiVar10) goto code_r0x08001790;
                    }
                }
                else {
                    if (*(param_1 + -0x80) != 1) goto code_r0x0800179c;
                    _raw_spin_unlock_bh(iVar9);
                    _raw_spin_lock_bh(iVar9);
                    for (piVar14 = *piVar1; piVar14 != piVar1; piVar14 = *piVar14) {
                        if ((piVar14[4] == 0) && (piVar14[2] == ppppppiVar10)) {
                            _raw_spin_unlock_bh(iVar9);
                            if (piVar14 == NULL) goto code_r0x080018e8;
                            *piVar14[3] = ppppppiVar10;
                            *(piVar14[3] + 8) = ppppppiVar2;
                            *(piVar14 + 0x24) = 1;
                            iVar4 = usb_qdss_write(*(param_1 + 0xd8),piVar14[3]);
                            if (iVar4 == 0) goto code_r0x080017a4;
                            goto code_r0x080018e8;
                        }
                    }
                    _raw_spin_unlock_bh(iVar9);
code_r0x080018e8:
                    _raw_spin_lock_bh(iVar9);
                    for (piVar14 = *piVar1; piVar14 != piVar1; piVar14 = *piVar14) {
                        if (piVar14[2] == ppppppiVar10) goto code_r0x08001790;
                    }
                }
                _raw_spin_unlock_bh(iVar9);
                iVar4 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
                if (iVar4 != 0) {
                    _printk(0x8000673);
                }
                goto code_r0x080017a4;
            }
        }
code_r0x08001918:
        uVar6 = __list_del_entry_valid(&pppppppiStack_78);
        if ((uVar6 & 1) != 0) {
            pppppppiStack_78[1] = pppppppiStack_70;
            *pppppppiStack_70 = pppppppiStack_78;
        }
        pppppppiStack_78 = &pppppppiStack_78;
        pppppppiStack_70 = &pppppppiStack_78;
    } while (ppppppiVar10 != NULL);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    iVar9 = __stack_chk_fail();
    uVar3 = *in_tmp_ldXn;
    *extraout_x18 = 0x800197c;
    iVar11 = iVar9 + -0x7c;
    arg1 = iVar9 + -0xb8;
    _raw_spin_lock_bh(uVar3,iVar11);
    if (*(iVar9 + -0xb0) == 1) {
        _raw_spin_unlock_bh(iVar11);
    }
    else {
        if (*(iVar9 + -0xb0) == 2) {
            _raw_spin_unlock_bh(iVar11);
            uVar6 = 0xfffffe00;
            goto code_r0x08001b74;
        }
        _raw_spin_unlock_bh(iVar11);
        uVar5 = mhi_prepare_for_transfer(*(iVar9 + -0x68),0);
        if (uVar5 != 0) {
            uVar6 = uVar5;
            _printk(0x8000449);
            goto code_r0x08001b74;
        }
    }
    iVar4 = mhi_get_free_desc_count(*(iVar9 + -0x68),2);
    *(iVar9 + -0xb4) = iVar4;
    if (0 < iVar4) {
        iVar4 = 0;
        do {
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x28);
            if (piVar7 == NULL) {
code_r0x08001b4c:
                sym.qdss_destroy_buf_tbl(arg1);
                uVar6 = 0xfffffff4;
                goto code_r0x08001b58;
            }
            iVar8 = __kmalloc(*(iVar9 + -0x88),0xdc0);
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x30);
            piVar7[2] = iVar8;
            piVar7[3] = iVar11;
            *(piVar7 + 4) = 1;
            puVar15 = *(iVar9 + 0x80);
            uVar6 = __list_add_valid(piVar7,puVar15,iVar9 + 0x78);
            if ((uVar6 & 1) != 0) {
                *(iVar9 + 0x80) = piVar7;
                *piVar7 = iVar9 + 0x78;
                piVar7[1] = puVar15;
                *puVar15 = piVar7;
            }
            if ((iVar8 == 0) || (iVar11 == 0)) goto code_r0x08001b4c;
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(iVar9 + -0xb4));
    }
    uVar6 = usb_qdss_open("qdss_mdm",arg1,sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt);
    *(iVar9 + 0xa8) = uVar6;
    if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
        *(iVar9 + -0xb0) = 1;
        return;
    }
code_r0x08001b58:
    mhi_unprepare_from_transfer(*(iVar9 + -0x68));
    sym.mhi_ch_close(arg1);
code_r0x08001b74:
    _printk(0x80005b0,uVar6 & 0xffffffff);
    return;
code_r0x08001790:
    *(piVar14 + 4) = 1;
    *(piVar14 + 0x24) = 0;
code_r0x0800179c:
    _raw_spin_unlock_bh(iVar9);
code_r0x080017a4:
    pppppppiVar12 = pppppppiVar13;
    if (pppppppiVar13 == &pppppppiStack_78) goto code_r0x08001918;
    goto code_r0x080017b0;
}


// ===== sym.mhi_uci_release.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.mhi_uci_release.1230218ac825476707fa02a509da176f.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0xd8);
    iVar1 = arg1 + 0x3c;
    _raw_spin_lock_bh(iVar1);
    if (*(arg1 + 0x38) == 1) {
        if (*(arg1 + 8) == 2) {
            _raw_spin_unlock_bh(iVar1);
            complete(arg1 + 0x10);
            return 0;
        }
        if (*(arg1 + 8) == 1) {
            *(arg1 + 8) = 0;
            _raw_spin_unlock_bh(iVar1);
            __wake_up(arg1 + 0x170,3,1,0);
            mhi_unprepare_from_transfer(*(arg1 + 0x50));
            flush_workqueue(*(arg1 + 0x118));
            sym.mhi_ch_close(arg1);
            return 0;
        }
    }
    _raw_spin_unlock_bh(iVar1);
    return 0;
}


// ===== sym.mhi_uci_open.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001280 (size 8) =====

int sym.mhi_uci_open.1230218ac825476707fa02a509da176f.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *puVar8;
    int iVar9;
    ulong uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar5 = _segment.ehdr + 0x3c;
    _raw_spin_lock_bh(iVar5);
    if (*(iVar2 + 8) == 0) {
        _raw_spin_unlock_bh(iVar5);
        iVar3 = mhi_prepare_for_transfer(*(iVar2 + 0x50),0);
        if (iVar3 == 0) {
            if (*(iVar2 + 4) < 1) {
                iVar3 = -5;
code_r0x08002b9c:
                mhi_unprepare_from_transfer(*(iVar2 + 0x50));
                piVar4 = *(iVar2 + 0x150);
                while (piVar4 != iVar2 + 0x150) {
                    piVar11 = *piVar4;
                    uVar6 = __list_del_entry_valid(piVar4);
                    if ((uVar6 & 1) != 0) {
                        iVar5 = *piVar4;
                        piVar1 = piVar4[1];
                        *(iVar5 + 8) = piVar1;
                        *piVar1 = iVar5;
                    }
                    *piVar4 = -0x2152ffffffffff00;
                    piVar4[1] = -0x2152fffffffffede;
                    kfree(piVar4[2]);
                    kfree(piVar4);
                    piVar4 = piVar11;
                }
            }
            else {
                iVar9 = 0;
                uVar10 = *(iVar2 + 0x50);
                do {
                    iVar5 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar5 = 0x30;
                    }
                    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
                    if (piVar4 == NULL) {
code_r0x08002b98:
                        iVar3 = -0xc;
                        goto code_r0x08002b9c;
                    }
                    iVar5 = __kmalloc(*(iVar2 + 0x30),0xdc0);
                    if (iVar5 == 0) {
                        kfree(piVar4);
                        goto code_r0x08002b98;
                    }
                    uVar7 = *(iVar2 + 0x30);
                    piVar4[2] = iVar5;
                    iVar3 = mhi_queue_buf(uVar10,2,iVar5,uVar7,2);
                    if (iVar3 != 0) {
                        kfree(iVar5);
                        kfree(piVar4);
                        _printk(0x80006c2,iVar9);
                        goto code_r0x08002b9c;
                    }
                    puVar8 = *(iVar2 + 0x148);
                    uVar6 = __list_add_valid(piVar4,puVar8,iVar2 + 0x140);
                    if ((uVar6 & 1) != 0) {
                        *(iVar2 + 0x148) = piVar4;
                        *piVar4 = iVar2 + 0x140;
                        piVar4[1] = puVar8;
                        *puVar8 = piVar4;
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 < *(iVar2 + 4));
                iVar3 = 0;
                *(param_2 + 0xd8) = iVar2;
                *(iVar2 + 8) = 1;
            }
        }
        else {
            _printk(0x80004cc);
        }
    }
    else {
        _printk(0x800062d);
        _raw_spin_unlock_bh(iVar5);
        iVar3 = -5;
    }
    return iVar3;
}


// ===== sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001288 (size 8) =====

void sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt
               (int64_t param_1,int param_2,int64_t *param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (*(param_1 + 0x38) != 0)) {
        iVar2 = ___ratelimit(obj.usb_notifier._rs,"usb_notifier");
        if (iVar2 == 0) {
            return;
        }
        _printk(0x80006f1,"usb_notifier");
        return;
    }
    if (param_2 == 3) {
        if ((param_3[2] != 0) && (iVar2 = ___ratelimit(obj.usb_write_done._rs,"usb_write_done"), iVar2 != 0)) {
            _printk(0x80003c8,param_3[2]);
        }
        iVar4 = *param_3;
        iVar1 = param_1 + 0x3c;
        _raw_spin_lock_bh(iVar1);
        for (piVar3 = *(param_1 + 0x130); piVar3 != param_1 + 0x130; piVar3 = *piVar3) {
            if (piVar3[2] == iVar4) {
                *(piVar3 + 4) = 1;
                *(piVar3 + 0x24) = 0;
                _raw_spin_unlock_bh(iVar1);
                goto code_r0x08001ce0;
            }
        }
        _raw_spin_unlock_bh(iVar1);
        iVar2 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
        if (iVar2 != 0) {
            _printk(0x8000673);
        }
    }
    else {
        if (param_2 == 1) {
            if (*(param_1 + 8) != 1) {
                return;
            }
            usb_qdss_free_req(*(param_1 + 0x160));
            return;
        }
        if (param_2 != 0) {
            return;
        }
        if (*(param_1 + 8) != 1) {
            return;
        }
        usb_qdss_alloc_req(param_4,*(param_1 + 4));
    }
code_r0x08001ce0:
    queue_work_on(0x20,*(param_1 + 0x118),param_1 + 0x58);
    return;
}


// ===== sym.qdss_mhi_probe.1230218ac825476707fa02a509da176f.cfi_jt @ 0x08001290 (size 8) =====

uint64_t sym.qdss_mhi_probe.1230218ac825476707fa02a509da176f.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    if (_segment.ehdr == 0) {
        iVar2 = strcmp(param_2,*(obj.str_mhi_curr_chan + (_segment.ehdr & 0xffffffff) * 8));
        if (iVar2 != 0) {
code_r0x08002268:
            uVar8 = 0xffffffea;
            goto code_r0x08002348;
        }
    }
    else {
        if (_segment.ehdr == -1) {
            iVar2 = strcmp(*(param_1 + 8),0x80005ef);
            if (iVar2 != 0) goto code_r0x08002268;
            iVar2 = strcmp(param_2,0x80005ef);
            if (iVar2 == 0) {
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
        }
        else {
            if (_segment.ehdr != 2) {
                _printk(0x800040b);
                uVar8 = 0xffffffea;
                goto code_r0x08002348;
            }
            iVar2 = strcmp(param_2,0x80005ef);
            if (iVar2 == 0) {
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
        }
        iVar2 = strcmp(param_2,0x80004c1);
        if (iVar2 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
    }
    uVar4 = devm_kmalloc(param_1 + 0x28,400,0xdc0);
    if (uVar4 != 0) {
        iVar5 = cdev_alloc();
        *(uVar4 + 0x48) = iVar5;
        if (iVar5 != 0) {
            uVar3 = alloc_chrdev_region(&uStack_4c,0,1,"mhi_qdss");
            if (uVar3 < 0) {
                uVar8 = uVar3;
                _printk(0x800056c,uVar8);
            }
            else {
                *(iVar5 + 0x60) = obj.__this_module;
                *(*(uVar4 + 0x48) + 0x68) = obj.mhidev_fops;
                iVar5 = *(uVar4 + 0x48);
                uVar3 = cdev_add(iVar5,uStack_4c,1);
                if (uVar3 == 0) {
                    uVar8 = device_create(_segment.ehdr,0,*(iVar5 + 0x80),uVar4,"mhi_qdss");
                    *(uVar4 + 0x40) = uVar8;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar6 = *(param_2 + 0x20);
                        *(uVar4 + 0x38) = 0;
                        *(uVar4 + 0x50) = param_1;
                        if (0xfffe < uVar6) {
                            uVar6 = 0xffff;
                        }
                        _segment.ehdr = uVar4;
                        *(uVar4 + 0x30) = uVar6;
                        *(uVar8 + 0x98) = uVar4;
                        uVar3 = sym.qdss_mhi_init(uVar4);
                        uVar8 = uVar3;
                        if (uVar3 == 0) {
                            queue_work_on(0x20,*(uVar4 + 0x118),uVar4 + 0xb8);
                            goto code_r0x08002348;
                        }
                        _printk(0x8000491,uVar8);
                        device_destroy(_segment.ehdr,*(*(uVar4 + 0x48) + 0x80));
                    }
                    else {
                        _printk(0x80005f4,0);
                        uVar8 = 0xfffffff4;
                    }
                    cdev_del(*(uVar4 + 0x48));
                    iVar5 = *(uVar4 + 0x48);
                }
                else {
                    uVar8 = uVar3;
                }
                unregister_chrdev_region(*(iVar5 + 0x80),1);
            }
            goto code_r0x08002348;
        }
    }
    uVar8 = 0xfffffff4;
code_r0x08002348:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qdss_mhi_remove;
    uVar8 = _segment.ehdr;
    if ((uVar4 != 0) && (_segment.ehdr != 0)) {
        _segment.ehdr = 0;
        if (*(*(uVar4 + 0x10) + 0x188) != 0) {
            _segment.ehdr = 2;
        }
        iVar5 = uVar8 + 0x3c;
        _raw_spin_lock_bh(iVar5);
        if (*(uVar8 + 8) == 1) {
            iVar2 = *(uVar8 + 0x38);
            *(uVar8 + 8) = 2;
            _raw_spin_unlock_bh(iVar5);
            if (iVar2 == 1) {
                __wake_up(uVar8 + 0x170,3,1,0);
                wait_for_completion(uVar8 + 0x10);
            }
            else {
                if (*(uVar8 + 0x160) != 0) {
                    usb_qdss_close();
                }
                piVar1 = uVar8 + 0x130;
                msleep(0x14);
                piVar7 = *(uVar8 + 0x130);
                while (piVar7 != piVar1) {
                    while ((piVar7[4] != 0 || (*(piVar7 + 0x24) != 1))) {
                        piVar7 = *piVar7;
                        if (piVar7 == piVar1) goto code_r0x08002508;
                    }
                    msleep(0x14);
                    piVar7 = *piVar1;
                }
            }
code_r0x08002508:
            flush_workqueue(*(uVar8 + 0x118));
            sym.mhi_ch_close(uVar8);
        }
        else {
            _raw_spin_unlock_bh(iVar5);
        }
        device_destroy(_segment.ehdr,*(*(uVar8 + 0x48) + 0x80));
        unregister_chrdev_region(*(*(uVar8 + 0x48) + 0x80),1);
        uVar4 = cdev_del(*(uVar8 + 0x48));
    }
    return uVar4;
}


// ===== sym.qdss_get_buf_tbl_entry @ 0x08001298 (size 136) =====

ulong * sym.qdss_get_buf_tbl_entry(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg1 + 0x3c);
    for (puVar1 = *(arg1 + 0x130); puVar1 != arg1 + 0x130; puVar1 = *puVar1) {
        if ((puVar1[4] == 0) && (puVar1[2] == arg2)) goto code_r0x080012fc;
    }
    puVar1 = NULL;
code_r0x080012fc:
    _raw_spin_unlock_bh(arg1 + 0x3c);
    return puVar1;
}


// ===== sym.qdss_get_entry @ 0x08001324 (size 152) =====

int64_t sym.qdss_get_entry(int64_t arg1)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t *piVar5;
    
    piVar5 = *(arg1 + 0x130);
    do {
        if (piVar5 == arg1 + 0x130) {
            return 0;
        }
        piVar1 = piVar5 + 4;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            if (iVar2 != 1) goto code_r0x08001380;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = 0;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001380:
        if (iVar2 == 1) {
            return piVar5;
        }
        piVar5 = *piVar5;
    } while( true );
}


// ===== sym.qdss_mhi_init @ 0x080013bc (size 280) =====

ulong sym.qdss_mhi_init(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = alloc_workqueue(0x8000482,0xe000a,1,"qdss_bridge");
    *(arg1 + 0x118) = iVar1;
    if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(arg1 + 0x3c) = 0;
        *(arg1 + 0x58) = 0xfffffffe0;
        *(arg1 + 0x60) = arg1 + 0x60;
        *(arg1 + 0x68) = arg1 + 0x60;
        *(arg1 + 0x70) = sym.mhi_read_work_fn.1230218ac825476707fa02a509da176f.cfi_jt;
        *(arg1 + 0x88) = 0xfffffffe0;
        *(arg1 + 0x90) = arg1 + 0x90;
        *(arg1 + 0x98) = arg1 + 0x90;
        *(arg1 + 0xa0) = sym.mhi_read_done_work_fn.1230218ac825476707fa02a509da176f.cfi_jt;
        *(arg1 + 0xb8) = 0xfffffffe0;
        *(arg1 + 0xc0) = arg1 + 0xc0;
        *(arg1 + 200) = arg1 + 0xc0;
        *(arg1 + 0xd0) = sym.qdss_bridge_open_work_fn.1230218ac825476707fa02a509da176f.cfi_jt;
        *(arg1 + 0x130) = arg1 + 0x130;
        *(arg1 + 0x138) = arg1 + 0x130;
        *(arg1 + 0x140) = arg1 + 0x140;
        *(arg1 + 0x148) = arg1 + 0x140;
        __init_waitqueue_head(arg1 + 0x170,"&drvdata->uci_wq",obj.qdss_mhi_init.__key);
        *(arg1 + 0x10) = 0;
        __init_swait_queue_head(arg1 + 0x18,"&x->wait",obj.qdss_mhi_init.__key);
        uVar2 = 0;
        *(arg1 + 0x150) = arg1 + 0x150;
        *(arg1 + 0x158) = arg1 + 0x150;
        *(arg1 + 8) = 0;
    }
    return uVar2;
}


// ===== sym.mhi_read_work_fn @ 0x080014d4 (size 476) =====

void sym.mhi_read_work_fn(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = arg1 + -0x1c;
    _raw_spin_lock_bh(iVar7);
    if (*(arg1 + -0x50) != 1) {
code_r0x080015ac:
        _raw_spin_unlock_bh(iVar7);
        return;
    }
    piVar1 = arg1 + 0xd8;
code_r0x08001514:
    piVar9 = *piVar1;
    if (piVar9 != piVar1) {
        do {
            piVar2 = piVar9 + 4;
            Hint_Prefetch(piVar2,2,0,1);
            do {
                iVar8 = *piVar2;
                if (iVar8 != 1) goto code_r0x08001568;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                    *piVar2 = 0;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001568:
            if (iVar8 == 1) goto code_r0x08001570;
            piVar9 = *piVar9;
            if (piVar9 == piVar1) break;
        } while( true );
    }
    goto code_r0x080015ac;
code_r0x08001570:
    if (piVar9 == NULL) goto code_r0x080015ac;
    iVar5 = mhi_queue_buf(*(arg1 + -8),2,piVar9[2],*(arg1 + -0x28),2);
    if (iVar5 != 0) {
        iVar6 = ___ratelimit(obj.qdss_mhi_init.__key,"mhi_read_work_fn");
        if (iVar6 != 0) {
            _printk(0x800051e,iVar5);
        }
        _raw_spin_unlock_bh(iVar7);
        iVar8 = piVar9[2];
        _raw_spin_lock_bh(iVar7);
        piVar9 = *piVar1;
        goto joined_r0x08001608;
    }
    _raw_spin_unlock_bh(iVar7);
    _raw_spin_lock_bh(iVar7);
    if (*(arg1 + -0x50) != 1) goto code_r0x080015ac;
    goto code_r0x08001514;
joined_r0x08001608:
    if (piVar9 == piVar1) {
        _raw_spin_unlock_bh(iVar7);
        iVar5 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
        if (iVar5 != 0) {
            _printk(0x8000673);
        }
code_r0x08001668:
        queue_work_on(0x20,*(arg1 + 0xc0),arg1);
        return;
    }
    if (piVar9[2] == iVar8) {
        *(piVar9 + 4) = 1;
        *(piVar9 + 0x24) = 0;
        _raw_spin_unlock_bh(iVar7);
        goto code_r0x08001668;
    }
    piVar9 = *piVar9;
    goto joined_r0x08001608;
}


// ===== sym.mhi_read_done_work_fn @ 0x080016b0 (size 728) =====

void sym.mhi_read_done_work_fn(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint *in_tmp_ldXn;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong *puVar14;
    ulong unaff_x30;
    int64_t *piStack_78;
    int64_t *piStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar10 = 0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = arg1 + -0x4c;
    piVar7 = arg1 + 200;
    piVar1 = arg1 + 0xa8;
    do {
        piStack_78 = &stack0xffffffffffffff88;
        piStack_70 = &stack0xffffffffffffff88;
        _raw_spin_lock_bh(iVar9);
        if (((*(arg1 + -0x80) != 1) || (*(arg1 + -0x50) != 0)) || (piVar7 == *piVar7)) {
            _raw_spin_unlock_bh(iVar9);
            break;
        }
        if (piVar7 != *piVar7) {
            iVar11 = *(arg1 + 200);
            piVar13 = *(arg1 + 0xd0);
            *(iVar11 + 8) = piStack_70;
            *piStack_70 = iVar11;
            *piVar13 = &stack0xffffffffffffff88;
            *(arg1 + 200) = piVar7;
            *(arg1 + 0xd0) = piVar7;
            piStack_70 = piVar13;
        }
        _raw_spin_unlock_bh(iVar9);
        piVar13 = piStack_78;
        if (piStack_78 != &stack0xffffffffffffff88) {
code_r0x080017b0:
            piVar12 = *piVar13;
            uVar6 = __list_del_entry_valid(piVar13);
            if ((uVar6 & 1) != 0) {
                iVar10 = *piVar13;
                piVar2 = piVar13[1];
                *(iVar10 + 8) = piVar2;
                *piVar2 = iVar10;
            }
            iVar10 = piVar13[2];
            iVar11 = piVar13[3];
            *piVar13 = -0x2152ffffffffff00;
            piVar13[1] = -0x2152fffffffffede;
            kfree(piVar13);
            if (iVar10 != 0) {
                _raw_spin_lock_bh(iVar9);
                if (*(arg1 + -0x50) != 0) goto code_r0x0800179c;
                if (*(arg1 + -0x80) == 0) {
                    _raw_spin_unlock_bh(iVar9);
                    _raw_spin_lock_bh(iVar9);
                    for (piVar13 = *piVar1; piVar13 != piVar1; piVar13 = *piVar13) {
                        if (piVar13[2] == iVar10) goto code_r0x08001790;
                    }
                }
                else {
                    if (*(arg1 + -0x80) != 1) goto code_r0x0800179c;
                    _raw_spin_unlock_bh(iVar9);
                    _raw_spin_lock_bh(iVar9);
                    for (piVar13 = *piVar1; piVar13 != piVar1; piVar13 = *piVar13) {
                        if ((piVar13[4] == 0) && (piVar13[2] == iVar10)) {
                            _raw_spin_unlock_bh(iVar9);
                            if (piVar13 == NULL) goto code_r0x080018e8;
                            *piVar13[3] = iVar10;
                            *(piVar13[3] + 8) = iVar11;
                            *(piVar13 + 0x24) = 1;
                            iVar4 = usb_qdss_write(*(arg1 + 0xd8),piVar13[3]);
                            if (iVar4 == 0) goto code_r0x080017a4;
                            goto code_r0x080018e8;
                        }
                    }
                    _raw_spin_unlock_bh(iVar9);
code_r0x080018e8:
                    _raw_spin_lock_bh(iVar9);
                    for (piVar13 = *piVar1; piVar13 != piVar1; piVar13 = *piVar13) {
                        if (piVar13[2] == iVar10) goto code_r0x08001790;
                    }
                }
                _raw_spin_unlock_bh(iVar9);
                iVar4 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
                if (iVar4 != 0) {
                    _printk(0x8000673);
                }
                goto code_r0x080017a4;
            }
        }
code_r0x08001918:
        uVar6 = __list_del_entry_valid(&stack0xffffffffffffff88);
        if ((uVar6 & 1) != 0) {
            piStack_78[1] = piStack_70;
            *piStack_70 = piStack_78;
        }
        piStack_78 = &stack0xffffffffffffff88;
        piStack_70 = &stack0xffffffffffffff88;
    } while (iVar10 != 0);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    iVar10 = __stack_chk_fail();
    uVar3 = *in_tmp_ldXn;
    *extraout_x18 = 0x800197c;
    iVar11 = iVar10 + -0x7c;
    iVar9 = iVar10 + -0xb8;
    _raw_spin_lock_bh(uVar3,iVar11);
    if (*(iVar10 + -0xb0) == 1) {
        _raw_spin_unlock_bh(iVar11);
    }
    else {
        if (*(iVar10 + -0xb0) == 2) {
            _raw_spin_unlock_bh(iVar11);
            uVar6 = 0xfffffe00;
            goto code_r0x08001b74;
        }
        _raw_spin_unlock_bh(iVar11);
        uVar5 = mhi_prepare_for_transfer(*(iVar10 + -0x68),0);
        if (uVar5 != 0) {
            uVar6 = uVar5;
            _printk(0x8000449);
            goto code_r0x08001b74;
        }
    }
    iVar4 = mhi_get_free_desc_count(*(iVar10 + -0x68),2);
    *(iVar10 + -0xb4) = iVar4;
    if (0 < iVar4) {
        iVar4 = 0;
        do {
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x28);
            if (piVar7 == NULL) {
code_r0x08001b4c:
                sym.qdss_destroy_buf_tbl(iVar9);
                uVar6 = 0xfffffff4;
                goto code_r0x08001b58;
            }
            iVar8 = __kmalloc(*(iVar10 + -0x88),0xdc0);
            iVar11 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar11 = 0x30;
            }
            iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xdc0,0x30);
            piVar7[2] = iVar8;
            piVar7[3] = iVar11;
            *(piVar7 + 4) = 1;
            puVar14 = *(iVar10 + 0x80);
            uVar6 = __list_add_valid(piVar7,puVar14,iVar10 + 0x78);
            if ((uVar6 & 1) != 0) {
                *(iVar10 + 0x80) = piVar7;
                *piVar7 = iVar10 + 0x78;
                piVar7[1] = puVar14;
                *puVar14 = piVar7;
            }
            if ((iVar8 == 0) || (iVar11 == 0)) goto code_r0x08001b4c;
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(iVar10 + -0xb4));
    }
    uVar6 = usb_qdss_open("qdss_mdm",iVar9,sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt);
    *(iVar10 + 0xa8) = uVar6;
    if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
        *(iVar10 + -0xb0) = 1;
        return;
    }
code_r0x08001b58:
    mhi_unprepare_from_transfer(*(iVar10 + -0x68));
    sym.mhi_ch_close(iVar9);
code_r0x08001b74:
    _printk(0x80005b0,uVar6 & 0xffffffff);
    return;
code_r0x08001790:
    *(piVar13 + 4) = 1;
    *(piVar13 + 0x24) = 0;
code_r0x0800179c:
    _raw_spin_unlock_bh(iVar9);
code_r0x080017a4:
    piVar13 = piVar12;
    if (piVar12 == &stack0xffffffffffffff88) goto code_r0x08001918;
    goto code_r0x080017b0;
}


// ===== sym.qdss_bridge_open_work_fn @ 0x08001988 (size 512) =====

void sym.qdss_bridge_open_work_fn(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -0x7c;
    arg1_00 = arg1 + -0xb8;
    _raw_spin_lock_bh(iVar5);
    if (*(arg1 + -0xb0) == 1) {
        _raw_spin_unlock_bh(iVar5);
    }
    else {
        if (*(arg1 + -0xb0) == 2) {
            _raw_spin_unlock_bh(iVar5);
            uVar6 = 0xfffffe00;
            goto code_r0x08001b74;
        }
        _raw_spin_unlock_bh(iVar5);
        uVar1 = mhi_prepare_for_transfer(*(arg1 + -0x68),0);
        if (uVar1 != 0) {
            uVar6 = uVar1;
            _printk(0x8000449);
            goto code_r0x08001b74;
        }
    }
    iVar2 = mhi_get_free_desc_count(*(arg1 + -0x68),2);
    *(arg1 + -0xb4) = iVar2;
    if (0 < iVar2) {
        iVar2 = 0;
        do {
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x28);
            if (piVar3 == NULL) {
code_r0x08001b4c:
                sym.qdss_destroy_buf_tbl(arg1_00);
                uVar6 = 0xfffffff4;
                goto code_r0x08001b58;
            }
            iVar4 = __kmalloc(*(arg1 + -0x88),0xdc0);
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x30);
            piVar3[2] = iVar4;
            piVar3[3] = iVar5;
            *(piVar3 + 4) = 1;
            puVar7 = *(arg1 + 0x80);
            uVar6 = __list_add_valid(piVar3,puVar7,arg1 + 0x78);
            if ((uVar6 & 1) != 0) {
                *(arg1 + 0x80) = piVar3;
                *piVar3 = arg1 + 0x78;
                piVar3[1] = puVar7;
                *puVar7 = piVar3;
            }
            if ((iVar4 == 0) || (iVar5 == 0)) goto code_r0x08001b4c;
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(arg1 + -0xb4));
    }
    uVar6 = usb_qdss_open("qdss_mdm",arg1_00,sym.usb_notifier.1230218ac825476707fa02a509da176f.cfi_jt);
    *(arg1 + 0xa8) = uVar6;
    if ((uVar6 != 0) && (uVar6 < 0xfffffffffffff001)) {
        *(arg1 + -0xb0) = 1;
        return;
    }
code_r0x08001b58:
    mhi_unprepare_from_transfer(*(arg1 + -0x68));
    sym.mhi_ch_close(arg1_00);
code_r0x08001b74:
    _printk(0x80005b0,uVar6 & 0xffffffff);
    return;
}


// ===== sym.usb_notifier @ 0x08001b88 (size 384) =====

void sym.usb_notifier(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*(arg1 + 0x38) != 0)) {
        iVar2 = ___ratelimit(obj.usb_notifier._rs,"usb_notifier");
        if (iVar2 == 0) {
            return;
        }
        _printk(0x80006f1,"usb_notifier");
        return;
    }
    if (arg2 == 3) {
        if ((*(arg3 + 0x10) != 0) && (iVar2 = ___ratelimit(obj.usb_write_done._rs,"usb_write_done"), iVar2 != 0)) {
            _printk(0x80003c8,*(arg3 + 0x10));
        }
        arg3 = *arg3;
        iVar1 = arg1 + 0x3c;
        _raw_spin_lock_bh(iVar1);
        for (piVar3 = *(arg1 + 0x130); piVar3 != arg1 + 0x130; piVar3 = *piVar3) {
            if (piVar3[2] == arg3) {
                *(piVar3 + 4) = 1;
                *(piVar3 + 0x24) = 0;
                _raw_spin_unlock_bh(iVar1);
                goto code_r0x08001ce0;
            }
        }
        _raw_spin_unlock_bh(iVar1);
        iVar2 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
        if (iVar2 != 0) {
            _printk(0x8000673);
        }
    }
    else {
        if (arg2 == 1) {
            if (*(arg1 + 8) != 1) {
                return;
            }
            usb_qdss_free_req(*(arg1 + 0x160));
            return;
        }
        if (arg2 != 0) {
            return;
        }
        if (*(arg1 + 8) != 1) {
            return;
        }
        usb_qdss_alloc_req(arg4,*(arg1 + 4));
    }
code_r0x08001ce0:
    queue_work_on(0x20,*(arg1 + 0x118),arg1 + 0x58);
    return;
}


// ===== sym.mhi_ch_close @ 0x08001d08 (size 392) =====

void sym.mhi_ch_close(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 1) {
        iVar1 = arg1 + 0x3c;
        _raw_spin_lock_bh(iVar1);
        piVar4 = *(arg1 + 0x140);
        while (piVar4 != arg1 + 0x140) {
            piVar6 = *piVar4;
            uVar5 = __list_del_entry_valid(piVar4);
            if ((uVar5 & 1) != 0) {
                iVar2 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4[2]);
            kfree(piVar4);
            piVar4 = piVar6;
        }
        _raw_spin_unlock_bh(iVar1);
        *(arg1 + 0x168) = 0;
        _raw_spin_lock_bh(iVar1);
        piVar4 = *(arg1 + 0x150);
        while (piVar4 != arg1 + 0x150) {
            piVar6 = *piVar4;
            uVar5 = __list_del_entry_valid(piVar4);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar6;
        }
    }
    else {
        if (*(arg1 + 0x38) != 0) {
            return;
        }
        sym.qdss_destroy_buf_tbl(arg1);
        _raw_spin_lock_bh(arg1 + 0x3c);
        piVar4 = *(arg1 + 0x150);
        while (piVar4 != arg1 + 0x150) {
            piVar6 = *piVar4;
            uVar5 = __list_del_entry_valid(piVar4);
            if ((uVar5 & 1) != 0) {
                iVar1 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar1 + 8) = piVar3;
                *piVar3 = iVar1;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar6;
        }
    }
    _raw_spin_unlock_bh(arg1 + 0x3c);
    return;
}


// ===== sym.qdss_destroy_buf_tbl @ 0x08001e90 (size 184) =====

void sym.qdss_destroy_buf_tbl(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg1 + 0x3c);
    piVar3 = *(arg1 + 0x130);
    while (piVar3 != arg1 + 0x130) {
        piVar5 = *piVar3;
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar1 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        kfree(piVar3[2]);
        kfree(piVar3[3]);
        kfree(piVar3);
        piVar3 = piVar5;
    }
    _raw_spin_unlock_bh(arg1 + 0x3c);
    return;
}


// ===== sym.mode_show @ 0x08001f48 (size 92) =====

int64_t sym.mode_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(*(arg1 + 0x98) + 0x38);
    if (uVar1 < 2) {
        iVar3 = scnprintf(arg2,0x1000,0x8000768,*(obj.str_mhi_transfer_mode + uVar1 * 8));
        return iVar3;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001fa4);
    (*pcVar2)();
}


// ===== sym.mode_store @ 0x08001fa4 (size 472) =====

int64_t sym.mode_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar6 = *(arg1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar5 = arg2;
    uVar3 = strlen(arg2);
    if (uVar3 < 10) {
        puVar5 = &uStack_48;
        iVar2 = sscanf(arg2,0x80003f5,puVar5);
        if (iVar2 == 1) {
            iVar1 = iVar6 + 0x3c;
            _raw_spin_lock_bh(iVar1);
            if (uStack_48 == 0x696375) {
                if (*(iVar6 + 0x38) == 0) {
                    if (*(iVar6 + 8) != 0) {
                        if (*(iVar6 + 8) == 1) {
                            *(iVar6 + 8) = 0;
                            _raw_spin_unlock_bh(iVar1);
                            usb_qdss_close(*(iVar6 + 0x160));
                            mhi_unprepare_from_transfer(*(iVar6 + 0x50));
                            flush_workqueue(*(iVar6 + 0x118));
                            sym.mhi_ch_close(iVar6);
                            *(iVar6 + 0x38) = 1;
                            goto code_r0x08002150;
                        }
code_r0x08002138:
                        iVar6 = -0x200;
                        goto code_r0x08002040;
                    }
                    *(iVar6 + 0x38) = 1;
                }
code_r0x08002148:
                _raw_spin_unlock_bh(iVar1);
            }
            else {
                if (uStack_48 != 0x627375) {
                    iVar6 = -0x16;
code_r0x08002040:
                    _raw_spin_unlock_bh(iVar1);
                    goto code_r0x08002050;
                }
                if (*(iVar6 + 0x38) != 1) goto code_r0x08002148;
                if (*(iVar6 + 8) == 0) {
                    *(iVar6 + 0x38) = 0;
                    _raw_spin_unlock_bh(iVar1);
                    uVar4 = *(iVar6 + 0x118);
                }
                else {
                    if (*(iVar6 + 8) != 1) goto code_r0x08002138;
                    *(iVar6 + 8) = 0;
                    _raw_spin_unlock_bh(iVar1);
                    __wake_up(iVar6 + 0x170,3,1,0);
                    mhi_unprepare_from_transfer(*(iVar6 + 0x50));
                    flush_workqueue(*(iVar6 + 0x118));
                    sym.mhi_ch_close(iVar6);
                    uVar4 = *(iVar6 + 0x118);
                    *(iVar6 + 0x38) = 0;
                }
                puVar5 = iVar6 + 0xb8;
                queue_work_on(0x20,uVar4,puVar5);
            }
code_r0x08002150:
            iVar6 = arg3;
            goto code_r0x08002050;
        }
    }
    iVar6 = -0x16;
code_r0x08002050:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.curr_chan_show;
    iVar2 = scnprintf(puVar5,0x1000,0x8000768,*(obj.str_mhi_curr_chan + _segment.ehdr * 8));
    return iVar2;
}


// ===== sym.curr_chan_show @ 0x0800217c (size 76) =====

int64_t sym.curr_chan_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg1,0x1000,0x8000768,*(obj.str_mhi_curr_chan + _segment.ehdr * 8));
    return iVar1;
}


// ===== sym.qdss_mhi_probe @ 0x080021c8 (size 680) =====

uint64_t sym.qdss_mhi_probe(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    if (_segment.ehdr == 0) {
        iVar2 = strcmp(arg2,*(obj.str_mhi_curr_chan + (_segment.ehdr & 0xffffffff) * 8));
        if (iVar2 != 0) {
code_r0x08002268:
            uVar8 = 0xffffffea;
            goto code_r0x08002348;
        }
    }
    else {
        if (_segment.ehdr == -1) {
            iVar2 = strcmp(*(arg1 + 8),0x80005ef);
            if (iVar2 != 0) goto code_r0x08002268;
            iVar2 = strcmp(arg2,0x80005ef);
            if (iVar2 == 0) {
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
        }
        else {
            if (_segment.ehdr != 2) {
                _printk(0x800040b);
                uVar8 = 0xffffffea;
                goto code_r0x08002348;
            }
            iVar2 = strcmp(arg2,0x80005ef);
            if (iVar2 == 0) {
                _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
            }
        }
        iVar2 = strcmp(arg2,0x80004c1);
        if (iVar2 == 0) {
            _segment.ehdr = CONCAT44(*0x8000004,1);
        }
    }
    uVar4 = devm_kmalloc(arg1 + 0x28,400,0xdc0);
    if (uVar4 != 0) {
        iVar5 = cdev_alloc();
        *(uVar4 + 0x48) = iVar5;
        if (iVar5 != 0) {
            uVar3 = alloc_chrdev_region(&uStack_4c,0,1,"mhi_qdss");
            if (uVar3 < 0) {
                uVar8 = uVar3;
                _printk(0x800056c,uVar8);
            }
            else {
                *(iVar5 + 0x60) = obj.__this_module;
                *(*(uVar4 + 0x48) + 0x68) = obj.mhidev_fops;
                iVar5 = *(uVar4 + 0x48);
                uVar3 = cdev_add(iVar5,uStack_4c,1);
                if (uVar3 == 0) {
                    uVar8 = device_create(_segment.ehdr,0,*(iVar5 + 0x80),uVar4,"mhi_qdss");
                    *(uVar4 + 0x40) = uVar8;
                    if (uVar8 < 0xfffffffffffff001) {
                        uVar6 = *(arg2 + 0x20);
                        *(uVar4 + 0x38) = 0;
                        *(uVar4 + 0x50) = arg1;
                        if (0xfffe < uVar6) {
                            uVar6 = 0xffff;
                        }
                        _segment.ehdr = uVar4;
                        *(uVar4 + 0x30) = uVar6;
                        *(uVar8 + 0x98) = uVar4;
                        uVar3 = sym.qdss_mhi_init(uVar4);
                        uVar8 = uVar3;
                        if (uVar3 == 0) {
                            queue_work_on(0x20,*(uVar4 + 0x118),uVar4 + 0xb8);
                            goto code_r0x08002348;
                        }
                        _printk(0x8000491,uVar8);
                        device_destroy(_segment.ehdr,*(*(uVar4 + 0x48) + 0x80));
                    }
                    else {
                        _printk(0x80005f4,0);
                        uVar8 = 0xfffffff4;
                    }
                    cdev_del(*(uVar4 + 0x48));
                    iVar5 = *(uVar4 + 0x48);
                }
                else {
                    uVar8 = uVar3;
                }
                unregister_chrdev_region(*(iVar5 + 0x80),1);
            }
            goto code_r0x08002348;
        }
    }
    uVar8 = 0xfffffff4;
code_r0x08002348:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    uVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qdss_mhi_remove;
    uVar8 = _segment.ehdr;
    if ((uVar4 != 0) && (_segment.ehdr != 0)) {
        _segment.ehdr = 0;
        if (*(*(uVar4 + 0x10) + 0x188) != 0) {
            _segment.ehdr = 2;
        }
        iVar5 = uVar8 + 0x3c;
        _raw_spin_lock_bh(iVar5);
        if (*(uVar8 + 8) == 1) {
            iVar2 = *(uVar8 + 0x38);
            *(uVar8 + 8) = 2;
            _raw_spin_unlock_bh(iVar5);
            if (iVar2 == 1) {
                __wake_up(uVar8 + 0x170,3,1,0);
                wait_for_completion(uVar8 + 0x10);
            }
            else {
                if (*(uVar8 + 0x160) != 0) {
                    usb_qdss_close();
                }
                piVar1 = uVar8 + 0x130;
                msleep(0x14);
                piVar7 = *(uVar8 + 0x130);
                while (piVar7 != piVar1) {
                    while ((piVar7[4] != 0 || (*(piVar7 + 0x24) != 1))) {
                        piVar7 = *piVar7;
                        if (piVar7 == piVar1) goto code_r0x08002508;
                    }
                    msleep(0x14);
                    piVar7 = *piVar1;
                }
            }
code_r0x08002508:
            flush_workqueue(*(uVar8 + 0x118));
            sym.mhi_ch_close(uVar8);
        }
        else {
            _raw_spin_unlock_bh(iVar5);
        }
        device_destroy(_segment.ehdr,*(*(uVar8 + 0x48) + 0x80));
        unregister_chrdev_region(*(*(uVar8 + 0x48) + 0x80),1);
        uVar4 = cdev_del(*(uVar8 + 0x48));
    }
    return uVar4;
}


// ===== sym.qdss_mhi_remove @ 0x08002470 (size 352) =====

void sym.qdss_mhi_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (arg1_00 = CONCAT44(*0x8000004,_segment.ehdr), arg1_00 != 0)) {
        _segment.ehdr = *(*(arg1 + 0x10) + 0x188);
        if (_segment.ehdr != 0) {
            _segment.ehdr = 2;
        }
        iVar1 = arg1_00 + 0x3c;
        _raw_spin_lock_bh(iVar1);
        if (*(arg1_00 + 8) == 1) {
            iVar3 = *(arg1_00 + 0x38);
            *(arg1_00 + 8) = 2;
            _raw_spin_unlock_bh(iVar1);
            if (iVar3 == 1) {
                __wake_up(arg1_00 + 0x170,3,1,0);
                wait_for_completion(arg1_00 + 0x10);
            }
            else {
                if (*(arg1_00 + 0x160) != 0) {
                    usb_qdss_close();
                }
                piVar2 = arg1_00 + 0x130;
                msleep(0x14);
                piVar4 = *(arg1_00 + 0x130);
                while (piVar4 != piVar2) {
                    while ((piVar4[4] != 0 || (*(piVar4 + 0x24) != 1))) {
                        piVar4 = *piVar4;
                        if (piVar4 == piVar2) goto code_r0x08002508;
                    }
                    msleep(0x14);
                    piVar4 = *piVar2;
                }
            }
code_r0x08002508:
            flush_workqueue(*(arg1_00 + 0x118));
            sym.mhi_ch_close(arg1_00);
        }
        else {
            _raw_spin_unlock_bh(iVar1);
        }
        device_destroy(CONCAT44(*0x8000004,_segment.ehdr),*(*(arg1_00 + 0x48) + 0x80));
        unregister_chrdev_region(*(*(arg1_00 + 0x48) + 0x80),1);
        cdev_del(*(arg1_00 + 0x48));
    }
    return;
}


// ===== sym.qdss_mhi_write_cb @ 0x080025d8 (size 12) =====

void sym.qdss_mhi_write_cb(void)

{
    return;
}


// ===== sym.qdss_mhi_read_cb @ 0x080025e4 (size 424) =====

void sym.qdss_mhi_read_cb(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    if (_segment.ehdr != 0) {
        iVar1 = _segment.ehdr + 0x3c;
        iVar8 = *arg1;
        _raw_spin_lock_bh(iVar1);
        if ((*(iVar2 + 8) == 1) && (*(arg1 + 0x14) != -0x6b)) {
            _raw_spin_unlock_bh(iVar1);
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xa20,0x20);
            if (piVar5 != NULL) {
                iVar6 = *(arg1 + 8);
                piVar5[2] = iVar8;
                piVar5[3] = iVar6;
                _raw_spin_lock_bh(iVar1);
                puVar7 = *(iVar2 + 0x158);
                uVar4 = __list_add_valid(piVar5,puVar7,iVar2 + 0x150);
                if ((uVar4 & 1) != 0) {
                    *(iVar2 + 0x158) = piVar5;
                    *piVar5 = iVar2 + 0x150;
                    piVar5[1] = puVar7;
                    *puVar7 = piVar5;
                }
                _raw_spin_unlock_bh(iVar1);
                if (*(iVar2 + 0x38) == 0) {
                    queue_work_on(0x20,*(iVar2 + 0x118),iVar2 + 0x88);
                }
                else {
                    __wake_up(iVar2 + 0x170,3,1,0);
                }
            }
        }
        else {
            iVar3 = *(iVar2 + 0x38);
            _raw_spin_unlock_bh(iVar1);
            if (iVar3 == 0) {
                _raw_spin_lock_bh(iVar1);
                for (piVar5 = *(iVar2 + 0x130); piVar5 != iVar2 + 0x130; piVar5 = *piVar5) {
                    if (piVar5[2] == iVar8) {
                        *(piVar5 + 4) = 1;
                        *(piVar5 + 0x24) = 0;
                        _raw_spin_unlock_bh(iVar1);
                        return;
                    }
                }
                _raw_spin_unlock_bh(iVar1);
                iVar3 = ___ratelimit(obj.qdss_buf_tbl_remove._rs,"qdss_buf_tbl_remove");
                if (iVar3 != 0) {
                    _printk(0x8000673);
                }
            }
        }
    }
    return;
}


// ===== sym.mhi_uci_read @ 0x0800278c (size 728) =====

uint64_t sym.mhi_uci_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t extraout_x1;
    ulong uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    ulong *puVar10;
    ulong uVar11;
    int64_t *piVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    if (arg2 == 0) {
        arg3 = 0xffffffffffffffea;
        goto code_r0x08002954;
    }
    iVar9 = *(arg1 + 0xd8);
    iVar6 = iVar9 + 0x3c;
    uVar11 = *(iVar9 + 0x50);
    _raw_spin_lock_bh(iVar6);
    if ((*(iVar9 + 8) == 1) && (*(iVar9 + 0x38) == 1)) {
        piVar13 = *(iVar9 + 0x168);
        if (piVar13 == NULL) {
            piVar12 = iVar9 + 0x150;
            if (piVar12 == *piVar12) {
                _raw_spin_unlock_bh(iVar6);
                if ((*(iVar9 + 8) == 1) && (piVar12 == *piVar12)) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&stack0xffffffffffffff80,0);
                    while ((iVar5 = prepare_to_wait_event(iVar9 + 0x170,&stack0xffffffffffffff80,1),
                           *(iVar9 + 8) == 1 && (piVar12 == *piVar12))) {
                        if (iVar5 != 0) {
                            if (iVar5 != -0x200) goto code_r0x08002890;
                            goto code_r0x08002950;
                        }
                        schedule();
                    }
                    finish_wait(iVar9 + 0x170,&stack0xffffffffffffff80);
                }
code_r0x08002890:
                _raw_spin_lock_bh(iVar6);
                if (*(iVar9 + 8) != 1) goto code_r0x08002948;
            }
            piVar13 = *(iVar9 + 0x168);
            if (piVar13 == NULL) {
                piVar13 = *piVar12;
                if ((piVar13 == NULL) || (piVar12 == piVar13)) {
                    _raw_spin_unlock_bh(iVar6);
                    arg3 = 0xfffffffffffffffb;
                    goto code_r0x08002954;
                }
                uVar7 = __list_del_entry_valid(piVar13);
                if ((uVar7 & 1) != 0) {
                    iVar5 = *piVar13;
                    piVar12 = piVar13[1];
                    *(iVar5 + 8) = piVar12;
                    *piVar12 = iVar5;
                }
                *piVar13 = -0x2152ffffffffff00;
                piVar13[1] = -0x2152fffffffffede;
                *(iVar9 + 0x168) = piVar13;
                *(iVar9 + 0x188) = piVar13[3];
            }
        }
        _raw_spin_unlock_bh(iVar6);
        uVar7 = *(iVar9 + 0x188);
        if (uVar7 <= arg3) {
            arg3 = uVar7;
        }
        if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x80029a4);
            (*pcVar2)();
        }
        noname_1 = __check_object_size(piVar13[2] + (piVar13[3] - uVar7),arg3,1);
        iVar3 = sym._copy_to_user(arg2,noname_1,arg3);
        if (iVar3 == 0) {
            iVar5 = *(iVar9 + 0x188) - arg3;
            *(iVar9 + 0x188) = iVar5;
            if (iVar5 == 0) {
                _raw_spin_lock_bh(iVar6);
                *(iVar9 + 0x168) = 0;
                if (*(iVar9 + 8) == 1) {
                    iVar3 = mhi_queue_buf(uVar11,2,piVar13[2],*(iVar9 + 0x30),2);
                    _raw_spin_unlock_bh(iVar6);
                    if (iVar3 == 0) {
                        kfree(piVar13);
                        goto code_r0x08002954;
                    }
                }
                else {
                    _raw_spin_unlock_bh(iVar6);
                    iVar3 = -0x200;
                }
                _printk(0x8000730,iVar3);
                sym.qdss_del_buf_tbl_entry(iVar9,piVar13[2]);
                piVar13[2] = 0;
                kfree(piVar13);
                arg3 = iVar3;
            }
        }
        else {
            arg3 = iVar3;
        }
    }
    else {
code_r0x08002948:
        _raw_spin_unlock_bh(iVar6);
code_r0x08002950:
        arg3 = 0xfffffffffffffe00;
    }
code_r0x08002954:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return arg3;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8002a54;
    iVar9 = _segment.ehdr;
    iVar6 = _segment.ehdr + 0x3c;
    _raw_spin_lock_bh(iVar6);
    if (*(iVar9 + 8) == 0) {
        _raw_spin_unlock_bh(iVar6);
        uVar4 = mhi_prepare_for_transfer(*(iVar9 + 0x50),0);
        if (uVar4 == 0) {
            if (*(iVar9 + 4) < 1) {
                uVar4 = 0xfffffffb;
code_r0x08002b9c:
                mhi_unprepare_from_transfer(*(iVar9 + 0x50));
                piVar13 = *(iVar9 + 0x150);
                while (piVar13 != iVar9 + 0x150) {
                    piVar12 = *piVar13;
                    uVar7 = __list_del_entry_valid(piVar13);
                    if ((uVar7 & 1) != 0) {
                        iVar6 = *piVar13;
                        piVar1 = piVar13[1];
                        *(iVar6 + 8) = piVar1;
                        *piVar1 = iVar6;
                    }
                    *piVar13 = -0x2152ffffffffff00;
                    piVar13[1] = -0x2152fffffffffede;
                    kfree(piVar13[2]);
                    kfree(piVar13);
                    piVar13 = piVar12;
                }
            }
            else {
                iVar3 = 0;
                uVar11 = *(iVar9 + 0x50);
                do {
                    iVar6 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar6 = 0x30;
                    }
                    piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x20);
                    if (piVar13 == NULL) {
code_r0x08002b98:
                        uVar4 = 0xfffffff4;
                        goto code_r0x08002b9c;
                    }
                    iVar6 = __kmalloc(*(iVar9 + 0x30),0xdc0);
                    if (iVar6 == 0) {
                        kfree(piVar13);
                        goto code_r0x08002b98;
                    }
                    uVar8 = *(iVar9 + 0x30);
                    piVar13[2] = iVar6;
                    uVar4 = mhi_queue_buf(uVar11,2,iVar6,uVar8,2);
                    if (uVar4 != 0) {
                        kfree(iVar6);
                        kfree(piVar13);
                        _printk(0x80006c2,iVar3);
                        goto code_r0x08002b9c;
                    }
                    puVar10 = *(iVar9 + 0x148);
                    uVar7 = __list_add_valid(piVar13,puVar10,iVar9 + 0x140);
                    if ((uVar7 & 1) != 0) {
                        *(iVar9 + 0x148) = piVar13;
                        *piVar13 = iVar9 + 0x140;
                        piVar13[1] = puVar10;
                        *puVar10 = piVar13;
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < *(iVar9 + 4));
                uVar4 = 0;
                *(extraout_x1 + 0xd8) = iVar9;
                *(iVar9 + 8) = 1;
            }
        }
        else {
            _printk(0x80004cc);
        }
    }
    else {
        _printk(0x800062d);
        _raw_spin_unlock_bh(iVar6);
        uVar4 = 0xfffffffb;
    }
    return uVar4;
}


// ===== sym.mhi_uci_open @ 0x08002a64 (size 568) =====

int sym.mhi_uci_open(ulong noname_0,int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong *puVar8;
    int iVar9;
    ulong uVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = _segment.ehdr;
    iVar5 = _segment.ehdr + 0x3c;
    _raw_spin_lock_bh(iVar5);
    if (*(iVar2 + 8) == 0) {
        _raw_spin_unlock_bh(iVar5);
        iVar3 = mhi_prepare_for_transfer(*(iVar2 + 0x50),0);
        if (iVar3 == 0) {
            if (*(iVar2 + 4) < 1) {
                iVar3 = -5;
code_r0x08002b9c:
                mhi_unprepare_from_transfer(*(iVar2 + 0x50));
                piVar4 = *(iVar2 + 0x150);
                while (piVar4 != iVar2 + 0x150) {
                    piVar11 = *piVar4;
                    uVar6 = __list_del_entry_valid(piVar4);
                    if ((uVar6 & 1) != 0) {
                        iVar5 = *piVar4;
                        piVar1 = piVar4[1];
                        *(iVar5 + 8) = piVar1;
                        *piVar1 = iVar5;
                    }
                    *piVar4 = -0x2152ffffffffff00;
                    piVar4[1] = -0x2152fffffffffede;
                    kfree(piVar4[2]);
                    kfree(piVar4);
                    piVar4 = piVar11;
                }
            }
            else {
                iVar9 = 0;
                uVar10 = *(iVar2 + 0x50);
                do {
                    iVar5 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar5 = 0x30;
                    }
                    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x20);
                    if (piVar4 == NULL) {
code_r0x08002b98:
                        iVar3 = -0xc;
                        goto code_r0x08002b9c;
                    }
                    iVar5 = __kmalloc(*(iVar2 + 0x30),0xdc0);
                    if (iVar5 == 0) {
                        kfree(piVar4);
                        goto code_r0x08002b98;
                    }
                    uVar7 = *(iVar2 + 0x30);
                    piVar4[2] = iVar5;
                    iVar3 = mhi_queue_buf(uVar10,2,iVar5,uVar7,2);
                    if (iVar3 != 0) {
                        kfree(iVar5);
                        kfree(piVar4);
                        _printk(0x80006c2,iVar9);
                        goto code_r0x08002b9c;
                    }
                    puVar8 = *(iVar2 + 0x148);
                    uVar6 = __list_add_valid(piVar4,puVar8,iVar2 + 0x140);
                    if ((uVar6 & 1) != 0) {
                        *(iVar2 + 0x148) = piVar4;
                        *piVar4 = iVar2 + 0x140;
                        piVar4[1] = puVar8;
                        *puVar8 = piVar4;
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 < *(iVar2 + 4));
                iVar3 = 0;
                *(arg1 + 0xd8) = iVar2;
                *(iVar2 + 8) = 1;
            }
        }
        else {
            _printk(0x80004cc);
        }
    }
    else {
        _printk(0x800062d);
        _raw_spin_unlock_bh(iVar5);
        iVar3 = -5;
    }
    return iVar3;
}


// ===== sym.mhi_uci_release @ 0x08002c9c (size 180) =====

ulong sym.mhi_uci_release(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    iVar1 = arg1_00 + 0x3c;
    _raw_spin_lock_bh(iVar1);
    if (*(arg1_00 + 0x38) == 1) {
        if (*(arg1_00 + 8) == 2) {
            _raw_spin_unlock_bh(iVar1);
            complete(arg1_00 + 0x10);
            return 0;
        }
        if (*(arg1_00 + 8) == 1) {
            *(arg1_00 + 8) = 0;
            _raw_spin_unlock_bh(iVar1);
            __wake_up(arg1_00 + 0x170,3,1,0);
            mhi_unprepare_from_transfer(*(arg1_00 + 0x50));
            flush_workqueue(*(arg1_00 + 0x118));
            sym.mhi_ch_close(arg1_00);
            return 0;
        }
    }
    _raw_spin_unlock_bh(iVar1);
    return 0;
}


// ===== sym.qdss_del_buf_tbl_entry @ 0x08002d50 (size 168) =====

void sym.qdss_del_buf_tbl_entry(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(arg1 + 0x3c);
    piVar4 = arg1 + 0x140;
    do {
        piVar4 = *piVar4;
        if (piVar4 == arg1 + 0x140) goto code_r0x08002dd8;
    } while (piVar4[2] != arg2);
    uVar3 = __list_del_entry_valid(piVar4);
    if ((uVar3 & 1) != 0) {
        iVar1 = *piVar4;
        piVar2 = piVar4[1];
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *piVar4 = -0x2152ffffffffff00;
    piVar4[1] = -0x2152fffffffffede;
    kfree(piVar4[2]);
    kfree(piVar4);
code_r0x08002dd8:
    _raw_spin_unlock_bh(arg1 + 0x3c);
    return;
}


// ===== sym._copy_to_user @ 0x08002df8 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((__raw_spin_lock_bh >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((__raw_spin_lock_bh >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08002f6c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002fb0

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
    //switch table (4 cases) at 0x8000776
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002fc4);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002fd4 (size 144) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"qdss_bridge",obj.qdss_mhi_init.__key);
    if (_segment.ehdr < 0xfffffffffffff001) {
        *(_segment.ehdr + 0x18) = obj.qdss_bridge_groups;
        iVar1 = __mhi_driver_register(obj.qdss_mhi_driver,obj.__this_module);
        if (iVar1 != 0) {
            class_destroy(_segment.ehdr);
        }
    }
    else {
        iVar1 = -0x13;
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08003064 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.qdss_mhi_driver);
    return;
}

