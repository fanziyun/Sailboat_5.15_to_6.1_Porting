// decompiled from qcedev-mod_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 488) =====

//WARNING: Switch with 1 destination removed at 0x08006864

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x2bde3f224c24837b) {
            if (arg1 == -0x3c754d275428e5d1) {
                pcVar2 = sym.qcedev_sha_req_cb.cfi_jt;
            }
            else {
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08006824;
                pcVar2 = sym.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x2bde3f224c24837b) {
                pcVar2 = sym.req_done.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
                goto code_r0x080021d8;
            }
            if (arg1 != -0x8dc801903aca538) {
                if ((arg1 == -0x890743871a4a53) && ((pcVar1 + -0x8002210 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08006824;
            }
            pcVar2 = sym.qcedev_open.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
        }
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
            return;
        }
    }
    else {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08006824;
                pcVar2 = sym._debug_stats_read.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
            }
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym._debug_stats_write.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
        }
        else if (arg1 == 0x573dbb8879fb8f65) {
            pcVar2 = sym.qcedev_suspend.67d2f7a7cab654499daac85ffec66bd8.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08006824;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080021d8:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x08006824:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006878);
    (*pcVar1)();
}


// ===== sym.req_done.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x080021f0 (size 8) =====

void sym.req_done.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(param_1 + 0x110);
    iVar6 = *(param_1 + 0x108);
    *(param_1 + 0x108) = 0;
    if (iVar6 != 0) {
        if (*(iVar6 + 0x42a) == '\0') {
            complete(iVar6 + 0x10);
        }
        *(iVar6 + 0x428) = 3;
    }
    puVar1 = param_1 + 0xf8;
    if (puVar1 != *puVar1) {
        piVar5 = *puVar1;
        uVar4 = __list_del_entry_valid(piVar5);
        if ((uVar4 & 1) != 0) {
            iVar6 = *piVar5;
            piVar2 = piVar5[1];
            *(iVar6 + 8) = piVar2;
            *piVar2 = iVar6;
        }
        *(piVar5 + 0x85) = 0;
        *piVar5 = -0x2152ffffffffff00;
        piVar5[1] = -0x2152fffffffffede;
        __wake_up(piVar5 + 0x82,1,1,0);
    }
    _raw_spin_unlock_irqrestore(param_1 + 0x110,uVar3);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
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
    _segment.ehdr = debugfs_create_dir("qcedev",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        snprintf(&uStack_38,0xf,"stats-%d",1);
        _obj._debug_qcedev = 0;
        iVar1 = debugfs_create_file(&uStack_38,0x1a4,_segment.ehdr,obj._debug_qcedev,obj._debug_stats_ops);
        if (iVar1 == 0) {
            debugfs_remove(_segment.ehdr);
        }
    }
    __platform_driver_register(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt,obj.__this_module);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt);
    return;
}


// ===== sym.qcedev_suspend.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002208 (size 8) =====

ulong sym.qcedev_suspend.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        mutex_lock(obj.qcedev_sent_bw_req);
        if (*(arg1 + 0x14) != 0) {
            iVar1 = qce_set_irqs(*(arg1 + 0xe0),0);
            if (iVar1 == 0) {
                sym.qcedev_control_clocks(arg1,0);
            }
            else {
                _printk(0x8001223,"qcedev_suspend",iVar1);
            }
        }
        mutex_unlock(obj.qcedev_sent_bw_req);
    }
    return 0;
}


// ===== sym.compat_qcedev_ioctl.cfi_jt @ 0x08002210 (size 8) =====

ulong sym.compat_qcedev_ioctl.cfi_jt(ulong param_1,int param_2)

{
    if (param_2 < -0x3eb778f6) {
        if ((param_2 + 0x3f4778fdU < 7) && ((1 << (param_2 + 0x3f4778fdU & 0x1f) & 0x4fU) != 0)) {
            return 0xfffffffffffffff2;
        }
        if (param_2 != -0x3fbb78f5) {
            return 0xfffffffffffffdfd;
        }
    }
    else {
        if (param_2 + 0x3e6f78ffU < 2) {
            return 0xfffffffffffffff2;
        }
        if (param_2 != -0x3eb778f6) {
            return 0xfffffffffffffdfd;
        }
    }
    return 0xffffffffffffffea;
}


// ===== sym.qcedev_ioctl.cfi_jt @ 0x08002218 (size 8) =====

void sym.qcedev_ioctl.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t *arg2;
    int64_t iVar8;
    uint32_t *puVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar10 [16];
    uchar extraout_q0_01 [16];
    uint32_t auStack_1b0 [33];
    uint32_t auStack_12c [17];
    ulong auStack_e8 [16];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar4 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x480);
    if (iVar4 == 0) {
        iVar4 = -0xc;
        goto code_r0x08002928;
    }
    arg2 = *(param_1 + 0xd8);
    iVar8 = *arg2;
    *(iVar4 + 0x400) = arg2;
    if ((iVar8 == 0) || (*(iVar8 + 0xf0) != 0x56434544)) {
        _printk(0x8000df3,"qcedev_ioctl",iVar8);
        iVar3 = -2;
    }
    else if ((param_2 & 0xff00) == 0x8700) {
        *(iVar4 + 0x10) = 0;
        __init_swait_queue_head(iVar4 + 0x18,"&x->wait",obj.init_completion.__key);
        iVar3 = -0x19;
        if (param_2 < -0x3eb778f6) {
            switch(param_2) {
            case 0xc1408703:
            case 0xc1408704:
            case 0xc1408705:
            case 0xc1408706:
            case 0xc1408707:
            case 0xc1408708:
            case 0xc1408709:
                auStack_1b0[4] = 0;
                auStack_1b0[5] = 0;
                auStack_1b0[6] = 0;
                auStack_1b0[7] = 0;
                auStack_1b0[0] = 0;
                auStack_1b0[1] = 0;
                auStack_1b0[2] = 0;
                auStack_1b0[3] = 0;
                iVar5 = sym._copy_from_user(iVar4 + 0x38,param_3,0x140);
                if (iVar5 == 0) {
                    mutex_lock(obj.hash_access_lock);
                    iVar3 = sym.qcedev_check_sha_params(iVar4 + 0x38,iVar8);
                    if (iVar3 == 0) {
                        *(iVar4 + 0x30) = 1;
                        iVar3 = sym.qcedev_hash_init(iVar4,arg2,auStack_1b0);
                        auVar10 = mutex_unlock(obj.hash_access_lock);
                        if (iVar3 == 0) {
                            iVar8 = sym._copy_to_user(param_3,auVar10,0x140);
                            if (iVar8 != 0) goto code_r0x08002914;
                            iVar3 = 0;
                            *(arg2 + 0xc2) = 1;
                        }
                    }
                    else {
                        mutex_unlock(obj.hash_access_lock);
                        iVar3 = -0x16;
                    }
                }
                else {
code_r0x08002914:
                    iVar3 = -0xe;
                }
                break;
            default:
                if (param_2 == 0xc044870b) {
                    auStack_1b0[0x10] = 0;
                    auStack_1b0[0xc] = 0;
                    auStack_1b0[0xd] = 0;
                    auStack_1b0[0xe] = 0;
                    auStack_1b0[0xf] = 0;
                    auStack_1b0[8] = 0;
                    auStack_1b0[9] = 0;
                    auStack_1b0[10] = 0;
                    auStack_1b0[0xb] = 0;
                    auStack_1b0[4] = 0;
                    auStack_1b0[5] = 0;
                    auStack_1b0[6] = 0;
                    auStack_1b0[7] = 0;
                    auStack_1b0[0] = 0;
                    auStack_1b0[1] = 0;
                    auStack_1b0[2] = 0;
                    auStack_1b0[3] = 0;
                    iVar8 = sym._copy_from_user(auStack_1b0,param_3,0x44);
                    if (iVar8 != 0) goto code_r0x08002914;
                    if (auStack_1b0[0x10] < 0x11) {
                        if (auStack_1b0[0x10] != 0) {
                            uVar7 = 0;
code_r0x08002718:
                            if (uVar7 != 0x10) {
                                iVar3 = sym.qcedev_check_and_unmap_buffer(arg2,auStack_1b0[uVar7]);
                                if (iVar3 == 0) goto code_r0x08002730;
                                uVar1 = auStack_1b0[uVar7];
                                uVar6 = 0x80006c0;
code_r0x08002b0c:
                                _printk(uVar6,"qcedev_ioctl",uVar1,iVar3);
                                break;
                            }
                            goto code_r0x08002b58;
                        }
code_r0x08002740:
                        iVar3 = 0;
                    }
                    else {
code_r0x08002ac8:
                        _printk(0x8000d2d,"qcedev_ioctl");
                        iVar3 = -0x16;
                    }
                }
            }
        }
        else if (param_2 + 0x3d5f78ff < 2) {
            iVar5 = sym._copy_from_user(iVar4 + 0x38,param_3,0x2a0);
            if (iVar5 != 0) goto code_r0x08002914;
            *(iVar4 + 0x30) = 0;
            iVar3 = sym.qcedev_check_cipher_params(iVar4 + 0x38,iVar8);
            if (iVar3 == 0) {
                iVar3 = sym.qcedev_vbuf_ablk_cipher(iVar4,arg2);
                if (iVar3 == 0) {
                    iVar8 = 0x2a0;
                    auVar10 = extraout_q0_01;
                    goto code_r0x08002a98;
                }
            }
            else {
code_r0x080026c0:
                iVar3 = -0x16;
            }
        }
        else if (param_2 == 0xc148870a) {
            memset(auStack_1b0,0,0x148);
            iVar8 = sym._copy_from_user(auStack_1b0,param_3,0x148);
            if (iVar8 != 0) goto code_r0x08002914;
            if (0x10 < auStack_1b0[0x10]) goto code_r0x08002ac8;
            auVar10 = extraout_q0_00;
            if (auStack_1b0[0x10] != 0) {
                uVar7 = 0;
                puVar9 = auStack_1b0;
                do {
                    if (uVar7 == 0x10) goto code_r0x08002b58;
                    iVar3 = sym.qcedev_check_and_map_buffer(arg2,*puVar9,puVar9[0x21],puVar9[0x11]);
                    if (iVar3 != 0) {
                        uVar1 = *puVar9;
                        uVar6 = 0x8000957;
                        goto code_r0x08002b0c;
                    }
                    auStack_e8[uVar7] = 0;
                    auVar10 = _printk(0x8000aba,"qcedev_ioctl",0,*puVar9);
                    uVar7 = uVar7 + 1;
                    puVar9 = puVar9 + 1;
                } while (uVar7 < auStack_1b0[0x10]);
            }
            iVar8 = 0x148;
code_r0x08002a98:
            iVar8 = sym._copy_to_user(param_3,auVar10,iVar8);
            iVar3 = 0;
            if (iVar8 != 0) {
                iVar3 = -0xe;
            }
        }
        else if (param_2 == 0xc258870c) {
            iVar8 = sym._copy_from_user(iVar4 + 0x38,param_3,600);
            if (iVar8 != 0) goto code_r0x08002914;
            *(iVar4 + 0x30) = 2;
            iVar3 = sym.qcedev_check_offload_cipher_params(iVar4 + 0x38);
            if (iVar3 != 0) goto code_r0x080026c0;
            *(iVar4 + 0x288) = 0;
            iVar3 = sym.qcedev_smmu_ablk_offload_cipher(iVar4,arg2);
            if (iVar3 == 0) {
                iVar8 = 600;
                auVar10 = extraout_q0;
                goto code_r0x08002a98;
            }
        }
    }
    else {
        iVar3 = -0x19;
    }
    kfree(iVar4);
    iVar4 = iVar3;
code_r0x08002928:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08002b58:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002b5c);
    (*pcVar2)();
code_r0x08002730:
    uVar7 = uVar7 + 1;
    if (auStack_1b0[0x10] <= uVar7) goto code_r0x08002740;
    goto code_r0x08002718;
}


// ===== sym.qcedev_sha_req_cb.cfi_jt @ 0x08002220 (size 8) =====

void sym.qcedev_sha_req_cb.cfi_jt(int64_t param_1,int64_t *param_2,uint *param_3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char cVar5;
    bool bVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (piVar8 = *(param_1 + 0x80), piVar8 != NULL)) && (iVar7 = *piVar8, iVar7 != 0)) {
        if (param_2 != NULL) {
            iVar3 = param_2[3];
            iVar2 = *param_2;
            iVar4 = param_2[1];
            piVar8[5] = param_2[2];
            piVar8[6] = iVar3;
            piVar8[3] = iVar2;
            piVar8[4] = iVar4;
        }
        if (param_3 != NULL) {
            *(piVar8 + 1) = *param_3;
            *(piVar8 + 0xc) = param_3[1];
        }
        puVar1 = iVar7 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar9 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar9 & 1) == 0) {
            __tasklet_schedule(iVar7 + 0x118);
        }
    }
    return;
}


// ===== sym.qcedev_offload_cipher_req_cb.cfi_jt @ 0x08002228 (size 8) =====

void sym.qcedev_offload_cipher_req_cb.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (*(param_1 + 0x80) != NULL)) && (iVar5 = **(param_1 + 0x80), iVar5 != 0)) {
        if (param_3 != 0) {
            memcpy(*(iVar5 + 0x108) + 0x248,param_3,*(*(iVar5 + 0x108) + 0x268));
        }
        puVar1 = iVar5 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 & 1) == 0) {
            __tasklet_schedule(iVar5 + 0x118);
        }
    }
    return;
}


// ===== sym.qcedev_cipher_req_cb.cfi_jt @ 0x08002230 (size 8) =====

void sym.qcedev_cipher_req_cb.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 != 0) && (*(param_1 + 0x80) != NULL)) && (iVar5 = **(param_1 + 0x80), iVar5 != 0)) {
        if (param_3 != 0) {
            memcpy(*(iVar5 + 0x108) + 0x2a0,param_3,*(*(iVar5 + 0x108) + 0x2c0));
        }
        puVar1 = iVar5 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 & 1) == 0) {
            __tasklet_schedule(iVar5 + 0x118);
        }
    }
    return;
}


// ===== sym._debug_stats_read.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002238 (size 8) =====

ulong sym._debug_stats_read.67d2f7a7cab654499daac85ffec66bd8.cfi_jt
                (int64_t param_1,ulong param_2,uint64_t param_3,ulong param_4)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = scnprintf(obj._debug_read_buf,0x3ff,"",**(param_1 + 0xd8) + 1);
    if (uVar2 < 0x401) {
        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,"   Encryption operation success       : %d\n",
                          _segment.ehdr);
        uVar2 = iVar3 + uVar2;
        if (uVar2 < 0x401) {
            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,"",_segment.ehdr);
            uVar2 = iVar3 + uVar2;
            if (uVar2 < 0x401) {
                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,
                                  "   Decryption operation success     : %d\n",_segment.ehdr);
                uVar2 = iVar3 + uVar2;
                if (uVar2 < 0x401) {
                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,
                                      "   Encryption operation fail          : %d\n",_segment.ehdr);
                    uVar5 = iVar3 + uVar2;
                    if (param_3 < uVar5) {
                        uVar4 = 0xffffffffffffffea;
                    }
                    else {
                        uVar4 = simple_read_from_buffer(param_2,uVar5,param_4,obj._debug_read_buf,uVar5);
                    }
                    return uVar4;
                }
            }
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005ce8);
    (*pcVar1)();
}


// ===== sym.qcedev_open.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002240 (size 8) =====

ulong sym.qcedev_open.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1,int64_t param_2)

{
    int *piVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    code *pcVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(param_1 + 0x4c) & 0xfffff;
    if (_segment.ehdr != uVar5) {
code_r0x08006490:
        _printk(0x8000dda,"qcedev_open",uVar5);
        return 0xfffffffe;
    }
    if (1 < uVar5) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8006504);
        (*pcVar4)();
    }
    pcVar4 = obj.qce_dev + uVar5 * 0x158;
    if (pcVar4 == NULL) goto code_r0x08006490;
    puVar3 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x108);
    if (puVar3 == NULL) {
        return 0xfffffff4;
    }
    *puVar3 = pcVar4;
    *(param_2 + 0xd8) = puVar3;
    mutex_lock(obj.qcedev_sent_bw_req);
    uVar6 = uVar5 * 0x158;
    if (0x144 < uVar6) {
code_r0x08006504:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x8006508);
        (*pcVar4)();
    }
    piVar1 = uVar6 + 0x80004b4;
    iVar2 = *piVar1;
    if (iVar2 == 0) {
        iVar2 = sym.qcedev_control_clocks(pcVar4,1);
        if (iVar2 != 0) goto code_r0x08006440;
        if (0x78 < uVar6) goto code_r0x08006504;
        iVar2 = qce_set_irqs(*(uVar5 * 0x158 + 0x8000580),1);
        if (iVar2 != 0) {
            _printk(0x800090d,"qcedev_ce_high_bw_req",iVar2);
            sym.qcedev_control_clocks(pcVar4,0);
            goto code_r0x08006440;
        }
        iVar2 = *piVar1;
    }
    *piVar1 = iVar2 + 1;
code_r0x08006440:
    mutex_unlock(obj.qcedev_sent_bw_req);
    __mutex_init(puVar3 + 0x1b,"",obj.qcedev_open.__key);
    puVar3[0x19] = puVar3 + 0x19;
    puVar3[0x1a] = puVar3 + 0x19;
    return 0;
}


// ===== sym.simple_open.cfi_jt @ 0x08002248 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcedev_release.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002250 (size 8) =====

ulong sym.qcedev_release.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t *arg1;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0xd8);
    arg1_00 = *arg1;
    if (arg1_00 == 0) goto code_r0x08006594;
    if (*(arg1_00 + 0xf0) != 0x56434544) {
        _printk(0x8000df3,"qcedev_release",arg1_00);
    }
    mutex_lock(obj.qcedev_sent_bw_req);
    iVar1 = *(arg1_00 + 0x14);
    if (iVar1 == 1) {
        iVar1 = qce_set_irqs(*(arg1_00 + 0xe0),0);
        if (iVar1 == 0) {
            iVar1 = sym.qcedev_control_clocks(arg1_00,0);
            if (iVar1 == 0) {
                iVar1 = *(arg1_00 + 0x14);
                goto code_r0x08006580;
            }
        }
        else {
            _printk(0x8001223,"qcedev_ce_high_bw_req",iVar1);
        }
    }
    else {
code_r0x08006580:
        *(arg1_00 + 0x14) = iVar1 + -1;
    }
    mutex_unlock(obj.qcedev_sent_bw_req);
code_r0x08006594:
    iVar1 = sym.qcedev_unmap_all_buffers(arg1);
    if (iVar1 != 0) {
        _printk(0x8001408,"qcedev_release");
    }
    kfree_sensitive(arg1);
    *(param_2 + 0xd8) = 0;
    return 0;
}


// ===== sym.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002258 (size 8) =====

uint32_t sym.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar1 = of_device_is_compatible(*(param_1 + 0x300),0x8000f76);
    if (iVar1 == 0) {
        iVar1 = of_device_is_compatible(*(param_1 + 0x300),0x800066c);
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            uVar2 = sym.qcedev_parse_context_bank(param_1);
        }
        goto code_r0x0800618c;
    }
    uVar2 = alloc_chrdev_region(obj.qcedev_device_no,0,1,0x8000c1c);
    if (uVar2 < 0) {
        _printk(0x8000f82,uVar2);
        goto code_r0x0800618c;
    }
    _segment.ehdr = __class_create(obj.__this_module,0x8000c1c,obj.qcedev_probe_device.__key);
    if (_segment.ehdr < 0xfffffffffffff001) {
        _segment.ehdr = device_create(_segment.ehdr,0,_segment.ehdr & 0xffffffff,0,0x8000c1c);
        if (_segment.ehdr < 0xfffffffffffff001) {
            cdev_init(0x80004f0,obj.qcedev_fops);
            *0x8000550 = obj.__this_module;
            uStack_5c = cdev_add(0x80004f0,_segment.ehdr & 0xfff00000,1);
            if (uStack_5c < 0) {
                _printk(0x80009ed,uStack_5c);
            }
            else {
                *0x8000578 = 0;
                *0x80004b4 = 0;
                *0x8000598 = 0x8000598;
                *0x80005a0 = 0x8000598;
                *0x80005a8 = 0;
                *0x80005e0 = 0x80005e0;
                *0x80005e8 = 0x80005e0;
                *0x80005b0 = 0;
                tasklet_init(0x80005b8,sym.req_done.67d2f7a7cab654499daac85ffec66bd8.cfi_jt,obj.qce_dev);
                *0x80004e0 = of_icc_get(param_1 + 0x10,"");
                if (*0x80004e0 < 0xfffffffffffff001) {
                    iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,icc_avg_bw",0x80004e8,1,0);
                    if (iVar1 < 0) {
                        _printk(0x8000db2,"qcedev_probe_device");
                        _segment.ehdr = CONCAT44(*0x8000004,0x180);
                    }
                    iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,icc_peak_bw",0x80004ec,1,0)
                    ;
                    if (iVar1 < 0) {
                        _printk(0x8000a6d,"qcedev_probe_device");
                        uVar5 = 0x180;
                        _segment.ehdr = CONCAT44(*0x8000004,0x180);
                    }
                    else {
                        uVar5 = _segment.ehdr & 0xffffffff;
                    }
                    uStack_5c = icc_set_bw(*0x80004e0,*0x80004e8,uVar5);
                    if (uStack_5c == 0) {
                        uVar5 = qce_open(param_1,&uStack_5c);
                        if (uVar5 == 0) {
                            uStack_5c = 0xffffffed;
                        }
                        else {
                            _segment.ehdr = uVar5;
                            uStack_5c = qce_set_irqs(uVar5,0);
                            if (uStack_5c == 0) {
                                uStack_5c = icc_set_bw(_segment.ehdr,0);
                                if (uStack_5c == 0) {
                                    *0x8000588 = param_1;
                                    *(param_1 + 0xa8) = obj.qce_dev;
                                    qce_hw_support(*0x8000580,0x80004b8);
                                    if (*0x80004c2 == '\0') {
                                        puVar6 = *(param_1 + 0xa0);
                                        _obj.qce_dev = *puVar6;
                                        *0x80004a8 = *(puVar6 + 1);
                                        *0x80004ac = *(puVar6 + 0xc);
                                    }
                                    else {
                                        *0x80004ac = 1;
                                        _obj.qce_dev = 0;
                                        *0x80004a8 = *0x80004c4;
                                    }
                                    *0x80005f0 = sym.qcedev_mem_new_client(0);
                                    if (*0x80005f0 == 0) {
                                        uVar3 = 0x8001052;
                                        goto code_r0x080060f0;
                                    }
                                    uStack_5c = of_platform_populate
                                                          (*(param_1 + 0x300),obj.qcedev_match,0,param_1 + 0x10);
                                    if (uStack_5c == 0) {
                                        uVar2 = 0;
                                        goto code_r0x0800618c;
                                    }
                                    _printk(0x8001545,"qcedev_probe_device",uStack_5c);
                                    if (_segment.ehdr != 0) {
                                        kfree();
                                    }
                                    _segment.ehdr = 0;
                                }
                                else {
                                    uVar3 = 0x80015c2;
code_r0x080060f0:
                                    _printk(uVar3,"qcedev_probe_device");
                                }
                                qce_close(uVar5);
                            }
                            else {
                                _printk(0x8001223,"qcedev_probe_device",uStack_5c);
                            }
                        }
                        icc_set_bw(_segment.ehdr,0,0);
                    }
                    else {
                        _printk(0x8000a03,"qcedev_probe_device");
                    }
                    if (_segment.ehdr != 0) {
                        icc_put();
                    }
                }
                else {
                    uStack_5c = *0x80004e0;
                    _printk(0x8000c65,"qcedev_probe_device");
                }
                cdev_del(0x80004f0);
            }
            device_destroy(_segment.ehdr,_segment.ehdr & 0xffffffff);
        }
        else {
            _printk(0x80009cc,uVar2);
            uStack_5c = 0xfffffff4;
        }
        class_destroy(_segment.ehdr);
    }
    else {
        uStack_5c = 0xfffffff4;
        _printk(0x8000856,0xfffffff4);
    }
    unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    *0x80004e0 = 0;
    *(param_1 + 0xa8) = 0;
    *0x8000580 = 0;
    *0x8000588 = 0;
    uVar2 = uStack_5c;
code_r0x0800618c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qcedev_remove;
    iVar4 = *(iVar4 + 0xa8);
    if (iVar4 != 0) {
        if (*(iVar4 + 0xe0) != 0) {
            qce_close();
        }
        if (*(iVar4 + 0x40) != 0) {
            icc_put();
        }
        tasklet_kill(iVar4 + 0x118);
        cdev_del(iVar4 + 0x50);
        device_destroy(_segment.ehdr,_segment.ehdr & 0xffffffff);
        class_destroy(_segment.ehdr);
        unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    }
    return 0;
}


// ===== sym.qcedev_resume.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002260 (size 8) =====

ulong sym.qcedev_resume.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    if (arg1 != 0) {
        mutex_lock(obj.qcedev_sent_bw_req);
        if (((*(arg1 + 0x14) != 0) && (iVar1 = sym.qcedev_control_clocks(arg1,1), iVar1 == 0)) &&
           (iVar1 = qce_set_irqs(*(arg1 + 0xe0),1), iVar1 != 0)) {
            _printk(0x800090d,"qcedev_resume",iVar1);
            sym.qcedev_control_clocks(arg1,0);
        }
        mutex_unlock(obj.qcedev_sent_bw_req);
    }
    return 0;
}


// ===== sym.qcedev_remove.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002268 (size 8) =====

ulong sym.qcedev_remove.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    if (iVar1 != 0) {
        if (*(iVar1 + 0xe0) != 0) {
            qce_close();
        }
        if (*(iVar1 + 0x40) != 0) {
            icc_put();
        }
        tasklet_kill(iVar1 + 0x118);
        cdev_del(iVar1 + 0x50);
        device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
        class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
        unregister_chrdev_region(_segment.ehdr,1);
    }
    return 0;
}


// ===== sym._debug_stats_write.67d2f7a7cab654499daac85ffec66bd8.cfi_jt @ 0x08002270 (size 8) =====

ulong sym._debug_stats_write.67d2f7a7cab654499daac85ffec66bd8.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    *0x8000388 = 0;
    *0x8000390 = 0;
    _obj.hash_access_lock = 0;
    return param_3;
}


// ===== sym.qcedev_sha_req_cb @ 0x08002278 (size 168) =====

void sym.qcedev_sha_req_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char cVar5;
    bool bVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (piVar8 = *(arg1 + 0x80), piVar8 != NULL)) && (iVar7 = *piVar8, iVar7 != 0)) {
        if (arg2 != 0) {
            iVar3 = *(arg2 + 0x18);
            iVar2 = *arg2;
            iVar4 = *(arg2 + 8);
            piVar8[5] = *(arg2 + 0x10);
            piVar8[6] = iVar3;
            piVar8[3] = iVar2;
            piVar8[4] = iVar4;
        }
        if (arg3 != 0) {
            *(piVar8 + 1) = *arg3;
            *(piVar8 + 0xc) = *(arg3 + 4);
        }
        puVar1 = iVar7 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar9 = *puVar1;
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
                *puVar1 = uVar9 | 1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar9 & 1) == 0) {
            __tasklet_schedule(iVar7 + 0x118);
        }
    }
    return;
}


// ===== sym.qcedev_cipher_req_cb @ 0x08002320 (size 164) =====

void sym.qcedev_cipher_req_cb(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (*(arg1 + 0x80) != NULL)) && (iVar5 = **(arg1 + 0x80), iVar5 != 0)) {
        if (arg2 != 0) {
            noname_1 = memcpy(*(iVar5 + 0x108) + 0x2a0,arg2,*(*(iVar5 + 0x108) + 0x2c0));
        }
        puVar1 = iVar5 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 & 1) == 0) {
            __tasklet_schedule(noname_1,iVar5 + 0x118);
        }
    }
    return;
}


// ===== sym.qcedev_offload_cipher_req_cb @ 0x080023c4 (size 164) =====

void sym.qcedev_offload_cipher_req_cb(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 != 0) && (*(arg1 + 0x80) != NULL)) && (iVar5 = **(arg1 + 0x80), iVar5 != 0)) {
        if (arg2 != 0) {
            noname_1 = memcpy(*(iVar5 + 0x108) + 0x248,arg2,*(*(iVar5 + 0x108) + 0x268));
        }
        puVar1 = iVar5 + 0x120;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar4 = *puVar1;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
                *puVar1 = uVar4 | 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if ((uVar4 & 1) == 0) {
            __tasklet_schedule(noname_1,iVar5 + 0x118);
        }
    }
    return;
}


// ===== sym.qcedev_ioctl @ 0x08002468 (size 1780) =====

//WARNING: Switch with 1 destination removed at 0x08002550

void sym.qcedev_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int64_t *arg2_00;
    int64_t iVar8;
    uint32_t *puVar9;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar10 [16];
    uchar extraout_q0_01 [16];
    uint32_t auStack_1b0 [33];
    uint32_t auStack_12c [17];
    ulong auStack_e8 [16];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar1 = arg2;
    iVar4 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x480);
    if (iVar4 == 0) {
        iVar4 = -0xc;
        goto code_r0x08002928;
    }
    arg2_00 = *(arg1 + 0xd8);
    iVar8 = *arg2_00;
    *(iVar4 + 0x400) = arg2_00;
    if ((iVar8 == 0) || (*(iVar8 + 0xf0) != 0x56434544)) {
        _printk(0x8000df3,"qcedev_ioctl",iVar8);
        iVar3 = -2;
    }
    else if ((uVar1 & 0xff00) == 0x8700) {
        *(iVar4 + 0x10) = 0;
        __init_swait_queue_head(iVar4 + 0x18,"&x->wait",obj.init_completion.__key);
        iVar3 = -0x19;
        if (uVar1 < -0x3eb778f6) {
            if (uVar1 + 0x3ebf78fd < 7) {
    //switch table (7 cases) at 0x8000628
                auStack_1b0[4] = 0;
                auStack_1b0[5] = 0;
                auStack_1b0[6] = 0;
                auStack_1b0[7] = 0;
                auStack_1b0[0] = 0;
                auStack_1b0[1] = 0;
                auStack_1b0[2] = 0;
                auStack_1b0[3] = 0;
                iVar5 = sym._copy_from_user(iVar4 + 0x38,arg3,0x140);
                if (iVar5 == 0) {
                    mutex_lock(obj.hash_access_lock);
                    iVar3 = sym.qcedev_check_sha_params(iVar4 + 0x38,iVar8);
                    if (iVar3 == 0) {
                        *(iVar4 + 0x30) = 1;
                        iVar3 = sym.qcedev_hash_init(iVar4,arg2_00,auStack_1b0);
                        auVar10 = mutex_unlock(obj.hash_access_lock);
                        if (iVar3 == 0) {
                            iVar8 = sym._copy_to_user(arg3,auVar10,0x140);
                            if (iVar8 != 0) goto code_r0x08002914;
                            iVar3 = 0;
                            *(arg2_00 + 0xc2) = 1;
                        }
                    }
                    else {
                        mutex_unlock(obj.hash_access_lock);
                        iVar3 = -0x16;
                    }
                }
                else {
code_r0x08002914:
                    iVar3 = -0xe;
                }
            }
            else if (uVar1 == 0xc044870b) {
                auStack_1b0[0x10] = 0;
                auStack_1b0[0xc] = 0;
                auStack_1b0[0xd] = 0;
                auStack_1b0[0xe] = 0;
                auStack_1b0[0xf] = 0;
                auStack_1b0[8] = 0;
                auStack_1b0[9] = 0;
                auStack_1b0[10] = 0;
                auStack_1b0[0xb] = 0;
                auStack_1b0[4] = 0;
                auStack_1b0[5] = 0;
                auStack_1b0[6] = 0;
                auStack_1b0[7] = 0;
                auStack_1b0[0] = 0;
                auStack_1b0[1] = 0;
                auStack_1b0[2] = 0;
                auStack_1b0[3] = 0;
                iVar8 = sym._copy_from_user(auStack_1b0,arg3,0x44);
                if (iVar8 != 0) goto code_r0x08002914;
                if (auStack_1b0[0x10] < 0x11) {
                    if (auStack_1b0[0x10] != 0) {
                        uVar7 = 0;
code_r0x08002718:
                        if (uVar7 != 0x10) {
                            iVar3 = sym.qcedev_check_and_unmap_buffer(arg2_00,auStack_1b0[uVar7]);
                            if (iVar3 == 0) goto code_r0x08002730;
                            uVar1 = auStack_1b0[uVar7];
                            uVar6 = 0x80006c0;
code_r0x08002b0c:
                            _printk(uVar6,"qcedev_ioctl",uVar1,iVar3);
                            goto code_r0x0800291c;
                        }
                        goto code_r0x08002b58;
                    }
code_r0x08002740:
                    iVar3 = 0;
                }
                else {
code_r0x08002ac8:
                    _printk(0x8000d2d,"qcedev_ioctl");
                    iVar3 = -0x16;
                }
            }
        }
        else if (uVar1 + 0x3d5f78ff < 2) {
            iVar5 = sym._copy_from_user(iVar4 + 0x38,arg3,0x2a0);
            if (iVar5 != 0) goto code_r0x08002914;
            *(iVar4 + 0x30) = 0;
            iVar3 = sym.qcedev_check_cipher_params(iVar4 + 0x38,iVar8);
            if (iVar3 == 0) {
                iVar3 = sym.qcedev_vbuf_ablk_cipher(iVar4,arg2_00);
                if (iVar3 == 0) {
                    iVar8 = 0x2a0;
                    auVar10 = extraout_q0_01;
                    goto code_r0x08002a98;
                }
            }
            else {
code_r0x080026c0:
                iVar3 = -0x16;
            }
        }
        else if (uVar1 == 0xc148870a) {
            memset(auStack_1b0,0,0x148);
            iVar8 = sym._copy_from_user(auStack_1b0,arg3,0x148);
            if (iVar8 != 0) goto code_r0x08002914;
            if (0x10 < auStack_1b0[0x10]) goto code_r0x08002ac8;
            auVar10 = extraout_q0_00;
            if (auStack_1b0[0x10] != 0) {
                uVar7 = 0;
                puVar9 = auStack_1b0;
                do {
                    if (uVar7 == 0x10) goto code_r0x08002b58;
                    iVar3 = sym.qcedev_check_and_map_buffer(arg2_00,*puVar9,puVar9[0x21],puVar9[0x11]);
                    if (iVar3 != 0) {
                        uVar1 = *puVar9;
                        uVar6 = 0x8000957;
                        goto code_r0x08002b0c;
                    }
                    auStack_e8[uVar7] = 0;
                    auVar10 = _printk(0x8000aba,"qcedev_ioctl",0,*puVar9);
                    uVar7 = uVar7 + 1;
                    puVar9 = puVar9 + 1;
                } while (uVar7 < auStack_1b0[0x10]);
            }
            iVar8 = 0x148;
code_r0x08002a98:
            iVar8 = sym._copy_to_user(arg3,auVar10,iVar8);
            iVar3 = 0;
            if (iVar8 != 0) {
                iVar3 = -0xe;
            }
        }
        else if (uVar1 == 0xc258870c) {
            iVar8 = sym._copy_from_user(iVar4 + 0x38,arg3,600);
            if (iVar8 != 0) goto code_r0x08002914;
            *(iVar4 + 0x30) = 2;
            iVar3 = sym.qcedev_check_offload_cipher_params(iVar4 + 0x38);
            if (iVar3 != 0) goto code_r0x080026c0;
            *(iVar4 + 0x288) = 0;
            iVar3 = sym.qcedev_smmu_ablk_offload_cipher(iVar4,arg2_00);
            if (iVar3 == 0) {
                iVar8 = 600;
                auVar10 = extraout_q0;
                goto code_r0x08002a98;
            }
        }
    }
    else {
        iVar3 = -0x19;
    }
code_r0x0800291c:
    kfree(iVar4);
    iVar4 = iVar3;
code_r0x08002928:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08002b58:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002b5c);
    (*pcVar2)();
code_r0x08002730:
    uVar7 = uVar7 + 1;
    if (auStack_1b0[0x10] <= uVar7) goto code_r0x08002740;
    goto code_r0x08002718;
}


// ===== fcn.08002800 @ 0x08002800 (size 852) =====

void fcn.08002800(int64_t arg3,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x23;
    int64_t unaff_x24;
    int64_t unaff_x29;
    uchar noname_1 [16];
    ulong uStack0000000000000010;
    ulong uStack0000000000000018;
    ulong uStack0000000000000020;
    ulong uStack0000000000000028;
    
    uStack0000000000000020 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000018 = 0;
    iVar3 = sym._copy_from_user(arg3,arg1,arg2);
    if (iVar3 != 0) {
        iVar2 = -0xe;
        goto code_r0x0800291c;
    }
    mutex_lock(obj.hash_access_lock);
    iVar2 = sym.qcedev_check_sha_params(unaff_x24,unaff_x23);
    if (iVar2 == 0) {
        *(unaff_x19 + 0x30) = 1;
        sym.qcedev_hash_init(unaff_x19,unaff_x21,&stack0x00000010);
        iVar2 = sym.qcedev_sha_update(unaff_x19,unaff_x21,&stack0x00000010);
        if ((iVar2 != 0) || (iVar2 = sym.qcedev_hash_final(unaff_x19,unaff_x21), iVar2 != 0)) {
            mutex_unlock(obj.hash_access_lock);
            goto code_r0x0800291c;
        }
        if (*(unaff_x21 + 0x38) < 0x21) {
            *(unaff_x19 + 0x160) = *(unaff_x21 + 0x38);
            memcpy(unaff_x19 + 0x140,unaff_x21 + 0x18,*(unaff_x21 + 0x38));
            noname_1 = mutex_unlock(obj.hash_access_lock);
            iVar3 = sym._copy_to_user(unaff_x20,noname_1,0x140);
            iVar2 = 0;
            if (iVar3 != 0) {
                iVar2 = -0xe;
            }
            goto code_r0x0800291c;
        }
        _printk(0x80010bf);
    }
    mutex_unlock(obj.hash_access_lock);
    iVar2 = -0x16;
code_r0x0800291c:
    kfree();
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != *(unaff_x29 + -8)) {
        __stack_chk_fail(iVar2);
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x8002b5c);
        (*pcVar1)();
    }
    return;
}


// ===== fcn.080028a4 @ 0x080028a4 (size 672) =====

void fcn.080028a4(int64_t arg3,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t unaff_x21;
    int64_t unaff_x23;
    int64_t unaff_x24;
    int64_t unaff_x29;
    uchar noname_1 [16];
    ulong uStack0000000000000010;
    ulong uStack0000000000000018;
    ulong uStack0000000000000020;
    ulong uStack0000000000000028;
    
    uStack0000000000000020 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000018 = 0;
    iVar3 = sym._copy_from_user(arg3,arg1,arg2);
    if (iVar3 != 0) {
        iVar2 = -0xe;
        goto code_r0x0800291c;
    }
    mutex_lock(obj.hash_access_lock);
    iVar2 = sym.qcedev_check_sha_params(unaff_x24,unaff_x23);
    if (iVar2 == 0) {
        *(unaff_x19 + 0x30) = 1;
        if (*(unaff_x19 + 0x174) == 4) {
            iVar2 = sym.qcedev_hash_cmac(unaff_x19,unaff_x21,&stack0x00000010);
        }
        else {
            if (*(unaff_x21 + 0xc2) == '\0') {
                _printk(0x80014ce,"qcedev_ioctl");
                goto code_r0x080028d0;
            }
            iVar2 = sym.qcedev_sha_update(unaff_x19,unaff_x21,&stack0x00000010);
        }
        if (iVar2 != 0) {
            mutex_unlock(obj.hash_access_lock);
            goto code_r0x0800291c;
        }
        if (*(unaff_x21 + 0x38) < 0x21) {
            memcpy(unaff_x19 + 0x140,unaff_x21 + 0x18);
            noname_1 = mutex_unlock(obj.hash_access_lock);
            iVar3 = sym._copy_to_user(unaff_x20,noname_1,0x140);
            iVar2 = 0;
            if (iVar3 != 0) {
                iVar2 = -0xe;
            }
            goto code_r0x0800291c;
        }
        _printk(0x80010bf,*(unaff_x21 + 0x38));
    }
code_r0x080028d0:
    mutex_unlock(obj.hash_access_lock);
    iVar2 = -0x16;
code_r0x0800291c:
    kfree();
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == *(unaff_x29 + -8)) {
        return;
    }
    __stack_chk_fail(iVar2);
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002b5c);
    (*pcVar1)();
}


// ===== sym.qcedev_check_cipher_params @ 0x08002b5c (size 960) =====

ulong sym.qcedev_check_cipher_params(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 == '\0') {
        uVar8 = *(arg1 + 0x218);
        uVar6 = uVar8;
        if (((uVar8 == 0) || (uVar1 = *(arg1 + 0x21c), uVar1 == 0)) || (0x10 < uVar8)) {
            uVar4 = 0x800164d;
        }
        else {
            uVar8 = *(arg1 + 0x290);
            if ((2 < uVar8) || (uVar7 = *(arg1 + 0x294), 6 < uVar7)) {
                uVar4 = 0x80012a4;
code_r0x08002df0:
                pcVar5 = "qcedev_check_cipher_params";
code_r0x08002df8:
                _printk(uVar4,pcVar5,uVar8);
                return 0xffffffea;
            }
            if ((uVar7 == 3) && (*(arg2 + 0x1e) == '\0')) {
                uVar4 = 0x8000fa3;
            }
            else {
                if (uVar8 == 2) {
                    uVar8 = *(arg1 + 0x264);
                    if (uVar8 == 0x18) {
                        if (*(arg2 + 0x1d) == '\0') {
                            uVar4 = 0x80011e7;
code_r0x08002ed0:
                            pcVar5 = "";
                            goto code_r0x08002eec;
                        }
                    }
                    else if (uVar8 == 0) {
                        iVar9 = 0;
                        do {
                            if (*(arg1 + 0x221 + iVar9) != '\0') {
                                uVar4 = 0x8000771;
                                goto code_r0x08002ed0;
                            }
                            iVar9 = iVar9 + 1;
                        } while (iVar9 != 0x40);
                        uVar8 = *(arg1 + 0x298);
                        if (((uVar8 & 0xfffffffe) != 2) && (*(arg2 + 8) == 0)) {
                            uVar4 = 0x8000d58;
                            pcVar5 = "";
                            goto code_r0x08002df8;
                        }
                    }
                    else if (uVar7 == 3) {
                        if ((uVar8 != 0x20) && (uVar8 != 0x40)) {
                            uVar4 = 0x8000798;
                            pcVar5 = "";
                            goto code_r0x08002df8;
                        }
                    }
                    else if ((uVar8 != 0x10) && (uVar8 != 0x20)) {
                        uVar4 = 0x80010dd;
                        pcVar5 = "";
                        goto code_r0x08002df8;
                    }
                }
                uVar8 = *(arg1 + 0x28c);
                if (uVar8 == 0) {
code_r0x08002cc8:
                    if (uVar1 < uVar8) {
                        uVar4 = 0x8000f19;
                        uVar10 = uVar1;
                        goto code_r0x08002ec0;
                    }
                    uVar8 = *(arg1 + 0x288);
                    if (0x20 < uVar8) {
                        uVar4 = 0x80011c7;
                        goto code_r0x08002df0;
                    }
                    if (0x40 < *(arg1 + 0x264)) {
                        _printk(0x8001324,"qcedev_check_cipher_params",*(arg1 + 0x264));
                        return 0xffffffea;
                    }
                    if (uVar8 == 0) {
                        if ((uVar7 == 1) || (uVar7 == 6)) goto code_r0x08002d18;
                        uVar4 = 0x800062f;
                    }
                    else {
                        if ((uVar7 != 6) && (uVar7 != 1)) {
code_r0x08002d18:
                            uVar10 = 0;
                            uVar7 = 0;
                            puVar11 = arg1 + 0x110;
                            do {
                                if (uVar10 == 0x10) goto code_r0x08002f18;
                                uVar8 = *puVar11;
                                if ((*(puVar11 + -2) == 0) && (uVar8 != 0)) {
                                    uVar4 = 0x8000add;
                                    uVar10 = uVar10 & 0xffffffff;
                                    goto code_r0x08002ec0;
                                }
                                if (~uVar7 <= uVar8) {
                                    uVar4 = 0x8000be7;
                                    goto code_r0x08002ee4;
                                }
                                uVar7 = uVar8 + uVar7;
                                uVar10 = uVar10 + 1;
                                puVar11 = puVar11 + 4;
                            } while (uVar6 != uVar10);
                            if (uVar7 != uVar1) {
                                _printk(0x8000c90,"qcedev_check_cipher_params");
                                return 0xffffffea;
                            }
                            uVar10 = 0;
                            uVar7 = 0;
                            puVar11 = arg1 + 0x10;
                            do {
                                if (uVar10 == 0x10) {
code_r0x08002f18:
    //WARNING: Does not return
                                    pcVar3 = SoftwareBreakpoint(0x5512,0x8002f1c);
                                    (*pcVar3)();
                                }
                                uVar8 = *puVar11;
                                if (*(puVar11 + -2) == 0) {
                                    if (uVar8 != 0) {
                                        uVar4 = 0x8001006;
                                        uVar10 = uVar10 & 0xffffffff;
                                        goto code_r0x08002ec0;
                                    }
                                }
                                else if (CARRY4(uVar7,uVar8)) {
                                    uVar4 = 0x8001365;
                                    goto code_r0x08002ee4;
                                }
                                uVar7 = uVar8 + uVar7;
                                uVar10 = uVar10 + 1;
                                puVar11 = puVar11 + 4;
                            } while (uVar6 != uVar10);
                            if (uVar7 == uVar1) {
                                return 0;
                            }
                            uVar4 = 0x8000e3e;
                            uVar10 = uVar7;
                            uVar8 = uVar1;
code_r0x08002ec0:
                            _printk(uVar4,"qcedev_check_cipher_params",uVar10,uVar8);
                            return 0xffffffea;
                        }
                        uVar4 = 0x8001343;
                    }
                }
                else if (uVar7 == 2) {
                    if (uVar8 < 0x10) {
                        iVar9 = 0;
                        uVar12 = uVar8;
                        do {
                            if (iVar9 == 0x100) goto code_r0x08002f18;
                            uVar2 = *(arg1 + 0x10 + iVar9);
                            if (CARRY4(uVar2,uVar12)) {
                                uVar4 = 0x80006e8;
                                goto code_r0x08002ee4;
                            }
                            uVar12 = uVar2 + uVar12;
                            iVar9 = iVar9 + 0x10;
                        } while (uVar6 * 0x10 - iVar9 != 0);
                        goto code_r0x08002cc8;
                    }
                    uVar4 = 0x8000efe;
                }
                else {
                    uVar4 = 0x8000fd8;
                }
            }
        }
    }
    else {
        uVar4 = 0x8000e1a;
    }
code_r0x08002ee4:
    pcVar5 = "qcedev_check_cipher_params";
code_r0x08002eec:
    _printk(uVar4,pcVar5);
    return 0xffffffea;
}


// ===== sym.qcedev_vbuf_ablk_cipher @ 0x08002f1c (size 1184) =====

int sym.qcedev_vbuf_ablk_cipher(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    uint *puVar4;
    code *pcVar5;
    int iVar6;
    uint *arg4;
    uint *puVar7;
    ulong uVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint *puVar15;
    uint32_t *puVar16;
    int64_t iVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    uint uStack_314;
    uchar auStack_310 [8];
    int64_t iStack_308;
    uint32_t auStack_300 [130];
    uint32_t uStack_f8;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_70 = *(iVar17 + 0x5e0);
    uVar20 = 0xff00;
    uStack_314 = 0;
    if (*(arg1 + 0x2cc) == 2) {
        uVar20 = 0xff00 - *(arg1 + 0x2c4);
    }
    arg4 = kmalloc_order_trace(0xff80,0xcc0,4);
    if (arg4 == NULL) {
code_r0x0800320c:
        iVar6 = -0xc;
    }
    else {
        puVar7 = kmemdup(arg1 + 0x38,0x2a0,0xcc0);
        if (puVar7 == NULL) {
            uVar8 = ksize(arg4);
            memset(arg4,0,uVar8);
            kfree(arg4);
            goto code_r0x0800320c;
        }
        if (uVar20 < *(arg1 + 0x254)) {
            memcpy(auStack_310,arg1 + 0x38,0x2a0);
            if (uStack_f8 != 0) {
                uVar22 = 0;
                piVar1 = arg1 + 0x40;
                do {
                    if (0xf < uVar22) goto code_r0x080033b0;
                    uVar19 = uVar22;
                    piVar2 = piVar1 + uVar19 * 2;
                    if (uVar20 < *(piVar2 + 1)) {
                        *(arg1 + 0x48) = uVar20;
                        if (uVar22 != 0) {
                            *piVar1 = *piVar2;
                        }
                        *(arg1 + 0x254) = uVar20;
                        *(arg1 + 0x250) = 1;
                        iVar6 = sym.qcedev_vbuf_ablk_cipher_max_xfer(arg1,&uStack_314,arg2,arg4);
                        if (iVar6 < 0) {
code_r0x08003370:
                            uVar8 = ksize(puVar7);
                            memset(puVar7,0,uVar8);
                            uVar8 = ksize(arg4);
                            memset(arg4,0,uVar8);
                            kfree(arg4);
                            goto code_r0x0800332c;
                        }
                        uVar12 = auStack_300[uVar19 * 4] - uVar20;
                        *(piVar2 + 1) = uVar12;
                        if (0x2a0 < (uVar19 << 4 | 8)) goto code_r0x080033b4;
                        iVar17 = (&iStack_308)[uVar19 * 2];
                        auStack_300[uVar19 * 4] = uVar12;
                        iVar17 = iVar17 + uVar20;
                        *piVar2 = iVar17;
                        (&iStack_308)[uVar19 * 2] = iVar17;
                    }
                    else {
                        uVar12 = uStack_f8 - uVar22;
                        if (uStack_f8 < uVar22 || uVar12 == 0) {
                            uVar12 = 0;
                            *(arg1 + 0x254) = *(arg1 + 0x2c4);
                            uVar10 = uVar22;
                        }
                        else {
                            iVar6 = 0;
                            uVar14 = *(arg1 + 0x2c4);
                            do {
                                if (0x10 - uVar22 == iVar6) goto code_r0x080033b0;
                                uVar21 = piVar1[(uVar22 + iVar6) * 2 + 1] + uVar14;
                                if (uVar20 <= uVar21) {
                                    uVar12 = iVar6 + 1;
                                    *(piVar1 + (uVar22 + iVar6) * 2 + 1) = uVar20 - uVar14;
                                    uVar21 = uVar20;
                                    uVar10 = uVar22 + iVar6;
                                    break;
                                }
                                iVar6 = iVar6 + 1;
                                uVar10 = uStack_f8;
                                uVar14 = uVar21;
                            } while ((0x10 - uVar22) + uStack_f8 + -0x10 != iVar6);
                            *(arg1 + 0x254) = uVar21;
                            if ((0 < uVar22) && (0 < uVar12)) {
                                uVar11 = uVar12;
                                uVar20 = 0;
                                if (uVar22 < 0x11) {
                                    uVar20 = 0x10 - uVar22;
                                }
                                uVar18 = uVar20;
                                iVar17 = arg1;
                                do {
                                    if (uVar18 == 0) goto code_r0x080033b0;
                                    iVar13 = iVar17 + uVar19 * 0x10;
                                    uVar11 = uVar11 - 1;
                                    uVar18 = uVar18 - 1;
                                    uVar8 = *(iVar13 + 0x40);
                                    *(iVar17 + 0x48) = *(iVar13 + 0x48);
                                    *(iVar17 + 0x40) = uVar8;
                                    iVar17 = iVar17 + 0x10;
                                } while (uVar11 != 0);
                            }
                        }
                        *(arg1 + 0x250) = uVar12;
                        iVar6 = sym.qcedev_vbuf_ablk_cipher_max_xfer(arg1,&uStack_314,arg2,arg4);
                        if (iVar6 < 0) goto code_r0x08003370;
                        *(arg1 + 0x2c4) = 0;
                        if (0xf < uVar10) goto code_r0x080033b0;
                        iVar17 = uVar10;
                        if (0x2a0 < (iVar17 << 4 | 8U)) {
code_r0x080033b4:
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(1,0x80033b8);
                            (*pcVar5)();
                        }
                        uVar20 = *(piVar1 + iVar17 * 2 + 1);
                        iVar13 = (&iStack_308)[iVar17 * 2] + uVar20;
                        piVar1[iVar17 * 2] = iVar13;
                        if (iVar17 * 0x10 - 0x291U < 0xfffffffffffffd5f) goto code_r0x080033b4;
                        (&iStack_308)[iVar17 * 2] = iVar13;
                        uVar20 = auStack_300[iVar17 * 4] - uVar20;
                        if (uVar20 == 0) {
                            uVar10 = uVar10 + 1;
                        }
                        *(piVar1 + iVar17 * 2 + 1) = uVar20;
                        auStack_300[iVar17 * 4] = uVar20;
                        uVar22 = uVar10;
                    }
                    *(arg1 + 0x2c4) = 0;
                } while ((uVar22 < uStack_f8) && (uVar20 = 0xff00, iVar6 == 0));
                goto code_r0x0800322c;
            }
            iVar6 = 0;
            if (puVar7[0x86] == 0) goto code_r0x08003288;
code_r0x08003234:
            uVar19 = 0;
            puVar15 = arg1 + 0x48;
            puVar4 = puVar7;
            do {
                if (uVar19 == 0x10) goto code_r0x080033b0;
                uVar19 = uVar19 + 1;
                *puVar15 = puVar4[4];
                *(puVar15 + -2) = *(puVar4 + 2);
                puVar15 = puVar15 + 4;
                uVar20 = puVar7[0x86];
                puVar4 = puVar4 + 4;
            } while (uVar19 < uVar20);
            iVar3 = puVar7[0x87];
        }
        else {
            iVar6 = sym.qcedev_vbuf_ablk_cipher_max_xfer(arg1,&uStack_314,arg2,arg4);
code_r0x0800322c:
            if (puVar7[0x86] != 0) goto code_r0x08003234;
code_r0x08003288:
            uVar20 = 0;
            iVar3 = puVar7[0x87];
        }
        if (iVar3 != 0) {
            uVar20 = 0;
            iVar17 = 0;
            do {
                if (iVar17 + 0x10 == 0x110) {
code_r0x080033b0:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x80033b4);
                    (*pcVar5)();
                }
                *(arg1 + iVar17 + 0x148) = *(puVar7 + iVar17 + 0x110);
                *(arg1 + iVar17 + 0x140) = *(puVar7 + iVar17 + 0x108);
                uVar20 = *(puVar7 + iVar17 + 0x110) + uVar20;
                iVar17 = iVar17 + 0x10;
            } while (uVar20 < puVar7[0x87]);
            uVar20 = puVar7[0x86];
        }
        *(arg1 + 0x250) = uVar20;
        *(arg1 + 0x254) = puVar7[0x87];
        *(arg1 + 0x2c4) = puVar7[0xa3];
        uVar8 = ksize(puVar7);
        memset(puVar7,0,uVar8);
        uVar8 = ksize(arg4);
        memset(arg4,0,uVar8);
        kfree(puVar7);
        puVar7 = arg4;
code_r0x0800332c:
        kfree(puVar7);
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_70) {
        return iVar6;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18 = sym.qcedev_check_offload_cipher_params;
    uVar20 = *(iVar17 + 0x200);
    uVar19 = uVar20;
    if (((uVar20 == 0) || (uVar22 = *(iVar17 + 0x204), uVar22 == 0)) || (0x10 < uVar20)) {
        uVar8 = 0x800164d;
        goto code_r0x0800353c;
    }
    uVar20 = *(iVar17 + 0x244);
    if ((uVar20 == 2) && (*(iVar17 + 0x248) < 3)) {
        uVar20 = *(iVar17 + 0x20c);
        if (uVar20 == 0) {
            return -0x16;
        }
        if ((uVar20 != 0x10) && (uVar20 != 0x20)) {
            uVar8 = 0x80010dd;
            pcVar9 = "qcedev_check_offload_cipher_key";
            goto code_r0x08003560;
        }
        if (0xf < *(iVar17 + 0x23c)) {
            return -0x16;
        }
        uVar12 = *(iVar17 + 0x238);
        if (uVar12 != 0) {
            if (*(iVar17 + 0x248) != 2) {
                uVar8 = 0x8000fd8;
code_r0x0800353c:
                _printk(uVar8,"qcedev_check_offload_cipher_params");
                return -0x16;
            }
            if (0xf < uVar12) {
                uVar8 = 0x8000efe;
                goto code_r0x0800353c;
            }
            iVar13 = 0;
            uVar10 = uVar12;
            do {
                if (iVar13 == 0x100) goto code_r0x08003664;
                uVar14 = *(iVar17 + 8 + iVar13);
                if (CARRY4(uVar14,uVar10)) {
                    uVar8 = 0x80008d9;
                    goto code_r0x0800353c;
                }
                uVar10 = uVar14 + uVar10;
                iVar13 = iVar13 + 0x10;
            } while (uVar19 * 0x10 - iVar13 != 0);
        }
        if (uVar22 < uVar12) {
            uVar8 = 0x8000f19;
            uVar11 = uVar22;
code_r0x0800365c:
            _printk(uVar8,"qcedev_check_offload_cipher_params",uVar11,uVar12);
            return -0x16;
        }
        if (0x20 < *(iVar17 + 0x230)) {
            uVar8 = 0x80011c7;
            pcVar9 = "qcedev_check_offload_cipher_params";
            uVar20 = *(iVar17 + 0x230);
            goto code_r0x08003560;
        }
        if (uVar20 < 0x41) {
            uVar11 = 0;
            uVar20 = 0;
            puVar16 = iVar17 + 0x108;
            do {
                if (uVar11 == 0x10) goto code_r0x08003664;
                uVar12 = *puVar16;
                if ((*(puVar16 + -2) == 0) && (uVar12 != 0)) {
                    uVar8 = 0x8000add;
                    uVar11 = uVar11 & 0xffffffff;
                    goto code_r0x0800365c;
                }
                if (~uVar20 <= uVar12) {
                    uVar8 = 0x8000e6d;
                    goto code_r0x0800353c;
                }
                uVar20 = uVar12 + uVar20;
                uVar11 = uVar11 + 1;
                puVar16 = puVar16 + 4;
            } while (uVar19 != uVar11);
            if (uVar20 != uVar22) {
                _printk(0x8000c90,"qcedev_check_offload_cipher_params");
                return -0x16;
            }
            uVar11 = 0;
            uVar20 = 0;
            puVar16 = iVar17 + 8;
            do {
                if (uVar11 == 0x10) {
code_r0x08003664:
    //WARNING: Does not return
                    pcVar5 = SoftwareBreakpoint(0x5512,0x8003668);
                    (*pcVar5)();
                }
                uVar12 = *puVar16;
                if (*(puVar16 + -2) == 0) {
                    if (uVar12 != 0) {
                        uVar8 = 0x8001006;
                        uVar11 = uVar11 & 0xffffffff;
                        goto code_r0x0800365c;
                    }
                }
                else if (CARRY4(uVar20,uVar12)) {
                    uVar8 = 0x80014e8;
                    goto code_r0x0800353c;
                }
                uVar20 = uVar12 + uVar20;
                uVar11 = uVar11 + 1;
                puVar16 = puVar16 + 4;
            } while (uVar19 != uVar11);
            if (uVar20 == uVar22) {
                return 0;
            }
            uVar8 = 0x8000e3e;
            uVar11 = uVar20;
            uVar12 = uVar22;
            goto code_r0x0800365c;
        }
        uVar8 = 0x8001324;
    }
    else {
        uVar8 = 0x80012a4;
    }
    pcVar9 = "qcedev_check_offload_cipher_params";
code_r0x08003560:
    _printk(uVar8,pcVar9,uVar20);
    return -0x16;
}


// ===== sym.qcedev_check_offload_cipher_params @ 0x080033bc (size 684) =====

ulong sym.qcedev_check_offload_cipher_params(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    ulong uVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 0x200);
    uVar6 = uVar8;
    if (((uVar8 == 0) || (uVar1 = *(arg1 + 0x204), uVar1 == 0)) || (0x10 < uVar8)) {
        uVar4 = 0x800164d;
        goto code_r0x0800353c;
    }
    uVar8 = *(arg1 + 0x244);
    if ((uVar8 == 2) && (*(arg1 + 0x248) < 3)) {
        uVar8 = *(arg1 + 0x20c);
        if (uVar8 == 0) {
            return 0xffffffea;
        }
        if ((uVar8 != 0x10) && (uVar8 != 0x20)) {
            uVar4 = 0x80010dd;
            pcVar5 = "qcedev_check_offload_cipher_key";
            goto code_r0x08003560;
        }
        if (0xf < *(arg1 + 0x23c)) {
            return 0xffffffea;
        }
        uVar7 = *(arg1 + 0x238);
        if (uVar7 != 0) {
            if (*(arg1 + 0x248) != 2) {
                uVar4 = 0x8000fd8;
code_r0x0800353c:
                _printk(uVar4,"qcedev_check_offload_cipher_params");
                return 0xffffffea;
            }
            if (0xf < uVar7) {
                uVar4 = 0x8000efe;
                goto code_r0x0800353c;
            }
            iVar10 = 0;
            uVar12 = uVar7;
            do {
                if (iVar10 == 0x100) goto code_r0x08003664;
                uVar2 = *(arg1 + 8 + iVar10);
                if (CARRY4(uVar2,uVar12)) {
                    uVar4 = 0x80008d9;
                    goto code_r0x0800353c;
                }
                uVar12 = uVar2 + uVar12;
                iVar10 = iVar10 + 0x10;
            } while (uVar6 * 0x10 - iVar10 != 0);
        }
        if (uVar1 < uVar7) {
            uVar4 = 0x8000f19;
            uVar9 = uVar1;
code_r0x0800365c:
            _printk(uVar4,"qcedev_check_offload_cipher_params",uVar9,uVar7);
            return 0xffffffea;
        }
        if (0x20 < *(arg1 + 0x230)) {
            uVar4 = 0x80011c7;
            pcVar5 = "qcedev_check_offload_cipher_params";
            uVar8 = *(arg1 + 0x230);
            goto code_r0x08003560;
        }
        if (uVar8 < 0x41) {
            uVar9 = 0;
            uVar8 = 0;
            puVar11 = arg1 + 0x108;
            do {
                if (uVar9 == 0x10) goto code_r0x08003664;
                uVar7 = *puVar11;
                if ((*(puVar11 + -2) == 0) && (uVar7 != 0)) {
                    uVar4 = 0x8000add;
                    uVar9 = uVar9 & 0xffffffff;
                    goto code_r0x0800365c;
                }
                if (~uVar8 <= uVar7) {
                    uVar4 = 0x8000e6d;
                    goto code_r0x0800353c;
                }
                uVar8 = uVar7 + uVar8;
                uVar9 = uVar9 + 1;
                puVar11 = puVar11 + 4;
            } while (uVar6 != uVar9);
            if (uVar8 != uVar1) {
                _printk(0x8000c90,"qcedev_check_offload_cipher_params");
                return 0xffffffea;
            }
            uVar9 = 0;
            uVar8 = 0;
            puVar11 = arg1 + 8;
            do {
                if (uVar9 == 0x10) {
code_r0x08003664:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8003668);
                    (*pcVar3)();
                }
                uVar7 = *puVar11;
                if (*(puVar11 + -2) == 0) {
                    if (uVar7 != 0) {
                        uVar4 = 0x8001006;
                        uVar9 = uVar9 & 0xffffffff;
                        goto code_r0x0800365c;
                    }
                }
                else if (CARRY4(uVar8,uVar7)) {
                    uVar4 = 0x80014e8;
                    goto code_r0x0800353c;
                }
                uVar8 = uVar7 + uVar8;
                uVar9 = uVar9 + 1;
                puVar11 = puVar11 + 4;
            } while (uVar6 != uVar9);
            if (uVar8 == uVar1) {
                return 0;
            }
            uVar4 = 0x8000e3e;
            uVar9 = uVar8;
            uVar7 = uVar1;
            goto code_r0x0800365c;
        }
        uVar4 = 0x8001324;
    }
    else {
        uVar4 = 0x80012a4;
    }
    pcVar5 = "qcedev_check_offload_cipher_params";
code_r0x08003560:
    _printk(uVar4,pcVar5,uVar8);
    return 0xffffffea;
}


// ===== sym.qcedev_smmu_ablk_offload_cipher @ 0x08003668 (size 424) =====

int sym.qcedev_smmu_ablk_offload_cipher(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint uVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_c0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uStack_c0 = 0;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (*(arg1 + 0x280) == 2) {
        uStack_c0 = *(arg1 + 0x270);
    }
    *(arg1 + 0x310) = &uStack_88;
    *(arg1 + 0x318) = &uStack_a8;
    sg_init_table(&uStack_88,1);
    sg_init_table(&uStack_a8,1);
    uVar7 = *(arg1 + 0x238);
    if (uVar7 != 0) {
        uVar10 = 0;
        do {
            if (uVar10 == 0x10) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x800380c);
                (*pcVar4)();
            }
            piVar1 = arg1 + 0x38 + uVar10 * 0x10;
            iVar8 = *(arg1 + 0x138 + uVar10 * 0x10);
            uVar3 = *(piVar1 + 1);
            uVar12 = uVar3;
            iVar9 = *piVar1;
            *(arg1 + 0x308) = arg1 + 0x248;
            if (uVar3 != 0) {
                iVar8 = iVar8 + uStack_c0;
                iVar9 = iVar9 + uStack_c0;
                do {
                    uVar2 = uVar12;
                    if (0x3fffff < uVar12) {
                        uVar2 = 0x400000;
                    }
                    uVar11 = uVar2;
                    *(arg1 + 0x300) = uVar11;
                    uStack_80 = CONCAT44(uVar11,uStack_80);
                    uStack_a0 = CONCAT44(uVar11,uStack_a0);
                    iStack_98 = iVar8;
                    iStack_78 = iVar9;
                    iVar5 = sym.submit_req(arg1,arg2);
                    if (iVar5 != 0) {
                        _printk(0x8000988,"qcedev_smmu_ablk_offload_cipher",iVar5);
                        goto code_r0x080037c0;
                    }
                    uVar12 = uVar12 - uVar2;
                    iVar9 = iVar9 + uVar2;
                    iVar8 = iVar8 + uVar2;
                } while (uVar12 != 0);
                uVar7 = *(arg1 + 0x238);
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < uVar7);
    }
    iVar5 = 0;
code_r0x080037c0:
    *(arg1 + 0x310) = 0;
    *(arg1 + 0x318) = 0;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    auVar13 = __stack_chk_fail();
    iVar8 = auVar13._0_8_;
    *extraout_x18 = sym.qcedev_check_sha_params;
    uVar7 = *(iVar8 + 0x13c);
    if (uVar7 == 4) {
        if (*(auVar13._8_8_ + 0x1c) == '\0') {
            uVar6 = 0x8000bc7;
            goto code_r0x08003954;
        }
        uVar10 = *(iVar8 + 0x100);
        if (*(iVar8 + 0x100) - 0x11 < 0xfffffff0) goto code_r0x080038e4;
        if ((*(iVar8 + 0x138) != 0x10) && (*(iVar8 + 0x138) != 0x20)) {
            uVar6 = 0x80009ae;
            goto code_r0x08003954;
        }
    }
    else {
        uVar10 = *(iVar8 + 0x100);
        if (*(iVar8 + 0x100) - 0x11 < 0xfffffff0) {
code_r0x080038e4:
            _printk(obj.qcedev_open.__key,"");
            return -0x16;
        }
        if (4 < uVar7) {
            _printk(0x8001516,"",uVar7);
            return -0x16;
        }
        if ((uVar7 & 0xfffffffe) == 2) {
            if (*(iVar8 + 0x130) == 0) {
                uVar6 = 0x8001204;
                goto code_r0x08003954;
            }
            if (*(iVar8 + 0x138) == 0) {
                _printk(0x8001672,"",0);
                return -0x16;
            }
        }
    }
    iVar9 = 0;
    uVar7 = 0;
    while( true ) {
        if (iVar9 == 0x100) {
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8003994);
            (*pcVar4)();
        }
        uVar3 = *(iVar8 + 8 + iVar9);
        if (CARRY4(uVar7,uVar3)) break;
        uVar7 = uVar3 + uVar7;
        iVar9 = iVar9 + 0x10;
        if (uVar10 * 0x10 - iVar9 == 0) {
            if (uVar7 == *(iVar8 + 0x104)) {
                return 0;
            }
            _printk(0x8000e3e,"",uVar7);
            return -0x16;
        }
    }
    uVar6 = 0x8000e9b;
code_r0x08003954:
    _printk(uVar6,"");
    return -0x16;
}


// ===== sym.qcedev_check_sha_params @ 0x08003810 (size 388) =====

ulong sym.qcedev_check_sha_params(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 0x13c);
    if (uVar5 == 4) {
        if (*(arg2 + 0x1c) == '\0') {
            uVar3 = 0x8000bc7;
            goto code_r0x08003954;
        }
        uVar4 = *(arg1 + 0x100);
        if (*(arg1 + 0x100) - 0x11 < 0xfffffff0) goto code_r0x080038e4;
        if ((*(arg1 + 0x138) != 0x10) && (*(arg1 + 0x138) != 0x20)) {
            uVar3 = 0x80009ae;
            goto code_r0x08003954;
        }
    }
    else {
        uVar4 = *(arg1 + 0x100);
        if (*(arg1 + 0x100) - 0x11 < 0xfffffff0) {
code_r0x080038e4:
            _printk(obj.qcedev_open.__key,"");
            return 0xffffffea;
        }
        if (4 < uVar5) {
            _printk(0x8001516,"",uVar5);
            return 0xffffffea;
        }
        if ((uVar5 & 0xfffffffe) == 2) {
            if (*(arg1 + 0x130) == 0) {
                uVar3 = 0x8001204;
                goto code_r0x08003954;
            }
            if (*(arg1 + 0x138) == 0) {
                _printk(0x8001672,"",0);
                return 0xffffffea;
            }
        }
    }
    iVar6 = 0;
    uVar5 = 0;
    while( true ) {
        if (iVar6 == 0x100) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8003994);
            (*pcVar2)();
        }
        uVar1 = *(arg1 + 8 + iVar6);
        if (CARRY4(uVar5,uVar1)) break;
        uVar5 = uVar1 + uVar5;
        iVar6 = iVar6 + 0x10;
        if (uVar4 * 0x10 - iVar6 == 0) {
            if (uVar5 == *(arg1 + 0x104)) {
                return 0;
            }
            _printk(0x8000e3e,"",uVar5);
            return 0xffffffea;
        }
    }
    uVar3 = 0x8000e9b;
code_r0x08003954:
    _printk(uVar3,"");
    return 0xffffffea;
}


// ===== sym.qcedev_hash_init @ 0x08003994 (size 1412) =====

int sym.qcedev_hash_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    code *pcVar8;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar13;
    int64_t iVar14;
    int64_t arg1_00;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    uint32_t *puVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_540;
    ulong uStack_538;
    ulong uStack_530;
    ulong uStack_528;
    ulong uStack_520;
    ulong uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    uchar auStack_500 [16];
    uint uStack_4f0;
    uint uStack_4d0;
    ulong uStack_4c8;
    uint uStack_4c0;
    uint uStack_3c8;
    uint uStack_3c4;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    uint uStack_3a0;
    uint uStack_38c;
    int64_t iStack_100;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    if (*(arg1 + 0x174) < 2) {
        *(arg2 + 0xc0) = 0;
        *(arg2 + 0xb0) = 0;
        *(arg2 + 0xb8) = 0;
        *(arg2 + 0xa0) = 0;
        *(arg2 + 0xa8) = 0;
        *(arg2 + 0x90) = 0;
        *(arg2 + 0x98) = 0;
        *(arg2 + 0x80) = 0;
        *(arg2 + 0x88) = 0;
        *(arg2 + 0x70) = 0;
        *(arg2 + 0x78) = 0;
        *(arg2 + 0x60) = 0;
        *(arg2 + 0x68) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x58) = 0;
        *(arg2 + 0x40) = 0;
        *(arg2 + 0x48) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x10) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 8) = 0;
        *(arg2 + 0x80) = 1;
        uVar7 = *0x80019d4;
        uVar6 = *0x80019cc;
        uVar5 = *0x80019c4;
        uVar4 = *0x80019b0;
        uVar10 = _obj._std_init_vector_sha1_uint8;
        if (*(arg1 + 0x174) < 4) {
    //switch table (3 cases) at 0x8001704
            switch(*(*(arg1 + 0x174) * 4 + 0x8001704) + 0x8003a2c) {
            case 0x8003a40:
                uVar12 = 0x14;
                *(arg2 + 0x28) = 0xf0e1d2c3;
                *(arg2 + 0x18) = uVar10;
                *(arg2 + 0x20) = uVar4;
                break;
            case 0x8003bd0:
                uVar12 = 0x20;
                *(arg2 + 0x18) = _obj._std_init_vector_sha256_uint8;
                *(arg2 + 0x20) = uVar5;
                *(arg2 + 0x28) = uVar6;
                *(arg2 + 0x30) = uVar7;
            }
            *(arg2 + 0x38) = uVar12;
        }
        iVar9 = 0;
        *(arg2 + 0xc2) = 1;
        goto code_r0x08003ec4;
    }
    iVar14 = *arg2;
    if (*(arg1 + 0x170) < 0x41) {
        *(arg2 + 0xc0) = 0;
        *(arg2 + 0xb0) = 0;
        *(arg2 + 0xb8) = 0;
        *(arg2 + 0xa0) = 0;
        *(arg2 + 0xa8) = 0;
        *(arg2 + 0x90) = 0;
        *(arg2 + 0x98) = 0;
        *(arg2 + 0x80) = 0;
        *(arg2 + 0x88) = 0;
        *(arg2 + 0x70) = 0;
        *(arg2 + 0x78) = 0;
        *(arg2 + 0x60) = 0;
        *(arg2 + 0x68) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x58) = 0;
        *(arg2 + 0x40) = 0;
        *(arg2 + 0x48) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x10) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 8) = 0;
        *(arg2 + 0x80) = 1;
        uVar7 = *0x80019d4;
        uVar6 = *0x80019cc;
        uVar5 = *0x80019c4;
        uVar4 = *0x80019b0;
        uVar10 = _obj._std_init_vector_sha1_uint8;
        if (*(arg1 + 0x174) < 4) {
    //switch table (3 cases) at 0x80016f4
            switch(*(*(arg1 + 0x174) * 4 + 0x80016f4) + 0x8003ac4) {
            case 0x8003ad8:
                uVar12 = 0x14;
                *(arg2 + 0x28) = 0xf0e1d2c3;
                *(arg2 + 0x18) = uVar10;
                *(arg2 + 0x20) = uVar4;
                break;
            case 0x8003c00:
                uVar12 = 0x20;
                *(arg2 + 0x18) = _obj._std_init_vector_sha256_uint8;
                *(arg2 + 0x20) = uVar5;
                *(arg2 + 0x28) = uVar6;
                *(arg2 + 0x30) = uVar7;
            }
            *(arg2 + 0x38) = uVar12;
        }
        *(arg2 + 0xc2) = 1;
        arg3 = *(arg1 + 0x170);
        if (*(arg1 + 0x170) < 0) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x800,0x8003f10);
            (*pcVar8)();
        }
        iVar13 = *(arg1 + 0x168);
        __check_object_size(arg2 + 0x82,arg3,0);
        iVar13 = sym._copy_from_user(arg2 + 0x82,iVar13,arg3);
        if (iVar13 != 0) {
            iVar9 = -0xe;
            goto code_r0x08003ec4;
        }
    }
    else {
        memset(&stack0xfffffffffffffb00,0,0x480);
        uStack_510 = 0;
        uStack_508 = 0;
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_530 = 0;
        uStack_528 = 0;
        uStack_540 = 0;
        uStack_538 = 0;
        uStack_4f0 = 0;
        __init_swait_queue_head(&stack0xfffffffffffffb00 | 0x18,"&x->wait",obj.init_completion.__key);
        uStack_4c8 = *(arg1 + 0x168);
        uStack_4c0 = *(arg1 + 0x170);
        uStack_3a0 = 0;
        uStack_3c8 = 1;
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        uStack_3b0 = 0;
        uStack_3a8 = 0;
        if (*(arg1 + 0x174) == 3) {
            uStack_38c = 1;
            *(arg2 + 8) = 0;
            *(arg2 + 0x10) = 0;
            *(arg2 + 0x18) = 0;
            *(arg2 + 0x20) = 0;
            *(arg2 + 0x28) = 0;
            *(arg2 + 0x30) = 0;
            *(arg2 + 0x38) = 0;
            *(arg2 + 0x40) = 0;
            *(arg2 + 0x48) = 0;
            *(arg2 + 0x50) = 0;
            *(arg2 + 0x58) = 0;
            *(arg2 + 0x60) = 0;
            *(arg2 + 0x68) = 0;
            *(arg2 + 0x70) = 0;
            *(arg2 + 0x78) = 0;
            *(arg2 + 0x80) = 0;
            *(arg2 + 0x88) = 0;
            *(arg2 + 0x90) = 0;
            *(arg2 + 0x98) = 0;
            *(arg2 + 0xa0) = 0;
            *(arg2 + 0xa8) = 0;
            *(arg2 + 0xb0) = 0;
            *(arg2 + 0xb8) = 0;
            *(arg2 + 0xc0) = 0;
            *(arg2 + 0x80) = 1;
code_r0x08003d3c:
            uVar5 = *0x80019d4;
            uVar4 = *0x80019cc;
            uVar10 = *0x80019c4;
            uVar12 = 0x20;
            *(arg2 + 0x18) = _obj._std_init_vector_sha256_uint8;
            *(arg2 + 0x20) = uVar10;
            *(arg2 + 0x28) = uVar4;
            *(arg2 + 0x30) = uVar5;
code_r0x08003d58:
            *(arg2 + 0x38) = uVar12;
        }
        else {
            if (*(arg1 + 0x174) == 2) {
                uStack_38c = 0;
                *(arg2 + 8) = 0;
                *(arg2 + 0x10) = 0;
                *(arg2 + 0x18) = 0;
                *(arg2 + 0x20) = 0;
                *(arg2 + 0x28) = 0;
                *(arg2 + 0x30) = 0;
                *(arg2 + 0x38) = 0;
                *(arg2 + 0x40) = 0;
                *(arg2 + 0x48) = 0;
                *(arg2 + 0x50) = 0;
                *(arg2 + 0x58) = 0;
                *(arg2 + 0x60) = 0;
                *(arg2 + 0x68) = 0;
                *(arg2 + 0x70) = 0;
                *(arg2 + 0x78) = 0;
                *(arg2 + 0x80) = 0;
                *(arg2 + 0x88) = 0;
                *(arg2 + 0x90) = 0;
                *(arg2 + 0x98) = 0;
                *(arg2 + 0xa0) = 0;
                *(arg2 + 0xa8) = 0;
                *(arg2 + 0xb0) = 0;
                *(arg2 + 0xb8) = 0;
                *(arg2 + 0xc0) = 0;
                *(arg2 + 0x80) = 1;
code_r0x08003d14:
                uVar4 = *0x80019b0;
                uVar10 = _obj._std_init_vector_sha1_uint8;
                uVar12 = 0x14;
                *(arg2 + 0x28) = 0xf0e1d2c3;
                *(arg2 + 0x18) = uVar10;
                *(arg2 + 0x20) = uVar4;
                goto code_r0x08003d58;
            }
            *(arg2 + 8) = 0;
            *(arg2 + 0x10) = 0;
            *(arg2 + 0x18) = 0;
            *(arg2 + 0x20) = 0;
            *(arg2 + 0x28) = 0;
            *(arg2 + 0x30) = 0;
            *(arg2 + 0x38) = 0;
            *(arg2 + 0x40) = 0;
            *(arg2 + 0x48) = 0;
            *(arg2 + 0x50) = 0;
            *(arg2 + 0x58) = 0;
            *(arg2 + 0x60) = 0;
            *(arg2 + 0x68) = 0;
            *(arg2 + 0x70) = 0;
            *(arg2 + 0x78) = 0;
            *(arg2 + 0x80) = 0;
            *(arg2 + 0x88) = 0;
            *(arg2 + 0x90) = 0;
            *(arg2 + 0x98) = 0;
            *(arg2 + 0xa0) = 0;
            *(arg2 + 0xa8) = 0;
            *(arg2 + 0xb0) = 0;
            *(arg2 + 0xb8) = 0;
            *(arg2 + 0xc0) = 0;
            *(arg2 + 0x80) = 1;
    //switch table (3 cases) at 0x80016d4
            switch(uStack_38c) {
            case 0:
            case 2:
                goto code_r0x08003d14;
            case 1:
            case 3:
                goto code_r0x08003d3c;
            }
        }
        uStack_4d0 = 1;
        *(arg2 + 0xc2) = 1;
        uStack_3c4 = uStack_4c0;
        iStack_100 = arg2;
        iVar9 = sym.qcedev_sha_update(&stack0xfffffffffffffb00,arg2,arg3);
        if (iVar9 != 0) goto code_r0x08003ec4;
        iVar9 = sym.qcedev_sha_final(&stack0xfffffffffffffb00,arg2);
        puVar1 = arg2 + 0x18;
        memcpy(&stack0xfffffffffffffac0,puVar1,*(arg2 + 0x38));
        *(arg2 + 8) = 0;
        *(arg2 + 0x10) = 0;
        *(arg2 + 0x18) = 0;
        *(arg2 + 0x20) = 0;
        *(arg2 + 0x28) = 0;
        *(arg2 + 0x30) = 0;
        *(arg2 + 0x38) = 0;
        *(arg2 + 0x40) = 0;
        *(arg2 + 0x48) = 0;
        *(arg2 + 0x50) = 0;
        *(arg2 + 0x58) = 0;
        *(arg2 + 0x60) = 0;
        *(arg2 + 0x68) = 0;
        *(arg2 + 0x70) = 0;
        *(arg2 + 0x78) = 0;
        *(arg2 + 0x80) = 0;
        *(arg2 + 0x88) = 0;
        *(arg2 + 0x90) = 0;
        *(arg2 + 0x98) = 0;
        *(arg2 + 0xa0) = 0;
        *(arg2 + 0xa8) = 0;
        *(arg2 + 0xb0) = 0;
        *(arg2 + 0xb8) = 0;
        *(arg2 + 0xc0) = 0;
        *(arg2 + 0x80) = 1;
        uVar7 = *0x80019d4;
        uVar6 = *0x80019cc;
        uVar5 = *0x80019c4;
        uVar4 = *0x80019b0;
        uVar10 = _obj._std_init_vector_sha1_uint8;
        if (*(arg1 + 0x174) < 4) {
    //switch table (4 cases) at 0x80016e4
            switch(*(*(arg1 + 0x174) * 4 + 0x80016e4) + 0x8003df0) {
            case 0x8003e04:
                arg3 = 0x14;
                *(arg2 + 0x28) = 0xf0e1d2c3;
                *puVar1 = uVar10;
                *(arg2 + 0x20) = uVar4;
                break;
            case 0x8003e2c:
                arg3 = 0x20;
                *puVar1 = _obj._std_init_vector_sha256_uint8;
                *(arg2 + 0x20) = uVar5;
                *(arg2 + 0x28) = uVar6;
                *(arg2 + 0x30) = uVar7;
            }
            *(arg2 + 0x38) = arg3;
        }
        else {
            arg3 = 0;
        }
        *(arg2 + 0xc2) = 1;
        memcpy(arg2 + 0x82,&stack0xfffffffffffffac0);
        if (iVar9 != 0) goto code_r0x08003ec4;
    }
    if (*(iVar14 + 0x1b) == '\0') {
        iVar14 = 0;
        *(arg2 + 0x74) = 0;
        *(arg2 + 0x6c) = 0;
        *(arg2 + 100) = 0;
        *(arg2 + 0x5c) = 0;
        *(arg2 + 0x54) = 0;
        *(arg2 + 0x4c) = 0;
        *(arg2 + 0x44) = 0;
        *(arg2 + 0x3c) = 0;
        do {
            iVar13 = arg2 + iVar14;
            iVar14 = iVar14 + 1;
            *(iVar13 + 0x3c) = *(iVar13 + 0x82) ^ 0x36;
        } while (iVar14 != 0x40);
        iVar9 = 0;
        *(arg2 + 0x7c) = 0x40;
    }
    else {
        iVar9 = 0;
    }
code_r0x08003ec4:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_58) {
        return iVar9;
    }
    auVar19 = __stack_chk_fail();
    iVar13 = auVar19._8_8_;
    iVar14 = auVar19._0_8_;
    *extraout_x18 = sym.qcedev_hash_cmac;
    uVar2 = *(iVar14 + 0x170);
    uVar3 = *(iVar14 + 0x13c);
    if ((uVar2 == 0x10) || (uVar2 == 0x20)) {
        iVar15 = *(iVar14 + 0x168);
        __check_object_size(iVar13 + 0x82,uVar2,0);
        iVar15 = sym._copy_from_user(iVar13 + 0x82,iVar15,uVar2);
        if (iVar15 != 0) {
            return -0xe;
        }
        if (uVar3 < 0xffffff80) {
            iVar15 = __kmalloc(uVar3 + 0x80,0xcc0);
            if (iVar15 == 0) {
                return -0xc;
            }
            uVar11 = *(iVar14 + 0x138);
            if (*(iVar14 + 0x138) != 0) {
                uVar17 = 0;
                arg1_00 = iVar15;
                puVar18 = iVar14 + 0x40;
                do {
                    if (uVar17 == 0x10) {
    //WARNING: Does not return
                        pcVar8 = SoftwareBreakpoint(0x5512,0x80040ec);
                        (*pcVar8)();
                    }
                    iVar16 = *(puVar18 + -2);
                    if (iVar16 != 0) {
                        uVar2 = *puVar18;
                        if (uVar2 < 0) {
    //WARNING: Does not return
                            pcVar8 = SoftwareBreakpoint(0x800,0x80040e4);
                            (*pcVar8)();
                        }
                        __check_object_size(arg1_00,uVar2,0);
                        iVar16 = sym._copy_from_user(arg1_00,iVar16,uVar2);
                        if (iVar16 != 0) {
                            uVar10 = ksize(iVar15);
                            memset(iVar15,0,uVar10);
                            kfree(iVar15);
                            return -0xe;
                        }
                        uVar11 = *(iVar14 + 0x138);
                    }
                    uVar17 = uVar17 + 1;
                    arg1_00 = arg1_00 + *puVar18;
                    puVar18 = puVar18 + 4;
                } while (uVar17 < uVar11);
            }
            *(iVar14 + 0x338) = arg3;
            sg_init_one(arg3,iVar15,uVar3);
            *(iVar14 + 0x330) = uVar3;
            *(iVar13 + 0x38) = *(iVar14 + 0x160);
            iVar9 = sym.submit_req(iVar14,iVar13);
            uVar10 = ksize(iVar15);
            memset(iVar15,0,uVar10);
            kfree(iVar15);
            return iVar9;
        }
    }
    else {
        _printk(0x80009ae,"qcedev_hash_cmac");
    }
    return -0x16;
}


// ===== sym.qcedev_hash_cmac @ 0x08003f18 (size 468) =====

uint sym.qcedev_hash_cmac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint uVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x170);
    uVar2 = *(arg1 + 0x13c);
    if ((uVar1 == 0x10) || (uVar1 == 0x20)) {
        iVar7 = *(arg1 + 0x168);
        __check_object_size(arg2 + 0x82,uVar1,0);
        iVar7 = sym._copy_from_user(arg2 + 0x82,iVar7,uVar1);
        if (iVar7 != 0) {
            return 0xfffffff2;
        }
        if (uVar2 < 0xffffff80) {
            iVar7 = __kmalloc(uVar2 + 0x80,0xcc0);
            if (iVar7 == 0) {
                return 0xfffffff4;
            }
            uVar6 = *(arg1 + 0x138);
            if (*(arg1 + 0x138) != 0) {
                uVar9 = 0;
                arg1_00 = iVar7;
                puVar10 = arg1 + 0x40;
                do {
                    if (uVar9 == 0x10) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x80040ec);
                        (*pcVar3)();
                    }
                    iVar8 = *(puVar10 + -2);
                    if (iVar8 != 0) {
                        uVar1 = *puVar10;
                        if (uVar1 < 0) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x80040e4);
                            (*pcVar3)();
                        }
                        __check_object_size(arg1_00,uVar1,0);
                        iVar8 = sym._copy_from_user(arg1_00,iVar8,uVar1);
                        if (iVar8 != 0) {
                            uVar5 = ksize(iVar7);
                            memset(iVar7,0,uVar5);
                            kfree(iVar7);
                            return 0xfffffff2;
                        }
                        uVar6 = *(arg1 + 0x138);
                    }
                    uVar9 = uVar9 + 1;
                    arg1_00 = arg1_00 + *puVar10;
                    puVar10 = puVar10 + 4;
                } while (uVar9 < uVar6);
            }
            *(arg1 + 0x338) = arg3;
            sg_init_one(arg3,iVar7,uVar2);
            *(arg1 + 0x330) = uVar2;
            *(arg2 + 0x38) = *(arg1 + 0x160);
            uVar4 = sym.submit_req(arg1,arg2);
            uVar5 = ksize(iVar7);
            memset(iVar7,0,uVar5);
            kfree(iVar7);
            return uVar4;
        }
    }
    else {
        _printk(0x80009ae,"qcedev_hash_cmac");
    }
    return 0xffffffea;
}


// ===== sym.qcedev_hash_final @ 0x080040ec (size 580) =====

uint64_t sym.qcedev_hash_final(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar10;
    uint uVar11;
    uint uVar12;
    ulong unaff_x30;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (*(arg1 + 0x174) < 2) {
code_r0x08004130:
        uVar6 = sym.qcedev_sha_final(arg1,arg2);
    }
    else {
        iVar8 = *arg2;
        uVar6 = sym.qcedev_sha_final(arg1,arg2);
        if (*(iVar8 + 0x1b) == '\0') {
            iVar8 = 0;
            puVar10 = arg2 + 0x3c;
            *puVar10 = 0;
            *(arg2 + 0x6c) = 0;
            *(arg2 + 0x74) = 0;
            *(arg2 + 0x5c) = 0;
            *(arg2 + 100) = 0;
            *(arg2 + 0x4c) = 0;
            *(arg2 + 0x54) = 0;
            *(arg2 + 0x44) = 0;
            do {
                iVar2 = arg2 + iVar8;
                iVar8 = iVar8 + 1;
                *(iVar2 + 0x3c) = *(iVar2 + 0x82) ^ 0x5c;
            } while (iVar8 != 0x40);
            uVar11 = 0x40;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            *(arg2 + 0x7c) = 0x40;
            if (*(arg1 + 0x174) == 2) {
                uVar12 = 0x14;
            }
            else if (*(arg1 + 0x174) == 3) {
                uVar12 = 0x20;
                uVar11 = 0x40;
            }
            else {
                uVar11 = 0;
                uVar12 = 0;
            }
            iVar8 = __kmalloc(uVar11,0xcc0);
            if (iVar8 == 0) {
                uVar6 = 0xfffffff4;
                goto code_r0x0800415c;
            }
            memcpy(iVar8,puVar10,*(arg2 + 0x7c));
            *(arg1 + 0x338) = &uStack_78;
            sg_init_one(&uStack_78,iVar8,uVar11);
            *(arg1 + 0x330) = uVar11;
            memset(puVar10,0,uVar11);
            puVar1 = arg2 + 0x18;
            memcpy(puVar10,puVar1,uVar12);
            *(arg2 + 0x7c) = uVar12;
            *(arg2 + 8) = 0;
            *(arg2 + 0x80) = 1;
            uVar3 = *0x80019b0;
            uVar7 = _obj._std_init_vector_sha1_uint8;
            iVar9 = *(arg1 + 0x174);
            if (iVar9 == 2) {
                *(arg2 + 0x28) = 0xf0e1d2c3;
                *(arg2 + 0x38) = 0x14;
                *puVar1 = uVar7;
                *(arg2 + 0x20) = uVar3;
                iVar9 = *(arg1 + 0x174);
            }
            uVar4 = *0x80019d4;
            uVar3 = *0x80019cc;
            uVar7 = *0x80019c4;
            if (iVar9 == 3) {
                *puVar1 = _obj._std_init_vector_sha256_uint8;
                *(arg2 + 0x20) = uVar7;
                *(arg2 + 0x28) = uVar3;
                *(arg2 + 0x30) = uVar4;
                *(arg2 + 0x38) = 0x20;
            }
            uVar5 = sym.submit_req(arg1,arg2);
            uVar6 = uVar5;
            *(arg2 + 0x80) = 0;
            uVar7 = ksize(iVar8);
            memset(iVar8,0,uVar7);
            kfree(iVar8);
            *(arg1 + 0x338) = 0;
            if (uVar5 != 0) goto code_r0x0800415c;
            goto code_r0x08004130;
        }
    }
    uVar6 = uVar6 & 0xffffffff;
code_r0x0800415c:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.init_module;
    pcStack_98 = sym.init_module;
    iVar8 = sp_el0;
    iStack_a8 = *(iVar8 + 0x5e0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = &stack0xffffffffffffffb0;
    iStack_90 = arg1;
    _segment.ehdr = debugfs_create_dir("qcedev",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        snprintf(&uStack_b8,0xf,"stats-%d",1);
        _obj._debug_qcedev = 0;
        iVar8 = debugfs_create_file(&uStack_b8,0x1a4,_segment.ehdr,obj._debug_qcedev,obj._debug_stats_ops);
        if (iVar8 == 0) {
            debugfs_remove(_segment.ehdr);
        }
    }
    uVar6 = __platform_driver_register(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt,obj.__this_module);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_a8) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.cleanup_module;
        debugfs_remove(_segment.ehdr);
        uVar6 = platform_driver_unregister(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt);
        return uVar6;
    }
    return uVar6;
}


// ===== sym.init_module @ 0x08004330 (size 212) =====

void sym.init_module(void)

{
    int64_t iVar1;
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
    _segment.ehdr = debugfs_create_dir("qcedev",0);
    if (_segment.ehdr < 0xfffffffffffff001) {
        snprintf(&uStack_38,0xf,"stats-%d",1);
        _obj._debug_qcedev = 0;
        iVar1 = debugfs_create_file(&uStack_38,0x1a4,_segment.ehdr,obj._debug_qcedev,obj._debug_stats_ops);
        if (iVar1 == 0) {
            debugfs_remove(_segment.ehdr);
        }
    }
    __platform_driver_register(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt,obj.__this_module);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08004404 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    debugfs_remove(_segment.ehdr);
    platform_driver_unregister(reloc.qcedev_probe.67d2f7a7cab654499daac85ffec66bd8.cfi_jt);
    return;
}


// ===== sym._copy_from_user @ 0x0800443c (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_memcpy >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_memcpy >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.qcedev_vbuf_ablk_cipher_max_xfer @ 0x080045f0 (size 764) =====

uint64_t sym.qcedev_vbuf_ablk_cipher_max_xfer(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t *piVar2;
    char cVar3;
    ulong in_tmp_ldXn;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t iVar9;
    uint uVar10;
    uint32_t uVar11;
    uint32_t *puVar12;
    uint64_t arg2_00;
    code *pcVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t *puVar14;
    int64_t iVar15;
    int64_t *piVar16;
    uint64_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    uint64_t unaff_x24;
    uint64_t unaff_x25;
    ulong *puVar20;
    int64_t iVar21;
    uint32_t *puVar22;
    uint32_t *puVar23;
    uint32_t *puVar24;
    uint uVar25;
    uint32_t *unaff_x28;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong uStack_1b0;
    code *pcStack_1a8;
    int64_t iStack_1a0;
    ulong uStack_198;
    uint64_t uStack_190;
    ulong uStack_188;
    int64_t iStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    int64_t iStack_168;
    ulong uStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    uint64_t uStack_148;
    int64_t iStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    int64_t iStack_100;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint32_t *puStack_e0;
    uint32_t *puStack_d8;
    uint32_t *puStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint32_t *puStack_a0;
    int64_t iStack_98;
    uint *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uVar18 = *arg2;
    puVar22 = uVar18;
    uStack_88 = 0;
    uStack_80 = 0;
    if (*(arg1 + 0x2cc) == 2) {
        puVar23 = *(arg1 + 0x2c4);
        uVar19 = *(arg1 + 0x40);
        if (uVar19 == 0) goto code_r0x08004698;
code_r0x08004668:
        unaff_x24 = *(arg1 + 0x48);
        if (*(arg1 + 0x48) < 0) {
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(0x800,0x80048d4);
            (*pcVar13)();
        }
        unaff_x25 = arg4 + puVar23;
        __check_object_size(unaff_x25,unaff_x24,0);
        iVar6 = sym._copy_from_user(unaff_x25,uVar19,unaff_x24);
        puVar24 = puVar23;
        if (iVar6 == 0) goto code_r0x08004698;
code_r0x08004714:
        uVar17 = 0xfffffff2;
        arg2_00 = uVar19;
        puVar23 = unaff_x28;
    }
    else {
        puVar23 = NULL;
        uVar19 = *(arg1 + 0x40);
        if (uVar19 != 0) goto code_r0x08004668;
code_r0x08004698:
        puVar12 = *(arg1 + 0x250);
        iVar5 = puVar23;
        puStack_90 = arg2;
        puVar24 = puVar23;
        if (1 < *(arg1 + 0x250)) {
            unaff_x28 = 0x1;
            uVar19 = arg4 + *(arg1 + 0x48) + iVar5;
            puVar14 = arg1 + 0x58;
            do {
                if (unaff_x28 == 0x10) goto code_r0x080048e4;
                unaff_x24 = *(puVar14 + -2);
                if (unaff_x24 != 0) {
                    unaff_x25 = *puVar14;
                    if (*puVar14 < 0) {
    //WARNING: Does not return
                        pcVar13 = SoftwareBreakpoint(0x800,0x80048bc);
                        (*pcVar13)();
                    }
                    __check_object_size(uVar19,unaff_x25,0);
                    iVar6 = sym._copy_from_user(uVar19,unaff_x24,unaff_x25);
                    arg2 = puVar14;
                    if (iVar6 != 0) goto code_r0x08004714;
                    puVar12 = *(arg1 + 0x250);
                }
                arg2 = puVar14 + 4;
                unaff_x28 = unaff_x28 + 1;
                uVar19 = uVar19 + *puVar14;
                puVar14 = arg2;
            } while (unaff_x28 < puVar12);
        }
        *(arg1 + 0x310) = &uStack_88;
        *(arg1 + 0x318) = &uStack_88;
        *(arg1 + 0x254) = *(arg1 + 0x254) + iVar5;
        sg_init_one(&uStack_88,arg4);
        *(arg1 + 0x300) = *(arg1 + 0x254);
        *(arg1 + 0x308) = arg1 + 0x2a0;
        *(arg1 + 0x250) = 1;
        uVar4 = sym.submit_req(arg1,arg3);
        uVar17 = uVar4;
        uVar11 = *(arg1 + 0x254) - iVar5;
        *(arg1 + 0x254) = uVar11;
        if (uVar11 != 0) {
            if (uVar18 < 0x11) {
                uVar18 = 0x10;
            }
            arg2 = uVar18;
            puVar24 = arg1 + puVar22 * 0x10 + 0x148;
            do {
                arg2_00 = uVar11;
                if (arg2 == puVar22) {
code_r0x080048e4:
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x5512,0x80048e8);
                    (*pcVar13)();
                }
                uVar18 = *puVar24;
                uVar19 = uVar18;
                unaff_x28 = puVar23;
                if (uVar11 < uVar18) {
                    if (uVar4 == 0) {
                        if (uVar11 < 0) {
    //WARNING: Does not return
                            pcVar13 = SoftwareBreakpoint(0x800,0x80048e0);
                            (*pcVar13)();
                        }
                        arg4 = arg4 + puVar23;
                        unaff_x24 = *(puVar24 + -2);
                        auVar26 = __check_object_size(arg4,arg2_00,1);
                        iVar6 = sym._copy_to_user(unaff_x24,auVar26,arg2_00);
                        if (iVar6 != 0) goto code_r0x080048a0;
                        uVar11 = *(arg1 + 0x254);
                        uVar19 = *puVar24;
                    }
                    *puVar24 = uVar19 - uVar11;
                    *(puVar24 + -2) = *(puVar24 + -2) + uVar11;
                    *(arg1 + 0x254) = 0;
                    break;
                }
                if (uVar4 == 0) {
                    if (uVar18 < 0) {
    //WARNING: Does not return
                        pcVar13 = SoftwareBreakpoint(0x800,0x80048c8);
                        (*pcVar13)();
                    }
                    unaff_x24 = arg4 + puVar23;
                    unaff_x25 = *(puVar24 + -2);
                    auVar26 = __check_object_size(unaff_x24,uVar19,1);
                    iVar6 = sym._copy_to_user(unaff_x25,auVar26,uVar19);
                    arg2_00 = uVar19;
                    if (iVar6 != 0) {
code_r0x080048a0:
                        uVar17 = 0xfffffff2;
                        goto code_r0x08004824;
                    }
                    uVar19 = *puVar24;
                    uVar11 = *(arg1 + 0x254);
                }
                uVar11 = uVar11 - uVar19;
                puVar22 = puVar22 + 1;
                arg4 = arg4 + uVar19;
                puVar24 = puVar24 + 4;
                *(arg1 + 0x254) = uVar11;
            } while (uVar11 != 0);
        }
        *puStack_90 = puVar22;
        arg2_00 = uVar19;
        puVar23 = unaff_x28;
code_r0x08004824:
        *(arg1 + 0x310) = 0;
        *(arg1 + 0x318) = 0;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return uVar17;
    }
    auVar26 = __stack_chk_fail();
    piVar7 = auVar26._0_8_;
    *extraout_x18 = sym.submit_req;
    pcStack_e8 = sym.submit_req;
    iVar6 = sp_el0;
    piVar16 = piVar7 + 0x82;
    iStack_100 = *(iVar6 + 0x5e0);
    *(piVar7 + 0x81) = 0;
    iVar15 = *auVar26._8_8_;
    puStack_f0 = &stack0xffffffffffffffa0;
    puStack_e0 = puVar23;
    puStack_d8 = puVar24;
    puStack_d0 = puVar22;
    uStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    uStack_b8 = arg2_00;
    uStack_b0 = uVar17;
    iStack_a8 = arg4;
    puStack_a0 = arg2;
    iStack_98 = arg1;
    __init_waitqueue_head(piVar16,"&qcedev_areq->wait_q",obj.init_completion.__key);
    iVar6 = iVar15 + 0x110;
    uVar8 = _raw_spin_lock_irqsave(iVar6);
    uVar25 = 0;
    iVar5 = 0;
    puVar1 = iVar15 + 0xf8;
    do {
        if (*(iVar15 + 0x108) == 0) {
            *(iVar15 + 0x108) = piVar7;
            *(piVar7 + 0x85) = 2;
            if (piVar7[6] == 2) {
                iVar9 = *(iVar15 + 0x108);
                uStack_110 = 0;
                uStack_108 = 0;
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_130 = 0;
                uStack_128 = 0;
                iStack_140 = 0;
                uStack_138 = 0;
                iStack_150 = 0;
                uStack_148 = 0;
                uStack_160 = 0;
                uStack_158 = 0;
                uStack_170 = 0;
                iStack_168 = 0;
                iStack_180 = 0;
                uStack_178 = 0;
                uStack_190 = 0;
                uStack_188 = 0;
                iStack_1a0 = 0;
                uStack_198 = 0;
                uStack_1b0 = NULL;
                pcStack_1a8 = NULL;
                *(iVar9 + 0x380) = *(iVar9 + 0x400);
                if (*(iVar9 + 0x27c) != 2) {
code_r0x0800497c:
                    iVar5 = -0x16;
                    goto code_r0x08004984;
                }
                uStack_198 = 2;
                if (*(iVar9 + 0x280) != 0) {
                    if (*(iVar9 + 0x280) != 2) goto code_r0x0800497c;
                    uStack_190 = 2;
                }
                if (*(iVar9 + 0x276) == '\0') {
                    iVar5 = *(iVar9 + 0x284);
                    if (iVar5 - 1U < 2) {
                        uStack_198 = 0x100000002;
                    }
                    else if (iVar5 != 3) goto code_r0x0800497c;
                }
                else {
                    iVar5 = *(iVar9 + 0x284);
                }
                iStack_140 = iVar9 + 0x248;
                uStack_138 = *(iVar9 + 0x268);
                uStack_1b0 = 0x1;
                uStack_120 = CONCAT44(iVar5,2);
                uStack_148 = *(iVar9 + 0x244);
                if (*(iVar9 + 0x276) != '\0') {
                    uStack_110 = 0x100000000;
                }
                cVar3 = *(iVar9 + 0x275);
                iStack_1a0 = iVar9 + 0x300;
                uStack_130 = *(iVar9 + 0x23c);
                pcStack_1a8 = sym.qcedev_offload_cipher_req_cb.cfi_jt;
                uStack_118 = cVar3 != '\0';
                if (cVar3 != '\0') {
                    uVar18 = *(iVar9 + 0x277) * 0x10 - 0xf;
                    if (*(iVar9 + 0x277) == 0) {
                        uVar18 = 1;
                    }
                    uVar11 = 0;
                    if (*(iVar9 + 0x278) != 0) {
                        uVar11 = *(iVar9 + 0x278) * 0x100 - 0x100;
                    }
                    uStack_118 = CONCAT44(uVar11 | uVar18 | *(iVar9 + 0x279) << 0xc,cVar3 != '\0');
                }
                uStack_110 = CONCAT44(uStack_110._4_4_,*(iVar9 + 0x274));
                iVar5 = qce_ablk_cipher_req(*(iVar15 + 0xe0),&uStack_1b0);
                uVar10 = 0;
                if (iVar5 != 0) {
                    uVar10 = 0xfffffffa;
                }
                uVar25 = uStack_108;
            }
            else {
                if (piVar7[6] == 0) {
                    iVar9 = *(iVar15 + 0x108);
                    uStack_110 = 0;
                    uStack_108 = 0;
                    uStack_120 = 0;
                    uStack_118 = 0;
                    uStack_130 = 0;
                    uStack_128 = 0;
                    iStack_140 = 0;
                    uStack_138 = 0;
                    iStack_150 = 0;
                    uStack_148 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0;
                    uStack_170 = 0;
                    iStack_168 = 0;
                    iStack_180 = 0;
                    uStack_178 = 0;
                    uStack_190 = 0;
                    uStack_188 = 0;
                    iStack_1a0 = 0;
                    uStack_198 = 0;
                    uStack_1b0 = NULL;
                    pcStack_1a8 = NULL;
                    *(iVar9 + 0x380) = *(iVar9 + 0x400);
                    if (*(iVar9 + 0x38) == '\x01') {
                        _printk(0x8000e1a,"start_cipher_req");
                    }
                    else {
                        uVar18 = *(iVar9 + 0x2c8);
                        if (2 < uVar18) goto code_r0x0800497c;
                        iVar5 = -0x16;
                        uStack_198 = uVar18;
                        uVar11 = 0;
                        switch(*(iVar9 + 0x2cc)) {
                        case 0:
                        case 5:
                            break;
                        case 1:
                        case 6:
                            uVar11 = 1;
                            break;
                        case 2:
                            uStack_190 = 2;
                            if ((4U >> (uVar18 & 7) & 1) == 0) goto code_r0x08004de4;
                            uVar11 = 0;
                            goto code_r0x08004df0;
                        case 3:
                            uVar11 = 3;
                            break;
                        default:
                            goto code_r0x08004984;
                        }
                        uStack_190 = uVar11;
code_r0x08004de4:
                        uVar11 = *(iVar9 + 0x2d0) != 1;
code_r0x08004df0:
                        iStack_140 = iVar9 + 0x2a0;
                        uStack_198 = CONCAT44(uVar11,uVar18);
                        iStack_150 = iVar9 + 0x259;
                        uStack_138 = *(iVar9 + 0x2c0);
                        uStack_148 = *(iVar9 + 0x29c);
                        uStack_130 = *(iVar9 + 0x254);
                        if (*(iVar9 + 0x29c) == 0) {
                            if ((*(iVar9 + 0x2d0) & 0xfffffffe) != 2) {
                                iVar21 = 0;
                                do {
                                    if (*(iVar9 + 0x259 + iVar21) != '\0') goto code_r0x08004e94;
                                    iVar21 = iVar21 + 1;
                                } while (iVar21 != 0x40);
                                if (*(iVar15 + 8) != 1) {
code_r0x08004e94:
                                    iVar5 = -0x16;
                                    *(iVar9 + 0x408) = 0xfffffffa;
                                    goto code_r0x08004984;
                                }
                                goto code_r0x08004e20;
                            }
                            uStack_1b0 = 0x1;
                        }
                        else {
code_r0x08004e20:
                            uStack_1b0 = NULL;
                        }
                        iStack_1a0 = iVar9 + 0x300;
                        uStack_120 = 0;
                        pcStack_1a8 = sym.qcedev_cipher_req_cb.cfi_jt;
                        iVar5 = qce_ablk_cipher_req(*(iVar15 + 0xe0),&uStack_1b0);
                        uVar25 = uStack_108;
                        if (iVar5 != 0) {
                            uVar10 = 0xfffffffa;
                            goto code_r0x08004da8;
                        }
                    }
                    iVar5 = 0;
                    *(iVar9 + 0x408) = 0;
                    goto code_r0x08004984;
                }
                iVar9 = *(iVar15 + 0x108);
                iStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_188 = 0;
                iStack_180 = 0;
                uStack_198 = 0;
                uStack_190 = 0;
                pcStack_1a8 = NULL;
                iStack_1a0 = 0;
                uStack_1b0 = NULL;
                if (4 < *(iVar9 + 0x174)) {
                    _printk(0x800159b);
                    goto code_r0x0800497c;
                }
                iVar21 = *(iVar9 + 0x400);
                switch(*(iVar9 + 0x174)) {
                case 1:
                    pcStack_1a8 = 0x1;
                    break;
                case 2:
                    if (*(iVar15 + 0x1b) != '\0') {
                        pcStack_1a8 = 0x2;
code_r0x08004c00:
                        iStack_180 = iVar21 + 0x82;
                        uStack_178 = 0x40;
                    }
                    break;
                case 3:
                    if (*(iVar15 + 0x1b) != '\0') {
                        pcStack_1a8 = 0x3;
                        goto code_r0x08004c00;
                    }
                    pcStack_1a8 = 0x1;
                    iStack_180 = 0;
                    break;
                case 4:
                    iStack_180 = iVar21 + 0x82;
                    *(iVar9 + 0x380) = iVar21;
                    pcStack_1a8 = 0x4;
                    uStack_178 = *(iVar9 + 0x170);
                    goto code_r0x08004d70;
                }
                *(iVar9 + 0x380) = iVar21;
                uStack_190 = *(iVar21 + 8);
                iStack_1a0 = iVar21 + 0x18;
                uStack_188 = *(iVar21 + 0x10);
                uStack_178 = CONCAT15(*(iVar21 + 0x81) != '\0',CONCAT14(*(iVar21 + 0x80) != '\0',uStack_178));
code_r0x08004d70:
                uStack_1b0 = sym.qcedev_sha_req_cb.cfi_jt;
                iStack_168 = iVar9 + 0x300;
                uStack_198 = *(iVar9 + 0x338);
                uStack_160 = 0;
                uStack_170 = *(iVar9 + 0x330);
                iVar5 = qce_process_sha_req(*(iVar15 + 0xe0),&uStack_1b0);
                uVar10 = 0;
                if (iVar5 != 0) {
                    uVar10 = 0xfffffffa;
                }
                uVar25 = uStack_160._4_4_;
            }
code_r0x08004da8:
            *(iVar9 + 0x408) = uVar10;
        }
        else {
            puVar20 = *(iVar15 + 0x100);
            uVar19 = __list_add_valid(piVar7,puVar20,puVar1);
            if ((uVar19 & 1) != 0) {
                *(iVar15 + 0x100) = piVar7;
                *piVar7 = puVar1;
                piVar7[1] = puVar20;
                *puVar20 = piVar7;
            }
            *(piVar7 + 0x85) = 1;
            uStack_198 = 0;
            uStack_190 = 0;
            pcStack_1a8 = NULL;
            iStack_1a0 = 0;
            uStack_1b0 = NULL;
            init_wait_entry(&uStack_1b0,0);
            iVar9 = prepare_to_wait_event(piVar16,&uStack_1b0,1);
            if (piVar7[0x85] == 0) {
                iVar21 = 0x4e2;
            }
            else {
                iVar21 = 0x4e2;
                do {
                    if (iVar9 != 0) goto code_r0x08004b00;
                    _raw_spin_unlock_irq(iVar6);
                    iVar21 = schedule_timeout(iVar21);
                    _raw_spin_lock_irq(iVar6);
                    iVar9 = prepare_to_wait_event(piVar16,&uStack_1b0,1);
                    if (iVar21 == 0 && piVar7[0x85] == 0) {
                        iVar21 = 1;
                    }
                } while ((piVar7[0x85] != 0) && (iVar21 != 0));
            }
            iVar9 = iVar21;
            finish_wait(piVar16,&uStack_1b0);
code_r0x08004b00:
            if ((iVar9 == 0) || (iVar9 == -0x200)) {
                _printk(0x8000f4e,"submit_req");
                uVar19 = __list_del_entry_valid(piVar7);
                if ((uVar19 & 1) != 0) {
                    iVar9 = *piVar7;
                    piVar16 = piVar7[1];
                    *(iVar9 + 8) = piVar16;
                    *piVar16 = iVar9;
                }
                *piVar7 = -0x2152ffffffffff00;
                piVar7[1] = -0x2152fffffffffede;
                *(iVar15 + 0x108) = 0;
                _raw_spin_unlock_irqrestore(iVar6,uVar8);
                goto code_r0x08004fd4;
            }
        }
code_r0x08004984:
    } while (piVar7[0x85] != 2);
    if (iVar5 == 0) {
        _raw_spin_unlock_irqrestore(iVar6,uVar8);
        *(piVar7 + 0x42a) = 0;
        iVar5 = wait_for_completion_timeout(piVar7 + 2,5);
        if (iVar5 == 0) {
            _printk(0x80010fc,"submit_req",uVar25);
            uVar8 = *(iVar15 + 0xe0);
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            *(piVar7 + 0x51) = 0;
            qce_get_crypto_status(uVar8,&uStack_1b0);
            if (uStack_1b0._1_1_ == '\0') {
                if (uStack_1b0._2_1_ != '\0') {
                    uVar10 = 3;
                    goto code_r0x080050c0;
                }
                if (uStack_1b0._3_1_ != '\0') {
                    uVar10 = 1;
                    goto code_r0x080050c0;
                }
                if (piVar7[0x51] != 0) goto code_r0x080050c4;
                _printk(0x8000cc6,"submit_req");
                if (piVar7[0x85] != 3) {
                    uVar18 = 0;
                    do {
                        usleep_range_state(3000,5000,2);
                        _printk(0x80013d3,"submit_req",uVar18 + 1);
                        uVar19 = 0;
                        if (0x14b < uVar18) break;
                        uVar18 = uVar18 + 1;
                    } while (piVar7[0x85] != 3);
                    goto code_r0x08004fd8;
                }
            }
            else {
                uVar10 = 2;
code_r0x080050c0:
                *(piVar7 + 0x51) = uVar10;
code_r0x080050c4:
                *(piVar7 + 0x42a) = 1;
                iVar5 = qce_manage_timeout(*(iVar15 + 0xe0),uVar25);
                if (iVar5 == 0) {
                    sym.req_done(iVar15);
                    if (piVar7[0x51] == 0) goto code_r0x08004f70;
                }
                else {
                    _printk(0x8000d6d,"submit_req");
                    sym.req_done(iVar15);
                    if (piVar7[0x51] == 0) goto code_r0x08004f44;
                }
            }
            uVar19 = 0;
            goto code_r0x08004fd8;
        }
    }
    else {
        *(iVar15 + 0x108) = 0;
        if (puVar1 != *(iVar15 + 0xf8)) {
            piVar16 = *puVar1;
            uVar19 = __list_del_entry_valid(piVar16);
            if ((uVar19 & 1) != 0) {
                iVar15 = *piVar16;
                piVar2 = piVar16[1];
                *(iVar15 + 8) = piVar2;
                *piVar2 = iVar15;
            }
            *(piVar16 + 0x85) = 0;
            *piVar16 = -0x2152ffffffffff00;
            piVar16[1] = -0x2152fffffffffede;
            __wake_up(piVar16 + 0x82,1,1,0);
        }
        _raw_spin_unlock_irqrestore(iVar6,uVar8);
        *(piVar7 + 0x42a) = 0;
code_r0x08004f44:
        *(piVar7 + 0x81) = 0xfffffffb;
    }
code_r0x08004f70:
    if (piVar7[6] != 2) {
        if (piVar7[6] == 0) {
            if (piVar7[0x5a] == 1) {
                iVar5 = piVar7[0x81];
                pcVar13 = 0x8000388;
            }
            else {
                if (piVar7[0x5a] != 0) goto code_r0x08004fd4;
                iVar5 = piVar7[0x81];
                pcVar13 = obj.hash_access_lock;
            }
        }
        else {
            iVar5 = piVar7[0x81];
            pcVar13 = 0x8000390;
        }
        if (iVar5 != 0) {
            pcVar13 = pcVar13 + 4;
        }
        *pcVar13 = *pcVar13 + 1;
    }
code_r0x08004fd4:
    uVar19 = *(piVar7 + 0x81);
code_r0x08004fd8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_100) {
        return uVar19;
    }
    iVar6 = __stack_chk_fail(uVar19);
    *extraout_x18_00 = 0x80051a0;
    uVar8 = _raw_spin_lock_irqsave(in_tmp_ldXn,iVar6 + 0x110);
    iVar15 = *(iVar6 + 0x108);
    *(iVar6 + 0x108) = 0;
    if (iVar15 != 0) {
        if (*(iVar15 + 0x42a) == '\0') {
            complete(iVar15 + 0x10);
        }
        *(iVar15 + 0x428) = 3;
    }
    puVar1 = iVar6 + 0xf8;
    if (puVar1 != *puVar1) {
        piVar16 = *puVar1;
        uVar19 = __list_del_entry_valid(piVar16);
        if ((uVar19 & 1) != 0) {
            iVar15 = *piVar16;
            piVar7 = piVar16[1];
            *(iVar15 + 8) = piVar7;
            *piVar7 = iVar15;
        }
        *(piVar16 + 0x85) = 0;
        *piVar16 = -0x2152ffffffffff00;
        piVar16[1] = -0x2152fffffffffede;
        __wake_up(piVar16 + 0x82,1,1,0);
    }
    uVar19 = _raw_spin_unlock_irqrestore(iVar6 + 0x110,uVar8);
    return uVar19;
}


// ===== sym.submit_req @ 0x080048ec (size 2232) =====

void sym.submit_req(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t *piVar2;
    char cVar3;
    ulong in_tmp_ldXn;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint uVar9;
    uint32_t uVar10;
    code *pcVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t *piVar14;
    int64_t iVar15;
    uint uVar16;
    ulong unaff_x30;
    ulong uStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar8 = arg1 + 0x410;
    iStack_70 = *(iVar12 + 0x5e0);
    *(arg1 + 0x408) = 0;
    arg2 = *arg2;
    __init_waitqueue_head(iVar8,"&qcedev_areq->wait_q",obj.init_completion.__key);
    iVar12 = arg2 + 0x110;
    uVar5 = _raw_spin_lock_irqsave(iVar12);
    uVar16 = 0;
    iVar4 = 0;
    puVar1 = arg2 + 0xf8;
    do {
        if (*(arg2 + 0x108) != 0) {
            piVar14 = *(arg2 + 0x100);
            uVar6 = __list_add_valid(arg1,piVar14,puVar1);
            if ((uVar6 & 1) != 0) {
                *(arg2 + 0x100) = arg1;
                *arg1 = puVar1;
                *(arg1 + 8) = piVar14;
                *piVar14 = arg1;
            }
            *(arg1 + 0x428) = 1;
            uStack_108 = 0;
            uStack_100 = 0;
            pcStack_118 = NULL;
            iStack_110 = 0;
            uStack_120 = NULL;
            init_wait_entry(&stack0xfffffffffffffee0,0);
            iVar7 = prepare_to_wait_event(iVar8,&stack0xfffffffffffffee0,1);
            if (*(arg1 + 0x428) == 0) {
                iVar15 = 0x4e2;
            }
            else {
                iVar15 = 0x4e2;
                do {
                    if (iVar7 != 0) goto code_r0x08004b00;
                    _raw_spin_unlock_irq(iVar12);
                    iVar15 = schedule_timeout(iVar15);
                    _raw_spin_lock_irq(iVar12);
                    iVar7 = prepare_to_wait_event(iVar8,&stack0xfffffffffffffee0,1);
                    if (iVar15 == 0 && *(arg1 + 0x428) == 0) {
                        iVar15 = 1;
                    }
                } while ((*(arg1 + 0x428) != 0) && (iVar15 != 0));
            }
            iVar7 = iVar15;
            finish_wait(iVar8,&stack0xfffffffffffffee0);
code_r0x08004b00:
            if ((iVar7 != 0) && (iVar7 != -0x200)) goto code_r0x08004984;
            _printk(0x8000f4e,"submit_req");
            uVar6 = __list_del_entry_valid(arg1);
            if ((uVar6 & 1) != 0) {
                iVar8 = *arg1;
                piVar14 = *(arg1 + 8);
                *(iVar8 + 8) = piVar14;
                *piVar14 = iVar8;
            }
            *arg1 = 0xdead000000000100;
            *(arg1 + 8) = 0xdead000000000122;
            *(arg2 + 0x108) = 0;
            _raw_spin_unlock_irqrestore(iVar12,uVar5);
            goto code_r0x08004fd4;
        }
        *(arg2 + 0x108) = arg1;
        *(arg1 + 0x428) = 2;
        if (*(arg1 + 0x30) == 2) {
            iVar7 = *(arg2 + 0x108);
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            iStack_b0 = 0;
            uStack_a8 = 0;
            iStack_c0 = 0;
            uStack_b8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            iStack_d8 = 0;
            iStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            iStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = NULL;
            pcStack_118 = NULL;
            *(iVar7 + 0x380) = *(iVar7 + 0x400);
            if (*(iVar7 + 0x27c) != 2) {
code_r0x0800497c:
                iVar4 = -0x16;
                goto code_r0x08004984;
            }
            uStack_108 = 2;
            if (*(iVar7 + 0x280) != 0) {
                if (*(iVar7 + 0x280) != 2) goto code_r0x0800497c;
                uStack_100 = 2;
            }
            if (*(iVar7 + 0x276) == '\0') {
                iVar4 = *(iVar7 + 0x284);
                if (iVar4 - 1U < 2) {
                    uStack_108 = 0x100000002;
                }
                else if (iVar4 != 3) goto code_r0x0800497c;
            }
            else {
                iVar4 = *(iVar7 + 0x284);
            }
            iStack_b0 = iVar7 + 0x248;
            uStack_a8 = *(iVar7 + 0x268);
            uStack_120 = 0x1;
            uStack_90 = CONCAT44(iVar4,2);
            uStack_b8 = *(iVar7 + 0x244);
            if (*(iVar7 + 0x276) != '\0') {
                uStack_80 = 0x100000000;
            }
            cVar3 = *(iVar7 + 0x275);
            iStack_110 = iVar7 + 0x300;
            uStack_a0 = *(iVar7 + 0x23c);
            pcStack_118 = sym.qcedev_offload_cipher_req_cb.cfi_jt;
            uStack_88 = cVar3 != '\0';
            if (cVar3 != '\0') {
                uVar13 = *(iVar7 + 0x277) * 0x10 - 0xf;
                if (*(iVar7 + 0x277) == 0) {
                    uVar13 = 1;
                }
                uVar10 = 0;
                if (*(iVar7 + 0x278) != 0) {
                    uVar10 = *(iVar7 + 0x278) * 0x100 - 0x100;
                }
                uStack_88 = CONCAT44(uVar10 | uVar13 | *(iVar7 + 0x279) << 0xc,cVar3 != '\0');
            }
            uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar7 + 0x274));
            iVar4 = qce_ablk_cipher_req(*(arg2 + 0xe0),&stack0xfffffffffffffee0);
            uVar9 = 0;
            if (iVar4 != 0) {
                uVar9 = 0xfffffffa;
            }
            uVar16 = uStack_78;
code_r0x08004da8:
            *(iVar7 + 0x408) = uVar9;
        }
        else {
            if (*(arg1 + 0x30) != 0) {
                iVar7 = *(arg2 + 0x108);
                iStack_d8 = 0;
                uStack_d0 = 0;
                uStack_e8 = 0;
                uStack_e0 = 0;
                uStack_f8 = 0;
                iStack_f0 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                pcStack_118 = NULL;
                iStack_110 = 0;
                uStack_120 = NULL;
                if (4 < *(iVar7 + 0x174)) {
                    _printk(0x800159b);
                    goto code_r0x0800497c;
                }
                iVar15 = *(iVar7 + 0x400);
    //switch table (5 cases) at 0x8001730
                switch(*(*(iVar7 + 0x174) * 4 + 0x8001730) + 0x8004bb4) {
                case 0x8004bc8:
                    pcStack_118 = 0x1;
                    break;
                case 0x8004bd4:
                    if (*(arg2 + 0x1b) != '\0') {
                        pcStack_118 = 0x2;
code_r0x08004c00:
                        iStack_f0 = iVar15 + 0x82;
                        uStack_e8 = 0x40;
                    }
                    break;
                case 0x8004bec:
                    if (*(arg2 + 0x1b) != '\0') {
                        pcStack_118 = 0x3;
                        goto code_r0x08004c00;
                    }
                    pcStack_118 = 0x1;
                    iStack_f0 = 0;
                    break;
                case 0x8004c14:
                    iStack_f0 = iVar15 + 0x82;
                    *(iVar7 + 0x380) = iVar15;
                    pcStack_118 = 0x4;
                    uStack_e8 = *(iVar7 + 0x170);
                    goto code_r0x08004d70;
                }
                *(iVar7 + 0x380) = iVar15;
                uStack_100 = *(iVar15 + 8);
                iStack_110 = iVar15 + 0x18;
                uStack_f8 = *(iVar15 + 0x10);
                uStack_e8 = CONCAT15(*(iVar15 + 0x81) != '\0',CONCAT14(*(iVar15 + 0x80) != '\0',uStack_e8));
code_r0x08004d70:
                uStack_120 = sym.qcedev_sha_req_cb.cfi_jt;
                iStack_d8 = iVar7 + 0x300;
                uStack_108 = *(iVar7 + 0x338);
                uStack_d0 = 0;
                uStack_e0 = *(iVar7 + 0x330);
                iVar4 = qce_process_sha_req(*(arg2 + 0xe0),&stack0xfffffffffffffee0);
                uVar9 = 0;
                if (iVar4 != 0) {
                    uVar9 = 0xfffffffa;
                }
                uVar16 = uStack_d0._4_4_;
                goto code_r0x08004da8;
            }
            iVar7 = *(arg2 + 0x108);
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            iStack_b0 = 0;
            uStack_a8 = 0;
            iStack_c0 = 0;
            uStack_b8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            uStack_e0 = 0;
            iStack_d8 = 0;
            iStack_f0 = 0;
            uStack_e8 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            iStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = NULL;
            pcStack_118 = NULL;
            *(iVar7 + 0x380) = *(iVar7 + 0x400);
            if (*(iVar7 + 0x38) == '\x01') {
                _printk(0x8000e1a,"start_cipher_req");
code_r0x08004ec4:
                iVar4 = 0;
                *(iVar7 + 0x408) = 0;
            }
            else {
                uVar13 = *(iVar7 + 0x2c8);
                if (2 < uVar13) goto code_r0x0800497c;
                iVar4 = -0x16;
                uStack_108 = uVar13;
                if (*(iVar7 + 0x2cc) < 7) {
                    uVar10 = 0;
    //switch table (6 cases) at 0x8001714
                    switch(*(*(iVar7 + 0x2cc) * 4 + 0x8001714) + 0x8004ad0) {
                    case 0x8004984:
                        goto code_r0x08004984;
                    case 0x8004ae4:
                        uVar10 = 1;
                        break;
                    case 0x8004db8:
                        uStack_100 = 2;
                        if ((4U >> (uVar13 & 7) & 1) == 0) goto code_r0x08004de4;
                        uVar10 = 0;
                        goto code_r0x08004df0;
                    case 0x8004dd8:
                        uVar10 = 3;
                    }
                    uStack_100 = uVar10;
code_r0x08004de4:
                    uVar10 = *(iVar7 + 0x2d0) != 1;
code_r0x08004df0:
                    iStack_b0 = iVar7 + 0x2a0;
                    uStack_108 = CONCAT44(uVar10,uVar13);
                    iStack_c0 = iVar7 + 0x259;
                    uStack_a8 = *(iVar7 + 0x2c0);
                    uStack_b8 = *(iVar7 + 0x29c);
                    uStack_a0 = *(iVar7 + 0x254);
                    if (*(iVar7 + 0x29c) == 0) {
                        if ((*(iVar7 + 0x2d0) & 0xfffffffe) != 2) {
                            iVar15 = 0;
                            do {
                                if (*(iVar7 + 0x259 + iVar15) != '\0') goto code_r0x08004e94;
                                iVar15 = iVar15 + 1;
                            } while (iVar15 != 0x40);
                            if (*(arg2 + 8) != 1) {
code_r0x08004e94:
                                iVar4 = -0x16;
                                *(iVar7 + 0x408) = 0xfffffffa;
                                goto code_r0x08004984;
                            }
                            goto code_r0x08004e20;
                        }
                        uStack_120 = 0x1;
                    }
                    else {
code_r0x08004e20:
                        uStack_120 = NULL;
                    }
                    iStack_110 = iVar7 + 0x300;
                    uStack_90 = 0;
                    pcStack_118 = sym.qcedev_cipher_req_cb.cfi_jt;
                    iVar4 = qce_ablk_cipher_req(*(arg2 + 0xe0),&stack0xfffffffffffffee0);
                    uVar16 = uStack_78;
                    if (iVar4 != 0) {
                        uVar9 = 0xfffffffa;
                        goto code_r0x08004da8;
                    }
                    goto code_r0x08004ec4;
                }
            }
        }
code_r0x08004984:
    } while (*(arg1 + 0x428) != 2);
    if (iVar4 == 0) {
        _raw_spin_unlock_irqrestore(iVar12,uVar5);
        *(arg1 + 0x42a) = 0;
        iVar4 = wait_for_completion_timeout(arg1 + 0x10,5);
        if (iVar4 == 0) {
            _printk(0x80010fc,"submit_req",uVar16);
            uVar5 = *(arg2 + 0xe0);
            uStack_120 = uStack_120 & 0xffffffff00000000;
            *(arg1 + 0x288) = 0;
            qce_get_crypto_status(uVar5,&stack0xfffffffffffffee0);
            if (uStack_120._1_1_ == '\0') {
                if (uStack_120._2_1_ != '\0') {
                    uVar9 = 3;
                    goto code_r0x080050c0;
                }
                if (uStack_120._3_1_ != '\0') {
                    uVar9 = 1;
                    goto code_r0x080050c0;
                }
                if (*(arg1 + 0x288) != 0) goto code_r0x080050c4;
                _printk(0x8000cc6,"submit_req");
                if (*(arg1 + 0x428) != 3) {
                    uVar13 = 0;
                    do {
                        usleep_range_state(3000,5000,2);
                        _printk(0x80013d3,"submit_req",uVar13 + 1);
                        uVar16 = 0;
                        if (0x14b < uVar13) break;
                        uVar13 = uVar13 + 1;
                    } while (*(arg1 + 0x428) != 3);
                    goto code_r0x08004fd8;
                }
            }
            else {
                uVar9 = 2;
code_r0x080050c0:
                *(arg1 + 0x288) = uVar9;
code_r0x080050c4:
                *(arg1 + 0x42a) = 1;
                iVar4 = qce_manage_timeout(*(arg2 + 0xe0),uVar16);
                if (iVar4 == 0) {
                    sym.req_done(arg2);
                    if (*(arg1 + 0x288) == 0) goto code_r0x08004f70;
                }
                else {
                    _printk(0x8000d6d,"submit_req");
                    sym.req_done(arg2);
                    if (*(arg1 + 0x288) == 0) goto code_r0x08004f44;
                }
            }
            uVar16 = 0;
            goto code_r0x08004fd8;
        }
    }
    else {
        *(arg2 + 0x108) = 0;
        if (puVar1 != *(arg2 + 0xf8)) {
            piVar14 = *puVar1;
            uVar6 = __list_del_entry_valid(piVar14);
            if ((uVar6 & 1) != 0) {
                iVar8 = *piVar14;
                piVar2 = piVar14[1];
                *(iVar8 + 8) = piVar2;
                *piVar2 = iVar8;
            }
            *(piVar14 + 0x85) = 0;
            *piVar14 = -0x2152ffffffffff00;
            piVar14[1] = -0x2152fffffffffede;
            __wake_up(piVar14 + 0x82,1,1,0);
        }
        _raw_spin_unlock_irqrestore(iVar12,uVar5);
        *(arg1 + 0x42a) = 0;
code_r0x08004f44:
        *(arg1 + 0x408) = 0xfffffffb;
    }
code_r0x08004f70:
    if (*(arg1 + 0x30) != 2) {
        if (*(arg1 + 0x30) == 0) {
            if (*(arg1 + 0x2d0) == 1) {
                iVar4 = *(arg1 + 0x408);
                pcVar11 = 0x8000388;
            }
            else {
                if (*(arg1 + 0x2d0) != 0) goto code_r0x08004fd4;
                iVar4 = *(arg1 + 0x408);
                pcVar11 = obj.hash_access_lock;
            }
        }
        else {
            iVar4 = *(arg1 + 0x408);
            pcVar11 = 0x8000390;
        }
        if (iVar4 != 0) {
            pcVar11 = pcVar11 + 4;
        }
        *pcVar11 = *pcVar11 + 1;
    }
code_r0x08004fd4:
    uVar16 = *(arg1 + 0x408);
code_r0x08004fd8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_70) {
        return;
    }
    iVar8 = __stack_chk_fail(uVar16);
    *extraout_x18 = 0x80051a0;
    uVar5 = _raw_spin_lock_irqsave(in_tmp_ldXn,iVar8 + 0x110);
    iVar12 = *(iVar8 + 0x108);
    *(iVar8 + 0x108) = 0;
    if (iVar12 != 0) {
        if (*(iVar12 + 0x42a) == '\0') {
            complete(iVar12 + 0x10);
        }
        *(iVar12 + 0x428) = 3;
    }
    puVar1 = iVar8 + 0xf8;
    if (puVar1 != *puVar1) {
        piVar14 = *puVar1;
        uVar6 = __list_del_entry_valid(piVar14);
        if ((uVar6 & 1) != 0) {
            iVar12 = *piVar14;
            piVar2 = piVar14[1];
            *(iVar12 + 8) = piVar2;
            *piVar2 = iVar12;
        }
        *(piVar14 + 0x85) = 0;
        *piVar14 = -0x2152ffffffffff00;
        piVar14[1] = -0x2152fffffffffede;
        __wake_up(piVar14 + 0x82,1,1,0);
    }
    _raw_spin_unlock_irqrestore(iVar8 + 0x110,uVar5);
    return;
}


// ===== sym.req_done @ 0x080051a4 (size 204) =====

void sym.req_done(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(arg1 + 0x110);
    iVar6 = *(arg1 + 0x108);
    *(arg1 + 0x108) = 0;
    if (iVar6 != 0) {
        if (*(iVar6 + 0x42a) == '\0') {
            complete(iVar6 + 0x10);
        }
        *(iVar6 + 0x428) = 3;
    }
    puVar1 = arg1 + 0xf8;
    if (puVar1 != *puVar1) {
        piVar5 = *puVar1;
        uVar4 = __list_del_entry_valid(piVar5);
        if ((uVar4 & 1) != 0) {
            iVar6 = *piVar5;
            piVar2 = piVar5[1];
            *(iVar6 + 8) = piVar2;
            *piVar2 = iVar6;
        }
        *(piVar5 + 0x85) = 0;
        *piVar5 = -0x2152ffffffffff00;
        piVar5[1] = -0x2152fffffffffede;
        __wake_up(piVar5 + 0x82,1,1,0);
    }
    _raw_spin_unlock_irqrestore(arg1 + 0x110,uVar3);
    return;
}


// ===== sym._copy_to_user @ 0x08005274 (size 312) =====

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
        if ((_memcpy >> 0x18 & 1) == 0) {
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
        if ((_memcpy >> 0x18 & 1) == 0) {
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


// ===== sym.qcedev_sha_update @ 0x080053e8 (size 952) =====

int sym.qcedev_sha_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint uVar3;
    code *pcVar4;
    int iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint32_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t unaff_x20;
    uint64_t unaff_x21;
    int64_t *unaff_x22;
    int64_t iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t *puVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    code *pcStack_1e8;
    int64_t *piStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    int64_t iStack_1b0;
    uint32_t auStack_1a8 [62];
    uint32_t uStack_b0;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_70 = *(iVar6 + 0x5e0);
    iStack_1c0 = arg2;
    iStack_1b8 = arg3;
    if (*(arg2 + 0xc2) == '\0') {
        _printk(0x80014ce,"qcedev_sha_update");
        iVar5 = -0x16;
    }
    else {
        unaff_x19 = arg1;
        if (*(arg1 + 0x13c) < 0xff01) {
            iVar5 = sym.qcedev_sha_update_max_xfer(arg1,arg2,arg3);
        }
        else {
            iVar6 = kmem_cache_alloc_trace(_simple_open,0xcc0,0x140);
            if (iVar6 == 0) {
                arg3 = 0;
                _printk(0x8001695,"qcedev_sha_update");
                iVar5 = -0xc;
            }
            else {
                piVar1 = arg1 + 0x38;
                memcpy(&iStack_1b0,piVar1,0x140);
                memcpy(iVar6,piVar1,0x140);
                if (uStack_b0 == 0) {
                    iVar5 = 0;
                    uVar16 = *(iVar6 + 0x100);
                }
                else {
                    uVar14 = 0;
                    do {
                        unaff_x21 = uVar14;
                        uVar16 = unaff_x21;
                        if (0xf < uVar16) goto code_r0x08005794;
                        unaff_x22 = piVar1 + unaff_x21 * 2;
                        if (*(unaff_x22 + 1) < 0xff01) {
                            uVar17 = uStack_b0 - uVar16;
                            if (uStack_b0 < uVar16 || uVar17 == 0) {
                                *(arg1 + 0x138) = 0;
                                iVar5 = sym.qcedev_sha_update_max_xfer(arg1,iStack_1c0,iStack_1b8);
                                uVar14 = unaff_x21;
                            }
                            else {
                                iVar5 = 0;
                                uVar12 = 0;
                                do {
                                    if (0x10 - uVar16 == iVar5) goto code_r0x08005794;
                                    uVar10 = piVar1[(uVar16 + iVar5) * 2 + 1] + uVar12;
                                    if (0xfe < uVar10 >> 8) {
                                        uVar10 = 0xff00;
                                        uVar17 = iVar5 + 1;
                                        *(piVar1 + (uVar16 + iVar5) * 2 + 1) = 0xff00 - uVar12;
                                        uVar19 = uVar16 + iVar5;
                                        break;
                                    }
                                    iVar5 = iVar5 + 1;
                                    uVar12 = uVar10;
                                    uVar19 = uStack_b0;
                                } while ((0x10 - uVar16) + uStack_b0 + -0x10 != iVar5);
                                *(arg1 + 0x13c) = uVar10;
                                if ((0 < uVar16) && (0 < uVar17)) {
                                    uVar14 = uVar17;
                                    uVar12 = 0;
                                    if (uVar16 < 0x11) {
                                        uVar12 = 0x10 - uVar16;
                                    }
                                    uVar20 = uVar12;
                                    iVar11 = arg1;
                                    do {
                                        if (uVar20 == 0) goto code_r0x08005794;
                                        iVar7 = iVar11 + unaff_x21 * 0x10;
                                        uVar14 = uVar14 - 1;
                                        uVar20 = uVar20 - 1;
                                        uVar8 = *(iVar7 + 0x38);
                                        *(iVar11 + 0x40) = *(iVar7 + 0x40);
                                        *(iVar11 + 0x38) = uVar8;
                                        iVar11 = iVar11 + 0x10;
                                    } while (uVar14 != 0);
                                }
                                *(arg1 + 0x138) = uVar17;
                                iVar5 = sym.qcedev_sha_update_max_xfer(arg1,iStack_1c0,iStack_1b8);
                                if (0xf < uVar19) goto code_r0x08005794;
                                unaff_x21 = uVar19;
                                uVar14 = uVar19;
                            }
                            if ((unaff_x21 == 0x14) || (0x140 < unaff_x21 * 0x10)) {
code_r0x08005798:
    //WARNING: Does not return
                                pcVar4 = SoftwareBreakpoint(1,0x800579c);
                                (*pcVar4)();
                            }
                            uVar16 = *(piVar1 + unaff_x21 * 2 + 1);
                            iVar11 = (&iStack_1b0)[unaff_x21 * 2] + uVar16;
                            piVar1[unaff_x21 * 2] = iVar11;
                            if (0x140 < (unaff_x21 * 0x10 | 8)) goto code_r0x08005798;
                            (&iStack_1b0)[unaff_x21 * 2] = iVar11;
                            uVar16 = auStack_1a8[unaff_x21 * 4] - uVar16;
                            uVar17 = uVar14;
                            if (uVar16 == 0) {
                                uVar17 = uVar17 + 1;
                            }
                            uVar14 = uVar17;
                            *(piVar1 + unaff_x21 * 2 + 1) = uVar16;
                            auStack_1a8[unaff_x21 * 4] = uVar16;
                        }
                        else {
                            *(arg1 + 0x40) = 0xff00;
                            if (uVar16 != 0) {
                                *piVar1 = *unaff_x22;
                            }
                            *(arg1 + 0x138) = 0xff0000000001;
                            iVar5 = sym.qcedev_sha_update_max_xfer(arg1,iStack_1c0,iStack_1b8);
                            if (0x140 < (unaff_x21 << 4 | 8)) goto code_r0x08005798;
                            iVar11 = (&iStack_1b0)[unaff_x21 * 2];
                            uVar16 = auStack_1a8[unaff_x21 * 4] - 0xff00;
                            (&iStack_1b0)[unaff_x21 * 2] = iVar11 + 0xff00;
                            *(unaff_x22 + 1) = uVar16;
                            *unaff_x22 = iVar11 + 0xff00;
                            auStack_1a8[unaff_x21 * 4] = uVar16;
                            uVar14 = unaff_x21;
                        }
                    } while ((uVar14 < uStack_b0) && (iVar5 == 0));
                    uVar16 = *(iVar6 + 0x100);
                }
                if (uVar16 != 0) {
                    iVar11 = 0;
                    do {
                        if (iVar11 == 0x100) {
code_r0x08005794:
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x5512,0x8005798);
                            (*pcVar4)();
                        }
                        puVar2 = iVar6 + iVar11;
                        iVar7 = arg1 + iVar11;
                        iVar11 = iVar11 + 0x10;
                        uVar8 = *puVar2;
                        *(iVar7 + 0x40) = *(puVar2 + 1);
                        *(iVar7 + 0x38) = uVar8;
                    } while (uVar16 * 0x10 - iVar11 != 0);
                }
                uVar3 = *(iVar6 + 0x104);
                *(arg1 + 0x138) = uVar16;
                *(arg1 + 0x13c) = uVar3;
                arg3 = ksize(iVar6);
                memset(iVar6,0);
                kfree(iVar6);
                unaff_x20 = iVar6;
            }
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_70) {
        return iVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar7 = auVar21._8_8_;
    iVar11 = auVar21._0_8_;
    *extraout_x18 = sym.qcedev_sha_final;
    pcStack_1e8 = sym.qcedev_sha_final;
    iVar6 = sp_el0;
    iStack_1f8 = *(iVar6 + 0x5e0);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_1f0 = &stack0xffffffffffffffa0;
    piStack_1e0 = unaff_x22;
    uStack_1d8 = unaff_x21;
    iStack_1d0 = unaff_x20;
    iStack_1c8 = unaff_x19;
    if (*(iVar7 + 0xc2) == '\0') {
        _printk(0x80014ce,"qcedev_sha_final");
        iVar5 = -0x16;
    }
    else {
        iVar5 = *(iVar7 + 0x7c);
        *(iVar7 + 0x81) = 1;
        iVar6 = __kmalloc(iVar5 + 0x80,0xcc0);
        if (iVar6 == 0) {
            iVar5 = -0xc;
        }
        else {
            memcpy(iVar6,iVar7 + 0x3c,iVar5);
            *(iVar11 + 0x338) = &uStack_218;
            sg_init_one(&uStack_218,iVar6,iVar5);
            *(iVar11 + 0x330) = iVar5;
            iVar5 = sym.submit_req(iVar11,iVar7);
            *(iVar7 + 8) = 0;
            *(iVar7 + 0xc2) = 0;
            *(iVar7 + 0x3c) = 0;
            *(iVar7 + 0x44) = 0;
            *(iVar7 + 0x4c) = 0;
            *(iVar7 + 0x54) = 0;
            *(iVar7 + 0x5c) = 0;
            *(iVar7 + 100) = 0;
            *(iVar7 + 0x6c) = 0;
            *(iVar7 + 0x74) = 0;
            *(iVar7 + 0x7a) = 0;
            arg3 = ksize(iVar6);
            memset(iVar6,0);
            kfree(iVar6);
            *(iVar11 + 0x338) = 0;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_1f8) {
        return iVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._8_8_;
    iVar6 = auVar21._0_8_;
    *extraout_x18_00 = sym.qcedev_sha_update_max_xfer;
    uVar17 = *(iVar11 + 0x7c);
    uVar14 = uVar17;
    iVar5 = *(iVar6 + 0x13c);
    uVar16 = iVar5 + uVar17;
    if (uVar16 < 0x41) {
        if (0x40 < uVar17) {
code_r0x08005b88:
    //WARNING: Does not return
            pcVar4 = SoftwareBreakpoint(0x5512,0x8005b8c);
            (*pcVar4)();
        }
        if (iVar5 != 0) {
            iVar7 = iVar11 + uVar14 + 0x3c;
            iVar9 = 0;
            do {
                if (iVar9 + 0x10 == 0x110) goto code_r0x08005b88;
                iVar15 = iVar6 + iVar9;
                iVar13 = *(iVar15 + 0x38);
                if (iVar13 != 0) {
                    uVar17 = *(iVar15 + 0x40);
                    if (uVar17 < 0) {
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x8005b74);
                        (*pcVar4)();
                    }
                    __check_object_size(iVar7,uVar17,0);
                    iVar13 = sym._copy_from_user(iVar7,iVar13,uVar17);
                    if (iVar13 != 0) {
                        return -0xe;
                    }
                }
                iVar5 = iVar5 - *(iVar15 + 0x40);
                iVar7 = iVar7 + *(iVar15 + 0x40);
                iVar9 = iVar9 + 0x10;
            } while (iVar5 != 0);
        }
        iVar5 = 0;
        *(iVar11 + 0x7c) = uVar16;
    }
    else {
        iVar7 = __kmalloc(uVar16 + 0x80,0xcc0);
        if (iVar7 == 0) {
            iVar5 = -0xc;
        }
        else {
            iVar9 = iVar7;
            if (uVar17 != 0) {
                memcpy(iVar7,iVar11 + 0x3c,uVar14);
                iVar9 = iVar7 + uVar14;
            }
            iVar15 = *(iVar6 + 0x38);
            if (iVar15 != 0) {
                uVar17 = *(iVar6 + 0x40);
                if (uVar17 < 0) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8005b84);
                    (*pcVar4)();
                }
                __check_object_size(iVar9,uVar17,0);
                iVar15 = sym._copy_from_user(iVar9,iVar15,uVar17);
                if (iVar15 != 0) {
code_r0x08005a04:
                    uVar8 = ksize(iVar7);
                    memset(iVar7,0,uVar8);
                    kfree(iVar7);
                    return -0xe;
                }
            }
            uVar14 = *(iVar6 + 0x138);
            iVar9 = iVar9 + *(iVar6 + 0x40);
            if (1 < *(iVar6 + 0x138)) {
                uVar20 = 1;
                puVar18 = iVar6 + 0x50;
                do {
                    if (uVar20 == 0x10) goto code_r0x08005b88;
                    iVar15 = *(puVar18 + -2);
                    if (iVar15 != 0) {
                        uVar17 = *puVar18;
                        if (uVar17 < 0) {
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8005b7c);
                            (*pcVar4)();
                        }
                        __check_object_size(iVar9,uVar17,0);
                        iVar15 = sym._copy_from_user(iVar9,iVar15,uVar17);
                        if (iVar15 != 0) goto code_r0x08005a04;
                        uVar14 = *(iVar6 + 0x138);
                    }
                    uVar20 = uVar20 + 1;
                    iVar9 = iVar9 + *puVar18;
                    puVar18 = puVar18 + 4;
                } while (uVar20 < uVar14);
            }
            *(iVar6 + 0x338) = arg3;
            uVar17 = (uVar16 - (uVar16 + 0x3f & 0xffffffc0)) + 0x40;
            sg_init_one(arg3,iVar7,uVar16 - uVar17);
            *(iVar6 + 0x330) = uVar16 - uVar17;
            if (uVar17 != 0) {
                *(iVar11 + 0x3c) = 0;
                *(iVar11 + 0x6c) = 0;
                *(iVar11 + 0x74) = 0;
                *(iVar11 + 0x5c) = 0;
                *(iVar11 + 100) = 0;
                *(iVar11 + 0x4c) = 0;
                *(iVar11 + 0x54) = 0;
                *(iVar11 + 0x44) = 0;
                memcpy(iVar11 + 0x3c,iVar9 - uVar17,uVar17);
            }
            *(iVar11 + 0x7c) = uVar17;
            iVar5 = sym.submit_req(iVar6,iVar11);
            *(iVar11 + 0x80) = 0;
            uVar8 = ksize(iVar7);
            memset(iVar7,0,uVar8);
            kfree(iVar7);
        }
    }
    return iVar5;
}


// ===== sym.qcedev_sha_final @ 0x080057a0 (size 324) =====

uint sym.qcedev_sha_final(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t arg2_00;
    ulong in_x2;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int iVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    if (*(arg2 + 0xc2) == '\0') {
        _printk(0x80014ce,"qcedev_sha_final");
        uVar4 = 0xffffffea;
    }
    else {
        iVar12 = *(arg2 + 0x7c);
        *(arg2 + 0x81) = 1;
        iVar5 = __kmalloc(iVar12 + 0x80,0xcc0);
        if (iVar5 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            memcpy(iVar5,arg2 + 0x3c,iVar12);
            *(arg1 + 0x338) = &uStack_58;
            sg_init_one(&uStack_58,iVar5,iVar12);
            *(arg1 + 0x330) = iVar12;
            uVar4 = sym.submit_req(arg1,arg2);
            *(arg2 + 8) = 0;
            *(arg2 + 0xc2) = 0;
            *(arg2 + 0x3c) = 0;
            *(arg2 + 0x44) = 0;
            *(arg2 + 0x4c) = 0;
            *(arg2 + 0x54) = 0;
            *(arg2 + 0x5c) = 0;
            *(arg2 + 100) = 0;
            *(arg2 + 0x6c) = 0;
            *(arg2 + 0x74) = 0;
            *(arg2 + 0x7a) = 0;
            in_x2 = ksize(iVar5);
            memset(iVar5,0);
            kfree(iVar5);
            *(arg1 + 0x338) = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar15 = __stack_chk_fail();
    arg2_00 = auVar15._8_8_;
    iVar5 = auVar15._0_8_;
    *extraout_x18 = sym.qcedev_sha_update_max_xfer;
    uVar2 = *(arg2_00 + 0x7c);
    uVar10 = uVar2;
    iVar12 = *(iVar5 + 0x13c);
    uVar1 = iVar12 + uVar2;
    if (uVar1 < 0x41) {
        if (0x40 < uVar2) {
code_r0x08005b88:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8005b8c);
            (*pcVar3)();
        }
        if (iVar12 != 0) {
            iVar6 = arg2_00 + uVar10 + 0x3c;
            iVar8 = 0;
            do {
                if (iVar8 + 0x10 == 0x110) goto code_r0x08005b88;
                iVar11 = iVar5 + iVar8;
                iVar9 = *(iVar11 + 0x38);
                if (iVar9 != 0) {
                    uVar2 = *(iVar11 + 0x40);
                    if (uVar2 < 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8005b74);
                        (*pcVar3)();
                    }
                    __check_object_size(iVar6,uVar2,0);
                    iVar9 = sym._copy_from_user(iVar6,iVar9,uVar2);
                    if (iVar9 != 0) {
                        return 0xfffffff2;
                    }
                }
                iVar12 = iVar12 - *(iVar11 + 0x40);
                iVar6 = iVar6 + *(iVar11 + 0x40);
                iVar8 = iVar8 + 0x10;
            } while (iVar12 != 0);
        }
        uVar4 = 0;
        *(arg2_00 + 0x7c) = uVar1;
    }
    else {
        iVar6 = __kmalloc(uVar1 + 0x80,0xcc0);
        if (iVar6 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            iVar8 = iVar6;
            if (uVar2 != 0) {
                memcpy(iVar6,arg2_00 + 0x3c,uVar10);
                iVar8 = iVar6 + uVar10;
            }
            iVar11 = *(iVar5 + 0x38);
            if (iVar11 != 0) {
                uVar2 = *(iVar5 + 0x40);
                if (uVar2 < 0) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x8005b84);
                    (*pcVar3)();
                }
                __check_object_size(iVar8,uVar2,0);
                iVar11 = sym._copy_from_user(iVar8,iVar11,uVar2);
                if (iVar11 != 0) {
code_r0x08005a04:
                    uVar7 = ksize(iVar6);
                    memset(iVar6,0,uVar7);
                    kfree(iVar6);
                    return 0xfffffff2;
                }
            }
            uVar10 = *(iVar5 + 0x138);
            iVar8 = iVar8 + *(iVar5 + 0x40);
            if (1 < *(iVar5 + 0x138)) {
                uVar14 = 1;
                puVar13 = iVar5 + 0x50;
                do {
                    if (uVar14 == 0x10) goto code_r0x08005b88;
                    iVar11 = *(puVar13 + -2);
                    if (iVar11 != 0) {
                        uVar2 = *puVar13;
                        if (uVar2 < 0) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8005b7c);
                            (*pcVar3)();
                        }
                        __check_object_size(iVar8,uVar2,0);
                        iVar11 = sym._copy_from_user(iVar8,iVar11,uVar2);
                        if (iVar11 != 0) goto code_r0x08005a04;
                        uVar10 = *(iVar5 + 0x138);
                    }
                    uVar14 = uVar14 + 1;
                    iVar8 = iVar8 + *puVar13;
                    puVar13 = puVar13 + 4;
                } while (uVar14 < uVar10);
            }
            *(iVar5 + 0x338) = in_x2;
            uVar2 = (uVar1 - (uVar1 + 0x3f & 0xffffffc0)) + 0x40;
            sg_init_one(in_x2,iVar6,uVar1 - uVar2);
            *(iVar5 + 0x330) = uVar1 - uVar2;
            if (uVar2 != 0) {
                *(arg2_00 + 0x3c) = 0;
                *(arg2_00 + 0x6c) = 0;
                *(arg2_00 + 0x74) = 0;
                *(arg2_00 + 0x5c) = 0;
                *(arg2_00 + 100) = 0;
                *(arg2_00 + 0x4c) = 0;
                *(arg2_00 + 0x54) = 0;
                *(arg2_00 + 0x44) = 0;
                memcpy(arg2_00 + 0x3c,iVar8 - uVar2,uVar2);
            }
            *(arg2_00 + 0x7c) = uVar2;
            uVar4 = sym.submit_req(iVar5,arg2_00);
            *(arg2_00 + 0x80) = 0;
            uVar7 = ksize(iVar6);
            memset(iVar6,0,uVar7);
            kfree(iVar6);
        }
    }
    return uVar4;
}


// ===== sym.qcedev_sha_update_max_xfer @ 0x080058e4 (size 680) =====

uint sym.qcedev_sha_update_max_xfer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int iVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0x7c);
    uVar9 = uVar2;
    iVar11 = *(arg1 + 0x13c);
    uVar1 = iVar11 + uVar2;
    if (uVar1 < 0x41) {
        if (0x40 < uVar2) {
code_r0x08005b88:
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8005b8c);
            (*pcVar3)();
        }
        if (iVar11 != 0) {
            iVar5 = arg2 + uVar9 + 0x3c;
            iVar7 = 0;
            do {
                if (iVar7 + 0x10 == 0x110) goto code_r0x08005b88;
                iVar10 = arg1 + iVar7;
                iVar8 = *(iVar10 + 0x38);
                if (iVar8 != 0) {
                    uVar2 = *(iVar10 + 0x40);
                    if (uVar2 < 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8005b74);
                        (*pcVar3)();
                    }
                    __check_object_size(iVar5,uVar2,0);
                    iVar8 = sym._copy_from_user(iVar5,iVar8,uVar2);
                    if (iVar8 != 0) {
                        return 0xfffffff2;
                    }
                }
                iVar11 = iVar11 - *(iVar10 + 0x40);
                iVar5 = iVar5 + *(iVar10 + 0x40);
                iVar7 = iVar7 + 0x10;
            } while (iVar11 != 0);
        }
        uVar4 = 0;
        *(arg2 + 0x7c) = uVar1;
    }
    else {
        iVar5 = __kmalloc(uVar1 + 0x80,0xcc0);
        if (iVar5 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            iVar7 = iVar5;
            if (uVar2 != 0) {
                memcpy(iVar5,arg2 + 0x3c,uVar9);
                iVar7 = iVar5 + uVar9;
            }
            iVar10 = *(arg1 + 0x38);
            if (iVar10 != 0) {
                uVar2 = *(arg1 + 0x40);
                if (uVar2 < 0) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x800,0x8005b84);
                    (*pcVar3)();
                }
                __check_object_size(iVar7,uVar2,0);
                iVar10 = sym._copy_from_user(iVar7,iVar10,uVar2);
                if (iVar10 != 0) {
code_r0x08005a04:
                    uVar6 = ksize(iVar5);
                    memset(iVar5,0,uVar6);
                    kfree(iVar5);
                    return 0xfffffff2;
                }
            }
            uVar9 = *(arg1 + 0x138);
            iVar7 = iVar7 + *(arg1 + 0x40);
            if (1 < *(arg1 + 0x138)) {
                uVar13 = 1;
                puVar12 = arg1 + 0x50;
                do {
                    if (uVar13 == 0x10) goto code_r0x08005b88;
                    iVar10 = *(puVar12 + -2);
                    if (iVar10 != 0) {
                        uVar2 = *puVar12;
                        if (uVar2 < 0) {
    //WARNING: Does not return
                            pcVar3 = SoftwareBreakpoint(0x800,0x8005b7c);
                            (*pcVar3)();
                        }
                        __check_object_size(iVar7,uVar2,0);
                        iVar10 = sym._copy_from_user(iVar7,iVar10,uVar2);
                        if (iVar10 != 0) goto code_r0x08005a04;
                        uVar9 = *(arg1 + 0x138);
                    }
                    uVar13 = uVar13 + 1;
                    iVar7 = iVar7 + *puVar12;
                    puVar12 = puVar12 + 4;
                } while (uVar13 < uVar9);
            }
            *(arg1 + 0x338) = arg3;
            uVar2 = (uVar1 - (uVar1 + 0x3f & 0xffffffc0)) + 0x40;
            sg_init_one(arg3,iVar5,uVar1 - uVar2);
            *(arg1 + 0x330) = uVar1 - uVar2;
            if (uVar2 != 0) {
                *(arg2 + 0x3c) = 0;
                *(arg2 + 0x6c) = 0;
                *(arg2 + 0x74) = 0;
                *(arg2 + 0x5c) = 0;
                *(arg2 + 100) = 0;
                *(arg2 + 0x4c) = 0;
                *(arg2 + 0x54) = 0;
                *(arg2 + 0x44) = 0;
                memcpy(arg2 + 0x3c,iVar7 - uVar2,uVar2);
            }
            *(arg2 + 0x7c) = uVar2;
            uVar4 = sym.submit_req(arg1,arg2);
            *(arg2 + 0x80) = 0;
            uVar6 = ksize(iVar5);
            memset(iVar5,0,uVar6);
            kfree(iVar5);
        }
    }
    return uVar4;
}


// ===== sym._debug_stats_read @ 0x08005b8c (size 348) =====

ulong sym._debug_stats_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = scnprintf(obj._debug_read_buf,0x3ff,"",**(arg1 + 0xd8) + 1);
    if (uVar2 < 0x401) {
        iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,"   Encryption operation success       : %d\n",
                          _segment.ehdr);
        uVar2 = iVar3 + uVar2;
        if (uVar2 < 0x401) {
            iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,"",_segment.ehdr);
            uVar2 = iVar3 + uVar2;
            if (uVar2 < 0x401) {
                iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,
                                  "   Decryption operation success     : %d\n",_segment.ehdr);
                uVar2 = iVar3 + uVar2;
                if (uVar2 < 0x401) {
                    iVar3 = scnprintf(obj._debug_read_buf + uVar2,0x3ff - uVar2,
                                      "   Encryption operation fail          : %d\n",_segment.ehdr);
                    uVar5 = iVar3 + uVar2;
                    if (arg3 < uVar5) {
                        uVar4 = 0xffffffffffffffea;
                    }
                    else {
                        uVar4 = simple_read_from_buffer(arg2,uVar5,arg4,obj._debug_read_buf,uVar5);
                    }
                    return uVar4;
                }
            }
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8005ce8);
    (*pcVar1)();
}


// ===== sym._debug_stats_write @ 0x08005ce8 (size 32) =====

int64_t sym._debug_stats_write(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    *0x8000388 = 0;
    *0x8000390 = 0;
    _obj.hash_access_lock = 0;
    return arg1;
}


// ===== sym.qcedev_probe @ 0x08005d08 (size 1220) =====

uint32_t sym.qcedev_probe(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iVar1 = of_device_is_compatible(*(arg1 + 0x300),0x8000f76);
    if (iVar1 == 0) {
        iVar1 = of_device_is_compatible(*(arg1 + 0x300),0x800066c);
        if (iVar1 == 0) {
            uVar2 = 0xffffffea;
        }
        else {
            uVar2 = sym.qcedev_parse_context_bank(arg1);
        }
        goto code_r0x0800618c;
    }
    uVar2 = alloc_chrdev_region(obj.qcedev_device_no,0,1,0x8000c1c);
    if (uVar2 < 0) {
        _printk(0x8000f82,uVar2);
        goto code_r0x0800618c;
    }
    _segment.ehdr = __class_create(obj.__this_module,0x8000c1c,obj.qcedev_probe_device.__key);
    if (_segment.ehdr < 0xfffffffffffff001) {
        _segment.ehdr = device_create(_segment.ehdr,0,_segment.ehdr & 0xffffffff,0,0x8000c1c);
        if (_segment.ehdr < 0xfffffffffffff001) {
            cdev_init(0x80004f0,obj.qcedev_fops);
            *0x8000550 = obj.__this_module;
            uStack_5c = cdev_add(0x80004f0,_segment.ehdr & 0xfff00000,1);
            if (uStack_5c < 0) {
                _printk(0x80009ed,uStack_5c);
            }
            else {
                *0x8000578 = 0;
                *0x80004b4 = 0;
                *0x8000598 = 0x8000598;
                *0x80005a0 = 0x8000598;
                *0x80005a8 = 0;
                *0x80005e0 = 0x80005e0;
                *0x80005e8 = 0x80005e0;
                *0x80005b0 = 0;
                tasklet_init(0x80005b8,sym.req_done.67d2f7a7cab654499daac85ffec66bd8.cfi_jt,obj.qce_dev);
                *0x80004e0 = of_icc_get(arg1 + 0x10,"");
                if (*0x80004e0 < 0xfffffffffffff001) {
                    iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,icc_avg_bw",0x80004e8,1,0);
                    if (iVar1 < 0) {
                        _printk(0x8000db2,"qcedev_probe_device");
                        _segment.ehdr = CONCAT44(*0x8000004,0x180);
                    }
                    iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,icc_peak_bw",0x80004ec,1,0);
                    if (iVar1 < 0) {
                        _printk(0x8000a6d,"qcedev_probe_device");
                        uVar5 = 0x180;
                        _segment.ehdr = CONCAT44(*0x8000004,0x180);
                    }
                    else {
                        uVar5 = _segment.ehdr & 0xffffffff;
                    }
                    uStack_5c = icc_set_bw(*0x80004e0,*0x80004e8,uVar5);
                    if (uStack_5c == 0) {
                        uVar5 = qce_open(arg1,&uStack_5c);
                        if (uVar5 == 0) {
                            uStack_5c = 0xffffffed;
                        }
                        else {
                            _segment.ehdr = uVar5;
                            uStack_5c = qce_set_irqs(uVar5,0);
                            if (uStack_5c == 0) {
                                uStack_5c = icc_set_bw(_segment.ehdr,0);
                                if (uStack_5c == 0) {
                                    *0x8000588 = arg1;
                                    *(arg1 + 0xa8) = obj.qce_dev;
                                    qce_hw_support(*0x8000580,0x80004b8);
                                    if (*0x80004c2 == '\0') {
                                        puVar6 = *(arg1 + 0xa0);
                                        _obj.qce_dev = *puVar6;
                                        *0x80004a8 = *(puVar6 + 1);
                                        *0x80004ac = *(puVar6 + 0xc);
                                    }
                                    else {
                                        *0x80004ac = 1;
                                        _obj.qce_dev = 0;
                                        *0x80004a8 = *0x80004c4;
                                    }
                                    *0x80005f0 = sym.qcedev_mem_new_client(0);
                                    if (*0x80005f0 == 0) {
                                        uVar3 = 0x8001052;
                                        goto code_r0x080060f0;
                                    }
                                    uStack_5c = of_platform_populate(*(arg1 + 0x300),obj.qcedev_match,0,arg1 + 0x10);
                                    if (uStack_5c == 0) {
                                        uVar2 = 0;
                                        goto code_r0x0800618c;
                                    }
                                    _printk(0x8001545,"qcedev_probe_device",uStack_5c);
                                    if (_segment.ehdr != 0) {
                                        kfree();
                                    }
                                    _segment.ehdr = 0;
                                }
                                else {
                                    uVar3 = 0x80015c2;
code_r0x080060f0:
                                    _printk(uVar3,"qcedev_probe_device");
                                }
                                qce_close(uVar5);
                            }
                            else {
                                _printk(0x8001223,"qcedev_probe_device",uStack_5c);
                            }
                        }
                        icc_set_bw(_segment.ehdr,0,0);
                    }
                    else {
                        _printk(0x8000a03,"qcedev_probe_device");
                    }
                    if (_segment.ehdr != 0) {
                        icc_put();
                    }
                }
                else {
                    uStack_5c = *0x80004e0;
                    _printk(0x8000c65,"qcedev_probe_device");
                }
                cdev_del(0x80004f0);
            }
            device_destroy(_segment.ehdr,_segment.ehdr & 0xffffffff);
        }
        else {
            _printk(0x80009cc,uVar2);
            uStack_5c = 0xfffffff4;
        }
        class_destroy(_segment.ehdr);
    }
    else {
        uStack_5c = 0xfffffff4;
        _printk(0x8000856,0xfffffff4);
    }
    unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    *0x80004e0 = 0;
    *(arg1 + 0xa8) = 0;
    *0x8000580 = 0;
    *0x8000588 = 0;
    uVar2 = uStack_5c;
code_r0x0800618c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar2;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qcedev_remove;
    iVar4 = *(iVar4 + 0xa8);
    if (iVar4 != 0) {
        if (*(iVar4 + 0xe0) != 0) {
            qce_close();
        }
        if (*(iVar4 + 0x40) != 0) {
            icc_put();
        }
        tasklet_kill(iVar4 + 0x118);
        cdev_del(iVar4 + 0x50);
        device_destroy(_segment.ehdr,_segment.ehdr & 0xffffffff);
        class_destroy(_segment.ehdr);
        unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
    }
    return 0;
}


// ===== sym.qcedev_remove @ 0x080061cc (size 132) =====

ulong sym.qcedev_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    if (iVar1 != 0) {
        if (*(iVar1 + 0xe0) != 0) {
            qce_close();
        }
        if (*(iVar1 + 0x40) != 0) {
            icc_put();
        }
        tasklet_kill(iVar1 + 0x118);
        cdev_del(iVar1 + 0x50);
        device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
        class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
        unregister_chrdev_region(_segment.ehdr,1);
    }
    return 0;
}


// ===== sym.qcedev_suspend @ 0x08006250 (size 140) =====

ulong sym.qcedev_suspend(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        mutex_lock(obj.qcedev_sent_bw_req);
        if (*(arg1_00 + 0x14) != 0) {
            iVar1 = qce_set_irqs(*(arg1_00 + 0xe0),0);
            if (iVar1 == 0) {
                sym.qcedev_control_clocks(arg1_00,0);
            }
            else {
                _printk(0x8001223,"qcedev_suspend",iVar1);
            }
        }
        mutex_unlock(obj.qcedev_sent_bw_req);
    }
    return 0;
}


// ===== sym.qcedev_resume @ 0x080062dc (size 156) =====

ulong sym.qcedev_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    if (arg1_00 != 0) {
        mutex_lock(obj.qcedev_sent_bw_req);
        if (((*(arg1_00 + 0x14) != 0) && (iVar1 = sym.qcedev_control_clocks(arg1_00,1), iVar1 == 0)) &&
           (iVar1 = qce_set_irqs(*(arg1_00 + 0xe0),1), iVar1 != 0)) {
            _printk(0x800090d,"qcedev_resume",iVar1);
            sym.qcedev_control_clocks(arg1_00,0);
        }
        mutex_unlock(obj.qcedev_sent_bw_req);
    }
    return 0;
}


// ===== sym.qcedev_open @ 0x08006378 (size 400) =====

ulong sym.qcedev_open(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    ulong *puVar3;
    ulong *in_x18;
    code *pcVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = *(arg1 + 0x4c) & 0xfffff;
    if (_segment.ehdr != uVar5) {
code_r0x08006490:
        _printk(0x8000dda,"qcedev_open",uVar5);
        return 0xfffffffe;
    }
    if (1 < uVar5) {
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(0x5512,0x8006504);
        (*pcVar4)();
    }
    pcVar4 = obj.qce_dev + uVar5 * 0x158;
    if (pcVar4 == NULL) goto code_r0x08006490;
    puVar3 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x108);
    if (puVar3 == NULL) {
        return 0xfffffff4;
    }
    *puVar3 = pcVar4;
    *(arg2 + 0xd8) = puVar3;
    mutex_lock(obj.qcedev_sent_bw_req);
    uVar6 = uVar5 * 0x158;
    if (0x144 < uVar6) {
code_r0x08006504:
    //WARNING: Does not return
        pcVar4 = SoftwareBreakpoint(1,0x8006508);
        (*pcVar4)();
    }
    piVar1 = uVar6 + 0x80004b4;
    iVar2 = *piVar1;
    if (iVar2 == 0) {
        iVar2 = sym.qcedev_control_clocks(pcVar4,1);
        if (iVar2 != 0) goto code_r0x08006440;
        if (0x78 < uVar6) goto code_r0x08006504;
        iVar2 = qce_set_irqs(*(uVar5 * 0x158 + 0x8000580),1);
        if (iVar2 != 0) {
            _printk(0x800090d,"qcedev_ce_high_bw_req",iVar2);
            sym.qcedev_control_clocks(pcVar4,0);
            goto code_r0x08006440;
        }
        iVar2 = *piVar1;
    }
    *piVar1 = iVar2 + 1;
code_r0x08006440:
    mutex_unlock(obj.qcedev_sent_bw_req);
    __mutex_init(puVar3 + 0x1b,"",obj.qcedev_open.__key);
    puVar3[0x19] = puVar3 + 0x19;
    puVar3[0x1a] = puVar3 + 0x19;
    return 0;
}


// ===== sym.qcedev_release @ 0x08006508 (size 272) =====

ulong sym.qcedev_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t *arg1_00;
    int64_t arg1_01;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    arg1_01 = *arg1_00;
    if (arg1_01 == 0) goto code_r0x08006594;
    if (*(arg1_01 + 0xf0) != 0x56434544) {
        _printk(0x8000df3,"qcedev_release",arg1_01);
    }
    mutex_lock(obj.qcedev_sent_bw_req);
    iVar1 = *(arg1_01 + 0x14);
    if (iVar1 == 1) {
        iVar1 = qce_set_irqs(*(arg1_01 + 0xe0),0);
        if (iVar1 == 0) {
            iVar1 = sym.qcedev_control_clocks(arg1_01,0);
            if (iVar1 == 0) {
                iVar1 = *(arg1_01 + 0x14);
                goto code_r0x08006580;
            }
        }
        else {
            _printk(0x8001223,"qcedev_ce_high_bw_req",iVar1);
        }
    }
    else {
code_r0x08006580:
        *(arg1_01 + 0x14) = iVar1 + -1;
    }
    mutex_unlock(obj.qcedev_sent_bw_req);
code_r0x08006594:
    iVar1 = sym.qcedev_unmap_all_buffers(arg1_00);
    if (iVar1 != 0) {
        _printk(0x8001408,"qcedev_release");
    }
    kfree_sensitive(arg1_00);
    *(arg1 + 0xd8) = 0;
    return 0;
}


// ===== sym.qcedev_control_clocks @ 0x08006618 (size 520) =====

int sym.qcedev_control_clocks(int64_t arg1,uint32_t arg2)

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
    if (*(arg1 + 0x2c) != '\0') {
        uVar5 = uVar4;
    }
    //switch table (4 cases) at 0x8001744
    switch(uVar5) {
    case 1:
        iVar2 = qce_enable_clk(*(arg1 + 0xe0));
        if (iVar2 == 0) {
            iVar2 = icc_set_bw(*(arg1 + 0x40),*(arg1 + 0x48),*(arg1 + 0x4c));
            if (iVar2 == 0) {
                return 0;
            }
            _printk(0x80008bd,"qcedev_control_clocks");
            iVar2 = qce_disable_clk(*(arg1 + 0xe0));
            if (iVar2 == 0) {
                return 0;
            }
            uVar3 = 0x80013ba;
            goto code_r0x080067e4;
        }
        break;
    case 2:
        iVar2 = icc_set_bw(*(arg1 + 0x40),*(arg1 + 0x48),*(arg1 + 0x4c));
        if (iVar2 == 0) {
            iVar2 = qce_enable_clk(*(arg1 + 0xe0));
            if (iVar2 == 0) {
                return 0;
            }
            _printk(0x8000cf2,"qcedev_control_clocks");
            iVar2 = icc_set_bw(*(arg1 + 0x40),0,0);
            if (iVar2 == 0) {
                return 0;
            }
code_r0x080067ac:
            uVar3 = 0x8001453;
            goto code_r0x080067e4;
        }
        goto code_r0x080067d0;
    case 3:
        iVar2 = qce_disable_clk(*(arg1 + 0xe0));
        if (iVar2 != 0) {
            uVar3 = 0x8000870;
            goto code_r0x080067e4;
        }
        iVar2 = icc_set_bw(*(arg1 + 0x40),0,0);
        if (iVar2 == 0) {
            return 0;
        }
        _printk(0x8001453,"qcedev_control_clocks");
        iVar2 = qce_enable_clk(*(arg1 + 0xe0));
        if (iVar2 == 0) {
            return 0;
        }
        break;
    case 4:
        iVar2 = icc_set_bw(*(arg1 + 0x40),0,0);
        if (iVar2 != 0) goto code_r0x080067ac;
        iVar2 = qce_disable_clk(*(arg1 + 0xe0));
        if (iVar2 == 0) {
            return 0;
        }
        _printk(0x8000870,"qcedev_control_clocks");
        iVar2 = icc_set_bw(*(arg1 + 0x40),*(arg1 + 0x48),*(arg1 + 0x4c));
        if (iVar2 == 0) {
            return 0;
        }
code_r0x080067d0:
        uVar3 = 0x80008bd;
        goto code_r0x080067e4;
    default:
        return -2;
    }
    uVar3 = 0x8000cf2;
code_r0x080067e4:
    _printk(uVar3,"qcedev_control_clocks");
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x08006820 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006864

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
    //switch table (4 cases) at 0x8001748
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006878);
    (*pcVar1)();
}


// ===== sym.qcedev_parse_context_bank @ 0x08006878 (size 504) =====

uint sym.qcedev_parse_context_bank(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint *puVar5;
    ulong *in_x18;
    uint uVar6;
    ulong uVar7;
    ulong *puVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012c0,"qcedev_parse_context_bank");
        return 0xffffffea;
    }
    piVar1 = arg1 + 0x10;
    if (*(arg1 + 0x70) == 0) {
        iVar9 = *(arg1 + 0x80);
        if (iVar9 == 0) {
            iVar9 = *piVar1;
        }
        _printk(0x8001132,"qcedev_parse_context_bank",iVar9);
        return 0xffffffea;
    }
    iVar9 = *(*(arg1 + 0x70) + 0x98);
    uVar7 = *(arg1 + 0x300);
    piVar3 = devm_kmalloc(piVar1,0x38,0xdc0);
    if (piVar3 == NULL) {
        _printk(0x800142f,"qcedev_parse_context_bank");
        return 0xfffffff4;
    }
    *piVar3 = piVar3;
    piVar3[1] = piVar3;
    puVar8 = *(iVar9 + 0x148);
    uVar4 = __list_add_valid(piVar3,puVar8,iVar9 + 0x140);
    if ((uVar4 & 1) != 0) {
        *(iVar9 + 0x148) = piVar3;
        *piVar3 = iVar9 + 0x140;
        piVar3[1] = puVar8;
        *puVar8 = piVar3;
    }
    of_property_read_string(uVar7,"label",piVar3 + 2);
    iVar9 = of_find_property(uVar7,"qcom,secure-context-bank",0);
    *(piVar3 + 0x24) = iVar9 != 0;
    if (piVar1 == NULL) {
        _printk(0x800088c,"qcedev_setup_context_bank");
        uVar6 = 0xffffffea;
code_r0x08006a1c:
        _printk(0x8000802,"qcedev_parse_context_bank",uVar6);
        uVar4 = __list_del_entry_valid(piVar3);
        if ((uVar4 & 1) != 0) {
            iVar9 = *piVar3;
            piVar2 = piVar3[1];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        *piVar3 = -0x2152ffffffffff00;
        piVar3[1] = -0x2152fffffffffede;
        devm_kfree(piVar1,piVar3);
    }
    else {
        puVar5 = *(arg1 + 0x2d0);
        piVar3[5] = piVar1;
        if (puVar5 == NULL) {
            puVar5 = devm_kmalloc(piVar1,0x10,0xdc0);
            *(arg1 + 0x2d0) = puVar5;
            if (puVar5 == NULL) {
                uVar6 = 0xfffffff4;
                goto code_r0x08006a1c;
            }
        }
        *puVar5 = 0xffffffff;
        if (*(arg1 + 0x2d0) == 0) {
            uVar6 = 0;
        }
        else {
            uVar6 = 0;
            *(*(arg1 + 0x2d0) + 8) = 0xffffffffffffffff;
        }
    }
    return uVar6;
}


// ===== sym.qcedev_mem_new_client @ 0x08006a70 (size 120) =====

uint * sym.qcedev_mem_new_client(int param_1)

{
    int64_t iVar1;
    uint *puVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,4);
        if (puVar2 != NULL) {
            *puVar2 = 0;
        }
    }
    else {
        _printk(0x8000d0a,"qcedev_mem_new_client");
        puVar2 = NULL;
    }
    return puVar2;
}


// ===== sym.qcedev_mem_delete_client @ 0x08006ae8 (size 36) =====

void sym.qcedev_mem_delete_client(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcedev_check_and_map_buffer @ 0x08006b0c (size 1248) =====

uint64_t sym.qcedev_check_and_map_buffer(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint8_t uVar6;
    ulong *arg3_00;
    uint64_t uVar7;
    ulong uVar8;
    int64_t *in_x4;
    uint32_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    int64_t *piVar14;
    int *arg2_00;
    int64_t *piVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((arg3 < arg4) && (iVar5 = arg2, -1 < iVar5)) && (arg1 != 0)) && (in_x4 != NULL)) {
        if ((*arg1 != 0) && (arg2_00 = *(*arg1 + 0x150), arg2_00 != NULL)) {
            if (*arg2_00 == 0) {
                iVar1 = arg1 + 0xd8;
                mutex_lock(iVar1);
                piVar15 = arg1 + 200;
                piVar10 = *piVar15;
                if (piVar10 != piVar15) {
code_r0x08006b98:
                    if (piVar10[9] != iVar5) goto code_r0x08006ba4;
                    *in_x4 = piVar10[7];
                    uVar16 = piVar10[8];
                    piVar10 = piVar10 + 10;
                    Hint_Prefetch(piVar10,2,0,1);
                    do {
                        cVar3 = '\x01';
                        bVar4 = ExclusiveMonitorPass(piVar10,0x10);
                        if (bVar4) {
                            *piVar10 = *piVar10 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar3 != '\0');
                    mutex_unlock(iVar1);
                    if (arg3 < uVar16) goto code_r0x08006f2c;
                    _printk(0x8000c20,"qcedev_check_and_map_buffer",arg3,uVar16,arg2 & 0xffffffff);
                    arg3_00 = NULL;
                    goto code_r0x08006f98;
                }
code_r0x08006bb0:
                mutex_unlock(iVar1);
                arg3_00 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x58);
                if (arg3_00 == NULL) {
                    _printk(0x800147c,"qcedev_check_and_map_buffer");
                    uVar16 = 0xfffffff4;
                }
                else {
                    if (*arg2_00 == 0) {
                        uVar7 = dma_buf_get(arg2 & 0xffffffff);
                        uVar16 = 0xffffffea;
                        if ((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) {
                            if (*arg1 + 0x140 == *(*arg1 + 0x140)) {
                                uVar8 = 0x80011aa;
                            }
                            else {
                                uVar6 = mem_buf_dma_buf_exclusive_owner(uVar7);
                                piVar14 = *(*arg1 + 0x140);
                                piVar10 = *arg1 + 0x140;
                                if (piVar14 != piVar10) {
                                    uVar8 = 0x800117e;
code_r0x08006c40:
                                    if (*(piVar14 + 0x24) != (~uVar6 & 1)) goto code_r0x08006c4c;
                                    if (piVar14 == NULL) goto code_r0x08006d84;
                                    uVar16 = dma_buf_attach(uVar7,piVar14[5]);
                                    if ((uVar16 == 0) || (0xfffffffffffff000 < uVar16)) {
                                        _printk(0x8000a96,"ion_map_buffer");
                                        if (uVar16 == 0) {
                                            uVar16 = 0xfffffff4;
                                            goto code_r0x08006de4;
                                        }
code_r0x08006ec0:
                                        dma_buf_put(uVar7);
                                        if (uVar16 != 0) goto code_r0x08006dec;
                                        iVar11 = arg3_00[7];
                                        uVar12 = arg3_00[8];
                                    }
                                    else {
                                        *(uVar16 + 0x48) = *(uVar16 + 0x48) | 0x20000;
                                        piVar10 = dma_buf_map_attachment(uVar16,0);
                                        if ((piVar10 == NULL) || (0xfffffffffffff000 < piVar10)) {
                                            uVar9 = 0xfffffff4;
                                            if (piVar10 != NULL) {
                                                uVar9 = piVar10;
                                            }
                                            _printk(0x8000937,"ion_map_buffer");
code_r0x08006ea8:
                                            dma_buf_detach(uVar7,uVar16);
                                            uVar16 = uVar9;
                                            goto code_r0x08006ec0;
                                        }
                                        if (*piVar10 == 0) {
                                            uVar8 = 0x8000b8f;
code_r0x08006e88:
                                            _printk(uVar8,"ion_map_buffer");
                                            dma_buf_unmap_attachment(uVar16,piVar10,0);
                                            uVar9 = 0xfffffff4;
                                            goto code_r0x08006ea8;
                                        }
                                        iVar11 = *(*piVar10 + 0x10);
                                        arg3_00[7] = iVar11;
                                        uVar9 = *(*piVar10 + 0x18);
                                        uVar12 = uVar9;
                                        arg3_00[8] = uVar12;
                                        if (uVar9 < arg4) {
                                            uVar8 = 0x8001571;
                                            goto code_r0x08006e88;
                                        }
                                        arg3_00[2] = piVar14[5];
                                        iVar13 = piVar14[6];
                                        arg3_00[5] = uVar16;
                                        arg3_00[6] = uVar7;
                                        *(arg3_00 + 9) = iVar5;
                                        arg3_00[3] = iVar13;
                                        arg3_00[4] = piVar10;
                                    }
                                    piVar2 = arg3_00 + 10;
                                    *in_x4 = iVar11;
                                    Hint_Prefetch(piVar2,2,0,1);
                                    do {
                                        cVar3 = '\x01';
                                        bVar4 = ExclusiveMonitorPass(piVar2,0x10);
                                        if (bVar4) {
                                            *piVar2 = *piVar2 + 1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                        }
                                    } while (cVar3 != '\0');
                                    mutex_lock(iVar1);
                                    piVar10 = *(arg1 + 0xd0);
                                    uVar16 = __list_add_valid(arg3_00,piVar10,piVar15);
                                    if ((uVar16 & 1) != 0) {
                                        *(arg1 + 0xd0) = arg3_00;
                                        *arg3_00 = piVar15;
                                        arg3_00[1] = piVar10;
                                        *piVar10 = arg3_00;
                                    }
                                    mutex_unlock(iVar1);
                                    if (arg3 < uVar12) {
code_r0x08006f2c:
                                        uVar16 = 0;
                                        *in_x4 = *in_x4 + arg3;
                                        goto code_r0x08006f3c;
                                    }
                                    _printk(0x8000c20,"qcedev_check_and_map_buffer",arg3,uVar12,arg2 & 0xffffffff);
                                    sym.qcedev_unmap_buffer(arg1,arg2_00,arg3_00);
code_r0x08006f98:
                                    uVar16 = 0xffffffde;
                                    goto code_r0x08006e1c;
                                }
code_r0x08006d84:
                                uVar8 = 0x800117e;
                            }
code_r0x08006dd4:
                            _printk(uVar8,"ion_map_buffer");
                            uVar16 = 0xfffffffb;
code_r0x08006de4:
                            dma_buf_put(uVar7);
                        }
                    }
                    else {
                        _printk(0x8000d0a,"qcedev_map_buffer");
                        uVar16 = 0xffffffff;
                    }
code_r0x08006dec:
                    _printk(0x8000a26,"qcedev_map_buffer");
                    _printk(0x8000b48,"qcedev_check_and_map_buffer",arg2 & 0xffffffff,uVar16 & 0xffffffff);
                }
code_r0x08006e1c:
                kfree(arg3_00);
            }
            else {
                uVar16 = 0xffffffff;
            }
            goto code_r0x08006f3c;
        }
        uVar8 = 0x800115c;
    }
    else {
        uVar8 = 0x80014aa;
    }
    _printk(uVar8,"qcedev_check_and_map_buffer");
    uVar16 = 0xffffffea;
code_r0x08006f3c:
    return uVar16 & 0xffffffff;
code_r0x08006ba4:
    piVar10 = *piVar10;
    if (piVar10 == piVar15) goto code_r0x08006bb0;
    goto code_r0x08006b98;
code_r0x08006c4c:
    piVar14 = *piVar14;
    if (piVar14 == piVar10) goto code_r0x08006dd4;
    goto code_r0x08006c40;
}


// ===== sym.qcedev_unmap_buffer @ 0x08006fec (size 144) =====

void sym.qcedev_unmap_buffer(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 == 0) {
        if (*arg1 + 0x140 != *(*arg1 + 0x140)) {
            dma_buf_unmap_attachment(*(arg3 + 0x28),*(arg3 + 0x20),0);
            dma_buf_detach(*(arg3 + 0x30),*(arg3 + 0x28));
            dma_buf_put(*(arg3 + 0x30));
        }
    }
    else {
        _printk(0x8000d0a,"");
        _printk(0x8001260,"");
    }
    return;
}


// ===== sym.qcedev_check_and_unmap_buffer @ 0x08007080 (size 476) =====

ulong sym.qcedev_check_and_unmap_buffer(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    char cVar4;
    bool bVar5;
    uint64_t uVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        if (-1 < arg2) {
            if ((*arg1 != 0) && (piVar9 = *(*arg1 + 0x150), piVar9 != NULL)) {
                if (*piVar9 != 0) {
                    return 0xffffffff;
                }
                iVar1 = arg1 + 0xd8;
                mutex_lock(iVar1);
                piVar8 = arg1 + 200;
                do {
                    piVar8 = *piVar8;
                    if (piVar8 == arg1 + 200) {
                        mutex_unlock(iVar1);
                        _printk(0x800107b,"qcedev_check_and_unmap_buffer",arg2 & 0xffffffff);
                        return 0xffffffea;
                    }
                } while (piVar8[9] != arg2);
                piVar3 = piVar8 + 10;
                Hint_Prefetch(piVar3,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar5 = ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar5) {
                        *piVar3 = *piVar3 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                if (*piVar3 == 0) {
                    if (*piVar9 == 0) {
                        if (*arg1 + 0x140 != *(*arg1 + 0x140)) {
                            dma_buf_unmap_attachment(piVar8[5],piVar8[4],0);
                            dma_buf_detach(piVar8[6],piVar8[5]);
                            dma_buf_put(piVar8[6]);
                        }
                    }
                    else {
                        _printk(0x8000d0a,"");
                        _printk(0x8001260,"");
                    }
                    uVar6 = __list_del_entry_valid(piVar8);
                    if ((uVar6 & 1) != 0) {
                        iVar2 = *piVar8;
                        piVar3 = piVar8[1];
                        *(iVar2 + 8) = piVar3;
                        *piVar3 = iVar2;
                    }
                    *piVar8 = -0x2152ffffffffff00;
                    piVar8[1] = -0x2152fffffffffede;
                    kfree(piVar8);
                }
                mutex_unlock(iVar1);
                return 0;
            }
            uVar7 = 0x800115c;
            goto code_r0x080071a8;
        }
    }
    uVar7 = 0x80014aa;
code_r0x080071a8:
    _printk(uVar7,"qcedev_check_and_unmap_buffer");
    return 0xffffffea;
}


// ===== sym.qcedev_unmap_all_buffers @ 0x08007260 (size 376) =====

ulong sym.qcedev_unmap_all_buffers(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *puVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar5 = 0x80014aa;
    }
    else {
        if ((*arg1 != 0) && (piVar8 = *(*arg1 + 0x150), piVar8 != NULL)) {
            if (*piVar8 != 0) {
                return 0xffffffff;
            }
            puVar1 = arg1 + 200;
            mutex_lock(arg1 + 0xd8);
            puVar6 = *puVar1;
            while (puVar6 != puVar1) {
                piVar7 = *puVar1;
                if (piVar7 != NULL) {
                    if (*piVar8 == 0) {
                        if (*arg1 + 0x140 != *(*arg1 + 0x140)) {
                            dma_buf_unmap_attachment(piVar7[5],piVar7[4],0);
                            dma_buf_detach(piVar7[6],piVar7[5]);
                            dma_buf_put(piVar7[6]);
                        }
                    }
                    else {
                        _printk(0x8000d0a,"");
                        _printk(0x8001260,"");
                    }
                }
                uVar4 = __list_del_entry_valid(piVar7);
                if ((uVar4 & 1) != 0) {
                    iVar2 = *piVar7;
                    piVar3 = piVar7[1];
                    *(iVar2 + 8) = piVar3;
                    *piVar3 = iVar2;
                }
                *piVar7 = -0x2152ffffffffff00;
                piVar7[1] = -0x2152fffffffffede;
                kfree(piVar7);
                puVar6 = *puVar1;
            }
            mutex_unlock(arg1 + 0xd8);
            return 0;
        }
        uVar5 = 0x800115c;
    }
    _printk(uVar5,"qcedev_unmap_all_buffers");
    return 0xffffffea;
}


// ===== sym.compat_qcedev_ioctl @ 0x080073e4 (size 144) =====

ulong sym.compat_qcedev_ioctl(ulong noname_0,int64_t arg1)

{
    int iVar1;
    
    iVar1 = arg1;
    if (iVar1 < -0x3eb778f6) {
        if ((iVar1 + 0x3f4778fdU < 7) && ((1 << (iVar1 + 0x3f4778fdU & 0x1f) & 0x4fU) != 0)) {
            return 0xfffffffffffffff2;
        }
        if (iVar1 != -0x3fbb78f5) {
            return 0xfffffffffffffdfd;
        }
    }
    else {
        if (iVar1 + 0x3e6f78ffU < 2) {
            return 0xfffffffffffffff2;
        }
        if (iVar1 != -0x3eb778f6) {
            return 0xfffffffffffffdfd;
        }
    }
    return 0xffffffffffffffea;
}

