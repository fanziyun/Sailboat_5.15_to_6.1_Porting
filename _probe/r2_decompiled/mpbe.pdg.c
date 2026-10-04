// decompiled from mpbe by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 940) =====

//WARNING: Switch with 1 destination removed at 0x08003ad4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x45589292826b679c) {
            if (arg1 < -0x5619cfc5467dbb37) {
                if (arg1 == -0x7f659ff9a5ec225f) {
                    pcVar2 = sym.lookup_tracepoints.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt;
                }
                else {
                    if (arg1 != -0x57ad53f76be3578d) goto code_r0x08003a94;
                    pcVar2 = sym.mpbe_seq_debug_stop.cfi_jt;
                }
            }
            else {
                if (arg1 != -0x5619cfc5467dbb37) {
                    if ((arg1 == -0x550b9e52359ac614) && ((pcVar1 + -0x80023e0 >> 3 | pcVar1 << 0x3d) < 2)) {
                        return;
                    }
                    goto code_r0x08003a94;
                }
                pcVar2 = sym.mpbe_seq_debug_start.cfi_jt;
            }
        }
        else if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x45589292826b679c) {
                pcVar2 = sym.mpbe_mictx_get_data.cfi_jt;
            }
            else {
                if (arg1 != -0x15d9fc765164399a) goto code_r0x08003a94;
                pcVar2 = sym.mpbe_trace_ufs_cmd.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8002438 >> 3 | pcVar1 << 0x3d) < 6) {
                    return;
                }
                goto code_r0x08003a94;
            }
            if (arg1 != -0x890743871a4a53) {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08003a94;
                pcVar2 = sym.init_module.cfi_jt;
                goto code_r0x0800221c;
            }
            pcVar2 = sym.mpbe_eara_ioctl.5794a837122c1c93504b539120499815.cfi_jt;
        }
    }
    else if (arg1 < 0x40472cb49204949c) {
        if (arg1 < 0x1ec70c297caa868a) {
            if (arg1 != 0x7ff5a213d37b1a6) {
                if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08003a94;
                pcVar2 = sym.mpbe_earaio_ctrl_sub_write.5794a837122c1c93504b539120499815.cfi_jt;
code_r0x0800221c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08003a94;
            }
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else if (arg1 == 0x1ec70c297caa868a) {
            pcVar2 = sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr;
        }
        else if (arg1 == 0x301714697a011648) {
            pcVar2 = sym.mpbe_ufs_clk_gating.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08003a94;
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x40472cb49204949c) {
            pcVar2 = sym.mpbe_seq_debug_next.cfi_jt;
        }
        else {
            if (arg1 != 0x4487b9a91e0823a5) goto code_r0x08003a94;
            pcVar2 = sym.mpbe_mictx_enable.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            if ((pcVar1 + -0x8002408 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08003a94;
        }
        if (arg1 == 0x70beb0eb50f46bb9) {
            pcVar2 = sym.__typeid__ZTSFtP15mpbe_mictx_datayE_global_addr;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08003a94;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003a94:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003ae8);
    (*pcVar1)();
}


// ===== sym.mpbe_seq_debug_start.cfi_jt @ 0x080023b8 (size 8) =====

bool sym.mpbe_seq_debug_start.cfi_jt(ulong param_1,int64_t *param_2)

{
    return *param_2 == 0;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080023c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080023c8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    proc_remove(_segment.ehdr);
    return;
}


// ===== sym.mpbe_seq_debug_next.cfi_jt @ 0x080023d0 (size 8) =====

bool sym.mpbe_seq_debug_next.cfi_jt(ulong param_1,ulong param_2,uint64_t *param_3)

{
    uint64_t uVar1;
    
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    return 0xfffffffffffffffe < uVar1;
}


// ===== sym.mpbe_seq_debug_stop.cfi_jt @ 0x080023d8 (size 8) =====

void sym.mpbe_seq_debug_stop.cfi_jt(void)

{
    return;
}


// ===== sym.mpbe_earaio_uevt_worker.5794a837122c1c93504b539120499815.cfi_jt @ 0x080023e0 (size 8) =====

uint64_t sym.mpbe_earaio_uevt_worker.5794a837122c1c93504b539120499815.cfi_jt(void)

{
    int64_t iVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong *puStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ushort uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_78 = &uStack_68;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    do {
        uVar7 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
        cVar3 = *0x800060a;
        cVar2 = *0x8000609;
        cVar4 = *0x8000609 != '\0';
        uVar8 = _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar7);
        if ((cVar3 == cVar2) || (uVar8 = snprintf(&uStack_68,10,"boost=%d",cVar4), uVar8 == 0)) break;
        iVar5 = kobject_uevent_env(CONCAT44(*0x8000004,_segment.ehdr),2,&puStack_78);
        if (iVar5 != 0) {
            _printk(0x800075e,&uStack_68,iVar5);
            cVar4 = *0x800060a;
        }
        *0x800060a = cVar4;
        uVar7 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
        cVar3 = *0x800060a;
        cVar2 = *0x8000609;
        uVar8 = _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar7);
    } while (cVar3 != cVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mpbe_earaio_init;
    _obj.earaio_obj = 0xff;
    *0x8000650 = "boost";
    uVar6 = misc_register();
    uVar8 = uVar6;
    if (uVar6 == 0) {
        uVar6 = kobject_uevent(CONCAT44(*0x8000004,_segment.ehdr),0);
        if (uVar6 == 0) {
            return 0;
        }
        uVar8 = uVar6;
        misc_deregister(obj.earaio_obj);
        _printk(0x8000b91,uVar8);
    }
    else {
        _printk(0x8000882,uVar8);
    }
    _segment.ehdr = 0;
    return uVar8;
}


// ===== sym.mpbe_ufs_work.dfdd96d099948463580d595c3bf4f651.cfi_jt @ 0x080023e8 (size 8) =====

void sym.mpbe_ufs_work.dfdd96d099948463580d595c3bf4f651.cfi_jt(void)

{
    int64_t arg1;
    int64_t iVar1;
    int64_t iVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr + 0x28;
    if ((_segment.ehdr != 0 && arg1 != 0) && (*(_segment.ehdr + 0x48) != 0)) {
        uVar12 = 0;
        iVar1 = _segment.ehdr + 0x30;
        iVar13 = 0x350;
        do {
            uVar4 = _raw_spin_lock_irqsave(iVar1);
            piVar5 = sym.mpbe_curr_trace(arg1);
            if (piVar5 == NULL) {
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                return;
            }
            piVar5[0x14] = 0;
            piVar5[0x15] = 0;
            piVar5[0x12] = 0;
            piVar5[0x13] = 0;
            piVar5[0x10] = 0;
            piVar5[0x11] = 0;
            piVar5[0xe] = 0;
            piVar5[0xf] = 0;
            piVar5[0xc] = 0;
            piVar5[0xd] = 0;
            piVar5[10] = 0;
            piVar5[0xb] = 0;
            piVar5[8] = 0;
            piVar5[9] = 0;
            piVar5[6] = 0;
            piVar5[7] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            *piVar5 = 0;
            piVar5[1] = 0;
            *(piVar5 + 0xe) = 2;
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            if (_segment.ehdr == 0) {
                iVar11 = 0;
            }
            else {
                iVar11 = *(_segment.ehdr + 0x40);
            }
            iVar2 = iVar11 + iVar13;
            iVar10 = iVar2 + -0x350;
            uVar4 = _raw_spin_lock_irqsave(iVar10);
            iVar6 = sched_clock();
            uVar8 = iVar6 - *(iVar2 + -0x340);
            if (uVar8 < 1000000000) {
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
            }
            else {
                *(iVar2 + -0x18) = uVar8;
                *(piVar5 + 0xc) = 0;
                *(piVar5 + 1) = uVar12;
                *piVar5 = iVar6;
                iVar6 = *(iVar2 + -0x330);
                *(iVar2 + -0x10) = iVar6;
                if (iVar6 * 100 < *(iVar2 + -0x18)) {
                    uVar7 = 1;
                }
                else {
                    uVar7 = 0;
                    uVar9 = *(iVar2 + -0x18);
                    if (uVar9 != 0) {
                        uVar7 = iVar6 / uVar9;
                    }
                }
                arg1_00 = iVar11 + iVar13;
                *(arg1_00 + -1) = uVar7;
                sym.mpbe_throughput_eval(arg1_00);
                sym.mpbe_vmstat_eval(piVar5 + 9);
                sym.mpbe_cpu_eval(piVar5 + 0xf);
                iVar6 = arg1_00[3];
                iVar11 = *arg1_00;
                iVar3 = arg1_00[1];
                piVar5[7] = arg1_00[2];
                piVar5[8] = iVar6;
                piVar5[5] = iVar11;
                piVar5[6] = iVar3;
                iVar11 = arg1_00[-1];
                iVar6 = arg1_00[-3];
                piVar5[3] = arg1_00[-2];
                piVar5[4] = iVar11;
                piVar5[2] = iVar6;
                *(iVar2 + -0x340) = *piVar5;
                arg1_00[-0x67] = 0;
                arg1_00[-0x66] = 0;
                arg1_00[2] = 0;
                arg1_00[3] = 0;
                *arg1_00 = 0;
                arg1_00[1] = 0;
                arg1_00[-2] = 0;
                arg1_00[-1] = 0;
                arg1_00[-3] = 0;
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
                uVar4 = _raw_spin_lock_irqsave(iVar1);
                if ((*(piVar5 + 0xe) >> 1 & 1) == 0) {
                    piVar5[0x14] = 0;
                    piVar5[0x15] = 0;
                    piVar5[0x12] = 0;
                    piVar5[0x13] = 0;
                    piVar5[0x10] = 0;
                    piVar5[0x11] = 0;
                    piVar5[0xe] = 0;
                    piVar5[0xf] = 0;
                    piVar5[0xc] = 0;
                    piVar5[0xd] = 0;
                    piVar5[10] = 0;
                    piVar5[0xb] = 0;
                    piVar5[8] = 0;
                    piVar5[9] = 0;
                    piVar5[6] = 0;
                    piVar5[7] = 0;
                    piVar5[4] = 0;
                    piVar5[5] = 0;
                    piVar5[2] = 0;
                    piVar5[3] = 0;
                    *piVar5 = 0;
                    piVar5[1] = 0;
                }
                else {
                    *(piVar5 + 0xe) = *(piVar5 + 0xe) | 1;
                    sym.mpbe_next_trace(arg1);
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
            }
            uVar12 = uVar12 + 1;
            iVar13 = iVar13 + 0x370;
        } while (uVar12 < *(_segment.ehdr + 0x48));
    }
    return;
}


// ===== sym.seq_read.cfi_jt @ 0x080023f0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.lookup_tracepoints.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x080023f8 (size 8) =====

void sym.lookup_tracepoints.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(void)

{
    return;
}


// ===== sym.mpbe_eara_ioctl.5794a837122c1c93504b539120499815.cfi_jt @ 0x08002400 (size 8) =====

ulong sym.mpbe_eara_ioctl.5794a837122c1c93504b539120499815.cfi_jt(ulong param_1,int param_2,int64_t param_3)

{
    uint uVar1;
    uint uVar2;
    uint16_t uVar3;
    ushort uVar4;
    uint16_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    if (param_2 == 0x406c6702) {
        iVar9 = sym.eara_ioctl_copy_from_user(0x406c6702,param_3);
        if (iVar9 != 0) {
            uVar10 = 0xfffffffffffffff2;
            goto code_r0x0800509c;
        }
        iVar7 = uStack_c8;
        mutex_lock(obj.eara_ioctl_lock);
        if (iVar7 == 0) {
            sym.mpbe_earaio_boost(0);
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050f0);
                (*pcVar6)();
            }
        }
        else {
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050e0);
                (*pcVar6)();
            }
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050e8);
                (*pcVar6)();
            }
            iVar7 = sym.mpbe_mictx_get_data(_segment.ehdr,&uStack_f8);
            if (iVar7 != 0) {
                sym.mpbe_mictx_enable(0x80005f0);
            }
        }
        mutex_unlock(obj.eara_ioctl_lock);
    }
    else {
        if (param_2 != 0x406c6701) {
            uVar10 = 0xffffffffffffffea;
            goto code_r0x0800509c;
        }
        mutex_lock(obj.eara_ioctl_lock);
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
        if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80050d8);
            (*pcVar6)();
        }
        iVar7 = sym.mpbe_mictx_get_data(_segment.ehdr,&uStack_f8);
        if (iVar7 != 0) {
            sym.mpbe_mictx_enable(0x80005f0);
        }
        uVar10 = uStack_d8;
        uVar3 = uStack_d0;
        uVar1 = uStack_e0;
        uVar2 = uStack_e0._4_4_;
        uVar4 = uStack_d0._2_2_;
        uVar5 = uStack_d0._4_2_;
        mutex_unlock(obj.eara_ioctl_lock);
        uStack_c8 = CONCAT24(uVar4,uVar3);
        uStack_c0 = uVar10;
        uStack_b8 = CONCAT44(uVar1,uVar5);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
        sym.eara_ioctl_copy_to_user(param_3);
    }
    uVar10 = 0;
code_r0x0800509c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    __stack_chk_fail(uVar10);
    return 0;
}


// ===== sym.mpbe_seq_main_show.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x08002408 (size 8) =====

ulong sym.mpbe_seq_main_show.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80008ca);
    }
    else {
        seq_printf(param_1,"[Trace]\n");
    }
    __rcu_read_lock();
    for (pcVar3 = _obj.mpbe_list; pcVar3 != obj.mpbe_list; pcVar3 = *pcVar3) {
        sym.mpbe_seq_debug_show_ringtrace(param_1,pcVar3);
    }
    __rcu_read_unlock();
    if (param_1 == 0) {
        _printk(0x8000c36);
    }
    else {
        seq_printf(param_1,"[Info]\n");
    }
    __rcu_read_lock();
    pcVar3 = _obj.mpbe_list;
    if (_obj.mpbe_list != obj.mpbe_list) {
        do {
            if (**(pcVar3 + 0x78) != 0) {
                if (param_1 == 0) {
                    _printk(0x8000c40,pcVar3 + 0x10);
                }
                else {
                    seq_printf(param_1,"");
                }
                pcVar2 = **(pcVar3 + 0x78);
                if (pcVar2 != sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr) {
                    __cfi_slowpath_diag(0x1ec70c297caa868a,pcVar2,0x8000630);
                }
                (*pcVar2)(0,0,param_1);
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.mpbe_list);
    }
    __rcu_read_unlock();
    if (param_1 == 0) {
        _printk(0x8000bbf);
    }
    else {
        seq_printf(param_1,"[Memory Usage]\n");
    }
    __rcu_read_lock();
    if (_obj.mpbe_list == obj.mpbe_list) {
        uVar4 = 0;
        __rcu_read_unlock();
    }
    else {
        iVar5 = 0;
        pcVar3 = _obj.mpbe_list;
        do {
            iVar1 = sym.mpbe_seq_sub_show_usedmem(param_1,pcVar3);
            iVar5 = iVar1 + iVar5;
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.mpbe_list);
        uVar4 = iVar5 + 0x60U >> 10;
        __rcu_read_unlock();
    }
    if (param_1 == 0) {
        _printk(0x8000c8e,0x60);
        _printk(0x8000b5e);
        _printk(0x800070f,uVar4);
    }
    else {
        seq_printf(param_1,"earaio control unit: %lu bytes\n",0x60);
        seq_printf(param_1,"--------------------------------\n");
        seq_printf(param_1,"Total: %zu KB\n",uVar4);
    }
    return 0;
}


// ===== sym.mpbe_eara_ioctl_show.5794a837122c1c93504b539120499815.cfi_jt @ 0x08002410 (size 8) =====

ulong sym.mpbe_eara_ioctl_show.5794a837122c1c93504b539120499815.cfi_jt(void)

{
    return 0;
}


// ===== sym.mpbe_earaio_ctrl_sub_show.5794a837122c1c93504b539120499815.cfi_jt @ 0x08002418 (size 8) =====

int64_t sym.mpbe_earaio_ctrl_sub_show.5794a837122c1c93504b539120499815.cfi_jt(ulong param_1)

{
    char *pcVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = *0x8001070;
    uStack_40 = *0x8001078;
    iVar6 = sym.mpbe_find_by_type(_segment.ehdr);
    if (iVar6 != 0) {
        strncpy(&uStack_48,iVar6 + 0x10,0xf);
    }
    seq_puts(param_1,"<MPBE Control Unit>\n");
    seq_printf(param_1,"Monitor Storage Type: %s\n",&uStack_48);
    seq_puts(param_1,"Status:\n");
    pcVar1 = "Disable";
    if (*0x80005ec != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(param_1,"  MPBE Control     : %s\n",pcVar1);
    pcVar1 = "Disable";
    if (*0x80005ed != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(param_1,"  MPBE DebugLog    : %s\n",pcVar1);
    seq_puts(param_1,"Commands: echo n > ctrl, n presents\n");
    seq_puts(param_1,"  Disable MPBE QoS     : 0\n");
    seq_puts(param_1,"  Enable MPBE QoS      : 1\n");
    seq_puts(param_1,"  Disable MPBE Log     : 2\n");
    seq_puts(param_1,"  Enable MPBE Log      : 3\n");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar9 = __stack_chk_fail();
    uVar7 = auVar9._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar8 = uVar7 & uVar4;
    }
    bVar5 = 0xfffffffffffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar2 = 0;
    if (!bVar5 || uVar8 == 0) {
        uVar2 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar8 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar8,~uVar2) || CARRY8(uVar8 + ~uVar2,bVar5)) && uVar8 != uVar2 + !bVar5) {
        iVar6 = 1;
    }
    else {
        if ((_strcmp >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        iVar6 = __arch_copy_from_user(auVar9._0_8_,uVar7,1);
        if ((_strcmp >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
        if (iVar6 == 0) {
            return 0;
        }
    }
    memset((auVar9._0_8_ - iVar6) + 1,0,iVar6);
    return iVar6;
}


// ===== sym.mpbe_seq_sub_show.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x08002420 (size 8) =====

ulong sym.mpbe_seq_sub_show.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(param_1 + 0x80);
    if (arg2 != 0) {
        sym.mpbe_seq_debug_show_ringtrace(param_1,arg2);
        if (**(arg2 + 0x78) != 0) {
            seq_printf(param_1,"",arg2 + 0x10);
            pcVar1 = **(arg2 + 0x78);
            if (pcVar1 != sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr) {
                __cfi_slowpath_diag(0x1ec70c297caa868a,pcVar1,0x8000610);
            }
            (*pcVar1)(0,0,param_1);
        }
        sym.mpbe_seq_sub_show_usedmem(param_1,arg2);
    }
    return 0;
}


// ===== sym.mpbe_mictx_get_data.cfi_jt @ 0x08002428 (size 8) =====

void sym.mpbe_mictx_get_data.cfi_jt(uint64_t param_1,uint64_t *param_2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int16_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ushort uVar8;
    code *pcVar9;
    uint64_t extraout_x8;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t unaff_x20;
    uint32_t uVar14;
    ulong *puVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    iVar5 = sched_clock();
    if ((param_2 != NULL) && (iVar6 = sym.mpbe_find_by_type(param_1 & 0xffffffff), unaff_x20 = iVar5, iVar6 != 0)) {
        __rcu_read_lock();
        for (piVar16 = *(iVar6 + 0x50); piVar16 != iVar6 + 0x50; piVar16 = *piVar16) {
            if (*(piVar16 + 3) == (param_1 >> 0x20 & 0xff)) {
                if (piVar16 != NULL) {
                    param_2[4] = 0;
                    param_2[5] = 0;
                    param_2[2] = 0;
                    param_2[3] = 0;
                    *param_2 = 0;
                    param_2[1] = 0;
                    if (*(iVar6 + 0x48) == 0) {
                        iStack_110 = 0;
                        uStack_108 = 0;
                    }
                    else {
                        uVar14 = 0;
                        iStack_110 = 0;
                        uStack_108 = 0;
                        do {
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_90 = 0;
                            uStack_88 = 0;
                            iStack_a0 = 0;
                            uStack_98 = 0;
                            uStack_b0 = 0;
                            iStack_a8 = 0;
                            uStack_c0 = 0;
                            uStack_b8 = 0;
                            uStack_d0 = 0;
                            uStack_c8 = 0;
                            uStack_e0 = 0;
                            uStack_d8 = 0;
                            uStack_f0 = 0;
                            uStack_e8 = 0;
                            uStack_100 = 0;
                            uStack_f8 = 0;
                            puVar15 = piVar16[2] + uVar14 * 0x90;
                            uVar7 = _raw_spin_lock_irqsave(puVar15 + 0x8c);
                            memcpy(&uStack_100,puVar15,0x90);
                            *puVar15 = 0;
                            puVar15[1] = 0;
                            puVar15[2] = 0;
                            puVar15[3] = 0;
                            puVar15[4] = 0;
                            puVar15[5] = 0;
                            iVar1 = iVar5;
                            if (*(puVar15 + 0x11) != 0) {
                                iVar1 = 0;
                            }
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            puVar15[8] = 0;
                            puVar15[9] = 0;
                            puVar15[10] = iVar5;
                            puVar15[0xb] = 0;
                            puVar15[0xc] = 0;
                            puVar15[0xd] = iVar1;
                            puVar15[0xe] = 0;
                            puVar15[0xf] = 0;
                            _raw_spin_unlock_irqrestore(puVar15 + 0x8c,uVar7);
                            uVar10 = 0;
                            if ((uStack_f8 != 0) && (999999 < uStack_100)) {
                                uVar12 = uStack_100 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_f8 / uVar12;
                                }
                                uVar10 = uVar10 * 1000 >> 10;
                            }
                            uVar12 = 0;
                            *(param_2 + 1) = param_2[1] + uVar10;
                            if ((uStack_e8 != 0) && (999999 < uStack_f0)) {
                                uVar12 = uStack_f0 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_e8 / uVar12;
                                }
                                uVar12 = uVar10 * 1000 >> 10;
                            }
                            uVar10 = 0;
                            uVar13 = iStack_a0 - iStack_a8;
                            *(param_2 + 0xc) = *(param_2 + 0xc) + uVar12;
                            if ((uStack_f8 != 0) && (999999 < uVar13)) {
                                uVar12 = uVar13 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_f8 / uVar12;
                                }
                                uVar10 = uVar10 * 1000 >> 10;
                            }
                            uVar12 = 0;
                            *(param_2 + 2) = param_2[2] + uVar10;
                            if ((uStack_e8 != 0) && (999999 < uVar13)) {
                                uVar12 = uVar13 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_e8 / uVar12;
                                }
                                uVar12 = uVar10 * 1000 >> 10;
                            }
                            *(param_2 + 0x14) = *(param_2 + 0x14) + uVar12;
                            *(param_2 + 3) = param_2[3] + uStack_d8;
                            *(param_2 + 4) = param_2[4] + uStack_e0;
                            *(param_2 + 0x24) = *(param_2 + 0x24) + uStack_c8;
                            *(param_2 + 0x1c) = *(param_2 + 0x1c) + uStack_c0;
                            if (uStack_d8 != 0 || uStack_c0 != 0) {
                                uStack_d8 = uStack_d8 >> 0xc;
                                uStack_c0 = uStack_c0 >> 0xc;
                                uStack_108 = uStack_d8 + uStack_108 + uStack_c0;
                                uStack_d0 = uStack_d0 >> 0xc;
                                uStack_b8 = uStack_b8 >> 0xc;
                                iStack_110 = uStack_d0 + iStack_110 + uStack_b8;
                            }
                            pcVar9 = *(*(iVar6 + 0x78) + 8);
                            if (pcVar9 == NULL) {
                                iVar4 = uStack_78;
                            }
                            else {
                                if (pcVar9 != sym.__typeid__ZTSFtP15mpbe_mictx_datayE_global_addr) {
                                    __cfi_slowpath_diag(0x70beb0eb50f46bb9,pcVar9,0x8000650);
                                }
                                iVar4 = (*pcVar9)(&uStack_100,iVar5);
                            }
                            uVar14 = uVar14 + 1;
                            *(param_2 + 0x2c) = *(param_2 + 0x2c) + iVar4;
                        } while (uVar14 < *(iVar6 + 0x48));
                    }
                    __rcu_read_unlock();
                    if (_obj.ufs_idle_begin == 0) {
                        uVar13 = 0;
                        goto code_r0x08004598;
                    }
                    uVar13 = _obj.ufs_idle_total + (iVar5 - _obj.ufs_idle_begin);
                    iVar6 = _obj.ufs_idle_begin;
                    goto code_r0x08004614;
                }
                break;
            }
        }
        __rcu_read_unlock();
    }
    uVar7 = 0xffffffff;
    iVar5 = unaff_x20;
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail(uVar7);
        iVar6 = extraout_x1;
        uVar13 = extraout_x8;
code_r0x08004614:
        Hint_Prefetch(0x80005d0,2,0,1);
        do {
            if (_obj.ufs_idle_begin != iVar6) goto code_r0x08004598;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(0x80005d0,0x10);
            if (bVar3) {
                cVar2 = ExclusiveMonitorsStatus();
                _obj.ufs_idle_begin = iVar5;
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08004598:
        uVar11 = iVar5 - _obj.ufs_win_begin;
        if (uVar11 < uVar13) {
            iVar4 = 0;
        }
        else {
            iVar4 = 0;
            if (uVar11 != 0) {
                iVar4 = (uVar13 * 100) / uVar11;
            }
            iVar4 = 100 - iVar4;
        }
        *(param_2 + 5) = iVar4;
        *param_2 = uVar11;
        if (uStack_108 == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = 0;
            if (uStack_108 != 0) {
                uVar8 = (iStack_110 * 100) / uStack_108;
            }
        }
        uVar7 = 0;
        *(param_2 + 0x2a) = uVar8;
        _segment.ehdr = iVar5;
    } while( true );
}


// ===== sym.__typeid__ZTSFtP15mpbe_mictx_datayE_global_addr @ 0x08002430 (size 8) =====

uint64_t sym.__typeid__ZTSFtP15mpbe_mictx_datayE_global_addr(int64_t param_1,int64_t param_2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = param_2 - *(param_1 + 0x50);
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = (*(param_1 + 0x78) + ~*(param_1 + 0x80) + *(param_1 + 0x88) * param_2 + uVar2) / uVar2;
    }
    return uVar1;
}


// ===== sym.seq_release.cfi_jt @ 0x08002438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mpbe_eara_ioctl_open.5794a837122c1c93504b539120499815.cfi_jt @ 0x08002440 (size 8) =====

void sym.mpbe_eara_ioctl_open.5794a837122c1c93504b539120499815.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.mpbe_eara_ioctl_show.5794a837122c1c93504b539120499815.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08002448 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.mpbe_earaio_ctrl_sub_open.5794a837122c1c93504b539120499815.cfi_jt @ 0x08002450 (size 8) =====

void sym.mpbe_earaio_ctrl_sub_open.5794a837122c1c93504b539120499815.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_open(param_2,reloc.mpbe_seq_debug_start.cfi_jt);
    return;
}


// ===== sym.mpbe_main_open.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x08002458 (size 8) =====

void sym.mpbe_main_open.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_open(param_2,obj.mpbe_seq_main_ops);
    return;
}


// ===== sym.mpbe_sub_open.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x08002460 (size 8) =====

int sym.mpbe_sub_open.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = seq_open(param_2,obj.mpbe_seq_sub_ops);
    if (((iVar1 == 0) && (iVar4 = *(param_1 + 0x150), iVar4 != 0xb0)) && (*(iVar4 + -0x98) != 0)) {
        iVar3 = *(param_2 + 0xd8);
        _printk(0x8000861,"mpbe_sub_open",*(*(iVar4 + -0x98) + 0x28),*(iVar4 + -0x88));
        uVar2 = sym.mpbe_find_by_name(*(*(iVar4 + -0x98) + 0x28));
        *(iVar3 + 0x80) = uVar2;
    }
    return iVar1;
}


// ===== sym.init_module.cfi_jt @ 0x08002468 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    if (uVar1 == 0) {
        _segment.ehdr = proc_mkdir("mpbe",0);
        iVar2 = proc_create("trace",0x8124,_segment.ehdr,obj.mpbe_main_fops);
        if (iVar2 == 0) {
            _printk(0x80006c4,"mpbe_init_procfs");
        }
        else {
            proc_set_user(iVar2,0,0x3e9);
        }
    }
    sym.mpbe_ufs_init();
    sym.mpbe_earaio_init();
    for_each_kernel_tracepoint(sym.lookup_tracepoints.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt,0);
    return 0;
}


// ===== sym.mpbe_ufs_exit.cfi_jt @ 0x08002470 (size 8) =====

ulong sym.mpbe_ufs_exit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mpbe_free(_segment.ehdr);
    return 0;
}


// ===== sym.mpbe_ufs_init.cfi_jt @ 0x08002478 (size 8) =====

ulong sym.mpbe_ufs_init.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000600 = 0x101;
    _segment.ehdr = alloc_workqueue("ufs_mpbe",6,1);
    _obj.ufs_mpbe_worker = 0xfffffffe0;
    *0x80006b0 = 0x80006b0;
    *0x80006b8 = 0x80006b0;
    *0x80006c0 = sym.mpbe_ufs_work.dfdd96d099948463580d595c3bf4f651.cfi_jt;
    iVar2 = sym.mpbe_alloc(0x800080f,0,0x78,0x370);
    iVar1 = _segment.ehdr;
    if (iVar2 != 0) {
        iVar6 = *(iVar2 + 0x40);
        uVar3 = sched_clock();
        iVar1 = iVar2;
        if ((iVar6 != 0) && (memset(iVar6,0,*(iVar2 + 0x48) * 0x370), *(iVar2 + 0x48) != 0)) {
            uVar4 = 0;
            do {
                puVar5 = iVar6 + uVar4 * 0x370;
                uVar4 = uVar4 + 1;
                *puVar5 = 0;
                *(puVar5 + 4) = uVar3;
            } while (uVar4 < *(iVar2 + 0x48));
        }
    }
    _segment.ehdr = iVar1;
    return 0;
}


// ===== sym.mpbe_mictx_enable.cfi_jt @ 0x08002480 (size 8) =====

void sym.mpbe_mictx_enable.cfi_jt(uint32_t *param_1,uint64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uchar uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *param_1;
    if ((param_2 & 1) == 0) {
        iVar2 = sym.mpbe_find_by_type(uVar7);
        if (iVar2 == 0) {
            return;
        }
        iVar4 = iVar2 + 0x60;
        uVar1 = _raw_spin_lock_irqsave(iVar4);
        piVar3 = iVar2 + 0x50;
        piVar9 = *piVar3;
        if (piVar9 != piVar3) {
            do {
                if (piVar9[3] == param_1[1]) {
                    uVar5 = __list_del_entry_valid(piVar9);
                    if ((uVar5 & 1) != 0) {
                        iVar8 = *piVar9;
                        piVar3 = piVar9[1];
                        *(iVar8 + 8) = piVar3;
                        *piVar3 = iVar8;
                    }
                    piVar9[1] = -0x2152fffffffffede;
                    *(iVar2 + 100) = *(iVar2 + 100) + -1;
                    _raw_spin_unlock_irqrestore(iVar4,uVar1);
                    synchronize_rcu();
                    kfree(piVar9[2]);
                    kfree(piVar9);
                    return;
                }
                piVar9 = *piVar9;
            } while (piVar9 != piVar3);
        }
        _raw_spin_unlock_irqrestore(iVar4,uVar1);
        return;
    }
    uVar1 = sched_clock();
    iVar2 = sym.mpbe_find_by_type(uVar7);
    if (iVar2 != 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xd40,0x20);
        if (piVar3 != NULL) {
            iVar4 = __kmalloc(*(iVar2 + 0x48) * 0x90,0xd40);
            if (iVar4 != 0) {
                if (*(iVar2 + 0x48) != 0) {
                    uVar7 = 0;
                    do {
                        iVar8 = iVar4 + uVar7 * 0x90;
                        uVar7 = uVar7 + 1;
                        *(iVar8 + 0x50) = uVar1;
                        *(iVar8 + 0x8c) = 0;
                    } while (uVar7 < *(iVar2 + 0x48));
                }
                piVar3[2] = iVar4;
                uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x60);
                *(piVar3 + 3) = *(iVar2 + 0x66);
                puVar10 = *(iVar2 + 0x58);
                *(iVar2 + 100) = *(iVar2 + 100) + 1;
                *(iVar2 + 0x66) = *(iVar2 + 0x66) + 1;
                uVar5 = __list_add_valid(piVar3,puVar10,iVar2 + 0x50);
                if ((uVar5 & 1) != 0) {
                    *piVar3 = iVar2 + 0x50;
                    piVar3[1] = puVar10;
                    *puVar10 = piVar3;
                    *(iVar2 + 0x58) = piVar3;
                }
                _raw_spin_unlock_irqrestore(iVar2 + 0x60,uVar1);
                uVar6 = piVar3[3];
                goto code_r0x08004960;
            }
            kfree(piVar3);
        }
    }
    uVar6 = 0xff;
code_r0x08004960:
    *(param_1 + 1) = uVar6;
    return;
}


// ===== sym.mpbe_ufs_clk_gating.cfi_jt @ 0x08002488 (size 8) =====

void sym.mpbe_ufs_clk_gating.cfi_jt(void)

{
    return;
}


// ===== sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr @ 0x08002490 (size 8) =====

ulong sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr(void)

{
    return 0;
}


// ===== sym.mpbe_trace_ufs_cmd.cfi_jt @ 0x08002498 (size 8) =====

ulong sym.mpbe_trace_ufs_cmd.cfi_jt(int64_t param_1,int64_t param_2,uint64_t param_3)

{
    uint16_t *puVar1;
    int16_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    int16_t iVar7;
    uint16_t uVar8;
    bool bVar9;
    int iVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    ulong *in_x18;
    uint64_t uVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80005ec == '\0') {
        return 1;
    }
    if (param_2 == 0) {
        return 0;
    }
    if (*(param_2 + 0x40) == 0) {
        return 0;
    }
    bVar9 = true;
    uVar6 = **(*(param_2 + 0x40) + 0x110);
    if (uVar6 < 0x2b) {
        if ((1L << (uVar6 & 0x3f) & 0x50000000500U) == 0) {
            if (uVar6 == 0) {
                return 0;
            }
            goto code_r0x08005b90;
        }
    }
    else {
code_r0x08005b90:
        if ((uVar6 != 0x88) && (uVar6 != 0x8a)) {
            bVar9 = false;
        }
    }
    iVar10 = _find_first_bit(param_1 + 0xd0,*(param_1 + 0xdc));
    iVar3 = *(param_1 + 0xdc);
    if (!bVar9) {
        return 0;
    }
    uVar4 = *(param_2 + 0x5c);
    uVar17 = uVar4;
    if ((param_3 & 1) == 0) {
        if ((_segment.ehdr == 0) || (iVar19 = *(_segment.ehdr + 0x40), iVar19 == 0)) goto code_r0x08005cf8;
        uVar21 = uVar4 >> 5 & 0x7ff;
        if (*(_segment.ehdr + 0x48) <= uVar21) goto code_r0x08005ba8;
        iVar18 = iVar19 + uVar21 * 0x370;
        if (iVar18 == 0) goto code_r0x08005cf8;
        uVar17 = uVar17 & 0x1f;
        piVar2 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x38;
        if (piVar2 == NULL) goto code_r0x08005cf8;
        iVar20 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18;
        piVar15 = iVar20 + 0x40;
        if (*piVar15 == 0) goto code_r0x08005cf8;
        uVar11 = _raw_spin_lock_irqsave();
        iVar12 = sched_clock();
        iVar7 = *piVar2;
        piVar16 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x48;
        *piVar16 = iVar12;
        switch(iVar7) {
        case 9:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
code_r0x08005c68:
            iVar12 = iVar19 + uVar21 * 0x370;
            *(iVar12 + 0x34c) = *(iVar12 + 0x34c) + 1;
            break;
        case 10:
        case 0x2a:
code_r0x08005bd8:
            iVar13 = 1;
            piVar14 = iVar19 + uVar21 * 0x370 + 0x360;
            goto code_r0x08005c00;
        default:
            if (iVar7 != 0x88) {
                if (iVar7 == 0x8a) goto code_r0x08005bd8;
                goto code_r0x08005c68;
            }
        case 8:
        case 0x28:
            iVar13 = 0;
            piVar14 = iVar19 + uVar21 * 0x370 + 0x350;
code_r0x08005c00:
            iVar23 = iVar19 + uVar21 * 0x370;
            iVar22 = *piVar15;
            *(iVar23 + 0x34c) = *(iVar23 + 0x34c) + 1;
            if (piVar14 != NULL) {
                uVar8 = *(iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x3a);
                *piVar14 = *piVar14 + (iVar12 - iVar22);
                iVar23 = _segment.ehdr;
                *(piVar14 + 1) = piVar14[1] + uVar8 * 0x1000;
                sym.mpbe_mictx_eval_tp(iVar23,uVar4 >> 5 & 0x7ff,iVar13,iVar12 - iVar22);
            }
        }
        iVar19 = iVar19 + uVar21 * 0x370;
        iVar12 = *(iVar19 + 0x28) - *piVar15;
        puVar1 = iVar19 + 0x30;
        *(iVar19 + 0x28) = iVar12;
        if (iVar10 < iVar3) {
            uVar17 = *puVar1 - 1;
            *puVar1 = *puVar1 - 1;
        }
        else {
            uVar17 = 0;
            *puVar1 = 0;
        }
        uVar4 = uVar4 >> 5 & 0x7ff;
        sym.mpbe_mictx_update(_segment.ehdr,uVar4,uVar17,iVar12);
        sym.mpbe_mictx_accumulate_weight_qd(_segment.ehdr,uVar4,*piVar15,*piVar16);
        *piVar15 = 0;
        *(iVar20 + 0x48) = 0;
    }
    else {
        iVar19 = *(param_2 + 0x40);
        if (((iVar19 == 0) || (_segment.ehdr == 0)) || (iVar20 = *(_segment.ehdr + 0x40), iVar20 == 0))
        goto code_r0x08005cf8;
        uVar21 = uVar4 >> 5 & 0x7ff;
        if (*(_segment.ehdr + 0x48) <= uVar21) {
code_r0x08005ba8:
            _printk(0x80008a9,"mpbe_ufs_curr_ctx",uVar17 & 0xffff);
            goto code_r0x08005cf8;
        }
        iVar18 = iVar20 + uVar21 * 0x370;
        if (iVar18 == 0) goto code_r0x08005cf8;
        puVar1 = iVar20 + uVar21 * 0x370 + (uVar17 & 0x1f) * 0x18 + 0x38;
        if (puVar1 == NULL) goto code_r0x08005cf8;
        if (iVar19 + -0x130 != 0) {
            sym.mpbe_commit_req(uVar17,iVar19 + -0x130);
        }
        iVar23 = iVar20 + uVar21 * 0x370;
        uVar5 = *(*(iVar19 + 0x110) + 2);
        iVar22 = iVar23 + (uVar17 & 0x1f) * 0x18;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        *(iVar22 + 0x3c) = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar8 = *(*(iVar19 + 0x110) + 7);
        *(iVar22 + 0x3a) = uVar8 >> 8 | uVar8 << 8;
        *puVar1 = **(iVar19 + 0x110);
        uVar11 = _raw_spin_lock_irqsave(iVar18);
        iVar12 = sched_clock();
        iVar13 = *(iVar23 + 0x10);
        iVar19 = *(iVar23 + 0x28);
        *(iVar22 + 0x40) = iVar12;
        *(iVar22 + 0x48) = 0;
        iVar19 = iVar19 + iVar12;
        *(iVar23 + 0x28) = iVar19;
        if (iVar13 == 0) {
            *(iVar23 + 0x10) = iVar12;
        }
        iVar20 = iVar20 + uVar21 * 0x370;
        uVar8 = *(iVar20 + 0x30) + 1;
        *(iVar20 + 0x30) = uVar8;
        sym.mpbe_mictx_update(_segment.ehdr,uVar4 >> 5 & 0x7ff,uVar8,iVar19);
    }
    _raw_spin_unlock_irqrestore(iVar18,uVar11);
code_r0x08005cf8:
    sym.mpbe_ufs_rq_check(*(param_2 + 0x5c),iVar10 < iVar3);
    return 0;
}


// ===== sym.mpbe_earaio_ctrl_sub_write.5794a837122c1c93504b539120499815.cfi_jt @ 0x080024a0 (size 8) =====

int64_t sym.mpbe_earaio_ctrl_sub_write.5794a837122c1c93504b539120499815.cfi_jt
                  (ulong param_1,int64_t param_2,int64_t param_3)

{
    char *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    acStack_2c[0] = '\0';
    if ((param_3 != 0) && (iVar7 = sym._copy_from_user(acStack_2c,param_2), -1 < iVar7)) {
        if (acStack_2c[0] == '0') {
            sym.mpbe_earaio_boost(0);
            *0x80005ec = '\0';
            _printk(0x8000a06);
            iVar11 = 1;
            goto code_r0x08005464;
        }
        if (acStack_2c[0] == '1') {
            iVar11 = 1;
            *0x80005ec = '\x01';
            _printk(0x8000c72);
            goto code_r0x08005464;
        }
        _printk(0x8000e17);
    }
    iVar11 = -1;
code_r0x08005464:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar11;
    }
    uVar8 = __stack_chk_fail();
    *extraout_x18 = sym.mpbe_earaio_ctrl_sub_show;
    pcStack_58 = sym.mpbe_earaio_ctrl_sub_show;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_78 = *0x8001070;
    uStack_70 = *0x8001078;
    puStack_60 = &stack0xffffffffffffffe0;
    iVar11 = sym.mpbe_find_by_type(_segment.ehdr);
    if (iVar11 != 0) {
        strncpy(&uStack_78,iVar11 + 0x10,0xf);
    }
    seq_puts(uVar8,"<MPBE Control Unit>\n");
    seq_printf(uVar8,"Monitor Storage Type: %s\n",&uStack_78);
    seq_puts(uVar8,"Status:\n");
    pcVar1 = "Disable";
    if (*0x80005ec != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(uVar8,"  MPBE Control     : %s\n",pcVar1);
    pcVar1 = "Disable";
    if (*0x80005ed != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(uVar8,"  MPBE DebugLog    : %s\n",pcVar1);
    seq_puts(uVar8,"Commands: echo n > ctrl, n presents\n");
    seq_puts(uVar8,"  Disable MPBE QoS     : 0\n");
    seq_puts(uVar8,"  Enable MPBE QoS      : 1\n");
    seq_puts(uVar8,"  Disable MPBE Log     : 2\n");
    seq_puts(uVar8,"  Enable MPBE Log      : 3\n");
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        auVar12 = __stack_chk_fail();
        uVar9 = auVar12._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar4 = sp_el0;
        uVar5 = (uVar9 << 8) >> 8;
        if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar9, (*puVar4 >> 0x1a & 1) != 0)) {
            uVar10 = uVar9 & uVar5;
        }
        bVar6 = 0xfffffffffffffffe < uVar10;
        uVar10 = uVar10 + 1;
        uVar2 = 0;
        if (!bVar6 || uVar10 == 0) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar6) {
            uVar10 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar10,~uVar2) || CARRY8(uVar10 + ~uVar2,bVar6)) && uVar10 != uVar2 + !bVar6) {
            iVar11 = 1;
        }
        else {
            if ((_strcmp >> 0x18 & 1) == 0) {
                uVar10 = daif;
                if ((uVar10 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar4[1];
                InstructionSynchronizationBarrier();
                daif = uVar10;
            }
            if ((uVar9 & uVar5 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            iVar11 = __arch_copy_from_user(auVar12._0_8_,uVar9,1);
            if ((_strcmp >> 0x18 & 1) == 0) {
                uVar5 = daif;
                if ((uVar5 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar5;
            }
            if (iVar11 == 0) {
                return 0;
            }
        }
        memset((auVar12._0_8_ - iVar11) + 1,0,iVar11);
        return iVar11;
    }
    return 0;
}


// ===== sym.mpbe_main_write.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x080024a8 (size 8) =====

ulong sym.mpbe_main_write.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    pcVar2 = _obj.mpbe_list;
    if (_obj.mpbe_list != obj.mpbe_list) {
        do {
            uVar1 = _raw_spin_lock_irqsave(pcVar2 + 0x30);
            memset(*(pcVar2 + 0x28),0,*(pcVar2 + 0x38) * 0xb0);
            *(pcVar2 + 0x34) = 0;
            _raw_spin_unlock_irqrestore(pcVar2 + 0x30,uVar1);
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.mpbe_list);
    }
    __rcu_read_unlock();
    return param_3;
}


// ===== sym.mpbe_sub_write.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt @ 0x080024b0 (size 8) =====

ulong sym.mpbe_sub_write.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0xd8) != 0) && (iVar2 = *(*(param_1 + 0xd8) + 0x80), iVar2 != 0)) {
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x30);
        memset(*(iVar2 + 0x28),0,*(iVar2 + 0x38) * 0xb0);
        *(iVar2 + 0x34) = 0;
        _raw_spin_unlock_irqrestore(iVar2 + 0x30,uVar1);
    }
    return param_3;
}


// ===== sym.mpbe_find_by_type @ 0x080024b8 (size 104) =====

code * sym.mpbe_find_by_type(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (pcVar1 = _obj.mpbe_list; pcVar1 != obj.mpbe_list; pcVar1 = *pcVar1) {
        if (*(pcVar1 + 0x20) == arg1) goto code_r0x08002504;
    }
    pcVar1 = NULL;
code_r0x08002504:
    __rcu_read_unlock();
    return pcVar1;
}


// ===== sym.mpbe_commit_req @ 0x08002528 (size 552) =====

void sym.mpbe_commit_req(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    bool bVar7;
    int iVar8;
    int *piVar9;
    ulong *in_x18;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    uint32_t uVar16;
    int iVar17;
    int iVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar14 = *(arg2 + 0x38);
    if ((((piVar14 != NULL) && ((*(piVar14 + 2) & 0xfe) == 0)) && (piVar9 = *(piVar14[1] + 0x3f0), piVar9 != NULL)) &&
       (uVar4 = (piVar9[1] | *piVar9 << 0x14) >> 0x14, uVar4 == 0x103 || uVar4 == 8)) {
        uVar10 = 0;
        uVar11 = 0;
        iVar6 = sp_el0;
        piVar15 = piVar14;
        do {
            uVar16 = *(piVar15 + 5);
            if (uVar16 != 0) {
                uVar12 = *(piVar15 + 0x2c);
                iVar18 = piVar15[6];
                do {
                    piVar1 = piVar15[0xf] + uVar12 * 0x10;
                    uVar2 = *(piVar1 + 0xc) + iVar18;
                    uVar5 = piVar1[1] - iVar18;
                    uVar3 = uVar16;
                    if (uVar5 <= uVar16) {
                        uVar3 = uVar5;
                    }
                    uVar5 = 0x1000 - (uVar2 & 0xfff);
                    if (uVar5 <= uVar3) {
                        uVar3 = uVar5;
                    }
                    if (*piVar1 + (uVar2 >> 0xc) * 0x40 != 0) {
                        iVar17 = *(iVar6 + 0x5d8);
                        __rcu_read_lock();
                        iVar13 = ***(iVar6 + 0x978);
                        __rcu_read_unlock();
                        if ((*(*(iVar13 + 0x118) + 0x10) == 0) || (iVar8 = strcmp("top-app"), iVar8 != 0)) {
                            if ((*(iVar6 + 0x5dc) != 0) && (*(iVar6 + 0x5dc) != *(iVar6 + 0x5d8))) {
                                __rcu_read_lock();
                                iVar13 = find_task_by_vpid(*(iVar6 + 0x5dc));
                                __rcu_read_unlock();
                                if (iVar13 != 0) {
                                    __rcu_read_lock();
                                    iVar13 = ***(iVar13 + 0x978);
                                    __rcu_read_unlock();
                                    if ((*(*(iVar13 + 0x118) + 0x10) != 0) && (iVar8 = strcmp("top-app"), iVar8 == 0))
                                    goto code_r0x080026e4;
                                }
                            }
                        }
                        else {
code_r0x080026e4:
                            iVar17 = -iVar17;
                        }
                        uVar11 = uVar3 + uVar11;
                        uVar10 = (uVar3 & (iVar17 << 0x10) >> 0x1f) + uVar10;
                    }
                    if ((9 < *(piVar15 + 2)) || ((1 << (*(piVar15 + 2) & 0x1f) & 0x2a8U) == 0)) {
                        iVar17 = uVar3 + iVar18;
                        bVar7 = iVar17 == *(piVar15[0xf] + uVar12 * 0x10 + 8);
                        if (bVar7) {
                            uVar12 = uVar12 + 1;
                        }
                        iVar18 = 0;
                        if (!bVar7) {
                            iVar18 = iVar17;
                        }
                    }
                    uVar16 = uVar16 - uVar3;
                } while (uVar16 != 0);
            }
            piVar15 = *piVar15;
        } while (piVar15 != NULL);
        if ((uVar4 == 0x103) || (uVar4 == 8)) {
            sym.mpbe_trace_add_ufs(arg1 & 0xffffffff,*(piVar14 + 2) & 1,uVar11,uVar10);
        }
    }
    return;
}


// ===== sym.mpbe_vmstat_eval @ 0x08002758 (size 272) =====

void sym.mpbe_vmstat_eval(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x5;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x21;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg1 = (_vm_node_stat & (_vm_node_stat >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    *(arg1 + 8) = (___cpu_online_mask & (___cpu_online_mask >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    *(arg1 + 0x10) = (_proc_remove & (_proc_remove >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    *(arg1 + 0x18) = (___per_cpu_offset & (___per_cpu_offset >> 0x3f ^ 0xffffffffffffffffU)) << 2;
    uVar2 = _memset & (_memset >> 0x3f ^ 0xffffffffffffffffU);
    *in_x5 = unaff_x21;
    *(arg1 + 0x20) = uVar2 << 2;
    *(arg1 + 0x28) = 0;
    uVar2 = cpumask_next(seq_lseek,0xffffffff,__cpu_online_mask);
    if (uVar2 < unaff_x21) {
        iVar3 = 0;
        do {
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8002868);
                (*pcVar1)();
            }
            iVar3 = *(misc_deregister + *(__per_cpu_offset + (uVar2 & 0xffffffff) * 8)) + iVar3;
            *(arg1 + 0x28) = iVar3;
            uVar2 = cpumask_next(uVar2,__cpu_online_mask);
        } while (uVar2 < unaff_x21);
    }
    return;
}


// ===== sym.mpbe_cpu_eval @ 0x0800287c (size 536) =====

void sym.mpbe_cpu_eval(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x5;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = cpumask_next(0xffffffff,__cpu_possible_mask);
    *in_x5 = seq_lseek;
    if (uVar2 < 0x8017000) {
        iVar17 = 0;
        iVar16 = 0;
        iVar15 = 0;
        iVar14 = 0;
        iVar13 = 0;
        iVar12 = 0;
        iVar11 = 0;
        do {
            uVar10 = uVar2;
            if (0x1f < uVar2) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x8002a94);
                (*pcVar1)();
            }
            iVar5 = *(__per_cpu_offset + uVar10 * 8);
            uVar9 = 1L << (uVar10 & 0x3f);
            pcVar1 = kernel_cpustat + iVar5;
            iVar6 = *pcVar1;
            iVar7 = *(get_cpu_iowait_time_us + iVar5);
            iVar5 = *(kmem_cache_alloc_trace + iVar5);
            if ((_seq_release & uVar9) == 0) {
code_r0x080029e4:
                iVar3 = *(pcVar1 + 0x28);
            }
            else {
                iVar3 = get_cpu_idle_time_us(uVar10,0);
                if (iVar3 == -1) {
                    pcVar1 = kernel_cpustat + *(__per_cpu_offset + uVar10 * 8);
                    goto code_r0x080029e4;
                }
                iVar3 = iVar3 * 1000;
            }
            if (((_seq_release & uVar9) == 0) || (iVar4 = get_cpu_iowait_time_us(uVar10,0), iVar4 == -1)) {
                iVar8 = *(__per_cpu_offset + uVar10 * 8);
                iVar4 = *(_raw_spin_unlock_irqrestore + iVar8);
            }
            else {
                iVar8 = *(__per_cpu_offset + uVar10 * 8);
                iVar4 = iVar4 * 1000;
            }
            iVar17 = iVar6 + iVar17;
            iVar14 = iVar3 + iVar14;
            iVar13 = iVar4 + iVar13;
            iVar11 = *(strncpy + iVar8) + iVar11;
            iVar16 = iVar7 + iVar16;
            iVar12 = *(proc_create + iVar8) + iVar12;
            iVar15 = iVar5 + iVar15;
            uVar2 = cpumask_next(uVar10,__cpu_possible_mask);
            *in_x5 = seq_lseek;
        } while (uVar2 < 0x8017000);
    }
    else {
        iVar11 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
    }
    *arg1 = iVar17;
    *(arg1 + 8) = iVar16;
    *(arg1 + 0x10) = iVar15;
    *(arg1 + 0x18) = iVar14;
    *(arg1 + 0x20) = iVar13;
    *(arg1 + 0x28) = iVar12;
    *(arg1 + 0x30) = iVar11;
    return;
}


// ===== sym.mpbe_throughput_eval @ 0x08002a94 (size 160) =====

void sym.mpbe_throughput_eval(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    if ((*arg1 < 1000000) || (*(arg1 + 8) == 0)) {
        uVar2 = 0;
        *(arg1 + 8) = 0;
    }
    else {
        uVar2 = *arg1 / 1000000;
        uVar1 = 0;
        if (uVar2 != 0) {
            uVar1 = *(arg1 + 8) / uVar2;
        }
        *(arg1 + 0xc) = uVar1 * 1000 >> 10;
    }
    *arg1 = uVar2;
    if ((*(arg1 + 0x10) < 1000000) || (*(arg1 + 0x18) == 0)) {
        uVar2 = 0;
        *(arg1 + 0x18) = 0;
    }
    else {
        uVar2 = *(arg1 + 0x10) / 1000000;
        uVar1 = 0;
        if (uVar2 != 0) {
            uVar1 = *(arg1 + 0x18) / uVar2;
        }
        *(arg1 + 0x1c) = uVar1 * 1000 >> 10;
    }
    *(arg1 + 0x10) = uVar2;
    return;
}


// ===== sym.mpbe_curr_trace @ 0x08002b34 (size 36) =====

int64_t sym.mpbe_curr_trace(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = 0;
    if (arg1 != 0) {
        iVar1 = *arg1 + *(arg1 + 0xc) * 0xb0;
    }
    return iVar1;
}


// ===== sym.mpbe_next_trace @ 0x08002b58 (size 48) =====

int64_t sym.mpbe_next_trace(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    
    iVar1 = 0;
    if (*(arg1 + 0xc) + 1 < *(arg1 + 0x10)) {
        iVar1 = *(arg1 + 0xc) + 1;
    }
    *(arg1 + 0xc) = iVar1;
    iVar2 = 0;
    if (arg1 != 0) {
        iVar2 = *arg1 + iVar1 * 0xb0;
    }
    return iVar2;
}


// ===== sym.mpbe_seq_debug_start @ 0x08002b88 (size 24) =====

bool sym.mpbe_seq_debug_start(ulong noname_0,int64_t arg1)

{
    return *arg1 == 0;
}


// ===== sym.mpbe_seq_debug_next @ 0x08002ba0 (size 28) =====

bool sym.mpbe_seq_debug_next(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint64_t uVar1;
    
    uVar1 = *arg1;
    *arg1 = uVar1 + 1;
    return 0xfffffffffffffffe < uVar1;
}


// ===== sym.mpbe_seq_debug_stop @ 0x08002bbc (size 12) =====

void sym.mpbe_seq_debug_stop(void)

{
    return;
}


// ===== sym.mpbe_alloc @ 0x08002bc8 (size 652) =====

code * sym.mpbe_alloc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    code *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint32_t in_w4;
    int64_t in_x5;
    ulong *in_x18;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        if (((arg3 != 0) && (arg4 != 0)) && (in_w4 != 0)) {
            __rcu_read_lock();
            for (pcVar7 = _obj.mpbe_list; pcVar7 != obj.mpbe_list; pcVar7 = *pcVar7) {
                if (*(pcVar7 + 0x20) == arg2) {
                    __rcu_read_unlock();
                    if (pcVar7 != NULL) {
                        _printk(0x8000675,"mpbe_alloc",arg1);
                        return NULL;
                    }
                    goto code_r0x08002c54;
                }
            }
            __rcu_read_unlock();
code_r0x08002c54:
            pcVar7 = kmem_cache_alloc_trace(___rcu_read_lock,0xc40,0x80);
            if (pcVar7 != NULL) {
                *(pcVar7 + 0x70) = 0;
                *(pcVar7 + 0x78) = 0;
                *(pcVar7 + 0x60) = 0;
                *(pcVar7 + 0x68) = 0;
                *(pcVar7 + 0x50) = 0;
                *(pcVar7 + 0x58) = 0;
                *(pcVar7 + 0x40) = 0;
                *(pcVar7 + 0x48) = 0;
                *(pcVar7 + 0x30) = 0;
                *(pcVar7 + 0x38) = 0;
                *(pcVar7 + 0x20) = 0;
                *(pcVar7 + 0x28) = 0;
                *(pcVar7 + 0x10) = 0;
                *(pcVar7 + 0x18) = 0;
                *pcVar7 = 0;
                *(pcVar7 + 8) = 0;
                *(pcVar7 + 0x38) = arg3;
                iVar4 = __kmalloc((arg3 & 0xffffffffU) * 0xb0,0xd40);
                *(pcVar7 + 0x28) = iVar4;
                if (iVar4 != 0) {
                    strncpy(pcVar7 + 0x10,arg1,0xf);
                    *(pcVar7 + 0x20) = arg2;
                    *(pcVar7 + 0x48) = in_w4;
                    *(pcVar7 + 0x4c) = arg4;
                    auVar1._8_8_ = 0;
                    auVar1._0_8_ = CONCAT44(0,in_w4);
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = arg4;
                    if (SUB168(auVar1 * auVar2,8) == 0) {
                        iVar4 = __kmalloc(CONCAT44(0,in_w4) * arg4,0xd40);
                        *(pcVar7 + 0x40) = iVar4;
                        if (iVar4 != 0) {
                            *(pcVar7 + 0x78) = in_x5;
                            if (_segment.ehdr == 0) {
                                _segment.ehdr = proc_mkdir("mpbe",0);
                                iVar4 = proc_create("trace",0x8124,_segment.ehdr,obj.mpbe_main_fops);
                                if (iVar4 == 0) {
                                    _printk(0x80006c4,"mpbe_init_procfs");
                                }
                                else {
                                    proc_set_user(iVar4,0,0x3e9);
                                }
                            }
                            uVar5 = proc_mkdir(arg1,_segment.ehdr);
                            *(pcVar7 + 0x68) = uVar5;
                            if (uVar5 < 0xfffffffffffff001) {
                                uVar5 = proc_create("blockio",0x8124,uVar5,obj.mpbe_sub_fops);
                                *(pcVar7 + 0x70) = uVar5;
                                if (uVar5 < 0xfffffffffffff001) {
                                    sym.mpbe_mictx_init(pcVar7);
                                }
                            }
                            uVar6 = _raw_spin_lock_irqsave(obj.mpbe_list);
                            pcVar3 = _obj.mpbe_list;
                            uVar5 = __list_add_valid(pcVar7,obj.mpbe_list,_obj.mpbe_list);
                            if ((uVar5 & 1) != 0) {
                                *pcVar7 = pcVar3;
                                *(pcVar7 + 8) = obj.mpbe_list;
                                _obj.mpbe_list = pcVar7;
                                *(pcVar3 + 8) = pcVar7;
                            }
                            _raw_spin_unlock_irqrestore(obj.mpbe_list,uVar6);
                            sym.mpbe_earaio_init_mictx(in_x5,arg2 & 0xffffffff,_segment.ehdr);
                            return pcVar7;
                        }
                        iVar4 = *(pcVar7 + 0x28);
                    }
                    else {
                        *(pcVar7 + 0x40) = 0;
                    }
                    kfree(iVar4);
                }
                kfree(pcVar7);
            }
        }
    }
    return NULL;
}


// ===== sym.mpbe_free @ 0x08002e5c (size 164) =====

void sym.mpbe_free(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        uVar3 = _raw_spin_lock_irqsave(obj.mpbe_list);
        uVar4 = __list_del_entry_valid(arg1);
        if ((uVar4 & 1) != 0) {
            iVar1 = *arg1;
            piVar2 = *(arg1 + 8);
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *(arg1 + 8) = 0xdead000000000122;
        _raw_spin_unlock_irqrestore(obj.mpbe_list,uVar3);
        synchronize_rcu();
        sym.mpbe_mictx_free_all(arg1);
        kfree(*(arg1 + 0x40));
        kfree(*(arg1 + 0x28));
        proc_remove(*(arg1 + 0x68));
        kfree(arg1);
    }
    return;
}


// ===== sym.mpbe_is_top_in_cgrp @ 0x08002f00 (size 108) =====

ulong sym.mpbe_is_top_in_cgrp(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    iVar3 = ***(arg1 + 0x978);
    __rcu_read_unlock();
    if ((*(*(iVar3 + 0x118) + 0x10) == 0) || (iVar1 = strcmp("top-app"), iVar1 != 0)) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


// ===== sym.mpbe_sub_open @ 0x08002f70 (size 156) =====

int sym.mpbe_sub_open(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = seq_open(arg2,obj.mpbe_seq_sub_ops);
    if (((iVar1 == 0) && (iVar4 = *(arg1 + 0x150), iVar4 != 0xb0)) && (*(iVar4 + -0x98) != 0)) {
        iVar3 = *(arg2 + 0xd8);
        _printk(0x8000861,"mpbe_sub_open",*(*(iVar4 + -0x98) + 0x28),*(iVar4 + -0x88));
        uVar2 = sym.mpbe_find_by_name(*(*(iVar4 + -0x98) + 0x28));
        *(iVar3 + 0x80) = uVar2;
    }
    return iVar1;
}


// ===== sym.mpbe_sub_write @ 0x0800300c (size 128) =====

int64_t sym.mpbe_sub_write(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0xd8) != 0) && (iVar2 = *(*(arg1 + 0xd8) + 0x80), iVar2 != 0)) {
        uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x30);
        memset(*(iVar2 + 0x28),0,*(iVar2 + 0x38) * 0xb0);
        *(iVar2 + 0x34) = 0;
        _raw_spin_unlock_irqrestore(iVar2 + 0x30,uVar1);
    }
    return arg2;
}


// ===== sym.mpbe_find_by_name @ 0x0800308c (size 120) =====

code * sym.mpbe_find_by_name(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    for (pcVar2 = _obj.mpbe_list; pcVar2 != obj.mpbe_list; pcVar2 = *pcVar2) {
        iVar1 = strncmp(pcVar2 + 0x10,arg1,0xf);
        if (iVar1 == 0) goto code_r0x080030e4;
    }
    pcVar2 = NULL;
code_r0x080030e4:
    __rcu_read_unlock();
    return pcVar2;
}


// ===== sym.mpbe_seq_sub_show @ 0x0800310c (size 200) =====

ulong sym.mpbe_seq_sub_show(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    int64_t arg2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2 = *(arg1 + 0x80);
    if (arg2 != 0) {
        sym.mpbe_seq_debug_show_ringtrace(arg1,arg2);
        if (**(arg2 + 0x78) != 0) {
            seq_printf(arg1,"",arg2 + 0x10);
            pcVar1 = **(arg2 + 0x78);
            if (pcVar1 != sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr) {
                __cfi_slowpath_diag(0x1ec70c297caa868a,pcVar1,0x8000610);
            }
            (*pcVar1)(0,0,arg1);
        }
        sym.mpbe_seq_sub_show_usedmem(arg1,arg2);
    }
    return 0;
}


// ===== sym.mpbe_seq_debug_show_ringtrace @ 0x080031d4 (size 768) =====

void sym.mpbe_seq_debug_show_ringtrace(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong in_stack_ffffffffffffff80;
    uint uVar10;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (arg2 + 0x28 != NULL)) {
        if ((*(arg2 + 0x34) < 0) || (*(arg2 + 0x38) <= *(arg2 + 0x34))) {
            *(arg2 + 0x34) = 0;
        }
        iVar1 = arg2 + 0x10;
        if (arg1 == 0) {
            _printk(0x8000980,iVar1,"3.09");
        }
        else {
            seq_printf(arg1,"",iVar1,"3.09");
        }
        uVar4 = _raw_spin_lock_irqsave();
        iVar2 = *(arg2 + 0x34);
        iVar3 = iVar2;
        if (iVar2 < 1) {
            iVar3 = *(arg2 + 0x38);
        }
        while( true ) {
            iVar5 = iVar2;
            uVar10 = in_stack_ffffffffffffff80 >> 0x20;
            iVar9 = *(arg2 + 0x28);
            iVar8 = iVar5;
            if (((*(iVar9 + iVar5 * 0xb0 + 0xe) & 1) != 0) && (uVar6 = *(iVar9 + iVar8 * 0xb0), uVar6 != 0)) {
                if (arg1 == 0) {
                    _printk(0x8000824,uVar6 / 1000000000,(uVar6 + (uVar6 / 1000000000) * -1000000000) / 1000);
                    iVar7 = iVar9 + iVar8 * 0xb0;
                    _printk(0x8000b13,iVar1,*(iVar7 + 8));
                    if (*(iVar7 + 0x28) == 0) {
                        iVar7 = *(iVar9 + iVar8 * 0xb0 + 0x38);
                    }
                    else {
                        iVar7 = iVar9 + iVar8 * 0xb0;
                        _printk(0x8000b1e,*(iVar7 + 0x34),*(iVar7 + 0x30));
                        iVar7 = *(iVar7 + 0x38);
                    }
                    if (iVar7 != 0) {
                        iVar7 = iVar9 + iVar8 * 0xb0;
                        _printk(0x8000813,*(iVar7 + 0x44),*(iVar7 + 0x40));
                    }
                    iVar9 = iVar9 + iVar8 * 0xb0;
                    in_stack_ffffffffffffff80 = CONCAT44(uVar10,*(iVar9 + 0xc));
                    _printk(0x800077d,*(iVar9 + 0x20),*(iVar9 + 0x18),*(iVar9 + 0x10),*(iVar9 + 0x24),
                            *(iVar9 + 0x48),*(iVar9 + 0x50),*(iVar9 + 0x58),*(iVar9 + 0x60),*(iVar9 + 0x68),
                            *(iVar9 + 0x70),*(iVar9 + 0x78),*(iVar9 + 0x80),*(iVar9 + 0x88),*(iVar9 + 0x90),
                            *(iVar9 + 0x98),*(iVar9 + 0xa0),*(iVar9 + 0xa8),in_stack_ffffffffffffff80);
                    _printk(0x8000875);
                }
                else {
                    seq_printf(arg1,"[%5lu.%06lu]");
                    iVar7 = iVar9 + iVar8 * 0xb0;
                    seq_printf(arg1,"%s.q:%d.",iVar1,*(iVar7 + 8));
                    if (*(iVar7 + 0x28) != 0) {
                        iVar7 = iVar9 + iVar8 * 0xb0;
                        seq_printf(arg1,"rt:%d,%d,%lld.",*(iVar7 + 0x34),*(iVar7 + 0x30));
                    }
                    if (*(iVar9 + iVar8 * 0xb0 + 0x38) != 0) {
                        iVar7 = iVar9 + iVar8 * 0xb0;
                        seq_printf(arg1,"wt:%d,%d,%lld.",*(iVar7 + 0x44),*(iVar7 + 0x40));
                    }
                    iVar9 = iVar9 + iVar8 * 0xb0;
                    in_stack_ffffffffffffff80 = *(iVar9 + 0xa8);
                    seq_printf(arg1,
                               "wl:%d%%,%lld,%lld,%d.vm:%lld,%lld,%lld,%lld,%lld,%lld.cpu:%llu,%llu,%llu,%llu,%llu,%llu,%llu.pid:%d,"
                               ,*(iVar9 + 0x20),*(iVar9 + 0x18),*(iVar9 + 0x10),*(iVar9 + 0x24),*(iVar9 + 0x48),
                               *(iVar9 + 0x50),*(iVar9 + 0x58),*(iVar9 + 0x60),*(iVar9 + 0x68),*(iVar9 + 0x70),
                               *(iVar9 + 0x78),*(iVar9 + 0x80),*(iVar9 + 0x88),*(iVar9 + 0x90),*(iVar9 + 0x98),
                               *(iVar9 + 0xa0),in_stack_ffffffffffffff80,*(iVar9 + 0xc));
                    seq_printf(arg1,0x8000daf);
                }
            }
            if (iVar5 == iVar3 + -1) break;
            iVar2 = 0;
            if (iVar5 < *(arg2 + 0x38) + -1) {
                iVar2 = iVar5 + 1;
            }
        }
        _raw_spin_unlock_irqrestore(arg2 + 0x30,uVar4);
    }
    return;
}


// ===== sym.mpbe_seq_sub_show_usedmem @ 0x080034d4 (size 616) =====

uint64_t sym.mpbe_seq_sub_show_usedmem(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg2 + 0x10;
    if (arg1 == 0) {
        _printk(0x8000d7d,iVar1);
        _printk(0x80007f3,iVar1,0x80);
        if ((arg2 == 0) || (arg2 == -0x28)) goto code_r0x080035d4;
        iVar6 = *(arg2 + 0x38) * 0xb0;
        _printk(0x8000997,iVar1,*(arg2 + 0x38),0xb0,iVar6);
        iVar6 = iVar6 + 0x80;
        if (*(arg2 + 0x40) != 0) {
            iVar2 = *(arg2 + 0x48);
            iVar3 = *(arg2 + 0x4c);
            uVar7 = iVar2 * iVar3;
code_r0x0800371c:
            _printk(0x8000a55,iVar1,iVar2,iVar3,uVar7);
            goto code_r0x08003608;
        }
        uVar4 = *(arg2 + 0x48);
        uVar7 = *(arg2 + 100);
        iVar5 = (uVar4 * 0x90 + 0x20) * uVar7;
code_r0x080036d4:
        _printk(0x8000ad0,iVar1,uVar7,0x20,uVar4,0x90,iVar5);
        uVar7 = iVar6 + iVar5;
        _printk(0x8000a87,iVar1,uVar7 >> 10);
    }
    else {
        seq_printf(arg1,"<%s: memory usage>\n",iVar1);
        seq_printf(arg1,"%s mpbe: %zu bytes\n",iVar1,0x80);
        if ((arg2 == 0) || (arg2 == -0x28)) {
code_r0x080035d4:
            if ((arg2 != 0) && (*(arg2 + 0x40) != 0)) {
                iVar2 = *(arg2 + 0x48);
                iVar3 = *(arg2 + 0x4c);
                iVar6 = 0x80;
                uVar7 = iVar2 * iVar3;
                if (arg1 == 0) goto code_r0x0800371c;
                goto code_r0x080035f0;
            }
            iVar6 = 0x80;
code_r0x08003614:
            uVar4 = *(arg2 + 0x48);
            uVar7 = *(arg2 + 100);
            iVar5 = (uVar4 * 0x90 + 0x20) * uVar7;
            if (arg1 == 0) goto code_r0x080036d4;
        }
        else {
            iVar6 = *(arg2 + 0x38) * 0xb0;
            seq_printf(arg1,"%s debug ring buffer: %d traces * %zu = %zu bytes\n",iVar1,*(arg2 + 0x38),0xb0,iVar6);
            iVar6 = iVar6 + 0x80;
            if (*(arg2 + 0x40) != 0) {
                iVar2 = *(arg2 + 0x48);
                iVar3 = *(arg2 + 0x4c);
                uVar7 = iVar2 * iVar3;
code_r0x080035f0:
                seq_printf(arg1,"%s queue context: %d contexts * %d = %zu bytes\n",iVar1,iVar2,iVar3,uVar7);
code_r0x08003608:
                iVar6 = iVar6 + uVar7;
                goto code_r0x08003614;
            }
            uVar4 = *(arg2 + 0x48);
            uVar7 = *(arg2 + 100);
            iVar5 = (uVar4 * 0x90 + 0x20) * uVar7;
        }
        seq_printf(arg1,"%s mictx list: %d mictx * (%zu + %d * %zu) = %zu bytes\n",iVar1,uVar7,0x20,uVar4,0x90,
                   iVar5);
        uVar7 = iVar6 + iVar5;
        seq_printf(arg1,"%s sub-total: %zu KB\n",iVar1,uVar7 >> 10);
    }
    return uVar7;
}


// ===== sym.mpbe_main_open @ 0x0800373c (size 48) =====

void sym.mpbe_main_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_open(arg1,obj.mpbe_seq_main_ops);
    return;
}


// ===== sym.mpbe_main_write @ 0x0800376c (size 160) =====

int64_t sym.mpbe_main_write(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __rcu_read_lock();
    pcVar2 = _obj.mpbe_list;
    if (_obj.mpbe_list != obj.mpbe_list) {
        do {
            uVar1 = _raw_spin_lock_irqsave(pcVar2 + 0x30);
            memset(*(pcVar2 + 0x28),0,*(pcVar2 + 0x38) * 0xb0);
            *(pcVar2 + 0x34) = 0;
            _raw_spin_unlock_irqrestore(pcVar2 + 0x30,uVar1);
            pcVar2 = *pcVar2;
        } while (pcVar2 != obj.mpbe_list);
    }
    __rcu_read_unlock();
    return arg1;
}


// ===== sym.mpbe_seq_main_show @ 0x08003814 (size 600) =====

ulong sym.mpbe_seq_main_show(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80008ca);
    }
    else {
        seq_printf(arg1,"[Trace]\n");
    }
    __rcu_read_lock();
    for (pcVar3 = _obj.mpbe_list; pcVar3 != obj.mpbe_list; pcVar3 = *pcVar3) {
        sym.mpbe_seq_debug_show_ringtrace(arg1,pcVar3);
    }
    __rcu_read_unlock();
    if (arg1 == 0) {
        _printk(0x8000c36);
    }
    else {
        seq_printf(arg1,"[Info]\n");
    }
    __rcu_read_lock();
    pcVar3 = _obj.mpbe_list;
    if (_obj.mpbe_list != obj.mpbe_list) {
        do {
            if (**(pcVar3 + 0x78) != 0) {
                if (arg1 == 0) {
                    _printk(0x8000c40,pcVar3 + 0x10);
                }
                else {
                    seq_printf(arg1,"");
                }
                pcVar2 = **(pcVar3 + 0x78);
                if (pcVar2 != sym.__typeid__ZTSFmPPcPmP8seq_fileE_global_addr) {
                    __cfi_slowpath_diag(0x1ec70c297caa868a,pcVar2,0x8000630);
                }
                (*pcVar2)(0,0,arg1);
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.mpbe_list);
    }
    __rcu_read_unlock();
    if (arg1 == 0) {
        _printk(0x8000bbf);
    }
    else {
        seq_printf(arg1,"[Memory Usage]\n");
    }
    __rcu_read_lock();
    if (_obj.mpbe_list == obj.mpbe_list) {
        uVar4 = 0;
        __rcu_read_unlock();
    }
    else {
        iVar5 = 0;
        pcVar3 = _obj.mpbe_list;
        do {
            iVar1 = sym.mpbe_seq_sub_show_usedmem(arg1,pcVar3);
            iVar5 = iVar1 + iVar5;
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.mpbe_list);
        uVar4 = iVar5 + 0x60U >> 10;
        __rcu_read_unlock();
    }
    if (arg1 == 0) {
        _printk(0x8000c8e,0x60);
        _printk(0x8000b5e);
        _printk(0x800070f,uVar4);
    }
    else {
        seq_printf(arg1,"earaio control unit: %lu bytes\n",0x60);
        seq_printf(arg1,"--------------------------------\n");
        seq_printf(arg1,"Total: %zu KB\n",uVar4);
    }
    return 0;
}


// ===== sym.lookup_tracepoints @ 0x08003a84 (size 12) =====

void sym.lookup_tracepoints(void)

{
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003a90 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003ad4

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
    //switch table (4 cases) at 0x8000670
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003ae8);
    (*pcVar1)();
}


// ===== sym.mpbe_mictx_eval_tp @ 0x08003ae8 (size 260) =====

void sym.mpbe_mictx_eval_tp(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    int in_w4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = sched_clock();
    if (arg2 < *(arg1 + 0x48)) {
        __rcu_read_lock();
        piVar1 = arg1 + 0x50;
        piVar6 = *piVar1;
        if (piVar6 != piVar1) {
            do {
                piVar7 = piVar6[2] + (arg2 & 0xffffffffU) * 0x90;
                uVar4 = _raw_spin_lock_irqsave(piVar7 + 0x8c);
                piVar2 = piVar7 + 2;
                if ((arg3 & 1U) == 0) {
                    piVar2 = piVar7;
                }
                *(piVar2 + 1) = piVar2[1] + in_w4;
                uVar5 = piVar7[0xb];
                *piVar2 = *piVar2 + arg4;
                piVar7[0xc] = iVar3;
                if ((uVar5 == 0) || (iVar3 - arg4 < uVar5)) {
                    piVar7[0xb] = iVar3 - arg4;
                }
                _raw_spin_unlock_irqrestore(piVar7 + 0x8c,uVar4);
                piVar6 = *piVar6;
            } while (piVar6 != piVar1);
        }
        __rcu_read_unlock();
    }
    return;
}


// ===== sym.mpbe_mictx_eval_req @ 0x08003bf4 (size 284) =====

void sym.mpbe_mictx_eval_req(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t in_w4;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x48)) {
        __rcu_read_lock();
        piVar1 = arg1 + 0x50;
        piVar6 = *piVar1;
        if (piVar6 != piVar1) {
            do {
                iVar7 = piVar6[2] + arg2 * 0x90;
                iVar2 = iVar7 + 0x8c;
                uVar5 = _raw_spin_lock_irqsave(iVar2);
                iVar4 = 0x38;
                if ((arg3 & 1U) == 0) {
                    iVar4 = 0x20;
                }
                piVar3 = iVar7 + iVar4;
                *piVar3 = *piVar3 + 1;
                *(piVar3 + 4) = *(piVar3 + 4) + (arg4 & 0xffffffffU);
                *(piVar3 + 8) = *(piVar3 + 8) + in_w4;
                _raw_spin_unlock_irqrestore(iVar2,uVar5);
                piVar6 = *piVar6;
            } while (piVar6 != piVar1);
        }
        __rcu_read_unlock();
        if ((in_w4 != 0) && (*(*(arg1 + 0x78) + 0x11) != '\0')) {
            sym.mpbe_earaio_update_pwd(arg3 & 1,in_w4);
        }
    }
    return;
}


// ===== sym.mpbe_mictx_accumulate_weight_qd @ 0x08003d18 (size 196) =====

void sym.mpbe_mictx_accumulate_weight_qd(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t *piVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x48)) {
        __rcu_read_lock();
        for (piVar3 = *(arg1 + 0x50); piVar3 != arg1 + 0x50; piVar3 = *piVar3) {
            iVar4 = piVar3[2] + arg2 * 0x90;
            uVar2 = _raw_spin_lock_irqsave(iVar4 + 0x8c);
            uVar1 = *(iVar4 + 0x50);
            if (*(iVar4 + 0x50) <= arg3) {
                uVar1 = arg3;
            }
            *(iVar4 + 0x78) = (*(iVar4 + 0x78) + arg4) - uVar1;
            _raw_spin_unlock_irqrestore(iVar4 + 0x8c,uVar2);
            arg3 = uVar1;
        }
        __rcu_read_unlock();
    }
    return;
}


// ===== sym.mpbe_mictx_update @ 0x08003de4 (size 736) =====

void sym.mpbe_mictx_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int in_w4;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = sched_clock();
    if (arg2 <= *(arg1 + 0x48)) {
        __rcu_read_lock();
        piVar1 = arg1 + 0x50;
        piVar11 = *piVar1;
        if (piVar11 != piVar1) {
            do {
                iVar9 = piVar11[2];
                iVar10 = iVar9 + (arg2 & 0xffffffffU) * 0x90;
                uVar6 = _raw_spin_lock_irqsave(iVar10 + 0x8c);
                *(iVar10 + 0x80) = arg4;
                *(iVar10 + 0x88) = arg3;
                iVar8 = iVar5;
                if ((arg3 & 0xffffU) == 0) {
code_r0x08003e5c:
                    *(iVar10 + 0x68) = iVar8;
                }
                else {
                    iVar7 = *(iVar10 + 0x68);
                    if (iVar7 != 0) {
                        iVar9 = iVar9 + (arg2 & 0xffffffffU) * 0x90;
                        iVar8 = 0;
                        *(iVar9 + 0x70) = (iVar5 - iVar7) + *(iVar9 + 0x70);
                        goto code_r0x08003e5c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar10 + 0x8c,uVar6);
                piVar11 = *piVar11;
            } while (piVar11 != piVar1);
        }
        __rcu_read_unlock();
        if (in_w4 == 0) {
            Hint_Prefetch(0x80005c8,2,0,1);
            do {
                iVar4 = _obj.ufs_qd + 1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x80005c8,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.ufs_qd = iVar4;
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar4 == 1) {
                Hint_Prefetch(0x80005d0,2,0,1);
                do {
                    iVar8 = _obj.ufs_idle_begin;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x80005d0,0x10);
                    if (bVar3) {
                        _obj.ufs_idle_begin = 0;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
                if (iVar8 != 0) {
                    Hint_Prefetch(0x80005d8,2,0,1);
                    do {
                        cVar2 = '\x01';
                        bVar3 = ExclusiveMonitorPass(0x80005d8,0x10);
                        if (bVar3) {
                            cVar2 = ExclusiveMonitorsStatus();
                            _obj.ufs_idle_total = _obj.ufs_idle_total + (iVar5 - iVar8);
                        }
                    } while (cVar2 != '\0');
                }
            }
        }
        else {
            Hint_Prefetch(0x80005c8,2,0,1);
            do {
                iVar4 = _obj.ufs_qd + -1;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(0x80005c8,0x10);
                if (bVar3) {
                    cVar2 = ExclusiveMonitorsStatus();
                    _obj.ufs_qd = iVar4;
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
            if (iVar4 == 0) {
                Hint_Prefetch(0x80005d0,2,0,1);
                do {
                    if (_obj.ufs_idle_begin != 0) goto code_r0x08003f90;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(0x80005d0,0x10);
                    if (bVar3) {
                        cVar2 = ExclusiveMonitorsStatus();
                        _obj.ufs_idle_begin = iVar5;
                    }
                } while (cVar2 != '\0');
                DataMemoryBarrier(2,3);
            }
        }
code_r0x08003f90:
        if ((arg3 != 0) && (*(*(arg1 + 0x78) + 0x11) != '\0')) {
            sym.mpbe_earaio_check_pwd();
        }
    }
    return;
}


// ===== sym.mpbe_mictx_check_window @ 0x080040c4 (size 312) =====

void sym.mpbe_mictx_check_window(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *puVar6;
    ulong *in_x18;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sched_clock();
    iVar3 = sym.mpbe_find_by_type(arg1 & 0xffffffff);
    if (iVar3 != 0) {
        __rcu_read_lock();
        for (piVar7 = *(iVar3 + 0x50); piVar7 != iVar3 + 0x50; piVar7 = *piVar7) {
            if (*(piVar7 + 3) == (arg1 >> 0x20 & 0xff)) {
                if ((piVar7 != NULL) && (*(iVar3 + 0x48) != 0)) {
                    uVar5 = 0;
                    do {
                        iVar8 = piVar7[2];
                        iVar9 = iVar8 + uVar5 * 0x90;
                        iVar1 = iVar9 + 0x8c;
                        uVar4 = _raw_spin_lock_irqsave(iVar1);
                        piVar10 = iVar9 + 0x50;
                        if (1000000000 < iVar2 - *piVar10) {
                            puVar6 = iVar8 + uVar5 * 0x90;
                            *piVar10 = iVar2;
                            *puVar6 = 0;
                            puVar6[1] = 0;
                            puVar6[2] = 0;
                            puVar6[3] = 0;
                            puVar6[4] = 0;
                            puVar6[5] = 0;
                            puVar6[6] = 0;
                            puVar6[7] = 0;
                            iVar8 = iVar2;
                            if (*(puVar6 + 0x11) != 0) {
                                iVar8 = 0;
                            }
                            puVar6[8] = 0;
                            puVar6[9] = 0;
                            puVar6[0xb] = 0;
                            puVar6[0xc] = 0;
                            puVar6[0xf] = 0;
                            puVar6[0xd] = iVar8;
                            puVar6[0xe] = 0;
                        }
                        _raw_spin_unlock_irqrestore(iVar1,uVar4);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(iVar3 + 0x48));
                }
                break;
            }
        }
        __rcu_read_unlock();
    }
    return;
}


// ===== sym.mpbe_mictx_get_data @ 0x08004204 (size 1108) =====

void sym.mpbe_mictx_get_data(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int16_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ushort uVar8;
    code *pcVar9;
    uint64_t extraout_x8;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    int64_t unaff_x20;
    uint32_t uVar14;
    ulong *puVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_70 = *(iVar5 + 0x5e0);
    iVar5 = sched_clock();
    if ((arg2 != 0) && (iVar6 = sym.mpbe_find_by_type(arg1 & 0xffffffff), unaff_x20 = iVar5, iVar6 != 0)) {
        __rcu_read_lock();
        for (piVar16 = *(iVar6 + 0x50); piVar16 != iVar6 + 0x50; piVar16 = *piVar16) {
            if (*(piVar16 + 3) == (arg1 >> 0x20 & 0xff)) {
                if (piVar16 != NULL) {
                    *(arg2 + 0x20) = 0;
                    *(arg2 + 0x28) = 0;
                    *(arg2 + 0x10) = 0;
                    *(arg2 + 0x18) = 0;
                    *arg2 = 0;
                    *(arg2 + 8) = 0;
                    if (*(iVar6 + 0x48) == 0) {
                        iStack_110 = 0;
                        uStack_108 = 0;
                    }
                    else {
                        uVar14 = 0;
                        iStack_110 = 0;
                        uStack_108 = 0;
                        do {
                            uStack_80 = 0;
                            uStack_78 = 0;
                            uStack_90 = 0;
                            uStack_88 = 0;
                            iStack_a0 = 0;
                            uStack_98 = 0;
                            uStack_b0 = 0;
                            iStack_a8 = 0;
                            uStack_c0 = 0;
                            uStack_b8 = 0;
                            uStack_d0 = 0;
                            uStack_c8 = 0;
                            uStack_e0 = 0;
                            uStack_d8 = 0;
                            uStack_f0 = 0;
                            uStack_e8 = 0;
                            uStack_100 = 0;
                            uStack_f8 = 0;
                            puVar15 = piVar16[2] + uVar14 * 0x90;
                            uVar7 = _raw_spin_lock_irqsave(puVar15 + 0x8c);
                            memcpy(&uStack_100,puVar15,0x90);
                            *puVar15 = 0;
                            puVar15[1] = 0;
                            puVar15[2] = 0;
                            puVar15[3] = 0;
                            puVar15[4] = 0;
                            puVar15[5] = 0;
                            iVar1 = iVar5;
                            if (*(puVar15 + 0x11) != 0) {
                                iVar1 = 0;
                            }
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            puVar15[8] = 0;
                            puVar15[9] = 0;
                            puVar15[10] = iVar5;
                            puVar15[0xb] = 0;
                            puVar15[0xc] = 0;
                            puVar15[0xd] = iVar1;
                            puVar15[0xe] = 0;
                            puVar15[0xf] = 0;
                            _raw_spin_unlock_irqrestore(puVar15 + 0x8c,uVar7);
                            uVar10 = 0;
                            if ((uStack_f8 != 0) && (999999 < uStack_100)) {
                                uVar12 = uStack_100 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_f8 / uVar12;
                                }
                                uVar10 = uVar10 * 1000 >> 10;
                            }
                            uVar12 = 0;
                            *(arg2 + 8) = *(arg2 + 8) + uVar10;
                            if ((uStack_e8 != 0) && (999999 < uStack_f0)) {
                                uVar12 = uStack_f0 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_e8 / uVar12;
                                }
                                uVar12 = uVar10 * 1000 >> 10;
                            }
                            uVar10 = 0;
                            uVar13 = iStack_a0 - iStack_a8;
                            *(arg2 + 0xc) = *(arg2 + 0xc) + uVar12;
                            if ((uStack_f8 != 0) && (999999 < uVar13)) {
                                uVar12 = uVar13 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_f8 / uVar12;
                                }
                                uVar10 = uVar10 * 1000 >> 10;
                            }
                            uVar12 = 0;
                            *(arg2 + 0x10) = *(arg2 + 0x10) + uVar10;
                            if ((uStack_e8 != 0) && (999999 < uVar13)) {
                                uVar12 = uVar13 / 1000000;
                                uVar10 = 0;
                                if (uVar12 != 0) {
                                    uVar10 = uStack_e8 / uVar12;
                                }
                                uVar12 = uVar10 * 1000 >> 10;
                            }
                            *(arg2 + 0x14) = *(arg2 + 0x14) + uVar12;
                            *(arg2 + 0x18) = *(arg2 + 0x18) + uStack_d8;
                            *(arg2 + 0x20) = *(arg2 + 0x20) + uStack_e0;
                            *(arg2 + 0x24) = *(arg2 + 0x24) + uStack_c8;
                            *(arg2 + 0x1c) = *(arg2 + 0x1c) + uStack_c0;
                            if (uStack_d8 != 0 || uStack_c0 != 0) {
                                uStack_d8 = uStack_d8 >> 0xc;
                                uStack_c0 = uStack_c0 >> 0xc;
                                uStack_108 = uStack_d8 + uStack_108 + uStack_c0;
                                uStack_d0 = uStack_d0 >> 0xc;
                                uStack_b8 = uStack_b8 >> 0xc;
                                iStack_110 = uStack_d0 + iStack_110 + uStack_b8;
                            }
                            pcVar9 = *(*(iVar6 + 0x78) + 8);
                            if (pcVar9 == NULL) {
                                iVar4 = uStack_78;
                            }
                            else {
                                if (pcVar9 != sym.__typeid__ZTSFtP15mpbe_mictx_datayE_global_addr) {
                                    __cfi_slowpath_diag(0x70beb0eb50f46bb9,pcVar9,0x8000650);
                                }
                                iVar4 = (*pcVar9)(&uStack_100,iVar5);
                            }
                            uVar14 = uVar14 + 1;
                            *(arg2 + 0x2c) = *(arg2 + 0x2c) + iVar4;
                        } while (uVar14 < *(iVar6 + 0x48));
                    }
                    __rcu_read_unlock();
                    if (_obj.ufs_idle_begin == 0) {
                        uVar13 = 0;
                        goto code_r0x08004598;
                    }
                    uVar13 = _obj.ufs_idle_total + (iVar5 - _obj.ufs_idle_begin);
                    iVar6 = _obj.ufs_idle_begin;
                    goto code_r0x08004614;
                }
                break;
            }
        }
        __rcu_read_unlock();
    }
    uVar7 = 0xffffffff;
    iVar5 = unaff_x20;
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail(uVar7);
        iVar6 = extraout_x1;
        uVar13 = extraout_x8;
code_r0x08004614:
        Hint_Prefetch(0x80005d0,2,0,1);
        do {
            if (_obj.ufs_idle_begin != iVar6) goto code_r0x08004598;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(0x80005d0,0x10);
            if (bVar3) {
                cVar2 = ExclusiveMonitorsStatus();
                _obj.ufs_idle_begin = iVar5;
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08004598:
        uVar11 = iVar5 - _obj.ufs_win_begin;
        if (uVar11 < uVar13) {
            iVar4 = 0;
        }
        else {
            iVar4 = 0;
            if (uVar11 != 0) {
                iVar4 = (uVar13 * 100) / uVar11;
            }
            iVar4 = 100 - iVar4;
        }
        *(arg2 + 0x28) = iVar4;
        *arg2 = uVar11;
        if (uStack_108 == 0) {
            uVar8 = 0;
        }
        else {
            uVar8 = 0;
            if (uStack_108 != 0) {
                uVar8 = (iStack_110 * 100) / uStack_108;
            }
        }
        uVar7 = 0;
        *(arg2 + 0x2a) = uVar8;
        _segment.ehdr = iVar5;
    } while( true );
}


// ===== sym.mpbe_mictx_free_all @ 0x08004658 (size 284) =====

void sym.mpbe_mictx_free_all(int64_t arg1)

{
    int64_t *piVar1;
    ulong in_tmp_ldXn;
    ulong uVar2;
    uint64_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uchar uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    ulong *puVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int64_t *piStack_48;
    int64_t *piStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    piVar6 = arg1 + 0x50;
    piStack_48 = &stack0xffffffffffffffb8;
    piStack_40 = &stack0xffffffffffffffb8;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x60);
    if (piVar6 != *piVar6) {
        piVar1 = *(arg1 + 0x50);
        puVar12 = *(arg1 + 0x58);
        piVar1[1] = &stack0xffffffffffffffb8;
        *puVar12 = piStack_48;
        piVar11 = piStack_48 + 1;
        piStack_48 = piVar1;
        *piVar11 = puVar12;
        *(arg1 + 0x50) = piVar6;
        *(arg1 + 0x58) = piVar6;
    }
    *(arg1 + 100) = 0;
    _raw_spin_unlock_irqrestore(arg1 + 0x60,uVar2);
    synchronize_rcu();
    if (piStack_48 != &stack0xffffffffffffffb8) {
        piVar6 = piStack_48;
        do {
            piVar11 = *piVar6;
            uVar3 = __list_del_entry_valid(piVar6);
            if ((uVar3 & 1) != 0) {
                iVar5 = *piVar6;
                piVar1 = piVar6[1];
                *(iVar5 + 8) = piVar1;
                *piVar1 = iVar5;
            }
            *piVar6 = -0x2152ffffffffff00;
            piVar6[1] = -0x2152fffffffffede;
            kfree(piVar6[2]);
            kfree(piVar6);
            piVar6 = piVar11;
        } while (piVar11 != &stack0xffffffffffffffb8);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar13 = __stack_chk_fail();
    puVar4 = auVar13._0_8_;
    *extraout_x18 = 0x8004770;
    uVar9 = *puVar4;
    if ((auVar13._8_8_ & 1) == 0) {
        iVar5 = sym.mpbe_find_by_type(uVar9);
        if (iVar5 == 0) {
            return;
        }
        iVar7 = iVar5 + 0x60;
        uVar2 = _raw_spin_lock_irqsave(iVar7);
        piVar6 = iVar5 + 0x50;
        piVar11 = *piVar6;
        if (piVar11 != piVar6) {
            do {
                if (piVar11[3] == puVar4[1]) {
                    uVar3 = __list_del_entry_valid(piVar11);
                    if ((uVar3 & 1) != 0) {
                        iVar10 = *piVar11;
                        piVar6 = piVar11[1];
                        *(iVar10 + 8) = piVar6;
                        *piVar6 = iVar10;
                    }
                    piVar11[1] = -0x2152fffffffffede;
                    *(iVar5 + 100) = *(iVar5 + 100) + -1;
                    _raw_spin_unlock_irqrestore(iVar7,uVar2);
                    synchronize_rcu();
                    kfree(piVar11[2]);
                    kfree(piVar11);
                    return;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar6);
        }
        _raw_spin_unlock_irqrestore(iVar7,uVar2);
        return;
    }
    uVar2 = sched_clock(in_tmp_ldXn);
    iVar5 = sym.mpbe_find_by_type(uVar9);
    if (iVar5 != 0) {
        iVar7 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar7 = 0x30;
        }
        piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xd40,0x20);
        if (piVar6 != NULL) {
            iVar7 = __kmalloc(*(iVar5 + 0x48) * 0x90,0xd40);
            if (iVar7 != 0) {
                if (*(iVar5 + 0x48) != 0) {
                    uVar9 = 0;
                    do {
                        iVar10 = iVar7 + uVar9 * 0x90;
                        uVar9 = uVar9 + 1;
                        *(iVar10 + 0x50) = uVar2;
                        *(iVar10 + 0x8c) = 0;
                    } while (uVar9 < *(iVar5 + 0x48));
                }
                piVar6[2] = iVar7;
                uVar2 = _raw_spin_lock_irqsave(iVar5 + 0x60);
                *(piVar6 + 3) = *(iVar5 + 0x66);
                puVar12 = *(iVar5 + 0x58);
                *(iVar5 + 100) = *(iVar5 + 100) + 1;
                *(iVar5 + 0x66) = *(iVar5 + 0x66) + 1;
                uVar3 = __list_add_valid(piVar6,puVar12,iVar5 + 0x50);
                if ((uVar3 & 1) != 0) {
                    *piVar6 = iVar5 + 0x50;
                    piVar6[1] = puVar12;
                    *puVar12 = piVar6;
                    *(iVar5 + 0x58) = piVar6;
                }
                _raw_spin_unlock_irqrestore(iVar5 + 0x60,uVar2);
                uVar8 = piVar6[3];
                goto code_r0x08004960;
            }
            kfree(piVar6);
        }
    }
    uVar8 = 0xff;
code_r0x08004960:
    *(puVar4 + 1) = uVar8;
    return;
}


// ===== sym.mpbe_mictx_enable @ 0x08004774 (size 528) =====

void sym.mpbe_mictx_enable(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t in_x1;
    uchar uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = *arg1;
    if ((in_x1 & 1) == 0) {
        iVar2 = sym.mpbe_find_by_type(uVar7);
        if (iVar2 == 0) {
            return;
        }
        iVar4 = iVar2 + 0x60;
        uVar1 = _raw_spin_lock_irqsave(iVar4);
        piVar3 = iVar2 + 0x50;
        piVar9 = *piVar3;
        if (piVar9 != piVar3) {
            do {
                if (piVar9[3] == *(arg1 + 4)) {
                    uVar5 = __list_del_entry_valid(piVar9);
                    if ((uVar5 & 1) != 0) {
                        iVar8 = *piVar9;
                        piVar3 = piVar9[1];
                        *(iVar8 + 8) = piVar3;
                        *piVar3 = iVar8;
                    }
                    piVar9[1] = -0x2152fffffffffede;
                    *(iVar2 + 100) = *(iVar2 + 100) + -1;
                    _raw_spin_unlock_irqrestore(iVar4,uVar1);
                    synchronize_rcu();
                    kfree(piVar9[2]);
                    kfree(piVar9);
                    return;
                }
                piVar9 = *piVar9;
            } while (piVar9 != piVar3);
        }
        _raw_spin_unlock_irqrestore(iVar4,uVar1);
        return;
    }
    uVar1 = sched_clock();
    iVar2 = sym.mpbe_find_by_type(uVar7);
    if (iVar2 != 0) {
        iVar4 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar4 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xd40,0x20);
        if (piVar3 != NULL) {
            iVar4 = __kmalloc(*(iVar2 + 0x48) * 0x90,0xd40);
            if (iVar4 != 0) {
                if (*(iVar2 + 0x48) != 0) {
                    uVar7 = 0;
                    do {
                        iVar8 = iVar4 + uVar7 * 0x90;
                        uVar7 = uVar7 + 1;
                        *(iVar8 + 0x50) = uVar1;
                        *(iVar8 + 0x8c) = 0;
                    } while (uVar7 < *(iVar2 + 0x48));
                }
                piVar3[2] = iVar4;
                uVar1 = _raw_spin_lock_irqsave(iVar2 + 0x60);
                *(piVar3 + 3) = *(iVar2 + 0x66);
                puVar10 = *(iVar2 + 0x58);
                *(iVar2 + 100) = *(iVar2 + 100) + 1;
                *(iVar2 + 0x66) = *(iVar2 + 0x66) + 1;
                uVar5 = __list_add_valid(piVar3,puVar10,iVar2 + 0x50);
                if ((uVar5 & 1) != 0) {
                    *piVar3 = iVar2 + 0x50;
                    piVar3[1] = puVar10;
                    *puVar10 = piVar3;
                    *(iVar2 + 0x58) = piVar3;
                }
                _raw_spin_unlock_irqrestore(iVar2 + 0x60,uVar1);
                uVar6 = piVar3[3];
                goto code_r0x08004960;
            }
            kfree(piVar3);
        }
    }
    uVar6 = 0xff;
code_r0x08004960:
    *(arg1 + 4) = uVar6;
    return;
}


// ===== sym.mpbe_mictx_init @ 0x08004984 (size 92) =====

void sym.mpbe_mictx_init(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x60) = 0;
    *(arg1 + 100) = 0;
    *(arg1 + 0x50) = arg1 + 0x50;
    *(arg1 + 0x58) = arg1 + 0x50;
    _segment.ehdr = *0x8000004 << 0x20;
    sched_clock();
    _segment.ehdr = 0;
    _segment.ehdr = sched_clock();
    return;
}


// ===== sym.mpbe_earaio_boost @ 0x080049e0 (size 308) =====

void sym.mpbe_earaio_boost(int64_t arg1)

{
    uint32_t uVar1;
    bool bVar2;
    bool bVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80005ec == '\0' || _segment.ehdr == 0) {
        return;
    }
    uVar4 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
    uVar1 = arg1 & 1;
    if (*0x8000608 == uVar1) {
        if ((arg1 & 1U) == 0) {
            _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar4);
            return;
        }
        bVar3 = false;
        bVar2 = false;
    }
    else {
        if ((arg1 & 1U) == 0) {
            bVar2 = false;
        }
        else {
            bVar2 = true;
            if ((*0x8000600 >> 0xd == 0) && (*0x8000604 < 0x2000)) {
                bVar3 = false;
                goto code_r0x08004ac4;
            }
        }
        *0x8000609 = bVar2;
        queue_work_on(0x20,*0x8000610,0x8000618);
        bVar2 = false;
        bVar3 = true;
        *0x8000608 = uVar1;
    }
code_r0x08004ac4:
    _reloc.mpbe_ufs_mictx_eval_wqd.cfi_jt = sched_clock();
    *0x8000600 = 0;
    _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar4);
    if ((arg1 & 1U) == 0) {
        bVar2 = bVar3;
    }
    if (bVar2) {
        sym.mpbe_mictx_check_window(CONCAT44(*0x8000004,_segment.ehdr));
    }
    return;
}


// ===== sym.mpbe_earaio_check_pwd @ 0x08004b14 (size 72) =====

void sym.mpbe_earaio_check_pwd(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sched_clock();
    if (99999999 < iVar1 - _segment.ehdr) {
        sym.mpbe_earaio_boost(1);
    }
    return;
}


// ===== sym.mpbe_earaio_enabled @ 0x08004b5c (size 20) =====

uchar sym.mpbe_earaio_enabled(void)

{
    return *0x80005ec;
}


// ===== sym.mpbe_earaio_update_pwd @ 0x08004b70 (size 120) =====

void sym.mpbe_earaio_update_pwd(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
    _segment.ehdr = _segment.ehdr + ((arg2 & 0xffffffffU) >> 0xc);
    _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar1);
    return;
}


// ===== sym.mpbe_earaio_init_mictx @ 0x08004be8 (size 228) =====

void sym.mpbe_earaio_init_mictx(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x11) != '\0') {
        if (*0x80005ec == '\0') {
            *0x8000610 = alloc_workqueue("mpbe_uevt",0xa000a,1);
            *0x8000618 = 0xfffffffe0;
            *0x8000620 = 0x8000620;
            *0x8000628 = 0x8000620;
            _obj.earaio_ctrl.llvm.13853534520470448387 = 0;
            *0x8000630 = sym.mpbe_earaio_uevt_worker.5794a837122c1c93504b539120499815.cfi_jt;
            _reloc.mpbe_ufs_mictx_eval_wqd.cfi_jt = sched_clock();
            *0x8000600 = 0;
            _reloc.mpbe_ufs_seq_debug_show_info.dfdd96d099948463580d595c3bf4f651.cfi_jt = arg2;
        }
        sym.mpbe_mictx_enable(0x80005f0);
        proc_create("boost",0x1b4,arg3,obj.mpbe_eara_ioctl_fops);
        proc_create("ctrl",0x8124,arg3,obj.mpbe_earaio_ctrl_sub_fops);
    }
    return;
}


// ===== sym.mpbe_earaio_uevt_worker @ 0x08004ccc (size 316) =====

uint64_t sym.mpbe_earaio_uevt_worker(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    int iVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong *puStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ushort uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_78 = &uStack_68;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    do {
        uVar7 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
        cVar3 = *0x800060a;
        cVar2 = *0x8000609;
        cVar4 = *0x8000609 != '\0';
        uVar8 = _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar7);
        if ((cVar3 == cVar2) || (uVar8 = snprintf(&uStack_68,10,"boost=%d",cVar4), uVar8 == 0)) break;
        iVar5 = kobject_uevent_env(CONCAT44(*0x8000004,_segment.ehdr),2,&puStack_78);
        if (iVar5 != 0) {
            _printk(0x800075e,&uStack_68,iVar5);
            cVar4 = *0x800060a;
        }
        *0x800060a = cVar4;
        uVar7 = _raw_spin_lock_irqsave(obj.earaio_ctrl.llvm.13853534520470448387);
        cVar3 = *0x800060a;
        cVar2 = *0x8000609;
        uVar8 = _raw_spin_unlock_irqrestore(obj.earaio_ctrl.llvm.13853534520470448387,uVar7);
    } while (cVar3 != cVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.mpbe_earaio_init;
    _obj.earaio_obj = 0xff;
    *0x8000650 = "boost";
    uVar6 = misc_register();
    uVar8 = uVar6;
    if (uVar6 == 0) {
        uVar6 = kobject_uevent(CONCAT44(*0x8000004,_segment.ehdr),0);
        if (uVar6 == 0) {
            return 0;
        }
        uVar8 = uVar6;
        misc_deregister(obj.earaio_obj);
        _printk(0x8000b91,uVar8);
    }
    else {
        _printk(0x8000882,uVar8);
    }
    _segment.ehdr = 0;
    return uVar8;
}


// ===== sym.mpbe_earaio_init @ 0x08004e08 (size 172) =====

int sym.mpbe_earaio_init(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _obj.earaio_obj = 0xff;
    *0x8000650 = "boost";
    iVar1 = misc_register();
    if (iVar1 == 0) {
        iVar1 = kobject_uevent(CONCAT44(*0x8000004,_segment.ehdr),0);
        if (iVar1 == 0) {
            return 0;
        }
        misc_deregister(obj.earaio_obj);
        _printk(0x8000b91,iVar1);
    }
    else {
        _printk(0x8000882,iVar1);
    }
    _segment.ehdr = 0;
    return iVar1;
}


// ===== sym.mpbe_eara_ioctl_open @ 0x08004eb4 (size 56) =====

void sym.mpbe_eara_ioctl_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.mpbe_eara_ioctl_show.5794a837122c1c93504b539120499815.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.mpbe_eara_ioctl @ 0x08004eec (size 524) =====

ulong sym.mpbe_eara_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint uVar1;
    uint uVar2;
    uint16_t uVar3;
    ushort uVar4;
    uint16_t uVar5;
    code *pcVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    uint64_t uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    if (arg2 == 0x406c6702) {
        iVar9 = sym.eara_ioctl_copy_from_user(0x406c6702,arg3);
        if (iVar9 != 0) {
            uVar10 = 0xfffffffffffffff2;
            goto code_r0x0800509c;
        }
        iVar7 = uStack_c8;
        mutex_lock(obj.eara_ioctl_lock);
        if (iVar7 == 0) {
            sym.mpbe_earaio_boost(0);
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050f0);
                (*pcVar6)();
            }
        }
        else {
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050e0);
                (*pcVar6)();
            }
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
            if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80050e8);
                (*pcVar6)();
            }
            iVar7 = sym.mpbe_mictx_get_data(_segment.ehdr,&uStack_f8);
            if (iVar7 != 0) {
                sym.mpbe_mictx_enable(0x80005f0);
            }
        }
        mutex_unlock(obj.eara_ioctl_lock);
    }
    else {
        if (arg2 != 0x406c6701) {
            uVar10 = 0xffffffffffffffea;
            goto code_r0x0800509c;
        }
        mutex_lock(obj.eara_ioctl_lock);
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uVar8 = mutex_is_locked(obj.eara_ioctl_lock);
        if ((uVar8 & 1) == 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x80050d8);
            (*pcVar6)();
        }
        iVar7 = sym.mpbe_mictx_get_data(_segment.ehdr,&uStack_f8);
        if (iVar7 != 0) {
            sym.mpbe_mictx_enable(0x80005f0);
        }
        uVar10 = uStack_d8;
        uVar3 = uStack_d0;
        uVar1 = uStack_e0;
        uVar2 = uStack_e0._4_4_;
        uVar4 = uStack_d0._2_2_;
        uVar5 = uStack_d0._4_2_;
        mutex_unlock(obj.eara_ioctl_lock);
        uStack_c8 = CONCAT24(uVar4,uVar3);
        uStack_c0 = uVar10;
        uStack_b8 = CONCAT44(uVar1,uVar5);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
        sym.eara_ioctl_copy_to_user(arg3);
    }
    uVar10 = 0;
code_r0x0800509c:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    __stack_chk_fail(uVar10);
    return 0;
}


// ===== sym.mpbe_eara_ioctl_show @ 0x080050f8 (size 16) =====

ulong sym.mpbe_eara_ioctl_show(int64_t arg1)

{
    return 0;
}


// ===== sym.eara_ioctl_copy_to_user @ 0x08005108 (size 308) =====

void sym.eara_ioctl_copy_to_user(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = 0xffffffffffffff93 < uVar5;
    uVar5 = uVar5 + 0x6c;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_strcmp >> 0x18 & 1) == 0) {
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
        __arch_copy_to_user(arg1,in_x1,0x6c);
        if ((_strcmp >> 0x18 & 1) == 0) {
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
    return;
}


// ===== sym.eara_ioctl_copy_from_user @ 0x08005278 (size 320) =====

ulong sym.eara_ioctl_copy_from_user(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x0;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    uVar5 = 0x6c;
    bVar4 = 0xffffffffffffff93 < uVar6;
    uVar6 = uVar6 + 0x6c;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_strcmp >> 0x18 & 1) == 0) {
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
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        uVar5 = __arch_copy_from_user(in_x0,arg1,0x6c);
        if ((_strcmp >> 0x18 & 1) == 0) {
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
    return uVar5;
}


// ===== sym.mpbe_earaio_ctrl_sub_open @ 0x080053f4 (size 48) =====

void sym.mpbe_earaio_ctrl_sub_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_open(arg1,reloc.mpbe_seq_debug_start.cfi_jt);
    return;
}


// ===== sym.mpbe_earaio_ctrl_sub_write @ 0x08005424 (size 216) =====

int64_t sym.mpbe_earaio_ctrl_sub_write(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    bool bVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t in_x2;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    char acStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_28 = *(iVar10 + 0x5e0);
    acStack_2c[0] = '\0';
    if ((in_x2 != 0) && (arg1 = sym._copy_from_user(acStack_2c,arg2), -1 < arg1)) {
        if (acStack_2c[0] == '0') {
            sym.mpbe_earaio_boost(0);
            *0x80005ec = '\0';
            arg1 = _printk(0x8000a06);
            iVar10 = 1;
            goto code_r0x08005464;
        }
        if (acStack_2c[0] == '1') {
            iVar10 = 1;
            *0x80005ec = '\x01';
            arg1 = _printk(0x8000c72);
            goto code_r0x08005464;
        }
        arg1 = _printk(0x8000e17);
    }
    iVar10 = -1;
code_r0x08005464:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar10;
    }
    uVar7 = __stack_chk_fail(arg1);
    *extraout_x18 = sym.mpbe_earaio_ctrl_sub_show;
    pcStack_58 = sym.mpbe_earaio_ctrl_sub_show;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_78 = *0x8001070;
    uStack_70 = *0x8001078;
    puStack_60 = &stack0xffffffffffffffe0;
    iVar10 = sym.mpbe_find_by_type(_segment.ehdr);
    if (iVar10 != 0) {
        strncpy(&uStack_78,iVar10 + 0x10,0xf);
    }
    seq_puts(uVar7,"<MPBE Control Unit>\n");
    seq_printf(uVar7,"Monitor Storage Type: %s\n",&uStack_78);
    seq_puts(uVar7,"Status:\n");
    pcVar1 = "Disable";
    if (*0x80005ec != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(uVar7,"  MPBE Control     : %s\n",pcVar1);
    pcVar1 = "Disable";
    if (*0x80005ed != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(uVar7,"  MPBE DebugLog    : %s\n",pcVar1);
    seq_puts(uVar7,"Commands: echo n > ctrl, n presents\n");
    seq_puts(uVar7,"  Disable MPBE QoS     : 0\n");
    seq_puts(uVar7,"  Enable MPBE QoS      : 1\n");
    seq_puts(uVar7,"  Disable MPBE Log     : 2\n");
    seq_puts(uVar7,"  Enable MPBE Log      : 3\n");
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        auVar11 = __stack_chk_fail();
        uVar8 = auVar11._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar4 = sp_el0;
        uVar5 = (uVar8 << 8) >> 8;
        if (((*(puVar4 + 0x3e) >> 5 & 1) != 0) || (uVar9 = uVar8, (*puVar4 >> 0x1a & 1) != 0)) {
            uVar9 = uVar8 & uVar5;
        }
        bVar6 = 0xfffffffffffffffe < uVar9;
        uVar9 = uVar9 + 1;
        uVar2 = 0;
        if (!bVar6 || uVar9 == 0) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar6) {
            uVar9 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar9,~uVar2) || CARRY8(uVar9 + ~uVar2,bVar6)) && uVar9 != uVar2 + !bVar6) {
            iVar10 = 1;
        }
        else {
            if ((_strcmp >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar4[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar4[1];
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
            if ((uVar8 & uVar5 & 0xffffff8000000000) != 0) {
                uVar8 = 0;
            }
            iVar10 = __arch_copy_from_user(auVar11._0_8_,uVar8,1);
            if ((_strcmp >> 0x18 & 1) == 0) {
                uVar5 = daif;
                if ((uVar5 & 0x80) == 0) {
                    uVar8 = daif;
                    daif = uVar8 | 0xc0;
                }
                uVar8 = ttbr1_el1;
                ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar8 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar5;
            }
            if (iVar10 == 0) {
                return 0;
            }
        }
        memset((auVar11._0_8_ - iVar10) + 1,0,iVar10);
        return iVar10;
    }
    return 0;
}


// ===== sym.mpbe_earaio_ctrl_sub_show @ 0x080054fc (size 364) =====

int64_t sym.mpbe_earaio_ctrl_sub_show(int64_t arg1)

{
    char *pcVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = *0x8001070;
    uStack_40 = *0x8001078;
    iVar6 = sym.mpbe_find_by_type(_segment.ehdr);
    if (iVar6 != 0) {
        strncpy(&uStack_48,iVar6 + 0x10,0xf);
    }
    seq_puts(arg1,"<MPBE Control Unit>\n");
    seq_printf(arg1,"Monitor Storage Type: %s\n",&uStack_48);
    seq_puts(arg1,"Status:\n");
    pcVar1 = "Disable";
    if (*0x80005ec != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(arg1,"  MPBE Control     : %s\n",pcVar1);
    pcVar1 = "Disable";
    if (*0x80005ed != '\0') {
        pcVar1 = "Enable";
    }
    seq_printf(arg1,"  MPBE DebugLog    : %s\n",pcVar1);
    seq_puts(arg1,"Commands: echo n > ctrl, n presents\n");
    seq_puts(arg1,"  Disable MPBE QoS     : 0\n");
    seq_puts(arg1,"  Enable MPBE QoS      : 1\n");
    seq_puts(arg1,"  Disable MPBE Log     : 2\n");
    seq_puts(arg1,"  Enable MPBE Log      : 3\n");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar9 = __stack_chk_fail();
    uVar7 = auVar9._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar8 = uVar7 & uVar4;
    }
    bVar5 = 0xfffffffffffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar2 = 0;
    if (!bVar5 || uVar8 == 0) {
        uVar2 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar8 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar8,~uVar2) || CARRY8(uVar8 + ~uVar2,bVar5)) && uVar8 != uVar2 + !bVar5) {
        iVar6 = 1;
    }
    else {
        if ((_strcmp >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        iVar6 = __arch_copy_from_user(auVar9._0_8_,uVar7,1);
        if ((_strcmp >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
        if (iVar6 == 0) {
            return 0;
        }
    }
    memset((auVar9._0_8_ - iVar6) + 1,0,iVar6);
    return iVar6;
}


// ===== sym._copy_from_user @ 0x08005668 (size 364) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2)

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
    bVar4 = 0xfffffffffffffffe < uVar6;
    uVar6 = uVar6 + 1;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar6,~uVar1) || CARRY8(uVar6 + ~uVar1,bVar4)) && uVar6 != uVar1 + !bVar4) {
        iVar5 = 1;
    }
    else {
        if ((_strcmp >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(arg1,arg2,1);
        if ((_strcmp >> 0x18 & 1) == 0) {
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
        if (iVar5 == 0) {
            return 0;
        }
    }
    memset((arg1 - iVar5) + 1,0,iVar5);
    return iVar5;
}


// ===== sym.mpbe_trace_add_ufs @ 0x08005810 (size 208) =====

ulong sym.mpbe_trace_add_ufs(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    ulong uVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (*(_segment.ehdr + 0x40) != 0)) {
        arg2_00 = arg1 >> 5 & 0x7ff;
        if (arg2_00 < *(_segment.ehdr + 0x48)) {
            iVar2 = *(_segment.ehdr + 0x40) + arg2_00 * 0x370;
            if (iVar2 != 0) {
                uVar1 = _raw_spin_lock_irqsave(iVar2);
                sym.mpbe_mictx_eval_req(_segment.ehdr,arg2_00,arg2 & 1,arg3 & 0xffffffff);
                _raw_spin_unlock_irqrestore(iVar2,uVar1);
                return 1;
            }
        }
        else {
            _printk(0x80008a9,"mpbe_ufs_curr_ctx",arg1 & 0xffff);
        }
    }
    return 0;
}


// ===== sym.mpbe_ufs_clk_gating @ 0x080058e0 (size 12) =====

void sym.mpbe_ufs_clk_gating(void)

{
    return;
}


// ===== sym.mpbe_ufs_mictx_eval_wqd @ 0x080058ec (size 48) =====

uint64_t sym.mpbe_ufs_mictx_eval_wqd(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = arg2 - *(arg1 + 0x50);
    uVar1 = 0;
    if (uVar2 != 0) {
        uVar1 = (*(arg1 + 0x78) + ~*(arg1 + 0x80) + *(arg1 + 0x88) * arg2 + uVar2) / uVar2;
    }
    return uVar1;
}


// ===== sym.mpbe_trace_ufs_cmd @ 0x0800591c (size 1044) =====

ulong sym.mpbe_trace_ufs_cmd(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t *puVar1;
    int16_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    int16_t iVar7;
    uint16_t uVar8;
    bool bVar9;
    int iVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    ulong *in_x18;
    uint64_t uVar17;
    int64_t iVar18;
    int64_t iVar19;
    int64_t iVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80005ec == '\0') {
        return 1;
    }
    if (arg2 == 0) {
        return 0;
    }
    if (*(arg2 + 0x40) == 0) {
        return 0;
    }
    bVar9 = true;
    uVar6 = **(*(arg2 + 0x40) + 0x110);
    if (uVar6 < 0x2b) {
        if ((1L << (uVar6 & 0x3f) & 0x50000000500U) == 0) {
            if (uVar6 == 0) {
                return 0;
            }
            goto code_r0x08005b90;
        }
    }
    else {
code_r0x08005b90:
        if ((uVar6 != 0x88) && (uVar6 != 0x8a)) {
            bVar9 = false;
        }
    }
    iVar10 = _find_first_bit(arg1 + 0xd0,*(arg1 + 0xdc));
    iVar3 = *(arg1 + 0xdc);
    if (!bVar9) {
        return 0;
    }
    uVar4 = *(arg2 + 0x5c);
    uVar17 = uVar4;
    if ((arg3 & 1U) == 0) {
        if ((_segment.ehdr == 0) || (iVar19 = *(_segment.ehdr + 0x40), iVar19 == 0)) goto code_r0x08005cf8;
        uVar21 = uVar4 >> 5 & 0x7ff;
        if (*(_segment.ehdr + 0x48) <= uVar21) goto code_r0x08005ba8;
        iVar18 = iVar19 + uVar21 * 0x370;
        if (iVar18 == 0) goto code_r0x08005cf8;
        uVar17 = uVar17 & 0x1f;
        piVar2 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x38;
        if (piVar2 == NULL) goto code_r0x08005cf8;
        iVar20 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18;
        piVar15 = iVar20 + 0x40;
        if (*piVar15 == 0) goto code_r0x08005cf8;
        uVar11 = _raw_spin_lock_irqsave();
        iVar12 = sched_clock();
        iVar7 = *piVar2;
        piVar16 = iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x48;
        *piVar16 = iVar12;
    //switch table (35 cases) at 0x8001080
        switch(iVar7) {
        case 9:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
code_r0x08005c68:
            iVar12 = iVar19 + uVar21 * 0x370;
            *(iVar12 + 0x34c) = *(iVar12 + 0x34c) + 1;
            break;
        case 10:
        case 0x2a:
code_r0x08005bd8:
            iVar13 = 1;
            piVar14 = iVar19 + uVar21 * 0x370 + 0x360;
            goto code_r0x08005c00;
        default:
            if (iVar7 != 0x88) {
                if (iVar7 == 0x8a) goto code_r0x08005bd8;
                goto code_r0x08005c68;
            }
        case 8:
        case 0x28:
            iVar13 = 0;
            piVar14 = iVar19 + uVar21 * 0x370 + 0x350;
code_r0x08005c00:
            iVar23 = iVar19 + uVar21 * 0x370;
            iVar22 = *piVar15;
            *(iVar23 + 0x34c) = *(iVar23 + 0x34c) + 1;
            if (piVar14 != NULL) {
                uVar8 = *(iVar19 + uVar21 * 0x370 + uVar17 * 0x18 + 0x3a);
                *piVar14 = *piVar14 + (iVar12 - iVar22);
                iVar23 = _segment.ehdr;
                *(piVar14 + 1) = piVar14[1] + uVar8 * 0x1000;
                sym.mpbe_mictx_eval_tp(iVar23,uVar4 >> 5 & 0x7ff,iVar13,iVar12 - iVar22);
            }
        }
        iVar19 = iVar19 + uVar21 * 0x370;
        iVar12 = *(iVar19 + 0x28) - *piVar15;
        puVar1 = iVar19 + 0x30;
        *(iVar19 + 0x28) = iVar12;
        if (iVar10 < iVar3) {
            uVar17 = *puVar1 - 1;
            *puVar1 = *puVar1 - 1;
        }
        else {
            uVar17 = 0;
            *puVar1 = 0;
        }
        uVar4 = uVar4 >> 5 & 0x7ff;
        sym.mpbe_mictx_update(_segment.ehdr,uVar4,uVar17,iVar12);
        sym.mpbe_mictx_accumulate_weight_qd(_segment.ehdr,uVar4,*piVar15,*piVar16);
        *piVar15 = 0;
        *(iVar20 + 0x48) = 0;
    }
    else {
        iVar19 = *(arg2 + 0x40);
        if (((iVar19 == 0) || (_segment.ehdr == 0)) || (iVar20 = *(_segment.ehdr + 0x40), iVar20 == 0))
        goto code_r0x08005cf8;
        uVar21 = uVar4 >> 5 & 0x7ff;
        if (*(_segment.ehdr + 0x48) <= uVar21) {
code_r0x08005ba8:
            _printk(0x80008a9,"mpbe_ufs_curr_ctx",uVar17 & 0xffff);
            goto code_r0x08005cf8;
        }
        iVar18 = iVar20 + uVar21 * 0x370;
        if (iVar18 == 0) goto code_r0x08005cf8;
        puVar1 = iVar20 + uVar21 * 0x370 + (uVar17 & 0x1f) * 0x18 + 0x38;
        if (puVar1 == NULL) goto code_r0x08005cf8;
        if (iVar19 + -0x130 != 0) {
            sym.mpbe_commit_req(uVar17,iVar19 + -0x130);
        }
        iVar23 = iVar20 + uVar21 * 0x370;
        uVar5 = *(*(iVar19 + 0x110) + 2);
        iVar22 = iVar23 + (uVar17 & 0x1f) * 0x18;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        *(iVar22 + 0x3c) = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar8 = *(*(iVar19 + 0x110) + 7);
        *(iVar22 + 0x3a) = uVar8 >> 8 | uVar8 << 8;
        *puVar1 = **(iVar19 + 0x110);
        uVar11 = _raw_spin_lock_irqsave(iVar18);
        iVar12 = sched_clock();
        iVar13 = *(iVar23 + 0x10);
        iVar19 = *(iVar23 + 0x28);
        *(iVar22 + 0x40) = iVar12;
        *(iVar22 + 0x48) = 0;
        iVar19 = iVar19 + iVar12;
        *(iVar23 + 0x28) = iVar19;
        if (iVar13 == 0) {
            *(iVar23 + 0x10) = iVar12;
        }
        iVar20 = iVar20 + uVar21 * 0x370;
        uVar8 = *(iVar20 + 0x30) + 1;
        *(iVar20 + 0x30) = uVar8;
        sym.mpbe_mictx_update(_segment.ehdr,uVar4 >> 5 & 0x7ff,uVar8,iVar19);
    }
    _raw_spin_unlock_irqrestore(iVar18,uVar11);
code_r0x08005cf8:
    sym.mpbe_ufs_rq_check(*(arg2 + 0x5c),iVar10 < iVar3);
    return 0;
}


// ===== sym.mpbe_ufs_rq_check @ 0x08005d30 (size 288) =====

void sym.mpbe_ufs_rq_check(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t *puVar8;
    ulong *in_x18;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((_segment.ehdr != 0) && (iVar10 = *(_segment.ehdr + 0x40), iVar10 != 0)) {
        uVar4 = arg1 >> 5 & 0x7ff;
        uVar11 = uVar4;
        if (uVar4 < *(_segment.ehdr + 0x48)) {
            iVar9 = iVar10 + uVar4 * 0x370;
            if (iVar9 != 0) {
                uVar5 = sched_clock();
                uVar6 = _raw_spin_lock_irqsave(iVar9);
                iVar7 = iVar10 + uVar11 * 0x370;
                puVar8 = iVar7 + 8;
                uVar2 = *puVar8;
                uVar3 = *(iVar7 + 0x10);
                if (uVar2 != 0) {
                    uVar1 = uVar3;
                    if (uVar3 <= uVar2) {
                        uVar1 = uVar2;
                    }
                    iVar7 = iVar10 + uVar11 * 0x370;
                    *(iVar7 + 0x20) = (uVar5 - uVar1) + *(iVar7 + 0x20);
                }
                uVar2 = 0;
                if (arg2 != 0) {
                    uVar2 = uVar5;
                }
                *puVar8 = uVar2;
                if (999999999 < uVar5 - uVar3) {
                    iVar10 = iVar10 + uVar11 * 0x370;
                    *(iVar10 + 0x18) = uVar5;
                    *(iVar10 + 0x338) = uVar5 - uVar3;
                    queue_work_on(0x20,_segment.ehdr,obj.ufs_mpbe_worker);
                }
                _raw_spin_unlock_irqrestore(iVar9,uVar6);
            }
        }
        else {
            _printk(0x80008a9,"mpbe_ufs_curr_ctx",arg1 & 0xffff);
        }
    }
    return;
}


// ===== sym.mpbe_ufs_init @ 0x08005e50 (size 264) =====

ulong sym.mpbe_ufs_init(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint *puVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000600 = 0x101;
    _segment.ehdr = alloc_workqueue("ufs_mpbe",6,1);
    _obj.ufs_mpbe_worker = 0xfffffffe0;
    *0x80006b0 = 0x80006b0;
    *0x80006b8 = 0x80006b0;
    *0x80006c0 = sym.mpbe_ufs_work.dfdd96d099948463580d595c3bf4f651.cfi_jt;
    iVar2 = sym.mpbe_alloc(0x800080f,0,0x78,0x370);
    iVar1 = _segment.ehdr;
    if (iVar2 != 0) {
        iVar6 = *(iVar2 + 0x40);
        uVar3 = sched_clock();
        iVar1 = iVar2;
        if ((iVar6 != 0) && (memset(iVar6,0,*(iVar2 + 0x48) * 0x370), *(iVar2 + 0x48) != 0)) {
            uVar4 = 0;
            do {
                puVar5 = iVar6 + uVar4 * 0x370;
                uVar4 = uVar4 + 1;
                *puVar5 = 0;
                *(puVar5 + 4) = uVar3;
            } while (uVar4 < *(iVar2 + 0x48));
        }
    }
    _segment.ehdr = iVar1;
    return 0;
}


// ===== sym.mpbe_ufs_work @ 0x08005f58 (size 608) =====

void sym.mpbe_ufs_work(void)

{
    int64_t arg1;
    int64_t iVar1;
    int64_t iVar2;
    int64_t *arg1_00;
    int64_t iVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = _segment.ehdr + 0x28;
    if ((_segment.ehdr != 0 && arg1 != 0) && (*(_segment.ehdr + 0x48) != 0)) {
        uVar12 = 0;
        iVar1 = _segment.ehdr + 0x30;
        iVar13 = 0x350;
        do {
            uVar4 = _raw_spin_lock_irqsave(iVar1);
            piVar5 = sym.mpbe_curr_trace(arg1);
            if (piVar5 == NULL) {
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                return;
            }
            piVar5[0x14] = 0;
            piVar5[0x15] = 0;
            piVar5[0x12] = 0;
            piVar5[0x13] = 0;
            piVar5[0x10] = 0;
            piVar5[0x11] = 0;
            piVar5[0xe] = 0;
            piVar5[0xf] = 0;
            piVar5[0xc] = 0;
            piVar5[0xd] = 0;
            piVar5[10] = 0;
            piVar5[0xb] = 0;
            piVar5[8] = 0;
            piVar5[9] = 0;
            piVar5[6] = 0;
            piVar5[7] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            *piVar5 = 0;
            piVar5[1] = 0;
            *(piVar5 + 0xe) = 2;
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            if (_segment.ehdr == 0) {
                iVar11 = 0;
            }
            else {
                iVar11 = *(_segment.ehdr + 0x40);
            }
            iVar2 = iVar11 + iVar13;
            iVar10 = iVar2 + -0x350;
            uVar4 = _raw_spin_lock_irqsave(iVar10);
            iVar6 = sched_clock();
            uVar8 = iVar6 - *(iVar2 + -0x340);
            if (uVar8 < 1000000000) {
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
            }
            else {
                *(iVar2 + -0x18) = uVar8;
                *(piVar5 + 0xc) = 0;
                *(piVar5 + 1) = uVar12;
                *piVar5 = iVar6;
                iVar6 = *(iVar2 + -0x330);
                *(iVar2 + -0x10) = iVar6;
                if (iVar6 * 100 < *(iVar2 + -0x18)) {
                    uVar7 = 1;
                }
                else {
                    uVar7 = 0;
                    uVar9 = *(iVar2 + -0x18);
                    if (uVar9 != 0) {
                        uVar7 = iVar6 / uVar9;
                    }
                }
                arg1_00 = iVar11 + iVar13;
                *(arg1_00 + -1) = uVar7;
                sym.mpbe_throughput_eval(arg1_00);
                sym.mpbe_vmstat_eval(piVar5 + 9);
                sym.mpbe_cpu_eval(piVar5 + 0xf);
                iVar6 = arg1_00[3];
                iVar11 = *arg1_00;
                iVar3 = arg1_00[1];
                piVar5[7] = arg1_00[2];
                piVar5[8] = iVar6;
                piVar5[5] = iVar11;
                piVar5[6] = iVar3;
                iVar11 = arg1_00[-1];
                iVar6 = arg1_00[-3];
                piVar5[3] = arg1_00[-2];
                piVar5[4] = iVar11;
                piVar5[2] = iVar6;
                *(iVar2 + -0x340) = *piVar5;
                arg1_00[-0x67] = 0;
                arg1_00[-0x66] = 0;
                arg1_00[2] = 0;
                arg1_00[3] = 0;
                *arg1_00 = 0;
                arg1_00[1] = 0;
                arg1_00[-2] = 0;
                arg1_00[-1] = 0;
                arg1_00[-3] = 0;
                _raw_spin_unlock_irqrestore(iVar10,uVar4);
                uVar4 = _raw_spin_lock_irqsave(iVar1);
                if ((*(piVar5 + 0xe) >> 1 & 1) == 0) {
                    piVar5[0x14] = 0;
                    piVar5[0x15] = 0;
                    piVar5[0x12] = 0;
                    piVar5[0x13] = 0;
                    piVar5[0x10] = 0;
                    piVar5[0x11] = 0;
                    piVar5[0xe] = 0;
                    piVar5[0xf] = 0;
                    piVar5[0xc] = 0;
                    piVar5[0xd] = 0;
                    piVar5[10] = 0;
                    piVar5[0xb] = 0;
                    piVar5[8] = 0;
                    piVar5[9] = 0;
                    piVar5[6] = 0;
                    piVar5[7] = 0;
                    piVar5[4] = 0;
                    piVar5[5] = 0;
                    piVar5[2] = 0;
                    piVar5[3] = 0;
                    *piVar5 = 0;
                    piVar5[1] = 0;
                }
                else {
                    *(piVar5 + 0xe) = *(piVar5 + 0xe) | 1;
                    sym.mpbe_next_trace(arg1);
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
            }
            uVar12 = uVar12 + 1;
            iVar13 = iVar13 + 0x370;
        } while (uVar12 < *(_segment.ehdr + 0x48));
    }
    return;
}


// ===== sym.mpbe_ufs_exit @ 0x080061b8 (size 48) =====

ulong sym.mpbe_ufs_exit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.mpbe_free(_segment.ehdr);
    return 0;
}


// ===== sym.mpbe_ufs_seq_debug_show_info @ 0x080061e8 (size 16) =====

ulong sym.mpbe_ufs_seq_debug_show_info(void)

{
    return 0;
}


// ===== sym.init_module @ 0x08006204 (size 176) =====

ulong sym.init_module(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _segment.ehdr;
    _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
    if (uVar1 == 0) {
        _segment.ehdr = proc_mkdir("mpbe",0);
        iVar2 = proc_create("trace",0x8124,_segment.ehdr,obj.mpbe_main_fops);
        if (iVar2 == 0) {
            arg1 = _printk(0x80006c4,"mpbe_init_procfs");
        }
        else {
            arg1 = proc_set_user(iVar2,0,0x3e9);
        }
    }
    sym.mpbe_ufs_init(arg1);
    sym.mpbe_earaio_init();
    for_each_kernel_tracepoint(sym.lookup_tracepoints.29ecaa56f8c45d6ce23fcbf2ccab5a7a.cfi_jt,0);
    return 0;
}


// ===== sym.cleanup_module @ 0x080062b4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    proc_remove(_segment.ehdr);
    return;
}

